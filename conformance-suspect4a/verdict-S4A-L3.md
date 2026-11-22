# Verdict S4A-L3 — SUSPECT4-A

Verdict: CONFIRMED (routed as C-SUSPECT4A-3)

Pre-probe ledger: LEDGER-PREPROBE.md, section S4A-L3. Rationale: Live drops id, style and data-* attributes on an uppercase list opener, just as the pinned lc-sib-ul-upper-with-class shape dropped class. The reference's buildListAttrs is reached for an uppercase opener and emits the isolated id, style and data-x attributes on <ul>/<ol>; the tail is also absorbed differently (the uppercase opener never closes on live, so the closer and following text are swallowed). The attribute presence and the absorbed item text are substantive differences. This is the C1/C5/C6 classification from REPORT-REFCORR5 batch 1 that the current attribute path does not implement.

Minimal shape: [[UL id="x" style="color:red"]] / [[LI]]A[[/LI]] / [[/uL]]

## s4a-l3a — muse-probe-suspect4a-s4a-l3a

Capture valid=True stable=True saved_source_matches=True; source sha256 06a2fcdebcb2882b1ef6f8f902271a2958a5bc4174a8ae37f4258c0a1d113aed.

Source: `[[UL style="color:red" id="x"]]
[[LI]]A[[/LI]]
[[/uL]]`

Live bytes: `<ul>
<li>A<br />`

Reference bytes (this tree's ref-php batch.php render): `<ul id="u-x" style="color:red">
<li>A<br />
<br /></li>
</ul><br />
`

Frame-masked comparison: DIFF.

## s4a-l3b — muse-probe-suspect4a-s4a-l3b

Capture valid=True stable=True saved_source_matches=True; source sha256 6ca80fcffddedd7ecaa795df9b3b6f305fc2335e9e9bff77afe53938b2b73b78.

Source: `[[OL data-x="1"]]
[[li]]a[[/li]]
[[/OL]]AFTER`

Live bytes: `<ul>
<li>aAFTER</li>
</ul>`

Reference bytes (this tree's ref-php batch.php render): `<ul data-x="1">
<li>a<br />
AFTER<br />
<br /></li>
</ul><br />
`

Frame-masked comparison: DIFF.

Reference command: `cd ref-php && php harness/batch.php render < ../conformance-suspect4a/cases.jsonl > ../conformance-suspect4a/ref.jsonl` (exit 0, empty stderr).

