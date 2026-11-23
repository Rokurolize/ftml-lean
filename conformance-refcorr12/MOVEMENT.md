# R12-GATE — movement analysis

## Scope and method

I snapshotted SHA-256 for every file in the scratch tree before any wrapper command (`meta/tree-hashes-before.txt`, 17,140 files) and again after all nine wrapper commands both in full (`meta/tree-hashes-after-full.txt`, 17,923 files including generated `.lake` and `__pycache__`) and with build/bytecode detritus filtered (`meta/tree-hashes-after.txt`, 17,143 files). `meta/movement.diff` is the literal diff of the two comparable snapshots and `meta/moved-files.txt`, `meta/added-files.txt`, `meta/deleted-files.txt` are the classified result. The canonical tree was resnapshotted with the identical filter (`meta/canonical-hashes-final.txt`) and is byte-identical to the pre-run snapshot (`meta/canonical-integrity.diff` empty, HEAD unchanged at `192804dee2ca17b59f9689a19a88c42e1c9f6e15`). All quoted bytes are data read from those files.

## File-level movement

Zero pre-existing scratch files changed. The comparable snapshots differ only by three added files, all backup companions created by the pooled recheck script before it rewrote its outputs: `conformance-capstone/pooled-comparison.txt.before-r12gate` sha256 `39bda704661ac798885fc74c737ceb113e591b93e492e87c3b5b35e5d395f4fc`, `conformance-capstone/pooled-lean.jsonl.before-r12gate` sha256 `630ffe390db47398f1de2c78bf9ee3ee21fb37079880afbcbc9d73ee20d73597`, and `conformance-capstone/pooled-mismatches.json.before-r12gate` sha256 `eec72a8058c161336ed0bfece8dfc4a826eac2bafc0c53230bb0f4c607c42317`. No file was deleted. In particular the regenerated `pooled-lean.jsonl`, `pooled-comparison.txt` and `pooled-mismatches.json` are byte-identical to their canonical originals, and the r48 gate regenerated `gate-e2e.txt` sha256 `5dd8ae672b2534512da5cf112dd09c3251f7aeffb83426762bd5ea4c9a3ba1f0` is likewise unchanged, which is the file-level reason no gate drift was observed. The generated detritus consists of 777 `.lake` files under `tree/lean-ftml/.lake/` from the fresh build and three `__pycache__` bytecode files from the pooled script's import of `compare` and `pooled_run`; none existed in the pre-run snapshot and none is proposed for adoption.

## Case-level confirmation

The pooled recheck regenerated all 4,205 driver records from the retained case list inside the wrapper scope and the comparison reproduced the canonical baseline exactly: `PASS: 4204/4205 (including 5 parse-fatal agreements)` with `MISMATCH: 1`, the sole mismatch `a34: tokens`. Because the regenerated comparison, lean output and mismatch JSON are unchanged from canonical, there is no case-level movement to report. The r48 family e2e gate likewise regenerated its outputs and still reported `gate-e2e.txt: FAIL 0` with counts `643/563/75/0/5`, so no case moved across the gate boundary. The nine smoke outputs were byte-identical to their per-case baselines.

## Exclusions

All `.lake` build output, `__pycache__` bytecode, the scratch tree itself, the three `.before-r12gate` companions, `scripts/`, `logs/`, `meta/`, `RESULT.md`, `MOVEMENT.md`, `VERDICT.md` and `ADOPTION-MANIFEST.md` are unit-local and outside any adoption payload. No canonical `conformance-*`, `ref-php/`, `lean-ftml/`, report, ledger or other unit directory was touched by R12-GATE.
