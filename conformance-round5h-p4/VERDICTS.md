# VERDICTS R5H-P4 — per-case frame-aware adjudication

Raw campaign-mask tally: 16 MATCH, 2 DIFF, 0 UNTESTABLE over 18 attempted cases; all 18 captures valid=true, stable=true, saved_source_matches=true; none save-normalized. A stricter raw-only probe.norm pass produced six DIFFs: C08 (confirmed rule-level), C16 (owned Stage 2 T10 empty-inline pruning) and C09-C12 (owned Stage 2 inter-tag whitespace), so no confirmation other than C08 is hidden by the campaign mask.

| ID | Family | raw verdict | final verdict | reason |
| --- | --- | --- | --- | --- |
| R5H-P4-C01 | R14 raw reassociation, W-EQ shape | MATCH | CLEARED | live and reference both emit `a<span pre-wrap>@b</span>` for the minimal threshold-two witness |
| R5H-P4-C02 | R14 raw reassociation, sub-threshold | MATCH | CLEARED | both leave `a@@@b@` literal; a one-byte later run does not reassociate |
| R5H-P4-C03 | R14 raw reassociation, two-byte short closer | MATCH | CLEARED | both emit `a<span pre-wrap>b</span>cd@@` |
| R5H-P4-C04 | R14 raw reassociation, three-byte later run | MATCH | CLEARED | both emit `a<span pre-wrap>@b</span>@` with matching surplus |
| R5H-P4-C05 | R14 raw reassociation plus whitespace | MATCH | CLEARED | both keep the double space in the residual `a b` and body `@c` in the span |
| R5H-P4-C06 | R14 raw reassociation plus FF C0 | MATCH | CLEARED | both drop the FF and keep `@c` in the span |
| R5H-P4-C07 | R14 raw reassociation plus typography | MATCH | CLEARED | both keep `--` literal inside the span body `@c` |
| R5H-P4-C08 | R14 raw reassociation newline confinement | DIFF | CONFIRMED (C-R5H-P4-1) | live reassociates the short closer with the next-line two-byte run into Raw(`@b`); reference and mirror confine the scan to the opener line and emit literal `a@@@b` plus `<br />` and Raw(`c`) |
| R5H-P4-C09 | R13 footnote C0, 0x03 | MATCH | CLEARED | both emit the single rule-level `<br />` with 0x03 purified from text |
| R5H-P4-C10 | R13 footnote C0, 0x0E | MATCH | CLEARED | both emit the single `<br />` |
| R5H-P4-C11 | R13 footnote C0, 0x1D | MATCH | CLEARED | both emit the single `<br />` |
| R5H-P4-C12 | R13 separator class, ESC + 0x03 | MATCH | CLEARED | both keep ESC in text and emit the same separator space; discarded 0x03 supplies no separator |
| R5H-P4-C13 | Prefilter whitespace, TAB-C0-TAB | MATCH | CLEARED | both render `A B` with one space |
| R5H-P4-C14 | Divprefilter whitespace, 0x03 between divs | MATCH | CLEARED | both leave `[[div]]a[[/div]][[div]]b[[/div]]` unchanged |
| R5H-P4-C15 | Typography encoding, 0x0E between digits | MATCH | CLEARED | both join to `1234` with no number token |
| R5H-P4-C16 | Typography dash ordering, 0x0E among dashes | DIFF | CLEARED (owned) | both form the same Strikethrough pair and drop the discarded 0x0E; only the Stage 2 T10 empty-inline pruning differs (reference `<span style="text-decoration: line-through;"></span>` vs live `AB`), an owned frame surface |
| R5H-P4-C17 | Tighten encoding, U+2060 | MATCH | CLEARED | both keep the WORD JOINER in rendered text |
| R5H-P4-C18 | Tighten encoding, U+200D | MATCH | CLEARED | both keep the ZERO WIDTH JOINER in rendered text |

Final frame-aware tally: 1 CONFIRMED, 17 CLEARED, 0 UNTESTABLE.
