# Stage 2 proof audit gates

This directory holds the two audit gates for the DSH Stage 2 proof package, written under write scope `proof-stage2-audit/` only.
Neither gate commits, pushes, changes git identity, or adds anything to git.
Every Lean invocation goes through `~/.local/state/wikijump/muse-bhl/tools/lean-build.sh` with workdir `lean-ftml` (or the extracted clone's `lean-ftml`), one at a time.
Prose here and in the scripts is kept on single lines, never hard-wrapped.
Do not run either gate as a final gate until the lead signals that integration is complete.

Run `bash proof-stage2-audit/axiom-audit.sh` from any directory to execute the axiom gate.
The script scans `LeanFtml/Proof/Stage2Proof.lean` and `LeanFtml/Proof/Stage2Certificate.lean`, plus `Stage2TidyCore.lean`, `Stage2FrameComp.lean` and `Stage2.lean` when present, with comments and strings stripped, and fails with a file-and-line list if any of `sorry`, `sorryAx`, `native_decide`, `bv_decide`, `axiom `, `unsafe` or `implemented_by` appears in code.
It greps `theorem ` declarations from the two required modules, tracks `namespace` and `section` scopes to namespace-qualify each name, and generates `.stage2-axiom-harness/Stage2AxiomHarness.lean` that imports the delivered modules and emits `#print axioms` for every discovered theorem.
It builds those modules through the wrapper, runs the harness through the wrapper, and fails if any theorem has no axiom line, any axiom outside `propext`, `Classical.choice`, `Quot.sound` is reported, or any Lean step exits nonzero.
Captured stdout and stderr are overwritten in `proof-stage2-audit/axioms.log` on every run, and the gate is re-runnable and exits nonzero on any violation.
This gate proves that every headline Stage 2 theorem is kernel-checked with only Lean's three standard core axioms, so no untrusted axiom, oracle, or native computation is smuggled into the proof.

Run `bash proof-stage2-audit/clean-extract-build.sh` or `bash proof-stage2-audit/clean-extract-build.sh <branch-or-commit>` to execute the clean-extraction gate.
The optional argument selects the committed ref to archive and defaults to `HEAD`.
The script refuses to run if `git status --porcelain --untracked-files=all` reports anything, because `git archive` would silently omit uncommitted or untracked sources from the evidence.
It extracts the archive to a fresh `proof-stage2-audit/fresh-extract-XXXXXX/` directory, strips any `.lake` directory that the committed tree still carried, and fails if any `.lake` directory or any `.olean`, `.ilean` or `.trace` file survives in the extraction.
It then runs `lake build` through the wrapper with workdir `<extract>/lean-ftml`, saves all stdout and stderr to `proof-stage2-audit/clean-extract-build.log`, prints `CLEAN-EXTRACT-BUILD EXIT=<status>` and exits with that build status.
This gate proves that the delivered state builds from committed sources alone, with no build cache or olean file imported from another tree, which closes the false-evidence failure mode recorded in the programme brief.
The `.gitignore` in this directory excludes the two logs, the generated harness directory and the fresh extraction directories so that repeated gate runs do not dirty the worktree; the scripts and the `.gitignore` themselves must be committed before the clean-extraction gate is run.
