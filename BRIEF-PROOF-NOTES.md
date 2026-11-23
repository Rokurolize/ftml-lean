# BRIEF-PROOF-NOTES — Lean proof work on the Footnote and Notes family

Notification follows the muse-ping agreement: when you finish, run exactly once `MUSE_PUSH_THREAD=f098fa55-b500-4b44-a0f1-a82d4631644c ~/.local/bin/muse-ping cursor-proof-notes review "<one-line summary>"` so the completion push lands in the chat that owns this work.

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Mission

You are a proof lane for the ftml Lean equivalence programme. The PHP reference of Wikidot's behavior (Rokurolize/wikidot-php-reference) is the spec; the Lean mirror in Rokurolize/ftml-lean mirrors it, and most families are currently verified by byte-exact conformance over finite corpora plus property statements. Your job is to move the FOOTNOTE AND NOTES family from conformance toward proof: theorems in Lean about the mirror's actual footnote and notes functions, stating and proving the general mechanisms the correction rounds converged on (token-aware footnote emptiness, the C0-control behavior in notes from REFCORR11, and the footnote ESC shape from round 5e), together with the family's conformance slice re-run green. Work in your own clone of Rokurolize/ftml-lean on branch proof/notes. Start from the mirror's footnote and NotesRender sources under lean-ftml/, the reference's Footnote and notes rule files, the existing Spec and CoverageNotes files for the family, and the family's conformance corpus as your oracle. Where a general theorem is out of reach, prove the strongest bounded form you can (an exhaustive enumeration over a stated finite domain, in the style of the Tableadv enumeration) and name the remainder precisely.

If your proof work uncovers a genuine mirror or reference divergence, do NOT fix it: record a minimal witness and the evidence in your report. Mirror changes belong to the coordinator lane's correction rounds.

## Deliverables

New files only (never edit Main.lean or existing files; the coordinator wires imports at adoption): your proof file(s) under lean-ftml/, committed and pushed to Rokurolize/ftml-lean on branch proof/notes, plus REPORT-PROOF-NOTES.md in your tree summarizing what is proven, what is bounded, and what remains, ending COMPLETE or PARTIAL. Every theorem must satisfy the programme's axiom discipline: no sorryAx, nothing beyond Lean's standard core axioms [propext, Classical.choice, Quot.sound]; run the axiom audit on your new theorems and record it. Then the single review ping above.

## Hard rules

Every Lean invocation goes through ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time, with the workdir your clone's lean-ftml directory. No ftml work, no cargo. No repo-local git identity settings; commits use the WSL global identity. Live probes, if needed at all, go through the standard wikidot-probe tool with prefix muse-probe-proof-notes-, fetched once and cached. Prose in files flows on single lines, never hard-wrapped.
