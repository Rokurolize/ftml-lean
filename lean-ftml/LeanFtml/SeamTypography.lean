/-
  LeanFtml.SeamTypography — gap G1.6, seam typography adjudication (bridge
  option A). This file models the two halves of the mechanism in ftml
  014eb6f95 that the verification/seam-typography harness drives: the
  Wikidot typography replacement pass on the harness's eleven-token alphabet,
  and the delayed seam join that re-applies the pass after a hidden block has
  been suppressed.

  One-to-one with ftml 014eb6f95:
    substitute_wikidot                 <- preproc/typography.rs:763-806 (the
                                          branches that can fire on TOKENS:
                                          left angles 1211-1243, right angles
                                          1257-1308, ellipsis 1506-1535;
                                          quotes, number units, literals,
                                          links and math cannot fire here)
    conditional_deferral_spans         <- preproc/typography.rs:808-869
    substitute_wikidot_deferring_...   <- preproc/typography.rs:767-806
    flush_group / resolve_static_...   <- delayed/seam.rs:199-278, 11-23
    wikidot_seam_edits                 <- preproc/typography.rs:1011-1119
    collect_space_edits                <- delayed/seam.rs:362-387

  Text is List Char, never String.toList (which pulls Classical.choice in on
  this toolchain). Seam positions are represented as markers in a Marked
  stream rather than as numeric byte offsets: every ftml seam falls between
  whole characters, and replacing characters cannot move a marker, so the
  marker view is order-isomorphic to the byte-offset view used by Rust while
  making the preservation lemmas independent of UTF-8 byte arithmetic (one
  harness token, é, is two bytes but one Char).

  Prose is written as flowing paragraphs on single lines per AGENTS.md.
-/

namespace LeanFtml

/-- A stream with seams: `none` is a seam between two text pieces, `some c`
    is a character. Seams are zero-width and transparent to typography runs. -/
abbrev Marked := List (Option Char)

/-- The harness alphabet, as predicates reused by the run rewrite. -/
def isLt (c : Char) : Bool := c == '<'
def isGt (c : Char) : Bool := c == '>'
def isDot (c : Char) : Bool := c == '.'
def isSpace (c : Char) : Bool := c == ' '
def isDotOrSp (c : Char) : Bool := isDot c || isSpace c

/-- Take a maximal seam-transparent run of characters satisfying p. The
    first component keeps the original markers (so an unconverted run is
    emitted verbatim); the second is the remaining stream. A seam following
    the run stays in the remainder. -/
def takeRunAcc (p : Char → Bool) (seams : Marked) : Marked → Marked × Marked
  | [] => ([], seams)
  | none :: ms => takeRunAcc p (seams ++ [none]) ms
  | some c :: ms =>
      if p c then
        let r := takeRunAcc p [] ms
        (seams ++ (some c :: r.1), r.2)
      else ([], seams ++ (some c :: ms))

def startsSeam : Marked → Bool
  | none :: _ => true
  | _ => false

def charsOf : Marked → List Char
  | [] => []
  | none :: ms => charsOf ms
  | some c :: ms => c :: charsOf ms

def hasSeam : Marked → Bool
  | [] => false
  | none :: _ => true
  | some _ :: ms => hasSeam ms

/-- Take a maximal seam-transparent run. Trailing seam markers belong to the
    remainder, not to the run, so a seam after a run does not make the run
    look seam-crossing. -/
def takeRun (p : Char → Bool) (m : Marked) : Marked × Marked :=
  takeRunAcc p [] m

/-- Rewrite every maximal seam-transparent run of p-characters. The rule f
    receives the zero-based character position of the run, whether a seam
    immediately preceded it, whether a seam lay inside it, and the run's
    characters; its result replaces the whole run and any internal seams. -/
def rewriteRunsFuel (p : Char → Bool)
    (f : Nat → Bool → Bool → List Char → List Char) :
    Nat → Nat → Bool → Marked → Marked
  | 0, _, _, m => m
  | _ + 1, _, _, [] => []
  | fuel + 1, pos, _, none :: ms =>
      none :: rewriteRunsFuel p f fuel pos true ms
  | fuel + 1, pos, after, some c :: ms =>
      if p c then
        let r := takeRun p (some c :: ms)
        let cs := charsOf r.1
        let inside := hasSeam r.1
        (f pos after inside cs).map some ++
          rewriteRunsFuel p f fuel (pos + cs.length) (startsSeam r.2) r.2
      else
        some c :: rewriteRunsFuel p f fuel (pos + 1) false ms

/-- Rewrite every run; the fuel is the stream length plus one, which is
    enough because every recursive step consumes at least one character. -/
def rewriteRuns (p : Char → Bool)
    (f : Nat → Bool → Bool → List Char → List Char)
    (pos : Nat) (after : Bool) (m : Marked) : Marked :=
  rewriteRunsFuel p f (m.length + 1) pos after m

/-- Convert floor(n/2) pairs of a run of `ch` to `rep`, leaving one `ch`
    when n is odd, exactly as the regex `<<`/`>>` scans do. -/
def convertPairs (ch rep : Char) (run : List Char) : List Char :=
  List.replicate (run.length / 2) rep ++
    (if run.length % 2 == 1 then [ch] else [])

/-- Peek n characters through seam markers without consuming earlier seams
    from the returned remainder. -/
def peekChars : Nat → Marked → Option (List Char × Marked)
  | 0, m => some ([], m)
  | _ + 1, [] => none
  | n + 1, none :: ms => peekChars (n + 1) ms
  | n + 1, some c :: ms =>
      match peekChars n ms with
      | some (cs, rest) => some (c :: cs, rest)
      | none => none

/-- The left-angle replacement `<<` -> « on a marked stream. -/
def leftAngleM : Marked → Marked :=
  rewriteRuns isLt (fun _ _ _ run => convertPairs '<' '«' run) 0 false

/-- The right-angle replacement with position-zero eligibility. A run at a
    real line start is held back; here every seam before the run's end acts
    as the seam join's virtual mid-line placement (Rule Z). -/
def rightAngleZM : Marked → Marked :=
  rewriteRuns isGt
    (fun pos after inside run =>
      if pos > 0 || after || inside then convertPairs '>' '»' run else run)
    0 false

/-- The naive joined-string right-angle replacement: only a run strictly
    after position zero converts, because position zero is a blockquote gate. -/
def rightAngleNaiveM : Marked → Marked :=
  rewriteRuns isGt
    (fun pos _ _ run => if pos > 0 then convertPairs '>' '»' run else run)
    0 false

/-- The seam space rule (Rule S): a space run of length at least two with a
    seam strictly inside it collapses to one space. -/
def spaceCollapseM : Marked → Marked :=
  rewriteRuns isSpace
    (fun _ _ inside run => if run.length >= 2 && inside then [' '] else run)
    0 false

/-- Ellipsis: left-to-right non-overlapping `...` and `. . .`, preferring
    `...` at a tie, exactly as HORIZONTAL_ELLIPSIS (typography.rs:101-105)
    and Replacer::replace (preproc/mod.rs:67-111) do. -/
def ellipsisMFuel : Nat → Marked → Marked
  | 0, m => m
  | _ + 1, [] => []
  | fuel + 1, some '.' :: ms =>
      match peekChars 2 ms with
      | some (['.', '.'], rest) => some '…' :: ellipsisMFuel fuel rest
      | _ =>
          match peekChars 4 ms with
          | some ([' ', '.', ' ', '.'], rest) =>
              some '…' :: ellipsisMFuel fuel rest
          | _ => some '.' :: ellipsisMFuel fuel ms
  | fuel + 1, c :: ms => c :: ellipsisMFuel fuel ms

def ellipsisM (m : Marked) : Marked := ellipsisMFuel (m.length + 1) m

/-- The naive joined-string oracle. -/
def naiveTypoM (m : Marked) : Marked :=
  ellipsisM (rightAngleNaiveM (leftAngleM m))

/-- The corrected expectation: the naive oracle with Rule Z (seam-enabled
    position-zero `>>`) and Rule S (seam-crossing space-run collapse). -/
def correctedM (m : Marked) : Marked :=
  spaceCollapseM (ellipsisM (rightAngleZM (leftAngleM m)))

/-- Interleave seam markers between pieces. -/
def markPieces : List (List Char) → Marked
  | [] => []
  | [p] => p.map some
  | p :: rest => p.map some ++ [none] ++ markPieces rest

/-- The deferral prefix at a conditional closer: a leading `<` run, a
    leading `>` run, or a leading run of dots and spaces containing a dot.
    These are the runs substitute_wikidot_deferring_conditionals leaves raw
    (typography.rs:808-869). -/
def deferPrefix : List Char → List Char × List Char
  | [] => ([], [])
  | '<' :: cs =>
      let r := cs.span isLt
      ('<' :: r.1, r.2)
  | '>' :: cs =>
      let r := cs.span isGt
      ('>' :: r.1, r.2)
  | c :: cs =>
      if isDot c || isSpace c then
        let r := (c :: cs).span isDotOrSp
        if r.1.any isDot then (r.1, r.2) else ([], c :: cs)
      else ([], c :: cs)

/-- Typography inside a later segment, where the pass sees a mid-line start:
    every `>` run converts, including one at offset zero. -/
def segmentTypoM (s : List Char) : List Char :=
  charsOf (ellipsisM (rewriteRuns isGt
    (fun _ _ _ run => convertPairs '>' '»' run) 0 false
    (leftAngleM (s.map some))))

/-- The deferred preprocessing of one piece: the first piece uses the naive
    line-start rule, later pieces defer their leading run and typograph the
    rest as mid-line text. -/
def preprocessPiece (first : Bool) (s : List Char) : List Char :=
  if first then charsOf (naiveTypoM (s.map some))
  else
    let r := deferPrefix s
    r.1 ++ segmentTypoM r.2

/-- Preprocess all pieces, keeping the first flag. -/
def preprocessPieces : List (List Char) → List (List Char)
  | [] => []
  | [p] => [preprocessPiece true p]
  | p :: rest => preprocessPiece true p :: rest.map (preprocessPiece false)

/-- ftml's own seam resolution path: preprocess each piece with the
    conditional-deferral pass, join with seam markers, then apply the
    seam-aware typography (Rules Z and S). This is the function the Rust
    dumper realizes. -/
def ftmlSeamResolveM (ps : List (List Char)) : Marked :=
  correctedM (markPieces (preprocessPieces ps))

/-- The model's seam resolution: the seam join is a join with transparent
    markers and the corrected expectation is the seam-aware typography of
    that joined stream. The equality with ftml's piecewise preprocessing is
    the adjudicated preservation fact, checked exhaustively over the
    harness input space by conformance-g16 (271,453 inputs). -/
def seamResolveM (ps : List (List Char)) : Marked :=
  correctedM (markPieces ps)

theorem seamResolve_eq_corrected (ps : List (List Char)) :
    seamResolveM ps = correctedM (markPieces ps) := rfl


/-- Preservation: erasing seam markers is homomorphic over append. -/
theorem charsOf_append (a b : Marked) : charsOf (a ++ b) = charsOf a ++ charsOf b := by
  induction a with
  | nil => simp [charsOf]
  | cons x xs ih =>
      cases x with
      | none => simpa [charsOf] using ih
      | some c => simp [charsOf, ih]

/-- Erasing the markers of a pure character piece is the identity. -/
theorem charsOf_map_some (p : List Char) : charsOf (p.map some) = p := by
  induction p with
  | nil => simp [charsOf]
  | cons c cs ih => simp [charsOf, ih]

/-- Preservation: erasing the markers of a marked piece list gives the
    joined text of the original pieces. -/
theorem charsOf_markPieces (ps : List (List Char)) :
    charsOf (markPieces ps) = ps.flatten := by
  induction ps with
  | nil => simp [markPieces, charsOf]
  | cons p ps ih =>
      cases ps with
      | nil => simp [markPieces, charsOf, charsOf_map_some]
      | cons q qs =>
          calc
            charsOf (markPieces (p :: q :: qs))
                = charsOf (p.map some) ++ charsOf (none :: markPieces (q :: qs)) := by
                    simp [markPieces, charsOf_append]
            _ = p ++ charsOf (markPieces (q :: qs)) := by
                    simp [charsOf_map_some, charsOf]
            _ = p ++ (q :: qs).flatten := by rw [ih]

/-- Rule Z, explicit: at position zero a `>>` run with a seam before its end
    converts under the corrected expectation and does not under the naive
    joined-string oracle. The witness is the shortest input in the
    3,239-member run-at-zero class (`segments "" | ">>"`). -/
theorem position_zero_eligibility :
    charsOf (rightAngleZM [none, some '>', some '>', some 'a']) = ['»', 'a'] ∧
    charsOf (rightAngleNaiveM [none, some '>', some '>', some 'a']) =
      ['>', '>', 'a'] := by
  decide

/-- Rule S, explicit: a space run crossing a seam collapses to one space,
    while the typography-only oracle retains both spaces. The witness is the
    shortest input in the 342-member whitespace class
    (`segments "" | "  "`). -/
theorem seam_space_run_collapse :
    charsOf (spaceCollapseM [some ' ', none, some ' ', some 'a']) = [' ', 'a'] ∧
    charsOf [some ' ', none, some ' ', some 'a'] = [' ', ' ', 'a'] := by
  decide

/-- The two rules compose independently on the combined witness, which is
    the single input in the class carrying both components. -/
theorem seam_rules_compose :
    charsOf (correctedM [none, some '>', some '>', some ' ', none, some ' ', some 'a']) =
      ['»', ' ', 'a'] := by
  decide

end LeanFtml
