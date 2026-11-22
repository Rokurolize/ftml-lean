# ADDENDUM (2026-11-20, coordinator): strategy change + state updates

Read this before continuing; it supersedes parts of PROMPT.md. No redundancy with PROMPT.md: evidence rules, axiom budget, and record-keeping duties there still stand unless changed below.

## 1. The spec layer has changed (owner direction, 2026-11-20)

The expected semantics is no longer assembled per family from measurements alone. A PHP reference implementation that fully reproduces live Wikidot behavior is being built by updating the fossil Text_Wiki rule by rule against live, and the Lean formalization will mirror that reference (one Lean function per rule over the token-stream state). Full plan and records:
- /home/roku/.local/state/wikijump/muse-bhl/lean-ftml-refphp/ref-php/INVENTORY.md
- /home/roku/.local/state/wikijump/muse-bhl/lean-ftml-refphp/conformance-refphp/R2-INCLUDE.md

The fossil's status is unchanged in one respect and changed in another: it is still NEVER behavior evidence, but it is now in play as the reference's starting code (skeleton), which earns spec status only through differential validation against live.

## 2. The reference already runs; do not rebuild it

R1 is done (coordinator's lane): the fossil Text_Wiki runs standalone on this machine's PHP 8.5.4.
- Working tree: /home/roku/.local/state/wikijump/muse-bhl/lean-ftml-refphp/
- Harness: ref-php/harness/transform.php (render and tokens modes), ref-php/harness/batch.php (JSONL; expand mode runs only the Include rule, the counterpart of ftml's include()).
- Do NOT edit anything under lean-ftml-refphp/: it is the coordinator's active lane (R2 Include corrections in flight). Read it freely. If you want reference work of your own, take a non-Include rule family and record the choice in your STATE.md first.

## 3. State updates: G1.4 and G1.4b are PROVEN (your snapshot predates both)

- G1.4: LeanFtml/IncludeGrammar.lean (scanner and grammar model) plus a 114-case fragment differential, green. G1.3's owed differential is discharged by the same driver.
- G1.4b: the include argument layer is a SEQUENTIAL FOLD in source order (live-adjudicated with 14 sandbox probes; ftml's map resolution diverges, finding F-G14B-1, routed). Model: LeanFtml/IncludeExpr.lean (repPass/substitute). The conformance driver ConformanceG14.lean was rewired to the fold: 114/114 against ftml on literal values, 14/14 against live expectations, mismatches against ftml exactly the F-G14B-1 set.
- Current canonical Lean tree (newer than your snapshot): /home/roku/.local/state/wikijump/muse-bhl/lean-ftml-g13/lean-ftml/ Read from there before starting any family; do not redo proven work.
- Independent confirmation for your models: the fossil's own Include rule implements the same fold (str_replace per argument, in order). GRAMMAR-INCLUDE.md remains the live-derived baseline; R2-INCLUDE.md catalogs where the fossil diverges from it (scanner shape, quoted includes, cross-site refs) and is the authority for the reference, not the fossil text.
- One open pair, do not treat either side as settled: [[include ::page]] and [[include :foo]] (ftml rejects the ref; the fossil trims the colons and includes). A live probe is owed; it is the coordinator's.

## 4. Your lane is unchanged and unaffected

G1.5 (ParagraphStack correctness) and G1.6 (seam typography), then Tier 2/3 per PROMPT.md, remain yours. Tier 1 machines are ftml-internal with no Text_Wiki counterpart, so the strategy change does not touch them. When Tier 3 starts, its families will be specified against the PHP reference (R3 mirroring); the coordinator will issue a further addendum then.
