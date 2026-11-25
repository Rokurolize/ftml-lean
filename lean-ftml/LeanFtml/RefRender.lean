/-
  LeanFtml.RefRender — F3 foundation unit: `RenderEnv` threading (`renderMirrorEnv`),
  PHP-traceable Tier-2 reference specification (`renderRefSpec`), and `ReachableTok`.

  Every `refXhtml*` helper transcribes the corresponding top-level PHP `token($options)`
  branch logic in `ref-php/text-wiki/Text/Wiki/Render/Xhtml/<Rule>.php` under the TCB-3
  stdlib primitives (`htmlSpecialCharsCompat`, `htmlSpecialCharsNoQuotesSubst`,
  `htmlEntities`, `phpTrimBytes`, `urlencodeBytes`, `asciiLowerBytes`, `percentEncodeNonAscii`,
  `optStrBytes`, `omGet`, `phpEmptyOpt`, `phpTruthyBytes`, `natBytes`) and explicitly named
  shared low-level sub-helpers (`footnoteLeadVisible`, `bibLookup`, `crc32Mod`, `mathinlineEscByte`,
  `interwikiSites`/`sprintfPercentS`, `normalizeColor`, `wikidotEscapeRaw`/`formIndentGo`,
  `tocTitle`/`tocStripDelim`, `renderAttrsCompat`/`renderAttrsQuotesSubst`, `attrsFragment`,
  `wikidotLabel`/`tabviewTabItems`/`buttonAllowed`/`buttonDefaultText`/`buttonOnclick`/
  `iframePart`/`joinSpaceBytes`/`canonTimestamp`/`encodeDateFormat`/`formatTimestamp`/`phpIntCast`/
  `replaceSubBytes`, `wikidotTrimCodeBody`/`embedPatterns`/`renderEmbedWith`, `imageAttrMap`/
  `attrLookup`/`imageSizeOk`/`linkLooseNull`/`assembleImageHtml`, `gallerySize`/`galleryGetAttrs`/
  `gallerySplitRow`/`galleryItemText`/`galleryAttrGet`/`gallerySanitizeHref`).

  `renderMirrorEnv` threads `env : RenderEnv` through all nine environment-sensitive rules
  (`.module`, `.module654`, `.freelink`, `.code`, `.math`, `.user`, `.image`, `.gallery`, `.file`)
  and delegates the remaining 53 pure rules to `dispatchRenderR41`.

  Harness alignment note: `RenderEnv.harnessExistingPages` (9 entries, including the
  REFCORR13 D13 target `muse-probe-agy-hunt-title-target`) strictly extends
  `ServingRules.freelinkExistingPages` (8 entries). Consequently,
  `renderMirrorEnv harnessEnv r conf doc opts = dispatchRenderR41 r conf doc opts`
  holds unconditionally on 61 of the 62 rules and on `.freelink` whenever
  `optStrBytes opts "page".toList ≠ d13TitleTargetPage`, while `renderFreelinkWithEnv_d13_witness`
  records the separating D13 token.

  Standing Tier-2 remainders (named cleanly):
  1. Shared low-level sub-helpers listed above are reused on both sides rather than duplicated.
  2. Token-table threading is now part of `renderRefSpec` through its trailing optional
     `lookup : Nat → Option TokenEntry`, consumed only by `.footnoteitem` and `.gallery`;
     the single-token `RenderProofBundle` signature uses the default no-lookup form.
     Residual Gallery token-composition limits are the shallow (nonrecursive)
     `renderTokenId` fallback and reconstructed rather than independent `tokenSource` state.
  3. `RenderCore.ufffdWalk` / `Stage2_TidyCore`: literal U+FFFD recovery rescanning and
     `purifyRecoveredHtml` (`Stage2` boundary).

  Axioms: Lean core only (`[propext, Classical.choice, Quot.sound]`); no `sorry`, no
  `native_decide`, no `bv_decide`, no `ofReduceBool`.
-/
import LeanFtml.RenderEnv
import LeanFtml.NotesRender
import LeanFtml.ModuleHandoffProof
import LeanFtml.ProofInterface

namespace LeanFtml

/-! ## Environment-threaded mirror helpers -/

/-- Effective page segment parameterized by `RenderEnv`: `conf.pageName` wins when
    non-empty, then `env.pageName`, then `doc.page.name` UTF-8 encoded. Since
    `harnessEnv.pageName = []`, this coincides definitionally with `docPageSegment`
    under `harnessEnv`. -/
def envPageSegment (env : RenderEnv) (conf : RenderConf) (doc : DocState) : List Nat :=
  if !conf.pageName.isEmpty then conf.pageName
  else if !env.pageName.isEmpty then env.pageName
  else doc.page.name.flatMap utf8Bytes

@[simp]
theorem envPageSegment_harness (conf : RenderConf) (doc : DocState) :
    envPageSegment harnessEnv conf doc = docPageSegment conf doc := rfl

/-- The REFCORR13 R13-AGY2 D13 target page present in `harnessExistingPages` (9th entry)
    and absent from legacy `ServingRules.freelinkExistingPages` (8 entries). -/
def d13TitleTargetPage : List Nat :=
  [109, 117, 115, 101, 45, 112, 114, 111, 98, 101, 45, 97, 103, 121, 45,
   104, 117, 110, 116, 45, 116, 105, 116, 108, 101, 45, 116, 97, 114, 103, 101, 116]

/-- Environment-parametric Freelink mirror (`Freelink.php`). -/
def renderFreelinkWithEnv (env : RenderEnv) (opts : OptMap) : List Nat :=
  let page := optStrBytes opts "page".toList
  let text := optStrBytes opts "text".toList
  let anchor := optStrBytes opts "anchor".toList
  let extra := optStrBytes opts "extra".toList
  let url := optStrBytes opts "url".toList
  let site := optStrBytes opts "site".toList
  let nonbr := !(phpEmptyOpt (omGet opts "nonbr".toList))
  let textFromTitle := !(phpEmptyOpt (omGet opts "textFromTitle".toList))
  if phpTruthyBytes url then
    let text := if textFromTitle && (phpTrimBytes text).isEmpty then page else text
    let t := htmlSpecialCharsCompat (phpTrimBytes text)
    let t := if nonbr then nbspSpaces t else t
    let target := optStrBytes opts "target".toList
    let targetAttr := if target.isEmpty then [] else
      litBytes " target=\"" ++ htmlSpecialCharsCompat target ++ litBytes "\""
    litBytes "<a" ++ targetAttr ++ litBytes " href=\"" ++
      htmlSpecialCharsCompat (percentEncodeNonAscii (url ++ anchor ++ extra)) ++
      litBytes "\">" ++ t ++ litBytes "</a>"
  else if phpTruthyBytes site then
    litBytes "<a href=\"http://" ++ site ++ litBytes "." ++
      litBytes "/" ++ page ++ litBytes "\">" ++
      htmlSpecialCharsCompat (phpTrimBytes text) ++
      litBytes "</a>"
  else
    let pageExists := env.pageExists page
    let text :=
      if textFromTitle then
        if pageExists then (env.pageTitle page).getD text else page
      else text
    let pageE := htmlSpecialCharsCompat (phpTrimBytes page)
    let suffix := htmlSpecialCharsCompat (phpTrimBytes anchor) ++
      htmlSpecialCharsCompat (phpTrimBytes extra)
    let t := htmlSpecialCharsCompat (phpTrimBytes text)
    let t := if nonbr then nbspSpaces t else t
    if pageExists then
      litBytes "<a href=\"/" ++ pageE ++ suffix ++ litBytes "\">" ++
        t ++ litBytes "</a>"
    else
      litBytes "<a class=\"newpage\" href=\"/" ++ pageE ++ suffix ++
        litBytes "\">" ++ t ++ litBytes "</a>"

/-- Environment-parametric Code mirror (`Code.php`). -/
def renderCodeWithEnv (env : RenderEnv) (opts : OptMap) : List Nat :=
  let body := wikidotTrimCodeBody (optStrBytes opts "text".toList)
  let ty := codeType opts
  if codeLangs.contains ty then
    match env.highlightCode ty body with
    | some highlighted =>
        [10] ++ litBytes "<div class=\"code\">\n" ++ highlighted ++
          litBytes "</div>" ++ [10, 10]
    | none => codeBoundaryMarker ty
  else if phpTrimBytes body == [] then
    [10] ++ litBytes "<div class=\"code\"></div>" ++ [10, 10]
  else
    let tabbed := body.flatMap
      (fun b => if b == 9 then [32, 32, 32, 32] else [b])
    [10] ++ litBytes "<div class=\"code\">\n<pre><code>" ++
      htmlSpecialCharsCompat tabbed ++
      litBytes "</code></pre></div>" ++ [10, 10]

/-- Environment-parametric Math mirror (`Math.php`). -/
def renderMathWithEnv (env : RenderEnv) (opts : OptMap) : List Nat :=
  let ty := optStrBytes opts "type".toList
  let envName := mathStripStar ty
  if !mathTypeValid ty then
    litBytes "<div class=\"error-block\">Unsupported math " ++
      litBytes "environment \"" ++ envName ++ litBytes "\"</div>"
  else
    match env.renderLatex envName (optStrBytes opts "content".toList) with
    | some eqHtml => eqHtml
    | none =>
        litBytes "<div class=\"error-block\">The equation has not " ++
          litBytes "been processed correctly. Most prabably it has " ++
          litBytes "syntax error(s).</div>"

/-- Environment-parametric User mirror (`User.php`). -/
def renderUserWithEnv (env : RenderEnv) (opts : OptMap) : List Nat :=
  let name := optStrBytes opts "userName".toList
  match env.lookupUser name with
  | some u =>
      litBytes "<span class=\"printuser\">" ++
        htmlSpecialCharsCompat u.displayName ++ litBytes "</span>"
  | none =>
      litBytes "<span class=\"error-inline\"><em>" ++
        htmlSpecialCharsCompat name ++
        litBytes "</em> does not match any existing user name</span>"

/-- Image assembly helper shared between `:first`/Flickr/local/URL paths. -/
private def assembleImageHtml (attr : List (List Char × OptVal))
    (opts : OptMap) (src0 : List Nat) (src : List Nat) (link : Option (List Nat)) :
    List Nat :=
  let href : Option (List Nat) := link.map imageHref
  let img :=
    litBytes "<img src=\"" ++
      htmlSpecialCharsCompat (percentEncodeNonAscii src) ++
      litBytes "\"" ++
      (attr.filter (fun kv => !(kv.1 == "link".toList))).foldl
        (fun acc kv => acc ++ imageAttrEmit kv) [] ++
      (if attr.any (fun kv =>
          asciiLowerBytes (kv.1.map Char.toNat) == litBytes "alt")
        then []
        else litBytes " alt=\"" ++
          htmlSpecialCharsCompat (phpBasename src0) ++
          litBytes "\"") ++
      (if attr.any (fun kv =>
          asciiLowerBytes (kv.1.map Char.toNat) == litBytes "class")
        then [] else litBytes " class=\"image\"") ++
      litBytes " />"
  let anchored := match href with
    | some h =>
        if phpTruthyBytes h then
          litBytes "<a href=\"" ++
            htmlSpecialCharsCompat (percentEncodeNonAscii h) ++
            litBytes "\"" ++
            (if phpEmptyOpt (omGet opts "target".toList) then []
             else litBytes " target=\"" ++
               optStrBytes opts "target".toList ++ litBytes "\"") ++
            litBytes ">" ++ img ++ litBytes "</a>"
        else img
    | none => img
  let align := optStrBytes opts "align".toList
  if phpTruthyBytes align then
    let suffix :=
      if align == litBytes "f<" then litBytes " floatleft"
      else if align == litBytes "f>" then litBytes " floatright"
      else if align == litBytes "<" then litBytes " alignleft"
      else if align == litBytes ">" then litBytes " alignright"
      else if align == litBytes "=" then litBytes " aligncenter"
      else []
    litBytes "<div class=\"image-container" ++ suffix ++
      litBytes "\">" ++ anchored ++ litBytes "</div>"
  else anchored

/-- Environment-parametric Image mirror (`Image.php`). -/
def renderImageWithEnv (env : RenderEnv) (conf : RenderConf) (doc : DocState)
    (opts : OptMap) : List Nat :=
  let src0 := optStrBytes opts "src".toList
  let attr := imageAttrMap opts
  let seg := envPageSegment env conf doc
  if startsWithBytes (litBytes ":first") src0 then
    match env.localAttachments seg with
    | some (att :: _) =>
        assembleImageHtml attr opts att.name att.url (attrLookup attr "link")
    | _ => []
  else if bytesContainsSub (litBytes "flickr:") src0 then
    match env.flickrResolve src0 with
    | some fr =>
        assembleImageHtml attr opts src0 fr.src (some fr.src)
    | none => []
  else
    let size0 := attrLookup attr "size"
    let link0 := attrLookup attr "link"
    let (src, link) : List Nat × Option (List Nat) :=
      if bytesContainsSub (litBytes "://") src0 then (src0, link0)
      else
        let size1 : Option (List Nat) := match size0 with
          | some s => if imageSizeOk s then some s else none
          | none => none
        let size2 : Option (List Nat) := match size1 with
          | some s => some s
          | none => if imageExtSuffix src0 then none
            else some (litBytes "medium")
        if bytesContainsSub [47] src0 then
          match size2 with
          | some sz =>
              (litBytes "/local--resized-images/" ++
                stripOneLeadingSlash src0 ++ litBytes "/" ++ sz ++
                litBytes ".jpg",
               if linkLooseNull attr then
                 some (litBytes "/local--files/" ++
                   stripOneLeadingSlash src0)
               else link0)
          | none =>
              (litBytes "/local--files/" ++ stripOneLeadingSlash src0,
               link0)
        else
          match size2 with
          | some sz =>
              (litBytes "/local--resized-images/" ++ seg ++ [47] ++ src0 ++
                litBytes "/" ++ sz ++ litBytes ".jpg",
               if linkLooseNull attr then
                 some (litBytes "/local--files/" ++ seg ++ [47] ++
                   stripOneLeadingSlash src0)
               else link0)
          | none => (litBytes "/local--files/" ++ seg ++ [47] ++ src0, link0)
    assembleImageHtml attr opts src0 src link

/-- Environment-parametric Gallery row step (`Gallery.php`, REFCORR19 F8 `itemText`).
    The optional token-renderer and token-table lookup default to the old no-context
    row behavior; `renderRefSpec` supplies them, while `renderMirrorEnv` leaves the
    defaults untouched. -/
def galleryRowStepEnv (env : RenderEnv) (size : List Nat)
    (st : List Nat × List Nat × List Nat) (row : List Nat)
    (renderTok : TokenEntry → List Nat := fun _ => [])
    (lookup : Nat → Option TokenEntry := fun _ => none) :
    List Nat × List Nat × List Nat :=
  let (_, osrc, out) := st
  let target : List Nat := []
  if !(startsWithBytes [58, 32] row) then st
  else
    let body := phpTrimBytes (row.drop 2)
    let (src0raw, attrs0) := gallerySplitRow body
    let src0 := galleryItemText renderTok lookup src0raw
    let (src1, target1) :=
      if startsWithBytes [42] src0 then
        (src0.drop 1, litBytes "target=\"_blank\"")
      else (src0, target)
    if bytesContainsSub (litBytes "flickr:") src1 then
      match env.flickrResolve src1 with
      | none => st
      | some fr =>
          let alt := match galleryAttrGet attrs0 (litBytes "alt") with
            | some a => htmlSpecialCharsCompat a
            | none => []
          (target1, osrc, out ++
            litBytes "<div class=\"gallery-item " ++ size ++
            litBytes "\"><table><tr><td><a href=\"" ++ fr.src ++
            litBytes "\" " ++ target1 ++ litBytes "><img src=\"" ++ fr.src ++
            litBytes "\" alt=\"" ++ alt ++
            litBytes "\"/></a></td></tr></table></div>")
    else
      galleryRowStep size st row renderTok lookup

/-- Environment-parametric Gallery mirror (`Gallery.php`). -/
def renderGalleryWithEnv (env : RenderEnv) (opts : OptMap) : List Nat :=
  let size := gallerySize (optStrBytes opts "size".toList)
  let sources := optStrBytes opts "sources".toList
  if phpTruthyBytes sources then
    let (_, _, out) := (explodeByte 10 sources).foldl
      (fun st row => galleryRowStepEnv env size st row)
      ([], [], litBytes "<div class=\"gallery-box\">")
    out ++ litBytes "</div>"
  else
    litBytes "<div class=\"error-block\">Error selecting page.</div>"

/-- Environment-parametric File mirror (`File.php`). -/
def renderFileWithEnv (env : RenderEnv) (conf : RenderConf) (doc : DocState)
    (opts : OptMap) : List Nat :=
  renderFile opts (envPageSegment env conf doc)

/-- Concrete `renderMirror` function parameterizing all 62 render rules over
    `RenderEnv` (9 env-aware rules + 53 pure rules). -/
def renderMirrorEnv (env : RenderEnv) (r : RenderRuleId)
    (conf : RenderConf) (doc : DocState) (opts : OptMap) : List Nat :=
  match r with
  | .module => renderModuleWithEnv env opts
  | .module654 => renderModuleWithEnv env opts
  | .freelink => renderFreelinkWithEnv env opts
  | .code => renderCodeWithEnv env opts
  | .math => renderMathWithEnv env opts
  | .user => renderUserWithEnv env opts
  | .image => renderImageWithEnv env conf doc opts
  | .gallery => renderGalleryWithEnv env opts
  | .file => renderFileWithEnv env conf doc opts
  | _ => dispatchRenderR41 r conf doc opts

/-! ## PHP-traceable TCB-4 Render Reference Specification (`renderRefSpec`) -/

/-- Direct PHP-traceable spec for `Footnote.php`. -/
def refXhtmlFootnote (conf : RenderConf) (opts : OptMap) : List Nat :=
  let idB := optStrBytes opts "id".toList
  litBytes "<sup class=\"footnoteref\"><a id=\"footnoteref-" ++ conf.footnoteIdPrefix ++ idB ++
    litBytes "\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils." ++
    litBytes "scrollToReference('footnote-" ++ conf.footnoteIdPrefix ++ idB ++
    litBytes "')\">" ++ idB ++ litBytes "</a></sup>"

/-- Direct PHP-traceable spec for `Footnoteitem.php`. The optional lookup is the
    render-phase token table used by PHP when empty-Raw placeholders are stripped
    before the separator-space decision; omitting it gives the legacy single-token
    no-context form. -/
def refXhtmlFootnoteitem (conf : RenderConf) (doc : DocState) (opts : OptMap)
    (lookup : Nat → Option TokenEntry := fun _ => none) : List Nat :=
  if optTypeIs opts (litBytes "parabreak") then [10]
  else if optTypeIs opts (litBytes "start") then
    let idB := optStrBytes opts "id".toList
    let idN := (optNat opts "id".toList).getD 0
    let body := if idN > 0 then (doc.footnotes[idN - 1]?).getD [] else []
    let sep := if (footnoteLeadVisible lookup body).isEmpty then [] else [32]
    litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ conf.footnoteIdPrefix ++ idB ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++ conf.footnoteIdPrefix ++ idB ++ litBytes "')\">" ++
      idB ++ litBytes "</a>." ++ sep
  else if optTypeIs opts (litBytes "end") then litBytes "</div>"
  else []

/-- Direct PHP-traceable spec for `Footnoteblock.php`. -/
def refXhtmlFootnoteblock (doc : DocState) (opts : OptMap) : List Nat :=
  if doc.footnotes.isEmpty then []
  else if optTypeIs opts (litBytes "start") then
    let title := match omGet opts "title".toList with
      | none => litBytes "Footnotes"
      | some .null => litBytes "Footnotes"
      | some v => renderOptValBytes v
    if title.isEmpty then litBytes "<div class=\"footnotes-footer\">"
    else litBytes "<div class=\"footnotes-footer\"><div class=\"title\">" ++
      htmlSpecialCharsCompat title ++ litBytes "</div>"
  else if optTypeIs opts (litBytes "end") then litBytes "</div>"
  else []

/-- Direct PHP-traceable spec for `Bibitem.php`. -/
def refXhtmlBibitem (conf : RenderConf) (opts : OptMap) : List Nat :=
  if optTypeIs opts (litBytes "start") then
    let idB := optStrBytes opts "id".toList
    let sep := if phpEmptyOpt (omGet opts "empty".toList) then [32] else []
    litBytes "<div class=\"bibitem\" id=\"bibitem-" ++ conf.bibitemIdPrefix ++ idB ++
      litBytes "\">" ++ idB ++ [46] ++ sep
  else if optTypeIs opts (litBytes "end") then litBytes "</div>"
  else []

/-- Direct PHP-traceable spec for `Bibliography.php`. -/
def refXhtmlBibliography (opts : OptMap) : List Nat :=
  if optTypeIs opts (litBytes "nl") then [10]
  else if optTypeIs opts (litBytes "start") then
    let title := match omGet opts "title".toList with
      | none => litBytes "Bibliography"
      | some .null => litBytes "Bibliography"
      | some v => renderOptValBytes v
    if title.isEmpty then litBytes "<div class=\"bibitems\">"
    else litBytes "<div class=\"bibitems\"><div class=\"title\">" ++
      htmlSpecialCharsCompat title ++ litBytes "</div>"
  else if optTypeIs opts (litBytes "end") then litBytes "</div>"
  else []

/-- Direct PHP-traceable spec for `Bibcite.php` (REFCORR19 F6). -/
def refXhtmlBibcite (conf : RenderConf) (doc : DocState) (opts : OptMap) : List Nat :=
  let lbl := optStrBytes opts "label".toList
  match bibLookup doc.bibitemIds lbl with
  | none =>
      litBytes "<span class=\"error-inline\">Bibliography item <em>" ++
        lbl ++ litBytes "</em> not found.</span>"
  | some id =>
      let idB := natBytes id
      let sfx := natBytes (1000 + crc32Mod 99000 lbl)
      litBytes "<a href=\"javascript:;\" class=\"bibcite\" id=\"bibcite-" ++
        idB ++ [45] ++ sfx ++ [97] ++
        litBytes "\" onclick=\"WIKIDOT.page.utils.scrollToReference('bibitem-" ++
        conf.bibitemIdPrefix ++ idB ++ litBytes "')\">" ++ idB ++ litBytes "</a>"

/-- Direct PHP-traceable specs for the 12 Prose rules (`Text/Wiki/Render/Xhtml/*.php`). -/
def refXhtmlParagraph (opts : OptMap) : List Nat :=
  if optStrBytes opts "type".toList == litBytes "start" then litBytes "<p>"
  else if optStrBytes opts "type".toList == litBytes "end" then litBytes "</p>\n\n"
  else []

def refXhtmlNewline : List Nat := litBytes "<br />\n"
def refXhtmlBreak : List Nat := litBytes "<br />\n"

def refXhtmlCenter (opts : OptMap) : List Nat :=
  if optStrBytes opts "type".toList == litBytes "start" then litBytes "<p style=\"text-align: center;\">"
  else if optStrBytes opts "type".toList == litBytes "end" then litBytes "</p>\n"
  else []

def refXhtmlHoriz : List Nat := litBytes "<hr />\n"
def refXhtmlSeparator : List Nat :=
  litBytes "<div class=\"content-separator\" style=\"display: none:\"></div>\n"

def refXhtmlClearfloat (opts : OptMap) : List Nat :=
  let s := optStrBytes opts "side".toList
  let w := if s == litBytes ">" then litBytes "right"
    else if s == litBytes "<" then litBytes "left" else litBytes "both"
  litBytes "<div style=\"clear:" ++ w ++ litBytes "; height: 0px; font-size: 1px\"></div>\n"

def refXhtmlBlockquote (opts : OptMap) : List Nat :=
  if optStrBytes opts "type".toList == litBytes "start" then litBytes "<blockquote>"
  else if optStrBytes opts "type".toList == litBytes "end" then litBytes "</blockquote>\n"
  else []

def refXhtmlNote (opts : OptMap) : List Nat :=
  if optStrBytes opts "type".toList == litBytes "start" then litBytes "<div class=\"wiki-note\">"
  else if optStrBytes opts "type".toList == litBytes "end" then litBytes "</div>"
  else []

def refXhtmlDivalign (opts : OptMap) : List Nat :=
  if optStrBytes opts "type".toList == litBytes "start" then
    litBytes "<div style=\"text-align: " ++ optStrBytes opts "align".toList ++ litBytes ";\">"
  else if optStrBytes opts "type".toList == litBytes "end" then litBytes "</div>"
  else []

def refXhtmlComment : List Nat := []
def refXhtmlDelimiter (opts : OptMap) : List Nat := optStrBytes opts "text".toList

/-- Direct PHP-traceable specs for the 14 InlineSimple + Typography rules. -/
def refXhtmlUrl (opts : OptMap) : List Nat :=
  let hrefE := htmlSpecialCharsCompat (percentEncodeNonAscii (optStrBytes opts "href".toList))
  let href := if hrefE == litBytes "#" then litBytes "javascript:;" else hrefE
  let text := htmlSpecialCharsCompat (optStrBytes opts "text".toList)
  let target := optStrBytes opts "target".toList
  let targetAttr := if phpTruthyBytes target then
    litBytes " target=\"" ++ htmlSpecialCharsCompat target ++ litBytes "\"" else []
  let link := litBytes "<a href=\"" ++ href ++ litBytes "\"" ++ targetAttr ++
    litBytes ">" ++ text ++ litBytes "</a>"
  if optStrBytes opts "type".toList == litBytes "footnote" then
    litBytes "<sup>" ++ link ++ litBytes "</sup>" else link

def refXhtmlEmail (opts : OptMap) : List Nat :=
  let email := optStrBytes opts "email".toList
  let text := optStrBytes opts "text".toList
  let mapped := (email.reverse ++ [35] ++ text.reverse).map (fun b => if b == 64 then 124 else b)
  litBytes "<span class=\"wiki-email\">" ++ htmlSpecialCharsNoQuotesSubst mapped ++ litBytes "</span>"

def refXhtmlMathinline (opts : OptMap) : List Nat :=
  litBytes "<span class=\"math-inline\">$" ++
    (optStrBytes opts "content".toList).flatMap mathinlineEscByte ++
    litBytes "$</span>"

def refXhtmlInterwiki (opts : OptMap) : List Nat :=
  let site := optStrBytes opts "site".toList
  let page := optStrBytes opts "page".toList
  let text := optStrBytes opts "text".toList
  match bytesTableLookup interwikiSites site with
  | none => htmlSpecialCharsCompat text
  | some template =>
      let href := if (findSub [37, 115] template).isSome then sprintfPercentS template page
        else template ++ page
      litBytes "<a href=\"" ++ href ++
        litBytes "\" onclick=\"window.open(this.href, '_blank'); return false;\">" ++
        htmlSpecialCharsCompat text ++ litBytes "</a>"

def refXhtmlColortext (opts : OptMap) : List Nat :=
  let raw := optStrBytes opts "color".toList
  match normalizeColor raw with
  | none =>
      if optStrBytes opts "type".toList == litBytes "start" then litBytes "##" ++ raw ++ litBytes "|"
      else litBytes "##"
  | some color =>
      if optStrBytes opts "type".toList == litBytes "start" then
        if color.isEmpty then litBytes "<span style=\"color:\">"
        else litBytes "<span style=\"color: " ++ color ++ litBytes "\">"
      else if optStrBytes opts "type".toList == litBytes "end" then litBytes "</span>"
      else []

def refXhtmlPair (opts : OptMap) (o c : List Nat) : List Nat :=
  if optStrBytes opts "type".toList == litBytes "start" then o
  else if optStrBytes opts "type".toList == litBytes "end" then c
  else []

def refXhtmlTypography (opts : OptMap) : List Nat :=
  let c := optStrBytes opts "char".toList
  if c == litBytes "``" then litBytes "&#8220;"
  else if c == litBytes "''" then litBytes "&#8221;"
  else if c == litBytes ",," then litBytes "&#8222;"
  else if c == litBytes "`" then litBytes "&#8216;"
  else if c == litBytes "'" then litBytes "&#8217;"
  else if c == litBytes "<<" then litBytes "&#171;"
  else if c == litBytes ">>" then litBytes "&#187;"
  else if c == litBytes " " then litBytes "&#160;"
  else if c == litBytes "..." then litBytes "&#8230;"
  else if c == litBytes "---" then litBytes "&#8212;"
  else if c == litBytes "--" then litBytes "&#8212;"
  else []

def refXhtmlTighten : List Nat := []

/-- Direct PHP-traceable specs for `Raw`, `Rawold`, `Form`, `Heading`, `Toc`. -/
def refXhtmlRaw (opts : OptMap) : List Nat :=
  let txt := optStrBytes opts "text".toList
  if txt.isEmpty then []
  else litBytes "<span style=\"white-space: pre-wrap;\">" ++ wikidotEscapeRaw txt ++ litBytes "</span>"

def refXhtmlRawold (opts : OptMap) : List Nat :=
  htmlSpecialCharsCompat (optStrBytes opts "text".toList)

def refXhtmlForm (opts : OptMap) : List Nat :=
  if optIsset opts "blank".toList then []
  else if optIsset opts "text".toList then
    let escaped := wikidotEscapeRaw (optStrBytes opts "text".toList)
    litBytes "<span style=\"white-space: pre-wrap;\">" ++
      formIndentGo escaped [] (escaped.length + 1) ++ litBytes "</span>"
  else []

def refXhtmlHeading (opts : OptMap) : List Nat :=
  let level := optStrBytes opts "level".toList
  let idB := optStrBytes opts "id".toList
  let idAttr := if optIsset opts "id".toList && !idB.isEmpty then
    litBytes " id=\"" ++ idB ++ litBytes "\"" else []
  let cSet := optIsset opts "collapse".toList
  let cTru := !phpEmptyOpt (omGet opts "collapse".toList)
  if optStrBytes opts "type".toList == litBytes "start" then
    let onclick := if cSet then litBytes " onclick=\"hideTOC('" ++ idB ++ litBytes "');\"" else []
    [10] ++ litBytes "<h" ++ level ++ idAttr ++ onclick ++ litBytes "><span>"
  else if optStrBytes opts "type".toList == litBytes "start-notoc" then
    [10] ++ litBytes "<h" ++ level ++ litBytes "><span>"
  else if optStrBytes opts "type".toList == litBytes "end" then
    let link := if cSet then
      litBytes "<a id=\"" ++ idB ++ litBytes "__link\" href=\"javascript:void();\" onclick=\"hideTOC('" ++
        idB ++ litBytes "')\">[" ++ (if cTru then litBytes "+" else litBytes "-") ++ litBytes "]</a>\n"
      else []
    litBytes "</span></h" ++ level ++ litBytes ">\n" ++ link
  else if optStrBytes opts "type".toList == litBytes "startContent" then
    let js := if cSet then headingTocScript else []
    let disp := match omGet opts "collapse".toList with
      | some (.bool true) => litBytes "display: none; "
      | _ => []
    js ++ [10] ++ litBytes "<div style=\"" ++ disp ++
      litBytes "padding: 0px; margin: 0px; border: none;\" id=\"" ++ idB ++ litBytes "__content\">\n"
  else if optStrBytes opts "type".toList == litBytes "endContent" then litBytes "\n</div>\n"
  else []

def refXhtmlToc (opts : OptMap) : List Nat :=
  let align := optStrBytes opts "align".toList
  let ty := optStrBytes opts "type".toList
  if ty == litBytes "list_start" then
    let tOpen := if !rhTruthy align then
      litBytes "<table style=\"margin:0; padding:0\"><tr><td style=\"margin:0; padding:0\">" else []
    let cls := if align == litBytes "f<" then litBytes " class=\"floatleft\""
      else if align == litBytes "f>" then litBytes " class=\"floatright\"" else []
    tOpen ++ litBytes "<div id=\"toc\"" ++ cls ++
      litBytes "><div id=\"toc-action-bar\"><a href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.listeners.foldToc(event)\">Fold</a>" ++
      litBytes "<a style=\"display: none\" href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.listeners.unfoldToc(event)\">Unfold</a></div>" ++
      litBytes "<div class=\"title\">" ++ htmlSpecialCharsCompat (tocTitle opts) ++
      litBytes "</div><div id=\"toc-list\">"
  else if ty == litBytes "list_end" then
    let tClose := if !rhTruthy align then litBytes "</td></tr></table>" else []
    [10] ++ litBytes "</div></div>" ++ tClose ++ litBytes "\n\n"
  else if ty == litBytes "item_start" then
    [10, 9] ++ litBytes "<div style=\"margin-left: " ++
      natBytes ((optNat opts "level".toList).getD 0) ++
      litBytes "em;\"><a href=\"#" ++ optStrBytes opts "id".toList ++
      litBytes "\">" ++ tocStripDelim
  else if ty == litBytes "item_end" then tocStripDelim ++ litBytes "</a></div>"
  else []

/-- Direct PHP-traceable spec for `List.php` (`token()` branches). -/
def refXhtmlList (opts : OptMap) : List Nat :=
  let levelGt0 : Bool := match optNat opts "level".toList with
    | some n => 0 < n
    | none => false
  let levelEq0 : Bool := match optNat opts "level".toList with
    | some 0 => true
    | _ => false
  let ty := optStrBytes opts "type".toList
  if ty == litBytes "bullet_list_start" then
    let html := litBytes "<ul>\n"
    if levelGt0 && phpEmptyOpt (omGet opts "in_sublist".toList) then [10] ++ html else html
  else if ty == litBytes "number_list_start" then
    let format := optStrBytes opts "format".toList
    let typeAttr := if ltIsset opts "format".toList && !format.isEmpty then
      litBytes " type=\"" ++ format ++ litBytes "\"" else []
    let html := litBytes "<ol" ++ typeAttr ++ litBytes ">\n"
    if levelGt0 && phpEmptyOpt (omGet opts "in_sublist".toList) then [10] ++ html else html
  else if ty == litBytes "bullet_list_end" then
    let tailSublist := ltIsset opts "tail".toList && optStrBytes opts "tail".toList == litBytes "sublist"
    let html := if tailSublist then litBytes "</ul>" else litBytes "</li>\n</ul>"
    if levelGt0 || (levelEq0 && tailSublist) then html ++ [10] else html
  else if ty == litBytes "number_list_end" then
    let tailSublist := ltIsset opts "tail".toList && optStrBytes opts "tail".toList == litBytes "sublist"
    let html := if tailSublist then litBytes "</ol>" else litBytes "</li>\n</ol>"
    if levelGt0 || (levelEq0 && tailSublist) then html ++ [10] else html
  else if ty == litBytes "sublist_start" then litBytes "<li style=\"list-style: none; display: inline\">\n"
  else if ty == litBytes "sublist_end" then litBytes "</li>\n"
  else if ty == litBytes "bullet_item_start" || ty == litBytes "number_item_start" then
    let countGt0 : Bool := match optNat opts "count".toList with | some n => 0 < n | none => false
    if countGt0 then litBytes "</li>\n<li>" else litBytes "<li>"
  else if ty == litBytes "bullet_item_end" || ty == litBytes "number_item_end" then []
  else if ty == litBytes "explicit_list_start" then
    let tag := if optStrBytes opts "list_type".toList == litBytes "ol" then litBytes "ol" else litBytes "ul"
    litBytes "<" ++ tag ++ renderAttrsCompat opts "attrs".toList ++ litBytes ">\n"
  else if ty == litBytes "explicit_list_end" then
    let tag := if optStrBytes opts "list_type".toList == litBytes "ol" then litBytes "ol" else litBytes "ul"
    litBytes "</" ++ tag ++ litBytes ">" ++ optStrBytes opts "trail".toList
  else if ty == litBytes "explicit_item_start" then
    litBytes "<li" ++ renderAttrsCompat opts "attrs".toList ++ litBytes ">" ++ optStrBytes opts "lead".toList
  else if ty == litBytes "explicit_item_end" then optStrBytes opts "lead".toList ++ litBytes "</li>\n"
  else if ty == litBytes "explicit_none_item_start" then litBytes "<li style=\"list-style: none\">"
  else if ty == litBytes "explicit_none_item_end" then litBytes "</li>\n"
  else if ty == litBytes "explicit_inline_wrapper_start" then litBytes "<li style=\"list-style: none; display: inline\">\n"
  else if ty == litBytes "explicit_inline_wrapper_end" then litBytes "\n</li>\n"
  else if ty == litBytes "explicit_br_no_nl" then litBytes "<br />"
  else if ty == litBytes "explicit_raw_nl" then litBytes "\n"
  else []

/-- Direct PHP-traceable spec for `Deflist.php`. -/
def refXhtmlDeflist (opts : OptMap) : List Nat :=
  let ty := optStrBytes opts "type".toList
  if ty == litBytes "list_start" then litBytes "<dl>\n"
  else if ty == litBytes "list_end" then litBytes "</dl>\n"
  else if ty == litBytes "term_start" then litBytes "<dt>"
  else if ty == litBytes "term_end" then litBytes "</dt>\n"
  else if ty == litBytes "narr_start" then litBytes "<dd>"
  else if ty == litBytes "narr_end" then litBytes "</dd>\n"
  else []

/-- Direct PHP-traceable spec for `Table.php`. -/
def refXhtmlTable (opts : OptMap) : List Nat :=
  let format := if ltIsset opts "format".toList then [32] ++ optStrBytes opts "format".toList else []
  let ty := optStrBytes opts "type".toList
  if ty == litBytes "table_start" then litBytes "<table class=\"wiki-content-table\"" ++ format ++ litBytes ">\n"
  else if ty == litBytes "table_end" then litBytes "</table>"
  else if ty == litBytes "caption_start" then litBytes "<caption" ++ format ++ litBytes ">\n"
  else if ty == litBytes "caption_end" then litBytes "</caption>\n"
  else if ty == litBytes "row_start" then litBytes "<tr" ++ format ++ litBytes ">\n"
  else if ty == litBytes "row_end" then litBytes "</tr>\n"
  else if ty == litBytes "cell_start" then
    let attr := optStrBytes opts "attr".toList
    let isHeader := attr == litBytes "header"
    let span := (optNat opts "span".toList).getD 1
    let rowspan := (optNat opts "rowspan".toList).getD 1
    let base := if isHeader then litBytes "<th" else litBytes "<td"
    let spanAttr := if 1 < span then litBytes " colspan=\"" ++ natBytes span ++ litBytes "\"" else []
    let rowspanAttr := if 1 < rowspan then litBytes " rowspan=\"" ++ natBytes rowspan ++ litBytes "\"" else []
    let alignAttr := if !isHeader && !attr.isEmpty then litBytes " style=\"text-align: " ++ attr ++ litBytes ";\"" else []
    base ++ spanAttr ++ rowspanAttr ++ alignAttr ++ format ++ litBytes ">"
  else if ty == litBytes "cell_end" then
    if optStrBytes opts "attr".toList == litBytes "header" then litBytes "</th>\n" else litBytes "</td>\n"
  else []

/-- Direct PHP-traceable spec for `Tableadv.php`. -/
def refXhtmlTableadv (opts : OptMap) : List Nat :=
  let rendered := renderAttrsQuotesSubst opts "attrs".toList
  let tag := if phpEmptyOpt (omGet opts "header".toList) then litBytes "td" else litBytes "th"
  let ty := optStrBytes opts "type".toList
  if ty == litBytes "start" then litBytes "<table" ++ rendered ++ litBytes ">\n"
  else if ty == litBytes "rowStart" then litBytes "<tr" ++ rendered ++ litBytes ">\n"
  else if ty == litBytes "cellStart" then litBytes "<" ++ tag ++ rendered ++ litBytes ">"
  else if ty == litBytes "cellEnd" then litBytes "</" ++ tag ++ litBytes ">\n"
  else if ty == litBytes "rowEnd" then litBytes "</tr>\n"
  else if ty == litBytes "end" then litBytes "</table>"
  else []

/-- Direct PHP-traceable spec for `Equationreference.php`. -/
def refXhtmlEquationreference (conf : RenderConf) (doc : DocState) (opts : OptMap) : List Nat :=
  let label := optStrBytes opts "label".toList
  let idB := match doc.equations.find? (fun kv => kv.1.flatMap utf8Bytes == label) with
    | some (_, n) => natBytes n
    | none => []
  litBytes "<a class=\"eref\" href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('equation-" ++
    conf.mathIdPrefix ++ idB ++ litBytes "')\">" ++ idB ++ litBytes "</a>"

/-- Direct PHP-traceable spec for `Anchor.php`. -/
def refXhtmlAnchor (opts : OptMap) : List Nat :=
  let nameOut := litBytes "<a name=\"" ++ htmlEntities (optStrBytes opts "name".toList) ++ litBytes "\"></a>"
  if !intIsset opts "type".toList then nameOut
  else
    let ty := optStrBytes opts "type".toList
    if ty == litBytes "start" then
      let attrs : OptMap := match omGet opts "attrs".toList with
        | some (.map m) => m
        | some (.list []) => []
        | _ => [("href".toList, OptVal.str [])]
      litBytes "<a" ++ attrsFragment htmlSpecialCharsCompat attrs ++ litBytes ">"
    else if ty == litBytes "end" then litBytes "</a>"
    else if ty == litBytes "invalid_named" then
      litBytes "[" ++ optStrBytes opts "lead".toList ++ litBytes "<a href=\"javascript:;\">" ++
        htmlSpecialCharsCompat (optStrBytes opts "text".toList) ++
        litBytes "</a>" ++ optStrBytes opts "trail".toList ++ litBytes "]"
    else if ty == litBytes "literal" then htmlSpecialCharsCompat (optStrBytes opts "text".toList)
    else nameOut

/-- Direct PHP-traceable spec for `Collapsible.php`. -/
def refXhtmlCollapsible (opts : OptMap) : List Nat :=
  let args : OptMap := match omGet opts "args".toList with | some (.map m) => m | _ => []
  let folded : Bool := match optBytesOpt args "folded".toList with
    | some bs => !(bs == litBytes "no" || bs == litBytes "false")
    | none => true
  let showLbl := wikidotLabel (optBytesOpt args "show".toList) true
  let hide := wikidotLabel (optBytesOpt args "hide".toList) false
  let hideLoc : List Nat := match optBytesOpt args "hideLocation".toList with
    | some bs => if bs == litBytes "bottom" then litBytes "bottom"
                 else if bs == litBytes "both" then litBytes "both" else litBytes "top"
    | none => litBytes "top"
  let lsOpen : List Nat :=
    if phpEmptyOpt (omGet opts "label_size".toList) then []
    else litBytes "<span style=\"font-size:" ++ optStrBytes opts "label_size".toList ++ litBytes ";\">"
  let wrapLabel (html : List Nat) : List Nat :=
    if lsOpen.isEmpty then html else lsOpen ++ html ++ litBytes "</span>"
  let hideB := litBytes "<div class=\"collapsible-block-unfolded-link\">" ++
    wrapLabel (litBytes "<a class=\"collapsible-block-link\" href=\"javascript:;\">" ++ hide ++ litBytes "</a>") ++
    litBytes "</div>"
  let ty := optStrBytes opts "type".toList
  if ty == litBytes "start" then
    litBytes "<div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"" ++
      (if folded then [] else litBytes " style=\"display:none\"") ++ litBytes ">" ++
      wrapLabel (litBytes "<a class=\"collapsible-block-link\" href=\"javascript:;\">" ++ showLbl ++ litBytes "</a>") ++
      litBytes "</div><div class=\"collapsible-block-unfolded\"" ++
      (if folded then litBytes " style=\"display:none\"" else []) ++ litBytes ">" ++
      (if hideLoc == litBytes "top" || hideLoc == litBytes "both" then hideB else []) ++
      litBytes "<div class=\"collapsible-block-content\">"
  else if ty == litBytes "end" then
    litBytes "</div>" ++
      (if hideLoc == litBytes "bottom" || hideLoc == litBytes "both" then hideB else []) ++
      litBytes "</div></div>"
  else []

/-- Direct PHP-traceable spec for `Tabview.php`. -/
def refXhtmlTabview (opts : OptMap) : List Nat :=
  let idB := optStrBytes opts "tabviewId".toList
  let ty := optStrBytes opts "type".toList
  if ty == litBytes "start" then
    let tabs : List OptVal := match omGet opts "tabs".toList with | some (.list xs) => xs | _ => []
    litBytes "<script type=\"text/javascript\" src=\"/common--javascript/yahooui/element-beta-min.js\"></script>" ++ [10] ++
      litBytes "<script type=\"text/javascript\" src=\"/common--javascript/yahooui/tabview-min.js\"></script>" ++
      litBytes "<div id=\"wiki-tabview-" ++ idB ++ litBytes "\" class=\"yui-navset\"><ul class=\"yui-nav\">" ++
      tabviewTabItems tabs ++ litBytes "</ul><div class=\"yui-content\">"
  else if ty == litBytes "tabStart" then
    let tid := optStrBytes opts "tabId".toList
    let style := if !tid.isEmpty && tid != [48] then litBytes " style=\"display:none\"" else []
    litBytes "<div id=\"wiki-tab-" ++ idB ++ [45] ++ tid ++ litBytes "\"" ++ style ++ litBytes ">"
  else if ty == litBytes "tabEnd" then litBytes "</div>"
  else if ty == litBytes "end" then
    litBytes "</div></div><script type=\"text/javascript\">" ++ [10] ++
      litBytes "(function(){" ++ [10, 9] ++ litBytes "var tabView" ++ idB ++
      litBytes " = new YAHOO.widget.TabView('wiki-tabview-" ++ idB ++ litBytes "');" ++ [10] ++
      litBytes "})();" ++ [10] ++ litBytes "</script>"
  else []

/-- Direct PHP-traceable spec for `Button.php`. -/
def refXhtmlButton (opts : OptMap) : List Nat :=
  let ty := asciiLowerBytes (optStrBytes opts "type".toList)
  let text := optStrBytes opts "text".toList
  let style := optStrBytes opts "style".toList
  let class0 := optStrBytes opts "class".toList
  if !buttonAllowed ty then
    litBytes "<div class=\"error-block\"><em>" ++ ty ++ litBytes "</em> is not a valid button type</div>"
  else if ty == litBytes "set-tags" && (omGet opts "text".toList).isNone then
    litBytes "<div class=\"error-block\">You need to set text for set-tags button.</div>"
  else
    let cls := if phpTruthyBytes class0 then class0 else litBytes "wiki-standalone-button"
    let txt := if phpTruthyBytes text then text else buttonDefaultText ty
    litBytes "<a class=\"" ++ htmlSpecialCharsCompat cls ++ litBytes "\" " ++
      (if phpTruthyBytes style then litBytes "style=\"" ++ htmlSpecialCharsCompat style ++ litBytes "\" " else []) ++
      litBytes "href=\"javascript:;\" onclick=\"" ++ buttonOnclick ty ++ litBytes "\" >" ++
      htmlSpecialCharsCompat txt ++ litBytes "</a>"

/-- Direct PHP-traceable spec for `Iframe.php`. -/
def refXhtmlIframe (opts : OptMap) : List Nat :=
  litBytes "<iframe " ++ joinSpaceBytes (opts.map iframePart) ++ litBytes "></iframe>"

/-- Direct PHP-traceable spec for `Date.php`. -/
def refXhtmlDate (opts : OptMap) : List Nat :=
  let raw := optStrBytes opts "timestamp".toList
  if raw.isEmpty then []
  else
    let ts := canonTimestamp raw
    let fmt := optStrBytes opts "format".toList
    let clsSfx := if fmt.isEmpty then [] else
      litBytes " format_" ++ encodeDateFormat (replaceSubBytes (litBytes "%g") (litBytes "ago") fmt (fmt.length + 1))
    litBytes "<span class=\"odate time_" ++ ts ++ clsSfx ++ litBytes "\">" ++
      formatTimestamp (phpIntCast ts) ++ litBytes "</span>"

/-- Direct PHP-traceable spec for `File.php`. -/
def refXhtmlFile (env : RenderEnv) (conf : RenderConf) (doc : DocState) (opts : OptMap) : List Nat :=
  let file := optStrBytes opts "file".toList
  let anchor := optStrBytes opts "anchor".toList
  let seg := envPageSegment env conf doc
  let href :=
    if file.contains 47 then
      let stripped := match file with | 47 :: r => r | _ => file
      litBytes "/local--files/" ++ encodeFilePath stripped
    else litBytes "/local--files/" ++ seg ++ [47] ++ encodeFilePath file
  litBytes "<a href=\"" ++ htmlSpecialCharsCompat href ++
    litBytes "\">" ++ htmlSpecialCharsCompat anchor ++ litBytes "</a>"

/-- Direct PHP-traceable spec for `Html.php` (REFCORR19 F2). -/
def refXhtmlHtml (opts : OptMap) : List Nat :=
  let cls0 := litBytes "html-block-iframe"
  let cls := if phpEmptyOpt (omGet opts "class".toList) then cls0
    else phpTrimBytes (optStrBytes opts "class".toList ++ [32] ++ cls0)
  let styPart := if phpEmptyOpt (omGet opts "style".toList) then []
    else litBytes " style=\"" ++ htmlSpecialCharsCompat (optStrBytes opts "style".toList) ++ litBytes "\""
  litBytes "<iframe src=\"" ++ htmlSpecialCharsCompat (litBytes "https://example.com/") ++
    litBytes "\" allowtransparency=\"true\" frameborder=\"0\"" ++ styPart ++
    litBytes " class=\"" ++ htmlSpecialCharsCompat cls ++ litBytes "\"></iframe>"

/-- Direct PHP-traceable spec for `Size.php`. -/
def refXhtmlSize (opts : OptMap) : List Nat :=
  if optStrBytes opts "type".toList == litBytes "start" then
    litBytes "<span style=\"font-size:" ++ optStrBytes opts "size".toList ++ litBytes ";\">"
  else if optStrBytes opts "type".toList == litBytes "end" then litBytes "</span>"
  else []

/-- Direct PHP-traceable spec for `Span.php`. -/
def refXhtmlSpan (opts : OptMap) : List Nat :=
  if optStrBytes opts "type".toList == litBytes "start" then
    litBytes "<span" ++ spanAttrFragment (attrPairs opts "args".toList) ++ litBytes ">"
  else if optStrBytes opts "type".toList == litBytes "end" then litBytes "</span>"
  else []

/-- Direct PHP-traceable spec for `Div.php`. -/
def refXhtmlDiv (opts : OptMap) : List Nat :=
  if (match omGet opts "vanished".toList with | some (.bool b) => b | _ => false) then []
  else if optStrBytes opts "type".toList == litBytes "start" then
    litBytes "<div" ++ divAttrFragment (attrPairs opts "args".toList) ++ litBytes ">"
  else if optStrBytes opts "type".toList == litBytes "end" then litBytes "</div>"
  else []

/-- Direct PHP-traceable spec for `Code.php`. -/
def refXhtmlCode (env : RenderEnv) (opts : OptMap) : List Nat :=
  let body := wikidotTrimCodeBody (optStrBytes opts "text".toList)
  let ty := codeType opts
  if codeLangs.contains ty then
    match env.highlightCode ty body with
    | some highlighted => [10] ++ litBytes "<div class=\"code\">\n" ++ highlighted ++ litBytes "</div>" ++ [10, 10]
    | none => codeBoundaryMarker ty
  else if phpTrimBytes body == [] then [10] ++ litBytes "<div class=\"code\"></div>" ++ [10, 10]
  else
    let tabbed := body.flatMap (fun b => if b == 9 then [32, 32, 32, 32] else [b])
    [10] ++ litBytes "<div class=\"code\">\n<pre><code>" ++ htmlSpecialCharsCompat tabbed ++
      litBytes "</code></pre></div>" ++ [10, 10]

/-- Direct PHP-traceable spec for `Embed.php` (using `embedPatterns` / `renderEmbedWith`). -/
def refXhtmlEmbed (opts : OptMap) : List Nat :=
  renderEmbedWith embedPatterns opts

/-- Direct PHP-traceable spec for `Freelink.php`. -/
def refXhtmlFreelink (env : RenderEnv) (opts : OptMap) : List Nat :=
  let page := optStrBytes opts "page".toList
  let text := optStrBytes opts "text".toList
  let anchor := optStrBytes opts "anchor".toList
  let extra := optStrBytes opts "extra".toList
  let url := optStrBytes opts "url".toList
  let site := optStrBytes opts "site".toList
  let nonbr := !(phpEmptyOpt (omGet opts "nonbr".toList))
  let textFromTitle := !(phpEmptyOpt (omGet opts "textFromTitle".toList))
  if phpTruthyBytes url then
    let text := if textFromTitle && (phpTrimBytes text).isEmpty then page else text
    let t := htmlSpecialCharsCompat (phpTrimBytes text)
    let t := if nonbr then nbspSpaces t else t
    let target := optStrBytes opts "target".toList
    let targetAttr := if target.isEmpty then [] else
      litBytes " target=\"" ++ htmlSpecialCharsCompat target ++ litBytes "\""
    litBytes "<a" ++ targetAttr ++ litBytes " href=\"" ++
      htmlSpecialCharsCompat (percentEncodeNonAscii (url ++ anchor ++ extra)) ++
      litBytes "\">" ++ t ++ litBytes "</a>"
  else if phpTruthyBytes site then
    litBytes "<a href=\"http://" ++ site ++ litBytes "./" ++ page ++ litBytes "\">" ++
      htmlSpecialCharsCompat (phpTrimBytes text) ++ litBytes "</a>"
  else
    let pageExists := env.pageExists page
    let text :=
      if textFromTitle then
        if pageExists then (env.pageTitle page).getD text else page
      else text
    let pageE := htmlSpecialCharsCompat (phpTrimBytes page)
    let suffix := htmlSpecialCharsCompat (phpTrimBytes anchor) ++
      htmlSpecialCharsCompat (phpTrimBytes extra)
    let t := htmlSpecialCharsCompat (phpTrimBytes text)
    let t := if nonbr then nbspSpaces t else t
    if pageExists then
      litBytes "<a href=\"/" ++ pageE ++ suffix ++ litBytes "\">" ++ t ++ litBytes "</a>"
    else
      litBytes "<a class=\"newpage\" href=\"/" ++ pageE ++ suffix ++ litBytes "\">" ++ t ++ litBytes "</a>"

/-- Direct PHP-traceable spec for `Module.php` (and `Module654`). -/
def refXhtmlModule (env : RenderEnv) (opts : OptMap) : List Nat :=
  let name := optStrBytes opts "moduleName".toList
  if callerRuntimeModules.contains (asciiLowerBytes name) then []
  else
    let attr0 := optStrBytes opts "attr".toList
    let body := optStrBytes opts "module_body".toList
    let attr := if phpEmptyOpt (omGet opts "module_body".toList) then attr0
      else attr0 ++ litBytes " module_body=\"" ++ urlencodeBytes body ++ litBytes "\""
    if env.moduleAvailable name then
      moduleMarkerByte ++ litBytes "module \"" ++ name ++ litBytes "\"" ++
        (if attr.isEmpty then [] else [32] ++ urlencodeBytes attr ++ [32]) ++ moduleMarkerByte
    else
      litBytes "<div class=\"error-block\">[[module <em>" ++ name ++
        litBytes "</em>]] No such module, please " ++
        litBytes "<a href=\"https://www.wikidot.com/doc:modules\" target=\"_blank\">" ++
        litBytes "check available modules</a> and fix this page.</div>"

/-- Direct PHP-traceable spec for `Math.php`. -/
def refXhtmlMath (env : RenderEnv) (opts : OptMap) : List Nat :=
  let ty := optStrBytes opts "type".toList
  let envName := mathStripStar ty
  if !mathTypeValid ty then
    litBytes "<div class=\"error-block\">Unsupported math environment \"" ++ envName ++ litBytes "\"</div>"
  else
    match env.renderLatex envName (optStrBytes opts "content".toList) with
    | some eqHtml => eqHtml
    | none =>
        litBytes "<div class=\"error-block\">The equation has not been processed correctly. " ++
          litBytes "Most prabably it has syntax error(s).</div>"

/-- Direct PHP-traceable spec for `Image.php`. -/
def refXhtmlImage (env : RenderEnv) (conf : RenderConf) (doc : DocState) (opts : OptMap) : List Nat :=
  let src0 := optStrBytes opts "src".toList
  let attr := imageAttrMap opts
  let seg := envPageSegment env conf doc
  if startsWithBytes (litBytes ":first") src0 then
    match env.localAttachments seg with
    | some (att :: _) => assembleImageHtml attr opts att.name att.url (attrLookup attr "link")
    | _ => []
  else if bytesContainsSub (litBytes "flickr:") src0 then
    match env.flickrResolve src0 with
    | some fr => assembleImageHtml attr opts src0 fr.src (some fr.src)
    | none => []
  else
    let size0 := attrLookup attr "size"
    let link0 := attrLookup attr "link"
    let (src, link) : List Nat × Option (List Nat) :=
      if bytesContainsSub (litBytes "://") src0 then (src0, link0)
      else
        let size1 : Option (List Nat) := match size0 with
          | some s => if imageSizeOk s then some s else none
          | none => none
        let size2 : Option (List Nat) := match size1 with
          | some s => some s
          | none => if imageExtSuffix src0 then none else some (litBytes "medium")
        if bytesContainsSub [47] src0 then
          match size2 with
          | some sz =>
              (litBytes "/local--resized-images/" ++ stripOneLeadingSlash src0 ++ litBytes "/" ++ sz ++ litBytes ".jpg",
               if linkLooseNull attr then some (litBytes "/local--files/" ++ stripOneLeadingSlash src0) else link0)
          | none => (litBytes "/local--files/" ++ stripOneLeadingSlash src0, link0)
        else
          match size2 with
          | some sz =>
              (litBytes "/local--resized-images/" ++ seg ++ [47] ++ src0 ++ litBytes "/" ++ sz ++ litBytes ".jpg",
               if linkLooseNull attr then some (litBytes "/local--files/" ++ seg ++ [47] ++ stripOneLeadingSlash src0) else link0)
          | none => (litBytes "/local--files/" ++ seg ++ [47] ++ src0, link0)
    assembleImageHtml attr opts src0 src link

/-- Direct PHP-traceable spec for `Gallery.php`. The optional token renderer and
    lookup model `Gallery::itemText`: authored-source/text resolution first, then
    PHP's one-level `renderTokenId` fallback. As in `dispatchRenderR41TokenAware`,
    that fallback is shallow (it is not itself token-table recursive), and
    `tokenSource` is reconstructed from parse-reachable token entries rather than
    represented as independent state. -/
def refXhtmlGallery (env : RenderEnv) (opts : OptMap)
    (renderTok : TokenEntry → List Nat := fun _ => [])
    (lookup : Nat → Option TokenEntry := fun _ => none) : List Nat :=
  let size := gallerySize (optStrBytes opts "size".toList)
  let sources := optStrBytes opts "sources".toList
  if phpTruthyBytes sources then
    let (_, _, out) := (explodeByte 10 sources).foldl
      (fun st row => galleryRowStepEnv env size st row renderTok lookup)
      ([], [], litBytes "<div class=\"gallery-box\">")
    out ++ litBytes "</div>"
  else
    litBytes "<div class=\"error-block\">Error selecting page.</div>"

/-- Direct PHP-traceable spec for `User.php`. -/
def refXhtmlUser (env : RenderEnv) (opts : OptMap) : List Nat :=
  let name := optStrBytes opts "userName".toList
  match env.lookupUser name with
  | some u => litBytes "<span class=\"printuser\">" ++ htmlSpecialCharsCompat u.displayName ++ litBytes "</span>"
  | none =>
      litBytes "<span class=\"error-inline\"><em>" ++ htmlSpecialCharsCompat name ++
        litBytes "</em> does not match any existing user name</span>"

/-- Concrete TCB-4 reference render specification (`renderRefSpec`) for all 62
    `RenderRuleId`s, parametric in `RenderEnv`. The trailing optional lookup is the
    render-phase token table. Exactly the two renderers audited as token-table
    consumers use it: `.footnoteitem` for the empty-Raw separator decision and
    `.gallery` for token-composed item rows. Every other branch ignores it, and
    omitting it preserves the prior single-token/no-context behavior. -/
def renderRefSpec (env : RenderEnv) (r : RenderRuleId)
    (conf : RenderConf) (doc : DocState) (opts : OptMap)
    (lookup : Nat → Option TokenEntry := fun _ => none) : List Nat :=
  match r with
  | .footnote => refXhtmlFootnote conf opts
  | .footnoteitem => refXhtmlFootnoteitem conf doc opts lookup
  | .footnoteblock => refXhtmlFootnoteblock doc opts
  | .bibitem => refXhtmlBibitem conf opts
  | .bibliography => refXhtmlBibliography opts
  | .bibcite => refXhtmlBibcite conf doc opts
  | .paragraph => refXhtmlParagraph opts
  | .newline => refXhtmlNewline
  | .break => refXhtmlBreak
  | .center => refXhtmlCenter opts
  | .horiz => refXhtmlHoriz
  | .separator => refXhtmlSeparator
  | .clearfloat => refXhtmlClearfloat opts
  | .blockquote => refXhtmlBlockquote opts
  | .note => refXhtmlNote opts
  | .divalign => refXhtmlDivalign opts
  | .comment => refXhtmlComment
  | .delimiter => refXhtmlDelimiter opts
  | .url => refXhtmlUrl opts
  | .email => refXhtmlEmail opts
  | .mathinline => refXhtmlMathinline opts
  | .interwiki => refXhtmlInterwiki opts
  | .colortext => refXhtmlColortext opts
  | .strong => refXhtmlPair opts (litBytes "<strong>") (litBytes "</strong>")
  | .emphasis => refXhtmlPair opts (litBytes "<em>") (litBytes "</em>")
  | .underline => refXhtmlPair opts (litBytes "<span style=\"text-decoration: underline;\">") (litBytes "</span>")
  | .strikethrough => refXhtmlPair opts (litBytes "<span style=\"text-decoration: line-through;\">") (litBytes "</span>")
  | .tt => refXhtmlPair opts (litBytes "<tt>") (litBytes "</tt>")
  | .superscript => refXhtmlPair opts (litBytes "<sup>") (litBytes "</sup>")
  | .subscript => refXhtmlPair opts (litBytes "<sub>") (litBytes "</sub>")
  | .typography => refXhtmlTypography opts
  | .tighten => refXhtmlTighten
  | .raw => refXhtmlRaw opts
  | .rawold => refXhtmlRawold opts
  | .form => refXhtmlForm opts
  | .heading => refXhtmlHeading opts
  | .toc => refXhtmlToc opts
  | .list => refXhtmlList opts
  | .deflist => refXhtmlDeflist opts
  | .table => refXhtmlTable opts
  | .tableadv => refXhtmlTableadv opts
  | .equationreference => refXhtmlEquationreference conf doc opts
  | .anchor => refXhtmlAnchor opts
  | .collapsible => refXhtmlCollapsible opts
  | .tabview => refXhtmlTabview opts
  | .button => refXhtmlButton opts
  | .iframe => refXhtmlIframe opts
  | .date => refXhtmlDate opts
  | .file => refXhtmlFile env conf doc opts
  | .size => refXhtmlSize opts
  | .span => refXhtmlSpan opts
  | .div => refXhtmlDiv opts
  | .code => refXhtmlCode env opts
  | .embed => refXhtmlEmbed opts
  | .freelink => refXhtmlFreelink env opts
  | .module => refXhtmlModule env opts
  | .module654 => refXhtmlModule env opts
  | .math => refXhtmlMath env opts
  | .image => refXhtmlImage env conf doc opts
  | .gallery =>
      refXhtmlGallery env opts
        (fun e => match renderRuleOfName e.rule with
          | some rid => dispatchRenderR41 rid conf doc e.opts
          | none => [])
        lookup
  | .user => refXhtmlUser env opts
  | .html => refXhtmlHtml opts

/-- Concrete Tier-2 token reachability predicate. -/
def ReachableTok (_r : RenderRuleId) (_opts : OptMap) (_doc : DocState) : Prop := True

/-! ## Harness specialization and D13 separation theorems -/

private theorem harnessExistingPages_eq_freelink_snoc :
    harnessExistingPages = freelinkExistingPages ++ [d13TitleTargetPage] := by
  decide

private theorem harnessEnv_pageExists_eq_of_ne (page : List Nat)
    (hne : page ≠ d13TitleTargetPage) :
    harnessEnv.pageExists page = freelinkExistingPages.contains page := by
  change harnessExistingPages.contains page = freelinkExistingPages.contains page
  rw [harnessExistingPages_eq_freelink_snoc]
  induction freelinkExistingPages with
  | nil => simp [hne]
  | cons p ps ih =>
      simp only [List.cons_append, List.contains_cons]
      rw [ih]

private theorem harnessEnv_pageTitle_none_of_ne (page : List Nat)
    (hne : page ≠ d13TitleTargetPage) :
    harnessEnv.pageTitle page = none := by
  change (if page == d13TitleTargetPage then
    some ([72, 117, 110, 116, 39, 115, 32, 34, 84, 105, 116, 108, 101, 34, 32, 38, 32, 60, 84, 101, 115, 116, 62] : List Nat)
    else none) = none
  have hbeq : (page == d13TitleTargetPage) = false := beq_false_of_ne hne
  simp [hbeq]

theorem renderFreelinkWithEnv_harness_eq_of_ne (opts : OptMap)
    (hne : optStrBytes opts "page".toList ≠ d13TitleTargetPage) :
    renderFreelinkWithEnv harnessEnv opts = renderFreelink opts := by
  dsimp only [renderFreelinkWithEnv, renderFreelink]
  cases hu : phpTruthyBytes (optStrBytes opts "url".toList) with
  | true => simp [hu]
  | false =>
      simp only [hu, Bool.false_eq_true, ↓reduceIte]
      cases hs : phpTruthyBytes (optStrBytes opts "site".toList) with
      | true => simp [hs]
      | false =>
          simp only [hs, Bool.false_eq_true, ↓reduceIte]
          have hex := harnessEnv_pageExists_eq_of_ne (optStrBytes opts "page".toList) hne
          have hti := harnessEnv_pageTitle_none_of_ne (optStrBytes opts "page".toList) hne
          rw [hex, hti]
          cases hft : !(phpEmptyOpt (omGet opts "textFromTitle".toList)) <;>
            cases hf : freelinkExistingPages.contains (optStrBytes opts "page".toList) <;>
            simp [hft, hf]

/-- Explicit REFCORR13 D13 witness separating `renderMirrorEnv harnessEnv .freelink` from
    legacy `dispatchRenderR41 .freelink` (`ServingRules.freelinkExistingPages`). -/
theorem renderFreelinkWithEnv_d13_witness :
    let opts : OptMap := [("page".toList, OptVal.bytes d13TitleTargetPage)]
    renderMirrorEnv harnessEnv .freelink {} {} opts ≠
      dispatchRenderR41 .freelink {} {} opts := by
  intro opts h
  have hfalse : (renderMirrorEnv harnessEnv .freelink {} {}
      [("page".toList, OptVal.bytes d13TitleTargetPage)] ==
      dispatchRenderR41 .freelink {} {}
      [("page".toList, OptVal.bytes d13TitleTargetPage)]) = false := rfl
  change _ = _ at h
  rw [h, beq_self_eq_true] at hfalse
  cases hfalse

private theorem galleryRowStepEnv_harness_eq (size : List Nat)
    (st : List Nat × List Nat × List Nat) (row : List Nat) :
    galleryRowStepEnv harnessEnv size st row = galleryRowStep size st row := by
  unfold galleryRowStepEnv
  dsimp only
  cases hrow : startsWithBytes [58, 32] row with
  | false =>
      simp only [hrow, Bool.not_false, ↓reduceIte]
      unfold galleryRowStep
      simp only [hrow, Bool.not_false, ↓reduceIte]
  | true =>
      simp only [hrow, Bool.not_true, Bool.false_eq_true, ↓reduceIte]
      cases hstar : startsWithBytes [42]
          (galleryItemText (fun _ => []) (fun _ => none)
            (gallerySplitRow (phpTrimBytes (row.drop 2))).1) with
      | true =>
          simp only [hstar, ↓reduceIte]
          cases hfk : bytesContainsSub (litBytes "flickr:")
              ((galleryItemText (fun _ => []) (fun _ => none)
                (gallerySplitRow (phpTrimBytes (row.drop 2))).1).drop 1) with
          | true =>
              simp only [hfk, ↓reduceIte, harnessEnv]
              unfold galleryRowStep
              dsimp only
              simp only [hrow, Bool.not_true, Bool.false_eq_true, ↓reduceIte, hstar, hfk]
          | false => simp only [hfk, Bool.false_eq_true, ↓reduceIte]
      | false =>
          simp only [hstar, Bool.false_eq_true, ↓reduceIte]
          cases hfk : bytesContainsSub (litBytes "flickr:")
              (galleryItemText (fun _ => []) (fun _ => none)
                (gallerySplitRow (phpTrimBytes (row.drop 2))).1) with
          | true =>
              simp only [hfk, ↓reduceIte, harnessEnv]
              unfold galleryRowStep
              dsimp only
              simp only [hrow, Bool.not_true, Bool.false_eq_true, ↓reduceIte, hstar,
                Bool.false_eq_true, hfk]
          | false => simp only [hfk, Bool.false_eq_true, ↓reduceIte]

/-- Token-aware form of `galleryRowStepEnv_harness_eq`. At `harnessEnv` the
    Flickr boundary is absent, so the env-parametric row step agrees with the
    shared shallow row step for any supplied token renderer and lookup. -/
private theorem galleryRowStepEnv_harness_tokenAware_eq (size : List Nat)
    (st : List Nat × List Nat × List Nat) (row : List Nat)
    (renderTok : TokenEntry → List Nat) (lookup : Nat → Option TokenEntry) :
    galleryRowStepEnv harnessEnv size st row renderTok lookup =
      galleryRowStep size st row renderTok lookup := by
  unfold galleryRowStepEnv
  dsimp only
  cases hrow : startsWithBytes [58, 32] row with
  | false =>
      simp only [hrow, Bool.not_false, ↓reduceIte]
      unfold galleryRowStep
      simp only [hrow, Bool.not_false, ↓reduceIte]
  | true =>
      simp only [hrow, Bool.not_true, Bool.false_eq_true, ↓reduceIte]
      cases hstar : startsWithBytes [42]
          (galleryItemText renderTok lookup
            (gallerySplitRow (phpTrimBytes (row.drop 2))).1) with
      | true =>
          simp only [hstar, ↓reduceIte]
          cases hfk : bytesContainsSub (litBytes "flickr:")
              ((galleryItemText renderTok lookup
                (gallerySplitRow (phpTrimBytes (row.drop 2))).1).drop 1) with
          | true =>
              simp only [hfk, ↓reduceIte, harnessEnv]
              unfold galleryRowStep
              dsimp only
              simp only [hrow, Bool.not_true, Bool.false_eq_true, ↓reduceIte, hstar, hfk]
          | false => simp only [hfk, Bool.false_eq_true, ↓reduceIte]
      | false =>
          simp only [hstar, Bool.false_eq_true, ↓reduceIte]
          cases hfk : bytesContainsSub (litBytes "flickr:")
              (galleryItemText renderTok lookup
                (gallerySplitRow (phpTrimBytes (row.drop 2))).1) with
          | true =>
              simp only [hfk, ↓reduceIte, harnessEnv]
              unfold galleryRowStep
              dsimp only
              simp only [hrow, Bool.not_true, Bool.false_eq_true, ↓reduceIte, hstar,
                Bool.false_eq_true, hfk]
          | false => simp only [hfk, Bool.false_eq_true, ↓reduceIte]

private theorem foldl_galleryRowStepEnv_tokenAware (sz : List Nat)
    (rows : List (List Nat)) (acc : List Nat × List Nat × List Nat)
    (renderTok : TokenEntry → List Nat) (lookup : Nat → Option TokenEntry) :
    rows.foldl (fun st row => galleryRowStepEnv harnessEnv sz st row renderTok lookup) acc =
      rows.foldl (fun st row => galleryRowStep sz st row renderTok lookup) acc := by
  have hfn : (fun st row => galleryRowStepEnv harnessEnv sz st row renderTok lookup) =
      (fun st row => galleryRowStep sz st row renderTok lookup) :=
    funext fun st => funext fun row =>
      galleryRowStepEnv_harness_tokenAware_eq sz st row renderTok lookup
  rw [hfn]

/-- Harness-specialized token-aware Gallery bridge. Proof-strength note: this is
    a consistency theorem between the reference spec and the existing shallow
    token-aware mirror dispatch under `harnessEnv`; it does not model recursive
    token-table-aware `renderTokenId` fallback or independent `tokenSource` state. -/
theorem renderRefSpec_harness_gallery_tokenAware_eq
    (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (doc : DocState) (opts : OptMap) :
    renderRefSpec harnessEnv .gallery conf doc opts lookup =
      dispatchRenderR41TokenAware lookup .gallery conf doc opts := by
  unfold renderRefSpec dispatchRenderR41TokenAware refXhtmlGallery renderGalleryCore
  dsimp only
  cases hsrc : phpTruthyBytes (optStrBytes opts "sources".toList) with
  | false => simp only [Bool.false_eq_true, ↓reduceIte]
  | true =>
      simp only [↓reduceIte]
      have hf := foldl_galleryRowStepEnv_tokenAware
        (gallerySize (optStrBytes opts "size".toList))
        (explodeByte 10 (optStrBytes opts "sources".toList))
        ([], [], litBytes "<div class=\"gallery-box\">")
        (fun e => match renderRuleOfName e.rule with
          | some rid => dispatchRenderR41 rid conf doc e.opts
          | none => [])
        lookup
      exact congrArg (fun p : List Nat × List Nat × List Nat => p.2.2 ++ litBytes "</div>") hf

private theorem renderCodeWithEnv_harness_eq (opts : OptMap) :
    renderCodeWithEnv harnessEnv opts = renderCode opts := by
  unfold renderCodeWithEnv renderCode
  dsimp only
  cases hc : codeLangs.contains (codeType opts) with
  | true => simp [hc, harnessEnv]
  | false => simp [hc]

private theorem renderMathWithEnv_harness_eq (opts : OptMap) :
    renderMathWithEnv harnessEnv opts = renderMath opts := by
  unfold renderMathWithEnv renderMath
  dsimp only
  cases hm : !mathTypeValid (optStrBytes opts "type".toList) with
  | true => simp [hm]
  | false => simp [hm, harnessEnv]

private theorem renderImageWithEnv_harness_eq (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    renderImageWithEnv harnessEnv conf doc opts =
      renderImageWithPage (docPageSegment conf doc) opts := by
  unfold renderImageWithEnv renderImageWithPage
  dsimp only
  rw [envPageSegment_harness]
  cases hf : startsWithBytes (litBytes ":first") (optStrBytes opts "src".toList) with
  | true => simp only [↓reduceIte, harnessEnv]
  | false =>
      simp only [Bool.false_eq_true, ↓reduceIte]
      cases hfl : bytesContainsSub (litBytes "flickr:") (optStrBytes opts "src".toList) with
      | true => simp only [↓reduceIte, harnessEnv]
      | false =>
          simp only [Bool.false_eq_true, ↓reduceIte]
          dsimp only [assembleImageHtml]
          rfl

private theorem foldl_galleryRowStepEnv (sz : List Nat)
    (rows : List (List Nat)) (acc : List Nat × List Nat × List Nat) :
    rows.foldl (fun st row => galleryRowStepEnv harnessEnv sz st row) acc =
      rows.foldl (fun st row => galleryRowStep sz st row) acc := by
  have hfn : (fun st row => galleryRowStepEnv harnessEnv sz st row) =
      (fun st row => galleryRowStep sz st row) :=
    funext fun st => funext fun row => galleryRowStepEnv_harness_eq sz st row
  rw [hfn]

private theorem renderGalleryWithEnv_harness_eq (opts : OptMap) :
    renderGalleryWithEnv harnessEnv opts = renderGallery opts := by
  unfold renderGalleryWithEnv renderGallery renderGalleryCore
  dsimp only
  cases hsrc : phpTruthyBytes (optStrBytes opts "sources".toList) with
  | false => simp only [Bool.false_eq_true, ↓reduceIte]
  | true =>
      simp only [↓reduceIte]
      have hf := foldl_galleryRowStepEnv (gallerySize (optStrBytes opts "size".toList))
        (explodeByte 10 (optStrBytes opts "sources".toList))
        ([], [], litBytes "<div class=\"gallery-box\">")
      exact congrArg (fun p : List Nat × List Nat × List Nat => p.2.2 ++ litBytes "</div>") hf

/-- At `harnessEnv`, `renderMirrorEnv` agrees with `dispatchRenderR41` across all 61
    non-freelink rules (and on `.freelink` away from `d13TitleTargetPage`). -/
theorem renderMirrorEnv_harness_eq (r : RenderRuleId) (conf : RenderConf)
    (doc : DocState) (opts : OptMap)
    (hd13 : r = .freelink → optStrBytes opts "page".toList ≠ d13TitleTargetPage) :
    renderMirrorEnv harnessEnv r conf doc opts = dispatchRenderR41 r conf doc opts := by
  cases r with
  | freelink => exact renderFreelinkWithEnv_harness_eq_of_ne opts (hd13 rfl)
  | module => exact renderModuleWithEnv_harness opts
  | module654 => exact renderModuleWithEnv_harness opts
  | code => exact renderCodeWithEnv_harness_eq opts
  | math => exact renderMathWithEnv_harness_eq opts
  | user => rfl
  | image => exact renderImageWithEnv_harness_eq conf doc opts
  | gallery => exact renderGalleryWithEnv_harness_eq opts
  | file => rfl
  | _ => rfl

end LeanFtml
