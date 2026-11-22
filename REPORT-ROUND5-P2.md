# REPORT-ROUND5-P2 — parse-side inline suspicion hunt, round 5 lane P2

This is an evidence-only adoption payload for the coordinator. Unit R5-P2 read COORD-UNITS/PROTOCOL-R5.md in full first and obeyed it on canonical base e53e7234008860a92e53b93d851c49a0e2b04043: no ftml edits, no cargo, no git identity changes, no stash, no Lean invocation, and writes confined to coord-units/R5-P2/. The pre-probe ledger is coord-units/R5-P2/LEDGER.md; cases.jsonl was generated from it by gen_cases.py; nineteen pages were created with the standard wikidot-probe tool on sandbox-for-codex under prefix muse-probe-round5-p2- and captured once each with the standard double-fetch, source-verification recipe; the identical sources were rendered through the canonical PHP harness; and page-content bytes were compared with probe.norm plus the campaign frame mask in compare.py. All nineteen captures are valid, stable and source-matched. Live Wikidot behavior is definitional however malformed; the gabrys/wikidot fossil was never used as behavior evidence.

Tallies: 19 suspicions raised pre-probe, 19 probed, 19 valid/stable/source-matched, 0 untestable, 4 confirmed, 15 cleared. Confirmed candidate names are C-R5-P2-1 (Freelink U+000B before `_default:`), C-R5-P2-2 (Freelink U+00A0 before `_default:`), C-R5-P2-3 (Math uppercase `TYPE="align"` attribute name selects environment equation on live against the reference/mirror align default) and C-R5-P2-4 (Mathinline source-span expansion drops a Date token where live suppresses the whole formula to `$$`). Full per-case reasoning, decisive bytes, capture ids, reference lines, owning files and inferred mirror consequences are in conformance-round5-p2/CANDIDATES.md; the ledger records the pre-probe CONFIRM and CLEAR byte predictions for every row.

Cleared rows R5P2-03 through R5P2-15 and R5P2-17 and R5P2-19 are byte-identical after the standard and campaign masks, including the doubled `_default:` prefix, two-math-opener Url boundary, pipe-before-opener split, authored U+FFFD in an Email label, Image-placeholder Email leak modulo the owned token-index digit, unknown Interwiki site fallback, Colortext tab and functional-notation spaces, empty Strikethrough pair, whitespace-padded Strong body, three-pair empty Emphasis run, Code language/filename attributes, glued Code closer, Math counter advancement after a rejected block, and depth-three Mathinline Freelink suppression. R5P2-16's equation PNG serving surface is not the confirmed value: the confirmation rests on the rule-level Math `type` option (reference token `align`, live envelope `equation`), which the reference token stream establishes independently of its no-op LatexRenderer stub.

Adoption destination: copy this file to the canonical tree root as REPORT-ROUND5-P2.md and copy the eight files below into a new canonical directory conformance-round5-p2/. No source files are included: no reference PHP, mirror Lean, spec, pins or gates are proposed for adoption by this payload. The coordinator should treat the four confirmed candidates as input to REFCORR8 if the round is not zero.

| Canonical destination file | Source in coord-units/R5-P2/adoption/ | sha256 |
|---|---|---|
| REPORT-ROUND5-P2.md | REPORT-ROUND5-P2.md | (self-hash recorded in coord-units/R5-P2/UNIT.md after write) |
| conformance-round5-p2/CANDIDATES.md | conformance-round5-p2/CANDIDATES.md | f31d60072759f95cbd8d15de5526ae437b310906e338affa208c521294f40c6b |
| conformance-round5-p2/LEDGER.md | conformance-round5-p2/LEDGER.md | 83bfbefcf3cdedde9034792d1f69425dddd519ca0aaf6d835e1e2f8ee2ca3f68 |
| conformance-round5-p2/cases.jsonl | conformance-round5-p2/cases.jsonl | 5e41e698aec36d223f56132b38a580635f39dfdae8452dafb40aaf70524a7f8a |
| conformance-round5-p2/map.json | conformance-round5-p2/map.json | fd58f68b37527b2b5dbbb3e8f0ad0e4ba94b4aafe57438901ce1bb1ea93bd6b4 |
| conformance-round5-p2/captures.json | conformance-round5-p2/captures.json | b693aa15c1aa15e79813d64441e512ef30e1e0d4a4f652b32debb7d95101e92f |
| conformance-round5-p2/ref.jsonl | conformance-round5-p2/ref.jsonl | b8105449849313d01f58047a280c79b515917e78864c33c6d688da92047b6155 |
| conformance-round5-p2/ref.err | conformance-round5-p2/ref.err | e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 |
| conformance-round5-p2/comparison.json | conformance-round5-p2/comparison.json | 3807fd05081ede199a1b0529ccc6511a8d8e037835861ec5b95aa402f3b56e77 |

All rows above are flowing single-line paragraphs, never hard-wrapped; every page, capture and artifact referenced remains in place for coordinator verification.
