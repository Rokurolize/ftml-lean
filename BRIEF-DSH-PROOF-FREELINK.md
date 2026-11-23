Notification follows the muse-ping agreement: when you finish, run exactly once `MUSE_PUSH_THREAD=f098fa55-b500-4b44-a0f1-a82d4631644c ~/.local/bin/muse-ping dsh-proof-freelink review "<one-line summary>"` so the completion push lands in the chat that owns this work.

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Mission

You are a proof lane for the ftml Lean equivalence programme, continuing work a Cursor lane started and had to abandon mid-flight when its usage limit ran out. The draft on this branch (proof/freelink of Rokurolize/ftml-lean, your working clone) is your starting material, handed over as-is. The programme's adopted proof policy is ADVISOR-PROOF-POLICY.md at /home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/ADVISOR-PROOF-POLICY.md; read its classification for your family and its section 4.3 keep/drop guidance for your lane before you start, and adjudicate the inherited draft against it: keep what it names as keepers, drop what it names as dropped, and say in your report which you did. The owner's calibration governs throughout: formal proof only where it is most effective, never the means becoming the end; where a bounded certificate is the honest maximum for now, take it, record it as such (generator, cardinality, hash), name the remainder, and move on.

## Your family's targets

Prove what does not wait for the kernels: the lead-class laws for Freelink's opener recognition against the mirror's actual functions, and the placeholder/reflection behavior on the reachable domain, in the strongest forms the current tree supports. Full Class B universality for this family waits for the PcreCore and UnicodeCore kernels and is out of your scope; name it as the remainder. This family's mirror is moving under REFCORR12 (lead classes), so prefer statements about mechanisms over statements about exact byte tables where you honestly can, and flag the likely rebase points.

## Boundaries

Proof files only: do not edit the mirror's rule sources, Main.lean, or any existing file outside your family's proof file(s); the coordinator wires imports at adoption. If you find a mirror or reference divergence, record it as a minimal witness in your report and stop that line; fixes belong to the coordinator lane's correction rounds. The mirror may still move under the in-flight REFCORR12 for some families; work against this branch's mirror as it stands, and note in your report any place where a correction round is likely to force a rebase. Module evaluation is out of scope programme-wide.

## Deliverables

Your work committed and pushed to Rokurolize/ftml-lean on branch proof/freelink, plus REPORT-DSH-PROOF-FREELINK.md in your tree: what the inherited draft contained and your keep/drop adjudication, what is now proved or certified, what remains and why, ending COMPLETE or PARTIAL. Every theorem must satisfy the programme's axiom discipline: no sorryAx, no native_decide, no bv_decide, nothing beyond Lean's standard core axioms [propext, Classical.choice, Quot.sound]; run the axiom audit on your theorems and record it. Keep .lake build artifacts out of your commits. Then the single review ping above.

## Hard rules

Every Lean invocation goes through ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time, with the workdir your clone's lean-ftml directory. No ftml work, no cargo. No repo-local git identity settings; commits use the WSL global identity. Live probes, if needed at all, go through the standard wikidot-probe tool with prefix muse-probe-dsh-proof-freelink-, fetched once and cached. Prose in files flows on single lines, never hard-wrapped.
