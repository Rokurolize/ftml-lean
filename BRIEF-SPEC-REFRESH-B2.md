# BRIEF-SPEC-REFRESH-B2 — re-elaborate the remaining unimported spec files against the corrected mirror

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Standing method (all lanes)

Live Wikidot behavior is definitional, however malformed; the evidence order is (1) ftml corpus and integration pins, (2) frozen parity captures, (3) fresh live sandbox probes, fetched once, cached and reused. Never edit ftml. Never run cargo. Never set a repository-local git identity, identity environment variables, or -c user.* overrides. Every Lean invocation without exception, builds and single-file elaborations alike, goes through the serial queue wrapper at ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time; never invoke lean or lake directly, never run elaborations in parallel, and give any scratch file a unique name inside your tree (a sibling lane's parallel scratch elaborations exhausted the machine's memory on 2026-11-22; this rule is hard). Write each deliverable to disk as soon as its part is done. Prose in files is flowing paragraphs on single lines, never hard-wrapped. This tree is the canonical programme tree after the REFCORR4, TABLEADV-FIX, REFCORR5, COVERAGE-INLINE, MIRROR-FIX and REFCORR6 adoptions.

## The work

The spec corpus under lean-ftml/LeanFtml/ is deliberately unimported, so correction rounds can silently falsify statements in it (the REFCORR5 report claimed two restatements its tree never carried, and the MIRROR-FIX lane found and repaired those). This lane re-elaborates every remaining unimported spec file against this tree's current mirror, one file at a time, each in isolation through the wrapper: SpecXRule.lean, SpecNotes.lean, SpecBlock.lean, SpecSuspect3.lean, SpecRefcorr6.lean, SpecIntent.lean, and spec-corrected-intent/SpecIntentCorrectedLive.lean (which lives outside LeanFtml/ at the tree root). SuspectSpec.lean and the SpecEmail, SpecServing, SpecInline, SpecRawhead and SpecInteract files belong to sibling lanes; do not touch them. CoverageInline.lean, CoverageProse.lean and CoverageNotes.lean are imported library modules, not spec files; do not touch them either.

For every theorem in every file, classify:

- STILL-TRUE: elaborates as written.
- PROOF-REPAIRED: the proposition holds but the proof script fails; repair the proof with the proposition byte-for-byte unchanged.
- RESTATED-AS-PIN: the statement is falsified because a named correction landed (REFCORR4, REFCORR5, REFCORR6, MIRROR-FIX, or the TABLEADV-FIX mirror repair); restate it to the corrected behavior as a regression pin, changing only what the correction changed, renaming a diverges_* theorem to confirmed_* where that naming applies, and recording the discharging round.
- NEW CANDIDATE: falsified for a reason no recorded correction explains; leave the statement untouched and record the failing input with both sides' bytes for the coordinator.

Notes on known state, to save you rediscovering it: MIRROR-FIX already restated SpecInline.lean's interwiki statement and SpecEmail.lean's email pair, so those should elaborate; SpecServing.lean's two module-tail statements were restated by REFCORR5 batch 7; SpecIntent.lean's classification (36 clean, 7 false as intent errors) is semantic and recorded in REPORT-SPECINTENT.md, so for that file your task is only to confirm it still elaborates clean, not to reclassify it. For each file you change, keep a byte-identical copy as <file>.before-refresh-b beside it. Do not edit Main.lean (these files carry no audit lines, except where a file already has them; if a restated theorem is named in Main.lean, say so in your report instead of editing it).

## Deliverable

REPORT-SPEC-REFRESH-B2.md at the tree root: a per-file section with the per-theorem classification counts and the names of every repaired, restated, or candidate statement, the new candidates with their evidence, and each file's final isolated elaboration result. End the report with COMPLETE or PARTIAL.
