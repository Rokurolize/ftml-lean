# REPORT-ANTIGRAVITY-SUSPECT — Deep Audit, Live Probes, Cross-Rule Findings, and Lean 4 Specifications

Date: 2026-11-22  
Worktree: `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-antigravity-suspect`  
Mission: `PROMPT-ANTIGRAVITY-SUSPECT.md` + `ADDENDUM-ANTIGRAVITY-SUSPECT.md`

---

## 1. Executive Summary & Addendum Reconciliation

We audited all **68 active parse and Xhtml render rules** in `ref-php/` for suspicious, brittle, typo-like, or accidental constructs, cross-checked initial candidates against **2,430 existing captures** across 162 `conformance-refphp/**/captures*.json` files plus `updates/`, cataloged **10 untestable/unreachable constructs**, and executed **56 permanent live probes** on `sandbox-for-codex` under the prefix `muse-probe-agy-suspect-` across three batches:

- **Batch 1 (`p01`–`p32`, 32 probes)**: `conformance-agy-suspect/probe-cases-fffd.jsonl` (`1`) + `probe-cases-main.jsonl` (`31`), captures in `captures-fffd.json` and `captures-main.json`.
- **Batch 2 (`f01`–`f10`, `x01`–`x10`, 20 probes)**: targeted rule-pinning (`f*`) and cross-rule interaction (`x*`) follow-ups in `probe-cases-batch2.jsonl`, captures in `captures-batch2.json`.
- **Batch 3 (`b3-*`, 4 probes)**: surgical isolators for explicit list case sensitivity, `Module654` non-empty body consumption, and `Div` raw-token attributes in `probe-cases-batch3.jsonl`, captures in `captures-batch3.json`.

All **56 / 56** live probe pages were created permanently on `sandbox-for-codex`, verified against two anonymous HTTP fetches and read-back source checks (`valid=true`, `stable=true`, `saved_source_matches=true` for all 56), and compared byte-by-byte against `php ref-php/harness/batch.php render` (with `php ref-php/harness/transform.php render` raw-byte capture where `ref-php` emitted invalid UTF-8 bytes causing `json_encode` failure). No existing repository file in `ref-php/` or `lean-ftml/` was modified; all reference corrections listed below are **proposed minimal fixes only (not applied)**.

### Headline Counts (56 Probes)
- **`CONFIRMED`: 16** (`10` Batch 1: `p05, p07, p11, p15, p21, p24, p25, p28, p31, p32`; `5` Batch 2: `f07, f08, x04, x07, x09`; `1` Batch 3: `b3-mod654-upper-body`).
- **`DIVERGENCE`: 37** (`19` Batch 1: `p02, p03, p04, p06, p08, p09, p10, p12, p14, p16, p17, p18, p19, p20, p22, p23, p26, p27, p30`; `15` Batch 2: `f01, f02, f03, f04, f05, f06, f09, f10, x01, x02, x03, x05, x06, x08, x10`; `3` Batch 3: `b3-ul-mixed-inner, b3-ol-upper-close, b3-div-raw-class`).
- **`SETTLED-IN-UPDATES`: 3** (`p01-fffd`, `p13-rawold-trailing-apos`, `p29-apos-freelink-url`).
- **Untestable / Unreachable Constructs Cataloged**: **10**.

### Reconciliation Against `ADDENDUM-ANTIGRAVITY-SUSPECT.md` and `updates/`
1. **Settled items (no duplicate investigation/Lean specs)**:
   - `p01-fffd`: Settled in `updates/REPORT-UFFFD.md` (`C-UFFFD-1` / `R-UFFFD-1`). Our isolated capture (`<p>before after</p>` vs PHP fatal) independently agrees with `plain-mid` in `updates/REPORT-UFFFD.md`.
   - `p13-rawold-trailing-apos` & `p29-apos-freelink-url`: Settled in `updates/REPORT-HTMLCHARS.md` (`Rawold`, `Freelink`, `Url` converted to `ENT_COMPAT, 'UTF-8'`). Our captures match the post-HTMLCHARS reference; our worktree carried pre-HTMLCHARS PHP files.
2. **Adjacent-to-settled residues (new evidence beyond `updates/`)**:
   - `p23-div-attr-unesc`, `f09-div-attr-escapes`, `x08-div-raw-attr`, `b3-div-raw-class`: While `updates/REPORT-REFCORR2.md` settled `Div` attribute ordering (`C-STAGE2-1`) and empty-div suppression (`C-STAGE2-2`), it did not probe HTML-escaping or `\xFF` tokens inside `Div` attributes. Our probes prove `Render/Xhtml/Div.php` lacks `htmlspecialchars(..., ENT_COMPAT, 'UTF-8')` AND live clears any attribute carrying a `Raw` token (`data-x`, `class`, `id`) to empty `""` (omitting `u-` on `id`) while retaining the attribute key (`<div data-x="">`, `<div id="" class="">`).
   - `p31-div-sameline`: Confirms same-line `[[div]]hello[[/div]]` requires the opener newline and stays literal (`Div.php:49`), matching REFCORR2.
   - `p16-interwiki-unknown-html`, `f10-interwiki-unknown-apos`: `updates/REPORT-X44.md` settled label over-claiming on `[site:page label]`, leaving unknown-site HTML escaping unprobed. Live escapes the unknown-site fallback `$text` with `ENT_COMPAT, 'UTF-8'`, whereas `Render/Xhtml/Interwiki.php:63` returns `$text` raw.
3. **Uncovered families (highest marginal value per Addendum)**:
   - **`Email`** (`p18, p19, f01, f02, x03, x04, x05`): Complete live characterization — bytewise `strrev` mathematically confirmed, `ENT_NOQUOTES` + U+FFFD substitution on render, and X44-analog `\xFFn\xFF` token over-claim still live on Wikidot!
   - **`Iftags`** (`p28, f08`): Silent-drop comma semantics confirmed on live.
   - **`Blockquote`** (`p32, x07`): Silent deletion of `>nospace` and `>@@hello@@` confirmed on live.
   - **`Freelink` transliteration** (`p03, p04, f03`): Missing `[A-Za-z0-9]` pass-through in `freelink_transliterate` (`Freelink.php:700`) and `Ł -> l` (`p04`) pinned live.
   - **`List` explicit blocks** (`p30, f04, f05, f06, b3-ul-mixed-inner, b3-ol-upper-close`): Refutes `conformance-refphp/listblocks/SECTION.md:6` (`lb07`, which copied an unprobed `ftml` pin).

---

## 2. Spotlight: High-Value Discoveries (Uncovered Families & Cross-Rule Interactions)

### 2.1 `Raw` × `Date` × `Interwiki` × `Deflist` (`p22, p27, x01, x02, x09`)
- **Finding**: Live `Raw` is NOT the R2 run-arithmetic scanner in `Parse/Default/Raw.php:27-120`; live behaves identically to `/(?<!@)@@(.*?)@@/`:
  1. `p27` (`A @@@hello B`): live leaves `@@@` untouched (`<p>A @@@hello B</p>`), whereas `ref-php` (`Raw.php:50`) deletes `@@@` via `max(0, run - 4)`.
  2. `x01` (`[wikipedia:X a@@@@b]`): live emits a genuine empty `Raw` token `\xFF1\xFF` for `@@@@`, which triggers X44 `Interwiki` rejection (`<p>[wikipedia:X ab]</p>`), whereas `ref-php` emits 0 tokens and falsely linkifies `ab`.
  3. `x02` (`[[date 0 format="a@@raw@@b"]] and [[date 0 format="a@@@@b"]]`): live emits `%FF1%FF` AND `%FF2%FF` (both real tokens), whereas `ref-php` emits `%FF181%FF` for the first and `format_ab` (0 tokens) for the second.
  4. `p22` (`[[date 0 format="@@@@@@123@@@@@@"]]`): on immutable input, `/(?<!@)@@(.*?)@@/` consumes pos `0..4` (`@@@@` -> `\xFF1\xFF`), skips pos `4` because `(?<!@)` sees `@` at pos `3`, consumes pos `9..13` (`@@@@` -> `\xFF2\xFF`), skips pos `13`, producing `%FF1%FF%40%40123%FF2%FF%40%40` byte-for-byte! Meanwhile `ref-php`'s `Date::encodeFormat` (`Render/Xhtml/Date.php:54-63`) fabricated a rule turning literal ASCII `@@123@@` into `%FF123%FF` — a spurious rule live does not have!
  5. `x09` (`: @@@@ : def`): live strips the empty raw token via `termRendersEmpty` and omits `<dt>` (`<dl>\n<dd>def</dd>\n</dl>`), sharpening `p06` (`: @@term@@ : definition`, where non-empty raw keeps `<dt>`).

### 2.2 `Email` Complete Live Semantics — Uncovered Family (`p18, p19, f01, f02, x03, x04, x05`)
- **Bytewise reversal (`p19, f01`)**: For `[a@b.com éé]` (`C3 A9 C3 A9`), bytewise `strrev` produces `A9 [C3 A9] C3`, which live renders as `<span class="wiki-email">moc.b|a#é</span>`, mathematically pinning bytewise `strrev`.
- **Render escaping (`p18, f02`)**: Live renders `[a@b.com >i<]` as `moc.b|a#&lt;i&gt;` (HTML-escaped BEFORE Stage 2 tidy, else `<i>` would parse as a tag!) and `[a@b.com a'b&c"d]` as `moc.b|a#d"c&amp;b'a` (`&`, `<`, `>` escaped, `"` and `'` raw — `ENT_NOQUOTES`, plus `U+FFFD` replacement for invalid UTF-8 bytes `\xA9`, `\xC3`, `\xFF`), whereas `Render/Xhtml/Email.php:29` performs zero escaping and emits raw invalid UTF-8 bytes.
- **Cross-rule `\xFF` over-claim (`x03, x04, x05`)**: Unlike `Interwiki` (fixed by X44), live's `Email` parser (`[email (.+?)]`) STILL accepts `[` (`x04`: `moc.b|a#x[</span> label]`) and STILL over-claims earlier `Url` (`x03`: `moc.b|a#3`) and `Raw` (`x05`: `moc.b|a#1`) placeholders, leaking live's internal token index directly into the rendered HTML.

### 2.3 `List` Explicit Blocks Case Sensitivity (`p30, f04, f05, f06, b3-ul-mixed-inner, b3-ol-upper-close`)
- `conformance-refphp/listblocks/SECTION.md:6` claimed uppercase `[[UL]]` / `[[LI]]` stay literal, citing only the unprobed `ftml` pin `lb07`. Six live captures refute that claim:
  - `f05` (`[[ul]]\n[[li]]Case[[/LI]]\n[[/UL]]`) -> `<ul>\n<li>Case</li>\n</ul>\n<br />`
  - `b3-ol-upper-close` (`[[ol]]\n[[li]]Case[[/LI]]\n[[/OL]]`) -> `<ol>\n<li>Case</li>\n</ol>\n<br />`
  - `b3-ul-mixed-inner` (`[[ul]]\n[[LI]]A[[/LI]]\n[[/ul]]\n\nAFTER`) -> `<ul>\n<li>A</li>\n</ul>\n<br />\nAFTER`
  - `p30` (`[[UL]]\n[[LI]]Case[[/LI]]\n[[/UL]]`) & `f04` (`[[UL]]\n[[LI]]Case[[/li]]\n[[/ul]]`) -> raw `#page-content` literally stops at `<ul>\n<li>Case<br />` (no `</li></ul>`), and `f06` (`[[UL]]\n[[LI]]A[[/LI]]\n[[LI]]B[[/LI]]\n[[/UL]]\n\nAFTER`) absorbs `AFTER` inside `<li>B` (`<ul>\n<li>A</li>\n<li>B<br />\nAFTER</li>\n</ul>`) — indicating case-insensitive opener/closer recognition with a case-mismatched stack/close check when the opener itself is uppercase `UL`!

### 2.4 `Colortext` Parse-Time Validation (`p09, p10, x06`)
- `Parse/Default/Colortext.php:50` accepts any `##(.+?)|(.+?)##` and defers validation to `Render/Xhtml/Colortext.php:64-73`. This single architectural bug causes three distinct divergences on live:
  1. `p09` (`##<i>|hello##`): `ref-php` bypasses `Xhtml::pre()` and injects raw unescaped `<i>` HTML, whereas live keeps text in literal stream and escapes to `&lt;i&gt;`.
  2. `p10` (`x##a!b| hello ##y`): `Tighten.php` (`tightenColorPass`) hoists inner spaces outward past the doomed `Colortext` tokens (`x ##a!b|hello## y`), whereas live keeps `x##a!b| hello ##y`.
  3. `x06` (`##@@red@@|hello##`): `ref-php` traps the `Raw` token `\xFF0\xFF` inside `$options['color']` and leaks raw `\xFF0\xFF` bytes, whereas live renders `<p>##<span style="white-space: pre-wrap;">red</span>|hello##</p>`.

### 2.5 `Div` Token-Bearing Attribute Clearing & Escaping (`p23, f09, x08, b3-div-raw-class`)
- `f09` (`[[div data-x="a&b<c>d'e\"f"]]`) proves `Render/Xhtml/Div.php:44` must escape attribute values with `htmlspecialchars($value, ENT_COMPAT, 'UTF-8')`.
- `x08` (`[[div data-x="a@@b@@c"]]`) and `b3-div-raw-class` (`[[div class="a@@b@@c" id="a@@b@@c"]]`) prove live clears any `Div` attribute value containing `\xFF` (`data-x`, `class`, `id`) to empty `""` (omitting `u-` on `id`) while keeping the attribute key (`<div data-x="">`, `<div id="" class="">`) — unlike `ref-php` which leaks raw `\xFF0\xFF` and `id="u-"`.

---

## 3. Complete Per-Suspicion Catalog (`56` Probes)

*Note on Stage 2 surface*: On `p05, p24`, live's Stage 2 (`purifyHtml`) unwraps `<p>` around inline content next to block/img wrappers, collapses/normalizes newlines at block boundaries (`p07, p20, p21, p23, p32`), and strips trailing `\n\n`. Verdicts compare Stage 1 rule semantics modulo documented Stage 2 framing (`updates/REPORT-STAGE2.md`, `stage2/REPORT-STAGE2-REMAINDER.md`).

### 3.1 Summary Table — Batch 1 (`p01`–`p32`)

| ID | Rule File(:Line) | Construct | Live Probe (`muse-probe-agy-suspect-...`) | Verdict | Addendum / Lane Note |
|---|---|---|---|---|---|
| `p01` | `Render/Xhtml.php:74-87` | `pre()` `\xFF` <-> U+FFFD restore collision | `p01-fffd` | **SETTLED-IN-UPDATES** | `updates/REPORT-UFFFD.md` (`C-UFFFD-1` / `R-UFFFD-1`) |
| `p02` | `Text/Wiki.php:963-972` | Post-render `üü(.*?)üü` `strip_tags` | `p02-uu-pair` | **DIVERGENCE** | Concurrent (prose); `üü` preserved live |
| `p03` | `Parse/Default/Freelink.php:698-709` | `freelink_transliterate` drops ASCII letters | `p03-freelink-cafe` | **DIVERGENCE** | Uncovered open (serving translit) |
| `p04` | `Parse/Default/Freelink.php:354,698` | `freelink_transliterate` `Ł` + ASCII loss | `p04-freelink-polish` | **DIVERGENCE** | Uncovered open per Addendum |
| `p05` | `Parse/Default/Tabview.php:62-65,93` | `$matches[1].$matches[1]` double prose + drop `class` | `p05-tabview-attr` | **CONFIRMED** | Bug is live-true (concurrent interact) |
| `p06` | `Parse/Default/Deflist.php:111,136` | `termRendersEmpty` strips ALL `\xFFn\xFF` tokens | `p06-deflist-raw-term` | **DIVERGENCE** | Cross-rule (`Raw` × `Deflist`) |
| `p07` | `Parse/Default/Deflist.php:57` | `(?!(: \|\n))` merges blank-separated defs | `p07-deflist-blank-merge` | **CONFIRMED** | Bug is live-true (concurrent listtable) |
| `p08` | `Parse/Default/Strong.php:64` | Non-empty `pairClaim` tried before empty `****` | `p08-strong-quad-follow` | **DIVERGENCE** | Empty-first matches live (concurrent inline) |
| `p09` | `Render/Xhtml/Colortext.php:72` | Invalid color emits raw unescaped HTML `##$raw\|` | `p09-color-invalid-unesc` | **DIVERGENCE** | Cross-rule (`Colortext` × `Xhtml::pre()`) |
| `p10` | `Parse/Default/Colortext.php:50` | Parse claims invalid color -> `Tighten` hoists spaces | `p10-color-invalid-hoist` | **DIVERGENCE** | Cross-rule (`Colortext` × `Tighten`) |
| `p11` | `Parse/Default/Module.php:86-87` | `/i` check rewrites only lowercase `[[module` | `p11-module-upper-nested` | **CONFIRMED** | Uppercase nested halt is live-true |
| `p12` | `Parse/Default/Module654.php:52` | `(.*?)` consumes `[[/module]]` on empty body | `p12-module654-upper-empty` | **DIVERGENCE** | Uppercase `MODULE654` keeps `[[/module]]` |
| `p13` | `Render/Xhtml/Rawold.php:43` | Bare `htmlspecialchars` escapes trailing `'` | `p13-rawold-trailing-apos` | **SETTLED-IN-UPDATES** | `updates/REPORT-HTMLCHARS.md` (`ro-trail`) |
| `p14` | `Parse/Default/Span.php:81-82` | Unconditional `'u-' . $attr['id']` double prefix | `p14-span-double-u-id` | **DIVERGENCE** | Concurrent (interact) |
| `p15` | `Parse/Default/Typography.php:108` | Unescaped `$` acts as EOF anchor in `/x` mode | `p15-typo-dollar-unit` | **CONFIRMED** | `$` bug is live-true! |
| `p16` | `Render/Xhtml/Interwiki.php:63` | Unknown site returns `$text` unescaped HTML | `p16-interwiki-unknown-html` | **DIVERGENCE** | Residue adjacent to X44 |
| `p17` | `Render/Xhtml/Url.php:102-105` | Suppresses explicit `target` on `#foo` | `p17-url-star-hash` | **DIVERGENCE** | Concurrent (inline); live keeps `target` |
| `p18` | `Render/Xhtml/Email.php:29` | Zero HTML escaping on `wiki-email` output | `p18-email-html` | **DIVERGENCE** | Uncovered family (`Email`) |
| `p19` | `Render/Xhtml/Email.php:29` | Bytewise `strrev` + raw invalid UTF-8 emission | `p19-email-utf8` | **DIVERGENCE** | `strrev` CONFIRMED, UTF-8 subst DIVERGENCE |
| `p20` | `Render/Xhtml/Gallery.php:88-91` | Unreset `$target` leaks across rows | `p20-gallery-target-leak` | **DIVERGENCE** | Live emits `with-lb`, no leak |
| `p21` | `Parse/Default/Date.php:56-62` | Attribute loop overwrites `timestamp` | `p21-date-ts-override` | **CONFIRMED** | Override bug is live-true |
| `p22` | `Render/Xhtml/Date.php:54-62` | `encodeFormat` forges `%FF` from ASCII `@@123@@` | `p22-date-at-forge` | **DIVERGENCE** | Cross-rule (`Raw` × `Date`) |
| `p23` | `Render/Xhtml/Div.php:44` | Unescaped attribute value (`"`) breaks HTML | `p23-div-attr-unesc` | **DIVERGENCE** | Residue adjacent to REFCORR2 |
| `p24` | `Render/Xhtml/Image.php:130` | Asymmetric `^%%%[^%]+%%$` (3 `%` vs 2 `%`) typo | `p24-image-pct-typo` | **CONFIRMED** | Asymmetric 3-vs-2 `%` typo is live-true! |
| `p25` | `Render/Xhtml/Image.php:125` | `\.(png\|jpg\|gif)` omits `jpeg` -> forced resize | `p25-image-jpeg-resize` | **CONFIRMED** | `.jpeg` forced resize is live-true! |
| `p26` | `Parse/Default/Size.php:48` | Tempered `(?!\[\[size\s)` breaks invalid inner | `p26-size-invalid-inner` | **DIVERGENCE** | Concurrent (interact) |
| `p27` | `Parse/Default/Raw.php:50` | Unclosed `@@@` strips via `max(0, run - 4)` | `p27-raw-triple-open-only` | **DIVERGENCE** | Concurrent (rawhead) |
| `p28` | `Parse/Default/Iftags.php:63,74` | `preg_split` trailing comma creates empty `anyTag` | `p28-iftags-trail-comma` | **CONFIRMED** | Uncovered family (`Iftags`); bug is live-true |
| `p29` | `Render/Xhtml/Freelink.php:52,Url.php:108` | Bare `htmlspecialchars` escapes `'` | `p29-apos-freelink-url` | **SETTLED-IN-UPDATES** | `updates/REPORT-HTMLCHARS.md` |
| `p30` | `Parse/Default/List.php:259,362` | Missing `/i` on `[[ul`/`[[ol`/`[[li` explicit blocks | `p30-listblocks-upper` | **DIVERGENCE** | Uncovered; falsifies `listblocks/SECTION.md:6` |
| `p31` | `Parse/Default/Div.php:49` | Mandatory `\n` after `]]` leaves same-line literal | `p31-div-sameline` | **CONFIRMED** | Residue adjacent to REFCORR2 |
| `p32` | `Parse/Default/Blockquote.php:54,88` | Outer `\n(>).*\n` deletes lone `>nospace` | `p32-bq-lone-nospace` | **CONFIRMED** | Uncovered family (`Blockquote`); live-true |

### 3.2 Summary Table — Batch 2 (`f01`–`f10`, `x01`–`x10`) & Batch 3 (`b3-*`)

| ID | Rule(s) Tested | Saved Source (`repr`) | Live Probe (`muse-probe-agy-suspect-...`) | Verdict | Pin / Discovery |
|---|---|---|---|---|---|
| `f01` | `Email` render | `[a@b.com éé]` | `f01-email-ee` | **DIVERGENCE** | Proves bytewise `strrev` (`A9 [C3 A9] C3` -> `\ufffdé\ufffd`) |
| `f02` | `Email` render | `[a@b.com a'b&c"d]` | `f02-email-apos-amp` | **DIVERGENCE** | Pins `ENT_NOQUOTES` (`&amp;`, raw `"` & `'`) |
| `f03` | `Freelink` parse | `[[[äöüß ñ ç ž ąćęłńóśźż café123]]]` | `f03-freelink-translit` | **DIVERGENCE** | Pins missing `[A-Za-z0-9]` passthrough in `freelink_transliterate` |
| `f04` | `List` explicit | `[[UL]]\n[[LI]]Case[[/li]]\n[[/ul]]` | `f04-ul-upper-open` | **DIVERGENCE** | Live emits unclosed `<ul>\n<li>Case<br />` |
| `f05` | `List` explicit | `[[ul]]\n[[li]]Case[[/LI]]\n[[/UL]]` | `f05-ul-upper-close` | **DIVERGENCE** | Live closes `<ul>\n<li>Case</li>\n</ul>\n<br />` |
| `f06` | `List` explicit | `[[UL]]\n[[LI]]A[[/LI]]\n[[LI]]B[[/LI]]\n[[/UL]]\n\nAFTER` | `f06-ul-upper-after` | **DIVERGENCE** | `AFTER` absorbed into `<li>B`; `</li>\n</ul>` at EOF |
| `f07` | `Modulepre` + `Module654` | `[[MODULE654 css]]tail` | `f07-modulepre-upper-tail` | **CONFIRMED** | Case-sensitive `Modulepre` doesn't fire here either |
| `f08` | `Iftags` | `A [[iftags ,-foo]]KEPT[[/iftags]] B` | `f08-iftags-lead-comma` | **CONFIRMED** | Symmetric leading-comma drop (`<p>A B</p>`) |
| `f09` | `Div` render | `[[div data-x="a&b<c>d'e\"f"]]\nhi\n[[/div]]` | `f09-div-attr-escapes` | **DIVERGENCE** | Pins `ENT_COMPAT, 'UTF-8'` (`&amp; &lt; &gt; ' &quot;`) |
| `f10` | `Interwiki` render | `[nosuchwiki:Mallard O'Brien & <b>x</b>]` | `f10-interwiki-unknown-apos` | **DIVERGENCE** | Pins `ENT_COMPAT, 'UTF-8'` (`O'Brien &amp; &lt;b&gt;x&lt;/b&gt;`) |
| `x01` | `Raw` × `Interwiki` | `[wikipedia:X a@@@@b]` | `x01-raw-empty-interwiki` | **DIVERGENCE** | Live `@@@@` emits `\xFF1\xFF` -> triggers X44 rejection! |
| `x02` | `Raw` × `Date` | `[[date 0 format="a@@raw@@b"]] and [[date 0 format="a@@@@b"]]` | `x02-raw-in-date` | **DIVERGENCE** | Live emits `%FF1%FF` & `%FF2%FF`; ref emits `format_ab` on 2nd |
| `x03` | `Url` × `Email` | `[a@b.com http://example.com]` | `x03-email-url-label` | **DIVERGENCE** | Over-claim **CONFIRMED**; live substitutes `\xFF3\xFF` -> `3` |
| `x04` | `Email` parse | `[a@b.com [x] label]` | `x04-email-bracket-label` | **CONFIRMED** | Both admit `[` and stop at `]`: `moc.b|a#x[</span> label]` |
| `x05` | `Raw` × `Email` | `[a@b.com @@raw@@]` | `x05-email-raw-label` | **DIVERGENCE** | Over-claim **CONFIRMED**; live substitutes `\xFF1\xFF` -> `1` |
| `x06` | `Raw` × `Colortext` | `##@@red@@|hello##` | `x06-color-raw-spec` | **DIVERGENCE** | Live renders `<span>red</span>`; ref leaks raw `\xff0\xff` |
| `x07` | `Raw` × `Blockquote` | `A\n\n>@@hello@@\n\nB` | `x07-bq-raw-nospace` | **CONFIRMED** | Cross-rule deletion of `>\xFFn\xFF` line is live-true |
| `x08` | `Raw` × `Div` | `[[div data-x="a@@b@@c"]]\nhi\n[[/div]]` | `x08-div-raw-attr` | **DIVERGENCE** | Live clears `\xFF`-bearing attr to `data-x=""`; ref leaks `a\xff0\xffc` |
| `x09` | `Raw` × `Deflist` | `: @@@@ : def` | `x09-deflist-raw-empty` | **CONFIRMED** | Empty raw term omits `<dt>` on both (`<dl>\n<dd>def</dd>\n</dl>`) |
| `x10` | `Url` render | `[*mailto:a@b.com mail] and [#foo plain]` | `x10-url-star-mailto` | **DIVERGENCE** | Live keeps `target="_blank"` on starred `mailto:` too |
| `b3-1` | `List` explicit | `[[ul]]\n[[LI]]A[[/LI]]\n[[/ul]]\n\nAFTER` | `b3-ul-mixed-inner` | **DIVERGENCE** | `[[LI]]...[[/LI]]` parsed inside `[[ul]]`; ref treats as degraded body |
| `b3-2` | `List` explicit | `[[ol]]\n[[li]]Case[[/LI]]\n[[/OL]]` | `b3-ol-upper-close` | **DIVERGENCE** | `<ol><li>Case</li></ol><br />` on live; ref literal |
| `b3-3` | `Module654` | `[[MODULE654 unknownmod]]\nbody\n[[/module]]` | `b3-mod654-upper-body` | **CONFIRMED** | With non-empty `body`, `[[/module]]` consumed on both |
| `b3-4` | `Raw` × `Div` | `[[div class="a@@b@@c" id="a@@b@@c"]]\nhi\n[[/div]]` | `b3-div-raw-class` | **DIVERGENCE** | Live emits `<div id="" class="">`; ref leaks `a\xff0\xffc` + `u-` |

---

### 3.3 Detailed Records: Batch 1 (`p01`–`p32`)

- **p01-fffd** (`Render/Xhtml.php:74-87`): `$new_delim = htmlspecialchars("\xFF", ENT_COMPAT | ENT_SUBSTITUTE)` (`EF BF BD`) + `str_replace($new_delim, "\xFF", ...)` turns literal U+FFFD into `\xFF`.
  - Predictions: Live strips/corrupts U+FFFD vs preserves U+FFFD literally.
  - Probe: `muse-probe-agy-suspect-p01-fffd` | SRC: `'before \ufffd after'`
  - LIVE: `'<p>before after</p>'` | REF: `'Error: Call to a member function token() on null'`
  - Verdict: **SETTLED-IN-UPDATES** (`updates/REPORT-UFFFD.md` `C-UFFFD-1` / `R-UFFFD-1`). Live deletes mid-text U+FFFD via `pre()` conversion + tolerant recovery; `ref-php` loop crashes on null token lookup.

- **p02-uu-pair** (`Text/Wiki.php:963-972`): `preg_replace_callback("/$d$d(.*?)$d$d/s", strip_tags)` where `$d = utf8_encode("\xFC")` = `ü` (`0xC3 0xBC`).
  - Predictions: Live strips `üü...üü` and inner `<strong>` vs preserves them literally.
  - Probe: `muse-probe-agy-suspect-p02-uu-pair` | SRC: `'a üü**bold**üü b'`
  - LIVE: `'<p>a üü<strong>bold</strong>üü b</p>'` | REF: `'<p>a bold b</p>\n\n'`
  - Verdict: **DIVERGENCE** | Diff bytes: live retains `üü` and `<strong>`/`</strong>`, ref deletes `üü` and strips tags.
  - Minimal fix (not applied): Remove `Text/Wiki.php:962-972` `üü...üü` `strip_tags` post-pass.

- **p03-freelink-cafe** (`Parse/Default/Freelink.php:698-709`): `freelink_transliterate` iterates UTF-8 chars, keeping only `['#', ':', '/', ' ', '_', '-']` and `$map` entries, replacing ASCII letters `'c'`, `'a'`, `'f'` with `' '`.
  - Predictions: Live emits `href="/cafe"` vs `ref-php`'s `/e`.
  - Probe: `muse-probe-agy-suspect-p03-freelink-cafe` | SRC: `'[[[café]]]'`
  - LIVE: `'<p><a class="newpage" href="/cafe">café</a></p>'` | REF: `'<p><a class="newpage" href="/e">café</a></p>\n\n'`
  - Verdict: **DIVERGENCE** | Diff bytes: `/cafe` vs `/e`.
  - Minimal fix (not applied): Add `ctype_alnum($ch)` (or `preg_match('/^[A-Za-z0-9]$/', $ch)`) pass-through at `Parse/Default/Freelink.php:700` (and in `LinkRules.lean:989`).

- **p04-freelink-polish** (`Parse/Default/Freelink.php:354,698-709` vs `WDStringUtils.php:44`): `WDStringUtils::$CONVERT_ARRAY` has `'Ł'=>'K'`, whereas `freelink_transliterate` has `'Ł'=>'l'` (354) and drops ASCII `'d'`.
  - Predictions: Live emits `/lodz`, `/kodz`, or `/lo-z`.
  - Probe: `muse-probe-agy-suspect-p04-freelink-polish` | SRC: `'[[[Łódź]]]'`
  - LIVE: `'<p><a class="newpage" href="/lodz">Łódź</a></p>'` | REF: `'<p><a class="newpage" href="/lo-z">Łódź</a></p>\n\n'`
  - Verdict: **DIVERGENCE** | Diff bytes: `/lodz` vs `/lo-z`.
  - Minimal fix (not applied): Same ASCII `[A-Za-z0-9]` pass-through at `Parse/Default/Freelink.php:700` (`Ł->l` and `ó->o`, `ź->z` in `$map` already match live!).

- **p05-tabview-attr** (`Parse/Default/Tabview.php:62-65,93`, `Render/Xhtml/Tabview.php:46-47`): `$matches[1] . $matches[1]` emits attribute string twice as literal prose, and renderer never uses `$args['class']`.
  - Predictions: Live fixes attr rendering vs preserves double `class="foo"` prose + bare `class="yui-navset"`.
  - Probe: `muse-probe-agy-suspect-p05-tabview-attr` | SRC: `'[[tabview class="foo"]]\n[[tab A]]\nbody\n[[/tab]]\n[[/tabview]]'`
  - LIVE: `'class=&quot;foo&quot; class=&quot;foo&quot;\n<script type="text/javascript" src="https://d3g0gp89917ko0.cloudfront.net/v--1e049c54eb7c/common--javascript/yahooui/tabview-min.js"></script>\n<div id="wiki-tabview-6624df868db6b1386cef8d729fc63755" class="yui-navset">\n...\n<div id="wiki-tab-0-0">\n<p>body</p>\n</div>\n</div>\n</div>\n...'` | REF: `'<p>class=&quot;foo&quot; class=&quot;foo&quot;<script ...></script>\n<script ...></script><div id="wiki-tabview-0" class="yui-navset">...<div id="wiki-tab-0-0"><p>body</p>\n\n</div></div></div><script ...>'`
  - Verdict: **CONFIRMED** (Stage 2 unwraps `<p>` and rewrites asset/id wrapper; exact `class=&quot;foo&quot; class=&quot;foo&quot;` prose bug and ignored `class` are live-true).

- **p06-deflist-raw-term** (`Parse/Default/Deflist.php:111,131-137`): `termRendersEmpty` strips ALL `/\xFF\d+\xFF/` assuming tokens in terms render empty, dropping `<dt>` for `: @@term@@ : definition`.
  - Predictions: Live emits `<dt><span ...>term</span></dt>` vs omits `<dt>`.
  - Probe: `muse-probe-agy-suspect-p06-deflist-raw-term` | SRC: `': @@term@@ : definition'`
  - LIVE: `'<dl>\n<dt><span style="white-space: pre-wrap;">term</span></dt>\n<dd>definition</dd>\n</dl>'` | REF: `'<dl>\n<dd>definition</dd>\n</dl>\n'`
  - Verdict: **DIVERGENCE** | Diff bytes: live emits `<dt><span style="white-space: pre-wrap;">term</span></dt>\n`, ref omits `<dt>` completely.
  - Minimal fix (not applied): Check `Comment` token rule / empty token content in `termRendersEmpty` (`Deflist.php:131-137`), keeping non-empty tokens (`Raw` with text != `''` when stripped — see `x09`!).

- **p07-deflist-blank-merge** (`Parse/Default/Deflist.php:57`): Lookahead `(?!(: |\n))` stops only if `\n` is NOT followed by another `: ` or `\n`, merging blank-line-separated items into one `<dl>`.
  - Predictions: Live merges into 1 `<dl>` vs splits into 2 `<dl>`s.
  - Probe: `muse-probe-agy-suspect-p07-deflist-blank-merge` | SRC: `': t1 : d1\n\n: t2 : d2'`
  - LIVE: `'<dl>\n<dt>t1</dt>\n<dd>d1</dd>\n<dt>t2</dt>\n<dd>d2</dd>\n</dl>'` | REF: `'<dl>\n<dt>t1</dt>\n<dd>d1</dd>\n<dt>t2</dt>\n<dd>d2</dd>\n</dl>\n'`
  - Verdict: **CONFIRMED**.

- **p08-strong-quad-follow** (`Parse/Default/Strong.php:64`): Alternation `([^\s\n](?:.*[^\s\n])?|)` puts non-empty before empty, turning `**** x **y**` into `<strong>** x **y</strong>`.
  - Predictions: Live wraps `** x **y` vs consumes `****` empty leaving `x <strong>y</strong>`.
  - Probe: `muse-probe-agy-suspect-p08-strong-quad-follow` | SRC: `'**** x **y**'`
  - LIVE: `'<p>x <strong>y</strong></p>'` | REF: `'<p><strong>** x **y</strong></p>\n\n'`
  - Verdict: **DIVERGENCE** | Diff bytes: `<p>x <strong>y</strong></p>` vs `<p><strong>** x **y</strong></p>\n\n`.
  - Minimal fix (not applied): Put empty alternative first `/(?:\*\*\*\*|\*\*([^\s\n](?:.*[^\s\n])?)\*\*)/U` (or `/\*\*(|[^\s\n](?:.*[^\s\n])?)\*\*/U`, matching `Underline`/`Superscript`/`Subscript`) in `Parse/Default/Strong.php:64`.

- **p09-color-invalid-unesc** (`Parse/Default/Colortext.php:50` & `Render/Xhtml/Colortext.php:72`): Invalid color restores `'##' . $raw . '|'` directly at render time after `Xhtml::pre()`, emitting raw HTML.
  - Predictions: Live escapes `##&lt;i&gt;|hello##` vs injects raw `<i>` tag.
  - Probe: `muse-probe-agy-suspect-p09-color-invalid-unesc` | SRC: `'##<i>|hello##'`
  - LIVE: `'<p>##&lt;i&gt;|hello##</p>'` | REF: `'<p>##<i>|hello##</p>\n\n'`
  - Verdict: **DIVERGENCE** | Diff bytes: `&lt;i&gt;` vs `<i>`.
  - Minimal fix (not applied): Restrict `Parse/Default/Colortext.php:50` color pattern to `/##([A-Za-z0-9#(),\- \t]+)\|(.+?)##/` (matching live's `normalizeColor` admission set and excluding `\xFF` and `<`/`>`).

- **p10-color-invalid-hoist** (`Parse/Default/Colortext.php:50` + `Tighten.php:108`): Invalid color tokens undergo `Tighten` space hoisting (`x##a!b| hello ##y` -> `x ##a!b|hello## y`).
  - Predictions: Live keeps inner spaces (`x##a!b| hello ##y`) vs hoists to `x ##a!b|hello## y`.
  - Probe: `muse-probe-agy-suspect-p10-color-invalid-hoist` | SRC: `'x##a!b| hello ##y'`
  - LIVE: `'<p>x##a!b| hello ##y</p>'` | REF: `'<p>x ##a!b|hello## y</p>\n\n'`
  - Verdict: **DIVERGENCE** | Diff bytes: `x##a!b| hello ##y` vs `x ##a!b|hello## y`.
  - Minimal fix (not applied): Same parse-time color class validation in `Parse/Default/Colortext.php:50` (fixes `p09`, `p10`, and `x06` simultaneously).

- **p11-module-upper-nested** (`Parse/Default/Module.php:86-87`): Rewrites `/^\[\[module/` (case-sensitive!) inside `/i` loop -> uppercase `[[MODULE` stops the loop unchanged without triggering `Module654`.
  - Predictions: Live claims `[[MODULE outer]]` vs leaves all 3 lines literal.
  - Probe: `muse-probe-agy-suspect-p11-module-upper-nested` | SRC: `'[[MODULE outer]]\n[[module inner]]\n[[/module]]'`
  - LIVE: `'<p>[[MODULE outer]]<br />\n[[module inner]]<br />\n[[/module]]</p>'` | REF: identical modulo `\n\n`.
  - Verdict: **CONFIRMED**.

- **p12-module654-upper-empty** (`Parse/Default/Module654.php:52`, `Modulepre.php:62`): `Module.php:53` fixed empty-body closer consumption (`(.+?)`), but `Module654.php:52` kept `(.*?)` (and `Modulepre::process` line 62 rewrites only lowercase `module654`).
  - Predictions: Live preserves `<p>[[/module]]</p>` vs consumes `[[/module]]`.
  - Probe: `muse-probe-agy-suspect-p12-module654-upper-empty` | SRC: `'[[MODULE654 unknownmod]]\n[[/module]]'`
  - LIVE: `'<div class="error-block">[[module <em>unknownmod</em>]] No such module, please <a href="https://www.wikidot.com/doc:modules" target="_blank">check available modules</a> and fix this page.</div>\n<p>[[/module]]</p>'` | REF: lacks `\n<p>[[/module]]</p>`.
  - Verdict: **DIVERGENCE** | Diff bytes: live emits `\n<p>[[/module]]</p>`, ref consumes `[[/module]]`.
  - Minimal fix (not applied): Change `(?:(.*?)\[\[\/module\]\])?` to `(?:(.+?)\[\[\/module\]\])?` in `Parse/Default/Module654.php:52` (consistent with `b3-mod654-upper-body` and `Module.php:53`).

- **p13-rawold-trailing-apos** (`Render/Xhtml/Rawold.php:43`): Bare `htmlspecialchars` escapes trailing `'`.
  - Probe: `muse-probe-agy-suspect-p13-rawold-trailing-apos` | SRC: `"``abc'``"`
  - LIVE: `"<p>abc'</p>"` | Worktree REF: `'<p>abc&#039;</p>\n\n'`
  - Verdict: **SETTLED-IN-UPDATES** (`updates/REPORT-HTMLCHARS.md` fixed `Rawold.php` to `ENT_COMPAT, 'UTF-8'`).

- **p14-span-double-u-id** (`Parse/Default/Span.php:82`): `$args['id'] = 'u-' . $attr['id'];` even when `id` already begins with `u-` (unlike `Div::isolateId` which checks `strpos($value, 'u-') === 0`).
  - Predictions: Live keeps `id="u-foo"` vs emits `id="u-u-foo"`.
  - Probe: `muse-probe-agy-suspect-p14-span-double-u-id` | SRC: `'[[span id="u-foo"]]hi[[/span]]'`
  - LIVE: `'<p><span id="u-foo">hi</span></p>'` | REF: `'<p><span id="u-u-foo">hi</span></p>\n\n'`
  - Verdict: **DIVERGENCE** | Diff bytes: `id="u-foo"` vs `id="u-u-foo"`.
  - Minimal fix (not applied): Prefix `'u-'` in `Parse/Default/Span.php:82` only if `strpos($attr['id'], 'u-') !== 0` (matching `Div.php:81`).

- **p15-typo-dollar-unit** (`Parse/Default/Typography.php:108`): Unescaped `$` inside `/x` regex acts as end-of-line assertion rather than literal `$`.
  - Predictions: Live emits `10&#160;$` vs leaves `10 $` ordinary space while converting `10 €` to `10&#160;€`.
  - Probe: `muse-probe-agy-suspect-p15-typo-dollar-unit` | SRC: `'10 $ and 10 €'`
  - LIVE: `'<p>10 $ and 10&#160;€</p>'` | REF: `'<p>10 $ and 10&#160;€</p>\n\n'`
  - Verdict: **CONFIRMED** (live reproduces the exact `$` vs `€` bug!).

- **p16-interwiki-unknown-html** (`Render/Xhtml/Interwiki.php:63`): Unknown site `return $text;` runs before line 80 `htmlspecialchars($text)`.
  - Predictions: Live escapes `&lt;i&gt;hi&lt;/i&gt;` vs emits raw `<i>hi</i>`.
  - Probe: `muse-probe-agy-suspect-p16-interwiki-unknown-html` | SRC: `'[nosuchwiki:Mallard <i>hi</i>]'`
  - LIVE: `'<p>&lt;i&gt;hi&lt;/i&gt;</p>'` | REF: `'<p><i>hi</i></p>\n\n'`
  - Verdict: **DIVERGENCE** (residue adjacent to `updates/REPORT-X44.md`).
  - Minimal fix (not applied): Change `return $text;` to `return htmlspecialchars($text, ENT_COMPAT, 'UTF-8');` at `Render/Xhtml/Interwiki.php:63` (verified by `f10`!).

- **p17-url-star-hash** (`Render/Xhtml/Url.php:76-78,102-105`): `#` -> `javascript:;` happens before `if ($href[0] == '#') $target = '';`, so `[*# bare]` keeps `target="_blank"` while `[*#foo named]` loses it!
  - Predictions: Live suppresses `target` on `[*#foo named]` vs keeps `target="_blank"` on both.
  - Probe: `muse-probe-agy-suspect-p17-url-star-hash` | SRC: `'[*# bare] and [*#foo named]'`
  - LIVE: `'<p><a href="javascript:;" target="_blank">bare</a> and <a href="#foo" target="_blank">named</a></p>'` | REF: `'<p><a href="javascript:;" target="_blank">bare</a> and <a href="#foo">named</a></p>\n\n'`
  - Verdict: **DIVERGENCE** | Diff bytes: live has ` target="_blank"` on `#foo`, ref omits it.
  - Minimal fix (not applied): Remove lines 102-105 target suppression in `Render/Xhtml/Url.php` (confirmed also for `mailto:` by `x10`!).

- **p18-email-html** (`Render/Xhtml/Email.php:29`): Concatenates `strrev($email) . '#' . strrev($text)` with zero HTML escaping.
  - Predictions: Live escapes `&lt;i&gt;` vs injects raw `<i>` tag.
  - Probe: `muse-probe-agy-suspect-p18-email-html` | SRC: `'[a@b.com >i<]'`
  - LIVE: `'<p><span class="wiki-email">moc.b|a#&lt;i&gt;</span></p>'` | REF: `'<p><span class="wiki-email">moc.b|a#<i></span></p>\n\n'`
  - Verdict: **DIVERGENCE** | Diff bytes: `&lt;i&gt;` vs `<i>`.
  - Minimal fix (not applied): Wrap output in `htmlspecialchars(..., ENT_NOQUOTES | ENT_SUBSTITUTE, 'UTF-8')` at `Render/Xhtml/Email.php:29` (see `f01, f02`).

- **p19-email-utf8** (`Render/Xhtml/Email.php:29`): Bytewise `strrev("café")` (`63 61 66 C3 A9`) produces `A9 C3 66 61 63` (invalid UTF-8 bytes before `fac`), causing `json_encode` to fail in `batch.php`.
  - Predictions: Live reverses by character (`éfac`), replaces invalid reversed bytes (`\ufffd\ufffdfac`), or drops output.
  - Probe: `muse-probe-agy-suspect-p19-email-utf8` | SRC: `'[a@b.com café]'`
  - LIVE: `'<p><span class="wiki-email">moc.b|a#\ufffd\ufffdfac</span></p>'` (UTF-8 `\xEF\xBF\xBD\xEF\xBF\xBDfac`) | REF (raw `transform.php`): `b'<p><span class="wiki-email">moc.b|a#\xa9\xc3fac</span></p>\n\n\n'` (hex ending `6d6f632e627c6123a9c3666163...`)
  - Verdict: **DIVERGENCE** (bytewise `strrev` confirmed, render diverges by emitting raw `\xA9\xC3` instead of `\xEF\xBF\xBD\xEF\xBF\xBD`).
  - Minimal fix (not applied): Wrap with `htmlspecialchars(..., ENT_NOQUOTES | ENT_SUBSTITUTE, 'UTF-8')` at `Render/Xhtml/Email.php:29`.

- **p20-gallery-target-leak** (`Render/Xhtml/Gallery.php:88-91`): `$target = 'target="_blank"';` is set when `$src[0] == '*'`, never reset on later loop rows!
  - Predictions: Live leaks `target="_blank"` onto row 2 vs keeps row 2 `target`-free.
  - Probe: `muse-probe-agy-suspect-p20-gallery-target-leak` | SRC: `'[[gallery]]\n: *https://example.com/1.png\n: https://example.com/2.png\n[[/gallery]]'`
  - LIVE: row 1 `<a href="https://example.com/1.png" target="_blank">`, row 2 `<a href="https://example.com/2.png" class="with-lb">` (no `target="_blank"`) | REF: both rows carry `target="_blank"`.
  - Verdict: **DIVERGENCE** | Diff bytes: live emits `class="with-lb"` on row 2 with no `target="_blank"`; ref leaks `target="_blank"`.
  - Minimal fix (not applied): Initialize `$target = '';` at top of `foreach ($sources as $row)` in `Render/Xhtml/Gallery.php:71` (and lightbox class handling if within Stage 1 scope).

- **p21-date-ts-override** (`Parse/Default/Date.php:56-62`): `$options['timestamp']` from positional argument is blindly overwritten by `timestamp="0"` in `getAttrs`.
  - Predictions: Live lets `timestamp="0"` overwrite `86400` vs preserves positional `86400`.
  - Probe: `muse-probe-agy-suspect-p21-date-ts-override` | SRC: `'[[date  timestamp="0"]] and [[date 86400 timestamp="0"]]'`
  - LIVE: `'<p><span class="odate time_0">01 Jan 1970 00:00</span> and <span class="odate time_0">01 Jan 1970 00:00</span></p>'` | REF: identical modulo `\n\n`.
  - Verdict: **CONFIRMED**.

- **p22-date-at-forge** (`Render/Xhtml/Date.php:54-62` + `Parse/Default/Raw.php`): `Date::encodeFormat` maps literal ASCII `@@123@@` to `%FF123%FF` while `Raw.php` emits literal `@@123@@` for `@@@@@@123@@@@@@`.
  - Predictions: Live emits `%40` for literal `@` vs `%FF123%FF`.
  - Probe: `muse-probe-agy-suspect-p22-date-at-forge` | SRC: `'[[date 0 format="@@@@@@123@@@@@@"]]'`
  - LIVE: `'<p><span class="odate time_0 format_%FF1%FF%40%40123%FF2%FF%40%40">01 Jan 1970 00:00</span></p>'` | REF: `'<p><span class="odate time_0 format_%FF123%FF">01 Jan 1970 00:00</span></p>\n\n'`
  - Verdict: **DIVERGENCE** (dual root cause: live `Raw` tokenizes `@@@@` inside `@@@@@@` via `/(?<!@)@@(.*?)@@/`, and live `Date` encodes literal `@@` as `%40%40`, never `%FF`).
  - Minimal fix (not applied): Replace `Raw.php:27-120` scanner with `/(?<!@)@@(.*?)@@/` (`p27, x01, x02`) AND remove lines 54-63 of `Render/Xhtml/Date.php` so `encodeFormat` encodes `\xFF` (`255`) as `%FF` and `@` (`64`) as `%40`.

- **p23-div-attr-unesc** (`Render/Xhtml/Div.php:44`): `'<div' . ' ' . $key . '="' . $value . '"'` never HTML-escapes `$value`.
  - Predictions: Live escapes `a&quot;b` vs emits raw `data-x="a"b"`.
  - Probe: `muse-probe-agy-suspect-p23-div-attr-unesc` | SRC: `'[[div data-x="a\\"b"]]\nhi\n[[/div]]'`
  - LIVE: `'<div data-x="a&quot;b">\n<p>hi</p>\n</div>'` | REF: `'<div data-x="a"b"><p>hi</p>\n\n</div>'`
  - Verdict: **DIVERGENCE** (residue adjacent to `updates/REPORT-REFCORR2.md`).
  - Minimal fix (not applied): Escape `$value` with `htmlspecialchars($value, ENT_COMPAT, 'UTF-8')` at `Render/Xhtml/Div.php:44` (matching `Span.php:52`, confirmed by `f09`).

- **p24-image-pct-typo** (`Render/Xhtml/Image.php:130`): `preg_match("/^%%%[^%]+%%$/", $src)` has 3 leading `%` vs 2 trailing `%`, leaving `%%foo%%` treated as a local file attachment!
  - Predictions: Live treats `%%%foo%%` literally and `%%foo%%` as local resized vs vice versa.
  - Probe: `muse-probe-agy-suspect-p24-image-pct-typo` | SRC: `'A [[image %%%foo%%]] B [[image %%foo%%]] C'`
  - LIVE: `'A <img src="%%%foo%%" alt="%%%foo%%" class="image" /> B <a href="https://sandbox-for-codex.wdfiles.com/local--files/muse-probe-agy-suspect-p24-image-pct-typo/%%foo%%"><img src="https://sandbox-for-codex.wdfiles.com/local--resized-images/muse-probe-agy-suspect-p24-image-pct-typo/%%foo%%/medium.jpg" alt="%%foo%%" class="image" /></a> C'` | REF: identical modulo serving host + `<p>` wrap.
  - Verdict: **CONFIRMED** (the 3-vs-2 `%` typo is literally in production live!).

- **p25-image-jpeg-resize** (`Render/Xhtml/Image.php:125`): `preg_match('/\.(png|jpg|gif)$/i', $src)` omits `jpeg`, forcing `size = "medium"` on `.jpeg` images.
  - Predictions: Live keeps `.jpg` unresized while forcing `.jpeg` to `/medium.jpg` vs treats both identically.
  - Probe: `muse-probe-agy-suspect-p25-image-jpeg-resize` | SRC: `'[[image page/a.jpg]] and [[image page/a.jpeg]]'`
  - LIVE: `<img src="https://sandbox-for-codex.wdfiles.com/local--files/page/a.jpg" alt="a.jpg" class="image" /> and <a href="https://sandbox-for-codex.wdfiles.com/local--files/page/a.jpeg"><img src="https://sandbox-for-codex.wdfiles.com/local--resized-images/page/a.jpeg/medium.jpg" alt="a.jpeg" class="image" /></a>` | REF: identical modulo serving host.
  - Verdict: **CONFIRMED**.

- **p26-size-invalid-inner** (`Parse/Default/Size.php:48`): Tempered `(?!\[\[size\s)` blocks outer match when inner `[[size bad]]` is invalid, whereas fossil `((?:(?R)|.)*?)` lets outer match span the inner block.
  - Predictions: Live renders outer `<span style="font-size:large;">` around literal `[[size bad]]inner[[/size]]` vs leaves whole construct literal.
  - Probe: `muse-probe-agy-suspect-p26-size-invalid-inner` | SRC: `'[[size large]]outer[[size bad]]inner[[/size]]tail[[/size]]'`
  - LIVE: `'<p><span style="font-size:large;">outer[[size bad]]inner[[/size]]tail</span></p>'` | REF: `'<p>[[size large]]outer[[size bad]]inner[[/size]]tail[[/size]]</p>\n\n'`
  - Verdict: **DIVERGENCE** | Diff bytes: live wraps outer in `<span style="font-size:large;">...</span>`, ref keeps outer literal.
  - Minimal fix (not applied): Use recursive body pattern `((?:(?R)|.)*?)` (plus inside-out re-scan/elision only when a valid inner pair is emptied) in `Parse/Default/Size.php:48`.

- **p27-raw-triple-open-only** (`Parse/Default/Raw.php:43-53`): Treats any unclosed `@` run of length `>= 3` as literal `@` count `max(0, run - 4)`, deleting `@@@`.
  - Predictions: Live keeps `A @@@hello B` vs deletes `@@@` to `A hello B`.
  - Probe: `muse-probe-agy-suspect-p27-raw-triple-open-only` | SRC: `'A @@@hello B'`
  - LIVE: `'<p>A @@@hello B</p>'` | REF: `'<p>A hello B</p>\n\n'`
  - Verdict: **DIVERGENCE** | Diff bytes: live retains `@@@`, ref deletes `@@@`.
  - Minimal fix (not applied): Replace `Raw.php:27-120` with `/(?<!@)@@(.*?)@@/` (no deletion of unclosed `@@@`).

- **p28-iftags-trail-comma** (`Parse/Default/Iftags.php:63,74`): `preg_split(';[, ]+;', trim($matches[1]))` turns trailing `,` into empty string `$anyTags[] = ""`, dropping the body on untagged pages despite `-foo` succeeding.
  - Predictions: Live keeps `KEPT` vs suppresses `KEPT`.
  - Probe: `muse-probe-agy-suspect-p28-iftags-trail-comma` | SRC: `'A [[iftags -foo,]]KEPT[[/iftags]] B'`
  - LIVE: `'<p>A B</p>'` | REF: `'<p>A B</p>\n\n'`
  - Verdict: **CONFIRMED** (also verified on leading comma by `f08`).

- **p29-apos-freelink-url** (`Render/Xhtml/Freelink.php:52`, `Render/Xhtml/Url.php:108`): Bare `htmlspecialchars` escapes `'` to `&#039;`.
  - Probe: `muse-probe-agy-suspect-p29-apos-freelink-url` | SRC: `"[[[nonexist|it's]]] [https://example.com it's]"`
  - LIVE: `'<p><a class="newpage" href="/nonexist">it\'s</a> <a href="https://example.com">it\'s</a></p>'` | Worktree REF: `'<p><a class="newpage" href="/nonexist">it&#039;s</a> <a href="https://example.com">it&#039;s</a></p>\n\n'`
  - Verdict: **SETTLED-IN-UPDATES** (`updates/REPORT-HTMLCHARS.md` fixed both renderers to `ENT_COMPAT, 'UTF-8'`).

- **p30-listblocks-upper** (`Parse/Default/List.php:259,362`): Explicit list block regexes omit `/i`; `listblocks/SECTION.md:6` falsely asserted uppercase `[[UL]]`/`[[LI]]` stay literal without probing live.
  - Predictions: Live leaves `[[UL]]`/`[[LI]]` literal vs parses HTML list markup.
  - Probe: `muse-probe-agy-suspect-p30-listblocks-upper` | SRC: `'[[UL]]\n[[LI]]Case[[/LI]]\n[[/UL]]'`
  - LIVE: `'<ul>\n<li>Case<br />'` (raw `#page-content` lacks closing `</li></ul>`) | REF: `'<p>[[UL]]<br />\n[[LI]]Case[[/LI]]<br />\n[[/UL]]</p>\n\n'`
  - Verdict: **DIVERGENCE** | Diff bytes: live emits `<ul>\n<li>Case<br />`, ref leaves all markers literal.
  - Minimal fix (not applied): Add `/i` case-insensitive tag/item matching (`[[ul]]`/`[[ol]]`/`[[li]]` and closers) in `Parse/Default/List.php:259,362`, replicating the exact asymmetric case check between raw-cased opener stack and lowercased closer seen across `p30, f04, f05, f06, b3-ul-mixed-inner, b3-ol-upper-close`.

- **p31-div-sameline** (`Parse/Default/Div.php:49`): Mandatory `\n` after opener `]]` leaves same-line `[[div]]hello[[/div]]` literal.
  - Predictions: Live renders `<div>hello</div>` vs literal `<p>[[div]]hello[[/div]]</p>`.
  - Probe: `muse-probe-agy-suspect-p31-div-sameline` | SRC: `'[[div]]hello[[/div]]'`
  - LIVE: `'<p>[[div]]hello[[/div]]</p>'` | REF: `'<p>[[div]]hello[[/div]]</p>\n\n'`
  - Verdict: **CONFIRMED**.

- **p32-bq-lone-nospace** (`Parse/Default/Blockquote.php:54,88,108`): Outer regex `\n((\>).*\n)` claims `>nospace`, inner regex `=^(\>+) (.*\n)=Ums` fails on missing space, returning `"\n\n"` and deleting `>nospace`.
  - Predictions: Live renders `>nospace` as `<p>&gt;nospace</p>` vs silently deletes `>nospace`.
  - Probe: `muse-probe-agy-suspect-p32-bq-lone-nospace` | SRC: `'A\n\n>nospace\n\nB'`
  - LIVE: `'<p>A</p>\n<p>B</p>'` | REF: `'<p>A</p>\n\n<p>B</p>\n\n'`
  - Verdict: **CONFIRMED** (verified also on `>@@hello@@` in `x07`).

---

### 3.4 Detailed Records: Batch 2 (`f01`–`f10`, `x01`–`x10`) & Batch 3 (`b3-*`)

- **f01-email-ee** (`muse-probe-agy-suspect-f01-email-ee`) | SRC: `'[a@b.com éé]'` (`C3 A9 C3 A9`)
  - LIVE: `'<p><span class="wiki-email">moc.b|a#é</span></p>'` | REF (`transform.php`): `b'<p><span class="wiki-email">moc.b|a#\xa9\xc3\xa9\xc3</span></p>\n\n'` (hex `...6d6f632e627c6123a9c3a9c3...`)
  - Verdict: **DIVERGENCE** (bytewise `strrev` confirmed; live converts invalid `\xA9`/`\xC3` to `\ufffd`, `Email.php:29` emits raw invalid bytes). Fix: `ENT_NOQUOTES | ENT_SUBSTITUTE`.

- **f02-email-apos-amp** (`muse-probe-agy-suspect-f02-email-apos-amp`) | SRC: `'[a@b.com a\'b&c"d]'`
  - LIVE: `'<p><span class="wiki-email">moc.b|a#d"c&amp;b\'a</span></p>'` | REF: `'<p><span class="wiki-email">moc.b|a#d"c&b\'a</span></p>\n\n'`
  - Verdict: **DIVERGENCE** (`&amp;` vs `&`, `"` and `'` raw -> pins `ENT_NOQUOTES` in `Email.php:29`).

- **f03-freelink-translit** (`muse-probe-agy-suspect-f03-freelink-translit`) | SRC: `'[[[äöüß ñ ç ž ąćęłńóśźż café123]]]'`
  - LIVE: `'<p><a class="newpage" href="/aeoeuess-n-c-z-acelnoszz-cafe123">äöüß ñ ç ž ąćęłńóśźż café123</a></p>'` | REF: `'<p><a class="newpage" href="/aeoeuess-n-c-z-acelnoszz-e">äöüß ñ ç ž ąćęłńóśźż café123</a></p>\n\n'`
  - Verdict: **DIVERGENCE** (every non-ASCII char matches; ASCII `caf` and `123` dropped in `ref-php`). Fix: pass through `[A-Za-z0-9]` in `Freelink.php:700`.

- **f04-ul-upper-open** (`muse-probe-agy-suspect-f04-ul-upper-open`) | SRC: `'[[UL]]\n[[LI]]Case[[/li]]\n[[/ul]]'`
  - LIVE: `'<ul>\n<li>Case<br />'` | REF: `'<p>[[UL]]<br />\n[[LI]]Case[[/li]]<br />\n[[/ul]]</p>\n\n'`
  - Verdict: **DIVERGENCE**. Uppercase opener `[[UL]]` does not even close on lowercase `[[/ul]]`.

- **f05-ul-upper-close** (`muse-probe-agy-suspect-f05-ul-upper-close`) | SRC: `'[[ul]]\n[[li]]Case[[/LI]]\n[[/UL]]'`
  - LIVE: `'<ul>\n<li>Case</li>\n</ul>\n<br />'` | REF: `'<p>[[ul]]<br />\n[[li]]Case[[/LI]]<br />\n[[/UL]]</p>\n\n'`
  - Verdict: **DIVERGENCE**. Fix: match closers case-insensitively (`List.php:259,362`).

- **f06-ul-upper-after** (`muse-probe-agy-suspect-f06-ul-upper-after`) | SRC: `'[[UL]]\n[[LI]]A[[/LI]]\n[[LI]]B[[/LI]]\n[[/UL]]\n\nAFTER'`
  - LIVE: `'<ul>\n<li>A</li>\n<li>B<br />\nAFTER</li>\n</ul>'` | REF: `'<p>[[UL]]<br />\n[[LI]]A[[/LI]]<br />\n[[LI]]B[[/LI]]<br />\n[[/UL]]</p>\n\n<p>AFTER</p>\n\n'`
  - Verdict: **DIVERGENCE**. Proves `[[/UL]]` failed to close an uppercase `[[UL]]` container while `<li>`/`[[/LI]]` disappeared and `AFTER` was swallowed until EOF.

- **f07-modulepre-upper-tail** (`muse-probe-agy-suspect-f07-modulepre-upper-tail`) | SRC: `'[[MODULE654 css]]tail'`
  - LIVE: `'<p>[[MODULE654 css]]tail</p>'` | REF: `'<p>[[MODULE654 css]]tail</p>\n\n'`
  - Verdict: **CONFIRMED** (`Modulepre` requires newline/closer rewrite; same-line `tail` stays literal on both).

- **f08-iftags-lead-comma** (`muse-probe-agy-suspect-f08-iftags-lead-comma`) | SRC: `'A [[iftags ,-foo]]KEPT[[/iftags]] B'`
  - LIVE: `'<p>A B</p>'` | REF: `'<p>A B</p>\n\n'`
  - Verdict: **CONFIRMED**.

- **f09-div-attr-escapes** (`muse-probe-agy-suspect-f09-div-attr-escapes`) | SRC: `'[[div data-x="a&b<c>d\'e\\"f"]]\nhi\n[[/div]]'`
  - LIVE: `'<div data-x="a&amp;b&lt;c&gt;d\'e&quot;f">\n<p>hi</p>\n</div>'` | REF: `'<div data-x="a&b<c>d\'e"f"><p>hi</p>\n\n</div>'`
  - Verdict: **DIVERGENCE**. Fix: `htmlspecialchars($value, ENT_COMPAT, 'UTF-8')` at `Render/Xhtml/Div.php:44`.

- **f10-interwiki-unknown-apos** (`muse-probe-agy-suspect-f10-interwiki-unknown-apos`) | SRC: `"[nosuchwiki:Mallard O'Brien & <b>x</b>]"`
  - LIVE: `"<p>O'Brien &amp; &lt;b&gt;x&lt;/b&gt;</p>"` | REF: `"<p>O'Brien & <b>x</b></p>\n\n"`
  - Verdict: **DIVERGENCE**. Fix: `htmlspecialchars($text, ENT_COMPAT, 'UTF-8')` at `Render/Xhtml/Interwiki.php:63`.

- **x01-raw-empty-interwiki** (`muse-probe-agy-suspect-x01-raw-empty-interwiki`) | SRC: `'[wikipedia:X a@@@@b]'`
  - LIVE: `'<p>[wikipedia:X ab]</p>'` | REF: `'<p><a href="https://en.wikipedia.org/wiki/X" onclick="window.open(this.href, \'_blank\'); return false;">ab</a></p>\n\n'`
  - Verdict: **DIVERGENCE**. Proves `@@@@` emits `\xFFn\xFF` on live, tripping X44 `Interwiki` token-rejection.

- **x02-raw-in-date** (`muse-probe-agy-suspect-x02-raw-in-date`) | SRC: `'[[date 0 format="a@@raw@@b"]] and [[date 0 format="a@@@@b"]]'`
  - LIVE: `'<p><span class="odate time_0 format_a%FF1%FFb">01 Jan 1970 00:00</span> and <span class="odate time_0 format_a%FF2%FFb">01 Jan 1970 00:00</span></p>'` | REF: `'<p><span class="odate time_0 format_a%FF181%FFb">01 Jan 1970 00:00</span> and <span class="odate time_0 format_ab">01 Jan 1970 00:00</span></p>\n\n'`
  - Verdict: **DIVERGENCE** on 2nd span (`format_a%FF2%FFb` vs `format_ab`; counter `1` vs `181` on 1st span is harness batch-counter only).

- **x03-email-url-label** (`muse-probe-agy-suspect-x03-email-url-label`) | SRC: `'[a@b.com http://example.com]'`
  - LIVE: `'<p><span class="wiki-email">moc.b|a#3</span></p>'` | REF (raw `transform.php`): `b'<p><span class="wiki-email">moc.b|a#\xff2\xff</span></p>\n\n'`
  - Verdict: **DIVERGENCE** at render (`\xFF` -> `\ufffd` + live index `3` vs raw `\xff2\xff`), while parse token-capture of `Url` inside `Email` is **CONFIRMED**!

- **x04-email-bracket-label** (`muse-probe-agy-suspect-x04-email-bracket-label`) | SRC: `'[a@b.com [x] label]'`
  - LIVE: `'<p><span class="wiki-email">moc.b|a#x[</span> label]</p>'` | REF: `'<p><span class="wiki-email">moc.b|a#x[</span> label]</p>\n\n'`
  - Verdict: **CONFIRMED** (live `Email` permits `[` and stops at first `]`, matching `ref-php`).

- **x05-email-raw-label** (`muse-probe-agy-suspect-x05-email-raw-label`) | SRC: `'[a@b.com @@raw@@]'`
  - LIVE: `'<p><span class="wiki-email">moc.b|a#1</span></p>'` | REF (raw `transform.php`): `b'<p><span class="wiki-email">moc.b|a#\xff0\xff</span></p>\n\n'`
  - Verdict: **DIVERGENCE** at render (`1` vs raw `\xff0\xff`), parse token-capture of `Raw` inside `Email` **CONFIRMED**!

- **x06-color-raw-spec** (`muse-probe-agy-suspect-x06-color-raw-spec`) | SRC: `'##@@red@@|hello##'`
  - LIVE: `'<p>##<span style="white-space: pre-wrap;">red</span>|hello##</p>'` | REF (raw `transform.php`): `b'<p>##\xff0\xff|hello##</p>\n\n'`
  - Verdict: **DIVERGENCE**. Fix: reject `\xFF` (non-color class) in `Parse/Default/Colortext.php:50`.

- **x07-bq-raw-nospace** (`muse-probe-agy-suspect-x07-bq-raw-nospace`) | SRC: `'A\n\n>@@hello@@\n\nB'`
  - LIVE: `'<p>A</p>\n<p>B</p>'` | REF: `'<p>A</p>\n\n<p>B</p>\n\n'`
  - Verdict: **CONFIRMED** (after `Raw`, `>\xFFn\xFF` triggers `Blockquote` silent deletion).

- **x08-div-raw-attr** (`muse-probe-agy-suspect-x08-div-raw-attr`) | SRC: `'[[div data-x="a@@b@@c"]]\nhi\n[[/div]]'`
  - LIVE: `'<div data-x="">\n<p>hi</p>\n</div>'` | REF (raw `transform.php`): `b'<div data-x="a\xff0\xffc"><p>hi</p>\n\n</div>'`
  - Verdict: **DIVERGENCE**. Fix: clear `\xFF`-bearing values to `""` in `Parse/Default/Div.php` without unsetting the cleared key (distinct from initially-empty values).

- **x09-deflist-raw-empty** (`muse-probe-agy-suspect-x09-deflist-raw-empty`) | SRC: `': @@@@ : def'`
  - LIVE: `'<dl>\n<dd>def</dd>\n</dl>'` | REF: `'<dl>\n<dd>def</dd>\n</dl>\n'`
  - Verdict: **CONFIRMED** (when the `Raw` term renders empty, `<dt>` is omitted on both).

- **x10-url-star-mailto** (`muse-probe-agy-suspect-x10-url-star-mailto`) | SRC: `'[*mailto:a@b.com mail] and [#foo plain]'`
  - LIVE: `'<p><a href="mailto:a@b.com" target="_blank">mail</a> and <a href="#foo">plain</a></p>'` | REF: `'<p><a href="mailto:a@b.com">mail</a> and <a href="#foo">plain</a></p>\n\n'`
  - Verdict: **DIVERGENCE**. Fix: remove `Render/Xhtml/Url.php:102-105` target suppression.

- **b3-ul-mixed-inner** (`muse-probe-agy-suspect-b3-ul-mixed-inner`) | SRC: `'[[ul]]\n[[LI]]A[[/LI]]\n[[/ul]]\n\nAFTER'`
  - LIVE: `'<ul>\n<li>A</li>\n</ul>\n<br />\nAFTER'` | REF: `'<ul>\n<li style="list-style: none">[[LI]]A[[/LI]]</li>\n</ul><p>AFTER</p>\n\n'`
  - Verdict: **DIVERGENCE**. Fix: `/i` on `$liPattern` in `Parse/Default/List.php:362`.

- **b3-ol-upper-close** (`muse-probe-agy-suspect-b3-ol-upper-close`) | SRC: `'[[ol]]\n[[li]]Case[[/LI]]\n[[/OL]]'`
  - LIVE: `'<ol>\n<li>Case</li>\n</ol>\n<br />'` | REF: `'<p>[[ol]]<br />\n[[li]]Case[[/LI]]<br />\n[[/OL]]</p>\n\n'`
  - Verdict: **DIVERGENCE**. Fix: case-insensitive closer matching for `[[ol]]`/`[[/OL]]`/`[[li]]`/`[[/LI]]` in `Parse/Default/List.php:259,362`.

- **b3-mod654-upper-body** (`muse-probe-agy-suspect-b3-mod654-upper-body`) | SRC: `'[[MODULE654 unknownmod]]\nbody\n[[/module]]'`
  - LIVE: `'<div class="error-block">[[module <em>unknownmod</em>]] No such module, please <a href="https://www.wikidot.com/doc:modules" target="_blank">check available modules</a> and fix this page.</div>'` | REF: byte-identical.
  - Verdict: **CONFIRMED** (pins `Module654.php:52` `(.*?)` -> `(.+?)` as exact minimal fix for `p12`).

- **b3-div-raw-class** (`muse-probe-agy-suspect-b3-div-raw-class`) | SRC: `'[[div class="a@@b@@c" id="a@@b@@c"]]\nhi\n[[/div]]'`
  - LIVE: `'<div id="" class="">\n<p>hi</p>\n</div>'` | REF (raw `transform.php`): `b'<div class="a\xff0\xffc" id="u-"><p>hi</p>\n\n</div>'`
  - Verdict: **DIVERGENCE** (shows both `id`-before-`class` ordering AND `\xFF` clearing `id`/`class` to `""`, omitting `u-`).

---

## 4. Untestable / Unreachable Suspicious Constructs (10 Items)

1. **`Parse/Default/Typography.php:126-129` & `Render/Xhtml/Typography.php:27`** (`---` dash rule): Line `126` replaces `/\-\-/` BEFORE line `128` runs `/\-\-\-/`. Because `--` is eagerly consumed everywhere (`---` becomes `\xFFk\xFF` + `-`), line `128` never matches any byte sequence in `source`, and `$replacements['---']` in the renderer is dead code.
2. **`Render/Xhtml/Include.php:25-36`** (`type === 'missing'` branch): `Parse/Default/Include.php` is a pure text-expanding rule (`token-free` per `REPORT-R48.md` §2) that splices HTML/error markup directly as text and emits zero tokens, making `Include::token` unreachable.
3. **`Parse/Default/Delimiter.php:53-77`** (`/\xFF/` scanner): Live's save layer only stores valid UTF-8 characters (`saved_source_matches=true` checks), and no valid UTF-8 encoding contains `0xFF`, so `Delimiter` never matches raw authored source (while U+FFFD enters `Xhtml::pre()` only post-parse).
4. **`Render/Xhtml/Footnote.php:40-41`** (`$label`, `$refs`): Unused local assignments `$label = $options['label'];` and `$refs = Text_Wiki_Parse_Math::$equationsArray;` whose values never participate in `$out`. (Notice `$refs` does not mutate state, and reading `$options['label']` emits at most a suppressed warning.)
5. **`Render/Xhtml/Heading.php:40-41, 65-95`** (`$collapse`, `$jsOutput`, `startContent`/`endContent`): `$collapse` is hardcoded to `null` on line `40` and never reassigned, so the `onclick="hideTOC(...)"` attributes, `[+]`/`[-]` toggle links, and the `startContent`/`endContent` `<script>`/wrapper blocks are completely dead code.
6. **`Render/Xhtml/Freelink.php:62-67`** (`if ($site)` branch): After R2-LINK removed `::` cross-site parsing in `Parse/Default/Freelink.php:152,197` (`'site' => null` unconditionally), the `if ($site)` branch referencing `GlobalProperties::$URL_DOMAIN` is unreachable.
7. **`Render/Xhtml/Embed.php:40, 49`** (`$this->patterns` typo): Constructor initializes `$this->_patterns = array_merge($this->patterns, $patterns);` inside `foreach ($files as $f)`, where the class only declares `$this->patterns` (never `$this->_patterns`) and overwrites `$this->_patterns` with `$this->patterns` (`[]`) merged with `$patterns` on each file iteration — unobservable with the single `conf/wikiparser/embed/default.php` file, would discard earlier files if multiple `.php` files existed.
8. **`Render/Xhtml/Social.php:26-170`** (`'TITTLE'` typo on line `89`, `strtolower` vs original `$siteName` key mismatch on lines `156-157`): Entire renderer is unreachable because `Parse/Default/Social.php` rewrites `[[social]]` to `þmodule ...þ` rather than calling `addToken`.
9. **`Parse/Default/Url.php:183, 224`** (`(.*?)` trailing lazy group): Line `183` ends with `(.*?)` outside any quantifier requirement, which always matches `""` (`$matches[4]`), while `process()` on line `224` checks `isset($matches[6])` (which is always unset/empty).
10. **`Render/Xhtml/Table.php:77-84, 117-119` & `Render/Xhtml/Url.php:81-93, 122-124`**: `Table.php`'s `caption_start`/`caption_end` and `$rowspan > 1` are never emitted by Wikidot `Parse/Default/Table.php`; `Url.php`'s image branch is disabled by `ref-php/harness/wiki-config.php:20` (`images = false`) and `'footnote'` URLs are never emitted by `Parse/Default/Url.php`.

---

## 5. Lean 4 Specifications (`lean-ftml/LeanFtml/SuspectSpec.lean`)

- File created: [SuspectSpec.lean](file:///home/roku/.local/state/wikijump/muse-bhl/lean-ftml-antigravity-suspect/lean-ftml/LeanFtml/SuspectSpec.lean) (0 `sorry`, 0 `native_decide`, 1 local `set_option maxRecDepth 8192 in` on `diverges_p03_p04_f03_freelink_transliterate` matching repo precedent for table lookup reduction).
- Build check: `cd lean-ftml && export PATH="$HOME/.elan/bin:$PATH" && LAKE_JOBS=1 lake build LeanFtml.SuspectSpec` -> `Build completed successfully (59 jobs)`.
- Axiom audit (`lake env lean --stdin`): **32 / 32 theorems** depend strictly on `[propext, Classical.choice, Quot.sound]`.
- Three pre-R4.8 serving renderers absent from this worktree (`Image` for `p24`, `p25`; `Gallery` for `p20`) are formalized as clean parameterized `Prop` specifications (`LiveSpec_p24_image_pct_typo`, `LiveSpec_p25_image_jpeg_resize`, `LiveSpec_p20_gallery_no_target_leak`) with zero `sorry`.
- Per `ADDENDUM-ANTIGRAVITY-SUSPECT.md`, `p01-fffd`, `p13-rawold-trailing-apos`, and `p29-apos-freelink-url` are omitted from duplicate Lean specs.

### Theorem & Specification Inventory

| Lean Declaration | Probes Cited | Kind / Result |
|---|---|---|
| `confirmed_p05_tabview_attr` | `p05-tabview-attr` | Confirmed (`rfl`) |
| `confirmed_p07_deflist_blank_merge` | `p07-deflist-blank-merge` | Confirmed (`decide`) |
| `confirmed_p11_module_upper_nested` | `p11-module-upper-nested` | Confirmed (`decide`) |
| `confirmed_f07_modulepre_upper_tail` | `f07-modulepre-upper-tail` | Confirmed (`decide`) |
| `confirmed_b3_mod654_upper_body` | `b3-mod654-upper-body` | Confirmed (`decide`) |
| `confirmed_p15_typo_dollar_unit` | `p15-typo-dollar-unit` | Confirmed (`decide`) |
| `confirmed_p21_date_ts_override` | `p21-date-ts-override` | Confirmed (`rfl`) |
| `confirmed_p28_f08_iftags_commas` | `p28-iftags-trail-comma`, `f08-iftags-lead-comma` | Confirmed (`decide`) |
| `confirmed_p31_div_sameline` | `p31-div-sameline` | Confirmed (`decide`) |
| `confirmed_p32_x07_bq_nospace_deletion` | `p32-bq-lone-nospace`, `x07-bq-raw-nospace` | Confirmed (`decide`) |
| `confirmed_p19_f01_email_bytewise_strrev` | `p19-email-utf8`, `f01-email-ee` | Confirmed bytewise reversal (`rfl`) |
| `confirmed_x03_x04_x05_email_overclaim` | `x03`, `x04`, `x05` | Confirmed cross-rule capture (`rfl`) |
| `confirmed_x09_deflist_raw_empty_dt_omitted` | `x09-deflist-raw-empty` | Confirmed `<dt>` omission (`decide`) |
| `LiveSpec_p24_image_pct_typo` | `p24-image-pct-typo` | Parameterized spec (pre-R4.8 `Image` absent) |
| `LiveSpec_p25_image_jpeg_resize` | `p25-image-jpeg-resize` | Parameterized spec (pre-R4.8 `Image` absent) |
| `LiveSpec_p20_gallery_no_target_leak` | `p20-gallery-target-leak` | Parameterized spec (pre-R4.8 `Gallery` absent) |
| `diverges_p02_postStripToc` | `p02-uu-pair` | `¬ LiveSpec_postStripToc postStripToc` |
| `diverges_p03_p04_f03_freelink_transliterate` | `p03`, `p04`, `f03` | `¬ LiveSpec_freelink_transliterate transliterate` |
| `diverges_p06_deflist_raw_term` | `p06-deflist-raw-term` | `¬ LiveSpec_deflist_raw_term (deflistRule ∘ rawRule)` |
| `diverges_p08_strong_quad_follow` | `p08-strong-quad-follow` | `¬ LiveSpec_strong_quad_follow strongRule` |
| `diverges_p09_p10_x06_colortext_parse` | `p09`, `p10`, `x06` | `¬ LiveSpec_colortext_parse_validates colortextRule` |
| `diverges_p10_tighten_hoist_witness` | `p10-color-invalid-hoist` | Cross-rule `Tighten ∘ Colortext` witness |
| `diverges_x06_color_raw_leaks_placeholder` | `x06-color-raw-spec` | Cross-rule `Colortext ∘ Raw` `\xFF0\xFF` leak witness |
| `diverges_p12_module654_upper_empty` | `p12-module654-upper-empty` | `¬ LiveSpec_module654_upper_empty` on Module pipeline |
| `diverges_p14_span_double_u_id` | `p14-span-double-u-id` | `¬ LiveSpec_span_id_no_double_u spanRule` |
| `diverges_p16_f10_interwiki_unknown` | `p16`, `f10` | `¬ LiveSpec_interwiki_unknown_escapes renderInterwiki` |
| `diverges_p17_x10_url_star_target` | `p17`, `x10` | `¬ LiveSpec_url_star_keeps_target renderUrl` |
| `diverges_p18_p19_f01_f02_email_render` | `p18`, `p19`, `f01`, `f02` | `¬ LiveSpec_email_render_escapes_and_substitutes renderEmail` |
| `diverges_p27_raw_triple_open_literal` | `p27-raw-triple-open-only` | `¬ LiveSpec_raw_triple_open_literal rawRule` |
| `diverges_x01_raw_empty_emits_token` | `x01`, `x02`, `p22` | `¬ LiveSpec_raw_empty_emits_token rawRule` |
| `diverges_p22_x02_date_encodeFormat` | `p22`, `x02` | `¬ LiveSpec_date_encodeFormat_literal_at encodeDateFormat` |
| `diverges_p23_f09_div_attr_escapes` | `p23`, `f09` | `¬ LiveSpec_div_attr_escapes renderDiv` |
| `diverges_x08_b3_div_raw_attr` | `x08`, `b3-div-raw-class` | `¬ LiveSpec_div_raw_attr_cleared divRule` |
| `diverges_p26_size_invalid_inner` | `p26-size-invalid-inner` | `¬ LiveSpec_size_outer_with_invalid_inner sizeRule` |
| `diverges_p30_f05_b3_listblocks_case` | `p30`, `f04`–`f06`, `b3-1`, `b3-2` | `¬ LiveSpec_listblocks_case listRule` |

COMPLETE
