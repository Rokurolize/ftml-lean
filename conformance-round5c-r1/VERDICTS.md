# R5C-R1 verdicts — all sixteen ledger rows

Grading used the standard wikidot-probe.norm() mask plus the campaign frame mask (inter-tag `>\s+<` collapse and trim). A capture is usable only when valid, stable and saved-source-matching; an unusable capture is UNTESTABLE, never a divergence and never a clearance. Stage 2 purifyHtml frame differences and token-id counter digits are owned classes and cannot confirm.

| ID | Verdict | Evidence |
|----|---------|----------|
| R5CR1-D1 | CONFIRMED (C-R5C-R1-1) | capture muse-probe-round5c-r1-r5cr1-d1; live `<div id>` vs ref `<div>` after mask |
| R5CR1-D2 | CLEARED | capture muse-probe-round5c-r1-r5cr1-d2; frame-only inter-tag newline difference |
| R5CR1-D3 | CLEARED | capture muse-probe-round5c-r1-r5cr1-d3; frame-only inter-tag newline difference |
| R5CR1-D4 | CLEARED | capture muse-probe-round5c-r1-r5cr1-d4; role="" agrees, frame-only difference |
| R5CR1-D5 | CLEARED | capture muse-probe-round5c-r1-r5cr1-d5; strict masked match |
| R5CR1-D6 | CLEARED | capture muse-probe-round5c-r1-r5cr1-d6; data-x="" agrees, frame-only difference |
| R5CR1-N1 | CLEARED | capture muse-probe-round5c-r1-r5cr1-n1; <br /> and no separator agree; frame-only difference |
| R5CR1-N2 | UNTESTABLE | no valid capture: the authored tab after the newline is rewritten to four spaces by the Wikidot save layer (intended sha256 7e9bd3b2166a3748a683e049243dca69e758eddab9d0227ce24049df7887df66, saved sha256 f4281e90a5a4d7c15728429d8a931ed18c6197afc5de3cb0ab60382ed65ab342); see create.err and scratch/read_n2.py |
| R5CR1-N3 | CLEARED | capture muse-probe-round5c-r1-r5cr1-n3; NBSP and <br /> and separator agree; frame-only difference |
| R5CR1-N4 | CONFIRMED (C-R5C-R1-2) | capture muse-probe-round5c-r1-r5cr1-n4; live has a <br /> node after the span, ref has none |
| R5CR1-N5 | CONFIRMED (C-R5C-R1-3) | capture muse-probe-round5c-r1-r5cr1-n5; live has <br /> with no separator, ref has separator with no <br /> |
| R5CR1-K1 | CLEARED | capture muse-probe-round5c-r1-r5cr1-k1; display:none and two hide links agree; frame-only difference |
| R5CR1-K2 | CLEARED | capture muse-probe-round5c-r1-r5cr1-k2; top-only hide link and display values agree; frame-only difference |
| R5CR1-T2 | CLEARED | capture muse-probe-round5c-r1-r5cr1-t2; bare second anchor and masked tab ids agree; frame-only difference |
| R5CR1-L2 | CLEARED | capture muse-probe-round5c-r1-r5cr1-l2; a&amp;b and c&amp;d agree; frame-only difference |
| R5CR1-Z2 | CLEARED | capture muse-probe-round5c-r1-r5cr1-z2; strict masked match |

Tally: 16 suspicions, 15 pages created and captured, 15 valid/stable/source-matching captures, 3 CONFIRMED, 12 CLEARED, 1 UNTESTABLE. Confirmations C-R5C-R1-2 and C-R5C-R1-3 share one mechanism family (mixed empty/non-empty Raw around a lone authored newline) but have distinct sources and decisive bytes; C-R5C-R1-1 is an independent Div id-guard edge.

Operational note: the create tool logged intermittent AMC try_again responses for d4 and n2 across two attempts; readback verification confirmed every saved page except n2, and the final capture recorded saved_source_matches=True for all 15 captured pages. No source identity drifted among them.
