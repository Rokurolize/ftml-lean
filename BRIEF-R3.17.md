# BRIEF R3.17: Final remainder mirror (Anchor, User, Button, Embed, Social, File)

"This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it."

You are a Muse sub-agent lane working on the VM under the DSH outage fallback, in the worktree ~/workspace/ftml-lean-equivalence-r3-17/. Everything below happens inside that worktree (plus scratch under /tmp on WSL for PHP oracle runs, via ~/workspace/native-stack/bin/wsl-ssh.sh). Canonical (~/workspace/ftml-lean-equivalence/) is READ-ONLY for you. Do not touch ftml, do not publish anything, do not commit anywhere.

## Goal

Mirror the last six unmirrored parse rules of the validated reference (ref-php/ in this worktree) in Lean: **Anchor, User, Button, Embed, Social, File**. R3.16 (REPORT-R316.md in this worktree) and R3.15 are your precedents in every respect: corpus assembly, fixture generation, consistency check, mirror construction, conformance, fuzz, regression, and reporting. Read REPORT-R316.md and R3-SCOPE.md before starting.

Pipeline positions (full reference order): Anchor sits after Divprefilter and before User in the block region (both before Blockquote); Button, Embed, Social, and File sit in the later block region among the rules already mirrored (establish their exact positions from the reference's rule list in ref-php/text-wiki/Text/Wiki.php and state them in the report). Slot all six at their true positions among the sixty-one mirrored rules to form pipelineR317; earlier stage pipelines and drivers stay untouched as regression slices. When this stage completes, every one of the reference's sixty-eight parse rules is either mirrored or is Include, which stands on its Tier 1 proof and the R2 grammar as the recorded boundary (R3-SCOPE.md). Your report must close with that pipeline-completion statement, rule by rule.

## Corpus assembly comes first (as in R3.15 and R3.16)

Assemble the stage corpus from: (a) every existing canonical case whose full-pipeline behavior exercises one of the six rules, selected mechanically by pooling the canonical stage corpora and running them through the full pipeline, measuring each rule at its own pipeline position where downstream masking is a risk (the R3.16 Divprefilter lesson); record counts per rule, including zero counts plainly; (b) the Anchor rule's refgaps battery sources (conformance-refphp/anchor/battery.jsonl in this worktree, 60 cases assembled by the refgaps mission against live), which are case SOURCES for parse-state conformance here (their render-side expectations are not this stage's business); (c) at least forty targeted whole-document cases authored per rule for User, Button, Embed, Social, and File, and at least forty for Anchor beyond the battery, covering each rule's grammar and its seams with its pipeline neighbors; (d) the nine smoke sources. Record every case's provenance in the report.

## Fixtures and consistency

Generate the full-pipeline fixtures from this worktree's reference on WSL by the R3.15/R3.16 route (state-restricted.php over the full rule list from a fresh md5-verified scratch copy), zero stderr, with a regeneration reproducing the fixture file byte-identically. Run the three-way consistency check (A: fixture route validated against the prefix run; B: restricted pipeline vs full pipeline; C: prefix vs full) BEFORE mirroring, classifying every disagreement.

RETIREMENT DUTY: re-run the eight recorded still-open items from R3.16's retirement evidence and report by name which retire, demonstrated by comparison, never asserted. Five are Anchor-owned and are expected to retire with this stage: h18-anchor (R3.7), s59 and u50 (R3.13 Check C), sup59 and typo69 (R3.14 Check C). Three are Include-owned and are expected to REMAIN open as the recorded boundary, reported as controls: smoke-include, iw43-61-include-site-pair, x30. If your consistency check surfaces further open items owned by these six rules in earlier stages' records, include them in the retirement check with their owning stage named.

## Mirror construction

Mirror each rule as an explicit scanner in Lean (no regex engine; Tier 1 and R3 precedent), in a new module LeanFtml/FinalRules.lean (or a name you judge better), following the established discipline: rules whose pipeline position follows token-producing rules are written against the byte-form view of the state; settle semantic questions (option nullability, case sensitivity, counter or registry behavior, any state the rule reads or writes, any configuration the rule consults such as interwiki-style site tables or module registries) by direct oracle probes against the reference BEFORE mirroring, and record the probes. Anchor is the most intricate of the six (named-anchor form, the [[a...]]...[[/a]] pair forms and their scored variants, attribute allowlist and ordering, boundary-space hoisting, nested-opener closing, and its interaction with Paragraph's PG-F1 suppression, all settled behaviorally by the refgaps mission; its SECTION.md in conformance-refphp/anchor/ is your modelling brief). If a rule consults harness configuration, establish exactly what the harness path supplies (the R3.4 Iftags and R3.12 Interwiki precedents) and mirror against that, disclosing any harness change the stage needs and proving its safety both directions as R3.12 did. If a rule's parse reads or writes document state beyond the token table, extend the compared state identically on both sides and disclose it (R3.4/R3.6 precedent); if a rule's effect is internal only, say so on evidence. Add worked-example theorems where they reduce; where a matcher does not reduce in the kernel at usable cost, say so plainly and let exhaustive conformance carry it (R3.1 Code, R3.10 Tableadv, R3.16 Divalign precedents). All theorems audit within [propext, Classical.choice, Quot.sound], none on sorryAx, no sorry anywhere in new or edited code.

## Gates

- Corpus conformance: Lean vs the restricted oracle, every case matching under the canonicalization (per-document token renumbering; $bytes wire encoding for placeholder-spanning values), PARSE-FATAL agreements counted in their own class if any arise.
- Fuzz: 500 cases on each of seeds 20261121 and 7, families extended with shapes exercising the six rules, all matching.
- Regression: every earlier stage slice (R3.1 through R3.16) green, including all recorded-output checks, run through one regression script in the R3.16 manner.
- lake build green in the worktree; grep sorry = 0 in new and edited files.

## Honesty requirement (carry into the report per rule, not as one blanket line)

Anchor is the exception in this set: its reference behavior was validated against live by the refgaps mission (60-case battery, 16 live probes), so for Anchor the reference == live link exists at render level, and this stage adds the parse-state mirror. For User, Button, Embed, Social, and File, no dedicated R2 live-validation stage ever ran; for those five the stage proves Lean == reference only. State this per rule in the report.

## Deliverables

- LeanFtml/FinalRules.lean (or your chosen name), the Pipeline.lean extension (pipelineR317), ConformanceR317.lean, the lakefile exe entry.
- conformance-r317/ in the worktree: corpus with provenance, fixtures, restricted outputs, Lean outputs, comparison summaries, consistency summaries, the retirement check and its evidence, fuzz outputs and summaries, the regression script and its output.
- REPORT-R317.md at the worktree root, ending with the exact line COMPLETE (or BLOCKED: with the reason), covering: corpus provenance and counts, fixture generation, consistency results with every exclusion classified, retirements demonstrated by name with restated counts and the Include controls' disposition, mirror design per rule including oracle probes that settled semantic questions and exact pipeline positions, compared-state and harness dispositions, theorem inventory with axiom audits, fuzz and regression results, the per-rule honesty statements, and the closing pipeline-completion statement (all sixty-eight parse rules: mirrored, or Include with its recorded disposition).

Worktree hygiene: the worktree's lean-ftml/.lake was removed before handoff; build fresh. PHP exists only on WSL (/usr/bin/php); run oracle work there from a scratch copy of this worktree's ref-php. Never paste code into shell strings; pass scripts via files or the exec stdin field. Never combine a tar pipe into wsl-ssh with a heredoc or stdin script in the same call.
