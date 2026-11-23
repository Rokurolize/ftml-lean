/-
LeanFtml.CoverageContain — the coverage-tier classification of the container family (BRIEF-COVERAGE-CONTAIN): Div, Blockquote, Collapsible and Tabview, across the parse decisions in ContainRules.lean and BlockRules.lean and the render decisions in InteractiveRules.lean (Div, Collapsible, Tabview) and ProseRules.lean (Blockquote).

The classes are the branches of the reference `process` and `token` methods under the harness configuration (`ref-php/harness/wiki-config.php`, `ref_configure_wiki`), read from the current mirror. Span and Size are out of scope: their render classes already stand in CoverageInline.lean. The name is `containClassify`, not `classify`, so it does not collide with CoverageProse.lean or CoverageNotes.lean, and the shape type is `ContainShape`, not `CTShape` or `InlineShape`.

A class is a decidable predicate of an abstract decision shape. Parse shapes carry the features the reference tests (blockquote run deletion versus a kept run that still drops an unmatched line, div score and the vanished flag, collapsible's single claim, tab title kind and source, the view's class and attribute echo). Render shapes carry the token cascades (blockquote type, div vanished-then-type with the attribute-clear arm, collapsible fold and label and hide-location and type, tabview start items and panel visibility). `containClassify` returns the list of classes a shape enables, because a kept blockquote run, a div parse, a collapsible token and a tabview start compose independent decisions, while the render type cascades are single-valued.

Completeness over this decision structure is `contain_classification_complete`: membership is decidable, every shape yields a declared class, and every declared class has a representable witness. Per-group exclusivity is proved where the reference's cascade is exclusive. `containShapeOf` reads a real render token back into a shape for the four render rules, so the partition is about render inputs and not only about the abstract shapes. The blockquote line-deletion the SPEC2 non-deletion intent denied is the class `bqRunDeleted`, which live and the reference both take; a kept run is a different class and may still carry `bqLineDropped`.

No sorry and no sorryAx. Audit lines are staged in coverage-contain-audit-block.txt. Main.lean is not edited by this lane.
-/

import LeanFtml.InteractiveRules
import LeanFtml.ProseRules
import LeanFtml.BlockRules

namespace LeanFtml

/-! ## The class enumeration -/

/-- One branch class per decision the four container rules can take. The constructors are the complete named output of the classification; `containAllClasses` is their enumeration. -/
inductive ContainClass where
  /- Blockquote.php process: the C2 deletion gate, then the kept-run stack. -/
  | bqRunDeleted | bqLineDropped | bqText | bqNestStart | bqNestEnd | bqDrain
  /- Blockquote.php token, harness css null, level unread (R2-BLOCK C1). -/
  | bqRenderStart | bqRenderEnd | bqRenderFall
  /- Div.php process: body form, head, and the empty-value unset. -/
  | dvPlain | dvScored | dvVanished | dvBare | dvAttrOrder | dvEmptyUnset
  /- Div.php token: vanished dominates, then type, then the clear arm. -/
  | dvRVanished | dvRStartBare | dvRStartEsc | dvRStartClear | dvREnd | dvRFall
  /- Collapsible.php: the parse claims one pair; the renderer branches on fold, both labels, hide location and type. -/
  | coParseClaim
  | coFolded | coOpened
  | coShowDefault | coShowAuthored
  | coHideDefault | coHideAuthored
  | coLocTop | coLocBottom | coLocBoth
  | coStart | coEnd | coFall
  /- Tabview.php process: `_tabTitle`, the title's source, and the view head. -/
  | tvTitleUntitled | tvTitleRawEmpty | tvTitleCollapsed
  | tvTitlePositional | tvTitleAttribute
  | tvClassKept | tvClassDropped | tvAttrEcho
  /- Tabview.php token: start plus per-item class, then the panel and the closers. -/
  | tvStart
  | tvSelected | tvUnselected
  | tvLabelDefault | tvLabelEmpty | tvLabelText
  | tvPanelShown | tvPanelHidden
  | tvPanelEnd | tvEnd | tvFall
  deriving DecidableEq, Repr

/-- The declared class set, in reference rule order and then in the order of each rule's tests. -/
def containAllClasses : List ContainClass :=
  [ .bqRunDeleted, .bqLineDropped, .bqText, .bqNestStart, .bqNestEnd, .bqDrain,
    .bqRenderStart, .bqRenderEnd, .bqRenderFall,
    .dvPlain, .dvScored, .dvVanished, .dvBare, .dvAttrOrder, .dvEmptyUnset,
    .dvRVanished, .dvRStartBare, .dvRStartEsc, .dvRStartClear, .dvREnd, .dvRFall,
    .coParseClaim,
    .coFolded, .coOpened,
    .coShowDefault, .coShowAuthored,
    .coHideDefault, .coHideAuthored,
    .coLocTop, .coLocBottom, .coLocBoth,
    .coStart, .coEnd, .coFall,
    .tvTitleUntitled, .tvTitleRawEmpty, .tvTitleCollapsed,
    .tvTitlePositional, .tvTitleAttribute,
    .tvClassKept, .tvClassDropped, .tvAttrEcho,
    .tvStart,
    .tvSelected, .tvUnselected,
    .tvLabelDefault, .tvLabelEmpty, .tvLabelText,
    .tvPanelShown, .tvPanelHidden,
    .tvPanelEnd, .tvEnd, .tvFall ]

theorem containAllClasses_nodup : containAllClasses.Nodup := by decide

theorem containAllClasses_length : containAllClasses.length = 53 := by decide

/-! ## Decision shapes -/

/-- A captured blockquote run. `deleted` is the C2 gate: no inner line has text, so the run is replaced by two newlines and claims nothing (the SPEC2 non-deletion intent, settled against live). `kept` is a run that emits quote text; `dropped` means an outer-run line failed the inner `>+ ` pattern and was deleted anyway; `shallower` means some later line popped the stack (C3's two newlines after the end token). A kept run always pushes at least once and always drains. -/
inductive BqRun where
  | deleted
  | kept (dropped : Bool) (shallower : Bool)
  deriving DecidableEq, Repr

/-- Blockquote render type. The harness `css` conf is null, so start never carries a class, and `level` is not read. -/
inductive BqRender where
  | start | endTok | other
  deriving DecidableEq, Repr

/-- Div body form: unscored wraps the body in blank lines; scored trims CR/LF edges and deletes blank-line runs. -/
inductive DivBody where
  | plain | scored
  deriving DecidableEq, Repr

/-- Div head after the empty-value unset. `vanished` is C-STAGE2-2 (no effective attribute and a trim-empty body). `ordered` is C-STAGE2-1 (the kept attributes are emitted id, class, style, role, type, then data-* in authored order). `bare` is a non-empty body with no effective attribute. -/
inductive DivHead where
  | vanished | bare | ordered
  deriving DecidableEq, Repr

/-- Div parse features. `unset` means at least one admitted attribute was removed because its trimmed value was empty; it composes with every head. -/
structure DivParseShape where
  body : DivBody
  head : DivHead
  unset : Bool
  deriving DecidableEq, Repr

/-- Div render kind. Vanished dominates type. A start is bare, escaped, or clearing, exclusively: clearing means at least one stored value carries a placeholder byte (REFCORR8 C-R5-R1-1 removed the bare `u-` id shell arm, which live emits verbatim). -/
inductive DivRenderKind where
  | vanished | startBare | startEsc | startClear | endTok | other
  deriving DecidableEq, Repr

/-- Collapsible fold. Open only when `folded` is exactly `no` or `false`. -/
inductive CoFold where
  | folded | opened
  deriving DecidableEq, Repr

/-- A collapsible label. Default when the text is unset, empty, or the string `0`; otherwise the authored text, escaped ENT_COMPAT and then space-substituted. -/
inductive CoLabel where
  | default | authored
  deriving DecidableEq, Repr

/-- Collapsible `hideLocation`. Anything other than `bottom` or `both`, including a missing key, is top. -/
inductive CoLoc where
  | top | bottom | both
  deriving DecidableEq, Repr

/-- Collapsible token type. Any other type, including a missing key, is the implicit null fallthrough. -/
inductive CoType where
  | start | endTok | other
  deriving DecidableEq, Repr

/-- The five independent collapsible render decisions. Both labels are computed for every token type; whether the hide block is emitted is the type crossed with the location. -/
structure CoRenderShape where
  fold : CoFold
  showLbl : CoLabel
  hideLbl : CoLabel
  loc : CoLoc
  typ : CoType
  deriving DecidableEq, Repr

/-- `_tabTitle` outcome: whitespace-only becomes `untitled`; a title carrying `@@`/`@< >@` or a placeholder byte becomes empty; anything else has its whitespace runs collapsed. -/
inductive TvTitleKind where
  | untitled | rawEmpty | collapsed
  deriving DecidableEq, Repr

/-- Where the title string came from. `positional` is the inner pattern's group 1 when it is not itself a quoted pair; `attribute` is a `title` attribute, including the ff-hack that treats a quoted group 1 as an attribute. -/
inductive TvTitleSource where
  | positional | attribute
  deriving DecidableEq, Repr

structure TvParseTab where
  kind : TvTitleKind
  source : TvTitleSource
  deriving DecidableEq, Repr

/-- The view head. `bare` has no attribute group. `echoDropped` doubles a group whose class is missing, empty or `0` (`empty` is false). `echoKept` doubles a group and stores a truthy class. The renderer never reads the stored class. -/
inductive TvView where
  | bare | echoDropped | echoKept
  deriving DecidableEq, Repr

/-- One tab item of a start token, under the mirror's tests: `tabId` missing or integer 0 or the byte string `0` is selected (PHP's loose `== 0` on the values the parser stores), and a missing title is the default `untitled` while an empty title is the bare anchor. -/
inductive TvLabel where
  | default | empty | text
  deriving DecidableEq, Repr

structure TvItem where
  selected : Bool
  label : TvLabel
  deriving DecidableEq, Repr

/-- Tabview render. A start carries every item; the selected and label classes are per item and a start with two items can carry both `tvSelected` and `tvUnselected`. The panel decision is the `tabStart` token, not the start token. -/
inductive TvRender where
  | start (items : List TvItem)
  | panelShown | panelHidden
  | panelEnd | endTok | fall
  deriving DecidableEq, Repr

/-- The family's decision space: one constructor per rule's parse or render decision point. -/
inductive ContainShape where
  | bqRun (s : BqRun)
  | bqRender (s : BqRender)
  | divParse (s : DivParseShape)
  | divRender (s : DivRenderKind)
  | coParse
  | coRender (s : CoRenderShape)
  | tvParseTab (s : TvParseTab)
  | tvView (s : TvView)
  | tvRender (s : TvRender)
  deriving DecidableEq, Repr

/-! ## Branch functions -/

def bqRunBranches : BqRun → List ContainClass
  | .deleted => [.bqRunDeleted]
  | .kept dropped shallower =>
      [.bqText, .bqNestStart, .bqDrain]
        ++ (if dropped then [.bqLineDropped] else [])
        ++ (if shallower then [.bqNestEnd] else [])

def bqRenderBranches : BqRender → List ContainClass
  | .start => [.bqRenderStart]
  | .endTok => [.bqRenderEnd]
  | .other => [.bqRenderFall]

def divBodyBranch : DivBody → List ContainClass
  | .plain => [.dvPlain]
  | .scored => [.dvScored]

def divHeadBranch : DivHead → List ContainClass
  | .vanished => [.dvVanished]
  | .bare => [.dvBare]
  | .ordered => [.dvAttrOrder]

def divParseBranches (s : DivParseShape) : List ContainClass :=
  divBodyBranch s.body ++ divHeadBranch s.head
    ++ (if s.unset then [.dvEmptyUnset] else [])

def divRenderBranches : DivRenderKind → List ContainClass
  | .vanished => [.dvRVanished]
  | .startBare => [.dvRStartBare]
  | .startEsc => [.dvRStartEsc]
  | .startClear => [.dvRStartClear]
  | .endTok => [.dvREnd]
  | .other => [.dvRFall]

def coFoldBranch : CoFold → List ContainClass
  | .folded => [.coFolded]
  | .opened => [.coOpened]

def coShowBranch : CoLabel → List ContainClass
  | .default => [.coShowDefault]
  | .authored => [.coShowAuthored]

def coHideBranch : CoLabel → List ContainClass
  | .default => [.coHideDefault]
  | .authored => [.coHideAuthored]

def coLocBranch : CoLoc → List ContainClass
  | .top => [.coLocTop]
  | .bottom => [.coLocBottom]
  | .both => [.coLocBoth]

def coTypeBranch : CoType → List ContainClass
  | .start => [.coStart]
  | .endTok => [.coEnd]
  | .other => [.coFall]

def coBranches (s : CoRenderShape) : List ContainClass :=
  coFoldBranch s.fold ++ coShowBranch s.showLbl ++ coHideBranch s.hideLbl
    ++ coLocBranch s.loc ++ coTypeBranch s.typ

def tvKindBranch : TvTitleKind → List ContainClass
  | .untitled => [.tvTitleUntitled]
  | .rawEmpty => [.tvTitleRawEmpty]
  | .collapsed => [.tvTitleCollapsed]

def tvSourceBranch : TvTitleSource → List ContainClass
  | .positional => [.tvTitlePositional]
  | .attribute => [.tvTitleAttribute]

def tvParseBranches (s : TvParseTab) : List ContainClass :=
  tvKindBranch s.kind ++ tvSourceBranch s.source

def tvViewBranches : TvView → List ContainClass
  | .bare => [.tvClassDropped]
  | .echoDropped => [.tvClassDropped, .tvAttrEcho]
  | .echoKept => [.tvClassKept, .tvAttrEcho]

def tvSelectedBranch (it : TvItem) : List ContainClass :=
  if it.selected then [.tvSelected] else [.tvUnselected]

def tvLabelBranch : TvLabel → List ContainClass
  | .default => [.tvLabelDefault]
  | .empty => [.tvLabelEmpty]
  | .text => [.tvLabelText]

def tvItemBranches (it : TvItem) : List ContainClass :=
  tvSelectedBranch it ++ tvLabelBranch it.label

def tvRenderBranches : TvRender → List ContainClass
  | .start items => .tvStart :: items.flatMap tvItemBranches
  | .panelShown => [.tvPanelShown]
  | .panelHidden => [.tvPanelHidden]
  | .panelEnd => [.tvPanelEnd]
  | .endTok => [.tvEnd]
  | .fall => [.tvFall]

/-- The whole-family classifier. -/
def containClassify : ContainShape → List ContainClass
  | .bqRun s => bqRunBranches s
  | .bqRender s => bqRenderBranches s
  | .divParse s => divParseBranches s
  | .divRender s => divRenderBranches s
  | .coParse => [.coParseClaim]
  | .coRender s => coBranches s
  | .tvParseTab s => tvParseBranches s
  | .tvView s => tvViewBranches s
  | .tvRender s => tvRenderBranches s

/-! ## Decidability, completeness, exhaustiveness -/

def containClassMemDecidable (s : ContainShape) (c : ContainClass) :
    Decidable (c ∈ containClassify s) := inferInstance

theorem containAllClasses_mem (c : ContainClass) : c ∈ containAllClasses := by
  cases c <;> decide

theorem contain_classify_sound (s : ContainShape) {c : ContainClass}
    (_h : c ∈ containClassify s) : c ∈ containAllClasses :=
  containAllClasses_mem c

private theorem mem_of_prefix {α : Type} {a : α} {l r : List α}
    (h : a ∈ l) : a ∈ l ++ r := by
  rw [List.mem_append]
  exact Or.inl h

theorem contain_classify_nonempty (s : ContainShape) : ∃ c, c ∈ containClassify s := by
  cases s with
  | bqRun r =>
      cases r with
      | deleted => simp [containClassify, bqRunBranches]
      | kept d sh =>
          cases d <;> cases sh <;> simp [containClassify, bqRunBranches]
  | bqRender r =>
      cases r <;> simp [containClassify, bqRenderBranches]
  | divParse p =>
      rcases p with ⟨body, head, unset⟩
      cases body <;> cases head <;> cases unset <;>
        simp [containClassify, divParseBranches, divBodyBranch, divHeadBranch]
  | divRender k =>
      cases k <;> simp [containClassify, divRenderBranches]
  | coParse => simp [containClassify]
  | coRender c =>
      rcases c with ⟨fold, showLbl, hideLbl, loc, typ⟩
      cases fold <;> cases showLbl <;> cases hideLbl <;> cases loc <;> cases typ <;>
        simp [containClassify, coBranches, coFoldBranch, coShowBranch,
          coHideBranch, coLocBranch, coTypeBranch]
  | tvParseTab t =>
      rcases t with ⟨kind, source⟩
      cases kind <;> cases source <;>
        simp [containClassify, tvParseBranches, tvKindBranch, tvSourceBranch]
  | tvView v =>
      cases v <;> simp [containClassify, tvViewBranches]
  | tvRender r =>
      cases r with
      | start items =>
          refine ⟨.tvStart, ?_⟩
          simp only [containClassify, tvRenderBranches]
          exact List.Mem.head (items.flatMap tvItemBranches)
      | panelShown => simp [containClassify, tvRenderBranches]
      | panelHidden => simp [containClassify, tvRenderBranches]
      | panelEnd => simp [containClassify, tvRenderBranches]
      | endTok => simp [containClassify, tvRenderBranches]
      | fall => simp [containClassify, tvRenderBranches]

/-- A representable witness for every declared class. -/
def containWitnessShape : ContainClass → ContainShape
  | .bqRunDeleted => .bqRun .deleted
  | .bqLineDropped => .bqRun (.kept true false)
  | .bqText => .bqRun (.kept false false)
  | .bqNestStart => .bqRun (.kept false false)
  | .bqNestEnd => .bqRun (.kept false true)
  | .bqDrain => .bqRun (.kept false false)
  | .bqRenderStart => .bqRender .start
  | .bqRenderEnd => .bqRender .endTok
  | .bqRenderFall => .bqRender .other
  | .dvPlain => .divParse ⟨.plain, .bare, false⟩
  | .dvScored => .divParse ⟨.scored, .bare, false⟩
  | .dvVanished => .divParse ⟨.plain, .vanished, false⟩
  | .dvBare => .divParse ⟨.plain, .bare, false⟩
  | .dvAttrOrder => .divParse ⟨.plain, .ordered, false⟩
  | .dvEmptyUnset => .divParse ⟨.plain, .bare, true⟩
  | .dvRVanished => .divRender .vanished
  | .dvRStartBare => .divRender .startBare
  | .dvRStartEsc => .divRender .startEsc
  | .dvRStartClear => .divRender .startClear
  | .dvREnd => .divRender .endTok
  | .dvRFall => .divRender .other
  | .coParseClaim => .coParse
  | .coFolded => .coRender ⟨.folded, .default, .default, .top, .start⟩
  | .coOpened => .coRender ⟨.opened, .default, .default, .top, .start⟩
  | .coShowDefault => .coRender ⟨.folded, .default, .default, .top, .start⟩
  | .coShowAuthored => .coRender ⟨.folded, .authored, .default, .top, .start⟩
  | .coHideDefault => .coRender ⟨.folded, .default, .default, .top, .start⟩
  | .coHideAuthored => .coRender ⟨.folded, .default, .authored, .top, .start⟩
  | .coLocTop => .coRender ⟨.folded, .default, .default, .top, .start⟩
  | .coLocBottom => .coRender ⟨.folded, .default, .default, .bottom, .endTok⟩
  | .coLocBoth => .coRender ⟨.folded, .default, .default, .both, .start⟩
  | .coStart => .coRender ⟨.folded, .default, .default, .top, .start⟩
  | .coEnd => .coRender ⟨.folded, .default, .default, .top, .endTok⟩
  | .coFall => .coRender ⟨.folded, .default, .default, .top, .other⟩
  | .tvTitleUntitled => .tvParseTab ⟨.untitled, .positional⟩
  | .tvTitleRawEmpty => .tvParseTab ⟨.rawEmpty, .attribute⟩
  | .tvTitleCollapsed => .tvParseTab ⟨.collapsed, .positional⟩
  | .tvTitlePositional => .tvParseTab ⟨.collapsed, .positional⟩
  | .tvTitleAttribute => .tvParseTab ⟨.collapsed, .attribute⟩
  | .tvClassKept => .tvView .echoKept
  | .tvClassDropped => .tvView .bare
  | .tvAttrEcho => .tvView .echoDropped
  | .tvStart => .tvRender (.start [])
  | .tvSelected => .tvRender (.start [⟨true, .text⟩])
  | .tvUnselected => .tvRender (.start [⟨false, .text⟩])
  | .tvLabelDefault => .tvRender (.start [⟨true, .default⟩])
  | .tvLabelEmpty => .tvRender (.start [⟨true, .empty⟩])
  | .tvLabelText => .tvRender (.start [⟨true, .text⟩])
  | .tvPanelShown => .tvRender .panelShown
  | .tvPanelHidden => .tvRender .panelHidden
  | .tvPanelEnd => .tvRender .panelEnd
  | .tvEnd => .tvRender .endTok
  | .tvFall => .tvRender .fall

theorem contain_witness_classify (c : ContainClass) :
    c ∈ containClassify (containWitnessShape c) := by
  cases c <;> decide

theorem contain_classes_exhaustive (c : ContainClass) :
    c ∈ containAllClasses ↔ ∃ s : ContainShape, c ∈ containClassify s := by
  constructor
  · intro _
    exact ⟨containWitnessShape c, contain_witness_classify c⟩
  · intro h
    obtain ⟨s, hs⟩ := h
    exact contain_classify_sound s hs

/-- The headline completeness theorem: decidability, coverage and exhaustiveness of the container classification. -/
theorem contain_classification_complete :
    (∀ s c, (c ∈ containClassify s) ∨ ¬ (c ∈ containClassify s)) ∧
    (∀ s : ContainShape, ∃ c, c ∈ containAllClasses ∧ c ∈ containClassify s) ∧
    (∀ c : ContainClass, c ∈ containAllClasses →
      ∃ s : ContainShape, c ∈ containClassify s) := by
  refine ⟨?_, ?_, ?_⟩
  · intro s c
    by_cases h : c ∈ containClassify s
    · exact Or.inl h
    · exact Or.inr h
  · intro s
    obtain ⟨c, hc⟩ := contain_classify_nonempty s
    exact ⟨c, contain_classify_sound s hc, hc⟩
  · intro c _
    exact ⟨containWitnessShape c, contain_witness_classify c⟩

/-! ## Exclusivity where the cascade is exclusive -/

theorem contain_exclusive_single {s : ContainShape} {c1 c2 : ContainClass}
    (h1 : containClassify s = [c1]) (h2 : containClassify s = [c2]) : c1 = c2 := by
  rw [h1] at h2
  exact (List.cons.inj h2).1

private theorem eq_of_mem_singleton {α : Type} [DecidableEq α] {a b : α}
    (h : a ∈ [b]) : a = b := by
  simpa using h

theorem bq_render_exclusive (s : BqRender) {c1 c2 : ContainClass}
    (h1 : c1 ∈ bqRenderBranches s) (h2 : c2 ∈ bqRenderBranches s) : c1 = c2 := by
  cases s <;> exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem div_body_exclusive (b : DivBody) {c1 c2 : ContainClass}
    (h1 : c1 ∈ divBodyBranch b) (h2 : c2 ∈ divBodyBranch b) : c1 = c2 := by
  cases b <;> exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem div_head_exclusive (h : DivHead) {c1 c2 : ContainClass}
    (h1 : c1 ∈ divHeadBranch h) (h2 : c2 ∈ divHeadBranch h) : c1 = c2 := by
  cases h <;> exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem div_render_exclusive (k : DivRenderKind) {c1 c2 : ContainClass}
    (h1 : c1 ∈ divRenderBranches k) (h2 : c2 ∈ divRenderBranches k) : c1 = c2 := by
  cases k <;> exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem co_fold_exclusive (f : CoFold) {c1 c2 : ContainClass}
    (h1 : c1 ∈ coFoldBranch f) (h2 : c2 ∈ coFoldBranch f) : c1 = c2 := by
  cases f <;> exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem co_show_exclusive (l : CoLabel) {c1 c2 : ContainClass}
    (h1 : c1 ∈ coShowBranch l) (h2 : c2 ∈ coShowBranch l) : c1 = c2 := by
  cases l <;> exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem co_hide_exclusive (l : CoLabel) {c1 c2 : ContainClass}
    (h1 : c1 ∈ coHideBranch l) (h2 : c2 ∈ coHideBranch l) : c1 = c2 := by
  cases l <;> exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem co_loc_exclusive (l : CoLoc) {c1 c2 : ContainClass}
    (h1 : c1 ∈ coLocBranch l) (h2 : c2 ∈ coLocBranch l) : c1 = c2 := by
  cases l <;> exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem co_type_exclusive (t : CoType) {c1 c2 : ContainClass}
    (h1 : c1 ∈ coTypeBranch t) (h2 : c2 ∈ coTypeBranch t) : c1 = c2 := by
  cases t <;> exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem tv_title_kind_exclusive (k : TvTitleKind) {c1 c2 : ContainClass}
    (h1 : c1 ∈ tvKindBranch k) (h2 : c2 ∈ tvKindBranch k) : c1 = c2 := by
  cases k <;> exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem tv_title_source_exclusive (s : TvTitleSource) {c1 c2 : ContainClass}
    (h1 : c1 ∈ tvSourceBranch s) (h2 : c2 ∈ tvSourceBranch s) : c1 = c2 := by
  cases s <;> exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem tv_label_exclusive (l : TvLabel) {c1 c2 : ContainClass}
    (h1 : c1 ∈ tvLabelBranch l) (h2 : c2 ∈ tvLabelBranch l) : c1 = c2 := by
  cases l <;> exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem tv_selected_exclusive (it : TvItem) {c1 c2 : ContainClass}
    (h1 : c1 ∈ tvSelectedBranch it) (h2 : c2 ∈ tvSelectedBranch it) : c1 = c2 := by
  cases hsel : it.selected <;>
    simp [tvSelectedBranch, hsel] at h1 h2 <;>
    exact h1.trans h2.symm

/-- The C2 deletion gate is exclusive with a kept run: a deleted run is exactly `bqRunDeleted`, and a kept run never carries that class. This is the live behavior the SPEC2 non-deletion statements contradicted. -/
theorem bq_deleted_only : bqRunBranches .deleted = [.bqRunDeleted] := by
  rfl

theorem bq_kept_excludes_deleted (d sh : Bool) :
    .bqRunDeleted ∉ bqRunBranches (.kept d sh) := by
  cases d <;> cases sh <;> decide

/-- An unmatched `>nospace` line inside a kept run is `bqLineDropped` exactly when the shape says the outer run contained one. The whole run is not deleted. -/
theorem bq_line_dropped_iff (d sh : Bool) :
    (.bqLineDropped ∈ bqRunBranches (.kept d sh)) = d := by
  cases d <;> cases sh <;> decide

theorem bq_kept_always_text (d sh : Bool) :
    .bqText ∈ bqRunBranches (.kept d sh) ∧
    .bqNestStart ∈ bqRunBranches (.kept d sh) ∧
    .bqDrain ∈ bqRunBranches (.kept d sh) := by
  cases d <;> cases sh <;> decide

theorem div_vanished_excludes_ordered :
    .dvAttrOrder ∉ divHeadBranch .vanished ∧ .dvVanished ∉ divHeadBranch .ordered := by
  decide

/-! ## Real render inputs -/

def isContainRenderRule : RenderRuleId → Bool
  | .blockquote | .div | .collapsible | .tabview => true
  | _ => false

def bqRenderOf (opts : OptMap) : BqRender :=
  if proseTypeIs opts (litBytes "start") then .start
  else if proseTypeIs opts (litBytes "end") then .endTok
  else .other

/-- A Div attribute value takes the clear arm only when it carries a placeholder byte (REFCORR8 C-R5-R1-1). The bare `u-` id shell no longer clears; this is the test in `divAttrFragment`. -/
def divValueCleared (k : List Char) (v : OptVal) : Bool :=
  let raw := renderOptValBytes v
  raw.any (fun b => b == 255)

/-- The Div render kind, in the reference's order: a truthy `vanished` bool dominates, then `start` (bare, or clearing if any value clears, or escaped), then `end`, then the fallthrough. The mirror treats only `OptVal.bool true` as the flag, which is the value the parse stores. -/
def divRenderOf (opts : OptMap) : DivRenderKind :=
  if (match omGet opts "vanished".toList with
      | some (OptVal.bool b) => b
      | _ => false) then .vanished
  else if intTypeIs opts (litBytes "start") then
    let pairs := attrPairs opts "args".toList
    if pairs.isEmpty then .startBare
    else if pairs.any (fun kv => divValueCleared kv.1 kv.2) then .startClear
    else .startEsc
  else if intTypeIs opts (litBytes "end") then .endTok
  else .other

def coArgsOf (opts : OptMap) : OptMap :=
  match omGet opts "args".toList with
  | some (.map m) => m
  | _ => []

def coFoldOf (args : OptMap) : CoFold :=
  match optBytesOpt args "folded".toList with
  | some bs => if bs == litBytes "no" || bs == litBytes "false" then .opened else .folded
  | none => .folded

/-- Label default under the mirror's byte test, which agrees with `wikidotLabel`'s strict `=== ''` / `=== '0'` on the strings the parser stores. -/
def coLabelOf (args : OptMap) (key : List Char) : CoLabel :=
  match optBytesOpt args key with
  | none => .default
  | some bs => if bs.isEmpty || bs == [48] then .default else .authored

def coLocOf (args : OptMap) : CoLoc :=
  match optBytesOpt args "hideLocation".toList with
  | some bs =>
      if bs == litBytes "bottom" then .bottom
      else if bs == litBytes "both" then .both
      else .top
  | none => .top

def coTypeOf (opts : OptMap) : CoType :=
  if intTypeIs opts (litBytes "start") then .start
  else if intTypeIs opts (litBytes "end") then .endTok
  else .other

def coRenderOf (opts : OptMap) : CoRenderShape :=
  let args := coArgsOf opts
  ⟨coFoldOf args, coLabelOf args "show".toList, coLabelOf args "hide".toList,
   coLocOf args, coTypeOf opts⟩

def tvTabsOf (opts : OptMap) : List OptVal :=
  match omGet opts "tabs".toList with
  | some (.list xs) => xs
  | _ => []

/-- One tab item, using the same tests as `tabviewTabItem`. -/
def tvItemOf (entry : OptVal) : TvItem :=
  let m : OptMap := match entry with
    | .map mm => mm
    | _ => []
  let selected : Bool := match omGet m "tabId".toList with
    | none => true
    | some (.int n) => n == 0
    | some v => renderOptValBytes v == [48]
  let label : TvLabel := match optBytesOpt m "title".toList with
    | none => .default
    | some bs => if bs.isEmpty then .empty else .text
  ⟨selected, label⟩

def tvRenderOf (opts : OptMap) : TvRender :=
  if intTypeIs opts (litBytes "start") then
    .start ((tvTabsOf opts).map tvItemOf)
  else if intTypeIs opts (litBytes "tabStart") then
    let tabIdBytes := optStrBytes opts "tabId".toList
    if !tabIdBytes.isEmpty && tabIdBytes != [48] then .panelHidden else .panelShown
  else if intTypeIs opts (litBytes "tabEnd") then .panelEnd
  else if intTypeIs opts (litBytes "end") then .endTok
  else .fall

def containShapeOf (r : RenderRuleId) (opts : OptMap) : Option ContainShape :=
  match r with
  | .blockquote => some (.bqRender (bqRenderOf opts))
  | .div => some (.divRender (divRenderOf opts))
  | .collapsible => some (.coRender (coRenderOf opts))
  | .tabview => some (.tvRender (tvRenderOf opts))
  | _ => none

def containClassOf (r : RenderRuleId) (opts : OptMap) : List ContainClass :=
  match containShapeOf r opts with
  | some s => containClassify s
  | none => []

def containMemClass (c : ContainClass) (r : RenderRuleId) (opts : OptMap) : Bool :=
  decide (c ∈ containClassOf r opts)

theorem contain_shapeOf_isSome (r : RenderRuleId) (opts : OptMap)
    (h : isContainRenderRule r = true) : (containShapeOf r opts).isSome = true := by
  cases r <;> simp_all [isContainRenderRule, containShapeOf]

theorem contain_classOf_complete (r : RenderRuleId) (opts : OptMap)
    (h : isContainRenderRule r = true) : ∃ c, c ∈ containClassOf r opts := by
  unfold containClassOf
  cases hshape : containShapeOf r opts with
  | none =>
      have hs : (containShapeOf r opts).isSome = true := contain_shapeOf_isSome r opts h
      rw [hshape] at hs
      exact False.elim (by simp at hs)
  | some s => exact contain_classify_nonempty s

theorem contain_classOf_sound (r : RenderRuleId) (opts : OptMap) {c : ContainClass}
    (h : c ∈ containClassOf r opts) : c ∈ containAllClasses := by
  unfold containClassOf at h
  cases hshape : containShapeOf r opts with
  | none => simp [hshape] at h
  | some s =>
      simp [hshape] at h
      exact contain_classify_sound s h

theorem contain_classOf_exclusive (r : RenderRuleId) (opts : OptMap)
    (c1 c2 : ContainClass) (h1 : containClassOf r opts = [c1])
    (h2 : containClassOf r opts = [c2]) : c1 = c2 := by
  rw [h1] at h2
  exact (List.cons.inj h2).1

theorem contain_memClass_complete (r : RenderRuleId) (opts : OptMap)
    (h : isContainRenderRule r = true) : ∃ c, containMemClass c r opts = true := by
  obtain ⟨c, hc⟩ := contain_classOf_complete r opts h
  refine ⟨c, ?_⟩
  simp [containMemClass, hc]

theorem contain_memClass_sound (c : ContainClass) (r : RenderRuleId) (opts : OptMap)
    (h : containMemClass c r opts = true) : c ∈ containAllClasses := by
  simp [containMemClass] at h
  exact contain_classOf_sound r opts h

/-! ## Named non-classes and mirror correspondence

The `[[blockquote]]` block form is not a Blockquote match: the outer pattern demands a `>` after a newline. The level option is stored and never read. A Tabview start stores `args.class` and the renderer does not branch on it; the class decision is the parse class `tvClassKept` / `tvClassDropped`, and the doubled attribute text is `tvAttrEcho`. -/

/-- The block form is outside the quote-run pattern (battery `bq18-block-basic`). -/
theorem bq_block_form_unmatched :
    blockquoteMatchAt (litBytes "\n[[blockquote]]\ntext\n[[/blockquote]]\n") = none := rfl

/-- C2 deletion of a `>nospace` run: two newlines, no tokens (live `muse-probe-suspect-block-bq-nospace-only`, `muse-probe-agy-suspect-p32-bq-lone-nospace`). -/
theorem cov_bq_nospace_deleted :
    blockquoteProcess (litBytes ">nospace\n") [] = ([10, 10], []) := rfl

/-- A bare `>` line is the same deletion (SPEC2 capture `bq-lone-gt`). -/
theorem cov_bq_lone_gt_deleted :
    blockquoteProcess (litBytes ">\n") [] = ([10, 10], []) := rfl

/-- An empty payload `> ` is the same deletion (SPEC2 `bq-sib-empty-gt-space`, battery `bq05-marker-space`). -/
theorem cov_bq_empty_payload_deleted :
    blockquoteProcess (litBytes "> \n") [] = ([10, 10], []) := rfl

theorem cov_bq_render_start :
    renderBlockquote [("type".toList, OptVal.bytes [115, 116, 97, 114, 116]),
      ("level".toList, OptVal.int 2)] = litBytes "<blockquote>" := rfl

theorem cov_bq_render_end :
    renderBlockquote [("type".toList, OptVal.bytes [101, 110, 100]),
      ("level".toList, OptVal.int 0)] = litBytes "</blockquote>\n" := rfl

theorem cov_bq_render_fall :
    renderBlockquote [("type".toList, OptVal.bytes [110, 111])] = [] := rfl

/-- R2-BLOCK C1: the level is not part of the rendered bytes. -/
theorem cov_bq_level_unread :
    renderBlockquote [("type".toList, OptVal.bytes [115, 116, 97, 114, 116]),
      ("level".toList, OptVal.int 0)] =
    renderBlockquote [("type".toList, OptVal.bytes [115, 116, 97, 114, 116]),
      ("level".toList, OptVal.int 4)] := rfl

theorem cov_div_vanished_start :
    renderDiv [("vanished".toList, OptVal.bool true),
      ("type".toList, OptVal.bytes [115, 116, 97, 114, 116])] = [] := rfl

theorem cov_div_vanished_end :
    renderDiv [("vanished".toList, OptVal.bool true),
      ("type".toList, OptVal.bytes [101, 110, 100])] = [] := rfl

theorem cov_div_bare :
    renderDiv [("type".toList, OptVal.bytes [115, 116, 97, 114, 116])] =
      litBytes "<div>" := rfl

/-- C-STAGE2-1 emission order, as stored by the parse and emitted by the renderer (probes `muse-probe-refcorr2-diva-a1` through `a8`). -/
theorem cov_div_attr_order :
    renderDiv [("type".toList, OptVal.bytes [115, 116, 97, 114, 116]),
      ("args".toList, OptVal.map [
        ("id".toList, OptVal.bytes [117, 45, 98]),
        ("class".toList, OptVal.bytes [97])])] =
      litBytes "<div id=\"u-b\" class=\"a\">" := rfl

/-- REFCORR4 Batch C over-generalised to a whitespace-only authored id; REFCORR8 C-R5-R1-1 flips this pin to the live bytes, where isolateId's bare `u-` shell is emitted verbatim and the key is kept. Captured live html sha256 f1ad87bc749dd882348960ce72a4772667b35d3ca82f7d0177cab58395320736. -/
theorem cov_div_id_shell_live :
    renderDiv [("type".toList, OptVal.bytes [115, 116, 97, 114, 116]),
      ("args".toList, OptVal.map [("id".toList, OptVal.bytes [117, 45])])] =
      litBytes "<div id=\"u-\">" := rfl

theorem cov_div_end :
    renderDiv [("type".toList, OptVal.bytes [101, 110, 100])] =
      litBytes "</div>" := rfl

/-- A collapsible end at the default top location emits the three closers and not the hide block. -/
theorem cov_co_end_top :
    renderCollapsible [("type".toList, OptVal.bytes [101, 110, 100])] =
      litBytes "</div></div></div>" := rfl

theorem cov_tv_panel_shown :
    renderTabview [("type".toList, OptVal.bytes [116, 97, 98, 83, 116, 97, 114, 116]),
      ("tabviewId".toList, OptVal.int 0),
      ("tabId".toList, OptVal.int 0)] =
      litBytes "<div id=\"wiki-tab-0-0\">" := rfl

theorem cov_tv_panel_hidden :
    renderTabview [("type".toList, OptVal.bytes [116, 97, 98, 83, 116, 97, 114, 116]),
      ("tabviewId".toList, OptVal.int 0),
      ("tabId".toList, OptVal.int 1)] =
      litBytes "<div id=\"wiki-tab-0-1\" style=\"display:none\">" := rfl

theorem cov_tv_panel_end :
    renderTabview [("type".toList, OptVal.bytes [116, 97, 98, 69, 110, 100])] =
      litBytes "</div>" := rfl

end LeanFtml
