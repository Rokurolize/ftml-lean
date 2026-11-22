# Verdict S4A-M2 — SUSPECT4-A

Verdict: CLEARED

Pre-probe ledger: LEDGER-PREPROBE.md, section S4A-M2. Rationale: For s4a-m2a the page-content bytes are <p>trailing</p> on both sides; the reference's module placeholder is the known serving-layer marker and the captured body is the trimmed 'body' that batch 7 settled. For s4a-m2b the full-page fetch shows no CSS, matching the reference's capture of the inner module token as the module654 body. No parse-side tail or nesting divergence survives.

## s4a-m2a — muse-probe-suspect4a-s4a-m2a

Capture valid=True stable=True saved_source_matches=True; source sha256 620e3dea68fb61ee87cc8c0c3d0f8129238ee24dcf9079bddd6ff5aa92653676.

Source: `[[module css]]
body
[[/module]]trailing`

Live bytes: `<p>trailing</p>`

Reference bytes (this tree's ref-php batch.php render): `þmodule "css" +module_body%3D%22body%22 þ<p>trailing</p>

`

Frame-masked comparison: DIFF.

## s4a-m2b — muse-probe-suspect4a-s4a-m2b

Capture valid=True stable=True saved_source_matches=True; source sha256 81a3084b8f0e2270cd5fc6ee36adf2828b7cb92226bc6ba6b3b01f01fa54f607.

Source: `[[module654 css]]
[[module foo]]
body
[[/module]]
[[/module]]`

Live bytes: ``

Reference bytes (this tree's ref-php batch.php render): `þmodule "css" +module_body%3D%22%25FF408%25FF%22 þ`

Frame-masked comparison: DIFF.

Reference command: `cd ref-php && php harness/batch.php render < ../conformance-suspect4a/cases.jsonl > ../conformance-suspect4a/ref.jsonl` (exit 0, empty stderr).

