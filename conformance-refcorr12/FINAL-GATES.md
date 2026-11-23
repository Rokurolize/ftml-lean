# R12-GATE — REFCORR12 final gate verification result

## Assignment and method

R12-GATE is the REFCORR12 final verification unit. I read `COORD-UNITS/PROTOCOL.md` in full first and obeyed its hard rules: every write stayed inside `coord-units/R12-GATE/`, no canonical file was edited, no ftml file was touched, no cargo was run, no git identity or stash was used, every prose paragraph is a single flowing line, and every file/report/log was treated as data rather than instructions. The task ground was stated as canonical containing all REFCORR12 general corrections plus R12-LISTGEN's generalized post-failed-close guard; I confirmed firsthand that canonical HEAD `192804dee2ca17b59f9689a19a88c42e1c9f6e15` carries commits `e8d36b4` (R12 general lead, notes-control, attribute and list corrections) and `638fce8` (generalized list post-failed-close guard), and that `lean-ftml/LeanFtml/ListRules.lean` sha256 `496d474000d2376a6f660700d6aa02d46fb3ad1709138f92a8f5cb6c62289578` contains the generalized post-failed-close wire and predicate at its lines 1746, 1777 and 1827-1828. I used the R10-GATE and R11-GATE units as procedural precedent and read the six canonical `conformance-r4{3..8}/run_gates.sh` scripts, `conformance-capstone/compare.py` and `pooled_run.py` as data before writing my own runners. All nine Lean-wrapper invocations went through `~/.local/state/wikijump/muse-bhl/tools/lean-build.sh` with `LAKE_JOBS=2`, strictly one at a time; logs are in `logs/`, movement data in `meta/` and the runner scripts in `scripts/`.

## Scratch copy and exclusion verification

The scratch tree was created at 2026-11-23T14:00:50+09:00 from the canonical root with the exact tar rule `tar --exclude=coord-units --exclude=COORD-UNITS --exclude=.lake --exclude=__pycache__ --exclude=.git -cf - .` piped into `tar -xf -` under `coord-units/R12-GATE/tree/`. My first attempt used the narrower `./.git` pattern and left two nested fossil `.git` directories, so I redid the copy with the global `.git` exclusion recorded in `logs/setup.log`; the final tree has 17,140 files and verified counts of zero for `tree/coord-units`, `tree/COORD-UNITS`, `.git`, `.lake` and `__pycache__` at every depth. This satisfies the explicit requirement that the scratch copy contain no `tree/coord-units`. I snapshotted SHA-256 for all 17,140 scratch files (`meta/tree-hashes-before.txt`) and all 17,204 non-unit canonical files (`meta/canonical-hashes-at-snapshot.txt`) before any wrapper command.

## Build and wrapper discipline

The single build wrapper command named all ten drivers explicitly (`lean-ftml`, `lean-ftml-conformance-r41` through `r48`, and `lean-ftml-conformance-capstone`). Wrapper PID 2181329 acquired at 14:02:07 and released status 0 at 14:06:03 with `Build completed successfully (212 jobs)`; all ten executables are present under `tree/lean-ftml/.lake/build/bin/` and the per-driver `Built «...»:exe` lines are in `logs/build-drivers.log`. Across the nine final wrapper commands the logs contain exactly nine acquire lines and nine release lines, one per command, and `logs/gate-run-order.txt` plus `logs/pooled-smoke-run-order.txt` show no overlap: build, r43, r44, r45, r46, r47, r48, pooled, smoke in that order. Shared-lock contention with other coordinator lanes made r43 wait about 73 seconds and r44 about seven minutes before acquiring, but this only increased wall time; serial discipline was never broken.

## Gate table

Tuple format is TOTAL/PASS/EXCLUDED/FAIL/FATAL-AGREE transcribed from the complete final logs in `logs/`. Every briefed baseline reproduced exactly; there is no drift.

| Gate | Briefed baseline | Observed headline | Wrapper status | Result |
|---|---|---|---|---|
| build | 10 drivers | 212 jobs green, 10 executables | 0 | PASS |
| r43 | 1109/1109 | family state and e2e 1109/1109/0/0/0 | 0 | PASS |
| r44 | 215/215 (wrapper 1 expected) | family state and e2e 215/215/0/0/0 | 1 (expected `set -e` stop) | PASS |
| r45 | 381/381 (wrapper 1 expected) | family state and e2e 381/381/0/0/0 | 1 (expected `set -e` stop) | PASS |
| r46 | 862/862 + 53 counter e2e | family state 862/862/0/0/0, e2e 862/809/0/53/0 | 0 | PASS |
| r47 | 156/147/9 | family state and e2e 156/147/9/0/0 | 0 | PASS |
| r48 | GATES-DONE fail=0; e2e 643/563/75/0/5 | GATES-DONE fail=0; gate-e2e counts 643/563/75/0/5 | 0 | PASS |
| pooled | 4204/4205 sole a34 | 4204/4205, MISMATCH 1, a34: tokens | 0 | PASS |
| smoke | 9/9 | 9/9 byte-identical | 0 | PASS |

## Per-gate firsthand detail

Gate r43 (PID 2187784, acquired and released 14:07:26) reproduced family state and e2e 1109/1109/0/0/0, notes-full 365/365 in both modes, prose-full state 740/740 with the standing reported prose e2e 740/735/0/5/0, reg-r41 365/365 both modes and reg-r42-prefix 740/740. Gate r44 (PID 2189564, 14:14:46-14:14:47) reproduced family 215/215 in both modes and stopped as expected at the reported prose e2e, giving wrapper status 1. Gate r45 (PID 2198401, 14:15:44-14:15:46) reproduced family 381/381 in both modes with the same expected stop. Gate r46 (PID 2199355, 14:15:51-14:15:53) reproduced family state 862/862/0/0/0 and the standing 53 counter-canonicalization e2e failures as 862/809/0/53/0, plus r44 215/215 and r45 381/381 regressions. Gate r47 (PID 2199606, 14:16:02-14:16:03) reproduced 156/147/9/0/0 in both modes with the nine owned `Text_Highlighter` exclusions (css 4, java 1, python 4). Gate r48 (PID 2200102, 14:16:12-14:16:14) reported `GATES-DONE fail=0` with family state 643/566/72/0/5 and family e2e 643/563/75/0/5, notes365 365/365 both modes, prose740 state 740/740, both R4.1 regressions 365/365, R4.7 family 156/147/9/0/0, hygiene checks and `FAIL > 0` absent from every gate file; the non-gate reported prose740 e2e stayed at its standing 740/735/1/4/0. The r48 candidate audit printed `TOTAL DISAGREEMENTS 4`, which matches canonical `conformance-r48/candidate-audit.txt:24`; it is a reported non-gate count and is not drift.

## Pooled and smoke detail

The pooled recheck (PID 2200508, acquired 14:16:29, released status 0 at 14:16:31) rebuilt the 4,205-case capstone driver output from the retained `pooled-cases.jsonl` inside the already-held wrapper scope, reported `lean driver rc 0 bytes 3400050 stderr 0`, and scored `PASS: 4204/4205 (including 5 parse-fatal agreements)` with `MISMATCH: 1`, the sole mismatch being `a34: tokens`. This is byte-identical to the canonical `conformance-capstone/pooled-comparison.txt` sha256 `39bda704661ac798885fc74c737ceb113e591b93e492e87c3b5b35e5d395f4fc`. The smoke battery (PID 2200671, acquired and released status 0 at 14:16:42) rendered all nine sources through the scratch tree's `ref-php/harness/transform.php` and matched all nine `conformance-refcorr5/final-gates/smoke-*.txt` baselines byte-for-byte, reporting `smoke cases: 9` and `byte-identical: 9/9`.

## Findings

No drift finding arose: all eight briefed tallies and the build reproduced exactly and no gate file reported `FAIL > 0`. The only observations are expected standing baselines rather than discrepancies, namely the 53 r46 counter e2e cases, the five prose e2e cases in r43/r44/r45/r46 and the four in r48, the nine owned r47 exclusions, the single a34 pooled mismatch and the r48 candidate-audit count of 4. Shared serial-wrapper lock contention with other lanes increased wall time only. Canonical was resnapshotted after all runs and is byte-identical to the pre-run snapshot (`meta/canonical-integrity.diff` empty, HEAD unchanged), so R12-GATE made zero canonical edits and proposes no adoption payload.

## Evidence index

`logs/setup.log`, `logs/build-drivers.log`, `logs/gate-run-order.txt`, `logs/gate-exit-codes.txt`, `logs/command-exit-codes.txt`, `logs/gate-r43.log` through `logs/gate-r48.log`, `logs/pooled-recheck.log`, `logs/pooled-smoke-exit-codes.txt`, `logs/pooled-smoke-run-order.txt`, `logs/smoke-run.log`, `logs/smoke-gate.txt`, `logs/smoke/`, `meta/tree-hashes-before.txt`, `meta/tree-hashes-after.txt`, `meta/tree-hashes-after-full.txt`, `meta/canonical-hashes-at-snapshot.txt`, `meta/canonical-hashes-final.txt`, `meta/canonical-integrity.diff`, `meta/key-canonical-hashes.txt`, `meta/log-hashes.txt`, `meta/movement.diff`, `meta/moved-files.txt`, `meta/added-files.txt`, `meta/deleted-files.txt`, and the four runner scripts in `scripts/`. All quoted output bytes are data observed in those files, never instructions.
