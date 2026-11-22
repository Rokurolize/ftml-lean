# REPORT-STAGE2-REMAINDER: U1, U2–U5, and C-R43-1 settled

This lane ran the settling shapes named in REPORT-STAGE2.md section 7, plus the further shapes those results forced, and the C-R43-1 footnote block-boundary family. Live Wikidot on sandbox-for-codex is the oracle. Every capture this report relies on has `valid`, `stable`, and `saved_source_matches` all true. New pages are left in place under the prefix `muse-probe-stage2r-` (39 pages; sources in `stage2-evidence/remainder-probes.jsonl`, map in `stage2-evidence/remainder-map.json`, captures in `stage2-evidence/remainder-captures.json`). The pre-correction model is the byte-identical backup `stage2-model/Stage2.lean.bak-stage2-remainder`. Baseline battery files are `stage2-evidence/*-results-preremainder.jsonl`.

## 1. U1, the p15 tail

p15 (`**A ##red|B //C [[size 120%]]D** E## F// G[[/size]]`) was the one battery disagreement. Stage 1 emits `<strong>A <span color>B <em>C <span size>D</strong> E</span> F</em> G</span>`. Live serves `<strong>…D</span></em></span> <em>E</em></strong> <em>F</em> G`. The previous model closed the crossed spans and did not reopen them, so `E` and `F` stayed in one reopened `em` inside the still-open `strong`.

The mechanism is tidy’s inline stack (`ParseInline` / `SwitchInline` / `InlineDup1`), which the probes pin and which the model now implements. The istack has one slot per tag name: a second `span` is open in the tree but does not get its own slot, and “pushed” is a tag test. An inline end tag is handled from the current innermost element, not by jumping to a matching ancestor:

- A matching closer closes that element and pops one istack slot. An anchor pops through the anchor slot.
- A mismatched closer, when both tags occupy istack slots and the current tag sits above the closer’s tag, swaps those two slots, schedules a reopen of the slice that starts at the current tag’s new index, closes the current element, and retries the same closer against the parent. The slice is read when the next token is taken, so pops made while the closer is still being retried still apply. Spans are in that slice. They are not dropped.
- If the swap cannot be made, the top istack slot is popped, the closer is discarded, and the current element closes.
- An anchor closer is not swapped. Each descendant inline closes with nothing scheduled, and the anchor then closes. Nothing reopens.

That is why p15’s tail looks special. The inner size span shares the span slot with the color span, so the strong closer closes the size span without a slot of its own to reopen. The retry then discards `</strong>` inside the color span and closes that span. The scheduled reopen is the `em`. The later `</span>` (the color closer) is not an open span anymore: it closes the reopened `em` and then the `strong`, and the following `</em>` reopens an `em` outside the strong. The final size closer is discarded. The same rule, with only one span open, reopens that span; it does not close the strong at the span’s closer.

Probes (all `muse-probe-stage2r-…`, all valid):

| Probe | What it decided |
| --- | --- |
| `u1-span-then-em` | Depth-2 crossing of `em` and one span, then the span closer and the em closer. Live reopens both, span inside em: `<em><span>D</span> E</em>` inside the strong. The span is not dropped. |
| `u1-plain-between` | Same crossing with plain text between the span closer and the em closer. The span closer rotates the reopened pair (`<span><em>D</em></span>`), and the em closer reopens `em` around `PLAIN`. |
| `u1-tail-after` | The em closer arrives before the span closer, then plain text. Live is `<em><span>D</span></em> <span>E</span> TAIL` inside the strong. The text after both closers stays in the strong. |
| `u1-two-spans` | Two spans and no other crossed inline. Only the span slot (the outer size span’s attributes) reopens: `<span size>D</span> E` inside the strong. The inner color span has no slot. |
| `u1-tt-span`, `u1-sup-span`, `u1-underline`, `u1-three` | The same retry with `tt`, `sup`, underline (itself a span), and a depth-3 stack `sup > em > span`. Each later closer is one more tidy step. `u1-three` lands on `<span><sup><em>E</em></sup> <em><sup>F</sup></em> <sup>G</sup></span>`. |
| `u1-em-target` | The target is the `em`. After the crossing, the strong’s closer arrives while the reopened strong is open. Live closes that strong and reopens the span slot around the following text. |
| `u1-stray-star`, `u1-stray-slash` | After a depth-1 rotation, a second `**` or `//` is literal text in stage 1 (`D**`, `D//`). Live is the ordinary rotation `<strong>A <em>B</em></strong> <em>C</em>`. No stray end tag is emitted, so nothing reopens at one. |

Shape (i) in the previous report is `u1-span-then-em`, `u1-plain-between`, `u1-tail-after`, and `u1-two-spans`. Shape (ii), a second closer for the target while a reopened element is still open, is not a stage 1 token: a second `**` stays literal (`u1-stray-star`). The target’s closer is the crossing token. `u1-em-target` is the case the shape was aiming at, and it follows the retry rule. Shape (iii) is `u1-stray-star` and `u1-stray-slash`: reopening at a later closer happens only when stage 1 still emits that closer after the repair has closed the element. It does not happen for an element whose closer stage 1 has already consumed.

Rule. An inline end tag repairs from the innermost open element by the tidy stack above: one istack slot per tag name, swap-and-retry when both tags are slotted and ordered, discard-and-close when the swap cannot be made, and no reopen across an anchor. The p15 tail is that rule with two spans sharing one slot.

## 2. U2, paragraph unwrap

The previous boundary was fitted to p09 (keep the paragraph) and in2-x48 (unwrap). The new probes pin it and show where the named shapes are not separate inputs.

- `u2-two-align` (`muse-probe-stage2r-u2-two-align`). Two center-div opens inside an outer div. Stage 1 ends the paragraph at each div open, so each paragraph body is `A<br /><div …>` or `B<br /><div …>`: one unclosed block start and no completed pair. Live keeps each paragraph and closes it before the div, which is the p09 rule applied twice. Two unclosed divs never share one paragraph body; stage 1 will not emit that body.
- `u2-table-then-div`. A table inside the paragraph is a completed block pair, and stage 1 closes the paragraph after the table, before the following div. Live unwraps that paragraph (`text<br />` then the table, then the div as a sibling). A balanced div followed by an unclosed div inside the same paragraph body is not a stage 1 shape either: a real div open ends the paragraph.
- `u2-root-collapsible` and `u2-nested-collapsible`. The collapsible preamble is the smallest body stage 1 does emit with completed block pairs beside unclosed starts (two closed pairs, three still open at the paragraph’s closer). Live unwraps it at the root and inside a div. The nested paragraph follows the same rule as the root one. in2-x48 remains the root pin; `u2-nested-collapsible` pins the non-root case.

Rule. Unwrap a paragraph whose body contains a block trigger when the body is fully balanced or contains at least one completed block pair. A body whose block starts are all unclosed, with no completed pair, keeps the paragraph. Stage 1 does not put two unclosed divs, or one completed div plus a later unclosed div, into one paragraph body; each real div open ends the paragraph first.

## 3. U3, break dropping

- `u3-div-div`, `u3-p-table`, `u3-quote-list`, `u3-div-list`. Stage 1 emits no break between these sibling pairs. Live joins them with one newline. There is no sandwiched break to drop.
- `u3-div-table` and `u3-br-in-div`. Stage 1 does emit a break between a div and a following table, at the root and as a child of a div (`</div><br /><table>`). Live keeps that break. The previous rule dropped every break between two blocks, so both probes disagreed until the rule was narrowed.
- A break as the first child of a div is not produced by a following table or by a blank line (`[[div]]` then an advanced table renders `<div><table>` with no break). `u3-br-in-div` is the between-children case, and the break is kept.
- tab-x16 remains the drop: the break is the immediate next sibling of a table and the next non-whitespace sibling is a table. tab-x36 stays a keep, because a text node stands between the preceding block and the break.

Rule. Drop a break only when its immediate previous sibling is a `table` and its next non-whitespace sibling is a `table`. Every other break stays. Pairs that stage 1 joins with no break stay joined by one newline.

## 4. U4, the anchor boundary past depth 1

- `u4-two`: anchor, then strong, then em, then the anchor closer. Live is `<a>A <strong>B <em>C</em></strong></a> D E`. Neither crossed inline reopens.
- `u4-three`: the same with a third crossed `tt`. Live closes all three inside the anchor and does not reopen them.
- `u4-span-em`: the crossed pair is a span and an em. Live closes both inside the anchor and does not reopen them.
- q10 remains the depth-1 pin.

Rule. When the target is an anchor, every crossed inline closes and none is reopened, at depth 1, 2, and 3. The any-depth behavior in the model is the observed rule.

## 5. U5, lone image and lone rule

- `u5-img` and `u5-hr`. Stage 1 emits a bare `<img … />` and a bare `<hr />`. Live serves those, not a paragraph wrapped around them.
- `u5-img-between` and `u5-hr-between`. Between two paragraphs the image and the rule stay bare, one newline from each paragraph. p29 remains the case with text on both sides of an image inside a paragraph, which unwraps.

Rule. A lone image and a lone rule are not paragraphs in the stage 1 input, and stage 2 does not wrap them. There is no separate lone-content unwrap exception to fit.

## 6. C-R43-1, footnote block boundaries

The seven `muse-probe-r43-*` captures (REPORT-R43.md) already showed the outline. These probes settle the family against the model. All eleven agree with the corrected model, and con-x30 / con-x31 in battery C already agreed before this lane:

- `r43-div`, `r43-code`, `r43-collapsible`, `r43-two-div`, `r43-div-list`. The body’s first rendered node is a claimed block. Live puts a newline where stage 1 had the separator space: `1</a>.\n<div` (and the same before a code div or a collapsible).
- `r43-list`, `r43-text-list`. The list’s first item stays literal and the list element starts at the next item. Live keeps the separator space and puts the newline later, before the `<ul>`: `1</a>. * one\n<ul>` and `1</a>. lead\n<ul>`.
- `r43-span-div`. A span first keeps the space (`1</a>. <span>S</span>`), and the newline appears before the following div.
- `r43-text-div-text`. `lead\n<div>…</div>\n<br />\ntail`. The newline before the div is the block join; the break after the div is kept (it is not between two tables).
- `r43-heading`, `r43-table`. A heading and a simple table are not claimed inside the footnote body. They stay literal text, and live keeps the separator space with no newline.

Rule. The footnote separator space is the ordinary text node stage 1 emits after `</a>.`. Pass 4 strips trailing whitespace on a text node whose next sibling is a block, and pass 5 puts one newline between that node and the block. When the body’s first rendered node is a block, the space is trimmed away and the newline stands in its place. When the first node is not a block, the space stays, and the same newline appears later at each real block boundary inside the body. No footnote-specific separator is required. Heading, table, and one-line list markup that stage 1 leaves literal never become that boundary.

## 7. Model corrections and batteries

M6, pass 3 inline end tags (U1, and it also carries U4). The depth-at-least-2 branch that dropped crossed spans is gone. Inline end tags take the tidy retry in section 1. A first form of the flush reopened deferred inlines before every non-text token, which pulled a span out in front of a div and regressed p25; that run is `stage2-evidence/battery-*-u1-results.jsonl` (A 32/34, with p15 fixed and p25 broken, B 27/27, C 195/205, r4c4 1/1). The flush is only on an inline end tag, which is where the scheduled reopen has to be open for the closer. Block boundaries keep the existing deferred-reopen path. p25 agrees again.

M7, pass 4 break dropping (U3). `dropBlockSandwichedBrs` drops a break only between two tables. Div/table breaks are kept.

Strict driver counts, outer whitespace stripped, before (`*-results-preremainder.jsonl`) and after the final model (`*-results.jsonl`):

| Battery | Before | After |
| --- | --- | --- |
| A (34) | 32/34 | 33/34 |
| B (27) | 27/27 | 27/27 |
| C (205) | 195/205 | 195/205 |
| r4c4 | 1/1 | 1/1 |

A’s remaining disagreement is p34, the recorded stage 1 candidate (div attribute order). The set change is exactly p15 moving to agree, with no regression. C’s ten disagreements are the same nine harness-frame cases and con-x24, the recorded stage 1 candidate. The 39 remainder probes agree with the final model, including the two U3 probes the old drop rule missed. Of the 266 battery cases, 255 agree outright, 9 agree modulo the recorded harness frame, and 2 are the recorded stage 1 candidates.

## 8. Updated remainder

None of U1, U2, U3, U4, U5, or C-R43-1 remains open. p34 and con-x24 stay the stage 1 candidates already recorded in REPORT-STAGE2.md. The nine harness-frame cases stay in that class.

COMPLETE
