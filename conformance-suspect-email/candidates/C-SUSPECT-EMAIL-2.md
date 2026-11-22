# C-SUSPECT-EMAIL-2 — rendered placeholder leak: raw 0xFFn0xFF vs live U+FFFD + index

Status: DIVERGENCE at render, CONFIRMED at parse, reference correction owed only at render, NOT applied in this lane. Settled by the Antigravity SUSPECT mission (REPORT-ANTIGRAVITY-SUSPECT.md section 2.2, probes `x03`, `x05`; `x04` confirms the bracket label) and independently verified here on 2026-11-22.

Reference construct: described-form labels are lazy `.+?` (`Parse/Default/Email.php:48`) and run after Url/Raw, so a claimed label component survives only as the delimiter byte sequence `0xFF n 0xFF`; `strrev` reverses those bytes and the renderer emits them raw. The mirror is `lazyTail`/`emailDescrMatch` in `Inline1Rules.lean` and `renderEmail` in `InlineSimpleRules.lean`.

Two predictions before probing (this lane's S-EMAIL-4): live bounds the label like X44's interwiki label and serves the whole form literal, or live accepts the placeholder as label content and leaks it. Verdict: live accepts it; the parse side is therefore CONFIRMED. A second question, the rendered form of the leak, was settled with Agy: raw delimiter bytes or U+FFFD + token index. Verdict: live emits U+FFFD + its own index.

Live evidence: Agy `muse-probe-agy-suspect-x03-email-url-label` (`[a@b.com http://example.com]`) serves `moc.b|a#U+FFFD 3 U+FFFD` where the reference serves raw `FF 32 FF`; `muse-probe-agy-suspect-x05-email-raw-label` (`[a@b.com @@raw@@]`) serves `moc.b|a#1` where the reference serves raw `FF 30 FF`; `muse-probe-agy-suspect-x04-email-bracket-label` (`[a@b.com [x] label]`) is byte-identical on both sides (`moc.b|a#x[</span> label]`) and pins the parse behavior. This lane's `muse-probe-suspect-email-lbl-url` (`2` vs `3`), `-lbl-newline` (`0` vs `1`), `-idx-url-shift` (`3` vs `4`) and `-idx-newline-shift` (`1` vs `2`) reproduce the divergence and prove a fixed +1 token-numbering offset: one extra earlier token raises both sides' digits by one.

Differing bytes: raw `0xFF` delimiters vs `EF BF BD`; live's digit is reference digit + 1.

Minimal fix, not applied: the `ENT_SUBSTITUTE` part of C-SUSPECT-EMAIL-1 converts the raw delimiter bytes to U+FFFD on the render side. The remaining digit difference is a frame-level index-base canonicalization (a digit run between U+FFFD sentinels) that gates must normalize; no parse-side correction is owed, because X44's bounded label must NOT be extended to Email. No before-copy exists because no edit was made in this lane.
