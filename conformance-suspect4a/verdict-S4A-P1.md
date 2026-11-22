# Verdict S4A-P1 — SUSPECT4-A

Verdict: CLEARED

Pre-probe ledger: LEDGER-PREPROBE.md, section S4A-P1. Rationale: The two valid probes clear the rule: NBSP in a whitespace-only line is kept and spelled &nbsp; by live (the already-owned M72 entity-spelling family), and a vertical-tab-only line is stripped exactly as PCRE \s predicts, both modulo the Stage 2 frame. The form-feed and space-only-line probes are UNTESTABLE rather than cleared or divergent: their saves did not verify on read-back and the cached captures show the saved source was normalized to a blank line (saved_source_matches=false, valid=false), so those bytes never reached live under the intended source. No divergence in the testable surface.

## s4a-p1a — muse-probe-suspect4a-s4a-p1a

Capture valid=True stable=True saved_source_matches=True; source sha256 b5a9ed9414bee39166a1db05f1a033a5a70574e7eebf643c93e7c7952d562795.

Source: `a
 
b`

Live bytes: `<p>a<br />
&nbsp;<br />
b</p>`

Reference bytes (this tree's ref-php batch.php render): `<p>a<br />
 <br />
b</p>

`

Frame-masked comparison: MATCH.

## s4a-p1b — muse-probe-suspect4a-s4a-p1b

Capture valid=False stable=True saved_source_matches=False; source sha256 38022fd2b8dbc5cb3d2cee74e083edbf59e3d4e13d067ebcb5db633d4cff4d8c.

Source: `a

b`

Live bytes: `<p>a</p>
<p>b</p>`

Reference bytes (this tree's ref-php batch.php render): `<p>a</p>

<p>b</p>

`

Frame-masked comparison: MATCH.

## s4a-p1c — muse-probe-suspect4a-s4a-p1c

Capture valid=True stable=True saved_source_matches=True; source sha256 9d46ff10f9763bad2fc27e728915f5af31a91e296f8ce07a23634e65f3d05cda.

Source: `a

b`

Live bytes: `<p>a</p>
<p>b</p>`

Reference bytes (this tree's ref-php batch.php render): `<p>a</p>

<p>b</p>

`

Frame-masked comparison: MATCH.

## s4a-p1d — muse-probe-suspect4a-s4a-p1d

Capture valid=False stable=True saved_source_matches=False; source sha256 2282b3efda183ac2a3e762d8cf310bda78e79126b43846b41e1875fd043463cb.

Source: `a
 
 
b`

Live bytes: `<p>a</p>
<p>b</p>`

Reference bytes (this tree's ref-php batch.php render): `<p>a</p>

<p>b</p>

`

Frame-masked comparison: MATCH.

Reference command: `cd ref-php && php harness/batch.php render < ../conformance-suspect4a/cases.jsonl > ../conformance-suspect4a/ref.jsonl` (exit 0, empty stderr).

