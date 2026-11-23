Notification follows the muse-ping agreement: when you finish, run exactly once `MUSE_PUSH_THREAD=f098fa55-b500-4b44-a0f1-a82d4631644c ~/.local/bin/muse-ping dsh-proof-next-final review "<one-line summary>"` so the completion push lands in the chat that owns this work.

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Mission

You are a Wave 2 proof lane for the ftml Lean equivalence programme, working in your own clone of Rokurolize/ftml-lean on branch proof/next-final. The programme's adopted proof policy is ADVISOR-PROOF-POLICY.md at /home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/ADVISOR-PROOF-POLICY.md; your rule group is the one the policy's sequencing names the next and final group (the policy's Wave 2 lane "next-final": the remaining late-pipeline parse rule families): take the exact rule list from the policy's classification tables. For each rule in your group, prove the strongest statements reachable against the mirror's actual functions in the policy's classification for that rule (Class A rules get general theorems now; Class B rules get the strongest kernel-free forms with the kernel-dependent remainder named; Class C rules get the universal core plus a proof-grade bounded certificate with generator, cardinality, and hash recorded). The owner's calibration governs: formal proof only where it is most effective, never the means becoming the end.

Work in parallel inside your session: team mode is available to you; divide your rule group into independent units on the shared team task board (the board is the coordination mechanism of record), one unit per rule or mechanism with disjoint write scopes, work them concurrently through subagents, and integrate the results yourself.

## Boundaries

Proof files only: do not edit the mirror's rule sources, Main.lean, or any existing file outside your group's new proof files; the coordinator wires imports at adoption. If you find a mirror or reference divergence, record it as a minimal witness in your report and stop that line; fixes belong to the coordinator lane's correction rounds. Module evaluation is out of scope programme-wide.

## Deliverables

Your work committed and pushed to Rokurolize/ftml-lean on branch proof/next-final, plus REPORT-DSH-PROOF-NEXTFINAL.md in your tree: per rule, what is proved or certified, what remains and why, ending COMPLETE or PARTIAL. Every theorem must satisfy the programme's axiom discipline: no sorryAx, no native_decide, no bv_decide, nothing beyond Lean's standard core axioms [propext, Classical.choice, Quot.sound]; run the axiom audit on your theorems and record it. Keep .lake build artifacts out of your commits. Then the single review ping above.

## Hard rules

Every Lean invocation goes through ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time, with the workdir your clone's lean-ftml directory. No ftml work, no cargo. No repo-local git identity settings; commits use the WSL global identity. Live probes, if needed at all, go through the standard wikidot-probe tool with prefix muse-probe-dsh-proof-next-final-, fetched once and cached. Prose in files flows on single lines, never hard-wrapped.
