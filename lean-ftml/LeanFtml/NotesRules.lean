/-
  LeanFtml.NotesRules — R3.6 mirrors of the Footnote, Footnoteitem,
  Footnoteblock, Bibitem, Bibliography, and Bibcite parse rules
  (pipeline positions 18–23, after Equationreference), modelled
  from the reference's corrected rule files
  (ref-php/text-wiki/Text/Wiki/Parse/Default/{Footnote,Footnoteitem,
  Footnoteblock,Bibitem,Bibliography,Bibcite}.php) read together
  with the R2 stage record (conformance-refphp/R2-NOTES.md and the
  per-rule SECTION.md files under conformance-refphp/notes/).

  ## The byte-form obligation, per rule

  All six rules run after token-producing rules, so the claiming
  mirrors work on the byte form. What a placeholder can do inside
  each rule's matches:

  * Footnote: the opener and closer are ASCII literals and cannot
    fall inside a placeholder; the dot-all body can span whole
    placeholders, so the stored footnote body is a byte string
    (the document state carries it as bytes for exactly this
    reason). The pattern's leading `\s*` consumes the whitespace
    run before the opener; placeholder bytes are not whitespace,
    so a run stops at a placeholder exactly as it does in PHP.
  * Footnoteitem: no source match of its own (its `regex` is
    null, so the base `parse()` skips it); its tokens are created
    by Footnoteblock's process. The mirror is the identity.
  * Footnoteblock: the opener literal and its attribute group can
    sit anywhere in the source; the group `[^\]]+` can span whole
    placeholders (a title value can be `OptVal.bytes`). The
    collected footnote bodies it splices back are byte strings
    carrying their placeholders with them.
  * Bibitem: no source match of its own either; its process is
    called by Bibliography's walk with a single body line, whose
    bytes can contain whole placeholders (an entry value holding
    an earlier rule's claim). The stored entry body is a byte
    string.
  * Bibliography: the block opener is line-anchored and its
    closer must end a line; the body walk's definition and
    residual lines can contain whole placeholders, which are
    neither label bytes nor whitespace, so they pass through the
    walk's tests exactly as they do in PHP.
  * Bibcite: the label class `[a-z0-9]` (case-insensitive)
    excludes the delimiter byte, so a label can neither contain
    nor span a placeholder.

  ## What is modelled

  Footnote is a `preg_replace_callback` scan whose process appends
  the trimmed body to `vars['footnotes']` and claims a token
  carrying the sequential id. Footnoteblock overrides `parse()`
  with a single (limit 1) `preg_replace_callback` whose pattern
  matches the first `[[footnoteblock]]` or, failing that, the
  empty end-of-string anchor; its process claims the Footnoteitem
  start/end pairs around each collected body (in table order,
  before its own start token), or deletes the match when the
  collection is empty. Bibliography overrides `parse()` with a
  single line-anchored block match; its process walks the body
  with the alternation pattern, claiming a Bibliography `nl`
  token before each residual run (and after it when an entry
  follows), calling Bibitem's process for each definition line
  (which registers the entry and its id in the wiki vars and
  claims the entry token pair), and only then claiming its own
  start and end tokens. Bibcite is a plain scan; its process
  reads no state at parse time (the label lookup is render).
  The document state these rules move — the footnotes list, the
  bibitems map, and the bibitemIds map — is part of the compared
  state since this stage (the R3.6 extension, in the R3.4
  pattern).
-/

import LeanFtml.TokenState
import LeanFtml.FrameRules
import LeanFtml.CodeRule
import LeanFtml.FormRawRules
import LeanFtml.ModuleRules
import LeanFtml.NextRules

namespace LeanFtml

/-! ## Shared helpers -/

/-- Assign a byte-string key in an ordered pair list the PHP way
    (see `omSet`): an existing key keeps its position and takes
    the new value; a new key is appended. Used for the bibitems
    and bibitemIds maps, which are PHP associative arrays. -/
def bibSet {α : Type} : List (List Nat × α) → List Nat → α →
    List (List Nat × α)
  | [], k, v => [(k, v)]
  | (k', v') :: rest, k, v =>
      if k' == k then (k, v) :: rest else (k', v') :: bibSet rest k v

/-- The bibliography label byte class: ASCII letters and digits
    (the patterns carry the /i modifier). -/
def isBibLabelByte (b : Nat) : Bool :=
  (97 ≤ b && b ≤ 122) || (65 ≤ b && b ≤ 90) || (48 ≤ b && b ≤ 57)

/-- The optional attribute group `(\s+[^\]]+)?` followed by `]]`,
    at the head of `rest` (the bytes right after an opener
    literal): returns the group's raw bytes (`none` when the
    group does not participate) and the rest after `]]`. The
    group-present form is deterministic: `[^\]]+` stops at the
    first `]`, so the closing `]]` must start there, and the
    captured span is the whole text before it, which splits into
    a `\s+` prefix (at least one whitespace byte) and a `[^\]]+`
    remainder (at least one byte) exactly when the span has
    length ≥ 2 and starts with whitespace. The two forms are
    disjoint (the absent form needs `]]` immediately, which makes
    the span empty). Shared by Footnoteblock and Bibliography,
    whose head groups have this shape. -/
def attrGroupB (rest : List Nat) : Option (Option (List Nat) × List Nat) :=
  match rest with
  | 93 :: 93 :: r => some (none, r)
  | _ =>
      match findSub [93] rest with
      | some j =>
          if rest[j + 1]? == some 93 then
            let span := rest.take j
            if (span.takeWhile isWsByte).length ≥ 1 && span.length ≥ 2
            then some (some span, rest.drop (j + 2))
            else none
          else none
      | none => none

/-- A token option for a block title: the `getAttrs` value of the
    `title` key as a claimed text, or null when the key is absent
    (the reference reads the missing key under a suppressed
    warning). Shared by Footnoteblock and Bibliography. -/
def titleOpt (g : Option (List Nat)) : OptVal :=
  match lookupB (getAttrsBytes (g.getD [])) (litBytes "title") with
  | some v => textVal v
  | none => OptVal.null

/-! ## Footnote -/

/-- A Footnote match at the head of `src`: the pattern is
    `\s*\[\[footnote\]\](.*?)\[\[/footnote\]\]` with the dot-all
    modifier, case-sensitive. The `\s*` is longest first (only
    the maximal run can precede the opener, since a shorter run
    leaves a whitespace byte where `[[` must stand); the lazy
    body runs to the first closer. Returns the body and the rest. -/
def footnoteMatchAt (src : List Nat) : Option (List Nat × List Nat) :=
  let wsRun := src.takeWhile isWsByte
  (List.range (wsRun.length + 1)).reverse.findSome? (fun k =>
    (matchLitBytes (litBytes "[[footnote]]") (src.drop k)).bind
      (fun r1 => (findSub (litBytes "[[/footnote]]") r1).map
        (fun j => (r1.take j, r1.drop (j + 13)))))

/- REFCORR7 (S4C fn-empty, fn-ws, bib-empty): an empty-Raw token is
   `rule = "Raw"` with an empty `text` option, and its placeholder
   `\xFF<id>\xFF` renders to nothing (Tighten deletes it; the Raw
   renderer emits no bytes). A stored note or entry body made only of
   such placeholders is therefore empty on live. These two definitions
   restate `Inline3Rules.isEmptyRawTok` and `Inline3Rules.stripEmptyRawPh`
   locally: `Inline3Rules` imports this module, so importing it here
   would be cyclic. The algorithm and predicate are identical, and the
   token table is read only — no token is added, removed or reindexed. -/
def isEmptyRawTokNotes (toks : List TokenEntry) (id : Nat) : Bool :=
  match toks[id]? with
  | some t =>
      t.rule == "Raw" &&
      match omGet t.opts "text".toList with
      | some (.str cs) => cs.isEmpty
      | some (.bytes bs) => bs.isEmpty
      | some (.list xs) => xs.isEmpty
      | _ => false
  | none => false

def stripEmptyRawPhNotes (bs : List Nat) (toks : List TokenEntry) : List Nat :=
  go bs bs.length toks
where
  go : List Nat → Nat → List TokenEntry → List Nat
    | [], _, _ => []
    | _, 0, _ => []
    | 0xFF :: rest, fuel + 1, toks =>
        let (digits, tail) := rest.span (fun b => 48 <= b && b <= 57)
        match tail with
        | 0xFF :: rest2 =>
            let id := digits.foldl (fun a b => a * 10 + (b - 48)) 0
            if !digits.isEmpty && isEmptyRawTokNotes toks id
            then go rest2 fuel toks
            else 0xFF :: go rest fuel toks
        | _ => 0xFF :: go rest fuel toks
    | b :: rest, fuel + 1, toks => b :: go rest fuel toks

/-- process() for a Footnote match: the id is one plus the
    number of notes collected so far; the trimmed body is
    appended to the footnotes list at that index; the token
    carries only the id. REFCORR7: the trimmed body first has its
    empty-Raw placeholders stripped, mirroring PHP Footnote::process,
    so Footnoteitem's existing `body.isEmpty` separator test sees the
    live emptiness. A non-empty Raw token or a literal remainder such
    as fn-six's `@@` is preserved. -/
def footnoteProcess (body : List Nat) (doc : DocState)
    (toks : List TokenEntry) : List Nat × List TokenEntry × DocState :=
  let content := stripEmptyRawPhNotes (trimBytes body) toks
  let id := doc.footnotes.length + 1
  (phBytes toks.length,
   toks ++ [{ rule := "Footnote",
              opts := [("id".toList, OptVal.int (id : Int))] }],
   { doc with footnotes := doc.footnotes ++ [content] })

/-- The Footnote rule's scanner: preg_replace_callback semantics
    over the byte form (the leading whitespace of a match is
    consumed by it, not re-emitted). -/
def footnoteScan (src : List Nat) (toks : List TokenEntry)
    (doc : DocState) : Nat → List Nat × List TokenEntry × DocState
  | 0 => ([], toks, doc)
  | fuel + 1 =>
    match src with
    | [] => ([], toks, doc)
    | b :: rest =>
        match footnoteMatchAt src with
        | some (body, r) =>
            let (ph, t1, d1) := footnoteProcess body doc toks
            let (o, t, d) := footnoteScan r t1 d1 fuel
            (ph ++ o, t, d)
        | none =>
            let (o, t, d) := footnoteScan rest toks doc fuel
            (b :: o, t, d)

/-- The Footnote rule mirror (by hand, since the rule moves the
    footnotes document state). -/
def footnoteRule (st : ParseState) : ParseState :=
  let input := byteForm st.work
  let (bs', toks', doc') :=
    footnoteScan input st.tokens st.doc (input.length + 1)
  { st with work := parseBytes bs', tokens := toks', doc := doc' }

/-! ## Footnoteitem -/

/-- The Footnoteitem rule mirror: the rule's `regex` is null, so
    the base `parse()` never invokes its (vestigial) process;
    Footnoteitem tokens enter the table only through
    Footnoteblock's process. The rule is the identity. -/
def footnoteitemRule (st : ParseState) : ParseState := st

/-! ## Footnoteblock -/

/-- A Footnoteblock opener match at the head of `src`: the
    literal plus its optional attribute group. -/
def footnoteblockMatchAt (src : List Nat) :
    Option (Option (List Nat) × List Nat) :=
  (matchLitBytes (litBytes "[[footnoteblock") src).bind attrGroupB

/-- The leftmost Footnoteblock opener match in `src`, as (start
    offset, group, rest after the match). -/
def footnoteblockFind (src : List Nat) :
    Option (Nat × Option (List Nat) × List Nat) :=
  go src 0 (src.length + 1)
where
  go : List Nat → Nat → Nat →
      Option (Nat × Option (List Nat) × List Nat)
    | _, _, 0 => none
    | s, off, fuel + 1 =>
        match footnoteblockMatchAt s with
        | some (g, r) => some (off, g, r)
        | none =>
            match s with
            | [] => none
            | _ :: rest => go rest (off + 1) fuel

/-- The first paragraph break in a stored note body: the
    leftmost match of the byte pattern LF, spaces, LF, as a
    split of the body into the part before the match and the
    part from the match on. Mirrors the reference's
    `/\n[ ]*\n/` scan in Footnoteblock's process (the fnb-24
    reference correction, 2026-11-21). -/
def firstBreakSplit : List Nat → Option (List Nat × List Nat)
  | [] => none
  | 10 :: rest =>
      match (rest.dropWhile (· == 32)) with
      | 10 :: _ => some ([], 10 :: rest)
      | _ =>
          match firstBreakSplit rest with
          | some (pre, post) => some (10 :: pre, post)
          | none => none
  | b :: rest =>
      match firstBreakSplit rest with
      | some (pre, post) => some (b :: pre, post)
      | none => none

/-- The collected-notes interior of a Footnoteblock replacement:
    for each note, the claims are, in order, a Footnoteitem
    parabreak token when the stored body carries a paragraph
    break (claimed by the reference's marking pass before the
    item tokens, its placeholder sitting in the body at the
    first break), a Footnoteitem start token, the stored body,
    two newlines, and a Footnoteitem end token (all of them
    before the block's own start token). -/
def footnoteblockInside (notes : List (List Nat))
    (toks : List TokenEntry) : List Nat × List TokenEntry :=
  go notes 1 toks []
where
  go : List (List Nat) → Nat → List TokenEntry → List Nat →
      List Nat × List TokenEntry
    | [], _, t, acc => (acc, t)
    | content :: rest, i, t, acc =>
        match firstBreakSplit content with
        | some (pre, post) =>
            let paraPh := phBytes t.length
            let t0 := t ++ [{ rule := "Footnoteitem", opts :=
              [("type".toList, OptVal.str "parabreak".toList)] }]
            let startPh := phBytes t0.length
            let t1 := t0 ++ [{ rule := "Footnoteitem", opts :=
              [("type".toList, OptVal.str "start".toList),
               ("id".toList, OptVal.int (i : Int))] }]
            let endPh := phBytes t1.length
            let t2 := t1 ++ [{ rule := "Footnoteitem", opts :=
              [("type".toList, OptVal.str "end".toList),
               ("id".toList, OptVal.int (i : Int))] }]
            go rest (i + 1) t2
              (acc ++ startPh ++ pre ++ paraPh ++ post ++ [10, 10]
                ++ endPh)
        | none =>
            let startPh := phBytes t.length
            let t1 := t ++ [{ rule := "Footnoteitem", opts :=
              [("type".toList, OptVal.str "start".toList),
               ("id".toList, OptVal.int (i : Int))] }]
            let endPh := phBytes t1.length
            let t2 := t1 ++ [{ rule := "Footnoteitem", opts :=
              [("type".toList, OptVal.str "end".toList),
               ("id".toList, OptVal.int (i : Int))] }]
            go rest (i + 1) t2
              (acc ++ startPh ++ content ++ [10, 10] ++ endPh)

/-- process() for Footnoteblock: with no collected notes the
    match is replaced by nothing; otherwise the replacement is a
    newline, the block's start token (claimed after all the item
    tokens), the interior, the end token, and a newline. -/
def footnoteblockProcess (g : Option (List Nat))
    (notes : List (List Nat)) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  if notes.isEmpty then ([], toks)
  else
    let (inside, t1) := footnoteblockInside notes toks
    let startPh := phBytes t1.length
    let t2 := t1 ++ [{ rule := "Footnoteblock", opts :=
      [("type".toList, OptVal.str "start".toList),
       ("title".toList, titleOpt g)] }]
    let endPh := phBytes t2.length
    let t3 := t2 ++ [{ rule := "Footnoteblock", opts :=
      [("type".toList, OptVal.str "end".toList)] }]
    ([10] ++ startPh ++ inside ++ endPh ++ [10], t3)

/-- The Footnoteblock rule mirror: the reference's `parse()` is
    one `preg_replace_callback` with limit 1 over the pattern
    `(\[\[footnoteblock(\s+[^\]]+)?\]\])|($)`. The first opener
    match anywhere is the replacement site; failing that, the
    empty end-of-string match is — at the very end of the source,
    or immediately before a trailing newline (PCRE's `$` without
    the multiline modifier). The rule reads the footnotes state
    but does not move it. -/
def footnoteblockRule (st : ParseState) : ParseState :=
  let src := byteForm st.work
  match footnoteblockFind src with
  | some (off, g, r) =>
      let (repl, t1) :=
        footnoteblockProcess g st.doc.footnotes st.tokens
      { st with
        work := parseBytes (src.take off ++ repl ++ r),
        tokens := t1 }
  | none =>
      let e := if src.getLast? == some 10 then src.length - 1
               else src.length
      let (repl, t1) :=
        footnoteblockProcess none st.doc.footnotes st.tokens
      { st with
        work := parseBytes (src.take e ++ repl ++ src.drop e),
        tokens := t1 }

/-! ## Bibitem -/

/-- process() for a bibliography entry, called by Bibliography's
    walk (Bibitem has no source match of its own): the content
    is the value with newlines replaced by spaces, trimmed; it is
    registered in the bibitems map under the label, and the id —
    one plus the number of distinct labels registered so far —
    is stored in bibitemIds under the label (a duplicate label
    therefore takes a fresh id computed from the unchanged key
    count, and later labels number from the same count). The
    replacement is the start token, the content, and the end
    token; the start token carries label, id, type, and the
    empty-body flag (the R2 correction). REFCORR7: the flag is
    computed from the content with empty-Raw placeholders stripped
    (mirroring PHP Bibitem::process's `$visible` test), while the
    stored `bibitems` body and the emitted content keep the exact
    original bytes so the compared state and wire shape are otherwise
    unchanged. -/
def bibitemProcess (label content : List Nat) (doc : DocState)
    (toks : List TokenEntry) : List Nat × List TokenEntry × DocState :=
  let content' :=
    trimBytes (content.map (fun b => if b == 10 then 32 else b))
  let visible := stripEmptyRawPhNotes content' toks
  let id := doc.bibitemIds.length + 1
  let doc1 : DocState := { doc with
    bibitems := bibSet doc.bibitems label content',
    bibitemIds := bibSet doc.bibitemIds label id }
  let startPh := phBytes toks.length
  let t1 := toks ++ [{ rule := "Bibitem", opts :=
    [("label".toList, textVal label),
     ("id".toList, OptVal.int (id : Int)),
     ("type".toList, OptVal.str "start".toList),
     ("empty".toList, OptVal.bool visible.isEmpty)] }]
  let endPh := phBytes t1.length
  let t2 := t1 ++ [{ rule := "Bibitem", opts :=
    [("type".toList, OptVal.str "end".toList)] }]
  (startPh ++ content' ++ endPh, t2, doc1)

/-- The Bibitem rule mirror: the rule defines no `regex` and no
    `parse()`, so its standalone pass does nothing; its process
    is exercised only through Bibliography's walk. The rule is
    the identity. -/
def bibitemRule (st : ParseState) : ParseState := st

/-! ## Bibliography -/

/-- The body walk's line classification: nothing seen yet, the
    previous line unit was a definition, or it was residual text. -/
inductive BibPrev where
  | start
  | def
  | res
deriving DecidableEq, Inhabited

/-- A definition-line match at the head of `s` (the walk
    pattern's first alternative, `^:\s?([a-z0-9]+)\s?:\s(.*)(\n|$)`,
    case-insensitive): returns the label, the value group, and
    the number of bytes consumed including the line break. The
    two `\s?` are tried present before absent; the label run is
    maximal and forced (giving a label byte back would put it
    where `\s?` or `:` must stand, and a label byte is neither);
    the `\s` after the second colon is exactly one whitespace
    byte, which may be the line break itself (the value then
    comes from the following line). -/
def bibDefMatch (s : List Nat) :
    Option (List Nat × List Nat × Nat) :=
  match s with
  | 58 :: rest0 =>
      [1, 0].findSome? (fun a1 =>
        if a1 == 1 &&
            !(rest0.head?.map isWsByte).getD false then none
        else
          let s1 := rest0.drop a1
          let label := s1.takeWhile isBibLabelByte
          if label.isEmpty then none
          else
            let s2 := s1.drop label.length
            [1, 0].findSome? (fun a2 =>
              if a2 == 1 &&
                  !(s2.head?.map isWsByte).getD false then none
              else
                match s2.drop a2 with
                | 58 :: s4 =>
                    match s4 with
                    | w :: s5 =>
                        if isWsByte w then
                          let content :=
                            s5.takeWhile (fun b => b != 10)
                          let tail := s5.drop content.length
                          some (label, content,
                            s.length -
                              (tail.drop
                                (if tail.isEmpty then 0 else 1)).length)
                        else none
                    | [] => none
                | _ => none))
  | _ => none

/-- Collapse every whitespace run to a single space
    (`preg_replace('/\s+/', ' ', $text)` over a residual line;
    the line holds no newline byte, but the other PCRE
    whitespace bytes collapse too). The fuel is the input
    length; every step consumes at least one byte. -/
def collapseWs (bs : List Nat) : List Nat := go bs (bs.length + 1)
where
  go : List Nat → Nat → List Nat
    | [], _ => []
    | _, 0 => []
    | b :: rest, fuel + 1 =>
        if isWsByte b then
          32 :: go ((b :: rest).dropWhile isWsByte) fuel
        else b :: go rest fuel

/-- Claim a Bibliography `nl` token; returns its placeholder
    bytes and the extended table. -/
def claimNl (toks : List TokenEntry) : List Nat × List TokenEntry :=
  (phBytes toks.length,
   toks ++ [{ rule := "Bibliography",
              opts := [("type".toList, OptVal.str "nl".toList)] }])

/-- The Bibliography body walk: the reference's
    `preg_replace_callback` over the alternation pattern, one
    line unit at a time (every position the walk resumes at is
    a line start, and the residual alternative matches any line,
    so the walk covers the body with no gaps). A definition line
    is preceded by an `nl` token when the previous unit was
    residual, and its entry is produced by `bibitemProcess`. A
    residual line whose trimmed form is empty is dropped and
    leaves the classification unchanged; any other residual line
    is preceded by an `nl` token (after nothing or a definition)
    or a single space (after residual text), and its whitespace
    runs collapse to single spaces. -/
def bibWalk (s : List Nat) (prev : BibPrev) (doc : DocState)
    (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry × DocState
  | 0 => ([], toks, doc)
  | fuel + 1 =>
    if s.isEmpty then ([], toks, doc)
    else
      match bibDefMatch s with
      | some (label, content, len) =>
          let (pfx, t0) := match prev with
            | .res => claimNl toks
            | _ => ([], toks)
          let (repl, t1, d1) := bibitemProcess label content doc t0
          let (o, t, d) := bibWalk (s.drop len) .def d1 t1 fuel
          (pfx ++ repl ++ o, t, d)
      | none =>
          let text := s.takeWhile (fun b => b != 10)
          let tail := s.drop text.length
          let len := text.length + (if tail.isEmpty then 0 else 1)
          if (trimBytes text).isEmpty then
            bibWalk (s.drop len) prev doc toks fuel
          else
            let (pfx, t0) := match prev with
              | .res => ([32], toks)
              | _ => claimNl toks
            let (o, t, d) := bibWalk (s.drop len) .res doc t0 fuel
            (pfx ++ collapseWs text ++ o, t, d)

/-- All (prefix, rest) pairs at which `pat` occurs in `s`, in
    order of occurrence (every starting position is tried). -/
def occurrences (pat : List Nat) (s : List Nat) :
    List (List Nat × List Nat) :=
  go s []
where
  go : List Nat → List Nat → List (List Nat × List Nat)
    | [], _ => []
    | s@(b :: rest), pre =>
        (if s.take pat.length == pat
         then [(pre.reverse, s.drop pat.length)] else []) ++
        go rest (b :: pre)

/-- A Bibliography block match at the head of `src` (which the
    caller guarantees is a line start): the opener literal and
    its optional attribute group, then the lazy dot-all body up
    to the first closer whose line ends there — the closer, a
    run of space bytes, and then the end of the source or a
    newline (the pattern's `[ ]*$` with the multiline
    modifier). Returns the group, the body, and the rest (which
    begins with the newline the closer's line ended at, or is
    empty). -/
def bibliographyMatchAt (src : List Nat) :
    Option (Option (List Nat) × List Nat × List Nat) :=
  (matchLitBytes (litBytes "[[bibliography") src).bind (fun r0 =>
    (attrGroupB r0).bind (fun (g1, r1) =>
      (occurrences (litBytes "[[/bibliography]]") r1).findSome?
        (fun (inner, after) =>
          let rest :=
            after.drop ((after.takeWhile (fun b => b == 32)).length)
          if rest.isEmpty || rest.head? == some 10 then
            some (g1, inner, rest)
          else none)))

/-- The leftmost Bibliography block match in `src`, as (start
    offset, group, body, rest): the opener's `^` anchor (with
    the multiline modifier) admits only position 0 and positions
    right after a newline byte. -/
def bibliographyFind (src : List Nat) :
    Option (Nat × Option (List Nat) × List Nat × List Nat) :=
  go src 0 true (src.length + 1)
where
  go : List Nat → Nat → Bool → Nat →
      Option (Nat × Option (List Nat) × List Nat × List Nat)
    | _, _, _, 0 => none
    | s, off, atStart, fuel + 1 =>
        match (if atStart then bibliographyMatchAt s else none) with
        | some (g1, inner, r) => some (off, g1, inner, r)
        | none =>
            match s with
            | [] => none
            | b :: rest => go rest (off + 1) (b == 10) fuel

/-- process() for Bibliography: the body walk first (claiming
    the entry and `nl` tokens in walk order and registering the
    entries), then the block's own start and end tokens; the
    replacement is a newline, the start token, the walked body,
    the end token, and a newline. -/
def bibliographyProcess (g1 : Option (List Nat)) (inner : List Nat)
    (doc : DocState) (toks : List TokenEntry) :
    List Nat × List TokenEntry × DocState :=
  let (inside, t1, d1) := bibWalk inner .start doc toks (inner.length + 1)
  let startPh := phBytes t1.length
  let t2 := t1 ++ [{ rule := "Bibliography", opts :=
    [("type".toList, OptVal.str "start".toList),
     ("title".toList, titleOpt g1)] }]
  let endPh := phBytes t2.length
  let t3 := t2 ++ [{ rule := "Bibliography", opts :=
    [("type".toList, OptVal.str "end".toList)] }]
  ([10] ++ startPh ++ inside ++ endPh ++ [10], t3, d1)

/-- The Bibliography rule mirror: the reference's `parse()` is
    one `preg_replace_callback` with limit 1, so only the first
    block in the document is processed; a document with no
    matching block is unchanged. -/
def bibliographyRule (st : ParseState) : ParseState :=
  let src := byteForm st.work
  match bibliographyFind src with
  | some (off, g1, inner, r) =>
      let (repl, t1, d1) :=
        bibliographyProcess g1 inner st.doc st.tokens
      { st with
        work := parseBytes (src.take off ++ repl ++ r),
        tokens := t1, doc := d1 }
  | none => st

/-! ## Bibcite -/

/-- A Bibcite match at the head of `src`: the pattern is
    `\(\(bibcite\s([a-z0-9]+)\)\)` with the /i modifier — the
    literal (case-insensitive), exactly one whitespace byte, a
    nonempty label run, and the closer. Returns the label and
    the rest. -/
def bibciteMatchAt (src : List Nat) : Option (List Nat × List Nat) :=
  (matchLitCI (litBytes "((bibcite") src).bind (fun r0 =>
    match r0 with
    | w :: r1 =>
        if isWsByte w then
          let label := r1.takeWhile isBibLabelByte
          if label.isEmpty then none
          else (matchLitBytes (litBytes "))")
            (r1.drop label.length)).map (fun r2 => (label, r2))
        else none
    | [] => none)

/-- The Bibcite rule's scanner: preg_replace_callback semantics
    over the byte form; the token carries only the label (the
    resolution against bibitemIds is render-side). -/
def bibciteScan (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => ([], toks)
  | fuel + 1 =>
    match src with
    | [] => ([], toks)
    | b :: rest =>
        match bibciteMatchAt src with
        | some (label, r) =>
            let t1 := toks ++ [{ rule := "Bibcite", opts :=
              [("label".toList, textVal label)] }]
            let (o, t) := bibciteScan r t1 fuel
            (phBytes toks.length ++ o, t)
        | none =>
            let (o, t) := bibciteScan rest toks fuel
            (b :: o, t)

/-- The Bibcite rule mirror. -/
def bibciteRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks => bibciteScan src toks (src.length + 1))

/-! ## Theorems -/

/-- Footnoteitem claims nothing and changes nothing: its rule is
    the identity, since its `regex` is null. -/
theorem footnoteitemRule_id (st : ParseState) :
    footnoteitemRule st = st := rfl

/-- Bibitem's standalone pass is likewise the identity. -/
theorem bibitemRule_id (st : ParseState) :
    bibitemRule st = st := rfl

/-- A worked Footnote match: opener, lazy body to the first
    closer, rest. -/
theorem footnoteMatchAt_example :
    footnoteMatchAt (litBytes "[[footnote]]body[[/footnote]]rest")
      = some (litBytes "body", litBytes "rest") := rfl

/-- A Footnoteblock with no collected notes claims nothing and
    replaces its match with nothing. -/
theorem footnoteblockProcess_empty_example :
    footnoteblockProcess none [] [] = ([], []) := rfl

/-- A worked definition-line match: label, value, and the whole
    line including its break consumed. -/
theorem bibDefMatch_example :
    bibDefMatch (litBytes ": bell : Bell text\n")
      = some (litBytes "bell", litBytes "Bell text", 19) := rfl

/-- A worked Bibitem registration: the first entry takes id 1 in
    both maps, with the trimmed content registered. -/
theorem bibitemProcess_state_example :
    (bibitemProcess (litBytes "a") (litBytes " x ") {} []).2.2.bibitems
      = [(litBytes "a", litBytes "x")] ∧
    (bibitemProcess (litBytes "a") (litBytes " x ") {} []).2.2.bibitemIds
      = [(litBytes "a", 1)] := ⟨rfl, rfl⟩

/-- A worked Bibcite match: label and rest. -/
theorem bibciteMatchAt_example :
    bibciteMatchAt (litBytes "((bibcite bell))x")
      = some (litBytes "bell", litBytes "x") := rfl

end LeanFtml
