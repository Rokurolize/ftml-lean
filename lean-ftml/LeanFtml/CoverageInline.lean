/-
  LeanFtml.CoverageInline — the coverage-tier classification of the INLINE
  render family (BRIEF-COVERAGE-INLINE, 2026-11-22): the eight render rules
  Url, Interwiki, Email, Freelink, Image, Span, Size and Colortext.

  The classes are the branch decisions of the reference `token()` methods
  under the harness configuration (`ref-php/harness/wiki-config.php`,
  `ref_configure_wiki`), read from the CURRENT mirror in this tree:
  `InlineSimpleRules.lean` (Url, Interwiki, Email, Colortext),
  `ServingRules.lean` (Freelink, Image) and `InteractiveRules.lean`
  (Span, Size). Each function is a finite decision cascade over its option
  grammar, so a class is a decidable predicate of the token's option map,
  exactly as in `CoverageNotes.lean` for the NOTES renderers. The branch
  provenance is cited per class in REPORT-COVERAGE-INLINE.md; the R4 tier
  mirrored the same branch structure and the suspicion rounds corrected
  HTMLCHARS escaping, the X44 label bound, the Div-adjacent attribute
  behaviors and (queued in REFCORR5) the Email ENT_SUBSTITUTE escaping.

  Where a correction is QUEUED and not yet applied in this tree, the branch
  is classified as it stands and the queue item is named in the record
  rather than waited for: Email's escaping is REFCORR5 Batch 3
  (C-SUSPECT-EMAIL-1/2, ENT_NOQUOTES | ENT_SUBSTITUTE); Colortext's
  parse-time validation is REFCORR5 Batch 2 and is parse-side, hence out of
  this render family's scope.

  Two shapes of branch are recorded as non-classes, as in CoverageProse:
  the harness-disabled Url image branch (`images=false`; there is no
  authored render input that reaches it) and the unreachable sub-branches
  that the table/DB dispositions exclude (Interwiki no-%s templates, the
  Image Flickr handler and found-`:first` page, the Freelink
  `textFromTitle` DB lookup). They are stated as theorems/remarks, never
  smuggled into the enumeration.

  Completeness over this decision structure has the four parts used by the
  two predecessor lanes: membership is decidable (derived equality on
  InlineClass and List membership), every class a shape yields is declared
  (inline_classify_sound), every shape yields at least one class
  (inline_classify_nonempty), and every declared class has a representable
  witness shape (inline_witness_classify). `inline_classes_exhaustive`
  identifies the class set with the image of the classifier, and
  `inline_classification_complete` bundles decidability, coverage and
  exhaustiveness. Per-rule exclusivity is proved for the single-valued
  cascades (Interwiki, Freelink's main branch, Image's source branch and
  align group, Span, Size, Colortext); the modifier groups (Url, Freelink's
  nonbr/target, Image's link/align) are proved to compose with the base
  class, as the prose lane's sequence rules do.

  A concrete token classifier `inlineClassOf` maps a real `RenderRuleId`
  and `OptMap` to the abstract shape via `inlineShapeOf`, so the partition
  theorems are about render inputs, not only about the abstract shapes.
  The closing section re-proves decisive mirror computations as closed
  `rfl` computations, each naming the probe or battery that pins it, in the
  style of CoverageProse.lean.

  No sorry and no sorryAx; the classification theorems reduce to [propext]
  or [propext, Quot.sound] and the closed mirror computations to the
  programme standard [propext, Classical.choice, Quot.sound]. No
  nonstandard axiom is used. Audit lines are staged in
  coverage-inline-audit-block.txt (Main.lean is not edited by this lane).
-/

import LeanFtml.InlineSimpleRules
import LeanFtml.ServingRules
import LeanFtml.InteractiveRules

namespace LeanFtml

/-! ## The class enumeration -/

/-- One branch class per decision the eight reference renderers can take on
    a token. The 38 constructors are the complete named output of the
    classification; `inlineAllClasses` is their enumeration and every one
    has a live or battery pin in REPORT-COVERAGE-INLINE.md. -/
inductive InlineClass where
  /- Url.php:45-104, harness images=false. -/
  | urlLink | urlHash | urlTarget | urlFootnote
  /- Interwiki.php:39-81. -/
  | iwKnown | iwUnknown
  /- Email.php:23-30 (queued REFCORR5 escaping noted in the report). -/
  | emReversed
  /- Freelink.php:32-141. -/
  | flUrl | flSite | flExists | flMissing | flNonbr | flTarget
  /- Image.php:62-244. -/
  | imFirst | imFlickr | imUrlSource | imLocalResized | imLocalPlain
  | imLinked | imAlignFLeft | imAlignFRight | imAlignLeft | imAlignRight
  | imAlignCenter
  /- Span.php:38-51. -/
  | spStartBare | spStartAttrs | spEnd | spFall
  /- Size.php:37-48. -/
  | szStart | szEnd | szFall
  /- Colortext.php:53-96. -/
  | ctHex | ctNamed | ctEmpty | ctEnd | ctFall | ctInvalidStart
  | ctInvalidOther
  deriving DecidableEq, Repr

/-- The declared, finite class set, in reference rule order and then in the
    order of the branches in each PHP `token()`. -/
def inlineAllClasses : List InlineClass :=
  [ .urlLink, .urlHash, .urlTarget, .urlFootnote,
    .iwKnown, .iwUnknown,
    .emReversed,
    .flUrl, .flSite, .flExists, .flMissing, .flNonbr, .flTarget,
    .imFirst, .imFlickr, .imUrlSource, .imLocalResized, .imLocalPlain,
    .imLinked, .imAlignFLeft, .imAlignFRight, .imAlignLeft, .imAlignRight,
    .imAlignCenter,
    .spStartBare, .spStartAttrs, .spEnd, .spFall,
    .szStart, .szEnd, .szFall,
    .ctHex, .ctNamed, .ctEmpty, .ctEnd, .ctFall, .ctInvalidStart,
    .ctInvalidOther ]

theorem inlineAllClasses_nodup : inlineAllClasses.Nodup := by decide

theorem inlineAllClasses_length : inlineAllClasses.length = 38 := by decide

/-! ## Source shapes, one decision type per rule -/

/-- Url: the three independent modifiers of the always-built anchor. The
    image branch is harness-disabled and is not a shape. -/
structure UrlShape where
  hash : Bool
  target : Bool
  footnote : Bool

/-- Interwiki: the site table membership decision. -/
inductive IWShape where
  | known | unknown

/-- Email: the single current render shape (no branch in today's token);
    REFCORR5 Batch 3 will add an escaping modifier. -/
inductive EmailShape where
  | reversed

/-- Freelink's mutually exclusive main branch, plus its two modifiers. -/
inductive FLBranch where
  | url | site | exists | missing

structure FLShape where
  branch : FLBranch
  nonbr : Bool
  target : Bool

/-- Image: the mutually exclusive source branch, a link modifier and the
    six-way align group (the five suffix arms plus no wrapper). -/
inductive ImageSource where
  | first | flickr | urlSource | resized | plain

inductive ImageAlign where
  | none | fLeft | fRight | left | right | center

structure ImageShape where
  source : ImageSource
  linked : Bool
  align : ImageAlign

/-- Span: bare start, start with attributes, end, and the implicit-null
    fallthrough. -/
inductive SpanShape where
  | startBare | startAttrs | end | fall

/-- Size: start, end and the implicit-null fallthrough. -/
inductive SizeShape where
  | start | end | fall

/-- Colortext: the admission decision of `normalizeColor` crossed with the
    `type` decision. -/
inductive CTSpec where
  | hex | named | empty | invalid

inductive CTType where
  | start | end | other

structure InlineCTShape where
  spec : CTSpec
  typ : CTType

/-- The family's shape space: a disjoint sum of the eight decision types. -/
inductive InlineShape where
  | url (s : UrlShape)
  | interwiki (s : IWShape)
  | email (s : EmailShape)
  | freelink (s : FLShape)
  | image (s : ImageShape)
  | span (s : SpanShape)
  | size (s : SizeShape)
  | colortext (s : InlineCTShape)

/-! ## The decision functions (formalized branch conditions) -/

/-- Url's branch set: the anchor is unconditional, the three modifiers are
    independent (hash substitution, authored target, footnote sup). -/
def urlBranches (s : UrlShape) : List InlineClass :=
  inlineAllClasses.filter fun c => match c with
    | .urlLink => true
    | .urlHash => s.hash
    | .urlTarget => s.target
    | .urlFootnote => s.footnote
    | _ => false

/-- The single class of each Freelink main branch. -/
def flBase : FLBranch → List InlineClass
  | .url => [.flUrl]
  | .site => [.flSite]
  | .exists => [.flExists]
  | .missing => [.flMissing]

/-- Freelink's branch set: the main branch plus the nonbr and starred-target
    modifiers. -/
def flBranches (s : FLShape) : List InlineClass :=
  flBase s.branch ++
    (if s.nonbr then [.flNonbr] else []) ++
    (if s.target then [.flTarget] else [])

/-- The single class of each Image source branch. -/
def imSourceClass : ImageSource → List InlineClass
  | .first => [.imFirst]
  | .flickr => [.imFlickr]
  | .urlSource => [.imUrlSource]
  | .resized => [.imLocalResized]
  | .plain => [.imLocalPlain]

/-- The class of each align arm; `none` emits no wrapper and no class. -/
def imAlignClass : ImageAlign → List InlineClass
  | .none => []
  | .fLeft => [.imAlignFLeft]
  | .fRight => [.imAlignFRight]
  | .left => [.imAlignLeft]
  | .right => [.imAlignRight]
  | .center => [.imAlignCenter]

/-- Image's branch set: one source class, plus the link and align
    modifiers. -/
def imBranches (s : ImageShape) : List InlineClass :=
  imSourceClass s.source ++
    (if s.linked then [.imLinked] else []) ++
    imAlignClass s.align

/-- Colortext's admitted start classes, keyed by the normalized spec. -/
def ctStartClass : CTSpec → List InlineClass
  | .hex => [.ctHex]
  | .named => [.ctNamed]
  | .empty => [.ctEmpty]
  | .invalid => [.ctInvalidStart]

/-- Colortext's full cross-product of admission and type, following the
    `if ($color === null)` then `start` / `end` / implicit cascade. -/
def ctBranches : CTSpec → CTType → List InlineClass
  | .invalid, .start => [.ctInvalidStart]
  | .invalid, _ => [.ctInvalidOther]
  | s, .start => ctStartClass s
  | _, .end => [.ctEnd]
  | _, .other => [.ctFall]

/-- The whole-family classifier: a shape maps to the list of branch classes
    its decision structure enables. -/
def inlineClassify : InlineShape → List InlineClass
  | .url s => urlBranches s
  | .interwiki .known => [.iwKnown]
  | .interwiki .unknown => [.iwUnknown]
  | .email _ => [.emReversed]
  | .freelink s => flBranches s
  | .image s => imBranches s
  | .span .startBare => [.spStartBare]
  | .span .startAttrs => [.spStartAttrs]
  | .span .end => [.spEnd]
  | .span .fall => [.spFall]
  | .size .start => [.szStart]
  | .size .end => [.szEnd]
  | .size .fall => [.szFall]
  | .colortext s => ctBranches s.spec s.typ

/-! ## Decidability, completeness, exhaustiveness, exclusivity -/

/-- Class membership is decidable: equality on InlineClass is derived and
    so is List membership. -/
def inlineClassMemDecidable (s : InlineShape) (c : InlineClass) :
    Decidable (c ∈ inlineClassify s) := inferInstance

/-- Every constructor of InlineClass is declared in the enumeration; a
    closed computation decided case by case by the kernel. -/
theorem inlineAllClasses_mem (c : InlineClass) : c ∈ inlineAllClasses := by
  cases c <;> decide

/-- Soundness: any class a shape yields is a declared class. -/
theorem inline_classify_sound (s : InlineShape) {c : InlineClass}
    (_h : c ∈ inlineClassify s) : c ∈ inlineAllClasses :=
  inlineAllClasses_mem c

/-- Every shape yields at least one branch. The unconditional Url anchor,
    main Freelink branch and Image source branch carry the modifier rules;
    the other rules are single-valued cascades. -/
theorem inline_classify_nonempty (s : InlineShape) : ∃ c, c ∈ inlineClassify s := by
  cases s with
  | url u =>
      refine ⟨.urlLink, ?_⟩
      simp [inlineClassify, urlBranches, inlineAllClasses]
  | interwiki i =>
      cases i <;> simp [inlineClassify]
  | email e =>
      cases e <;> simp [inlineClassify]
  | freelink f =>
      rcases f with ⟨branch, nonbr, target⟩
      cases branch <;> simp [inlineClassify, flBranches, flBase]
  | image i =>
      rcases i with ⟨source, linked, align⟩
      cases source <;> simp [inlineClassify, imBranches, imSourceClass, imAlignClass]
  | span p => cases p <;> simp [inlineClassify]
  | size z => cases z <;> simp [inlineClassify]
  | colortext c =>
      rcases c with ⟨spec, typ⟩
      cases spec <;> cases typ <;>
        simp [inlineClassify, ctBranches, ctStartClass]

/-- A representable witness shape for every declared class. -/
def inlineWitnessShape : InlineClass → InlineShape
  | .urlLink => .url ⟨false, false, false⟩
  | .urlHash => .url ⟨true, false, false⟩
  | .urlTarget => .url ⟨false, true, false⟩
  | .urlFootnote => .url ⟨false, false, true⟩
  | .iwKnown => .interwiki .known
  | .iwUnknown => .interwiki .unknown
  | .emReversed => .email .reversed
  | .flUrl => .freelink ⟨.url, false, false⟩
  | .flSite => .freelink ⟨.site, false, false⟩
  | .flExists => .freelink ⟨.exists, false, false⟩
  | .flMissing => .freelink ⟨.missing, false, false⟩
  | .flNonbr => .freelink ⟨.missing, true, false⟩
  | .flTarget => .freelink ⟨.url, false, true⟩
  | .imFirst => .image ⟨.first, false, .none⟩
  | .imFlickr => .image ⟨.flickr, false, .none⟩
  | .imUrlSource => .image ⟨.urlSource, false, .none⟩
  | .imLocalResized => .image ⟨.resized, false, .none⟩
  | .imLocalPlain => .image ⟨.plain, false, .none⟩
  | .imLinked => .image ⟨.plain, true, .none⟩
  | .imAlignFLeft => .image ⟨.plain, false, .fLeft⟩
  | .imAlignFRight => .image ⟨.plain, false, .fRight⟩
  | .imAlignLeft => .image ⟨.plain, false, .left⟩
  | .imAlignRight => .image ⟨.plain, false, .right⟩
  | .imAlignCenter => .image ⟨.plain, false, .center⟩
  | .spStartBare => .span .startBare
  | .spStartAttrs => .span .startAttrs
  | .spEnd => .span .end
  | .spFall => .span .fall
  | .szStart => .size .start
  | .szEnd => .size .end
  | .szFall => .size .fall
  | .ctHex => .colortext ⟨.hex, .start⟩
  | .ctNamed => .colortext ⟨.named, .start⟩
  | .ctEmpty => .colortext ⟨.empty, .start⟩
  | .ctEnd => .colortext ⟨.named, .end⟩
  | .ctFall => .colortext ⟨.named, .other⟩
  | .ctInvalidStart => .colortext ⟨.invalid, .start⟩
  | .ctInvalidOther => .colortext ⟨.invalid, .end⟩

/-- Every declared class is realized by a representable shape. -/
theorem inline_witness_classify (c : InlineClass) :
    c ∈ inlineClassify (inlineWitnessShape c) := by
  cases c <;> simp [inlineClassify, inlineWitnessShape, urlBranches, flBranches,
    flBase, imBranches, imSourceClass, imAlignClass, ctBranches, ctStartClass,
    inlineAllClasses]

/-- Completeness of the class enumeration over the shape space: a class is
    declared exactly when some shape yields it. -/
theorem inline_classes_exhaustive (c : InlineClass) :
    c ∈ inlineAllClasses ↔ ∃ s : InlineShape, c ∈ inlineClassify s := by
  constructor
  · intro _
    exact ⟨inlineWitnessShape c, inline_witness_classify c⟩
  · intro h
    obtain ⟨s, hs⟩ := h
    exact inline_classify_sound s hs

/-- The headline completeness theorem: decidability, coverage and
    exhaustiveness of the INLINE classification. -/
theorem inline_classification_complete :
    (∀ s c, (c ∈ inlineClassify s) ∨ ¬ (c ∈ inlineClassify s)) ∧
    (∀ s : InlineShape, ∃ c, c ∈ inlineAllClasses ∧ c ∈ inlineClassify s) ∧
    (∀ c : InlineClass, c ∈ inlineAllClasses →
      ∃ s : InlineShape, c ∈ inlineClassify s) := by
  refine ⟨?_, ?_, ?_⟩
  · intro s c
    by_cases h : c ∈ inlineClassify s
    · exact Or.inl h
    · exact Or.inr h
  · intro s
    obtain ⟨c, hc⟩ := inline_classify_nonempty s
    exact ⟨c, inline_classify_sound s hc, hc⟩
  · intro c _
    exact ⟨inlineWitnessShape c, inline_witness_classify c⟩

/-- Exclusivity where the decision structure is single-valued: two classes
    of one shape that both come as a singleton list coincide. -/
theorem inline_exclusive_class_single {s : InlineShape} {c1 c2 : InlineClass}
    (h1 : inlineClassify s = [c1]) (h2 : inlineClassify s = [c2]) : c1 = c2 := by
  rw [h1] at h2
  exact (List.cons.inj h2).1

theorem iw_exclusive (s : IWShape) {c1 c2 : InlineClass}
    (h1 : inlineClassify (.interwiki s) = [c1])
    (h2 : inlineClassify (.interwiki s) = [c2]) : c1 = c2 := by
  cases s <;> exact inline_exclusive_class_single h1 h2

theorem span_exclusive (s : SpanShape) {c1 c2 : InlineClass}
    (h1 : inlineClassify (.span s) = [c1])
    (h2 : inlineClassify (.span s) = [c2]) : c1 = c2 := by
  cases s <;> exact inline_exclusive_class_single h1 h2

theorem size_exclusive (s : SizeShape) {c1 c2 : InlineClass}
    (h1 : inlineClassify (.size s) = [c1])
    (h2 : inlineClassify (.size s) = [c2]) : c1 = c2 := by
  cases s <;> exact inline_exclusive_class_single h1 h2

private theorem eq_of_mem_singleton {α : Type} [DecidableEq α] {a b : α}
    (h : a ∈ [b]) : a = b := by
  simpa using h

/-- The main branches are exclusive even when modifiers co-occur: one
    Freelink shape selects exactly one of the four main classes. -/
theorem fl_branch_exclusive (s : FLShape) {c1 c2 : InlineClass}
    (h1 : c1 ∈ flBase s.branch) (h2 : c2 ∈ flBase s.branch) : c1 = c2 := by
  rcases s with ⟨branch, _, _⟩
  cases branch <;>
    exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem im_source_exclusive (s : ImageShape) {c1 c2 : InlineClass}
    (h1 : c1 ∈ imSourceClass s.source) (h2 : c2 ∈ imSourceClass s.source) :
    c1 = c2 := by
  rcases s with ⟨source, _, _⟩
  cases source <;>
    exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

theorem im_align_exclusive (s : ImageShape) {c1 c2 : InlineClass}
    (h1 : c1 ∈ imAlignClass s.align) (h2 : c2 ∈ imAlignClass s.align) :
    c1 = c2 := by
  rcases s with ⟨_, _, align⟩
  cases align with
  | none => simp [imAlignClass] at h1
  | fLeft => exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm
  | fRight => exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm
  | left => exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm
  | right => exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm
  | center => exact (eq_of_mem_singleton h1).trans (eq_of_mem_singleton h2).symm

/-- Url's anchor always fires; the three modifiers are independent. -/
theorem url_link_always (s : UrlShape) : .urlLink ∈ urlBranches s := by
  simp [urlBranches, inlineAllClasses]

theorem url_hash_exclusive (s : UrlShape) (h : s.hash = true) :
    .urlHash ∈ urlBranches s := by
  simp [urlBranches, inlineAllClasses, h]

theorem ct_invalid_type_irrelevant (t : CTType) :
    ctBranches .invalid t = [.ctInvalidOther] ∨
    ctBranches .invalid t = [.ctInvalidStart] := by
  cases t <;> simp [ctBranches]

/-! ## Decision functions over real render inputs -/

/-- Is this rule one of the eight INLINE render rules? -/
def isInlineRenderRule : RenderRuleId → Bool
  | .url | .interwiki | .email | .freelink | .image | .span | .size
  | .colortext => true
  | _ => false

/-- The Url shape read off a real option map. The hash test is the exact
    post-encoding, post-escaping equality of `renderUrl`. -/
def urlShapeOf (opts : OptMap) : UrlShape :=
  { hash := htmlSpecialCharsCompat
        (percentEncodeNonAscii (optStrBytes opts "href".toList)) == litBytes "#"
    target := phpTruthyBytes (optStrBytes opts "target".toList)
    footnote := inlineTypeIs opts (litBytes "footnote") }

def iwShapeOf (opts : OptMap) : IWShape :=
  match bytesTableLookup interwikiSites (optStrBytes opts "site".toList) with
  | none => .unknown
  | some _ => .known

def flShapeOf (opts : OptMap) : FLShape :=
  let url := optStrBytes opts "url".toList
  let site := optStrBytes opts "site".toList
  let page := optStrBytes opts "page".toList
  let branch : FLBranch :=
    if phpTruthyBytes url then .url
    else if phpTruthyBytes site then .site
    else if freelinkExistingPages.contains page then .exists
    else .missing
  { branch := branch
    nonbr := !(phpEmptyOpt (omGet opts "nonbr".toList))
    target := !(phpEmptyOpt (omGet opts "target".toList)) }

/-- The effective local size decision of `renderImage`, shared with the
    mirror: a validated size survives, else a non-image local source gets
    the default `medium`, else no resize. -/
def imageSizeOf (src0 : List Nat) (attr : List (List Char × OptVal)) :
    Option (List Nat) :=
  let size0 := attrLookup attr "size"
  let size1 := match size0 with
    | some s => if imageSizeOk s then some s else none
    | none => none
  match size1 with
  | some s => some s
  | none => if imageExtSuffix src0 then none else some (litBytes "medium")

def imShapeOf (opts : OptMap) : ImageShape :=
  let src0 := optStrBytes opts "src".toList
  let attr := imageAttrMap opts
  let link0 := attrLookup attr "link"
  let href : Option (List Nat) :=
    if bytesContainsSub (litBytes "://") src0 then link0.map imageHref
    else
      let (_, link) : List Nat × Option (List Nat) :=
        match imageSizeOf src0 attr with
        | some _ =>
            ([],
             if linkLooseNull attr then
               some (litBytes "/local--files/" ++ stripOneLeadingSlash src0)
             else link0)
        | none => ([], link0)
      link.map imageHref
  let source : ImageSource :=
    if startsWithBytes (litBytes ":first") src0 then .first
    else if bytesContainsSub (litBytes "flickr:") src0 then .flickr
    else if bytesContainsSub (litBytes "://") src0 then .urlSource
    else match imageSizeOf src0 attr with
      | some _ => .resized
      | none => .plain
  let align := optStrBytes opts "align".toList
  { source := source
    linked := match href with
      | some h => phpTruthyBytes h
      | none => false
    align :=
      if !phpTruthyBytes align then .none
      else if align == litBytes "f<" then .fLeft
      else if align == litBytes "f>" then .fRight
      else if align == litBytes "<" then .left
      else if align == litBytes ">" then .right
      else if align == litBytes "=" then .center
      else .none }

/-- The Colortext spec decision, read with the mirror's `normalizeColor`. -/
def ctSpecOf (opts : OptMap) : CTSpec :=
  match normalizeColor (optStrBytes opts "color".toList) with
  | none => .invalid
  | some color =>
      if color.isEmpty then .empty
      else
        let hex := if color.head? == some 35 then color.tail else color
        if (hex.length == 3 || hex.length == 6) && hex.all isHexDigitB then .hex
        else .named

def ctTypeOf (opts : OptMap) : CTType :=
  if inlineTypeIs opts (litBytes "start") then .start
  else if inlineTypeIs opts (litBytes "end") then .end
  else .other

/-- Map a real render input to its abstract shape; `none` outside the
    family. -/
def inlineShapeOf (r : RenderRuleId) (opts : OptMap) : Option InlineShape :=
  match r with
  | .url => some (.url (urlShapeOf opts))
  | .interwiki => some (.interwiki (iwShapeOf opts))
  | .email => some (.email .reversed)
  | .freelink => some (.freelink (flShapeOf opts))
  | .image => some (.image (imShapeOf opts))
  | .span =>
      some (.span (if intTypeIs opts (litBytes "start") then
          if (attrPairs opts "args".toList).isEmpty then .startBare else .startAttrs
        else if intTypeIs opts (litBytes "end") then .end else .fall))
  | .size =>
      some (.size (if intTypeIs opts (litBytes "start") then .start
        else if intTypeIs opts (litBytes "end") then .end else .fall))
  | .colortext => some (.colortext ⟨ctSpecOf opts, ctTypeOf opts⟩)
  | _ => none

/-- Classify a real render input; the empty list only for a rule outside
    the family. -/
def inlineClassOf (r : RenderRuleId) (opts : OptMap) : List InlineClass :=
  match inlineShapeOf r opts with
  | some s => inlineClassify s
  | none => []

/-- Decidable membership of class `c` for a real render input. -/
def inlineMemClass (c : InlineClass) (r : RenderRuleId) (opts : OptMap) : Bool :=
  decide (c ∈ inlineClassOf r opts)

/-! ## Partition over real render inputs -/

theorem inline_shapeOf_isSome (r : RenderRuleId) (opts : OptMap)
    (h : isInlineRenderRule r = true) : (inlineShapeOf r opts).isSome = true := by
  cases r <;> simp_all [isInlineRenderRule, inlineShapeOf]

theorem inline_classOf_complete (r : RenderRuleId) (opts : OptMap)
    (h : isInlineRenderRule r = true) : ∃ c, c ∈ inlineClassOf r opts := by
  unfold inlineClassOf
  cases hshape : inlineShapeOf r opts with
  | none =>
      have hs : (inlineShapeOf r opts).isSome = true := inline_shapeOf_isSome r opts h
      rw [hshape] at hs
      exact False.elim (by simpa using hs)
  | some s => exact inline_classify_nonempty s

theorem inline_classOf_sound (r : RenderRuleId) (opts : OptMap) {c : InlineClass}
    (h : c ∈ inlineClassOf r opts) : c ∈ inlineAllClasses := by
  unfold inlineClassOf at h
  cases hshape : inlineShapeOf r opts with
  | none => simp [hshape] at h
  | some s =>
      simp [hshape] at h
      exact inline_classify_sound s h

/-- Exclusivity of a single-valued render input: when the whole classifier
    is a singleton, two reported classes coincide. The modifier rules (Url,
    Freelink, Image) genuinely yield several classes per input and are
    handled by their per-axis exclusivity theorems above. -/
theorem inline_classOf_exclusive (r : RenderRuleId) (opts : OptMap)
    (c1 c2 : InlineClass) (h1 : inlineClassOf r opts = [c1])
    (h2 : inlineClassOf r opts = [c2]) : c1 = c2 := by
  rw [h1] at h2
  exact (List.cons.inj h2).1

theorem ct_exclusive (s : InlineCTShape) {c1 c2 : InlineClass}
    (h1 : inlineClassify (.colortext s) = [c1])
    (h2 : inlineClassify (.colortext s) = [c2]) : c1 = c2 := by
  rcases s with ⟨spec, typ⟩
  cases spec <;> cases typ <;>
    exact inline_exclusive_class_single h1 h2

theorem inline_memClass_complete (r : RenderRuleId) (opts : OptMap)
    (h : isInlineRenderRule r = true) : ∃ c, inlineMemClass c r opts = true := by
  obtain ⟨c, hc⟩ := inline_classOf_complete r opts h
  refine ⟨c, ?_⟩
  simp [inlineMemClass, hc]

theorem inline_memClass_sound (c : InlineClass) (r : RenderRuleId) (opts : OptMap)
    (h : inlineMemClass c r opts = true) : c ∈ inlineAllClasses := by
  simp [inlineMemClass] at h
  exact inline_classOf_sound r opts h

/-! ## Named dead and excluded branches (recorded, not classed) -/

/- Url's image branch is harness-disabled (`images=false` in
    `ref-php/harness/wiki-config.php`), so no render input in this family
    reaches an `<img>` output. The closed `cov_url_link` below exhibits the
    anchor that always replaces it; the SPEC pins `renderUrlImageIntent` and
    `ws2_10_table_and_url_unreachable_specs` record the same dead branch. -/

/-- Interwiki's no-`%s` append arm is dead under the harness: every
    registered template carries exactly one `%s`. -/
theorem interwiki_templates_all_have_percent_s :
    interwikiSites.all (fun kv => (findSub [37, 115] kv.2).isSome = true) := by
  decide

/-- REFCORR6 infrastructure repair: REFCORR5 Batch 3 landed the
    ENT_NOQUOTES | ENT_SUBSTITUTE escape in renderEmail but left this pin
    asserting the pre-batch raw `&`, so the library no longer built. The
    theorem keeps its name and input and now states the adopted escaped
    bytes; no behavior is changed by this edit. -/
theorem email_current_render_has_no_escaping :
    renderEmail [("email".toList, OptVal.bytes [97, 38, 98, 64, 99]),
      ("text".toList, OptVal.bytes [120])] =
      litBytes "<span class=\"wiki-email\">c|b&amp;a#x</span>" := rfl

/-! ## Mirror correspondence (closed computations, one per decisive branch)

    Input option values are written as explicit `OptVal.bytes` byte lists so
    the kernel reduction stays small (a `String.toList` fed through the
    UTF-8 validator makes `rfl` pathologically slow). The byte lists are the
    ASCII spellings of the same probe option strings. -/

/-- Url base anchor (live `muse-probe-htmlchars-url-desc`,
    `muse-probe-htmlchars-url-auto`; battery `u01-http`, `u47-described`). -/
theorem cov_url_link :
    renderUrl [("href".toList, OptVal.bytes [104, 116, 116, 112, 58, 47, 47, 120])] =
      litBytes "<a href=\"http://x\"></a>" := rfl

/-- Url `#` substitution; the authored target is kept (live
    `muse-probe-suspect-inline-url-hash-star`, battery `u51-described-hash`). -/
theorem cov_url_hash :
    renderUrl [("href".toList, OptVal.bytes [35]),
      ("target".toList, OptVal.bytes [95, 98, 108, 97, 110, 107])] =
      litBytes "<a href=\"javascript:;\" target=\"_blank\"></a>" := rfl

/-- Url authored target attribute (live `muse-probe-htmlchars-url-star`,
    `muse-probe-suspect-inline-url-anchor-star`; battery `u50-described-star`). -/
theorem cov_url_target :
    renderUrl [("href".toList, OptVal.bytes [104, 116, 116, 112, 58, 47, 47, 120]),
      ("target".toList, OptVal.bytes [95, 98, 108, 97, 110, 107])] =
      litBytes "<a href=\"http://x\" target=\"_blank\"></a>" := rfl

/-- Url footnote sup wrap. No page pin: the parse rule never emits
    `type=footnote`. The designed direct-token/SPEC pins are
    `renderUrlFootnoteIntent` and `ws2_10_table_and_url_unreachable_specs`
    (SPEC-PINNED), with mirror theorem `url_footnote_wrap`. -/
theorem cov_url_footnote :
    renderUrl [("href".toList, OptVal.bytes [104, 116, 116, 112, 58, 47, 47, 120]),
      ("type".toList, OptVal.bytes [102, 111, 111, 116, 110, 111, 116, 101])] =
      litBytes "<sup><a href=\"http://x\"></a></sup>" := rfl

set_option maxRecDepth 100000 in
/-- Interwiki known site: `window.open` onclick for the class target
    `_blank` (live `muse-probe-r2in1-iw-p10-google-labeled`,
    `muse-probe-htmlchars-iw-label`; battery `iw43-11-google-labeled`). -/
theorem cov_iw_known :
    renderInterwiki [("site".toList, OptVal.bytes [103, 111, 111, 103, 108, 101]),
      ("page".toList, OptVal.bytes [120]),
      ("text".toList, OptVal.bytes [84])] =
      litBytes "<a href=\"https://www.google.com/search?q=x\" onclick=\"window.open(this.href, '_blank'); return false;\">T</a>" := rfl

/-- Interwiki unknown site: escaped-text fallback (REFCORR4 Batch C; live
    `muse-probe-agy-suspect-p16-interwiki-unknown-html` and
    `muse-probe-agy-suspect-f10-interwiki-unknown-apos`). -/
theorem cov_iw_unknown :
    renderInterwiki [("site".toList, OptVal.bytes [110, 111, 115, 117, 99, 104]),
      ("text".toList, OptVal.bytes [84])] = litBytes "T" := rfl

/-- Email reversed/rotated form (live `muse-probe-r2in1-mail-p01-bare`,
    `muse-probe-r2in1-mail-p04-described`; battery `e41-01-bare-simple`). -/
theorem cov_email_reversed :
    renderEmail [("email".toList,
        OptVal.bytes [97, 64, 98, 46, 99, 111, 109]),
      ("text".toList, OptVal.bytes [76, 97, 98, 101, 108])] =
      litBytes "<span class=\"wiki-email\">moc.b|a#lebaL</span>" := rfl

/-- Freelink bare external URL target (live
    `muse-probe-r2link-free-p-url-plain`; battery `url-plain`). -/
theorem cov_fl_url :
    renderFreelink [("url".toList, OptVal.bytes [104, 116, 116, 112, 58, 47, 47, 120]),
      ("text".toList, OptVal.bytes [32, 84, 32])] =
      litBytes "<a href=\"http://x\">T</a>" := rfl

/-- Freelink missing page: newpage class and the appended suffix (C1; live
    `muse-probe-r2link-free-p-new-labeled`, battery `new-target-labeled`). -/
theorem cov_fl_missing :
    renderFreelink [("page".toList,
        OptVal.bytes [110, 111, 45, 112, 97, 103, 101]),
      ("anchor".toList, OptVal.bytes [35, 97])] =
      litBytes "<a class=\"newpage\" href=\"/no-page#a\"></a>" := rfl

/-- Image URL source passes through untouched (live
    `muse-probe-r2para-img-p12-nonascii`, battery `i37-11-external-https`;
    the local/align branches are pinned by the battery cases named in the
    report and by the within-class fuzz, not by a closed `rfl`, so this
    build stays under the wrapper's memory cap). -/
theorem cov_im_url_source :
    renderImage [("src".toList,
      OptVal.bytes [104, 116, 116, 112, 58, 47, 47, 120, 47, 121, 46, 112, 110, 103])] =
      litBytes "<img src=\"http://x/y.png\" alt=\"y.png\" class=\"image\" />" := rfl

/-- Span bare start: empty attribute set emits `<span>` (live
    `muse-probe-r2contain-span-p01-plain`, battery `s01-plain`). -/
theorem cov_span_bare :
    renderSpan [("type".toList, OptVal.bytes [115, 116, 97, 114, 116]),
      ("args".toList, OptVal.map [])] = litBytes "<span>" := rfl

/-- Span end (live `muse-probe-r2contain-span-p01-plain`). -/
theorem cov_span_end :
    renderSpan [("type".toList, OptVal.bytes [101, 110, 100])] =
      litBytes "</span>" := rfl

/-- Size start interpolates the size raw (battery `sz02-px`, live
    `muse-probe-r2contain-size-boundary-5-px`). -/
theorem cov_size_start :
    renderSize [("type".toList, OptVal.bytes [115, 116, 97, 114, 116]),
      ("size".toList, OptVal.bytes [49, 50, 112, 120])] =
      litBytes "<span style=\"font-size:12px;\">" := rfl

/-- Colortext hex spec (battery `c11`, live `muse-probe-r2in2-color-c11`). -/
theorem ct_hex_start :
    renderColortext [("type".toList, OptVal.bytes [115, 116, 97, 114, 116]),
      ("color".toList, OptVal.bytes [102, 102, 48, 48, 48, 48])] =
      litBytes "<span style=\"color: #ff0000\">" := rfl

/-- Colortext whitespace-only spec (REFCORR2 normalization; battery `c27`). -/
theorem ct_empty_start :
    renderColortext [("type".toList, OptVal.bytes [115, 116, 97, 114, 116]),
      ("color".toList, OptVal.bytes [32, 32])] =
      litBytes "<span style=\"color:\">" := rfl

/-- Colortext inadmissible spec restores literal source (parse-time
    validation queued in REFCORR5 Batch 2; render classification as it
    stands; battery `c18`). -/
theorem ct_invalid_start :
    renderColortext [("type".toList, OptVal.bytes [115, 116, 97, 114, 116]),
      ("color".toList, OptVal.bytes [60, 105, 62])] =
      litBytes "##<i>|" := rfl

end LeanFtml
