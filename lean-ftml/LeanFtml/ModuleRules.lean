/-
  LeanFtml.ModuleRules — the R3.3 mirrors of the Module family:
  Modulepre, Module, and Module654, in pipeline order.

  The mirrors are written from the corrected rule files
  (conformance-refphp/R2-MODULE.md and the per-rule SECTION.md
  files are the correction record; CORRECTION-F13.md is the
  nested-opener correction). The three rules share one opener
  head — literal, one whitespace byte, a name run, an optional
  lazy attribute group ending at `]]` — and differ in the tail,
  the body group, and what process() does with a match:

    * Modulepre claims nothing: process() returns the match with
      its leading `[[module654` rewritten to `[[module` (a
      case-sensitive replacement; an opener matched only through
      the pattern's case folding keeps its spelling), so every
      lowercase module654 opener becomes a module opener before
      Module runs.
    * Module loops whole preg_replace_callback passes until a
      pass leaves the source unchanged, and its process() carries
      the defense: a match whose text contains more than one
      opener head (preg_match_all of the opener-only pattern) is
      returned with its leading `[[module` rewritten to
      `[[module654` and claims nothing; a single-opener match
      claims one Module token (moduleName, attr, module_body,
      each trimmed) and is replaced by "\n\n" around the
      placeholder. The body group is `(.+?)` (correction C2): a
      closer immediately at the body start is consumed as the
      body's first byte, and a match with no later closer has no
      body group at all.
    * Module654 claims the same token shape under the rule name
      Module654, in a single pass, with no defense; its body
      group is `(.*?)`, so an immediately following closer gives
      an empty body that still participates. Its tail admits
      tabs as well as spaces before the newline (correction C1);
      Module's admits spaces only.

  CORRECTION-F13.md's rule — consumption through trailing closers
  happens only when the body contains a nested module opener —
  is not a special case in these mirrors: it falls out of the
  composition (Modulepre's rewrite, Module's loop plus defense,
  Module654's plain claim), exactly as the correction record says
  it falls out of the reference's own mechanisms. The xbattery
  cases are its conformance pins.

  Byte-form obligation (R3.1's rule, binding here): all three
  rules run after token-producing rules, so the mirrors work on
  the byte form through `applyByteRule`, like Form, Raw, and
  Rawold. Placeholder interactions, per rule:

    * A match can never start or end inside a placeholder: match
      boundaries are the ASCII opener literal at a line start,
      `]]`, a newline, and the ASCII closer literal; a placeholder
      contains none of those bytes and no newline, so no line
      start falls inside one either.
    * Attribute strings and bodies routinely span whole
      placeholders (a Raw placeholder inside an opener line's
      attribute area; Code, Form, and Raw placeholders inside
      bodies — the xbattery's nested shapes are exactly this).
      Such values are `OptVal.bytes`, compared by content since
      the R3.3 wire encoding (Part 1 of the stage) retired the
      unrepresentable verdict; the nine full-pipeline fixture
      records probe-source.php could not serialize are these
      shapes.
    * The defense's opener count runs over the matched byte text,
      placeholders included; a placeholder contains no `[` byte,
      so it can neither open nor hide an opener head.

  The ModuleManager stub in the harness (nine known names) plays
  no part here: no parse rule consults it (it is render-side
  only), so no mirror's behavior depends on the stub's name list;
  the restricted oracle inherits the stub unchanged, as adopted.
-/

import LeanFtml.TokenState
import LeanFtml.FrameRules
import LeanFtml.CodeRule
import LeanFtml.FormRawRules

namespace LeanFtml

/-- The bytes of a string literal, for the rules' ASCII literals. -/
def litBytes (s : String) : List Nat := s.toList.map Char.toNat

/-! ## Shared machinery -/

/-- PHP trim()'s byte set: space, tab, LF, CR, NUL, VT (form feed
    is not in it, unlike PCRE `\s`). -/
def isTrimByte (b : Nat) : Bool :=
  b == 32 || b == 9 || b == 10 || b == 13 || b == 0 || b == 11

/-- Trim a byte string at both ends over PHP trim()'s byte set
    (the reference trims the attr and module_body options). -/
def trimBytes (bs : List Nat) : List Nat :=
  ((bs.dropWhile isTrimByte).reverse.dropWhile isTrimByte).reverse

/-- The Module name character set: lowercase and uppercase
    letters, digits, underscore, hyphen, and slash (the patterns
    carry the /i modifier). -/
def isModuleNameByte (b : Nat) : Bool :=
  (97 ≤ b && b ≤ 122) || (65 ≤ b && b ≤ 90) ||
  (48 ≤ b && b ≤ 57) || b == 95 || b == 45 || b == 47

/-- The first index at which `pat` occurs in `src` under PCRE's
    ASCII case folding, if any (the closer search). -/
def findSubCI (pat : List Nat) : List Nat → Option Nat
  | [] => if pat.isEmpty then some 0 else none
  | src@(_ :: rest) =>
      match matchLitCI pat src with
      | some _ => some 0
      | none => (findSubCI pat rest).map (· + 1)

/-- The suffixes of `src` that begin with `]]`, in order: the
    candidates for the end of the lazy attribute group, in PCRE's
    enumeration order. -/
def close2Suffixes : List Nat → List (List Nat)
  | [] => []
  | src@(_ :: rest) =>
      (if src.take 2 == [93, 93] then [src] else []) ++ close2Suffixes rest

/-- The opener head shared by the three Module rules, matched at
    the head of `src`: the rule's literal `lit` (case-insensitive),
    one whitespace byte, a nonempty name run, and the attribute
    group. Returns the name bytes and, per attribute candidate in
    PCRE priority order, the group's raw bytes (leading whitespace
    included; empty when the group does not participate) with the
    rest of the source after the closing `]]`.

    The name run is maximal: backtracking it could never help,
    since the byte that stopped it is either whitespace (the group
    case below) or a byte that is neither whitespace nor `]`. The
    group-present candidates exist only when the byte after the
    name is whitespace: the group's `\s+` must consume at least
    one byte, so the first candidate ends at the first `]]` at or
    after the run's second byte, and the enumeration is every
    later `]]` in order. The group-absent candidate exists only
    when `]]` follows the name immediately. The two cases are
    disjoint, so no cross-case priority question arises; within
    the present case, the reference's own continuation (the tail)
    decides which candidate is the match, exactly as PCRE's
    backtracking would. -/
def moduleHead (lit : List Nat) (src : List Nat) :
    Option (List Nat × List (List Nat × List Nat)) :=
  match matchLitCI lit src with
  | none => none
  | some rest1 =>
    match rest1 with
    | w :: rest2 =>
      if !isWsByte w then none
      else
        let name := rest2.takeWhile isModuleNameByte
        if name.isEmpty then none
        else
          let rest3 := rest2.drop name.length
          match rest3 with
          | [] => none
          | b :: _ =>
            if isWsByte b then
              some (name, (close2Suffixes (rest3.drop 1)).map
                (fun sfx => (rest3.take (rest3.length - sfx.length),
                  sfx.drop 2)))
            else if rest3.take 2 == [93, 93] then
              some (name, [([], rest3.drop 2)])
            else none
    | [] => none

/-- The last byte of the span `src` loses to `rest'` (that is, of
    the matched text, where `src` is the match followed by
    `rest'`): the subject byte immediately before `rest'`, which
    the scanners carry as the line-start lookbehind. -/
def lastConsumedByte (src rest' : List Nat) : Option Nat :=
  (src.take (src.length - rest'.length)).getLast?

/-- Claim a Module-family token (the option shape shared by
    Module and Module654: moduleName, attr, module_body, in the
    reference's array order). Returns the placeholder bytes to
    splice into the rewritten source and the extended table. -/
def claimModule (rule : String) (name attr body : List Nat)
    (toks : List TokenEntry) : List Nat × List TokenEntry :=
  (phBytes toks.length,
   toks ++ [{ rule := rule, opts := [("moduleName".toList, textVal name),
     ("attr".toList, textVal attr),
     ("module_body".toList, textVal body)] }])

/-- The Module rule's tail, matched at the head of `rest` (the
    source just after the opener's `]]`): spaces only, a newline,
    then the optional body group `(.+?)` up to the first
    case-insensitive `[[/module]]` that leaves the body nonempty.
    A closer immediately at the body start is the body's first
    byte instead (correction C2), so the closer search starts one
    byte in; with no later closer the group does not participate
    and the match ends at the newline. Returns the raw body bytes
    (empty when the group does not participate) and the rest. -/
def moduleTail (rest : List Nat) : Option (List Nat × List Nat) :=
  let afterSpaces := rest.dropWhile (· == 32)
  match afterSpaces with
  | 10 :: bodyStart =>
      match findSubCI (litBytes "[[/module]]") (bodyStart.drop 1) with
      | some c =>
          some (bodyStart.take (c + 1), (bodyStart.drop (c + 1)).drop 11)
      | none => some ([], bodyStart)
  | _ => none

/-- The Module654 rule's tail: like Module's, but the run before
    the newline admits tabs as well as spaces (correction C1) and
    the body group is `(.*?)`, so a closer immediately at the body
    start gives an empty body that still participates. -/
def module654Tail (rest : List Nat) : Option (List Nat × List Nat) :=
  let afterSpaces := rest.dropWhile (fun b => b == 32 || b == 9)
  match afterSpaces with
  | 10 :: bodyStart =>
      match findSubCI (litBytes "[[/module]]") bodyStart with
      | some c => some (bodyStart.take c, (bodyStart.drop c).drop 11)
      | none => some ([], bodyStart)
  | _ => none

/-- Modulepre's process() replacement: the match with its leading
    `[[module654` rewritten to `[[module`. The reference's
    preg_replace is case-sensitive and anchored at the match
    start, so an opener matched only through the pattern's case
    folding (an uppercase or mixed-case literal) is returned with
    its spelling unchanged. -/
def rewrite654Prefix (m : List Nat) : List Nat :=
  if m.take 11 == litBytes "[[module654" then litBytes "[[module" ++ m.drop 11
  else m

/-- Module's defense replacement: the match with its leading
    `[[module` rewritten to `[[module654` (case-sensitive, at the
    match start only). -/
def rewriteModulePrefix (m : List Nat) : List Nat :=
  if m.take 8 == litBytes "[[module" then litBytes "[[module654" ++ m.drop 8
  else m

-- REFCORR10-MODFIX: the PHP defense's inline-opener newline insertion.
-- R10-STRUCT's consumeModuleClosers generalized the mirror to claim the
-- outer Module token and eat n-1 closers for every multi-opener match,
-- which moved seven line-terminated shapes whose cached live bytes the
-- PHP reference leaves unchanged. The live-correct rule is PHP's own:
-- only an inline nested opener (one whose ]] is not followed by spaces
-- and a newline) needs the newline that makes it claimable; a
-- line-terminated opener is merely renamed by the defense and keeps its
-- authored closer. The helpers below reproduce that narrow rule.

/-- The `(?! *\n)` negative lookahead of the defense regex: true exactly
    when the bytes after an opener's `]]` are spaces and then a newline.
    End of source has no newline, so the lookahead fails and the newline
    is inserted, matching PCRE. -/
def spacesThenNewline : List Nat → Bool
  | 10 :: _ => true
  | 32 :: rest => spacesThenNewline rest
  | _ => false

/-- The byte length of a line-start `[[module ...]]` head: a
    case-insensitive `[[module` literal, then the first `]]`, with no
    lone `]` in between (the regex's `[^\]]*` group). This is the `$1` of
    the PHP replacement. -/
def moduleHeadEnd (src : List Nat) : Option Nat :=
  match matchLitCI (litBytes "[[module") src with
  | none => none
  | some _ =>
      let tail := src.drop 8
      match findSub (litBytes "]]") tail with
      | some c =>
          if (tail.take c).any (fun b => b == 93) then none else some (8 + c + 2)
      | none => none

/-- One scan of the defense preg_replace. `prev` carries the byte before
    the current position so `^` matches at the subject start and right
    after a newline, as the regex's /m modifier requires. A head whose
    tail already has spaces-then-newline is copied unchanged; an inline
    head gets a newline inserted right after its `]]`, and scanning
    resumes with that inserted newline as the new line-start predecessor.
    The fuel is a length bound; every step consumes at least one byte. -/
def insertInlineOpenerNewlinesGo (prev : Option Nat) (src : List Nat) :
    Nat → List Nat
  | 0 => src
  | fuel + 1 =>
      match src with
      | [] => []
      | b :: rest =>
          if prev == none || prev == some 10 then
            match moduleHeadEnd src with
            | some n =>
                let after := src.drop n
                if spacesThenNewline after then
                  src.take n ++ insertInlineOpenerNewlinesGo (some 93) after fuel
                else
                  src.take n ++ [10] ++ insertInlineOpenerNewlinesGo (some 10) after fuel
            | none => b :: insertInlineOpenerNewlinesGo (some b) rest fuel
          else b :: insertInlineOpenerNewlinesGo (some b) rest fuel

/-- The whole defense replacement applied to a matched text. -/
def insertInlineOpenerNewlines (src : List Nat) : List Nat :=
  insertInlineOpenerNewlinesGo none src (src.length + 1)

/-- Count the opener heads in a matched text the way Module's
    process() defense does: preg_match_all of the opener-only
    pattern (the shared head, ending at `]]`), anchored at line
    starts, non-overlapping, resuming after each match. `prev` is
    the byte before `src` (`none` at the text start, itself a line
    start). A head match ends in `]`, so the position after a
    match is never a line start. The fuel is a length bound; every
    step consumes at least one byte. -/
def countModuleOpeners (prev : Option Nat) (src : List Nat) :
    Nat → Nat
  | 0 => 0
  | fuel + 1 =>
    match src with
    | [] => 0
    | b :: rest =>
      if prev == none || prev == some 10 then
        match moduleHead (litBytes "[[module") src with
        | some (_, (_, after) :: _) =>
            1 + countModuleOpeners (some 93) after fuel
        | _ => countModuleOpeners (some b) rest fuel
      else countModuleOpeners (some b) rest fuel

/-- A Modulepre match at the head of `src`: the shared head with
    the `[[module654` literal, then the optional body group
    `(.*?)` up to the first case-insensitive `[[/module]]`, which
    extends the match whenever a closer exists later and is absent
    otherwise; it never makes the match fail, and only the first
    attribute candidate can complete it (nothing follows the group
    in the pattern). Returns process()'s rewritten match text and
    the rest of the source. -/
def modulepreMatch (src : List Nat) : Option (List Nat × List Nat) :=
  match moduleHead (litBytes "[[module654") src with
  | some (_, (_, rest) :: _) =>
      let headLen := src.length - rest.length
      match findSubCI (litBytes "[[/module]]") rest with
      | some c =>
          some (rewrite654Prefix (src.take (headLen + c + 11)),
            rest.drop (c + 11))
      | none => some (rewrite654Prefix (src.take headLen), rest)
  | _ => none

/-- Whether the byte pattern `pat` occurs anywhere in `xs` (a
    non-empty-pattern infix test over byte lists; `List.isPrefixOf`
    is the same primitive CodeEmbedRules uses for literal search).
    REFCORR7 helper. -/
def bytesContain (pat : List Nat) : List Nat → Bool
  | [] => false
  | xs@(_ :: rest) => pat.isPrefixOf xs || bytesContain pat rest

/-- REFCORR7 (SUSPECT4-C S11 inc-mod / S14 inc-css): whether `body`
    holds the placeholder bytes `phBytes i` of a token in `toks`
    whose claiming rule is Code. This mirrors the reference's
    `foreach tokens: rule == 'Code' && strpos(body, delim.id.delim)`
    check in Module::process. A Raw placeholder in the body (an
    @@...@@ spliced in by Include) is deliberately excluded: live
    consumes it with the closer. A Code placeholder (probe
    muse-probe-suspect-xrule-x19-module-code) is still re-emitted. -/
def bodyHasCodeToken (body : List Nat) : List TokenEntry → Nat → Bool
  | [], _ => false
  | t :: ts, i =>
      (t.rule == "Code" && bytesContain (phBytes i) body) ||
        bodyHasCodeToken body ts (i + 1)

/-- snapshot-45 `Parse::textHasTokenRule($rawBody, 'Html')`: whether
    `body` holds the placeholder bytes `phBytes i` of a token in `toks`
    whose claiming rule is Html. The scan is over the untrimmed raw body,
    before Module's nested-opener defense. -/
def bodyHasHtmlToken (body : List Nat) : List TokenEntry → Nat → Bool
  | [], _ => false
  | t :: ts, i =>
      (t.rule == "Html" && bytesContain (phBytes i) body) ||
        bodyHasHtmlToken body ts (i + 1)

/-- Module's attribute candidates, in PCRE priority order: the
    first candidate whose tail matches decides the match. On a
    match, the defense runs over the whole matched text: more
    than one opener head rewrites it (claiming nothing); exactly
    one claims the Module token with trimmed attr and body, and
    the replacement is "\n\n" around the placeholder. -/
def moduleTryCands (src name : List Nat) (toks : List TokenEntry) :
    List (List Nat × List Nat) → Option (List Nat × List Nat × List TokenEntry)
  | [] => none
  | (attrRaw, rest) :: more =>
    match moduleTail rest with
    | none => moduleTryCands src name toks more
    | some (bodyRaw, rest') =>
        let matched := src.take (src.length - rest'.length)
        if bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0 then
          -- snapshot-45: a complete Html token inside the raw body makes the
          -- module opaque before the nested-opener defense. The claimed token
          -- has an empty module_body, while the untrimmed raw body and the
          -- authored closer bytes remain in the source after the placeholder.
          let (ph, t1) := claimModule "Module" name
            (trimBytes attrRaw) [] toks
          let authoredCloser := matched.drop (matched.length - 11)
          some ([10, 10] ++ ph ++ [10, 10] ++ bodyRaw ++ authoredCloser,
            rest', t1)
        else if countModuleOpeners none matched (matched.length + 1) > 1 then
          -- REFCORR10-MODFIX: mirror PHP exactly. The defense rewrites the
          -- leading `[[module` to `[[module654` and claims nothing; the
          -- inline-opener newline insertion makes a C-R5C-P3-2 nested
          -- opener claimable on the next pass. Line-terminated multi-opener
          -- shapes are only renamed, so their authored closers survive
          -- exactly as the cached live bytes and the PHP reference show.
          some (rewriteModulePrefix (insertInlineOpenerNewlines matched),
            rest', toks)
        else
          let (ph, t1) := claimModule "Module" name
            (trimBytes attrRaw) (trimBytes bodyRaw) toks
          -- C-SUSPECT-XRULE-3: a body carrying an earlier Code
          -- placeholder is not consumed by the module opener on live
          -- (probe muse-probe-suspect-xrule-x19-module-code): the error
          -- token is emitted, then the untrimmed body and the literal
          -- closer are left in the residual source.
          -- REFCORR7 (SUSPECT4-C S11/S14): the old test re-emitted for
          -- ANY placeholder, including the Raw token an Include splice
          -- leaves in the body; live consumes that Raw token with the
          -- closer and emits only the module result. Narrow the
          -- re-emit to a Code token via bodyHasCodeToken; the compared
          -- [rule, options] token entry and the claim shape are
          -- untouched (wire-shape argument: no compared field is added
          -- for a source-byte side effect).
          let repl := [10, 10] ++ ph ++ [10, 10] ++
            (if bodyHasCodeToken bodyRaw toks 0 then
               -- REFCORR9 C-R5B-P3-3: the opener/closer regex matches the
               -- closer case-insensitively (/ism), so the authored spelling
               -- must survive the Code-token re-emit. `matched` ends at the
               -- closer, whose fixed ASCII byte length is 11 ([[/module]]);
               -- carry those exact matched bytes instead of a hard-coded
               -- lowercase literal. The Code-only gate (REFCORR7 Raw
               -- suppression, REFCORR8 narrowing) and the compared
               -- [rule, options] wire shape are unchanged.
               let authoredCloser := matched.drop (matched.length - 11)
               bodyRaw ++ authoredCloser
             else [])
          some (repl, rest', t1)

/-- A Module match at the head of `src`, with process() applied
    (see moduleTryCands). -/
def moduleMatch (src : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match moduleHead (litBytes "[[module") src with
  | none => none
  | some (name, cands) => moduleTryCands src name toks cands

/-- Module654's attribute candidates, in PCRE priority order: the
    first candidate whose tail matches claims the Module654 token
    with trimmed attr and body. No defense, no loop. -/
def module654TryCands (src name : List Nat) (toks : List TokenEntry) :
    List (List Nat × List Nat) → Option (List Nat × List Nat × List TokenEntry)
  | [] => none
  | (attrRaw, rest) :: more =>
    match module654Tail rest with
    | none => module654TryCands src name toks more
    | some (bodyRaw, rest') =>
        let matched := src.take (src.length - rest'.length)
        if bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0 then
          -- snapshot-45: the same complete-Html opacity as Module, with the
          -- empty module_body and the untrimmed body plus authored closer
          -- left after the placeholder.
          let (ph, t1) := claimModule "Module654" name
            (trimBytes attrRaw) [] toks
          let authoredCloser := matched.drop (matched.length - 11)
          some ([10, 10] ++ ph ++ [10, 10] ++ bodyRaw ++ authoredCloser,
            rest', t1)
        else
          let (ph, t1) := claimModule "Module654" name
            (trimBytes attrRaw) (trimBytes bodyRaw) toks
          some ([10, 10] ++ ph ++ [10, 10], rest', t1)

/-- A Module654 match at the head of `src`, with process()
    applied (see module654TryCands). -/
def module654Match (src : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match moduleHead (litBytes "[[module654") src with
  | none => none
  | some (name, cands) => module654TryCands src name toks cands

/-! ## Scanners and rule mirrors

    Each scanner is one preg_replace_callback pass: leftmost
    line-start matches over the subject, replacements never
    rescanned, the previous subject byte carried for the `^`
    anchor (a match attempt happens exactly at the subject start
    and right after a newline byte). The fuel is a length bound;
    every step consumes at least one subject byte. -/

/-- One Modulepre pass over the byte form. -/
def modulepreScan (prev : Option Nat) (src : List Nat) : Nat → List Nat
  | 0 => []
  | fuel + 1 =>
    match src with
    | [] => []
    | b :: rest =>
      if prev == none || prev == some 10 then
        match modulepreMatch src with
        | some (repl, rest') =>
            repl ++ modulepreScan (lastConsumedByte src rest') rest' fuel
        | none => b :: modulepreScan (some b) rest fuel
      else b :: modulepreScan (some b) rest fuel

/-- The Modulepre rule mirror: one pass, claiming nothing. -/
def modulepreRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    (modulepreScan none src (src.length + 1), toks))

/-- One Module pass over the byte form. -/
def moduleScanPass (prev : Option Nat) (src : List Nat)
    (toks : List TokenEntry) : Nat → List Nat × List TokenEntry
  | 0 => ([], toks)
  | fuel + 1 =>
    match src with
    | [] => ([], toks)
    | b :: rest =>
      if prev == none || prev == some 10 then
        match moduleMatch src toks with
        | some (repl, rest', t1) =>
            let (o, t) := moduleScanPass (lastConsumedByte src rest')
              rest' t1 fuel
            (repl ++ o, t)
        | none =>
            let (o, t) := moduleScanPass (some b) rest toks fuel
            (b :: o, t)
      else
        let (o, t) := moduleScanPass (some b) rest toks fuel
        (b :: o, t)

/-- Module's passes, repeated until one leaves the source
    unchanged (the reference's do/while compares the source
    string). Every changing pass strictly decreases the number of
    `[[module`-plus-whitespace occurrences in the source: a claim
    removes its matched span (at least one occurrence) and
    inserts no opener text, and the defense renames one
    occurrence to `[[module654`, whose next byte is not
    whitespace; no replacement creates a new occurrence. So the
    initial source length bounds the pass count. -/
def modulePasses : Nat → List Nat → List TokenEntry →
    List Nat × List TokenEntry
  | 0, src, toks => (src, toks)
  | fuel + 1, src, toks =>
      let (out, t1) := moduleScanPass none src toks (src.length + 1)
      if out == src then (out, t1) else modulePasses fuel out t1

/-- The Module rule mirror: passes to the fixpoint. -/
def moduleRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks => modulePasses (src.length + 1) src toks)

/-- One Module654 pass over the byte form. -/
def module654Scan (prev : Option Nat) (src : List Nat)
    (toks : List TokenEntry) : Nat → List Nat × List TokenEntry
  | 0 => ([], toks)
  | fuel + 1 =>
    match src with
    | [] => ([], toks)
    | b :: rest =>
      if prev == none || prev == some 10 then
        match module654Match src toks with
        | some (repl, rest', t1) =>
            let (o, t) := module654Scan (lastConsumedByte src rest')
              rest' t1 fuel
            (repl ++ o, t)
        | none =>
            let (o, t) := module654Scan (some b) rest toks fuel
            (b :: o, t)
      else
        let (o, t) := module654Scan (some b) rest toks fuel
        (b :: o, t)

/-- The Module654 rule mirror: one pass. -/
def module654Rule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    module654Scan none src toks (src.length + 1))

/-! ## Theorems -/

/-- Modulepre claims no tokens: its mirror leaves the token table
    unchanged on every state. (Its process() only rewrites source
    text; the family's claims all belong to Module and
    Module654.) -/
theorem modulepreRule_tokens (st : ParseState) :
    (modulepreRule st).tokens = st.tokens := rfl

/-- REFCORR10-MODFIX pin (the live-correct narrow rule): on the C-R5C-P3-2
    inline nested shape the defense inserts the newline after the inline
    inner opener and rewrites only the leading `[[module` to `[[module654`;
    no token is claimed by the defense and the residual source keeps the
    outer closer for the next pass. This is byte-for-byte PHP's
    `preg_replace` composition, not the over-generalized outer claim. -/
theorem moduleMatch_inline_defense_example :
    moduleMatch (litBytes "[[module a]]\n[[module b]]INNER[[/module]]\n[[/module]]") [] =
      some (litBytes "[[module654 a]]\n[[module b]]\nINNER[[/module]]",
        litBytes "\n[[/module]]", []) := by
  rfl

/-- A plain Module654 claim: the token carries the trimmed name,
    attr, and body, and the replacement is "\n\n" around the
    placeholder for token 0. -/
theorem module654Match_claim_example :
    module654Match (litBytes "[[module654 css]]\nbody\n[[/module]]") [] =
      some ([10, 10] ++ phBytes 0 ++ [10, 10], [],
        [{ rule := "Module654", opts :=
          [("moduleName".toList, OptVal.str "css".toList),
           ("attr".toList, OptVal.str []),
           ("module_body".toList, OptVal.str "body".toList)] }]) :=
  rfl

end LeanFtml
