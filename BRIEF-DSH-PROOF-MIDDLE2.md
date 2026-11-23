Notification follows the muse-ping agreement: when you finish, run exactly once `MUSE_PUSH_THREAD=f098fa55-b500-4b44-a0f1-a82d4631644c ~/.local/bin/muse-ping dsh-proof-middle2 review "<one-line summary>"` so the completion push lands in the chat that owns this work.

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Mission

You are a proof lane for the ftml Lean equivalence programme, carrying the unworked remainder of the policy's Wave 2 block-middle assignment. The programme's adopted proof policy is ADVISOR-PROOF-POLICY.md at /home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/ADVISOR-PROOF-POLICY.md; read its classification tables (section 2.2) and the section 4.4 item 2 lane text before you start. The owner's calibration governs throughout: formal proof only where it is most effective, never the means becoming the end; where a bounded certificate or an explicitly conditional statement is the honest maximum for now, take it, record it as such, name the remainder, and move on.

Background you can rely on: the sibling lane proof/block-middle delivered the BlockRules and MiddleRules families (eight Class A rules) and was adopted as PARTIAL. Its assignment, per section 4.4 item 2, also named the families below, which it did not work; they are yours, in full: Middle2Rules, that is Divprefilter, Note, and Gallery (Class B, base-class PCRE) and Divalign (Class B, recursive (?R) PCRE), plus the two render modules ProseRender and RawHeadingRender (Class A render family).

## Your targets

Work in a fresh clone of Rokurolize/ftml-lean on branch proof/middle2, based on current main. For each of the four parse rules, prove the strongest kernel-free universal theorems the current tree supports about the mirror's actual functions: scanner and process structure, token-table append-only and exact-count laws where the mirror's shape allows them, option and output characterizations, fuel-independence or fuel-sufficiency where the mirror is fuel-bearing, and WFState or TokEquiv components in explicitly conditional form where they depend on F1's two unproved byte-bridge obligations (parseBytes_byteForm_id, byteForm_parseBytes_id, still open in TokenStateProof.lean) rather than asserting them unconditionally. Every correspondence to the PcreCore/RefTables-extracted pattern is a named, unasserted obligation, with conditional reductions where they are genuinely conditional; the (?R) rule Divalign follows the same discipline the tableadv package used (universal mechanism laws now, the kernel equality as the named remainder). For the two render modules, prove the universal mirror-internal laws available (dispatch agreement, output shape, lookup and environment congruence), with the RenderEnv-parametric RenderProofBundle equality as the named remainder where the canonical RenderEnv is not threaded through the mirror renderers. Build your per-rule target list from the mirror files themselves, not from any earlier report: this programme has repeatedly caught report paragraphs claiming theorems the files do not contain, in both directions.

## Fan-out

Split the package into independent units on the shared team task board from the start (one unit per rule or render module, plus audit), with disjoint write scopes, and run your sub-agents on them concurrently. The root session integrates, runs the gates, and writes the report. The board is the coordination mechanism of record; use send_message to poke teammates, since board changes do not notify.

## Boundaries

New proof files only, under lean-ftml/LeanFtml/Proof/ or the module layout the recent packages use: do not edit the mirror's rule sources, Main.lean, LeanFtml.lean, the foundation modules, or any existing proof file; the coordinator wires imports at adoption. If you find a mirror or reference divergence, record it as a minimal witness in your report and stop that line; fixes belong to the coordinator lane's correction rounds. Module evaluation is out of scope programme-wide. No ftml work, no cargo.

## Deliverables

Your work committed and pushed to Rokurolize/ftml-lean on branch proof/middle2, plus REPORT-DSH-PROOF-MIDDLE2.md in your tree: per rule, what is proved (naming only theorems that exist in your committed files; your integration step must grep-verify every name the report mentions), what remains and why, ending COMPLETE or PARTIAL. Every theorem must satisfy the programme's axiom discipline: no sorryAx, no native_decide, no bv_decide, nothing beyond Lean's standard core axioms [propext, Classical.choice, Quot.sound]; run the axiom audit on your theorems and record it. One hard-won programme lesson is part of your gate: your final build evidence must come from a clean extraction of your committed state (git archive, .lake removed), because tracked oleans copied from another tree have already manufactured false results twice in this programme; say in the report that you did this. Keep .lake build artifacts out of your commits. Then the single review ping above.

## Hard rules

Every Lean invocation goes through ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time, with the workdir your clone's lean-ftml directory. No repo-local git identity settings; commits use the WSL global identity. Live probes, if needed at all, go through the standard wikidot-probe tool with prefix muse-probe-dsh-proof-middle2-, fetched once and cached. Prose in files flows on single lines, never hard-wrapped.
