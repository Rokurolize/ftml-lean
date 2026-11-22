# Mission

Prove in Lean 4 (4.36.0) that ftml's Rust implementation of Wikidot parsing is equivalent to the expected Wikidot semantics, and systematically work through everything not yet proven. The unproven set (GAP-LEDGER.md) is the backlog and the exhaustion criterion: the loop is done only when it is empty, or every remainder carries a recorded, evidence-based reason.

## Workspace

Your working directory is /home/roku/.local/state/wikijump/muse-bhl/lean-ftml-antigravity (this prompt is PROMPT.md in its root).

- GAP-LEDGER.md: the backlog. Read it first; it is the single source of truth for what is proven, what is open, and the exact remaining work per family.
- STATE.md: loop state and working rules. INVENTORY.md: measured map of the ftml pipeline, constructs, and corpus. SPEC-LAYER-PROPOSAL.md: the approved architecture (evidence layer, Lean spec layer, bridge option A).
- GRAMMAR-INCLUDE.md: the adjudicated include grammar (the G1.4 spec: rules S1-S5, G1-G8, Q1-Q3, F1-F2, H1-H2, U1-U6; open live probes L1-L4).
- lean-ftml/: the Lean project. lean-ftml/LeanFtml/ holds Tree.lean (spec AST skeleton), Depth.lean, BlockEnd.lean, Include.lean. lean-ftml/Main.lean holds the #print axioms audit lines.
- conformance/ and conformance-g12/: bridge-A differential harnesses and recorded results for G1.1 and G1.2.
- The system under proof: the Rust crate at /home/roku/src/Rokurolize/ftml (main @ 0a96f564e). READ-ONLY: never edit it. It is evidence, not a worktree.

## State of the proof

PROVEN (theorems build, no sorry, conformance green): G1.1 process_depths (lean-ftml/LeanFtml/Depth.lean; model of src/parsing/depth.rs; byte-identical output trees to the real Rust on 3,277,437 inputs), G1.2 block-end closers (lean-ftml/LeanFtml/BlockEnd.lean; model of the closer scan in src/parsing/rule/impls/block/parser.rs, functions verify_end_block and get_body_generic, and src/wikidot_code.rs; recorded spec in verification/block-end/recorded-pairing.txt), G1.3 include substitution core (lean-ftml/LeanFtml/Include.lean; models find_include_end and substitute_replacements in src/includes/mod.rs).

Open, in ledger order: G0.1/G0.2 (spec AST completion; a bridge-A dumper and generator per family), G0.3 (layout split), the G1.4 remainder (Lean model of the include scanner, block grammar, and quoted normalization per GRAMMAR-INCLUDE.md; live probes L1-L4; a fragment differential driver through the public ftml::includes::include), G1.4b (argument-expression layer: src/includes/parse.rs, functions expand_argument_expression and resolve_include_arguments), G1.5 (ParagraphStack output-tree correctness: src/parsing/paragraph/stack.rs; the harness in verification/paragraph-stack/ proves no-panic only), G1.6 (seam typography adjudication: src/preproc/typography.rs; verification/seam-typography/known-findings.txt and evidence/), then Tier 2 (G2.1-G2.4 pairing and scope), Tier 3 (G3.1-G3.14 per-construct families), Tier 4 (G4.1-G4.3). Each ledger entry states exactly what it is owed. Work the ledger, not a fixed script.

## Rules of evidence (these bind every claim)

- Live Wikidot behavior is definitionally correct. The gabrys/wikidot Text_Wiki PHP on GitHub is a roughly ten-year-old fossil and is NEVER behavior evidence; PHP structure may inform AST design only where live behavior agrees.
- Evidence order: (1) ftml's corpus and integration pins (test/ in the ftml checkout, 2,797 cases; they are the behavior spec, check them first), (2) frozen parity captures, (3) fresh live sandbox probes where neither reaches.
- Live probes: use the tooling in ~/.agents/skills/wikidot-py-operations/ (the wikidot-probe tool; read ~/.agents/skills/wikidot-sandbox-access/SKILL.md first) against sandbox-for-codex.wikidot.com. Name pages muse-probe-*, fetch once, cache, reuse. Leave probe pages in place and record them in the run record.
- Bridge option A: each family gets a hand-written Lean model of the Rust plus a differential conformance corpus (the compiled Lean model against the real Rust function over the family's full bounded grid plus generated inputs, in the shape of conformance/ and conformance-g12/). A mismatch invalidates the model, never the evidence. A family is PROVEN only when its theorems build AND its conformance slice is green.
- If live behavior and the Rust disagree, the Rust is wrong: record it as a numbered finding in GAP-LEDGER.md with its evidence (F-G12-1 is the worked example) and keep proving against live. Do not fix the Rust, and do not weaken a spec to match it.
- The spec AST (lean-ftml/LeanFtml/Tree.lean) grows family by family; every spec rule carries a comment citing its evidence.

## Toolchain and verification

- Lean: run export PATH="$HOME/.elan/bin:$PATH" first (lake and lean are not on the default PATH). Build with: cd lean-ftml && lake build. Work is not done until lake build is green with zero sorry (grep -rn sorry lean-ftml/LeanFtml/ must show none) and every new theorem has a #print axioms line added to lean-ftml/Main.lean. Axiom budget: at most [propext, Quot.sound]; no sorryAx ever; avoid Classical.choice (G1.1 carries it as a recorded remainder under an open owner decision; do not spend effort on that cleanup).
- Cargo (harness runs, Rust dumpers): only through the build-slot wrapper, HEAVY_BUILD_NO_SPLIT=1 /home/roku/.local/state/wikijump/muse-bhl/tools/heavy-build.sh <cmd>. Existing harnesses live in the ftml checkout at verification/block-end/run.sh, verification/include-expansion/run.sh, verification/paragraph-stack/run.sh, verification/seam-typography/run.sh; each family's .claude/skills/verify-*/SKILL.md is the authoritative reading of its harness.
- Record-keeping: as each family closes or changes state, update GAP-LEDGER.md (status, theorem names, build and axiom results, conformance counts, evidence paths) and STATE.md in this workspace. Do not commit anything to git; leave the worktree for review.
- The G1.1-G1.3 proofs were made against ftml 8cb2757c2 and re-verified where the ledger says so; the checkout is now at 0a96f564e. If it has moved again when you start, note the new HEAD in STATE.md and re-run the affected family's harness before building on it.
