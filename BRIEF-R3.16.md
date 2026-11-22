# BRIEF R3.16: Middle-rules mirror, second set (Divprefilter, Divalign, Note, Gallery)

"This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it."

You are a Muse sub-agent lane working on the VM under the DSH outage fallback, in the worktree ~/workspace/ftml-lean-equivalence-r3-16/. Everything below happens inside that worktree (plus scratch under /tmp on WSL for PHP oracle runs, via ~/workspace/native-stack/bin/wsl-ssh.sh). Canonical (~/workspace/ftml-lean-equivalence/) is READ-ONLY for you. Do not touch ftml, do not publish anything, do not commit anywhere.

## Goal

Mirror four more parse rules of the validated reference (ref-php/ in this worktree) in Lean: **Divprefilter, Divalign, Note, Gallery**. R3.15 (REPORT-R315.md in this worktree) is your immediate precedent in every respect: corpus assembly, fixture generation, consistency check, mirror construction, conformance, fuzz, regression, and reporting. Read it and R3-SCOPE.md before starting.

Pipeline positions (full reference order): Divprefilter sits before Anchor, which is before User, which is before Blockquote in the block region; Divalign sits between Div and Collapsible; Note and Gallery sit between Tabview and List. Slot the four rules at their true positions among the fifty-seven mirrored rules to form pipelineR316; earlier stage pipelines and drivers stay untouched as regression slices.

## Corpus assembly comes first (as in R3.15)

These rules have no dedicated R2 batteries. Assemble the stage corpus from: (a) every existing canonical case whose full-pipeline behavior exercises one of the four rules, selected mechanically by pooling the canonical stage corpora and running them through the full pipeline (the R3.15 method; record counts per rule, including zero counts plainly if a rule is exercised by no canonical case); (b) at least forty targeted whole-document cases authored per rule, covering its own grammar and its seams with its pipeline neighbors (for Divprefilter: what it rewrites and what downstream rules then see; for Divalign: its interaction with Div and Collapsible claims; for Note: the [[note]] wrapper shapes including the lb35 shape; for Gallery: its block shapes and attribute regions); (c) the nine smoke sources. Record every case's provenance in the report.

## Fixtures and consistency

Generate the full-pipeline fixtures from this worktree's reference on WSL by the R3.15 route (state-restricted.php over the full rule list from a fresh md5-verified scratch copy), zero stderr, with a regeneration reproducing the fixture file byte-identically. Run the three-way consistency check (A: fixture route validated against the prefix run; B: restricted pipeline vs full pipeline; C: prefix vs full) BEFORE mirroring, classifying every disagreement. 

RETIREMENT DUTY: the stage must re-run the recorded open exclusions that these rules own and report by name which retire, demonstrated by comparison, never asserted. The known candidate is R3.9's lb35 (the Note rule claiming the [[note]] wrapper before List in the full pipeline). If your consistency check surfaces further open items owned by these four rules in earlier stages' records, include them in the retirement check with their owning stage named. Items owned by still-unmirrored rules (Include, Anchor, User, Button, Embed, Social, File) stay open and are reported as controls, exactly as in R3.15.

## Mirror construction

Mirror each rule as an explicit scanner in Lean (no regex engine; Tier 1 and R3 precedent), in a new module LeanFtml/Middle2Rules.lean (or a name you judge better), following the established discipline: rules whose pipeline position follows token-producing rules are written against the byte-form view of the state; settle semantic questions (option nullability, case sensitivity, counter behavior, any state the rule reads or writes) by direct oracle probes against the reference BEFORE mirroring, and record the probes. Watch for compared-state needs: if a rule's parse reads or writes document state beyond the token table (check the R3.1 vars inventory in REPORT-R31.md, available in canonical; copy what you need), extend the compared state identically on both sides and disclose it, following the R3.4/R3.6 precedent; if a rule's effect is internal only, say so on evidence. Add worked-example theorems where they reduce; where a matcher does not reduce in the kernel at usable cost, say so plainly and let exhaustive conformance carry it (R3.4/R3.10 precedent). All theorems audit within [propext, Classical.choice, Quot.sound], none on sorryAx, no sorry anywhere in new or edited code.

## Gates

- Corpus conformance: Lean vs the restricted oracle, every case matching under the canonicalization (per-document token renumbering; $bytes wire encoding for placeholder-spanning values), PARSE-FATAL agreements counted in their own class if any arise.
- Fuzz: 500 cases on each of seeds 20261121 and 7, families extended with shapes exercising the four rules, all matching.
- Regression: every earlier stage slice (R3.1 through R3.15) green, including all recorded-output checks, run through one regression script in the R3.15 manner.
- lake build green in the worktree; grep sorry = 0 in new and edited files.

## Honesty requirement (carry into the report verbatim in substance)

No dedicated R2 live-validation stage ever ran for these four rules either. This stage proves the R3 claim, Lean implements the reference's parse phase for these rules. It does NOT prove reference == live for them. State this plainly in the report.

## Deliverables

- LeanFtml/Middle2Rules.lean (or your chosen name), the Pipeline.lean extension (pipelineR316), ConformanceR316.lean, the lakefile exe entry.
- conformance-r316/ in the worktree: corpus with provenance, fixtures, restricted outputs, Lean outputs, comparison summaries, consistency summaries, the retirement check and its evidence, fuzz outputs and summaries, the regression script and its output.
- REPORT-R316.md at the worktree root, ending with the exact line COMPLETE (or BLOCKED: with the reason), covering: corpus provenance and counts, fixture generation, consistency results with every exclusion classified, retirements demonstrated by name with restated counts, mirror design per rule including oracle probes that settled semantic questions, compared-state disposition, theorem inventory with axiom audits, fuzz and regression results, and the honesty statement above.

Worktree hygiene: the worktree's lean-ftml/.lake was removed before handoff; build fresh. PHP exists only on WSL (/usr/bin/php); run oracle work there from a scratch copy of this worktree's ref-php. Never paste code into shell strings; pass scripts via files or the exec stdin field. Never combine a tar pipe into wsl-ssh with a heredoc or stdin script in the same call.
