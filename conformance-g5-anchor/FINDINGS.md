# G5 render mismatch findings

No Lean or PHP implementation file was edited to force agreement. The only corrections made during harness construction were in the lane-owned comparison harness itself (canonical document-state pair encoding and PHP null-token-result normalization to the empty bytes concatenated by `Text_Wiki::render`).

## G5-F1 — Toc item sentinel width is doubled in both Lean render paths

PHP source adjudication: `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Toc.php:105-125` sets `$d = "\x00"` and writes exactly `$d$d` in both `item_start` and `item_end`: two NUL bytes at each sentinel. `LeanFtml/RenderCore.lean` defines `tocStripDelim` as `[0, 0, 0, 0]`, so both the mirror and spec emit four. Both Lean sides are wrong against the PHP source text.

### case `corpus/prose/toc74-clear-float/tok3`

input options: `{"type": "item_start", "id": "toc0", "level": 1, "count": 0}`

PHP: utf8/escaped: `"\n\t<div style=\"margin-left: 1em;\"><a href=\"#toc0\">\u0000\u0000"`
hex: `0a093c646976207374796c653d226d617267696e2d6c6566743a2031656d3b223e3c6120687265663d2223746f6330223e0000`

mirror: utf8/escaped: `"\n\t<div style=\"margin-left: 1em;\"><a href=\"#toc0\">\u0000\u0000\u0000\u0000"`
hex: `0a093c646976207374796c653d226d617267696e2d6c6566743a2031656d3b223e3c6120687265663d2223746f6330223e00000000`

spec: utf8/escaped: `"\n\t<div style=\"margin-left: 1em;\"><a href=\"#toc0\">\u0000\u0000\u0000\u0000"`
hex: `0a093c646976207374796c653d226d617267696e2d6c6566743a2031656d3b223e3c6120687265663d2223746f6330223e00000000`

### case `corpus/prose/toc74-clear-float/tok4`

input options: `{"type": "item_end", "level": 1}`

PHP: utf8/escaped: `"\u0000\u0000</a></div>"`
hex: `00003c2f613e3c2f6469763e`

mirror: utf8/escaped: `"\u0000\u0000\u0000\u0000</a></div>"`
hex: `000000003c2f613e3c2f6469763e`

spec: utf8/escaped: `"\u0000\u0000\u0000\u0000</a></div>"`
hex: `000000003c2f613e3c2f6469763e`

### case `corpus/prose/x-anchor-across-containers/tok7`

input options: `{"type": "item_start", "id": "toc1", "level": 1, "count": 1}`

PHP: utf8/escaped: `"\n\t<div style=\"margin-left: 1em;\"><a href=\"#toc1\">\u0000\u0000"`
hex: `0a093c646976207374796c653d226d617267696e2d6c6566743a2031656d3b223e3c6120687265663d2223746f6331223e0000`

mirror: utf8/escaped: `"\n\t<div style=\"margin-left: 1em;\"><a href=\"#toc1\">\u0000\u0000\u0000\u0000"`
hex: `0a093c646976207374796c653d226d617267696e2d6c6566743a2031656d3b223e3c6120687265663d2223746f6331223e00000000`

spec: utf8/escaped: `"\n\t<div style=\"margin-left: 1em;\"><a href=\"#toc1\">\u0000\u0000\u0000\u0000"`
hex: `0a093c646976207374796c653d226d617267696e2d6c6566743a2031656d3b223e3c6120687265663d2223746f6331223e00000000`

## G5-F2 — Freelink textFromTitle fallback omits the unix-name fallback

PHP source adjudication: `Freelink.php:102-106` replaces the empty-pipe text for an existing page with `$pageObj->getTitleOrUnixName()`. For a page with no authored title this is the page unix name. The Lean mirror/spec instead use `(env.pageTitle page).getD text` (`RefRender.lean:99` and `:895`), so a missing title leaves the literal pipe text. The positive special-character title branch does anchor (`synthetic/freelink-title-target`); the no-title fallback is wrong in both Lean sides.

### case `corpus/r48/freelink-exist2-empty-label/tok0`

input options: `{"site": null, "page": "muse-probe-r2link-free-exists2", "text": "|", "anchor": "", "extra": "", "url": null, "textFromTitle": true}`

PHP: utf8/escaped: `"<a href=\"/muse-probe-r2link-free-exists2\">muse-probe-r2link-free-exists2</a>"`
hex: `3c6120687265663d222f6d7573652d70726f62652d72326c696e6b2d667265652d65786973747332223e6d7573652d70726f62652d72326c696e6b2d667265652d657869737473323c2f613e`

mirror: utf8/escaped: `"<a href=\"/muse-probe-r2link-free-exists2\">|</a>"`
hex: `3c6120687265663d222f6d7573652d70726f62652d72326c696e6b2d667265652d65786973747332223e7c3c2f613e`

spec: utf8/escaped: `"<a href=\"/muse-probe-r2link-free-exists2\">|</a>"`
hex: `3c6120687265663d222f6d7573652d70726f62652d72326c696e6b2d667265652d65786973747332223e7c3c2f613e`

## G5-F3 — resolved in this branch

The trailing token-table lookup is now threaded into `renderRefSpec` for Footnoteitem and Gallery. The former synthetic empty-Raw separator counterexample is part of the retained case set and is expected to byte-match; it is therefore no longer adjudicated as a genuine mismatch.
