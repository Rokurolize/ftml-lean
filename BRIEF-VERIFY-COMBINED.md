# BRIEF-VERIFY-COMBINED — canonical verification of the combined post-fleet state

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Standing method (all lanes)

Live Wikidot behavior is definitional, however malformed; the evidence order is (1) ftml corpus and integration pins, (2) frozen parity captures, (3) fresh live sandbox probes, fetched once, cached and reused. Never edit ftml. Never run cargo. Never set a repository-local git identity, identity environment variables, or -c user.* overrides. Every Lean invocation without exception, builds and single-file elaborations alike, goes through the serial queue wrapper at ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time; never invoke lean or lake directly, never run elaborations in parallel, and give any scratch file a unique name inside your tree (a sibling lane's parallel scratch elaborations exhausted the machine's memory on 2026-11-22; this rule is hard). Write each deliverable to disk as soon as its part is done. Prose in files is flowing paragraphs on single lines, never hard-wrapped. This tree is a fresh copy of the canonical programme tree after the REFCORR4, TABLEADV-FIX, REFCORR5, COVERAGE-INLINE, MIRROR-FIX and REFCORR6 adoptions.

## The work: verification only, no fixes

This lane verifies the combined state; it changes no PHP, no Lean source, and no spec file. If something fails, record the exact failure (theorem name, case id, tally) and stop that check; do not repair anything, because repairs route through the coordinator as separate work.

1. From-scratch build: the tree arrives without lean-ftml/.lake. Build the full project through the wrapper (the library and the Main executable), and record the job count and exit status.
2. Axiom audit: run the Main executable and capture its full output. Verify that every audit line reports (the list stands at 642 #print lines plus the MIRROR-FIX comment lines), that no line reports sorryAx, and that every reported axiom set is a subset of the programme standard [propext, Classical.choice, Quot.sound]. List any exception by theorem name.
3. Stage gates: rebuild each conformance driver by name through the wrapper before running it (a plain build can leave a stale driver binary). Re-run the r43, r44, r45, r46 and r48 gate sets from the canonical artifacts in this tree and record the tallies against the lane-side baselines (r43 family 1,109/1,109 both modes; r44 family 215/215; r45 family e2e 381/381 after MIRROR-FIX; r46 family state 862/862 with the 53 standing e2e counter cases; r48 GATES-DONE fail=0). Every deviation from a baseline is named by case id, never smoothed over.
4. Pooled comparison: re-run the CAPSTONE pooled comparison from this tree's artifacts with the retained 4,205-case pooled-cases.jsonl verbatim and the canonical comparison logic unchanged. The expected combined result is PASS 4,204/4,205 with a34 the sole mismatch (MIRROR-FIX removed lb07; REFCORR6 contributes zero movement). Report the actual result and name every mismatch.
5. Smoke: the nine-case smoke battery byte-identical, 9/9.

## Deliverable

REPORT-VERIFY-COMBINED.md at the tree root: the build result, the audit summary with any exception named, each gate tally beside its baseline, the pooled result, and a closing verdict line of VERIFIED or FAILED-WITH-NAMED-ITEMS. End the report with COMPLETE or PARTIAL.
