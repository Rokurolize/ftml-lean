/-
  LeanFtml.NextRules — R3.4 mirrors of the Iftags, Comment, Iframe,
  Date, and Math parse rules (pipeline positions 10–14, after the
  Module family), modelled from the reference's corrected rule
  files (ref-php/text-wiki/Text/Wiki/Parse/Default/{Iftags,Comment,
  Iframe,Date,Math}.php) read together with the R2 stage record
  (conformance-refphp/R2-NEXT.md and the per-rule SECTION.md files
  under conformance-refphp/next/).

  ## The byte-form obligation, per rule

  All five rules run after token-producing rules, so all five
  mirrors work on the byte form through `applyByteRule` (Math uses
  the same data flow by hand, since it also moves document state
  and can abort the parse). What a placeholder can do inside each
  rule's matches:

  * Iftags: a match can neither start nor end inside a placeholder
    (the boundaries are the ASCII opener and closer literals, and a
    placeholder holds no `[` or `]` byte). The spec run `[^\]]*`
    and the body can span whole placeholders; the body is spliced
    back as bytes, and the gate reads only the page's tags, which
    are driver state, never source bytes.
  * Comment: matches are found by `preg_match_all` over the byte
    form; the opener `[!--` and the closer `--]` are ASCII and
    cannot fall inside a placeholder, but the dot-all body can span
    one, so a claimed Comment text can be `OptVal.bytes`. The
    line-start and line-tail computations run over the same bytes
    PHP's `strrpos`/`strpos` see, placeholders included; a
    placeholder holds no newline, space, or tab byte, so it breaks
    an indented line's whitespace prefix exactly as it does in PHP.
  * Iframe: the URL group can never contain a placeholder: both
    segment classes exclude the delimiter byte, so a placeholder
    ends the URL's final segment like any other excluded byte. The
    attribute tail `.*?` is dot-all and can span placeholders, so
    attribute values can be `OptVal.bytes`.
  * Date: the three patterns are case-sensitive and their `.`
    excludes the newline byte. A placeholder can sit in the numeric
    group's place (ending the digit run), inside pattern 2's lazy
    group, or inside an attribute value; attribute values can be
    `OptVal.bytes`. An attribute KEY spanning a placeholder is the
    one shape the wire protocol cannot carry (the PHP driver's
    encoding does not transform array keys, and `json_encode`
    fails on such a record on the PHP side); no corpus case
    produces one, and the stage report records the boundary.
  * Math: the pattern is anchored at line starts, and no line
    start falls inside a placeholder (it holds no newline). The
    label and attribute groups exclude the delimiter byte by their
    character classes; the body is dot-all and can span
    placeholders, so a claimed content can be `OptVal.bytes`, and
    the guard predicate scans the trimmed body bytes exactly as
    PHP's byte-level `preg_match` does.

  ## What is modelled

  Iftags and Iframe run through the base class's
  `preg_replace_callback`, so their matchers are explicit
  backtracking enumerations in PCRE's priority order, in the style
  of CodeRule; Iftags' body recursion is the pattern's `(?R)`.
  Comment's parse() is a hand-written `preg_match_all` plus a
  rebuild, translated mechanically. Date's regex is an array of
  three patterns, which the base class applies as three sequential
  `preg_replace_callback` passes over the evolving source; the
  mirror is three scans sharing one process(). Math's pattern is
  anchored and recursive like Code's, with two differences the
  mirror keeps visible: the closer must be preceded by a newline
  that is not part of the body, and a recursive unit is rejected
  when the text right after it matches `\s*\[\[/math\]\]` (the
  PCRE2 guard correction). Math's process() is the first that can
  fail: it initializes and increments `vars['math_id']` BEFORE the
  ProcessException guard is tested, and writes the equations map
  only after the guard passes; the mirror reproduces that order
  exactly, and the runner stops at a fatal state.
-/

import LeanFtml.TokenState
import LeanFtml.FrameRules
import LeanFtml.CodeRule
import LeanFtml.FormRawRules
import LeanFtml.ModuleRules

namespace LeanFtml

/-! ## Byte-level helpers for the NEXT family -/

/-- A decimal digit byte. -/
def isDigitByte (b : Nat) : Bool := 48 ≤ b && b ≤ 57

/-- The Math label character set: letters, digits, underscore (the
    pattern carries the /i modifier). -/
def isLabelByte (b : Nat) : Bool :=
  (97 ≤ b && b ≤ 122) || (65 ≤ b && b ≤ 90) ||
  (48 ≤ b && b ≤ 57) || b == 95

/-- The Math attribute-key character set: letters and digits (the
    pattern carries the /i modifier). -/
def isKeyByte (b : Nat) : Bool :=
  (97 ≤ b && b ≤ 122) || (65 ≤ b && b ≤ 90) || (48 ≤ b && b ≤ 57)

/-- Byte equality under PCRE's ASCII case folding (strcasecmp's
    equality on byte strings): same length, and each pair equal up
    to case. -/
def ciBytesEq (a b : List Nat) : Bool :=
  a.length == b.length &&
  (a.zip b).all (fun (x, y) => byteCiEq x y)

/-- PHP `stripslashes` on bytes: a backslash quotes the next byte
    (which is emitted literally, except `\0`, which emits the NUL
    byte); a trailing lone backslash is dropped. The byte twin of
    CodeRule's `stripslashes`. -/
def stripslashesB : List Nat → List Nat
  | [] => []
  | 92 :: c :: rest =>
      (if c == 48 then 0 else c) :: stripslashesB rest
  | 92 :: [] => []
  | c :: rest => c :: stripslashesB rest

/-- PHP `explode('="', s)` on bytes: split at every non-overlapping
    occurrence of the two-byte sequence `="`. Always returns at
    least one part. The byte twin of CodeRule's `explodeEq`. -/
def explodeEqB (s : List Nat) : List (List Nat) :=
  go s [] []
where
  go : List Nat → List Nat → List (List Nat) → List (List Nat)
    | [], cur, acc => (cur.reverse :: acc).reverse
    | 61 :: 34 :: rest, cur, acc => go rest [] (cur.reverse :: acc)
    | c :: rest, cur, acc => go rest (c :: cur) acc

/-- The last index of a byte in a list, if present. The byte twin
    of CodeRule's `lastIdxOf`. -/
def lastIdxOfB (x : Nat) (l : List Nat) : Option Nat :=
  go 0 none l
where
  go (i : Nat) (acc : Option Nat) : List Nat → Option Nat
    | [] => acc
    | c :: rest => go (i + 1) (if c == x then some i else acc) rest

/-- Assign a byte-string key the PHP way (see `omSet`). -/
def omSetB : List (List Nat × List Nat) → List Nat → List Nat →
    List (List Nat × List Nat)
  | [], k, v => [(k, v)]
  | (k', v') :: rest, k, v =>
      if k' == k then (k, v) :: rest else (k', v') :: omSetB rest k v

/-- Look up a byte-string key in an ordered pair list. -/
def lookupB : List (List Nat × List Nat) → List Nat → Option (List Nat)
  | [], _ => none
  | (k, v) :: rest, key => if k == key then some v else lookupB rest key

/-- The base class's `getAttrs` on bytes, returning the raw byte
    pairs (callers turn values into option values, since Iframe
    substitutes null for missing keys, Date copies every pair into
    the options, and Math looks one key up): split the (trimmed)
    text on `="`; the first part is the first key (trimmed); each
    later part contributes the value for the pending key —
    everything before its last `"`, passed through `stripslashesB`
    (if the part has no `"`, the value is empty, matching PHP's
    `substr($v, 0, false)`) — and the next key, the trimmed
    remainder after that quote (or after the part's first byte,
    matching `substr($v, false+1)` in the no-quote case). A key
    left pending at the end is dropped; assignments follow PHP
    array order (`omSetB`). The byte twin of CodeRule's `getAttrs`. -/
def getAttrsBytes (text : List Nat) : List (List Nat × List Nat) :=
  match explodeEqB (trimBytes text) with
  | [] => []
  | first :: rest => go rest (trimBytes first) []
where
  go : List (List Nat) → List Nat → List (List Nat × List Nat) →
      List (List Nat × List Nat)
    | [], _, acc => acc
    | part :: parts, key, acc =>
        let (value, nextKey) : List Nat × List Nat :=
          match lastIdxOfB 34 part with
          | some i =>
              (stripslashesB (part.take i), trimBytes (part.drop (i + 1)))
          | none => ([], trimBytes (part.drop 1))
        go parts nextKey (omSetB acc key value)

/-! ## Iftags -/

/-- Split a tag spec on runs of comma and space bytes (PHP's
    `preg_split(';[, ]+;', ...)`): empty pieces are kept, including
    at the ends, and the empty spec splits to one empty piece. -/
def splitSpec (s : List Nat) : List (List Nat) :=
  go s [] [] false
where
  go : List Nat → List Nat → List (List Nat) → Bool → List (List Nat)
    | [], cur, acc, _ => (cur.reverse :: acc).reverse
    | b :: rest, cur, acc, inSep =>
        if b == 44 || b == 32 then
          if inSep then go rest cur acc true
          else go rest [] (cur.reverse :: acc) true
        else go rest (b :: cur) acc false

/-- Iftags' gate: process()'s decision on the page's tags. The spec
    (group 1 as captured, `[]` when the group did not participate)
    is trimmed and split; pieces led by `+` are required, by `-`
    forbidden, anything else (including the empty piece) is an
    any-tag. The body is kept iff every required tag is present, no
    forbidden tag is present, and either there are no any-tags or
    at least one is present. Tag comparison is ASCII
    case-insensitive (the reference's `strcasecmp` closure,
    correction C1 in R2-NEXT.md). -/
def iftagsGate (tags : List (List Nat)) (spec : Option (List Nat)) :
    Bool :=
  let toks := splitSpec (trimBytes (spec.getD []))
  let hasTag (needle : List Nat) : Bool :=
    tags.any (fun t => ciBytesEq t needle)
  let (allT, noT, anyT) := toks.foldl (fun (a, n, y) t =>
    match t with
    | 43 :: r => (r :: a, n, y)
    | 45 :: r => (a, r :: n, y)
    | _ => (a, n, t :: y)) (([], [], []) :
      List (List Nat) × List (List Nat) × List (List Nat))
  if !allT.all hasTag then false
  else if noT.any hasTag then false
  else if anyT.isEmpty then true
  else anyT.any hasTag

mutual

/-- Enumerate the whole Iftags pattern's matches at the head of
    `s`, as (group 1, body, rest) in PCRE priority order. The spec
    group is tried present before absent; the two are disjoint (the
    present form opens with a whitespace byte, the absent with
    `]]`). The present form's `[^\]]*` run is maximal and forced:
    backtracking it would put a non-`]` byte where `]]` must
    stand. The fuel bounds backtracking-path depth as in
    CodeRule (`codeFuel`). -/
def iftagsPattern (src : List Nat) :
    Nat → List (Option (List Nat) × List Nat × List Nat)
  | 0 => []
  | fuel + 1 =>
    match matchLitCI (litBytes "[[iftags") src with
    | none => []
    | some r1 =>
        let present : List (Option (List Nat) × List Nat) :=
          match r1 with
          | w :: rest =>
              if isWsByte w then
                let run := rest.takeWhile (fun b => b != 93)
                match rest.drop run.length with
                | 93 :: 93 :: after => [(some (w :: run), after)]
                | _ => []
              else []
          | [] => []
        let absent : List (Option (List Nat) × List Nat) :=
          match r1 with
          | 93 :: 93 :: after => [(none, after)]
          | _ => []
        (present ++ absent).flatMap (fun (g1, r2) =>
          (iftagsBody r2 fuel).map (fun (body, r3) => (g1, body, r3)))

/-- Enumerate the Iftags body's completions at the head of `s`, as
    (body, rest) in PCRE priority order: the closer first, then
    extensions by one recursive match (the pattern's `(?R)`, each
    candidate in order), then by one character. The body is
    dot-all: any byte, newline included, can be consumed. -/
def iftagsBody (src : List Nat) :
    Nat → List (List Nat × List Nat)
  | 0 => []
  | fuel + 1 =>
    let tails : List (List Nat × List Nat) :=
      match matchLitCI (litBytes "[[/iftags]]") src with
      | some r => [([], r)]
      | none => []
    let recs : List (List Nat × List Nat) :=
      (iftagsPattern src fuel).flatMap (fun (_, _, r) =>
        (iftagsBody r fuel).map
          (fun (b, r') => (src.take (src.length - r.length) ++ b, r')))
    let charStep : List (List Nat × List Nat) :=
      match src with
      | [] => []
      | c :: rest =>
          (iftagsBody rest fuel).map (fun (b, r) => (c :: b, r))
    tails ++ recs ++ charStep

end

/-- The Iftags rule's scanner: preg_replace_callback semantics
    over the byte form; a match is replaced by its body when the
    gate keeps it, and by nothing when it does not. Iftags claims
    no token. -/
def iftagsScan (tags : List (List Nat)) (src : List Nat) :
    Nat → List Nat
  | 0 => []
  | fuel + 1 =>
    match src with
    | [] => []
    | b :: rest =>
        match (iftagsPattern src (codeFuel src.length)).head? with
        | some (g1, body, r) =>
            let repl := if iftagsGate tags g1 then body else []
            repl ++ iftagsScan tags r fuel
        | none => b :: iftagsScan tags rest fuel

/-- The Iftags rule mirror. The page's tags are document state
    (the Lean driver reads the case's "tags" array into
    `DocState.page`, exactly as the PHP drivers construct the
    RefPage from it); the fallback to `pageName`, the site object,
    and the page table runs only when no page object is set, which
    the harness never does, so the tag list is the only page field
    the mirror reads. -/
def iftagsRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    (iftagsScan (st.doc.page.tags.map (fun cs => cs.flatMap utf8Bytes))
      src (src.length + 1), toks))

/-! ## Comment -/

/-- A Comment match at the head of `src`: the pattern is
    `/(\n)?\[!--(.*?)--\]/si` — an optional leading newline (tried
    first, as PCRE's greedy `?` does; the two forms are disjoint,
    since the plain form needs `[` where the newline form needs
    the newline byte), the opener, and the lazy dot-all body up to
    the first `--]`. Returns the full match bytes. -/
def commentMatchAt (src : List Nat) : Option (List Nat) :=
  let plain : Option (List Nat) :=
    (matchLitBytes (litBytes "[!--") src).bind (fun r =>
      (findSub [45, 45, 93] r).map (fun k => src.take (4 + k + 3)))
  match src with
  | 10 :: rest =>
      match (matchLitBytes (litBytes "[!--") rest).bind (fun r =>
        (findSub [45, 45, 93] r).map (fun k => src.take (1 + 4 + k + 3))) with
      | some m => some m
      | none => plain
  | _ => plain

/-- All Comment matches in `src`, as (start offset, full match)
    pairs: `preg_match_all` semantics — leftmost, non-overlapping,
    resuming right after each match. -/
def commentMatches (src : List Nat) : List (Nat × List Nat) :=
  go src 0 (src.length + 1) []
where
  go : List Nat → Nat → Nat → List (Nat × List Nat) →
      List (Nat × List Nat)
    | _, _, 0, acc => acc.reverse
    | [], _, _, acc => acc.reverse
    | s@(b :: rest), off, fuel + 1, acc =>
        match commentMatchAt s with
        | some full =>
            go (s.drop full.length) (off + full.length) fuel
              ((off, full) :: acc)
        | none => go rest (off + 1) fuel acc

/-- The offset just after the last newline byte strictly before
    `start` in `src` (0 when there is none): PHP's
    `strrpos(substr($source, 0, $start), "\n") + 1`. -/
def lastNlBefore (src : List Nat) (start : Nat) : Nat :=
  go (src.take start) 0 0
where
  go : List Nat → Nat → Nat → Nat
    | [], _, acc => acc
    | b :: rest, i, acc => go rest (i + 1) (if b == 10 then i + 1 else acc)

/-- The Comment rule mirror: a mechanical translation of the
    reference's parse(). A match whose line prefix (back to the
    previous newline) is nonempty horizontal whitespace and whose
    line tail (up to the next newline or the end of the source) is
    all horizontal whitespace occupies an indented line of its
    own: the line's leading whitespace is removed with it and the
    match is claimed as a Comment token (which renders empty), so
    the line itself survives. Any other match is simply deleted.
    The `[!--` strpos guard is the reference's own early return. -/
def commentRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    if (findSub (litBytes "[!--") src).isNone then (src, toks)
    else
      let cmatches := commentMatches src
      let (out, t1, cursor) := cmatches.foldl
        (fun (out, t, cursor) (start, full) =>
          let ls := lastNlBefore src start
          let pfx := (src.drop ls).take (start - ls)
          let endPos := start + full.length
          let tailEnd := match findSub [10] (src.drop endPos) with
            | some k => endPos + k
            | none => src.length
          let tail := (src.drop endPos).take (tailEnd - endPos)
          let indented := !pfx.isEmpty &&
            pfx.all (fun b => b == 32 || b == 9) &&
            tail.all (fun b => b == 32 || b == 9)
          let removeFrom := if indented then ls else start
          let (repl, t') :=
            if indented then claimText "Comment" full t else ([], t)
          (out ++ (src.drop cursor).take (removeFrom - cursor) ++ repl,
           t', endPos))
        (([], toks, 0) : List Nat × List TokenEntry × Nat)
      (out ++ src.drop cursor, t1))

/-! ## Iframe -/

/-- The Iframe URL's intermediate-segment byte class: anything but
    space, `/`, double quote, single quote, or the delimiter byte.
    (Tab, newline, CR, and backslash are admitted — the rule
    file's own comment claims backslashes are excluded, but in the
    built regex the `\'` of the PHP string contributes an escaped
    quote, not a backslash, and the battery's backslash cases
    confirm admission; process() strips CR and LF from the
    claimed src for the same reason.) -/
def isSegByte (b : Nat) : Bool :=
  !(b == 32 || b == 47 || b == 34 || b == 39 || b == 0xFF)

/-- The Iframe URL's final-segment byte class: anything but space,
    tab, newline, `/`, double quote, or the delimiter byte. (CR,
    backslash, and the single quote are admitted.) -/
def isFinalByte (b : Nat) : Bool :=
  !(b == 32 || b == 9 || b == 10 || b == 47 || b == 34 || b == 0xFF)

/-- The recognized URL schemes, in the reference's order. -/
def iframeSchemes : List (List Nat) :=
  ["http://", "https://", "ftp://", "gopher://", "news://",
   "mailto:", "mms://"].map litBytes

/-- The end offsets of the complete intermediate segments at the
    head of `s`, ascending, starting with 0: `ends[k]` is the byte
    count of the first `k` segments, each a (possibly empty) run
    of segment bytes closed by a `/`. A segment's run is maximal
    and forced: backtracking it would put a segment byte where the
    closing `/` must stand, so segment boundaries are the only
    places the segment loop can stop. -/
def segEnds (s : List Nat) : List Nat :=
  go s 0 [0] (s.length + 1)
where
  go : List Nat → Nat → List Nat → Nat → List Nat
    | _, _, acc, 0 => acc.reverse
    | s, consumed, acc, fuel + 1 =>
        let run := s.takeWhile isSegByte
        match s.drop run.length with
        | 47 :: rest =>
            go rest (consumed + run.length + 1)
              ((consumed + run.length + 1) :: acc) fuel
        | _ => acc.reverse

/-- The Iframe pattern's tail at `r4`, with `url` the URL group
    already matched: the attribute group present first — its `\s+`
    longest first, then its lazy `.*?` grown to each `]]` in order
    (dot-all: any bytes, placeholders included) — then the group
    absent (the closer immediately). Returns (url, group 2, rest);
    group 2 is the raw group bytes, leading whitespace included, or
    `none` when the group does not participate. -/
def iframeTail (r4 : List Nat) (url : List Nat) :
    Option (List Nat × Option (List Nat) × List Nat) :=
  let present : Option (List Nat × Option (List Nat) × List Nat) :=
    let wsRun := r4.takeWhile isWsByte
    if wsRun.isEmpty then none
    else (List.range wsRun.length).reverse.findSome? (fun k =>
      let r5 := r4.drop (k + 1)
      (close2Suffixes r5).findSome? (fun sfx =>
        some (url, some (r4.take (r4.length - sfx.length)),
          sfx.drop 2)))
  match present with
  | some m => some m
  | none =>
      match r4 with
      | 93 :: 93 :: rest => some (url, none, rest)
      | _ => none

/-- A whole Iframe match at the head of `src`, in PCRE priority
    order: the `\s+` after the opener longest first; the scheme in
    the reference's order (no two schemes are prefixes of one
    another, so at most one can match); the segment count from the
    maximum down; the final segment lazy, grown one byte at a
    time; the attribute tail as in `iframeTail`. Returns (group 1,
    group 2, rest). -/
def iframeMatch (src : List Nat) :
    Option (List Nat × Option (List Nat) × List Nat) :=
  match matchLitCI (litBytes "[[iframe") src with
  | none => none
  | some r0 =>
      let wsRun := r0.takeWhile isWsByte
      if wsRun.isEmpty then none
      else (List.range wsRun.length).reverse.findSome? (fun k =>
        let r1 := r0.drop (k + 1)
        iframeSchemes.findSome? (fun sch =>
          (matchLitCI sch r1).bind (fun r2 =>
            let ends := segEnds r2
            ends.reverse.findSome? (fun e =>
              let r3 := r2.drop e
              let finalRun := r3.takeWhile isFinalByte
              (List.range (finalRun.length + 1)).findSome? (fun fl =>
                iframeTail (r3.drop fl)
                  (r1.take (sch.length + e + fl)))))))

/-- process() for an Iframe match: the src is group 1 with all CR
    and LF bytes stripped (the reference's correction for the
    greedy segment classes admitting them); the options are src
    followed by exactly align, frameborder, height, scrolling,
    width, class, style — each the getAttrs value of that key, or
    null when the key is absent (the reference reads the missing
    key under a suppressed warning). Other attribute keys are
    dropped. -/
def iframeProcess (url : List Nat) (g2 : Option (List Nat))
    (toks : List TokenEntry) : List Nat × List TokenEntry :=
  let srcOpt := url.filter (fun b => b != 13 && b != 10)
  let attrs := getAttrsBytes (g2.getD [])
  let keys : List (List Nat) :=
    ["align", "frameborder", "height", "scrolling", "width",
     "class", "style"].map litBytes
  let opts : OptMap := ("src".toList, textVal srcOpt) ::
    keys.map (fun k => (utf8Decode k,
      match lookupB attrs k with
      | some v => textVal v
      | none => OptVal.null))
  (phBytes toks.length, toks ++ [{ rule := "Iframe", opts := opts }])

/-- The Iframe rule's scanner: preg_replace_callback semantics
    over the byte form. -/
def iframeScan (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => ([], toks)
  | fuel + 1 =>
    match src with
    | [] => ([], toks)
    | b :: rest =>
        match iframeMatch src with
        | some (url, g2, r) =>
            let (ph, t1) := iframeProcess url g2 toks
            let (o, t) := iframeScan r t1 fuel
            (ph ++ o, t)
        | none =>
            let (o, t) := iframeScan rest toks fuel
            (b :: o, t)

/-- The Iframe rule mirror. -/
def iframeRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks => iframeScan src toks (src.length + 1))

/-! ## Date -/

/-- The `]]`-starting suffixes of `r` whose preceding text (the
    lazy group's span) contains no newline byte: the candidates
    for the end of a `.`-based lazy group, in PCRE's enumeration
    order (`.` excludes the newline without the /s modifier). -/
def close2SuffixesNoNl (r : List Nat) : List (List Nat) :=
  let limit := (findSub [10] r).getD r.length
  (close2Suffixes r).filter (fun sfx => r.length - sfx.length ≤ limit)

/-- Pattern 1's tail at `r2`, with group 1 already matched: the
    attribute group present first — its `\s+` longest first, then
    its lazy `.*?` grown to each `]]` in order — then the group
    absent. Returns (group 1, group 2, rest) in the uniform shape
    `dateProcess` consumes. -/
def dateG1Tail (r2 : List Nat) (g1 : List Nat) :
    Option (Option (List Nat) × Option (List Nat) × List Nat) :=
  let present : Option (Option (List Nat) × Option (List Nat) ×
      List Nat) :=
    let wsRun := r2.takeWhile isWsByte
    if wsRun.isEmpty then none
    else (List.range wsRun.length).reverse.findSome? (fun k =>
      let r3 := r2.drop (k + 1)
      (close2SuffixesNoNl r3).findSome? (fun sfx =>
        some (some g1, some (r2.take (r2.length - sfx.length)),
          sfx.drop 2)))
  match present with
  | some m => some m
  | none =>
      match r2 with
      | 93 :: 93 :: rest => some (some g1, none, rest)
      | _ => none

/-- Date pattern 1, `\[\[date\s+(-?[0-9]+)(\s+.*?)?\]\]`, at the
    head of `src` (case-sensitive: none of the three patterns
    carries a modifier). The `\s+` is longest first (only the
    maximal run can precede a digit or `-`, but the enumeration is
    kept mechanical); the digit run is maximal and forced, since
    giving a digit back would put it where `\s` or `]]` must
    stand. -/
def dateMatch1 (src : List Nat) :
    Option (Option (List Nat) × Option (List Nat) × List Nat) :=
  match matchLitBytes (litBytes "[[date") src with
  | none => none
  | some r0 =>
      let wsRun := r0.takeWhile isWsByte
      if wsRun.isEmpty then none
      else (List.range wsRun.length).reverse.findSome? (fun k =>
        let r1 := r0.drop (k + 1)
        let (neg, r1') : Bool × List Nat := match r1 with
          | 45 :: rest => (true, rest)
          | _ => (false, r1)
        let digs := r1'.takeWhile isDigitByte
        if digs.isEmpty then none
        else dateG1Tail (r1'.drop digs.length)
          ((if neg then [45] else []) ++ digs))

/-- Date pattern 2, `\[\[date\s+(?=\s|\]\])\s*(.*?)\]\]`, at the
    head of `src`. The `\s+` is backtracked against the lookahead:
    a run length is viable only when the byte after it is
    whitespace or the closer follows. Then `\s*` in greedy order,
    then the lazy group grown to each `]]`. Group 1 always
    participates (possibly empty). -/
def dateMatch2 (src : List Nat) :
    Option (Option (List Nat) × Option (List Nat) × List Nat) :=
  match matchLitBytes (litBytes "[[date") src with
  | none => none
  | some r0 =>
      let wsRun := r0.takeWhile isWsByte
      if wsRun.isEmpty then none
      else (List.range wsRun.length).reverse.findSome? (fun k =>
        let r1 := r0.drop (k + 1)
        let laOk : Bool :=
          (match r1 with
           | b :: _ => isWsByte b
           | [] => false) || r1.take 2 == [93, 93]
        if !laOk then none
        else
          let wsRun2 := r1.takeWhile isWsByte
          (List.range (wsRun2.length + 1)).reverse.findSome? (fun k2 =>
            let r2 := r1.drop k2
            (close2SuffixesNoNl r2).findSome? (fun sfx =>
              some (some (r2.take (r2.length - sfx.length)), none,
                sfx.drop 2))))

/-- Date pattern 3, `\[\[date\s+\]\]`, at the head of `src`: the
    whitespace run is maximal and forced (a shorter run leaves a
    whitespace byte where `]]` must stand). Neither group
    participates. In practice pattern 2 matches every input this
    pattern could (its lookahead admits the closer), so this pass
    is a shadow of pattern 2's; it is modelled anyway, as the
    reference applies it. -/
def dateMatch3 (src : List Nat) :
    Option (Option (List Nat) × Option (List Nat) × List Nat) :=
  match matchLitBytes (litBytes "[[date") src with
  | none => none
  | some r0 =>
      let wsRun := r0.takeWhile isWsByte
      if wsRun.isEmpty then none
      else match r0.drop wsRun.length with
        | 93 :: 93 :: rest => some (none, none, rest)
        | _ => none

/-- Does a captured value match `/^-?[0-9]+$/` (process()'s
    numeric test)? -/
def dateNumeric (g1 : List Nat) : Bool :=
  match g1 with
  | 45 :: ds => !ds.isEmpty && ds.all isDigitByte
  | ds => !ds.isEmpty && ds.all isDigitByte

/-- process() shared by Date's three patterns: the timestamp is
    group 1 when it participated and is numeric, else the empty
    string; the attribute text is group 2 in the numeric case
    (empty when it did not participate) and group 1 otherwise;
    the options are the timestamp followed by every getAttrs pair,
    assigned in order (so an attribute literally named `timestamp`
    overwrites the timestamp in its slot, as PHP array assignment
    does). -/
def dateProcess (g1 : Option (List Nat)) (g2 : Option (List Nat))
    (toks : List TokenEntry) : List Nat × List TokenEntry :=
  let numeric : Bool := match g1 with
    | some v => dateNumeric v
    | none => false
  let timestamp := if numeric then g1.getD [] else []
  let attrText := if numeric then g2.getD [] else g1.getD []
  let attrs := getAttrsBytes attrText
  let opts : OptMap := attrs.foldl
    (fun m (k, v) => omSet m (utf8Decode k) (textVal v))
    [("timestamp".toList, textVal timestamp)]
  (phBytes toks.length, toks ++ [{ rule := "Date", opts := opts }])

/-- One Date pass: preg_replace_callback semantics over the byte
    form with the given pattern matcher. -/
def dateScan
    (matcher : List Nat →
      Option (Option (List Nat) × Option (List Nat) × List Nat))
    (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => ([], toks)
  | fuel + 1 =>
    match src with
    | [] => ([], toks)
    | b :: rest =>
        match matcher src with
        | some (g1, g2, r) =>
            let (ph, t1) := dateProcess g1 g2 toks
            let (o, t) := dateScan matcher r t1 fuel
            (ph ++ o, t)
        | none =>
            let (o, t) := dateScan matcher rest toks fuel
            (b :: o, t)

/-- The Date rule mirror: the reference's regex is an array of
    three patterns, which the base parse() applies as three
    sequential preg_replace_callback passes over the evolving
    source; the mirror is the three scans in order, each on the
    previous pass's output, placeholders of earlier passes
    included. -/
def dateRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    let (s1, t1) := dateScan dateMatch1 src toks (src.length + 1)
    let (s2, t2) := dateScan dateMatch2 s1 t1 (s1.length + 1)
    dateScan dateMatch3 s2 t2 (s2.length + 1))

/-! ## Math -/

/-- The maximal Math attribute-chunk sequence at the head of
    `s`, as (end offset, chunk bytes) pairs ascending, starting
    with (0, []): entry `k` is the byte count of the first `k`
    chunks of group 2 together with the k-th chunk's own bytes.
    Each chunk is `\s+[a-z0-9]+="[^"]*"` (case-insensitive key).
    A chunk's parts are maximal and forced — the whitespace run
    cannot give back (the key would face a whitespace byte), the
    key run cannot give back (`="` would face a key byte), and
    the value runs to the first `"` — so the sequence is
    deterministic; the star's backtracking is the chunk count
    descending, which `mathAttrs` enumerates.

    The chunk bytes are carried because of a capture subtlety
    process() depends on: group 2 is a repeated capture, so
    `$matches[2]` holds only its LAST iteration — when the star
    matched k chunks, process() sees the k-th chunk alone, not
    the concatenation (the battery's type-not-last case: with
    `type="align" foo="bar"` the visible group is ` foo="bar"`,
    the type key is absent, and the type defaults to align). -/
def mathAttrChunks (s : List Nat) : List (Nat × List Nat) :=
  go s 0 [(0, [])] (s.length + 1)
where
  go : List Nat → Nat → List (Nat × List Nat) → Nat →
      List (Nat × List Nat)
    | _, _, acc, 0 => acc.reverse
    | s, base, acc, fuel + 1 =>
        let wsRun := s.takeWhile isWsByte
        if wsRun.isEmpty then acc.reverse
        else
          let after1 := s.drop wsRun.length
          let keyRun := after1.takeWhile isKeyByte
          if keyRun.isEmpty then acc.reverse
          else
            let after2 := after1.drop keyRun.length
            match after2 with
            | 61 :: 34 :: after3 =>
                let val := after3.takeWhile (fun b => b != 34)
                match after3.drop val.length with
                | 34 :: after4 =>
                    let e := base + (s.length - after4.length)
                    go after4 e
                      ((e, s.take (s.length - after4.length)) :: acc)
                      fuel
                | _ => acc.reverse
            | _ => acc.reverse

/-- Group 2 plus the head's closing `\s*\]\]` at `s`, as (group 2
    raw bytes, group 2 as process() sees it — the last matched
    chunk alone, [] when the star matched zero chunks — rest) in
    PCRE priority order: the chunk count from the maximum down,
    and for each count the `\s*` longest first (only the maximal
    run can precede `]]`, but the enumeration is kept
    mechanical). -/
def mathAttrs (s : List Nat) :
    List (List Nat × List Nat × List Nat) :=
  let chunks := mathAttrChunks s
  chunks.reverse.flatMap (fun (e, lastChunk) =>
    let after := s.drop e
    let wsRun := after.takeWhile isWsByte
    (List.range (wsRun.length + 1)).reverse.filterMap (fun k =>
      match after.drop k with
      | 93 :: 93 :: rest => some (s.take e, lastChunk, rest)
      | _ => none))

/-- The Math head at `r0` (the subject right after `[[math`), as
    (group 1, group 2, rest) in PCRE priority order: group 1
    present before absent (the greedy `?`); within the present
    form, the `\s+` longest first and the label lazy (grown one
    byte at a time), with `mathAttrs` completing each candidate. -/
def mathHead (r0 : List Nat) :
    List (Option (List Nat) × List Nat × List Nat) :=
  let present : List (Option (List Nat) × List Nat × List Nat) :=
    match r0 with
    | w :: _ =>
        if isWsByte w then
          let wsRun := r0.takeWhile isWsByte
          (List.range wsRun.length).reverse.flatMap (fun k =>
            let after1 := r0.drop (k + 1)
            let labelRun := after1.takeWhile isLabelByte
            (List.range (labelRun.length + 1)).flatMap (fun ll =>
              let after2 := after1.drop ll
              (mathAttrs after2).map (fun (_, lastChunk, r) =>
                (some (r0.take (k + 1 + ll)), lastChunk, r))))
        else []
    | [] => []
  let absent : List (Option (List Nat) × List Nat × List Nat) :=
    (mathAttrs r0).map (fun (_, lastChunk, r) => (none, lastChunk, r))
  present ++ absent

/-- Does the text at the head of `r` match `\s*\[\[/math\]\]`
    (case-insensitive)? The `\s*` is deterministic here: a shorter
    run would put a whitespace byte where `[[` must stand, so the
    literal is tested right after the maximal run. This is the
    negative lookahead the PCRE2 guard correction puts after a
    recursive Math unit. -/
def lookaheadCloser (r : List Nat) : Bool :=
  (matchLitCI (litBytes "[[/math]]")
    (r.drop (r.takeWhile isWsByte).length)).isSome

mutual

/-- Enumerate the whole Math pattern's matches at the head of
    `s`, as (group 1, group 2, body, rest) in PCRE priority order.
    The pattern opens with the `^` anchor (multiline), so a match
    is possible only at a line start, for recursive attempts
    exactly as for top-level ones. The body's initial position
    follows the head's `]]`, so it is never itself a line start. -/
def mathPattern (s : List Nat) (atLineStart : Bool) :
    Nat → List (Option (List Nat) × List Nat × List Nat × List Nat)
  | 0 => []
  | fuel + 1 =>
    if !atLineStart then []
    else
      match matchLitCI (litBytes "[[math") s with
      | none => []
      | some r0 =>
          (mathHead r0).flatMap (fun (g1, g2, r1) =>
            (mathBody r1 false fuel).map
              (fun (body, r2) => (g1, g2, body, r2)))

/-- Enumerate the Math body's completions at the head of `s`, as
    (body, rest) in PCRE priority order: the terminator first —
    a newline byte that is NOT part of the body, the closer, and
    group 4, whose alternatives are one whitespace byte (the `\s`
    of `(\s|$)`), then end-of-subject or right before a newline
    (the multiline `$`) — then extensions by one recursive match
    whose following text does not match the closer lookahead,
    then by one character. The body is dot-all. -/
def mathBody (s : List Nat) (lineStart : Bool) :
    Nat → List (List Nat × List Nat)
  | 0 => []
  | fuel + 1 =>
    let tails : List (List Nat × List Nat) :=
      match s with
      | 10 :: rest =>
          match matchLitCI (litBytes "[[/math]]") rest with
          | none => []
          | some r0 =>
              let viaWs : List (List Nat × List Nat) :=
                match r0 with
                | c :: t => if isWsByte c then [([], t)] else []
                | [] => []
              let viaEnd : List (List Nat × List Nat) :=
                if r0.isEmpty || r0.head? == some 10 then [([], r0)]
                else []
              viaWs ++ viaEnd
      | _ => []
    let recs : List (List Nat × List Nat) :=
      (mathPattern s lineStart fuel).flatMap (fun (_, _, _, r) =>
        if lookaheadCloser r then []
        else (mathBody r
          ((s.take (s.length - r.length)).getLast? == some 10)
          fuel).map
          (fun (b, r') => (s.take (s.length - r.length) ++ b, r')))
    let charStep : List (List Nat × List Nat) :=
      match s with
      | [] => []
      | c :: rest =>
          (mathBody rest (c == 10) fuel).map (fun (b, r) => (c :: b, r))
    tails ++ recs ++ charStep

end

/-- The ProcessException guard predicate on the trimmed body:
    `preg_match(';include\s*\{|input\s*\{;is', $content)` — the
    word `include` or `input` (case-insensitive), then whitespace
    (PCRE `\s`, newlines included), then `{`, anywhere in the
    content. -/
def mathGuard (content : List Nat) : Bool :=
  go content
where
  go : List Nat → Bool
    | [] => false
    | s@(_ :: rest) =>
        let braceAfter (r : List Nat) : Bool :=
          (r.drop (r.takeWhile isWsByte).length).head? == some 123
        let hit : Bool :=
          match matchLitCI (litBytes "include") s with
          | some r => braceAfter r
          | none =>
              match matchLitCI (litBytes "input") s with
              | some r => braceAfter r
              | none => false
        hit || go rest

/-- Assign an equation label the PHP way (see `omSet`): the map
    is PHP's `$equationsArray`, whose string keys keep insertion
    order. -/
def eqSet (m : List (List Char × Nat)) (k : List Char) (v : Nat) :
    List (List Char × Nat) :=
  match m with
  | [] => [(k, v)]
  | (k', v') :: rest =>
      if k' == k then (k, v) :: rest else (k', v') :: eqSet rest k v

/-- process() for a Math match, with its failure: `g2` is group
    2 as process() receives it — the repeated capture's last
    chunk alone (see `mathAttrChunks`). The counter is
    initialized (to 1) and incremented BEFORE the guard is tested,
    so a throwing call still moves `mathId`; the equations map is
    written only after the guard passes. Returns the token (or
    `none` when the guard fires) and the new document state. The
    type is getAttrs' `type` value VERBATIM when that key is
    present (REFCORR3 C-SUSPECT-SERVING-1: no case-folding and no
    whitelist — an empty or upper-case value is preserved here and
    rejected later by the renderer); an ABSENT key defaults to
    `align`. -/
def mathProcess (g1 : Option (List Nat)) (g2 : List Nat)
    (g3 : List Nat) (doc : DocState) : Option TokenEntry × DocState :=
  let id := doc.mathId.getD 1
  let doc1 : DocState := { doc with mathId := some (id + 1) }
  let label := trimBytes (g1.getD [])
  let content := trimBytes g3
  if mathGuard content then (none, doc1)
  else
    let attrs := getAttrsBytes g2
    let tyVal : OptVal := match lookupB attrs (litBytes "type") with
      | some v => textVal v
      | none => OptVal.str "align".toList
    let entry : TokenEntry := { rule := "Math", opts :=
      [("label".toList, textVal label),
       ("content".toList, textVal content),
       ("id".toList, OptVal.int (id : Int)),
       ("type".toList, tyVal)] }
    (some entry,
     { doc1 with equations := eqSet doc1.equations (utf8Decode label) id })

/-- The Math rule's scanner: preg_replace_callback semantics over
    the byte form, with the parse-fatal abort. `input` is the
    rule's whole input byte string: when a process() call throws,
    PHP's assignment of the rewritten source never happens, so the
    state keeps the rule's input source — while the token claims
    and document mutations of the calls that already ran (and the
    throwing call's counter increment) persist, which is what the
    abort return carries. The final flag is the fatal marker.
    `prev` is the subject byte before `src` (the `^` anchor's
    line-start lookbehind). -/
def mathScan (input : List Nat) (src : List Nat) (prev : Option Nat)
    (toks : List TokenEntry) (doc : DocState) :
    Nat → List Nat × List TokenEntry × DocState × Bool
  | 0 => ([], toks, doc, false)
  | fuel + 1 =>
    match src with
    | [] => ([], toks, doc, false)
    | b :: rest =>
        let attempt :
            Option (Option (List Nat) × List Nat × List Nat × List Nat) :=
          if prev.isNone || prev == some 10 then
            (mathPattern src true (codeFuel src.length)).head?
          else none
        match attempt with
        | some (g1, g2, body, r) =>
            match mathProcess g1 g2 body doc with
            | (none, doc1) => (input, toks, doc1, true)
            | (some entry, doc1) =>
                let t1 := toks ++ [entry]
                let repl := [10, 10] ++ phBytes toks.length ++ [10, 10]
                let (o, t, d, f) :=
                  mathScan input r (lastConsumedByte src r) t1 doc1 fuel
                if f then (input, t, d, true) else (repl ++ o, t, d, f)
        | none =>
            let (o, t, d, f) :=
              mathScan input rest (some b) toks doc fuel
            if f then (input, t, d, true) else (b :: o, t, d, f)

/-- The Math rule mirror: applyByteRule's data flow by hand,
    since the rule also moves the document state and can abort
    the parse. -/
def mathRule (st : ParseState) : ParseState :=
  let input := byteForm st.work
  let (bs', toks', doc', fatal) :=
    mathScan input input none st.tokens st.doc (input.length + 1)
  { st with
    work := parseBytes bs', tokens := toks',
    doc := doc', fatal := st.fatal || fatal }

/-! ## Theorems -/

/-- Iftags claims no token: its rule returns the token table
    unchanged (the gate only keeps or drops body bytes). -/
theorem iftagsRule_tokens (st : ParseState) :
    (iftagsRule st).tokens = st.tokens := rfl

/-- The gate keeps a body whose required tag the page carries
    (case-insensitively split spec, `+` prefix). -/
theorem iftagsGate_keep_example :
    iftagsGate [litBytes "alpha"] (some (litBytes " +alpha")) = true :=
  rfl

/-- The gate drops the same body when the page lacks the tag. -/
theorem iftagsGate_drop_example :
    iftagsGate [litBytes "beta"] (some (litBytes " +alpha")) = false :=
  rfl

/-- A worked Comment match at the head of a source: opener, lazy
    body, closer. -/
theorem commentMatchAt_example :
    commentMatchAt (litBytes "[!--a--]rest")
      = some (litBytes "[!--a--]") := rfl

/-- A worked Iframe match: the URL group spans the scheme, one
    intermediate segment, and the lazy final segment; the
    attribute group does not participate. -/
theorem iframeMatch_example :
    iframeMatch (litBytes "[[iframe http://example.com/x]]")
      = some (litBytes "http://example.com/x", none, []) := rfl

/-- A worked Date pattern-1 match: a bare numeric timestamp with
    no attribute group. -/
theorem dateMatch1_example :
    dateMatch1 (litBytes "[[date 123]]")
      = some (some (litBytes "123"), none, []) := rfl

/-- The guard's pre-throw mutation: on a body whose trimmed form
    contains `\input{`, process() claims nothing, but the counter
    has still been initialized and incremented (mathId 2 from a
    fresh document). -/
theorem mathProcess_guard_example :
    (mathProcess none [] (litBytes "a \\input{b}") {}).1 = none ∧
    (mathProcess none [] (litBytes "a \\input{b}") {}).2.mathId
      = some 2 := ⟨rfl, rfl⟩

/-- REFCORR3 C-SUSPECT-SERVING-1: with no attribute group at all the
    type option is the new `align` default (not the old `equation`). -/
theorem mathProcess_absent_type_defaults_align :
    (match (mathProcess none [] (litBytes "x") {}).1 with
     | some e => omGet e.opts "type".toList
     | none => none) = some (OptVal.str "align".toList) := rfl

/-- REFCORR3 C-SUSPECT-SERVING-1: a present lower-case name outside
    the old two-name whitelist is preserved verbatim; no folding to
    `equation` happens. -/
theorem mathProcess_keeps_lowercase_type :
    (match (mathProcess none (litBytes "type=\"gather\"") (litBytes "x") {}).1 with
     | some e => omGet e.opts "type".toList
     | none => none) = some (OptVal.str "gather".toList) := rfl

end LeanFtml
