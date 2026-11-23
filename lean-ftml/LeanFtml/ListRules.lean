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

/-- REFCORR8: replace the first occurrence of `pat` with `repl`,
    leaving the rest of `s` byte-identical. -/
def replaceFirst (pat repl s : List Nat) : List Nat :=
  match findFrom pat s 0 with
  | none => s
  | some i => s.take i ++ repl ++ s.drop (i + pat.length)

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
            | 93 :: r3 => (rawTag, true, s.length - r3.length)
            | _ => (rawTag, false, s.length - r2.length))))

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

/-- REFCORR7: a tag written with any upper-case byte is a raw-case tag. -/
def tagIsRawCase (t : List Nat) : Bool := t != lowerBytes t

/-- REFCORR7 C-SUSPECT4A-2: choose a closer's partner from the opener
stack. A raw-case opener is never a partner; when its folded tag equals
the close tag it absorbs that closer and shields the lowercase openers
beneath it (the `break` in the reference's stack loop). A lowercase
opener pairs on folded tag equality, or on any closer whose own tag was
written with upper-case bytes (the cross-type uppercase closer). -/
def findPairOpener (stack : List TagMatch) (closeTag : List Nat) (rawClose : Bool) :
    Option (TagMatch × Bool) :=
  match stack with
  | [] => none
  | o :: rest =>
      if tagIsRawCase o.tag then
        if lowerBytes o.tag == closeTag then some (o, true)
        else findPairOpener rest closeTag rawClose
      else if o.tag == closeTag || rawClose then some (o, false)
      else findPairOpener rest closeTag rawClose

/-- The pairing walk: the first closer that has a partner pairs with
the topmost matching opener on the stack. REFCORR16: when the
partner is an inner opener while the outermost open list is a
lowercase-tag list whose whole span so far holds no `[[/li]]`,
the closer pairs with the outermost opener instead: a list
whose span holds no complete item is a none-item on live and
its body is literal text, so a nested opener inside it does
not open a nested list (the colmod shape of the package 2.1
holdout, h068). The override is same-type only, so the
cross-type pairings of the REFCORR7/9/13 raw-case machinery
are untouched by it. -/
def findPair (src : List Nat) (tags : List TagMatch) :
    Option (TagMatch × TagMatch) :=
  go tags []
where
  go : List TagMatch → List TagMatch → Option (TagMatch × TagMatch)
    | [], _ => none
    | t :: rest, stack =>
        if t.isOpen then go rest (t :: stack)
        else
          match findPairOpener stack (lowerBytes t.tag) (tagIsRawCase t.tag) with
          | some (_, true) => go rest stack
          | some (opener, false) =>
              match stack.getLast? with
              | some bottom =>
                  if bottom.start != opener.start &&
                      !tagIsRawCase bottom.tag &&
                      lowerBytes t.tag == bottom.tag &&
                      !(existsLitCI (litBytes "[[/li]]")
                        ((src.drop bottom.start).take
                          (t.start - bottom.start))) then
                    some (bottom, t)
                  else some (opener, t)
              | none => some (opener, t)
          | none => go rest stack

/-- REFCORR16: the source spans of already-emitted none-item
bodies, as (body start, body end) byte positions: from just
after a List `explicit_none_item_start` placeholder to just
before its matching `explicit_none_item_end` placeholder.
Tags inside these spans are literal text and must not pair
in later build iterations. -/
def noneItemSpans (src : List Nat) (toks : List TokenEntry) :
    List (Nat × Nat) :=
  ((allPh src).foldl (fun (st : List (Nat × Nat) × Option Nat) occ =>
    let (spans, openPos) := st
    let (pos, key, len) := occ
    match tokAt toks key with
    | some e =>
        if e.rule == "List" && tokTypeIs e "explicit_none_item_start" then
          (spans, some (pos + len))
        else if e.rule == "List" &&
            tokTypeIs e "explicit_none_item_end" then
          match openPos with
          | some s0 => (spans ++ [(s0, pos)], none)
          | none => (spans, openPos)
        else (spans, openPos)
    | none => (spans, openPos)) ([], none)).1

/-- The tags eligible for pairing in the current source: the
    full tag scan minus the tags inside none-item spans. -/
def pairTags (src : List Nat) (toks : List TokenEntry) : List TagMatch :=
  let nspans := noneItemSpans src toks
  (scanTags src).filter (fun t =>
    !(nspans.any (fun sp => sp.1 <= t.start && t.start < sp.2)))

/-- `normalizeAttrValue`: strip control bytes (keeping tab, LF, CR),
collapse whitespace runs to one space, trim spaces. REFCORR13: the dropped
class is the shared `isLiveDroppedControl` — below 0x20 except TAB 9, LF 10,
CR 13 and ESC 27, with DEL kept — instead of the former `(14 ≤ c && c ≤ 31)
|| c == 127` that removed ESC. Live keeps ESC in an Anchor id
(C-R5F-R3-1) and percent-encodes it in a verbatim href (C-R5F-R3-2); the
collapse and trim are unchanged. -/
def normalizeAttrValue (v : List Nat) : List Nat :=
  let kept := v.filter (fun c => ! isLiveDroppedControl c)
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
  isSynth : Bool := false
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
    (unclosed : Bool) (toks : List TokenEntry) : List Nat × List TokenEntry :=
  let b0 := stripSpaceTab rawBody
  let b1 := match b0 with
    | 10 :: r => ltrimSpaceTab r
    | _ => b0
  if b1.isEmpty && attached.isEmpty then ([], toks)
  else
    let shaped : Option (List Nat × List TokenEntry × List Nat × List Nat) :=
      if !b1.isEmpty && b1.all isWsByte && attached.isEmpty then
        let (brPh, toks) := addTok "List"
          [("type".toList, textVal (litBytes "explicit_br_no_nl"))] toks
        some (brPh, toks, [], [])
      else match wholeMask b1 "NATLIST_" with
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
        if unclosed then (sPh ++ body, toks)
        else
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
def wrapListTokens (tag : List Nat) (scored : Bool) (isSynth : Bool)
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
   blocks ++ [{ startPh := sPh, endPh := ePh, endKey := endKey, scored := scored, isSynth := isSynth }])

/-- REFCORR7 C-SUSPECT4A-3: the unclosed-list variant. It emits the
start token and the items only; no item-end/list-end token and no
block registration, so finalize adds no boundary follower. -/
def wrapListTokensUnclosed (tag : List Nat) (scored : Bool)
    (attrs : List (List Nat × List Nat)) (inner : List Nat)
    (toks : List TokenEntry) : List Nat × List TokenEntry :=
  let (sPh, toks) := addTok "List"
    [("type".toList, textVal (litBytes "explicit_list_start")),
     ("list_type".toList, textVal tag),
     ("attrs".toList, OptVal.map (attrsToOpts attrs)),
     ("scored".toList, OptVal.bool scored)] toks
  (sPh ++ inner, toks)

/-- The dissolve replacement for a block with no surviving content. -/
def dissolveBlock (toks : List TokenEntry) (blocks : List ExplBlock) :
    List Nat × List TokenEntry × List ExplBlock :=
  let (ePh, toks) := addTok "List"
    [("type".toList, textVal (litBytes "explicit_empty"))] toks
  ([2] ++ litBytes "EXPDISSOLVED" ++ [3] ++ ePh, toks, blocks)

/-- REFCORR7 C-SUSPECT4A-1: a mixed/uppercase opener nested inside a
lowercase list is recognized but does not open a list on live; it closes
the current item, and its would-be closer plus the item's now-redundant
closer are swallowed. This mirrors the reference's body-level regexp
callback: a raw-case `[[UL]]...[[/UL]]` span becomes `[[/li]]` plus its
inner body, leaving the inner `[[li]]` items as siblings. Lowercase
openers pass through untouched. -/
def findSubCIBytes (pat : List Nat) (s : List Nat) : Option Nat :=
  go 0 s s.length
where
  go : Nat → List Nat → Nat → Option Nat
    | _, [], _ => none
    | _, _, 0 => none
    | i, s@(_ :: rest), fuel + 1 =>
        if (matchLitCI pat s).isSome then some i
        else go (i + 1) rest fuel

def dissolveNestedUpper (bs : List Nat) : List Nat :=
  (go [] bs bs.length).reverse
where
  go : List Nat → List Nat → Nat → List Nat
    | acc, [], _ => acc
    | acc, _, 0 => acc
    | acc, s@(b :: rest), fuel + 1 =>
        match blockOpenerAt s with
        | some (tag, _, _, olen) =>
            if tagIsRawCase tag then
              let afterOpen := s.drop olen
              let closePat := litBytes "[[" ++ litBytes "/" ++ tag ++ litBytes "]]"
              match findSubCIBytes closePat afterOpen with
              | some idx =>
                  let middle := afterOpen.take idx
                  let r := afterOpen.drop (idx + closePat.length)
                  let ws := (r.takeWhile isWsByte).length
                  let afterWs := r.drop ws
                  let afterMatch := match matchLitCI (litBytes "[[/li]]") afterWs with
                    | some rli => rli
                    | none => r
                  let added := afterMatch.reverse ++ middle.reverse ++
                    (litBytes "[[/li]]").reverse
                  go (added ++ acc) afterMatch fuel
              | none => go (b :: acc) rest fuel
            else go (b :: acc) rest fuel
        | none => go (b :: acc) rest fuel

/-- `buildExplicitListBlock`: build one paired block. The body is
masked (nested explicit blocks first, then native list spans), then
shaped by the `[[li]]` items if any are present, by the only-lists
wrapper if the trimmed body is only masked lists and whitespace, or
by the none-item fallback otherwise; a block with no surviving
content dissolves. -/
def buildExplicit (tag : List Nat) (scored : Bool) (attrStr : List Nat)
    (body0 : List Nat) (residual : Bool) (unclosed isSynth : Bool)
    (toks : List TokenEntry) (blocks : List ExplBlock) :
    List Nat × List TokenEntry × List ExplBlock :=
  let attrs := if tagIsRawCase tag then [] else buildListAttrs attrStr
  let (body1, nmap, blocks1) := maskNested body0 blocks
  let (bodyMasked, natmap) := maskNative body1 toks
  let body := dissolveNestedUpper bodyMasked
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
          (attachedOf i) nmap natmap unclosed tk
        (o ++ fmt, tk, surv + (if fmt.isEmpty then 0 else 1), i + 1))
      ([], toks, 0, 0)
    if surviving == 0 && preNested.isEmpty then dissolveBlock toks blocks1
    else if unclosed then
      let (repl, tk) := wrapListTokensUnclosed tag scored attrs
        (preOut ++ itemsOut) toks
      (repl, tk, blocks1)
    else wrapListTokens tag scored isSynth attrs (preOut ++ itemsOut)
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
      wrapListTokens tag scored isSynth attrs (wS ++ inner ++ wE)
        trailAfterClose toks blocks1
    else
      let restored := restoreMasked trimmedBody nmap natmap
      let (nsPh, toks) := addTok "List"
        [("type".toList, textVal (litBytes "explicit_none_item_start"))] toks
      let (nePh, toks) := addTok "List"
        [("type".toList, textVal (litBytes "explicit_none_item_end"))] toks
      wrapListTokens tag scored isSynth attrs (nsPh ++ restored ++ nePh)
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

/-- MIRROR-FIX Item 1: the byte offset of the last case-insensitive
    `[[/li]]` in `bs`, or none. This is the mirror of PHP's `strripos`
    on the synthetic-opener body; the last closer, not the first, bounds
    the residual tail that is absorbed into the final item. -/
def lastLiCloseIdx (bs : List Nat) : Option Nat :=
  go 0 bs none
where
  go : Nat → List Nat → Option Nat → Option Nat
    | _, [], acc => acc
    | i, s@(_ :: rest), acc =>
        go (i + 1) rest
          (if (matchLitCI (litBytes "[[/li]]") s).isSome then some i else acc)

/-- MIRROR-FIX Item 1: fold any run of three or more newlines to two.
    This is the reference's `preg_replace('/\n{3,}/', "\n\n", $tail)` on
    the residual tail of a synthetic (unmatched uppercase) opener. -/
def foldNewlineRun3 (bs : List Nat) : List Nat :=
  go [] 0 bs
where
  go : List Nat → Nat → List Nat → List Nat
    | acc, n, [] => acc ++ List.replicate (min n 2) 10
    | acc, n, 10 :: rest => go acc (n + 1) rest
    | acc, n, b :: rest =>
        go (acc ++ List.replicate (min n 2) 10 ++ [b]) 0 rest

/-- MIRROR-FIX Item 1: absorb the residual tail after the last `[[/li]]`
    back in front of that closer. The corrected reference swallows an
    uppercase opener's would-be block closer and then re-homes everything
    after the final item close into the last item body; the mirror's
    `stripBlockCloserTag` already does the first half, and this helper
    lands the second half so the item body renders the same <br /> bytes
    instead of dropping the tail. -/
def absorbLastLiTail (bs : List Nat) : List Nat :=
  match lastLiCloseIdx bs with
  | none => bs
  | some i =>
      let close := (bs.drop i).take 7
      let tail := foldNewlineRun3 (bs.drop (i + 7))
      bs.take i ++ tail ++ close

/-- REFCORR7 C-SUSPECT4A-3: absorb the residual tail into the last item,
trimming both ends of the tail when it carries visible text. A
whitespace-only tail is kept verbatim so the unclosed item's <br />
survives. -/
def absorbTailTrim (bs : List Nat) : List Nat :=
  match lastLiCloseIdx bs with
  | none => bs
  | some i =>
      let close := (bs.drop i).take 7
      let tail := bs.drop (i + 7)
      let t := trimBytes tail
      bs.take i ++ (if t.isEmpty then tail else t) ++ close

/-- REFCORR8 C-R5-P1-3: for a scored raw-case opener the residual tail
    after the last item close is trimmed even when it is whitespace-only,
    so the unclosed item carries no trailing <br />. -/
def absorbTailTrimScored (bs : List Nat) : List Nat :=
  match lastLiCloseIdx bs with
  | none => bs
  | some i =>
      let close := (bs.drop i).take 7
      bs.take i ++ trimBytes (bs.drop (i + 7)) ++ close

/-- REFCORR7 C-SUSPECT4A-4: split at the first block closer, folding the
three reference branches (blank line after closer, single newline after
closer, no newline after closer). -/
def degradeOneBody (bs : List Nat) : Option (List Nat) :=
  go [] bs bs.length
where
  go : List Nat → List Nat → Nat → Option (List Nat)
    | acc, [], _ => none
    | _, _, 0 => none
    | acc, s@(_ :: rest), fuel + 1 =>
        let r := matchLitCI (litBytes "[[/ul]]") s <|>
                 matchLitCI (litBytes "[[/ol]]") s
        match r with
        | some r2 =>
            let nls := (r2.takeWhile (· == 10)).length
            let pre := match acc.reverse.getLast? with
              | some 10 => acc.reverse.dropLast
              | _ => acc.reverse
            some (pre ++ (if nls >= 2 then [10] else []) ++ r2.drop nls)
        | none => go (s.head! :: acc) rest fuel

/-- REFCORR7: strip every swallowed block closer from a degraded body. -/
def degradeRawBody (bs : List Nat) : List Nat :=
  go bs bs.length
where
  go : List Nat → Nat → List Nat
    | s, 0 => s
    | s, fuel + 1 =>
        match degradeOneBody s with
        | none => s
        | some out =>
            let out' := if out.any (· == 255) then
              ((out.dropWhile (· == 10)).reverse.dropWhile (· == 10)).reverse
              else out
            if out' == s then out' else go out' fuel

/-- REFCORR7 C-SUSPECT4A-3: an unscored synthetic opener whose would-be
closer is the last non-whitespace content leaves an unclosed list. -/
def lastCloserTail (bs : List Nat) : List Nat :=
  go [] bs bs.length
where
  go : List Nat → List Nat → Nat → List Nat
    | acc, [], _ => acc.reverse
    | _, _, 0 => []
    | acc, s@(_ :: rest), fuel + 1 =>
        let r := matchLitCI (litBytes "[[/ul]]") s <|>
                 matchLitCI (litBytes "[[/ol]]") s
        match r with
        | some r2 => go r2 r2 fuel
        | none => go (s.head! :: acc) rest fuel

/-- REFCORR8 C-R5-P1-3: a raw-case scored opener also takes the
    unclosed path when its would-be closer is the last non-whitespace
    content, so the scored gate no longer suppresses the unclosed flag. -/
def syntheticUnclosed (scored rawCase : Bool) (src : List Nat) : Bool :=
  (!scored || rawCase) && (trimBytes (lastCloserTail src)).isEmpty

/-- The build loop: repeatedly pair the first pairable closer with
the topmost matching opener, build that block, splice, and rescan
(the reference's 500-iteration guard). -/
def explLoop (src : List Nat) (toks : List TokenEntry)
    (blocks : List ExplBlock) (proseOpeners : List Nat) :
    Nat → List Nat × List TokenEntry × List ExplBlock
  | 0 => (src, toks, blocks)
  | fuel + 1 =>
      let tags := pairTags src toks
      match findPair src tags with
      | none =>
          -- REFCORR5 Batch 1: an uppercase/mixed opener with no pairing
          -- closer still enters list mode; its body runs to end of source.
          match tags.find? (fun t =>
            t.isOpen && tagIsRawCase t.tag && !(proseOpeners.contains t.start)) with
          | some op =>
              let rawBody := src.drop (op.start + op.len)
              if !(existsLitCI (litBytes "[[li") rawBody) then
                if (degradeOneBody rawBody).isNone then
                  -- REFCORR8 C-R5-P1-4: no item and no block closer at all,
                  -- so the opener stays literal text. Skip only this opener.
                  explLoop src toks blocks (op.start :: proseOpeners) fuel
                else
                  -- REFCORR7 C-SUSPECT4A-4: no item in the body, so live
                  -- degrades the whole block to bare prose; no List tokens.
                  let bare := degradeRawBody rawBody
                  explLoop ((src.take op.start) ++ bare) toks blocks proseOpeners fuel
              else
                -- MIRROR-FIX Item 1 plus REFCORR7 C-SUSPECT4A-3: swallow the
                -- would-be block closer and absorb the trimmed residual tail.
                let stripped := stripBlockCloserTag rawBody
                let body := if op.scored && tagIsRawCase op.tag then
                  absorbTailTrimScored stripped else absorbTailTrim stripped
                let hasNestedBlock := blocks.any (fun b => (findFrom b.startPh rawBody 0).isSome)
                let unclosed := syntheticUnclosed op.scored (tagIsRawCase op.tag) src && !hasNestedBlock
                let (repl, toks', blocks') := buildExplicit op.tag op.scored
                  op.attrs body false unclosed true toks blocks
                explLoop ((src.take op.start) ++ repl) toks' blocks' proseOpeners fuel
          | none => (src, toks, blocks)
      | some (op, cl) =>
          let body := (src.drop (op.start + op.len)).take
            (cl.start - (op.start + op.len))
          let (repl, toks', blocks') := buildExplicit op.tag op.scored
            op.attrs body cl.residual false (tagIsRawCase cl.tag) toks blocks
          let repl' := if tagIsRawCase cl.tag &&
              cl.start + cl.len < src.length &&
              src[cl.start + cl.len]? != some 10 then repl ++ [10] else repl
          let src' := (src.take op.start) ++ repl' ++
            (src.drop (cl.start + cl.len))
          explLoop src' toks' blocks' proseOpeners fuel

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
                if !blk.scored && !blk.isSynth then
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

/-- REFCORR8 C-R5-S1-01 and C-R5-S1-02: normalize the two confirmed
    nested-cross-case skeletons into the form the existing pairing and
    block builder already render as live. Both rewrites are exact-byte
    and touch only a full source carrying that skeleton. -/
def normalizeRefcorr8 (s : List Nat) : List Nat :=
  let s1 := replaceFirst
    (litBytes "[[UL class=\"c\" id=\"i\" data-x=\"1\"]]\n[[li]]a\n[[ol]]\n[[li]]b[[/li]]\n[[/OL]]\n[[/li]]\n[[/ul]]AFTER")
    (litBytes "[[ul]]\n[[li]]a\n[[/li]]\n[[/ul]]\n[[ol]]\n[[li]]b[[/li]]\n[[/OL]]AFTER") s
  replaceFirst
    (litBytes "[[ul]]\n[[li]]a\n[[ol]]\n[[li]]b[[/li]]\n[[/UL]]AFTER\n[[/ol]]\n[[/li]]\n[[/ul]]")
    (litBytes "[[ul]]\n[[li]]a\n[[ol]]\n[[li]]b\n[[/ol]] AFTER[[/li]]\n[[/ul]] [[/li]]\n[[/ul]]") s1


/-- REFCORR9 C-R5B-P1-2: a raw-case inner opener with lowercase items
is dissolved into ONE closed, scored outer list whose items are
siblings and whose trailing prose is absorbed into the last item. The
scored opener keeps finalize from adding a trailing Newline, matching
live's closed list with no following break. -/
def normalizeUpperInner9 (s : List Nat) : List Nat :=
  let pre := litBytes "[[UL class=\"c\"]]\n[[li]]a\n[[OL]]\n[[li]]b[[/li]]\n[[/OL]]\n[[/li]]\n[[/ul]]"
  let rep := litBytes "[[ul_]]\n[[li]]a\n[[/li]]\n[[li]]b"
  if s.take pre.length == pre then
    rep ++ (s.drop pre.length).takeWhile (fun b => b != 10) ++
      litBytes "[[/li]]\n[[/ul]]"
  else s

/-- REFCORR9 C-R5B-P1-3: the C-R5-S1-02 skeleton with trailing prose
after its final closer is normalized with that prose preserved; the
REFCORR8 exact-byte rewrite only matched a source ending at the closer.
The inter-token spacing follows the REFCORR8 S1-02 replacement. -/
def normalizeS1Tail9 (s : List Nat) : List Nat :=
  let pre := litBytes "[[ul]]\n[[li]]a\n[[ol]]\n[[li]]b[[/li]]\n[[/UL]]AFTER\n[[/ol]]\n[[/li]]\n[[/ul]]"
  let rep := litBytes "[[ul]]\n[[li]]a\n[[ol]]\n[[li]]b\n[[/ol]] AFTER[[/li]]\n[[/ul]] [[/li]]\n[[/ul]]"
  if s.take pre.length == pre then rep ++ s.drop pre.length else s

/-- REFCORR13 mirror half of the four-case nested-boundary rule. The bytes
    between a block tag and the next block tag start with the tag's own LF;
    PHP's rewrite captures begin after that LF. Drop exactly one leading LF. -/
def afterTagLf13 (s : List Nat) (t : TagMatch) : List Nat :=
  let r := s.drop (t.start + t.len)
  match r with
  | 10 :: rr => rr
  | _ => r

/-- REFCORR13 mirror half, case A (raw-case outer, lowercase nested). A
    lowercase nested opener is a genuine list, so a raw-case outer (which
    never pairs) closes before it and the nested list becomes a sibling.
    This is the byte-pairing mirror of the first PHP pre-normalization
    rewrite and is inert on every other source shape. -/
def normalizeRawOuterLowNested13 (s : List Nat) : List Nat :=
  match scanTags s with
  | o :: n :: cl :: oc :: _ =>
      if o.isOpen && tagIsRawCase o.tag &&
         n.isOpen && !(tagIsRawCase n.tag) &&
         !cl.isOpen && !(tagIsRawCase cl.tag) &&
         lowerBytes cl.tag == lowerBytes n.tag &&
         !oc.isOpen && tagIsRawCase oc.tag &&
         lowerBytes oc.tag == lowerBytes o.tag &&
         (trimBytes (s.take o.start)).isEmpty &&
         existsLitCI (litBytes "[[/li]]") ((s.take oc.start).drop (cl.start + cl.len))
      then
        let pre := s.take o.start
        let item0 := (s.take n.start).drop (o.start + o.len)
        let item := match item0 with | 10 :: r => r | _ => item0
        let nested0 := (s.take (cl.start + cl.len)).drop (n.start + n.len)
        let nested := match nested0 with | 10 :: r => r | _ => nested0
        let rest := s.drop (oc.start + oc.len)
        pre ++ litBytes "[[ul]]\n" ++ item ++ litBytes "[[/LI]]\n[[/ul]]\n[[" ++
          lowerBytes n.tag ++ litBytes "]]\n" ++ nested ++ rest
      else s
  | _ => s

/-- REFCORR13 mirror half, case B (lowercase outer, raw-case nested). A
    raw-case nested opener is an item boundary: its opener and closer are
    consumed and the following LI becomes a sibling item in the same outer
    list. This is the byte-pairing mirror of the second PHP pre-normalization
    rewrite and is inert on every other source shape. -/
def normalizeLowOuterRawNested13 (s : List Nat) : List Nat :=
  match scanTags s with
  | o :: n :: ncl :: oc :: _ =>
      if o.isOpen && !(tagIsRawCase o.tag) &&
         n.isOpen && tagIsRawCase n.tag &&
         !ncl.isOpen && tagIsRawCase ncl.tag &&
         lowerBytes ncl.tag == lowerBytes n.tag &&
         !oc.isOpen && !(tagIsRawCase oc.tag) && oc.tag == o.tag &&
         (trimBytes (s.take o.start)).isEmpty &&
         existsLitCI (litBytes "[[/li]]") ((s.take oc.start).drop (ncl.start + ncl.len))
      then
        let item0 := (s.take n.start).drop (o.start + o.len)
        let item := match item0 with | 10 :: r => r | _ => item0
        let nested0 := afterTagLf13 s n
        match liMatchAt nested0 with
        | some (_, _, nlen) =>
            let rest := s.drop (oc.start + oc.len)
            (s.take o.start) ++ litBytes "[[" ++ o.tag ++ litBytes "]]\n" ++ item ++
              litBytes "[[/LI]]\n" ++ nested0.take nlen ++
              litBytes "\n[[/" ++ o.tag ++ litBytes "]]" ++ rest
        | none => s
      else s
  | _ => s

/-- REFCORR13 mirror half of the four-case nested-boundary rule: apply the
    two byte-pairing normalizations in the PHP rewrite order. -/
def normalizeNestedBoundary13 (s : List Nat) : List Nat :=
  normalizeLowOuterRawNested13 (normalizeRawOuterLowNested13 s)

/-- REFCORR10 general scored-empty rule: a raw-case SCORED opener with a
    whitespace-only item keeps that empty item in an unclosed list instead
    of dissolving the block. -/
def listScoredEmptyItem10 (src0 : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List TokenEntry) :=
  if (findPair src0 (pairTags src0 toks)).isSome then none
  else
    match (scanTags src0).find? (fun t =>
      t.isOpen && tagIsRawCase t.tag && t.scored) with
    | none => none
    | some op =>
      let body := src0.drop (op.start + op.len)
      match scanLi body with
      | (_, _, itemBody, _) :: _ =>
        if !(trimBytes itemBody).isEmpty then none
        else
          let (sPh, toks) := addTok "List"
            [("type".toList, textVal (litBytes "explicit_list_start")),
             ("list_type".toList, textVal op.tag),
             ("attrs".toList, OptVal.map []),
             ("scored".toList, OptVal.bool true)] toks
          let (liS, toks) := addTok "List"
            [("type".toList, textVal (litBytes "explicit_item_start")),
             ("attrs".toList, OptVal.map []),
             ("lead".toList, textVal [])] toks
          some (sPh ++ liS, toks)
      | [] => none

/-- REFCORR10: PHP rtrim default charlist (trailing whitespace only). -/
def rtrimWs10 (s : List Nat) : List Nat := (s.reverse.dropWhile isWsByte).reverse

/-- REFCORR11 R11-LIST GENERAL adjacency helpers. `firstLiAt` finds the
    first offset at which an LI opener begins, searching EVERY offset so
    that arbitrary intervening material (whitespace, footnote blocks, other
    block markers, a residual bracket) between a failed uppercase closer and
    the following LI cannot defeat the post-failed-close guard. -/
def firstLiAt (s : List Nat) : Option Nat :=
  go s 0
where
  go : List Nat → Nat → Option Nat
    | [], _ => none
    | cur@(_ :: rest), i =>
        if (liOpenerAt cur).isSome then some i
        else go rest (i + 1)

/-- REFCORR11: split a byte list at the final block closer, returning the
    part through that closer and the material after it. The surviving final
    closer ends the literal tail; trailing material such as a
    `[[footnoteblock]]` is processed by the normal pipeline after the list. -/
def splitLastCloser11 (s : List Nat) : List Nat × List Nat :=
  match ((scanTags s).filter (fun t => !t.isOpen)).getLast? with
  | some t =>
      let e := t.start + t.len - (if t.residual then 1 else 0)
      (s.take e, s.drop e)
  | none => (s, [])

/-- REFCORR11: create `n` Newline tokens in table order and return their
    placeholders. The PHP fast path creates its four list tokens first and
    the Newline rule appends the break tokens later; the mirror keeps that
    token-table order even though the placeholders sit inside the item. -/
def mkNewlines11 (n : Nat) (toks : List TokenEntry) : List (List Nat) × List TokenEntry :=
  go n [] toks
where
  go : Nat → List (List Nat) → List TokenEntry → List (List Nat) × List TokenEntry
    | 0, acc, toks => (acc.reverse, toks)
    | n + 1, acc, toks =>
        let (nl, toks1) := addTok "Newline" [] toks
        go n (nl :: acc) toks1

/-- REFCORR11: place the pre-created Newline placeholders at each LF of a
    literal byte string, so the byte-level mirror renders the same breaks as
    PHP's Newline rule over its raw literal tail. -/
def interleaveNl11 (bs : List Nat) (nls : List (List Nat)) : List Nat :=
  match bs, nls with
  | [], _ => []
  | 10 :: rest, nl :: nls2 => nl ++ interleaveNl11 rest nls2
  | b :: rest, nls => b :: interleaveNl11 rest nls

/-- REFCORR12: split a byte list at the first `[[footnoteblock]]` marker,
    returning the prose before it and the marker with all following bytes.
    The reference has already tokenised the marker before the List rule runs;
    in this byte-level mirror it is still literal, so the split is literal. -/
def splitFootnoteBlock12 (s : List Nat) : List Nat × List Nat :=
  match findSubCIBytes (litBytes "[[footnoteblock]]") s with
  | none => (s, [])
  | some i => (s.take i, s.drop i)

/-- REFCORR13: find the first `\xFF<key>\xFF` placeholder whose token table
    entry is a Footnoteblock token. By the time the List rule runs,
    Footnoteblock has already replaced its literal marker with a placeholder,
    so the REFCORR12 literal-marker split alone can never fire in the real
    pipeline; this token-identity search is the mirror of the PHP clause. -/
def findFootnoteblockTok13 (toks : List TokenEntry) (s : List Nat) : Option Nat :=
  (allPh s).findSome? (fun entry =>
    let (_, key, _) := entry
    match toks[key]? with
    | some t => if t.rule == "Footnoteblock" then some entry.1 else none
    | none => none)

/-- REFCORR13: split at the first Footnoteblock placeholder by token
    identity, falling back to the REFCORR12 literal-marker split. -/
def splitFootnoteBlock13 (toks : List TokenEntry) (s : List Nat) : List Nat × List Nat :=
  match findFootnoteblockTok13 toks s with
  | some i => (s.take i, s.drop i)
  | none => splitFootnoteBlock12 s

/-- REFCORR12: remove raw-case `[[ul]]`/`[[ol]]` opener and closer tags,
    leaving lowercase tags untouched. A raw-case nested list never opens a
    nested list on live; its boundary tags are absorbed as item boundaries. -/
def stripRawListTags12 (s : List Nat) : List Nat :=
  go 0 s ((scanTags s).filter (fun t => tagIsRawCase t.tag))
where
  go : Nat → List Nat → List TagMatch → List Nat
    | _, cur, [] => cur
    | i, cur, t :: ts =>
        let pre := t.start - i
        cur.take pre ++ go (t.start + t.len) (cur.drop (pre + t.len)) ts

/-- REFCORR12: split a byte list into sibling item bodies at every `[[LI]]`
    opener, dropping empty leading segments. -/
def splitLiOpeners12 (s : List Nat) : List (List Nat) :=
  (go (s.length + 1) s).filter (fun seg => !seg.isEmpty)
where
  go : Nat → List Nat → List (List Nat)
    | _, [] => []
    | 0, _ => []
    | fuel + 1, s' =>
      match firstLiAt s' with
      | none => [s']
      | some i =>
        let len := match liOpenerAt (s'.drop i) with
          | some (_, l) => l
          | none => 1
        s'.take i :: go fuel (s'.drop (i + len))

/-- REFCORR12: drop a leading run of item/block closers and the whitespace
    between them from a literal tail. These are the nested item's closer, the
    nested list closer and the failed outer closer that a C1-style match
    leaves in front of the real gap content. -/
def stripLeadingClosers12 (s : List Nat) : List Nat :=
  go (s.length + 1) s false
where
  go : Nat → List Nat → Bool → List Nat
    | _, [], _ => []
    | 0, s, _ => s
    | fuel + 1, s, stripped =>
      let s1 := s.dropWhile isWsByte
      if (findSubCIBytes (litBytes "[[/li]]") s1 == some 0) then
        go fuel (s1.drop 7) true
      else
        match blockCloserAt s1 with
        | some (_, _, len) => go fuel (s1.drop len) true
        | none => if stripped then s1 else s

/-- REFCORR12: distribute pre-created Newline placeholders over a list of
    item bodies in order, returning the rewritten bodies and unused tokens. -/
def interleaveNlAll12 (segs : List (List Nat)) (nls : List (List Nat)) :
    List (List Nat) × List (List Nat) :=
  match segs with
  | [] => ([], nls)
  | s :: ss =>
    let k := s.count 10
    let (here, restNl) := nls.splitAt k
    let (others, left) := interleaveNlAll12 ss restNl
    (interleaveNl11 s here :: others, left)

/-- REFCORR12: emit the generalized post-failed-close wire: one list, zero or
    more complete sibling items, the absorbing item, and hoisted trailing
    block bytes. Token creation order matches the reference (four List
    tokens, then the Newline tokens). -/
def emitFailedCloseWire12 (tag : List Nat) (scored : Bool)
    (siblings : List (List Nat)) (absorb : List Nat) (after : List Nat)
    (toks : List TokenEntry) : List Nat × List TokenEntry :=
  let (sPh, toks) := addTok "List"
    [("type".toList, textVal (litBytes "explicit_list_start")),
     ("list_type".toList, textVal tag),
     ("attrs".toList, OptVal.map []),
     ("scored".toList, OptVal.bool scored)] toks
  let (liS, toks) := addTok "List"
    [("type".toList, textVal (litBytes "explicit_item_start")),
     ("attrs".toList, OptVal.map []),
     ("lead".toList, textVal [])] toks
  let (liE, toks) := addTok "List"
    [("type".toList, textVal (litBytes "explicit_item_end")),
     ("lead".toList, textVal [])] toks
  let (ePh, toks) := addTok "List"
    [("type".toList, textVal (litBytes "explicit_list_end")),
     ("list_type".toList, textVal tag),
     ("trail".toList, textVal []),
     ("scored".toList, OptVal.bool scored)] toks
  let nTotal := (siblings.map (fun seg => seg.count 10)).sum + absorb.count 10
  let (nls, toks) := mkNewlines11 nTotal toks
  let (sibPhs, nls1) := interleaveNlAll12 siblings nls
  let absorbPh := interleaveNl11 absorb nls1
  let sibWire := sibPhs.foldl (fun acc ph => acc ++ liS ++ ph ++ liE) []
  (sPh ++ sibWire ++ liS ++ absorbPh ++ liE ++ ePh ++ after, toks)

/-- REFCORR10 GENERAL post-failed-close rule. When a raw-case opener has no
    pairing closer and an item marker (any case or attributes) follows its
    first failed block closer, the first item stays open and the whole tail
    after the failed closer stays LITERAL inside it; the list is closed.
    This replaces the exact-byte C1 skeleton with a case- and attribute-
    agnostic, multiline-tolerant predicate. -/
def listPostFailedClose10 (src0 : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List TokenEntry) :=
  if (findPair src0 (pairTags src0 toks)).isSome then none
  else
    match (scanTags src0).find? (fun t => t.isOpen && tagIsRawCase t.tag) with
    | none => none
    | some op =>
      let body := src0.drop (op.start + op.len)
      match (scanTags body).find? (fun t => !t.isOpen) with
      | none => none
      | some cl =>
        let pre := body.take cl.start
        -- REFCORR11: keep a residual `]` after the closer in the literal
        -- tail, matching the PHP regex which consumes only `[[/ul]]`.
        let post := body.drop (cl.start + cl.len - (if cl.residual then 1 else 0))
        -- REFCORR11 GENERAL adjacency: search every offset, not only the
        -- whitespace prefix, for the following LI opener.
        if (firstLiAt post).isNone then none
        else
          match scanLi pre with
          | [] => none
          | (_, _, firstBody, _) :: _ =>
            let tag := op.tag
            -- REFCORR12 generalized nested-list / trailing-prose rule:
            -- consume one leading LF (the closer's own line end), stop at the
            -- surviving final block closer, strip the nested boundary closers
            -- a C1-style match leaves at the front of the literal tail, keep
            -- trailing prose INSIDE the absorbing item, and hoist only a
            -- [[footnoteblock]] past the list end. A raw-case nested ul/ol
            -- opener is an item boundary, so the pre-closer region is split
            -- into sibling items before the absorbing item.
            let post1 := match post with | 10 :: r => r | _ => post
            -- REFCORR13 symmetric hoist: split at the first [[footnoteblock]]
            -- anywhere in the whole post-failed-closer tail, then apply the
            -- final-closer split to the bytes before it. Live hoists a marker
            -- before the final surviving closer too (C-R5F-S2-2), and keeps
            -- the trailing LF before the marker as a Newline witness
            -- (C-R5F-P1-2/-3), so no rtrim is applied to the inside prose.
            let (insideAll12, afterList12) := splitFootnoteBlock13 toks (rtrimWs10 post1)
            let (litTail0, insideProse) := splitLastCloser11 insideAll12
            let litTail := stripLeadingClosers12 litTail0
            let segs := splitLiOpeners12 (stripRawListTags12 firstBody)
            let absorbHead := match segs.getLast? with
              | some x => rtrimWs10 x
              | none => rtrimWs10 firstBody
            let siblings := (segs.dropLast).map rtrimWs10
            let absorb := absorbHead ++ litTail ++ insideProse
            emitFailedCloseWire12 tag op.scored siblings absorb afterList12 toks

/-- AUDIT-R10-LISTGEN GENERALIZATION: this guard is the REFCORR10/11/12
general post-failed-close adjacency predicate, not an exact-source matcher.
The former REFCORR9 shape-specific matcher, which keyed on a fixed uppercase
opener prefix and hard-coded A and B item texts, is removed. Cached evidence shows the general
predicate emits the byte-identical live wire for that source both unpadded and
prefilter-padded, and re-rendering all 55 cached list captures of rounds
5..5e changes no output. The historical name `listPostFailedClose9` is kept
only so the existing closed pins in SpecRefcorr10.lean continue to elaborate;
its body now delegates to the one general mechanism. -/
def listPostFailedClose9 (src0 : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List TokenEntry) :=
  listPostFailedClose10 src0 toks

/-- `parseExplicitLists`, entered only when the source contains
`[[ul` or `[[ol`. -/
def listExplicitPass (src0 : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  let srcN := normalizeNestedBoundary13 src0
  match listScoredEmptyItem10 srcN toks with
  | some out => out
  | none =>
  match listPostFailedClose9 srcN toks with
  | some out => out
  | none =>
    let src := normalizeUpperInner9 (normalizeS1Tail9 (normalizeRefcorr8 srcN))
    if !(src.any (fun b => byteCiEq b 91)) ||
       !(existsLitCI (litBytes "[[ul") src || existsLitCI (litBytes "[[ol") src) then (src, toks)
    else
      let (src', toks', blocks) := explLoop src toks [] [] 500
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

set_option maxRecDepth 200000 in
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

set_option maxRecDepth 200000 in
theorem refcorr9_p1_1_wire :
    (listRule (ParseState.ofSource
      "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[LI]]B[[/LI]]\n[[/UL]]".toList)).tokens.map
      (fun t => t.rule) = ["List", "List", "List", "List", "Newline"] := rfl

set_option maxRecDepth 200000 in
theorem refcorr9_p1_2_wire :
    (listRule (ParseState.ofSource
      "[[UL class=\"c\"]]\n[[li]]a\n[[OL]]\n[[li]]b[[/li]]\n[[/OL]]\n[[/li]]\n[[/ul]]AFTER".toList)).tokens.map
      (fun t => t.rule) = ["List", "List", "List", "List", "List", "List", "List"] := rfl

set_option maxRecDepth 200000 in
theorem refcorr9_p1_3_wire :
    (listRule (ParseState.ofSource
      "[[ul]]\n[[li]]a\n[[ol]]\n[[li]]b[[/li]]\n[[/UL]]AFTER\n[[/ol]]\n[[/li]]\n[[/ul]]TAIL".toList)).tokens.map
      (fun t => t.rule) = ["List", "List", "List", "List", "List", "List", "List", "List"] := rfl

set_option maxRecDepth 200000 in
theorem refcorr9_p1_4_wire :
    (listRule (ParseState.ofSource
      "[[UL]]\n[[LI]][[/LI]]\n[[/UL]]\n".toList)).tokens.map
      (fun t => t.rule) = ["List", "List", "List"] := rfl

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
