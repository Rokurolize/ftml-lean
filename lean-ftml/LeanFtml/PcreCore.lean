/-
  LeanFtml.PcreCore — the single executable PCRE2-byte-subset engine (TCB-2)
  of ADVISOR-PROOF-POLICY §1.2 / §4.2 / §5.1.

  This is a scratch generalization of the canonical LeanFtml.Pcre.lean
  (proof-base-v1, 4bf28f7).  Pcre.lean only supports match existence and
  extent for the 79 Embed-render patterns; it has no captures, no m/U/D
  flags, no lookarounds, no backreferences and no (?R).  The 68 parse rules
  need all of those: the mechanically extracted table in RefTables.lean
  (snapshot-39) records `(?R)` recursion in Code/Iftags/Math/Div/Divalign/
  Size/Span/Collapsible/Tableadv, lookahead and lookbehind in Raw/Rawold/
  Newline/Blockquote/Footnote, backreference \1 in Divalign, and the D/U/m
  flags on Freelink, the inline families and the line-anchored rules.

  DESIGN.  One fuel-indexed, stack-driven backtracking evaluator `runMatch`
  is the whole engine.  CPS is represented by an explicit `List Task`
  (continuation stack) rather than a host-language function, so every
  recursive call is syntactically on the predecessor fuel and Lean's kernel
  accepts the definition without `partial`.  PCRE's (?R) is a single task
  that re-pushes the whole pattern on that stack.  Because the engine is
  one definition, the mirror can call it directly: matcher equivalence is
  by construction and per-rule proofs only have to discharge the ~10-40 LOC
  `process()` callback (policy §1.3 note).

  DESIGN DECISION (F2, recorded per BRIEF-F2-PCCRECORE).  PCRE is a
  backtracking engine, and this engine models backtracking faithfully
  rather than simulating an NFA: `runMatch` enumerates match results
  in PCRE preference order (alternation left to right; greedy
  quantifiers longest-first unless lazy or `/U`), and the public
  drivers take the head of that enumeration, which is exactly the
  match PHP's `preg_match` reports.  The vcgen pilot's greedy-star
  question therefore does not arise here: preference order is a
  property of the enumeration, and greedy and lazy stars are the
  same `rep` node with a branch-order flag.  The certified fragment
  (call it F_pcre, the PCRE2 byte-mode subset the 68 rules actually
  use) is: literals and escapes (\n \r \t \f \v and identity
  escapes), character classes with ranges, negation, and the
  \s \S \d \D \w \W items inside and outside classes, `.`,
  anchors `^`, `$`, \b, \B, capturing and non-capturing groups,
  alternation, greedy and lazy quantifiers `* + ? {n} {n,} {n,m}`,
  backreferences \1-\9, positive and negative lookahead and
  lookbehind, whole-pattern recursion `(?R)`, and the flags
  i, s, m, U, D (u parsed and carried; its semantics are F3
  UnicodeCore's).  The extractor reports exactly this construct set
  for snapshot-39 (23 constructs, 6 flags); anything outside it
  (atomic groups, possessive quantifiers, conditionals, \K,
  callouts, `(?1)` subroutines, `(?(DEFINE))`) is absent from the
  corpus and unimplemented, and the parser rejects it rather than
  approximating it.  The same rejection, never literalization,
  applies to \A, \z, \Z and to every other letter escape outside
  the fragment (\a, \e, \c, \h, \p, \Q, ...): no unrecognized
  letter escape is silently read as the literal byte.  The
  do-notation `StateM` driver over this
  engine, proved with vcgen per the pilot, lives in
  LeanFtml.PcreCoreScan.

  SCOPE / HONEST REMAINDER.  This is a byte engine.  It implements exactly
  the syntactic constructs the extractor reports for snapshot-39 except the
  `/u` UTF-8 mode (4 rules: Include, Freelink, Div, Tableadv), which is F3's
  UnicodeCore responsibility; the `utf8` flag is parsed and carried but the
  byte matcher deliberately does not claim Unicode semantics.  Configured
  pattern templates (Delimiter, Url) are instantiated by the caller.
  `\G` is implemented: it is the `.gpos` assertion against the anchor
  threaded through `runMatch`, and the global drivers hold it at the
  previous match end.  No atomic groups, possessive quantifiers,
  conditionals, `\K`, callouts, recursion-subroutine calls `(?1)`, or
  `(?(DEFINE))` are present in the extracted corpus, so they are not
  implemented.  Fuel is a bounded
  certificate parameter; a universal fuel-sufficiency theorem is NOT
  claimed here — the bounded PCRE2 torture suite (conformance-pcre2/) is
  the honest maximum against external C code (policy §2.2 Class C).

  AXIOMS.  Lean core only: no Mathlib, no `sorry`, no `native_decide`, no
  `bv_decide`, no `Lean.ofReduceBool`.  All theorems are kernel-checked.
-/

namespace LeanFtml

-- The certified engine lives in its own sub-namespace: the F1-era
-- `LeanFtml.Pcre` stub declares the same interface names and is
-- still imported elsewhere in the library, so the two generations
-- can only coexist namespaced apart.
namespace PcreCore

/-! ## Byte predicates -/

def pcreIsWsByte (b : Nat) : Bool :=
  b == 32 || b == 9 || b == 10 || b == 13 || b == 12 || b == 11

def isDigByte (b : Nat) : Bool := 48 ≤ b && b ≤ 57

def isWrdByte (b : Nat) : Bool :=
  (65 ≤ b && b ≤ 90) || (97 ≤ b && b ≤ 122) || (48 ≤ b && b ≤ 57) || b == 95

def foldByte (b : Nat) : Nat := if 97 ≤ b && b ≤ 122 then b - 32 else b

def swapCaseByte (b : Nat) : Nat :=
  if 97 ≤ b && b ≤ 122 then b - 32
  else if 65 ≤ b && b ≤ 90 then b + 32
  else b

def byteMatchCI (ci : Bool) (pat subj : Nat) : Bool :=
  pat == subj || (ci && foldByte pat == foldByte subj)

/-! ## Flags -/

structure Flags where
  ci : Bool := false
  dotall : Bool := false
  multiline : Bool := false
  ungreedy : Bool := false
  dollarEndOnly : Bool := false
  utf8 : Bool := false
deriving Inhabited, Repr, DecidableEq, BEq

/-! ## Character classes -/

inductive ClsItem where
  | rng : Nat → Nat → ClsItem
  | wsp : ClsItem
  | nsp : ClsItem
  | dig : ClsItem
  | ndg : ClsItem
  | wrd : ClsItem
  | nwr : ClsItem
deriving Inhabited, Repr, DecidableEq, BEq

def clsItemMatch : ClsItem → Nat → Bool
  | .rng lo hi, b => lo ≤ b && b ≤ hi
  | .wsp, b => pcreIsWsByte b
  | .nsp, b => !pcreIsWsByte b
  | .dig, b => isDigByte b
  | .ndg, b => !isDigByte b
  | .wrd, b => isWrdByte b
  | .nwr, b => !isWrdByte b

def clsMatch (neg : Bool) (items : List ClsItem) (ci : Bool) (b : Nat) : Bool :=
  let base := items.any fun it =>
    clsItemMatch it b || (ci && clsItemMatch it (swapCaseByte b))
  if neg then !base else base

/-! ## Pattern AST -/

inductive RE where
  | eps : RE
  | byte : Nat → RE
  | dot : RE
  | cls : Bool → List ClsItem → RE
  | bol : RE
  | eol : RE
  | wordB : RE
  | nwordB : RE
  | seq : RE → RE → RE
  | alt : RE → RE → RE
  | rep : RE → Nat → Option Nat → Bool → RE
  | grp : Nat → RE → RE
  | back : Nat → RE
  | gpos : RE
  | posLA : RE → RE
  | negLA : RE → RE
  | posLB : RE → RE
  | negLB : RE → RE
  | recurse : RE
deriving Inhabited, Repr, DecidableEq, BEq

/-- Internal continuation-stack task.  `close i s` records the end position
    of capture group `i` whose start was `s`. -/
inductive Task where
  | node : RE → Task
  | close : Nat → Nat → Task
deriving Inhabited, Repr, DecidableEq, BEq

/-! ## Capture environments and results -/

structure Cap where
  idx : Nat
  start : Nat
  endPos : Nat
deriving Inhabited, Repr, DecidableEq, BEq

abbrev Caps := List Cap

structure MResult where
  pos : Nat
  caps : Caps
deriving Inhabited, Repr, DecidableEq, BEq

abbrev Results := List MResult

def setCap (i s e : Nat) (caps : Caps) : Caps :=
  { idx := i, start := s, endPos := e } :: caps.filter (fun c => c.idx != i)

def getCap (i : Nat) (caps : Caps) : Option (Nat × Nat) :=
  match caps.find? (fun c => c.idx == i) with
  | some c => some (c.start, c.endPos)
  | none => none

def capBytes (subj : List Nat) (i : Nat) (caps : Caps) : Option (List Nat) :=
  match getCap i caps with
  | some (s, e) => some ((subj.drop s).take (e - s))
  | none => none

def dedupResults (xs : Results) : Results := go xs (xs.length + 1)
where
  go : Results → Nat → Results
    | [], _ => []
    | _, 0 => []
    | x :: xs, fuel + 1 => x :: go (xs.filter fun y => y != x) fuel

/-! ## The engine -/

/-- All end positions and capture states reachable from `pos`, in PCRE
    preference order (greedy-first unless `/U` or a lazy marker inverted it).
    The fuel argument makes the engine structurally recursive; `pcreFuel`
    below is the certificate bound used at every public entry. -/
def runMatch (fl : Flags) (whole : RE) (subj : List Nat) (anchor : Nat)
    (todo : List Task) (pos : Nat) (caps : Caps) : Nat → Results
  | 0 => []
  | fuel + 1 => match todo with
    | [] => [{ pos := pos, caps := caps }]
    | .close i s :: rest => runMatch fl whole subj anchor rest pos (setCap i s pos caps) fuel
    | .node re :: rest => match re with
      | .eps => runMatch fl whole subj anchor rest pos caps fuel
      | .byte pb =>
          match subj.drop pos with
          | b :: _ => if byteMatchCI fl.ci pb b
              then runMatch fl whole subj anchor rest (pos + 1) caps fuel else []
          | [] => []
      | .dot =>
          match subj.drop pos with
          | b :: _ => if fl.dotall || b != 10
              then runMatch fl whole subj anchor rest (pos + 1) caps fuel else []
          | [] => []
      | .cls neg items =>
          match subj.drop pos with
          | b :: _ => if clsMatch neg items fl.ci b
              then runMatch fl whole subj anchor rest (pos + 1) caps fuel else []
          | [] => []
      | .bol =>
          let prev := match (subj.drop (pos - 1)).head? with
            | some b => pos > 0 && b == 10
            | none => false
          if pos == 0 || (fl.multiline && prev)
          then runMatch fl whole subj anchor rest pos caps fuel else []
      | .eol =>
          let here := match (subj.drop pos).head? with | some b => b | none => 0
          let atEnd := pos == subj.length
          let beforeAnyNL := pos < subj.length && here == 10
          let beforeFinalNL := pos + 1 == subj.length && here == 10
          if atEnd || (beforeAnyNL && fl.multiline) ||
              (beforeFinalNL && !fl.dollarEndOnly)
          then runMatch fl whole subj anchor rest pos caps fuel else []
      | .wordB => 
          let before := match (subj.drop (pos - 1)).head? with
            | some b => pos > 0 && isWrdByte b
            | none => false
          let after := match (subj.drop pos).head? with
            | some b => isWrdByte b
            | none => false
          if before != after then runMatch fl whole subj anchor rest pos caps fuel else []
      | .nwordB =>
          let before := match (subj.drop (pos - 1)).head? with
            | some b => pos > 0 && isWrdByte b
            | none => false
          let after := match (subj.drop pos).head? with
            | some b => isWrdByte b
            | none => false
          if before == after then runMatch fl whole subj anchor rest pos caps fuel else []
      | .seq a b => runMatch fl whole subj anchor (.node a :: .node b :: rest) pos caps fuel
      | .alt a b => dedupResults
          (runMatch fl whole subj anchor (.node a :: rest) pos caps fuel ++
           runMatch fl whole subj anchor (.node b :: rest) pos caps fuel)
      | .rep r mn mx greedy =>
          let one := runMatch fl whole subj anchor [.node r] pos caps fuel
          let canMore := match mx with
            | none => true
            | some 0 => false
            | some _ => true
          let nextMn := if mn == 0 then 0 else mn - 1
          let nextMx := match mx with
            | none => none
            | some 0 => some 0
            | some m => some (m - 1)
          -- PCRE breaks an empty productive loop; it still counts to `mn`.
          let usable := one.filter fun res =>
            res.pos > pos || mn > 0 || res.caps != caps
          let takeBranch := if canMore then
              usable.flatMap fun res =>
                runMatch fl whole subj anchor
                  (.node (RE.rep r nextMn nextMx greedy) :: rest) res.pos res.caps fuel
            else []
          let stopBranch := if mn == 0
              then runMatch fl whole subj anchor rest pos caps fuel else []
          dedupResults (if greedy then takeBranch ++ stopBranch
                        else stopBranch ++ takeBranch)
      | .grp i r => runMatch fl whole subj anchor (.node r :: .close i pos :: rest) pos caps fuel
      | .back i =>
          match capBytes subj i caps with
          | none => []
          | some want =>
              let actual := (subj.drop pos).take want.length
              if actual == want
              then runMatch fl whole subj anchor rest (pos + want.length) caps fuel else []
      | .gpos =>
          if pos == anchor
          then runMatch fl whole subj anchor rest pos caps fuel else []
      | .posLA r =>
          match (runMatch fl whole subj anchor [.node r] pos caps fuel).head? with
          | some res => runMatch fl whole subj anchor rest pos res.caps fuel
          | none => []
      | .negLA r =>
          if (runMatch fl whole subj anchor [.node r] pos caps fuel).isEmpty
          then runMatch fl whole subj anchor rest pos caps fuel else []
      | .posLB r =>
          let starts := (List.range (pos + 1)).reverse
          let hits := starts.flatMap fun s =>
            (runMatch fl whole subj anchor [.node r] s caps fuel).filter
              (fun res => res.pos == pos)
          match hits.head? with
          | some res => runMatch fl whole subj anchor rest pos res.caps fuel
          | none => []
      | .negLB r =>
          let starts := (List.range (pos + 1)).reverse
          let hits := starts.flatMap fun s =>
            (runMatch fl whole subj anchor [.node r] s caps fuel).filter
              (fun res => res.pos == pos)
          if hits.isEmpty then runMatch fl whole subj anchor rest pos caps fuel else []
      | .recurse => runMatch fl whole subj anchor (.node whole :: rest) pos caps fuel

/-- Certificate bound.  Exceeds pattern atoms × subject length for every
    snapshot-39 pattern; the torture suite exercises the bound explicitly. -/
def pcreFuel : Nat := 32768

/-! ## Public drivers -/

structure PcreParsed where
  ast : RE
  flags : Flags
deriving Inhabited, Repr, DecidableEq, BEq

def pcreEndsAnchored (p : PcreParsed) (subj : List Nat) (anchor pos : Nat) :
    Results :=
  runMatch p.flags p.ast subj anchor [.node p.ast] pos [] pcreFuel

/-- All matches of `p` starting exactly at `pos`; the `\G` anchor is
    `pos` itself, which is PHP's semantics for `preg_match` with an
    offset argument and for each continuation of `preg_match_all` /
    `preg_replace_callback`. -/
def pcreEnds (p : PcreParsed) (subj : List Nat) (pos : Nat) : Results :=
  pcreEndsAnchored p subj pos pos

def pcreFirst (p : PcreParsed) (subj : List Nat) (pos : Nat) : Option MResult :=
  (pcreEnds p subj pos).head?

/-- The first match at `pos` with the `\G` anchor held at `anchor`
    (PHP's `preg_match` without an offset holds `\G` at 0 while it
    scans). -/
def pcreFirstAnchored (p : PcreParsed) (subj : List Nat)
    (anchor pos : Nat) : Option MResult :=
  (pcreEndsAnchored p subj anchor pos).head?

def pcreMatch (p : PcreParsed) (subj : List Nat) : Bool :=
  (List.range (subj.length + 1)).any fun s => !(pcreEnds p subj s).isEmpty

/-- Bytes of capture group `i` in the leftmost match anywhere in `subj`,
    or [] when the group (or the whole match) is unmatched. -/
def pcreCapture (p : PcreParsed) (subj : List Nat) (i : Nat) : List Nat :=
  go 0 (subj.length + 1)
where
  go (pos : Nat) : Nat → List Nat
    | 0 => []
    | fuel + 1 =>
      if pos > subj.length then []
      else match pcreFirst p subj pos with
        | some res => match capBytes subj i res.caps with
            | some bs => bs
            | none => []
        | none => go (pos + 1) fuel

/-- Capture groups 1..9 of one match as PHP's `$matches[1..9]`. -/
def matchGroups (subj : List Nat) (caps : Caps) : List (Option (List Nat)) :=
  (List.range 9).map fun k => capBytes subj (k + 1) caps

/-- The first match at or after `pos` with the `\G` anchor held at
    `anchor`.  This is the search both global drivers perform: PHP
    scans forward from the current offset, but `\G` always refers
    to that offset (the end of the previous match, or the initial
    offset), never to the scan position. -/
def searchAnchored (p : PcreParsed) (subj : List Nat) (anchor pos : Nat) :
    Option (Nat × MResult) :=
  go (subj.length + 1 - pos) pos
where
  go : Nat → Nat → Option (Nat × MResult)
    | 0, _ => none
    | fuel + 1, s => match pcreFirstAnchored p subj anchor s with
      | some res => some (s, res)
      | none => go fuel (s + 1)

/-- PHP `preg_replace_callback`: leftmost non-overlapping matches; each
    match's full text and groups 1..9 are handed to `f`.  Zero-length matches
    emit the replacement and advance one byte, as PHP does. -/
def pregReplaceCallback (p : PcreParsed) (subj : List Nat)
    (f : List Nat → List (Option (List Nat)) → List Nat) : List Nat :=
  go 0 (subj.length + 1)
where
  go (anchor : Nat) : Nat → List Nat
    | 0 => subj.drop anchor
    | fuel + 1 => match searchAnchored p subj anchor anchor with
      | none => subj.drop anchor
      | some (s, res) =>
          let gap := (subj.drop anchor).take (s - anchor)
          let full := (subj.drop s).take (res.pos - s)
          let rep := f full (matchGroups subj res.caps)
          if res.pos > s then gap ++ rep ++ go res.pos fuel
          else gap ++ rep ++ (match subj.drop s with
                                | b :: _ => b :: go (s + 1) fuel
                                | [] => [])

/-- PHP `preg_match_all`: (start, end, groups 1..9) for every non-overlapping
    match, left to right. -/
def pregMatchAll (p : PcreParsed) (subj : List Nat) :
    List (Nat × Nat × List (Option (List Nat))) :=
  go 0 (subj.length + 1)
where
  go (anchor : Nat) : Nat → List (Nat × Nat × List (Option (List Nat)))
    | 0 => []
    | fuel + 1 => match searchAnchored p subj anchor anchor with
      | none => []
      | some (s, res) =>
          let groups := matchGroups subj res.caps
          if res.pos > s then (s, res.pos, groups) :: go res.pos fuel
          else (s, s, groups) :: go (s + 1) fuel

/-! ## Parser -/

/-- Find the closing delimiter of a delimited pattern (first unescaped
    delimiter outside a class), returning body and flag bytes. -/
def splitPattern (bs : List Nat) : Option (List Nat × List Nat) :=
  match bs with
  | [] => none
  | _ :: rest => go rest [] false false
  where
    delim := match bs with | x :: _ => x | [] => 0
    go : List Nat → List Nat → Bool → Bool → Option (List Nat × List Nat)
      | [], _, _, _ => none
      | c :: cs, acc, esc, inCls =>
          if esc then go cs (c :: acc) false inCls
          else if c == 92 then go cs (c :: acc) true inCls
          else if c == 91 && !inCls then go cs (c :: acc) false true
          else if c == 93 && inCls then go cs (c :: acc) false false
          else if c == delim && !inCls then some (acc.reverse, cs)
          else go cs (c :: acc) false inCls

inductive ClassPiece where
  | item : ClsItem → ClassPiece
  | chr : Nat → ClassPiece
deriving Inhabited, Repr, DecidableEq, BEq

def hexDigitVal (c : Nat) : Option Nat :=
  if 48 ≤ c && c ≤ 57 then some (c - 48)
  else if 97 ≤ c && c ≤ 102 then some (c - 87)
  else if 65 ≤ c && c ≤ 70 then some (c - 55)
  else none

/-- One or two hex digits after `\x`, as a byte value and rest. -/
def hexByte : List Nat → Option (Nat × List Nat)
  | c1 :: c2 :: rest => match hexDigitVal c1, hexDigitVal c2 with
      | some h1, some h2 => some (h1 * 16 + h2, rest)
      | some h1, none => some (h1, c2 :: rest)
      | _, _ => none
  | c1 :: rest => match hexDigitVal c1 with
      | some h1 => some (h1, rest)
      | none => none
  | [] => none

/-- Up to two further octal digits after a `\0`, as a byte value
    and rest (PCRE reads at most three octal digits in total). -/
def octByte : List Nat → Nat × List Nat
  | c1 :: c2 :: rest =>
      if 48 ≤ c1 && c1 ≤ 55 && 48 ≤ c2 && c2 ≤ 55
      then ((c1 - 48) * 8 + (c2 - 48), rest)
      else if 48 ≤ c1 && c1 ≤ 55 then (c1 - 48, c2 :: rest)
      else (0, c1 :: c2 :: rest)
  | c1 :: rest =>
      if 48 ≤ c1 && c1 ≤ 55 then (c1 - 48, rest) else (0, c1 :: rest)
  | [] => (0, [])

/-- One character-class item: a plain byte or a class escape.
    Escape handling mirrors the atom level: the recognized escapes
    are the class items, the control escapes, `\xHH` and octal; a
    `\x` with no hex digit and every unrecognized letter escape
    (`\a`, `\e`, `\h`, `\p`, `\K`, `\A`, ...) return `none`, never
    the literal letter -- PCRE2 either rejects those itself or gives
    them non-literal semantics.  Only non-letter identity escapes
    (`\-`, `\]`, `\\`, ...) denote the literal byte. -/
def classChar : List Nat → Option (ClassPiece × List Nat)
  | 92 :: c :: rest => match c with
      | 115 => some (.item .wsp, rest)
      | 83 => some (.item .nsp, rest)
      | 100 => some (.item .dig, rest)
      | 68 => some (.item .ndg, rest)
      | 119 => some (.item .wrd, rest)
      | 87 => some (.item .nwr, rest)
      | 110 => some (.chr 10, rest)
      | 114 => some (.chr 13, rest)
      | 116 => some (.chr 9, rest)
      | 102 => some (.chr 12, rest)
      | 118 => some (.chr 11, rest)
      | 98 => some (.chr 8, rest)
      | 120 => match hexByte rest with
        | some (v, r) => some (.chr v, r)
        | none => none
      | 48 => let (v, r) := octByte rest; some (.chr v, r)
      | _ => if (65 ≤ c && c ≤ 90) || (97 ≤ c && c ≤ 122) then none
             else some (.chr c, rest)
  | c :: rest => some (.chr c, rest)
  | [] => none

def parseClassItems : Nat → List Nat → Bool → Option (List ClsItem × List Nat)
  | 0, _, _ => none
  | fuel + 1, bs, first => match bs with
    | [] => none
    | 93 :: rest =>
        if first then
          match parseClassItems fuel rest false with
          | some (items, r) => some (.rng 93 93 :: items, r)
          | none => none
        else some ([], rest)
    | _ => match classChar bs with
      | none => none
      | some (piece, rest1) => match piece with
        | .item it =>
            match parseClassItems fuel rest1 false with
            | some (items, r) => some (it :: items, r)
            | none => none
        | .chr lo => match rest1 with
          | 45 :: rest2 => match rest2 with
            | 93 :: _ =>
                match parseClassItems fuel rest1 false with
                | some (items, r) => some (.rng lo lo :: items, r)
                | none => none
            | [] => none
            | _ => match classChar rest2 with
              | some (.chr hi, rest3) =>
                  match parseClassItems fuel rest3 false with
                  | some (items, r) => some (.rng lo hi :: items, r)
                  | none => none
              | _ => none
          | _ => match parseClassItems fuel rest1 false with
            | some (items, r) => some (.rng lo lo :: items, r)
            | none => none

def parseClass (fuel : Nat) (bs : List Nat) : Option (RE × List Nat) :=
  match bs with
  | 91 :: rest =>
      let (neg, rest1) := match rest with
        | 94 :: r => (true, r)
        | _ => (false, rest)
      match parseClassItems fuel rest1 true with
      | some (items, r) => some (.cls neg items, r)
      | none => none
  | _ => none

def digitPrefix (bs : List Nat) : Option (Nat × List Nat) :=
  let ds := bs.takeWhile (fun c => 48 ≤ c && c ≤ 57)
  if ds.isEmpty then none
  else some (ds.foldl (fun acc c => acc * 10 + (c - 48)) 0, bs.drop ds.length)

def lazyMark (bs : List Nat) : Bool × List Nat :=
  match bs with
  | 63 :: rest => (true, rest)
  | rest => (false, rest)

def parseQuant (bs : List Nat) : (Option (Nat × Option Nat)) × List Nat × Bool :=
  match bs with
  | 42 :: rest => let (lz, r) := lazyMark rest; (some (0, none), r, lz)
  | 43 :: rest => let (lz, r) := lazyMark rest; (some (1, none), r, lz)
  | 63 :: rest => let (lz, r) := lazyMark rest; (some (0, some 1), r, lz)
  | 123 :: rest =>
      match digitPrefix rest with
      | some (n, r1) => match r1 with
        | 125 :: r2 => let (lz, r) := lazyMark r2; (some (n, some n), r, lz)
        | 44 :: r2 => match r2 with
          | 125 :: r3 => let (lz, r) := lazyMark r3; (some (n, none), r, lz)
          | _ => match digitPrefix r2 with
            | some (m, r3) => match r3 with
              | 125 :: r4 => let (lz, r) := lazyMark r4; (some (n, some m), r, lz)
              | _ => (none, bs, false)
            | none => (none, bs, false)
        | _ => (none, bs, false)
      | none => (none, bs, false)
  | _ => (none, bs, false)

/-- PCRE2 compile-time rejections on the quantifier path, checked in
    `parseGo`'s `.seq` case after `parseQuant` succeeds: a possessive
    `+` mark following the quantifier (after any lazy `?` mark), an
    inverted `{n,m}` range, and a bound above PCRE2's 65535 limit.
    Possessive quantifiers are outside F_pcre and must fail the parse
    outright; without this check the `+` fell through to the atom
    parser and was silently read as a literal plus sign. -/
def quantifierRejected (q : Option (Nat × Option Nat)) (rest : List Nat) :
    Bool :=
  match q, rest with
  | some _, 43 :: _ => true
  | some (mn, mx), _ =>
      65535 < mn || (match mx with
        | some m => m < mn || 65535 < m
        | none => false)
  | none, _ => false

inductive ParseTask where
  | alt | seq | atom
deriving Inhabited, Repr, DecidableEq, BEq

/-- Pattern-body parser.  Threads the next capture-group index; every
    recursive call consumes fuel and every atom consumes at least one byte. -/
def parseGo (ungreedy : Bool) : ParseTask → Nat → Nat → List Nat →
    Option (RE × Nat × List Nat)
  | .seq, _, g, [] => some (.eps, g, [])
  | _, 0, _, _ => none
  | .alt, fuel + 1, g, bs =>
      match parseGo ungreedy .seq fuel g bs with
      | some (s1, g1, rest1) => match rest1 with
        | 124 :: rest2 => match parseGo ungreedy .alt fuel g1 rest2 with
            | some (s2, g2, rest3) => some (.alt s1 s2, g2, rest3)
            | none => none
        | _ => some (s1, g1, rest1)
      | none => none
  | .seq, fuel + 1, g, bs => match bs with
    | [] => some (.eps, g, [])
    | c :: _ =>
        if c == 124 || c == 41 then some (.eps, g, bs)
        else match parseGo ungreedy .atom fuel g bs with
          | some (a, g1, rest1) =>
              let (q, rest2, lz) := parseQuant rest1
              if quantifierRejected q rest2 then none else
                let a' := match q with
                  | some (mn, mx) =>
                      let gr := !ungreedy
                      RE.rep a mn mx (if lz then !gr else gr)
                  | none => a
                match parseGo ungreedy .seq fuel g1 rest2 with
                  | some (s, g2, rest3) =>
                      let combined : RE := match s with | .eps => a' | _ => .seq a' s
                      some (combined, g2, rest3)
                  | none => none
          | none => none
  | .atom, fuel + 1, g, bs => match bs with
    | [] => none
    | 40 :: 63 :: rest =>
        -- (?...) extended group
        (match rest with
         | 58 :: r => match parseGo ungreedy .alt fuel g r with
             | some (inner, g1, 41 :: r2) => some (inner, g1, r2)
             | _ => none
         | 61 :: r => match parseGo ungreedy .alt fuel g r with
             | some (inner, g1, 41 :: r2) => some (.posLA inner, g1, r2)
             | _ => none
         | 33 :: r => match parseGo ungreedy .alt fuel g r with
             | some (inner, g1, 41 :: r2) => some (.negLA inner, g1, r2)
             | _ => none
         | 60 :: 61 :: r => match parseGo ungreedy .alt fuel g r with
             | some (inner, g1, 41 :: r2) => some (.posLB inner, g1, r2)
             | _ => none
         | 60 :: 33 :: r => match parseGo ungreedy .alt fuel g r with
             | some (inner, g1, 41 :: r2) => some (.negLB inner, g1, r2)
             | _ => none
         | 82 :: 41 :: r => some (.recurse, g, r)
         | _ => none)
    | 40 :: rest =>
        match parseGo ungreedy .alt fuel (g + 1) rest with
        | some (inner, g1, 41 :: r2) => some (.grp (g + 1) inner, g1, r2)
        | _ => none
    | 91 :: _ => match parseClass fuel bs with
        | some (re, r) => some (re, g, r)
        | none => none
    -- Escapes: the recognized set is the fragment's (class items,
    -- \b \B \G, the control escapes, \xHH, octal, backreferences).
    -- A `\x` with no hex digit fails, and every other letter escape
    -- (\A \K \z \Z \a \e \c \h \p \Q ...) fails in the fallback arm
    -- below rather than being read as the literal letter; only
    -- non-letter identity escapes denote the literal byte.
    | 92 :: c :: rest => match c with
      | 115 => some (.cls false [.wsp], g, rest)
      | 83 => some (.cls true [.wsp], g, rest)
      | 100 => some (.cls false [.dig], g, rest)
      | 68 => some (.cls true [.dig], g, rest)
      | 119 => some (.cls false [.wrd], g, rest)
      | 87 => some (.cls true [.wrd], g, rest)
      | 98 => some (.wordB, g, rest)
      | 71 => some (.gpos, g, rest)
      | 66 => some (.nwordB, g, rest)
      | 110 => some (.byte 10, g, rest)
      | 114 => some (.byte 13, g, rest)
      | 116 => some (.byte 9, g, rest)
      | 102 => some (.byte 12, g, rest)
      | 118 => some (.byte 11, g, rest)
      | 120 => match hexByte rest with
        | some (v, r) => some (.byte v, g, r)
        | none => none
      | 48 => let (v, r) := octByte rest; some (.byte v, g, r)
      | d => if 49 ≤ d && d ≤ 57
             then some (.back (d - 48), g, rest)
             else if (65 ≤ d && d ≤ 90) || (97 ≤ d && d ≤ 122) then none
             else some (.byte d, g, rest)
    | 46 :: rest => some (.dot, g, rest)
    | 94 :: rest => some (.bol, g, rest)
    | 36 :: rest => some (.eol, g, rest)
    -- A quantifier byte or a lone trailing backslash in atom
    -- position is a PCRE2 compile error (a quantifier with nothing
    -- to repeat, a possessive mark with no quantifier before it),
    -- never a literal byte.
    | 42 :: _ => none
    | 43 :: _ => none
    | 63 :: _ => none
    | 92 :: _ => none
    | c :: rest => some (.byte c, g, rest)

def flagsOfBytes (bs : List Nat) : Flags :=
  { ci := bs.contains 105,
    dotall := bs.contains 115,
    multiline := bs.contains 109,
    ungreedy := bs.contains 85,
    dollarEndOnly := bs.contains 68,
    utf8 := bs.contains 117 }

/-- Primary parser entry: a byte-literal PHP pattern.  A pattern
    whose first byte could not be a PHP delimiter (alphanumeric or
    one of `_([\\`) is a bare, undelimited pattern with no flags,
    as stored by Email.php and Interwiki.php and interpolated into a
    delimited whole at the call site; it is parsed as a bare body,
    mirroring the extractor's `pattern_flags` convention. -/
def parsePcreBytes (bs : List Nat) : Option PcreParsed :=
  let bare := match bs with
    | c :: _ => (48 ≤ c && c ≤ 57) || (65 ≤ c && c ≤ 90) ||
        (97 ≤ c && c ≤ 122) || c == 95 || c == 40 || c == 91 || c == 92
    | [] => false
  if bare then
    match parseGo false .alt (bs.length * 4 + 16) 0 bs with
    | some (ast, _, []) => some { ast := ast, flags := {} }
    | _ => none
  else match splitPattern bs with
  | some (body, flags) =>
      let fl := flagsOfBytes flags
      match parseGo fl.ungreedy .alt (body.length * 4 + 16) 0 body with
      | some (ast, _, []) => some { ast := ast, flags := fl }
      | _ => none
  | none => none

/-- Convenience wrapper for String callers.  Kernel-facing code should use
    `parsePcreBytes` with byte literals from RefTables.lean instead, to keep
    `String.toList` out of the trusted base. -/
def parsePcre (s : String) : Option PcreParsed :=
  parsePcreBytes (s.toList.map Char.toNat)

/-! ## Universal engine lemmas (kernel-checked, no axioms beyond core) -/

theorem runMatch_zero (fl : Flags) (whole : RE) (subj : List Nat)
    (anchor : Nat) (todo : List Task) (pos : Nat) (caps : Caps) :
    runMatch fl whole subj anchor todo pos caps 0 = [] := rfl

theorem setCap_getCap (i s e : Nat) (caps : Caps) :
    getCap i (setCap i s e caps) = some (s, e) := by
  simp [setCap, getCap]

theorem dedupResults_go_zero (xs : Results) : dedupResults.go xs 0 = [] := by
  cases xs <;> rfl

theorem dedupResults_go_step (x : MResult) (xs : Results) (fuel : Nat) :
    dedupResults.go (x :: xs) (fuel + 1) =
      x :: dedupResults.go (xs.filter fun y => y != x) fuel := rfl

theorem runMatch_eps_step (fl : Flags) (whole : RE) (subj : List Nat)
    (anchor : Nat) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    runMatch fl whole subj anchor (.node .eps :: rest) pos caps (fuel + 1) =
      runMatch fl whole subj anchor rest pos caps fuel := rfl

theorem parseQuant_lazy_consumed (bs : List Nat) :
    (parseQuant (63 :: 63 :: bs)).2.2 = true := by
  simp [parseQuant, lazyMark]

end PcreCore

end LeanFtml
