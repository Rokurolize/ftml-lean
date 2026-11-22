# R4 scope: mirroring the validated reference's Xhtml render phase in Lean

R4 opens the render-equivalence tier of the ftml Lean equivalence loop, building directly on R3's parse-phase mirror (`R3-SCOPE.md`, completed through `REPORT-R317.md`: 67 of the reference's 68 active parse rules mirrored in Lean, with `Include` disposed by Tier 1 G1.3/G1.4/G1.4b and the R2 grammar). Where R3 mirrors `Text_Wiki::parse()`, R4 mirrors `Text_Wiki::render('Xhtml')` over the R3 parse state (`ParseState`: post-parse source segments with token placeholders, token table, and document state), producing HTML that is byte-equal to the validated PHP reference (`ref-php/`).

Every inventory fact, state-flow statement, and disposition below was verified firsthand on 2026-11-21 against `ref-php/text-wiki/Text/Wiki.php`, `Text/Wiki/Render.php`, `Text/Wiki/Render/Xhtml.php`, all 84 files in `Text/Wiki/Render/Xhtml/`, all 68 active files in `Text/Wiki/Parse/Default/`, `ref-php/harness/*.php`, `conformance-refphp/R2-*.md`, `REPORT-R35.md`, `REPORT-R36.md`, `REPORT-R317.md`, `REPORT-REFGAPS.md`, and `GAP-LEDGER.md`.

---

## 1. The render inventory

### 1.1 Render framework passes in `Text_Wiki::render('Xhtml')`

Rendering in `ref-php/text-wiki/Text/Wiki.php:880–972` and `Text/Wiki/Render/Xhtml.php:26–96` executes four steps in strict order:

1. **Format pre-pass (`Text_Wiki_Render_Xhtml::pre()`, `Xhtml.php:34–89`)**:
   - Under the default format configuration (`translate => HTML_SPECIALCHARS`, `quotes => ENT_COMPAT`, `charset => 'UTF-8'`; `ref_configure_wiki()` in `ref-php/harness/wiki-config.php` does not alter `formatConf`), `pre()` computes `$quotes = ENT_COMPAT | ENT_SUBSTITUTE` (the R1 PHP-8 era bridge documented in `ref-php/INVENTORY.md:56`), computes `$new_delim = htmlspecialchars("\xFF", $quotes)` (which yields UTF-8 U+FFFD `EF BF BD`), applies `@htmlspecialchars($this->wiki->source, $quotes)` in place (escaping `&`, `"`, `<`, `>` in literal source text while leaving `'` raw, and turning every `\xFF` delimiter byte into U+FFFD), and runs `str_replace($new_delim, "\xFF", $this->wiki->source)` to restore all `\xFF` delimiter bytes.
   - Edge quirk recorded for R4: because `str_replace` maps every U+FFFD back to `\xFF`, a literal U+FFFD character (`EF BF BD`) in post-parse text outside tokens also turns into `\xFF` and corrupts the delimiter stream (verified firsthand on PHP 8.5.4: `"a \uFFFD b"` renders as `"\na "` because `\uFFFD` opens an unclosed delimiter span); on valid UTF-8 source without literal U+FFFD, `pre()` is identically bytewise escaping of `&`, `"`, `<`, `>` on every literal text segment outside placeholders.
2. **Render object instantiation (`Wiki.php:907–909`)**:
   - Calls `loadRenderObj('Xhtml', $rule)` for every key in `$this->parseObj`. Only `Embed` overrides `__construct()` (`Render/Xhtml/Embed.php:19–27`), loading `WIKIDOT_ROOT/conf/wikiparser/embed/*.php` into `$this->_patterns`.
3. **Single-pass byte loop (`Wiki.php:912–953`)**:
   - Scans `$this->source` byte by byte. Bytes outside `\xFF...\xFF` are appended verbatim to `$output`. Each placeholder `\xFF<key>\xFF` looks up `[$rule, $opts] = $this->tokens[(int)$key]` and appends `$this->renderObj[$rule]->token($opts)` directly to `$output`.
   - Crucially, this pass is **non-recursive**: bytes returned by `token($opts)` are appended to `$output` and are never re-scanned for `\xFF` delimiters (so placeholder bytes that survive inside a token option value, such as a `Bibliography` or `Footnoteblock` title spanning a `Raw` placeholder, are never re-expanded).
   - Also crucially, tokens that live in `$this->tokens` without being referenced by any `\xFF<key>\xFF` in `$this->source` (notably `Typography`'s 13 constant table entries registered on every document, `R3-SCOPE.md:9`) are **never passed to `token()`**.
4. **Format post-pass (`Xhtml::post()`, no-op) and `Text_Wiki::render()` TOC strip pass (`Wiki.php:963–964, 970–972`)**:
   - `Xhtml::post()` returns nothing.
   - Immediately after `post()`, `Text_Wiki::render()` runs:
     ```php
     $d = utf8_encode("\xFC"); // UTF-8 "ü" (0xC3 0xBC)
     $output = preg_replace_callback("/$d$d(.*?)$d$d/s", array($this, 'strip'), $output);
     ```
     where `strip($matches)` returns `strip_tags($matches[1])`. This is the cross-pass consumer of the `üü...üü` wrappers emitted by `Text_Wiki_Render_Xhtml_Toc::token()` (`item_start`/`item_end`), and because R2-FRAME removed `üü` stripping from `Prefilter.php` (`conformance-refphp/R2-FRAME.md:12`), it also fires on any literal text containing two `üü` sequences (verified firsthand on PHP 8.5.4).

### 1.2 Active render rules in pipeline order (68 rules)

Every active rule in `Text_Wiki::$rules` (`Text/Wiki.php:52–133`) has a corresponding file in `ref-php/text-wiki/Text/Wiki/Render/Xhtml/<Rule>.php`. In the table below:
- **Parse tokens**: `self` = parse rule claims its own token(s); `none` = parse rule never calls `addToken()` (source-rewrite only); `via <Rule>` = parse rule's own `parse()` is a no-op and another parse rule emits its tokens; `+ <Rule>` = also emits another rule's tokens.
- **State read**: everything read beyond the rule's own `$options` array (document `vars`, static maps, render conf keys beyond class defaults, and external serving-layer environment). `ref_configure_wiki()` (`wiki-config.php`) sets only: `freelink.{view_url,new_url,new_text,css_new,exists_callback}`, `url.images = false`, `table.css_table = 'wiki-content-table'`, and `interwiki.sites` (5 HTTPS templates).
- **State written**: any write to `$this->wiki`, statics, or instance properties.

| # | Rule | Parse tokens | State read (beyond `$options`) | State written | Notes / escaping / external deps |
|---:|---|---|---|---|---|
| 1 | `Include` | `none` | none | none | Parse expands to wikitext (incl. missing-page `[[div class="error-block"]]`); `Render/Xhtml/Include.php` carries a `type === 'missing'` branch (`ENT_COMPAT`, Gap 3 `REPORT-REFGAPS.md`) unreachable from active parse. |
| 2 | `Prefilter` | `none` | none | none | Returns `''`. |
| 3 | `Delimiter` | `self` (raw `\xFF` only) | none | none | Returns `$options['text']`; unreachable on valid UTF-8 JSON inputs (`R2-FRAME.md:16`). |
| 4 | `Code` | `self` | conf `css*` (all `null`) | none | Uses `Text_Highlighter` (`WIKIDOT_ROOT/lib/Text_Highlighter/`), `PEAR::isError`, `wikidotTrimCodeBody`, `htmlspecialchars(..., ENT_COMPAT)`. |
| 5 | `Form` | `self` | none | none | `wikidotEscapeRaw` (`strtr`), leading-space `&nbsp;&#32;` pairing, `<span style="white-space: pre-wrap;">`. |
| 6 | `Raw` | `self` | none | none | `wikidotEscapeRaw`, `<span style="white-space: pre-wrap;">`. |
| 7 | `Rawold` | `self` | none | none | Bare `htmlspecialchars($options['text'])` (PHP 8.5 default `ENT_QUOTES\|ENT_SUBSTITUTE`). |
| 8 | `Modulepre` | `none` | none | none | Empty method body (returns `null` → `''`). |
| 9 | `Module` | `self` | `$GLOBALS['site']->getUnixName()`, `ModuleManager::instance()` | none | Unknown module → `renderError(...)`; known module → `þmodule "..." ...þ` handoff marker (`urlencode`). |
| 10 | `Module654` | `self` | inherits `Module` | none | Empty subclass of `Text_Wiki_Render_Xhtml_Module`. |
| 11 | `Iftags` | `none` | none | none | Returns `''`. |
| 12 | `Comment` | `self` | none | none | Returns `''`. |
| 13 | `Iframe` | `self` | none | none | `percentEncodeNonAscii` on `src`; `htmlspecialchars(..., ENT_COMPAT \| ENT_HTML401, 'UTF-8')`. |
| 14 | `Date` | `self` | none | none | Pure 64-bit clamped proleptic-Gregorian UTC formatting + `encodeFormat` (`%g`→`ago`, `@@N@@`→`%FFN%FF`). |
| 15 | `Math` | `self` | `Ozone::getRunData()->getTemp('site')`, filesystem, `LatexRenderer`, conf `id_prefix` (`null`) | none | No-op `LatexRenderer` stub (`ozone-stubs.php:108`) means PNG never exists → always renders fossil error block in harness (`R2-LINK.md:15`). |
| 16 | `Concatlines` | `none` | none | none | Returns `''`. |
| 17 | `Freelink` | `self` | conf `view_url`, `new_url`, `new_text`, `new_text_pos`, `css`, `css_new`, `pages`, `exists_callback` (`wikiPageExists` → `$GLOBALS['REF_EXISTING_PAGES']`); `DB_PagePeer::instance()->selectByPrimaryKey()` when `$exists && $textFromTitle` (unstubbed) | writes `vars['internalLinksExist']` or `vars['internalLinksNotExist']` (**write-only**, unread by all renderers) | Bare `htmlspecialchars` (PHP 8.5 default); `GlobalProperties::$URL_DOMAIN` branch unreachable after R2-LINK parse correction. |
| 18 | `Equationreference` | `self` | `Text_Wiki_Parse_Math::$equationsArray[$label]`, `getRenderConf('xhtml','math','id_prefix')` | none | Undefined label → empty id; duplicate label → last registration (`REPORT-R35.md:15`). |
| 19 | `Footnote` | `self` | `Text_Wiki_Parse_Math::$equationsArray` (**dead unused local** `$refs`), conf `id_prefix` (`null`) | none | `<sup class="footnoteref"><a id="footnoteref-..." onclick="...('footnote-...')">...</a></sup>`; raw `'` in onclick. |
| 20 | `Footnoteitem` | `via Footnoteblock` | `vars['footnotes'][$id - 1]`, `getRenderConf('xhtml','footnote','id_prefix')` | none | `parabreak` → `"\n"` (`CORRECTION-FNB24.md`); `start` → emits `' '` after `.` iff `vars['footnotes'][$id - 1] !== ''`; `end` → `</div>`. |
| 21 | `Footnoteblock` | `self` (+ `Footnoteitem`) | `vars['footnotes']` (`count == 0` → `''`) | none | Default title `'Footnotes'` when `title === null`; empty `""` omits title div; `htmlspecialchars($title, ENT_COMPAT)` (returns `""` on invalid UTF-8). |
| 22 | `Bibitem` | `via Bibliography` | conf `id_prefix` (`null`) | none | `start` → separator `' '` iff `empty($options['empty'])`; `end` → `</div>`. |
| 23 | `Bibliography` | `self` (+ `Bibitem`) | none (`vars['bibitems']` check is commented out!) | none | `nl` → `"\n"`; default title `'Bibliography'` when `title === null`; empty `""` omits title div; bare `htmlspecialchars($title)` (PHP 8.5 `ENT_QUOTES\|ENT_SUBSTITUTE` — candidate render defect recorded in `REPORT-R4.md`). |
| 24 | `Bibcite` | `self` | `vars['bibitemIds'][$label]`, `getRenderConf('xhtml','bibitem','id_prefix')` | none | Undefined (`=== null`) → `<span class="error-inline">Bibliography item <em>$label</em> not found.</span>`; defined → `<a ... id="bibcite-$id" ...>$id</a>` (`REPORT-R36.md:15`). |
| 25 | `Divprefilter` | `none` | none | none | Returns `''`. |
| 26 | `Anchor` | `self` | conf `css` (unused) | none | `start`/`end`/`invalid_named`/`literal` (`htmlspecialchars(..., ENT_COMPAT, 'UTF-8')`) and default named `<a name="%s"></a>` (`htmlentities($name)`). |
| 27 | `User` | `self` | `WDStringUtils::toUnixName`, `Criteria`, `DB_OzoneUserPeer::instance()`, `WDRenderUtils::renderUser()` | none | Serving-layer DB/render classes **not stubbed** in `ozone-stubs.php` (never R2-live-validated, `REPORT-R317.md:43`). |
| 28 | `Blockquote` | `self` | conf `css` (`null`) | none | `<blockquote>` / `</blockquote>\n`. |
| 29 | `Heading` | `self` | conf `css_h1..css_h6` (`null`), `use_id` (`true`) | dead `static $jsOutput = false` (never written `true`; `startContent`/`$collapse` unreachable from active parse) | `start` (`\n<hN id="..."><span>`), `start-notoc` (`\n<hN><span>`), `end` (`</span></hN>\n`). |
| 30 | `Toc` | `self` | conf `css_list` (`null`), `css_item` (`null`), `div_id` (`'toc'`), `collapse` (`false`); `$this->min` (constant `0`, never written) | none (emits `üü...üü` consumed by `Wiki::render()` post-pass) | `htmlspecialchars($title, ENT_COMPAT, 'UTF-8')`; `item_start`/`item_end` wrap text in `\xC3\xBC\xC3\xBC` (`üü`) for `Wiki::render()` `strip_tags`. |
| 31 | `Horiz` | `self` | conf `css` (`null`) | none | `<hr />\n`. |
| 32 | `Separator` | `self` | conf `css` (unused) | none | `<div class="content-separator" style="display: none:"/>\n`. |
| 33 | `Clearfloat` | `self` | none | none | `<div style="clear:left|right|both; height: 0px; font-size: 1px"></div>\n`. |
| 34 | `Break` | `self` | conf `css` (`null`) | none | `<br />\n`. |
| 35 | `Span` | `self` | none | none | `<span ...>` (`htmlspecialchars(..., ENT_COMPAT, 'UTF-8')`) / `</span>`. |
| 36 | `Size` | `self` | none | none | `<span style="font-size:$size;">` / `</span>`. |
| 37 | `Div` | `self` | none | none | `<div  k="v">` (note leading space in `"<div " . $argstr . ">"` — raw unescaped `$value`) / `</div>`. |
| 38 | `Divalign` | `self` | none | none | `<div style="text-align: $align;">` / `</div>`. |
| 39 | `Collapsible` | `self` | none | none | `wikidotLabel` (`htmlspecialchars(..., ENT_QUOTES, 'UTF-8')`, space→`&nbsp;`, tab→4×`&nbsp;`, C0/DEL strip). |
| 40 | `Tabview` | `self` | none | none | YUI scripts + `htmlspecialchars($label, ENT_COMPAT, 'UTF-8')` + inline init script. |
| 41 | `Note` | `self` | none | none | `<div class="wiki-note">` / `</div>`. |
| 42 | `Gallery` | `self` | `vars['pageName']`, `$GLOBALS['site']`, `DB_PagePeer`, `DB_FilePeer`, `FlickrHandler`, conf `no_local`, `getRenderConf('xhtml','wikilink','view_url')` | intra-token loop locals (`$target`, `$osrc`, `$size`) leak across rows within one `token()` call; no cross-token write | Heavy serving-layer deps (`DB_FilePeer`/`FlickrHandler` unstubbed). |
| 43 | `List` | `self` (+ `Newline`) | conf `css_ol`, `css_ol_li`, `css_ul`, `css_ul_li` (all `null`) | none | Native bullet/number/sublist + Gap 2 explicit `[[ul]]`/`[[ol]]`/`[[li]]` tokens (`htmlspecialchars(..., ENT_COMPAT, 'UTF-8')`). |
| 44 | `Deflist` | `self` | conf `css_dl`, `css_dt`, `css_dd` (all `null`) | none | `<dl>\n`, `</dl>\n`, `<dt>`, `</dt>\n`, `<dd>`, `</dd>\n`. |
| 45 | `Table` | `self` | conf `css_table` (`'wiki-content-table'` via `wiki-config.php`), `css_caption/tr/th/td` (`null`) | none | `<table>`/`<tr>`/`<th>`/`<td>`/`<caption>` with `colspan`/`rowspan`/`text-align`. |
| 46 | `Tableadv` | `self` | none | none | `htmlspecialchars((string)$value, ENT_QUOTES \| ENT_SUBSTITUTE, 'UTF-8')`. |
| 47 | `Button` | `self` | none | none | 10 allowed types, bare `htmlspecialchars` on `class`/`style`/`text`. |
| 48 | `Image` | `self` | `vars['pageName']`, `$GLOBALS['site']`, `DB_PagePeer`, `DB_FilePeer`, `FlickrHandler`, conf `base`, `url_base`, `css_link`, `no_local`, `post_vars` | none | `encodeNonAscii`, bare `htmlspecialchars`; `flickr:` / `:first` unstubbed (`R2-PARA.md:7,31`). |
| 49 | `Embed` | `self` | `WIKIDOT_ROOT/conf/wikiparser/embed/*.php` | `__construct()` writes `$this->_patterns` once at load (read-only during `token()`) | PCRE allowlist match + JS `language=` strip + `on[a-z]+=` rejection. |
| 50 | `Social` | `none` | `vars['pageName']`, `vars['pageTitle']`, `$GLOBALS['site']` (unreachable) | none | `Parse/Default/Social.php` rewrites directly to `þmodule ...þ` (`addToken` commented out); `Render/Xhtml/Social.php` is never called by active parse. |
| 51 | `File` | `self` | conf `base` (`'/'`), `no_local` (`null`) | none | `<a href="$file">$anchor</a>` (no escaping). |
| 52 | `Center` | `self` | none | none | `<p style="text-align: center;">` / `</p>`. |
| 53 | `Newline` | `self` (+ via `List`) | none | none | `<br />\n`. |
| 54 | `Paragraph` | `self` (+ `Span`) | conf `css` (`null`) | none | `<p>` / `</p>\n\n`. |
| 55 | `Url` | `self` | conf `images` (`false` via `wiki-config.php`), `img_ext`, `target` (`null`), `css_*` (`null`) | writes `vars['externalLinks']` (**write-only**, unread by all renderers) | Percent-encodes non-ASCII bytes in `href`; bare `htmlspecialchars`; `#` → `javascript:;`. |
| 56 | `Email` | `self` | none | none | `<span class="wiki-email">` + `str_replace('@','|', strrev($email).'#'.strrev($text))` + `</span>`. |
| 57 | `Mathinline` | `self` | none | none | `<span class="math-inline">$...$</span>` with explicit `strtr` (`'` → `&#39;`, `\0` → `' '`). |
| 58 | `Interwiki` | `self` | conf `sites` (5 HTTPS templates via `wiki-config.php`), `target` (`'_blank'`), `css` (`null`) | none | Bare `htmlspecialchars` on `$text`/`$target`; `onclick="window.open(this.href, '_blank'); return false;"`. |
| 59 | `Colortext` | `self` | none | none | `normalizeColor` (hex 3/6 or `[A-Za-z0-9#(),\- ]*`); invalid spec restores literal `##raw|` / `##`. |
| 60 | `Strong` | `self` | conf `css` (`null`) | none | `<strong>` / `</strong>`. |
| 61 | `Emphasis` | `self` | conf `css` (`null`) | none | `<em>` / `</em>`. |
| 62 | `Underline` | `self` | conf `css` (unused) | none | `<span style="text-decoration: underline;">` / `</span>`. |
| 63 | `Strikethrough` | `self` | conf `css` (unused) | none | `<span style="text-decoration: line-through;">` / `</span>`. |
| 64 | `Tt` | `self` | conf `css` (`null`) | none | `<tt>` / `</tt>`. |
| 65 | `Superscript` | `self` | conf `css` (`null`) | none | `<sup>` / `</sup>`. |
| 66 | `Subscript` | `self` | conf `css` (`null`) | none | `<sub>` / `</sub>`. |
| 67 | `Typography` | `self` | `$this->replacements` (11-entry constant table) | none | Returns numeric HTML entity for `$options['char']` (10 distinct entities across 11 keys: `&#8220;`, `&#8221;`, `&#8222;`, `&#8216;`, `&#8217;`, `&#171;`, `&#187;`, `&#160;`, `&#8230;`, and `&#8212;` for both `---` and `--`). |
| 68 | `Tighten` | `none` | none | none | Returns `''`. |

### 1.3 Inactive and orphan Xhtml files (16 files; 68 + 16 = 84 total)

- **Commented out in `Text_Wiki::$rules` (7 files, never loaded in the active pipeline)**: `Bold`, `Function`, `Html` (also in `$disable`), `Italic`, `Moduledelimiter`, `Phplookup`, `Wikilink` (also disabled in `wiki-config.php:41`, though `require_once`'d as parent class of `Freelink`; writes `vars['internalLinksExist']`/`['internalLinksNotExist']`). Note: `'Embed'` appears twice in `Text_Wiki::$rules` — once commented out at line 85 and once active at line 109 — so it is counted in the 68 active rules above.
- **Orphan Xhtml files not listed in `Text_Wiki::$rules` at all (9 files, never loaded)**: `Box`, `Font`, `Plugin`, `Postfilter`, `Preformatted`, `Revise`, `Smiley`, `Specialchar`, `Titlebar`.

All 16 inactive/orphan files are **out of R4 scope** by construction (no active parse rule can produce tokens for them).

### 1.4 Document-state read/write audit across render

Checking every R3 document-state field (`LeanFtml/TokenState.lean:200–241`) and every `$this->wiki->*` / static / instance access across all 84 Xhtml files proves the following exact state-flow boundary:

| State field | Parse writer | Render reader(s) | Render writer(s) |
|---|---|---|---|
| `vars['footnotes']` (`DocState.footnotes`) | `Footnote` | `Footnoteitem` (`$footnotes[$id - 1] !== ''`), `Footnoteblock` (`count == 0`) | **none** |
| `vars['bibitemIds']` (`DocState.bibitemIds`) | `Bibitem` (via `Bibliography`) | `Bibcite` (`$bibitemIds[$label]`) | **none** |
| `vars['bibitems']` (`DocState.bibitems`) | `Bibitem` (via `Bibliography`) | **none** (`Bibliography.php:47` check is commented out) | **none** |
| `Text_Wiki_Parse_Math::$equationsArray` (`DocState.equations`) | `Math` | `Equationreference` (`$refs[$label]`); `Footnote` (dead unused local `$refs`) | **none** |
| `vars['scored_anchors']` (`DocState.scoredAnchors`, R3.17) | `Anchor` | **none** (read only at parse time by `Paragraph::process()`) | **none** |
| `vars['pageName']` (`DocState.page.name`) | environment (unset in `batch.php`) | `Gallery`, `Image` (`:first` / local w/o `/`), `Social` (unreachable) | **none** |
| `vars['pageTitle']` | environment (unset in `batch.php`) | `Social` (unreachable) | **none** |
| `vars['page']`, `inclusions`, `inclusionsNotExist`, `headline_id`, `math_id`, `Collapsible::$count`, `Tabview::$_counter` | environment / parse rules | **none** | **none** |
| `vars['internalLinksExist']`, `vars['internalLinksNotExist']` | — | **none** | `Freelink` (write-only link metadata for OZONE) |
| `vars['externalLinks']` | — | **none** | `Url` (write-only link metadata for OZONE) |

**Key architectural conclusion**: **no Xhtml render rule's `token()` writes any state that another Xhtml render rule's `token()` reads.** The token-expansion loop is therefore a **pure structural fold** over `work : List TSeg` parameterized by `(tokens, doc, conf, env)`, bracketed only by `Text_Wiki_Render_Xhtml::pre()` (on literal text segments) and `Text_Wiki::render()`'s `üü...üü` `strip_tags` post-pass (which consumes `Toc`'s `üü` markers and any paired `üü` in output).

---

## 2. The tier's target, framing surfaces, and Stage 2 disposition

### 2.1 The mirroring target

R4 models the reference's `Text_Wiki::render('Xhtml')` as a pure, total Lean function from the R3 parse state (`ParseState` in `LeanFtml/TokenState.lean`, plus an explicit `RenderConf`) to a `RenderOutcome`:

```lean
renderState : RenderConf → ParseState → RenderOutcome
```

factored through a lookup-parameterized core `renderWith (lookup : Nat → Option TokenEntry) (conf : RenderConf) (work : List TSeg) (doc : DocState) : RenderOutcome` so the conformance driver can consume **both** 0-indexed Lean `ParseState` values and raw batch PHP states from `state-restricted.php` (whose token table keys are cumulative process-global integers across cases) without distorting any derived bytes.

A `RenderOutcome` returns:
- `output : List Nat` — the rendered byte string;
- `unmirrored : List String` — deduplicated list of referenced rule names not yet mirrored in `RenderRuleId` (in encounter order);
- `missingKeys : List Nat` — any placeholder key absent from the token table.

### 2.2 What the output is compared against

- **Primary conformance comparison (Bridge A, Lean vs. PHP reference)**: Lean's `output` is compared against the reference's own `Text_Wiki::render('Xhtml')` output on the identical parse pipeline:
  - For **full 68-rule parse states**: `ref-php/harness/batch.php render` (lines 82–90), which emits the raw string returned by `$wiki->transform($src, 'Xhtml')` inside JSON `{"id": ..., "output": ...}` with **no** outer page wrapper, **no** pretty-printing, and **no** trailing newline appended.
  - For **stage-restricted parse states** (e.g., R3.6's 23-rule prefix `Prefilter..Bibcite`): the identical `ref_configure_wiki(new Text_Wiki($rules))->transform($src, 'Xhtml')` return value.
  - Under this comparison, Lean render output equals the reference render output **byte-for-byte with zero normalization**, modulo only:
    1. the CLI newline appended by `ref-php/harness/transform.php:39` (`echo "\n";`) if `transform.php` is used instead of `batch.php`; and
    2. explicitly named serving-layer stub boundaries for rules whose PHP renderers call external/unstubbed OZONE services (`User`, `Gallery`, `Image` `flickr:`/`:first`, `Freelink` `textFromTitle` on existing pages, `Math` `LatexRenderer`, `Module` `ModuleManager`).

### 2.3 Framing surfaces excluded from byte equality (with record citations)

When relating the reference's render output to the R2 batteries' **live Wikidot captures** and **ftml dumps** (`conformance-refphp/`), the following framing surfaces sit outside `Text_Wiki::render('Xhtml')` and are explicitly excluded from R4 byte equality:

1. **Harness and page-frame chrome**:
   - `ref-php/harness/transform.php:39` appends one trailing `"\n"` beyond `$wiki->transform()` (`batch.php:89–90` does not).
   - Live Wikidot's outer `#page-content` DOM wrapper, ad-script inserts, and MathJax/page chrome (`conformance-refphp/R2-BLOCK.md:25`).
2. **Serving-layer pretty-printing and save-time normalization**:
   - Inter-block blank lines and trailing newlines (`Paragraph` `</p>\n\n`, `Code` `\n...\n\n`, `Toc` `\n\n`, footer child-div newlines) vs. live's tight single-newline formatting (`R2-FRAME.md:21`, `R2-NOTES.md:17,41`, `conformance-refphp/notes/CORRECTION-FNB24.md`, `R2-BLOCK.md:7,15,25`, `R2-INLINE3.md:7,23`).
   - Wikidot save-time normalization of probe sources (trailing newline and trailing whitespace stripped on save; tabs normalized in some contexts): `R2-NOTES.md:33`, `R2-PARA.md:11,31`, `R2-BLOCK.md:11,25`, `R2-INLINE3.md:39`.
3. **Serving-layer dynamic / environment surfaces**:
   - `Bibcite` per-page-stable random hex ID suffix on live (e.g., `bibcite-1-82730a` vs. reference's `bibcite-1`): class `S1`, `R2-NOTES.md:21,29,41`, `conformance-refphp/notes/bibcite/SECTION.md`.
   - `Math` LaTeX PNG generation (stubbed to a no-op `LatexRenderer` in `ref-php/harness/ozone-stubs.php:102–113`, so reference renders the fossil error block): `ref-php/INVENTORY.md:49,59`, `R2-LINK.md:15,23`.
   - `Module` / `Module654` serving-layer expansion of `þmodule ...þ` handoff markers (`ref-php/harness/ozone-stubs.php:115–150`, `R2-MODULE.md`).
   - `Freelink` live DB page existence and `textFromTitle` page-title lookup (`ref-php/harness/wiki-config.php:11–14`, `R2-LINK.md:11,23`).
   - `Image` (`flickr:`, `:first`), `Gallery`, `File`, and `User` attachment/DB lookups (`R2-PARA.md:7,31`, `REPORT-R317.md:43`).
4. **Stage 2 `WikiTransformation::purifyHtml` (libtidy) effects** (`ref-php/INVENTORY.md:23,44`, `GAP-LEDGER.md:68` G2.2):
   - Horizontal space-run collapse in flow text (settled as Stage 2's, not `Paragraph`/`Newline`/`Prefilter`, in `R2-FRAME.md:20` and `R2-PARA.md:15,19`; see §2.4 below for the portion subsequently internalized into `Parse/Default/Tighten.php`).
   - Paragraph unwrapping around block/image/table/deflist elements (`R2-PARA.md:19,23`).
   - Crossed inline tag re-nesting (2026-11-04 two-stage ruling, `GAP-LEDGER.md:68`, `R2-INLINE3.md:3,11,15,19,27`).
   - Illegal HTML nesting repair (`<a>` inside `<a>`, `<div>` inside `<a>`, stray `</p>` inside footer): `REPORT-REFGAPS.md:18` (`p13`/`p14`), `R2-NOTES.md:17`.
   - `<br />` trailing-newline omission immediately before a closing tag (`R2-PARA.md:11,15`, `REPORT-REFGAPS.md:18` `p07`).
5. **Unreconciled ftml serializer differences in battery `ftml-dump.jsonl` files** (recorded as candidate ftml findings, not reference defects): `&#39;` vs. raw `'` (`M22`/`M28`, `R2-LINK.md:23`, `R2-NOTES.md:39`), `<br>` vs. `<br />` (`M33`/`M56`, `R2-NOTES.md:39`, `R2-PARA.md:23`), raw Unicode vs. numeric Typography entities (`M38`/`M72`, `R2-BLOCK.md:23`, `R2-INLINE3.md:19`).

### 2.4 Stage 2 in-tree audit and disposition

A direct search of the entire `ref-php/` tree (`rg -l -i "purify|tidy|strip_tags" ref-php`) confirms that **no `purifyHtml` or `libtidy` implementation lives in `ref-php/`**, with two named exceptions that require explicit dispositions:

1. **Stage-2-derived whitespace/edge shaping inside `ref-php/text-wiki/Text/Wiki/Parse/Default/Tighten.php` (`R2-INLINE3.md:23`, lines 53–149)**:
   - During R2-INLINE3, the Tighten parse rule absorbed three Stage-2-derived behaviors: C1 (residual `[ \t]+` collapse to one space outside token placeholders), C2 (hoisting a leading space before a `Colortext` start token and ejecting a trailing space after a `Colortext` end token, explicitly noted in `Tighten.php:101` as *"what live's Stage 2 repair does"*), and C3 (trimming spaces at `Paragraph` and `Newline` token edges).
   - **Disposition**: **Keep inherited via R3 parse state; do not duplicate or strip in R4.** All three operations execute during `Text_Wiki::parse()` and are already mirrored in Lean at R3.14 (`LeanFtml/Inline3Rules.lean`). Every full-pipeline `ParseState` entering R4 already carries their exact effect, and R4 renders that state faithfully.
2. **Post-render `üü...üü` `strip_tags` pass in `ref-php/text-wiki/Text/Wiki.php:963–964, 970–972` (and `Text_Wiki_Render_Xhtml::pre()` in `Xhtml.php:34–89`)**:
   - Both live directly inside `Text_Wiki::render('Xhtml')`, not in external Stage 2.
   - **Disposition**: **In scope of R4's render core (`LeanFtml/RenderCore.lean`).** Both are required for byte equality against `Text_Wiki::render('Xhtml')` and are mirrored as part of R4's render runner.

All remaining Stage 2 `purifyHtml` behaviors (libtidy inline re-nesting, paragraph unwrapping around images/tables/deflists, illegal nesting repair, `<br />` closing-tag trim) remain **out of R4 scope** (Tier 2 `G2.2`).

---

## 3. Conformance protocol

### 3.1 Case flows

R4 validates every mirrored render family along two complementary flows:

1. **Decoupled render conformance (primary R4 Bridge A)**:
   - Reference parse state: `source → ref-php/harness/state-restricted.php <rules> → parse state S` (JSONL with `id`, `segments`, `tokens`, `equations`, `mathId`, `footnotes`, `bibitems`, `bibitemIds`, `scoredAnchors`, and `$bytes` wire encoding).
   - Reference render: `source → PHP Text_Wiki(<rules>)->transform(src, 'Xhtml') → ref_html` (using `batch.php render` for the full 68-rule list, or the matching restricted rule list for stage-isolated validation).
   - Lean render: `S → lean-ftml-conformance-r4* → lean_outcome`.
   - Verdict:
     - If `lean_outcome.status == "excluded"` (because `S.segments` references at least one token whose rule is not in `RenderRuleId`): the case is counted as **EXCLUDED** (never as a pass), and its case id plus exact list of unmirrored rule(s) are recorded.
     - If `lean_outcome.status == "ok"`: the case passes iff `lean_outcome.output == ref_html` **byte-for-byte** (exact equality on the raw byte strings, using the `$bytes` wire format if any non-UTF-8 byte occurs).
2. **End-to-end Lean parse+render cross-check**:
   - `source → Lean parse (pipelineR36 / pipelineR317) → Lean render (renderState) → lean_e2e_outcome`, compared directly against `ref_html` on the matching rule set (with per-document fresh-process PHP checks for any dissolved-placeholder case, following `REPORT-R35.md:29` and `REPORT-R317.md:35`). This verifies that R3's Lean parse mirror and R4's Lean render mirror compose cleanly without PHP in the loop.

### 3.2 Full-pipeline vs. stage-restricted parse granularity

During incremental staging (before all 68 render rules are mirrored), most full-pipeline battery cases reference downstream container/prose tokens such as `Paragraph` (`<p>...</p>\n\n`) and `Newline` (`<br />\n`) alongside the family under test. For example, across the 365 cases in `conformance-refphp/notes/`, only 43 reference strictly NOTES tokens under the full 68-rule pipeline (299 also reference `Paragraph`, including all four `Footnoteitem` `parabreak` cases), whereas under the R3.6 23-rule restricted pipeline (`Prefilter..Bibcite`) **360 of 365** reference strictly NOTES tokens (including all four `parabreak` cases) and only 5 reference earlier unmirrored rules (`Code`, `Raw`, `Rawold`, `Freelink`).

R4 therefore runs **both** checks for each stage:
- **Full-pipeline gate**: every battery case whose full 68-rule parse references only mirrored render rules must match `batch.php render` byte-for-byte; all other cases are excluded by name with their unmirrored rules listed.
- **Stage-prefix gate**: every battery case whose R3 stage-prefix parse (for NOTES, R3.6's 23 rules) references only mirrored render rules must match the same-prefix PHP `Text_Wiki::render('Xhtml')` byte-for-byte, exercising every render branch of the family immediately without waiting for `Paragraph` or sneaking in unmirrored stand-ins.

### 3.3 No-silent-stand-in discipline

Following R3's `RuleId` precedent (`LeanFtml/Pipeline.lean:4–10`):
- `RenderRuleId` enumerates **strictly** the render rules mirrored so far. The driver exposes `--list-rules` to self-declare its exact mirrored set.
- Only tokens **actually referenced** in `work` (`TSeg.tok k`) are checked against `RenderRuleId`; unreferenced table entries (such as `Typography`'s 13 constant tokens) do not trigger exclusion, matching `Text_Wiki::render()`, which never invokes `token()` on unreferenced entries.
- When a referenced token's rule is unmirrored, the driver records it in `unmirrored`, emits an unmistakable fallback marker `[[UNMIRRORED:<rule>:<key>]]`, marks the record `"status":"excluded"`, and the comparison harness treats it as out of the pilot corpus rather than a pass.

### 3.4 Using `conformance-refphp/` batteries as the R4 corpus

Each family's R2 directory under `conformance-refphp/<family>/` holds:
- whole-document `battery.jsonl` (per rule) and cross-rule `xbattery.jsonl` (and `audit/` where present),
- live probe sources (`probe*.jsonl`) and cached anonymous live page captures (`captures*.json`),
- historical stage-era reference renders (`ref-render-before.jsonl`, `ref-render-after.jsonl`) and ftml dumps (`ftml-dump.jsonl`).

**Fresh-oracle requirement**: because later R2 stages and post-R2 corrections modified reference files after an earlier stage's `ref-render-after.jsonl` was captured (for instance, `conformance-refphp/notes/CORRECTION-FNB24.md` added `Footnoteitem`'s `parabreak` token on 2026-11-21, and R2-CONTAIN/LIST/TABLE/PARA/INLINE3/REFGAPS landed after R2-NOTES), R4 generates the operative reference render oracle **fresh from the current `ref-php/` tree** for conformance, while using the historical `ref-render-after.jsonl` and live `captures*.json` to audit for reference-render defect candidates (recorded in the stage report for coordinator scheduling, never patched silently in `ref-php/`).

---

## 4. Render-side resolution semantics already recorded

Two R3 stage reports already pinned render-only resolution semantics that serve as the template for R4:

1. **`Equationreference` (`REPORT-R35.md:15`)**: the parse rule reads nothing and emits only the trimmed `label` option. Resolution happens solely in `Text_Wiki_Render_Xhtml_Equationreference::token()`, which reads `Text_Wiki_Parse_Math::$equationsArray[$label]`:
   - an undefined label resolves to `null`, rendering empty id `equation-` and empty anchor text (`<a class="eref" ... onclick="...('equation-')"></a>`);
   - a duplicate label resolves to the **last** registration (because `Math::process()` overwrites the ordered map entry in place);
   - forward references resolve identically to backward references because the full parse finishes populating `$equationsArray` before `render()` starts.
2. **`Bibcite` (`REPORT-R36.md:15`)**: the parse rule reads nothing and emits only `label`. Resolution happens solely in `Text_Wiki_Render_Xhtml_Bibcite::token()`, which reads `$this->wiki->vars['bibitemIds'][$label]`:
   - an undefined label resolves to `null`, rendering `<span class="error-inline">Bibliography item <em>$label</em> not found.</span>`;
   - a duplicate label resolves to the **last** registration, where `Bibitem::process()` assigns `id = count(distinct labels so far) + 1` (so `bell`, `bell`, `guy` produce entry ids `1, 2, 2` and `((bibcite bell))` resolves to `2`);
   - forward references before `[[bibliography]]` resolve identically to backward references.
3. **Additional render-side state resolutions pinned by this inventory**:
   - `Footnoteitem`: reads `vars['footnotes'][$id - 1]` at render time to suppress the trailing space after `<id>.` when the trimmed stored body is empty (`R2-NOTES.md:13`, `Footnoteitem.php:60–64`).
   - `Footnoteblock`: reads `vars['footnotes']` at render time and returns `''` if empty (`Footnoteblock.php:39–42`).
   - PHP 8.5 `htmlspecialchars` flag sensitivity: `Footnoteblock` uses `ENT_COMPAT` (raw `'`, returns `""` on invalid UTF-8), whereas `Bibliography` (and several other fossil renderers: `Rawold`, `Freelink`, `Button`, `Image`, `Url`, `Interwiki`) still call bare `htmlspecialchars(...)` (PHP 8.5 default `ENT_QUOTES | ENT_SUBSTITUTE`, turning `'` into `&#039;` and invalid bytes into U+FFFD). R4 mirrors the exact reference behavior first and records any live-divergent PHP-8 artifact as a reference-render candidate for coordinator triage.

---

## 5. Definition of done for Tier R4

A render rule family is **MIRRORED** when:
1. every active render rule in the family is implemented as a pure total Lean function in `LeanFtml/` and added to `RenderRuleId`;
2. all theorems (general characterizations where clean algebraic laws exist, plus concrete worked examples) audit within `[propext, Classical.choice, Quot.sound]`, with zero `sorryAx` and zero `sorry` in new or edited files, and `lake build` is green;
3. Lean's render driver matches the fresh PHP reference render **byte-for-byte** on every in-scope case of the family's R2 battery corpus (both on the full 68-rule parse state and on the matching R3 stage-prefix parse state, plus end-to-end Lean parse+render), with every excluded case listed by name alongside its unmirrored render rule(s) and any serving-layer boundary explicitly documented.

Tier R4 is complete when every token-producing active render rule of the 68-rule reference pipeline is either MIRRORED under this standard or carries an evidence-based serving-layer disposition (mirroring R3's exhaustion standard). The recommended staging order for the remaining families after the NOTES pilot is recorded in `REPORT-R4.md`.
