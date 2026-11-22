# VERIFY-COMBINED part 1 — from-scratch build

The tree arrived without `lean-ftml/.lake`; that absence was confirmed before the build. The full project (the `LeanFtml` library and the `lean-ftml` Main executable, i.e. the default `lake build` target set) was built through the serial queue wrapper as `LAKE_JOBS=2 ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh <tree>/lean-ftml lake build`. The wrapper reported waiting for the shared queue at 23:35:48, acquiring it at 23:40:30 and releasing with status 0 at 23:42:44 on 2026-11-22 (+09:00). Lake reported `Build completed successfully (161 jobs)` and the wrapper exit status was 0. The full log is `vc-scratch/vc-full-build.log` and the exit code is `vc-scratch/vc-full-build.exit`; it contains zero compiler error lines and zero `sorryAx` occurrences. No ftml file was edited, no cargo was run, no git identity was set, and the only Lean invocation was this single wrapper-serialised build.

BUILD RESULT: exit 0, 161 jobs.

COMPLETE
