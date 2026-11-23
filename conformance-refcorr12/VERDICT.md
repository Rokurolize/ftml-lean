# R12-GATE — verdict

## Verdict

PASS — the REFCORR12 final gate verification reproduced every briefed baseline with zero drift, the fresh 10-driver build is green, and no canonical change is proposed.

## Reasons

First, the scratch copy was made with the exact tar rule excluding `coord-units`, `COORD-UNITS`, `.lake`, `__pycache__` and `.git`, and the final tree verified absent `tree/coord-units`, `tree/COORD-UNITS` and all `.git`, `.lake` and `__pycache__` entries at every depth. Second, the single serial-wrapper build named all ten drivers explicitly and completed successfully with 212 jobs and all ten executables present. Third, all six gates reproduced their briefed tallies exactly: r43 1109/1109, r44 215/215 with wrapper status 1 as expected, r45 381/381 with wrapper status 1 as expected, r46 862/862 plus the standing 53 counter e2e cases, r47 156/147/9, and r48 `GATES-DONE fail=0` with family e2e 643/563/75/0/5. Fourth, the pooled recheck scored 4204/4205 with the sole standing `a34: tokens` mismatch, and smoke was 9/9 byte-identical. Fifth, all nine wrapper commands show exactly one acquire and one release line each with no overlap, and the eight remaining wrapper statuses match expectation. No drift finding arose, and the only observations are the expected standing counter, prose, exclusion, a34 and candidate-audit baselines.

## Scope and integrity

R12-GATE made no canonical edits, ran no cargo, set no git identity, used no stash, and sent every Lean invocation through the serial wrapper strictly one at a time. The final canonical hash resnapshot is byte-identical to the pre-run snapshot with HEAD unchanged, and `meta/movement.diff` shows zero changed pre-existing scratch files with only the three pooled-script backup companions added. The empty payload and evidence index are in `ADOPTION-MANIFEST.md`, the full tallies and wrapper timestamps are in `RESULT.md`, the file and case movement is in `MOVEMENT.md`, and the underlying logs and hashes are in `logs/` and `meta/`.
