Notification follows the muse-ping agreement: when you finish, run exactly once `MUSE_PUSH_THREAD=f098fa55-b500-4b44-a0f1-a82d4631644c ~/.local/bin/muse-ping dsh-proof-composition review "<one-line summary>"` so the completion push lands in the chat that owns this work.

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Mission

You are a proof lane for the ftml Lean equivalence programme, opening its Wave 3 composition package. The programme's adopted proof policy is ADVISOR-PROOF-POLICY.md at /home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/ADVISOR-PROOF-POLICY.md; read its Tier 1 composition material (the pipelineFull statements, gate G3, and the TokEquiv / alpha-invariance section) before you start. The owner's calibration governs throughout: formal proof only where it is most effective, never the means becoming the end; compose what genuinely exists, name what does not, and do not manufacture bundle-shaped filler.

Background you can rely on: the foundation sprint (F1 ByteCore + TokenStateProof + ProofInterface, F2 PcreCore + RefTables drafts, F3 UnicodeCore + RenderEnv drafts) has landed on main, with two F1 UTF-8 round-trip bridge obligations still honestly unproved. A series of family proof packages has since been adopted as PARTIAL on main or is being adopted by the coordinator lane: each delivers universal laws about the mirror's own functions (WFState preservation, token-table invariance or monotonicity, TokEquiv components where the rule's shape allows them), with kernel correspondences named as remainders. What does not yet exist anywhere is the composition: pipeline-level theorems that chain the per-rule results into statements about the pipeline as a whole. That is this lane.

## Your targets

Work in a fresh clone of Rokurolize/ftml-lean on branch proof/composition, based on current main. First, inventory what main actually carries at your start: which rules have a proved WFState-preservation result, which have TokEquiv or token-table invariance results, and which have neither, checking the adopted packages on main and the coordinator's adoption records rather than trusting any single report (this programme has twice caught report paragraphs claiming theorems the files do not contain; your inventory must be built from the files). Then deliver, in new files under lean-ftml/LeanFtml/Proof/: (1) the composition of WF preservation over the longest pipeline prefix (or the full pipeline, if the inventory supports it) for which every constituent rule has a proved preservation result, stated as a single theorem about the composed mirror pipeline functions, with the uncovered rules named as the composition remainder in your report; (2) the alpha-invariance composition: for the rules with proved TokEquiv or renumbering results (the Email observer law and its base-shift machinery are the model case), the composed statement that the covered pipeline segment commutes with the corresponding token renumbering, again with the uncovered set named; (3) if the F1 byte bridge obligations (parseBytes / byteForm round trips) can be discharged or honestly narrowed with the inventory's results, do so and say exactly what changed; if they cannot, record the precise blocker. Where a constituent result exists only in a not-yet-adopted proof branch, do not import across branches; name it as adoption-pending in the inventory instead.

## Fan-out

Split the package into independent units on the shared team task board from the start (inventory, WF composition, alpha composition, bridge assessment, audit), with disjoint write scopes, and run your sub-agents on them concurrently. The root session integrates, runs the gates, and writes the report. The board is the coordination mechanism of record; use send_message to poke teammates, since board changes do not notify.

## Boundaries

New proof files only: do not edit the mirror's rule sources, the foundation modules, Main.lean, or any existing proof file; the coordinator wires imports at adoption. If a constituent theorem you need turns out to be absent or weaker than its package's report claimed, record that precisely in the inventory and compose around it; do not restate or re-prove another lane's family results inside this package. Module evaluation is out of scope programme-wide. No ftml work, no cargo.

## Deliverables

Your work committed and pushed to Rokurolize/ftml-lean on branch proof/composition, plus REPORT-DSH-PROOF-COMPOSITION.md in your tree: the file-verified inventory (per rule: WF result, TokEquiv/renumbering result, neither, or adoption-pending, each with the file and theorem name you verified), what is now composed, what remains and why, ending COMPLETE or PARTIAL. Every theorem must satisfy the programme's axiom discipline: no sorryAx, no native_decide, no bv_decide, nothing beyond Lean's standard core axioms [propext, Classical.choice, Quot.sound]; run the axiom audit on your theorems and record it. One hard-won programme lesson is part of your gate: your final build evidence must come from a clean extraction of your committed state (git archive, .lake removed), because tracked oleans copied from another tree have already manufactured false results twice in this programme; say in the report that you did this. Keep .lake build artifacts out of your commits. Then the single review ping above.

## Hard rules

Every Lean invocation goes through ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time, with the workdir your clone's lean-ftml directory. No repo-local git identity settings; commits use the WSL global identity. Prose in files flows on single lines, never hard-wrapped.
