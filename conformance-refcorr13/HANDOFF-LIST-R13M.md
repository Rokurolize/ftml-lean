# REFCORR13 four-item handoff packet — List family (policy ADVISOR-PROOF-POLICY section 4.5)

## 1. Pinned snapshot and regenerated tables

Reference: `Rokurolize/wikidot-php-reference` snapshot-36, main `13113aa5`, published tag `582f1069`. Lean: `Rokurolize/ftml-lean` main `e8d36b4`, frozen proof-base-v1 commit `4bf28f7` (tag object `ab8da940`), coordinator HEAD `ef05346de6c7dbc75ad3ee965cb5634d3cbaafbf`. `RefTables.lean` is unchanged by this correction: none of the three R13 rules edits an extracted PHP regex literal, so no `tools/extract_ref_tables.py --verify` regeneration is required from this unit (the coordinator still runs the gate under policy G2). Canonical base hashes: `List.php` `2474a54af9c60ea206a72ffabef7d01eb15532d7923e22d22a959874b10ba109`, `ListRules.lean` `496d474000d2376a6f660700d6aa02d46fb3ad1709138f92a8f5cb6c62289578`.

## 2. Delta manifest

`evidence/PROOF-DELTA-LIST-R13.md` classifies R13-S1 as regex-only in mechanism but process logic in effect, R13-S2 as regex-only, and R13-S3 as process/loop logic with the affected future bundle theorems named. No Unicode-table edits. Full patches: `evidence/List.php.refcorr13.diff`, `evidence/ListRules.lean.refcorr13.diff`.

## 3. Regression pin only

A single additive closed regression pin is to be added to `lean-ftml/SpecRefcorr13.lean` (not yet present), classified strictly as a regression test and never counted toward a proof gate. Its minimal witness is the S2-2 source `[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[footnote]]gap[[/footnote]]\n[[footnoteblock]]\n[[LI]]B[[/LI]]\n[[/UL]]` with live capture `muse-probe-round5f-s2-s2f-32-list-ft-hoist-gap` (html_sha256 `7afe4c9a2813a11b6fbcb30500fbc51a3e4c951479d6f840726225f3f04583c0`, valid/stable/source-matching) and its reference line `coord-units/R5F-S2/ref.jsonl:32`; the decisive assertion is that the `[[footnoteblock]]` placeholder lands in the hoisted tail of `listPostFailedClose10` rather than inside the absorbing `<li>`. The two dedup-eligible P1 witnesses are capture `muse-probe-round5f-p1-la5-ftprose` (html_sha256 `44a22198ce4ab43e9a27f69319841fa6e87aa6c11ac8258ea869453582db75fb`, source_sha256 `e760b0020400ca6bd5711bd863c9a7f8236a34672b8f75287657331484238b51`) for the preserved-LF witness and capture `muse-probe-round5f-p1-la3-lowerli` (html_sha256 `31a2ba9c039f8298cefea630e95568075bd860da4323ff432617098e09c590a0`) for the nested-boundary rule. No proof theorem is added by this unit.

## 4. Stability lock

The List family has an active unmerged REFCORR13 unit (this one) on the post-REFCORR12 ground. Under policy 4.5 item 4, no proof lane (in particular the HOLD `proof/list` lane) may be dispatched or accepted until this unit is merged and a fresh full round returns zero confirmations. WBS package 2.1 remains open: round 5f returned confirmations on P1, S1, S2 and other lanes, so this unit does not by itself close the zero-confirmation gate.
