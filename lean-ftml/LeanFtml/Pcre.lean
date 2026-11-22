/-
  LeanFtml.Pcre — a PCRE-subset engine for the Embed render rule.

  The reference's `Text_Wiki_Render_Xhtml_Embed` matches its
  content against an allowlist of PCRE patterns (the 76 entries of
  `wikidot-root/conf/wikiparser/embed/default.php`, transcribed in
  `LeanFtml/EmbedPatterns.lean`) plus three patterns of its own.
  This module implements exactly the PCRE subset those 79 patterns
  use, verified by enumerating the constructs in the dumped
  pattern strings (see REPORT-R47.md):

  - literal bytes and `.` (with the `s` flag controlling whether
    `.` matches `\n`; no pattern here uses the `m` flag, and `^` /
    `$` keep their default non-multiline meaning: `^` is the
    start of the subject, `$` is the end of the subject or the
    position before a single trailing `\n`);
  - character classes with ranges, negation, and the class
    escapes `\s \S \d \D \w \W` (inside and outside classes);
  - escapes of punctuation (the escaped byte itself);
  - grouping `(...)` (capturing is irrelevant: only match
    existence and, for `preg_replace`, the match extent are
    observable), alternation `|`;
  - greedy quantifiers `*`, `+`, `?`, `{n}`, `{n,}`, `{n,m}`,
    each with an optional lazy marker `?` (laziness changes only
    which successful extent is preferred, never existence; the
    one `preg_replace` use in the Embed rule has a deterministic
    extent, so the engine records greedy order and ignores the
    lazy marker after parsing it);
  - the `i` flag (ASCII case-insensitive matching, applied by
    case-swapping the subject byte as well as folding literals).

  The matcher is a backtracking list-of-successes evaluator over
  byte positions: `mEnds` returns every end position a pattern
  can reach from a start position, in PCRE's greedy preference
  order (so the head is the extent `preg_match` / `preg_replace`
  would report), deduplicated. Repetition is evaluated by
  `repCollect`, which bounds iterations by the subject length
  (every productive iteration consumes at least one byte; an
  empty iteration terminates the loop, as in PCRE).
-/

namespace LeanFtml

/-! ## Byte predicates (PCRE character classes, byte semantics) -/

/-- PCRE `\s`: space, tab, LF, CR, FF, VT. -/
def pcreIsWsByte (b : Nat) : Bool :=
  b == 32 || b == 9 || b == 10 || b == 13 || b == 12 || b == 11

/-- PCRE `\d`. -/
def isDigByte (b : Nat) : Bool := 48 ≤ b && b ≤ 57

/-- PCRE `\w`: `[A-Za-z0-9_]`. -/
def isWrdByte (b : Nat) : Bool :=
  (65 ≤ b && b ≤ 90) || (97 ≤ b && b ≤ 122) || (48 ≤ b && b ≤ 57) || b == 95

/-- ASCII uppercase fold (for case-insensitive comparison). -/
def foldByte (b : Nat) : Nat := if 97 ≤ b && b ≤ 122 then b - 32 else b

/-- ASCII case swap (for case-insensitive class membership). -/
def swapCaseByte (b : Nat) : Nat :=
  if 97 ≤ b && b ≤ 122 then b - 32
  else if 65 ≤ b && b ≤ 90 then b + 32
  else b

/-- Literal-byte match under the `i` flag. -/
def byteMatchCI (ci : Bool) (pat subj : Nat) : Bool :=
  pat == subj || (ci && foldByte pat == foldByte subj)

/-! ## Pattern AST -/

/-- One item of a `[...]` character class. -/
inductive ClsItem where
  | rng : Nat → Nat → ClsItem
  | wsp : ClsItem
  | nsp : ClsItem
  | dig : ClsItem
  | ndg : ClsItem
  | wrd : ClsItem
  | nwr : ClsItem
deriving Inhabited, Repr, DecidableEq

/-- Whether byte `b` matches one class item. -/
def clsItemMatch : ClsItem → Nat → Bool
  | .rng lo hi, b => lo ≤ b && b ≤ hi
  | .wsp, b => pcreIsWsByte b
  | .nsp, b => !pcreIsWsByte b
  | .dig, b => isDigByte b
  | .ndg, b => !isDigByte b
  | .wrd, b => isWrdByte b
  | .nwr, b => !isWrdByte b

/-- Class membership; under `i`, the subject byte's case-swapped
    form is also tested (so `[a-z]` matches `A` and `[A-Z]`
    matches `a`). Negation applies after membership. -/
def clsMatch (neg : Bool) (items : List ClsItem) (ci : Bool) (b : Nat) : Bool :=
  let base := items.any fun it =>
    clsItemMatch it b || (ci && clsItemMatch it (swapCaseByte b))
  if neg then !base else base

/-- The regex AST. Groups carry no capture indices: the Embed
    rule observes only match existence and match extent. -/
inductive RE where
  | eps : RE
  | byte : Nat → RE
  | dot : RE
  | cls : Bool → List ClsItem → RE
  | seq : RE → RE → RE
  | alt : RE → RE → RE
  | rep : RE → Nat → Option Nat → RE
  | bol : RE
  | eol : RE
deriving Inhabited, Repr, DecidableEq

/-- A parsed pattern: AST plus the two flags this corpus uses. -/
structure PcreParsed where
  ast : RE
  ci : Bool
  dotall : Bool
deriving Inhabited, Repr, DecidableEq

/-! ## Matcher -/

/-- Deduplicate a position list, keeping first occurrences.
    The recursion removes every later copy of the head, which
    is not a structural subterm, so it runs on explicit fuel
    (the list length is a strict bound: every step consumes
    the head and drops at least it from the tail's copies). -/
def dedupN (xs : List Nat) : List Nat :=
  go xs (xs.length + 1)
where
  go : List Nat → Nat → List Nat
    | [], _ => []
    | _, 0 => []
    | x :: xs, fuel + 1 => x :: go (xs.filter (fun y => y != x)) fuel

/-- Evaluate a repetition: `step` maps a position to the end
    positions of one iteration. Results are in greedy order
    (longer repetitions first). An iteration that ends where it
    started terminates the repetition (PCRE's empty-loop break);
    it still counts toward the minimum. Iteration fuel bounds
    productive iterations, each of which consumes ≥ 1 byte. -/
def repCollect (step : Nat → List Nat) (mn : Nat) (mx : Option Nat)
    (count pos : Nat) : Nat → List Nat
  | 0 => if count ≥ mn then [pos] else []
  | fuel + 1 =>
      let canMore : Bool := match mx with
        | none => true
        | some m => count < m
      let nexts : List Nat := if canMore then step pos else []
      let cont : List Nat := nexts.flatMap fun e =>
        if e == pos then (if count + 1 ≥ mn then [pos] else [])
        else repCollect step mn mx (count + 1) e fuel
      let base : List Nat := if count ≥ mn then [pos] else []
      dedupN (cont ++ base)

/-- Fuel for one `mEnds` evaluation. The deepest call chain is
    bounded by the pattern's atom count (≤ ~700 for the longest
    allowlist entry) plus group nesting; this is far above it. -/
def mFuel : Nat := 16384

/-- All end positions `re` can reach from `pos` in `subj`, in
    PCRE greedy preference order, deduplicated. -/
def mEnds (ci da : Bool) (re : RE) (subj : List Nat) (pos : Nat) :
    Nat → List Nat
  | 0 => []
  | fuel + 1 =>
    match re with
    | .eps => [pos]
    | .byte pb =>
        match subj.drop pos with
        | b :: _ => if byteMatchCI ci pb b then [pos + 1] else []
        | [] => []
    | .dot =>
        match subj.drop pos with
        | b :: _ => if da || b != 10 then [pos + 1] else []
        | [] => []
    | .cls neg items =>
        match subj.drop pos with
        | b :: _ => if clsMatch neg items ci b then [pos + 1] else []
        | [] => []
    | .bol => if pos == 0 then [pos] else []
    | .eol =>
        let rest := subj.drop pos
        if rest == [] || rest == [10] then [pos] else []
    | .seq a b =>
        dedupN ((mEnds ci da a subj pos fuel).flatMap
          fun e => mEnds ci da b subj e fuel)
    | .alt a b =>
        dedupN (mEnds ci da a subj pos fuel ++ mEnds ci da b subj pos fuel)
    | .rep r mn mx =>
        repCollect (fun p => mEnds ci da r subj p fuel) mn mx 0 pos
          (subj.length + 2)

/-- `preg_match`: does the pattern match anywhere in `subj`?
    (Start positions are tried left to right; `^` anchors at
    position 0 only, so anchored patterns fail fast elsewhere.) -/
def pcreMatch (p : PcreParsed) (subj : List Nat) : Bool :=
  (List.range (subj.length + 1)).any fun s =>
    !(mEnds p.ci p.dotall p.ast subj s mFuel).isEmpty

/-- The end position of the preferred (greedy-first) match
    starting exactly at `pos`, if any. -/
def pcrePrefixEnd (p : PcreParsed) (subj : List Nat) (pos : Nat) :
    Option Nat :=
  (mEnds p.ci p.dotall p.ast subj pos mFuel).head?

/-- `preg_replace` with an empty replacement: remove every
    non-overlapping match, scanning left to right (matches are
    located in the original subject, as in PHP). -/
def pcreReplaceAll (p : PcreParsed) (subj : List Nat) : List Nat :=
  go 0 (subj.length + 1)
where
  go (pos : Nat) : Nat → List Nat
    | 0 => subj.drop pos
    | fuel + 1 =>
        if pos ≥ subj.length then []
        else match pcrePrefixEnd p subj pos with
          | some e =>
              if e > pos then go e fuel
              else
                match subj.drop pos with
                | b :: _ => b :: go (pos + 1) fuel
                | [] => []
          | none =>
              match subj.drop pos with
              | b :: _ => b :: go (pos + 1) fuel
              | [] => []

/-! ## Parser -/

/-- Find the closing delimiter of a delimited pattern: the first
    unescaped delimiter byte outside a character class, scanning
    from index 1. Returns the body and the flag bytes. -/
def splitPattern (bs : List Nat) : Option (List Nat × List Nat) :=
  match bs with
  | [] => none
  | _ :: rest => go rest [] false false
where
  go : List Nat → List Nat → Bool → Bool → Option (List Nat × List Nat)
    | [], _, _, _ => none
    | c :: rest, acc, esc, inCls =>
        if esc then go rest (c :: acc) false inCls
        else if c == 92 then go rest (c :: acc) true inCls
        else if c == 91 && !inCls then go rest (c :: acc) false true
        else if c == 93 && inCls then go rest (c :: acc) false false
        else if c == (match bs with | d :: _ => d | [] => 0) && !inCls then
          some (acc.reverse, rest)
        else go rest (c :: acc) false inCls

/-- One class character: either a class escape item (`\s` etc.)
    or a single byte (after escape resolution). -/
inductive ClassPiece where
  | item : ClsItem → ClassPiece
  | chr : Nat → ClassPiece
deriving Inhabited

/-- Parse one class character at the head of `bs`. -/
def classChar : List Nat → Option (ClassPiece × List Nat)
  | 92 :: c :: rest =>
      match c with
      | 115 => some (.item .wsp, rest)   -- \s
      | 83 => some (.item .nsp, rest)    -- \S
      | 100 => some (.item .dig, rest)   -- \d
      | 68 => some (.item .ndg, rest)    -- \D
      | 119 => some (.item .wrd, rest)   -- \w
      | 87 => some (.item .nwr, rest)    -- \W
      | _ => some (.chr c, rest)
  | c :: rest => some (.chr c, rest)
  | [] => none

/-- Parse class items up to the closing `]`. `first` tracks the
    first item position, where `]` is a literal (PCRE rule). -/
def parseClassItems : Nat → List Nat → Bool →
    Option (List ClsItem × List Nat)
  | 0, _, _ => none
  | fuel + 1, bs, first =>
      match bs with
      | [] => none
      | 93 :: rest =>
          if first then
            -- literal `]` as the first item
            match parseClassItems fuel rest false with
            | some (items, r) => some (.rng 93 93 :: items, r)
            | none => none
          else some ([], rest)
      | _ =>
          match classChar bs with
          | none => none
          | some (piece, rest1) =>
              match piece with
              | .item it =>
                  match parseClassItems fuel rest1 false with
                  | some (items, r) => some (it :: items, r)
                  | none => none
              | .chr lo =>
                  match rest1 with
                  | 45 :: rest2 =>
                      match rest2 with
                      | 93 :: _ =>
                          -- trailing `-` is a literal
                          match parseClassItems fuel rest1 false with
                          | some (items, r) => some (.rng lo lo :: items, r)
                          | none => none
                      | [] => none
                      | _ =>
                          match classChar rest2 with
                          | some (.chr hi, rest3) =>
                              match parseClassItems fuel rest3 false with
                              | some (items, r) =>
                                  some (.rng lo hi :: items, r)
                              | none => none
                          | _ => none
                  | _ =>
                      match parseClassItems fuel rest1 false with
                      | some (items, r) => some (.rng lo lo :: items, r)
                      | none => none

/-- Parse a `[...]` class starting at the `[`. -/
def parseClass (fuel : Nat) (bs : List Nat) :
    Option (RE × List Nat) :=
  match bs with
  | 91 :: rest =>
      let (neg, rest1) := match rest with
        | 94 :: r => (true, r)
        | _ => (false, rest)
      match parseClassItems fuel rest1 true with
      | some (items, r) => some (.cls neg items, r)
      | none => none
  | _ => none

/-- The maximal decimal-digit prefix of `bs`, as a value and the
    remaining bytes; `none` when there is no digit at the head. -/
def digitPrefix (bs : List Nat) : Option (Nat × List Nat) :=
  let ds := bs.takeWhile (fun c => 48 ≤ c && c ≤ 57)
  if ds.isEmpty then none
  else some (ds.foldl (fun acc c => acc * 10 + (c - 48)) 0,
    bs.drop ds.length)

/-- Parse an optional quantifier at the head of `bs`: returns the
    (min, max) bounds and the rest, or `none` bounds when the head
    is not a quantifier (a `{` that does not form a valid
    `{n}`/`{n,}`/`{n,m}` spec is not a quantifier: PCRE treats it
    as a literal). A trailing lazy `?` is consumed and ignored. -/
def parseQuant (bs : List Nat) :
    Option (Nat × Option Nat) × List Nat :=
  let lazy : List Nat → List Nat
    | 63 :: rest => rest
    | rest => rest
  match bs with
  | 42 :: rest => (some (0, none), lazy rest)        -- *
  | 43 :: rest => (some (1, none), lazy rest)        -- +
  | 63 :: rest => (some (0, some 1), lazy rest)      -- ?
  | 123 :: rest =>                                    -- {
      match digitPrefix rest with
      | some (n, r1) =>
          match r1 with
          | 125 :: r2 => (some (n, some n), lazy r2)
          | 44 :: r2 =>
              match r2 with
              | 125 :: r3 => (some (n, none), lazy r3)
              | _ =>
                  match digitPrefix r2 with
                  | some (m, r3) =>
                      match r3 with
                      | 125 :: r4 => (some (n, some m), lazy r4)
                      | _ => (none, bs)
                  | none => (none, bs)
          | _ => (none, bs)
      | none => (none, bs)
  | _ => (none, bs)

/-- What `parseGo` should parse next (one function, fuel-driven,
    so the mutual recursion between alternation, sequence, and
    atom needs no separate definitions). -/
inductive ParseTask where
  | alt
  | seq
  | atom
deriving Inhabited

/-- The pattern-body parser. Every recursive call consumes
    fuel; the initial fuel is the body length + 1, and every
    atom consumes at least one byte, so this is generous. -/
def parseGo : ParseTask → Nat → List Nat → Option (RE × List Nat)
  | _, 0, _ => none
  | .alt, fuel + 1, bs =>
      match parseGo .seq fuel bs with
      | some (s1, rest1) =>
          match rest1 with
          | 124 :: rest2 =>
              match parseGo .alt fuel rest2 with
              | some (s2, rest3) => some (.alt s1 s2, rest3)
              | none => none
          | _ => some (s1, rest1)
      | none => none
  | .seq, fuel + 1, bs =>
      match bs with
      | [] => some (.eps, [])
      | c :: _ =>
          if c == 124 || c == 41 then some (.eps, bs)
          else
            match parseGo .atom fuel bs with
            | some (a, rest1) =>
                let (q, rest2) := parseQuant rest1
                let a' := match q with
                  | some (mn, mx) => RE.rep a mn mx
                  | none => a
                match parseGo .seq fuel rest2 with
                | some (s, rest3) =>
                    let combined : RE := match s with
                      | .eps => a'
                      | _ => .seq a' s
                    some (combined, rest3)
                | none => none
            | none => none
  | .atom, fuel + 1, bs =>
      match bs with
      | [] => none
      | 40 :: rest =>
          match parseGo .alt fuel rest with
          | some (inner, rest2) =>
              match rest2 with
              | 41 :: rest3 => some (inner, rest3)
              | _ => none
          | none => none
      | 91 :: _ => parseClass fuel bs
      | 92 :: c :: rest =>
          match c with
          | 115 => some (.cls false [.wsp], rest)
          | 83 => some (.cls true [.wsp], rest)
          | 100 => some (.cls false [.dig], rest)
          | 68 => some (.cls true [.dig], rest)
          | 119 => some (.cls false [.wrd], rest)
          | 87 => some (.cls true [.wrd], rest)
          | _ => some (.byte c, rest)
      | 46 :: rest => some (.dot, rest)
      | 94 :: rest => some (.bol, rest)
      | 36 :: rest => some (.eol, rest)
      | c :: rest => some (.byte c, rest)

/-- Parse a full delimited PCRE pattern string (delimiter, body,
    delimiter, flags) as the reference's configuration carries
    it. Only the `i` and `s` flags occur in the corpus. -/
def parsePcre (s : String) : Option PcreParsed :=
  let bs := s.toList.map Char.toNat
  match splitPattern bs with
  | some (body, flags) =>
      match parseGo .alt (body.length + 1) body with
      | some (ast, []) =>
          some { ast := ast,
                 ci := flags.contains 105,
                 dotall := flags.contains 115 }
      | _ => none
  | none => none

end LeanFtml
