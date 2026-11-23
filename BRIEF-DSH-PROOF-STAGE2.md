Notification follows the muse-ping agreement: when you finish, run exactly once `MUSE_PUSH_THREAD=f098fa55-b500-4b44-a0f1-a82d4631644c ~/.local/bin/muse-ping dsh-proof-stage2 review "<one-line summary>"` so the completion push lands in the chat that owns this work.

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Mission

You are a proof lane for the ftml Lean equivalence programme, opening its Wave 3 Stage 2 package. The programme's adopted proof policy is ADVISOR-PROOF-POLICY.md at /home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/ADVISOR-PROOF-POLICY.md; read its Stage 2 material (the Tier 3 classification, the TCB-5 external-boundary treatment, and gate G6) before you start. The owner's calibration governs throughout: formal proof only where it is most effective, never the means becoming the end; where a bounded certificate is the honest maximum for an external C library, take it, record it as such, name the remainder, and move on.

Background you can rely on: Stage 2 (the libtidy re-nesting stage) is already closed as a conformance matter. The canonical record is in the coordinator tree at /home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator (stage2/ materials and the STATE/GAP records): 266 cases, 257 agreeing outright, 9 classified harness-frame, 0 open, with local libtidy 5.8.0 vindicated as the oracle and live's libtidy identified as the {5.4, 5.8} observational equivalence class under purifyHtml's exact wrapper. What remains open is Stage 2 as a PROOF matter: the mirror's Stage2.lean carries about 21 partial definitions, which no proof can be about. Your package closes that gap as far as a proof honestly can.

## Your targets

Work in a fresh clone of Rokurolize/ftml-lean on branch proof/stage2, based on current main. Deliverables, in the policy's own terms: (1) a totalized Stage2TidyCore: the Stage 2 model's partial definitions replaced by total definitions with the partiality made explicit in the types (fuel, explicit failure values, or an equivalent device you justify), with zero partial defs remaining in the core module and the decoupled interface the policy names; (2) the universal laws of that core that the policy's Tier 3 section names, proved about the totalized functions; (3) a bounded oracle certificate against the tidy oracle: tag skeletons to depth at most 4, length at most 8, over the 12 tag classes, with the generator, cardinality, and hash recorded, zero model gaps against the oracle on that domain, and the remainder beyond the bound named explicitly (an external C library's full behavior is not a theorem; the certificate plus the conformance record is the honest maximum, and your report should say exactly that). If the existing Stage2.lean definitions live outside your write scope, build the totalized core as new files under lean-ftml/LeanFtml/Proof/ and record the source-side replacement as coordinator work at adoption, with the mapping between old partial defs and new total defs stated in your report.

## Fan-out

Split the package into independent units on the shared team task board from the start (totalization, laws, certificate, audit), with disjoint write scopes, and run your sub-agents on them concurrently. The root session integrates, runs the gates, and writes the report. The board is the coordination mechanism of record; use send_message to poke teammates, since board changes do not notify.

## Boundaries

Proof and core-model files only, as scoped above: do not edit the PHP reference, the parse or render rule sources, or Main.lean; the coordinator wires imports at adoption. If you find a model-versus-oracle divergence inside the certificate domain, record it as a minimal witness in your report and stop that line; fixes belong to the coordinator lane. Module evaluation is out of scope programme-wide. No ftml work, no cargo.

## Deliverables

Your work committed and pushed to Rokurolize/ftml-lean on branch proof/stage2, plus REPORT-DSH-PROOF-STAGE2.md in your tree: what the partial definitions were and how each was totalized, what is now proved, the certificate with its generator, cardinality, and hash, what remains and why, ending COMPLETE or PARTIAL. Every theorem must satisfy the programme's axiom discipline: no sorryAx, no native_decide, no bv_decide, nothing beyond Lean's standard core axioms [propext, Classical.choice, Quot.sound]; run the axiom audit on your theorems and record it. One hard-won programme lesson is part of your gate: your final build evidence must come from a clean extraction of your committed state (git archive, .lake removed), because tracked oleans copied from another tree have already manufactured false results twice in this programme; say in the report that you did this. Keep .lake build artifacts out of your commits. Then the single review ping above.

## Hard rules

Every Lean invocation goes through ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time, with the workdir your clone's lean-ftml directory. No repo-local git identity settings; commits use the WSL global identity. Live probes are not expected for this package; the tidy oracle is local (tidy 5.8.0 on this machine). Prose in files flows on single lines, never hard-wrapped.
