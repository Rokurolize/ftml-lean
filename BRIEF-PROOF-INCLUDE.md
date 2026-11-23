# BRIEF-PROOF-INCLUDE — reconnect the Tier 1 Include proofs to the production rule

Notification follows the muse-ping agreement: when you finish, run exactly once `MUSE_PUSH_THREAD=f098fa55-b500-4b44-a0f1-a82d4631644c ~/.local/bin/muse-ping cursor-proof-include review "<one-line summary>"` so the completion push lands in the chat that owns this work.

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Mission

You are a proof lane for the ftml Lean equivalence programme, working under its adopted proof policy (ADVISOR-PROOF-POLICY.md, in the agy-proof-policy tree under muse-bhl; read its Class A entry for IncludeRule and its section 4 sequencing before you start). The Include family is the programme's odd case: complete general proofs already exist at Tier 1 (the grammar, expression and resolution theorems in the Include proof files, built against GRAMMAR-INCLUDE.md), but they were never connected to the production rule the pipeline actually runs (IncludeRule.lean's multi-pass loop). Your job is that connection, on branch proof/include of your own clone of Rokurolize/ftml-lean: prove that the production rule's passes implement the already-proven specification (the resolution modes and their priority, the pass loop's effect on the parse state, well-formedness preservation), reusing the Tier 1 theorems rather than reproving them, and re-run the family's conformance grid green (the include grid, 119 cases at last full run). Where a pass resists connection, prove the strongest statement you can and name the gap precisely.

This lane is a scoped exception to the usual new-files-only rule: on your branch you may edit IncludeRule.lean and the import wiring needed to connect the proofs, and nothing else outside new Proof files. Touch no other family's sources. If the connection requires changing the production rule's behavior, stop: record the divergence as a minimal witness in your report instead. Mirror behavior changes belong to the coordinator lane's correction rounds.

## Deliverables

Your work committed and pushed to Rokurolize/ftml-lean on branch proof/include, plus REPORT-PROOF-INCLUDE.md in your tree summarizing what is now connected and proved, what remains disconnected and why, ending COMPLETE or PARTIAL. Every theorem must satisfy the programme's axiom discipline: no sorryAx, no native_decide, no bv_decide, nothing beyond Lean's standard core axioms [propext, Classical.choice, Quot.sound]; run the axiom audit on your new theorems and record it. Keep .lake build artifacts out of your commits. Then the single review ping above.

## Hard rules

Every Lean invocation goes through ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time, with the workdir your clone's lean-ftml directory. No ftml work, no cargo. No repo-local git identity settings; commits use the WSL global identity. Live probes, if needed at all, go through the standard wikidot-probe tool with prefix muse-probe-proof-include-, fetched once and cached. Prose in files flows on single lines, never hard-wrapped.
