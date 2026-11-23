# BRIEF-ROUND5 — suspicion round 5: close WBS package 2.1 by evidence

You are the coordinator lane of the ftml Lean equivalence programme, continuing in the same session that completed the fleet harvest, REFCORR7 and the completion report. Team mode is on; you coordinate and verify, your subagents do the bulk work, up to 32 simultaneously. This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Why this mission exists

The completion test closed with exactly one standing item: discovery package 2.1 (the suspicion programme) carries a recorded reason instead of its exit criterion, because round 4 returned eleven new confirmations and no fresh full round has yet returned zero. The owner has now ordered the remaining work done. Your mission is to close 2.1 BY EVIDENCE: run a fresh full suspicion round (round 5) over the pipeline families on the post-REFCORR7 ground, and keep cycling (hunt, correct, re-hunt) inside this drive until a full round returns ZERO new confirmed divergences. Only then is 2.1 closed by evidence.

## Starting state

First refresh your tree to the current canonical state: Rokurolize/ftml-lean main is e53e7234008860a92e53b93d851c49a0e2b04043 (the completion state plus a one-line GAP-LEDGER wording fix). Sync your working tree from that head before any work (fetch the public repo and reset your tree to it, keeping your coord-units scratch if you still need it, in a scratch copy). wikidot-php-reference main is 7fb70557 (snapshot-31). The adopted audit total is 894.

## The hunt

Follow the suspicion-guided method exactly as rounds 1 to 4 did: read the reference PHP for constructs no human would write on purpose (dead branches, placeholder interactions, byte-level edge shapes, ordering accidents), probe exactly those shapes against live Wikidot (sandbox-for-codex, muse-probe-round5- prefix, fetch once and cache), and compare reference and mirror against live. Cover the same family spread as round 4: parse-side rule families, render-side rule families, and cross-rule seams, split across subagents along independent seams with disjoint write sets. A suspicion is CONFIRMED only with a valid, stable, source-matching live capture that disagrees with the reference or the mirror; intent is a hypothesis and live arbitrates. Record every suspicion's disposition, confirmed or refuted, with its evidence, as you go.

## The cycle

Maintain WORKBOARD.md at the tree root (units, owners, states, verdicts) and refill subagent slots continuously. If round 5 returns zero new confirmations, go straight to closeout. If it returns any confirmation, run REFCORR8 in the REFCORR7 shape: reference fix with .before-refcorr8 copies and CORRECTION records, mirror fix, spec flips where statements pin the old behavior, pins for the new shapes, the full gate set (from-scratch wrapped build, all audit lines, r43/r44/r45/r46/r47/r48, smoke, pooled with only attributed movement), then publish to wikidot-php-reference as an ordinary commit tagged snapshot-32 following REPORT-PUBLISH.md's path pattern, and push the adopted state to ftml-lean main. Then run the confirmation round (round 5b: a fresh full pass, not only the corrected families, since corrections move neighboring shapes) and repeat the cycle until a full round returns zero.

## Closeout

When a full round returns zero: write REPORT-ROUND5.md at the tree root stating each round's tallies (suspicions raised, probed, confirmed, refuted), the REFCORR8 record if a correction round ran, and the final zero verdict, ending COMPLETE. Update COMPLETION-WBS.md section 2.1 to CLOSED BY EVIDENCE with the round reference, append the GAP-LEDGER.md and STATE.md entries, and push everything to ftml-lean main as ordinary commits in landing order, verifying by ls-remote.

## Hard rules (unchanged)

Every Lean invocation without exception goes through ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time, scratch files uniquely named inside the owning tree. No ftml work and no cargo anywhere. No repo-local git identity, no GIT_AUTHOR_* or GIT_COMMITTER_* overrides; commits use the WSL global identity. Large tree transfers go through GitHub, never tar-over-SSH. A subagent's completion claim is never evidence: verify payloads by hash, tally, diff or firsthand elaboration before adopting. Decisions that arise are yours to make and keep minimal; record them in the report. Prose in files flows on single lines, never hard-wrapped. Write deliverables to disk early and update WORKBOARD.md as units move, so an interruption loses nothing.
