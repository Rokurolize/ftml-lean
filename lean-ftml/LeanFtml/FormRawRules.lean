/-
  LeanFtml.FormRawRules — R3.2 mirrors of the Form, Raw, and
  Rawold parse rules (pipeline positions 5, 6, 7, after Code),
  modelled from the reference's corrected rule files
  (ref-php/text-wiki/Text/Wiki/Parse/Default/{Form,Raw,Rawold}.php)
  read together with the R2 stage record
  (conformance-refphp/R2-FORM-RAW.md and the formraw/ materials).

  ## The byte-form obligation, and how it is discharged

  These are the first rules whose pipeline position follows a
  token-producing rule (Code), so the obligation recorded in
  TokenState.lean and REPORT-R31.md binds: in the reference, each
  of these rules operates on the whole current source as a byte
  string, placeholders included — Raw's parse() is a hand-written
  scanner over `$this->wiki->source`, and Form and Rawold run
  through the base class's `preg_replace_callback` over the same
  string. All three mirrors below therefore work on the state's
  byte form (`byteForm`), and `applyByteRule` splits the rewritten
  byte string back into segments. Placeholder bytes inside the
  scanned string are ordinary bytes to these patterns: none of
  them can match `@` (64), a backtick (96), an apostrophe (39), a
  newline (10), or any literal byte of `[[form]]` / `[[/form]]`,
  so placeholders are inert during matching; what they can do is
  end up inside a claimed text, which the per-rule notes below
  settle.

  * Raw: a claimed body never contains a placeholder. Every
    Code placeholder in the working source is immediately
    preceded by a `\n` byte (Code's replacement text is `"\n\n"`
    before the placeholder), and a Form block's placeholders are
    joined by `\n`, so each is immediately preceded by a `\n`
    except the block's first, which is immediately followed by a
    `\n` join instead; a body the scanner claims is newline-free
    (the newline-abort branch and the trimmed cross-line branch
    see to that), cannot start at a placeholder (the byte before
    one is a `\n` or body text, never the second `@` of an opener
    run), and cannot contain a Form block's first placeholder
    (the `\n` join would follow inside it, and ending exactly
    there would require the closer where the join sits). So Raw
    token texts always decode as text. Probes in the stage
    record: a raw span across a code block aborts and leaves both
    `@@` literal; a raw span around a form block likewise.
  * Rawold: the body class `[^']` admits newlines and placeholder
    bytes alike, and a body spanning a code or form placeholder
    does occur (stage probes). The claimed text is then a PHP
    byte string containing `\xFF<index>\xFF`, held here as
    `OptVal.bytes`; the state is real in the reference but the
    conformance protocol cannot carry it (the PHP driver's
    `json_encode` fails), so both drivers emit an error record
    for such a case and the comparison counts them as
    unrepresentable on both sides.
  * Form: the matched block is split into lines, and a line can
    be exactly a code placeholder (a code block claimed at a line
    start inside a form block leaves its placeholder alone on a
    line, because Code's replacement pads it with newlines), or
    contain one. Same `OptVal.bytes` disposition as Rawold.

  ## What is modelled

  Raw's parse() is translated mechanically, statement by statement
  (the fossil regex in the file is retained only for inventory
  tools; the corrected rule never uses it). Form and Rawold use
  the base class mechanism, so their matchers are explicit
  backtracking enumerations in PCRE's priority order, in the style
  of CodeRule: Form's pattern is
  `/\[\[form\]\]\s*\n(.*?)(?:\n---\s*\n(.*?))?\n\[\[\/form\]\]/is`
  and only the match extent matters (process() uses $matches[0]
  alone), so the enumerator searches extents, not group values;
  Rawold's is `/(?<!`)``([^']*[^`])``/U`, whose lazy body is
  enumerated by growing the `[^']*` prefix one byte at a time.
  `process()` for Form claims one Form token per line of the match
  (`text`, or `blank` = 1 for an empty line), the lines rejoined by
  `\n` bytes around the placeholders; for Rawold it claims the
  body. preg_replace_callback semantics (leftmost match, subject
  offsets, replacement never rescanned) are the scan loops below.
-/

import LeanFtml.TokenState
import LeanFtml.FrameRules
import LeanFtml.CodeRule

namespace LeanFtml

/-! ## Byte-form plumbing -/

/-- Placeholder bytes for token index `n`: delimiter byte, decimal
    digits, delimiter byte — `segBytes` of a `TSeg.tok`, as a
    standalone byte string for splicing into a rewritten source. -/
def phBytes (n : Nat) : List Nat :=
  [0xFF] ++ (toString n).toList.map Char.toNat ++ [0xFF]

/-- Read a placeholder at the head of a byte string: delimiter,
    one or more decimal digits, delimiter. Returns the index and
    the remaining bytes. -/
def readPlaceholder (bs : List Nat) : Option (Nat × List Nat) :=
  match bs with
  | 0xFF :: rest =>
      let ds := rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)
      if ds.isEmpty then none
      else
        match rest.drop ds.length with
        | 0xFF :: rest' =>
            some (ds.foldl (fun a d => a * 10 + (d - 48)) 0, rest')
        | _ => none
  | _ => none

/-- Split a byte-form string back into segments: the inverse of
    `byteForm` on reachable states, and the same recovery the PHP
    state driver performs when it splits the reference's source at
    delimiter bytes. A delimiter byte that does not open a
    well-formed placeholder is treated as text; reachable byte
    strings contain none in text (no character's UTF-8 encoding
    contains 0xFF — `utf8Bytes_no_ff` below — and placeholders are
    well-formed by construction). -/
def parseBytes (bs : List Nat) : List TSeg :=
  go bs [] [] (bs.length + 1)
where
  go : List Nat → List Nat → List TSeg → Nat → List TSeg
    | [], acc, segs, _ =>
        normSegs (segs ++
          (if acc.isEmpty then [] else [TSeg.text (utf8Decode acc.reverse)]))
    | _, acc, segs, 0 =>
        normSegs (segs ++
          (if acc.isEmpty then [] else [TSeg.text (utf8Decode acc.reverse)]))
    | bs@(b :: rest), acc, segs, fuel + 1 =>
        if b == 0xFF then
          match readPlaceholder bs with
          | some (n, rest') =>
              go rest' []
                (segs ++
                  (if acc.isEmpty then [] else [TSeg.text (utf8Decode acc.reverse)]) ++
                  [TSeg.tok n]) fuel
          | none => go rest (b :: acc) segs fuel
        else go rest (b :: acc) segs fuel

/-- Run a byte-level rule mirror: take the state to its byte form,
    apply the rule (which reads and rewrites the whole source and
    appends its tokens), and split the result back into segments.
    This is the reference's own data flow for these rules: the
    rule's parse() reads `$this->wiki->source` once and writes the
    rewritten string back. -/
def applyByteRule (st : ParseState)
    (f : List Nat → List TokenEntry → List Nat × List TokenEntry) :
    ParseState :=
  let (bs', toks') := f (byteForm st.work) st.tokens
  { st with work := parseBytes bs', tokens := toks' }

/-- The option value for a claimed text: the bytes decode to text,
    unless they contain a placeholder's delimiter byte, in which
    case the value is the byte string itself (`OptVal.bytes`). -/
def textVal (bs : List Nat) : OptVal :=
  if bs.contains 0xFF then OptVal.bytes bs else OptVal.str (utf8Decode bs)

/-- Claim a token whose only option is `text` (the token shape of
    all three rules in this stage); returns the placeholder bytes
    to splice into the rewritten source and the extended table. -/
def claimText (rule : String) (text : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  (phBytes toks.length,
   toks ++ [{ rule := rule, opts := [("text".toList, textVal text)] }])

/-! ## Byte utilities for the scanners -/

/-- The first index at which `pat` occurs in `src`, if any
    (PHP's `strpos` over the suffix it is given). -/
def findSub (pat : List Nat) : List Nat → Option Nat
  | [] => if pat.isEmpty then some 0 else none
  | src@(_ :: rest) =>
      if src.take pat.length == pat then some 0
      else (findSub pat rest).map (· + 1)

/-- The length of the maximal run of byte `b` at the head. -/
def countRun (b : Nat) : List Nat → Nat
  | [] => 0
  | x :: rest => if x == b then countRun b rest + 1 else 0

/-- Swap the case of an ASCII letter byte; identity otherwise. -/
def swapByteCase (b : Nat) : Nat :=
  if 97 ≤ b && b ≤ 122 then b - 32
  else if 65 ≤ b && b ≤ 90 then b + 32
  else b

/-- Does byte `x` match the literal byte `lit` under PCRE's ASCII
    case folding (the /i modifier in byte mode)? -/
def byteCiEq (x lit : Nat) : Bool :=
  x == lit || x == swapByteCase lit

/-- If `src` starts with the literal `pat` (matched
    case-insensitively), return the rest of `src`. -/
def matchLitCI : List Nat → List Nat → Option (List Nat)
  | [], src => some src
  | _ :: _, [] => none
  | p :: pat, x :: src => if byteCiEq x p then matchLitCI pat src else none

/-- If `src` starts with the literal `pat` (exact bytes), return
    the rest of `src`. -/
def matchLitBytes : List Nat → List Nat → Option (List Nat)
  | [], src => some src
  | _ :: _, [] => none
  | p :: pat, x :: src => if x == p then matchLitBytes pat src else none

/-- PCRE `\s` in byte mode: space, tab, LF, VT, FF, CR. -/
def isWsByte (b : Nat) : Bool :=
  b == 32 || b == 9 || b == 10 || b == 11 || b == 12 || b == 13

/-- The rests after a `\s*\n` match at the head of `src`, in
    PCRE's greedy order: `\s*` first takes the maximal whitespace
    run, then gives back one byte at a time, so the candidates are
    the run's newline positions from last to first, each consuming
    through that newline. (The byte after the run is not
    whitespace, so it cannot be the `\n` the pattern needs.) -/
def wsNlRests (src : List Nat) : List (List Nat) :=
  let runLen := countWs src
  let run := src.take runLen
  let nlIdx := (List.range runLen).filter (fun l => run[l]? == some 10)
  nlIdx.reverse.map (fun l => src.drop (l + 1))
where
  countWs : List Nat → Nat
    | [] => 0
    | b :: rest => if isWsByte b then countWs rest + 1 else 0

/-- Split bytes at every occurrence of `b` (PHP's `explode`:
    always at least one part, empty parts kept). -/
def splitBytes (b : Nat) : List Nat → List (List Nat)
  | [] => [[]]
  | x :: rest =>
      match splitBytes b rest with
      | [] => [[x]]
      | p :: ps => if x == b then [] :: p :: ps else (x :: p) :: ps

/-! ## Raw -/

/-- The Raw rule's scanner over the byte form: a mechanical
    translation of the reference's parse(), which walks the source
    with an index, a previous-byte lookbehind, and `strpos` closer
    searches. `prev` is the source byte immediately before `src`
    (`none` at offset 0); every branch's continuation passes the
    last consumed source byte, so the lookbehind is always the
    subject byte, never an emitted one. PHP's clamped
    `max(0, run - 4)` counts are Nat subtraction here, which
    truncates identically. -/
def rawScan (prev : Option Nat) (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => ([], toks)
  | fuel + 1 =>
    match src with
    | [] => ([], toks)
    | b :: rest =>
      if !(b == 64 && rest.head? == some 64 && prev != some 64) then
        -- copy one byte verbatim (not an opener: wrong byte, no
        -- second '@', or the previous byte is '@')
        let (o, t) := rawScan (some b) rest toks fuel
        (b :: o, t)
      else
        let run := countRun 64 src
        let afterRun := src.drop run
        -- The early exit of the reference's run>2 block. A bare
        -- run collapses by four (with a bare three-run kept whole);
        -- with a closer past the line end the exit applies only to
        -- run>=4, so a three-run still reaches the cross-line branch.
        let preOk : Bool :=
          if run > 2 then
            match findSub [64, 64] afterRun, findSub [10] afterRun with
            | none, _ => false
            | some _, none => true
            | some c, some l => run < 4 || c < l
          else true
        if run > 2 && !preOk then
          if run == 3 then
            let (o, t) := rawScan (some 64) afterRun toks fuel
            (List.replicate 3 64 ++ o, t)
          else
            -- REFCORR5 Batch 6: one empty Raw token for a 4+ run, then the
            -- run-4 literal @ bytes; the token advances later indices by one.
            let (emptyTok, toks') := claimText "Raw" [] toks
            let (o, t) := rawScan (some 64) afterRun toks' fuel
            (emptyTok ++ List.replicate (run - 4) 64 ++ o, t)
        else
          match findSub [64, 64] afterRun with
          | none =>
              -- unterminated opener: emitted literally
              let (o, t) := rawScan (some 64) afterRun toks fuel
              (List.replicate run 64 ++ o, t)
          | some c =>
              let body := afterRun.take c
              let afterBody := afterRun.drop c
              let closeRun := countRun 64 afterBody
              let afterClose := afterBody.drop closeRun
              -- REFCORR5 Batch 6: a 4+ opener whose would-be closer is
              -- itself 4+ is two empty-Raw constructs (the p22/raw-quad
              -- shape), each contributing one token plus literal bytes.
              if 4 <= run && 4 <= closeRun then
                let (emptyTok, toks') := claimText "Raw" [] toks
                let (o, t) := rawScan (some 64) afterRun toks' fuel
                (emptyTok ++ List.replicate (run - 4) 64 ++ o, t)
              else if body.getLast? == some 10 && 2 ≤ closeRun &&
                  !(body.dropLast.contains 10) then
                -- cross-line span closed by a run of 2 or more
                -- '@'. The body ends in exactly one newline (no
                -- rtrim of several); a three-run opener's extra
                -- '@' belongs to the token text; and a closer
                -- run beyond two emits one space followed by the
                -- surplus literal '@' bytes.
                let trimmed := body.dropLast
                let extra : List Nat :=
                  if 2 < closeRun then 32 :: List.replicate (closeRun - 2) 64 else []
                if trimmed.isEmpty then
                  let (o, t) := rawScan (some 64) afterClose toks fuel
                  (32 :: (extra ++ o), t)
                else
                  let text := (if (run - 2) == 1 then [64] else []) ++ trimmed
                  let (ph, t1) := claimText "Raw" text toks
                  let (o, t) := rawScan (some 64) afterClose t1 fuel
                  (ph ++ extra ++ o, t)
              else if body.contains 10 then
                -- a span containing a newline aborts: the opener
                -- run is literal and scanning resumes after it,
                -- so a '@@' further along can still open a span
                let (o, t) := rawScan (some 64) afterRun toks fuel
                (List.replicate run 64 ++ o, t)
              else
                let lead := run - 2
                let trail := closeRun - 2
                if body.isEmpty then
                  -- pure '@' runs: up to four vanish, five leave
                  -- one, longer runs shed four
                  let total := run + closeRun
                  let emit : List Nat :=
                    if total ≤ 4 then []
                    else if total == 5 then [64]
                    else List.replicate (total - 4) 64
                  let (o, t) := rawScan (some 64) afterClose toks fuel
                  (emit ++ o, t)
                else if 2 ≤ lead then
                  -- extra opener '@'s beyond two stay literal before the
                  -- plain body. REFCORR8 C-R5-P3-1: a bare three-run closer
                  -- (trail == 1, i.e. closeRun == 3) after a 4+ opener is
                  -- literal too, so @@@@ZQ@@@ renders ZQ@@@; every other
                  -- closer run keeps the established trail-2 shaping.
                  let (o, t) := rawScan (some 64) afterClose toks fuel
                  (List.replicate (lead - 2) 64 ++ body ++
                    List.replicate (if trail == 1 then 3 else trail - 2) 64 ++ o, t)
                else if 2 ≤ trail then
                  -- a closer run of 4+ is an empty raw followed by
                  -- an opener: the body is claimed and the full
                  -- trail count stays literal
                  let (ph, t1) := claimText "Raw" body toks
                  let (o, t) := rawScan (some 64) afterClose t1 fuel
                  (ph ++ List.replicate trail 64 ++ o, t)
                else
                  -- the plain claim; a single extra '@' on either
                  -- side joins the token text
                  let text := (if lead == 1 then [64] else []) ++ body
                  let (ph, t1) := claimText "Raw" text toks
                  let (o, t) := rawScan (some 64) afterClose t1 fuel
                  (ph ++ (if trail == 1 then [64] else []) ++ o, t)

/-- The Raw rule mirror: the byte scanner over the whole working
    source. -/
def rawRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks => rawScan none src toks (src.length + 1))

/-! ## Rawold -/

/-- A Rawold match at the head of `src` (which must open with two
    backticks): the pattern is ` ``([^']*[^`])`` `, so the body is
    a possibly-empty apostrophe-free prefix grown one byte at a
    time, then one non-backtick byte, then two backticks. Returns
    the body bytes. An apostrophe can serve as the final byte but
    never enters the prefix, which is what bounds the search. -/
def rawoldBody : List Nat → Option (List Nat)
  | 96 :: 96 :: rest => go rest []
  | _ => none
where
  go : List Nat → List Nat → Option (List Nat)
    | [], _ => none
    | c :: rest, acc =>
        let here : Option (List Nat) :=
          if c != 96 then
            match rest with
            | 96 :: 96 :: _ => some (acc ++ [c])
            | _ => none
          else none
        match here with
        | some g1 => some g1
        | none =>
            if c == 39 then none
            else go rest (acc ++ [c])

/-- The Rawold rule's scanner: preg_replace_callback semantics
    over the byte form. The `(?<!`)` lookbehind is `prev`, the
    subject byte before the candidate position. -/
def rawoldScan (prev : Option Nat) (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => ([], toks)
  | fuel + 1 =>
    match src with
    | [] => ([], toks)
    | b :: rest =>
        let attempt : Option (List Nat) :=
          if prev != some 96 && b == 96 && rest.head? == some 96 then
            rawoldBody src
          else none
        match attempt with
        | some g1 =>
            let (ph, t1) := claimText "Rawold" g1 toks
            let (o, t) :=
              rawoldScan (some 96) (src.drop (g1.length + 4)) t1 fuel
            (ph ++ o, t)
        | none =>
            let (o, t) := rawoldScan (some b) rest toks fuel
            (b :: o, t)

/-- The Rawold rule mirror. -/
def rawoldRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks => rawoldScan none src toks (src.length + 1))

/-! ## Form -/

/-- The `[[form]]` opener literal, as bytes. -/
def formOpenBytes : List Nat := "[[form]]".toList.map Char.toNat

/-- The `[[/form]]` closer literal, as bytes. -/
def formCloseBytes : List Nat := "[[/form]]".toList.map Char.toNat

/-- Does `src` start with the pattern tail `\n[[/form]]`
    (the closer literal matched case-insensitively)? -/
def formCloserAt (src : List Nat) : Bool :=
  match src with
  | 10 :: rest => (matchLitCI formCloseBytes rest).isSome
  | _ => false

/-- After a group boundary at `r` (the subject right where group 1
    ended), try to complete the match: first the optional
    separator group in PCRE's order — `\n---`, then `\s*\n` in
    greedy order, then group 2 grown lazily with the closer
    checked at each length — then the group absent (the closer
    immediately). Returns the subject after the whole match. -/
def formAfterSep (r : List Nat) : Option (List Nat) :=
  let present : Option (List Nat) :=
    match r with
    | 10 :: rest =>
        match matchLitBytes [45, 45, 45] rest with
        | none => none
        | some r2 =>
            (wsNlRests r2).findSome? (fun r3 =>
              (List.range (r3.length + 1)).findSome? (fun g2 =>
                let c := r3.drop g2
                if formCloserAt c then some (c.drop (1 + formCloseBytes.length))
                else none))
    | _ => none
  match present with
  | some e => some e
  | none => if formCloserAt r then some (r.drop (1 + formCloseBytes.length)) else none

/-- A form-block match at the head of `src`: returns the number of
    bytes the whole match consumes. The pattern is
    `/\[\[form\]\]\s*\n(.*?)(?:\n---\s*\n(.*?))?\n\[\[\/form\]\]/is`;
    the enumeration order is PCRE's: the first `\s*\n` in greedy
    order, group 1 grown lazily, and at each group-1 length the
    separator group tried before its absence. Only the extent is
    returned: process() uses $matches[0] alone. -/
def formMatchAt (src : List Nat) : Option Nat :=
  match matchLitCI formOpenBytes src with
  | none => none
  | some r0 =>
      (wsNlRests r0).findSome? (fun r1 =>
        (List.range (r1.length + 1)).findSome? (fun g =>
          (formAfterSep (r1.drop g)).map (fun e => src.length - e.length)))

/-- C-SUSPECT-XRULE-2: strip delimiter-wrapped decimal placeholders from a
    Form body line before it is stored, as the PHP `preg_replace` does. A
    delimiter byte that does not open a well-formed placeholder stays text. -/
def stripFormPlaceholders (bs : List Nat) : List Nat :=
  go bs (bs.length + 1)
where
  go : List Nat → Nat → List Nat
    | [], _ => []
    | _, 0 => []
    | b :: rest, fuel + 1 =>
        if b == 0xFF then
          let ds := rest.takeWhile (fun x => 48 <= x && x <= 57)
          if ds.isEmpty then b :: go rest fuel
          else match rest.drop ds.length with
               | 0xFF :: after => go after fuel
               | _ => b :: go rest fuel
        else b :: go rest fuel

/-- process() for a matched form block: split the whole match on
    newline bytes and claim one Form token per line — `text` for a
    nonempty line, `blank` = 1 for an empty one — the replacement
    being the placeholders joined by newline bytes. C-SUSPECT-XRULE-2:
    earlier-rule placeholders are stripped from each line first, so an
    emptied line takes the blank branch. -/
def formProcess (matched : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  go (splitBytes 10 matched) toks []
where
  go : List (List Nat) → List TokenEntry → List (List Nat) →
      List Nat × List TokenEntry
    | [], t, parts => (List.intercalate [10] parts.reverse, t)
    | line :: rest, t, parts =>
        let clean := stripFormPlaceholders line
        if clean.isEmpty then
          let ph := phBytes t.length
          go rest
            (t ++ [{ rule := "Form", opts := [("blank".toList, OptVal.int 1)] }])
            (ph :: parts)
        else
          let (ph, t1) := claimText "Form" clean t
          go rest t1 (ph :: parts)

/-- The Form rule's scanner: preg_replace_callback semantics over
    the byte form (leftmost match, subject offsets, replacements
    never rescanned). -/
def formScan (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => ([], toks)
  | fuel + 1 =>
    match src with
    | [] => ([], toks)
    | b :: rest =>
        match formMatchAt src with
        | some consumed =>
            let (repl, t1) := formProcess (src.take consumed) toks
            let (o, t) := formScan (src.drop consumed) t1 fuel
            (repl ++ o, t)
        | none =>
            let (o, t) := formScan rest toks fuel
            (b :: o, t)

/-- The Form rule mirror. -/
def formRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks => formScan src toks (src.length + 1))

/-! ## Theorems -/

/-- No character's UTF-8 encoding contains the byte 0xFF: the
    lead bytes top out at 0xF4 (0xF0 + 0x10FFFF / 0x40000) and
    continuation bytes at 0xBF, so the placeholder delimiter byte
    can never appear inside text. This is what licenses
    `parseBytes`' split and the state driver's. -/
theorem utf8Bytes_no_ff (c : Char) : 0xFF ∉ utf8Bytes c := by
  have hn : c.toNat < 0x110000 := by
    have hv := c.valid
    have hbridge : c.toNat = c.val.toNat := rfl
    omega
  show (0xFF : Nat) ∉ (if c.toNat < 128 then [c.toNat]
    else if c.toNat < 2048 then [192 + c.toNat / 64, 128 + c.toNat % 64]
    else if c.toNat < 65536 then
      [224 + c.toNat / 4096, 128 + c.toNat / 64 % 64, 128 + c.toNat % 64]
    else
      [240 + c.toNat / 262144, 128 + c.toNat / 4096 % 64,
        128 + c.toNat / 64 % 64, 128 + c.toNat % 64])
  by_cases h1 : c.toNat < 128
  · rw [if_pos h1]
    simp only [List.mem_singleton]
    omega
  · rw [if_neg h1]
    by_cases h2 : c.toNat < 2048
    · rw [if_pos h2]
      simp only [List.mem_cons, List.not_mem_nil, or_false]
      omega
    · rw [if_neg h2]
      by_cases h3 : c.toNat < 65536
      · rw [if_pos h3]
        simp only [List.mem_cons, List.not_mem_nil, or_false]
        omega
      · rw [if_neg h3]
        simp only [List.mem_cons, List.not_mem_nil, or_false]
        omega

/-- On a source with no `@` byte at all, Raw's scanner is the
    identity: no opener can start, so every byte is copied and no
    token is claimed. -/
theorem rawScan_no_at : ∀ (fuel : Nat) (prev : Option Nat)
    (src : List Nat) (toks : List TokenEntry), 64 ∉ src →
    src.length ≤ fuel → rawScan prev src toks fuel = (src, toks) := by
  intro fuel
  induction fuel with
  | zero =>
      intro prev src toks h hfuel
      have hnil : src = [] :=
        List.eq_nil_of_length_eq_zero (Nat.eq_zero_of_le_zero hfuel)
      simp [hnil, rawScan]
  | succ f ih =>
      intro prev src toks h hfuel
      obtain _ | ⟨b, rest⟩ := src
      · simp [rawScan]
      · have hb : b ≠ 64 :=
          fun e => h (List.mem_cons.2 (Or.inl e.symm))
        have hrest : 64 ∉ rest :=
          fun hm => h (List.mem_cons.2 (Or.inr hm))
        have hlen : rest.length ≤ f := by
          have h2 := hfuel
          simp only [List.length_cons] at h2
          omega
        have hcond : (b == 64 && rest.head? == some 64 &&
            prev != some 64) = false := by simp [hb]
        have step := ih (some b) rest toks hrest hlen
        simp [rawScan, hcond, step]

/-- A bare run of exactly three '@' bytes is kept whole (the
    C-SUSPECT-RAWHEAD-1 case): with no closer the early exit keeps
    all three rather than shedding four, and no token is claimed.
    The lookbehind may block the opener, in which case the three
    bytes are copied one at a time; either way the scan is an
    identity on this source. -/
theorem rawScan_bare_at3 (prev : Option Nat) (toks : List TokenEntry) (fuel : Nat) :
    rawScan prev [64, 64, 64] toks (fuel + 3) = ([64, 64, 64], toks) := by
  have hnil : ∀ (f : Nat) (p : Option Nat) (t : List TokenEntry),
      rawScan p [] t f = ([], t) := by
    intro f
    induction f with
    | zero => simp [rawScan]
    | succ f ih => intro p t; simp [rawScan, ih]
  cases prev with
  | none => simp [rawScan, findSub, countRun, hnil]
  | some p =>
      by_cases hp : p == 64 <;> simp [rawScan, findSub, countRun, hnil, hp]

end LeanFtml
