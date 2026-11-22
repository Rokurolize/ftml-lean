# Mission REFVAL: live validation of the fourteen unvalidated reference rules

"This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it."

You are Google Antigravity, running the best available model, operated manually by the owner. This worktree (~/.local/state/wikijump/muse-bhl/lean-ftml-antigravity-refval/) is yours for this mission. Work only inside it. Do not edit anything outside it, do not touch any ftml or wikijump checkout, do not commit or publish anything. A coordinator (Muse) will verify every claim in your report firsthand before adopting anything; write the report so that verification is easy.

## Background, in one paragraph

The ftml Lean equivalence loop built a PHP reference implementation of Wikidot's Text_Wiki parser (ref-php/ in this worktree), corrected rule by rule against live Wikidot behavior, and then mirrored its parse phase in Lean (stages R3.1 to R3.17, reports in this worktree). For most rules the reference was validated against live during the R2 campaign or the refgaps mission (REPORT-REFGAPS.md, your own earlier work, is the model for this mission). Fourteen rules were mirrored in Lean at stages R3.15 to R3.17 on the strength of the reference alone, without any dedicated live validation: **Horiz, Break, Center, Separator, Clearfloat, Divprefilter, Divalign, Note, Gallery, User, Button, Embed, Social, File**. For those fourteen, the chain Lean == reference is proven, but reference == live is an unexamined assumption. Your mission is to examine it, rule by rule, and correct the reference wherever live disagrees.

## The evidence rules (these bind absolutely)

- Live Wikidot behavior is definitionally correct, however malformed it looks. The reference is wrong wherever it disagrees with a valid live capture.
- The gabrys/wikidot Text_Wiki fossil is never behavior evidence. It is not even included in this worktree. The reference's current rule files are hypotheses, exactly as the fossil's were during R2.
- A live capture counts only when it is valid, stable across captures, and its saved source matches the case source (the probe tooling reports all three). Fetch once, cache, reuse; do not re-fetch what a valid capture already settles.
- Where the reference and live disagree, the disagreement is either a reference defect (correct the reference) or an ftml divergence candidate (record it; never fix ftml, never edit anything outside this worktree). Distinguishing the two: run the shape against the reference and against live; ftml's behavior is not yours to test in this mission except where a case source already carries an ftml dump from the R3 stages.

## Method, per rule (the refgaps shape)

Work the fourteen rules in pipeline order: Horiz, Break, Center, Separator, Clearfloat, Divprefilter, Divalign, Note, Gallery, User, Button, Embed, Social, File.

For each rule:

1. Assemble a battery. Case sources are in materials/conformance-r315/, materials/conformance-r316/, and materials/conformance-r317/ (the *-all-cases.jsonl files hold the R3 corpora: authored cases per rule plus selected canonical cases, with corpus-provenance.json recording where each case came from). Extract the cases that exercise your rule and extend them where coverage is thin: shapes the R3 reports name as seams with neighboring rules, attribute regions, empty and malformed forms, nesting, and interactions with the rules immediately above and below in the pipeline. Aim for at least the refgaps depth (its Anchor battery was 60 cases with 16 dedicated probes).
2. Run the battery through the reference (ref-php/harness/batch.php, render mode) on this machine (PHP is /usr/bin/php).
3. Probe live for the same sources with the sandbox tooling: cd ~/.agents/skills/wikidot-py-operations && scripts/wikidot-python scripts/wikidot-probe create --site sandbox-for-codex --prefix muse-probe-refval-<rulename>- --from cases.jsonl --out map.json, then capture --map map.json --out captures.json. Keep the muse-probe-refval-* pages; they are the mission's permanent evidence. Validate every capture programmatically (valid, stable, saved_source_matches all true) before using it.
4. Compare reference renders against live captures. Classify every disagreement: reference defect, framing/Stage 2 surface (the serving layer's pretty-printing and the purifyHtml stage are not the parse rules' behavior; the R2 record in GAP-LEDGER.md shows how earlier stages separated these), or ftml candidate.
5. Correct reference defects in ref-php/, keeping a pre-correction copy of every edited file named <File>.before-refval.php beside it, and write a correction record per rule in the shape of the earlier ones (the F-R2-52, F-R2-68, fnb-24, and x87 records are the model; the refgaps mission's SECTION.md files in materials/conformance-refphp/anchor/ show the per-rule write-up shape). After each rule's corrections, re-run that rule's whole battery and the smoke battery (materials/conformance-refphp/smoke/, nine sources through batch.php): smoke must render byte-identical to the uncorrected tree unless a correction itself explains a change, in which case say so explicitly.
6. Record the rule's verdict: VALIDATED (reference matches live on the whole battery, listing any framing-surface exceptions with their classification) or CORRECTED (N corrections, each with its settling probe), plus any ftml candidate findings with their evidence.

## Deliverable

REPORT-REFVAL.md at the worktree root, ending with the exact line COMPLETE (or BLOCKED: with the reason), containing: per-rule sections with battery sizes, live probe inventories (page names), verdicts, correction summaries with the mechanism of each defect in one or two sentences, the ftml candidate list (numbered C-REFVAL-1, C-REFVAL-2, ... with source, live bytes or hash, reference bytes, and why it is a candidate), and a closing summary table of all fourteen rules. Also keep, per rule, a directory refval/<rulename>/ holding its battery, its reference renders before and after, its live captures, and its comparison output, so the coordinator can re-run your differentials without repeating your probes.

One scope note: this mission validates the reference against live at render level, as R2 and refgaps did. It does not re-open the Lean mirrors; if a correction changes a rule's parse output, name the affected R3 stage in that rule's section so the coordinator can schedule the mirror consequence.
