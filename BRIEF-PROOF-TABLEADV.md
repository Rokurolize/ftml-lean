# BRIEF-PROOF-TABLEADV — Lean proof work on the Tableadv family

Notification follows the muse-ping agreement: when you finish, run exactly once `MUSE_PUSH_THREAD=f098fa55-b500-4b44-a0f1-a82d4631644c ~/.local/bin/muse-ping cursor-proof-tableadv review "<one-line summary>"` so the completion push lands in the chat that owns this work.

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Mission

You are a proof lane for the ftml Lean equivalence programme. The PHP reference of Wikidot's behavior (Rokurolize/wikidot-php-reference) is the spec; the Lean mirror in Rokurolize/ftml-lean mirrors it. The TABLEADV family already carries the programme's flagship bounded result: after the subsumption shortcut was refuted by a 74-byte witness, the mirror's search was made to be the reference enumeration itself, verified over 185,662 strings with zero differences against PHP. Your job is to strengthen and extend that result: restate the enumeration equivalence as clean theorems about the mirror's actual Tableadv functions where the current artifacts leave it as harness output, extend the verified domain where the enumeration method allows (larger bounded domains, the uppercase data-* shape from REFCORR8, and the general Tableadv rules REFCORR10 adopted), and re-run the family's conformance slice green. Work in your own clone of Rokurolize/ftml-lean on branch proof/tableadv. Start from the mirror's Tableadv sources under lean-ftml/, the TABLEADV-FIX artifacts, the reference's Tableadv rule files, and the family's conformance corpus as your oracle. Where a general theorem is out of reach, prove the strongest bounded form you can and name the remainder precisely.

If your proof work uncovers a genuine mirror or reference divergence, do NOT fix it: record a minimal witness and the evidence in your report. Mirror changes belong to the coordinator lane's correction rounds.

## Deliverables

New files only (never edit Main.lean or existing files; the coordinator wires imports at adoption): your proof file(s) under lean-ftml/, committed and pushed to Rokurolize/ftml-lean on branch proof/tableadv, plus REPORT-PROOF-TABLEADV.md in your tree summarizing what is proven, what is bounded, and what remains, ending COMPLETE or PARTIAL. Every theorem must satisfy the programme's axiom discipline: no sorryAx, nothing beyond Lean's standard core axioms [propext, Classical.choice, Quot.sound]; run the axiom audit on your new theorems and record it. Then the single review ping above.

## Hard rules

Every Lean invocation goes through ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time, with the workdir your clone's lean-ftml directory. No ftml work, no cargo. No repo-local git identity settings; commits use the WSL global identity. Live probes, if needed at all, go through the standard wikidot-probe tool with prefix muse-probe-proof-tableadv-, fetched once and cached. Prose in files flows on single lines, never hard-wrapped.
