/-
  LeanFtml.ProseRules — the R4.2 prose-core Xhtml render mirrors.

  Each function mirrors one `Text_Wiki_Render_Xhtml_<Rule>::token()`
  in the validated PHP reference (`ref-php/text-wiki/Text/Wiki/Render/
  Xhtml/<Rule>.php`), under the harness configuration of
  `ref-php/harness/wiki-config.php` (`ref_configure_wiki`), which sets
  no `css` render configuration for any rule of this family, so every
  `formatConf(' class="%s"', 'css')` in the family evaluates to the
  empty string (the rule classes' own `$conf` default is
  `'css' => null`). Where a PHP `token()` falls through without a
  return (a `type` other than `start`/`end`), PHP concatenates the
  resulting `null` as the empty string; the mirrors return `[]`.

  The dispatcher that consumes these functions is
  `LeanFtml.dispatchRenderR41` in `LeanFtml/NotesRender.lean`,
  extended in R4.2 to all eighteen mirrored rules; the stage's entry
  points and theorems live in `LeanFtml/ProseRender.lean`.
-/

import LeanFtml.RenderCore

namespace LeanFtml

/-- Test whether the token's `"type"` option equals the given ASCII
    byte string. Identical in definition to `optTypeIs` in
    `LeanFtml/NotesRender.lean`; restated here so this module depends
    only on the render core (the dispatcher module imports both). -/
def proseTypeIs (opts : OptMap) (expected : List Nat) : Bool :=
  optStrBytes opts "type".toList == expected

/-! ## The twelve prose-core Xhtml render rules -/

/-- Mirror of `Text_Wiki_Render_Xhtml_Paragraph::token`
    (`Paragraph.php:45-58`): `start` → `"<p$css>"` with `$css` empty
    under the harness configuration; `end` → `"</p>\n\n"`; any other
    type falls through to PHP `null`, the empty byte string. -/
def renderParagraph (opts : OptMap) : List Nat :=
  if proseTypeIs opts (litBytes "start") then
    litBytes "<p>"
  else if proseTypeIs opts (litBytes "end") then
    litBytes "</p>\n\n"
  else
    []

/-- Mirror of `Text_Wiki_Render_Xhtml_Newline::token`
    (`Newline.php:28-31`): unconditionally `"<br />\n"`; the token's
    options are never read. -/
def renderNewline : List Nat :=
  litBytes "<br />\n"

/-- Mirror of `Text_Wiki_Render_Xhtml_Break::token`
    (`Break.php:45-49`): `"<br$css />\n"` with `$css` empty under the
    harness configuration; the token's options are never read. -/
def renderBreak : List Nat :=
  litBytes "<br />\n"

/-- Mirror of `Text_Wiki_Render_Xhtml_Center::token`
    (`Center.php:40-49`): `start` → `"<p style=\"text-align: center;\">"`;
    `end` → `"</p>\n"` (the REFVAL correction, snapshot-20: the end
    token carries the newline live serves); any other type falls
    through to the empty byte string. -/
def renderCenter (opts : OptMap) : List Nat :=
  if proseTypeIs opts (litBytes "start") then
    litBytes "<p style=\"text-align: center;\">"
  else if proseTypeIs opts (litBytes "end") then
    litBytes "</p>\n"
  else
    []

/-- Mirror of `Text_Wiki_Render_Xhtml_Horiz::token`
    (`Horiz.php:45-49`): `"<hr$css />\n"` with `$css` empty under the
    harness configuration; the token's options are never read. -/
def renderHoriz : List Nat :=
  litBytes "<hr />\n"

/-- Mirror of `Text_Wiki_Render_Xhtml_Separator::token`
    (`Separator.php:45-52`): the constant corrected string (REFVAL
    correction, snapshot-20: live serves an explicit closing `</div>`
    while preserving the literal `display: none:` typo; the fossil's
    `$css` interpolation is gone from the corrected body). -/
def renderSeparator : List Nat :=
  litBytes "<div class=\"content-separator\" style=\"display: none:\"></div>\n"

/-- Mirror of `Text_Wiki_Render_Xhtml_Clearfloat::token`
    (`Clearfloat.php:36-47`): the `side` option maps `">"` → `right`,
    `"<"` → `left`, and every other value (including the empty string
    the parse rule stores when its optional direction group does not
    participate) → `both`, interpolated into the fixed `clear:` div. -/
def renderClearfloat (opts : OptMap) : List Nat :=
  let side := optStrBytes opts "side".toList
  let word :=
    if side == litBytes ">" then litBytes "right"
    else if side == litBytes "<" then litBytes "left"
    else litBytes "both"
  litBytes "<div style=\"clear:" ++ word ++
    litBytes "; height: 0px; font-size: 1px\"></div>\n"

/-- Mirror of `Text_Wiki_Render_Xhtml_Blockquote::token`
    (`Blockquote.php:45-68`): `start` → `"<blockquote$css>"` with
    `$css` empty under the harness configuration; `end` →
    `"</blockquote>\n"`; any other type falls through to the empty
    byte string. The R2-BLOCK C1 correction removed the fossil's
    per-level padding, so the `level` option is never read. -/
def renderBlockquote (opts : OptMap) : List Nat :=
  if proseTypeIs opts (litBytes "start") then
    litBytes "<blockquote>"
  else if proseTypeIs opts (litBytes "end") then
    litBytes "</blockquote>\n"
  else
    []

/-- Mirror of `Text_Wiki_Render_Xhtml_Note::token`
    (`Note.php:39-48`): `start` → `"<div class=\"wiki-note\">"`;
    `end` → `"</div>"`; any other type falls through to the empty
    byte string. -/
def renderNote (opts : OptMap) : List Nat :=
  if proseTypeIs opts (litBytes "start") then
    litBytes "<div class=\"wiki-note\">"
  else if proseTypeIs opts (litBytes "end") then
    litBytes "</div>"
  else
    []

/-- Mirror of `Text_Wiki_Render_Xhtml_Divalign::token`
    (`Divalign.php:40-51`): `start` interpolates the raw `align`
    option bytes into `"<div style=\"text-align: " . $align . ";\">"`;
    `end` → `"</div>"`; any other type falls through to the empty
    byte string. -/
def renderDivalign (opts : OptMap) : List Nat :=
  if proseTypeIs opts (litBytes "start") then
    litBytes "<div style=\"text-align: " ++ optStrBytes opts "align".toList ++
      litBytes ";\">"
  else if proseTypeIs opts (litBytes "end") then
    litBytes "</div>"
  else
    []

/-- Mirror of `Text_Wiki_Render_Xhtml_Comment::token`
    (`Comment.php:40-44`): unconditionally the empty string; the
    token's `text` option is never read. -/
def renderComment : List Nat :=
  []

/-- Mirror of `Text_Wiki_Render_Xhtml_Delimiter::token`
    (`Delimiter.php:41-44`): returns the token's `text` option
    verbatim (the parse rule stores the delimiter byte itself there;
    on valid UTF-8 inputs no Delimiter token is ever produced, per
    R4-SCOPE.md §1.2). -/
def renderDelimiter (opts : OptMap) : List Nat :=
  optStrBytes opts "text".toList

end LeanFtml
