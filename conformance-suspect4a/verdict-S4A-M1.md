# Verdict S4A-M1 — SUSPECT4-A

Verdict: CLEARED

Pre-probe ledger: LEDGER-PREPROBE.md, section S4A-M1. Rationale: The wikidot-probe page-content capture is empty for a [[module css]] page because the CSS module emits a <style> element outside id="page-content"; the full page HTML was therefore fetched once and cached under live-full-*.html. The full pages emit no CSS for a nested-module body, consistent with the reference capturing the inner module token as the outer body and the CSS module discarding that invalid CSS. The remaining visible difference is the documented serving-layer module placeholder (class S), not a parse or render defect. No divergence in the shapes the parse rule owns.

## s4a-m1a — muse-probe-suspect4a-s4a-m1a

Capture valid=True stable=True saved_source_matches=True; source sha256 cf21eb0d5ebad66cf3f30a9aef24a92ac1008647844ed8a1a422e8b187285605.

Source: `[[module CSS]]
[[module unknown]]
body
[[/module]]
[[/module]]`

Live bytes: ``

Reference bytes (this tree's ref-php batch.php render): `þmodule "CSS" +module_body%3D%22%25FF362%25FF%22 þ`

Frame-masked comparison: DIFF.

## s4a-m1b — muse-probe-suspect4a-s4a-m1b

Capture valid=True stable=True saved_source_matches=True; source sha256 a8b28712eccfbdaf9cb8ef6f55717f0db920872adf286a823654d234f4788146.

Source: `[[module css]]
[[MODULE unknown]]
body
[[/MODULE]]
[[/module]]`

Live bytes: ``

Reference bytes (this tree's ref-php batch.php render): `þmodule "css" +module_body%3D%22%25FF377%25FF%22 þ`

Frame-masked comparison: DIFF.

Reference command: `cd ref-php && php harness/batch.php render < ../conformance-suspect4a/cases.jsonl > ../conformance-suspect4a/ref.jsonl` (exit 0, empty stderr).

