# Verdict S4A-L1 — SUSPECT4-A

Verdict: CONFIRMED (routed as C-SUSPECT4A-1)

Pre-probe ledger: LEDGER-PREPROBE.md, section S4A-L1. Rationale: Live serves the nested form as a clean list: the lowercase outer opener pairs, the uppercase inner opener is recognized, and the inner item renders as an ordinary <li>. The reference's stack keeps the uppercase opener's raw case while lowercasing the closer, so the inner pair never matches; it synthesizes an unclosed list, strips the closer and leaves [[li]]b literal inside a sublist wrapper. Both probes diverge in tags and text, not in any Stage 2 frame surface. The fresh live hash for s4a-l1a equals the frozen muse-probe-refcorr5-lc-sib-nested-lower-ul-upper-ol hash, so the capture reproduces the prior ground. This is the nested-list half of the case classification REFCORR5 batch 1 recorded from live but did not implement in the pairing gate.

Minimal shape: [[ul]] / [[li]]a / [[OL]] / [[li]]b[[/li]] / [[/ol]] / [[/li]] / [[/ul]]

## s4a-l1a — muse-probe-suspect4a-s4a-l1a

Capture valid=True stable=True saved_source_matches=True; source sha256 00ed9ae4a2c9ff77157ec34c7b23cb7ffb11d39b904cca8591ff40a0b8bc74be.

Source: `[[ul]]
[[li]]a
[[OL]]
[[li]]b[[/li]]
[[/ol]]
[[/li]]
[[/ul]]`

Live bytes: `<ul>
<li>a<br /></li>
<li>b</li>
</ul>
<br />`

Reference bytes (this tree's ref-php batch.php render): `<ul>
<li>a<br /><ul>
<li style="list-style: none">[[li]]b</li>
</ul></li>
</ul><br />
`

Frame-masked comparison: DIFF.

## s4a-l1b — muse-probe-suspect4a-s4a-l1b

Capture valid=True stable=True saved_source_matches=True; source sha256 080e194907b9f328e95509f093d83445f799b21813e9edc8fb884eda8c43a321.

Source: `[[UL]]
[[ol]]
[[li]]a[[/li]]
[[/ol]]
[[/ul]]`

Live bytes: `<ol>
<li>a</li>
</ol>
<br />`

Reference bytes (this tree's ref-php batch.php render): `<ul>
<li style="list-style: none; display: inline">
<ol>
<li>a</li>
</ol>
</li>
</ul><br />
`

Frame-masked comparison: DIFF.

Reference command: `cd ref-php && php harness/batch.php render < ../conformance-suspect4a/cases.jsonl > ../conformance-suspect4a/ref.jsonl` (exit 0, empty stderr).

