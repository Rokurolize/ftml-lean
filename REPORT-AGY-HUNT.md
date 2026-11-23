# REPORT-AGY-HUNT — Uncovered-Ground Suspicion Hunt (PHP Reference vs. Live Wikidot)

**Target reference:** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php` (read-only)  
**Live probe oracle:** `sandbox-for-codex.wikidot.com`, prefix `muse-probe-agy-hunt-`, anonymous double-fetch via `wikidot-probe` + `ref-php/harness/transform.php` (`batch.php` for tagged `Iftags`) + `conformance-tidy-oracle/tidy_oracle`  
**Cached artifacts:** [conformance-agy-hunt/](file:///home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/conformance-agy-hunt/)

## Executive Summary

An empirical audit of all **333 capture JSON files (4,497 source-bearing entries)** in `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/conformance*` identified low-coverage, zero-coverage, and previously "environment-dispositioned" areas across the PHP reference pipeline. Avoiding all in-flight Round 12 coordinator targets (`R12-FREELINK` Cf leads, `R12-NOTES` footnote C0/ESC, `R12-ATTR` Div/Image attribute whitespace, `R12-LIST`/`R12-LISTGEN`), I designed and ran **87 live probe pages** across three batches (`Batch 1`: 59 captured + 1 target page + 2 save-rejected inputs; `Batch 2`: 21 minimal-witness/boundary probes; `Batch 3`: 6 boundary probes).

- **Capture integrity:** **86/86** captured probe pages achieved `saved_source_matches=true`, and **85/86** achieved `valid=true` and `stable=true` across anonymous double-fetches. The lone `stable=false` page (`muse-probe-agy-hunt-h14a-mod-members-files`) is deterministic structure plus live per-render container IDs (`ml-<digits>`, `files-<digits>`) and avatar timestamps from `[[module Members]]` and `[[module Files]]`.
- **Verdict tally:**
  - **14 Confirmed Divergences (`D01`–`D14`)** across **11 reference/config/harness files** (`Render/Xhtml/Embed.php`, `wikidot-root/conf/wikiparser/embed/default.php`, `Parse/Default/Url.php`, `Parse/Default/Freelink.php`, `Render/Xhtml/Freelink.php`, `Render/Xhtml/Math.php`, `Render/Xhtml/Gallery.php`, `Render/Xhtml/Button.php`, `Parse/Default/Tabview.php`, `wikidot-root/lib/WDStringUtils.php`, and `ref-php/harness/ozone-stubs.php`).
  - **26 Cleared Suspicions (`C01`–`C26`)** verified against live captures (including live confirmation of quirks that initially looked like PHP reference bugs, such as `Typography`'s unescaped `$` regex anchor leaving `5 $` un-nbsp'd, `Iframe` emitting empty unset attributes and allowing `mailto:`/`ftp:`, `Embed` allowing single-quoted non-`src` `javascript:`, and `Image` matching unanchored `flickr:` even inside URLs).
  - **4 Environment-Bound Serving Captures (`E01`–`E04`)** directly measured on live Wikidot (`[[user]]`/`[[*user]]` found-user markup, `[[image flickr:...]]` / `[[gallery]] flickr:` error paths, `[[module ListPages]]`, `[[module Categories]]`).
  - **3 Unreachable Behaviors (`U01`–`U03`)** with exact live attempts recorded.

---

## 1. Coverage Map Hunted From

Scanning the 4,497 existing live-capture entries under `conformance*` showed that prior rounds heavily saturated core block/inline/link/include rules, `Divprefilter`, `Divalign`, `Note`, `Button` types, `Social`, and `R12` targets, while leaving the following paths uncovered or thinly probed:

| Area / Mechanism | Prior Live Captures | Why Selected (`suspicion × uncoveredness`) |
| --- | --- | --- |
| `Embed` `on[a-z]+=` boundary, boolean attrs, `_` attrs, mismatched quotes | 0 (`allowfullscreen`, `longdesc=`, `content=`, mismatched quotes) | REFCORR4 `Embed.php:66` `\s*on[a-z]+\s*=` allows zero whitespace before `on`; `default.php:69` `anyiframe` requires `=quote` and allows `[a-z0-9_]+` and mismatched quotes `['"]...['"]` |
| `Url` described links ending in `$]` without math | 0 (`plain $]` non-math) | REFCORR6 `Url.php:288` aborts ANY described URL containing literal `$]` even outside `[[$` inline math |
| `Freelink` external URL `#fragment`, `/#/route`, empty pipe `url\|]` | 0 (URL `#` / `url\|]`), 3 (`textFromTitle`) | `Freelink.php:150-199` strips `#`/`/#/` before the external URL branch and drops `anchor`/`extra`; `\|]` uses raw empty label; `Render/Xhtml/Freelink.php:88` calls unstubbed `DB_PagePeer::selectByPrimaryKey` |
| `Math` starred/AMS vs arbitrary lower-case environments, `\input`/`\include` | 0 (`align*`, `equation*`, `\input`) | REFCORR3 replaced whitelist with `/^[a-z][a-z0-9]*$/` in `Render/Xhtml/Math.php:46`, rejecting starred environments and accepting arbitrary words; `\input{`/`\include{` throws uncaught `ProcessException` in `transform.php` |
| `Image` `:first` & `flickr:`, `link="javascript:..."`, `.webp`/`.svg` | 0 (`:first`, `flickr:`, `link="javascript:"`, `.webp`/`.svg`) | Unanchored `strpos(..., 'flickr:')`, `^:first` prefix match, extension check `png\|jpg\|gif`, zero scheme validation on `link=` |
| `Gallery` `flickr:`, `link="javascript:..."`, `link=""`, `size="MEDIUM"`, external `link=` override | 0 (`flickr:` IDs, `size="MEDIUM"`) | Raw `href` emission without script-scheme sanitization; external URL branch overwrites authored `link=`; `FlickrHandler` missing |
| `User` found-user path & `WDStringUtils::toUnixName` transliteration | 6 (`*user`), 0 in-harness found-user renders | Dispositioned due to missing `Criteria`/`DB_OzoneUserPeer`; fossil `WDStringUtils.php:44` maps `'Ł' => 'K'` and omits `'ś'` |
| `Module` beyond the 9 stubbed names & real rendered modules | 0 standard live modules outside the 9-name list | `ozone-stubs.php:134` hardcodes only 9 module names, returning `No such module` for dozens of live Wikidot modules |
| `Button` `set-tags` with `text="0"` / `text=""` & unstubbed types | 0 (`text="0"`), 11 total | `Render/Xhtml/Button.php:100` uses falsy `!$text` on `set-tags` |
| `Tabview` `[[tab 0]]`, `[[tab title="0"]]`, `[[tabs]]...[[/tabview]]` | 0 (`[[tab 0]]`, `title=""`, `[[tabs]]...[[/tabview]]`) | `Parse/Default/Tabview.php:109` checks strict `$text === ''` (vs potential PHP falsy check on live) and regex allows cross-tag `tabs`/`tabview` |
| `Anchor`, `Interwiki`, `Iframe`, `Typography`, `Collapsible`, `Toc`, `Size`, `Deflist`, `Table`, `Horiz`, `Separator`, `Break`, `Email`, `Bibcite`, `Iftags` edge combinations | Thin (2–43 captures per feature; specific option combos 0) | `Anchor` `data-*` upper/lower & `ENT_COMPAT`; `Interwiki` unescaped `&` & extra prefixes; `Iframe` `mailto:`/`ftp:` & empty unset attrs; `Typography` unescaped `$` & `M€`; `Toc` `title="0"`; `Size` `.....px`/length-6; `Email` `+` local-part; live-tagged `Iftags` nesting |

---

## 2. Confirmed Divergences (`D01`–`D14`)

All minimal witnesses below were double-fetched anonymously on `sandbox-for-codex` with `valid=true`, `stable=true`, `saved_source_matches=true` (except `D14` notes `h14a`'s unstable module ID alongside stable minimal witness `m11`).

### D01 — `Embed`: Over-broad `\s*on[a-z]+\s*=` event regex rejects `longdesc`, `content`, and `1onclick`
- **Indicted file & mechanism:** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/text-wiki/Text/Wiki/Render/Xhtml/Embed.php:65-69` (`REFCORR4` `C-SUSPECT-CODEEMBED-6`). Because `\s*` allows zero leading whitespace before `on[a-z]+\s*=`, it matches substrings inside ordinary attribute names such as `l`+`on`+`gdesc=`, `c`+`on`+`tent=`, and `1`+`on`+`click=`.
- **Minimal witnesses:**
  1. `muse-probe-agy-hunt-h01a-embed-longdesc` (`html_sha256`: `01b0557e533f...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[embed]]\n<iframe src="https://example.com" longdesc="https://example.com/d"></iframe>\n[[/embed]]`  
     - **Live:** `<p><iframe src="https://example.com" longdesc="https://example.com/d"></iframe></p>`  
     - **PHP Ref (Stage 1 / Stage 2):** `<p><div class="error-block">Sorry, no match for the embedded content.</div></p>` / `\n\n<div class="error-block">Sorry, no match for the embedded content.</div>\n`
  2. `muse-probe-agy-hunt-h01b-embed-content-attr` (`html_sha256`: `31d5b357e807...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[embed]]\n<iframe src="https://example.com" content="hello"></iframe>\n[[/embed]]`  
     - **Live:** `<p><iframe src="https://example.com" content="hello"></iframe></p>`  
     - **PHP Ref (Stage 2):** `\n\n<div class="error-block">Sorry, no match for the embedded content.</div>\n`
  3. `muse-probe-agy-hunt-m13b-embed-digit-on` (`html_sha256`: `d469ef2d6592...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[embed]]\n<iframe src="https://example.com" 1onclick="1"></iframe>\n[[/embed]]`  
     - **Live:** `<p><iframe src="https://example.com"></iframe></p>` (passes Wikidot's embed filter, then Stage 2 `libtidy` strips the invalid HTML attribute `1onclick`)  
     - **PHP Ref (Stage 2):** `\n\n<div class="error-block">Sorry, no match for the embedded content.</div>\n`
- **Boundary check (`m01-embed-event-boundary`, `056064cc552b...`):** Bare `on="1"` passes on both live (`<p><iframe src="https://example.com" on="1"></iframe></p>`) and ref (since `on[a-z]+` requires at least one letter after `on`), while no-space glued `src="https://example.com"onclick="alert(1)"` fails on both. Thus live's event-attribute test uses an alpha boundary (e.g., `(?<![a-z])on[a-z]+\s*=`) rather than `\s*on[a-z]+\s*=`.

### D02 — `Embed`: `anyiframe` rejects valueless boolean attributes (`allowfullscreen`, `sandbox`, `mozallowfullscreen`, `webkitallowfullscreen`)
- **Indicted file & mechanism:** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/wikidot-root/conf/wikiparser/embed/default.php:69` (`'anyiframe' => ';^<iframe(\s+[a-z0-9_]+\s*=\s*[\'"][^\'"]*[\'"])+>\s*</iframe>$;si'`). Requiring `\s*=\s*['"][^'"]*['"]` on every attribute rejects standard valueless HTML5/iframe boolean attributes, whereas live accepts them (then Stage 2 Tidy normalizes e.g. `allowfullscreen` -> `allowfullscreen="allowfullscreen"` and `sandbox` -> `sandbox=""`).
- **Minimal witnesses:**
  1. `muse-probe-agy-hunt-m02a-embed-allowfullscreen` (`html_sha256`: `0cb7a24707de...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[embed]]\n<iframe src="https://example.com" allowfullscreen></iframe>\n[[/embed]]`  
     - **Live:** `<p><iframe src="https://example.com" allowfullscreen="allowfullscreen"></iframe></p>`  
     - **PHP Ref (Stage 1 / Stage 2):** `<p><div class="error-block">Sorry, no match for the embedded content.</div></p>` / `\n\n<div class="error-block">Sorry, no match for the embedded content.</div>\n`
  2. `muse-probe-agy-hunt-m02b-embed-bool-sandbox` (`html_sha256`: `17cc48f26851...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[embed]]\n<iframe src="https://example.com" sandbox></iframe>\n[[/embed]]`  
     - **Live:** `<p><iframe src="https://example.com" sandbox=""></iframe></p>`  
     - **PHP Ref (Stage 2):** `\n\n<div class="error-block">Sorry, no match for the embedded content.</div>\n`
  3. `muse-probe-agy-hunt-m02c-embed-bool-moz` (`html_sha256`: `00d8976ce60b...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[embed]]\n<iframe src="https://example.com" mozallowfullscreen webkitallowfullscreen></iframe>\n[[/embed]]`  
     - **Live:** `<p><iframe src="https://example.com" mozallowfullscreen="" webkitallowfullscreen=""></iframe></p>`  
     - **PHP Ref (Stage 2):** `\n\n<div class="error-block">Sorry, no match for the embedded content.</div>\n`

### D03 — `Embed`: `anyiframe` matches mismatched attribute quotes (`src="...'`)
- **Indicted file & mechanism:** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/wikidot-root/conf/wikiparser/embed/default.php:69`. The independent character classes `[\'"][^\'"]*[\'"]` do not backreference the opening quote, so `<iframe src="https://example.com'></iframe>` wrongly matches `anyiframe` (and subsequently causes `tidy_oracle` to fail trying to repair an unclosed `"`) whereas live rejects it cleanly.
- **Minimal witness:** `muse-probe-agy-hunt-h02c-embed-mismatched-quotes` (`html_sha256`: `0d94a629bbda...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
  - **Source:** `[[embed]]\n<iframe src="https://example.com'></iframe>\n[[/embed]]`  
  - **Live:** `<div class="error-block">Sorry, no match for the embedded content.</div>`  
  - **PHP Ref (Stage 1):** `<p><iframe src="https://example.com'></iframe></p>` (then Stage 2 `tidy_oracle` exits `rc=1` without closing `<!--wrapdelimiter-->`)

### D04 — `Embed`: `anyiframe` admits underscore attribute names (`_`), whereas live rejects them
- **Indicted file & mechanism:** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/wikidot-root/conf/wikiparser/embed/default.php:69` (`[a-z0-9_]+`). Live excludes `_` from `anyiframe` attribute names (it also excludes `-`, as `data-x="1"` in `h02b` was rejected by both sides).
- **Minimal witnesses:**
  1. `muse-probe-agy-hunt-m13a-embed-underscore-attr` (`html_sha256`: `0d94a629bbda...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[embed]]\n<iframe src="https://example.com" foo_bar="1"></iframe>\n[[/embed]]`  
     - **Live:** `<div class="error-block">Sorry, no match for the embedded content.</div>`  
     - **PHP Ref (Stage 1 / Stage 2):** `<p><iframe src="https://example.com" foo_bar="1"></iframe></p>`
  2. `muse-probe-agy-hunt-m01-embed-event-boundary` (`html_sha256`: `056064cc552b...`): `<iframe src="https://example.com" data_on="1"></iframe>` likewise failed live (`error-block`) while passing `ref-php`.

### D05 — `Url`: Over-broad `$]` check aborts ordinary described links ending in `$`
- **Indicted file & mechanism:** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/text-wiki/Text/Wiki/Parse/Default/Url.php:288-290` (`REFCORR6` `C-SUSPECT3-1`). Checking `if (strpos($matches[0], '$]') !== false) { return $matches[0]; }` in `processDescr()` yields the entire described link even when no `[[$` math opener exists anywhere in the match or document.
- **Minimal witnesses:**
  1. `muse-probe-agy-hunt-h03a-url-dollar-end` (`html_sha256`: `900d5084cf67...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[https://example.com 5$]`  
     - **Live:** `<p><a href="https://example.com">5$</a></p>`  
     - **PHP Ref (Stage 1 / Stage 2):** `<p>[<a href="https://example.com">https://example.com</a> 5$]</p>`
  2. `muse-probe-agy-hunt-h03b-url-dollar-only` (`html_sha256`: `7c249aadd827...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[https://example.com $]`  
     - **Live:** `<p><a href="https://example.com">$</a></p>`  
     - **PHP Ref (Stage 1 / Stage 2):** `<p>[<a href="https://example.com">https://example.com</a> $]</p>`
  3. `muse-probe-agy-hunt-m03-url-local-dollar` (`html_sha256`: `e170742335db...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[/start 5$]`  
     - **Live:** `<p><a href="/start">5$</a></p>`  
     - **PHP Ref (Stage 1 / Stage 2):** `<p>[/start 5$]</p>`

### D06 — `Freelink`: External URL branch discards `#fragment` and `/#/route` from `href`
- **Indicted file & mechanism:** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/text-wiki/Text/Wiki/Parse/Default/Freelink.php:150-159, 178-199` (and `Render/Xhtml/Freelink.php:51-64`). `process()` peels `/#/route` or `#anchor` off `$raw` into `$extra`/`$anchor` first (lines 150–159), then enters the external-URL branch (line 178) using only `$trimmed`, hardcoding `'anchor' => ''` and `'extra' => ''` (lines 189–190). On live, external URL freelinks preserve `#fragment` and `#/route` in `href`, while still stripping `#fragment` from the unlabelled auto-display text.
- **Minimal witnesses:**
  1. `muse-probe-agy-hunt-m04a-fl-url-hash-label` (`html_sha256`: `e70a46023dc4...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[[https://example.com/page#sec|Link]]]`  
     - **Live:** `<p><a href="https://example.com/page#sec">Link</a></p>`  
     - **PHP Ref (Stage 1 / Stage 2):** `<p><a href="https://example.com/page">Link</a></p>`
  2. `muse-probe-agy-hunt-m04b-fl-url-hash-bare` (`html_sha256`: `e408c010c00e...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[[https://example.com/page#sec]]]`  
     - **Live:** `<p><a href="https://example.com/page#sec">https://example.com/page</a></p>`  
     - **PHP Ref (Stage 1 / Stage 2):** `<p><a href="https://example.com/page">https://example.com/page</a></p>`
  3. `muse-probe-agy-hunt-m04c-fl-url-hashroute` (`html_sha256`: `d6d3be81c3aa...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[[https://example.com/#/route|Route]]]`  
     - **Live:** `<p><a href="https://example.com/#/route">Route</a></p>`  
     - **PHP Ref (Stage 1 / Stage 2):** `<p><a href="https://example.com">Route</a></p>`

### D07 — `Freelink`: Empty-pipe external URL (`[[[url|]]]`) renders empty `<a></a>` instead of slug fallback
- **Indicted file & mechanism:** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/text-wiki/Text/Wiki/Parse/Default/Freelink.php:180-192`. Unlike the page-link branch (lines 232–235, 247) which handles `trim($labelRaw) === '|'` via `textFromTitle`, the external-URL branch unconditionally runs `else { $text = substr($labelRaw, 1); }` -> `''`. Live falls through to the slugified page name (likely via `textFromTitle` not-found fallback `if (!$exists && $textFromTitle) $text = $page`), emitting `https:example-com`.
- **Minimal witnesses:**
  1. `muse-probe-agy-hunt-m05-fl-url-empty-pipe` (`html_sha256`: `a1d6befdac6b...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[[https://example.com|]]]`  
     - **Live:** `<p><a href="https://example.com">https:example-com</a></p>`  
     - **PHP Ref (Stage 1 / Stage 2):** `<p><a href="https://example.com"></a></p>`
  2. Companion `muse-probe-agy-hunt-h05c-fl-url-empty-pipe` (`eec1714e3ea4...`): `[[[https://example.com/a#b|]]]` -> Live `<a href="https://example.com/a#b">https:example-com-a</a>` vs Ref `<a href="https://example.com/a"></a>`.

### D08 — `Math`: Environment validation is a stripped-`*` AMS allowlist on live, NOT `/^[a-z][a-z0-9]*$/`
- **Indicted file & mechanism:** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/text-wiki/Text/Wiki/Render/Xhtml/Math.php:46-48` (`REFCORR3` `C-SUSPECT-SERVING-1`). `ref-php` validates `$type` with `/^[a-z][a-z0-9]*$/`, assuming live accepts any arbitrary lower-case alphanumeric name and rejects `*`. Live actually **strips `*` first** and then checks a **fixed AMS/LaTeX environment allowlist** (`equation`, `align`, `gather`, `eqnarray`, `multline`, `split` observed valid; `foobar` and `flalign` rejected; `a*b` stripped to `"ab"` in the error message!). Additionally, live renders valid blocks as MathJax text inside `<span class="equation-number">(N)</span>\n<div class="math-equation" id="equation-N">\begin{...} ... \end{...}</div>` (stripping `*` in `\begin{align}` / `\begin{equation}` / `\begin{gather}`), rather than the harness `LatexRenderer` no-op error block.
- **Minimal witnesses:**
  1. `muse-probe-agy-hunt-m06a-math-align-star` (`html_sha256`: `a54e47e8065e...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[math type="align*"]]\nx &= 1\n[[/math]]`  
     - **Live:** `<span class="equation-number">(1)</span>\n<div class="math-equation" id="equation-1">\begin{align} x &amp;= 1 \end{align}</div>`  
     - **PHP Ref (Stage 1 / Stage 2):** `<div class="error-block">Unsupported math environment "align*"</div>`
  2. `muse-probe-agy-hunt-m06b-math-gather-star` (`html_sha256`: `401f67ad4fc2...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[math type="gather*"]]\nx = 1\n[[/math]]`  
     - **Live:** `<span class="equation-number">(1)</span>\n<div class="math-equation" id="equation-1">\begin{gather} x = 1 \end{gather}</div>`  
     - **PHP Ref (Stage 2):** `\n\n<div class="error-block">Unsupported math environment "gather*"</div>\n`
  3. `muse-probe-agy-hunt-m06c-math-star-middle` (`html_sha256`: `8cd93710701c...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[math type="a*b"]]\nx = 1\n[[/math]]`  
     - **Live:** `<div class="error-block">Unsupported math environment "ab"</div>`  
     - **PHP Ref (Stage 2):** `\n\n<div class="error-block">Unsupported math environment "a*b"</div>\n`
  4. `muse-probe-agy-hunt-m14a-math-foobar-env` (`html_sha256`: `4fc58bb35f8d...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[math type="foobar"]]\nx = 1\n[[/math]]`  
     - **Live:** `<div class="error-block">Unsupported math environment "foobar"</div>`  
     - **PHP Ref (Stage 2):** `\n\n<div class="error-block">The equation has not been processed correctly. Most prabably it has syntax error(s).</div>\n` (accepts `"foobar"` past line 46 validation, only hitting `LatexRenderer` no-op!)
  5. `muse-probe-agy-hunt-m14b-math-ams-envs` (`html_sha256`: `0e9d15bf7709...`, `valid=true`, `stable=true`, `saved_source_matches=true`): `eqnarray`, `multline`, `split` succeed on live (eq 1, 2, 4), while `flalign` returns `<div class="error-block">Unsupported math environment "flalign"</div>` (eq counter 3 still increments). Also `h08a-math-star-env` (`9aca45d91ad3...`) confirms `equation*` -> `\begin{equation}`.

### D09 — `Gallery`: `link=` fails to sanitize `javascript:`, `vbscript:`, and `data:` schemes to `#`
- **Indicted file & mechanism:** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/text-wiki/Text/Wiki/Render/Xhtml/Gallery.php:147-167`. When `strpos($attr['link'], '://')` is false (e.g. `javascript:...`, `vbscript:...`, `data:...`), `token()` prepends `view_url` (empty in harness) and emits the dangerous URL verbatim in `<a href="...">`. Live replaces `javascript:`, `JaVaScRiPt:`, `vbscript:`, and `data:` with `href="#"` while leaving `mailto:a@b.com` intact.
- **Minimal witnesses:**
  1. `muse-probe-agy-hunt-m07a-gal-link-js` (`html_sha256`: `c3d930db047c...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[gallery]]\n: a.png link="javascript:alert(1)"\n[[/gallery]]`  
     - **Live (anchor):** `<a href="#" class="with-lb">...</a>`  
     - **PHP Ref (Stage 1 / Stage 2 anchor):** `<a href="javascript:alert(1)">...</a>`
  2. `muse-probe-agy-hunt-m07b-gal-link-schemes` (`html_sha256`: `272077746fd3...`, `valid=true`, `stable=true`, `saved_source_matches=true`): `JaVaScRiPt:alert(1)`, `vbscript:msgbox(1)`, `data:text/html,hi` all render `<a href="#" class="with-lb">` on live (while `mailto:a@b.com` renders `<a href="mailto:a@b.com" class="with-lb">`), whereas `ref-php` emits all four `href` values verbatim.

### D10 — `Button`: `set-tags` rejects `text="0"` and `text=""` instead of rendering empty `<a></a>`
- **Indicted file & mechanism:** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/text-wiki/Text/Wiki/Render/Xhtml/Button.php:100-102` (`REFVAL2`). `token()` tests `if ($type === 'set-tags' && !$text)` and returns `<div class="error-block">You need to set text for set-tags button.</div>` when `text="0"` or `text=""`. Live checks only for an absent `text` attribute (`text === null` / `!isset`), so both `text="0"` and `text=""` pass that guard and then hit line 110 (`if (!$text) $text = $defaultText['set-tags']`, where `'set-tags'` is absent from `$defaultText`), rendering an empty `<a></a>`.
- **Minimal witnesses:**
  1. `muse-probe-agy-hunt-m08a-btn-settags-text0` (`html_sha256`: `3467b937b897...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[button set-tags text="0"]]`  
     - **Live:** `<p><a class="wiki-standalone-button" href="javascript:;" onclick="WIKIDOT.page.listeners.updateTagsByButton(event, '')"></a></p>`  
     - **PHP Ref (Stage 1 / Stage 2):** `<p><div class="error-block">You need to set text for set-tags button.</div></p>` / `\n\n<div class="error-block">You need to set text for set-tags button.</div>\n`
  2. `muse-probe-agy-hunt-m08b-btn-settags-empty` (`html_sha256`: `3467b937b897...`, `valid=true`, `stable=true`, `saved_source_matches=true`): identical live empty `<a></a>` vs ref error block for `[[button set-tags text=""]]`. (Combined `h16a-btn-zero-falsy` also confirms `[[button edit text="0"]]` -> `edit` and `[[button edit class="0" ...]]` -> `class="wiki-standalone-button"` match on both sides.)

### D11 — `Tabview`: `[[tab 0]]` and `[[tab title="0"]]` render `untitled` on live vs `0` in ref
- **Indicted file & mechanism:** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/text-wiki/Text/Wiki/Parse/Default/Tabview.php:107-111`. `_tabTitle()` uses strict `if ($text === '') return 'untitled';`, so `"0"` survives as tab label `0`. Live uses a PHP falsy check (`!$text` / `empty($text)`), turning both positional `[[tab 0]]` and `[[tab title="0"]]` into `untitled`.
- **Minimal witnesses:**
  1. `muse-probe-agy-hunt-m09a-tab-zero` (`html_sha256`: `db51218cdbe6...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[tabview]]\n[[tab 0]]\nBody\n[[/tab]]\n[[/tabview]]`  
     - **Live tab label:** `<li>...<em>untitled</em>...</li>`  
     - **PHP Ref tab label (Stage 1 / Stage 2):** `<li>...<em>0</em>...</li>`
  2. `muse-probe-agy-hunt-m09b-tab-title-zero` (`html_sha256`: `2e32415cf804...`, `valid=true`, `stable=true`, `saved_source_matches=true`): `[[tab title="0"]]` likewise renders `<em>untitled</em>` on live vs `<em>0</em>` in ref.

### D12 — `WDStringUtils` / `User`: Fossil `$CONVERT_ARRAY` has `'Ł' => 'K'` typo and omits `'ś' => 's'`
- **Indicted file & mechanism:** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/wikidot-root/lib/WDStringUtils.php:44,84` (`toUnixName()`, called by `Render/Xhtml/User.php:45` and `pages.php`). Line 44 has `'Ł' => 'K'` instead of `'Ł' => 'L'`, so `WDStringUtils::toUnixName('Łukasz') === 'kukasz'`; meanwhile `'Ś' => 'S'` exists on line 51, but lowercase `'ś' => 's'` is omitted around line 84 (`'š' => 's'` only), so `WDStringUtils::toUnixName('ślimak') === 'limak'`. (Line 30 also has duplicate `'Ä' => 'Ae', 'Ä' => 'A'`, turning `Äpfel` into `apfel` while `'ä' => 'ae'` turns `äpfel` into `aepfel`.) Live resolves both real Wikidot users (`lukasz` id `45707`, `slimak` id `318027`), proving live maps `Ł -> l` and `ś -> s`.
- **Minimal witnesses:**
  1. `muse-probe-agy-hunt-m15a-user-lukasz` (`html_sha256`: `58b3f7081944...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[user Łukasz]]`  
     - **Live:** `<p><span class="printuser"><a href="https://www.wikidot.com/user:info/lukasz" onclick="WIKIDOT.page.listeners.userInfo(45707); return false;">lukasz</a></span></p>`  
     - **PHP Ref:** `WDStringUtils::toUnixName('Łukasz')` returns `'kukasz'` before crashing on missing `Criteria` (`Render/Xhtml/User.php:46`).
  2. `muse-probe-agy-hunt-m15b-user-slimak` (`html_sha256`: `09072bfcaf7e...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
     - **Source:** `[[user ślimak]]`  
     - **Live:** `<p><span class="printuser"><a href="https://www.wikidot.com/user:info/slimak" onclick="WIKIDOT.page.listeners.userInfo(318027); return false;">slimak</a></span></p>`  
     - **PHP Ref:** `WDStringUtils::toUnixName('ślimak')` returns `'limak'` before `Criteria` fatal.

### D13 — `Freelink` `textFromTitle`: Unstubbed `DB_PagePeer::selectByPrimaryKey` prevents existing-page title resolution
- **Indicted file & mechanism:** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/text-wiki/Text/Wiki/Render/Xhtml/Freelink.php:85-92` and `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/harness/ozone-stubs.php:73-100`. Previously deferred to "serving-layer scope" (`conformance-refphp/link/freelink/SECTION.md`): `ozone-stubs.php` implements `selectByName`/`selectBySiteAndName` on `DB_PagePeer` but omits `selectByPrimaryKey`, and `wikiPageExists()` returns a boolean rather than a page ID. On a pre-populated target page with special title characters (`&`, `<`, `>`, `"`, `'`), live cleanly resolves both plain and `#sec`-anchored `textFromTitle` freelinks with raw apostrophe (`ENT_COMPAT`), whereas the standalone harness falls back to `newpage` + slug (or fatals when `$exists` is true).
- **Minimal witness:** `muse-probe-agy-hunt-h06a-fl-title-special` (`html_sha256`: `22ba96c28476...`, `valid=true`, `stable=true`, `saved_source_matches=true`), targeting pre-created `muse-probe-agy-hunt-title-target` (`title`: `Hunt's "Title" & <Test>`):  
  - **Source:** `[[[muse-probe-agy-hunt-title-target|]]] and [[[muse-probe-agy-hunt-title-target#sec|]]]`  
  - **Live:** `<p><a href="/muse-probe-agy-hunt-title-target">Hunt's &quot;Title&quot; &amp; &lt;Test&gt;</a> and <a href="/muse-probe-agy-hunt-title-target#sec">Hunt's &quot;Title&quot; &amp; &lt;Test&gt;</a></p>`  
  - **PHP Ref (Stage 1 / Stage 2):** `<p><a class="newpage" href="/muse-probe-agy-hunt-title-target">muse-probe-agy-hunt-title-target</a> and <a class="newpage" href="/muse-probe-agy-hunt-title-target#sec">muse-probe-agy-hunt-title-target</a></p>`

### D14 — `Module` / `ozone-stubs.php`: 9-module allowlist falsely marks standard live Wikidot modules as `No such module`
- **Indicted file & mechanism:** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/harness/ozone-stubs.php:134-137` (`ModuleManager::canWikiUseModule`, called by `Render/Xhtml/Module.php:43-54`). Only 9 modules (`backlinks`, `categories`, `css`, `join`, `listpages`, `pagetree`, `rate`, `redirect`, `tagcloud`) are marked available in `ozone-stubs.php`, whereas the fossil config (`ref-php/fossil/conf/wiki_modules/*.conf`) listed dozens. Probing live Wikidot confirms **9 additional standard modules** are recognized/executed (`NewPage`, `ChildPages`, `PageCalendar`, `WantedPages`, `OrphanedPages`, `CountPages`, `Search` [returns disabled notice, not `No such module`], `Members`, `Files`), while only genuinely nonexistent/unconfigured names (`PageTags`, `HelloWorld`) return `[[module <em>...</em>]] No such module...`.
- **Minimal witness:** `muse-probe-agy-hunt-m11-mod-newpage` (`html_sha256`: `4af03242c8a4...`, `valid=true`, `stable=true`, `saved_source_matches=true`)  
  - **Source:** `[[module NewPage]]`  
  - **Live:** `<div class="new-page-box" style="text-align: center; margin: 1em 0;">\n\t<form action="dummy.html" method="get" onsubmit="WIKIDOT.modules.NewPageHelperModule.listeners.create(event);">\n\t\t<input class="text" name="pageName" type="text" size="30" maxlength="128" style="margin: 1px"/>\n\t\t\t\t<input type="submit" class="button" value="Create page" style="margin: 1px;"/>\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\t</form>\n</div>`  
  - **PHP Ref (Stage 1 / Stage 2):** `<div class="error-block">[[module <em>NewPage</em>]] No such module, please <a href="https://www.wikidot.com/doc:modules" target="_blank">check available modules</a> and fix this page.</div>`
- **Companion captures:** `h14b-mod-search-newpage` (`60b461cddb6b...`, `valid=true`), `h14c-mod-child-calendar` (`ed1c15e8baf8...`, `valid=true`), `h14d-mod-wanted-orphaned` (`41c9d155ea77...`, `valid=true`), `h14e-mod-count-tags-hello` (`bc9217746442...`, `valid=true` — `CountPages` renders `<div class="list-pages-box">`, while `PageTags` and `HelloWorld` emit `No such module`), and `h14a-mod-members-files` (`050845d518a2...`, `valid=false, stable=false` due to random `ml-<digits>` / `files-<digits>` container IDs and avatar `timestamp=`).

---

## 3. Full Suspicion Ledger (Cleared Suspicions & Environment Measurements)

Every capture below has `valid=true`, `stable=true`, `saved_source_matches=true` unless explicitly noted (`h14a`).

| ID | Rule & Ref Target | Expected / Why It Smelled | Capture Fullname (`html_sha256[:12]`) | Live vs Ref Outcome | Verdict |
| --- | --- | --- | --- | --- | --- |
| `C01` | `Embed` single-quoted non-`src` `javascript:` (`Render/Xhtml/Embed.php:82`) | Line 82 checks only double quotes `"([^"]*)"` for `title='javascript:...'`, leaving single quotes unblocked | `muse-probe-agy-hunt-h02a-embed-sq-non-src-js` (`6a2fe694abd5`) | Both live and ref pass `<p><iframe src="https://example.com" title='javascript:alert(1)'></iframe></p>` unchanged (`EQ_STAGE2`) | **CLEARED** |
| `C02` | `Url` schemes `tel:`, `irc:`, `skype:` vs `Freelink` schemes (`Parse/Default/Url.php:77`) | Assumed live might autolink `tel:`/`irc:`/`skype:` in plain `Url` as `Freelink` does | `muse-probe-agy-hunt-h04a-url-extra-schemes` (`d000824cfb8f`) | Both leave all four literal (`EQ_STAGE2`) | **CLEARED** |
| `C03` | `Url` `#a.b` dot fragment, `#` empty fragment, `[%%title%% ...]` (`Url.php:154,166`) | `[#a.b ...]` excludes `.`, `[# ...]` becomes `javascript:;`, `[%%title%%]` depends on `post_vars=false` | `muse-probe-agy-hunt-h04b-url-frag-dot-postvar` (`b6a477536444`) | Exact match: `[#a.b DotFrag] <a href="javascript:;">EmptyFrag</a> [%%title%% PostVar]` (`EQ_STAGE2`) | **CLEARED** |
| `C04` | `Freelink` missing-page `textFromTitle` on `start` + `#sec` (`Freelink.php:232`, `Render/Xhtml/Freelink.php:90`) | Check whether `start` exists cleanly or falls back to slug + keeps `#top` when absent | `muse-probe-agy-hunt-h06b-fl-title-start` (`47c8735a9495`) | Both render `<a class="newpage" href="/start">start</a>` and `href="/start#top"` (`EQ_STAGE2`) | **CLEARED** |
| `C05` | `Freelink` single-colon cross-site syntax `[[[:community:start]]]` (`Parse/Default/Freelink.php:225`) | Check if live resolves `:site:page` globally or treats it as a local slug preserving leading `:` in label | `muse-probe-agy-hunt-h07a-fl-cross-site-2seg` (`13fda69c79b3`) | Exact match: `/community:start` with `:community:start` display text (`EQ_STAGE2`) | **CLEARED** |
| `C06` | `Image` `:first` / `:first-foo` on page with no images (`Render/Xhtml/Image.php:76`) | Regex `/^:first/` without end anchor matches `:first-foo` too; could render error or empty | `muse-probe-agy-hunt-h09a-img-first-none` (`e3b0c44298fc`), `h09b-img-first-prefix` (`e3b0c44298fc`) | Both live and ref render empty string `""` for both `:first` and `:first-foo` (`EQ_STAGE2`) | **CLEARED** (no-image case; see `U01` for attached case) |
| `C07` | `Image` `link="javascript:alert(1)"` & `link="mailto:..."` (`Render/Xhtml/Image.php:186`) | Missing scheme validation turns both into `/javascript:...` and `/mailto:...` | `muse-probe-agy-hunt-h11a-img-link-js-mailto` (`7a9a61f8fff8`) | Both live and ref render `href="/javascript:alert(1)"` and `href="/mailto:a@b.com"` (`EQ_STAGE2`) | **CLEARED** |
| `C08` | `Image` `.webp` / `.svg` forced to `/medium.jpg` (`Render/Xhtml/Image.php:125`) | `!preg_match('/\.(png|jpg|gif)$/i')` forces `size = "medium"` on `.webp` and `.svg` | `muse-probe-agy-hunt-h11b-img-webp-svg` (`7cd517cac33e`) | Both live and ref rewrite to `/local--resized-images/page/a.{webp,svg}/medium.jpg` (`EQ_STAGE2`) | **CLEARED** |
| `C09` | `Image` uppercase attrs & apostrophe in `alt`/`title` (`Parse/Default/Image.php:144`, `Render/Xhtml/Image.php`) | Check case-sensitivity of `ALT=`/`WIDTH=`/`SIZE=`/`LINK=` and raw `'` escaping | `muse-probe-agy-hunt-h11c-img-upper-attrs-apos` (`0e9e6c8393bf`) | Both ignore uppercase keys and emit raw `'` in `alt="it's" title="a'b"` (`EQ_STAGE2`) | **CLEARED** |
| `C10` | `Gallery` external URL overwrites authored `link=` (`Render/Xhtml/Gallery.php:141-142`) | `elseif (strpos($src, '://') !== false) $attr['link'] = $src;` overwrites explicit `link="https://other.example/dest"` | `muse-probe-agy-hunt-h12a-gal-ext-link-override` (`c5ac6516213d`) | Live ALSO overwrites `link=` to `href="https://example.com/a.png"` (differs only on lightbox class/id) | **CLEARED** |
| `C11` | `Gallery` case-sensitive `size="MEDIUM"` fallback (`Render/Xhtml/Gallery.php:50`) | `in_array($size, ...)` without `strtolower` falls back to `thumbnail` | `muse-probe-agy-hunt-h12d-gal-size-upper` (`1b833f113ecd`) | Live ALSO falls back to `gallery-item thumbnail` & `/thumbnail.jpg` (differs only on lightbox attrs) | **CLEARED** |
| `C12` | `Interwiki` unknown prefixes (`wiktionary:`, `en.wikipedia:`, `imdb:`, `rfc:`, `c2:`, etc.) (`wiki-config.php:32`) | Check if live has a larger `$interWikis` map than `wiki-config.php`'s 5 sites | `muse-probe-agy-hunt-h15a-iw-extra-sites` (`d7ac368c7735`) | All 10 tested prefixes remain literal on both live and ref (`EQ_STAGE2`) | **CLEARED** |
| `C13` | `Interwiki` unescaped `&` in `href`, `"`, `'`, `dictionary:`, `pl.wikipedia:` (`Render/Xhtml/Interwiki.php:60-95`) | `[wikipedia:A&B]` emits unescaped `&` in `href`; `[wikipedia:A"B]` fails regex | `muse-probe-agy-hunt-h15b-iw-amp-quote` (`94af0c975ef7`) | Identical live & ref (`EQ_STAGE2`, including raw `&` in `href` and `dictionary:` / `pl.wikipedia:` templates) | **CLEARED** |
| `C14` | `Button` unknown types `move`, `clone`, `discuss`, `comments`, `diff`, `flags` (`Render/Xhtml/Button.php:32-50`) | Check whether live recognizes additional page button types | `muse-probe-agy-hunt-h16b-btn-extra-types` (`c00b411b44c4`) | All 6 emit `<em>...</em> is not a valid button type` on both live and ref (`EQ_STAGE2`) | **CLEARED** |
| `C15` | `Anchor` disallowed attributes (`title`, `rel`, `aria-label`, `tabindex`) & `DATA-foo` (`Parse/Default/Anchor.php:340`) | Check allowlist & case-sensitivity of `DATA-*` | `muse-probe-agy-hunt-h17a-anchor-extra-attrs` (`684650f513c2`) | Both drop all 5 attrs and emit `<p><a href="https://example.com">X</a></p>` (`EQ_STAGE2`) | **CLEARED** |
| `C16` | `Anchor` closer `[[/a_]]` (`Parse/Default/Anchor.php:190`) | Scored opener `[[a_ ...]]` closes only on `[[/a]]`, not `[[/a_]]` | `muse-probe-agy-hunt-h17b-anchor-close-underscore` (`6641829eb38c`) | Both leave `[[a_ ...]][[/a_]]` unparsed (autolinking inner URL) (`EQ_STAGE2`) | **CLEARED** |
| `C17` | `Anchor` uppercase scheme, `tel:`, starred slug `[[a href="*start"]]` (`Parse/Default/Anchor.php:400,470`) | `isVerbatimHref` is case-sensitive and omits `tel:`; `*start` only targets verbatim hrefs | `muse-probe-agy-hunt-h17c-anchor-href-schemes` (`825b56fd5e27`) | Both slugify all three identically: `http:example-com`, `tel:12345`, `start` (`EQ_STAGE2`) | **CLEARED** |
| `C18` | `Anchor` named `[[# ...]]` quote/non-ASCII (`Parse/Default/Anchor.php:124`, `Render/Xhtml/Anchor.php`) | Invalid named-anchor `javascript:;` fallback on `'`, `"`, `é` | `muse-probe-agy-hunt-h17d-anchor-named-apos` (`529eb63cf76e`) | Identical: `[<a href="javascript:;">a'b</a>]` etc. (`EQ_STAGE2`) | **CLEARED** |
| `C19` | `Iframe` empty unset attrs & ignored `allowfullscreen`/`sandbox`/`title`/`id`/`name` (`Render/Xhtml/Iframe.php:26`) | Ref emits all 7 empty attrs `align="" ... style=""` and drops non-allowlisted attrs | `muse-probe-agy-hunt-h18a-iframe-extra-attrs` (`460d6afdaf58`) | Identical empty attrs emitted and extra attrs dropped on live (`EQ_STAGE2`) | **CLEARED** |
| `C20` | `Iframe` schemes `mailto:`, `ftp://`, `javascript:`, `/start` (`Parse/Default/Iframe.php:37`) | Regex `url\|ftp\|mailto\|news\|mms\|gopher` permits `mailto:` & `ftp:` while blocking `javascript:` & relative paths | `muse-probe-agy-hunt-h18b-iframe-schemes-extra` (`cc2673849b30`) | Identical: live renders `<iframe src="mailto:a@b.com" ...>` and `<iframe src="ftp://...">`, leaves `javascript:` & `/start` literal (`EQ_STAGE2`) | **CLEARED** |
| `C21` | `Typography` unescaped `$` regex bug, `M€`, `---`, `. . .`, SI/money/bearing units (`Parse/Default/Typography.php:108,126`) | Line 108 has unescaped `$` (PCRE end anchor instead of literal dollar); `--` runs before `---` (`a --- b` -> `a &#8212;- b`) | `muse-probe-agy-hunt-h19a-typo-money-dash` (`17068138d2b8`) | Exact match (`EQ_STAGE2`)! Live ALSO misses `5 $` (`5 $`, no `&#160;`), matches `5 M€`, `---` -> `&#8212;-`, `. . .` -> `&#8230;`, `&euro;` | **CLEARED** |
| `C22` | `Collapsible` `folded="NO"`, `hidelocation=`, `show="a'b"` / `hide="c'd"` (`Collapsible.php`) | Case-sensitive `folded="yes"` and `hideLocation`; apostrophes stay raw | `muse-probe-agy-hunt-h20b-coll-case-apos` (`645d9f0205e4`) | Identical live & ref (`EQ_STAGE2`) | **CLEARED** |
| `C23` | `Toc` trailing text, `title="0"`, `title=""` (`Parse/Default/Toc.php:52`, `Render/Xhtml/Toc.php:89`) | Greedy `.*` stops at `]]`; `title=""` keeps empty `<div class="title"></div>`; `title="0"` keeps `0` | `muse-probe-agy-hunt-h20c-toc-greedy-title0` (`d7390207c0b3`) | Exact byte-level Stage 2 match (`EQ_STAGE2`) | **CLEARED** |
| `C24` | `Size` dots/len-6/units (`.....px`, `100.25%`, `1.5rem`, `1.5EM`, `0px`), `Deflist` middle non-def, `Table` header align + unclosed row, `Horiz`/`Sep`/`Break` trailing whitespace (`h20d`–`h20g`) | `Size` accepts `[0-9\.]{1,5}`; `Deflist` joins non-def `: c` into next `dt`; `Table` ignores `> ` after `~ ` & drops after last `\|\|`; trailing space breaks line rules | `h20d` (`15ee5558b1e6`), `h20e` (`f581150a01a5`), `h20f` (`0dba96c9fe29`), `h20g` (`c1ef5261f592`) | All 4 match live identically under Stage 2 (`EQ_STAGE2`) | **CLEARED** |
| `C25` | `Email` `+` tag in local-part; `Bibliography`/`Bibcite` uppercase `A`, dash/underscore keys (`h21a`) | `[+_a-z0-9\-]` omits `+` in `Email`, splitting `user+tag@...` at `tag@...`; `Bib` keys are `[a-z0-9]+` case-sensitive | `muse-probe-agy-hunt-h21a-email-plus-bib-case` (`b78ecf93d285`) | Exact Stage 2 match (`EQ_STAGE2`) | **CLEARED** |
| `C26` | `Iftags` live-tagged nested `[[iftags]]`, uppercase `ALPHA`, `+alpha -beta` (`h22a`) | Verify `Iftags.php` on an actually tagged live page (`tags: ["alpha", "beta"]`) vs `batch.php` | `muse-probe-agy-hunt-h22a-iftags-tagged` (`c86d622ade9b`) | Exact Stage 2 match (`EQ_STAGE2`): `OUTER[[iftags +beta]]INNER[[/iftags]]END \| CASE \| \| ALLOW` | **CLEARED** |

*(Environment-bound live measurements recorded without a harness-fatal verdict discrepancy:)*
- **`E01` (`User` found-user & apostrophe/notfound):** `muse-probe-agy-hunt-h13a-user-found` (`b160ad85f319`) captures live found-user output for `[[user michal-frackowiak]]` (`<span class="printuser"><a href="https://www.wikidot.com/user:info/michal-frackowiak" onclick="WIKIDOT.page.listeners.userInfo(1); return false;">michal-frackowiak</a></span>`) and `[[*user michal-frackowiak]]` (`<span class="printuser avatarhover">...<img class="small" src="https://www.wikidot.com/avatar.php?userid=1&amp;amp;size=small&amp;amp;timestamp=..." alt="michal-frackowiak" style="background-image:url(https://www.wikidot.com/userkarma.php?u=1)" />...</span>`). `h13b` (`495d4ee18d92`) & `m10-user-notfound-apos` (`64a7287be943`) confirm `[[user agy-hunt-it's-999]]` renders `<span class="error-inline"><em>agy-hunt-it's-999</em> does not match any existing user name</span>` (`a'b` and `a"b` match existing user `A B`).
- **`E02` (`Image` `flickr:`):** `h10a` (`502ed41e798b`), `h10b` (`b1c1dd79eb2d`), and `h10c` (`b1c1dd79eb2d`) confirm unanchored `strpos($src, 'flickr:')` in `Image.php:95`: even `[[image https://example.com/flickr:123.jpg]]` enters the Flickr error path with empty ID (`Cannot fetch Flickr photo (id: ). The photo either does not exist, or is private`).
- **`E03` (`Gallery` `flickr:`):** `h12c-gal-flickr-id` (`fba4f42295b2`) confirms `Gallery.php:110`: live serves the literal `<div class="error-block">Error fetching flickr image (id: $s) info. The file does not exist, is private or other problem.</div>` bug!
- **`E04` (`Module` real serving renders):** `m12-mod-listpages-hit` (`e15cfe284e23`) captures `<div class="list-pages-box">    <div class="list-pages-item">\n\n\n<p>Title: Hunt's &quot;Title&quot; &amp; &lt;Test&gt; | Name: muse-probe-agy-hunt-title-target</p>\n</div>\n    \n    \n    \n    </div>`, while `h14f` (`27ce8670ad40`) & `h14g` (`a23f2eff362c`) capture `ListPages name="start"` and `PageTree` + `Categories`.

---

## 4. Unreachable Behaviors (`U01`–`U03`)

- **`U01` — `Image :first` and attachment-mode `Gallery` on a page WITH image attachments:**  
  `conformance-agy-hunt/special_pages.json` checked `start` and the first 20 pages of `sandbox-for-codex` via `wikidot.py` (`pages.search(limit=20)` / `page.files`), finding 0 attached files (`attachments_checked: []`), and `/home/roku/src/Rokurolize/wikidot.py/src/wikidot/module/page_file.py` provides read-only file metadata with no file-upload API. Therefore the `:first` and local-attachment `Gallery` success paths could not be triggered via `wikidot-probe` (`h09a`/`h09b` exercised the no-attachment empty path).
- **`U02` — Anonymous page capture of `[[math]]` containing `\input{...}` or `\include{...}` (`Parse/Default/Math.php:74`):**  
  `wikidot-probe create` attempted to save `muse-probe-agy-hunt-h08b-math-input-cmd` (`[[math]]\n\input{foo}\n[[/math]]`) 4 times, and `conformance-agy-hunt/check_math_include.py` attempted `muse-probe-agy-hunt-h08c-math-include-cmd` (`[[math]]\n\include{bar}\n[[/math]]`) once; recorded in `conformance-agy-hunt/math-save-rejection.json`. Live Wikidot rejected every attempt at save time with `AMC is respond error status: "not_ok"` (`exists_after_4_create_attempts: false`, `exists_after_attempt: false`). Thus live enforces the `Math.php:74` `ProcessException` check at save time (unlike `transform.php`, which terminates `rc=255` with an uncaught exception), making saved anonymous view capture unreachable.
- **`U03` — Live success path of `flickr:<id>` in `Image` and `Gallery`:**  
  `h10a` (`[[image flickr:123456]]`) and `h12c` (`[[gallery]]\n: flickr:123456\n...`) both hit live's Flickr failure path (`Cannot fetch Flickr photo (id: 123456)...` and `Error fetching flickr image (id: $s)...`), and no verified public Wikidot-accessible Flickr API photo ID was available; `FlickrHandler` is absent in `ref-php`.

---

## 5. Probe Page & Cached Artifact Inventory

**87 probe pages created and left in place on `sandbox-for-codex.wikidot.com`** (never deleted; plus 2 save-rejected attempts `h08b`, `h08c`):
- **Target & tagged special pages ([special_pages.json](file:///home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/conformance-agy-hunt/special_pages.json)):** `muse-probe-agy-hunt-title-target`, `muse-probe-agy-hunt-h22a-iftags-tagged`.
- **Save-rejected `[[math]]` probes ([math-save-rejection.json](file:///home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/conformance-agy-hunt/math-save-rejection.json)):** `muse-probe-agy-hunt-h08b-math-input-cmd` (not created), `muse-probe-agy-hunt-h08c-math-include-cmd` (not created).
- **Batch 1 (59 captured: [batch1-captures.json](file:///home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/conformance-agy-hunt/batch1-captures.json), [batch1-diff.txt](file:///home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/conformance-agy-hunt/batch1-diff.txt)):** `muse-probe-agy-hunt-h01a-embed-longdesc`, `...-h01b-embed-content-attr`, `...-h02a-embed-sq-non-src-js`, `...-h02b-embed-anyiframe-attrs`, `...-h02c-embed-mismatched-quotes`, `...-h03a-url-dollar-end`, `...-h03b-url-dollar-only`, `...-h04a-url-extra-schemes`, `...-h04b-url-frag-dot-postvar`, `...-h05a-fl-url-hash`, `...-h05b-fl-url-hashroute`, `...-h05c-fl-url-empty-pipe`, `...-h06a-fl-title-special`, `...-h06b-fl-title-start`, `...-h07a-fl-cross-site-2seg`, `...-h08a-math-star-env`, `...-h08d-math-live-basic-eref`, `...-h09a-img-first-none`, `...-h09b-img-first-prefix`, `...-h10a-img-flickr-id`, `...-h10b-img-flickr-bad`, `...-h10c-img-url-with-flickr`, `...-h11a-img-link-js-mailto`, `...-h11b-img-webp-svg`, `...-h11c-img-upper-attrs-apos`, `...-h12a-gal-ext-link-override`, `...-h12b-gal-internal-js-empty`, `...-h12c-gal-flickr-id`, `...-h12d-gal-size-upper`, `...-h13a-user-found`, `...-h13b-user-notfound-star-apos`, `...-h13c-user-polish-l`, `...-h14a-mod-members-files`, `...-h14b-mod-search-newpage`, `...-h14c-mod-child-calendar`, `...-h14d-mod-wanted-orphaned`, `...-h14e-mod-count-tags-hello`, `...-h14f-mod-live-listpages`, `...-h14g-mod-live-pagetree-cat`, `...-h15a-iw-extra-sites`, `...-h15b-iw-amp-quote`, `...-h16a-btn-zero-falsy`, `...-h16b-btn-extra-types`, `...-h17a-anchor-extra-attrs`, `...-h17b-anchor-close-underscore`, `...-h17c-anchor-href-schemes`, `...-h17d-anchor-named-apos`, `...-h18a-iframe-extra-attrs`, `...-h18b-iframe-schemes-extra`, `...-h19a-typo-money-dash`, `...-h20a-tab-empty-and-cross`, `...-h20b-coll-case-apos`, `...-h20c-toc-greedy-title0`, `...-h20d-size-dots-len6-rem`, `...-h20e-deflist-mid-nondef`, `...-h20f-table-hdr-align-unclosed`, `...-h20g-horiz-sep-break-trailws`, `...-h21a-email-plus-bib-case`, `...-h22a-iftags-tagged`.
- **Batch 2 (21 captured: [batch2-captures.json](file:///home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/conformance-agy-hunt/batch2-captures.json), [batch2-diff.txt](file:///home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/conformance-agy-hunt/batch2-diff.txt)):** `muse-probe-agy-hunt-m01-embed-event-boundary`, `...-m02a-embed-allowfullscreen`, `...-m02b-embed-bool-sandbox`, `...-m02c-embed-bool-moz`, `...-m03-url-local-dollar`, `...-m04a-fl-url-hash-label`, `...-m04b-fl-url-hash-bare`, `...-m04c-fl-url-hashroute`, `...-m05-fl-url-empty-pipe`, `...-m06a-math-align-star`, `...-m06b-math-gather-star`, `...-m06c-math-star-middle`, `...-m07a-gal-link-js`, `...-m07b-gal-link-schemes`, `...-m08a-btn-settags-text0`, `...-m08b-btn-settags-empty`, `...-m09a-tab-zero`, `...-m09b-tab-title-zero`, `...-m10-user-notfound-apos`, `...-m11-mod-newpage`, `...-m12-mod-listpages-hit`.
- **Batch 3 (6 captured: [batch3-captures.json](file:///home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/conformance-agy-hunt/batch3-captures.json), [batch3-diff.txt](file:///home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/conformance-agy-hunt/batch3-diff.txt)):** `muse-probe-agy-hunt-m13a-embed-underscore-attr`, `...-m13b-embed-digit-on`, `...-m14a-math-foobar-env`, `...-m14b-math-ams-envs`, `...-m15a-user-lukasz`, `...-m15b-user-slimak`.

COMPLETE
