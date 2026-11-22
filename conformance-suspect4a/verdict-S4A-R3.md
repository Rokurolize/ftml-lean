# Verdict S4A-R3 — SUSPECT4-A

Verdict: CLEARED

Pre-probe ledger: LEDGER-PREPROBE.md, section S4A-R3. Rationale: Both line-boundary empty-Raw shapes match the reference after the trailing-newline mask. Tighten's newline removal, placeholder deletion and space fold produce live's <p>A<br />B</p> bytes on the same source, so the order of those operations is live-correct at this boundary.

## s4a-r3a — muse-probe-suspect4a-s4a-r3a

Capture valid=True stable=True saved_source_matches=True; source sha256 5ee4a18218a1be47640df3514f52ecace234097cdf063430fe426c91831fd692.

Source: `A @@@@
B`

Live bytes: `<p>A<br />
B</p>`

Reference bytes (this tree's ref-php batch.php render): `<p>A<br />
B</p>

`

Frame-masked comparison: MATCH.

## s4a-r3b — muse-probe-suspect4a-s4a-r3b

Capture valid=True stable=True saved_source_matches=True; source sha256 78aa12d405757ec8f7d5a73403a455f01cf573b1a3bf03cc9ad325172237df29.

Source: `A@@@@
@@@@B`

Live bytes: `<p>A<br />
B</p>`

Reference bytes (this tree's ref-php batch.php render): `<p>A<br />
B</p>

`

Frame-masked comparison: MATCH.

Reference command: `cd ref-php && php harness/batch.php render < ../conformance-suspect4a/cases.jsonl > ../conformance-suspect4a/ref.jsonl` (exit 0, empty stderr).

