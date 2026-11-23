/-
  LeanFtml.CoverageServe — the coverage-tier classification of the serving render family (BRIEF-COVERAGE-SERVE, 2026-11-22): Gallery, User, Button and Embed at render grain.

  The classes are the branch decisions of the reference `token()` methods under the harness configuration (`ref-php/harness/wiki-config.php`, `ref_configure_wiki`), read from the current mirror: `ServingRules.lean` (`renderGallery`, `renderUser`), `InteractiveRules.lean` (`renderButton`, the REFVAL2 / C-REFVAL2-3 button tables) and `CodeEmbedRules.lean` (`renderEmbed`, the REFCORR4 allowlist and scheme cascade). A class is a decidable predicate of an abstract decision shape, and `serveClassOf` reads that shape off a real `RenderRuleId` and `OptMap`.

  Environment boundaries are recorded and are not silent. `gaFlickr` is the Gallery `FlickrHandler` arm: a designed direct-call class whose harness `token()` fatals, the same treatment CoverageInline gave `imFlickr`. The found-page attachment loop (`DB_PagePeer` hit, then `DB_FilePeer`) is not a class: the harness page name is unset, so the reference returns the page-miss block before that loop, and the miss itself is the class `gaPageMiss`. The two Gallery `no_local` returns are not classes: the harness never sets that conf. The User found-user path (`WDRenderUtils::renderUser`) is not a class: the harness fatals on `Criteria` before either branch, and the mirrored content of a directory miss is the class `usNotFound`. The Button `$hrefs` table is empty, so the `hrefs[$type]` arm is not a class. Embed's inner scheme tests are classes; the allowlist is the match-versus-`emNoMatch` decision over `embedPatterns`, not one class per pattern.

  Names were checked against the three existing coverage modules before use. This file defines `serveClassify`, `ServeClass` and `ServeShape`. It does not define `classify`, `allClasses`, `CTShape` or `memClass`.

  No sorry and no sorryAx. The classification theorems stay inside the programme core [propext, Classical.choice, Quot.sound]. Audit lines are staged in coverage-serve-audit-block.txt. Main.lean is not edited by this lane.
-/

import LeanFtml.ServingRules
import LeanFtml.InteractiveRules
import LeanFtml.CodeEmbedRules

namespace LeanFtml

/-! ## The class enumeration -/

/-- One branch class per decision Gallery, User, Button and Embed can take on a token under the harness. `serveAllClasses` enumerates them; every constructor has a pin in REPORT-COVERAGE-SERVE.md. -/
inductive ServeClass where
  /- Gallery.php size cascade, then the sources/row cascade, then row modifiers. -/
  | gaSizeSmall | gaSizeMedium | gaSizeThumbnail | gaSizeSquare
  | gaSizeOriginal | gaSizeDefault
  | gaPageMiss | gaNoItem
  | gaFlickr | gaLocalSlashed | gaLocalPlain | gaExternal
  | gaStarSrc | gaAlt | gaLinkUrl | gaLinkPage | gaLinkStar
  /- User.php not-found message. The found-user path is not a constructor. -/
  | usNotFound
  /- Button.php allowlist in source order, then the two early returns, then modifiers. -/
  | btEdit | btEditAppend | btEditSections | btHistory | btPrint
  | btFiles | btTags | btSource | btTalk | btBacklinks
  | btRename | btDelete | btParent | btEditMeta | btWatchers | btSetTags
  | btInvalid | btSetTagsEmpty
  | btStyle | btClassCustom | btTextCustom
  /- Embed.php: allowlist miss, then the rejection cascade, then passthrough. -/
  | emNoMatch | emEvent | emSrcJavascript | emSrcVbscript
  | emAttrJavascript | emAttrVbscript | emAttrData | emPass | emLangStrip
  deriving DecidableEq, Repr

/-- The declared class set, in reference rule order and then in the order of the branches in each PHP `token()`. -/
def serveAllClasses : List ServeClass :=
  [ .gaSizeSmall, .gaSizeMedium, .gaSizeThumbnail, .gaSizeSquare,
    .gaSizeOriginal, .gaSizeDefault,
    .gaPageMiss, .gaNoItem,
    .gaFlickr, .gaLocalSlashed, .gaLocalPlain, .gaExternal,
    .gaStarSrc, .gaAlt, .gaLinkUrl, .gaLinkPage, .gaLinkStar,
    .usNotFound,
    .btEdit, .btEditAppend, .btEditSections, .btHistory, .btPrint,
    .btFiles, .btTags, .btSource, .btTalk, .btBacklinks,
    .btRename, .btDelete, .btParent, .btEditMeta, .btWatchers, .btSetTags,
    .btInvalid, .btSetTagsEmpty,
    .btStyle, .btClassCustom, .btTextCustom,
    .emNoMatch, .emEvent, .emSrcJavascript, .emSrcVbscript,
    .emAttrJavascript, .emAttrVbscript, .emAttrData, .emPass, .emLangStrip ]

theorem serveAllClasses_nodup : serveAllClasses.Nodup := by decide

theorem serveAllClasses_length : serveAllClasses.length = 48 := by decide

/-! ## Decision shapes -/

/-- Gallery size after `in_array`. Anything outside the five literals, including an absent size, is `defaulted` (the reference assigns `thumbnail`). Explicit `thumbnail` is its own arm. -/
inductive GaSize where
  | small | medium | thumbnail | square | original | defaulted
  deriving DecidableEq, Repr

/-- One processed Gallery row's source kind. `flickr` is the handler boundary. -/
inductive GaKind where
  | external | localSlashed | localPlain | flickr
  deriving DecidableEq, Repr

/-- A Gallery link after the star strip. `url` means `strpos('://')` is truthy (index at least 1). -/
inductive GaLink where
  | none | url | page
  deriving DecidableEq, Repr

/-- Features of one `": "` Gallery row. For an external source the reference overwrites `link` with the source, and the classifier does the same. -/
structure GaRow where
  kind : GaKind
  starSrc : Bool
  alt : Bool
  link : GaLink
  linkStar : Bool
  deriving DecidableEq, Repr

/-- Token-level Gallery outcome. `box` is a non-flickr item list; the class function re-checks emptiness so a bad payload still lands in a declared class. -/
inductive GalOutcome where
  | pageMiss
  | flickrTok
  | noItem
  | box (size : GaSize) (rows : List GaRow)
  deriving DecidableEq, Repr

/-- Button type after ASCII lowercasing, in the reference table order. -/
inductive BtType where
  | edit | editAppend | editSections | history | print | files | tags
  | source | talk | backlinks | rename | delete | parent | editMeta
  | watchers | setTags
  deriving DecidableEq, Repr

/-- Button cascade: invalid type, textless `set-tags`, or one allowed type plus the three modifiers. -/
inductive BtMode where
  | invalid
  | setTagsEmpty
  | ok (ty : BtType) (style classCustom textCustom : Bool)
  deriving DecidableEq, Repr

/-- Embed cascade after the allowlist test. `pass` carries the language-attribute strip, which is visible only on the passthrough. -/
inductive EmMode where
  | noMatch
  | event
  | srcJavascript
  | srcVbscript
  | attrJavascript
  | attrVbscript
  | attrData
  | pass (langStrip : Bool)
  deriving DecidableEq, Repr

/-- Abstract input of one serving-render decision. A multi-row gallery is a `GalOutcome`, not one of these; each of its rows is realized by a `ServeShape`. -/
inductive ServeShape where
  | galleryPageMiss
  | galleryFlickr
  | galleryNoItem
  | galleryItem (size : GaSize) (row : GaRow)
  | userNotFound
  | button (m : BtMode)
  | embed (m : EmMode)
  deriving DecidableEq, Repr

/-! ## Classifiers -/

def gaSizeClass : GaSize → ServeClass
  | .small => .gaSizeSmall
  | .medium => .gaSizeMedium
  | .thumbnail => .gaSizeThumbnail
  | .square => .gaSizeSquare
  | .original => .gaSizeOriginal
  | .defaulted => .gaSizeDefault

def gaKindClass : GaKind → List ServeClass
  | .external => [.gaExternal]
  | .localSlashed => [.gaLocalSlashed]
  | .localPlain => [.gaLocalPlain]
  | .flickr => [.gaFlickr]

def gaLinkClasses (row : GaRow) : List ServeClass :=
  match row.kind with
  | .external => [.gaLinkUrl]
  | .flickr => []
  | .localSlashed | .localPlain =>
      match row.link with
      | .none => []
      | .url => [.gaLinkUrl] ++ (if row.linkStar then [.gaLinkStar] else [])
      | .page => [.gaLinkPage] ++ (if row.linkStar then [.gaLinkStar] else [])

/-- Classes contributed by one row, not including the token's size. A flickr row contributes only the handler class. -/
def gaRowMods (row : GaRow) : List ServeClass :=
  if row.kind == .flickr then [.gaFlickr]
  else
    gaKindClass row.kind ++
      (if row.starSrc then [.gaStarSrc] else []) ++
      (if row.alt then [.gaAlt] else []) ++
      gaLinkClasses row

/-- Classes of one non-boundary item, or just `gaFlickr` when the row is the handler. -/
def gaItemClasses (size : GaSize) (row : GaRow) : List ServeClass :=
  if row.kind == .flickr then [.gaFlickr]
  else gaSizeClass size :: gaRowMods row

def classesOfOutcome : GalOutcome → List ServeClass
  | .pageMiss => [.gaPageMiss]
  | .flickrTok => [.gaFlickr]
  | .noItem => [.gaNoItem]
  | .box size rows =>
      cond (rows.any (fun r => r.kind == .flickr)) [.gaFlickr]
        (cond rows.isEmpty [.gaNoItem]
          (gaSizeClass size :: rows.foldl (fun acc r => acc ++ gaRowMods r) []))

def btTypeClass : BtType → ServeClass
  | .edit => .btEdit
  | .editAppend => .btEditAppend
  | .editSections => .btEditSections
  | .history => .btHistory
  | .print => .btPrint
  | .files => .btFiles
  | .tags => .btTags
  | .source => .btSource
  | .talk => .btTalk
  | .backlinks => .btBacklinks
  | .rename => .btRename
  | .delete => .btDelete
  | .parent => .btParent
  | .editMeta => .btEditMeta
  | .watchers => .btWatchers
  | .setTags => .btSetTags

/-- The one primary class of a button mode. Modifiers are extra. After
    REFCORR13 R13-AGY2 D10 only `.setTagsEmpty` (an ABSENT `text` key) is
    the empty-text error; a present-but-falsy `text` (`"0"` or `""`) is an
    ordinary `.ok .setTags` with an empty label. -/
def btPrimary : BtMode → ServeClass
  | .invalid => .btInvalid
  | .setTagsEmpty => .btSetTagsEmpty
  | .ok ty _ _ _ => btTypeClass ty

def btClasses : BtMode → List ServeClass
  | .invalid => [.btInvalid]
  | .setTagsEmpty => [.btSetTagsEmpty]
  | .ok ty style cc tc =>
      [btTypeClass ty] ++
        (if style then [.btStyle] else []) ++
        (if cc then [.btClassCustom] else []) ++
        (if tc then [.btTextCustom] else [])

def emClasses : EmMode → List ServeClass
  | .noMatch => [.emNoMatch]
  | .event => [.emEvent]
  | .srcJavascript => [.emSrcJavascript]
  | .srcVbscript => [.emSrcVbscript]
  | .attrJavascript => [.emAttrJavascript]
  | .attrVbscript => [.emAttrVbscript]
  | .attrData => [.emAttrData]
  | .pass false => [.emPass]
  | .pass true => [.emPass, .emLangStrip]

def serveClassify : ServeShape → List ServeClass
  | .galleryPageMiss => [.gaPageMiss]
  | .galleryFlickr => [.gaFlickr]
  | .galleryNoItem => [.gaNoItem]
  | .galleryItem size row => gaItemClasses size row
  | .userNotFound => [.usNotFound]
  | .button m => btClasses m
  | .embed m => emClasses m

/-! ## Completeness over the abstract shapes -/

theorem bt_ok_nonempty (ty : BtType) (style cc tc : Bool) :
    ∃ c, c ∈ btClasses (.ok ty style cc tc) := by
  match ty, tc with
  | .setTags, false => exact ⟨.btSetTags, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .setTags, true => exact ⟨.btSetTags, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .edit, _ => exact ⟨.btEdit, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .editAppend, _ => exact ⟨.btEditAppend, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .editSections, _ => exact ⟨.btEditSections, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .history, _ => exact ⟨.btHistory, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .print, _ => exact ⟨.btPrint, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .files, _ => exact ⟨.btFiles, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .tags, _ => exact ⟨.btTags, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .source, _ => exact ⟨.btSource, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .talk, _ => exact ⟨.btTalk, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .backlinks, _ => exact ⟨.btBacklinks, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .rename, _ => exact ⟨.btRename, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .delete, _ => exact ⟨.btDelete, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .parent, _ => exact ⟨.btParent, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .editMeta, _ => exact ⟨.btEditMeta, by simp [btClasses, btTypeClass, List.mem_cons]⟩
  | .watchers, _ => exact ⟨.btWatchers, by simp [btClasses, btTypeClass, List.mem_cons]⟩



def serveClassMemDecidable (s : ServeShape) (c : ServeClass) :
    Decidable (c ∈ serveClassify s) := inferInstance

theorem serveAllClasses_mem (c : ServeClass) : c ∈ serveAllClasses := by
  cases c <;> decide

theorem serve_classify_sound (s : ServeShape) {c : ServeClass}
    (_h : c ∈ serveClassify s) : c ∈ serveAllClasses :=
  serveAllClasses_mem c

theorem serve_classify_nonempty (s : ServeShape) : ∃ c, c ∈ serveClassify s := by
  cases s with
  | galleryPageMiss => exact ⟨.gaPageMiss, by simp [serveClassify]⟩
  | galleryFlickr => exact ⟨.gaFlickr, by simp [serveClassify]⟩
  | galleryNoItem => exact ⟨.gaNoItem, by simp [serveClassify]⟩
  | galleryItem size row =>
      cases hkind : row.kind with
      | flickr =>
          exact ⟨.gaFlickr, by
            have : (row.kind == .flickr) = true := by simp [hkind]
            simp [serveClassify, gaItemClasses, this]⟩
      | external | localSlashed | localPlain =>
          exact ⟨gaSizeClass size, by
            have : (row.kind == .flickr) = false := by simp [hkind]
            simp [serveClassify, gaItemClasses, this, List.mem_cons]⟩
  | userNotFound => exact ⟨.usNotFound, by simp [serveClassify]⟩
  | button m =>
      cases m with
      | invalid => exact ⟨.btInvalid, by simp [serveClassify, btClasses]⟩
      | setTagsEmpty => exact ⟨.btSetTagsEmpty, by simp [serveClassify, btClasses]⟩
      | ok ty style cc tc =>
          obtain ⟨c, hc⟩ := bt_ok_nonempty ty style cc tc
          exact ⟨c, by simpa [serveClassify] using hc⟩
  | embed m =>
      cases m with
      | noMatch => exact ⟨.emNoMatch, by simp [serveClassify, emClasses]⟩
      | event => exact ⟨.emEvent, by simp [serveClassify, emClasses]⟩
      | srcJavascript => exact ⟨.emSrcJavascript, by simp [serveClassify, emClasses]⟩
      | srcVbscript => exact ⟨.emSrcVbscript, by simp [serveClassify, emClasses]⟩
      | attrJavascript => exact ⟨.emAttrJavascript, by simp [serveClassify, emClasses]⟩
      | attrVbscript => exact ⟨.emAttrVbscript, by simp [serveClassify, emClasses]⟩
      | attrData => exact ⟨.emAttrData, by simp [serveClassify, emClasses]⟩
      | pass b =>
          cases b <;> exact ⟨.emPass, by simp [serveClassify, emClasses]⟩

/-- A plain local row: the witness carrier for the size classes and the local-plain class. -/
def gaPlain : GaRow :=
  { kind := .localPlain, starSrc := false, alt := false, link := .none, linkStar := false }

def serveWitnessShape : ServeClass → ServeShape
  | .gaSizeSmall => .galleryItem .small gaPlain
  | .gaSizeMedium => .galleryItem .medium gaPlain
  | .gaSizeThumbnail => .galleryItem .thumbnail gaPlain
  | .gaSizeSquare => .galleryItem .square gaPlain
  | .gaSizeOriginal => .galleryItem .original gaPlain
  | .gaSizeDefault => .galleryItem .defaulted gaPlain
  | .gaPageMiss => .galleryPageMiss
  | .gaNoItem => .galleryNoItem
  | .gaFlickr => .galleryFlickr
  | .gaLocalSlashed =>
      .galleryItem .thumbnail { gaPlain with kind := .localSlashed }
  | .gaLocalPlain => .galleryItem .thumbnail gaPlain
  | .gaExternal =>
      .galleryItem .thumbnail { gaPlain with kind := .external, link := .url }
  | .gaStarSrc => .galleryItem .thumbnail { gaPlain with starSrc := true }
  | .gaAlt => .galleryItem .thumbnail { gaPlain with alt := true }
  | .gaLinkUrl =>
      .galleryItem .thumbnail { gaPlain with kind := .external, link := .url }
  | .gaLinkPage =>
      .galleryItem .thumbnail { gaPlain with link := .page }
  | .gaLinkStar =>
      .galleryItem .thumbnail { gaPlain with link := .url, linkStar := true }
  | .usNotFound => .userNotFound
  | .btEdit => .button (.ok .edit false false false)
  | .btEditAppend => .button (.ok .editAppend false false false)
  | .btEditSections => .button (.ok .editSections false false false)
  | .btHistory => .button (.ok .history false false false)
  | .btPrint => .button (.ok .print false false false)
  | .btFiles => .button (.ok .files false false false)
  | .btTags => .button (.ok .tags false false false)
  | .btSource => .button (.ok .source false false false)
  | .btTalk => .button (.ok .talk false false false)
  | .btBacklinks => .button (.ok .backlinks false false false)
  | .btRename => .button (.ok .rename false false false)
  | .btDelete => .button (.ok .delete false false false)
  | .btParent => .button (.ok .parent false false false)
  | .btEditMeta => .button (.ok .editMeta false false false)
  | .btWatchers => .button (.ok .watchers false false false)
  | .btSetTags => .button (.ok .setTags false false true)
  | .btInvalid => .button .invalid
  | .btSetTagsEmpty => .button .setTagsEmpty
  | .btStyle => .button (.ok .edit true false false)
  | .btClassCustom => .button (.ok .edit false true false)
  | .btTextCustom => .button (.ok .edit false false true)
  | .emNoMatch => .embed .noMatch
  | .emEvent => .embed .event
  | .emSrcJavascript => .embed .srcJavascript
  | .emSrcVbscript => .embed .srcVbscript
  | .emAttrJavascript => .embed .attrJavascript
  | .emAttrVbscript => .embed .attrVbscript
  | .emAttrData => .embed .attrData
  | .emPass => .embed (.pass false)
  | .emLangStrip => .embed (.pass true)

theorem serve_witness_classify (c : ServeClass) :
    c ∈ serveClassify (serveWitnessShape c) := by
  cases c <;> decide

theorem serve_classes_exhaustive (c : ServeClass) :
    c ∈ serveAllClasses ↔ ∃ s : ServeShape, c ∈ serveClassify s := by
  constructor
  · intro _
    exact ⟨serveWitnessShape c, serve_witness_classify c⟩
  · intro h
    obtain ⟨s, hs⟩ := h
    exact serve_classify_sound s hs

/-- Decidability, coverage and exhaustiveness of the serving classification over its decision shapes. -/
theorem serve_classification_complete :
    (∀ s c, (c ∈ serveClassify s) ∨ ¬ (c ∈ serveClassify s)) ∧
    (∀ s : ServeShape, ∃ c, c ∈ serveAllClasses ∧ c ∈ serveClassify s) ∧
    (∀ c : ServeClass, c ∈ serveAllClasses →
      ∃ s : ServeShape, c ∈ serveClassify s) := by
  refine ⟨?_, ?_, ?_⟩
  · intro s c
    by_cases h : c ∈ serveClassify s
    · exact Or.inl h
    · exact Or.inr h
  · intro s
    obtain ⟨c, hc⟩ := serve_classify_nonempty s
    exact ⟨c, serve_classify_sound s hc, hc⟩
  · intro c _
    exact ⟨serveWitnessShape c, serve_witness_classify c⟩

/-! ## Exclusivity of the cascades -/

theorem ga_size_exclusive (size : GaSize) {c1 c2 : ServeClass}
    (h1 : c1 ∈ [gaSizeClass size]) (h2 : c2 ∈ [gaSizeClass size]) : c1 = c2 := by
  simp at h1 h2
  exact h1.trans h2.symm

theorem ga_kind_exclusive (k : GaKind) {c1 c2 : ServeClass}
    (h1 : c1 ∈ gaKindClass k) (h2 : c2 ∈ gaKindClass k) : c1 = c2 := by
  cases k <;> simp [gaKindClass] at h1 h2 <;> exact h1.trans h2.symm

/-- A row contributes at most one of `gaLinkUrl` and `gaLinkPage`. An external source is always the URL arm, because the reference overwrites the link with the source. -/
theorem ga_link_not_both (row : GaRow) :
    .gaLinkUrl ∈ gaLinkClasses row → .gaLinkPage ∈ gaLinkClasses row → False := by
  rcases row with ⟨kind, _, _, link, linkStar⟩
  cases kind <;> cases link <;> cases linkStar <;> simp [gaLinkClasses]

theorem bt_invalid_single : btClasses .invalid = [.btInvalid] := rfl

theorem bt_set_tags_empty_single : btClasses .setTagsEmpty = [.btSetTagsEmpty] := rfl

theorem bt_primary_mem (m : BtMode) : btPrimary m ∈ btClasses m := by
  cases m with
  | invalid => simp [btPrimary, btClasses]
  | setTagsEmpty => simp [btPrimary, btClasses]
  | ok ty style cc tc =>
      cases ty <;> cases tc <;>
        simp [btPrimary, btClasses, btTypeClass, List.mem_cons]

theorem us_single : serveClassify .userNotFound = [.usNotFound] := rfl

theorem em_nomatch_single : emClasses .noMatch = [.emNoMatch] := rfl

theorem em_event_single : emClasses .event = [.emEvent] := rfl

theorem em_src_javascript_single : emClasses .srcJavascript = [.emSrcJavascript] := rfl

theorem em_src_vbscript_single : emClasses .srcVbscript = [.emSrcVbscript] := rfl

theorem em_attr_javascript_single : emClasses .attrJavascript = [.emAttrJavascript] := rfl

theorem em_attr_vbscript_single : emClasses .attrVbscript = [.emAttrVbscript] := rfl

theorem em_attr_data_single : emClasses .attrData = [.emAttrData] := rfl

theorem em_pass_base (b : Bool) : .emPass ∈ emClasses (.pass b) := by
  cases b <;> simp [emClasses]

/-! ## Reading a real token -/

def gaSizeOf (bs : List Nat) : GaSize :=
  if bs == litBytes "small" then .small
  else if bs == litBytes "medium" then .medium
  else if bs == litBytes "thumbnail" then .thumbnail
  else if bs == litBytes "square" then .square
  else if bs == litBytes "original" then .original
  else .defaulted

/-- Link kind of a Gallery attribute value. The star is stripped before the `://` test, matching `Gallery.php`. -/
def gaLinkOf (raw : List Nat) : GaLink × Bool :=
  if startsWithBytes [42] raw then
    let body := raw.drop 1
    if containsSubFrom1 (litBytes "://") body then (.url, true) else (.page, true)
  else if containsSubFrom1 (litBytes "://") raw then (.url, false)
  else (.page, false)

/-- Parse one source line. `none` when the line is not a `": "` item. -/
def parseGalleryRow (row : List Nat) : Option GaRow :=
  if !startsWithBytes [58, 32] row then none
  else
    let body := phpTrimBytes (row.drop 2)
    let (src0, attrs) := gallerySplitRow body
    let star := startsWithBytes [42] src0
    let src := if star then src0.drop 1 else src0
    let alt := (galleryAttrGet attrs (litBytes "alt")).isSome
    if bytesContainsSub (litBytes "flickr:") src then
      some { kind := .flickr, starSrc := star, alt := alt, link := .none, linkStar := false }
    else if !bytesContainsSub (litBytes "://") src then
      let kind := if bytesContainsSub [47] src then GaKind.localSlashed else GaKind.localPlain
      let (link, linkStar) :=
        match galleryAttrGet attrs (litBytes "link") with
        | some l => gaLinkOf l
        | none => (GaLink.none, false)
      some { kind := kind, starSrc := star, alt := alt, link := link, linkStar := linkStar }
    else
      some { kind := .external, starSrc := star, alt := alt, link := .url, linkStar := false }

def galleryRowsOf (sources : List Nat) : List GaRow :=
  (explodeByte 10 sources).filterMap parseGalleryRow

def galleryOutcome (opts : OptMap) : GalOutcome :=
  let sources := optStrBytes opts "sources".toList
  if !phpTruthyBytes sources then .pageMiss
  else
    let rows := galleryRowsOf sources
    if rows.any (fun r => r.kind == .flickr) then .flickrTok
    else if rows.isEmpty then .noItem
    else .box (gaSizeOf (optStrBytes opts "size".toList)) rows

def galleryClassesOf (opts : OptMap) : List ServeClass :=
  classesOfOutcome (galleryOutcome opts)

def btTypeOf (ty : List Nat) : Option BtType :=
  if ty == litBytes "edit" then some .edit
  else if ty == litBytes "edit-append" then some .editAppend
  else if ty == litBytes "edit-sections" then some .editSections
  else if ty == litBytes "history" then some .history
  else if ty == litBytes "print" then some .print
  else if ty == litBytes "files" then some .files
  else if ty == litBytes "tags" then some .tags
  else if ty == litBytes "source" then some .source
  else if ty == litBytes "talk" then some .talk
  else if ty == litBytes "backlinks" then some .backlinks
  else if ty == litBytes "rename" then some .rename
  else if ty == litBytes "delete" then some .delete
  else if ty == litBytes "parent" then some .parent
  else if ty == litBytes "edit-meta" then some .editMeta
  else if ty == litBytes "watchers" then some .watchers
  else if ty == litBytes "set-tags" then some .setTags
  else none

def buttonModeOf (opts : OptMap) : BtMode :=
  let ty := asciiLowerBytes (optStrBytes opts "type".toList)
  let text := optStrBytes opts "text".toList
  match btTypeOf ty with
  | none => .invalid
  | some t =>
      if t == .setTags && (omGet opts "text".toList).isNone then .setTagsEmpty
      else
        .ok t
          (phpTruthyBytes (optStrBytes opts "style".toList))
          (phpTruthyBytes (optStrBytes opts "class".toList))
          (phpTruthyBytes text)

/-- Which bad scheme a lowered attribute value carries. `javascript:` wins, then `vbscript:`, then `data:`. -/
def attrScheme (val : List Nat) : Option EmMode :=
  let lv := asciiLowerBytes val
  if bytesContainsSub (litBytes "javascript:") lv then some .attrJavascript
  else if bytesContainsSub (litBytes "vbscript:") lv then some .attrVbscript
  else if bytesContainsSub (litBytes "data:") lv then some .attrData
  else none

/-- First non-`src` attribute value that carries a script scheme, in match order. -/
def firstAttrScheme : List Nat → Nat → Option EmMode
  | _, 0 => none
  | bs, fuel + 1 =>
      match attrMatchHere bs with
      | some (name, val, rest) =>
          if asciiLowerBytes name == litBytes "src" then firstAttrScheme rest fuel
          else
            match attrScheme val with
            | some m => some m
            | none => firstAttrScheme rest fuel
      | none =>
          match bs with
          | _ :: rest => firstAttrScheme rest fuel
          | [] => none

def embedModeOf (opts : OptMap) : EmMode :=
  let content := phpTrimBytes (optStrBytes opts "content".toList)
  match embedPatterns.find? (fun p => pcreMatch p content) with
  | none => .noMatch
  | some _ =>
      let stripped := pcreReplaceAll languageStripPattern content
      let lang := stripped != content
      if hasEventAttr stripped then .event
      else
        match findSrcValue stripped with
        | some v =>
            let lv := asciiLowerBytes (phpTrimBytes v)
            if (litBytes "javascript:").isPrefixOf lv then .srcJavascript
            else if (litBytes "vbscript:").isPrefixOf lv then .srcVbscript
            else
              match firstAttrScheme stripped (stripped.length + 1) with
              | some m => m
              | none => .pass lang
        | none =>
            match firstAttrScheme stripped (stripped.length + 1) with
            | some m => m
            | none => .pass lang

def isServeRenderRule : RenderRuleId → Bool
  | .gallery | .user | .button | .embed => true
  | _ => false

/-- A representative shape. A multi-row gallery is represented by its first item; `serveClassOf` still returns the union of every row. -/
def galleryRepr (opts : OptMap) : ServeShape :=
  match galleryOutcome opts with
  | .pageMiss => .galleryPageMiss
  | .flickrTok => .galleryFlickr
  | .noItem => .galleryNoItem
  | .box size rows =>
      match rows with
      | [] => .galleryNoItem
      | r :: _ => .galleryItem size r

def serveShapeOf (r : RenderRuleId) (opts : OptMap) : Option ServeShape :=
  match r with
  | .gallery => some (galleryRepr opts)
  | .user => some .userNotFound
  | .button => some (.button (buttonModeOf opts))
  | .embed => some (.embed (embedModeOf opts))
  | _ => none

def serveClassOf (r : RenderRuleId) (opts : OptMap) : List ServeClass :=
  match r with
  | .gallery => galleryClassesOf opts
  | .user => [.usNotFound]
  | .button => serveClassify (.button (buttonModeOf opts))
  | .embed => serveClassify (.embed (embedModeOf opts))
  | _ => []

def serveMemClass (c : ServeClass) (r : RenderRuleId) (opts : OptMap) : Bool :=
  decide (c ∈ serveClassOf r opts)

/-! ## The real-token partition -/

theorem serve_shapeOf_isSome (r : RenderRuleId) (opts : OptMap)
    (h : isServeRenderRule r = true) : (serveShapeOf r opts).isSome = true := by
  cases r <;> simp_all [isServeRenderRule, serveShapeOf]

/-- Every class a gallery outcome emits is the class list of some abstract shape. -/
theorem mem_foldl_acc (acc : List ServeClass) (rows : List GaRow) (c : ServeClass)
    (h : c ∈ rows.foldl (fun a r => a ++ gaRowMods r) acc) :
    c ∈ acc ∨ ∃ r, r ∈ rows ∧ c ∈ gaRowMods r := by
  induction rows generalizing acc with
  | nil =>
      simp only [List.foldl] at h
      exact Or.inl h
  | cons r rs ih =>
      simp only [List.foldl] at h
      have h' := ih (acc ++ gaRowMods r) h
      cases h' with
      | inl hacc =>
          rw [List.mem_append] at hacc
          cases hacc with
          | inl h1 => exact Or.inl h1
          | inr h2 => exact Or.inr ⟨r, List.mem_cons_self, h2⟩
      | inr hex =>
          obtain ⟨r', hr', hc⟩ := hex
          exact Or.inr ⟨r', List.mem_cons_of_mem r hr', hc⟩

theorem ga_row_not_flickr_of_any {rows : List GaRow} {r : GaRow}
    (h : rows.any (fun x => x.kind == .flickr) = false) (hr : r ∈ rows) :
    (r.kind == .flickr) = false := by
  induction rows with
  | nil => cases hr
  | cons x xs ih =>
      simp only [List.any_cons, Bool.or_eq_false_iff] at h
      simp only [List.mem_cons] at hr
      cases hr with
      | inl hx =>
          subst hx
          exact h.1
      | inr hx =>
          exact ih h.2 hx

theorem mem_box_realized (size : GaSize) (rows : List GaRow) {c : ServeClass}
    (hne : rows ≠ [])
    (hf : rows.any (fun r => r.kind == .flickr) = false)
    (h : c ∈ gaSizeClass size :: rows.foldl (fun acc r => acc ++ gaRowMods r) []) :
    ∃ s : ServeShape, c ∈ serveClassify s := by
  have hsplit : c = gaSizeClass size ∨
      c ∈ rows.foldl (fun acc r => acc ++ gaRowMods r) [] := by
    simpa [List.mem_cons] using h
  cases hsplit with
  | inl heq =>
      cases rows with
      | nil => exact absurd rfl hne
      | cons r rs =>
          have hk : (r.kind == .flickr) = false :=
            ga_row_not_flickr_of_any hf List.mem_cons_self
          refine ⟨.galleryItem size r, ?_⟩
          simp only [serveClassify, gaItemClasses, hk, heq]
          exact List.mem_cons_self
  | inr hc =>
      have hacc := mem_foldl_acc [] rows c hc
      cases hacc with
      | inl hempty => simp at hempty
      | inr hex =>
          obtain ⟨r, hr, hmem⟩ := hex
          have hk : (r.kind == .flickr) = false := ga_row_not_flickr_of_any hf hr
          refine ⟨.galleryItem size r, ?_⟩
          simp only [serveClassify, gaItemClasses, hk]
          exact List.mem_cons_of_mem _ hmem

theorem classes_realized_of_outcome {o : GalOutcome} {c : ServeClass}
    (h : c ∈ classesOfOutcome o) : ∃ s : ServeShape, c ∈ serveClassify s := by
  cases o with
  | pageMiss =>
      simp only [classesOfOutcome] at h
      exact ⟨.galleryPageMiss, by simpa only [serveClassify] using h⟩
  | flickrTok =>
      simp only [classesOfOutcome] at h
      exact ⟨.galleryFlickr, by simpa only [serveClassify] using h⟩
  | noItem =>
      simp only [classesOfOutcome] at h
      exact ⟨.galleryNoItem, by simpa only [serveClassify] using h⟩
  | box size rows =>
      obtain ht | hf := Classical.em (rows.any (fun r => r.kind == .flickr) = true)
      · have h' : c ∈ [.gaFlickr] := by
          simp only [classesOfOutcome] at h
          rw [ht] at h
          simpa [Bool.cond_true] using h
        exact ⟨.galleryFlickr, by simpa only [serveClassify] using h'⟩
      · have hf' : rows.any (fun r => r.kind == .flickr) = false :=
          Bool.eq_false_iff.mpr hf
        simp only [classesOfOutcome, hf', Bool.cond_false] at h
        cases rows with
        | nil =>
            simp only [List.isEmpty, Bool.cond_true] at h
            exact ⟨.galleryNoItem, by simpa only [serveClassify] using h⟩
        | cons r rs =>
            simp only [List.isEmpty, Bool.cond_false] at h
            exact mem_box_realized size (r :: rs) (by simp) hf' h

theorem gallery_classes_realized (opts : OptMap) {c : ServeClass}
    (h : c ∈ galleryClassesOf opts) : ∃ s : ServeShape, c ∈ serveClassify s :=
  classes_realized_of_outcome (by simpa only [galleryClassesOf] using h)

theorem classesOfOutcome_nonempty (o : GalOutcome) : ∃ c, c ∈ classesOfOutcome o := by
  cases o with
  | pageMiss => exact ⟨.gaPageMiss, by simp [classesOfOutcome]⟩
  | flickrTok => exact ⟨.gaFlickr, by simp [classesOfOutcome]⟩
  | noItem => exact ⟨.gaNoItem, by simp [classesOfOutcome]⟩
  | box size rows =>
      obtain ht | hf := Classical.em (rows.any (fun r => r.kind == .flickr) = true)
      · exact ⟨.gaFlickr, by simp [classesOfOutcome, ht]⟩
      · have hf' : rows.any (fun r => r.kind == .flickr) = false :=
          Bool.eq_false_iff.mpr hf
        cases rows with
        | nil => exact ⟨.gaNoItem, by simp [classesOfOutcome, hf', List.isEmpty]⟩
        | cons _ _ =>
            exact ⟨gaSizeClass size, by simp [classesOfOutcome, hf', List.isEmpty, List.mem_cons]⟩

theorem emClasses_nonempty (m : EmMode) : ∃ c, c ∈ emClasses m := by
  cases m with
  | noMatch => exact ⟨.emNoMatch, by simp [emClasses]⟩
  | event => exact ⟨.emEvent, by simp [emClasses]⟩
  | srcJavascript => exact ⟨.emSrcJavascript, by simp [emClasses]⟩
  | srcVbscript => exact ⟨.emSrcVbscript, by simp [emClasses]⟩
  | attrJavascript => exact ⟨.emAttrJavascript, by simp [emClasses]⟩
  | attrVbscript => exact ⟨.emAttrVbscript, by simp [emClasses]⟩
  | attrData => exact ⟨.emAttrData, by simp [emClasses]⟩
  | pass b => cases b <;> exact ⟨.emPass, by simp [emClasses]⟩

theorem btClasses_nonempty (m : BtMode) : ∃ c, c ∈ btClasses m := by
  cases m with
  | invalid => exact ⟨.btInvalid, by simp [btClasses]⟩
  | setTagsEmpty => exact ⟨.btSetTagsEmpty, by simp [btClasses]⟩
  | ok ty style cc tc => exact bt_ok_nonempty ty style cc tc

theorem gallery_classOf_nonempty (opts : OptMap) :
    ∃ c, c ∈ serveClassOf .gallery opts := by
  obtain ⟨c, hc⟩ := classesOfOutcome_nonempty (galleryOutcome opts)
  exact ⟨c, by simpa only [serveClassOf, galleryClassesOf] using hc⟩

theorem user_classOf_nonempty (opts : OptMap) :
    ∃ c, c ∈ serveClassOf .user opts :=
  ⟨.usNotFound, by simp [serveClassOf]⟩

theorem button_classOf_nonempty (opts : OptMap) :
    ∃ c, c ∈ serveClassOf .button opts := by
  obtain ⟨c, hc⟩ := btClasses_nonempty (buttonModeOf opts)
  exact ⟨c, by simpa only [serveClassOf, serveClassify] using hc⟩

theorem embed_classOf_nonempty (opts : OptMap) :
    ∃ c, c ∈ serveClassOf .embed opts := by
  obtain ⟨c, hc⟩ := emClasses_nonempty (embedModeOf opts)
  exact ⟨c, by simpa only [serveClassOf, serveClassify] using hc⟩

/-- The four rules of this family, as a proof rather than a boolean, so the partition theorems case on four constructors. -/
inductive IsServe : RenderRuleId → Prop where
  | gallery : IsServe .gallery
  | user : IsServe .user
  | button : IsServe .button
  | embed : IsServe .embed

theorem isServe_of_bool {r : RenderRuleId} (h : isServeRenderRule r = true) : IsServe r := by
  cases r <;> first
    | exact .gallery
    | exact .user
    | exact .button
    | exact .embed
    | exact absurd h (by decide)

theorem serveClassOf_empty (r : RenderRuleId) (opts : OptMap)
    (h : isServeRenderRule r = false) : serveClassOf r opts = [] := by
  cases r <;> first
    | exact absurd h (by decide)
    | simp [serveClassOf]

theorem serve_classOf_nonempty (r : RenderRuleId) (opts : OptMap)
    (hr : isServeRenderRule r = true) : ∃ c, c ∈ serveClassOf r opts := by
  cases isServe_of_bool hr with
  | gallery => exact gallery_classOf_nonempty opts
  | user => exact user_classOf_nonempty opts
  | button => exact button_classOf_nonempty opts
  | embed => exact embed_classOf_nonempty opts

theorem serve_classOf_sound (r : RenderRuleId) (opts : OptMap) {c : ServeClass}
    (h : c ∈ serveClassOf r opts) : c ∈ serveAllClasses := by
  by_cases hr : isServeRenderRule r = true
  · cases isServe_of_bool hr with
    | gallery =>
        obtain ⟨s, hs⟩ := gallery_classes_realized opts (by simpa only [serveClassOf] using h)
        exact serve_classify_sound s hs
    | user =>
        exact serve_classify_sound .userNotFound (by simpa only [serveClassOf, serveClassify] using h)
    | button =>
        exact serve_classify_sound (.button (buttonModeOf opts)) (by simpa only [serveClassOf] using h)
    | embed =>
        exact serve_classify_sound (.embed (embedModeOf opts)) (by simpa only [serveClassOf] using h)
  · simp [serveClassOf_empty r opts (Bool.eq_false_iff.mpr hr)] at h

theorem serve_memClass_complete (c : ServeClass) (r : RenderRuleId) (opts : OptMap) :
    serveMemClass c r opts = true ↔ c ∈ serveClassOf r opts := by
  simp [serveMemClass]

theorem serve_memClass_sound (c : ServeClass) (r : RenderRuleId) (opts : OptMap)
    (h : serveMemClass c r opts = true) : c ∈ serveAllClasses :=
  serve_classOf_sound r opts ((serve_memClass_complete c r opts).mp h)

/-- Falsy `sources` is exactly the page-miss class. That is the arm the harness enters; the found-page attachment loop is not reached and is not a class. -/
theorem gallery_falsy_is_page_miss (opts : OptMap)
    (h : phpTruthyBytes (optStrBytes opts "sources".toList) = false) :
    serveClassOf .gallery opts = [.gaPageMiss] := by
  simp only [serveClassOf, galleryClassesOf, galleryOutcome, classesOfOutcome, h, Bool.not_false, ite_true]

/-- `explode` on the empty string still yields one piece, so Gallery's `count($sources) === 0` return is dead on that input. The same contract holds for every input: the `go` helper always conses a final piece. -/
theorem explodeByte_nil_nonempty : explodeByte 10 [] = [[]] := rfl

theorem explodeByte_go_nonempty (sep : Nat) (bs cur : List Nat) (acc : List (List Nat)) :
    0 < (explodeByte.go sep bs cur acc).length := by
  induction bs generalizing cur acc with
  | nil =>
      simp [explodeByte.go, List.length_append]
  | cons b rest ih =>
      simp only [explodeByte.go]
      split
      · exact ih [] (acc ++ [cur.reverse])
      · exact ih (b :: cur) acc

theorem explodeByte_nonempty (sep : Nat) (bs : List Nat) :
    0 < (explodeByte sep bs).length :=
  explodeByte_go_nonempty sep bs [] []

/-- The mirror of the harness page-miss, the constant block `Gallery.php` returns when `selectByName` misses. -/
theorem cov_gallery_page_miss :
    renderGallery [("sources".toList, .null)] =
      litBytes "<div class=\"error-block\">Error selecting page.</div>" := rfl

/-- The mirrored not-found message for a one-byte name. The found-user path is not this function. -/
theorem cov_user_not_found :
    renderUser [("userName".toList, .str "a".toList)] =
      litBytes "<span class=\"error-inline\"><em>a</em> does not match any existing user name</span>" := by
  unfold renderUser
  dsimp
  rw [htmlSpecialCharsCompat_ascii _ (by decide)]
  rfl

/-- An unlisted button type renders the normalized-type error and nothing else. -/
theorem cov_button_invalid :
    renderButton [("type".toList, .str "Nope".toList)] =
      litBytes "<div class=\"error-block\"><em>nope</em> is not a valid button type</div>" := by
  unfold renderButton buttonAllowed
  rfl

/-- The classifier's type table is the mirror's allowlist, on each literal and on one rejected type. -/
theorem button_allowlist_agrees :
    (buttonAllowed (litBytes "edit") = true ∧ btTypeOf (litBytes "edit") = some .edit) ∧
    (buttonAllowed (litBytes "edit-append") = true ∧ btTypeOf (litBytes "edit-append") = some .editAppend) ∧
    (buttonAllowed (litBytes "edit-sections") = true ∧ btTypeOf (litBytes "edit-sections") = some .editSections) ∧
    (buttonAllowed (litBytes "history") = true ∧ btTypeOf (litBytes "history") = some .history) ∧
    (buttonAllowed (litBytes "print") = true ∧ btTypeOf (litBytes "print") = some .print) ∧
    (buttonAllowed (litBytes "files") = true ∧ btTypeOf (litBytes "files") = some .files) ∧
    (buttonAllowed (litBytes "tags") = true ∧ btTypeOf (litBytes "tags") = some .tags) ∧
    (buttonAllowed (litBytes "source") = true ∧ btTypeOf (litBytes "source") = some .source) ∧
    (buttonAllowed (litBytes "talk") = true ∧ btTypeOf (litBytes "talk") = some .talk) ∧
    (buttonAllowed (litBytes "backlinks") = true ∧ btTypeOf (litBytes "backlinks") = some .backlinks) ∧
    (buttonAllowed (litBytes "rename") = true ∧ btTypeOf (litBytes "rename") = some .rename) ∧
    (buttonAllowed (litBytes "delete") = true ∧ btTypeOf (litBytes "delete") = some .delete) ∧
    (buttonAllowed (litBytes "parent") = true ∧ btTypeOf (litBytes "parent") = some .parent) ∧
    (buttonAllowed (litBytes "edit-meta") = true ∧ btTypeOf (litBytes "edit-meta") = some .editMeta) ∧
    (buttonAllowed (litBytes "watchers") = true ∧ btTypeOf (litBytes "watchers") = some .watchers) ∧
    (buttonAllowed (litBytes "set-tags") = true ∧ btTypeOf (litBytes "set-tags") = some .setTags) ∧
    (buttonAllowed (litBytes "lock") = false ∧ btTypeOf (litBytes "lock") = none) := by
  decide

end LeanFtml
