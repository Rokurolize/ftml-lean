# BRIEF-PROOF-MODULE — Lean proof work on the Module family (parse side)

Notification follows the muse-ping agreement: when you finish, run exactly once `MUSE_PUSH_THREAD=f098fa55-b500-4b44-a0f1-a82d4631644c ~/.local/bin/muse-ping cursor-proof-module review "<one-line summary>"` so the completion push lands in the chat that owns this work.

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Mission

You are a proof lane for the ftml Lean equivalence programme. The PHP reference of Wikidot's behavior (Rokurolize/wikidot-php-reference) is the spec; the Lean mirror in Rokurolize/ftml-lean mirrors it. Scope note: modules are PARSE-ONLY in this programme (evaluation is deepwell's, a formally dispositioned boundary), so your theorems concern the mirror's module PARSING: the token and argument shapes the parser produces. Your job is to move the MODULE family from conformance toward proof: theorems about the mirror's actual module parse functions, covering the module-closer shape corrected in REFCORR9 (the substr / matched.drop mechanism) and the general module rules REFCORR10 adopted, together with the family's conformance slice re-run green. Work in your own clone of Rokurolize/ftml-lean on branch proof/module. Start from the mirror's module parse sources under lean-ftml/, the reference's Module rule files, the existing Spec files for the family, and the family's conformance corpus as your oracle. Where a general theorem is out of reach, prove the strongest bounded form you can (an exhaustive enumeration over a stated finite domain, in the style of the Tableadv enumeration) and name the remainder precisely. Do not attempt module evaluation semantics; that boundary is recorded and out of scope.

If your proof work uncovers a genuine mirror or reference divergence, do NOT fix it: record a minimal witness and the evidence in your report. Mirror changes belong to the coordinator lane's correction rounds.

## Deliverables

New files only (never edit Main.lean or existing files; the coordinator wires imports at adoption): your proof file(s) under lean-ftml/, committed and pushed to Rokurolize/ftml-lean on branch proof/module, plus REPORT-PROOF-MODULE.md in your tree summarizing what is proven, what is bounded, and what remains, ending COMPLETE or PARTIAL. Every theorem must satisfy the programme's axiom discipline: no sorryAx, nothing beyond Lean's standard core axioms [propext, Classical.choice, Quot.sound]; run the axiom audit on your new theorems and record it. Then the single review ping above.

## Hard rules

Every Lean invocation goes through ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time, with the workdir your clone's lean-ftml directory. No ftml work, no cargo. No repo-local git identity settings; commits use the WSL global identity. Live probes, if needed at all, go through the standard wikidot-probe tool with prefix muse-probe-proof-module-, fetched once and cached. Prose in files flows on single lines, never hard-wrapped.
