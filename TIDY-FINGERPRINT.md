# Stage 2 `libtidy` Version Fingerprint Design (`TIDY-FINGERPRINT.md`)

This document designs the minimal probe set to fingerprint which `libtidy` version runs inside live Wikidot's `WikiTransformation::purifyHtml` pass among the candidate set `{pre-5, 5.0, 5.2, 5.4, 5.6, 5.8}`. It is a design-only specification: zero live probe pages were created.

## 1. Execution Model, Existing Evidence Constraints, and Methodology

In `WikiTransformation::purifyHtml` (confirmed directly from `gabrys/wikidot` `php/utils/WikiTransformation.php:59-74`), Stage 1 HTML `$code` is wrapped inside a fixed **XHTML 1.0 Strict** document frame (`<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"><html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">  <head>    <title>Just A Wrapper</title><meta http-equiv="content-type" content="text/html;charset=UTF-8"/>  </head> <!--wrapdelimiter--><body>` + `$code` + ` </body><!--wrapdelimiter--></html>`), passed to `tidy_parse_string($c, array('indent' => false, 'output-xhtml' => TRUE, 'wrap' => 0), 'UTF8')`, and extracted between the two `<!--wrapdelimiter-->` comments via `explode("<!--wrapdelimiter-->", $c2)` and `str_replace` on `<body>`/`</body>`.

Two C-level facts from PHP's `ext/tidy/tidy.c` and `htacg/tidy-html5` govern every prediction below. First, `php_tidy_parse_string()` (`ext/tidy/tidy.c:832-857`) calls `tidyParseBuffer()` followed immediately by `tidy_doc_update_properties()` (`ext/tidy/tidy.c:514-544`), which invokes `tidySaveBuffer()` (call #1), and does **not** invoke `tidyCleanAndRepair()`. Casting `$c2` to string in `explode("<!--wrapdelimiter-->", $c2)` invokes `tidy_doc_cast_handler(IS_STRING)` (`ext/tidy/tidy.c:436-461`), which runs `tidySaveBuffer()` a second time (call #2). Skipping `tidyCleanAndRepair()` is directly confirmed in `stage2/stage2-evidence/`: in probe `p31-empty-prune-vs-keep`, live emits `<a name="anchor-kept"></a>` without synthesizing `id="anchor-kept"`, whereas CLI `/usr/bin/tidy` (5.8.0 on this machine, which calls `tidyCleanAndRepair()` / `FixAnchors()`) emits `<a name="anchor-kept" id="anchor-kept"></a>`. Second, because the wrapper carries an XHTML 1.0 Strict DOCTYPE (`X10S != VERS_HTML5`), `lexer.c` calls `TY_(AdjustTags)(doc)` (`tags.c:739`), which sets `doc->HTML5Mode = no` and reverts HTML5 content-model changes such as `<a>` block wrapping (`CM_BLOCK`) and `<caption` flow parsing (`ParseBlock`) back to HTML4 inline parsing (`ParseInline`).

Three Stage 2 captures already on disk in `stage2/stage2-evidence/` constrain the version space under vanilla upstream `libtidy` semantics before any new probe runs. First, `p28-space-preserved-pre-and-raw` captures `<div class="code">\n<pre><code>code   spaces    with    tab</code></pre></div>`, with zero newlines injected inside `<pre>...</pre>`, eliminating `pre-5`. Second, `lst-x08-list-in-tab` and `con-x21-tabview-basic` capture an empty external `<script type="text/javascript" src="..."></script>` serialized on one line, eliminating `pre-5`, `5.0`, and `5.2`. Third, `p28-space-preserved-pre-and-raw`, `q11-p-before-list`, and all other multi-word prose probes preserve `<p>flow spaces</p>` on a single line, eliminating `5.6.0`'s two-save `ResetConfigToSnapshot` `wrap = 0` regression (unless live's PHP binding differs from upstream `ext/tidy/tidy.c`). One orthogonal configuration anomaly also appears in `p28`, `p33`, `q04`, and `q23`: live preserves `&#32;`, `&#160;`, `&#8212;`, and `&quot;` (matching CLI `tidy --preserve-entities yes` in 5.8.0), whereas stock `tidy-html5 5.8.0` with only `indent=no, output-xhtml=yes, wrap=0` decodes those references to UTF-8 characters. That difference reflects a config option (`preserve-entities` or equivalent wrapper/version patch) rather than a version tag boundary in `5.0`–`5.8`.

## 2. Minimal Fingerprinting Probe Set

Every probe below uses trivially producible wikitext verified against `php ref-php/harness/batch.php render`, avoiding `[[tabview]]` harness-frame rewrites where standalone `Text_Wiki` constructs exist (retaining `[[tabview]]` only as an auxiliary script-tag check). Each behavioral prediction is traced to exact commits and functions in `htacg/tidy-html5` (`08c12634` pre-5 baseline and release tags `5.0.0`, `5.2.0`, `5.4.0`, `5.6.0`, `5.8.0`).

### Probe F1: `<pre>` Inner Line Flush (`pre-5` vs `{5.0, 5.2, 5.4, 5.6, 5.8}`)

- **Wikitext source**: `[[code]]\nabc\n[[/code]]`
- **Stage 1 HTML (`ref-php`)**: `\n<div class="code">\n<pre><code>abc</code></pre></div>\n\n`
- **C-source mechanism**: In `pre-5` (`08c12634` `src/pprint.c:2023-2035`), `PPrintTree()` on `node->tag->parser == TY_(ParsePre)` calls `TY_(PFlushLine)(doc, indent)` immediately after printing `<pre>` and `PCondFlushLine(doc, indent)` immediately before `</pre>`, emitting newlines around the inner `<code>...</code>` child. Commit `ae620a63` (Issue `#158`, July 2015, present in tag `5.0.0` onward) removed both line flushes around `<pre>` content so inner inline elements remain adjacent to `<pre>` and `</pre>`. (On `5.6.0` note that `<div class="code">` single-attribute class names do not contain spaces to trigger `TidyWrapLen=0` word wrapping.)
- **Predicted output by candidate**:
  - `pre-5`: `<div class="code">\n<pre>\n<code>abc</code>\n</pre></div>`
  - `5.0`, `5.2`, `5.4`, `5.6`, `5.8`: `<div class="code">\n<pre><code>abc</code></pre></div>`
- **Elimination power**: Output with `\n` after `<pre>` eliminates `{5.0, 5.2, 5.4, 5.6, 5.8}` and isolates `pre-5`. Output without `\n` eliminates `pre-5` (already observed in `p28-space-preserved-pre-and-raw`).

### Probe F2: Leading Whitespace Trimming in `ParseValue` (`{pre-5, 5.0, 5.2}` vs `{5.4, 5.6, 5.8}`)

- **Wikitext source**: `[[span class="   foo"]]x[[/span]]`
- **Stage 1 HTML (`ref-php`)**: `<p><span class="   foo">x</span></p>\n\n` (Unlike `Div.php`, which calls `trim()` on parsed class names, `Span.php` passes the raw quoted attribute value verbatim to HTML.)
- **C-source mechanism**: In `ParseValue()` (`src/lexer.c:3761` in `5.0.0`, `src/lexer.c:3948` in `5.2.0`), the leading-whitespace trimming loop reads `while (TY_(IsWhite)(lexer->lexbuf[start]) && (start < len) && (len > 0))` — comparing buffer offset `start` against substring length `len`. Because `WikiTransformation::purifyHtml` prepends the ~240-byte XHTML 1.0 Strict header before `$code`, `start` is strictly greater than `len = 6`, so `(start < len)` evaluates to `false` and the three leading spaces survive verbatim. Commit `bb1d62d3` (Issue `#497`, `5.2 -> 5.4`, `src/lexer.c:4102` in `5.4.0`) removes `(start < len)`, trimming the leading spaces.
- **Predicted output by candidate**:
  - `pre-5`, `5.0`, `5.2`: `<p><span class="   foo">x</span></p>`
  - `5.4`, `5.6`, `5.8`: `<p><span class="foo">x</span></p>`
- **Elimination power**: `<span class="   foo">` eliminates `{5.4, 5.6, 5.8}`; `<span class="foo">` eliminates `{pre-5, 5.0, 5.2}`. (In `5.6.0`, the double-save `wrap = 0` regression in Probe F3 separately wraps at attribute/word spaces via `SetWrap`/`CheckWrapLine`, isolating `5.6.0` from `5.4` and `5.8`.)

### Probe F2b (Auxiliary Script-Tag Check): `[[tabview]]` Empty `<script src="...">` (`{pre-5, 5.0, 5.2}` vs `{5.4, 5.6, 5.8}`)

- **Wikitext source**: `[[tabview]]\n[[tab A]]\nx\n[[/tab]]\n[[/tabview]]`
- **Stage 1 HTML (`ref-php`, modulo CDN script path)**: emits `<script type="text/javascript" src="..."></script>` with `node->content == NULL`.
- **C-source mechanism**: In `PPrintScriptStyle()` (`src/pprint.c:1900` in `5.0.0`, `2003` in `5.2.0`), `TY_(PFlushLine)` / `TY_(PFlushLineSmart)` is called unconditionally after `<script ...>` (with `TidyVertSpace = no`, so `TidyAddVS == yes` in `5.2.0`), inserting a newline before `</script>`. Commit `1ac50fcc` (`5.2 -> 5.4`, `src/pprint.c:2006` in `5.4.0`) adds `if (node->content != NULL)` before flushing, keeping empty external `<script>` elements on one line.
- **Predicted output on the `<script src="...">` tag**:
  - `pre-5`, `5.0`, `5.2`: `<script type="text/javascript" src="..."></script>` splits as `...\n</script>`
  - `5.4`, `5.6`, `5.8`: `<script type="text/javascript" src="..."></script>` on one line (`5.6` wraps at the tag/attr space under F4)
- **Elimination power**: Redundant with F2 against `{pre-5, 5.0, 5.2}`, and already observed on live in `lst-x08` and `con-x21`.

### Probe F3: `ResetConfigToSnapshot` Double-Save `wrap = 0` Regression (`5.6` vs `{pre-5, 5.0, 5.2, 5.4, 5.8}`)

- **Wikitext source**: `one two three four five`
- **Stage 1 HTML (`ref-php`)**: `<p>one two three four five</p>\n\n`
- **C-source mechanism**: Only in `tidy-html5 5.6.0` (commits `350f7b4` and `86e62db`, Issues `#673`/`#704`; reverted in `#705` commit `67eaeb6d` before `5.8.0`), `TY_(DocParseStream)()` calls `TY_(TakeConfigSnapshot)(doc)` *before* `TY_(AdjustConfig)(doc)` (`src/tidylib.c:1447-1448`). Because `php_tidy_parse_string()` calls `tidySaveBuffer()` inside `tidy_doc_update_properties()` (`ext/tidy/tidy.c:519`) and `tidySaveBuffer()` calls `TY_(ResetConfigToSnapshot)(doc)` at exit (`src/tidylib.c:2257`), the snapshot restores the unadjusted `wrap = 0` (`TidyWrapLen = 0`, instead of `0x7FFFFFFF`) and `TidyXmlOut = no` before `purifyHtml` casts `$c2` to string (`tidySaveBuffer()` call #2). During call #2, `CheckWrapLine()` (`src/pprint.c:601`: `GetSpaces + linelen >= 0`) overflows immediately at every word boundary `pprint->wraphere`, emitting a newline per word as reproduced in `htacg/tidy-html5` Issue `#673`.
- **Predicted output by candidate**:
  - `5.6`: wraps every space-separated word across lines (`<p>\none\ntwo\nthree\nfour\nfive</p>`)
  - `pre-5`, `5.0`, `5.2`, `5.4`, `5.8`: `<p>one two three four five</p>` (single line)
- **Elimination power**: Word-per-line wrapping isolates `5.6` (contingent on PHP `ext/tidy` invoking `tidySaveBuffer` twice as in upstream `php-src/ext/tidy/tidy.c`). Single-line preservation eliminates `5.6` (already observed throughout `stage2-evidence/`, e.g. `p28-space-preserved-pre-and-raw` `<p>flow spaces</p>`).

### Auxiliary Non-Standard-Wikitext Probe F4 (`5.0` vs `5.2`, and `5.4` vs `5.8` Equivalence Analysis)

An exhaustive diff of `src/parser.c`, `src/lexer.c`, `src/pprint.c`, `src/attrs.c`, `src/tags.c`, `src/clean.c`, `src/config.c`, and `src/tidylib.c` across `5.0.0`, `5.2.0`, `5.4.0`, `5.6.0`, and `5.8.0` yields an important negative theorem about the `WikiTransformation::purifyHtml` runtime envelope:

First, regarding `5.0` vs `5.2`: both are already eliminated by `F2` (`bb1d62d3`) and `F2b` (`1ac50fcc`), and `lst-x08` already rules both out. Even if one wanted an independent `5.0`-vs-`5.2` discriminator, the main parsing differences between `5.0` and `5.2` (`#307` nested `<a>` in `ParseBlock`, `#345` `CheckUrl` leading spaces) are bypassed because `WikiTransformation`'s XHTML 1.0 Strict DOCTYPE triggers `AdjustTags()` (putting `<a>` back into `ParseInline`) and `tidy_parse_string()` skips `tidyCleanAndRepair()`.

Second, regarding **`5.4` vs `5.8` (without `5.6`'s `#673` regression)**: under `WikiTransformation::purifyHtml`'s exact path (`XHTML 1.0 Strict` wrapper, `indent=false`, `output-xhtml=true`, `wrap=0`, `UTF8`, `tidyParseBuffer` + `tidySaveBuffer`, **no** `tidyCleanAndRepair`), **no pure Stage 1 output producible by `ref-php`'s standard wikitext rules separates `5.4.0` from `5.8.0`**. Every non-debug behavioral commit between `5.4.0` and `5.8.0` (excluding the reverted `#673`/`#704` regression) falls into one of four unreachable classes: (a) HTML5-only branches (`#700` script escaping `!IsHTML5Mode`, `#815` case-insensitive `<!DOCTYPE html>`, `#848` `<slot>`, `#649` `<data>`, `#895` `<summary>`) blocked by `XHTML 1.0 Strict` `AdjustTags()`; (b) `tidyCleanAndRepair()`-only checks (`#726` case-sensitive anchor table, `#912` percentage check, `dir="auto"`); (c) `wrap > 0` / PHP PI pretty-printing (`#437` `wrap-php`, `#697` `NOWRAP` on `<pre>` tag); or (d) HTML comments / raw HTML not emitted by `Text_Wiki` (`#476` `fix-bad-comments: auto` — equal to `yes` on XHTML 1.0 Strict anyway; `#572` commits `09f18068`/`f26a0688` discarding an all-whitespace `TextNode` inside `ParseList` or handling nested `<ol>` after `FindLastLI` — only reachable when `<ul>` or `<ol>` contains an interleaved comment node or raw children not generated by `List.php`). In `ref-php`, `List.php` produces only `<ul><li>...</li></ul>` and `<ol><li>...</li></ol>` (`\n` between `<li>` tags is already skipped by `GetToken(doc, IgnoreWhitespace)`), and nested `<ol>` is emitted *inside* `<li>...</li>`, not as a direct child of outer `<ol>`.

If live permits raw `[[html]]` blocks on a test site, a single `[[html]]` probe (`<ul><!--x-->   </ul>` or `<ol><li>a</li><ol><li>b</li></ol></ol>`) would test `#572` (`09f18068` / `f26a0688`): `5.4.0` leaves the space text node / differs on `FindLastLI`, whereas `5.6`/`5.8` discard the all-whitespace `TextNode`. Under standard `[[html]]`-free wikitext, **`5.4` and `5.8` form an exact observational equivalence class** under `purifyHtml`.

## 3. Elimination Matrix and Summary Decision Table

The table below gives the complete decision matrix over the six candidate versions `{pre-5, 5.0, 5.2, 5.4, 5.6, 5.8}`. Every outcome assumes upstream `php-src/ext/tidy/tidy.c` `tidy_parse_string` behavior and `WikiTransformation::purifyHtml` framing.

| Probe | Source Shape | Outcome Observed | Eliminated Candidates | Surviving Candidates | Already Observed in `stage2-evidence/`? |
| :--- | :--- | :--- | :--- | :--- | :--- |
| F1 | `[[code]]\nabc\n[[/code]]` | `<pre>\n<code>abc</code>\n</pre>` | `5.0`, `5.2`, `5.4`, `5.6`, `5.8` | `pre-5` | Refuted by `p28` |
| F1 | `[[code]]\nabc\n[[/code]]` | `<pre><code>abc</code></pre>` | `pre-5` | `5.0`, `5.2`, `5.4`, `5.6`, `5.8` | **Yes (`p28`)** |
| F2 | `[[span class="   foo"]]x[[/span]]` | `<span class="   foo">x</span>` | `5.4`, `5.6`, `5.8` | `pre-5`, `5.0`, `5.2` | Not directly (indirectly refuted by `lst-x08`) |
| F2 | `[[span class="   foo"]]x[[/span]]` | `<span class="foo">x</span>` | `pre-5`, `5.0`, `5.2` | `5.4`, `5.6`, `5.8` | Corroborated by `lst-x08` (`<script></script>`) |
| F3 | `one two three four five` | `<p>\none\ntwo\nthree\nfour\nfive</p>` | `pre-5`, `5.0`, `5.2`, `5.4`, `5.8` | `5.6` | Refuted by `p28` et al. |
| F3 | `one two three four five` | `<p>one two three four five</p>` | `5.6` | `pre-5`, `5.0`, `5.2`, `5.4`, `5.8` | **Yes (`p28`, `q11`, etc.)** |

Combining `F1`, `F2`, and `F3`: observing single-line `<pre><code>abc</code></pre>`, trimmed `<span class="foo">`, and unwrapped `<p>one two three four five</p>` eliminates `pre-5`, `5.0`, `5.2`, and `5.6`, pinning live to the **`5.4` / `5.8` equivalence class** (matching `stage2/REPORT-STAGE2.md`'s 266-case live Stage 2 corpus — `32/34` Battery A, `27/27` Battery B, `195/205` Battery C plus `9` harness-frame agreements — once entity preservation and omitting `tidyCleanAndRepair` are accounted for). No new probe pages are needed unless `[[html]]`-level raw DOM separation between `5.4.0` and `5.8.0` is required.
