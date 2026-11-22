# Verdict S4A-R2 — SUSPECT4-A

Verdict: CLEARED

Pre-probe ledger: LEDGER-PREPROBE.md, section S4A-R2. Rationale: An empty Raw embedded in term text and two empty Raw tokens in one term both match the reference. Live serves the residual literal @ bytes in <dt> exactly as termRendersEmpty plus the scanner leave them; no different run arithmetic appears.

## s4a-r2a — muse-probe-suspect4a-s4a-r2a

Capture valid=True stable=True saved_source_matches=True; source sha256 f46cdf0aa27d173baa3877d6cea05284f328418dac98e63a4c0288d6e98ee4f5.

Source: `: a@@@@b : def`

Live bytes: `<dl>
<dt>ab</dt>
<dd>def</dd>
</dl>`

Reference bytes (this tree's ref-php batch.php render): `<dl>
<dt>ab</dt>
<dd>def</dd>
</dl>
`

Frame-masked comparison: MATCH.

## s4a-r2b — muse-probe-suspect4a-s4a-r2b

Capture valid=True stable=True saved_source_matches=True; source sha256 5b7a2bd7d36b78ae6aed9f5df8d88941b9f03b43096d3db5acd5850b0f7135dc.

Source: `: @@@@@@@@ : def`

Live bytes: `<dl>
<dt>@@@@</dt>
<dd>def</dd>
</dl>`

Reference bytes (this tree's ref-php batch.php render): `<dl>
<dt>@@@@</dt>
<dd>def</dd>
</dl>
`

Frame-masked comparison: MATCH.

Reference command: `cd ref-php && php harness/batch.php render < ../conformance-suspect4a/cases.jsonl > ../conformance-suspect4a/ref.jsonl` (exit 0, empty stderr).

