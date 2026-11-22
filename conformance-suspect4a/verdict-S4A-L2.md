# Verdict S4A-L2 — SUSPECT4-A

Verdict: CONFIRMED (routed as C-SUSPECT4A-2)

Pre-probe ledger: LEDGER-PREPROBE.md, section S4A-L2. Rationale: Live closes a lowercase opener with a cross-type uppercase closer, both when the closer is at end of source and when prose follows it. The reference's closer gate additionally requires the stack tag to equal the lowercased close tag, so [[/UL]] against an [[ol]] opener fails and the whole block stays literal in a <p>. This is exactly the C11 classification REPORT-REFCORR5 batch 1 recorded from the pinned lc-sib-cross-ul-ol-upper capture; the current code does not realize it. The divergence is structural, not a newline or entity-spelling surface.

Minimal shape: [[ol]] / [[li]]a[[/li]] / [[/UL]]

## s4a-l2a — muse-probe-suspect4a-s4a-l2a

Capture valid=True stable=True saved_source_matches=True; source sha256 a1354aa11f552ec0d5a2f3ba62220cc590300d0c6d09f989a866bae117e2c672.

Source: `[[ol]]
[[li]]a[[/li]]
[[/UL]]`

Live bytes: `<ol>
<li>a</li>
</ol>
<br />`

Reference bytes (this tree's ref-php batch.php render): `<p>[[ol]]<br />
[[li]]a[[/li]]<br />
[[/UL]]</p>

`

Frame-masked comparison: DIFF.

## s4a-l2b — muse-probe-suspect4a-s4a-l2b

Capture valid=True stable=True saved_source_matches=True; source sha256 daf75a35f34fc93c68a8b6fb388a48dfa3b69e1fe61d5f723d37aaac17906001.

Source: `[[ul]]
[[li]]a[[/li]]
[[/OL]]trailing`

Live bytes: `<ul>
<li>a</li>
</ul>
trailing`

Reference bytes (this tree's ref-php batch.php render): `<p>[[ul]]<br />
[[li]]a[[/li]]<br />
[[/OL]]trailing</p>

`

Frame-masked comparison: DIFF.

Reference command: `cd ref-php && php harness/batch.php render < ../conformance-suspect4a/cases.jsonl > ../conformance-suspect4a/ref.jsonl` (exit 0, empty stderr).

