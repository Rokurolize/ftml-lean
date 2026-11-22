# REPORT-ROUND5-P3 — suspicion round 5, parse-side structural rules

Unit `R5-P3`, family seam PARSE-SIDE STRUCTURAL RULES, canonical base `e53e7234008860a92e53b93d851c49a0e2b04043`. Assigned reference families: Include, Module, Module654, Raw, Rawold, Form, Table, Tableadv, Image, Gallery and File. No ftml file was edited, no cargo was run, no repository-local git identity or identity environment variable or `-c user.*` override was set, and no Lean invocation was required. Live Wikidot is definitional. The pre-probe ledger is `LEDGER.md`, the generator is `gen_cases.py`, the per-row dispositions are in `VERDICTS.md`, and the machine comparison is `comparison.json`.

## Method and probe record

Twenty suspicions were raised from reading the reference PHP before any capture, and four include-target pages were created first under this unit's own prefix and recorded in `target-map.json`, following SUSPECT4-C. The target sources are `[[form]]` / `FORMX` / `[[/form]]`, `[[code]]` / `CODEX` / `[[/code]]`, `SPLICED` and `@@RAWX@@`, saved as `muse-probe-round5-p3-t-form`, `-t-code`, `-t-text` and `-t-raw`. The twenty probe pages use the prefix `muse-probe-round5-p3-` and are listed in `map.json`; all were left in place. The standard double-fetch capture produced `captures.json`: 20 created, 20 captured, 20 valid, 20 stable, 20 saved-source-matching, 0 invalid or untestable. The canonical PHP render used `ref-php/harness/batch.php render` into `ref-batch.jsonl` (exit 0, 0 stderr bytes); the include-aware scratch renderer `render-with-pages.php` produced `ref.jsonl` (exit 0, 0 stderr bytes) after adding the four target sources to the harness page map. The 17 non-include cases are byte-identical between `ref-batch.jsonl` and `ref.jsonl`; the three include cases differ only because the standard harness page map does not contain the run-owned targets. Comparison used `probe.norm` and the campaign frame mask in `compare.py`. SHA-256: `cases.jsonl` `d6aaaccd4954d3edc07c3e3e217fc5dc24ddcb0575e6cfba3b9b1ab74286d48b`, `captures.json` `14f179af870a013fcff5a7cca60dc74d5738ea6b1789cecf0b9463b112f1b23d`, `ref.jsonl` `e57ad97118784471e14db153418406527bfa5dee8e61549950a1359e21ec7f1c`.

## Confirmed divergences

`C-R5-P3-1` (Raw, source `@@@@ZQ@@@`): live `<p>ZQ@@@</p>` against the reference's `<p>ZQ</p>`; capture `muse-probe-round5-p3-p3-08-raw-4-3`, `Raw.php:146-151`, mirror `FormRawRules.lean:335-343`. `C-R5-P3-2` (Tableadv, head `[[table data-Foo="UP"]]`): live `<table data-foo="UP">` against the reference's `<table>`; capture `muse-probe-round5-p3-p3-13-tableadv-upper-data`, `Tableadv.php:152`, mirror `TableRules.lean:368-373` and `:388`. Both correction records are in `conformance-round5-p3/`.

## Cleared and untestable

Eighteen suspicions cleared, zero untestable. Eleven cleared by exact agreement after the mask (P3-01, P3-02, P3-03, P3-05, P3-06, P3-09, P3-10, P3-11, P3-12, P3-14, P3-15). Seven cleared because the only differences were owned surfaces: two inter-tag-newline frame shapes (P3-04, P3-07), one wdfiles-host shape in `img src` (P3-16), two gallery shapes with random element ids, wdfiles hosts, serving classes and lightbox script (P3-17, P3-18), and two File shapes where the href path and anchor spelling match and only the wdfiles host differs (P3-19, P3-20).

## Verdict

2 CONFIRMED: `C-R5-P3-1` and `C-R5-P3-2`. No mirror elaboration was run; the mirror consequences are inferred from source reading. Operational caveats: the create step saw four AMC `try_again` responses that the standard verify-then-retry loop resolved, and one page (`p3-14`) needed two retries; all twenty saved sources matched on capture. No capture was re-fetched outside the standard two-fetch recipe.

## Payload inventory (files for the coordinator to copy, no source files)

| File | SHA-256 |
|---|---|
| `REPORT-ROUND5-P3.md` | self-reference omitted; this file's sha256 is recorded in `UNIT.md` |
| `conformance-round5-p3/CORRECTION-C-R5-P3-1.md` | `415074dc3cd107a90b70996bef4eb559e3f0722cfbf8c2050d5f014bc8ac5714` |
| `conformance-round5-p3/CORRECTION-C-R5-P3-2.md` | `59c937c5c0794c20a385c2d21bc83a3ff0eaa7c73a65bc8d0f545e33f5ae3278` |
| `conformance-round5-p3/LEDGER.md` | `7041396be4e30cad98228f1a2efc6e8b91fa1cb1418630c1b9044e57f3ba76d6` |
| `conformance-round5-p3/cases.jsonl` | `d6aaaccd4954d3edc07c3e3e217fc5dc24ddcb0575e6cfba3b9b1ab74286d48b` |
| `conformance-round5-p3/ref-render.jsonl` | `e57ad97118784471e14db153418406527bfa5dee8e61549950a1359e21ec7f1c` |
| `conformance-round5-p3/captures.json` | `14f179af870a013fcff5a7cca60dc74d5738ea6b1789cecf0b9463b112f1b23d` |
| `conformance-round5-p3/comparison.json` | `c4e7435d742979b0b3f5d62cd44d43b448692391487a1576e53b5b764a461560` |
| `conformance-round5-p3/target-map.json` | `b91843fb20d74b6b578f64418111498fed772b4a40c4821806c764acd79d62e8` |
