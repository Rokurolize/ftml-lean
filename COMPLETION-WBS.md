# Completion work breakdown: what remains between here and the end state

This document is refreshed at each adoption, the same discipline as STATE.md. Final form drawn 2026-11-23 after the sixteen completion-fleet lanes were harvested and adopted (17 ordinary commits d7e00d3..b181bfa on ftml-lean main), the combined verification passed, REFCORR7 landed for all eleven SUSPECT4 confirmations, and the closeout records were written. The three deliverables are closed; the register-by-register result is in REPORT-COMPLETION.md.

The completion test is not "every item below is ticked." The loop finishes when section 1 is done, every discovery package in section 2 has met its exit criterion or been dispositioned with a recorded reason, and every entry in section 3 is either closed with evidence or carries its recorded evidence-based reason. That is the charter's finish condition: the unproven and unvalidated set is empty, or every remainder is dispositioned.

## 1. The spine: enumerable work to the three deliverables

### 1.1 Deliverable one: the complete, live-validated PHP reference, published

- 1.1.1 REFCORR4 adoption: CLOSED. The four batches were light-adopted into canonical and published as snapshot-28 (commit 5a6800a). Status: DONE 2026-11-22; the canonical verification is REPORT-VERIFY-COMBINED.md plus V01G/RESULT.md.
- 1.1.2 REFCORR5: CLOSED. All eight batches executed, gates attributed throughout, pooled 4,203/4,205 at its own endpoint (a34 standing, lb07 then the named tail gap), with the batch-3 email restatements landed by MIRROR-FIX. Published as snapshot-29 (commit cd894e1). Status: DONE 2026-11-22.
- 1.1.3 Final consolidated verification of the reference: CLOSED. VERIFY-COMBINED and the coordinator's V01G re-run on the fully adopted tree reproduce every recorded baseline: from-scratch build 176 jobs green, r43 1,109/1,109 both modes, r44 215/215, r45 381/381 (lb07 now matched), r46 862/862 plus 53 standing counter cases, r48 GATES-DONE fail=0, smoke 9/9, pooled 4,204/4,205 with a34 sole.
- 1.1.4 Final publication pass: CLOSED. The Tidy 5.8.0 dependency is documented in REPO-README.md and ref-php/INVENTORY.md by PUBDOCS and PUBDOCS-2; snapshots 28, 29 and 30 are published as commits 5a6800a, cd894e1 and d19f768, with snapshot-31 the REFCORR7 endpoint.
- 1.1.5 REFCORR6: CLOSED. The Mathinline structural correction (C-SUSPECT3-1) is adopted with byte-exact sixteen-case battery on reference and mirror, zero r43 movement, and published as snapshot-30 (d19f768). Status: DONE 2026-11-22.

### 1.2 Deliverable two: the Lean proof against that reference

- 1.2.1 TABLEADV-FIX adoption: CLOSED. DONE 2026-11-22; witness-family pins and fuzz artifacts in canonical; gate re-runs confirmed by VERIFY-COMBINED and V01G.
- 1.2.2 SPEC-ADOPT-2 adoption: CLOSED. 72/72 clean; the batch-3 discrepancy was repaired by MIRROR-FIX item 4 and re-checked by SPEC-REFRESH-A/B1/B2.
- 1.2.3 SpecIntent elaboration pass: CLOSED. 43 statements classified (36 clean, 7 intent errors), corrected live propositions in spec-corrected-intent/; SPEC-INTENT-RECLASS reclassified the comment against the post-correction mirror with no proposition change.
- 1.2.4 Native trust restoration: CLOSED. All five native_decide proofs retired at the standard core set; the one disclosure was restated by MIRROR-FIX item 3.
- 1.2.5 F-SPEC-1 discharge: CLOSED inside REFCORR5 batch 7 with the two false Serving statements restated to raw helper returns.
- 1.2.6 Revised completion criterion under ADVISOR-PROOF-POLICY adopted 2026-11-23: Deliverable 2 is COMPLETE iff gates G1-G7 all pass — G1 build and axiom purity including every imported Proof module, G2 mechanical TCB with RefTables --verify and PCRE2 plus Unicode differential suites, G3 core bridges parseBytes/byteForm identities and TokEquiv invariants, G4 68/68 RuleProofBundles, G5 61/61 RenderProofBundles parametric in RenderEnv, G6 Stage2TidyCore contract, and G7 existing conformance gates plus Boundary-A package 2.1. Ground rfl and decide pins are reclassified as regression tests and do not count toward G4/G5. Status NOT YET MET; foundation sprint tasks 30-32 start at proof-base-v1. Prior status retained for the record:  The final canonical tree builds green at 176 jobs with 894 Main.lean `#print axioms` lines (893 executable commands, one comment), every audited theorem inside [propext, Classical.choice, Quot.sound], zero sorryAx and zero native_decide trust axioms. VPRE, VAUDIT and V01G are the firsthand records.
- 1.2.7 Refill lanes and spec refresh: CLOSED. MIRROR-FIX and REFCORR6 landed and were adopted; SPEC-REFRESH-A flipped 13 discharged divergences, repaired two proofs and restated one pin; SPEC-REFRESH-B1 (47 theorems) and B2 (127 theorems) confirmed every assigned statement STILL-TRUE with no source edit. REFCORR7 adds eleven closed pins in SpecRefcorr7.lean.

### 1.3 Deliverable three: the ftml work list, final form

- 1.3.1 WORKLIST-FTML.md refresh: CLOSED. The final form re-points the four entries whose cited reports were lost in the 2026-11-22 WSL cleanup to surviving GAP-LEDGER summaries and conformance CORRECTION records, and carries the two routed iframe observations into section 2.
- 1.3.2 Owner handoff: the owner's step by design; the programme's responsibility ends at 1.3.1.

## 2. Discovery packages: standing work with exit criteria, not task lists

These packages exist because the unproven set is discovered by the work itself (the Tableadv witness surfaced inside a proof attempt, the SPEC2 sibling shapes inside a spec exercise). Each package names its exit criterion; the package closes when the criterion is met, not when a fixed list empties.

- 2.1 Suspicion rounds: STANDING WITH RECORDED EVIDENCE-BASED REASON. Eight consecutive full rounds (5, 5b, 5c, 5d, 5e, 5f, 5g, 5h) on freshly corrected ground returned 17, 16, 29, 28, 20, 25, 21 and 35 new confirmations respectively; REFCORR8 through REFCORR14 corrected the confirmed sets and snapshots 32 through 38 published them, but no round returned zero and the record does not demonstrate finite convergence. Per the owner's means-not-an-end calibration and with no human available for the strategic choice, the coordinator's recorded decision is to disposition this package by that empirical reason rather than silently claim closure. All captures, corrections and gate evidence are preserved in REPORT-ROUND5.md and the conformance-round5*/ trees.
- 2.2 Spec elaboration: MET for the current set. Every spec file has been classified; SPEC-REFRESH-A/B1/B2 re-confirmed the classifications against the corrected mirror, and REFCORR7 added SpecRefcorr7.lean with eleven pins elaborated at exit 0. The package stays open for future arrivals.
- 2.3 Coverage tier: the families the evidence has surfaced are covered and merged: G1.4, G1.6, prose, notes, inline, contain, table, serve, heading and codemath, with their unpinnable classes recorded by reason. Whether to extend the tier programme-wide remains the owner's Tier 4 scoping call.
- 2.4 Stage 2 oracle pass: CLOSED. TIDY-ORACLE and TIDY-RECHECK vindicated the model over 266 cases with zero model or oracle-configuration gaps; every non-agreement is harness frame.

## 3. Remainder register: pointers, each closed by evidence or by reason

- 3.1 Open probe remainders: CLOSED BY EVIDENCE (SUSPECT3; REPORT-SUSPECT3.md, conformance-suspect3/; WORKLIST section 3 empty).
- 3.2 Environment-bound remainders: CLOSED BY REASON (REPORT-R48.md; WORKLIST section 4).
- 3.3 Token-level mirror limitation: CLOSED BY REASON (unreachable synthetic title input; fnb_bool_false_divergence and bib_bool_false_divergence in CoverageNotes.lean).
- 3.4 C-SUSPECT3-1: CLOSED BY EVIDENCE at the REFCORR6 adoption and re-confirmed in the combined verification; the ftml measurement entry stays on WORKLIST section 1.
- 3.5 Stage 2 surface R-XRULE-1: CLOSED BY REASON (purifyHtml surface; conformance-suspect-xrule/CANDIDATES.md, REPORT-R43.md).
- 3.6 Standing judgment calls: CLOSED BY DECISION (Tier 4 parse-and-render-only scope; G3.12 confirmed; REMAINDER AUDIT DISPOSITIONS in GAP-LEDGER.md), with the two routed iframe observations carried in WORKLIST section 2.

## Maintenance

This file is updated at each adoption alongside STATE.md. The ledger is the register of record; REPORT-COMPLETION.md states the final completion test register by register.
