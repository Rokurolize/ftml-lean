/-
  LeanFtml.RawHeadingRules — the R4.4 raw/form and heading/toc
  Xhtml render mirrors.

  Each function mirrors one `Text_Wiki_Render_Xhtml_<Rule>::token()`
  in the validated PHP reference (`ref-php/text-wiki/Text/Wiki/Render/
  Xhtml/<Rule>.php`), under the harness configuration of
  `ref-php/harness/wiki-config.php` (`ref_configure_wiki`):

  * `Raw` and `Form` share the R2-corrected `wikidotEscapeRaw`
    `strtr` table and the pre-wrap span; `Form` adds the
    leading-space `&nbsp;&#32;` pairing on the escaped line and
    renders nothing for its `blank` placeholder tokens and for the
    fossil's begin/field/end compatibility shapes.
  * `Rawold` is the fossil's bare `htmlspecialchars($options['text'])`,
    i.e. PHP 8.5's default flags (`ENT_QUOTES | ENT_SUBSTITUTE`),
    with no wrapper and no space escaping (R2-FORM-RAW.md: verified
    unchanged against live).
  * `Heading`: the `css_h1..css_h6` render confs are all `null`
    under the harness, so every `formatConf(' class="%s"', ...)`
    evaluates to the empty string, and `use_id` keeps its class
    default `true`. The parse rule never emits a `collapse` option
    or the `startContent` / `endContent` types, so those branches
    are unreachable from the active pipeline (R4-SCOPE.md section
    1.2, rule 29); they are mirrored anyway for totality, with the
    renderer's `static $jsOutput` read-but-never-assigned, so every
    `startContent` token with a non-null `collapse` emits the
    `hideTOC` script block.
  * `Toc`: `css_list` is fetched but never used by the body;
    `css_item` is `null` (no item class attribute); `div_id` keeps
    its class default `'toc'`; `collapse` conf is never read by
    `token()`; and the instance property `$this->min` is the
    constant `0`, never written, so an item's left margin is exactly
    its heading level in `em`. The NUL-pair markers the item branches
    emit are consumed by the render core's `postStripToc` post-pass,
    exactly as `Text_Wiki::render()` consumes them.

  Where a PHP `token()` falls through without a return (a `type`
  other than the handled branches), PHP concatenates the resulting
  `null` as the empty string; the mirrors return `[]`.

  The dispatcher that consumes these functions is
  `LeanFtml.dispatchRenderR41` in `LeanFtml/NotesRender.lean`,
  extended in R4.4 to all thirty-seven mirrored rules; the stage's
  entry points and theorems live in
  `LeanFtml/RawHeadingRender.lean`.
-/

import LeanFtml.RenderCore

namespace LeanFtml

/-- Test whether the token's `"type"` option equals the given ASCII
    byte string. Identical in definition to `optTypeIs` in
    `LeanFtml/NotesRender.lean`, `proseTypeIs` in
    `LeanFtml/ProseRules.lean`, and `inlineTypeIs` in
    `LeanFtml/InlineSimpleRules.lean`; restated here so this module
    depends only on the render core (the dispatcher module imports
    all). -/
def rhTypeIs (opts : OptMap) (expected : List Nat) : Bool :=
  optStrBytes opts "type".toList == expected

/-- PHP string truthiness: the empty string and the string `"0"`
    are the only falsy strings. Identical in definition to
    `phpTruthyBytes` in `LeanFtml/InlineSimpleRules.lean`. -/
def rhTruthy (bs : List Nat) : Bool :=
  !(bs.isEmpty || bs == [48])

/-- PHP `isset($options[$key])`: the key is present and its value
    is not `null`. -/
def optIsset (opts : OptMap) (key : List Char) : Bool :=
  match omGet opts key with
  | some .null => false
  | some _ => true
  | none => false

/-! ## The shared raw escape table (`wikidotEscapeRaw`) -/

/-- One byte of the `strtr` table of `wikidotEscapeRaw`
    (`Render/Xhtml/Raw.php`, `Render/Xhtml/Form.php`, R2-corrected):
    space → `&#32;`, NUL → a regular space, `>` → `&gt;`,
    `<` → `&lt;`, `&` → `&amp;`, `"` → `&quot;`, and the apostrophe
    maps to itself (the table's explicit `'` → `'` entry), as does
    every other byte. All table keys are single bytes, so PHP's
    longest-match `strtr` reduces to this per-byte map. -/
def wikidotEscapeRawByte (b : Nat) : List Nat :=
  if b == 32 then litBytes "&#32;"
  else if b == 0 then [32]
  else if b == 62 then litBytes "&gt;"
  else if b == 60 then litBytes "&lt;"
  else if b == 38 then litBytes "&amp;"
  else if b == 34 then litBytes "&quot;"
  else [b]

/-- Mirror of `wikidotEscapeRaw`: the per-byte escape applied to a
    Raw body or a Form line before wrapping. -/
def wikidotEscapeRaw (bs : List Nat) : List Nat :=
  bs.flatMap wikidotEscapeRawByte

/-! ## Raw -/

/-- Mirror of `Text_Wiki_Render_Xhtml_Raw::token` (`Raw.php`): the
    escaped body inside the pre-wrap span. -/
def renderRaw (opts : OptMap) : List Nat :=
  -- REFCORR5 Batch 6: the composite empty Raw token renders as nothing.
  if (optStrBytes opts "text".toList).isEmpty then []
  else litBytes "<span style=\"white-space: pre-wrap;\">" ++
    wikidotEscapeRaw (optStrBytes opts "text".toList) ++
    litBytes "</span>"

/-! ## Rawold -/

/-- Mirror of `Text_Wiki_Render_Xhtml_Rawold::token`
    (`Rawold.php`): `htmlspecialchars($options['text'],
    ENT_COMPAT, 'UTF-8')` (the HTMLCHARS correction of the fossil's
    bare call: a trailing apostrophe, the one position the parse
    regex admits one, renders raw on live), no wrapper, spaces and
    markup-significant bytes handled by the escape alone. -/
def renderRawold (opts : OptMap) : List Nat :=
  htmlSpecialCharsCompat (optStrBytes opts "text".toList)

/-! ## Form -/

/-- The leading-indentation transform of
    `Text_Wiki_Render_Xhtml_Form::token` on an already-escaped
    line: each leading `&#32;&#32;` pair (the escape of two spaces)
    becomes one `&nbsp;&#32;`, and a leftover leading `&#32;`
    stays `&#32;`. The recursion consumes ten bytes per step, so
    the fuel bound of the input length plus one always suffices. -/
def formIndentGo : List Nat → List Nat → Nat → List Nat
  | bs, acc, 0 => acc ++ bs
  | bs, acc, fuel + 1 =>
      if bs.take 10 == litBytes "&#32;&#32;" then
        formIndentGo (bs.drop 10) (acc ++ litBytes "&nbsp;&#32;") fuel
      else if bs.take 5 == litBytes "&#32;" then
        acc ++ litBytes "&#32;" ++ bs.drop 5
      else
        acc ++ bs

/-- Mirror of `Text_Wiki_Render_Xhtml_Form::token` (`Form.php`):
    a token carrying `blank` renders nothing; a token carrying
    `text` renders the escaped line with its leading-space pairing
    inside the same pre-wrap span as Raw; any other shape (the
    fossil's begin/field/end compatibility tokens) renders nothing. -/
def renderForm (opts : OptMap) : List Nat :=
  if optIsset opts "blank".toList then
    []
  else if optIsset opts "text".toList then
    let escaped := wikidotEscapeRaw (optStrBytes opts "text".toList)
    litBytes "<span style=\"white-space: pre-wrap;\">" ++
      formIndentGo escaped [] (escaped.length + 1) ++
      litBytes "</span>"
  else
    []

/-! ## Heading -/

/-- The `hideTOC` script block emitted by the Heading renderer's
    `startContent` branch whenever `collapse` is non-null: the
    renderer's `static $jsOutput` is read but never assigned
    anywhere in the file, so it stays `false` and the block is
    emitted for every such token. -/
def headingTocScript : List Nat :=
  litBytes "\n<script language=\"javascript\">\n" ++
  litBytes "function hideTOC(id) {\n" ++
  litBytes "    div = document.getElementById(id+\"__content\");\n" ++
  litBytes "    link = document.getElementById(id+\"__link\");\n" ++
  litBytes "    if (div.style.display == \"none\") {\n" ++
  litBytes "        div.style.display = \"\";\n" ++
  litBytes "        link.innerHTML = \"[-]\";\n" ++
  litBytes "    } else {\n" ++
  litBytes "        div.style.display = \"none\";\n" ++
  litBytes "        link.innerHTML = \"[+]\";\n" ++
  litBytes "    }\n" ++
  litBytes "}\n</script>\n"

/-- Mirror of `Text_Wiki_Render_Xhtml_Heading::token`
    (`Heading.php`) under the harness configuration (`css_h1..h6`
    null, `use_id` true; see the module header). The `id`
    attribute is emitted iff the token's `id` option is set
    (present and non-null) and non-empty, and is interpolated raw.
    The `collapse` branches follow the PHP body exactly; the parse
    rule never sets `collapse`, so they are unreachable from the
    active pipeline. -/
def renderHeading (opts : OptMap) : List Nat :=
  let level := optStrBytes opts "level".toList
  let idBytes := optStrBytes opts "id".toList
  let idAttr :=
    if optIsset opts "id".toList && !idBytes.isEmpty then
      litBytes " id=\"" ++ idBytes ++ litBytes "\""
    else []
  let collapseSet := optIsset opts "collapse".toList
  let collapseTruthy := !phpEmptyOpt (omGet opts "collapse".toList)
  if rhTypeIs opts (litBytes "start") then
    let onclick :=
      if collapseSet then
        litBytes " onclick=\"hideTOC('" ++ idBytes ++ litBytes "');\""
      else []
    [10] ++ litBytes "<h" ++ level ++ idAttr ++ onclick ++
      litBytes "><span>"
  else if rhTypeIs opts (litBytes "start-notoc") then
    [10] ++ litBytes "<h" ++ level ++ litBytes "><span>"
  else if rhTypeIs opts (litBytes "end") then
    let link :=
      if collapseSet then
        litBytes "<a id=\"" ++ idBytes ++
          litBytes "__link\" href=\"javascript:void();\" onclick=\"hideTOC('" ++
          idBytes ++ litBytes "')\">[" ++
          (if collapseTruthy then litBytes "+" else litBytes "-") ++
          litBytes "]</a>\n"
      else []
    litBytes "</span></h" ++ level ++ litBytes ">\n" ++ link
  else if rhTypeIs opts (litBytes "startContent") then
    let js := if collapseSet then headingTocScript else []
    let collapseIsTrue := match omGet opts "collapse".toList with
      | some (.bool true) => true
      | _ => false
    let display :=
      if collapseIsTrue then
        litBytes "display: none; "
      else []
    js ++ [10] ++ litBytes "<div style=\"" ++ display ++
      litBytes "padding: 0px; margin: 0px; border: none;\" id=\"" ++
      idBytes ++ litBytes "__content\">\n"
  else if rhTypeIs opts (litBytes "endContent") then
    litBytes "\n</div>\n"
  else
    []

/-! ## Toc -/

/-- The Toc title of a `list_start` token: the token's `attr`
    option's `title` entry when `attr` is an array carrying a
    string title (PHP `isset($attr) && is_array($attr) &&
    isset($attr['title']) && is_string($attr['title'])`), else the
    class default `'Table of Contents'`. -/
def tocTitle (opts : OptMap) : List Nat :=
  match omGet opts "attr".toList with
  | some (.map m) =>
      match omGet m "title".toList with
      | some (.str cs) => cs.flatMap utf8Bytes
      | some (.bytes bs) => bs
      | _ => litBytes "Table of Contents"
  | _ => litBytes "Table of Contents"

/-- Mirror of `Text_Wiki_Render_Xhtml_Toc::token` (`Toc.php`)
    under the harness configuration (`css_list` unused by the body,
    `css_item` null, `div_id` `'toc'`, `$this->min` the constant 0;
    see the module header). The title is escaped with
    `htmlspecialchars(..., ENT_COMPAT, 'UTF-8')`; the item branches
    emit the NUL-pair marker (`tocStripDelim`) that the render core's
    post-pass consumes. -/
def renderToc (opts : OptMap) : List Nat :=
  let align := optStrBytes opts "align".toList
  if rhTypeIs opts (litBytes "list_start") then
    let tableOpen :=
      if !rhTruthy align then
        litBytes "<table style=\"margin:0; padding:0\">" ++
          litBytes "<tr><td style=\"margin:0; padding:0\">"
      else []
    let classAttr :=
      if align == litBytes "f<" then litBytes " class=\"floatleft\""
      else if align == litBytes "f>" then litBytes " class=\"floatright\""
      else []
    tableOpen ++ litBytes "<div" ++ litBytes " id=\"toc\"" ++ classAttr ++
      litBytes ">" ++
      litBytes "<div id=\"toc-action-bar\">" ++
      litBytes "<a href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.listeners.foldToc(event)\">Fold</a>" ++
      litBytes "<a style=\"display: none\" href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.listeners.unfoldToc(event)\">Unfold</a></div>" ++
      litBytes "<div class=\"title\">" ++
      htmlSpecialCharsCompat (tocTitle opts) ++ litBytes "</div>" ++
      litBytes "<div id=\"toc-list\">"
  else if rhTypeIs opts (litBytes "list_end") then
    let tableClose :=
      if !rhTruthy align then litBytes "</td></tr></table>" else []
    [10] ++ litBytes "</div></div>" ++ tableClose ++ litBytes "\n\n"
  else if rhTypeIs opts (litBytes "item_start") then
    let level := (optNat opts "level".toList).getD 0
    [10, 9] ++ litBytes "<div" ++
      litBytes " style=\"margin-left: " ++ natBytes level ++
      litBytes "em;\">" ++
      litBytes "<a href=\"#" ++ optStrBytes opts "id".toList ++
      litBytes "\">" ++ tocStripDelim
  else if rhTypeIs opts (litBytes "item_end") then
    tocStripDelim ++ litBytes "</a></div>"
  else
    []

end LeanFtml
