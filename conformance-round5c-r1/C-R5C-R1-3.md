# C-R5C-R1-3 — empty-Raw then newline then non-empty Raw: live emits <br /> with no separator space, the reference does the opposite

Verdict: CONFIRMED. Capture id muse-probe-round5c-r1-r5cr1-n5 (page-content sha256 882c00d9863ed25e9155f2e84d97a69d9aea0332db9a3ad001070f4c22c46ae2), valid=True, stable=True, saved_source_matches=True. Ledger row R5CR1-N5.

Minimal source: `[[footnote]]@@@@\n@@b@@[[/footnote]]\n\n[[footnoteblock]]`. An empty-Raw placeholder precedes the authored newline and a non-empty Raw token follows it.

Decisive live bytes (footnote-footer rule-level span): `1</a>.<br />\n<span style="white-space: pre-wrap;">b</span></div>`.

Reference bytes (ref.jsonl line for R5CR1-N5): `1</a>. <span style="white-space: pre-wrap;">b</span></div>`.

After the standard mask and the campaign frame mask the live form is `1</a>.<br /><span style="white-space: pre-wrap;">b</span></div>` and the reference form is `1</a>. <span style="white-space: pre-wrap;">b</span></div>`. Two rule-level differences survive: live has a `<br />` node that the reference lacks, and live omits the separator space after the back-reference that the reference emits. The `<br />` is a Newline-rule token, and the `>. <` separator is explicitly not an inter-tag newline (the REFCORR9 R9-H record already treats that exact byte as rule-level), so neither is an owned frame surface or a token-id digit. This is the mirror-order sibling of C-R5C-R1-2 with a different capture hash, source and decisive byte sequence.

Mechanism: the same guarded re-trim as C-R5C-R1-2. In `Text_Wiki_Parse_Footnote::process` the strip removes the leading empty-Raw placeholder, leaving the LF plus a non-empty Raw placeholder; `isLoneNewlineRemainder`'s PHP counterpart `/^[ \t]*\n[ \t]*$/D` fails because of the non-empty placeholder, so the REFCORR8 trim drops the LF and the reference stores a body with no break. Live keeps the placeholder-bearing newline, so its Newline rule emits `<br />` and its separator consumer reads the visible body as empty and emits no space. The reference's own visible-body test keeps the non-empty Raw placeholder in the visible body, so it emits the space. Owning reference files: Parse/Default/Footnote.php (guarded re-trim at lines 90-94) and Render/Xhtml/Footnoteitem.php (token-aware visible-body separator at lines 66-80).

Candidate name: C-R5C-R1-3.
