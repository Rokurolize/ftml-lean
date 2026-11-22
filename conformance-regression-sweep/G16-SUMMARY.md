# G1.6 seam typography harness slice — regression sweep summary

Baseline: 271,453/271,453 inputs agree with the real ftml seam code, 0 got mismatches, 0 naive-oracle mismatches, 0 model-got-versus-corrected differences, with Rust difference classes 3,239 / 342 / 139 / 1 and 267,732 outright agreements (conformance-g16/RESULTS.md and REPORT-G16.md). The brief asks for the retained slice the tree carries.

Method: the driver lean-ftml-conformance-g16 was rebuilt by name through the serial queue wrapper (logs/build-rest.log, exit 0), then run through the wrapper over its self-generated 271,453-input harness space into the uniquely named scratch conformance-regression-sweep/g16-lean-fresh.jsonl (271,453 records, exit 0, logs/g16-run.err). Comparison used conformance-g16/compare.py against the frozen conformance-g16/rust-out.jsonl with the cached seam-typography known-findings.txt; no ftml edit and no cargo.

New tally: cases 271,453, got mismatches 0, expected mismatches 0, model got != corrected 0, class counts 267,732 agree / 3,239 / 342 / 139 / 1 exactly as recorded (compare output conformance-regression-sweep/g16-compare.txt, rc=0). Moved cases: none. The fresh driver output is also byte-identical (md5 02692ac5208a2975633fcc78edaba1a3) to the frozen conformance-g16/lean-out.jsonl, so the corrected mirror has not drifted on this slice.
