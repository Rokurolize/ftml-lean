# Verdict S4A-R1 — SUSPECT4-A

Verdict: CLEARED

Pre-probe ledger: LEDGER-PREPROBE.md, section S4A-R1. Rationale: All three narrative-side and both-sides empty-Raw deflist shapes match the reference after the trailing-newline mask. The composite empty Raw renders to nothing in the <dd>, and termRendersEmpty omits the <dt> only when the term alone is the empty Raw, exactly as live serves. The pinned dl-empty4 shape is extended without divergence.

## s4a-r1a — muse-probe-suspect4a-s4a-r1a

Capture valid=True stable=True saved_source_matches=True; source sha256 74c51a3c6cdcd05f8b17d5b6d22769107e26a8939f2aee0b2bde93b68424ee65.

Source: `: term : @@@@`

Live bytes: `<dl>
<dt>term</dt>
<dd></dd>
</dl>`

Reference bytes (this tree's ref-php batch.php render): `<dl>
<dt>term</dt>
<dd></dd>
</dl>
`

Frame-masked comparison: MATCH.

## s4a-r1b — muse-probe-suspect4a-s4a-r1b

Capture valid=True stable=True saved_source_matches=True; source sha256 352a65df7889c6b8f42f7fd05a605465e8973c5991cde1107b9ad9a392fa837d.

Source: `: term : def@@@@`

Live bytes: `<dl>
<dt>term</dt>
<dd>def</dd>
</dl>`

Reference bytes (this tree's ref-php batch.php render): `<dl>
<dt>term</dt>
<dd>def</dd>
</dl>
`

Frame-masked comparison: MATCH.

## s4a-r1c — muse-probe-suspect4a-s4a-r1c

Capture valid=True stable=True saved_source_matches=True; source sha256 7102f1e1c51802479456cedf22f4bb09bafa37b4ee92c9c37699fa2e129ece79.

Source: `: @@@@ : @@@@`

Live bytes: `<dl>
<dd></dd>
</dl>`

Reference bytes (this tree's ref-php batch.php render): `<dl>
<dd></dd>
</dl>
`

Frame-masked comparison: MATCH.

Reference command: `cd ref-php && php harness/batch.php render < ../conformance-suspect4a/cases.jsonl > ../conformance-suspect4a/ref.jsonl` (exit 0, empty stderr).

