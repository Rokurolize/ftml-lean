# Verdict S4A-L4 — SUSPECT4-A

Verdict: CONFIRMED (routed as C-SUSPECT4A-4)

Pre-probe ledger: LEDGER-PREPROBE.md, section S4A-L4. Rationale: Live degrades an uppercase opener with a plain item-less body to bare prose, with or without a following paragraph, while the reference builds a <ul>/<ol> wrapper with a list-style:none item. This is the C10 classification recorded in REPORT-REFCORR5 batch 1 from the pinned degraded-noli capture; the current reference still constructs a list. The difference is the presence of the list element itself, not a frame surface.

Minimal shape: [[OL]] / plain body / [[/OL]] / blank line / AFTER

## s4a-l4a — muse-probe-suspect4a-s4a-l4a

Capture valid=True stable=True saved_source_matches=True; source sha256 c6b2f822d6a0f09aa565aea12be593e566ffdba4c98994cec98d3ad5b988c79f.

Source: `[[OL]]
plain body
[[/OL]]

AFTER`

Live bytes: `<p>plain body<br />
AFTER</p>`

Reference bytes (this tree's ref-php batch.php render): `<ul>
<li style="list-style: none">plain bodyAFTER</li>
</ul><br />
`

Frame-masked comparison: DIFF.

## s4a-l4b — muse-probe-suspect4a-s4a-l4b

Capture valid=True stable=True saved_source_matches=True; source sha256 1032a2af0849e464ef2004f5d054829ca9eb671a19dbbb56e1087a243ea3252e.

Source: `[[Ul]]
body
[[/uL]]
AFTER`

Live bytes: `<p>bodyAFTER</p>`

Reference bytes (this tree's ref-php batch.php render): `<ul>
<li style="list-style: none">bodyAFTER</li>
</ul><br />
`

Frame-masked comparison: DIFF.

Reference command: `cd ref-php && php harness/batch.php render < ../conformance-suspect4a/cases.jsonl > ../conformance-suspect4a/ref.jsonl` (exit 0, empty stderr).

