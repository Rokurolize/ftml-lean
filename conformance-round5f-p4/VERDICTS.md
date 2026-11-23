# VERDICTS R5F-P4 — final frame-aware adjudication

Raw campaign-mask tally: 17 MATCH, 0 DIFF, 1 UNTESTABLE over 18 attempted cases (17 valid/stable/source-matching captures plus the save-normalized C12). A stricter raw-only probe.norm pass was also run; its ten raw DIFFs were all the owned Stage 2 inter-tag whitespace frame (`<div>` immediately followed by a space and another tag), with identical rule-level note bodies on both sides, so none is a confirmation. Final frame-aware tally: 17 CLEARED, 0 CONFIRMED, 1 UNTESTABLE.

| ID | Family | Raw | Final | Basis |
| --- | --- | --- | --- | --- |
| R5F-P4-C01 | REFCORR12 notes-C0/ESC sibling (ESC, plain footnote) | MATCH | CLEARED | ref and live both carry `>1</a>. A\x1bB</div>` with ESC verbatim; round-5e footnote-ESC class now fixed |
| R5F-P4-C02 | REFCORR12 notes-C0/ESC sibling (ESC before single break) | MATCH | CLEARED | both emit `>1</a>. A\x1b<br> B</div>`; break count and placement agree |
| R5F-P4-C03 | REFCORR12 notes-C0/ESC sibling (ESC at body edges) | MATCH | CLEARED | both keep both edge ESC bytes, `>1</a>. \x1bA\x1b</div>` |
| R5F-P4-C04 | REFCORR12 notes-C0/ESC sibling (ESC-only body) | MATCH | CLEARED | both emit a non-empty numbered entry `>1</a>. \x1b</div>` |
| R5F-P4-C05 | REFCORR12 notes-C0/ESC sibling (ESC in bibitem) | MATCH | CLEARED | both emit `1. A\x1bB` in the bibitem entry |
| R5F-P4-C06 | REFCORR12 notes-C0/ESC sibling (FF in bib residual) | MATCH | CLEARED | pre-fold D drop removes FF on both sides, `AB` with no space |
| R5F-P4-C07 | REFCORR12 notes-C0/ESC sibling (VT in bib residual) | MATCH | CLEARED | new pre-fold drop removes VT on both sides, `AB` with no space |
| R5F-P4-C08 | REFCORR12 notes-C0/ESC sibling (ESC in bib residual) | MATCH | CLEARED | ESC deliberately kept on both sides, `A\x1bB` |
| R5F-P4-C09 | REFCORR12 notes-C0/ESC sibling (ESC next to dropped FF) | MATCH | CLEARED | both show only ESC between A and B, `>1</a>. A\x1bB</div>` |
| R5F-P4-C10 | REFCORR12 notes-C0/ESC sibling (0x1F upper bound) | MATCH | CLEARED | 0x1F dropped on both sides, `>1</a>. AB</div>` |
| R5F-P4-C11 | Prefilter whitespace-line trim (ESC-only line) | MATCH | CLEARED | both render `<p>alpha<br> \x1b<br> bravo</p>` |
| R5F-P4-C12 | Prefilter whitespace-line trim (FF-only line) | UNTESTABLE | UNTESTABLE | create rejected save-normalized source; stored `alpha\n\nbravo` instead of `alpha\n\x0c\nbravo`; saved_source_matches=false |
| R5F-P4-C13 | Divprefilter whitespace (ESC between divs) | MATCH | CLEARED | both leave the literal source text with ESC, no block collapse |
| R5F-P4-C14 | Typography dash ordering (four dashes) | MATCH | CLEARED | both emit two em-dash entities |
| R5F-P4-C15 | Typography ellipsis ordering (four dots) | MATCH | CLEARED | both emit one ellipsis plus one literal dot |
| R5F-P4-C16 | Typography encoding (NBSP between digits) | MATCH | CLEARED | NBSP kept between digits on both sides; NBSP spelling is an owned norm class |
| R5F-P4-C17 | Tighten encoding (C1 NEL U+0085) | MATCH | CLEARED | NEL kept in rendered text on both sides |
| R5F-P4-C18 | Tighten encoding (BOM/ZWNBSP U+FEFF) | MATCH | CLEARED | U+FEFF kept in rendered text on both sides |

The campaign frame transform is probe.norm() followed by the Stage 2 inter-tag whitespace mask `re.sub(r">\s+<", "><", ...)` and the Chrome strip used by the campaign. A raw DIFF is classified as owned frame only when both sides become byte-identical under that transform; this unit has no surviving DIFF after masking. C12 is excluded from both confirmation and clearance as a save-normalized UNTESTABLE and must not be used as a pin.
