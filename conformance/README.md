# Conformance harness — bridge option A evidence for the Lean models

Per SPEC-LAYER-PROPOSAL.md (owner-approved 2026-11-19), a Lean model in this loop is kept honest by differential conformance: the model, compiled from Lean, and the real Rust code are run on the same inputs and their FULL outputs compared. A mismatch invalidates the model, never the proof (the proof is about the model; conformance is about the model↔code link).

## G1.1: process_depths

- Model: `LeanFtml.processDepths` (lean-ftml/LeanFtml/Depth.lean), driven by lean-ftml/Conformance.lean.
- Real code: ftml `src/parsing/depth.rs::process_depths`, compiled by path inclusion in rust-dumper/ (the same trick ftml's own verification/process-depths crate uses). Top type 9, as in the ftml exhaustive harness.
- Inputs (gen_inputs.py, deterministic): the harness's bounded box (length ≤ 5 by default = 271,453 cases over depths 0..=3, 3 types; `run.sh 6` reproduces the harness's full 3,257,437-case box) plus 20,000 fixed-seed LCG cases outside the box (length ≤ 40, depth ≤ 8, 4 types). The input file's sha256 is printed each run; generation is pure integer arithmetic and identical on any machine.
- Input format: one case per line; rows as `depth,type,id` joined by `;`; id is the row's position; an empty line is the empty case.
- Canonical output format (both sides implement exactly this): a forest is `-` when empty, else its nodes joined by single spaces; a node is `i<id>` for an item or `L<type>(<forest>)` for a list; an output line is `EMPTY` when there are no trees, else `T<type>[<forest>]` joined by single spaces.
- Run: `./run.sh [MAXLEN]` from this directory. It builds the canonical project on the VM, syncs sources to the WSL mirror at ~/.local/state/wikijump/muse-bhl/lean-ftml-conformance, builds both sides there (cargo through heavy-build.sh), and compares outputs. The WSL mirror is a build copy; the VM tree is the record.

Known asymmetry, deliberate: the Rust dumper panics on a malformed input line (visible failure), the Lean driver drops unparseable rows (filterMap). Inputs are machine-generated, so a malformed line means the generator broke, and the Rust side will say so first.

## Results

- 2026-11-19, run.sh 5: 291,453 cases (box length ≤5 = 271,453, plus 20,000 LCG), inputs sha256 2cb243b159f257a7f29de1ab53951021d088a8700c48fde506672a37fbea9afc — CONFORMANCE MATCH, outputs byte-identical.
- 2026-11-19, run.sh 6: 3,277,437 cases (the ftml harness's complete bounded box, 3,257,437, plus 20,000 LCG), inputs sha256 29b5150c344ef187efec10aef68da1d3d179acc62f8f91c053245918fdb1b80a — CONFORMANCE MATCH, outputs byte-identical.
