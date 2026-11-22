# BRIEF-REGRESSION-SWEEP — re-run the standing conformance grids on the post-correction mirror

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Standing method (all lanes)

Live Wikidot behavior is definitional, however malformed; the evidence order is (1) ftml corpus and integration pins, (2) frozen parity captures, (3) fresh live sandbox probes, fetched once, cached and reused. Never edit ftml. Never run cargo. Never set a repository-local git identity, identity environment variables, or -c user.* overrides. Every Lean invocation without exception, builds and single-file elaborations alike, goes through the serial queue wrapper at ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time; never invoke lean or lake directly, never run elaborations in parallel, and give any scratch file a unique name inside your tree (a sibling lane's parallel scratch elaborations exhausted the machine's memory on 2026-11-22; this rule is hard). Write each deliverable to disk as soon as its part is done. Prose in files is flowing paragraphs on single lines, never hard-wrapped. This tree is the canonical programme tree after the REFCORR4, TABLEADV-FIX, REFCORR5, COVERAGE-INLINE, MIRROR-FIX and REFCORR6 adoptions.

## The work: re-measurement only, no fixes

The correction rounds changed the reference and the mirror after several standing grids were last run. This lane re-runs those grids from this tree's artifacts and reports movement by case name; it changes no PHP and no Lean source. If a grid disagrees with its recorded baseline, name the cases and the likely discharging correction from the records; if a disagreement has no recorded explanation, mark it UNEXPLAINED in your report, because that is the finding the coordinator most needs.

1. The G1.4 include grid (GRAMMAR-INCLUDE.md is the spec; the grid stood at 119/119 against the pre-correction mirror, and REFCORR4 batch A touched Module.php and the include-adjacent rules): re-run it in full and report the tally and any moved case.
2. The G1.6 seam typography harness slice (271,453 harness inputs at its last full run; re-run the retained slice the tree carries and report agreement).
3. The R3 regression slices named in the CAPSTONE adoption record (R3.11, R3.15, R3.16, R3.17 parse slices and the R4.1 render pilot): re-run and compare against their recorded adoption states.
4. The G1.1 process-depth conformance spot slice and the G1.2 block-closer slice, at their retained case sets.

Every driver rebuilt by name through the wrapper before its run. Keep the raw outputs under conformance-regression-sweep/ with one summary file per grid.

## Deliverable

REPORT-REGRESSION-SWEEP.md at the tree root: per grid, the baseline, the new tally, the moved cases with their explanations or the UNEXPLAINED mark, and a closing verdict of NO-UNEXPLAINED-MOVEMENT or the named exceptions. End the report with COMPLETE or PARTIAL.
