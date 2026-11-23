/-
  ServingRender.lean — R4.8 entry points, disposition scan,
  and characterization theorems for the serving-layer and
  stubbed render rules mirrored in
  `LeanFtml/ServingRules.lean` (Freelink, Module, Module654,
  Math, Image, Gallery, User).

  The disposition scan follows the R4.7 `Text_Highlighter`
  pattern: `renderWithR48` first renders through the shared
  dispatcher, then folds the names of any serving-layer
  boundary the document's referenced tokens rest on into the
  outcome's `unmirrored` list, so such a case is EXCLUDED by
  construction and can never be counted as a pass. The four
  boundaries (see the `ServingRules.lean` header for the full
  account):

  * `User:DB_OzoneUserPeer` — every User token (the harness
    tree has no `Criteria` class; PHP fatals before either
    branch of the rule).
  * `Image:FlickrHandler` — an Image token whose source
    contains `flickr:` without taking the `:first` path.
  * `Gallery:FlickrHandler` — a Gallery token with a
    processed source row whose source contains `flickr:`
    (row classification shared with the render itself via
    `galleryRowSrc`).
  * `Freelink:textFromTitle` — a Freelink token in the local
    branch with `textFromTitle` set whose page exists (the
    title lookup calls a stub method that does not exist).
-/

import LeanFtml.TokenState
import LeanFtml.NotesRender
import LeanFtml.ServingRules
import LeanFtml.Pipeline

namespace LeanFtml

/-! ## R4.8 dispatcher and entry points -/

/-- The combined dispatcher for the sixty-one render rules
    mirrored through R4.8 (definitionally `dispatchRenderR41`,
    extended in this stage; see its doc comment in
    `LeanFtml/NotesRender.lean`). -/
def dispatchRenderR48 :
    RenderRuleId → RenderConf → DocState → OptMap → List Nat :=
  dispatchRenderR41

/-- The serving-layer boundary name a token entry contributes,
    if any (see the file header). -/
def servingBoundaryOf (entry : TokenEntry) : Option String :=
  if entry.rule == "User" then some "User:DB_OzoneUserPeer"
  else if entry.rule == "Image" then
    let src := optStrBytes entry.opts "src".toList
    if startsWithBytes (litBytes ":first") src then none
    else if bytesContainsSub (litBytes "flickr:") src then
      some "Image:FlickrHandler"
    else none
  else if entry.rule == "Gallery" then
    let sources := optStrBytes entry.opts "sources".toList
    if phpTruthyBytes sources &&
        (explodeByte 10 sources).any (fun row =>
          match galleryRowSrc row with
          | some src => bytesContainsSub (litBytes "flickr:") src
          | none => false) then
      some "Gallery:FlickrHandler"
    else none
  else if entry.rule == "Freelink" then
    let url := optStrBytes entry.opts "url".toList
    let page := optStrBytes entry.opts "page".toList
    if !(phpTruthyBytes url) &&
        !(phpEmptyOpt (omGet entry.opts "textFromTitle".toList)) &&
        freelinkExistingPages.contains page then
      some "Freelink:textFromTitle"
    else none
  else none

/-- The boundary names contributed by a segment list's
    referenced tokens, in encounter order, deduplicated. -/
def servingBoundaryNamesIn (lookup : Nat → Option TokenEntry)
    (work : List TSeg) : List String :=
  work.foldl (fun acc seg =>
    match seg with
    | .tok k =>
        match lookup k with
        | some e =>
            match servingBoundaryOf e with
            | some n => pushUnique acc n
            | none => acc
        | none => acc
    | .text _ => acc) []

/-- Render from an arbitrary token lookup function under the
    R4.8 mirrored render rules, with the serving-layer
    boundaries named in the outcome (used directly by the
    conformance driver on raw `state-restricted.php` batch
    states whose token keys are cumulative process-global
    ids). -/
def renderWithR48 (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) : RenderOutcome :=
  let base := renderWith dispatchRenderR48 lookup conf work doc
  { base with
    unmirrored := (servingBoundaryNamesIn lookup work).foldl pushUnique
      base.unmirrored }

/-- Render an R3 `ParseState` (0-indexed `st.tokens`) under the
    R4.8 mirrored render rules. -/
def renderStateR48 (conf : RenderConf) (st : ParseState) : RenderOutcome :=
  renderWithR48 (fun k => st.tokens[k]?) conf st.work st.doc

/-- End-to-end Lean parse+render on top of the full pipeline
    (`convCRLF` → `pipelineR48` → `renderStateR48`). -/
def renderServingE2E (conf : RenderConf) (tags : List (List Char))
    (source : List Char) : RenderOutcome :=
  let st0 : ParseState :=
    { ParseState.ofSource (convCRLF source) with doc.page.tags := tags }
  let st := runRules pipelineR48 st0
  renderStateR48 conf st

/-! ## Theorems: Module and Math characterizations -/

/-- Module, available name, no attr and no body: the bare
    handoff marker with the name's case preserved. -/
theorem module_known_marker :
    renderModule [("moduleName".toList, .str "backlinks".toList),
        ("attr".toList, .str "".toList),
        ("module_body".toList, .str "".toList)] =
      [195, 190] ++ litBytes "module \"backlinks\"" ++ [195, 190] := rfl

/-- Module, available name in upper case: availability is
    case-insensitive, the emitted name is not folded. -/
theorem module_known_upper_marker :
    renderModule [("moduleName".toList, .str "BACKLINKS".toList),
        ("attr".toList, .str "".toList),
        ("module_body".toList, .str "".toList)] =
      [195, 190] ++ litBytes "module \"BACKLINKS\"" ++ [195, 190] := rfl

/-- Module, unknown name: the R2-corrected "No such module"
    error block, name raw. -/
theorem module_unknown_error :
    renderModule [("moduleName".toList, .str "nosuch".toList),
        ("attr".toList, .str "".toList),
        ("module_body".toList, .str "".toList)] =
      litBytes "<div class=\"error-block\">[[module <em>nosuch</em>]] " ++
        litBytes "No such module, please " ++
        litBytes "<a href=\"https://www.wikidot.com/doc:modules\" " ++
        litBytes "target=\"_blank\">check available modules</a> " ++
        litBytes "and fix this page.</div>" := rfl

/-- Module, body-bearing: the body is appended to the attr as
    ` module_body="<urlencoded body>"` and the whole attr is
    urlencoded as one string inside the space-padded segment. -/
theorem module_body_marker :
    renderModule [("moduleName".toList, .str "css".toList),
        ("attr".toList, .str "".toList),
        ("module_body".toList, .str "x".toList)] =
      [195, 190] ++
        litBytes "module \"css\" +module_body%3D%22x%22 " ++
        [195, 190] := rfl

/-- Math: every token renders the constant fossil failure
    block under the harness's no-op LatexRenderer stub. -/
theorem math_error_block :
    renderMath [("content".toList, .str "x".toList),
        ("type".toList, .str "equation".toList)] =
      litBytes "<div class=\"error-block\">The equation has not " ++
        litBytes "been processed correctly. Most prabably it has " ++
        litBytes "syntax error(s).</div>" := rfl

/-- REFCORR3 C-SUSPECT-SERVING-1: an upper-case environment is
    rejected, with the equation counter still advanced at parse. -/
theorem math_unsupported_uppercase :
    renderMath [("content".toList, .str "x".toList),
        ("type".toList, .str "ALIGN".toList)] =
      litBytes "<div class=\"error-block\">Unsupported math " ++
        litBytes "environment \"ALIGN\"</div>" := rfl

/-- REFCORR3 C-SUSPECT-SERVING-1: an empty environment type is
    rejected the same way. -/
theorem math_unsupported_empty :
    renderMath [("content".toList, .str "x".toList),
        ("type".toList, .str [])] =
      litBytes "<div class=\"error-block\">Unsupported math " ++
        litBytes "environment \"\"</div>" := rfl

/-! ## Theorems: User and the entry-point dispositions -/

/-- User, not-found branch (the rule's recorded content under
    a user-directory miss; never used to claim a pass in this
    tier, because the scan below names the boundary for every
    User token). -/
theorem user_not_found :
    renderUser [("userName".toList, .str "a".toList)] =
      litBytes "<span class=\"error-inline\"><em>a</em> does not " ++
        litBytes "match any existing user name</span>" := by
  unfold renderUser
  dsimp
  rw [htmlSpecialCharsCompat_ascii _ (by decide)]
  rfl

/-- The disposition at the entry point: a document whose only
    token is a User reference is NOT complete, and its
    `unmirrored` list names the boundary exactly. -/
theorem user_boundary_excluded :
    (renderStateR48 {}
      { work := [.tok 0],
        tokens := [
          { rule := "User",
            opts := [("userName".toList, .str "a".toList)] } ],
        doc := {} }).unmirrored =
      ["User:DB_OzoneUserPeer"] := rfl

/-- The same document's outcome is incomplete (companion to
    `user_boundary_excluded`). -/
theorem user_boundary_incomplete :
    (renderStateR48 {}
      { work := [.tok 0],
        tokens := [
          { rule := "User",
            opts := [("userName".toList, .str "a".toList)] } ],
        doc := {} }).isComplete = false := rfl

/-- The Freelink disposition: an existing page with
    `textFromTitle` set names `Freelink:textFromTitle`. -/
theorem freelink_title_boundary :
    servingBoundaryOf
      { rule := "Freelink",
        opts := [("page".toList, .str "other-page".toList),
          ("text".toList, .str "".toList),
          ("textFromTitle".toList, .bool true)] } =
      some "Freelink:textFromTitle" := rfl

/-- The Image disposition: a `flickr:` source names
    `Image:FlickrHandler`; a `:first` source does not (it
    renders the empty string deterministically). -/
theorem image_flickr_boundary :
    servingBoundaryOf
      { rule := "Image",
        opts := [("src".toList, .str "flickr:123".toList)] } =
      some "Image:FlickrHandler" := rfl

theorem image_first_no_boundary :
    servingBoundaryOf
      { rule := "Image",
        opts := [("src".toList, .str ":first".toList)] } = none := rfl

/-! ## Theorems: Freelink, Image, and Gallery characterizations -/

/-- Freelink, existing page with an anchor: the plain anchor
    with the suffix appended. -/
theorem freelink_exists_anchor :
    renderFreelink [("page".toList, .str "other-page".toList),
        ("text".toList, .str "lbl".toList),
        ("anchor".toList, .str "#s".toList),
        ("extra".toList, .str "".toList)] =
      litBytes "<a href=\"/other-page#s\">lbl</a>" := by
  unfold renderFreelink
  dsimp
  rw [htmlSpecialCharsCompat_ascii _ (by decide),
    htmlSpecialCharsCompat_ascii _ (by decide),
    htmlSpecialCharsCompat_ascii _ (by decide),
    htmlSpecialCharsCompat_ascii _ (by decide)]
  rfl

/-- Freelink, missing page: the `newpage` class, with the
    anchor suffix kept (correction C1). -/
theorem freelink_new_anchor :
    renderFreelink [("page".toList, .str "no-page".toList),
        ("text".toList, .str "lbl".toList),
        ("anchor".toList, .str "#s".toList),
        ("extra".toList, .str "".toList)] =
      litBytes "<a class=\"newpage\" href=\"/no-page#s\">lbl</a>" := by
  unfold renderFreelink
  dsimp
  rw [htmlSpecialCharsCompat_ascii _ (by decide),
    htmlSpecialCharsCompat_ascii _ (by decide),
    htmlSpecialCharsCompat_ascii _ (by decide),
    htmlSpecialCharsCompat_ascii _ (by decide)]
  rfl

/-- Freelink, `textFromTitle` on a missing page: the text
    falls back to the page name. -/
theorem freelink_title_missing_fallback :
    renderFreelink [("page".toList, .str "no-page".toList),
        ("text".toList, .str "".toList),
        ("textFromTitle".toList, .bool true)] =
      litBytes "<a class=\"newpage\" href=\"/no-page\">no-page</a>" := by
  unfold renderFreelink
  dsimp
  rw [htmlSpecialCharsCompat_ascii _ (by decide),
    htmlSpecialCharsCompat_ascii _ (by decide),
    htmlSpecialCharsCompat_ascii _ (by decide),
    htmlSpecialCharsCompat_ascii _ (by decide)]
  rfl

/-- Image, plain local source: the files path under the unset
    page name (doubled slash), the default `alt` from the
    basename, and the automatic `image` class. -/
theorem image_plain_local :
    renderImage [("src".toList, .str "a.png".toList),
        ("attr".toList, .map [])] =
      litBytes "<img src=\"/local--files//a.png\" alt=\"a.png\" " ++
        litBytes "class=\"image\" />" := by
  unfold renderImage
  dsimp
  rw [htmlSpecialCharsCompat_ascii _ (by decide),
    htmlSpecialCharsCompat_ascii _ (by decide)]
  rfl

/-- Image, `:first` source: the empty string (the page lookup
    keys on the unset page name and misses). -/
theorem image_first_empty :
    renderImage [("src".toList, .str ":first".toList),
        ("attr".toList, .map [])] = [] := rfl

/-- Gallery, no sources: the constant local-mode block (the
    page lookup keys on the unset page name and misses). -/
theorem gallery_local_mode_block :
    renderGallery [("sources".toList, .null)] =
      litBytes "<div class=\"error-block\">Error selecting page.</div>" :=
  rfl

set_option maxRecDepth 8192 in
/- Gallery, one local source row: the thumbnail item with
   the resized image, the original-file href, and the fossil
   template's trailing anchor space (empty target). Proof-local
   recursion depth raised per the brief's measured R4.6 remedy. -/
theorem gallery_one_local_row :
    renderGallery [("sources".toList, .str "\n: a.png".toList)] =
      litBytes "<div class=\"gallery-box\">" ++
        litBytes "<div class=\"gallery-item thumbnail\">" ++
        litBytes "<table><tr><td><a href=\"/local--files//a.png\" >" ++
        litBytes "<img src=\"/local--resized-images//a.png/thumbnail.jpg\" " ++
        litBytes "alt=\"\"/></a></td></tr></table></div></div>" := rfl

end LeanFtml
