# Verdict S4A-T1 — SUSPECT4-A

Verdict: CLEARED

Pre-probe ledger: LEDGER-PREPROBE.md, section S4A-T1. Rationale: All three enumeration neighbors match the reference. The quoted-bracket head and the uppercase [[/HCELL]] closer give byte-identical tables; the clean nested table differs only by the already-owned Stage 2 <td> cell-padding newline, which the frame mask removes. The enumeration repair's witness family extends to these live-serving neighbors without divergence.

## s4a-t1a — muse-probe-suspect4a-s4a-t1a

Capture valid=True stable=True saved_source_matches=True; source sha256 5415b148cc8bad897c48922d07eb2c99de5de0a364a94412b7da62e3b78dda6f.

Source: `[[table a="x]]y"]][[row]][[cell]]A[[/cell]][[/row]][[/table]]`

Live bytes: `<table>
<tr>
<td>A</td>
</tr>
</table>`

Reference bytes (this tree's ref-php batch.php render): `<table>
<tr>
<td>A</td>
</tr>
</table>`

Frame-masked comparison: MATCH.

## s4a-t1b — muse-probe-suspect4a-s4a-t1b

Capture valid=True stable=True saved_source_matches=True; source sha256 1a847084f169ef96bcd96019b2efb2bf4246e2f575034388a8dfe0df1b14dc7b.

Source: `[[table]][[row]][[cell]][[table]][[row]][[cell]]inner[[/cell]][[/row]][[/table]][[/cell]][[/row]][[/table]]`

Live bytes: `<table>
<tr>
<td>
<table>
<tr>
<td>inner</td>
</tr>
</table>
</td>
</tr>
</table>`

Reference bytes (this tree's ref-php batch.php render): `<table>
<tr>
<td><table>
<tr>
<td>inner</td>
</tr>
</table></td>
</tr>
</table>`

Frame-masked comparison: MATCH.

## s4a-t1c — muse-probe-suspect4a-s4a-t1c

Capture valid=True stable=True saved_source_matches=True; source sha256 69431ac19664d28e37c320c6a4b7451b01e7de4020be3c502a492e5c7b7aad31.

Source: `[[table]][[row]][[cell]]x[[/HCELL]][[/row]][[/table]]`

Live bytes: `<table>
<tr>
<td>x</td>
</tr>
</table>`

Reference bytes (this tree's ref-php batch.php render): `<table>
<tr>
<td>x</td>
</tr>
</table>`

Frame-masked comparison: MATCH.

Reference command: `cd ref-php && php harness/batch.php render < ../conformance-suspect4a/cases.jsonl > ../conformance-suspect4a/ref.jsonl` (exit 0, empty stderr).

