/-
  ServingRules.lean — R4.8 render mirror: the serving-layer and
  stubbed rules (Freelink, Module, Module654, Math, Image,
  Gallery, User), mirroring
  `Text/Wiki/Render/Xhtml/{Freelink,Module,Math,Image,Gallery,User}.php`
  (Module654's renderer extends Module's and shares its `token()`)
  under the reference harness (`ref-php/harness/`).

  ## Harness environment (fixed by `wiki-config.php`,
  `ozone-stubs.php`, and `pages.php`; verified against those
  files and against fresh harness renders)

  * Freelink conf: `view_url = '/%s'`, `new_url = '/%s'`,
    `new_text = ''` (falsy), `new_text_pos = 'after'` (class
    default), `css = null`, `css_new = 'newpage'`,
    `exists_callback = wikiPageExists` over
    `REF_EXISTING_PAGES = array_keys(ref_page_map())`, the eight
    keys dumped from PHP itself: `muse-probe-g14-target`,
    `other-page`, `empty-page`, `:sandbox:other-page`,
    `muse-probe-g14b-target`, `muse-probe-r2link-free-exists`,
    `muse-probe-r2link-free-exists2`,
    `muse-probe-r2notes-x-inc-src` (baked below as
    `freelinkExistingPages`).
  * `vars['pageName']` is never set by any harness entry point,
    so it is null in every PHP render oracle; the state wire
    format carries no page name. Every page-name concatenation
    below therefore uses the empty string, which is also what
    PHP's null concatenates to.
  * The ModuleManager stub reports exactly nine module names as
    available (case-insensitive via byte-wise `strtolower`):
    backlinks, categories, css, join, listpages, pagetree, rate,
    redirect, tagcloud; `resolveWikiModuleName` is the identity.
  * The LatexRenderer stub's methods are no-ops, so the PNG file
    Math's renderer checks for never comes into existence and
    the rule always takes its own fossil failure path (the
    error block) in the harness. The PNG-exists path (real
    LaTeX rendering) is the named external boundary, recorded
    in REPORT-R48.md; it is unreachable under the harness.
  * Image conf carries no `post_vars` and no `no_local`
    override, and Gallery conf no `no_local`, so those fossil
    branches are inert here (both read as null).

  ## Dispositions (named at the entry point, `ServingRender`)

  Four serving-layer paths cannot be mirrored because the
  harness itself cannot run them; the entry-point scan in
  `LeanFtml/ServingRender.lean` names each in the outcome's
  `unmirrored` list, so no case resting on one is ever counted
  as a pass:

  * `User:DB_OzoneUserPeer` — every User token. The stub tree
    contains no `Criteria`, `DB_OzoneUserPeer`, or
    `WDRenderUtils` class at all, so PHP's `token()` fatals
    with `Error: Class "Criteria" not found` before either
    branch. `renderUser` below mirrors the REFVAL2-corrected
    not-found branch (the rule's content under a user-directory
    miss); the scan names the boundary for every User token,
    so that branch is never used to claim a pass in this tier.
  * `Image:FlickrHandler` — an Image token whose `src`
    contains `flickr:` (and does not take the `:first` path):
    PHP fatals with `Error: Class "FlickrHandler" not found`.
  * `Gallery:FlickrHandler` — a Gallery token with a processed
    source row whose `src` contains `flickr:`: same fatal.
  * `Freelink:textFromTitle` — a Freelink token with
    `textFromTitle` set whose page exists: PHP fatals with
    `Error: Call to undefined method
    DB_PagePeer::selectByPrimaryKey()` (the stub class has no
    such method; the R2-LINK stage asked for a title stub and
    root declined it, confirming the boundary).

  Two further paths are deterministic in the harness and are
  mirrored, not dispositioned: an Image `src` starting with
  `:first` renders the empty string (the page lookup keys on
  the unset `vars['pageName']` and misses), and a Gallery with
  falsy `sources` renders the constant `Error selecting page.`
  block for the same reason. The found-page branches behind
  them (Image's `DB_FilePeer` first-attachment selection,
  Gallery's attachment listing) are unreachable in the harness
  and are recorded in REPORT-R48.md only.

  Escapes: bare `htmlspecialchars($s)` in PHP 8.5 is
  `htmlSpecialCharsQuotesSubst` (ENT_QUOTES | ENT_SUBSTITUTE |
  ENT_HTML401); explicit `htmlspecialchars($s, ENT_COMPAT,
  'UTF-8')` is `htmlSpecialCharsCompat`. The Freelink and Image
  renderers' calls were bare in the fossil; the HTMLCHARS
  correction converted all seven Freelink calls and all five
  Image calls to explicit ENT_COMPAT after live probes showed
  the apostrophe raw on every reachable surface, so this file's
  Freelink and Image escapes are `htmlSpecialCharsCompat`
  throughout. `trim` is
  `phpTrimBytes` (CodeEmbedRules). `urlencode` is
  `urlencodeBytes` (FinalRules). Image's `encodeNonAscii` is
  `percentEncodeNonAscii` (InlineSimpleRules, whose header
  already names this rule as a user).
-/

import LeanFtml.TokenState
import LeanFtml.RenderCore
import LeanFtml.FinalRules
import LeanFtml.InlineSimpleRules
import LeanFtml.CodeEmbedRules

namespace LeanFtml

/-! ## Byte helpers -/

/-- Whether `pat` is a prefix of `bs` (PHP `strpos($bs, $pat) === 0`
    and `preg_match('/^.../')` shapes). -/
def startsWithBytes : List Nat → List Nat → Bool
  | [], _ => true
  | _ :: _, [] => false
  | p :: ps, b :: bs => p == b && startsWithBytes ps bs

/-- Strip exactly one leading `/` byte (PHP
    `preg_replace("/^\//", '', $s)`). -/
def stripOneLeadingSlash (bs : List Nat) : List Nat :=
  match bs with
  | 47 :: rest => rest
  | _ => bs

/-- Whether `bs` ends with one of `.png`, `.jpg`, `.gif`,
    case-insensitively (PHP `preg_match('/\.(png|jpg|gif)$/i',
    $src)`; the pure suffix reading — PHP's `$` also matches
    before a single trailing newline, a shape no battery case
    exercises). -/
def imageExtSuffix (bs : List Nat) : Bool :=
  let lowered := asciiLowerBytes bs
  startsWithBytes [46, 112, 110, 103] (lowered.drop (lowered.length - 4)) ||
  startsWithBytes [46, 106, 112, 103] (lowered.drop (lowered.length - 4)) ||
  startsWithBytes [46, 103, 105, 102] (lowered.drop (lowered.length - 4))

/-- PHP `basename($path)`: strip trailing `/` bytes, then take
    everything after the last remaining `/` (the whole string
    when there is none). -/
def phpBasename (bs : List Nat) : List Nat :=
  let trimmed := (bs.reverse.dropWhile (fun b => b == 47)).reverse
  (trimmed.reverse.takeWhile (fun b => !(b == 47))).reverse

/-- Split `bs` on every non-overlapping occurrence of the byte
    `sep` (PHP `explode` on a one-byte separator; always yields
    at least one piece). -/
def explodeByte (sep : Nat) (bs : List Nat) : List (List Nat) :=
  go bs [] []
where
  go : List Nat → List Nat → List (List Nat) → List (List Nat)
    | [], cur, acc => acc ++ [cur.reverse]
    | b :: rest, cur, acc =>
        if b == sep then go rest [] (acc ++ [cur.reverse])
        else go rest (b :: cur) acc

/-- Split `bs` on every non-overlapping occurrence of the byte
    sequence `pat` (PHP `explode` on a string separator; an
    empty pattern never occurs in this stage and yields the
    whole string as the single piece). -/
def explodeSeq (pat : List Nat) (bs : List Nat) : List (List Nat) :=
  match pat with
  | [] => [bs]
  | _ => go bs [] []
where
  go : List Nat → List Nat → List (List Nat) → List (List Nat)
    | [], cur, acc => acc ++ [cur.reverse]
    | b :: rest, cur, acc =>
        if startsWithBytes pat (b :: rest) then
          go (rest.drop (pat.length - 1)) [] (acc ++ [cur.reverse])
        else go rest (b :: cur) acc
  termination_by xs => xs.length

/-- The last index of byte `b` in `bs`, if any (PHP `strrpos`). -/
def lastIndexOfByte (b : Nat) (bs : List Nat) : Option Nat :=
  go bs 0 none
where
  go : List Nat → Nat → Option Nat → Option Nat
    | [], _, acc => acc
    | x :: rest, i, acc => go rest (i + 1) (if x == b then some i else acc)

/-- PHP `stripslashes`: a backslash followed by `0` yields the
    NUL byte, a backslash followed by any other byte yields
    that byte, and a trailing backslash is dropped (verified
    against the harness PHP 8.5.4). -/
def stripSlashesBytes : List Nat → List Nat
  | [] => []
  | 92 :: [] => []
  | 92 :: b :: rest => (if b == 48 then 0 else b) :: stripSlashesBytes rest
  | b :: rest => b :: stripSlashesBytes rest

/-- Replace every space byte with the six bytes `&nbsp;`
    (PHP `str_replace(' ', '&nbsp;', $text)`, the Freelink
    `nonbr` step; the corrected parse rule never sets `nonbr`,
    so this is inert on every state the pipeline produces). -/
def nbspSpaces : List Nat → List Nat
  | [] => []
  | 32 :: rest => [38, 110, 98, 115, 112, 59] ++ nbspSpaces rest
  | b :: rest => b :: nbspSpaces rest

/-- Whether `pat` occurs in `subj` at some index `>= 1` (PHP's
    truthy `strpos($subj, $pat)`: an occurrence at index 0 is
    falsy). -/
def containsSubFrom1 (pat subj : List Nat) : Bool :=
  match subj with
  | [] => false
  | _ :: rest => bytesContainsSub pat rest

/-! ## Module / Module654 -/

/-- The ModuleManager stub's available-module list (`ozone-stubs.php`),
    compared after byte-wise `strtolower`. REFCORR13 R13-AGY2 D14 adds the
    nine standard modules measured live in REPORT-AGY-HUNT.md D14; the
    rendered body of each remains an external serving boundary. -/
def moduleAvailableNames : List (List Nat) :=
  [ litBytes "backlinks", litBytes "categories", litBytes "css",
    litBytes "join", litBytes "listpages", litBytes "pagetree",
    litBytes "rate", litBytes "redirect", litBytes "tagcloud",
    litBytes "newpage", litBytes "childpages", litBytes "pagecalendar",
    litBytes "wantedpages", litBytes "orphanedpages", litBytes "countpages",
    litBytes "search", litBytes "members", litBytes "files",
    litBytes "listusers", litBytes "mailform", litBytes "comments",
    litBytes "themepreviewer" ]

/-- REFCORR19 F3: caller-runtime modules whose offline output is empty. -/
def callerRuntimeModules : List (List Nat) :=
  [ litBytes "listusers", litBytes "mailform",
    litBytes "comments", litBytes "themepreviewer" ]

/-- The fossil handoff marker byte: `utf8_encode("\xFE")`. -/
def moduleMarkerByte : List Nat := [195, 190]

/-- Mirror of `Text_Wiki_Render_Xhtml_Module::token` (shared by
    Module654, whose renderer extends this class). REFCORR19 F3:
    caller-runtime modules (`listusers`, `mailform`, `comments`,
    `themepreviewer`) return empty offline before checking ModuleManager.
    An available name renders the `\xFE module "Name" <urlencoded attr> \xFE`
    handoff marker; any other name renders the R2-corrected "No such module"
    error block with the name raw. -/
def renderModule (opts : OptMap) : List Nat :=
  let name := optStrBytes opts "moduleName".toList
  if callerRuntimeModules.contains (asciiLowerBytes name) then
    []
  else
    let attr0 := optStrBytes opts "attr".toList
    let body := optStrBytes opts "module_body".toList
    let attr := if phpEmptyOpt (omGet opts "module_body".toList) then attr0
      else attr0 ++ litBytes " module_body=\"" ++ urlencodeBytes body ++
        litBytes "\""
    if moduleAvailableNames.contains (asciiLowerBytes name) then
      moduleMarkerByte ++ litBytes "module \"" ++ name ++ litBytes "\"" ++
        (if attr.isEmpty then [] else
          [32] ++ urlencodeBytes attr ++ [32]) ++
        moduleMarkerByte
    else
      litBytes "<div class=\"error-block\">[[module <em>" ++ name ++
        litBytes "</em>]] No such module, please " ++
        litBytes "<a href=\"https://www.wikidot.com/doc:modules\" " ++
        litBytes "target=\"_blank\">check available modules</a> " ++
        litBytes "and fix this page.</div>"

/-! ## Math -/

/-- The fixed AMS/LaTeX environment allowlist measured on live by
    REPORT-AGY-HUNT.md D08 (equation, align, gather, eqnarray, multline,
    split). REFCORR13 R13-AGY2 D08 SUPERSEDES the R13-MATHNOTES
    `^[a-z]+$` acceptance rule: that rule rejected the round-5f `align2`
    witness but accepted `foobar` and `flalign`, which live rejects, and
    rejected `align*` and `gather*`, which live accepts after stripping `*`. -/
def mathAmsEnvironments : List (List Nat) :=
  [ litBytes "equation", litBytes "align", litBytes "gather",
    litBytes "eqnarray", litBytes "multline", litBytes "split",
    litBytes "alignat", litBytes "gathered", litBytes "aligned",
    litBytes "alignedat", litBytes "cases" ]

/-- Every `*` byte is stripped first (witness `a*b` is reported as `ab`),
    with no trim and no case folding (`align ` and `ALIGN` stay invalid). -/
def mathStripStar (ty : List Nat) : List Nat :=
  ty.filter (fun b => b != 42)

/-- The validator is exact allowlist membership of the stripped name. -/
def mathTypeValid (ty : List Nat) : Bool :=
  mathAmsEnvironments.contains (mathStripStar ty)

/-- Mirror of `Text_Wiki_Render_Xhtml_Math::token`. An invalid
    environment type returns the "Unsupported math environment"
    block (the branch reachable under the harness's no-op
    LatexRenderer stub); a valid type falls through to the
    constant failure block, because the PNG never exists under
    that stub (fossil "prabably" spelling preserved). The
    PNG-exists path is the named external boundary (see the
    file header). -/
def renderMath (opts : OptMap) : List Nat :=
  let ty := optStrBytes opts "type".toList
  let env := mathStripStar ty
  if !mathTypeValid ty then
    litBytes "<div class=\"error-block\">Unsupported math " ++
      litBytes "environment \"" ++ env ++ litBytes "\"</div>"
  else
    litBytes "<div class=\"error-block\">The equation has not " ++
      litBytes "been processed correctly. Most prabably it has " ++
      litBytes "syntax error(s).</div>"

/-! ## User -/

/-- Mirror of the not-found branch of
    `Text_Wiki_Render_Xhtml_User::token` as corrected by
    REFVAL2: the name escaped under ENT_COMPAT inside the
    error-inline span. The user-directory lookup itself
    (`Criteria` / `DB_OzoneUserPeer`, absent from the harness
    tree) is the serving-layer boundary: the entry-point scan
    names `User:DB_OzoneUserPeer` for every User token, so
    this branch is the rule's recorded content under a lookup
    miss and is never used to claim a pass in this tier. -/
def renderUser (opts : OptMap) : List Nat :=
  let name := optStrBytes opts "userName".toList
  litBytes "<span class=\"error-inline\"><em>" ++
    htmlSpecialCharsCompat name ++
    litBytes "</em> does not match any existing user name</span>"

/-! ## Freelink -/

/-- The harness existence set: `array_keys(ref_page_map())`
    from `ref-php/harness/pages.php`, dumped from PHP itself
    (see the file header). -/
def freelinkExistingPages : List (List Nat) :=
  [ litBytes "muse-probe-g14-target", litBytes "other-page",
    litBytes "empty-page", litBytes ":sandbox:other-page",
    litBytes "muse-probe-g14b-target",
    litBytes "muse-probe-r2link-free-exists",
    litBytes "muse-probe-r2link-free-exists2",
    litBytes "muse-probe-r2notes-x-inc-src" ]

/-- Mirror of `Text_Wiki_Render_Xhtml_Freelink::token` under
    the harness conf (see the file header). The URL branch
    (truthy `url`) renders the external anchor with
    `ENT_COMPAT` escapes on the trimmed text and on the URL. The
    fossil site branch is unreachable (the corrected parse rule
    never sets `site`; it is null in every retained state) and
    is mirrored in its fossil shape with the undefined
    `GlobalProperties::$URL_DOMAIN` read as empty. The local
    branch checks existence against `freelinkExistingPages`;
    `textFromTitle` on a missing page falls back to the page
    name as text, and on an existing page is the named
    disposition `Freelink:textFromTitle` (the entry-point scan
    excludes it, so the fallback arm here is never observed).
    Existing pages render `<a href="/page<suffix>">`; missing
    pages render with the `newpage` class, the anchor-plus-extra
    suffix appended in both branches (correction C1). -/
def renderFreelink (opts : OptMap) : List Nat :=
  let page := optStrBytes opts "page".toList
  let text := optStrBytes opts "text".toList
  let anchor := optStrBytes opts "anchor".toList
  let extra := optStrBytes opts "extra".toList
  let url := optStrBytes opts "url".toList
  let site := optStrBytes opts "site".toList
  let nonbr := !(phpEmptyOpt (omGet opts "nonbr".toList))
  let textFromTitle := !(phpEmptyOpt (omGet opts "textFromTitle".toList))
  if phpTruthyBytes url then
    -- REFCORR13 D07: empty-pipe external URL falls back to the slugified page text.
    let text := if textFromTitle && (phpTrimBytes text).isEmpty then page else text
    let t := htmlSpecialCharsCompat (phpTrimBytes text)
    let t := if nonbr then nbspSpaces t else t
    -- MIRROR-FIX Item 2 (REFCORR3 C-SUSPECT-SERVING-2): the parse rule
    -- appends a truthy target for a starred URL; the render must emit its
    -- escaped attribute ahead of href, exactly as the corrected reference
    -- and live do. A plain URL carries no target and is unchanged.
    let target := optStrBytes opts "target".toList
    let targetAttr := if target.isEmpty then [] else
      litBytes " target=\"" ++ htmlSpecialCharsCompat target ++ litBytes "\""
    -- REFCORR13 C-R5F-R2-4 plus D06: percent-encode the external target and keep the peeled #fragment / #/route suffix in the href.
    litBytes "<a" ++ targetAttr ++ litBytes " href=\"" ++
      htmlSpecialCharsCompat (percentEncodeNonAscii (url ++ anchor ++ extra)) ++
      litBytes "\">" ++ t ++ litBytes "</a>"
  else if phpTruthyBytes site then
    litBytes "<a href=\"http://" ++ site ++ litBytes "." ++
      litBytes "/" ++ page ++ litBytes "\">" ++
      htmlSpecialCharsCompat (phpTrimBytes text) ++
      litBytes "</a>"
  else
    let pageExists := freelinkExistingPages.contains page
    let text := if textFromTitle && !pageExists then page else text
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

/-! ## Image -/

/-- The nested `attr` option of an Image token as an ordered
    association list (PHP's associative array), empty when the
    option is absent or not a map. -/
def imageAttrMap (opts : OptMap) : List (List Char × OptVal) :=
  match omGet opts "attr".toList with
  | some (.map m) => m
  | _ => []

/-- Look up a key in an Image `attr` map, coercing the value to
    bytes; `none` when the key is absent or its value is null
    (PHP `isset` semantics). -/
def attrLookup (m : List (List Char × OptVal)) (key : String) :
    Option (List Nat) :=
  match m.find? (fun p => p.1 == key.toList) with
  | some (_, .null) => none
  | some (_, v) => some (renderOptValBytes v)
  | none => none

/-- The Image renderer's size classes that survive validation
    on a local source. -/
def imageSizeOk (size : List Nat) : Bool :=
  size == litBytes "small" || size == litBytes "medium" ||
  size == litBytes "thumbnail" || size == litBytes "square"

/-- PHP loose `$options['attr']['link'] == null`: true when the
    link is absent, null, or the empty string (the string `"0"`
    is not loose-null). -/
def linkLooseNull (m : List (List Char × OptVal)) : Bool :=
  match m.find? (fun p => p.1 == "link".toList) with
  | none => true
  | some (_, .null) => true
  | some (_, v) => (renderOptValBytes v).isEmpty

/-- The Image href for a present link value: a URL (containing
    `://` at index >= 1, PHP's truthy `strpos`) stays as-is; a
    fragment-only link stays bare (correction C5); anything
    else is rooted at `/` with the leading slash run collapsed
    to one (the fossil's `;^/+;` dirty fix). -/
def imageHref (link : List Nat) : List Nat :=
  if containsSubFrom1 (litBytes "://") link then link
  else if startsWithBytes [35] link then link
  else [47] ++ link.dropWhile (fun b => b == 47)

/-- One step of the Image attribute loop: emit ` key="val"`
    (both sides under `ENT_COMPAT`, the HTMLCHARS correction of
    the fossil's bare calls; the key side is inert, its input
    being one of the whitelist's fixed names) exactly for the
    case-sensitive key set `class`, `alt`, `style`, `width`,
    `height`, `title` (correction C1 added `title`). -/
def imageAttrEmit (kv : List Char × OptVal) : List Nat :=
  let key := kv.1.map Char.toNat
  if key == litBytes "class" || key == litBytes "alt" ||
      key == litBytes "style" || key == litBytes "width" ||
      key == litBytes "height" || key == litBytes "title" then
    [32] ++ htmlSpecialCharsCompat key ++ litBytes "=\"" ++
      htmlSpecialCharsCompat (renderOptValBytes kv.2) ++
      litBytes "\""
  else []

/-- Mirror of `Text_Wiki_Render_Xhtml_Image::token` under the
    harness conf (no `post_vars`, no `no_local`; see the file
    header). The `:first` source renders the empty string (the
    page lookup keys on the unset `vars['pageName']` and
    misses; the found-page `DB_FilePeer` branch behind it is
    unreachable in the harness and recorded in REPORT-R48.md).
    A `flickr:` source is the named disposition
    `Image:FlickrHandler`; this function is never consulted
    for one (the entry-point scan excludes the case), and the
    arm below exists only to keep the function total. Local
    sources take the resized path when a validated size
    survives (defaulting to `medium` for non-image extensions),
    with the original-file link filled in when no link is set;
    the emitted `src` and `href` are percent-encoded for
    non-ASCII bytes (correction C6) and escaped under
    `ENT_COMPAT` (the HTMLCHARS correction). -/
def renderImage (opts : OptMap) : List Nat :=
  let src0 := optStrBytes opts "src".toList
  let attr := imageAttrMap opts
  if startsWithBytes (litBytes ":first") src0 then []
  else if bytesContainsSub (litBytes "flickr:") src0 then []
  else
    let size0 := attrLookup attr "size"
    let link0 := attrLookup attr "link"
    -- Local path resolution; URL sources pass through untouched.
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
              (litBytes "/local--resized-images//" ++ src0 ++
                litBytes "/" ++ sz ++ litBytes ".jpg",
               if linkLooseNull attr then
                 some (litBytes "/local--files//" ++
                   stripOneLeadingSlash src0)
               else link0)
          | none => (litBytes "/local--files//" ++ src0, link0)
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

/-! ## Gallery -/

/-- The Gallery renderer's validated size classes; anything
    else (including an absent size) defaults to `thumbnail`. -/
def gallerySize (size : List Nat) : List Nat :=
  if size == litBytes "small" || size == litBytes "medium" ||
      size == litBytes "thumbnail" || size == litBytes "square" ||
      size == litBytes "original" then size
  else litBytes "thumbnail"

/-- Mirror of the Gallery renderer's private `getAttrs`: split
    the (trimmed) text on `="`; the first piece is the first
    key (trimmed); each later piece splits at its last `"` into
    the previous key's value (`stripslashes` applied; a piece
    with no `"` yields the empty value and the next key is the
    piece minus its first byte, matching PHP's `substr` on
    `strrpos`'s `false`) and the next key (trimmed). -/
def galleryGetAttrs (text : List Nat) : List (List Nat × List Nat) :=
  let pieces := explodeSeq [61, 34] (phpTrimBytes text)
  match pieces with
  | [] => []
  | first :: rest =>
      let (_, acc) := rest.foldl
        (fun (st : List Nat × List (List Nat × List Nat)) piece =>
          let (key, acc) := st
          match lastIndexOfByte 34 piece with
          | some i =>
              (phpTrimBytes (piece.drop (i + 1)),
               acc ++ [(key, stripSlashesBytes (piece.take i))])
          | none =>
              (phpTrimBytes (piece.drop 1),
               acc ++ [(key, [])]))
        (phpTrimBytes first, [])
      acc

/-- Look up a key in a Gallery row attribute list; the last
    occurrence wins (PHP associative-array assignment). -/
def galleryAttrGet (attrs : List (List Nat × List Nat))
    (key : List Nat) : Option (List Nat) :=
  match attrs.reverse.find? (fun p => p.1 == key) with
  | some (_, v) => some v
  | none => none

/-- Split a trimmed Gallery row body at its first space byte:
    the source and the attribute list (empty when there is no
    space). -/
def gallerySplitRow (body : List Nat) :
    List Nat × List (List Nat × List Nat) :=
  go body []
where
  go : List Nat → List Nat → List Nat × List (List Nat × List Nat)
    | [], acc => (acc.reverse, [])
    | 32 :: rest, acc => (acc.reverse, galleryGetAttrs rest)
    | b :: rest, acc => go rest (b :: acc)

/-- The source a Gallery row will be processed with, if the row
    is processed at all: a row is processed exactly when it
    starts with `": "`; its body is trimmed and split at the
    first space, and a leading `*` on the source is stripped
    (the anchor-target side effect is render-internal). Shared
    by `renderGallery` and by the entry-point disposition scan
    in `LeanFtml/ServingRender.lean`, so the two can never
    disagree about which rows are processed or what source
    they carry (in particular, which rows the `flickr:` test
    applies to). -/
def galleryRowSrc (row : List Nat) : Option (List Nat) :=
  if startsWithBytes [58, 32] row then
    let (src, _) := gallerySplitRow (phpTrimBytes (row.drop 2))
    some (if startsWithBytes [42] src then src.drop 1 else src)
  else none

/-- REFCORR13 D09: live maps a `link=` whose value starts with
    `javascript:`, `vbscript:` or `data:` to `#`, case-insensitively,
    and leaves `mailto:` and every other scheme intact. The test is
    on the emitted href after any external-source link override. -/
def gallerySanitizeHref (href : List Nat) : List Nat :=
  let lv := asciiLowerBytes (href.dropWhile phpTrimSet)
  if (litBytes "javascript:").isPrefixOf lv ||
      (litBytes "vbscript:").isPrefixOf lv ||
      (litBytes "data:").isPrefixOf lv then
    [35]
  else href

/-- Minimal PHP `strip_tags` on rendered XHTML bytes (drops `<...>`). -/
def galleryStripTags (bs : List Nat) : List Nat :=
  go bs false
where
  go : List Nat → Bool → List Nat
    | [], _ => []
    | 60 :: rest, false => go rest true
    | 62 :: rest, true => go rest false
    | _ :: rest, true => go rest true
    | b :: rest, false => b :: go rest false

/-- Reconstruct `$tokenSource[$id]` for parse rules that register it, or
    `none` when the rule does not supply a source span. -/
def galleryTokenSource (tok : TokenEntry) : Option (List Nat) :=
  match tok.rule with
  | "Raw" =>
      let txt := optStrBytes tok.opts "text".toList
      if txt.isEmpty then some (litBytes "@@@@")
      else some (litBytes "@@" ++ txt ++ litBytes "@@")
  | "Code" =>
      let txt := optStrBytes tok.opts "text".toList
      some (litBytes "[[code]]" ++ txt ++ litBytes "[[/code]]")
  | "Url" =>
      let href := optStrBytes tok.opts "href".toList
      let text := optStrBytes tok.opts "text".toList
      let star := match omGet tok.opts "target".toList with
        | some (.str s) => if s == "_blank".toList then [42] else []
        | _ => []
      if optStrBytes tok.opts "type".toList == litBytes "descr" then
        some ([91] ++ star ++ href ++ [32] ++ text ++ [93])
      else
        some (star ++ href)
  | "Email" =>
      let addr := optStrBytes tok.opts "email".toList
      let text := optStrBytes tok.opts "text".toList
      if addr == text then some addr
      else some ([91] ++ addr ++ [32] ++ text ++ [93])
  | "Freelink" =>
      let url := optStrBytes tok.opts "url".toList
      let page := optStrBytes tok.opts "page".toList
      let text := optStrBytes tok.opts "text".toList
      let anchor := optStrBytes tok.opts "anchor".toList
      let extra := optStrBytes tok.opts "extra".toList
      let star := if !(phpEmptyOpt (omGet tok.opts "star".toList)) ||
          optStrBytes tok.opts "target".toList == litBytes "_blank" then [42] else []
      let tft := !(phpEmptyOpt (omGet tok.opts "textFromTitle".toList))
      if phpTruthyBytes url then
        let lbl := if tft then [124] else if text == url then [] else [124] ++ text
        some (litBytes "[[[" ++ star ++ url ++ anchor ++ extra ++ lbl ++ litBytes "]]]")
      else
        let lbl := if tft then [124] else if text == page then [] else [124] ++ text
        some (litBytes "[[[" ++ star ++ page ++ anchor ++ extra ++ lbl ++ litBytes "]]]")
  | "Newline" => some [10]
  | "Image" =>
      let src := optStrBytes tok.opts "src".toList
      some (litBytes "[[image " ++ src ++ litBytes "]]")
  | _ => none

/-- Mirror of `Text_Wiki_Render_Xhtml_Gallery::itemText` (REFCORR19 F8):
    resolve any `\xFF(\d+)\xFF` placeholder in `value` to its token source,
    else its `text` option (if string/bytes), else `strip_tags(renderToken)`. -/
def galleryItemText (renderTok : TokenEntry → List Nat)
    (lookup : Nat → Option TokenEntry) (value : List Nat) : List Nat :=
  if !(value.contains 0xFF) then value
  else go value (value.length + 1)
where
  readPh : List Nat → Option (Nat × List Nat)
    | 0xFF :: rest =>
        let ds := rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)
        if ds.isEmpty then none
        else match rest.drop ds.length with
          | 0xFF :: after =>
              some (ds.foldl (fun a b => a * 10 + (b - 48)) 0, after)
          | _ => none
    | _ => none
  resolveId (id : Nat) : List Nat :=
    match lookup id with
    | none => []
    | some tok =>
        match galleryTokenSource tok with
        | some s => s
        | none =>
            match omGet tok.opts "text".toList with
            | some (.str cs) => cs.flatMap utf8Bytes
            | some (.bytes bs) => bs
            | _ => galleryStripTags (renderTok tok)
  go : List Nat → Nat → List Nat
    | [], _ => []
    | s, 0 => s
    | s@(b :: rest), fuel + 1 =>
        match readPh s with
        | some (id, after) => resolveId id ++ go after fuel
        | none => b :: go rest fuel

/-- The full per-row processing of `renderGallery`, as a fold
    step over `(target, osrc, out)`. PHP's `$target` and
    `$osrc` are never reset inside one `token()` call: a `*`
    on any row's source or link marks every later row's anchor
    too, and `$osrc` (the original-file URL of the most recent
    local row) is the fallback href of a later row with no
    link (only local rows set it, and every row either sets it
    or sets a link, so the leak is observable only through the
    target). A row whose source contains `flickr:` is the
    named disposition `Gallery:FlickrHandler`: the entry-point
    scan excludes any token containing one, so the skip here
    is never observed. -/
def galleryRowStep (size : List Nat)
    (st : List Nat × List Nat × List Nat) (row : List Nat)
    (renderTok : TokenEntry → List Nat := fun _ => [])
    (lookup : Nat → Option TokenEntry := fun _ => none) :
    List Nat × List Nat × List Nat :=
  let (_, osrc, out) := st
  -- REFCORR5 Batch 8 (p20): the star target is per row, never carried in.
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
    if bytesContainsSub (litBytes "flickr:") src1 then st
    else
      let (osrc1, src, attrs) : List Nat × List Nat ×
          List (List Nat × List Nat) :=
        if !(bytesContainsSub (litBytes "://") src1) then
          let stripped := stripOneLeadingSlash src1
          let (osrc, resized) :=
            if bytesContainsSub [47] src1 then
              (litBytes "/local--files/" ++ stripped,
               litBytes "/local--resized-images/" ++ stripped ++
                 litBytes "/" ++ size ++ litBytes ".jpg")
            else
              (litBytes "/local--files//" ++ src1,
               litBytes "/local--resized-images//" ++ src1 ++
                 litBytes "/" ++ size ++ litBytes ".jpg")
          (osrc, if size == litBytes "original" then osrc else resized,
           attrs0)
        else (osrc, src1, attrs0 ++ [(litBytes "link", src1)])
      let (href0, target2) :=
        match galleryAttrGet attrs (litBytes "link") with
        | some l =>
            let (l, t) :=
              if startsWithBytes [42] l then
                (l.drop 1, litBytes "target=\"_blank\"")
              else (l, target1)
            -- A URL link is its own href; a page link takes the
            -- wikilink `view_url` prefix, which reads as empty
            -- in this harness, so both arms are the bare link.
            (l, t)
        | none => (osrc1, target1)
      let href := gallerySanitizeHref href0
      let alt := match galleryAttrGet attrs (litBytes "alt") with
        | some a => htmlSpecialCharsCompat a
        | none => []
      (target2, osrc1, out ++
        litBytes "<div class=\"gallery-item " ++ size ++
        litBytes "\"><table><tr><td><a href=\"" ++ href ++
        litBytes "\" " ++ target2 ++ litBytes "><img src=\"" ++ src ++
        litBytes "\" alt=\"" ++ alt ++
        litBytes "\"/></a></td></tr></table></div>")

/-- Token-aware mirror of `Text_Wiki_Render_Xhtml_Gallery::token`
    (REFCORR19 F8 `itemText()`). -/
def renderGalleryCore (renderTok : TokenEntry → List Nat)
    (lookup : Nat → Option TokenEntry) (opts : OptMap) : List Nat :=
  let size := gallerySize (optStrBytes opts "size".toList)
  let sources := optStrBytes opts "sources".toList
  if phpTruthyBytes sources then
    let (_, _, out) := (explodeByte 10 sources).foldl
      (fun st row => galleryRowStep size st row renderTok lookup)
      ([], [], litBytes "<div class=\"gallery-box\">")
    out ++ litBytes "</div>"
  else
    litBytes "<div class=\"error-block\">Error selecting page.</div>"

/-- Mirror of `Text_Wiki_Render_Xhtml_Gallery::token` under
    the harness conf (no `no_local`; `vars['pageName']` unset). -/
def renderGallery (opts : OptMap) : List Nat :=
  renderGalleryCore (fun _ => []) (fun _ => none) opts

end LeanFtml
