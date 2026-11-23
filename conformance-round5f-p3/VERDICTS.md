# VERDICTS — R5F-P3

Ground: post-REFCORR12 snapshot-36 (HEAD `ef05346de6c7dbc75ad3ee965cb5634d3cbaafbf`). All sixteen captures are valid, stable and saved-source-matching; comparison is `probe.norm` plus the campaign frame mask plus the owned wdfiles-host/gallery-frame mask. Two rows differ at rule level, both Image attribute values; the other fourteen are byte-equal after the masks.

| ID | Verdict | Reason |
|---|---|---|
| P3F-01 | CONFIRMED `C-R5F-P3-1` | live `style="color:red"` vs reference `style="color:red "`; the R12 record left style in the kept family without a cached trailing-space case, so this is a fresh uncaptured cell of the changed split, not a re-probe of a fixed shape. |
| P3F-02 | CLEARED | size with a trailing space is dropped by both live and reference (the render whitelist/validation rejects the value); byte-equal after mask. |
| P3F-03 | CONFIRMED `C-R5F-P3-2` | live `height="20"` vs reference `height="20 "`; fresh key of the changed technical/text split. |
| P3F-04 | CLEARED | tab trailing run on width: both live and the rtrim loop emit `width="10"`; byte-set member confirmed equal. |
| P3F-05 | CLEARED | mixed space/tab/space run on class: both emit `class="thumb"`; run-length member confirmed equal. |
| P3F-06 | CLEARED | whitespace-only width: both emit `width=""`; empty-after-trim boundary confirmed equal. |
| P3F-07 | CLEARED | leading space in title: both emit `title=" T"`; right-only trim confirmed. |
| P3F-08 | CLEARED | width/class trimmed and title kept in fixed order by both; multi-key interaction confirmed equal. |
| P3F-09 | CLEARED | combined `data-foo.bar-baz_9` key kept by both; REFCORR10 key-class generalization confirmed equal on a fresh combined key. |
| P3F-10 | CLEARED | empty-suffix `data-` key kept by both; REFCORR10 regex `*` boundary confirmed equal. |
| P3F-11 | CLEARED | bare eight-`@` run: both emit four literal `@` bytes; surplus-run formula confirmed equal at a fresh run length. |
| P3F-12 | CLEARED | six-byte closer after a 4+ opener: both emit `ZQ@@`; `surplusCloser` confirmed equal at a fresh closer length. |
| P3F-13 | CLEARED | inline nested module openers leave the whole block literal on both live and reference; the REFCORR10 newline insertion is gated by the opener grammar, which the inline inner opener fails. |
| P3F-14 | CLEARED | leading space on include value is ltrimmed by `refSegmentArg` on both: `A=X B=X`. |
| P3F-15 | CLEARED | exact-placeholder fold only on both: `Q{$ab}` (the longer lookalike is untouched). |
| P3F-16 | CLEARED | fold-then-reparse on both: `@@ZZ@@` from the target becomes `<span style="white-space: pre-wrap;">ZZ</span>`. |

Owned and CLEARED surfaces observed but not counted as divergences: wdfiles `src` host and per-page local--files path on every Image row (masked), and the Raw renderer's `white-space: pre-wrap` span frame on P3F-16 (present on both live and reference, so byte-equal after mask). No capture was invalid or untestable. No previously cleared or confirmed shape was re-probed verbatim without a changed-mechanism ledger reason.
