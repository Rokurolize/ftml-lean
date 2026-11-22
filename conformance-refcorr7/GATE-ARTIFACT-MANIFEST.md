# R7VERIFY adoption manifest

This manifest lists every artifact R7VERIFY regenerated or created that the coordinator may copy into the canonical tree, as source path inside `coord-units/R7VERIFY/tree` mapped to the canonical destination relative to the canonical root, with the SHA-256 of the exact source file. R7VERIFY copied nothing into canonical itself and edited no canonical file. The eight regenerated artifacts were produced by the six gate runs and the pooled recheck; the fourteen `.before-refcorr7` companions are byte-identical copies of the pre-run Lean-side artifacts, made and cmp-verified before any gate ran, and are listed here so the coordinator can adopt the predecessor evidence alongside the regenerated result. Source root is `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R7VERIFY/tree/`; destination root is `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/`.

## Regenerated artifacts (8)

| Source path | Canonical destination | SHA-256 of source |
|---|---|---|
| conformance-r45/family-lean-state.jsonl | conformance-r45/family-lean-state.jsonl | df881699066a447f5667433ab45a975ff5fc9314ed6087bb8cfd99d318982c96 |
| conformance-r45/family-lean-e2e.jsonl | conformance-r45/family-lean-e2e.jsonl | df881699066a447f5667433ab45a975ff5fc9314ed6087bb8cfd99d318982c96 |
| conformance-r45/family-e2e-detail.jsonl | conformance-r45/family-e2e-detail.jsonl | 232688d249635aede4b0cd9e94facfbfb5a68d5598e6acccc352da456df5f000 |
| conformance-r46/family45-lean-state.jsonl | conformance-r46/family45-lean-state.jsonl | df881699066a447f5667433ab45a975ff5fc9314ed6087bb8cfd99d318982c96 |
| conformance-r47/family45-lean-state.jsonl | conformance-r47/family45-lean-state.jsonl | df881699066a447f5667433ab45a975ff5fc9314ed6087bb8cfd99d318982c96 |
| conformance-r48/axioms-build.txt | conformance-r48/axioms-build.txt | 4fd1d29a4365cacdb59aca008284058f8f8ba84ee2285eb348b4c462081d7846 |
| conformance-capstone/pooled-lean.err | conformance-capstone/pooled-lean.err | 188f6c5695ab9cadedce161d727d307e174f92d98ebc6e936fc832859e3b880e |
| conformance-capstone/pooled-lean.jsonl | conformance-capstone/pooled-lean.jsonl | b35851a7a54fdcc5dbabe1c49d4b3598496f919667b8c911bfee17710012c437 |

## New before-refcorr7 predecessor copies (14)

| Source path | Canonical destination | SHA-256 of source |
|---|---|---|
| conformance-r45/family-lean-state.jsonl.before-refcorr7 | conformance-r45/family-lean-state.jsonl.before-refcorr7 | 9cfc5aa397fb9f2859b1d6f5c825ed3a7d0bc65a4f64d58050480501436ffe8d |
| conformance-r45/family-lean-e2e.jsonl.before-refcorr7 | conformance-r45/family-lean-e2e.jsonl.before-refcorr7 | 462a71a1e692d1186a90d74ae18049acbc77253619ddba242e90493a478d9efc |
| conformance-r45/family-state-detail.jsonl.before-refcorr7 | conformance-r45/family-state-detail.jsonl.before-refcorr7 | 232688d249635aede4b0cd9e94facfbfb5a68d5598e6acccc352da456df5f000 |
| conformance-r45/family-e2e-detail.jsonl.before-refcorr7 | conformance-r45/family-e2e-detail.jsonl.before-refcorr7 | f5c8b1f7838f1ed0c7bdbb0a5f9d1098a1ac2310940b15e5371537c307ff4e23 |
| conformance-r45/family-state-comparison.txt.before-refcorr7 | conformance-r45/family-state-comparison.txt.before-refcorr7 | 5ff07a576cdcc0c82000241de380cd06104d31daa1a0be7c56276adf059951eb |
| conformance-r45/family-e2e-comparison.txt.before-refcorr7 | conformance-r45/family-e2e-comparison.txt.before-refcorr7 | 5ff07a576cdcc0c82000241de380cd06104d31daa1a0be7c56276adf059951eb |
| conformance-r46/family45-lean-state.jsonl.before-refcorr7 | conformance-r46/family45-lean-state.jsonl.before-refcorr7 | 9cfc5aa397fb9f2859b1d6f5c825ed3a7d0bc65a4f64d58050480501436ffe8d |
| conformance-r46/reg-r45-family-detail.jsonl.before-refcorr7 | conformance-r46/reg-r45-family-detail.jsonl.before-refcorr7 | 232688d249635aede4b0cd9e94facfbfb5a68d5598e6acccc352da456df5f000 |
| conformance-r46/reg-r45-family-comparison.txt.before-refcorr7 | conformance-r46/reg-r45-family-comparison.txt.before-refcorr7 | 8ab0354d5d79f9439a249c2fd9631cc1312612a0313c37935a42c660366c6eaa |
| conformance-r47/family45-lean-state.jsonl.before-refcorr7 | conformance-r47/family45-lean-state.jsonl.before-refcorr7 | 00a3bcf890d465dae8ebf8334124e5e988eb60eb76cae21b80806e629d453a34 |
| conformance-r47/reg-r45-family-detail.jsonl.before-refcorr7 | conformance-r47/reg-r45-family-detail.jsonl.before-refcorr7 | 232688d249635aede4b0cd9e94facfbfb5a68d5598e6acccc352da456df5f000 |
| conformance-capstone/pooled-lean.jsonl.before-refcorr7 | conformance-capstone/pooled-lean.jsonl.before-refcorr7 | 68ab0ab00775e1b090d7227db8f6a118254bad3a0856d33f689106cb7718cb08 |
| conformance-capstone/pooled-comparison.txt.before-refcorr7 | conformance-capstone/pooled-comparison.txt.before-refcorr7 | 39bda704661ac798885fc74c737ceb113e591b93e492e87c3b5b35e5d395f4fc |
| conformance-capstone/pooled-mismatches.json.before-refcorr7 | conformance-capstone/pooled-mismatches.json.before-refcorr7 | eec72a8058c161336ed0bfece8dfc4a826eac2bafc0c53230bb0f4c607c42317 |

## Explicitly excluded from adoption

The assigned r47 trio names `reg-r45-family-comparison.txt`, but that file does not exist in canonical r47 and the r47 gate does not produce it, so no copy or adoption row exists for it. The scratch tree's `lean-ftml/.lake` build output, `__pycache__` directories, `ref-php/wikidot-root/tmp` harness detritus and the R7VERIFY-local tooling (`run_pooled_recheck_r7verify.py`, `run_smoke_r7verify.sh`, `analyze_movement.py`, `meta/`, `logs/`, `RESULT.md`, `MOVEMENT.md` and this manifest) are unit-local and are not proposed for canonical adoption. Canonical `COMPLETION-WBS.md`, `GAP-LEDGER.md` and `STATE.md` changed concurrently under other agents after my snapshot; their tree copies are stale and must not be adopted. All other files in the scratch tree remained byte-identical to canonical after the gates, as recorded in `meta/full_tree_diff.txt` and `meta/all_artifact_diff.txt`.
