# BRIEF-AGY-HUNT — intuition-led suspicion hunt over the PHP reference's uncovered ground

Notification follows the muse-ping agreement: when you finish, run exactly once `MUSE_PUSH_THREAD=f098fa55-b500-4b44-a0f1-a82d4631644c ~/.local/bin/muse-ping agy-hunt review "<one-line summary>"` so the completion push lands in the chat that owns this work.

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Mission

New mission from the owner, building on the programme knowledge you just absorbed writing the proof policy. The DSH coordinator lane is running systematic suspicion rounds over the pipeline families (round 5 is at its fifth sub-round; every round still finds rule-level siblings). Your assignment is the complementary hunt: use your own intuition over the PHP reference implementation (in the coordinator tree at /home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator, ref-php/, read-only to you) to find suspicious implementations that the live capture corpus does NOT cover, and sweep up the discrepancies with live Wikidot.

The suspicion method, as this programme practices it: read the reference code for constructs no human would write on purpose, places where the written behavior looks invented, approximated, or quietly assumed rather than measured; then check exactly those against live, which is definitionally correct however malformed its behavior. Your edge is target selection. Prioritize by suspicion times uncoveredness: behaviors with thin or no live captures, option and attribute combinations never probed, render paths the corpora exercise only a few times, and the areas earlier rounds dispositioned by reasoning rather than by measurement because the local harness cannot reach them (the found-user path, gallery and image service forms, title-derived link text, real module renderings on a live page). A sandbox page can reach several of those; where live genuinely cannot be made to exhibit a behavior, say so with the attempt recorded rather than reasoning it closed.

## Method and discipline

Live probes go through the standard wikidot-probe tooling on WSL (the wikidot-py-operations skill in your skill directory): site sandbox-for-codex, prefix muse-probe-agy-hunt-, pages created once, fetched once, captures cached and kept. Every capture you rely on must be valid, stable across a re-fetch, and source-matching. For each suspicion: state what the reference does (file and mechanism), what you expected and why it smells, the live result, and the verdict (CONFIRMED divergence with a minimal witness, CLEARED with the capture that clears it, or UNREACHABLE with the attempt recorded). Do not fix anything: confirmed divergences route through the coordinator side chat into the correction-round pipeline. Do not duplicate the coordinator lane's in-flight family rounds; if a suspicion lands inside a family its current round is actively sweeping, note it and move on.

## Deliverable

REPORT-AGY-HUNT.md in this tree: the coverage map you hunted from (which areas you judged uncovered and why), the suspicion list with verdicts and capture identifiers, and for each confirmed divergence the minimal witness and the reference file and mechanism it indicts, ending COMPLETE or PARTIAL. Then the single review ping above.
