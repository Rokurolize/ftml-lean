# C-R5C-R1-2 — mixed empty/non-empty Raw body with a newline: live emits a rule-level <br />, the reference trims it away

Verdict: CONFIRMED. Capture id muse-probe-round5c-r1-r5cr1-n4 (page-content sha256 01a8bbdadcad5d06612232639e120e58c25d99573cada839b93e606770ba8d37), valid=True, stable=True, saved_source_matches=True. Ledger row R5CR1-N4.

Minimal source: `[[footnote]]@@a@@\n@@@@[[/footnote]]\n\n[[footnoteblock]]`. A non-empty Raw token precedes the authored newline and an empty-Raw placeholder follows it.

Decisive live bytes (footnote-footer rule-level span): `1</a>. <span style="white-space: pre-wrap;">a</span><br /></div>`.

Reference bytes (ref.jsonl line for R5CR1-N4): `1</a>. <span style="white-space: pre-wrap;">a</span></div>`.

After the standard mask and the campaign frame mask both sides keep the separator space and the a span; the sole surviving difference is the `<br />` element that live emits immediately after the span and the reference omits. A `<br />` is a Newline-rule token node, not inter-tag whitespace: the frame mask collapses `>\s+<` but never removes an element, and Stage 2 purifyHtml reframes but does not invent or delete a break. The separator space `a</span>...` is not the differing byte here, so this is a distinct rule-level confirmation from the REFCORR9-corrected symmetric `@@@@\n@@@@` shape.

Mechanism: in `Text_Wiki_Parse_Footnote::process` (ref-php/text-wiki/Text/Wiki/Parse/Default/Footnote.php:71-94) the empty-Raw strip removes only the trailing empty placeholder, leaving a body whose remainder is the non-empty Raw placeholder plus the LF. The REFCORR9 keep-pre-strip guard `/^[ \t]*\n[ \t]*$/D` does not match that remainder, so the REFCORR8 `trim($content)` branch removes the LF before the body is stored. With no inline byte before the newline the Newline rule never fires and the reference footer has no `<br />`. Live preserves the authored separator and emits it. The REFCORR9 completion therefore fixes the symmetric empty/empty case but not a mixed Raw body, which is this fresh sibling. Owning reference file: Parse/Default/Footnote.php (guarded re-trim at lines 90-94); the separator-side consumer is Render/Xhtml/Footnoteitem.php (visible-body test at lines 66-80).

Candidate name: C-R5C-R1-2.
