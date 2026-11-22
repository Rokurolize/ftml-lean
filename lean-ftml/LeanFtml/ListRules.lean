import LeanFtml.ContainRules

/-!
# R3.9: the LIST family — List and Deflist

Mirrors `Text_Wiki_Parse_List::parse()` / `process()` and
`Text_Wiki_Parse_Deflist::parse()` / `process()` of the validated
reference, in pipeline order (List, then Deflist).

List has two mechanisms, both mirrored here:

* The native line lists: a run opens at a line start with a `*` or `#`
  marker followed by one space, and extends line by line while the
  reference's negative lookahead fails at the run's end — the next line
  either repeats the run's first marker at column 0, or is indented by at
  least one space and then starts with either marker or is blank.
  `process()` collects the marker lines (depth = leading space count,
  body = the text after marker and one space, left-trimmed of spaces and
  tabs), drops an item whose trimmed body is empty unless the next raw
  item is strictly deeper, and emits the list/item token lattice with
  per-depth counters assigned after dropping, unwinding and sublist
  wrapping following the reference's stack machine. The byte-form
  analysis (R3-SCOPE section 2) for this mechanism is the outer pattern
  '/^((\*|#).*\n)(?!\2 |(?: {1,}((?:\*|#) |\n)))/Usm' with process regex
  '=^( {0,})(\*|#) (.*)$=Ums'; both are line scanners over the byte
  subject, matched here by explicit line walks.

* The explicit block lists from the reference-gaps closure:
  `[[ul]]` / `[[ol]]` / `[[li]]` tags (lowercase only, optional scored
  `_` suffix on the opener, optional attributes, an optional residual
  third `]` consumed by closers and by `[[li]]` closers). The reference
  repeatedly pairs the first closer that has a partner with the topmost
  matching opener on its stack, builds that one block (masking already
  built nested explicit blocks and native list token spans inside the
  body first), splices the replacement, and rescans; afterwards it
  finalizes block boundaries against the surrounding text. Token
  creation order follows the reference exactly (item tokens precede the
  wrapping list tokens), including its mutations of the end token's
  `trail` option and its direct creation of `Newline`-rule tokens.
  Masking placeholders are the reference's own byte strings
  (\x02EXPLIST_<n>\x03, \x02NATLIST_<n>\x03, \x02EXPDISSOLVED\x03); as
  with the reference, user text literally containing those byte strings
  is outside the modelled surface.

Deflist's outer pattern is '/\n((:).*\n)(?!(: |\n))/Us': the match
includes the newline before the run, and the run extends over further
definition lines and over blank lines (a blank line does not end the
run; it is consumed by it). `process()` scans the run with
'/^(:)(.*)?(:)(.*)?$/Ums': per item the term group is first attempted
absent (which requires " : " immediately), then present with the
shortest dotall term followed by " : " — the term may span lines of the
run — and the definition runs to the end of its line. Items render with
trimmed term and definition; a term that renders empty (after stripping
only Comment placeholders and trimming, REFCORR3
C-SUSPECT-LISTTABLE-1) suppresses the term tokens but not the definition.
A run with no items collapses to a single newline.

No class statics or compared-state extensions: List and Deflist keep no
parse state beyond the token table (verified against the rule sources).
-/

namespace LeanFtml

open LeanFtml

/-! ## Generic byte helpers -/

/-- Index of the first `\n` byte, if any. -/
def lineBreakIdx : List Nat → Option Nat
  | [] => none
  | b :: rest => if b == 10 then some 0 else (lineBreakIdx rest).map (· + 1)

/-- The first line of `s`, including its terminating `\n`, and the rest. -/
def firstLine (s : List Nat) : Option (List Nat × List Nat) :=
  (lineBreakIdx s).map (fun i => (s.take (i + 1), s.drop (i + 1)))

/-- First index at or after `from` where `pat` occurs in `s`. -/
def findFrom (pat : List Nat) (s : List Nat) (startAt : Nat) : Option Nat :=
  go (s.drop startAt) startAt
where
  go : List Nat → Nat → Option Nat
    | [], _ => none
    | s'@(_ :: rest), i =>
        if s'.take pat.length == pat then some i else go rest (i + 1)

/-- Non-overlapping left-to-right replacement (PHP `str_replace`). -/
def replaceAll (pat repl s : List Nat) : List Nat :=
  go s (s.length + 1)
where
  go : List Nat → Nat → List Nat
    | [], _ => []
    | _, 0 => []
    | s'@(b :: rest), fuel + 1 =>
        if s'.take pat.length == pat then repl ++ go (s'.drop pat.length) fuel
        else b :: go rest fuel

/-- Read a `\xFF<digits>\xFF` placeholder starting exactly at index `i`
of `s`; returns the token key and the placeholder's byte length. -/
def phAt (s : List Nat) (i : Nat) : Option (Nat × Nat) :=
  if s[i]? == some 255 then
    let rest := s.drop (i + 1)
    let ds := rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)
    if ds.isEmpty then none
    else if rest[ds.length]? == some 255 then
      some (ds.foldl (fun a d => a * 10 + (d - 48)) 0, ds.length + 2)
    else none
  else none

/-- All placeholder occurrences of `s` as (position, key, length),
non-overlapping, left to right. -/
def allPh (s : List Nat) : List (Nat × Nat × Nat) :=
  go s 0 (s.length + 1)
where
  go : List Nat → Nat → Nat → List (Nat × Nat × Nat)
    | [], _, _ => []
    | _, _, 0 => []
    | s'@(b :: rest), i, fuel + 1 =>
        match (if b == 255 then phAt s' 0 else none) with
        | some (key, len) => (i, key, len) :: go (s'.drop len) (i + len) fuel
        | none => go rest (i + 1) fuel

/-- Replace element `i` of a list. -/
def setIdx {α : Type} (l : List α) (i : Nat) (a : α) : List α :=
  l.take i ++ [a] ++ l.drop (i + 1)

/-- Left-trim of spaces and tabs (PHP `ltrim` over `" \t"`). -/
def ltrimSpaceTab (b : List Nat) : List Nat :=
  b.dropWhile (fun x => x == 32 || x == 9)

/-- Strip spaces and tabs at both ends. -/
def stripSpaceTab (b : List Nat) : List Nat :=
  (ltrimSpaceTab b).reverse |>.dropWhile (fun x => x == 32 || x == 9) |>.reverse

/-- Trim PCRE `\s` bytes at both ends. -/
def trimWsBoth (b : List Nat) : List Nat :=
  (b.dropWhile isWsByte).reverse |>.dropWhile isWsByte |>.reverse

/-- Append a token of `rule` with options `opts`; returns its
placeholder and the extended table. -/
def addTok (rule : String) (opts : OptMap)
    (toks : List TokenEntry) : List Nat × List TokenEntry :=
  (phBytes toks.length, toks ++ [{ rule := rule, opts := opts }])

/-- Set the `trail` option of token `key` (the reference mutates the
stored end token of a built explicit block). -/
def setTrail (toks : List TokenEntry) (key : Nat) (val : List Nat) :
    List TokenEntry :=
  go toks key
where
  go : List TokenEntry → Nat → List TokenEntry
    | [], _ => []
    | e :: rest, 0 =>
        { e with opts := omSet e.opts "trail".toList (textVal val) } :: rest
    | e :: rest, n + 1 => e :: go rest n

/-- The token table entry for key `k`, if present. -/
def tokAt (toks : List TokenEntry) (k : Nat) : Option TokenEntry := toks[k]?

/-- The string value of option `key` of a token, as characters. -/
def optStr (e : TokenEntry) (key : String) : Option (List Char) :=
  match omGet e.opts key.toList with
  | some (OptVal.str v) => some v
  | _ => none

/-- Whether a token's integer option equals the given value. -/
def optIntEq (e : TokenEntry) (key : String) (n : Int) : Bool :=
  match omGet e.opts key.toList with
  | some (OptVal.int m) => m == n
  | _ => false

/-- Whether a token's `type` option equals the given string. -/
def tokTypeIs (e : TokenEntry) (t : String) : Bool :=
  optStr e "type" == some t.toList

/-! ## Native lists -/

/-- One raw marker line of a native run: indent depth, marker byte
(42 for `*`, 35 for `#`), and the left-trimmed body. -/
structure RawItem where
  depth : Nat
  typ : Nat
  body : List Nat
deriving Inhabited

/-- The inner item pattern on one line without its trailing newline:
spaces, marker, one space, body. -/
def lineItem (line : List Nat) : Option RawItem :=
  let sp := (line.takeWhile (· == 32)).length
  match line.drop sp with
  | m :: 32 :: body =>
      if m == 42 || m == 35 then some { depth := sp, typ := m, body := ltrimSpaceTab body }
      else none
  | _ => none

/-- Collect the raw items of a native run (a sequence of lines each
ending in `\n`). -/
def collectRawItems (run : List Nat) : List RawItem :=
  go run (run.length + 1)
where
  go : List Nat → Nat → List RawItem
    | [], _ => []
    | _, 0 => []
    | s, fuel + 1 =>
        match firstLine s with
        | some (line, rest) =>
            (match lineItem (line.dropLast) with
             | some it => [it]
             | none => []) ++ go rest fuel
        | none => match lineItem s with
                  | some it => [it]
                  | none => []

/-- Whether the native run ends before `rest` (the reference's negative
lookahead succeeds): the next line neither repeats the run's marker `m`
at column 0 nor is an indented marker line or blank line. -/
def lookaheadBlocks (m : Nat) (rest : List Nat) : Bool :=
  (rest.take 2 == [m, 32]) ||
  (let sp := (rest.takeWhile (· == 32)).length
   sp ≥ 1 &&
   (let r2 := rest.drop sp
    r2.take 2 == [42, 32] || r2.take 2 == [35, 32] || r2.take 1 == [10]))

/-- Extend a native run line by line; `none` if a line that must belong
to the run has no terminating newline (the match then fails outright). -/
def nativeRunExtend (m : Nat) (acc rest : List Nat) :
    Nat → Option (List Nat × List Nat)
  | 0 => none
  | fuel + 1 =>
      if lookaheadBlocks m rest then
        match firstLine rest with
        | some (line, rest') => nativeRunExtend m (acc ++ line) rest' fuel
        | none => none
      else some (acc, rest)

/-- A native run starting at the head of `s` (which must be at a line
start): marker, one space, and the first line are mandatory. -/
def nativeRunAt (s : List Nat) : Option (List Nat × List Nat) :=
  match s with
  | m :: 32 :: _ =>
      if m == 42 || m == 35 then
        match firstLine s with
        | some (line, rest) => nativeRunExtend m line rest (rest.length + 1)
        | none => none
      else none
  | _ => none

/-- One open list level of the native stack machine. -/
structure ListLevel where
  typ : Nat
  inSub : Bool
  tailSub : Bool
deriving Inhabited

/-- The token-name prefix for a marker byte. -/
def markerPrefix (m : Nat) : String := if m == 42 then "bullet" else "number"

/-- Emit a List token onto the output stream. -/
def emitList (out : List Nat) (toks : List TokenEntry) (opts : OptMap) :
    List Nat × List TokenEntry :=
  let (ph, toks') := addTok "List" opts toks
  (out ++ ph, toks')

/-- Close the top level of the native stack, emitting its `sublist_end`
(when the level's tail was a sublist) and its `{type}_list_end`. -/
def closeListLevel (out : List Nat) (toks : List TokenEntry)
    (stack : List ListLevel) : List Nat × List TokenEntry × List ListLevel :=
  let level := stack.length - 1
  match stack[level]? with
  | none => (out, toks, stack)
  | some entry =>
      let (out, toks) :=
        if entry.tailSub then
          emitList out toks [("type".toList, textVal (litBytes "sublist_end")),
            ("level".toList, OptVal.int (level : Int))]
        else (out, toks)
      let (out, toks) := emitList out toks
        [("type".toList, textVal (litBytes (markerPrefix entry.typ ++ "_list_end"))),
         ("level".toList, OptVal.int (level : Int)),
         ("in_sublist".toList, OptVal.bool entry.inSub),
         ("tail".toList, textVal (litBytes (if entry.tailSub then "sublist" else "item")))]
      (out, toks, stack.take level)

/-- Open new levels until the stack covers `depth`, marking the parent
level's tail as a sublist and emitting `sublist_start` for every level
beyond the first newly opened one. -/
def openListLevels (out : List Nat) (toks : List TokenEntry)
    (stack : List ListLevel) (itemTyp firstNew depth : Nat) :
    Nat → List Nat × List TokenEntry × List ListLevel
  | 0 => (out, toks, stack)
  | fuel + 1 =>
      if depth < stack.length then (out, toks, stack)
      else
        let level := stack.length
        let inSub := level > firstNew
        let (out, toks, stack) :=
          if inSub then
            match stack[level - 1]? with
            | some parent =>
                let stack := setIdx stack (level - 1) { parent with tailSub := true }
                let (out, toks) := emitList out toks
                  [("type".toList, textVal (litBytes "sublist_start")),
                   ("level".toList, OptVal.int (level : Int))]
                (out, toks, stack)
            | none => (out, toks, stack)
          else (out, toks, stack)
        let stack := stack ++ [{ typ := itemTyp, inSub := inSub, tailSub := false }]
        let (out, toks) := emitList out toks
          [("type".toList, textVal (litBytes (markerPrefix itemTyp ++ "_list_start"))),
           ("level".toList, OptVal.int (level : Int)),
           ("in_sublist".toList, OptVal.bool inSub)]
        openListLevels out toks stack itemTyp firstNew depth fuel

/-- Unwind levels deeper than `depth`, resetting their counters. -/
def unwindListLevels (out : List Nat) (toks : List TokenEntry)
    (stack : List ListLevel) (counts : List (Option Nat)) (depth : Nat) :
    Nat → List Nat × List TokenEntry × List ListLevel × List (Option Nat)
  | 0 => (out, toks, stack, counts)
  | fuel + 1 =>
      if stack.length > depth + 1 then
        let closed := stack.length - 1
        let (out, toks, stack) := closeListLevel out toks stack
        let counts := if closed < counts.length then setIdx counts closed none else counts
        unwindListLevels out toks stack counts depth fuel
      else (out, toks, stack, counts)

/-- The reference's backward survival fixpoint (REFCORR3
C-SUSPECT-LISTTABLE-6): an empty item survives only when the item
immediately after it ALSO survives and is strictly deeper. The
flags are aligned with the raw items, so a dropped intermediate
item cannot make an earlier empty item survive by accident. -/
def rawSurvive : List RawItem → List Bool
  | [] => []
  | it :: rest =>
      let flags := rawSurvive rest
      let nextSurvives := match flags with
        | [] => false
        | b :: _ => b
      let nextDeeper := match rest with
        | [] => false
        | nxt :: _ => nxt.depth > it.depth
      (!(trimBytes it.body).isEmpty || (nextSurvives && nextDeeper)) :: flags

/-- The reference's item filter: keep exactly the raw items marked
by the backward survival fixpoint, in original order. -/
def filterNativeItems (items : List RawItem) : List RawItem :=
  go items (rawSurvive items)
where
  go : List RawItem → List Bool → List RawItem
    | [], _ => []
    | _, [] => []
    | it :: rest, keep :: flags =>
        if keep then it :: go rest flags else go rest flags

/-- The native `process()`: drop empty items (unless the next surviving
raw item is deeper), then run the stack machine over the survivors. -/
def nativeProcess (run : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  let items := filterNativeItems (collectRawItems run)
  if items.isEmpty then ([], toks)
  else
    let step := fun (st : List Nat × List TokenEntry × List ListLevel ×
        List (Option Nat)) (it : RawItem) =>
      let (out, toks, stack, counts) := st
      let firstNew := stack.length
      let (out, toks, stack) :=
        openListLevels out toks stack it.typ firstNew it.depth (it.depth + 2)
      let (out, toks, stack, counts) :=
        unwindListLevels out toks stack counts it.depth (stack.length + 1)
      let counts := if counts.length ≤ it.depth then
          counts ++ List.replicate (it.depth + 1 - counts.length) none else counts
      let c := match counts[it.depth]? with
        | some (some n) => n + 1
        | _ => 0
      let counts := setIdx counts it.depth (some c)
      let (out, toks) := emitList out toks
        [("type".toList, textVal (litBytes (markerPrefix it.typ ++ "_item_start"))),
         ("level".toList, OptVal.int (it.depth : Int)),
         ("count".toList, OptVal.int (c : Int)),
         ("first".toList, OptVal.bool (c == 0))]
      let out := out ++ it.body
      let (out, toks) := emitList out toks
        [("type".toList, textVal (litBytes (markerPrefix it.typ ++ "_item_end"))),
         ("level".toList, OptVal.int (it.depth : Int)),
         ("count".toList, OptVal.int (c : Int))]
      (out, toks, stack, counts)
    let (out, toks, stack, _) := items.foldl step ([], toks, [], [])
    let (out, toks, _) := closeAll (out, toks, stack) (stack.length + 1)
    ([10, 10] ++ out ++ [10, 10], toks)
where
  closeAll : List Nat × List TokenEntry × List ListLevel → Nat →
      List Nat × List TokenEntry × List ListLevel
    | st, 0 => st
    | (out, toks, stack), fuel + 1 =>
        if stack.isEmpty then (out, toks, stack)
        else closeAll (closeListLevel out toks stack) fuel

/-- The native pass: scan the source, claiming a run at every line
start. -/
def nativeScan (src : List Nat) (toks : List TokenEntry) (atStart : Bool) :
    Nat → List Nat × List TokenEntry
  | 0 => (src, toks)
  | fuel + 1 =>
      match src with
      | [] => ([], toks)
      | b :: rest =>
          match (if atStart then nativeRunAt src else none) with
          | some (run, r) =>
              let (repl, t1) := nativeProcess run toks
              let (o, t) := nativeScan r t1 true fuel
              (repl ++ o, t)
          | none =>
              let (o, t) := nativeScan rest toks (b == 10) fuel
              (b :: o, t)

/-- `List::parse()`, native half. -/
def listNative (src : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  nativeScan src toks true (src.length + 1)

/-! ## Deflist -/

/-- Extend a definition run line by line while the next bytes start a
further definition line (`": "`) or are a blank line. -/
def defRunExtend (acc rest : List Nat) : Nat → Option (List Nat × List Nat)
  | 0 => none
  | fuel + 1 =>
      if rest.take 2 == [58, 32] || rest.take 1 == [10] then
        match firstLine rest with
        | some (line, rest') => defRunExtend (acc ++ line) rest' fuel
        | none => none
      else some (acc, rest)

/-- A definition run at the head of `s`, which must start with the
newline the outer pattern consumes. Returns the run text (without that
leading newline) and the unconsumed rest. -/
def defRunAt (s : List Nat) : Option (List Nat × List Nat) :=
  match s with
  | 10 :: rest =>
      if rest.take 2 == [58, 32] then
        match firstLine rest with
        | some (line, r) => defRunExtend line r (r.length + 1)
        | none => none
      else none
  | _ => none

/-- One definition item at the head of `s`: the inner pattern's
alternation order — term group absent first (only when `" : "` follows
immediately), then the shortest dotall term followed by `" : "`; the
definition runs to the first position where the line can end (the first
newline, or the end of the run). Returns (term, definition, rest). -/
def defItemAt (s : List Nat) : Option (List Nat × List Nat × List Nat) :=
  if s.take 2 == [58, 32] then
    let after := s.drop 2
    let absent : List (List Nat × List Nat) :=
      if after.take 3 == [32, 58, 32] then [([], after.drop 3)] else []
    let present : List (List Nat × List Nat) :=
      (List.range (after.length + 1)).filterMap (fun k =>
        if (after.drop k).take 3 == [32, 58, 32] then
          some (after.take k, after.drop (k + 3))
        else none)
    (absent ++ present).findSome? (fun (term, dstart) =>
      let e := (lineBreakIdx dstart).getD dstart.length
      some (term, dstart.take e, dstart.drop e))
  else none

/-- Collect the definition items of a run by trying the inner pattern
at every line start. -/
def collectDefItems (group : List Nat) : List (List Nat × List Nat) :=
  go group true (2 * group.length + 2)
where
  go : List Nat → Bool → Nat → List (List Nat × List Nat)
    | [], _, _ => []
    | _, _, 0 => []
    | s@(b :: rest), atStart, fuel + 1 =>
        if atStart then
          match defItemAt s with
          | some (term, dfn, r) => (term, dfn) :: go r false fuel
          | none => go rest (b == 10) fuel
        else go rest (b == 10) fuel

/-- Remove only those `\xFF<digits>\xFF` placeholders whose token is a
`Comment` (REFCORR3 C-SUSPECT-LISTTABLE-1): the reference's
`termRendersEmpty` looks up each placeholder's token in the table
and strips only the Comment rule's, keeping visible placeholders
(Anchor, User, Bibcite, ...) in the term. -/
def stripCommentPh (toks : List TokenEntry) (s : List Nat) : List Nat :=
  go s (s.length + 1)
where
  go : List Nat → Nat → List Nat
    | [], _ => []
    | _, 0 => []
    | s'@(b :: rest), fuel + 1 =>
        match (if b == 255 then phAt s' 0 else none) with
        | some (key, len) =>
            let isComment := match tokAt toks key with
              | some e => e.rule == "Comment"
              | none => false
            (if isComment then [] else s'.take len) ++ go (s'.drop len) fuel
        | none => b :: go rest fuel

/-- Whether a definition term renders empty: only Comment
placeholders may be stripped before trimming. -/
def termRendersEmpty (toks : List TokenEntry) (term : List Nat) : Bool :=
  (trimBytes (stripCommentPh toks term)).isEmpty

/-- Emit a Deflist token onto the output stream. -/
def emitDef (out : List Nat) (toks : List TokenEntry) (opts : OptMap) :
    List Nat × List TokenEntry :=
  let (ph, toks') := addTok "Deflist" opts toks
  (out ++ ph, toks')

/-- The Deflist `process()`. -/
def defProcess (group : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  let items := collectDefItems group
  if items.isEmpty then ([10], toks)
  else
    let step := fun (st : List Nat × List TokenEntry)
        (it : List Nat × List Nat) =>
      let (out, toks) := st
      let term := trimBytes it.1
      let (out, toks) :=
        if termRendersEmpty toks term then (out, toks)
        else
          let (out, toks) := emitDef out toks
            [("type".toList, textVal (litBytes "term_start"))]
          let out := out ++ term
          emitDef out toks [("type".toList, textVal (litBytes "term_end"))]
      let (out, toks) := emitDef out toks
        [("type".toList, textVal (litBytes "narr_start"))]
      let out := out ++ trimBytes it.2
      let (out, toks) := emitDef out toks
        [("type".toList, textVal (litBytes "narr_end"))]
      (out, toks)
    let (out, toks) := emitDef [] toks
      [("type".toList, textVal (litBytes "list_start"))]
    let (out, toks) := items.foldl step (out, toks)
    let (out, toks) := emitDef out toks
      [("type".toList, textVal (litBytes "list_end"))]
    ([10] ++ out ++ [10, 10], toks)

/-- The Deflist pass: at every newline byte, try to claim a run (the
match consumes that newline). -/
def deflistScan (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => (src, toks)
  | fuel + 1 =>
      match src with
      | [] => ([], toks)
      | b :: rest =>
          match (if b == 10 then defRunAt src else none) with
          | some (group, r) =>
              let (repl, t1) := defProcess group toks
              let (o, t) := deflistScan r t1 fuel
              (repl ++ o, t)
          | none =>
              let (o, t) := deflistScan rest toks fuel
              (b :: o, t)

/-- `Deflist::parse()`. -/
def deflistBytes (src : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  deflistScan src toks (src.length + 1)

/-! ## Explicit block lists -/

/-- The masking placeholder for the `n`-th nested explicit block. -/
def explPh (n : Nat) : List Nat :=
  [2] ++ litBytes "EXPLIST_" ++ (Nat.toDigits 10 n).map Char.toNat ++ [3]

/-- The masking placeholder for the `n`-th masked native list. -/
def natPh (n : Nat) : List Nat :=
  [2] ++ litBytes "NATLIST_" ++ (Nat.toDigits 10 n).map Char.toNat ++ [3]

/-- Parse a masking placeholder of the given kind at the head of `s`:
\x02, the literal prefix, digits, \x03. Returns (number, length). -/
def maskPhAt (s : List Nat) (pfx : String) : Option (Nat × Nat) :=
  match s with
  | 2 :: rest =>
      match matchLitBytes (litBytes pfx) rest with
      | some r =>
          let ds := r.takeWhile (fun b => 48 ≤ b && b ≤ 57)
          if ds.isEmpty then none
          else match r.drop ds.length with
            | 3 :: _ =>
                some (ds.foldl (fun a d => a * 10 + (d - 48)) 0,
                  1 + pfx.length + ds.length + 1)
            | _ => none
      | none => none
  | _ => none

/-- All masking-placeholder occurrences of one kind in `s`, as
(position, placeholder) in order, non-overlapping. -/
def harvestMask (s : List Nat) (pfx : String) : List (Nat × List Nat) :=
  go s 0 (s.length + 1)
where
  go : List Nat → Nat → Nat → List (Nat × List Nat)
    | [], _, _ => []
    | _, _, 0 => []
    | s'@(_ :: rest), i, fuel + 1 =>
        match maskPhAt s' pfx with
        | some (_, len) => (i, s'.take len) :: go (s'.drop len) (i + len) fuel
        | none => go rest (i + 1) fuel

/-- REFCORR5 Batch 1: case-insensitive recognition. A raw-cased opener
    is kept on the stack while a closer is lowercased, so a lowercase
    opener pairs with any-case closers but an uppercase opener never does. -/
def existsLitCI (pat : List Nat) (s : List Nat) : Bool :=
  if pat.isEmpty then true
  else s.any (fun _ => false) ||
    (List.range (s.length + 1)).any (fun i => (matchLitCI pat (s.drop i)).isSome)

def rawMatchedTag (pat : List Nat) (s : List Nat) : Option (List Nat × List Nat) :=
  (matchLitCI pat s).map (fun r => (s.take (s.length - r.length), r))

/-- A `[[ul]]`/`[[ol]]` opener at the head of `s`: tag, scored flag,
attribute capture (possibly empty), and total match length. The
attribute group requires at least one whitespace byte, a first capture
byte that is neither whitespace nor `]`, and the capture runs to the
first `]`. -/
def blockOpenerAt (s : List Nat) : Option (List Nat × Bool × List Nat × Nat) :=
  match matchLitBytes (litBytes "[[") s with
  | none => none
  | some r =>
      [litBytes "ul", litBytes "ol"].findSome? (fun t =>
        (rawMatchedTag t r).map (fun (rawTag, r1) =>
          let (scored, r2) := match r1 with
            | 95 :: rr => (true, rr)
            | _ => (false, r1)
          (rawTag, scored, r2))) |>.bind (fun (t, scored, r2) =>
        match matchLitBytes (litBytes "]]") r2 with
        | some r3 => some (t, scored, [], s.length - r3.length)
        | none =>
            match r2 with
            | w :: _ =>
                if isWsByte w then
                  let r3 := r2.drop (r2.takeWhile isWsByte).length
                  match r3 with
                  | [] => none
                  | c :: _ =>
                      if c == 93 then none
                      else
                        let capLen := (r3.takeWhile (· != 93)).length
                        match r3.drop capLen with
                        | 93 :: 93 :: r4 =>
                            some (t, scored, r3.take capLen, s.length - r4.length)
                        | _ => none
                else none
            | [] => none)

/-- A `[[/ul]]`/`[[/ol]]` closer at the head of `s`: tag, whether a
residual third `]` was consumed, and total match length. -/
def blockCloserAt (s : List Nat) : Option (List Nat × Bool × Nat) :=
  match matchLitBytes (litBytes "[[/") s with
  | none => none
  | some r =>
      [litBytes "ul", litBytes "ol"].findSome? (fun t =>
        (rawMatchedTag t r).bind (fun (rawTag, r1) =>
          (matchLitBytes (litBytes "]]") r1).map (fun r2 =>
            match r2 with
            | 93 :: r3 => (lowerBytes rawTag, true, s.length - r3.length)
            | _ => (lowerBytes rawTag, false, s.length - r2.length))))

/-- One tag occurrence in the source. -/
structure TagMatch where
  isOpen : Bool
  tag : List Nat
  scored : Bool
  attrs : List Nat
  residual : Bool
  start : Nat
  len : Nat
deriving Inhabited

/-- All block tags of `s` in order (the reference's `preg_match_all`
over its tag pattern, opener alternative first). -/
def scanTags (s : List Nat) : List TagMatch :=
  go s 0 (s.length + 1)
where
  go : List Nat → Nat → Nat → List TagMatch
    | [], _, _ => []
    | _, _, 0 => []
    | s'@(_ :: rest), i, fuel + 1 =>
        match blockOpenerAt s' with
        | some (tag, scored, attrs, len) =>
            { isOpen := true, tag := tag, scored := scored, attrs := attrs,
              residual := false, start := i, len := len } ::
              go (s'.drop len) (i + len) fuel
        | none =>
            match blockCloserAt s' with
            | some (tag, residual, len) =>
                { isOpen := false, tag := tag, scored := false, attrs := [],
                  residual := residual, start := i, len := len } ::
                  go (s'.drop len) (i + len) fuel
            | none => go rest (i + 1) fuel

/-- The pairing walk: the first closer that has a partner pairs with
the topmost matching opener on the stack. -/
def findPair (tags : List TagMatch) : Option (TagMatch × TagMatch) :=
  go tags []
where
  go : List TagMatch → List TagMatch → Option (TagMatch × TagMatch)
    | [], _ => none
    | t :: rest, stack =>
        if t.isOpen then go rest (t :: stack)
        else match stack.find? (fun o => o.tag == t.tag) with
          | some opener => some (opener, t)
          | none => go rest stack

/-- `normalizeAttrValue`: strip control bytes (keeping tab, LF, CR),
collapse whitespace runs to one space, trim spaces. -/
def normalizeAttrValue (v : List Nat) : List Nat :=
  let kept := v.filter (fun c =>
    !(c ≤ 8 || c == 11 || c == 12 || (14 ≤ c && c ≤ 31) || c == 127))
  let collapsed := kept.foldr (fun c acc =>
    if (c == 32 || c == 9 || c == 10 || c == 13) && acc.head? == some 32 then acc
    else if (c == 32 || c == 9 || c == 10 || c == 13) then 32 :: acc
    else c :: acc) []
  (collapsed.dropWhile (· == 32)).reverse |>.dropWhile (· == 32) |>.reverse

/-- Whether a byte string contains a token placeholder. -/
def hasPlaceholder (v : List Nat) : Bool := !(allPh v).isEmpty

/-- `buildListAttrs`: the explicit-list attribute allowlist and
normalization, in the reference's fixed emission order (id, class,
style, role, type, then data-* in insertion order). -/
def buildListAttrs (attrStr : List Nat) : List (List Nat × List Nat) :=
  let om := getAttrsBytes attrStr
  let idPart : List (List Nat × List Nat) :=
    match lookupB om (litBytes "id") with
    | none => []
    | some v =>
        if v.isEmpty || hasPlaceholder v then []
        else
          let nv := normalizeAttrValue v
          if nv.isEmpty then [("id".toList.map Char.toNat, litBytes "u-")]
          else if (litBytes "u-").isPrefixOf nv then [(litBytes "id", nv)]
          else if v.head? == some 32 || v.head? == some 9 ||
              v.head? == some 10 || v.head? == some 13 then
            [(litBytes "id", litBytes "u- " ++ nv)]
          else [(litBytes "id", litBytes "u-" ++ nv)]
  let named : List (List Nat × List Nat) :=
    [litBytes "class", litBytes "style", litBytes "role",
     litBytes "type"].filterMap (fun k =>
      match lookupB om k with
      | none => none
      | some v =>
          if v.isEmpty then none
          else if hasPlaceholder v then some (k, [])
          else some (k, normalizeAttrValue v))
  let datas : List (List Nat × List Nat) :=
    om.foldl (fun acc (k, v) =>
      if k.take 5 == litBytes "data-" then
        acc ++ [(asciiLower k, if hasPlaceholder v then [] else normalizeAttrValue v)]
      else acc) []
  idPart ++ named ++ datas

/-- Splice attribute pairs into an `OptMap` as string values, in order
(keys decoded the same way as the Span mirror's attribute handling). -/
def attrsToOpts (pairs : List (List Nat × List Nat)) : OptMap :=
  pairs.map (fun (k, v) => (utf8Decode k, textVal v))

/-- A built explicit block registered for boundary finalization. -/
structure ExplBlock where
  startPh : List Nat
  endPh : List Nat
  endKey : Nat
  scored : Bool
deriving Inhabited

/-- Mask the already-built nested explicit blocks occurring in a body:
each registered block whose start and end placeholders occur in order
is replaced by a fresh `\x02EXPLIST_<n>\x03` placeholder; consumed
blocks leave the registry. Returns the new body, the nested map
(placeholder, span, end-token key), and the surviving registry. -/
def maskNested (body : List Nat) (blocks : List ExplBlock) :
    List Nat × List (List Nat × List Nat × Nat) × List ExplBlock :=
  let r := blocks.foldl (fun (st : List Nat ×
      List (List Nat × List Nat × Nat) × List ExplBlock × Nat) blk =>
    let (b, nmap, blks, counter) := st
    match findFrom blk.startPh b 0 with
    | none => st
    | some p =>
        match findFrom blk.endPh b (p + blk.startPh.length) with
        | none => st
        | some q =>
            let span := (b.drop p).take (q + blk.endPh.length - p)
            let ph := explPh counter
            (b.take p ++ ph ++ b.drop (q + blk.endPh.length),
             nmap ++ [(ph, span, blk.endKey)],
             blks.filter (fun x => !(x.startPh == blk.startPh)),
             counter + 1)) (body, [], blocks, 0)
  (r.1, r.2.1, r.2.2.1)

/-- The level-0 native list spans of a body, as (start position, end
position, end-token key), found by walking the body's placeholders
against the global token table. -/
def nativeSpans (body : List Nat) (toks : List TokenEntry) :
    List (Nat × Nat × Nat) :=
  let r := (allPh body).foldl (fun (st : List (Nat × Nat × Nat) ×
      Option Nat) occ =>
    let (spans, openPos) := st
    let (pos, key, len) := occ
    match tokAt toks key with
    | some e =>
        if e.rule == "List" then
          let lvl0 := optIntEq e "level" 0
          if lvl0 && (tokTypeIs e "bullet_list_start" ||
              tokTypeIs e "number_list_start") && openPos.isNone then
            (spans, some pos)
          else if lvl0 && (tokTypeIs e "bullet_list_end" ||
              tokTypeIs e "number_list_end") then
            match openPos with
            | some sp => (spans ++ [(sp, pos + len, key)], none)
            | none => (spans, openPos)
          else (spans, openPos)
        else (spans, openPos)
    | none => (spans, openPos)) ([], none)
  r.1

/-- Mask the native spans of a body, right to left: each span (with
its surrounding newline runs absorbed) becomes
`"\n" ++ \x02NATLIST_<n>\x03 ++ "\n"`, counters assigned in reverse
span order. Returns the new body and the native map
(placeholder, raw span, end-token key). -/
def maskNative (body : List Nat) (toks : List TokenEntry) :
    List Nat × List (List Nat × List Nat × Nat) :=
  let spans := nativeSpans body toks
  if spans.isEmpty then (body, [])
  else go spans.reverse body [] 0
where
  go : List (Nat × Nat × Nat) → List Nat →
      List (List Nat × List Nat × Nat) → Nat →
      List Nat × List (List Nat × List Nat × Nat)
    | [], b, acc, _ => (b, acc)
    | (s0, e0, ekey) :: rest, b, acc, counter =>
        let rawSpan := (b.drop s0).take (e0 - s0)
        let sPos := s0 - ((b.take s0).reverse.takeWhile (· == 10)).length
        let ePos := e0 + ((b.drop e0).takeWhile (· == 10)).length
        let ph := natPh counter
        go rest (b.take sPos ++ [10] ++ ph ++ [10] ++ b.drop ePos)
          (acc ++ [(ph, rawSpan, ekey)]) (counter + 1)

/-- A `[[li]]` opener at the head of `s`: attribute capture and total
length, with the same attribute-group shape as the block opener. -/
def liOpenerAt (s : List Nat) : Option (List Nat × Nat) :=
  match matchLitCI (litBytes "[[li") s with
  | none => none
  | some r =>
      match matchLitBytes (litBytes "]]") r with
      | some r2 => some ([], s.length - r2.length)
      | none =>
          match r with
          | w :: _ =>
              if isWsByte w then
                let r3 := r.drop (r.takeWhile isWsByte).length
                match r3 with
                | [] => none
                | c :: _ =>
                    if c == 93 then none
                    else
                      let capLen := (r3.takeWhile (· != 93)).length
                      match r3.drop capLen with
                      | 93 :: 93 :: r4 => some (r3.take capLen, s.length - r4.length)
                      | _ => none
              else none
          | [] => none

/-- A full `[[li]]...[[/li]]` item at the head of `s`: attribute
capture, item body (a residual third `]` after the closer is appended
to the body), and total match length. The body runs to the first
closer. -/
def liMatchAt (s : List Nat) : Option (List Nat × List Nat × Nat) :=
  (liOpenerAt s).bind (fun (attrStr, olen) =>
    let rest := s.drop olen
    let closer := litBytes "[[/li]]"
    (findSubCI closer rest).map (fun q =>
      let ibody := rest.take q
      let after := rest.drop (q + closer.length)
      match after with
      | 93 :: _ => (attrStr, ibody ++ [93], olen + q + closer.length + 1)
      | _ => (attrStr, ibody, olen + q + closer.length)))

/-- All `[[li]]` items of a body, as (start, attributes, body, length)
in order. -/
def scanLi (body : List Nat) : List (Nat × List Nat × List Nat × Nat) :=
  go body 0 (body.length + 1)
where
  go : List Nat → Nat → Nat → List (Nat × List Nat × List Nat × Nat)
    | [], _, _ => []
    | _, _, 0 => []
    | s'@(_ :: rest), i, fuel + 1 =>
        match liMatchAt s' with
        | some (a, lb, len) =>
            (i, a, lb, len) :: go (s'.drop len) (i + len) fuel
        | none => go rest (i + 1) fuel

/-- Restore masked spans into a byte string (nested map first, then
the native map; the reference's `restoreMaskedLists`). -/
def restoreMasked (s : List Nat)
    (nmap natmap : List (List Nat × List Nat × Nat)) : List Nat :=
  let s1 := nmap.foldl (fun acc e => replaceAll e.1 e.2.1 acc) s
  natmap.foldl (fun acc e => replaceAll e.1 e.2.1 acc) s1

/-- Whether the whitespace-trimmed body is exactly one masking
placeholder of the given kind; returns the placeholder. -/
def wholeMask (b : List Nat) (pfx : String) : Option (List Nat) :=
  let core := trimWsBoth b
  match maskPhAt core pfx with
  | some (_, len) => if len == core.length then some core else none
  | none => none

/-- The last masking placeholder of the given kind in `b` whose tail
is all whitespace, as (position, placeholder). -/
def lastMaskWithWsTail (b : List Nat) (pfx : String) :
    Option (Nat × List Nat) :=
  let cands := (harvestMask b pfx).filter (fun (pos, ph) =>
    (b.drop (pos + ph.length)).all isWsByte)
  cands.getLast?

/-- The nested-map entries whose placeholders occur in a segment, in
segment order. -/
def nmapEntries (seg : List Nat)
    (nmap : List (List Nat × List Nat × Nat)) :
    List (List Nat × List Nat × Nat) :=
  (harvestMask seg "EXPLIST_").filterMap (fun (_, ph) =>
    nmap.find? (fun e => e.1 == ph))

/-- `formatExplicitLiItem`: shape one `[[li]]` item and wrap it in its
item tokens. Returns the wrapped item, or the empty byte string when
the item is dropped (in which case no tokens were created). The branch
order is the reference's: a body that is exactly one masked native
list; a body ending in a masked native list; a body ending in a
newline and a masked nested block (which inserts a `Newline`-rule
token and sets the nested end token's trail); otherwise a trailing
newline becomes an `explicit_br_no_nl` token and the remaining masked
placeholders are restored. Attached nested blocks are then appended
unconditionally, each with an `explicit_raw_nl` token and its end
trail set. Only the last branch restores placeholders in the body
itself; the other branches splice the masked span directly. -/
def formatItem (rawBody : List Nat)
    (itemAttrs : List (List Nat × List Nat))
    (attached : List (List Nat × List Nat × Nat))
    (nmap natmap : List (List Nat × List Nat × Nat))
    (toks : List TokenEntry) : List Nat × List TokenEntry :=
  let b0 := stripSpaceTab rawBody
  let b1 := match b0 with
    | 10 :: r => ltrimSpaceTab r
    | _ => b0
  if b1.isEmpty && attached.isEmpty then ([], toks)
  else
    let shaped : Option (List Nat × List TokenEntry × List Nat × List Nat) :=
      match wholeMask b1 "NATLIST_" with
      | some ph =>
          match natmap.find? (fun e => e.1 == ph) with
          | some e => some (e.2.1, toks, [10], [10])
          | none => none
      | none =>
          match lastMaskWithWsTail b1 "NATLIST_" with
          | some (_, ph) =>
              match natmap.find? (fun e => e.1 == ph) with
              | some e =>
                  let pos := (findFrom ph b1 0).getD 0
                  let pfx := trimBytes (b1.take pos)
                  let (rawPh, toks) := addTok "List"
                    [("type".toList, textVal (litBytes "explicit_raw_nl"))] toks
                  some (pfx ++ rawPh ++ e.2.1, toks, [], [10])
              | none => none
          | none =>
              let b4 : Option (List Nat × List TokenEntry × List Nat × List Nat) :=
                let (b2, dropped) :=
                  if !b1.isEmpty && b1.getLast? == some 10 then
                    ((b1.dropLast).reverse |>.dropWhile
                      (fun x => x == 32 || x == 9) |>.reverse, true)
                  else (b1, false)
                if dropped && b2.isEmpty && attached.isEmpty then none
                else
                  let (b2, toks) :=
                    if dropped then
                      let (brPh, toks) := addTok "List"
                        [("type".toList, textVal (litBytes "explicit_br_no_nl"))] toks
                      (b2 ++ brPh, toks)
                    else (b2, toks)
                  some (restoreMasked b2 nmap natmap, toks, [], [])
              match lastMaskWithWsTail b1 "EXPLIST_" with
              | some (pos, ph) =>
                  if pos ≥ 1 && b1[pos - 1]? == some 10 then
                    match nmap.find? (fun e => e.1 == ph) with
                    | some e =>
                        let toks := setTrail toks e.2.2 [10]
                        let (nlPh, toks) := addTok "Newline" [] toks
                        some (b1.take (pos - 1) ++ nlPh ++ e.2.1, toks, [], [])
                    | none => none
                  else b4
              | none => b4
    match shaped with
    | none => ([], toks)
    | some (body, toks, leadAfter, leadBefore) =>
        let (body, toks) := attached.foldl
          (fun (st : List Nat × List TokenEntry) e =>
            let (bd, tk) := st
            let tk := setTrail tk e.2.2 [10]
            let (rawPh, tk) := addTok "List"
              [("type".toList, textVal (litBytes "explicit_raw_nl"))] tk
            (bd ++ rawPh ++ e.2.1, tk)) (body, toks)
        let (sPh, toks) := addTok "List"
          [("type".toList, textVal (litBytes "explicit_item_start")),
           ("attrs".toList, OptVal.map (attrsToOpts itemAttrs)),
           ("lead".toList, textVal leadAfter)] toks
        let (ePh, toks) := addTok "List"
          [("type".toList, textVal (litBytes "explicit_item_end")),
           ("lead".toList, textVal leadBefore)] toks
        (sPh ++ body ++ ePh, toks)

/-- All masking placeholders (either kind) of `s`, in order. -/
def allMaskPhs (s : List Nat) : List (List Nat) :=
  go s (s.length + 1)
where
  go : List Nat → Nat → List (List Nat)
    | [], _ => []
    | _, 0 => []
    | s'@(_ :: rest), fuel + 1 =>
        match maskPhAt s' "EXPLIST_" with
        | some (_, len) => s'.take len :: go (s'.drop len) fuel
        | none =>
            match maskPhAt s' "NATLIST_" with
            | some (_, len) => s'.take len :: go (s'.drop len) fuel
            | none => go rest fuel

/-- Whether `s` consists solely of masking placeholders and
whitespace (the reference's only-lists test on the trimmed body). -/
def onlyListsOk (s : List Nat) : Bool :=
  go s (s.length + 1)
where
  go : List Nat → Nat → Bool
    | [], _ => true
    | _, 0 => true
    | s'@(b :: rest), fuel + 1 =>
        match maskPhAt s' "EXPLIST_" with
        | some (_, len) => go (s'.drop len) fuel
        | none =>
            match maskPhAt s' "NATLIST_" with
            | some (_, len) => go (s'.drop len) fuel
            | none => if isWsByte b then go rest fuel else false

/-- Create the wrapping list tokens around a built block's inner
content, register the block, and produce the replacement text. -/
def wrapListTokens (tag : List Nat) (scored : Bool)
    (attrs : List (List Nat × List Nat)) (inner trail : List Nat)
    (toks : List TokenEntry) (blocks : List ExplBlock) :
    List Nat × List TokenEntry × List ExplBlock :=
  let (sPh, toks) := addTok "List"
    [("type".toList, textVal (litBytes "explicit_list_start")),
     ("list_type".toList, textVal tag),
     ("attrs".toList, OptVal.map (attrsToOpts attrs)),
     ("scored".toList, OptVal.bool scored)] toks
  let endKey := toks.length
  let (ePh, toks) := addTok "List"
    [("type".toList, textVal (litBytes "explicit_list_end")),
     ("list_type".toList, textVal tag),
     ("trail".toList, textVal []),
     ("scored".toList, OptVal.bool scored)] toks
  (sPh ++ inner ++ ePh ++ trail, toks,
   blocks ++ [{ startPh := sPh, endPh := ePh, endKey := endKey, scored := scored }])

/-- The dissolve replacement for a block with no surviving content. -/
def dissolveBlock (toks : List TokenEntry) (blocks : List ExplBlock) :
    List Nat × List TokenEntry × List ExplBlock :=
  let (ePh, toks) := addTok "List"
    [("type".toList, textVal (litBytes "explicit_empty"))] toks
  ([2] ++ litBytes "EXPDISSOLVED" ++ [3] ++ ePh, toks, blocks)

/-- `buildExplicitListBlock`: build one paired block. The body is
masked (nested explicit blocks first, then native list spans), then
shaped by the `[[li]]` items if any are present, by the only-lists
wrapper if the trimmed body is only masked lists and whitespace, or
by the none-item fallback otherwise; a block with no surviving
content dissolves. -/
def buildExplicit (tag : List Nat) (scored : Bool) (attrStr : List Nat)
    (body0 : List Nat) (residual : Bool)
    (toks : List TokenEntry) (blocks : List ExplBlock) :
    List Nat × List TokenEntry × List ExplBlock :=
  let attrs := buildListAttrs attrStr
  let (body1, nmap, blocks1) := maskNested body0 blocks
  let (body, natmap) := maskNative body1 toks
  let trailAfterClose := if residual then litBytes "\n]" else []
  let lis := scanLi body
  if !lis.isEmpty then
    let (segsRev, prevEnd) := lis.foldl (fun (st : List (List Nat) × Nat) e =>
      let (segs, pe) := st
      ((body.drop pe).take (e.1 - pe) :: segs, e.1 + e.2.2.2)) ([], 0)
    let segs := segsRev.reverse
    let trailSeg := body.drop prevEnd
    let n := lis.length
    let resolve (phs : List (List Nat)) :
        List (List Nat × List Nat × Nat) :=
      phs.filterMap (fun ph => nmap.find? (fun e => e.1 == ph))
    let attachedOf (i : Nat) : List (List Nat × List Nat × Nat) :=
      if i + 1 < n then
        resolve ((harvestMask (segs[i + 1]?.getD []) "EXPLIST_").map (·.2))
      else resolve ((harvestMask trailSeg "EXPLIST_").map (·.2))
    let preNested := resolve
      ((harvestMask (segs.head?.getD []) "EXPLIST_").map (·.2))
    let (preOut, toks) := preNested.foldl
      (fun (st : List Nat × List TokenEntry) e =>
        let (o, tk) := st
        let tk := setTrail tk e.2.2 []
        let (wS, tk) := addTok "List"
          [("type".toList, textVal (litBytes "explicit_inline_wrapper_start")),
           ("newline".toList, OptVal.bool false)] tk
        let (wE, tk) := addTok "List"
          [("type".toList, textVal (litBytes "explicit_inline_wrapper_end")),
           ("newline".toList, OptVal.bool false),
           ("lead_nl".toList, OptVal.bool false)] tk
        (o ++ wS ++ e.2.1 ++ wE, tk)) ([], toks)
    let (itemsOut, toks, surviving, _) := lis.foldl
      (fun (st : List Nat × List TokenEntry × Nat × Nat) e =>
        let (o, tk, surv, i) := st
        let (fmt, tk) := formatItem e.2.2.1 (buildListAttrs e.2.1)
          (attachedOf i) nmap natmap tk
        (o ++ fmt, tk, surv + (if fmt.isEmpty then 0 else 1), i + 1))
      ([], toks, 0, 0)
    if surviving == 0 && preNested.isEmpty then dissolveBlock toks blocks1
    else wrapListTokens tag scored attrs (preOut ++ itemsOut)
      trailAfterClose toks blocks1
  else
    let trimmedBody := trimBytes body
    if trimmedBody.isEmpty then dissolveBlock toks blocks1
    else if onlyListsOk trimmedBody then
      let phs := allMaskPhs trimmedBody
      let multi := phs.length > 1
      let (inner, toks, _) := phs.foldl
        (fun (st : List Nat × List TokenEntry × Nat) ph =>
          let (o, tk, idx) := st
          match nmap.find? (fun e => e.1 == ph) with
          | some e =>
              let tk := setTrail tk e.2.2 (if multi then [10] else [])
              (o ++ e.2.1, tk, idx + 1)
          | none =>
              match natmap.find? (fun e => e.1 == ph) with
              | some e =>
                  let (o, tk) :=
                    if multi && idx > 0 then
                      let (rawPh, tk) := addTok "List"
                        [("type".toList, textVal (litBytes "explicit_raw_nl"))] tk
                      (o ++ rawPh, tk)
                    else (o, tk)
                  (o ++ e.2.1, tk, idx + 1)
              | none => (o, tk, idx + 1)) ([], toks, 0)
      let (wS, toks) := addTok "List"
        [("type".toList, textVal (litBytes "explicit_inline_wrapper_start")),
         ("newline".toList, OptVal.bool multi)] toks
      let (wE, toks) := addTok "List"
        [("type".toList, textVal (litBytes "explicit_inline_wrapper_end")),
         ("newline".toList, OptVal.bool multi),
         ("lead_nl".toList, OptVal.bool multi)] toks
      wrapListTokens tag scored attrs (wS ++ inner ++ wE)
        trailAfterClose toks blocks1
    else
      let restored := restoreMasked trimmedBody nmap natmap
      let (nsPh, toks) := addTok "List"
        [("type".toList, textVal (litBytes "explicit_none_item_start"))] toks
      let (nePh, toks) := addTok "List"
        [("type".toList, textVal (litBytes "explicit_none_item_end"))] toks
      wrapListTokens tag scored attrs (nsPh ++ restored ++ nePh)
        trailAfterClose toks blocks1

/-- REFCORR5 Batch 1: strip an uppercase/mixed-class block closer from a
    residual body; live swallows it into the last item instead of closing. -/
def stripBlockCloserTag (bs : List Nat) : List Nat :=
  go bs bs.length
where
  go : List Nat → Nat → List Nat
    | [], _ => []
    | _, 0 => []
    | s, fuel + 1 =>
        let r := matchLitCI (litBytes "[[/ul]]") s <|>
                 matchLitCI (litBytes "[[/ol]]") s
        match r with
        | some r2 => go r2 fuel
        | none => s.head! :: go s.tail fuel

def tagIsRawCase (t : List Nat) : Bool := t != lowerBytes t

/-- The build loop: repeatedly pair the first pairable closer with
the topmost matching opener, build that block, splice, and rescan
(the reference's 500-iteration guard). -/
def explLoop (src : List Nat) (toks : List TokenEntry)
    (blocks : List ExplBlock) :
    Nat → List Nat × List TokenEntry × List ExplBlock
  | 0 => (src, toks, blocks)
  | fuel + 1 =>
      match findPair (scanTags src) with
      | none =>
          -- REFCORR5 Batch 1: an uppercase/mixed opener with no pairing
          -- closer still enters list mode; its body runs to end of source.
          match (scanTags src).find? (fun t => t.isOpen && tagIsRawCase t.tag) with
          | some op =>
              let body := stripBlockCloserTag (src.drop (op.start + op.len))
              let (repl, toks', blocks') := buildExplicit op.tag op.scored
                op.attrs body false toks blocks
              let src' := (src.take op.start) ++ repl
              explLoop src' toks' blocks' fuel
          | none => (src, toks, blocks)
      | some (op, cl) =>
          let body := (src.drop (op.start + op.len)).take
            (cl.start - (op.start + op.len))
          let (repl, toks', blocks') := buildExplicit op.tag op.scored
            op.attrs body cl.residual toks blocks
          let src' := (src.take op.start) ++ repl ++
            (src.drop (cl.start + cl.len))
          explLoop src' toks' blocks' fuel

/-- Remove dissolved-block markers, keeping the empty token's
placeholder and dropping one following newline. -/
def dissolveCleanup (s : List Nat) : List Nat :=
  go s (s.length + 1)
where
  go : List Nat → Nat → List Nat
    | [], _ => []
    | _, 0 => []
    | s'@(b :: rest), fuel + 1 =>
        let marker := [2] ++ litBytes "EXPDISSOLVED" ++ [3]
        if s'.take marker.length == marker then
          let after := s'.drop marker.length
          match phAt after 0 with
          | some (_, len) =>
              let ph := after.take len
              let afterPh := after.drop len
              match afterPh with
              | 10 :: r => ph ++ go r fuel
              | _ => ph ++ go afterPh fuel
          | none => b :: go rest fuel
        else b :: go rest fuel

/-- The table-row tail of finalize step (b): whitespace, a
`[[/cell]]` or `[[/hcell]]`, whitespace, `[[/row]]`, whitespace,
`[[/table]]` (all case-insensitive), then a newline and a non-newline
byte. Returns the byte length of the tail before that newline. -/
def tableTail (rest : List Nat) : Option Nat :=
  let r0 := rest.drop (rest.takeWhile isWsByte).length
  (matchLitCI (litBytes "[[/") r0).bind (fun r1 =>
    let r1' := match r1 with
      | c :: rr => if c == 104 || c == 72 then rr else r1
      | [] => r1
    (matchLitCI (litBytes "cell]]") r1').bind (fun r2 =>
      let r3 := r2.drop (r2.takeWhile isWsByte).length
      (matchLitCI (litBytes "[[/row]]") r3).bind (fun r4 =>
        let r5 := r4.drop (r4.takeWhile isWsByte).length
        (matchLitCI (litBytes "[[/table]]") r5).bind (fun r6 =>
          match r6 with
          | 10 :: r7 =>
              match r7 with
              | c :: _ => if c != 10 then some (rest.length - r6.length)
                          else none
              | [] => none
          | _ => none))))

/-- One block's boundary finalization, in the reference's order:
(a) a `explicit_br_no_nl` insertion after a single-newline-separated
non-empty previous line, (b) the table-row tail, (c) newline-run
removal before another registered block, (d) the trailing `Newline`
token for an unscored block at the end, (e) the end trail for exactly
one following newline. -/
def finalizeOne (src : List Nat) (toks : List TokenEntry)
    (blk : ExplBlock) (blocks : List ExplBlock) :
    List Nat × List TokenEntry :=
  match findFrom blk.startPh src 0 with
  | none => (src, toks)
  | some sPos =>
      match findFrom blk.endPh src (sPos + blk.startPh.length) with
      | none => (src, toks)
      | some ePos =>
          let afterEnd := ePos + blk.endPh.length
          let (src, toks, afterEnd) :=
            if sPos ≥ 2 && src[sPos - 1]? == some 10 &&
                src[sPos - 2]? != some 10 then
              let lineStart := ((lastIdxOfB 10 (src.take (sPos - 1))).map
                (· + 1)).getD 0
              let prevLine := (src.drop lineStart).take
                (sPos - 1 - lineStart)
              if !prevLine.isEmpty &&
                  (findFrom (litBytes "||") prevLine 0).isNone &&
                  prevLine.getLast? != some 255 then
                let (brPh, toks') := addTok "List"
                  [("type".toList, textVal (litBytes "explicit_br_no_nl"))] toks
                ((src.take (sPos - 1)) ++ brPh ++ [10, 10] ++
                  (src.drop sPos), toks',
                 afterEnd + brPh.length + 1)
              else (src, toks, afterEnd)
            else (src, toks, afterEnd)
          let rest := src.drop afterEnd
          match tableTail rest with
          | some g1len =>
              ((src.take (afterEnd + g1len)) ++ [10, 10] ++
                (rest.drop (g1len + 1)), toks)
          | none =>
              let nlRun := (rest.takeWhile (· == 10)).length
              let nextIsBlock := match phAt rest nlRun with
                | some (_, len) =>
                    blocks.any (fun b => b.startPh == (rest.drop nlRun).take len)
                | none => false
              if nlRun ≥ 1 && nextIsBlock then
                ((src.take afterEnd) ++ (rest.drop nlRun), toks)
              else if rest.all (· == 10) then
                if !blk.scored then
                  let (nlPh, toks') := addTok "Newline" [] toks
                  ((src.take afterEnd) ++ nlPh ++ rest, toks')
                else (src, toks)
              else if rest.take 1 == [10] &&
                  (match rest[1]? with
                   | some c => c != 10 && c != 255 &&
                       (rest.drop 1).take 3 != litBytes "[[/"
                   | none => false) then
                ((src.take afterEnd) ++ (rest.drop 1),
                 setTrail toks blk.endKey [10])
              else (src, toks)

/-- `finalizeExplicitListBoundaries`. -/
def finalizeExplicit (src : List Nat) (toks : List TokenEntry)
    (blocks : List ExplBlock) : List Nat × List TokenEntry :=
  let src := dissolveCleanup src
  blocks.foldl (fun (st : List Nat × List TokenEntry) blk =>
    finalizeOne st.1 st.2 blk blocks) (src, toks)

/-- `parseExplicitLists`, entered only when the source contains
`[[ul` or `[[ol`. -/
def listExplicitPass (src : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  if !(src.any (fun b => byteCiEq b 91)) ||
     !(existsLitCI (litBytes "[[ul") src || existsLitCI (litBytes "[[ol") src) then (src, toks)
  else
    let (src', toks', blocks) := explLoop src toks [] 500
    finalizeExplicit src' toks' blocks

/-- The List rule: the native pass, then the explicit pass. -/
def listRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    let (s1, t1) := listNative src toks
    listExplicitPass s1 t1)

/-- The Deflist rule. -/
def deflistRule (st : ParseState) : ParseState :=
  applyByteRule st deflistBytes

/-! ## Worked examples (kernel-checked) -/

theorem native_run_two_items :
    nativeRunAt (litBytes "* a\n* b\n") =
      some (litBytes "* a\n* b\n", []) := rfl

theorem native_process_one_item :
    nativeProcess (litBytes "* one\n") [] =
      ([10, 10] ++ phBytes 0 ++ phBytes 1 ++ litBytes "one" ++
        phBytes 2 ++ phBytes 3 ++ [10, 10],
       [{ rule := "List", opts :=
          [("type".toList, textVal (litBytes "bullet_list_start")),
           ("level".toList, OptVal.int 0),
           ("in_sublist".toList, OptVal.bool false)] },
        { rule := "List", opts :=
          [("type".toList, textVal (litBytes "bullet_item_start")),
           ("level".toList, OptVal.int 0),
           ("count".toList, OptVal.int 0),
           ("first".toList, OptVal.bool true)] },
        { rule := "List", opts :=
          [("type".toList, textVal (litBytes "bullet_item_end")),
           ("level".toList, OptVal.int 0),
           ("count".toList, OptVal.int 0)] },
        { rule := "List", opts :=
          [("type".toList, textVal (litBytes "bullet_list_end")),
           ("level".toList, OptVal.int 0),
           ("in_sublist".toList, OptVal.bool false),
           ("tail".toList, textVal (litBytes "item"))] }]) := rfl

theorem def_item_simple :
    defItemAt (litBytes ": a : b\n") =
      some (litBytes "a", litBytes "b", [10]) := rfl

theorem def_process_one_item :
    defProcess (litBytes ": term : definition\n") [] =
      ([10] ++ phBytes 0 ++ phBytes 1 ++ litBytes "term" ++ phBytes 2 ++
        phBytes 3 ++ litBytes "definition" ++ phBytes 4 ++ phBytes 5 ++
        [10, 10],
       [{ rule := "Deflist", opts :=
          [("type".toList, textVal (litBytes "list_start"))] },
        { rule := "Deflist", opts :=
          [("type".toList, textVal (litBytes "term_start"))] },
        { rule := "Deflist", opts :=
          [("type".toList, textVal (litBytes "term_end"))] },
        { rule := "Deflist", opts :=
          [("type".toList, textVal (litBytes "narr_start"))] },
        { rule := "Deflist", opts :=
          [("type".toList, textVal (litBytes "narr_end"))] },
        { rule := "Deflist", opts :=
          [("type".toList, textVal (litBytes "list_end"))] }]) := rfl

theorem build_list_attrs_example :
    buildListAttrs (litBytes "id=\"x\" title=\"t\" data-Y=\"2\" class=\"c\"") =
      [(litBytes "id", litBytes "u-x"), (litBytes "class", litBytes "c"),
       (litBytes "data-y", litBytes "2")] := rfl

theorem list_rule_explicit_tokens :
    (listRule (ParseState.ofSource "[[ul]]\n[[li]]a[[/li]]\n[[/ul]]\n".toList)).tokens =
      [{ rule := "List", opts :=
          [("type".toList, textVal (litBytes "explicit_item_start")),
           ("attrs".toList, OptVal.map []),
           ("lead".toList, textVal [])] },
       { rule := "List", opts :=
          [("type".toList, textVal (litBytes "explicit_item_end")),
           ("lead".toList, textVal [])] },
       { rule := "List", opts :=
          [("type".toList, textVal (litBytes "explicit_list_start")),
           ("list_type".toList, textVal (litBytes "ul")),
           ("attrs".toList, OptVal.map []),
           ("scored".toList, OptVal.bool false)] },
       { rule := "List", opts :=
          [("type".toList, textVal (litBytes "explicit_list_end")),
           ("list_type".toList, textVal (litBytes "ul")),
           ("trail".toList, textVal []),
           ("scored".toList, OptVal.bool false)] },
       { rule := "Newline", opts := [] }] := rfl

theorem deflist_rule_no_claim :
    (deflistRule (ParseState.ofSource "plain".toList)).tokens = [] := rfl

/-- REFCORR3 C-SUSPECT-LISTTABLE-6: stacked empty items have no
surviving deeper child, so the backward fixpoint drops both and
no list is emitted. -/
theorem filter_native_stacked_empty :
    filterNativeItems [{ depth := 0, typ := 42, body := [] },
      { depth := 1, typ := 42, body := [] }] = [] := rfl

theorem native_stacked_empty_no_list :
    nativeProcess (litBytes "* \n * \n") [] = ([], []) := rfl

/-- The R2 control still holds: an empty parent whose immediate
next item survives and is deeper is kept. -/
theorem filter_native_empty_parent_with_child :
    filterNativeItems [{ depth := 0, typ := 42, body := [] },
      { depth := 1, typ := 42, body := litBytes "x" }] =
      [{ depth := 0, typ := 42, body := [] },
       { depth := 1, typ := 42, body := litBytes "x" }] := rfl

/-- REFCORR3 C-SUSPECT-LISTTABLE-1: a term carrying only a Comment
placeholder renders empty; a visible placeholder (here Anchor)
keeps the `<dt>`. -/
theorem term_comment_only_empty :
    termRendersEmpty [{ rule := "Comment", opts := [] }] (phBytes 0) = true := rfl

theorem term_visible_placeholder_not_empty :
    termRendersEmpty [{ rule := "Anchor", opts := [] }] (phBytes 0) = false := rfl

end LeanFtml
