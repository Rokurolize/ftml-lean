# G1.2 block-closer spot slice — regression sweep summary

Baseline: the original model-grid run was PASS 85 checks, 0 failures (conformance-g12/RESULTS.md and REPORT-G12.md:39). The current canonical driver reports 99 checks, because REPORT-G12-FIX.md:21 and GAP-LEDGER.md:108 recorded the G1.2 regression-gate repair that added fourteen item-level checks (twelve coordinator-measured shapes and two balanced controls) to the original 60 suffix-grid, 5 control and 20 wrapping-context checks, and the repaired gate was verified firsthand at PASS checks=99 failures=0.

Method: the driver lean-ftml-conformance-g12 was rebuilt by name through the serial queue wrapper (logs/build-rest.log, exit 0) and run through the wrapper with no input (the driver generates its checks internally); output conformance-regression-sweep/g12-run.txt, stderr logs/g12-run.err, exit 0.

New tally: G12-CONFORMANCE PASS checks=99 failures=0. Moved cases: none in outcome; the check-set change from 85 to 99 is fully discharged by the recorded G12-FIX repair, and every one of the 99 current checks passes. The F-G12-1 live corner remains closed as recorded (ftml PR #1524), so no live probe was needed.
