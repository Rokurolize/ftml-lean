/-
  LeanFtml.ContainRules — R3.8 mirrors of the Span, Size, Div,
  Collapsible, and Tabview parse rules (pipeline positions
  27–31, after Toc; the full order interposes Horiz, Separator,
  Clearfloat, and Break between Toc and Span and Divalign
  between Div and Collapsible, which the stage's consistency
  check accounts for), modelled from the reference's corrected
  rule files (ref-php/text-wiki/Text/Wiki/Parse/Default/{Span,
  Size,Div,Collapsible,Tabview}.php) read together with the R2
  stage record (conformance-refphp/R2-CONTAIN.md and the
  per-rule SECTION.md files under conformance-refphp/contain/).

  ## The byte-form obligation, per rule

  All five rules run after token-producing rules, so the
  mirrors work on the byte form. What a placeholder can do
  inside each rule's matches:

  * Span: the body is a span of the byte form and can contain
    placeholders (a footnote claimed inside a span body is the
    battery's shape); the body is not stored in the token
    options (only the parsed attribute map is), but the body's
    edge trimming and the elision test read it, and the
    recursive body match treats a placeholder as ordinary
    bytes. An attribute value can span a placeholder and is
    then a byte string (via `textVal`).
  * Size: the body likewise can span placeholders; the two
    content corrections (control-byte removal, line-end
    space/tab removal) are byte operations that leave
    placeholder bytes untouched (0xFF is in none of the
    removed sets), and the stored `size` value is the trimmed
    attribute-group bytes, a byte string when it spans a
    placeholder.
  * Div: the body can span placeholders and is spliced back
    verbatim (unscored) or after the scored form's byte-level
    paragraph strip; attribute values can span placeholders
    (byte strings via `textVal`), and the id isolation's
    Unicode-whitespace operations are the one place the model
    decodes a value (see `isolateId`).
  * Collapsible: the body can span placeholders and is
    spliced back verbatim; the options carry the attribute
    map (values via `textVal`) and the counter.
  * Tabview: the tab region can span placeholders; a tab
    title carrying one is mapped to the empty title by
    `_tabTitle`'s delimiter test, and attribute values go
    through `textVal` as elsewhere.

  ## The two class-static counters

  Collapsible's process reads and increments the class
  static `Text_Wiki_Parse_Collapsible::$count`, storing the
  pre-increment value as the `count` option of both its
  tokens; Tabview's process does the same with
  `Text_Wiki_Parse_Tabview::$_counter`, stored as the
  `tabviewId` option of every token it claims. Both counters
  are therefore observable in parse-time token options (not
  only at render), and the mirrors maintain them as document
  state (DocState.collapsibleCount / tabviewCounter,
  per-document from zero, the R3.1 inventory's fields). The
  harness processes many documents in one process, so the
  raw values the PHP drivers emit carry the process base of
  every earlier document in the run; the stage comparison
  canonicalizes the two options per document by order of
  first appearance, the same treatment R3-SCOPE.md gives
  the process-global token numbering (see conformance-r3/
  compare.py's R3.8 note). No compared-state extension is
  needed: the values already ride inside the token options
  the protocol compares.

  ## What is modelled

  Span and Div share the recursive lazy body shape the Code
  mirror established (`((?:(?R)|.)*?)` against a closer): the
  matchers below are explicit backtracking enumerations in
  PCRE priority order. Span's parse() repeats the pass while
  the source changes, so nesting is claimed outside-in
  across passes; Div's does the same, its leading-newline
  group and scored (`[[div_]]`) form included. Size's body
  is the tempered lazy form (no unit may start a new
  `[[size\s`), which claims nesting inside-out across its
  own repeating passes, and its process returns the whole
  match unchanged for a value outside the settled grammar.
  Collapsible uses the base class's single
  preg_replace_callback pass with a plain lazy body, so a
  nested opener is consumed into the outer body by the
  first-closer discipline and never claimed. Tabview is a
  line-anchored outer match (one or more tab units, then
  the closer) whose process first claims its two placeholder
  tokens, then rewrites the tab region with a second,
  differently-shaped tab pattern whose per-tab handler
  builds the `tabs` option list; its replacement emits the
  raw attribute group twice before the start token, a
  fossil shape the corrected reference retains and the
  battery pins (tv43-view-class and its siblings), reproduced
  here exactly. The scored `[[span_]]` form is not Span's:
  the full pipeline's Span tokens for it are claimed by the
  Paragraph rule's scored-span preparation, after this
  family; the mirror leaves it literal, as the restricted
  reference does (the stage's two consistency exclusions
  record exactly this).
-/

import LeanFtml.TokenState
import LeanFtml.FrameRules
import LeanFtml.CodeRule
import LeanFtml.FormRawRules
import LeanFtml.ModuleRules
import LeanFtml.NextRules
import LeanFtml.LinkRules
import LeanFtml.NotesRules
import LeanFtml.BlockRules

namespace LeanFtml

/-! ## Shared byte helpers for this family

    (Span's edge trim is LinkRules' `trimSpaceTab`, the
    space/tab trim Freelink's label handling already
    needed; it is reused, not redefined.) -/

/-- Trim CR and LF bytes from both ends (the scored Div
    body's `trim($content, "\r\n")`). -/
def trimRN (bs : List Nat) : List Nat :=
  ((bs.dropWhile (fun b => b == 10 || b == 13)).reverse.dropWhile
    (fun b => b == 10 || b == 13)).reverse

/-- ASCII lower-casing of a byte string (PHP `strtolower`). -/
def asciiLower (bs : List Nat) : List Nat :=
  bs.map (fun b => if 65 ≤ b && b ≤ 90 then b + 32 else b)

/-- Does `s` begin with `pat` under PCRE's ASCII case
    folding? -/
def ciAt (pat s : List Nat) : Bool :=
  (s.take pat.length).length == pat.length &&
  ((s.take pat.length).zip pat).all (fun (a, b) => byteCiEq a b)

/-- All splits of `s` at case-insensitive occurrences of
    `pat`, in order: (text before, text after the
    occurrence). Every starting position is tried, including
    overlapping ones. The case-sensitive twin is
    NotesRules' `occurrences`. -/
def occurrencesCI (pat : List Nat) (s : List Nat) :
    List (List Nat × List Nat) :=
  go s []
where
  go : List Nat → List Nat → List (List Nat × List Nat)
    | [], _ => []
    | s@(b :: rest), pre =>
        (if ciAt pat s
         then [(pre.reverse, s.drop pat.length)] else []) ++
        go rest (b :: pre)

/-- Candidates for the optional attribute group
    `(\s.*?)?\]\]` at the head of `s`, in PCRE priority
    order: the group present (its lazy body extending one
    byte at a time, so the splits sit at each subsequent
    `]]` in order), then the group absent. Each result is
    (group or none, rest after the closing `]]`). The
    group, when present, is at least the one whitespace
    byte. -/
def attrGroupCands (s : List Nat) :
    List (Option (List Nat) × List Nat) :=
  let present : List (Option (List Nat) × List Nat) :=
    match s with
    | w :: _ =>
        if isWsByte w then
          (occurrencesCI (litBytes "]]") s).filterMap
            (fun (pre, after) =>
              if pre.isEmpty then none else some (some pre, after))
        else []
    | [] => []
  let absent : List (Option (List Nat) × List Nat) :=
    match matchLitBytes (litBytes "]]") s with
    | some r => [(none, r)]
    | none => []
  present ++ absent

/-! ## Span -/

/-- Candidates for Span's opener group `(\s.[^\]]*)?` at
    the head of `s`, in PCRE priority order: the group
    present (the whitespace byte, the one arbitrary byte,
    then the non-`]` run from longest to shortest, each
    followed by the closing `]]`), then the group absent.
    Only the full run can be followed by a `]`, so at most
    one present candidate ever completes; the enumeration
    is Code's `openerArgs` shape. -/
def spanGroupCands (s : List Nat) :
    List (Option (List Nat) × List Nat) :=
  let present : List (Option (List Nat) × List Nat) :=
    match s with
    | w :: c :: rest =>
        if isWsByte w then
          let run := rest.takeWhile (fun b => b != 93)
          (List.range (run.length + 1)).reverse.filterMap (fun k =>
            match rest.drop k with
            | 93 :: 93 :: after =>
                some (some (w :: c :: run.take k), after)
            | _ => none)
        else []
    | _ => []
  let absent : List (Option (List Nat) × List Nat) :=
    match matchLitBytes (litBytes "]]") s with
    | some r => [(none, r)]
    | none => []
  present ++ absent

mutual

/-- Enumerate the whole Span pattern's matches at the head
    of `s`, in PCRE priority order; each result is (group 1,
    body, rest after the match). The pattern is unanchored,
    so matches are possible at every position, and the
    (?R) recursion inside the body re-runs this same
    pattern with no line-start condition (the pattern has
    no anchor). -/
def spanMatch (s : List Nat) :
    Nat → List (Option (List Nat) × List Nat × List Nat)
  | 0 => []
  | fuel + 1 =>
      match matchLitCI (litBytes "[[span") s with
      | none => []
      | some r1 =>
          (spanGroupCands r1).flatMap (fun (g1, r2) =>
            (spanBody r2 fuel).map (fun (body, r3) => (g1, body, r3)))

/-- Enumerate the Span body's completions at the head of
    `s`, in PCRE priority order: the closer first, then
    extensions by one recursive match (each candidate in
    order), then by one byte. -/
def spanBody (s : List Nat) : Nat → List (List Nat × List Nat)
  | 0 => []
  | fuel + 1 =>
      let tails : List (List Nat × List Nat) :=
        match matchLitCI (litBytes "[[/span]]") s with
        | some r => [([], r)]
        | none => []
      let recs : List (List Nat × List Nat) :=
        (spanMatch s fuel).flatMap (fun (_, _, r) =>
          (spanBody r fuel).map
            (fun (b, r') => (s.take (s.length - r.length) ++ b, r')))
      let charStep : List (List Nat × List Nat) :=
        match s with
        | [] => []
        | c :: rest =>
            (spanBody rest fuel).map (fun (b, r) => (c :: b, r))
      tails ++ recs ++ charStep

end

/-- process() for a Span match: the body trimmed of edge
    spaces and tabs, the attribute group through getAttrs,
    and the args built by the live whitelist — `id` first
    (with the `u-` prefix, dropped when empty), then in
    source order the exact keys class, style, role, type
    and the `data-*` keys lower-cased, every empty value
    omitted. An unattributed span whose trimmed body is
    empty is elided (no tokens, empty replacement). -/
def spanProcess (g1 : Option (List Nat)) (body : List Nat)
    (toks : List TokenEntry) : List Nat × List TokenEntry :=
  let content := trimSpaceTab body
  let attr := getAttrsBytes (g1.getD [])
  let idArg : OptMap := match lookupB attr (litBytes "id") with
    | some v =>
        if v.isEmpty then []
        else [("id".toList, textVal (
          if (litBytes "u-").isPrefixOf v then v else litBytes "u-" ++ v))]
    | none => []
  let restArgs : OptMap := attr.foldl (fun acc (k, v) =>
    if k == litBytes "id" || v.isEmpty then acc
    else if k == litBytes "class" || k == litBytes "style" ||
        k == litBytes "role" || k == litBytes "type" then
      omSet acc (utf8Decode k) (textVal v)
    else if (litBytes "data-").isPrefixOf k then
      omSet acc (utf8Decode (asciiLower k)) (textVal v)
    else acc) []
  let args := idArg ++ restArgs
  if (trimBytes content).isEmpty && args.isEmpty then ([], toks)
  else
    let startPh := phBytes toks.length
    let t1 := toks ++ [{ rule := "Span", opts :=
      [("args".toList, OptVal.map args),
       ("type".toList, OptVal.str "start".toList)] }]
    let endPh := phBytes t1.length
    let t2 := t1 ++ [{ rule := "Span", opts :=
      [("type".toList, OptVal.str "end".toList)] }]
    (startPh ++ content ++ endPh, t2)

/-- One Span pass: preg_replace_callback semantics over
    the byte form (matches are sought at every position;
    replacements are never rescanned). -/
def spanScan (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => (src, toks)
  | fuel + 1 =>
    match src with
    | [] => ([], toks)
    | b :: rest =>
        match (spanMatch src (codeFuel src.length)).head? with
        | some (g1, body, r) =>
            let (repl, t1) := spanProcess g1 body toks
            let (o, t) := spanScan r t1 fuel
            (repl ++ o, t)
        | none =>
            let (o, t) := spanScan rest toks fuel
            (b :: o, t)

/-- Span's parse(): repeat the pass while the source
    changes. Every changing pass claims at least one token
    or elides at least one construct, so the pass count is
    bounded by the source length; the fuel is that bound
    plus slack. -/
def spanPasses (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => (src, toks)
  | fuel + 1 =>
      let (s', t') := spanScan src toks (src.length + 1)
      if s' == src then (s', t') else spanPasses s' t' fuel

/-- The Span rule mirror. -/
def spanRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks => spanPasses src toks (src.length + 2))

/-! ## Size -/

/-- Does `s` begin with a nested Size opener (`[[size`
    plus one whitespace byte), the tempered body unit's
    negative lookahead? -/
def sizeOpenerAt (s : List Nat) : Bool :=
  (matchLitCI (litBytes "[[size") s).isSome &&
    match s.drop 6 with
    | w :: _ => isWsByte w
    | [] => false

/-- The Size body's completions: the tempered lazy body
    is a deterministic chain (the closer at each position
    first, then one byte whose position does not open a
    nested Size), so the result is at most one (body,
    rest) pair. -/
def sizeBody (s : List Nat) : Option (List Nat × List Nat) :=
  go s (s.length + 1) 0
where
  go : List Nat → Nat → Nat → Option (List Nat × List Nat)
    | _, 0, _ => none
    | s, fuel + 1, depth =>
        match matchLitCI (litBytes "[[/size]]") s with
        | some r =>
            if depth == 0 then some ([], r)
            else (go r fuel (depth - 1)).map
              (fun (body, r2) => (litBytes "[[/size]]" ++ body, r2))
        | none =>
            match s with
            | [] => none
            | b :: rest =>
                -- REFCORR5 Batch 8 (p26): a nested opener's pair is consumed
                -- as a unit, so a valid outer pair spans an invalid inner
                -- pair left literal in the body (recursive `((?R)|.)*?`).
                if sizeOpenerAt s then
                  (go rest fuel (depth + 1)).map (fun (body, r) => (b :: body, r))
                else (go rest fuel depth).map (fun (body, r) => (b :: body, r))

/-- A Size match at the head of `s`: the opener literal,
    one whitespace byte, the value group (the maximal
    non-`]` run, at least one byte — giving bytes back can
    never put a `]` where the closing `]]` must stand, so
    the run is forced), the closing `]]`, and the tempered
    body. Returns (value group, body, full match text,
    rest). -/
def sizeMatchAt (s : List Nat) :
    Option (List Nat × List Nat × List Nat × List Nat) :=
  (matchLitCI (litBytes "[[size") s).bind (fun r0 =>
    match r0 with
    | w :: r1 =>
        if isWsByte w then
          let run := r1.takeWhile (fun b => b != 93)
          if run.isEmpty then none
          else
            match r1.drop run.length with
            | 93 :: 93 :: r2 =>
                (sizeBody r2).map
                  (fun (body, r3) => (run, body, s.take (s.length - r3.length), r3))
            | _ => none
        else none
    | [] => none)

/-- The settled Size value grammar: a numeric part of one
    to five digit-or-dot bytes followed by exactly `em`,
    `px`, or `%`, or one of the nine named sizes. The
    checks are case-sensitive (the reference's preg_match
    calls carry no /i), even though the rule pattern itself
    is case-insensitive. -/
def sizeValid (sz : List Nat) : Bool :=
  let named : List (List Nat) :=
    [litBytes "xx-small", litBytes "x-small", litBytes "small",
     litBytes "medium", litBytes "large", litBytes "x-large",
     litBytes "xx-large", litBytes "smaller", litBytes "larger"]
  if named.any (· == sz) then true
  else
    let run := sz.takeWhile (fun b => isDigitByte b || b == 46)
    1 ≤ run.length && run.length ≤ 5 &&
      (sz.drop run.length == litBytes "em" ||
       sz.drop run.length == litBytes "px" ||
       sz.drop run.length == litBytes "%")

/-- The C0 control bytes the Size body correction removes:
    0x00–0x08, 0x0B, 0x0C, 0x0E–0x1A, 0x1C–0x1F (tab, LF,
    CR, ESC, and DEL are kept). -/
def sizeDropByte (b : Nat) : Bool :=
  b ≤ 8 || b == 11 || b == 12 || (14 ≤ b && b ≤ 26) ||
  (28 ≤ b && b ≤ 31)

/-- Remove space/tab runs that stand at a line end or at
    the end of the string (the reference's
    `/[ \t]+(?=\n|$)/` replacement): a pending run is
    dropped when a newline or the end follows it, and
    kept otherwise. -/
def dropLineEndRuns (s : List Nat) : List Nat := go s []
where
  go : List Nat → List Nat → List Nat
    | [], _ => []
    | b :: rest, acc =>
        if b == 32 || b == 9 then go rest (acc ++ [b])
        else if b == 10 then 10 :: go rest []
        else acc ++ b :: go rest []

/-- process() for a Size match: an invalid value returns
    the whole match unchanged (no tokens); otherwise the
    body takes the two corrections (control bytes removed,
    line-end space/tab runs removed), an empty corrected
    body is elided, and any other body is claimed with the
    trimmed value in the start token. -/
def sizeProcess (g1 body full : List Nat)
    (toks : List TokenEntry) : List Nat × List TokenEntry :=
  let size := trimBytes g1
  if !sizeValid size then (full, toks)
  else
    let c1 := body.filter (fun b => !sizeDropByte b)
    let c2 := dropLineEndRuns c1
    if c2.isEmpty then ([], toks)
    else
      let startPh := phBytes toks.length
      let t1 := toks ++ [{ rule := "Size", opts :=
        [("size".toList, textVal size),
         ("type".toList, OptVal.str "start".toList)] }]
      let endPh := phBytes t1.length
      let t2 := t1 ++ [{ rule := "Size", opts :=
        [("type".toList, OptVal.str "end".toList)] }]
      (startPh ++ c2 ++ endPh, t2)

/-- One Size pass: preg_replace_callback semantics over
    the byte form. -/
def sizeScan (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => (src, toks)
  | fuel + 1 =>
    match src with
    | [] => ([], toks)
    | b :: rest =>
        match sizeMatchAt src with
        | some (g1, body, full, r) =>
            let (repl, t1) := sizeProcess g1 body full toks
            let (o, t) := sizeScan r t1 fuel
            (repl ++ o, t)
        | none =>
            let (o, t) := sizeScan rest toks fuel
            (b :: o, t)

/-- Size's parse(): repeat the pass while the source
    changes (an invalid value's identity replacement
    changes nothing, so a pass whose only matches are
    invalid ends the loop, exactly as in the reference). -/
def sizePasses (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => (src, toks)
  | fuel + 1 =>
      let (s', t') := sizeScan src toks (src.length + 1)
      if s' == src then (s', t') else sizePasses s' t' fuel

/-- The Size rule mirror. -/
def sizeRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks => sizePasses src toks (src.length + 2))

/-! ## Div -/

/-- PHP's Unicode `\s` over characters (the whitespace set
    the /u patterns see): the ASCII set plus NEL, NBSP, and
    the Unicode space separators. -/
def isWsU (c : Char) : Bool :=
  let n := c.toNat
  n == 9 || n == 10 || n == 11 || n == 12 || n == 13 || n == 32 ||
  n == 133 || n == 160 || n == 5760 ||
  (8192 ≤ n && n ≤ 8202) || n == 8232 || n == 8233 ||
  n == 8239 || n == 8287 || n == 12288

/-- Replace every maximal run of Unicode-whitespace
    characters by a single space (`preg_replace('/\s+/u',
    ' ', ...)`). -/
def collapseWsU (cs : List Char) : List Char := go cs false
where
  go : List Char → Bool → List Char
    | [], _ => []
    | c :: rest, inRun =>
        if isWsU c then
          (if inRun then go rest true else ' ' :: go rest true)
        else c :: go rest false

/-- Div's id isolation: a per-id isolation so one page's
    user-supplied id cannot collide with the wiki's own
    interface ids. The empty value isolates to the empty
    string (the caller then omits the attribute). A value
    that is not valid UTF-8 (in the model: one carrying a
    placeholder byte) makes the reference's /u replacement
    return null: the result here is `none` for that case
    when the value starts with `u-` (the caller records a
    null, which the process's own empty-value unset then
    always removes before any claim) and the bare prefix
    otherwise. A valid value is trimmed, its
    whitespace runs collapsed to single spaces; an empty
    collapse yields the bare prefix, a value already
    starting with `u-` yields the collapse, and any other
    yields the prefix, a space when the raw value led with
    whitespace, and the collapse. -/
def isolateId (v : List Nat) : Option (List Nat) :=
  if v.isEmpty then some []
  else if v.contains 255 then
    if (litBytes "u-").isPrefixOf v then none
    else some (litBytes "u-")
  else
    let cs := utf8Decode v
    let leading := match cs with
      | c :: _ => isWsU c
      | [] => false
    let collapsed := collapseWsU (trimChars cs)
    if collapsed.isEmpty then some (litBytes "u-")
    else if (litBytes "u-").isPrefixOf v then
      some (collapsed.flatMap utf8Bytes)
    else
      some (litBytes "u-" ++ (if leading then [32] else []) ++
        collapsed.flatMap utf8Bytes)

/-- Div's attribute value normalization: control bytes
    (0x00–0x1F and 0x7F) are removed, runs of space, tab,
    CR, and LF collapse to a single space, and leading
    spaces are stripped (`ltrim` on the space character
    only; trailing whitespace survives except on class,
    which the caller additionally rtrims). -/
def normalizeValue (v : List Nat) : List Nat :=
  let v1 := v.filter (fun b => !(b < 32 || b == 127))
  (go v1 false).dropWhile (· == 32)
where
  go : List Nat → Bool → List Nat
    | [], _ => []
    | b :: rest, inRun =>
        if b == 32 || b == 9 || b == 13 || b == 10 then
          (if inRun then go rest true else 32 :: go rest true)
        else b :: go rest false

/-- Strip trailing space and tab bytes (class's
    `rtrim($value, " \t")`). -/
def rtrimSpaceTab (bs : List Nat) : List Nat :=
  (bs.reverse.dropWhile (fun b => b == 32 || b == 9)).reverse

/-- Assignment into a byte-keyed list of optional byte
    values, with PHP array semantics (an existing key
    keeps its position and takes the new value). -/
def omSetOpt (m : List (List Nat × Option (List Nat)))
    (k : List Nat) (v : Option (List Nat)) :
    List (List Nat × Option (List Nat)) :=
  if (m.find? (fun kv => kv.1 == k)).isSome then
    m.map (fun kv => if kv.1 == k then (k, v) else kv)
  else m ++ [(k, v)]

/-- Byte-wise lexicographic order (the byte order PHP's
    `ksort` gives the argument keys, whose inventory is
    the five kept names and the `data-*` family, none of
    them bare numeric strings). -/
def bytesLe : List Nat → List Nat → Bool
  | [], _ => true
  | _ :: _, [] => false
  | a :: as, b :: bs =>
      if a < b then true else if b < a then false else bytesLe as bs

/-- Insert one entry into a key-sorted argument list
    (the sort PHP's `ksort` leaves; argument keys are
    unique after the merge in `divArgs`, so insertion
    order among equals never arises). Retained for the
    orders that still sort by name; `divArgs` itself no
    longer sorts (see `divArgsOrder`). -/
def insertArg (kv : List Nat × Option (List Nat)) :
    List (List Nat × Option (List Nat)) →
    List (List Nat × Option (List Nat))
  | [] => [kv]
  | kv' :: rest =>
      if bytesLe kv.1 kv'.1 then kv :: kv' :: rest
      else kv' :: insertArg kv rest

/-- Div's emission order (REFCORR2 correction C-STAGE2-1):
    the five ranked names in the order id, class, style,
    role, type, then the `data-*` entries in construction
    (authored) order. Live's probes
    muse-probe-refcorr2-diva-a1 to a8 show exactly this
    order, invariant under authored permutation, with the
    data-* attributes keeping their authored relative
    order; the reference's earlier `ksort` sorted every
    key by name, putting class before id and sorting the
    data-* family among themselves. -/
def divArgsOrder (built : List (List Nat × Option (List Nat))) :
    List (List Nat × Option (List Nat)) :=
  let ranked := [litBytes "id", litBytes "class", litBytes "style",
      litBytes "role", litBytes "type"].filterMap
    (fun k => built.find? (fun kv => kv.1 == k))
  ranked ++ built.filter (fun kv => (litBytes "data-").isPrefixOf kv.1)

/-- Div's argument construction: in getAttrs order, `id`
    through the isolation (omitted when it isolates to
    the empty string; a `none` isolation is recorded as a
    null, which process's empty-value unset always
    removes), the exact keys class (additionally rtrimmed
    of spaces and tabs), style, role, type through the
    value normalization, and the `data-*` keys lower-cased
    with a first-wins guard; the result is then put in
    live's emission order by `divArgsOrder` (the
    reference's `ksort` stood until REFCORR2 correction
    C-STAGE2-1). Entries carry their (decoded key, value)
    pair, the value as none exactly for the null isolation
    case. -/
def divArgs (attr : List (List Nat × List Nat)) :
    List (List Char × Option (List Nat)) :=
  let built : List (List Nat × Option (List Nat)) :=
    attr.foldl (fun acc (k, v) =>
      if k == litBytes "id" then
        match isolateId v with
        | some idv => if idv.isEmpty then acc else omSetOpt acc k (some idv)
        | none => omSetOpt acc k none
      else if k == litBytes "class" then
        omSetOpt acc k (some (rtrimSpaceTab (normalizeValue v)))
      else if k == litBytes "style" || k == litBytes "role" ||
          k == litBytes "type" then
        omSetOpt acc k (some (normalizeValue v))
      else if (litBytes "data-").isPrefixOf k then
        let lk := asciiLower k
        -- REFCORR8 C-R5-P1-2: case-variant duplicate data-* keys are
        -- last-wins on live. The lowercased key is unchanged and
        -- omSetOpt keeps the first occurrence's emit position while
        -- taking the later authored value, matching PHP's overwrite.
        omSetOpt acc lk (some (normalizeValue v))
      else acc) []
  (divArgsOrder built).map
    (fun (k, v) => (utf8Decode k, v))

/-- Remove blank-line runs entirely (the scored Div
    body's `/\n[ \t]*(?:\n[ \t]*)+/` replacement with the
    empty string, which joins the surrounding text): a
    maximal run of newline, space, and tab bytes that
    contains at least two newlines is a match; anything
    else passes through byte by byte. -/
def collapseBlankRuns (s : List Nat) : Nat → List Nat
  | 0 => s
  | fuel + 1 =>
    match s with
    | [] => []
    | b :: rest =>
        if b == 10 then
          let run := s.takeWhile (fun x => x == 10 || x == 32 || x == 9)
          if (run.filter (· == 10)).length ≥ 2 then
            collapseBlankRuns (s.drop run.length) fuel
          else b :: collapseBlankRuns rest fuel
        else b :: collapseBlankRuns rest fuel

mutual

/-- Enumerate the whole Div pattern's matches at the head
    of `s`, in PCRE priority order; each result is
    (group 1: the optional leading newline, group 2: the
    score marker, group 3: the attribute group, body,
    rest after the match). The tail after the opener's
    `]]` is a run of spaces and one mandatory newline,
    both forced (giving spaces back can never put the
    newline where a space stands). -/
def divMatch (s : List Nat) :
    Nat → List (List Nat × List Nat × Option (List Nat) ×
      List Nat × List Nat)
  | 0 => []
  | fuel + 1 =>
      let g1cands : List (List Nat × List Nat) := match s with
        | 10 :: r => [([10], r)]
        | _ => [([], s)]
      g1cands.flatMap (fun (g1, r0) =>
        (matchLitCI (litBytes "[[div") r0).toList.flatMap (fun r1 =>
          let (score, r2) : List Nat × List Nat := match r1 with
            | 95 :: rr => ([95], rr)
            | _ => ([], r1)
          (attrGroupCands r2).flatMap (fun (g3, r3) =>
            let sp := (r3.takeWhile (· == 32)).length
            match r3.drop sp with
            | 10 :: r4 =>
                (divBody r4 fuel).map
                  (fun (body, r5) => (g1, score, g3, body, r5))
            | _ => [])))

/-- Enumerate the Div body's completions at the head of
    `s`, in PCRE priority order: the closer (with its
    forced trailing space run) first, then extensions by
    one recursive match, then by one byte. -/
def divBody (s : List Nat) : Nat → List (List Nat × List Nat)
  | 0 => []
  | fuel + 1 =>
      let tails : List (List Nat × List Nat) :=
        match matchLitCI (litBytes "[[/div]]") s with
        | some r => [([], r.drop ((r.takeWhile (· == 32)).length))]
        | none => []
      let recs : List (List Nat × List Nat) :=
        (divMatch s fuel).flatMap (fun (_, _, _, _, r) =>
          (divBody r fuel).map
            (fun (b, r') => (s.take (s.length - r.length) ++ b, r')))
      let charStep : List (List Nat × List Nat) :=
        match s with
        | [] => []
        | c :: rest =>
            (divBody rest fuel).map (fun (b, r) => (c :: b, r))
      tails ++ recs ++ charStep

end

/-- REFCORR8 C-R5-P1-1: the byte keys of admitted Div attributes
    whose authored value was non-empty, carried as a parallel table
    rather than a compared token field so the `[rule, options]` wire
    shape is unchanged. An authored non-empty value that normalizes
    to empty (a whitespace-only `class=" "`) is still a kept attribute
    rendered as `""`; only a literally empty authored value is unset.
    Later authored occurrences overwrite earlier ones, matching the
    PHP parse's `authoredValue` map. -/
def divAuthoredNonEmpty (attr : List (List Nat × List Nat)) :
    List (List Nat) :=
  attr.foldl (fun acc (k, v) =>
    let key :=
      if k == litBytes "class" || k == litBytes "style" ||
          k == litBytes "role" || k == litBytes "type" then some k
      else if (litBytes "data-").isPrefixOf k then some (asciiLower k)
      else none
    match key with
    | none => acc
    | some key =>
        let acc' := acc.filter (fun x => x != key)
        if v.isEmpty then acc' else acc' ++ [key]) []

/-- Is an optional byte value empty for Div's purposes
    (a null value, or one whose full trim is empty)? -/
def optBytesEmpty : Option (List Nat) → Bool
  | none => true
  | some b => (trimBytes b).isEmpty

/-- process() for a Div match: the arguments from
    `divArgs`, with arguments whose trimmed value is
    empty unset EXCEPT those whose authored value was
    non-empty (REFCORR8 C-R5-P1-1, kept as an empty
    rendered attribute). When no argument survives that
    test and the trimmed body is empty, the div
    is suppressed on live, but the pair is still claimed,
    flagged `vanished` on both tokens, so it still bounds
    the surrounding text segments (REFCORR2 correction
    C-STAGE2-2; the renderer emits no tags for the flagged
    pair, and the text after it is not paragraph-wrapped).
    The scored form trims the body's CR/LF edges
    and removes its blank-line runs, emitting the leading
    newline once; the unscored form wraps the verbatim
    body in blank lines and emits the leading newline
    twice. -/
def divProcess (g1 score : List Nat) (g3 : Option (List Nat))
    (body : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  let attr := getAttrsBytes (g3.getD [])
  let args := divArgs attr
  let authored := (divAuthoredNonEmpty attr).map utf8Decode
  let valueEmpty : List Char × Option (List Nat) → Bool :=
    fun kv => optBytesEmpty kv.2 && !(kv.1 ∈ authored)
  let effective := args.any (fun kv => !valueEmpty kv)
  let vanished := !effective && (trimBytes body).isEmpty
  let kept := args.filter (fun kv => !valueEmpty kv)
  let optArgs : OptMap := kept.map
    (fun kv => (kv.1, match kv.2 with
      | some b => textVal b
      | none => OptVal.null))
  let flag : OptMap := if vanished then
    [("vanished".toList, OptVal.bool true)] else []
  let startPh := phBytes toks.length
  let t1 := toks ++ [{ rule := "Div", opts :=
    [("args".toList, OptVal.map optArgs),
     ("type".toList, OptVal.str "start".toList)] ++ flag }]
  let endPh := phBytes t1.length
  let t2 := t1 ++ [{ rule := "Div", opts :=
    [("type".toList, OptVal.str "end".toList)] ++ flag }]
  if score.isEmpty then
    (g1 ++ g1 ++ startPh ++ [10, 10] ++ body ++ [10, 10] ++ endPh, t2)
  else
    let body' := collapseBlankRuns
      (trimRN body) ((trimRN body).length + 1)
    (g1 ++ startPh ++ body' ++ endPh, t2)

/-- One Div pass: preg_replace_callback semantics over
    the byte form. -/
def divScan (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => (src, toks)
  | fuel + 1 =>
    match src with
    | [] => ([], toks)
    | b :: rest =>
        match (divMatch src (codeFuel src.length)).head? with
        | some (g1, score, g3, body, r) =>
            let (repl, t1) := divProcess g1 score g3 body toks
            let (o, t) := divScan r t1 fuel
            (repl ++ o, t)
        | none =>
            let (o, t) := divScan rest toks fuel
            (b :: o, t)

/-- Div's parse(): repeat the pass while the source
    changes. -/
def divPasses (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => (src, toks)
  | fuel + 1 =>
      let (s', t') := divScan src toks (src.length + 1)
      if s' == src then (s', t') else divPasses s' t' fuel

/-- The Div rule mirror. -/
def divRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks => divPasses src toks (src.length + 2))

/-! ## Collapsible -/

/-- A Collapsible match at the head of `s`: the optional
    leading newline, the opener with its attribute group,
    the plain lazy body up to the first closer (the
    discipline G1.2 recorded for this family: the base
    pass runs once and a nested opener is never rescanned),
    and the closer's forced trailing space run. The first
    attribute-group candidate with a closer after it wins,
    and for it the first closer. -/
def collMatchAt (s : List Nat) :
    Option (List Nat × Option (List Nat) × List Nat × List Nat) :=
  let g1cands : List (List Nat × List Nat) := match s with
    | 10 :: r => [([10], r)]
    | _ => [([], s)]
  (g1cands.flatMap (fun (g1, r0) =>
    (matchLitCI (litBytes "[[collapsible") r0).toList.flatMap (fun r1 =>
      (attrGroupCands r1).flatMap (fun (g2, r2) =>
        (occurrencesCI (litBytes "[[/collapsible]]") r2).head?.toList.map
          (fun (body, r3) =>
            (g1, g2, body, r3.drop ((r3.takeWhile (· == 32)).length))))))).head?

/-- process() for a Collapsible match: the attribute
    group through getAttrs, kept whole; both tokens carry
    the attribute map, their type, and the class static's
    pre-increment value as `count`, which the process then
    increments; the replacement doubles the captured
    leading newline and wraps the verbatim body in blank
    lines. -/
def collProcess (g1 : List Nat) (g2 : Option (List Nat))
    (body : List Nat) (doc : DocState) (toks : List TokenEntry) :
    List Nat × List TokenEntry × DocState :=
  let attr := getAttrsBytes (g2.getD [])
  let argsOpt : OptVal := OptVal.map
    (attr.map (fun (k, v) => (utf8Decode k, textVal v)))
  let count := doc.collapsibleCount
  let startPh := phBytes toks.length
  let t1 := toks ++ [{ rule := "Collapsible", opts :=
    [("args".toList, argsOpt),
     ("type".toList, OptVal.str "start".toList),
     ("count".toList, OptVal.int (count : Int))] }]
  let endPh := phBytes t1.length
  let t2 := t1 ++ [{ rule := "Collapsible", opts :=
    [("args".toList, argsOpt),
     ("type".toList, OptVal.str "end".toList),
     ("count".toList, OptVal.int (count : Int))] }]
  (g1 ++ g1 ++ startPh ++ [10, 10] ++ body ++ [10, 10] ++ endPh,
   t2, { doc with collapsibleCount := count + 1 })

/-- The Collapsible pass: the base class's single
    preg_replace_callback pass over the byte form (no
    parse() override in the reference, so no repetition). -/
def collScan (src : List Nat) (toks : List TokenEntry)
    (doc : DocState) : Nat → List Nat × List TokenEntry × DocState
  | 0 => (src, toks, doc)
  | fuel + 1 =>
    match src with
    | [] => ([], toks, doc)
    | b :: rest =>
        match collMatchAt src with
        | some (g1, g2, body, r) =>
            let (repl, t1, d1) := collProcess g1 g2 body doc toks
            let (o, t, d) := collScan r t1 d1 fuel
            (repl ++ o, t, d)
        | none =>
            let (o, t, d) := collScan rest toks doc fuel
            (b :: o, t, d)

/-- The Collapsible rule mirror. -/
def collapsibleRule (st : ParseState) : ParseState :=
  let input := byteForm st.work
  let (bs', toks', doc') :=
    collScan input st.tokens st.doc (input.length + 1)
  { st with work := parseBytes bs', tokens := toks', doc := doc' }

/-! ## Tabview -/

/-- The tab keyword bytes of the inner pattern's pair
    group: `[a-z0-9\-_]` under the pattern's /i flag. -/
def isTabKeyByte (b : Nat) : Bool :=
  (48 ≤ b && b ≤ 57) || (65 ≤ b && b ≤ 90) ||
  (97 ≤ b && b ≤ 122) || b == 45 || b == 95

/-- The view-name alternatives, in pattern order:
    `tabview` before `tabs` (at most one can match at a
    position, since they differ at the fourth byte). -/
def tabNameCands (s : List Nat) : List (List Nat) :=
  [matchLitCI (litBytes "tabview") s,
   matchLitCI (litBytes "tabs") s].filterMap id

/-- One pair of the inner pattern's pair group,
    `\s+[a-z0-9\-_]+="[^"]+"`: the whitespace run, the
    key run, and the quoted value are each forced maximal
    (a shorter run leaves a byte of the same class where
    the next literal must stand), so the result is the
    unique rest after the pair, or none. -/
def tabPairAt (s : List Nat) : Option (List Nat) :=
  let ws := s.takeWhile isWsByte
  if ws.isEmpty then none
  else
    let r1 := s.drop ws.length
    let key := r1.takeWhile isTabKeyByte
    if key.isEmpty then none
    else
      (matchLitBytes (litBytes "=\"") (r1.drop key.length)).bind
        (fun r2 =>
          let val := r2.takeWhile (fun b => b != 34)
          match r2.drop val.length with
          | 34 :: r4 => some r4
          | _ => none)

/-- The rests after 0, 1, 2, … consecutive pairs at the
    head of `s`, as (count, rest) pairs in ascending
    count order. -/
def pairSteps (s : List Nat) : Nat → List (Nat × List Nat)
  | 0 => [(0, s)]
  | fuel + 1 =>
      match tabPairAt s with
      | some r => (0, s) :: (pairSteps r fuel).map (fun (k, rr) => (k + 1, rr))
      | none => [(0, s)]

/-- Candidates for the inner pattern's group 2,
    `((?:\s+[a-z0-9\-_]+="[^\"]+")+)?`, in PCRE priority
    order: the group present with the pair count from the
    greedy maximum down to one, then the group absent. -/
def tabG2Cands (s : List Nat) : List (Option (List Nat) × List Nat) :=
  let steps := pairSteps s (s.length + 1)
  (steps.reverse.filterMap (fun (k, r) =>
    if k == 0 then none
    else some (some (s.take (s.length - r.length)), r)))
  ++ [(none, s)]

/-- Candidates for the inner pattern's group 1,
    `(\s+[^\]]+?)?`, in PCRE priority order: the group
    present, its whitespace run from longest to shortest
    and for each its lazy body from shortest to longest,
    then the group absent. -/
def tabG1Cands (s : List Nat) : List (Option (List Nat) × List Nat) :=
  let wsRun := s.takeWhile isWsByte
  let present : List (Option (List Nat) × List Nat) :=
    if wsRun.isEmpty then []
    else
      (List.range wsRun.length).reverse.flatMap (fun wi =>
        let wsLen := wi + 1
        let afterWs := s.drop wsLen
        let midRun := afterWs.takeWhile (fun b => b != 93)
        (List.range midRun.length).flatMap (fun mi =>
          let midLen := mi + 1
          [(some (s.take (wsLen + midLen)), afterWs.drop midLen)]))
  present ++ [(none, s)]

/-- A tab unit of the outer pattern,
    `\[\[tab(\s.*?)?\]\].*?\[\[\/tab\]\]\s*`: every
    (consumed text, rest) candidate in PCRE priority
    order — the attribute group candidates outermost,
    then the body's closer occurrences in order, the
    trailing whitespace run forced maximal. -/
def tabUnitCands (s : List Nat) : List (List Nat × List Nat) :=
  (matchLitCI (litBytes "[[tab") s).toList.flatMap (fun r0 =>
    (attrGroupCands r0).flatMap (fun (_, r1) =>
      (occurrencesCI (litBytes "[[/tab]]") r1).map (fun (_, r2) =>
        let after := r2.drop ((r2.takeWhile isWsByte).length)
        (s.take (s.length - after.length), after))))

/-- Completions of the outer pattern's tab region after
    at least one unit: more units (each candidate in
    order, the loop being greedy) before the closing
    alternative, then the closer itself
    (`\[\[\/(?:tabview|tabs)\]\]` with its forced trailing
    space run). Results are (region text after this
    point, rest after the whole match). -/
def tabRegionCands (s : List Nat) : Nat → List (List Nat × List Nat)
  | 0 => []
  | fuel + 1 =>
      let more : List (List Nat × List Nat) :=
        (tabUnitCands s).flatMap (fun (u, r) =>
          (tabRegionCands r fuel).map (fun (reg, r') => (u ++ reg, r')))
      let exit : List (List Nat × List Nat) :=
        (matchLitBytes (litBytes "[[") s).toList.flatMap (fun r0 =>
          (matchLitBytes (litBytes "/") r0).toList.flatMap (fun r1 =>
            (tabNameCands r1).flatMap (fun r2 =>
              (matchLitBytes (litBytes "]]") r2).toList.map (fun r3 =>
                ([], r3.drop ((r3.takeWhile (· == 32)).length))))))
      more ++ exit

/-- Enumerate the outer Tabview pattern's matches at the
    head of `s` (the caller attempts it only at line
    starts, the pattern's `^` under /m), in PCRE priority
    order: the view name, the attribute group candidates,
    the whitespace run after the opener from longest to
    shortest, then the tab region's completions (one unit
    first, then `tabRegionCands`). Each result is
    (group 1, tab region, rest after the match). -/
def tabviewMatchAt (s : List Nat) :
    List (Option (List Nat) × List Nat × List Nat) :=
  (matchLitBytes (litBytes "[[") s).toList.flatMap (fun r0 =>
    (tabNameCands r0).flatMap (fun r1 =>
      (attrGroupCands r1).flatMap (fun (g1, r2) =>
        let wsLen := (r2.takeWhile isWsByte).length
        (List.range (wsLen + 1)).reverse.flatMap (fun k =>
          let r3 := r2.drop k
          (tabUnitCands r3).flatMap (fun (u, r4) =>
            (tabRegionCands r4 (r4.length + 1)).map
              (fun (reg, r5) => (g1, u ++ reg, r5)))))))

/-- Collapse whitespace-byte runs to a single space
    (`_tabTitle`'s `/\s+/` replacement, in byte mode). -/
def collapseWsBytes (bs : List Nat) : List Nat := go bs false
where
  go : List Nat → Bool → List Nat
    | [], _ => []
    | b :: rest, inRun =>
        if isWsByte b then
          (if inRun then go rest true else 32 :: go rest true)
        else b :: go rest false

/-- Does the byte string satisfy `_tabTitle`'s raw-code
    test, `/@@.*@@|@<.*>@/s` (two `@@` occurrences whose
    starts are at least two bytes apart, or an `@<` and a
    later `>@` at least two bytes apart)? -/
def rawCodeShape (t : List Nat) : Bool :=
  let atat := (occurrences (litBytes "@@") t).map
    (fun (pre, _) => pre.length)
  let lt := (occurrences (litBytes "@<") t).map (fun (pre, _) => pre.length)
  let gt := (occurrences (litBytes ">@") t).map (fun (pre, _) => pre.length)
  (match atat.max?, atat.min? with
   | some hi, some lo => hi ≥ lo + 2
   | _, _ => false) ||
  (match gt.max?, lt.min? with
   | some hi, some lo => hi ≥ lo + 2
   | _, _ => false)

/-- `_tabTitle`: trim; the empty title becomes
    `untitled`; a title carrying raw-code delimiters or
    a placeholder byte becomes the empty string; any
    other has its whitespace runs collapsed to single
    spaces. -/
def tabTitle (t0 : List Nat) : List Nat :=
  let t := trimBytes t0
  if t.isEmpty then litBytes "untitled"
  else if rawCodeShape t || t.contains 255 then []
  else collapseWsBytes t

/-- Does the byte string consist of exactly one quoted
    pair, `^[a-z0-9\-_]+="[^"]+"$` under /i (the inner
    handler's ff-hack test)? -/
def singlePairShape (t : List Nat) : Bool :=
  let key := t.takeWhile isTabKeyByte
  if key.isEmpty then false
  else
    match matchLitBytes (litBytes "=\"") (t.drop key.length) with
    | none => false
    | some r =>
        let val := r.takeWhile (fun b => b != 34)
        r.drop val.length == [34]

/-- A match of the inner tab pattern at the head of `s`:
    group 1 and group 2 candidates in PCRE order, the
    closing `]]`, the body's closer occurrences in order,
    and the body's forced trailing newline run (`\n*` —
    newlines only, where the outer unit's tail is the
    full whitespace class). -/
def tabMatchAt (s : List Nat) :
    Option (Option (List Nat) × Option (List Nat) × List Nat × List Nat) :=
  (matchLitCI (litBytes "[[tab") s).bind (fun r0 =>
    (tabG1Cands r0).findSome? (fun (g1, r1) =>
      (tabG2Cands r1).findSome? (fun (g2, r2) =>
        (matchLitBytes (litBytes "]]") r2).bind (fun r3 =>
          (occurrencesCI (litBytes "[[/tab]]") r3).findSome?
            (fun (body, r4) =>
              some (g1, g2, body,
                r4.drop ((r4.takeWhile (· == 10)).length)))))))

/-- The inner handler for one tab: build the tab's entry
    (the ff hack first: when group 1's trim is exactly one
    quoted pair, group 1's raw bytes join the argument
    string and no title is taken from it; otherwise a
    missing title defaults to group 1's trim; the title
    then passes `_tabTitle`, and the per-view tab counter
    is merged in as `tabId`), claim the tab's tabStart
    token, and produce the replacement (the tab's start
    placeholder, the verbatim body, and the shared tabEnd
    placeholder, each wrapped in blank lines; the match's
    trailing newlines are consumed, not reproduced). -/
def handleTab (g1 g2 : Option (List Nat)) (body : List Nat)
    (elId tabId : Nat) (endTabPh : List Nat)
    (toks : List TokenEntry) :
    OptVal × List Nat × List TokenEntry :=
  let g1raw := g1.getD []
  let argString0 := trimBytes (g2.getD [])
  let ff := g1.isSome && singlePairShape (trimBytes g1raw)
  let argString := if ff then argString0 ++ [32] ++ g1raw else argString0
  let args0 := getAttrsBytes argString
  let args1 := if (lookupB args0 (litBytes "title")).isNone && !ff then
      omSetB args0 (litBytes "title") (trimBytes g1raw) else args0
  let title := tabTitle ((lookupB args1 (litBytes "title")).getD [])
  let args2 := omSetB args1 (litBytes "title") title
  let pairs : OptMap := args2.map (fun (k, v) => (utf8Decode k, textVal v))
  let entry : OptVal := OptVal.map
    (if (pairs.find? (fun kv => kv.1 == "tabId".toList)).isSome then
       omSet pairs "tabId".toList (OptVal.int (tabId : Int))
     else pairs ++ [("tabId".toList, OptVal.int (tabId : Int))])
  let tabStartPh := phBytes toks.length
  let t1 := toks ++ [{ rule := "Tabview", opts :=
    [("type".toList, OptVal.str "tabStart".toList),
     ("tabviewId".toList, OptVal.int (elId : Int)),
     ("tabId".toList, OptVal.int (tabId : Int))] }]
  (entry, tabStartPh ++ [10, 10] ++ body ++ [10, 10] ++ endTabPh, t1)

/-- The inner rewrite: preg_replace_callback semantics
    over the tab region, collecting the tab entries in
    match order (the per-view tab counter is the count of
    tabs handled so far). -/
def tabInnerScan (src : List Nat) (elId tabCounter : Nat)
    (endTabPh : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List OptVal × List TokenEntry
  | 0 => (src, [], toks)
  | fuel + 1 =>
    match src with
    | [] => ([], [], toks)
    | b :: rest =>
        match tabMatchAt src with
        | some (g1, g2, body, r) =>
            let (entry, repl, t1) :=
              handleTab g1 g2 body elId tabCounter endTabPh toks
            let (o, tabs, t) :=
              tabInnerScan r elId (tabCounter + 1) endTabPh t1 fuel
            (repl ++ o, entry :: tabs, t)
        | none =>
            let (o, tabs, t) :=
              tabInnerScan rest elId tabCounter endTabPh toks fuel
            (b :: o, tabs, t)

/-- process() for a Tabview match: the view id is the
    class static's pre-increment value; the two shared
    tabStart/tabEnd tokens are claimed first (in that
    order), then the inner rewrite claims one tabStart
    per tab, then the view's start token (carrying the
    class-only args and the tabs list) and its end token,
    and the static increments. The replacement emits the
    raw attribute group twice before the start token (a
    fossil shape the corrected reference retains) and
    wraps the rewritten region in blank lines. -/
def tabviewProcess (g1 : Option (List Nat)) (region : List Nat)
    (doc : DocState) (toks : List TokenEntry) :
    List Nat × List TokenEntry × DocState :=
  let elId := doc.tabviewCounter
  let attr := getAttrsBytes (g1.getD [])
  let args : OptMap := match lookupB attr (litBytes "class") with
    | some v =>
        if v.isEmpty || v == litBytes "0" then []
        else [("class".toList, textVal v)]
    | none => []
  let g1raw := g1.getD []
  let t1 := toks ++ [{ rule := "Tabview", opts :=
    [("type".toList, OptVal.str "tabStart".toList),
     ("tabviewId".toList, OptVal.int (elId : Int))] }]
  let endTabPh := phBytes t1.length
  let t2 := t1 ++ [{ rule := "Tabview", opts :=
    [("type".toList, OptVal.str "tabEnd".toList),
     ("tabviewId".toList, OptVal.int (elId : Int))] }]
  let (content', tabs, t3) :=
    tabInnerScan region elId 0 endTabPh t2 (region.length + 1)
  let startPh := phBytes t3.length
  let t4 := t3 ++ [{ rule := "Tabview", opts :=
    [("args".toList, OptVal.map args),
     ("type".toList, OptVal.str "start".toList),
     ("tabs".toList, OptVal.list tabs),
     ("tabviewId".toList, OptVal.int (elId : Int))] }]
  let endPh := phBytes t4.length
  let t5 := t4 ++ [{ rule := "Tabview", opts :=
    [("type".toList, OptVal.str "end".toList),
     ("tabviewId".toList, OptVal.int (elId : Int))] }]
  (g1raw ++ g1raw ++ startPh ++ [10, 10] ++ content' ++ [10, 10] ++
    endPh, t5, { doc with tabviewCounter := elId + 1 })

/-- One Tabview pass: preg_replace_callback semantics
    over the byte form, the outer pattern attempted only
    at line starts (its `^` under /m). A match ends with
    a space run or the closer, never a newline, so the
    position after a match is never a line start. -/
def tabviewScan (src : List Nat) (toks : List TokenEntry)
    (doc : DocState) (atStart : Bool) :
    Nat → List Nat × List TokenEntry × DocState
  | 0 => (src, toks, doc)
  | fuel + 1 =>
    match src with
    | [] => ([], toks, doc)
    | b :: rest =>
        match (if atStart then (tabviewMatchAt src).head? else none) with
        | some (g1, region, r) =>
            let (repl, t1, d1) := tabviewProcess g1 region doc toks
            let (o, t, d) := tabviewScan r t1 d1 false fuel
            (repl ++ o, t, d)
        | none =>
            let (o, t, d) := tabviewScan rest toks doc (b == 10) fuel
            (b :: o, t, d)

/-- Tabview's parse(): repeat the pass while the source
    changes. -/
def tabviewPasses (src : List Nat) (toks : List TokenEntry)
    (doc : DocState) : Nat → List Nat × List TokenEntry × DocState
  | 0 => (src, toks, doc)
  | fuel + 1 =>
      let (s', t', d') := tabviewScan src toks doc true (src.length + 1)
      if s' == src then (s', t', d') else tabviewPasses s' t' d' fuel

/-- The Tabview rule mirror. -/
def tabviewRule (st : ParseState) : ParseState :=
  let input := byteForm st.work
  let (bs', toks', doc') :=
    tabviewPasses input st.tokens st.doc (input.length + 2)
  { st with work := parseBytes bs', tokens := toks', doc := doc' }

/-! ## Worked examples

    Each is a computation the mirror performs, stated as a
    theorem and proved by `rfl`; they pin the shapes the
    R2 stage settled (the span elision, the size grammar,
    the scored div's separator handling, the counter
    discipline, the title rule, and the tabview token
    creation order) independently of the differential
    corpus. -/

/-- An unattributed span with a whitespace-only body is
    elided: no tokens, empty replacement. -/
theorem spanProcess_elides_empty :
    spanProcess none (litBytes "  ") [] = ([], []) := rfl

/-- A span claims its start token (id isolated first,
    then the whitelisted keys) and its end token, and
    splices the edge-trimmed body between them. -/
theorem spanProcess_claim_example :
    spanProcess (some (litBytes " id=\"x\" class=\"c\""))
        (litBytes " body ") [] =
      (phBytes 0 ++ litBytes "body" ++ phBytes 1,
       [{ rule := "Span", opts :=
          [("args".toList, OptVal.map
             [("id".toList, OptVal.str "u-x".toList),
              ("class".toList, OptVal.str "c".toList)]),
           ("type".toList, OptVal.str "start".toList)] },
        { rule := "Span", opts :=
          [("type".toList, OptVal.str "end".toList)] }]) := rfl

/-- The size grammar: numeric values with a unit, and the
    named sizes, are valid; an over-long numeric part and
    an upper-case unit are not. -/
theorem sizeValid_examples :
    sizeValid (litBytes "1em") = true ∧
    sizeValid (litBytes "xx-large") = true ∧
    sizeValid (litBytes "123456em") = false ∧
    sizeValid (litBytes "1EM") = false := ⟨rfl, rfl, rfl, rfl⟩

/-- An invalid size value returns the whole match
    unchanged and claims nothing. -/
theorem sizeProcess_invalid_identity :
    sizeProcess (litBytes " bogus") (litBytes "x")
        (litBytes "[[size bogus]]x[[/size]]") [] =
      (litBytes "[[size bogus]]x[[/size]]", []) := rfl

/-- The nested size shape is claimed inside-out: the
    outer match attempt at the head fails (its tempered
    body cannot cross the inner opener), while a match at
    the inner opener succeeds. -/
theorem sizeMatchAt_recursive_example :
    (sizeMatchAt (litBytes "[[size 1em]]a[[size 2em]]b[[/size]]c[[/size]]")).map
        (fun (g1, body, _, _) => (g1, body)) =
        some (litBytes "1em", litBytes "a[[size 2em]]b[[/size]]c") ∧
    (sizeMatchAt (litBytes "[[size 2em]]b[[/size]]")).map
        (fun (g1, body, _, _) => (g1, body)) =
        some (litBytes "2em", litBytes "b") := by decide

/-- The id isolation: a plain id gains the prefix, a
    leading-whitespace id gains the prefix and the
    separating space, and the empty value isolates to the
    empty string. -/
theorem isolateId_examples :
    isolateId (litBytes "foo") = some (litBytes "u-foo") ∧
    isolateId (litBytes " foo  bar ") = some (litBytes "u- foo bar") ∧
    isolateId [] = some [] := ⟨rfl, rfl, rfl⟩

/-- A scored div with a blank line in its body: the
    leading newline is emitted once and the blank-line
    run is removed, joining the surrounding text. -/
theorem divProcess_scored_example :
    divProcess [10] [95] none (litBytes "a\n\nb") [] =
      ([10] ++ phBytes 0 ++ litBytes "ab" ++ phBytes 1,
       [{ rule := "Div", opts :=
          [("args".toList, OptVal.map []),
           ("type".toList, OptVal.str "start".toList)] },
        { rule := "Div", opts :=
          [("type".toList, OptVal.str "end".toList)] }]) := rfl

/-- An empty unscored div with no effective argument is
    suppressed on live, but the pair is still claimed,
    flagged `vanished` on both tokens, in the unscored
    framing (REFCORR2 correction C-STAGE2-2; this replaces
    the R3.8-era characterization, under which no tokens
    were claimed and the following text was left to a
    fresh paragraph, which live's probes refuted). -/
theorem divProcess_vanished_pair :
    divProcess [10] [] none (litBytes " \n") [] =
      ([10, 10] ++ phBytes 0 ++ [10, 10] ++ litBytes " \n" ++
        [10, 10] ++ phBytes 1,
       [{ rule := "Div", opts :=
          [("args".toList, OptVal.map []),
           ("type".toList, OptVal.str "start".toList),
           ("vanished".toList, OptVal.bool true)] },
        { rule := "Div", opts :=
          [("type".toList, OptVal.str "end".toList),
           ("vanished".toList, OptVal.bool true)] }]) := rfl

/-- The argument construction emits live's order
    (REFCORR2 correction C-STAGE2-1): id first (through
    the isolation), then class, style, and the data-*
    attributes in authored order, however they were
    authored; the shape is probe diva-a5's and a6's. -/
theorem divArgs_emission_order :
    divArgs [(litBytes "style", litBytes "color:green"),
        (litBytes "id", litBytes "b"), (litBytes "class", litBytes "a"),
        (litBytes "data-z", litBytes "9"),
        (litBytes "data-a", litBytes "1")] =
      [("id".toList, some (litBytes "u-b")),
       ("class".toList, some (litBytes "a")),
       ("style".toList, some (litBytes "color:green")),
       ("data-z".toList, some (litBytes "9")),
       ("data-a".toList, some (litBytes "1"))] := rfl

/-- A collapsible claims both tokens with the counter's
    pre-increment value and leaves the counter one
    higher. -/
theorem collProcess_count_example :
    (collProcess [10] none (litBytes "x") {} []).2.2.collapsibleCount = 1 ∧
    ((collProcess [10] none (litBytes "x") {} []).2.1.map (·.opts)) =
      [[("args".toList, OptVal.map []),
        ("type".toList, OptVal.str "start".toList),
        ("count".toList, OptVal.int 0)],
       [("args".toList, OptVal.map []),
        ("type".toList, OptVal.str "end".toList),
        ("count".toList, OptVal.int 0)]] := ⟨rfl, rfl⟩

/-- A nested collapsible is claimed once, at the first
    closer: the match at the head ends there, leaving the
    trailing closer in the rest. -/
theorem collMatchAt_first_closer_example :
    collMatchAt (litBytes
      "[[collapsible]]a[[collapsible]]b[[/collapsible]]c[[/collapsible]]") =
      some ([], none, litBytes "a[[collapsible]]b",
        litBytes "c[[/collapsible]]") := rfl

/-- The tab title rule: the empty title is `untitled`,
    whitespace runs collapse, and a raw-code title is
    emptied. -/
theorem tabTitle_examples :
    tabTitle [] = litBytes "untitled" ∧
    tabTitle (litBytes "  a   b ") = litBytes "a b" ∧
    tabTitle (litBytes "@@x@@") = [] := ⟨rfl, rfl, rfl⟩

/-- A one-tab tabview claims its tokens in the reference's
    creation order — the shared tabStart and tabEnd first,
    then the tab's own tabStart, then the view's start
    (carrying the tabs list) and end — all with the view
    id the counter held, and leaves the counter one
    higher. -/
theorem tabviewProcess_token_order_example :
    (tabviewProcess none
      (litBytes "[[tab One]]body[[/tab]]\n") {} []).2.1.map (·.opts) =
      [[("type".toList, OptVal.str "tabStart".toList),
        ("tabviewId".toList, OptVal.int 0)],
       [("type".toList, OptVal.str "tabEnd".toList),
        ("tabviewId".toList, OptVal.int 0)],
       [("type".toList, OptVal.str "tabStart".toList),
        ("tabviewId".toList, OptVal.int 0),
        ("tabId".toList, OptVal.int 0)],
       [("args".toList, OptVal.map []),
        ("type".toList, OptVal.str "start".toList),
        ("tabs".toList, OptVal.list
          [OptVal.map [("title".toList, OptVal.str "One".toList),
                       ("tabId".toList, OptVal.int 0)]]),
        ("tabviewId".toList, OptVal.int 0)],
       [("type".toList, OptVal.str "end".toList),
        ("tabviewId".toList, OptVal.int 0)]] ∧
    (tabviewProcess none
      (litBytes "[[tab One]]body[[/tab]]\n") {} []).2.2.tabviewCounter = 1 :=
  ⟨rfl, rfl⟩

end LeanFtml
