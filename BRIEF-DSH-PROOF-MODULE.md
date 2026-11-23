Notification follows the muse-ping agreement: when you finish, run exactly once `MUSE_PUSH_THREAD=f098fa55-b500-4b44-a0f1-a82d4631644c ~/.local/bin/muse-ping dsh-proof-module review "<one-line summary>"` so the completion push lands in the chat that owns this work.

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Mission

You are a proof lane for the ftml Lean equivalence programme, continuing work a Cursor lane started and had to abandon mid-flight when its usage limit ran out. The draft on this branch (proof/module of Rokurolize/ftml-lean, your working clone) is your starting material, handed over as-is. The programme's adopted proof policy is ADVISOR-PROOF-POLICY.md at /home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/ADVISOR-PROOF-POLICY.md; read its classification for your family and its section 4.3 keep/drop guidance for your lane before you start, and adjudicate the inherited draft against it: keep what it names as keepers, drop what it names as dropped, and say in your report which you did. The owner's calibration governs throughout: formal proof only where it is most effective, never the means becoming the end; where a bounded certificate is the honest maximum for now, take it, record it as such (generator, cardinality, hash), name the remainder, and move on.

## Your family's targets

Your family's bounded package is already complete and verified (ModuleProof.lean: the 64-spelling closer law and the 32-source defense, slice 204/204). Do not redo it. Your work is its named remainders, the policy's Hard Core #4 showcase: a termination theorem for the module passes (modulePasses reaches its fixpoint), module_parse_env_independent (the parse result does not depend on the rendering environment), and the renderModule handoff contract stated and proved as far as the current tree allows without the foundation sprint's ProofInterface. Where the interface's absence blocks a statement, prove the strongest interface-free form and name the gap exactly.

## Boundaries

Proof files only: do not edit the mirror's rule sources, Main.lean, or any existing file outside your family's proof file(s); the coordinator wires imports at adoption. If you find a mirror or reference divergence, record it as a minimal witness in your report and stop that line; fixes belong to the coordinator lane's correction rounds. The mirror may still move under the in-flight REFCORR12 for some families; work against this branch's mirror as it stands, and note in your report any place where a correction round is likely to force a rebase. Module evaluation is out of scope programme-wide.

## Deliverables

Your work committed and pushed to Rokurolize/ftml-lean on branch proof/module, plus REPORT-DSH-PROOF-MODULE.md in your tree: what the inherited draft contained and your keep/drop adjudication, what is now proved or certified, what remains and why, ending COMPLETE or PARTIAL. Every theorem must satisfy the programme's axiom discipline: no sorryAx, no native_decide, no bv_decide, nothing beyond Lean's standard core axioms [propext, Classical.choice, Quot.sound]; run the axiom audit on your theorems and record it. Keep .lake build artifacts out of your commits. Then the single review ping above.

## Hard rules

Every Lean invocation goes through ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time, with the workdir your clone's lean-ftml directory. No ftml work, no cargo. No repo-local git identity settings; commits use the WSL global identity. Live probes, if needed at all, go through the standard wikidot-probe tool with prefix muse-probe-dsh-proof-module-, fetched once and cached. Prose in files flows on single lines, never hard-wrapped.
