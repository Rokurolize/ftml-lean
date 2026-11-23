# VERDICTS — R5D-P3 disposition of every ledger row

Disposition rule: a suspicion is CONFIRMED only when a valid, stable, saved-source-matching live capture disagrees with the include-aware canonical PHP reference on a rule-level value after `probe.norm` plus the campaign frame mask. Owned serving and frame surfaces (inter-tag newlines, trailing paragraph newlines, wdfiles hosts, gallery random ids and lightbox classes, module placeholders, token-id counter digits) are CLEARED by ownership, never confirmed. All 16 captures are valid=true, stable=true and saved_source_matches=true, so there are no UNTESTABLE rows. The machine comparison is `comparison.json` (10 AGREE, 6 DIFFER before ownership classification).

| ID | Verdict | Decisive bytes and reason |
|---|---|---|
| P3D-01 | CLEARED | Live and reference both serve `<table data-="UB">`; the REFCORR10 `*` suffix admits the empty data name on live too. Byte-equal after the mask. |
| P3D-02 | CLEARED | Both serve `<table data-.="UB">`; the dot is admitted in the leading edge as well as the interior. Byte-equal after the mask. |
| P3D-03 | CLEARED | Both drop the `+` key and serve bare `<table>`; the generalized class boundary at `[a-z0-9._-]` matches live. Byte-equal after the mask. |
| P3D-04 | CLEARED | Both leave exactly one literal `[[/module]]` after the unknown-module error block, so the REFCORR10 consumption generalizes to three-level nesting. The only raw difference is an inter-tag newline `</div><p>` against `</div>\n<p>`, an owned Stage 2 frame surface. |
| P3D-05 | CLEARED | Both serve the unknown-module error block alone with no residual closer; an attributed inline inner opener is consumed by the same REFCORR10 rule. Byte-equal after the mask. |
| P3D-06 | CLEARED | Both serve `ZQ` + raw span `P` + `@@`; the `laterQuad` early exit generalizes to a two-byte short closer. Byte-equal after the mask. |
| P3D-07 | CLEARED | Both serve `AB` + raw span `@CD` + `@@@`; a later five-run behaves as a later four-run. Byte-equal after the mask. |
| P3D-08 | CLEARED | Both serve raw span `@ZQ` + `@@`; the branch-independent `lead=1` adjustment is live-exact outside a later-quad setting. Byte-equal after the mask. |
| P3D-09 | CLEARED | With the three run-owned targets supplied to the include-aware renderer, both serve `A=AA B={$b}`; duplicate keys fold in source order and the unset `{$b}` remains literal. Byte-equal after the mask. |
| P3D-10 | CLEARED | Both drop the trailing `TAIL` text and emit cells `A` and `B` only. The raw difference is the reference's `<p>` wrapper around the `<table>` plus trailing paragraph newlines, both owned frame surfaces (the same category cleared at R5C-P3 P3C-17). |
| P3D-11 | CONFIRMED | CONFIRMED as `C-R5D-P3-1`. After the standard mask the live href is `http://example.com/x` while the reference href is `http://example.com/x ` with the authored trailing space preserved inside the attribute value. The wdfiles host difference on the `<img src>` is an owned serving surface and is not the confirmation; the href value is a rule-level attribute value. |
| P3D-12 | CLEARED | Both emit the `thumbnail` size class and the same two source names. All raw differences are owned gallery serving surfaces: random `gallery-box-*` id, `with-lb` and `gallery-image-size-thumbnail` classes and wdfiles hosts. |
| P3D-13 | CLEARED | Both emit the rule-level path `100%.png`; the only difference is the owned wdfiles host prefix. |
| P3D-14 | CLEARED | Both emit a plain `<td>HD</td>`; header-ness comes from the exact lower-case closer on live as in the reference. Byte-equal after the mask. |
| P3D-15 | CLEARED | Both emit the rule-level path `a?b.png`; the only difference is the owned wdfiles host prefix. |
| P3D-16 | CLEARED | Both emit `<tr data-foo.bar="UB">`; the dot generalization of the REFCORR10 key class is live-exact on the row owner too. Byte-equal after the mask. |

Summary: 1 CONFIRMED (P3D-11), 15 CLEARED (10 byte-equal after mask, 5 cleared by owned-frame or owned-serving classification), 0 UNTESTABLE. The six raw DIFFER rows are P3D-04, P3D-10, P3D-11, P3D-12, P3D-13 and P3D-15; five are owned surfaces and one is the confirmation.
