# VERDICTS — R5D-R1 render-side block and container rules, round 5d

All eighteen pre-probe suspicions were probed on sandbox-for-codex under the prefix muse-probe-round5d-r1- with the standard wikidot-probe double-fetch recipe from the canonical tree root, and all eighteen captures are valid=true, stable=true and saved_source_matches=true. The canonical PHP harness rendered the identical cases.jsonl with exit 0 and zero stderr bytes. Every case was graded after the standard wikidot-probe.norm() mask plus the campaign frame mask (inter-tag newlines, trailing paragraph newlines, &nbsp;/U+00A0 spelling, random tab ids and date attributes, token-id counter digits and Stage 2 purifyHtml frame differences are owned classes). Every case agrees with the reference on every rule-level byte after that mask, so this lane returns ZERO CONFIRMED. No mirror inspection was triggered because there is no confirmed reference divergence.

| ID | Family | Decisive rule-level live bytes | Reference bytes | Verdict | Reason category |
|----|--------|--------------------------------|-----------------|---------|-----------------|
| R5DR1-D1 | Div uniform id rule sibling | `<div id="">` with body paragraph and closing div | same | CLEARED | direct rule-level agreement; frame-only inter-tag/trailing newlines |
| R5DR1-D2 | Div uniform id rule sibling | `<div id="">` (Raw placeholder cleared) | same | CLEARED | direct rule-level agreement; frame-only newlines |
| R5DR1-D3 | Div uniform attribute sibling | `<div class="a b">` | same | CLEARED | direct rule-level agreement; frame-only newlines |
| R5DR1-D4 | Div uniform attribute sibling | `<div data-x="">` (later case-variant empty kept) | same | CLEARED | direct rule-level agreement; frame-only newlines |
| R5DR1-D5 | Div uniform id rule sibling | `<div id="u-">` | same | CLEARED | direct rule-level agreement; frame-only newlines |
| R5DR1-D6 | Div uniform attribute sibling | `<div type="">` | same | CLEARED | direct rule-level agreement; frame-only newlines |
| R5DR1-S1 | Span nested-token attribute | `<p><span>x[[/size]]&quot;]]body</span></p>` | same | CLEARED | strict match after norm; only trailing paragraph newlines differ in raw bytes |
| R5DR1-Z1 | Size verbatim interpolation | `<p><span style="font-size:00012px;">x</span></p>` | same | CLEARED | strict match after norm; only trailing paragraph newlines differ in raw bytes |
| R5DR1-K1 | Collapsible default label | folded link `+&nbsp;show&nbsp;block`, unfolded `style="display:none"` | same | CLEARED | direct rule-level agreement; frame-only inter-tag newlines |
| R5DR1-K2 | Collapsible folded comparison | uppercase FALSE leaves `style="display:none"` on the unfolded panel | same | CLEARED | direct rule-level agreement; frame-only inter-tag newlines |
| R5DR1-K3 | Collapsible label escaping | label `a&amp;&lt;b&quot;c'd` with raw apostrophe | same | CLEARED | direct rule-level agreement; frame-only inter-tag newlines |
| R5DR1-T1 | Tabview placeholder sentinel | bare first anchor `<a href="javascript:;"></a>` | same | CLEARED | serving surface (CDN script URL, random tab id, OZONE wrapper) plus frame newlines; rule-level anchor matches |
| R5DR1-T2 | Tabview label escaping | `<em>a&amp;&lt;b&gt;c</em>` | same | CLEARED | serving surface plus frame newlines; rule-level label matches |
| R5DR1-T3 | Tabview default label | `<em>untitled</em>` | same | CLEARED | serving surface plus frame newlines; rule-level label matches |
| R5DR1-L1 | ListRules guard sibling | `<ul>\n<li class="a&amp;b">x<br />` unclosed fragment | same | CLEARED | strict match after norm; byte-identical raw output |
| R5DR1-L2 | ListRules guard sibling | two `<li>` items A and B then `<br />` | same | CLEARED | frame-only newline placement around the trailing break |
| R5DR1-L3 | List depth-skip | literal `<p>** b</p>` between two single-item lists | same | CLEARED | frame-only inter-tag newlines |
| R5DR1-B1 | Blockquote nested marker | escaped literal `&gt; b` inside one paragraph | same | CLEARED | frame-only inter-tag newlines and trailing paragraph newline |

The raw differences for every row are confined to three owned classes: inter-tag newlines inserted by the live tidy layer (`>\n<` versus `><`), trailing paragraph newlines (`</p>\n\n` versus `</p>`), and, for the three Tabview rows, serving-layer surfaces the campaign mask owns (a cloudfront CDN script URL in place of the local script path, a random tabview id in place of the token counter, and an OZONE onDomReady wrapper in place of the fossil's inline script). None of these is a rule-level value, so none can confirm a divergence under PROTOCOL-R5. The three strict-match rows (S1, Z1, L1) are byte-identical after norm and differ only in trailing paragraph newlines in the raw capture. There are no UNTESTABLE rows, no invalid captures and no save-normalized sources in this pass.
