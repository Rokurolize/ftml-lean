# AUDIT — sibling strict `=== ''` checks (REFCORR13 R13-AGY2, D10/D11)

Scope: every active PHP file under `ref-php/` (fossil-era `.before-*` backups excluded). No new live probe was fetched; verdicts rest on the frozen agy-hunt corpus plus the earlier cached round-5 corpus. Of the 134 sites below, only the Tabview `_tabTitle` site is changed by this unit.

The one site REMOVED by this unit (therefore absent from the 134 post-patch rows below) was `ref-php/text-wiki/Text/Wiki/Parse/Default/Tabview.php:109`, literal `if ($text === '') {` in `_tabTitle` (sha256 of the before-copy in `evidence/Parse-Tabview.php.before-refcorr13`); it is now `if (! $text) {` per D11. All 134 remaining strict-empty sites were inspected and left unchanged.

| File:line | Literal check | Verdict |
|---|---|---|
| `ref-php/harness/probe-source.php:42` | `if ($line === '') continue;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/harness/prefix-source.php:62` | `if ($line === '') continue;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/harness/state-restricted.php:97` | `if ($line === '') continue;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/harness/render-restricted.php:69` | `if ($line === '') continue;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/harness/batch.php:32` | `if ($line === '') continue;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/Text_Highlighter/Text/Highlighter/Generator.php:495` | `if (!isset($attribs['innerGroup']) || $attribs['innerGroup'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/Text_Highlighter/Text/Highlighter/Generator.php:510` | `if (!isset($attribs['name']) || $attribs['name'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/Text_Highlighter/Text/Highlighter/Generator.php:513` | `if (!isset($attribs['innerGroup']) || $attribs['innerGroup'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/Text_Highlighter/Text/Highlighter/Generator.php:552` | `if (!isset($attribs['name']) || $attribs['name'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/Text_Highlighter/Text/Highlighter/Generator.php:555` | `if (isset($attribs['innerGroup']) && $attribs['innerGroup'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/Text_Highlighter/Text/Highlighter/Generator.php:613` | `if (!isset($attribs['innerGroup']) || $attribs['innerGroup'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/Text_Highlighter/Text/Highlighter/Generator.php:639` | `if (!isset($attribs['name']) || $attribs['name'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/Text_Highlighter/Text/Highlighter/Generator.php:642` | `if (!isset($attribs['innerGroup']) || $attribs['innerGroup'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/Text_Highlighter/Text/Highlighter/Generator.php:645` | `if (!isset($attribs['inherits']) || $attribs['inherits'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/Text_Highlighter/Text/Highlighter/Generator.php:676` | `if (!isset($attribs['match']) || $attribs['match'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/Text_Highlighter/Text/Highlighter/Generator.php:729` | `if (!isset($attribs['region']) || $attribs['region'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/Text_Highlighter/Text/Highlighter/Generator.php:743` | `if (!isset($attribs['name']) || $attribs['name'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/Text_Highlighter/Text/Highlighter/Generator.php:760` | `if (!isset($attribs['lang']) || $attribs['lang'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/Text_Wiki/Text/Wiki/Parse/Default/File.php:49` | `if($anchor == null || $anchor === ''){` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/smarty/libs/plugins/modifier.default.php:23` | `if (!isset($string) || $string === '')` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/Lexer.php:239` | `if ($string === '') return '';` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/Integer.php:46` | `if ($integer === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/HTML/MultiLength.php:18` | `if ($string === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/HTML/Pixels.php:15` | `if ($string === '')  return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/HTML/Length.php:19` | `if ($string === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/HTML/ID.php:75` | `if ($id === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/HTML/ID.php:102` | `$result = ($trim === '');` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/Font.php:44` | `if ($string === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/Font.php:59` | `if ($bits[$i] === '') continue;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/Font.php:84` | `if ($line_height === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/Font.php:101` | `if ($bits[$j] === '') continue;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/TextDecoration.php:30` | `if ($final === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/FontFamily.php:28` | `if ($font === '') continue;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/FontFamily.php:61` | `if ($final === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/ListStyle.php:29` | `if ($string === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/ListStyle.php:44` | `if ($bit === '') continue;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/Multiple.php:42` | `if ($string === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/Multiple.php:54` | `if ($final === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/Color.php:42` | `if ($color === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/Color.php:58` | `if ($part === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/Number.php:25` | `if ($number === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/Number.php:47` | `if ($left === '' && $right === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/Number.php:53` | `if ($right === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/BackgroundPosition.php:80` | `if ($bit === '') continue;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/Background.php:32` | `if ($string === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/Background.php:48` | `if ($bit === '') continue;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/Length.php:35` | `if ($length === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/CSS/Percentage.php:28` | `if ($string === '') return false;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/AttrDef/URI/Host.php:30` | `if ($string === '') return '';` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/Filter/ExtractStyleBlocks.php:125` | `if ($selector === '') continue; // should not happen` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/Injector/PurifierLinkify.php:52` | `if ($bits[$i] === '') continue;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/Injector/Linkify.php:44` | `if ($bits[$i] === '') continue;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/URIFilter/MakeAbsolute.php:39` | `$uri->path === '' && is_null($uri->scheme) &&` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/URIFilter/MakeAbsolute.php:64` | `if ($uri->path === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/lib/htmlpurifier/library/HTMLPurifier/URIFilter/MakeAbsolute.php:93` | `if ($segment === '' && empty($result)) {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/php/db/DB_Page.php:96` | `if ($title == null || $title === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/php/actions/PMAction.php:61` | `if($subject == null || $subject === ''){` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/fossil/php/actions/WikiPageAction.php:1114` | `if($ppName == null || $ppName === ''){` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/wikidot-root/lib/Text_Highlighter/Text/Highlighter/Generator.php:495` | `if (!isset($attribs['innerGroup']) || $attribs['innerGroup'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/wikidot-root/lib/Text_Highlighter/Text/Highlighter/Generator.php:510` | `if (!isset($attribs['name']) || $attribs['name'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/wikidot-root/lib/Text_Highlighter/Text/Highlighter/Generator.php:513` | `if (!isset($attribs['innerGroup']) || $attribs['innerGroup'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/wikidot-root/lib/Text_Highlighter/Text/Highlighter/Generator.php:552` | `if (!isset($attribs['name']) || $attribs['name'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/wikidot-root/lib/Text_Highlighter/Text/Highlighter/Generator.php:555` | `if (isset($attribs['innerGroup']) && $attribs['innerGroup'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/wikidot-root/lib/Text_Highlighter/Text/Highlighter/Generator.php:613` | `if (!isset($attribs['innerGroup']) || $attribs['innerGroup'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/wikidot-root/lib/Text_Highlighter/Text/Highlighter/Generator.php:639` | `if (!isset($attribs['name']) || $attribs['name'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/wikidot-root/lib/Text_Highlighter/Text/Highlighter/Generator.php:642` | `if (!isset($attribs['innerGroup']) || $attribs['innerGroup'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/wikidot-root/lib/Text_Highlighter/Text/Highlighter/Generator.php:645` | `if (!isset($attribs['inherits']) || $attribs['inherits'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/wikidot-root/lib/Text_Highlighter/Text/Highlighter/Generator.php:676` | `if (!isset($attribs['match']) || $attribs['match'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/wikidot-root/lib/Text_Highlighter/Text/Highlighter/Generator.php:729` | `if (!isset($attribs['region']) || $attribs['region'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/wikidot-root/lib/Text_Highlighter/Text/Highlighter/Generator.php:743` | `if (!isset($attribs['name']) || $attribs['name'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/wikidot-root/lib/Text_Highlighter/Text/Highlighter/Generator.php:760` | `if (!isset($attribs['lang']) || $attribs['lang'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Underline.php:79` | `if (!isset($matches[1]) || $matches[1] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Footnote.php:69` | `&& isset($tok[1]['text']) && $tok[1]['text'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Span.php:85` | `// captured, and the former `$value === ''` skip then dropped the key;` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Span.php:113` | `if ($value === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Span.php:132` | `if (trim($content) === '' && empty($args)) {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Raw.php:123` | `if ($trimmed === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Raw.php:151` | `if ($body === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Tableadv.php:125` | `if ($value === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Tableadv.php:176` | `if ($value === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Tableadv.php:187` | `if ($normalized === ''` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Tighten.php:117` | `&& $tok[1]['text'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Superscript.php:97` | `if ($body === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Bibliography.php:72` | `if (trim($text) === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Tt.php:143` | `if ($body === '' || $body === '0') {` | kept strict: the file explicitly tests `$body === '0'` alongside `=== ''`; PHP zero is already handled |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Tt.php:144` | `if ($body === '' && ($leading !== '' || $trailing !== '')) {` | kept strict: the file explicitly tests `$body === '0'` alongside `=== ''`; PHP zero is already handled |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Comment.php:78` | `if ($tail === '' || preg_match('/^[ \t]*$/', $tail)) {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Freelink.php:115` | `if ($raw === '' || $raw[0] === '|') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Freelink.php:180` | `if ($labelRaw === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Freelink.php:221` | `if ($labelRaw === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Include.php:260` | `if ($refRun === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Include.php:339` | `if ($after === '' || $after[0] !== '=') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Include.php:344` | `if ($value === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Include.php:422` | `if ($s === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Strong.php:85` | `if ($matches[1] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/File.php:49` | `if($anchor == null || $anchor === ''){` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/List.php:127` | `$empty = (trim($raw[$i]['body']) === '');` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/List.php:452` | `$unclosed7 = ((!$op['scored'] || $opUpper7) && trim($tailAfterCloser7) === '');` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/List.php:770` | `if ($bodyNoPh === '' && count($nestedPhs) > 0) {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/List.php:829` | `if ($trimmedBody === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/List.php:835` | `if ($onlyListsCheck === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/List.php:932` | `if ($b !== '' && trim($b) === '' && count($item['attached_nested']) === 0) {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/List.php:935` | `if ($b === '' && count($item['attached_nested']) === 0) {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/List.php:971` | `if ($b === '' && count($item['attached_nested']) === 0) {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/List.php:1191` | `if (trim($attrStr) === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/List.php:1204` | `if ($rawVal === '' || strpos($rawVal, $delim) !== false) {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/List.php:1208` | `if ($norm === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/List.php:1221` | `if ($rawVal === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Anchor.php:118` | `if (trim($name) === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Anchor.php:358` | `if ($rawVal === '' || strpos($rawVal, $delim) !== false) {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Anchor.php:362` | `if ($norm === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Anchor.php:375` | `if ($rawVal === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Anchor.php:472` | `if ($href === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Tabview.php:112` | `// `=== ''` kept `"0"` as a visible label. Cached witnesses:` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Size.php:112` | `if($content === ''){` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Subscript.php:85` | `if ($body === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Deflist.php:150` | `if ($wiki->tokens[$id][0] === 'Raw' && $wiki->tokens[$id][1]['text'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Deflist.php:155` | `return trim($stripped) === '';` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Bibitem.php:79` | `&& isset($tok[1]['text']) && $tok[1]['text'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Bibitem.php:99` | `'empty' => ($visible === ''))) .` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Div.php:80` | `if ($value === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Div.php:100` | `if ($collapsed === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Div.php:199` | `if (trim($value) === '' && empty($authoredValue[$key])) {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Div.php:216` | `$vanished = ($args === array()) && trim($content) === '';` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Emphasis.php:90` | `if ($body === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Parse/Default/Heading.php:96` | `$hasToc = ($matches[2] === '');` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Code.php:104` | `} elseif (trim($text) === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Raw.php:20` | `if ($options['text'] === '') return '';` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Collapsible.php:37` | `if (!isset($text) || $text === '' || $text === '0') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Tabview.php:58` | `if ($label === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Footnoteitem.php:72` | `&& isset($tok[1]['text']) && $tok[1]['text'] === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Date.php:26` | `if ($raw === '') return '';` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Date.php:42` | `if ($digits === '') $digits = '0';` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |
| `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Colortext.php:78` | `if ($color === '') {` | no cached falsy-zero witness; strict check left unchanged (no new probe permitted) |

Decisive falsy witnesses measured on live and cited by the hunt report:

- `muse-probe-agy-hunt-m09a-tab-zero` and `-m09b-tab-title-zero`: live renders `untitled`, ref rendered `0` before the D11 change; the patched scratch harness now renders `untitled` (verified firsthand).
- `muse-probe-agy-hunt-m08a-btn-settags-text0` and `-m08b-btn-settags-empty`: the Button guard is already falsy in the fossil (`!$text`), but live tests only ABSENCE; D10 changes `!$text` to `!isset($text)` in that guard, not a strict-empty site.
- Cached `muse-probe-agy-hunt-h20c-toc-greedy-title0` (C23) and the `Tt` explicit-zero arms are the two places where strict handling is confirmed correct and is deliberately NOT relaxed.
