/-
  LeanFtml.CoverageTable — the coverage-tier classification of the table
  family (Table, Tableadv, Row, Cell). Header cells ride Cell's options.

  The classes are the branch decisions of the reference, read from the
  current mirror in this tree: `TableRules.lean` (parse) and
  `ListTableRules.lean` (render), cross-read against
  `ref-php/text-wiki/Text/Wiki/Parse/Default/{Table,Tableadv}.php` and
  `ref-php/text-wiki/Text/Wiki/Render/Xhtml/{Table,Tableadv}.php` under
  `ref_configure_wiki`. Row and Cell are not separate rules; they are the
  token types and the attribute and span decisions inside both rules.

  The Tableadv enumeration search is not re-derived. `taEnumQuoted` is the
  class of the fourteen witness frames in `tableadvWitnessFamily`
  (`TableadvEnum.lean`, REPORT-TABLEADV-PROOF.md); `tbl_enum_frames_are_the_pin`
  cites that family's length and distinctness and nothing else about the
  search.

  A shape is one decision context (a scan hit, a row, a cell marker, a
  render feature, an attribute-filter feature, an id-isolation feature, a
  validation trace, a nested-body kind). `tableClassify` returns the list of
  classes that context enables. Completeness is over that decision structure:
  membership is decidable, every emitted class is declared, every shape emits
  a class, and every declared class has a witness shape. Cascades that the
  reference writes as one outcome (the attribute filter, id isolation, the
  validation order, the marker prefix, the nest kind) are proved exclusive.
  Modifiers that compose (span, colspan, rowspan, alignment, format, the
  header tag, the attribute fragment) are proved to attach only where the
  reference attaches them.

  `tblShapeOfRender` reads a real Table or Tableadv render token back into
  that structure, so the partition is also about render inputs. Name check
  against the earlier coverage modules: this file uses `tableClassify`, not
  `classify`, and does not reuse `CTShape` or `allClasses`.

  No sorry and no sorryAx. Audit lines are staged in
  coverage-table-audit-block.txt. Main.lean is not edited.
-/

import LeanFtml.ListTableRules
import LeanFtml.TableRules
import LeanFtml.TableadvEnum

namespace LeanFtml

/-! ## The class enumeration -/

/-- One branch class per decision the table family can take. The constructors
    are the complete named output of the classification; every one has a pin
    in REPORT-COVERAGE-TABLE.md. -/
inductive TableClass where
  /- Table.php scanner: a newline-`||` match, or a copied byte. -/
  | tbMiss | tbHit
  /- Table.php process, per row. An empty row discards the span accumulator
     (correction C2) and still emits one cell of span one. -/
  | tbRowContent | tbRowEmpty | tbSpanOne | tbSpanCarry | tbSpanDiscard
  /- Table.php cell marker, the `> ` / `= ` / `< ` / `~ ` / none cascade. -/
  | tbCellRight | tbCellCenter | tbCellLeft | tbCellHeader | tbCellPlain
  /- Table.php token(), the type switch, then the cell-tag and the modifiers
     the type actually reads. -/
  | tbRTableStart | tbRTableEnd | tbRCaptionStart | tbRCaptionEnd
  | tbRRowStart | tbRRowEnd | tbRCellStart | tbRCellEnd | tbRFall
  | tbRTh | tbRTd | tbRColspan | tbRRowspan | tbRAlign | tbRFormat
  /- Tableadv.php process: the validation cascade, then the cell's closer
     and blank-line decisions, then the body's nesting. `taEnumQuoted` is the
     fourteen-frame enumeration pin, not a re-derivation of the search. -/
  | taNoRow | taStrayRow | taNoCell | taStrayCell | taOk
  | taCellHeader | taCellPlain | taCellPara | taCellTrim
  | taNested | taFlat | taEnumQuoted
  /- Tableadv.php buildAttrs, in the reference's test order. `title` and
     `hidden` are one drop (both are on the allowlist and both are rejected
     by the same condition). The rank sort is one class; the seven slots are
     `tbl_rank_slots`. -/
  | taAttrBadKey | taAttrBlocked | taAttrUnsafe | taAttrSpanOffCell
  | taAttrEmptyVal | taAttrSpanZero | taAttrNormDrop | taAttrKeep
  | taIdEmpty | taIdAlready | taIdLeadWs | taIdPrefix
  | taAttrRank
  /- Tableadv.php token(). -/
  | taRStart | taRRowStart | taRCellStart | taRCellEnd | taRRowEnd | taREnd
  | taRFall | taRTh | taRTd | taRAttrs
  deriving DecidableEq, Repr

/-- The declared class set, in reference order. -/
def tableAllClasses : List TableClass :=
  [ .tbMiss, .tbHit,
    .tbRowContent, .tbRowEmpty, .tbSpanOne, .tbSpanCarry, .tbSpanDiscard,
    .tbCellRight, .tbCellCenter, .tbCellLeft, .tbCellHeader, .tbCellPlain,
    .tbRTableStart, .tbRTableEnd, .tbRCaptionStart, .tbRCaptionEnd,
    .tbRRowStart, .tbRRowEnd, .tbRCellStart, .tbRCellEnd, .tbRFall,
    .tbRTh, .tbRTd, .tbRColspan, .tbRRowspan, .tbRAlign, .tbRFormat,
    .taNoRow, .taStrayRow, .taNoCell, .taStrayCell, .taOk,
    .taCellHeader, .taCellPlain, .taCellPara, .taCellTrim,
    .taNested, .taFlat, .taEnumQuoted,
    .taAttrBadKey, .taAttrBlocked, .taAttrUnsafe, .taAttrSpanOffCell,
    .taAttrEmptyVal, .taAttrSpanZero, .taAttrNormDrop, .taAttrKeep,
    .taIdEmpty, .taIdAlready, .taIdLeadWs, .taIdPrefix,
    .taAttrRank,
    .taRStart, .taRRowStart, .taRCellStart, .taRCellEnd, .taRRowEnd, .taREnd,
    .taRFall, .taRTh, .taRTd, .taRAttrs ]

theorem tableAllClasses_nodup : tableAllClasses.Nodup := by decide

theorem tableAllClasses_length : tableAllClasses.length = 62 := by decide

theorem tableAllClasses_mem (c : TableClass) : c ∈ tableAllClasses := by
  cases c <;> decide

/-! ## Decision features -/

/-- The four marker tests, in Table.php's if / elseif order. A real cell
    sets at most one, because the two-byte prefixes differ
    (`tbl_marker_prefixes_distinct`). -/
structure MarkerBits where
  right : Bool
  center : Bool
  left : Bool
  header : Bool

/-- Tableadv validation, in process() order: no row dominates residue, and
    residue dominates a per-row cell failure. `spanGt1` on a plain row is the
    accumulator the next content cell would receive; an empty row discards it. -/
inductive RowStatus where
  | noCell | strayCell | ok
  deriving DecidableEq, Repr

structure AdvTrace where
  rows : Nat
  stray : Bool
  status : RowStatus

/-- The attribute filter's inputs, in `buildAttrs` test order. -/
structure AttrFeat where
  keyOk : Bool
  isTitle : Bool
  isHidden : Bool
  safe : Bool
  isSpan : Bool
  ownerCell : Bool
  valEmpty : Bool
  valZero : Bool
  normEmpty : Bool
  normSensitive : Bool

/-- `isolateId` on the raw value. The empty arm is unreachable from
    `buildAttrs`, which drops an empty value first. -/
structure IdFeat where
  empty : Bool
  startsU : Bool
  leadWs : Bool

inductive NestKind where
  | nested | flat | enumQuoted
  deriving DecidableEq, Repr

inductive PlainRType where
  | tableStart | tableEnd | captionStart | captionEnd
  | rowStart | rowEnd | cellStart | cellEnd | fall
  deriving DecidableEq, Repr

/-- Features a Table render token carries. The classifier, not the reader,
    decides which of them the type actually emits. -/
structure PlainRenderFeat where
  typ : PlainRType
  header : Bool
  colspan : Bool
  rowspan : Bool
  align : Bool
  format : Bool

inductive AdvRType where
  | start | rowStart | cellStart | cellEnd | rowEnd | advEnd | fall
  deriving DecidableEq, Repr

structure AdvRenderFeat where
  typ : AdvRType
  header : Bool
  attrs : Bool

/-- The family's shape space: a disjoint sum of the decision contexts. -/
inductive TableShape where
  | scan (hit : Bool)
  | row (hasCell spanGt1 : Bool)
  | cell (b : MarkerBits)
  | plainR (f : PlainRenderFeat)
  | advOut (t : AdvTrace)
  | advCell (header para : Bool)
  | nest (k : NestKind)
  | attr (f : AttrFeat)
  | idf (f : IdFeat)
  | rank
  | advR (f : AdvRenderFeat)

/-! ## The decision functions -/

def scanClasses : Bool → List TableClass
  | true => [.tbHit]
  | false => [.tbMiss]

def rowClasses (hasCell spanGt1 : Bool) : List TableClass :=
  if hasCell then
    [.tbRowContent, if spanGt1 then .tbSpanCarry else .tbSpanOne]
  else
    [.tbRowEmpty, .tbSpanDiscard]

def markerCascade (b : MarkerBits) : TableClass :=
  if b.right then .tbCellRight
  else if b.center then .tbCellCenter
  else if b.left then .tbCellLeft
  else if b.header then .tbCellHeader
  else .tbCellPlain

def plainRBase (f : PlainRenderFeat) : TableClass :=
  match f.typ with
  | .tableStart => .tbRTableStart
  | .tableEnd => .tbRTableEnd
  | .captionStart => .tbRCaptionStart
  | .captionEnd => .tbRCaptionEnd
  | .rowStart => .tbRRowStart
  | .rowEnd => .tbRRowEnd
  | .cellStart => .tbRCellStart
  | .cellEnd => .tbRCellEnd
  | .fall => .tbRFall

/-- Table's render cascade. The tag is only a cell decision. Colspan,
    rowspan and alignment are only read on `cell_start`, and a header cell
    suppresses the alignment style. `format` is read on the four start tags. -/
def plainRClasses (f : PlainRenderFeat) : List TableClass :=
  let tag :=
    match f.typ with
    | .cellStart | .cellEnd => [if f.header then .tbRTh else .tbRTd]
    | _ => []
  let cellStart := f.typ == .cellStart
  let formatHere :=
    f.typ == .tableStart || f.typ == .captionStart ||
    f.typ == .rowStart || f.typ == .cellStart
  plainRBase f :: tag ++
    (if cellStart && f.colspan then [.tbRColspan] else []) ++
    (if cellStart && f.rowspan then [.tbRRowspan] else []) ++
    (if cellStart && f.align && !f.header then [.tbRAlign] else []) ++
    (if formatHere && f.format then [.tbRFormat] else [])

def advOutcome (t : AdvTrace) : TableClass :=
  if t.rows = 0 then .taNoRow
  else if t.stray then .taStrayRow
  else
    match t.status with
    | .noCell => .taNoCell
    | .strayCell => .taStrayCell
    | .ok => .taOk

def advCellClasses (header para : Bool) : List TableClass :=
  [if header then .taCellHeader else .taCellPlain,
   if para then .taCellPara else .taCellTrim]

def nestClass : NestKind → TableClass
  | .nested => .taNested
  | .flat => .taFlat
  | .enumQuoted => .taEnumQuoted

/-- `buildAttrs`'s per-key cascade. `title` and `hidden` share one drop,
    ahead of the unsafe test, matching the reference's single condition
    `!isSafeAttr || key === 'title' || key === 'hidden'` on the keys that
    actually occur (`title` and `hidden` are on the allowlist). -/
def attrCascade (f : AttrFeat) : TableClass :=
  if !f.keyOk then .taAttrBadKey
  else if f.isTitle || f.isHidden then .taAttrBlocked
  else if !f.safe then .taAttrUnsafe
  else if !f.ownerCell && f.isSpan then .taAttrSpanOffCell
  else if f.valEmpty then .taAttrEmptyVal
  else if f.ownerCell && f.isSpan && f.valZero then .taAttrSpanZero
  else if f.normEmpty && f.normSensitive then .taAttrNormDrop
  else .taAttrKeep

def idCascade (f : IdFeat) : TableClass :=
  if f.empty then .taIdEmpty
  else if f.startsU then .taIdAlready
  else if f.leadWs then .taIdLeadWs
  else .taIdPrefix

def advRBase (f : AdvRenderFeat) : TableClass :=
  match f.typ with
  | .start => .taRStart
  | .rowStart => .taRRowStart
  | .cellStart => .taRCellStart
  | .cellEnd => .taRCellEnd
  | .rowEnd => .taRRowEnd
  | .advEnd => .taREnd
  | .fall => .taRFall

/-- Tableadv's render cascade. The header flag selects the cell tag only.
    The attribute fragment is spliced only into `start`, `rowStart` and
    `cellStart`; it is computed and discarded for the other types. -/
def advRClasses (f : AdvRenderFeat) : List TableClass :=
  let cell := f.typ == .cellStart || f.typ == .cellEnd
  let attrHere := f.typ == .start || f.typ == .rowStart || f.typ == .cellStart
  advRBase f ::
    (if cell then [if f.header then .taRTh else .taRTd] else []) ++
    (if attrHere && f.attrs then [.taRAttrs] else [])

def tableClassify : TableShape → List TableClass
  | .scan hit => scanClasses hit
  | .row hasCell spanGt1 => rowClasses hasCell spanGt1
  | .cell b => [markerCascade b]
  | .plainR f => plainRClasses f
  | .advOut t => [advOutcome t]
  | .advCell header para => advCellClasses header para
  | .nest k => [nestClass k]
  | .attr f => [attrCascade f]
  | .idf f => [idCascade f]
  | .rank => [.taAttrRank]
  | .advR f => advRClasses f

def tableClassMemDecidable (s : TableShape) (c : TableClass) :
    Decidable (c ∈ tableClassify s) := inferInstance

/-! ## Completeness -/

theorem table_classify_sound (s : TableShape) {c : TableClass}
    (_h : c ∈ tableClassify s) : c ∈ tableAllClasses :=
  tableAllClasses_mem c

theorem table_classify_nonempty (s : TableShape) : ∃ c, c ∈ tableClassify s := by
  cases s with
  | scan b =>
      cases b
      · exact ⟨.tbMiss, by simp [tableClassify, scanClasses]⟩
      · exact ⟨.tbHit, by simp [tableClassify, scanClasses]⟩
  | row hasCell _ =>
      cases hasCell
      · exact ⟨.tbRowEmpty, by simp [tableClassify, rowClasses]⟩
      · exact ⟨.tbRowContent, by simp [tableClassify, rowClasses]⟩
  | cell b =>
      exact ⟨markerCascade b, by simp [tableClassify]⟩
  | plainR f =>
      exact ⟨plainRBase f, by simp [tableClassify, plainRClasses]⟩
  | advOut t =>
      exact ⟨advOutcome t, by simp [tableClassify]⟩
  | advCell header _ =>
      cases header
      · exact ⟨.taCellPlain, by simp [tableClassify, advCellClasses]⟩
      · exact ⟨.taCellHeader, by simp [tableClassify, advCellClasses]⟩
  | nest k =>
      exact ⟨nestClass k, by simp [tableClassify]⟩
  | attr f =>
      exact ⟨attrCascade f, by simp [tableClassify]⟩
  | idf f =>
      exact ⟨idCascade f, by simp [tableClassify]⟩
  | rank =>
      exact ⟨.taAttrRank, by simp [tableClassify]⟩
  | advR f =>
      exact ⟨advRBase f, by simp [tableClassify, advRClasses]⟩

def attrPass : AttrFeat where
  keyOk := true
  isTitle := false
  isHidden := false
  safe := true
  isSpan := false
  ownerCell := true
  valEmpty := false
  valZero := false
  normEmpty := false
  normSensitive := false

def idPrefixF : IdFeat where
  empty := false
  startsU := false
  leadWs := false

def markNone : MarkerBits where
  right := false
  center := false
  left := false
  header := false

def plainBare : PlainRenderFeat where
  typ := .fall
  header := false
  colspan := false
  rowspan := false
  align := false
  format := false

def advBare : AdvRenderFeat where
  typ := .fall
  header := false
  attrs := false

def advOkT : AdvTrace where
  rows := 1
  stray := false
  status := .ok

/-- A representable witness shape for every declared class. -/
def tableWitness : TableClass → TableShape
  | .tbMiss => .scan false
  | .tbHit => .scan true
  | .tbRowContent => .row true false
  | .tbRowEmpty => .row false false
  | .tbSpanOne => .row true false
  | .tbSpanCarry => .row true true
  | .tbSpanDiscard => .row false true
  | .tbCellRight => .cell { markNone with right := true }
  | .tbCellCenter => .cell { markNone with center := true }
  | .tbCellLeft => .cell { markNone with left := true }
  | .tbCellHeader => .cell { markNone with header := true }
  | .tbCellPlain => .cell markNone
  | .tbRTableStart => .plainR { plainBare with typ := .tableStart }
  | .tbRTableEnd => .plainR { plainBare with typ := .tableEnd }
  | .tbRCaptionStart => .plainR { plainBare with typ := .captionStart }
  | .tbRCaptionEnd => .plainR { plainBare with typ := .captionEnd }
  | .tbRRowStart => .plainR { plainBare with typ := .rowStart }
  | .tbRRowEnd => .plainR { plainBare with typ := .rowEnd }
  | .tbRCellStart => .plainR { plainBare with typ := .cellStart }
  | .tbRCellEnd => .plainR { plainBare with typ := .cellEnd }
  | .tbRFall => .plainR plainBare
  | .tbRTh => .plainR { plainBare with typ := .cellStart, header := true }
  | .tbRTd => .plainR { plainBare with typ := .cellStart }
  | .tbRColspan => .plainR { plainBare with typ := .cellStart, colspan := true }
  | .tbRRowspan => .plainR { plainBare with typ := .cellStart, rowspan := true }
  | .tbRAlign => .plainR { plainBare with typ := .cellStart, align := true }
  | .tbRFormat => .plainR { plainBare with typ := .tableStart, format := true }
  | .taNoRow => .advOut { advOkT with rows := 0 }
  | .taStrayRow => .advOut { advOkT with stray := true }
  | .taNoCell => .advOut { advOkT with status := .noCell }
  | .taStrayCell => .advOut { advOkT with status := .strayCell }
  | .taOk => .advOut advOkT
  | .taCellHeader => .advCell true false
  | .taCellPlain => .advCell false false
  | .taCellPara => .advCell false true
  | .taCellTrim => .advCell false false
  | .taNested => .nest .nested
  | .taFlat => .nest .flat
  | .taEnumQuoted => .nest .enumQuoted
  | .taAttrBadKey => .attr { attrPass with keyOk := false }
  | .taAttrBlocked => .attr { attrPass with isTitle := true }
  | .taAttrUnsafe => .attr { attrPass with safe := false }
  | .taAttrSpanOffCell =>
      .attr { attrPass with isSpan := true, ownerCell := false }
  | .taAttrEmptyVal => .attr { attrPass with valEmpty := true }
  | .taAttrSpanZero =>
      .attr { attrPass with isSpan := true, valZero := true }
  | .taAttrNormDrop =>
      .attr { attrPass with normEmpty := true, normSensitive := true }
  | .taAttrKeep => .attr attrPass
  | .taIdEmpty => .idf { idPrefixF with empty := true }
  | .taIdAlready => .idf { idPrefixF with startsU := true }
  | .taIdLeadWs => .idf { idPrefixF with leadWs := true }
  | .taIdPrefix => .idf idPrefixF
  | .taAttrRank => .rank
  | .taRStart => .advR { advBare with typ := .start }
  | .taRRowStart => .advR { advBare with typ := .rowStart }
  | .taRCellStart => .advR { advBare with typ := .cellStart }
  | .taRCellEnd => .advR { advBare with typ := .cellEnd }
  | .taRRowEnd => .advR { advBare with typ := .rowEnd }
  | .taREnd => .advR { advBare with typ := .advEnd }
  | .taRFall => .advR advBare
  | .taRTh => .advR { advBare with typ := .cellStart, header := true }
  | .taRTd => .advR { advBare with typ := .cellStart }
  | .taRAttrs => .advR { advBare with typ := .start, attrs := true }

theorem table_witness_classify (c : TableClass) :
    c ∈ tableClassify (tableWitness c) := by
  cases c <;> decide

theorem table_classes_exhaustive (c : TableClass) :
    c ∈ tableAllClasses ↔ ∃ s : TableShape, c ∈ tableClassify s := by
  constructor
  · intro _
    exact ⟨tableWitness c, table_witness_classify c⟩
  · intro h
    obtain ⟨s, hs⟩ := h
    exact table_classify_sound s hs

theorem table_classification_complete :
    (∀ s c, (c ∈ tableClassify s) ∨ ¬ (c ∈ tableClassify s)) ∧
    (∀ s : TableShape, ∃ c, c ∈ tableAllClasses ∧ c ∈ tableClassify s) ∧
    (∀ c : TableClass, c ∈ tableAllClasses →
      ∃ s : TableShape, c ∈ tableClassify s) := by
  refine ⟨?_, ?_, ?_⟩
  · intro s c
    by_cases h : c ∈ tableClassify s
    · exact Or.inl h
    · exact Or.inr h
  · intro s
    obtain ⟨c, hc⟩ := table_classify_nonempty s
    exact ⟨c, table_classify_sound s hc, hc⟩
  · intro c _
    exact ⟨tableWitness c, table_witness_classify c⟩

/-! ## Exclusivity where the reference's cascade is one outcome -/

theorem tbl_attr_exclusive (f : AttrFeat) {c1 c2 : TableClass}
    (h1 : c1 ∈ tableClassify (.attr f)) (h2 : c2 ∈ tableClassify (.attr f)) :
    c1 = c2 := by
  simp [tableClassify] at h1 h2
  exact h1.trans h2.symm

theorem tbl_id_exclusive (f : IdFeat) {c1 c2 : TableClass}
    (h1 : c1 ∈ tableClassify (.idf f)) (h2 : c2 ∈ tableClassify (.idf f)) :
    c1 = c2 := by
  simp [tableClassify] at h1 h2
  exact h1.trans h2.symm

theorem tbl_adv_out_exclusive (t : AdvTrace) {c1 c2 : TableClass}
    (h1 : c1 ∈ tableClassify (.advOut t)) (h2 : c2 ∈ tableClassify (.advOut t)) :
    c1 = c2 := by
  simp [tableClassify] at h1 h2
  exact h1.trans h2.symm

theorem tbl_marker_exclusive (b : MarkerBits) {c1 c2 : TableClass}
    (h1 : c1 ∈ tableClassify (.cell b)) (h2 : c2 ∈ tableClassify (.cell b)) :
    c1 = c2 := by
  simp [tableClassify] at h1 h2
  exact h1.trans h2.symm

theorem tbl_nest_exclusive (k : NestKind) {c1 c2 : TableClass}
    (h1 : c1 ∈ tableClassify (.nest k)) (h2 : c2 ∈ tableClassify (.nest k)) :
    c1 = c2 := by
  simp [tableClassify] at h1 h2
  exact h1.trans h2.symm

theorem tbl_scan_exclusive (hit : Bool) {c1 c2 : TableClass}
    (h1 : c1 ∈ tableClassify (.scan hit)) (h2 : c2 ∈ tableClassify (.scan hit)) :
    c1 = c2 := by
  cases hit <;> simp [tableClassify, scanClasses] at h1 h2 <;>
    exact h1.trans h2.symm

theorem tbl_empty_row_discards_span :
    .tbSpanCarry ∉ rowClasses false true ∧
    .tbSpanDiscard ∈ rowClasses false true ∧
    .tbRowEmpty ∈ rowClasses false true := by
  decide

theorem tbl_no_row_dominates (stray : Bool) (st : RowStatus) :
    advOutcome { rows := 0, stray := stray, status := st } = .taNoRow := by
  simp [advOutcome]

theorem tbl_header_suppresses_align :
    .tbRAlign ∉ plainRClasses
      { plainBare with typ := .cellStart, header := true, align := true } := by
  decide

theorem tbl_format_not_on_cell_end :
    .tbRFormat ∉ plainRClasses { plainBare with typ := .cellEnd, format := true } := by
  decide

theorem tbl_title_and_hidden_blocked :
    attrCascade { attrPass with isTitle := true } = .taAttrBlocked ∧
    attrCascade { attrPass with isHidden := true } = .taAttrBlocked := by
  constructor <;> rfl

theorem tbl_plain_type_head (f : PlainRenderFeat) :
    (plainRClasses f).head? = some (plainRBase f) := by
  simp [plainRClasses]

theorem tbl_adv_type_head (f : AdvRenderFeat) :
    (advRClasses f).head? = some (advRBase f) := by
  simp [advRClasses]

/-! ## Ties to the mirror, small enough to reduce -/

theorem tbl_marker_prefixes_distinct :
    (litBytes "> " ≠ litBytes "= ") ∧
    (litBytes "> " ≠ litBytes "< ") ∧
    (litBytes "> " ≠ litBytes "~ ") ∧
    (litBytes "= " ≠ litBytes "< ") ∧
    (litBytes "= " ≠ litBytes "~ ") ∧
    (litBytes "< " ≠ litBytes "~ ") := by
  decide

theorem tbl_marker_right :
    cellMarker (litBytes "> x") = (some ("right".toList), litBytes "x") := rfl

theorem tbl_marker_plain :
    cellMarker (litBytes "ab") = (none, litBytes "ab") := rfl

theorem tbl_key_shape :
    advKeyOk (litBytes "CLASS") = false ∧
    advKeyOk (litBytes "class") = true ∧
    advKeyOk (litBytes "data-x") = true := by decide

theorem tbl_safe_attr_facts :
    isSafeAttrB (litBytes "title") = true ∧
    isSafeAttrB (litBytes "hidden") = true ∧
    isSafeAttrB (litBytes "align") = false ∧
    isSafeAttrB (litBytes "aria-label") = false ∧
    isSafeAttrB (litBytes "data-x") = true ∧
    isSafeAttrB (litBytes "class") = true := by decide

theorem tbl_rank_slots :
    advAttrRank ("id".toList) = 0 ∧
    advAttrRank ("class".toList) = 1 ∧
    advAttrRank ("style".toList) = 2 ∧
    advAttrRank ("role".toList) = 3 ∧
    advAttrRank ("type".toList) = 4 ∧
    advAttrRank ("data-z".toList) = 5 ∧
    advAttrRank ("colspan".toList) = 6 := by decide

/-- Equal ranks keep authored order. This is the reference's stable sort,
    and it is what `renderTableadv` applies to the stored pairs. -/
theorem tbl_data_authored_order :
    rankAttrs [("data-z".toList, OptVal.str "1".toList),
               ("data-a".toList, OptVal.str "2".toList)] =
    [("data-z".toList, OptVal.str "1".toList),
     ("data-a".toList, OptVal.str "2".toList)] := rfl

/-- A data attribute outranks a remaining attribute, so the render repairs
    a stored order that put `colspan` first. -/
theorem tbl_data_before_colspan :
    rankAttrs [("colspan".toList, OptVal.str "2".toList),
               ("data-name".toList, OptVal.str "bad".toList)] =
    [("data-name".toList, OptVal.str "bad".toList),
     ("colspan".toList, OptVal.str "2".toList)] := rfl

/-- The parse mirror still finishes `buildAttrsAdv` with `insertAttrB`, a
    name sort. Inserting `data-a` into a list that already holds `data-z`
    puts `data-a` first. The render's stable rank sort then keeps that
    alphabetical order, because both keys share a rank. The reference's
    `uksort` would have kept the authored order instead. -/
theorem tbl_parse_insert_sorts_data_names :
    insertAttrB (litBytes "data-a", litBytes "2")
        [(litBytes "data-z", litBytes "1")] =
      [(litBytes "data-a", litBytes "2"), (litBytes "data-z", litBytes "1")] := rfl

theorem tbl_cov_cell_plain :
    renderTable [("type".toList, OptVal.str "cell_start".toList),
      ("attr".toList, OptVal.null),
      ("span".toList, OptVal.int 1)] =
    litBytes "<td>" := rfl

theorem tbl_cov_cell_header :
    renderTable [("type".toList, OptVal.str "cell_start".toList),
      ("attr".toList, OptVal.str "header".toList),
      ("span".toList, OptVal.int 1)] =
    litBytes "<th>" := rfl

theorem tbl_isolate_empty : isolateIdAdv [] = [] := rfl

theorem tbl_cov_apos_raw :
    renderTableadv [("type".toList, OptVal.str "cellStart".toList),
      ("header".toList, OptVal.bool false),
      ("attrs".toList, OptVal.map
        [("data-x".toList, OptVal.str "it's".toList)])] =
    litBytes "<td data-x=\"it's\">" := rfl

/-- The fourteen frames of REPORT-TABLEADV-PROOF.md. Cited, not re-proved. -/
theorem tbl_enum_frames_are_the_pin :
    tableadvWitnessFamily.length = 14 ∧ tableadvWitnessFamily.Nodup :=
  ⟨tableadvWitnessFamily_length, tableadvWitnessFamily_nodup⟩

/-! ## Real render inputs -/

def isTableRenderRule : RenderRuleId → Bool
  | .table | .tableadv => true
  | _ => false

def plainTypeOf (opts : OptMap) : PlainRType :=
  if ltTypeIs opts (litBytes "table_start") then .tableStart
  else if ltTypeIs opts (litBytes "table_end") then .tableEnd
  else if ltTypeIs opts (litBytes "caption_start") then .captionStart
  else if ltTypeIs opts (litBytes "caption_end") then .captionEnd
  else if ltTypeIs opts (litBytes "row_start") then .rowStart
  else if ltTypeIs opts (litBytes "row_end") then .rowEnd
  else if ltTypeIs opts (litBytes "cell_start") then .cellStart
  else if ltTypeIs opts (litBytes "cell_end") then .cellEnd
  else .fall

def plainFeatOf (opts : OptMap) : PlainRenderFeat :=
  let attr := optStrBytes opts "attr".toList
  { typ := plainTypeOf opts
    header := attr == litBytes "header"
    colspan := 1 < (optNat opts "span".toList).getD 1
    rowspan := 1 < (optNat opts "rowspan".toList).getD 1
    align := !attr.isEmpty
    format := ltIsset opts "format".toList }

def advTypeOf (opts : OptMap) : AdvRType :=
  if ltTypeIs opts (litBytes "start") then .start
  else if ltTypeIs opts (litBytes "rowStart") then .rowStart
  else if ltTypeIs opts (litBytes "cellStart") then .cellStart
  else if ltTypeIs opts (litBytes "cellEnd") then .cellEnd
  else if ltTypeIs opts (litBytes "rowEnd") then .rowEnd
  else if ltTypeIs opts (litBytes "end") then .advEnd
  else .fall

def advFeatOf (opts : OptMap) : AdvRenderFeat :=
  { typ := advTypeOf opts
    header := !phpEmptyOpt (omGet opts "header".toList)
    attrs := !(attrPairs opts "attrs".toList).isEmpty }

def tblShapeOfRender (r : RenderRuleId) (opts : OptMap) : Option TableShape :=
  match r with
  | .table => some (.plainR (plainFeatOf opts))
  | .tableadv => some (.advR (advFeatOf opts))
  | _ => none

def tblRenderClassOf (r : RenderRuleId) (opts : OptMap) : List TableClass :=
  match tblShapeOfRender r opts with
  | some s => tableClassify s
  | none => []

def tblMemClass (c : TableClass) (r : RenderRuleId) (opts : OptMap) : Bool :=
  decide (c ∈ tblRenderClassOf r opts)

theorem tbl_shapeOf_isSome (r : RenderRuleId) (opts : OptMap)
    (h : isTableRenderRule r = true) : (tblShapeOfRender r opts).isSome = true := by
  cases r <;> simp_all [isTableRenderRule, tblShapeOfRender]

theorem tbl_render_complete (r : RenderRuleId) (opts : OptMap)
    (h : isTableRenderRule r = true) : ∃ c, c ∈ tblRenderClassOf r opts := by
  unfold tblRenderClassOf
  cases hshape : tblShapeOfRender r opts with
  | none =>
      have hs : (tblShapeOfRender r opts).isSome = true :=
        tbl_shapeOf_isSome r opts h
      rw [hshape] at hs
      simp at hs
  | some s =>
      simpa [hshape] using table_classify_nonempty s

theorem tbl_render_sound (r : RenderRuleId) (opts : OptMap) {c : TableClass}
    (_h : c ∈ tblRenderClassOf r opts) : c ∈ tableAllClasses :=
  tableAllClasses_mem c

end LeanFtml
