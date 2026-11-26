/-
  LeanFtml.CoverageHeading — the coverage-tier classification of the
  heading and navigation family (Heading, Toc, Anchor) across parse
  and render (BRIEF-COVERAGE-HEADING, 2026-11-22).

  The classes are the branch decisions of the reference, read from the
  current mirror in this tree (post REFCORR4, post SUSPECT3):

  * parse: `BlockRules.headingMatchLine` / `headingProcess`,
    `tocMatchAt` / `tocProcess` / `tocItems`, and
    `FinalRules.namedAnchorProcess` plus the element cascade of
    `anchorElemProcess` / `buildAnchorAttrs`;
  * render: `RawHeadingRules.renderHeading` / `renderToc` and
    `InteractiveRules.renderAnchor`, under the harness configuration
    (`css_h*` null, `use_id` true, Toc `div_id` = `toc`, `$min` = 0).

  Naming: this module uses `navClassify` and `HeadingClass`. It does
  not reuse `classify` (`CoverageProse.lean`), `NotesClass`, or
  `InlineClass`. `HdLevel` is local; it is not `Depth.lean`'s depth.

  A class is a decidable branch of one of those cascades. Modifier
  arms (heading id, collapse, Toc align and title, anchor lead/trail
  and the href star) compose with a unique base class. Cascades the
  reference makes exclusive are proved exclusive. Two shapes are
  recorded as non-classes, not smuggled into the enumeration: Toc's
  `xhtmleditable` early return (the harness format is `Xhtml`, and
  `tocProcess` has no such arm) and Heading's `static $jsOutput`,
  which is read and never assigned, so a collapse-set `startContent`
  always emits the script.

  The heading counter, the Toc NUL sentinel, depth and the dead
  `count`, and the named-anchor placeholder arm (REFCORR4
  C-SUSPECT-XRULE-6) are theorems at the bottom, each pinned by a
  closed computation. SUSPECT3 confirmed the depth and numbering
  seams; this file is their classification.

  No sorry and no sorryAx. Audit lines are staged in
  coverage-heading-audit-block.txt (Main.lean is not edited here).
-/

import LeanFtml.BlockRules
import LeanFtml.RawHeadingRules
import LeanFtml.FinalRules
import LeanFtml.InteractiveRules

namespace LeanFtml

/-! ## The class enumeration -/

/-- One branch class per decision Heading, Toc and Anchor take.
    `navAllClasses` is their enumeration; every constructor has a
    pin in REPORT-COVERAGE-HEADING.md. -/
inductive HeadingClass where
  /- Heading parse: `headingMatchLine`. -/
  | hdMiss
  | hdL1 | hdL2 | hdL3 | hdL4 | hdL5 | hdL6
  | hdToc | hdNotoc
  /- Heading render: `renderHeading`. -/
  | hdRStart | hdRNotoc | hdREnd | hdRContent | hdRContentEnd | hdRFall
  | hdRId | hdROnclick | hdREndMinus | hdREndPlus | hdRScript | hdRHidden
  /- Toc parse: `tocMatchAt` align value, then `tocItems` filter. -/
  | tocMiss | tocPNull | tocPEmpty | tocPFLeft | tocPFRight
  | tocKeep | tocSkip
  /- Toc render: `renderToc`. -/
  | tocRStart | tocRTable | tocRFLeft | tocRFRight | tocROther
  | tocRTitleDefault | tocRTitleAuthored
  | tocREnd | tocREndTable | tocREndBare
  | tocRItem | tocRItemEnd | tocSentinel | tocRFall
  /- Anchor named-anchor pass. -/
  | anPlaceholder | anBlank | anValid | anLiteral | anInvalid
  /- Anchor element pass: form, boundary, href, id, allowlist. -/
  | anNested | anPara | anScored | anPlain
  | anLead | anTrail | anNestedClose | anJoinStrip
  | anHrefAbsent | anHrefVerb | anHrefDelim | anHrefSlug | anStarTarget
  | anIdDrop | anIdBare | anIdKept | anIdSpace | anIdPrefix
  | anFixedDrop | anFixedDelim | anFixedKeep
  | anDataDelim | anDataKeep
  | anOtherDrop
  /- Anchor render: `renderAnchor`. -/
  | anRNamed | anRStartGiven | anRStartDefault | anREnd
  | anRInvalid | anRLiteral | anRFallName
  deriving DecidableEq, Repr

/-- The declared class set, in rule order and then in branch order. -/
def navAllClasses : List HeadingClass := [
  .hdMiss, .hdL1, .hdL2, .hdL3, .hdL4, .hdL5, .hdL6, .hdToc, .hdNotoc,
  .hdRStart, .hdRNotoc, .hdREnd, .hdRContent, .hdRContentEnd, .hdRFall,
  .hdRId, .hdROnclick, .hdREndMinus, .hdREndPlus, .hdRScript, .hdRHidden,
  .tocMiss, .tocPNull, .tocPEmpty, .tocPFLeft, .tocPFRight, .tocKeep, .tocSkip,
  .tocRStart, .tocRTable, .tocRFLeft, .tocRFRight, .tocROther,
  .tocRTitleDefault, .tocRTitleAuthored,
  .tocREnd, .tocREndTable, .tocREndBare,
  .tocRItem, .tocRItemEnd, .tocSentinel, .tocRFall,
  .anPlaceholder, .anBlank, .anValid, .anLiteral, .anInvalid,
  .anNested, .anPara, .anScored, .anPlain,
  .anLead, .anTrail, .anNestedClose, .anJoinStrip,
  .anHrefAbsent, .anHrefVerb, .anHrefDelim, .anHrefSlug, .anStarTarget,
  .anIdDrop, .anIdBare, .anIdKept, .anIdSpace, .anIdPrefix,
  .anFixedDrop, .anFixedDelim, .anFixedKeep,
  .anDataDelim, .anDataKeep, .anOtherDrop,
  .anRNamed, .anRStartGiven, .anRStartDefault, .anREnd,
  .anRInvalid, .anRLiteral, .anRFallName]

theorem navAllClasses_nodup : navAllClasses.Nodup := by decide

theorem navAllClasses_length : navAllClasses.length = 78 := by decide

/-! ## Parse shapes -/

/-- Heading level of a successful `+{1,6}` run. -/
inductive HdLevel where
  | l1 | l2 | l3 | l4 | l5 | l6
  deriving DecidableEq, BEq, Repr

/-- A line under `headingMatchLine`: miss, or one level and the
    `*` / no-`*` flag (`hasToc` is true when the star is absent). -/
inductive HdParseShape where
  | miss
  | hit (level : HdLevel) (hasToc : Bool)
  deriving DecidableEq, Repr

/-- The same three guards as `headingMatchLine`. The final wildcard
    is the residual of a length outside 1..6 after those guards have
    already rejected length 0 and length greater than 6. -/
def hdParseShapeOf (line : List Nat) : HdParseShape :=
  let pluses := line.takeWhile (fun b => b == 43)
  if pluses.isEmpty || 6 < pluses.length then .miss
  else
    let rest := line.drop pluses.length
    let (hasToc, rest1) : Bool × List Nat := match rest with
      | 42 :: r => (false, r)
      | _ => (true, rest)
    let ws := rest1.takeWhile (fun b => b == 32 || b == 9)
    if ws.isEmpty then .miss
    else
      match pluses.length with
      | 1 => .hit .l1 hasToc
      | 2 => .hit .l2 hasToc
      | 3 => .hit .l3 hasToc
      | 4 => .hit .l4 hasToc
      | 5 => .hit .l5 hasToc
      | 6 => .hit .l6 hasToc
      | _ => .miss

def hdLevelClass : HdLevel → HeadingClass
  | .l1 => .hdL1
  | .l2 => .hdL2
  | .l3 => .hdL3
  | .l4 => .hdL4
  | .l5 => .hdL5
  | .l6 => .hdL6

/-- A hit emits its level class and exactly one of `hdToc` / `hdNotoc`. -/
def hdParseClasses : HdParseShape → List HeadingClass
  | .miss => [.hdMiss]
  | .hit lv toc => [hdLevelClass lv, if toc then .hdToc else .hdNotoc]

/-- Toc's align value, the decision `tocProcess` makes from the float
    group, the attribute group and the trailing-newline group. -/
inductive TocAlignOut where
  | null | empty | fLeft | fRight
  deriving DecidableEq, BEq, Repr

inductive TocParseShape where
  | miss
  | hit (align : TocAlignOut)
  deriving DecidableEq, Repr

/-- Map `tocMatchAt`'s groups to the align value. A participating
    float group is `f<` or `f>`; otherwise the value is `''` when a
    later group participated and null when none did. -/
def tocAlignOutOf (align : Option (List Nat)) (g2 : Option (List Nat))
    (trail : Bool) : TocAlignOut :=
  match align with
  | some a =>
      if a == litBytes "f<" then .fLeft
      else if a == litBytes "f>" then .fRight
      else .empty
  | none => if g2.isSome || trail then .empty else .null

def tocParseShapeOf (src : List Nat) : TocParseShape :=
  match tocMatchAt src with
  | none => .miss
  | some (align, g2, _, trail) => .hit (tocAlignOutOf align g2 trail)

def tocParseClasses : TocParseShape → List HeadingClass
  | .miss => [.tocMiss]
  | .hit .null => [.tocPNull]
  | .hit .empty => [.tocPEmpty]
  | .hit .fLeft => [.tocPFLeft]
  | .hit .fRight => [.tocPFRight]

/-- `tocItems` keeps a Heading token iff its type is exactly `start`. -/
inductive TocItemShape where
  | keep | skip
  deriving DecidableEq, Repr

def tocItemShapeOf (opts : OptMap) : TocItemShape :=
  if rhTypeIs opts (litBytes "start") then .keep else .skip

def tocItemClasses : TocItemShape → List HeadingClass
  | .keep => [.tocKeep]
  | .skip => [.tocSkip]

/-- The named-anchor cascade of `namedAnchorProcess`, in order:
    placeholder byte, trim-empty, valid name bytes, residual `]]]`
    not preceded by `[`, otherwise invalid-named. -/
inductive AnNameIn where
  | placeholder | blank | valid | literalTok | invalidNamed
  deriving DecidableEq, Repr

def anNameShapeOf (name : List Nat) (resid preceded : Bool) : AnNameIn :=
  if name.any (fun b => b == 0xFF) then .placeholder
  else if (trimBytes name).isEmpty then .blank
  else if name.all isAnchorNameByte then .valid
  else if resid && !preceded then .literalTok
  else .invalidNamed

def anNameClasses : AnNameIn → List HeadingClass
  | .placeholder => [.anPlaceholder]
  | .blank => [.anBlank]
  | .valid => [.anValid]
  | .literalTok => [.anLiteral]
  | .invalidNamed => [.anInvalid]

/-- The element cascade of `anchorElemProcess`, after the exclusive
    form test (nested opener, else paragraph split, else scored pair,
    else plain pair). -/
inductive AnForm where
  | nested | para | scored | plain
  deriving DecidableEq, BEq, Repr

/-- Href arm of `buildAnchorAttrs`. `verb` and `delim` are the
    verbatim class; the star target is a separate modifier. -/
inductive HrefKind where
  | absent | verb | delim | slug
  deriving DecidableEq, BEq, Repr

/-- Id arm. `absent` means the key was not present and emits no class. -/
inductive IdKind where
  | absent | drop | bare | kept | space | prefix
  deriving DecidableEq, BEq, Repr

/-- One fixed allowlist key (`class` / `style` / `role` / `type` /
    `target`). `none` means that decision was not taken. -/
inductive FixedKind where
  | none | drop | delim | keep
  deriving DecidableEq, BEq, Repr

inductive DataKind where
  | none | delim | keep
  deriving DecidableEq, BEq, Repr

inductive OtherKind where
  | none | drop
  deriving DecidableEq, BEq, Repr

structure AnElemIn where
  form : AnForm
  href : HrefKind
  close : Bool := false
  lead : Bool := false
  trail : Bool := false
  join : Bool := false
  starBlank : Bool := false
  id : IdKind := .absent
  fixed : FixedKind := .none
  data : DataKind := .none
  other : OtherKind := .none
  deriving Repr

/-! ## Render shapes -/

inductive HdType where
  | start | notoc | close | content | contentEnd | fall
  deriving DecidableEq, BEq, Repr

/-- `collapse` after `extract`. `boolTrue` is PHP `=== true` (the
    hidden-div arm); `truthy` is non-empty and not boolean true (the
    end-link plus arm); `empty` is set but `empty()` (the minus arm). -/
inductive HdCollapse where
  | unset | empty | truthy | boolTrue
  deriving DecidableEq, BEq, Repr

structure HdRenderShape where
  typ : HdType
  idNonEmpty : Bool := false
  collapse : HdCollapse := .unset
  deriving Repr

def hdCollapseSet : HdCollapse → Bool
  | .unset => false
  | .empty | .truthy | .boolTrue => true

def hdRenderShapeOf (opts : OptMap) : HdRenderShape where
  typ :=
    if rhTypeIs opts (litBytes "start") then .start
    else if rhTypeIs opts (litBytes "start-notoc") then .notoc
    else if rhTypeIs opts (litBytes "end") then .close
    else if rhTypeIs opts (litBytes "startContent") then .content
    else if rhTypeIs opts (litBytes "endContent") then .contentEnd
    else .fall
  idNonEmpty :=
    optIsset opts "id".toList && !(optStrBytes opts "id".toList).isEmpty
  collapse :=
    if !optIsset opts "collapse".toList then .unset
    else match omGet opts "collapse".toList with
      | some (.bool true) => .boolTrue
      | some v => if phpEmptyOpt (some v) then .empty else .truthy
      | none => .unset

/-- Heading render classes. The type arm is exclusive. The id
    attribute and the onclick attach only to `start`; the end-link
    sign is an exclusive match on `collapse`; the script attaches to
    a set collapse and the hidden div only to boolean true. -/
def hdRenderClasses (s : HdRenderShape) : List HeadingClass :=
  match s.typ with
  | .start =>
      [.hdRStart]
      ++ (if s.idNonEmpty then [.hdRId] else [])
      ++ (if hdCollapseSet s.collapse then [.hdROnclick] else [])
  | .notoc => [.hdRNotoc]
  | .close =>
      [.hdREnd]
      ++ (match s.collapse with
          | .empty => [.hdREndMinus]
          | .truthy | .boolTrue => [.hdREndPlus]
          | .unset => [])
  | .content =>
      [.hdRContent]
      ++ (if hdCollapseSet s.collapse then [.hdRScript] else [])
      ++ (match s.collapse with
          | .boolTrue => [.hdRHidden]
          | _ => [])
  | .contentEnd => [.hdRContentEnd]
  | .fall => [.hdRFall]

inductive TocRType where
  | start | close | item | itemEnd | fall
  deriving DecidableEq, BEq, Repr

/-- Align as `renderToc` reads it: falsy (null or `''`) wraps the
    table; `f<` and `f>` set the float class; any other truthy string
    is the direct-call arm the parser does not emit. -/
inductive TocAlignR where
  | falsy | fLeft | fRight | other
  deriving DecidableEq, BEq, Repr

/-- Title arm: a string (including `""`) is authored; anything else,
    including a missing `attr`, is the default label. -/
inductive TocTitleK where
  | default_ | authored
  deriving DecidableEq, BEq, Repr

structure TocRenderShape where
  typ : TocRType
  align : TocAlignR := .falsy
  title : TocTitleK := .default_
  deriving Repr

def tocAlignROf (opts : OptMap) : TocAlignR :=
  let a := optStrBytes opts "align".toList
  if !rhTruthy a then .falsy
  else if a == litBytes "f<" then .fLeft
  else if a == litBytes "f>" then .fRight
  else .other

def tocTitleKOf (opts : OptMap) : TocTitleK :=
  match omGet opts "attr".toList with
  | some (.map m) =>
      match omGet m "title".toList with
      | some (.str _) => .authored
      | some (.bytes _) => .authored
      | _ => .default_
  | _ => .default_

def tocRenderShapeOf (opts : OptMap) : TocRenderShape where
  typ :=
    if rhTypeIs opts (litBytes "list_start") then .start
    else if rhTypeIs opts (litBytes "list_end") then .close
    else if rhTypeIs opts (litBytes "item_start") then .item
    else if rhTypeIs opts (litBytes "item_end") then .itemEnd
    else .fall
  align := tocAlignROf opts
  title := tocTitleKOf opts

def tocAlignClass : TocAlignR → HeadingClass
  | .falsy => .tocRTable
  | .fLeft => .tocRFLeft
  | .fRight => .tocRFRight
  | .other => .tocROther

def tocTitleClass : TocTitleK → HeadingClass
  | .default_ => .tocRTitleDefault
  | .authored => .tocRTitleAuthored

/-- Toc render classes. `list_start` carries one align class and one
    title class. `list_end` carries one table-wrap class. Both item
    arms emit the sentinel class. Depth is not a further branch:
    the margin is the level and `$min` is 0. -/
def tocRenderClasses (s : TocRenderShape) : List HeadingClass :=
  match s.typ with
  | .start => [.tocRStart, tocAlignClass s.align, tocTitleClass s.title]
  | .close =>
      [.tocREnd, if s.align == .falsy then .tocREndTable else .tocREndBare]
  | .item => [.tocRItem, .tocSentinel]
  | .itemEnd => [.tocRItemEnd, .tocSentinel]
  | .fall => [.tocRFall]

/-- Anchor render cascade: missing or null `type` is the named
    fall-through; `start` splits on whether `attrs` is an array;
    an unknown type string falls through to the named renderer. -/
inductive AnRenderShape where
  | named | startGiven | startDefault | close | invalid | literal | fallName
  deriving DecidableEq, Repr

def anRenderShapeOf (opts : OptMap) : AnRenderShape :=
  if !intIsset opts "type".toList then .named
  else if intTypeIs opts (litBytes "start") then
    match omGet opts "attrs".toList with
    | some (.map _) => .startGiven
    | some (.list []) => .startGiven
    | _ => .startDefault
  else if intTypeIs opts (litBytes "end") then .close
  else if intTypeIs opts (litBytes "invalid_named") then .invalid
  else if intTypeIs opts (litBytes "literal") then .literal
  else .fallName

def anRenderClasses : AnRenderShape → List HeadingClass
  | .named => [.anRNamed]
  | .startGiven => [.anRStartGiven]
  | .startDefault => [.anRStartDefault]
  | .close => [.anREnd]
  | .invalid => [.anRInvalid]
  | .literal => [.anRLiteral]
  | .fallName => [.anRFallName]

/-! ## Element class list -/

def anFormClass : AnForm → List HeadingClass
  | .nested => [.anNested]
  | .para => [.anPara]
  | .scored => [.anScored]
  | .plain => [.anPlain]

def anFormHead : AnForm → HeadingClass
  | .nested => .anNested
  | .para => .anPara
  | .scored => .anScored
  | .plain => .anPlain

def anHrefClass : HrefKind → List HeadingClass
  | .absent => [.anHrefAbsent]
  | .verb => [.anHrefVerb]
  | .delim => [.anHrefDelim]
  | .slug => [.anHrefSlug]

def anIdClass : IdKind → List HeadingClass
  | .absent => []
  | .drop => [.anIdDrop]
  | .bare => [.anIdBare]
  | .kept => [.anIdKept]
  | .space => [.anIdSpace]
  | .prefix => [.anIdPrefix]

def anFixedClass : FixedKind → List HeadingClass
  | .none => []
  | .drop => [.anFixedDrop]
  | .delim => [.anFixedDelim]
  | .keep => [.anFixedKeep]

def anDataClass : DataKind → List HeadingClass
  | .none => []
  | .delim => [.anDataDelim]
  | .keep => [.anDataKeep]

def anOtherClass : OtherKind → List HeadingClass
  | .none => []
  | .drop => [.anOtherDrop]

def anElemClasses (s : AnElemIn) : List HeadingClass :=
  anFormClass s.form
  ++ (if s.close && s.form == .nested then [.anNestedClose] else [])
  ++ (if s.lead then [.anLead] else [])
  ++ (if s.trail then [.anTrail] else [])
  ++ (if s.join && s.form == .scored then [.anJoinStrip] else [])
  ++ anHrefClass s.href
  ++ (if s.starBlank then [.anStarTarget] else [])
  ++ anIdClass s.id
  ++ anFixedClass s.fixed
  ++ anDataClass s.data
  ++ anOtherClass s.other

/-! ## The family shape and the classifier -/

inductive NavShape where
  | hdParse (s : HdParseShape)
  | hdRender (s : HdRenderShape)
  | tocParse (s : TocParseShape)
  | tocItem (s : TocItemShape)
  | tocRender (s : TocRenderShape)
  | anName (s : AnNameIn)
  | anElem (s : AnElemIn)
  | anRender (s : AnRenderShape)

def navClassify : NavShape → List HeadingClass
  | .hdParse s => hdParseClasses s
  | .hdRender s => hdRenderClasses s
  | .tocParse s => tocParseClasses s
  | .tocItem s => tocItemClasses s
  | .tocRender s => tocRenderClasses s
  | .anName s => anNameClasses s
  | .anElem s => anElemClasses s
  | .anRender s => anRenderClasses s

def navClassMemDecidable (s : NavShape) (c : HeadingClass) :
    Decidable (c ∈ navClassify s) := inferInstance

/-! ## Completeness -/

theorem navAllClasses_mem (c : HeadingClass) : c ∈ navAllClasses := by
  cases c <;> decide

theorem nav_classify_sound (s : NavShape) {c : HeadingClass}
    (_h : c ∈ navClassify s) : c ∈ navAllClasses :=
  navAllClasses_mem c

theorem nav_classify_nonempty (s : NavShape) : ∃ c, c ∈ navClassify s := by
  cases s with
  | hdParse p =>
      cases p with
      | miss => exact ⟨.hdMiss, by simp [navClassify, hdParseClasses]⟩
      | hit lv _ =>
          exact ⟨hdLevelClass lv, by
            cases lv <;> simp [navClassify, hdParseClasses, hdLevelClass]⟩
  | hdRender r =>
      cases ht : r.typ with
      | start => exact ⟨.hdRStart, by simp [navClassify, hdRenderClasses, ht]⟩
      | notoc => exact ⟨.hdRNotoc, by simp [navClassify, hdRenderClasses, ht]⟩
      | close => exact ⟨.hdREnd, by simp [navClassify, hdRenderClasses, ht]⟩
      | content => exact ⟨.hdRContent, by simp [navClassify, hdRenderClasses, ht]⟩
      | contentEnd =>
          exact ⟨.hdRContentEnd, by simp [navClassify, hdRenderClasses, ht]⟩
      | fall => exact ⟨.hdRFall, by simp [navClassify, hdRenderClasses, ht]⟩
  | tocParse p =>
      cases p with
      | miss => exact ⟨.tocMiss, by simp [navClassify, tocParseClasses]⟩
      | hit a =>
          cases a with
          | null => exact ⟨.tocPNull, by simp [navClassify, tocParseClasses]⟩
          | empty => exact ⟨.tocPEmpty, by simp [navClassify, tocParseClasses]⟩
          | fLeft => exact ⟨.tocPFLeft, by simp [navClassify, tocParseClasses]⟩
          | fRight => exact ⟨.tocPFRight, by simp [navClassify, tocParseClasses]⟩
  | tocItem t =>
      cases t with
      | keep => exact ⟨.tocKeep, by simp [navClassify, tocItemClasses]⟩
      | skip => exact ⟨.tocSkip, by simp [navClassify, tocItemClasses]⟩
  | tocRender r =>
      cases ht : r.typ with
      | start => exact ⟨.tocRStart, by simp [navClassify, tocRenderClasses, ht]⟩
      | close => exact ⟨.tocREnd, by simp [navClassify, tocRenderClasses, ht]⟩
      | item => exact ⟨.tocRItem, by simp [navClassify, tocRenderClasses, ht]⟩
      | itemEnd =>
          exact ⟨.tocRItemEnd, by simp [navClassify, tocRenderClasses, ht]⟩
      | fall => exact ⟨.tocRFall, by simp [navClassify, tocRenderClasses, ht]⟩
  | anName n =>
      cases n with
      | placeholder => exact ⟨.anPlaceholder, by simp [navClassify, anNameClasses]⟩
      | blank => exact ⟨.anBlank, by simp [navClassify, anNameClasses]⟩
      | valid => exact ⟨.anValid, by simp [navClassify, anNameClasses]⟩
      | literalTok => exact ⟨.anLiteral, by simp [navClassify, anNameClasses]⟩
      | invalidNamed => exact ⟨.anInvalid, by simp [navClassify, anNameClasses]⟩
  | anElem e =>
      cases hf : e.form with
      | nested =>
          exact ⟨.anNested, by simp [navClassify, anElemClasses, anFormClass, hf]⟩
      | para =>
          exact ⟨.anPara, by simp [navClassify, anElemClasses, anFormClass, hf]⟩
      | scored =>
          exact ⟨.anScored, by simp [navClassify, anElemClasses, anFormClass, hf]⟩
      | plain =>
          exact ⟨.anPlain, by simp [navClassify, anElemClasses, anFormClass, hf]⟩
  | anRender a =>
      cases a with
      | named => exact ⟨.anRNamed, by simp [navClassify, anRenderClasses]⟩
      | startGiven => exact ⟨.anRStartGiven, by simp [navClassify, anRenderClasses]⟩
      | startDefault =>
          exact ⟨.anRStartDefault, by simp [navClassify, anRenderClasses]⟩
      | close => exact ⟨.anREnd, by simp [navClassify, anRenderClasses]⟩
      | invalid => exact ⟨.anRInvalid, by simp [navClassify, anRenderClasses]⟩
      | literal => exact ⟨.anRLiteral, by simp [navClassify, anRenderClasses]⟩
      | fallName => exact ⟨.anRFallName, by simp [navClassify, anRenderClasses]⟩

/-- A representable witness for every declared class. Modifier
    witnesses carry the base class they compose with. -/
def navWitness : HeadingClass → NavShape
  | .hdMiss => .hdParse .miss
  | .hdL1 => .hdParse (.hit .l1 true)
  | .hdL2 => .hdParse (.hit .l2 true)
  | .hdL3 => .hdParse (.hit .l3 true)
  | .hdL4 => .hdParse (.hit .l4 true)
  | .hdL5 => .hdParse (.hit .l5 true)
  | .hdL6 => .hdParse (.hit .l6 true)
  | .hdToc => .hdParse (.hit .l1 true)
  | .hdNotoc => .hdParse (.hit .l1 false)
  | .hdRStart => .hdRender { typ := .start }
  | .hdRNotoc => .hdRender { typ := .notoc }
  | .hdREnd => .hdRender { typ := .close }
  | .hdRContent => .hdRender { typ := .content }
  | .hdRContentEnd => .hdRender { typ := .contentEnd }
  | .hdRFall => .hdRender { typ := .fall }
  | .hdRId => .hdRender { typ := .start, idNonEmpty := true }
  | .hdROnclick => .hdRender { typ := .start, collapse := .truthy }
  | .hdREndMinus => .hdRender { typ := .close, collapse := .empty }
  | .hdREndPlus => .hdRender { typ := .close, collapse := .truthy }
  | .hdRScript => .hdRender { typ := .content, collapse := .empty }
  | .hdRHidden => .hdRender { typ := .content, collapse := .boolTrue }
  | .tocMiss => .tocParse .miss
  | .tocPNull => .tocParse (.hit .null)
  | .tocPEmpty => .tocParse (.hit .empty)
  | .tocPFLeft => .tocParse (.hit .fLeft)
  | .tocPFRight => .tocParse (.hit .fRight)
  | .tocKeep => .tocItem .keep
  | .tocSkip => .tocItem .skip
  | .tocRStart => .tocRender { typ := .start }
  | .tocRTable => .tocRender { typ := .start, align := .falsy }
  | .tocRFLeft => .tocRender { typ := .start, align := .fLeft }
  | .tocRFRight => .tocRender { typ := .start, align := .fRight }
  | .tocROther => .tocRender { typ := .start, align := .other }
  | .tocRTitleDefault => .tocRender { typ := .start, title := .default_ }
  | .tocRTitleAuthored => .tocRender { typ := .start, title := .authored }
  | .tocREnd => .tocRender { typ := .close }
  | .tocREndTable => .tocRender { typ := .close, align := .falsy }
  | .tocREndBare => .tocRender { typ := .close, align := .fLeft }
  | .tocRItem => .tocRender { typ := .item }
  | .tocRItemEnd => .tocRender { typ := .itemEnd }
  | .tocSentinel => .tocRender { typ := .item }
  | .tocRFall => .tocRender { typ := .fall }
  | .anPlaceholder => .anName .placeholder
  | .anBlank => .anName .blank
  | .anValid => .anName .valid
  | .anLiteral => .anName .literalTok
  | .anInvalid => .anName .invalidNamed
  | .anNested => .anElem { form := .nested, href := .absent }
  | .anPara => .anElem { form := .para, href := .absent }
  | .anScored => .anElem { form := .scored, href := .absent }
  | .anPlain => .anElem { form := .plain, href := .absent }
  | .anLead => .anElem { form := .plain, href := .absent, lead := true }
  | .anTrail => .anElem { form := .plain, href := .absent, trail := true }
  | .anNestedClose =>
      .anElem { form := .nested, href := .absent, close := true }
  | .anJoinStrip =>
      .anElem { form := .scored, href := .absent, join := true }
  | .anHrefAbsent => .anElem { form := .plain, href := .absent }
  | .anHrefVerb => .anElem { form := .plain, href := .verb }
  | .anHrefDelim => .anElem { form := .plain, href := .delim }
  | .anHrefSlug => .anElem { form := .plain, href := .slug }
  | .anStarTarget =>
      .anElem { form := .plain, href := .verb, starBlank := true }
  | .anIdDrop => .anElem { form := .plain, href := .absent, id := .drop }
  | .anIdBare => .anElem { form := .plain, href := .absent, id := .bare }
  | .anIdKept => .anElem { form := .plain, href := .absent, id := .kept }
  | .anIdSpace => .anElem { form := .plain, href := .absent, id := .space }
  | .anIdPrefix => .anElem { form := .plain, href := .absent, id := .prefix }
  | .anFixedDrop => .anElem { form := .plain, href := .absent, fixed := .drop }
  | .anFixedDelim => .anElem { form := .plain, href := .absent, fixed := .delim }
  | .anFixedKeep => .anElem { form := .plain, href := .absent, fixed := .keep }
  | .anDataDelim => .anElem { form := .plain, href := .absent, data := .delim }
  | .anDataKeep => .anElem { form := .plain, href := .absent, data := .keep }
  | .anOtherDrop => .anElem { form := .plain, href := .absent, other := .drop }
  | .anRNamed => .anRender .named
  | .anRStartGiven => .anRender .startGiven
  | .anRStartDefault => .anRender .startDefault
  | .anREnd => .anRender .close
  | .anRInvalid => .anRender .invalid
  | .anRLiteral => .anRender .literal
  | .anRFallName => .anRender .fallName

theorem nav_witness_classify (c : HeadingClass) :
    c ∈ navClassify (navWitness c) := by
  cases c <;> decide

theorem nav_classes_exhaustive (c : HeadingClass) :
    c ∈ navAllClasses ↔ ∃ s : NavShape, c ∈ navClassify s := by
  constructor
  · intro _
    exact ⟨navWitness c, nav_witness_classify c⟩
  · intro h
    obtain ⟨s, hs⟩ := h
    exact nav_classify_sound s hs

theorem nav_classification_complete :
    (∀ s c, (c ∈ navClassify s) ∨ ¬ (c ∈ navClassify s)) ∧
    (∀ s : NavShape, ∃ c, c ∈ navAllClasses ∧ c ∈ navClassify s) ∧
    (∀ c : HeadingClass, c ∈ navAllClasses →
      ∃ s : NavShape, c ∈ navClassify s) := by
  refine ⟨?_, ?_, ?_⟩
  · intro s c
    by_cases h : c ∈ navClassify s
    · exact Or.inl h
    · exact Or.inr h
  · intro s
    obtain ⟨c, hc⟩ := nav_classify_nonempty s
    exact ⟨c, nav_classify_sound s hc, hc⟩
  · intro c _
    exact ⟨navWitness c, nav_witness_classify c⟩

/-! ## Exclusivity of the cascades that are exclusive -/

def isHdLevelClass : HeadingClass → Bool
  | .hdL1 | .hdL2 | .hdL3 | .hdL4 | .hdL5 | .hdL6 => true
  | _ => false

/-- A heading hit contributes exactly one level class. -/
theorem hd_hit_one_level (lv : HdLevel) (toc : Bool) :
    (hdParseClasses (.hit lv toc)).filter isHdLevelClass = [hdLevelClass lv] := by
  cases lv <;> cases toc <;> rfl

/-- A heading hit contributes exactly one of `hdToc` and `hdNotoc`. -/
theorem hd_hit_one_tocflag (lv : HdLevel) (toc : Bool) :
    (hdParseClasses (.hit lv toc)).contains (if toc then .hdToc else .hdNotoc) = true ∧
    (hdParseClasses (.hit lv toc)).contains (if toc then .hdNotoc else .hdToc) = false := by
  cases lv <;> cases toc <;> decide

theorem hd_miss_no_level :
    (hdParseClasses .miss).filter isHdLevelClass = [] := rfl

/-- The end-link sign is exclusive: minus and plus are different arms
    of one match on `collapse`. -/
theorem hd_end_sign_exclusive (s : HdRenderShape) :
    .hdREndMinus ∈ hdRenderClasses s → .hdREndPlus ∈ hdRenderClasses s → False := by
  intro h1 h2
  cases ht : s.typ <;> cases hc : s.collapse <;>
    simp [hdRenderClasses, hdCollapseSet, ht, hc] at h1 h2

/-- Boolean-true collapse on `startContent` emits the script as well
    as the hidden div, because `=== true` implies the value is set. -/
theorem hd_hidden_implies_script (s : HdRenderShape) :
    .hdRHidden ∈ hdRenderClasses s → .hdRScript ∈ hdRenderClasses s := by
  intro h
  cases ht : s.typ <;> cases hc : s.collapse <;>
    simp [hdRenderClasses, hdCollapseSet, ht, hc] at h ⊢

def isTocAlignClass : HeadingClass → Bool
  | .tocRTable | .tocRFLeft | .tocRFRight | .tocROther => true
  | _ => false

theorem toc_start_one_align (a : TocAlignR) (t : TocTitleK) :
    (tocRenderClasses { typ := .start, align := a, title := t }).filter
        isTocAlignClass = [tocAlignClass a] := by
  cases a <;> cases t <;> rfl

theorem toc_start_one_title (a : TocAlignR) (t : TocTitleK) :
    (tocRenderClasses { typ := .start, align := a, title := t }).contains
        (tocTitleClass t) = true := by
  cases a <;> cases t <;> decide

theorem toc_end_one_wrap (a : TocAlignR) :
    (tocRenderClasses { typ := .close, align := a }).contains
        (if a == .falsy then .tocREndTable else .tocREndBare) = true ∧
    (tocRenderClasses { typ := .close, align := a }).contains
        (if a == .falsy then .tocREndBare else .tocREndTable) = false := by
  cases a <;> decide

private theorem eq_of_mem_singleton {α : Type} [DecidableEq α] {a b : α}
    (h : a ∈ [b]) : a = b := by
  simpa using h

theorem an_name_exclusive (s : AnNameIn) {c1 c2 : HeadingClass}
    (h1 : c1 ∈ anNameClasses s) (h2 : c2 ∈ anNameClasses s) : c1 = c2 := by
  cases s <;>
    exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem an_form_exclusive (f : AnForm) {c1 c2 : HeadingClass}
    (h1 : c1 ∈ anFormClass f) (h2 : c2 ∈ anFormClass f) : c1 = c2 := by
  cases f <;>
    exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem an_href_exclusive (k : HrefKind) {c1 c2 : HeadingClass}
    (h1 : c1 ∈ anHrefClass k) (h2 : c2 ∈ anHrefClass k) : c1 = c2 := by
  cases k <;>
    exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem an_render_exclusive (s : AnRenderShape) {c1 c2 : HeadingClass}
    (h1 : c1 ∈ anRenderClasses s) (h2 : c2 ∈ anRenderClasses s) : c1 = c2 := by
  cases s <;>
    exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem toc_item_exclusive (s : TocItemShape) {c1 c2 : HeadingClass}
    (h1 : c1 ∈ tocItemClasses s) (h2 : c2 ∈ tocItemClasses s) : c1 = c2 := by
  cases s <;>
    exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

/-! ## Real render inputs -/

def isNavRenderRule : RenderRuleId → Bool
  | .heading | .toc | .anchor => true
  | _ => false

def navShapeOf (r : RenderRuleId) (opts : OptMap) : Option NavShape :=
  match r with
  | .heading => some (.hdRender (hdRenderShapeOf opts))
  | .toc => some (.tocRender (tocRenderShapeOf opts))
  | .anchor => some (.anRender (anRenderShapeOf opts))
  | _ => none

def navClassOf (r : RenderRuleId) (opts : OptMap) : List HeadingClass :=
  match navShapeOf r opts with
  | some s => navClassify s
  | none => []

def navMemClass (c : HeadingClass) (r : RenderRuleId) (opts : OptMap) : Bool :=
  decide (c ∈ navClassOf r opts)

theorem nav_shapeOf_isSome (r : RenderRuleId) (opts : OptMap)
    (h : isNavRenderRule r = true) : (navShapeOf r opts).isSome = true := by
  cases r <;> simp_all [isNavRenderRule, navShapeOf]

theorem nav_classOf_complete (r : RenderRuleId) (opts : OptMap)
    (h : isNavRenderRule r = true) : ∃ c, c ∈ navClassOf r opts := by
  unfold navClassOf
  cases hshape : navShapeOf r opts with
  | none =>
      have hs : (navShapeOf r opts).isSome = true := nav_shapeOf_isSome r opts h
      rw [hshape] at hs
      exact False.elim (by simpa using hs)
  | some s => exact nav_classify_nonempty s

theorem nav_classOf_sound (r : RenderRuleId) (opts : OptMap) {c : HeadingClass}
    (h : c ∈ navClassOf r opts) : c ∈ navAllClasses := by
  unfold navClassOf at h
  cases hshape : navShapeOf r opts with
  | none => simp [hshape] at h
  | some s =>
      simp [hshape] at h
      exact nav_classify_sound s h

theorem nav_classOf_exclusive (r : RenderRuleId) (opts : OptMap)
    (c1 c2 : HeadingClass) (h1 : navClassOf r opts = [c1])
    (h2 : navClassOf r opts = [c2]) : c1 = c2 := by
  rw [h1] at h2
  exact (List.cons.inj h2).1

theorem nav_memClass_complete (r : RenderRuleId) (opts : OptMap)
    (h : isNavRenderRule r = true) : ∃ c, navMemClass c r opts = true := by
  obtain ⟨c, hc⟩ := nav_classOf_complete r opts h
  refine ⟨c, ?_⟩
  simp [navMemClass, hc]

theorem nav_memClass_sound (c : HeadingClass) (r : RenderRuleId) (opts : OptMap)
    (h : navMemClass c r opts = true) : c ∈ navAllClasses := by
  simp [navMemClass] at h
  exact nav_classOf_sound r opts h

/-! ## Every parse input of these cascades lands in the partition -/

theorem hd_every_line (line : List Nat) :
    ∃ c, c ∈ navClassify (.hdParse (hdParseShapeOf line)) :=
  nav_classify_nonempty _

theorem toc_every_src (src : List Nat) :
    ∃ c, c ∈ navClassify (.tocParse (tocParseShapeOf src)) :=
  nav_classify_nonempty _

theorem an_every_name (name : List Nat) (resid preceded : Bool) :
    ∃ c, c ∈ navClassify (.anName (anNameShapeOf name resid preceded)) :=
  nav_classify_nonempty _

/-! ## Closed pins: counter, id, depth, sentinel, placeholder -/

theorem cov_hd_l1 : hdParseShapeOf (litBytes "+ A") = .hit .l1 true := rfl
theorem cov_hd_l2 : hdParseShapeOf (litBytes "++ A") = .hit .l2 true := rfl
theorem cov_hd_l3 : hdParseShapeOf (litBytes "+++ A") = .hit .l3 true := rfl
theorem cov_hd_l4 : hdParseShapeOf (litBytes "++++ A") = .hit .l4 true := rfl
theorem cov_hd_l5 : hdParseShapeOf (litBytes "+++++ A") = .hit .l5 true := rfl
theorem cov_hd_l6_notoc :
    hdParseShapeOf (litBytes "++++++*\tZ") = .hit .l6 false := rfl
theorem cov_hd_miss_nospace : hdParseShapeOf (litBytes "+No") = .miss := rfl
theorem cov_hd_seven : hdParseShapeOf (litBytes "+++++++ x") = .miss := rfl

/-- A plain heading takes id `toc0` from a fresh counter. -/
theorem cov_hd_toc0_id :
    (match (headingProcess 1 true (litBytes "A") {} []).2.1 with
      | t :: _ => omGet t.opts "id".toList
      | [] => none) = some (OptVal.str "toc0".toList) := rfl

/-- A `*` heading stores a null id. -/
theorem cov_hd_notoc_id :
    (match (headingProcess 3 false (litBytes "S") {} []).2.1 with
      | t :: _ => omGet t.opts "id".toList
      | [] => none) = some OptVal.null := rfl

/-- A `*` heading does not consume a counter value. -/
theorem cov_hd_notoc_counter :
    (headingProcess 1 false (litBytes "S") { headlineId := some 4 } []).2.2.headlineId
      = some 4 := rfl

/-- A plain heading advances the counter. -/
theorem cov_hd_toc_advances :
    (headingProcess 1 true (litBytes "B") { headlineId := some 4 } []).2.2.headlineId
      = some 5 := rfl

theorem cov_toc_null :
    tocParseShapeOf (litBytes "[[toc]]") = .hit .null := rfl
theorem cov_toc_empty :
    tocParseShapeOf (litBytes "[[toc]]\n") = .hit .empty := rfl
theorem cov_toc_fleft :
    tocParseShapeOf (litBytes "[[f<toc]]") = .hit .fLeft := rfl
theorem cov_toc_fright :
    tocParseShapeOf (litBytes "[[f>toc]]") = .hit .fRight := rfl
theorem cov_toc_miss :
    tocParseShapeOf (litBytes "+ A") = .miss := rfl

/-- `tocItems` drops a `start-notoc` heading and does not spend a count. -/
theorem cov_toc_skips_notoc :
    tocItems [{ rule := "Heading", opts :=
      [("type".toList, OptVal.str "start-notoc".toList),
       ("level".toList, OptVal.int 1),
       ("text".toList, OptVal.str "S".toList),
       ("id".toList, OptVal.null)] }] [] 0 = ([], []) := rfl

/-- The item renderer never reads `count`: two counts, one output.
    Numbering is computed at parse and discarded at render. -/
theorem cov_toc_count_unrendered :
    renderToc [("type".toList, OptVal.str "item_start".toList),
      ("id".toList, OptVal.str "toc0".toList),
      ("level".toList, OptVal.int 1),
      ("count".toList, OptVal.int 0)] =
    renderToc [("type".toList, OptVal.str "item_start".toList),
      ("id".toList, OptVal.str "toc0".toList),
      ("level".toList, OptVal.int 1),
      ("count".toList, OptVal.int 9)] := rfl

/-- Depth is the level in `em` because `$min` is the constant 0.
    Level 1 is included; there is no clamp. -/
theorem cov_toc_depth_level1 :
    renderToc [("type".toList, OptVal.str "item_start".toList),
      ("id".toList, OptVal.str "toc0".toList),
      ("level".toList, OptVal.int 1),
      ("count".toList, OptVal.int 0)] =
    litBytes "\n\t<div style=\"margin-left: 1em;\"><a href=\"#toc0\">" ++
      tocStripDelim := rfl

/-- The mirror's sentinel is the reference's two-byte `$d$d` pair
    (`Render/Xhtml/Toc.php`); `postStripToc` is matched to this
    two-byte marker. -/
theorem cov_toc_sentinel_width : tocStripDelim = [0, 0] := rfl

/-- REFCORR4 C-SUSPECT-XRULE-6: a name containing the placeholder byte
    is returned unchanged and claims no token. -/
theorem cov_an_placeholder :
    namedAnchorProcess [0xFF] false [91, 91] false [] = ([91, 91], []) := rfl

theorem cov_an_blank :
    namedAnchorProcess [32, 32] false [9] false [] = ([9], []) := rfl

theorem cov_an_name_valid :
    anNameShapeOf (litBytes "a.b_C-1%") false false = .valid := rfl

theorem cov_an_name_literal :
    anNameShapeOf (litBytes "a b") true false = .literalTok := rfl

theorem cov_an_name_invalid :
    anNameShapeOf (litBytes "a b") false true = .invalidNamed := rfl

end LeanFtml
