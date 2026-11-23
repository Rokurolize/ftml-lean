# VERDICTS R5G-P4 — final frame-aware adjudication

Raw campaign-mask tally: 18 MATCH, 0 DIFF, 0 UNTESTABLE over 18 attempted cases, with all 18 captures valid=true, stable=true and saved_source_matches=true and no save-normalized source. A stricter raw-only probe.norm pass was also run; its ten raw DIFFs were all the owned Stage 2 inter-tag whitespace frame (the live page inserts spaces immediately inside `<div class="footnotes-footer">`, around `<div class="title">` and before `</div>`), with byte-identical rule-level note bodies on both sides on every one of C01-C10, so none is a confirmation. Final frame-aware tally: 18 CLEARED, 0 CONFIRMED, 0 UNTESTABLE.

| ID | Family | Raw | Final | Basis |
| --- | --- | --- | --- | --- |
| R5G-P4-C01 | R13 footnote-C0 sibling (SOH before single break) | MATCH | CLEARED | both rule-level bodies `>1</a>. A<br> B</div>`; SOH 0x01 purified from text but kept as the moved-predicate witness |
| R5G-P4-C02 | R13 footnote-C0 sibling (VT before single break) | MATCH | CLEARED | both `>1</a>. A<br> B</div>`; VT 0x0B mid-body is a witness, not trimmed |
| R5G-P4-C03 | R13 footnote-C0 sibling (0x1F before single break) | MATCH | CLEARED | both `>1</a>. A<br> B</div>`; 0x1F upper D edge behaves as a witness |
| R5G-P4-C04 | R13 separator-class sibling (0x1C sole lead) | MATCH | CLEARED | both `>1</a>.<br> B</div>`; the widened class excludes 0x1C so no separator space |
| R5G-P4-C05 | R13 separator-class sibling (ESC sole lead) | MATCH | CLEARED | both `>1</a>. \x1b<br> B</div>`; the widened class keeps ESC and the separator space |
| R5G-P4-C06 | R13 footnote-C0 sibling (0x1A before single break) | MATCH | CLEARED | both `>1</a>. A<br> B</div>`; 0x1A adjacent to kept ESC is still a witness |
| R5G-P4-C07 | R13 fallback-branch sibling (0x01, no LF) | MATCH | CLEARED | both `>1</a>. AB</div>`; the fallback branch still drops D unconditionally |
| R5G-P4-C08 | R13 fallback-branch sibling (0x1F, double LF) | MATCH | CLEARED | both `>1</a>. A <p>B</p> </div>`; D dropped before the paragraph split |
| R5G-P4-C09 | R13 kept-ESC/dropped-FF sibling | MATCH | CLEARED | both `>1</a>. A\x1b<br> B</div>`; ESC survives emitted text and spaces, FF purified |
| R5G-P4-C10 | R13 footnote-C0 sibling (FF literal-adjacent witness) | MATCH | CLEARED | both `>1</a>. A<br> B</div>`; FF survives trim and is the predicate witness |
| R5G-P4-C11 | Prefilter whitespace (tab/C0 adjacency) | MATCH | CLEARED | both `<p>A B</p>`; tab rewrite then D drop then fold agree |
| R5G-P4-C12 | Divprefilter whitespace (FF between divs) | MATCH | CLEARED | both `<p>[[div]]a[[/div]][[div]]b[[/div]]</p>`; FF collapsed by the adjacent-div regex |
| R5G-P4-C13 | Typography encoding (C0 between digits) | MATCH | CLEARED | both `<p>1234</p>`; no number token inserted |
| R5G-P4-C14 | Typography dash ordering (FF between dash pairs) | MATCH | CLEARED | both `<p>A&#8212;&#8212;B</p>`; two em-dash entities |
| R5G-P4-C15 | Typography ellipsis ordering (C0 among dots) | MATCH | CLEARED | both `<p>A...B</p>`; literal dots, no ellipsis token |
| R5G-P4-C16 | Tighten encoding (C0 inside a space run) | MATCH | CLEARED | both `<p>A B</p>`; D drop before fold gives one space |
| R5G-P4-C17 | Tighten encoding (U+200B) | MATCH | CLEARED | both `<p>alpha\u200bbravo</p>`; zero-width space kept in text |
| R5G-P4-C18 | Tighten encoding (U+00AD) | MATCH | CLEARED | both `<p>alpha\xadbravo</p>`; soft hyphen kept in text |

The campaign frame transform is probe.norm() followed by the Stage 2 inter-tag whitespace mask `re.sub(r">\s+<", "><", ...)` and the campaign Chrome strip. A raw DIFF is classified as owned frame only when both sides become byte-identical under that transform; this unit has no surviving DIFF after masking. No serving-layer surface, token-counter digit, owned U+FFFD digit class or Stage 2 tidy frame was counted as a confirmation.
