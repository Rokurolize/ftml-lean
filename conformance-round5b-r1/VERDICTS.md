# VERDICTS — R5B-R1 (render-side block and container rules, round 5b)

One row per pre-probe ledger suspicion. Live bytes are the cached wikidot-probe page-content captures; reference bytes are this ground's ref-php batch.php render on the same source. Grading uses the standard wikidot-probe norm() mask plus the campaign frame mask; attribute ordering, inter-tag newlines, trailing paragraph newlines, &nbsp;/U+00A0 spelling, random tab ids, date attributes, token-id counter digits and Stage 2 purifyHtml frame differences are owned surfaces and cannot confirm a divergence. All 14 captures are valid, stable and source-matching, so there are no UNTESTABLE rows.

| ID | Verdict | Evidence |
|----|---------|----------|
| R5BR1-D1 | CLEARED | capture id muse-probe-round5b-r1-r5br1-d1 (frame-masked MATCH; inter-tag newline only) |
| R5BR1-D2 | CLEARED | capture id muse-probe-round5b-r1-r5br1-d2 (frame-masked MATCH; inter-tag newline only) |
| R5BR1-D3 | CLEARED | capture id muse-probe-round5b-r1-r5br1-d3 (frame-masked MATCH; inter-tag newline only) |
| R5BR1-D4 | CLEARED | capture id muse-probe-round5b-r1-r5br1-d4 (frame-masked MATCH; inter-tag newline only) |
| R5BR1-P1 | CLEARED | capture id muse-probe-round5b-r1-r5br1-p1 (frame-masked MATCH; class="" survives on live) |
| R5BR1-P2 | DIFF | capture id muse-probe-round5b-r1-r5br1-p2 (frame-masked DIFF: live id="" vs reference id="u-") |
| R5BR1-P3 | CLEARED | capture id muse-probe-round5b-r1-r5br1-p3 (frame-masked MATCH; id="u-" and class="" both survive) |
| R5BR1-P4 | CLEARED | capture id muse-probe-round5b-r1-r5br1-p4 (frame-masked MATCH; data-x="" survives) |
| R5BR1-S1 | CLEARED | capture id muse-probe-round5b-r1-r5br1-s1 (strict-mask MATCH) |
| R5BR1-Z1 | CLEARED | capture id muse-probe-round5b-r1-r5br1-z1 (strict-mask MATCH) |
| R5BR1-C1 | CLEARED | capture id muse-probe-round5b-r1-r5br1-c1 (frame-masked MATCH; inter-tag spaces only) |
| R5BR1-T1 | CLEARED | capture id muse-probe-round5b-r1-r5br1-t1 (frame-masked MATCH; bare anchor, tab ids masked) |
| R5BR1-L1 | CLEARED | capture id muse-probe-round5b-r1-r5br1-l1 (frame-masked MATCH; class="a&amp;b" matches) |
| R5BR1-H1 | CLEARED | capture id muse-probe-round5b-r1-r5br1-h1 (strict-mask MATCH; clear:both) |

Counts: 1 CONFIRMED (C-R5B-R1-1, R5BR1-P2), 13 CLEARED, 0 UNTESTABLE. The single DIFF is a rule-level attribute-value difference and is not an owned token-id counter or Stage 2 frame surface: live serves the literal bytes id="" and the reference serves id="u-", with no counter digits in either value.
