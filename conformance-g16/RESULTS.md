# G1.6 conformance results (bridge A)

Run on 2026-11-20 against ftml `014eb6f95ff44b861db4ce4bd83a5ab852a85011` (the read-only checkout at `/home/roku/src/Rokurolize/ftml`). The Rust half regenerates the seam-equivalence harness's entire input space and drives the real `substitute_wikidot_deferring_conditionals` / `resolve_static_suppressions` / `wikidot_seam_edits` path through a copied source tree; the Lean half drives the proved model in `lean-ftml/LeanFtml/SeamTypography.lean` over the same regenerated space.

**Result: 271,453/271,453 inputs agree; 0 `got` mismatches, 0 naive-oracle mismatches, 0 cases where the Lean resolved text differs from the Lean corrected expectation.** The real ftml difference classes are exactly the four classes in `known-findings.txt`, with exactly the recorded counts: `right-angle:text-differs: >- »+` 3,239, `text-differs:  -` 342, `right-angle:text-differs:  -` 139, and `right-angle:text-differs:  - >- »+` 1; the remaining 267,732 inputs agree with the naive string oracle outright.

## Harness layout

- `rust-dump/` — Rust dumper crate. It enumerates every word of length 0..=5 over `TOKENS.len() + 1 = 12` symbols (11 text tokens plus the seam token), exactly the harness's odometer order and base-12 ordinal, and emits one JSONL record per input with `id`, `pick`, the seam-resolved `got`, the naive joined-string oracle `expected`, the harness difference `class`, and the diagnostic `message` for each difference. Its check is the harness's own `check` function lifted verbatim into `ftml-shim/src/g16_shim.rs`; no check logic was reimplemented.
- `ftml-shim/` — a copy of the ftml source tree (`src/`, `Cargo.toml`, `Cargo.lock`, `build.rs`, `.cargo/`, `benches/`) with a new `src/g16_shim.rs` module and three small edits: `src/delayed.rs`'s `mod seam;` became `pub(crate) mod seam;`, `src/delayed/seam.rs`'s `resolve_static_suppressions` became `pub(crate)`, and `src/lib.rs` gained `pub mod g16_shim;`. These are visibility-only for G1.6. The copy was taken from the G1.5 shim in this worktree, which additionally carried its own earlier edits (`pub mod paragraph;`, two `pub` stack methods, and the `g15_shim` re-export) plus a quoted-include change in `includes/`; none of those touch `preproc/typography.rs`, `delayed/seam.rs`, or this check, and `typography.rs` and `delayed/seam_equivalence.rs` are byte-identical to the read-only checkout. No file under `/home/roku/src/Rokurolize/ftml` was modified. The built dumper is preserved as `rust-dump/g16-rust-dump`.
- `lean-ftml/ConformanceG16.lean` — Lean driver built as `lean-ftml-conformance-g16`. It regenerates the same 271,453 picks, rebuilds segments from the token stream, and emits `{"id","got","expected","corrected"}`; `got` is the faithful ftml path through piecewise preprocessing plus seam resolution, `expected` is the naive joined-string oracle, and `corrected` is the model's seam resolution. Text is `List Char` inside the model and converted to `String` only at the I/O edge.
- `compare.py` — joins Rust and Lean records by `id` and checks `got`, `expected`, and the model's `got == corrected`, then summarizes the Rust classes against `known-findings.txt`. It prints the numbers above and exits zero.
- `rust-out.jsonl`, `lean-out.jsonl` — the frozen outputs, 271,453 lines each. `compare.log` is the recorded comparison output. `build-dump.log` and `rust-run.err` / `lean-run.err` record the build and both runs.

## Scope of the grid

The grid is the harness's whole default-bound input space: all words of length zero through five over the alphabet `"`, `'`, `a`, ` `, `.`, `...`, `<`, `>`, `<<`, `>>`, `é` plus the seam separator. It therefore covers every position of a seam relative to every typography trigger the harness tests: left and right angle runs of every length available, spaced and unspaced ellipsis, the two-byte `é` token (a byte-offset/Char-order check), and runs that cross one or multiple adjacent seams. It deliberately does not test quote, number-unit, link, math, literal or block-attribute typography, because none of those triggers is in the harness alphabet and the harness itself never generates them.

## Reproduction

    # Lean side
    cd lean-ftml && lake build lean-ftml-conformance-g16
    .lake/build/bin/lean-ftml-conformance-g16 < /dev/null > ../conformance-g16/lean-out.jsonl

    # Rust side (heavy-build.sh is the box-wide cargo semaphore; run as a
    # background job, with HEAVY_BUILD_NO_SPLIT=1 as the lane convention)
    HEAVY_BUILD_NO_SPLIT=1 /home/roku/.local/state/wikijump/muse-bhl/tools/heavy-build.sh \
      cargo build --manifest-path conformance-g16/rust-dump/Cargo.toml --release
    conformance-g16/rust-dump/target/release/g16-rust-dump \
      > conformance-g16/rust-out.jsonl

    # Compare
    python3 conformance-g16/compare.py conformance-g16/rust-out.jsonl \
      conformance-g16/lean-out.jsonl \
      /home/roku/src/Rokurolize/ftml/verification/seam-typography/known-findings.txt
