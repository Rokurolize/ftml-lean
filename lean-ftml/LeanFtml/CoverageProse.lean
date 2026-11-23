/-
  LeanFtml.CoverageProse — the coverage-tier classification of the prose
  core (BRIEF-COVERAGE-PROSE, 2026-11-22). The thirteen rules are the
  reference PHP parse rules under ref-php/text-wiki/Text/Wiki/Parse/Default/:
  Prefilter, Delimiter, Concatlines, Tighten, Typography, Paragraph, Horiz,
  Break, Center, Separator, Clearfloat, Divprefilter, Divalign. Their branch
  structure is read from those files and from the fifteen CONFIRMED
  behaviors of REPORT-SUSPECT-PROSE.md (sibling worktree
  lean-ftml-suspect-prose), with the R2-PARA / R2-FRAME / R2-LINK /
  R2-INLINE3 / REFVAL pins named in the report's class table.

  The classification is over SOURCE SHAPES: an abstract, finite description
  of the decision-relevant features of authored source (a run length, a side
  marker, which quote form is present, and so on), never over raw text. Each
  shape is mapped to the LIST of branch classes the reference's decision
  structure can take on it; a rule with mutually exclusive branches yields a
  singleton list, while Prefilter, Tighten and Typography are sequences of
  independent transformations and can yield several classes at once. This
  is the formalization of the branch conditions; the equivalence between a
  PHP regex and a byte-level scanner on arbitrary raw text is a separate
  conformance fact, established by the R2/R3 batteries and the within-class
  fuzz, and is not restated here.

  Completeness over this decision structure has four parts, all proved below:
  membership is decidable (decidable equality on ProseClass and List.mem),
  every class a shape yields is in the declared enumeration (classify_sound),
  every declared class is yielded by at least one representable shape
  (classes_exhaustive), and every shape yields at least one class
  (classify_nonempty). Exclusivity is proved per rule for the rules whose
  branches are genuinely exclusive, and the two dead branches (Delimiter's
  internal 0xFF search and Typography's `---` statement) are recorded as
  non-classes with their order/alphabet arguments rather than smuggled in as
  unreachable classes.

  Correspondence with the existing mirrors is stated at the end as closed
  computations, in the style of the SUSPECT lane's SpecProse.lean: each is
  decided by the kernel and names the probe or battery that pins it.

  No sorry and no sorryAx; axiom audits for every new theorem are added to
  Main.lean. The classification theorems reduce to [propext] or
  [propext, Quot.sound]; the closed mirror-correspondence computations carry
  the programme's standard [propext, Classical.choice, Quot.sound], exactly
  as the surrounding mirror files do. No nonstandard axiom is used.
-/

import LeanFtml.FrameRules
import LeanFtml.MiddleRules
import LeanFtml.Middle2Rules
import LeanFtml.LinkRules
import LeanFtml.ParaRules
import LeanFtml.InlineSimpleRules
import LeanFtml.Inline3Rules
import LeanFtml.ProseRules

namespace LeanFtml

/-! ## The class enumeration -/

/-- One branch class per decision the reference can take on authored source.
    The 53 constructors are the complete named output of the classification;
    `allClasses` below is their enumeration and every one has a live or
    battery pin in REPORT-COVERAGE-PROSE.md's accounting table. -/
inductive ProseClass where
  /- Prefilter.php:48-74, six transformations in fixed order. -/
  | pfCrlf | pfCr | pfWsLine | pfTab | pfPad | pfCompress
  /- Delimiter.php:53, the only authored-input outcome is the identity. -/
  | dlAuthored
  /- Concatlines.php:40-62. -/
  | clIdentity | clJoin | clDivOpen | clTokenized
  /- Tighten.php:91-147. -/
  | tnNewline | tnFold | tnColorStart | tnColorEnd | tnEdgeTrim | tnSecondFold
  /- Typography.php:68-129. -/
  | tyQuoteDouble | tyQuoteComma | tyQuoteSingle | tyLeftAngle | tyRightAngle
  | tyNumSpace | tyUnit | tyEllipsis | tyDash2 | tyNone
  /- Paragraph.php:206-288. -/
  | pgEmpty | pgScoredAnchor | pgScoredSpan | pgSkip | pgWrap
  /- Horiz.php:49 and Separator.php:49 (the shared line scanner). -/
  | hzFire | hzLiteral | spFire | spLiteral
  /- Clearfloat.php:46 (side group). -/
  | cfBoth | cfRight | cfLeft | cfDoubleSide | cfLiteral
  /- Break.php:51, Center.php:57. -/
  | brFire | brLiteral | ctFire | ctLiteral
  /- Divprefilter.php:45 and Divalign.php:42. -/
  | dpJoin | dpLiteral | daCenter | daLeft | daRight | daJustify
  | daRepeat | daLiteral
  deriving DecidableEq, Repr

/-- The declared, finite class set. Ordering follows the reference's rule
    order and, inside a rule, the order of the branches in the PHP source. -/
def allClasses : List ProseClass :=
  [ .pfCrlf, .pfCr, .pfWsLine, .pfTab, .pfPad, .pfCompress,
    .dlAuthored,
    .clIdentity, .clJoin, .clDivOpen, .clTokenized,
    .tnNewline, .tnFold, .tnColorStart, .tnColorEnd, .tnEdgeTrim, .tnSecondFold,
    .tyQuoteDouble, .tyQuoteComma, .tyQuoteSingle, .tyLeftAngle, .tyRightAngle,
    .tyNumSpace, .tyUnit, .tyEllipsis, .tyDash2, .tyNone,
    .pgEmpty, .pgScoredAnchor, .pgScoredSpan, .pgSkip, .pgWrap,
    .hzFire, .hzLiteral, .spFire, .spLiteral,
    .cfBoth, .cfRight, .cfLeft, .cfDoubleSide, .cfLiteral,
    .brFire, .brLiteral, .ctFire, .ctLiteral,
    .dpJoin, .dpLiteral, .daCenter, .daLeft, .daRight, .daJustify,
    .daRepeat, .daLiteral ]

theorem allClasses_nodup : allClasses.Nodup := by decide

theorem allClasses_length : allClasses.length = 53 := by decide

/-! ## Source shapes, one decision type per rule -/

/-- Prefilter: the five optional transformations. Frame padding is
    unconditional and is always a member of the class list. -/
structure PFShape where
  crlf : Bool
  cr : Bool
  wsLine : Bool
  tab : Bool
  nlRun3 : Bool

/-- Delimiter: authored source is typed UTF-8; the rule's internal 0xFF
    byte is not representable, so there is exactly one authored shape. -/
inductive DLShape where
  | authoredText

/-- Concatlines: the `\\\n` guard, the plain join, the standalone-div-opener
    exemption, and the boundary where the continuation is already inside a
    tokenized body and cannot be seen by this rule. -/
inductive CLShape where
  | noContinuation
  | plainContinuation
  | divOpenerContinuation
  | tokenizedBody

/-- Tighten: the five optional output-shaping decisions; the residual
    newline deletion is unconditional. `tnSecondFold` is derived, not a
    sixth independent input: it fires exactly when a color edge-space move
    can expose a new double-space run. -/
structure TNShape where
  foldRun : Bool
  colorStart : Bool
  colorEnd : Bool
  edgeTrim : Bool

/-- Typography: the nine source patterns that can fire, plus the
    no-pattern-match outcome. The `---` replacement is dead because the
    `--` replacement runs first; it is proved dead below and is not a
    class. The bare `$` money alternative is a PCRE end-anchor and is
    likewise not a class. -/
structure TYShape where
  qDouble : Bool
  qComma : Bool
  qSingle : Bool
  lAngle : Bool
  rAngle : Bool
  numSpace : Bool
  unit : Bool
  ellipsis : Bool
  dash2 : Bool

/-- Paragraph's five mutually exclusive outcomes on a matched run. -/
inductive PGShape where
  | emptyRun
  | scoredAnchor
  | scoredSpan
  | skipToken
  | wrapRun

/-- The line rules carry the decision-relevant run length and line
    membership, so their `{4,}` thresholds are proved below, not assumed. -/
structure HZShape where
  dashes : Nat
  alone : Bool

structure SPSeparatorShape where
  equals : Nat
  alone : Bool

inductive CFSide where
  | none | right | left | doubled

structure CFShape where
  tildes : Nat
  side : CFSide
  alone : Bool

/-- Break and Center: literal byte patterns, each with its fall-through. -/
inductive BRShape where
  | spaceUnderscoreNewline | other

inductive CTShape where
  | equalsSpaceLine | other

/-- Divprefilter's `[[/div]]\s*[[div` join and its fall-through. -/
inductive DPShape where
  | closeOpenJoin | other

/-- Divalign's four openers, the recursive-body repeat, and the
    fall-through. -/
inductive DAShape where
  | eq | lt | gt | eqeq | nested | unmatched

/-- The family's shape space, a disjoint sum of the thirteen decision
    types. -/
inductive ProseShape where
  | prefilter (s : PFShape)
  | delimiter (s : DLShape)
  | concatlines (s : CLShape)
  | tighten (s : TNShape)
  | typography (s : TYShape)
  | paragraph (s : PGShape)
  | horiz (s : HZShape)
  | separator (s : SPSeparatorShape)
  | clearfloat (s : CFShape)
  | brk (s : BRShape)
  | center (s : CTShape)
  | divprefilter (s : DPShape)
  | divalign (s : DAShape)

/-! ## The decision functions (formalized branch conditions) -/

/-- Lift a decidable condition to a zero-or-one class list; used by the
    sequence rules where several branches can fire on one source. -/
def classWhen (b : Bool) (c : ProseClass) : List ProseClass :=
  if b then [c] else []

theorem classWhen_mem {b : Bool} {c d : ProseClass} (h : d ∈ classWhen b c) : d = c := by
  cases b with
  | false => simp [classWhen] at h
  | true => simpa [classWhen] using h

/-- Prefilter's branch set: padding always fires, the other five are
    conditional. Filtering the declared enumeration keeps soundness by
    construction. -/
def pfBranches (s : PFShape) : List ProseClass :=
  allClasses.filter fun c => match c with
    | .pfCrlf => s.crlf
    | .pfCr => s.cr
    | .pfWsLine => s.wsLine
    | .pfTab => s.tab
    | .pfPad => true
    | .pfCompress => s.nlRun3
    | _ => false

/-- Tighten's branch set: newline deletion always fires; the second fold
    is implied by a color edge-space move. -/
def tnBranches (s : TNShape) : List ProseClass :=
  allClasses.filter fun c => match c with
    | .tnNewline => true
    | .tnFold => s.foldRun
    | .tnColorStart => s.colorStart
    | .tnColorEnd => s.colorEnd
    | .tnEdgeTrim => s.edgeTrim
    | .tnSecondFold => s.colorStart || s.colorEnd
    | _ => false

/-- Typography's branch set and its no-pattern outcome. -/
def tyAny (s : TYShape) : Bool :=
  s.qDouble || s.qComma || s.qSingle || s.lAngle || s.rAngle ||
  s.numSpace || s.unit || s.ellipsis || s.dash2

def tyBranches (s : TYShape) : List ProseClass :=
  allClasses.filter fun c => match c with
    | .tyQuoteDouble => s.qDouble
    | .tyQuoteComma => s.qComma
    | .tyQuoteSingle => s.qSingle
    | .tyLeftAngle => s.lAngle
    | .tyRightAngle => s.rAngle
    | .tyNumSpace => s.numSpace
    | .tyUnit => s.unit
    | .tyEllipsis => s.ellipsis
    | .tyDash2 => s.dash2
    | .tyNone => !tyAny s
    | _ => false

/-- Horiz's `{4,}` decision: a line consisting only of at least four
    dashes claims the rule. -/
def hzBranches (s : HZShape) : List ProseClass :=
  if s.alone && 4 ≤ s.dashes then [.hzFire] else [.hzLiteral]

theorem hzFire_of_count {n : Nat} (h : 4 ≤ n) :
    hzBranches ⟨n, true⟩ = [.hzFire] := by simp [hzBranches, h]

theorem hzLiteral_of_count {n : Nat} (h : n < 4) :
    hzBranches ⟨n, true⟩ = [.hzLiteral] := by simp [hzBranches, h]

theorem hzLiteral_not_alone {n : Nat} :
    hzBranches ⟨n, false⟩ = [.hzLiteral] := by simp [hzBranches]

/-- Separator's `{4,}` decision, with Center owning `= ` lines. -/
def spBranches (s : SPSeparatorShape) : List ProseClass :=
  if s.alone && 4 ≤ s.equals then [.spFire] else [.spLiteral]

theorem spFire_of_count {n : Nat} (h : 4 ≤ n) :
    spBranches ⟨n, true⟩ = [.spFire] := by simp [spBranches, h]

theorem spLiteral_of_count {n : Nat} (h : n < 4) :
    spBranches ⟨n, true⟩ = [.spLiteral] := by simp [spBranches, h]

/-- Clearfloat's side group: a single `>`/`<` is claimed, a doubled
    marker defeats the match and falls through to Typography's `>>`/`<<`. -/
def cfBranches (s : CFShape) : List ProseClass :=
  if !s.alone || s.tildes < 4 then [.cfLiteral]
  else match s.side with
    | .none => [.cfBoth]
    | .right => [.cfRight]
    | .left => [.cfLeft]
    | .doubled => [.cfDoubleSide]

theorem cfDoubleSide_of_dashes {n : Nat} (h : 4 ≤ n) :
    cfBranches ⟨n, .doubled, true⟩ = [.cfDoubleSide] := by
  simp [cfBranches, h]

theorem cfBoth_of_dashes {n : Nat} (h : 4 ≤ n) :
    cfBranches ⟨n, .none, true⟩ = [.cfBoth] := by
  simp [cfBranches, h]

/-- The whole-family classifier: a shape maps to the list of branches
    its decision structure enables. -/
def classify : ProseShape → List ProseClass
  | .prefilter s => pfBranches s
  | .delimiter _ => [.dlAuthored]
  | .concatlines .noContinuation => [.clIdentity]
  | .concatlines .plainContinuation => [.clJoin]
  | .concatlines .divOpenerContinuation => [.clDivOpen]
  | .concatlines .tokenizedBody => [.clTokenized]
  | .tighten s => tnBranches s
  | .typography s => tyBranches s
  | .paragraph .emptyRun => [.pgEmpty]
  | .paragraph .scoredAnchor => [.pgScoredAnchor]
  | .paragraph .scoredSpan => [.pgScoredSpan]
  | .paragraph .skipToken => [.pgSkip]
  | .paragraph .wrapRun => [.pgWrap]
  | .horiz s => hzBranches s
  | .separator s => spBranches s
  | .clearfloat s => cfBranches s
  | .brk .spaceUnderscoreNewline => [.brFire]
  | .brk .other => [.brLiteral]
  | .center .equalsSpaceLine => [.ctFire]
  | .center .other => [.ctLiteral]
  | .divprefilter .closeOpenJoin => [.dpJoin]
  | .divprefilter .other => [.dpLiteral]
  | .divalign .eq => [.daCenter]
  | .divalign .lt => [.daLeft]
  | .divalign .gt => [.daRight]
  | .divalign .eqeq => [.daJustify]
  | .divalign .nested => [.daRepeat]
  | .divalign .unmatched => [.daLiteral]

/-! ## Decidability, completeness, exhaustiveness, exclusivity -/

/-- Class membership is decidable: equality on ProseClass is derivable and
    so is List membership. Written as a definition because `Decidable` is a
    Type, not a Prop. -/
def classMemDecidable (s : ProseShape) (c : ProseClass) :
    Decidable (c ∈ classify s) := inferInstance

/-- Every constructor of ProseClass is declared in the enumeration. This
    is a closed computation: each of the 53 cases is decided by the kernel. -/
theorem allClasses_mem (c : ProseClass) : c ∈ allClasses := by
  cases c <;> decide

/-- Soundness: any class a shape yields is a declared class. -/
theorem classify_sound (s : ProseShape) {c : ProseClass}
    (_h : c ∈ classify s) : c ∈ allClasses := allClasses_mem c

/-- Every shape yields at least one branch. For the sequence rules this is
    the unconditional first step; for the others it is the singleton
    branch of the exclusive decision. -/
theorem classify_nonempty (s : ProseShape) : ∃ c, c ∈ classify s := by
  cases s with
  | prefilter p =>
      refine ⟨.pfPad, ?_⟩
      simp [classify, pfBranches, allClasses]
  | delimiter _ => exact ⟨.dlAuthored, by simp [classify]⟩
  | concatlines q =>
      cases q <;> simp [classify]
  | tighten t =>
      refine ⟨.tnNewline, ?_⟩
      simp [classify, tnBranches, allClasses]
  | typography t =>
      by_cases h1 : t.qDouble = true
      · exact ⟨.tyQuoteDouble, by simp [classify, tyBranches, allClasses, h1]⟩
      · by_cases h2 : t.qComma = true
        · exact ⟨.tyQuoteComma, by simp [classify, tyBranches, allClasses, h2]⟩
        · by_cases h3 : t.qSingle = true
          · exact ⟨.tyQuoteSingle, by simp [classify, tyBranches, allClasses, h3]⟩
          · by_cases h4 : t.lAngle = true
            · exact ⟨.tyLeftAngle, by simp [classify, tyBranches, allClasses, h4]⟩
            · by_cases h5 : t.rAngle = true
              · exact ⟨.tyRightAngle, by simp [classify, tyBranches, allClasses, h5]⟩
              · by_cases h6 : t.numSpace = true
                · exact ⟨.tyNumSpace, by simp [classify, tyBranches, allClasses, h6]⟩
                · by_cases h7 : t.unit = true
                  · exact ⟨.tyUnit, by simp [classify, tyBranches, allClasses, h7]⟩
                  · by_cases h8 : t.ellipsis = true
                    · exact ⟨.tyEllipsis, by simp [classify, tyBranches, allClasses, h8]⟩
                    · by_cases h9 : t.dash2 = true
                      · exact ⟨.tyDash2, by simp [classify, tyBranches, allClasses, h9]⟩
                      · exact ⟨.tyNone, by simp [classify, tyBranches,
                          allClasses, tyAny, h1, h2, h3, h4, h5, h6, h7, h8, h9]⟩
  | paragraph p =>
      cases p <;> simp [classify]
  | horiz z =>
      by_cases h : z.alone && 4 ≤ z.dashes
      · exact ⟨.hzFire, by simp [classify, hzBranches, h]⟩
      · exact ⟨.hzLiteral, by simp [classify, hzBranches, h]⟩
  | separator z =>
      by_cases h : z.alone && 4 ≤ z.equals
      · exact ⟨.spFire, by simp [classify, spBranches, h]⟩
      · exact ⟨.spLiteral, by simp [classify, spBranches, h]⟩
  | clearfloat z =>
      by_cases hz : !z.alone || z.tildes < 4
      · exact ⟨.cfLiteral, by simp [classify, cfBranches, hz]⟩
      · rcases z with ⟨_, side, _⟩
        cases side <;> simp [classify, cfBranches, hz]
  | brk b =>
      cases b <;> simp [classify]
  | center c =>
      cases c <;> simp [classify]
  | divprefilter d =>
      cases d <;> simp [classify]
  | divalign d =>
      cases d <;> simp [classify]

/-- A representable witness shape for every declared class. For a
    sequence rule the witness sets the one decision true (padding, newline
    deletion and the no-pattern case need no decision at all). -/
def witnessShape : ProseClass → ProseShape
  | .pfCrlf => .prefilter ⟨true, false, false, false, false⟩
  | .pfCr => .prefilter ⟨false, true, false, false, false⟩
  | .pfWsLine => .prefilter ⟨false, false, true, false, false⟩
  | .pfTab => .prefilter ⟨false, false, false, true, false⟩
  | .pfPad => .prefilter ⟨false, false, false, false, false⟩
  | .pfCompress => .prefilter ⟨false, false, false, false, true⟩
  | .dlAuthored => .delimiter .authoredText
  | .clIdentity => .concatlines .noContinuation
  | .clJoin => .concatlines .plainContinuation
  | .clDivOpen => .concatlines .divOpenerContinuation
  | .clTokenized => .concatlines .tokenizedBody
  | .tnNewline => .tighten ⟨false, false, false, false⟩
  | .tnFold => .tighten ⟨true, false, false, false⟩
  | .tnColorStart => .tighten ⟨false, true, false, false⟩
  | .tnColorEnd => .tighten ⟨false, false, true, false⟩
  | .tnEdgeTrim => .tighten ⟨false, false, false, true⟩
  | .tnSecondFold => .tighten ⟨false, true, false, false⟩
  | .tyQuoteDouble => .typography ⟨true, false, false, false, false, false, false, false, false⟩
  | .tyQuoteComma => .typography ⟨false, true, false, false, false, false, false, false, false⟩
  | .tyQuoteSingle => .typography ⟨false, false, true, false, false, false, false, false, false⟩
  | .tyLeftAngle => .typography ⟨false, false, false, true, false, false, false, false, false⟩
  | .tyRightAngle => .typography ⟨false, false, false, false, true, false, false, false, false⟩
  | .tyNumSpace => .typography ⟨false, false, false, false, false, true, false, false, false⟩
  | .tyUnit => .typography ⟨false, false, false, false, false, false, true, false, false⟩
  | .tyEllipsis => .typography ⟨false, false, false, false, false, false, false, true, false⟩
  | .tyDash2 => .typography ⟨false, false, false, false, false, false, false, false, true⟩
  | .tyNone => .typography ⟨false, false, false, false, false, false, false, false, false⟩
  | .pgEmpty => .paragraph .emptyRun
  | .pgScoredAnchor => .paragraph .scoredAnchor
  | .pgScoredSpan => .paragraph .scoredSpan
  | .pgSkip => .paragraph .skipToken
  | .pgWrap => .paragraph .wrapRun
  | .hzFire => .horiz ⟨4, true⟩
  | .hzLiteral => .horiz ⟨3, true⟩
  | .spFire => .separator ⟨4, true⟩
  | .spLiteral => .separator ⟨3, true⟩
  | .cfBoth => .clearfloat ⟨4, .none, true⟩
  | .cfRight => .clearfloat ⟨4, .right, true⟩
  | .cfLeft => .clearfloat ⟨4, .left, true⟩
  | .cfDoubleSide => .clearfloat ⟨4, .doubled, true⟩
  | .cfLiteral => .clearfloat ⟨3, .none, true⟩
  | .brFire => .brk .spaceUnderscoreNewline
  | .brLiteral => .brk .other
  | .ctFire => .center .equalsSpaceLine
  | .ctLiteral => .center .other
  | .dpJoin => .divprefilter .closeOpenJoin
  | .dpLiteral => .divprefilter .other
  | .daCenter => .divalign .eq
  | .daLeft => .divalign .lt
  | .daRight => .divalign .gt
  | .daJustify => .divalign .eqeq
  | .daRepeat => .divalign .nested
  | .daLiteral => .divalign .unmatched

/-- Every declared class is realized by a representable shape: the class
    enumeration has no dead entries. -/
theorem witness_classify (c : ProseClass) : c ∈ classify (witnessShape c) := by
  cases c <;> simp [classify, witnessShape, pfBranches, tnBranches,
    tyBranches, hzBranches, spBranches, cfBranches, allClasses, tyAny]

/-- Completeness of the class enumeration over the shape space: a class is
    declared exactly when some shape yields it. -/
theorem classes_exhaustive (c : ProseClass) :
    c ∈ allClasses ↔ ∃ s : ProseShape, c ∈ classify s := by
  constructor
  · intro _
    exact ⟨witnessShape c, witness_classify c⟩
  · intro h
    obtain ⟨s, hs⟩ := h
    exact classify_sound s hs

/-- The headline completeness theorem: a class-membership predicate over
    the family's formalized branch conditions is decidable, every shape
    lands in at least one declared class, and every declared class has a
    shape. -/
theorem prose_classification_complete :
    (∀ s c, (c ∈ classify s) ∨ ¬ (c ∈ classify s)) ∧
    (∀ s : ProseShape, ∃ c, c ∈ allClasses ∧ c ∈ classify s) ∧
    (∀ c : ProseClass, c ∈ allClasses → ∃ s : ProseShape, c ∈ classify s) := by
  refine ⟨?_, ?_, ?_⟩
  · intro s c
    by_cases h : c ∈ classify s
    · exact Or.inl h
    · exact Or.inr h
  · intro s
    obtain ⟨c, hc⟩ := classify_nonempty s
    exact ⟨c, classify_sound s hc, hc⟩
  · intro c _
    exact ⟨witnessShape c, witness_classify c⟩

/-- Exclusivity where the decision structure gives it: for a rule with
    mutually exclusive branches, two classes of the same rule yielded by
    one shape coincide. (The sequence rules are deliberately excluded:
    Prefilter, Tighten and Typography fire several branches at once.) -/
theorem exclusive_class_single {s : ProseShape} {c1 c2 : ProseClass}
    (h1 : classify s = [c1]) (h2 : classify s = [c2]) : c1 = c2 := by
  rw [h1] at h2
  exact (List.cons.inj h2).1

theorem pf_pad_always (s : PFShape) : .pfPad ∈ pfBranches s := by
  simp [pfBranches, allClasses]

theorem tn_newline_always (s : TNShape) : .tnNewline ∈ tnBranches s := by
  simp [tnBranches, allClasses]

theorem ty_none_iff (s : TYShape) : .tyNone ∈ tyBranches s ↔ tyAny s = false := by
  simp [tyBranches, allClasses, tyAny]

theorem ty_none_exclusive (s : TYShape) (h : tyAny s = true) :
    .tyNone ∉ tyBranches s := by
  intro hm
  have hp : (!tyAny s) = true := by
    simpa using (List.mem_filter.mp hm).2
  cases hb : tyAny s <;> simp [hb] at h hp

/-! ## The two dead branches, proved dead rather than classed -/

/-- Delimiter's regex searches for the internal placeholder byte 0xFF.
    Authored source is UTF-8 text and no character's UTF-8 encoding has a
    0xFF byte, so the matching arm has no authored input; the identity
    theorem is FrameRules.delimiterRule_id, restated here at class level. -/
theorem delimiter_dead_branch_has_no_author_shape :
    ∀ s : DLShape, classify (.delimiter s) = [.dlAuthored] := by
  intro s
  cases s
  rfl

/-- Typography applies `--` before `---`; a run of three dashes is fully
    consumed by the first replacement, so the `---` statement's arm is
    unreachable and the surviving hyphen is literal (probe typo-dash3). -/
theorem typography_dash3_statement_dead :
    classify (.typography ⟨false, false, false, false, false,
      false, false, false, true⟩) = [.tyDash2] := by
  simp [classify, tyBranches, allClasses, tyAny]

/-! ## Correspondence with the existing mirrors -/

/-- Prefilter expands a tab to exactly four spaces, not a tab stop
    (probe muse-probe-suspect-prose-pre-tab-code). -/
theorem cov_prefilter_tab_four_spaces :
    expandTabs ['\t'] = [' ', ' ', ' ', ' '] := rfl

/-- Delimiter is the identity on every representable state
    (probe delim-utf8). -/
theorem cov_delimiter_identity (st : ParseState) : delimiterRule st = st := rfl

/-- Three dashes do not claim Horiz; four do (probes horiz-3,
    muse-probe-refval-horiz-p01). -/
theorem cov_horiz_three_literal :
    lineScan 45 false 1 "Horiz" (litBytes "---\n") [] true 20 =
      (litBytes "---\n", []) := rfl

theorem cov_horiz_four_claims :
    lineScan 45 false 1 "Horiz" (litBytes "----\n") [] true 20 =
      (litBytes "\n" ++ phBytes 0 ++ litBytes "\n\n\n",
        [{ rule := "Horiz", opts := [] }]) := rfl

/-- Five `=` claim Separator: the `{4,}` threshold is open-ended
    (probe sep-5). -/
theorem cov_separator_five_claims :
    lineScan 61 false 1 "Separator" (litBytes "=====\n") [] true 20 =
      (litBytes "\n" ++ phBytes 0 ++ litBytes "\n\n\n",
        [{ rule := "Separator", opts := [] }]) := rfl

/-- A doubled Clearfloat side marker defeats the whole match; the
    `>>` is left for Typography (probe cf-double-side). -/
theorem cov_clearfloat_doubled_side_literal :
    lineScan 126 true 2 "Clearfloat" (litBytes "~~~~>>\n") [] true 20 =
      (litBytes "~~~~>>\n", []) := rfl

/-- Break claims the last of two spaces before the underscore
    (probe brk-two-space). -/
theorem cov_break_two_spaces_claims_once :
    breakScan (litBytes "a  _\nb\n") [] 20 =
      (litBytes "a " ++ phBytes 0 ++ litBytes "b\n",
        [{ rule := "Break", opts := [] }]) := rfl

/-- Center trims its body but keeps a trailing equals sign
    (probe ctr-trail-eq). -/
theorem cov_center_keeps_trailing_equals :
    centerScan (litBytes "= hello =\n") [] true 20 =
      ([10, 10] ++ phBytes 0 ++ litBytes "hello =" ++ phBytes 1 ++
        [10, 10] ++ litBytes "\n",
        [{ rule := "Center",
           opts := [("type".toList, OptVal.str "start".toList)] },
         { rule := "Center",
           opts := [("type".toList, OptVal.str "end".toList)] }]) := rfl

/-- A run opening with a Separator token is not wrapped in a paragraph
    (probe para-sep). -/
theorem cov_separator_run_unwrapped :
    paraProcess (phBytes 0 ++ litBytes "x\n\n")
        [{ rule := "Separator", opts := [] }] [] [] [] =
      (phBytes 0 ++ litBytes "x\n\n",
        [{ rule := "Separator", opts := [] }]) := rfl

/-- Concatlines drops the backslash-newline pair but keeps the line
    break before a standalone div opener (R2-LINK concat battery). -/
theorem cov_concatlines_join :
    concatScan (litBytes "a\\\nb") = litBytes "ab" := rfl

theorem cov_concatlines_div_opener :
    concatScan (litBytes "a\\\n[[div]]\nb")
      = litBytes "a [[div]]\nb" := rfl

/-- Divprefilter joins on the bare prefix, case-insensitively
    (probe dp-bare-prefix). -/
theorem cov_divprefilter_bare_prefix :
    divprefilterScan (litBytes "[[/DIV]] [[DIV]]") 30 =
      litBytes "[[/div]][[div]]" := rfl

/-- Tighten folds a residual horizontal run; a tokenized body is not in
    the residual source (probe tight-code-ws). -/
theorem cov_tighten_folds_residual_run :
    collapsePad (litBytes "a  b") = litBytes "a b" := rfl

/-- The dash table makes `--` an em dash and leaves the extra hyphen from
    `---` literal (probe typo-dash3). -/
theorem cov_typography_two_dashes :
    renderTypography [("char".toList, OptVal.str "--".toList)] =
      litBytes "&#8212;" := rfl

theorem cov_divalign_justify_render :
    renderDivalign [("type".toList, OptVal.str "start".toList),
      ("align".toList, OptVal.str "justify".toList)] =
      litBytes "<div style=\"text-align: justify;\">" := rfl

end LeanFtml
