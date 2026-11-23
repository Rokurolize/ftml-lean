# Stage 2 proof package gate results (recorded by the root integrator)
Commit under gate: 7ef4609 (PROOF-STAGE2: totalized Stage 2 core, universal laws and bounded oracle record).
Every Lean invocation below used ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh with workdir the relevant lean-ftml directory, one at a time.

## Axiom gate
Command: `bash proof-stage2-audit/axiom-audit.sh` from the repo root.
Result: PASS, exit 0. 34 theorems audited: 27 in LeanFtml.Proof (Stage2Proof) and 7 in LeanFtml.Stage2Certificate. Every reported dependency is inside [propext, Classical.choice, Quot.sound]; the 7 certificate theorems report no axioms. No sorryAx, native_decide, bv_decide, axiom, unsafe or implemented_by token. Captured output: proof-stage2-audit/axioms.log.

## Clean-extraction build of the committed package
A fresh extraction was made with `git archive HEAD | tar -x -C <fresh dir>`; it was verified to contain no .lake directory and no .olean file at start (the 642 previously tracked .lake paths were removed from tracking in commit 7ef4609 and are now ignored by .gitignore).
Command in that extraction: `lake build LeanFtml.Proof.Stage2TidyCore LeanFtml.Proof.Stage2FrameComp LeanFtml.Proof.Stage2Proof LeanFtml.Proof.Stage2Certificate LeanFtml.Proof.Stage2 lean-ftml-stage2-cli`.
Result: PASS, exit 0, "Build completed successfully (17 jobs)", including the CLI executable. Extraction used for the recorded run: proof-stage2-audit/clean-stage2-1795434152.

## Whole-project build (recorded blocker, not caused by this package)
`bash proof-stage2-audit/clean-extract-build.sh` from the clean extraction runs an unfiltered `lake build` and exits 1. The only source failures are in LeanFtml/ProofNotesFootnote.lean lines 81 and 83 (a theorem declared `:= rfl` whose sides are not definitionally equal). That file is byte-identical on the parent commit f2d4316, which this branch did not modify; the failure therefore predates the Stage 2 package and is outside its write scope. Full log: proof-stage2-audit/clean-extract-build.log. The package's own targets all build from the same clean extraction as recorded above.

## Fidelity gates
Unmodified original Stage2.lean versus total port, pass-by-pass on 1557 cases: corpus=1557 mismatches=0 (proof-stage2-artifacts/DiffHarness.lean).
Exact 266 settled battery inputs: cases=266 portVOriginal=0 portVRecorded=0 origVRecorded=0 (proof-stage2-artifacts/BatteryHarness.lean).
Independent root harness on 2387 cases: DIFF cases=2387 mismatches=0 (proof-stage2-integration/DiffHarnessCombined.lean).

## Certificate gate
Full exhaustive 1,058,060-case differential: 35,050 agreements and 1,023,010 divergences. This gate does not meet the zero-gap condition; see proof-stage2-certificate/manifest.json for the 10 minimal witnesses. Status PARTIAL; no domain narrowing and no model fix.
