# G1.5 conformance results (bridge A)

Run on 2026-11-20 against ftml 014eb6f95 (the read-only checkout at /home/roku/src/Rokurolize/ftml). The Rust half drives the real `ParagraphStack::new_wikidot()` through a JSONL operation protocol; the Lean half drives the proved model in `lean-ftml/LeanFtml/ParagraphStack.lean` through the same protocol.

**Result: 1603/1603 cases byte-identical (0 mismatches, 0 raw-line differences).**

## Harness layout

- `gen_grid.py` — generator for `inputs.jsonl`: 30 hand-pinned core shapes, 11 corpus-derived abstract shapes (paragraph/basic, comment-line single break, blockquote native blank split, list item-middle-paragraphs, table-followed-by-prose, span paragraph-break), all length-2 and length-3 sequences over a 10-operation alphabet, 64 mark-combination cases, and 400 seeded random longer streams (seed 6150). Each line is `{"id","wikidot":true,"ops":[...]}`.
- `rust-dump/` — Rust dumper crate. It depends on `../ftml-shim`, a copy of the ftml source tree (src/, Cargo.toml, Cargo.lock, build.rs, .cargo, benches) with only three local changes: `parsing/mod.rs`'s `mod paragraph;` became `pub mod paragraph;`, `lib.rs` gained a `g15_shim` re-export module, and two `pub(crate)` stack methods (`mark_next_unwrapped`, `record_next_element_line_start`) became `pub`. No file in the read-only ftml checkout was modified. Every operation is applied to a fresh `ParagraphStack::new_wikidot()`, and `into_elements()` is serialized with serde_json.
- `lean-ftml/ConformanceG15.lean` — Lean driver (built as `lean-ftml-conformance-g15`); it applies `pushElement`, `pushSafeElements`, `endParagraph`, `endParagraphAtBreak`, and the three marks to the model's `St`, finalizes with `intoElements`, and emits the same serde key order by hand.
- `compare.py` — field-wise comparison; the recorded number additionally used `cmp` on the two JSONL files to confirm byte identity.
- `inputs.jsonl`, `lean-out.jsonl`, `rust-out.jsonl` — the frozen grid and both sides' outputs. `build-dump.log` records the Rust build; the built dumper binary is preserved as `rust-dump/g15-rust-dump` for firsthand verification (the `target/` directory was removed after the build, following the earlier family convention).

## Scope of the grid

The grid covers exactly the scoped claims in REPORT-G15.md: paragraph-safe vs unsafe element pushes, `build_paragraph`/`end_paragraph` splitting, empty runs, trailing-space trimming, leading-break skipping in bulk pushes, `mark_current_unwrapped`/`mark_next_unwrapped`, `mark_discarded_control`, `pop_line_break`, `end_paragraph_at_break`, and final `into_elements`. Element kinds: text, raw, line-break, horizontal rule, code (opaque contents), explicit-list-free containers (bold/div), and simple table stand-ins; nested container interiors, images, HTML, and explicit-list post-follower marks are deliberately excluded because they are deferred in the claim set.

## Reproduction

    # Lean side
    cd lean-ftml && lake build lean-ftml-conformance-g15
    .lake/build/bin/lean-ftml-conformance-g15 < ../conformance-g15/inputs.jsonl > ../conformance-g15/lean-out.jsonl

    # Rust side (heavy-build.sh is the box-wide cargo semaphore; background it)
    HEAVY_BUILD_NO_SPLIT=1 /home/roku/.local/state/wikijump/muse-bhl/tools/heavy-build.sh \
      cargo build --manifest-path conformance-g15/rust-dump/Cargo.toml --release
    conformance-g15/rust-dump/target/release/g15-rust-dump < conformance-g15/inputs.jsonl \
      > conformance-g15/rust-out.jsonl

    # Compare
    python3 conformance-g15/compare.py conformance-g15/inputs.jsonl \
      conformance-g15/lean-out.jsonl conformance-g15/rust-out.jsonl
