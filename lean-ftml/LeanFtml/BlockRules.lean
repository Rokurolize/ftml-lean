/-
  LeanFtml.BlockRules — R3.7 mirrors of the Blockquote, Heading,
  and Toc parse rules (pipeline positions 24–26, after Bibcite;
  the full order interposes the still-unmirrored Divprefilter,
  Anchor, and User between Bibcite and Blockquote, which the
  stage's consistency check accounts for), modelled from the
  reference's corrected rule files
  (ref-php/text-wiki/Text/Wiki/Parse/Default/{Blockquote,Heading,
  Toc}.php) read together with the R2 stage record
  (conformance-refphp/R2-BLOCK.md and the per-rule SECTION.md
  files under conformance-refphp/block/).

  ## The byte-form obligation, per rule

  All three rules run after token-producing rules, so the
  mirrors work on the byte form. What a placeholder can do
  inside each rule's matches:

  * Blockquote: the outer pattern is anchored by newline bytes
    and its captured run is a sequence of whole lines; a
    placeholder contains no newline byte, so it can sit inside
    a quote line's text (an earlier rule's claim on that line)
    but can never split a line or forge a marker. The inner
    line scan is line-based for the same reason. The token
    options carry only type and level, never text.
  * Heading: the pattern is line-anchored and its text group
    runs to the end of the line; a placeholder on the line is
    part of the text, so the stored text is a byte string (a
    claimed text, via `textVal`) whenever an earlier rule
    claimed a span of the heading line (a footnote body is the
    battery's shape).
  * Toc: the opener's attribute group sits on one line and can
    hold a placeholder inside an attribute value (the values go
    through `textVal`); the item texts it splices back are the
    Heading tokens' stored texts, byte strings carried through
    verbatim. The align group is two ASCII literals.

  ## What is modelled

  Blockquote is a `preg_replace_callback` scan whose captured
  run is re-scanned line by line by an inner `preg_match_all`;
  its process walks the matched lines with a depth stack,
  claiming start and end tokens and laying out the newlines
  around them, with the R2 corrections in force: an all-empty
  run is consumed but claims nothing (C2), and a pop emits two
  newlines after the end token (C3). The `[[blockquote]]` block
  form is literal on live and stays literal here by the rule's
  own limits: no pattern in this file matches it. Heading is a
  line-anchored scan; its process maintains the `headline_id`
  counter in the wiki vars (DocState.headlineId) and claims a
  start/end pair per heading, the start carrying the positional
  `toc<N>` id (or a null id and the distinct `start-notoc` type
  for the `*` form). Toc is a `preg_replace_callback` scan whose
  process reads the token table itself — every Heading token,
  in table order — and claims its list and item tokens around
  copies of the headings' raw texts; that read lives at parse
  time (not render), settled from the rule file. Toc's
  `currentFormat == 'xhtmleditable'` early return never fires
  in a parse context (the format is set only when rendering
  begins, and then to 'Xhtml'), so it is not modelled. The
  headline_id counter is not part of the compared state: the
  var's sole reader and writer in the reference is Heading's
  own process (a grep of the whole tree shows no other touch),
  and its whole observable effect is the id option on the start
  tokens it claims, which the token table already carries.
-/

import LeanFtml.TokenState
import LeanFtml.FrameRules
import LeanFtml.CodeRule
import LeanFtml.FormRawRules
import LeanFtml.ModuleRules
import LeanFtml.NextRules
import LeanFtml.NotesRules

namespace LeanFtml

/-- The byte form of an option value, for splicing a stored
    text back into the source (Toc copies Heading texts this
    way): a `str` value re-encodes as its UTF-8 bytes (the
    inverse of `textVal`'s decoding on reachable values), a
    `bytes` value is itself, anything else contributes
    nothing. -/
def optValBytes : OptVal → List Nat
  | .str cs => cs.flatMap utf8Bytes
  | .bytes bs => bs
  | _ => []

/-! ## Blockquote -/

/-- The length of a Blockquote captured run, counted from its
    first `>`: through the first newline whose following byte
    is not `>` (or the end of the string). The pattern's `.*`
    is dot-all and ungreedy with a negative lookahead for `>`,
    so every newline is a candidate end, in order, and the
    first one the lookahead passes ends the run. -/
def bqRunLength (bs : List Nat) : Nat → Option Nat
  | 0 => none
  | fuel + 1 =>
    match bs with
    | [] => none
    | 10 :: rest =>
        if rest.head? == some 62 then
          (bqRunLength rest fuel).map (· + 1)
        else some 1
    | _ :: rest => (bqRunLength rest fuel).map (· + 1)

/-- A Blockquote match at the head of `src`: the newline the
    pattern consumes first, then the captured run (group 1).
    Returns the run and the rest after the match. A quote run
    whose last line has no trailing newline never matches (no
    candidate end exists), exactly as in PCRE. -/
def blockquoteMatchAt (src : List Nat) : Option (List Nat × List Nat) :=
  match src with
  | 10 :: 62 :: _ =>
      (bqRunLength (src.drop 1) (src.length + 1)).map
        (fun n => ((src.drop 1).take n, src.drop (1 + n)))
  | _ => none

/-- Split a byte string into its lines, each keeping its
    trailing newline (the last piece keeps none if the string
    does not end with one; a captured quote run always ends
    with one). -/
def linesOf (bs : List Nat) : List (List Nat) := go bs (bs.length + 1)
where
  go : List Nat → Nat → List (List Nat)
    | _, 0 => []
    | [], _ => []
    | bs, fuel + 1 =>
        let line := bs.takeWhile (fun b => b != 10)
        match bs.drop line.length with
        | 10 :: r => (line ++ [10]) :: go r fuel
        | _ => [line]

/-- One inner line of a captured quote run, under the inner
    pattern `^(\>+) (.*\n)`: the marker run, a literal space,
    and the text (which keeps its trailing newline). Lines
    without the space after the marker run do not match the
    inner pattern at all; the outer match consumes them and
    the replacement drops them. -/
def bqLine (line : List Nat) : Option (Nat × List Nat) :=
  let markers := line.takeWhile (fun b => b == 62)
  if markers.isEmpty then none
  else
    match line.drop markers.length with
    | 32 :: text => some (markers.length, text)
    | _ => none

/-- The push phase for one quote line of the given level:
    while the level exceeds the stack depth, claim a start
    token preceded by a newline and followed by two. Every
    start token of the phase carries the LINE's level minus
    one (the reference reads `$level - 1` inside its loop, so
    a depth jump's start tokens all carry the same level; the
    battery's depth-skip case pins exactly this). -/
def bqPush (level : Nat) (stack : Nat) (toks : List TokenEntry)
    (acc : List Nat) : Nat → Nat × List TokenEntry × List Nat
  | 0 => (stack, toks, acc)
  | fuel + 1 =>
      if stack < level then
        let ph := phBytes toks.length
        let t1 := toks ++ [{ rule := "Blockquote", opts :=
          [("type".toList, OptVal.str "start".toList),
           ("level".toList, OptVal.int ((level : Int) - 1))] }]
        bqPush level (stack + 1) t1 (acc ++ [10] ++ ph ++ [10, 10]) fuel
      else (stack, toks, acc)

/-- The pop phase for one quote line: while the stack is
    deeper than the line's level, claim an end token carrying
    the stack depth after the pop, preceded and followed by
    two newlines (the trailing pair is correction C3). -/
def bqPop (level : Nat) (stack : Nat) (toks : List TokenEntry)
    (acc : List Nat) : Nat → Nat × List TokenEntry × List Nat
  | 0 => (stack, toks, acc)
  | fuel + 1 =>
      if level < stack then
        let ph := phBytes toks.length
        let t1 := toks ++ [{ rule := "Blockquote", opts :=
          [("type".toList, OptVal.str "end".toList),
           ("level".toList, OptVal.int ((stack : Int) - 1))] }]
        bqPop level (stack - 1) t1
          (acc ++ [10, 10] ++ ph ++ [10, 10]) fuel
      else (stack, toks, acc)

/-- The closing drain: an end token per remaining stack
    level, levels descending to 0, with no newlines between
    them (the caller emits the single newline before them). -/
def bqDrain (stack : Nat) (toks : List TokenEntry)
    (acc : List Nat) : Nat → List TokenEntry × List Nat
  | 0 => (toks, acc)
  | fuel + 1 =>
      if 0 < stack then
        let ph := phBytes toks.length
        let t1 := toks ++ [{ rule := "Blockquote", opts :=
          [("type".toList, OptVal.str "end".toList),
           ("level".toList, OptVal.int ((stack : Int) - 1))] }]
        bqDrain (stack - 1) t1 (acc ++ ph) fuel
      else (toks, acc)

/-- The replacement body a Blockquote process builds from its
    matched lines (the reference's `$return` before the outer
    newline wrap): per line, the push phase, the pop phase,
    and the line's text; after the last line, one newline and
    the drain. -/
def bqEmit (lines : List (Nat × List Nat)) (stack : Nat)
    (toks : List TokenEntry) (acc : List Nat) :
    Nat → List Nat × List TokenEntry
  | 0 => (acc, toks)
  | fuel + 1 =>
    match lines with
    | [] =>
        let (t1, acc1) := bqDrain stack toks (acc ++ [10]) (stack + 1)
        (acc1, t1)
    | (level, text) :: rest =>
        let (s1, t1, a1) := bqPush level stack toks acc (level + 1)
        let (s2, t2, a2) := bqPop level s1 t1 a1 (s1 + 1)
        bqEmit rest s2 t2 (a2 ++ text) fuel

/-- process() for a Blockquote match: correction C2 first —
    a run whose matched lines are all whitespace-only (or
    which has no matched lines at all) is replaced by two
    newlines and claims nothing. Otherwise the replacement
    is a newline, the emitted body, and two newlines. -/
def blockquoteProcess (run : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  let parsed := (linesOf run).filterMap bqLine
  if parsed.all (fun p => (trimBytes p.2).isEmpty) then
    ([10, 10], toks)
  else
    let (body, t1) := bqEmit parsed 0 toks [] (parsed.length + 1)
    ([10] ++ body ++ [10, 10], t1)

/-- The Blockquote rule's scanner: preg_replace_callback
    semantics over the byte form. -/
def blockquoteScan (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => (src, toks)
  | fuel + 1 =>
    match src with
    | [] => ([], toks)
    | b :: rest =>
        match blockquoteMatchAt src with
        | some (run, r) =>
            let (repl, t1) := blockquoteProcess run toks
            let (o, t) := blockquoteScan r t1 fuel
            (repl ++ o, t)
        | none =>
            let (o, t) := blockquoteScan rest toks fuel
            (b :: o, t)

/-- The Blockquote rule mirror. -/
def blockquoteRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks => blockquoteScan src toks (src.length + 1))

/-! ## Heading -/

/-- A Heading match on one line's content (no trailing
    newline): returns (level, hasToc, text). The plus run is
    the whole leading run and must be one to six long (a
    longer run leaves a `+` where the `*` or the whitespace
    must stand, on every backtracking path, so it never
    matches); the optional `*` is consumed first; then a run
    of at least one space or tab, consumed whole (correction
    C2). -/
def headingMatchLine (line : List Nat) :
    Option (Nat × Bool × List Nat) :=
  let pluses := line.takeWhile (fun b => b == 43)
  if pluses.isEmpty || 6 < pluses.length then none
  else
    let rest := line.drop pluses.length
    let (hasToc, rest1) : Bool × List Nat := match rest with
      | 42 :: r => (false, r)
      | _ => (true, rest)
    let ws := rest1.takeWhile (fun b => b == 32 || b == 9)
    if ws.isEmpty then none
    else some (pluses.length, hasToc, rest1.drop ws.length)

/-- process() for a Heading match: the counter initializes
    to 0 on first use, on any match (the reference assigns
    the var before it branches); a plain heading takes the
    id `toc` ++ counter and increments it, a `*` heading
    takes a null id and the distinct `start-notoc` type
    (correction C1) and does not increment. The replacement
    is a newline, the start token, the text, the end token,
    and two newlines. -/
def headingProcess (level : Nat) (hasToc : Bool) (text : List Nat)
    (doc : DocState) (toks : List TokenEntry) :
    List Nat × List TokenEntry × DocState :=
  let counter := doc.headlineId.getD 0
  let (idOpt, startType, counter') : OptVal × List Char × Nat :=
    if hasToc then
      (OptVal.str ("toc" ++ toString counter).toList, "start".toList,
       counter + 1)
    else (OptVal.null, "start-notoc".toList, counter)
  let startPh := phBytes toks.length
  let t1 := toks ++ [{ rule := "Heading", opts :=
    [("type".toList, OptVal.str startType),
     ("level".toList, OptVal.int (level : Int)),
     ("text".toList, textVal text),
     ("id".toList, idOpt)] }]
  let endPh := phBytes t1.length
  let t2 := t1 ++ [{ rule := "Heading", opts :=
    [("type".toList, OptVal.str "end".toList),
     ("level".toList, OptVal.int (level : Int))] }]
  ([10] ++ startPh ++ text ++ endPh ++ [10, 10], t2,
   { doc with headlineId := some counter' })

/-- The Heading rule's scanner: preg_replace_callback
    semantics over the byte form, one line at a time (the
    pattern is line-anchored and cannot span a newline, and
    replacements are never rescanned, so a line fold over
    the original lines is the same scan). -/
def headingScan (src : List Nat) (toks : List TokenEntry)
    (doc : DocState) : Nat → List Nat × List TokenEntry × DocState
  | 0 => (src, toks, doc)
  | fuel + 1 =>
    match src with
    | [] => ([], toks, doc)
    | _ =>
        let line := src.takeWhile (fun b => b != 10)
        let after := src.drop line.length
        let (sep, rest) : List Nat × List Nat := match after with
          | 10 :: r => ([10], r)
          | _ => ([], after)
        match headingMatchLine line with
        | some (level, hasToc, text) =>
            let (repl, t1, d1) :=
              headingProcess level hasToc text doc toks
            let (o, t, d) := headingScan rest t1 d1 fuel
            (repl ++ sep ++ o, t, d)
        | none =>
            let (o, t, d) := headingScan rest toks doc fuel
            (line ++ sep ++ o, t, d)

/-- The Heading rule mirror (by hand, since the rule moves
    the headline_id document state). -/
def headingRule (st : ParseState) : ParseState :=
  let input := byteForm st.work
  let (bs', toks', doc') :=
    headingScan input st.tokens st.doc (input.length + 1)
  { st with work := parseBytes bs', tokens := toks', doc := doc' }

/-! ## Toc -/

/-- The Toc pattern's attribute tail at the head of `s4`
    (the bytes right after the `toc` literal): the group
    `( .*)?` is tried present before absent. Present: a
    space, then a greedy `.*` — confined to the line, as
    `.` matches no newline — that backtracks to the LAST
    `]]` on the line (a quoted `]]` inside a value is
    therefore consumed into the group). Absent: `]]`
    immediately. Returns the group's raw bytes (or none)
    and the rest after the closing `]]`. -/
def tocTail (s4 : List Nat) : Option (Option (List Nat) × List Nat) :=
  let line := s4.takeWhile (fun b => b != 10)
  let present : Option (Option (List Nat) × List Nat) :=
    match s4 with
    | 32 :: _ =>
        match ((occurrences (litBytes "]]") line).filter
            (fun p => 1 ≤ p.1.length)).getLast? with
        | some (pre, _) => some (some pre, s4.drop (pre.length + 2))
        | none => none
    | _ => none
  match present with
  | some r => some r
  | none =>
      match s4 with
      | 93 :: 93 :: r => some (none, r)
      | _ => none

/-- A Toc match at the head of `src`, which the caller
    guarantees is a line start: the leading newline run
    (maximal — giving a newline back would put it where
    `[[` must stand, so no shorter run can match), the `[[`
    literal, the optional float group, the `toc` literal
    (case-sensitive: the pattern has no /i modifier), the
    attribute tail and closer, and the trailing newline
    run. Returns the align group, the raw attribute group,
    the rest after the match, and whether the match ended
    on a newline (which makes the next position a line
    start). -/
def tocMatchAt (src : List Nat) :
    Option (Option (List Nat) × Option (List Nat) × List Nat × Bool) :=
  let s1 := src.drop (countRun 10 src)
  (matchLitBytes (litBytes "[[") s1).bind (fun s2 =>
    let (align, s3) : Option (List Nat) × List Nat := match s2 with
      | 102 :: 60 :: r => (some (litBytes "f<"), r)
      | 102 :: 62 :: r => (some (litBytes "f>"), r)
      | _ => (none, s2)
    (matchLitBytes (litBytes "toc") s3).bind (fun s4 =>
      (tocTail s4).map (fun (g2, after) =>
        let trail := countRun 10 after
        (align, g2, after.drop trail, 0 < trail))))

/-- The item interior of a Toc replacement: for each
    Heading token of exact type `start`, in table order, an
    item_start token (carrying the heading's id and level
    and the running count), the heading's raw text bytes,
    and an item_end token. Headings of any other type
    (`start-notoc`, `end`) are skipped and do not consume a
    count. -/
def tocItems (heads : List TokenEntry) (toks : List TokenEntry)
    (count : Nat) : List Nat × List TokenEntry :=
  match heads with
  | [] => ([], toks)
  | h :: rest =>
      match omGet h.opts "type".toList with
      | some (OptVal.str ty) =>
          if ty == "start".toList then
            let idv := (omGet h.opts "id".toList).getD OptVal.null
            let lev := (omGet h.opts "level".toList).getD (OptVal.int 0)
            let text :=
              optValBytes ((omGet h.opts "text".toList).getD OptVal.null)
            let startPh := phBytes toks.length
            let t1 := toks ++ [{ rule := "Toc", opts :=
              [("type".toList, OptVal.str "item_start".toList),
               ("id".toList, idv),
               ("level".toList, lev),
               ("count".toList, OptVal.int (count : Int))] }]
            let endPh := phBytes t1.length
            let t2 := t1 ++ [{ rule := "Toc", opts :=
              [("type".toList, OptVal.str "item_end".toList),
               ("level".toList, lev)] }]
            let (o, t) := tocItems rest t2 (count + 1)
            (startPh ++ text ++ endPh ++ o, t)
          else tocItems rest toks count
      | _ => tocItems rest toks count

/-- process() for a Toc match: the list_start token (with
    the getAttrs map of the trimmed tail group and the
    align value), the item interior over every Heading
    token in the table, and the list_end token; the whole
    replacement is wrapped in two newlines on each side.
    The align value follows PHP's `$matches` construction
    exactly: the float group's string when it participated;
    otherwise `''` when a later group participated (the
    tail group, or the trailing-newline group by consuming
    at least one newline — `trailPos`), because PHP fills
    an unset group with `''` when a higher group is set;
    and null when no group after the float participated at
    all, because then the index is absent from `$matches`
    and the reference reads it as null (the battery's
    same-line-text and clear-float cases pin this). -/
def tocProcess (align : Option (List Nat)) (g2 : Option (List Nat))
    (trailPos : Bool) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  let attr : OptMap := match g2 with
    | some raw => (getAttrsBytes raw).map
        (fun (k, v) => (utf8Decode k, textVal v))
    | none => []
  let alignVal : OptVal := match align with
    | some a => OptVal.str (utf8Decode a)
    | none => if g2.isSome || trailPos then OptVal.str [] else OptVal.null
  let startPh := phBytes toks.length
  let t1 := toks ++ [{ rule := "Toc", opts :=
    [("type".toList, OptVal.str "list_start".toList),
     ("level".toList, OptVal.int 0),
     ("attr".toList, OptVal.map attr),
     ("align".toList, alignVal)] }]
  let (inside, t2) :=
    tocItems (toks.filter (fun t => t.rule == "Heading")) t1 0
  let endPh := phBytes t2.length
  let t3 := t2 ++ [{ rule := "Toc", opts :=
    [("type".toList, OptVal.str "list_end".toList),
     ("level".toList, OptVal.int 0),
     ("align".toList, alignVal)] }]
  ([10, 10] ++ startPh ++ inside ++ endPh ++ [10, 10], t3)

/-- The Toc rule's scanner: preg_replace_callback semantics
    over the byte form; a match is attempted only at a line
    start (the pattern's `^` with the multiline modifier),
    and after a match the scan resumes after it, at a line
    start exactly when the match consumed a trailing
    newline. -/
def tocScan (src : List Nat) (toks : List TokenEntry)
    (atStart : Bool) : Nat → List Nat × List TokenEntry
  | 0 => (src, toks)
  | fuel + 1 =>
    match src with
    | [] => ([], toks)
    | b :: rest =>
        match (if atStart then tocMatchAt src else none) with
        | some (align, g2, r, endedNl) =>
            let (repl, t1) := tocProcess align g2 endedNl toks
            let (o, t) := tocScan r t1 endedNl fuel
            (repl ++ o, t)
        | none =>
            let (o, t) := tocScan rest toks (b == 10) fuel
            (b :: o, t)

/-- The Toc rule mirror. -/
def tocRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks => tocScan src toks true (src.length + 1))

/-! ## Theorems -/

/-- A worked Blockquote match: the run of two quote lines,
    ending at the newline the lookahead passes. -/
theorem blockquoteMatchAt_example :
    blockquoteMatchAt (litBytes "\n> a\n> b\ntext")
      = some (litBytes "> a\n> b\n", litBytes "text") := rfl

/-- A worked Blockquote claim sequence on a depth jump: the
    second line's two start tokens both carry the line's
    level minus one, and the drain's ends descend to 0. -/
theorem blockquoteProcess_jump_example :
    (blockquoteProcess (litBytes "> a\n>>> b\n") []).2.map
        (fun t => (t.rule, t.opts.length))
      = [("Blockquote", 2), ("Blockquote", 2), ("Blockquote", 2),
         ("Blockquote", 2), ("Blockquote", 2), ("Blockquote", 2)] := rfl

/-- An all-empty quote run claims nothing (correction C2). -/
theorem blockquoteProcess_empty_example :
    blockquoteProcess (litBytes "> \n") [] = ([10, 10], []) := rfl

/-- A worked Heading line match: level, the no-toc star,
    and the text after the whole whitespace run. -/
theorem headingMatchLine_example :
    headingMatchLine (litBytes "++*  Title")
      = some (2, false, litBytes "Title") := rfl

/-- A seven-plus line never matches, on any backtracking
    path. -/
theorem headingMatchLine_seven_none :
    headingMatchLine (litBytes "+++++++ x") = none := rfl

/-- A worked Heading claim: the first plain heading takes
    id toc0 and leaves the counter at 1. -/
theorem headingProcess_first_example :
    (headingProcess 1 true (litBytes "A") {} []).2.2.headlineId
      = some 1 := rfl

/-- A worked Toc match: float group, attribute group, and
    the rest, with the trailing newline consumed. -/
theorem tocMatchAt_example :
    tocMatchAt (litBytes "[[f>toc title=\"T\"]]\nrest")
      = some (some (litBytes "f>"), some (litBytes " title=\"T\""),
          litBytes "rest", true) := rfl

/-- A worked Toc claim over one heading: the list and item
    tokens in claim order around the heading's text. -/
theorem tocProcess_one_example :
    (tocProcess none none false
      [{ rule := "Heading", opts :=
         [("type".toList, OptVal.str "start".toList),
          ("level".toList, OptVal.int 1),
          ("text".toList, OptVal.str "Alpha".toList),
          ("id".toList, OptVal.str "toc0".toList)] }]).2.map (·.rule)
      = ["Heading", "Toc", "Toc", "Toc", "Toc"] := rfl

end LeanFtml
