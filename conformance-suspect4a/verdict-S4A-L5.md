# Verdict S4A-L5 — SUSPECT4-A

Verdict: CLEARED

Pre-probe ledger: LEDGER-PREPROBE.md, section S4A-L5. Rationale: Both duplicate-case-variant shapes match the reference byte for byte after the Stage 2 trailing-newline mask. Live drops uppercase keys, keeps the lowercase duplicate, isolates id with u- and lowercases the data-* suffix, emitting the same <li> attribute set and order as buildListAttrs. No divergence at the <li> surface.

## s4a-l5a — muse-probe-suspect4a-s4a-l5a

Capture valid=True stable=True saved_source_matches=True; source sha256 d4ddd4ab681a5f6eac28578555b90ac5bedd0a32b6457783d7ecd4502e9e943c.

Source: `[[ul]]
[[li CLASS="c" class="d" ID="x" id="y" data-FOO="1" data-foo="2"]]A[[/li]]
[[/ul]]`

Live bytes: `<ul>
<li id="u-y" class="d" data-foo="2">A</li>
</ul>
<br />`

Reference bytes (this tree's ref-php batch.php render): `<ul>
<li id="u-y" class="d" data-foo="2">A</li>
</ul><br />
`

Frame-masked comparison: MATCH.

## s4a-l5b — muse-probe-suspect4a-s4a-l5b

Capture valid=True stable=True saved_source_matches=True; source sha256 97744bb3e42f790aebf3a7c8085399ff3603e45d56dcefaae3c8647f70458873.

Source: `[[ul]]
[[li DATA-FOO="1" data-Foo="2"]]A[[/li]]
[[/ul]]`

Live bytes: `<ul>
<li data-foo="2">A</li>
</ul>
<br />`

Reference bytes (this tree's ref-php batch.php render): `<ul>
<li data-foo="2">A</li>
</ul><br />
`

Frame-masked comparison: MATCH.

Reference command: `cd ref-php && php harness/batch.php render < ../conformance-suspect4a/cases.jsonl > ../conformance-suspect4a/ref.jsonl` (exit 0, empty stderr).

