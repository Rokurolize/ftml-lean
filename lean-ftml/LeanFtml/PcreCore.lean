/-
  LeanFtml.PcreCore — the single executable PCRE2-byte-subset engine (TCB-2)
  of ADVISOR-PROOF-POLICY §1.2 / §4.2 / §5.1.

  This is a scratch generalization of the canonical LeanFtml.Pcre.lean
  (proof-base-v1, 4bf28f7).  Pcre.lean only supports match existence and
  extent for the 79 Embed-render patterns; it has no captures, no m/U/D
  flags, no lookarounds, no backreferences and no (?R).  The 68 parse rules
  need all of those: the mechanically extracted table in RefTables.lean
  (snapshot-36) records `(?R)` recursion in Code/Iftags/Math/Div/Divalign/
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

  SCOPE / HONEST REMAINDER.  This is a byte engine.  It implements exactly
  the syntactic constructs the extractor reports for snapshot-36 except the
  `/u` UTF-8 mode (4 rules: Include, Freelink, Div, Tableadv), which is F3's
  UnicodeCore responsibility; the `utf8` flag is parsed and carried but the
  byte matcher deliberately does not claim Unicode semantics.  Configured
  pattern templates (Delimiter, Url) are instantiated by the caller.  No
  atomic groups, possessive quantifiers, conditionals, `\K`, `\G`, callouts,
  recursion-subroutine calls `(?1)`, or `(?(DEFINE))` are present in the
  extracted corpus, so they are not implemented.  Fuel is a bounded
  certificate parameter; a universal fuel-sufficiency theorem is NOT
  claimed here — the bounded PCRE2 torture suite (conformance-pcre2/) is
  the honest maximum against external C code (policy §2.2 Class C).

  AXIOMS.  Lean core only: no Mathlib, no `sorry`, no `native_decide`, no
  `bv_decide`, no `Lean.ofReduceBool`.  All theorems are kernel-checked.
-/

namespace LeanFtml

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
def runMatch (fl : Flags) (whole : RE) (subj : List Nat)
    (todo : List Task) (pos : Nat) (caps : Caps) : Nat → Results
  | 0 => []
  | fuel + 1 => match todo with
    | [] => [{ pos := pos, caps := caps }]
    | .close i s :: rest => runMatch fl whole subj rest pos (setCap i s pos caps) fuel
    | .node re :: rest => match re with
      | .eps => runMatch fl whole subj rest pos caps fuel
      | .byte pb =>
          match subj.drop pos with
          | b :: _ => if byteMatchCI fl.ci pb b
              then runMatch fl whole subj rest (pos + 1) caps fuel else []
          | [] => []
      | .dot =>
          match subj.drop pos with
          | b :: _ => if fl.dotall || b != 10
              then runMatch fl whole subj rest (pos + 1) caps fuel else []
          | [] => []
      | .cls neg items =>
          match subj.drop pos with
          | b :: _ => if clsMatch neg items fl.ci b
              then runMatch fl whole subj rest (pos + 1) caps fuel else []
          | [] => []
      | .bol =>
          let prev := match (subj.drop (pos - 1)).head? with
            | some b => pos > 0 && b == 10
            | none => false
          if pos == 0 || (fl.multiline && prev)
          then runMatch fl whole subj rest pos caps fuel else []
      | .eol =>
          let here := match (subj.drop pos).head? with | some b => b | none => 0
          let atEnd := pos == subj.length
          let beforeNL := pos < subj.length && here == 10
          if atEnd || (beforeNL && (fl.multiline || !fl.dollarEndOnly))
          then runMatch fl whole subj rest pos caps fuel else []
      | .wordB => 
          let before := match (subj.drop (pos - 1)).head? with
            | some b => pos > 0 && isWrdByte b
            | none => false
          let after := match (subj.drop pos).head? with
            | some b => isWrdByte b
            | none => false
          if before != after then runMatch fl whole subj rest pos caps fuel else []
      | .nwordB =>
          let before := match (subj.drop (pos - 1)).head? with
            | some b => pos > 0 && isWrdByte b
            | none => false
          let after := match (subj.drop pos).head? with
            | some b => isWrdByte b
            | none => false
          if before == after then runMatch fl whole subj rest pos caps fuel else []
      | .seq a b => runMatch fl whole subj (.node a :: .node b :: rest) pos caps fuel
      | .alt a b => dedupResults
          (runMatch fl whole subj (.node a :: rest) pos caps fuel ++
           runMatch fl whole subj (.node b :: rest) pos caps fuel)
      | .rep r mn mx greedy =>
          let one := runMatch fl whole subj [.node r] pos caps fuel
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
                runMatch fl whole subj
                  (.node (RE.rep r nextMn nextMx greedy) :: rest) res.pos res.caps fuel
            else []
          let stopBranch := if mn == 0
              then runMatch fl whole subj rest pos caps fuel else []
          dedupResults (if greedy then takeBranch ++ stopBranch
                        else stopBranch ++ takeBranch)
      | .grp i r => runMatch fl whole subj (.node r :: .close i pos :: rest) pos caps fuel
      | .back i =>
          match capBytes subj i caps with
          | none => []
          | some want =>
              let actual := (subj.drop pos).take want.length
              if actual == want
              then runMatch fl whole subj rest (pos + want.length) caps fuel else []
      | .posLA r =>
          match (runMatch fl whole subj [.node r] pos caps fuel).head? with
          | some res => runMatch fl whole subj rest pos res.caps fuel
          | none => []
      | .negLA r =>
          if (runMatch fl whole subj [.node r] pos caps fuel).isEmpty
          then runMatch fl whole subj rest pos caps fuel else []
      | .posLB r =>
          let starts := (List.range (pos + 1)).reverse
          let hits := starts.flatMap fun s =>
            (runMatch fl whole subj [.node r] s caps fuel).filter
              (fun res => res.pos == pos)
          match hits.head? with
          | some res => runMatch fl whole subj rest pos res.caps fuel
          | none => []
      | .negLB r =>
          let starts := (List.range (pos + 1)).reverse
          let hits := starts.flatMap fun s =>
            (runMatch fl whole subj [.node r] s caps fuel).filter
              (fun res => res.pos == pos)
          if hits.isEmpty then runMatch fl whole subj rest pos caps fuel else []
      | .recurse => runMatch fl whole subj (.node whole :: rest) pos caps fuel

/-- Certificate bound.  Exceeds pattern atoms × subject length for every
    snapshot-36 pattern; the torture suite exercises the bound explicitly. -/
def pcreFuel : Nat := 32768

/-! ## Public drivers -/

structure PcreParsed where
  ast : RE
  flags : Flags
deriving Inhabited, Repr, DecidableEq, BEq

def pcreEnds (p : PcreParsed) (subj : List Nat) (pos : Nat) : Results :=
  runMatch p.flags p.ast subj [.node p.ast] pos [] pcreFuel

def pcreFirst (p : PcreParsed) (subj : List Nat) (pos : Nat) : Option MResult :=
  (pcreEnds p subj pos).head?

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

/-- PHP `preg_replace_callback`: leftmost non-overlapping matches; each
    match's full text and groups 1..9 are handed to `f`.  Zero-length matches
    emit the replacement and advance one byte, as PHP does. -/
def pregReplaceCallback (p : PcreParsed) (subj : List Nat)
    (f : List Nat → List (Option (List Nat)) → List Nat) : List Nat :=
  go 0 (subj.length + 1)
where
  go (pos : Nat) : Nat → List Nat
    | 0 => subj.drop pos
    | fuel + 1 =>
      if pos > subj.length then []
      else match pcreFirst p subj pos with
        | some res =>
            let full := (subj.drop pos).take (res.pos - pos)
            let rep := f full (matchGroups subj res.caps)
            if res.pos > pos then rep ++ go res.pos fuel
            else rep ++ (match subj.drop pos with
                          | b :: _ => b :: go (pos + 1) fuel
                          | [] => [])
        | none => match subj.drop pos with
            | b :: _ => b :: go (pos + 1) fuel
            | [] => []

/-- PHP `preg_match_all`: (start, end, groups 1..9) for every non-overlapping
    match, left to right. -/
def pregMatchAll (p : PcreParsed) (subj : List Nat) :
    List (Nat × Nat × List (Option (List Nat))) :=
  go 0 (subj.length + 1)
where
  go (pos : Nat) : Nat → List (Nat × Nat × List (Option (List Nat)))
    | 0 => []
    | fuel + 1 =>
      if pos > subj.length then []
      else match pcreFirst p subj pos with
        | some res =>
            let groups := matchGroups subj res.caps
            if res.pos > pos then (pos, res.pos, groups) :: go res.pos fuel
            else (pos, pos, groups) :: (if pos < subj.length then go (pos + 1) fuel else [])
        | none => if pos < subj.length then go (pos + 1) fuel else []

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

def classChar : List Nat → Option (ClassPiece × List Nat)
  | 92 :: c :: rest => match c with
      | 115 => some (.item .wsp, rest)
      | 83 => some (.item .nsp, rest)
      | 100 => some (.item .dig, rest)
      | 68 => some (.item .ndg, rest)
      | 119 => some (.item .wrd, rest)
      | 87 => some (.item .nwr, rest)
      | _ => some (.chr c, rest)
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
    | 92 :: c :: rest => match c with
      | 115 => some (.cls false [.wsp], g, rest)
      | 83 => some (.cls true [.wsp], g, rest)
      | 100 => some (.cls false [.dig], g, rest)
      | 68 => some (.cls true [.dig], g, rest)
      | 119 => some (.cls false [.wrd], g, rest)
      | 87 => some (.cls true [.wrd], g, rest)
      | 98 => some (.wordB, g, rest)
      | 66 => some (.nwordB, g, rest)
      | 110 => some (.byte 10, g, rest)
      | 114 => some (.byte 13, g, rest)
      | 116 => some (.byte 9, g, rest)
      | 102 => some (.byte 12, g, rest)
      | 118 => some (.byte 11, g, rest)
      | d => if 49 ≤ d && d ≤ 57
             then some (.back (d - 48), g, rest)
             else some (.byte d, g, rest)
    | 46 :: rest => some (.dot, g, rest)
    | 94 :: rest => some (.bol, g, rest)
    | 36 :: rest => some (.eol, g, rest)
    | c :: rest => some (.byte c, g, rest)

def flagsOfBytes (bs : List Nat) : Flags :=
  { ci := bs.contains 105,
    dotall := bs.contains 115,
    multiline := bs.contains 109,
    ungreedy := bs.contains 85,
    dollarEndOnly := bs.contains 68,
    utf8 := bs.contains 117 }

/-- Primary parser entry: a byte-literal delimited PHP pattern. -/
def parsePcreBytes (bs : List Nat) : Option PcreParsed :=
  match splitPattern bs with
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
    (todo : List Task) (pos : Nat) (caps : Caps) :
    runMatch fl whole subj todo pos caps 0 = [] := rfl

theorem setCap_getCap (i s e : Nat) (caps : Caps) :
    getCap i (setCap i s e caps) = some (s, e) := by
  simp [setCap, getCap]

theorem dedupResults_go_zero (xs : Results) : dedupResults.go xs 0 = [] := by
  cases xs <;> rfl

theorem dedupResults_go_step (x : MResult) (xs : Results) (fuel : Nat) :
    dedupResults.go (x :: xs) (fuel + 1) =
      x :: dedupResults.go (xs.filter fun y => y != x) fuel := rfl

theorem runMatch_eps_step (fl : Flags) (whole : RE) (subj : List Nat)
    (rest : List Task) (pos : Nat) (caps : Caps) (fuel : Nat) :
    runMatch fl whole subj (.node .eps :: rest) pos caps (fuel + 1) =
      runMatch fl whole subj rest pos caps fuel := rfl

theorem parseQuant_lazy_consumed (bs : List Nat) :
    (parseQuant (63 :: 63 :: bs)).2.2 = true := by
  simp [parseQuant, lazyMark]

end LeanFtml
