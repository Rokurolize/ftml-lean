# Verdict S4A-R4 — SUSPECT4-A

Verdict: CLEARED

Pre-probe ledger: LEDGER-PREPROBE.md, section S4A-R4. Rationale: Both empty-Raw-at-Colortext-edge shapes match the reference after the trailing-newline mask. The emitted span content and the hoisted/ejected spaces coincide, so the composite's placeholder deletion before the color edge passes is live-correct here.

## s4a-r4a — muse-probe-suspect4a-s4a-r4a

Capture valid=True stable=True saved_source_matches=True; source sha256 fbf3852f2e7fb2a9dea13cea9ffb07cd8e0edc1e8530b76d5bce7570b72435f8.

Source: `##red| @@@@ hi ##`

Live bytes: `<p><span style="color: red">hi</span></p>`

Reference bytes (this tree's ref-php batch.php render): `<p><span style="color: red">hi</span></p>

`

Frame-masked comparison: MATCH.

## s4a-r4b — muse-probe-suspect4a-s4a-r4b

Capture valid=True stable=True saved_source_matches=True; source sha256 96b7c839ce284f674178fba797199200973be0ff055448691d3d5ab4ee0bd49c.

Source: `x##red| hi @@@@ ##y`

Live bytes: `<p>x <span style="color: red">hi</span> y</p>`

Reference bytes (this tree's ref-php batch.php render): `<p>x <span style="color: red">hi</span> y</p>

`

Frame-masked comparison: MATCH.

Reference command: `cd ref-php && php harness/batch.php render < ../conformance-suspect4a/cases.jsonl > ../conformance-suspect4a/ref.jsonl` (exit 0, empty stderr).

