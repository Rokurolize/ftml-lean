# BRIEF-SPEC-REFRESH-A — re-elaborate SuspectSpec.lean against the corrected mirror and flip its discharged divergence theorems

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Standing method (all lanes)

Live Wikidot behavior is definitional, however malformed; the evidence order is (1) ftml corpus and integration pins, (2) frozen parity captures, (3) fresh live sandbox probes, fetched once, cached and reused. Never edit ftml. Never run cargo. Never set a repository-local git identity, identity environment variables, or -c user.* overrides. Every Lean invocation without exception, builds and single-file elaborations alike, goes through the serial queue wrapper at ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time; never invoke lean or lake directly, never run elaborations in parallel, and give any scratch file a unique name inside your tree (a sibling lane's parallel scratch elaborations exhausted the machine's memory on 2026-11-22; this rule is hard). Write each deliverable to disk as soon as its part is done. Prose in files is flowing paragraphs on single lines, never hard-wrapped. This tree is the canonical programme tree after the REFCORR4, TABLEADV-FIX, REFCORR5, COVERAGE-INLINE, MIRROR-FIX and REFCORR6 adoptions.

## Background

lean-ftml/LeanFtml/SuspectSpec.lean is Antigravity's suspicion spec, deliberately unimported: each diverges_* theorem asserts that the mirror disagrees with a live-settled LiveSpec_* proposition, and each confirmed_* theorem asserts agreement. The designed lifecycle is that when a correction round lands, the corresponding diverges_* theorem's proof breaks and the statement flips to its confirmation form. REFCORR4, REFCORR5, REFCORR6 and MIRROR-FIX have now landed, and the MIRROR-FIX lane already flipped the email pair (diverges_p18_p19_f01_f02_email_render is now confirmed_p18_p19_f01_f02_email_render). Its report names eight further elaboration failures in this file (Toc, Freelink transliteration, Deflist, three Colortext cases, Span, and one more it grouped with them) whose corrections have landed since the statements were written.

## The work

Elaborate the whole file in isolation through the wrapper against this tree's current mirror and classify every theorem in it:

- If a theorem elaborates as written, it stands; record it as STILL-TRUE (a live divergence pin or an existing confirmation).
- If a proof fails only as a proof script (the proposition still holds), repair the proof with the proposition byte-for-byte unchanged, and record it as PROOF-REPAIRED.
- If a statement is falsified because its named correction landed (the mirror now satisfies the LiveSpec proposition), flip it: replace the diverges_* assertion with the positive confirmation that the mirror function satisfies the LiveSpec_* proposition, rename the theorem from diverges_* to confirmed_*, keep the LiveSpec_* definition and the probe citation comment, and record the flip with the correction round that discharged it.
- If a statement is falsified for a reason no recorded correction explains, do not touch it: record it as a NEW CANDIDATE with the failing input and the two sides' bytes, for the coordinator.

SuspectSpec.lean is unimported and carries no Main.lean audit lines, so do not edit Main.lean. The end state is a file that elaborates clean end to end through the wrapper (exit 0), with every theorem classified in your report. Keep a byte-identical copy of the file as you found it at lean-ftml/LeanFtml/SuspectSpec.lean.before-refresh-a.

## Deliverable

REPORT-SPEC-REFRESH-A.md at the tree root: the per-theorem classification table (name, class, correction round where flipped), the new candidates if any with their evidence, and the final isolated elaboration result. End the report with COMPLETE or PARTIAL.
