/-
  LeanFtml.HtmlSanitizeSketch — foundation unit F3 draft of the shared
  UTF-8 sanitizer refactor mandated by ADVISOR-PROOF-POLICY §5.1 item 3.
  Baseline proof-base-v1, snapshot-36 reference. SCRATCH DRAFT only: no
  canonical file is edited; adoption is a later coordinator decision.

  Current state (verified firsthand): RenderCore.lean:434-538 contains two
  copies of the same PHP ext/standard/html.c continuation-consumption loop —
  htmlSpecialCharsQuotesSubst (ENT_QUOTES|ENT_SUBSTITUTE) and
  htmlSpecialCharsNoQuotesSubst (ENT_NOQUOTES|ENT_SUBSTITUTE) — differing only
  in the per-ASCII escape function (escHtmlQuotesByte vs
  escHtmlNoQuotesByte). The escape decision is already factored; the UTF-8
  decision is not. The policy asks for one
  `utf8Sanitize (escAscii : Nat → List Nat) (bs : List Nat) : List Nat`,
  proved to reduce to `bs.flatMap escAscii` on every utf8Valid bs = true
  input (not only ASCII).

  This draft supplies the shared step and driver, re-expresses both public
  htmlSpecialChars*Subst functions through it, proves the ASCII universal
  reduction in Lean, and pins equality with the two existing loops at
  representative valid-multibyte and ill-formed byte strings by kernel
  reduction (`decide`). The two remaining universal obligations are stated
  explicitly below and are NOT claimed as proved here; there is no sorry,
  sorryAx, native_decide, bv_decide or Mathlib in this file. Prose is flowing
  paragraphs on single lines.
-/

import LeanFtml.RenderCore

namespace LeanFtml

/-- One shared UTF-8 sanitize step: from the head of `bs` consume exactly the
    bytes PHP's html.c consumes for a malformed or well-formed sequence and
    return `(emitted_bytes, unconsumed_tail)`. Valid multibyte sequences are
    emitted unchanged; ill-formed sequences become one U+FFFD; ASCII bytes go
    through `escAscii`. Every branch consumes at least one byte, so the
    length-fuelled driver below is total and fuel `bs.length` suffices. -/
def utf8SanitizeStep (escAscii : Nat → List Nat) (bs : List Nat) :
    List Nat × List Nat :=
  match bs with
  | [] => ([], [])
  | b :: rest =>
      if b < 0x80 then (escAscii b, rest)
      else if 0xC2 <= b && b < 0xE0 then
        match rest with
        | b2 :: rest' =>
            if isContByte b2 then ([b, b2], rest') else (utf8Fffd, rest)
        | [] => (utf8Fffd, [])
      else if 0xE0 <= b && b < 0xF0 then
        match rest with
        | b2 :: b3 :: rest' =>
            if isContByte b2 && isContByte b3 then
              let ok := (b != 0xE0 || 0xA0 <= b2) && (b != 0xED || b2 < 0xA0)
              if ok then ([b, b2, b3], rest') else (utf8Fffd, rest)
            else if isContByte b2 then (utf8Fffd, b3 :: rest')
            else (utf8Fffd, rest)
        | [b2] =>
            (utf8Fffd, if isContByte b2 then [] else [b2])
        | [] => (utf8Fffd, [])
      else if 0xF0 <= b && b <= 0xF4 then
        match rest with
        | b2 :: b3 :: b4 :: rest' =>
            if isContByte b2 && isContByte b3 && isContByte b4 then
              let ok := (b != 0xF0 || 0x90 <= b2) && (b != 0xF4 || b2 < 0x90)
              if ok then ([b, b2, b3, b4], rest') else (utf8Fffd, rest)
            else if isContByte b2 && isContByte b3 then (utf8Fffd, b4 :: rest')
            else if isContByte b2 then (utf8Fffd, b3 :: b4 :: rest')
            else (utf8Fffd, rest)
        | [b2, b3] =>
            if isContByte b2 && isContByte b3 then (utf8Fffd, [])
            else if isContByte b2 then (utf8Fffd, [b3])
            else (utf8Fffd, [b2, b3])
        | [b2] => (utf8Fffd, if isContByte b2 then [] else [b2])
        | [] => (utf8Fffd, [])
      else (utf8Fffd, rest)

/-- The single shared sanitizer driver. The fuel is the input length; each
    step consumes at least one byte (see the step's doc), so no input is left
    unprocessed. This replaces both duplicated loops of RenderCore. -/
def utf8Sanitize (escAscii : Nat → List Nat) (bs : List Nat) : List Nat :=
  go bs bs.length
where
  go : List Nat → Nat → List Nat
    | [], _ => []
    | _, 0 => []
    | bs, fuel + 1 =>
        let (out, rest) := utf8SanitizeStep escAscii bs
        out ++ go rest fuel

/-- The two public entry points reduced to their only remaining difference:
    which ASCII bytes are escaped. On adoption these definitions replace the
    two RenderCore loops verbatim at their existing call sites. -/
def htmlSpecialCharsQuotesSubstSketch (bs : List Nat) : List Nat :=
  utf8Sanitize escHtmlQuotesByte bs

def htmlSpecialCharsNoQuotesSubstSketch (bs : List Nat) : List Nat :=
  utf8Sanitize escHtmlNoQuotesByte bs

/-- Universal ASCII reduction of the shared driver: on an all-ASCII input
    every step emits `escAscii b` and consumes one byte, so the whole run is
    exactly `flatMap`. Kernel-proved, with no oracle or trust axiom. -/
theorem utf8Sanitize_allAscii (escAscii : Nat → List Nat) (bs : List Nat)
    (h : ∀ b ∈ bs, b < 0x80) :
    utf8Sanitize escAscii bs = bs.flatMap escAscii := by
  induction bs with
  | nil => simp [utf8Sanitize, utf8Sanitize.go]
  | cons b rest ih =>
      have hb : b < 0x80 := h b (by simp)
      have hr : ∀ x ∈ rest, x < 0x80 := by
        intro x hx
        exact h x (by simp [hx])
      simp [utf8Sanitize, utf8Sanitize.go, utf8SanitizeStep, hb]
      simpa [utf8Sanitize] using ih hr

/-- Ground pins: the shared driver agrees byte-for-byte with BOTH current
    RenderCore loops on a valid 2/3/4-byte payload with escapes, and on an
    ill-formed payload exercising continuation consumption and U+FFFD. -/
example :
    htmlSpecialCharsQuotesSubstSketch [0x26, 0x3C, 0xC3, 0xA4, 0xE2, 0x82, 0xAC] =
    htmlSpecialCharsQuotesSubst [0x26, 0x3C, 0xC3, 0xA4, 0xE2, 0x82, 0xAC] := by decide
example :
    htmlSpecialCharsNoQuotesSubstSketch [0xF0, 0x9F, 0x98, 0x80, 0x27, 0xFF] =
    htmlSpecialCharsNoQuotesSubst [0xF0, 0x9F, 0x98, 0x80, 0x27, 0xFF] := by decide

/- Adoption obligations (explicitly NOT claimed proved by this draft):

   O1. Prove `∀ bs, utf8Valid bs = true →
       utf8Sanitize esc bs = bs.flatMap esc` for every escAscii, per §5.1
       item 3. This needs a bridge lemma between the utf8Valid continuation
       state machine (TokenState.lean:373) and utf8SanitizeStep's consumed
       byte count; the ASCII case above is the base case of that bridge.

   O2. Prove the two sketch entry points equal the original RenderCore loops
       on all byte lists (including ill-formed ones), then delete the two
       duplicated loops and keep only the shared driver. Once O1 is proved,
       the valid-input half of O2 is immediate; the ill-formed half follows
       from utf8SanitizeStep being a byte-for-byte transcription of the
       ext/standard/html.c branch structure (the pins above check four
       representative witnesses by kernel reduction).

   Until O1/O2 are discharged in the canonical tree, this sketch is evidence
   that the refactor is structurally sound, not a proof of it.
-/

#print axioms utf8Sanitize_allAscii

end LeanFtml
