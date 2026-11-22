# G1.2 conformance results (bridge A)

Date: 2026-11-20. ftml checkout: WSL `~/src/Rokurolize/ftml` at `8cb2757c2` (clean except pre-existing untracked files).

## Model side (Lean driver)

`lean-ftml-conformance-g12` (source `lean-ftml/ConformanceG12.lean`), 85 checks: 5 block types x 6 suffix variants x (profile + normalised outcome equality), 5 non-blank negative controls, 20 wrapping-context checks.

- Muse VM: `G12-CONFORMANCE PASS checks=85 failures=0`, exit 0.
- WSL (lane dir copy, sha256-identical sources): same PASS, exit 0.

Driver corrections during the run (expectation bugs in the driver, not the model; both confirmed against the theorems before fixing):

1. First pass compared raw rests; for first-closer types the rest legitimately retains the shape's second closer with its suffix. P2's exact statement (`scan_eraseBlank`) compares outcomes after blank-suffix erasure of the tail, so the driver now compares `g12Norm` of both outcomes.
2. The context check's expected rest forgot letter D sits in the rest (and, for first-closer types, letter C and the second closer too). Expected rests are now discipline-dependent (`g12ExpectedRest`).

## Rust side (the real harness)

Command (per brief, cargo through the slot wrapper):

```
cd ~/src/Rokurolize/ftml
HEAVY_BUILD_NO_SPLIT=1 ~/.local/state/wikijump/muse-bhl/tools/heavy-build.sh \
  bash verification/block-end/run.sh
```

Verdict: **exit 1, DIFFERS from known-findings.txt** (which is empty). 51 MINIMAL-FAILURE lines, one family only:

- `code` in contexts top / div / collapsible (not footnote), every body, every non-empty blank variant, line ending `"\n\n"` only (count=5 per body/context = 5 blank variants x the one eol): "P2 summary differs from the bare closer". The preprocessed grid shows the same family (30 of the 51 lines carry the `preproc:` prefix).

Mechanism (via `examples/dump_json.rs`, Wikidot layout, minimal source `[[code]]\n\n[[/code]]{blank}\n\nZZTAILZZ`; dumps in `evidence/rust-dump-bare.json` and `evidence/rust-dump-blank.json`):

- bare closer: elements = [code(""), paragraph[ZZTAILZZ]].
- blank-suffixed closer: elements = [code(""), text("\n"), text("ZZTAILZZ")] — the code block itself is identical (recognition, contents, termination all hold; P0/P1 pass), but the following text loses its paragraph container, so the harness's `sentinel_chains` summary component differs.

## Live adjudication (which side is wrong)

Saved-page probes on `sandbox-for-codex.wikidot.com` via `wikidot-probe` (create + double-fetch capture, all valid / stable / saved_source_matches; captures in `evidence/live-probe-captures.json`, map in `evidence/live-probe-map.json`):

- `muse-probe-g12-bare-empty`, `muse-probe-g12-blank-empty`, `muse-probe-g12-bare-x`, `muse-probe-g12-blank-x`.
- Live renders bare and blank forms identically: `<div class="code">...</div> <p>ZZTAILZZ</p>` in all four.

Conclusion: live Wikidot agrees with the recorded spec and with the Lean model. The current Rust deviates from live in this corner (finding F-G12-1, routed to the Wikijump-side chat). Post-sync wikidot_code.rs changes are the suspects: `3e3a5abae` ("closer terminates at whitespace or EOF...") and `c6eb4418e` ("Match live Wikidot block-head scanning...") both landed after the harness sync commit `4898541b1e` (#784); `known-findings.txt` has not been touched since #784.

## Addendum (2026-11-20): mechanism correction from the fix

The suspect list in the Rust-verdict section above pointed at post-#784 wikidot_code.rs commits. The parity chat's fix (ftml PR
#1524) found the mechanism one layer over, in gather_paragraphs: the
same-line residual checks for code and div blocks treated any non-break token after the block as same-line content, so the lone whitespace token after a blank-suffixed closer armed the residual mark, which emits a bare newline text and leaves the following run unwrapped. Both checks now require actual content ahead on the closer's line. The reproduction on origin/main (5a32efa863) matched this record exactly (51 findings); post-fix the harness reports 0 findings and the blank-form dump is structurally identical to the bare form. A trailing-space div closer failed identically and is fixed by the same change. The adjudication itself (live renders both forms identically; the Rust deviated) is unchanged and was accepted as the spec by the parity chat.
