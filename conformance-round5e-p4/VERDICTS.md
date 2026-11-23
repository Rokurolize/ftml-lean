# VERDICTS R5E-P4 — final frame-aware adjudication

Raw campaign-mask tally: 13 MATCH, 4 DIFF, 0 UNTESTABLE over 17 valid/stable/source-matching captures. Final frame-aware tally: 15 CLEARED, 2 CONFIRMED rows (one general class), 0 UNTESTABLE.

| ID | Family | Raw | Final | Basis |
| --- | --- | --- | --- | --- |
| R5E-P4-C01 | REFCORR11 C0 residual sibling (ESC) | MATCH | CLEARED | ESC kept in residual text on both sides; decisive control for C05 |
| R5E-P4-C02 | REFCORR11 C0 residual sibling (DEL) | MATCH | CLEARED | DEL kept at the 0x1F upper bound on both sides |
| R5E-P4-C03 | REFCORR11 C0 residual sibling (VT) | MATCH | CLEARED | newly dropped VT removed on both sides |
| R5E-P4-C04 | REFCORR11 C0 residual sibling (token adjacency) | MATCH | CLEARED | VT between bold and italic tokens removed, tokens adjacent on both sides |
| R5E-P4-C05 | REFCORR11 footnote control sibling (ESC) | DIFF | CONFIRMED | C-R5E-P4-1; live keeps ESC in footnote body, ref drops it |
| R5E-P4-C06 | REFCORR11 footnote control sibling (DEL) | MATCH | CLEARED | DEL upper bound faithful in footnote body |
| R5E-P4-C07 | REFCORR11 footnote control sibling (VT before empty-Raw) | MATCH | CLEARED | unconditional filter and placeholder strip compose on both sides |
| R5E-P4-C08 | REFCORR11 footnote control sibling (ESC + single break) | DIFF | CONFIRMED | C-R5E-P4-1; same footnote-ESC class with `<br />` otherwise matching |
| R5E-P4-C09 | REFCORR11 concat regex sibling (scored continuation) | DIFF | CLEARED | owned Stage 2 tidy frame; collapses to `alpha <div>bravo</div>` |
| R5E-P4-C10 | REFCORR11 concat regex sibling (uppercase) | MATCH | CLEARED | uppercase `[[DIV]]` continuation agrees |
| R5E-P4-C11 | REFCORR11 concat regex sibling (two-space attribute) | MATCH | CLEARED | two-space attribute continuation agrees |
| R5E-P4-C12 | Typography dash ordering | MATCH | CLEARED | triple-dash ordering agrees |
| R5E-P4-C13 | Typography digit space | MATCH | CLEARED | digit-space token agrees |
| R5E-P4-C14 | Typography units lookahead | MATCH | CLEARED | trailing letter suppresses unit token on both sides |
| R5E-P4-C15 | Tighten encoding (soft hyphen) | MATCH | CLEARED | soft hyphen kept on both sides |
| R5E-P4-C16 | Tighten encoding (zero-width space) | MATCH | CLEARED | zero-width space kept on both sides |
| R5E-P4-C17 | follow-up control (scored div, plain newline) | DIFF | CLEARED | owned Stage 2 tidy frame; collapses to `<p>alpha</p><div>bravo</div>` |

The owned-frame transform is applied symmetrically to the reference and live normalized bytes: a `<p>` directly wrapping a `<div>` is unwrapped, a `<br>` at the resulting block edge is consumed, and inter-element whitespace is collapsed. A raw DIFF is classified as owned frame only when both sides become byte-identical. This is the exact surface cleared as T1-TABATTRDUP in REPORT-ROUND5D-P1.md:19. The scored-div shape is independently cleared by sibling lane r5ep1's C1-DIVSCORED.
