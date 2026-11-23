# BRIEF-AGY-PROOF-POLICY — advisor mission: formal proof policy for the PHP reference equivalence programme

Notification follows the muse-ping agreement: when you finish, run exactly once `MUSE_PUSH_THREAD=f098fa55-b500-4b44-a0f1-a82d4631644c ~/.local/bin/muse-ping agy-proof-policy review "<one-line summary>"` so the completion push lands in the chat that owns this work. The procedure is also installed as a skill in your own skill directory (~/.agents/skills/muse-ping/SKILL.md).

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Who you are in this programme

You are the advisor, called in for one high-skill design question. The programme (owned by the Muse side chat that briefed you) is proving in Lean that ftml's Wikidot parsing and rendering match live Wikidot. Its structure: a PHP reference implementation of Wikidot's behavior, validated against live and published as Rokurolize/wikidot-php-reference (currently snapshot-35), is the spec; a Lean mirror of that reference lives in Rokurolize/ftml-lean; and a DSH coordinator lane plus eight Cursor proof lanes are doing the work. The programmatic record is in the coordinator tree at /home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator (COMPLETION-WBS.md, GAP-LEDGER.md, STATE.md, the lean-ftml/ project, conformance trees). Read what you need there; it is read-only to you.

The state you are advising on: all 68 parse rules and all 68 render rules are mirrored with byte-exact conformance over finite corpora; spec elaboration has produced about 235 property statements; a handful of families carry real proofs (process depths, block-end closers, include, the Tableadv enumeration, coverage classes); the suspicion programme (round 5, in progress) keeps finding rule-level divergences, which correction rounds fix as general mechanisms. The coordinator's own assessment, endorsed by the owner: conformance over finite corpora is evidence, not proof, and the programme's unfinished substance is turning that evidence into proof.

## The question

Produce the formal proof policy: the design that gets this programme from byte-exact conformance to a Lean proof that the mirror correctly implements the PHP reference, as quickly as honestly possible. Your policy must answer, concretely and with reasons:

1. Architecture. What should "the mirror correctly implements the reference" mean as formal statements, per tier (parse, render, the libtidy stage-2 model)? Direct functional equality on which representations, refinement or simulation relations where equality is the wrong shape, and what the trusted base is (the reference is PHP: what exactly is being proved about which artifact)?
2. Per-family strategy. For the rule families (start from the mirror's actual structure): which admit general theorems now, which should be carried by bounded enumeration (and how large a bound, argued how, makes an enumeration proof-grade rather than a test), and which need a new abstraction built first (for example a verified tokenizer core) before proof is feasible at reasonable cost.
3. Mathlib. A scratch project at /home/roku/.local/state/wikijump/muse-bhl/mathlib-check pins Mathlib v4.36.0, whose toolchain matches the programme's Lean 4.36.0 exactly; its cache download and a probe build are running (cache.log and the MathlibCheck/Basic.lean probe). Judge from that setup and your own knowledge: which Mathlib components genuinely shorten this proof work (string and byte libraries, automata and computability, list and finset machinery), what they cost (build weight, import discipline, axiom audit compatibility with the programme's bar of no sorryAx and nothing beyond [propext, Classical.choice, Quot.sound]), and whether the mirror should depend on Mathlib at all, in whole, in part, or not at all.
4. Sequencing. Eight Cursor proof lanes are already working family packages on branches proof/<family> (freelink, list, notes, divattr, raw, email, tableadv, module). Say how their work should be shaped or reprioritized to compose into your policy instead of scattering, what the DSH coordinator's correction rounds should hand them, and what the completion test for the proof deliverable should become under the policy.
5. The hard cores. Byte-level and UTF-8 reasoning, the cumulative token-index state machine, the stage-2 libtidy model (an external C library: what is provable there at all), and the parse-only module boundary. For each: the policy, not a shrug.

The owner has explicitly directed that apparent limitations be treated as problems to solve from a higher vantage, not as verdicts. If a family looks unprovable, the policy should say what change of representation, invariant, or decomposition makes it provable, or argue precisely why a bounded form is the honest maximum.

## Deliverable

ADVISOR-PROOF-POLICY.md in your tree: the policy, written so the coordinator can act on it without further interpretation (named statements, named families, named order), ending with your single most consequential recommendation first if you had to cut it to one. Then the single review ping above. You are advising, not implementing: do not modify the coordinator tree, the mirror, or the reference.
