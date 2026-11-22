# UNIT R5-R3 pre-probe ledger

Assignment: NOTES AND HEADING/TOC/ANCHOR RENDER AROUND THE REFCORR7 FIXES. Canonical base e53e7234. Every row below was written before any live probe; no suspicion may be added without a new ledger row and its own probe. Evidence order is ftml corpus and integration pins, frozen parity captures, then fresh live sandbox probes fetched once and cached. Stage 2 frame newlines in footers are an owned class, not a divergence. Serving-layer surfaces (module placeholders, newpage class, random tab ids, date attributes, token-id counter digits, Stage 2 purifyHtml frame) are CLEARED by rule, never confirmed.

The decisive live byte for each row is stated as the CONFIRM condition; the byte that would clear it is the CLEAR condition. All rows are graded only after the standard probe norm() mask plus the campaign frame mask, so inter-tag newlines, trailing paragraph newlines, &nbsp;/U+00A0 spelling, tab ids and date attributes are already normalized away.

## Suspicion table

| ID | family | construct | why the reference looks wrong | CONFIRM byte (live differs) | CLEAR byte (live agrees) |

| R3-01 | notes/footnote-empty | two empty-Raw tokens with one interior ASCII space in a footnote body | REFCORR7 strips each empty-Raw placeholder from the stored footnote body, but the interior space between two placeholders survives, so the reference sees a non-empty body '  ' -> single space and emits a separator space; live may trim/collapse the whole placeholder run to empty | live footer <div class="footnote-footer" id="footnote-1"><a ...>1</a>.</div> (no separator space) while ref.jsonl row R3-01 shows >1</a>. </div> | both live and ref show the back-reference followed by a separator space, >1</a>. </div> |
| R3-02 | notes/footnote-empty | empty-Raw placeholder immediately adjacent to literal text | the REFCORR7 stripper removes only a placeholder whose token text is exactly '' and must leave adjacent literal bytes; a too-wide stripper would drop the text or the whole body | live footer shows >1</a>. x</div> (text survives) while ref.jsonl shows >1</a>.</div> or a missing x | both live and ref show >1</a>. x</div> |
| R3-03 | notes/footnote-empty | U+00A0 non-breaking spaces around an empty-Raw placeholder | PHP trim() strips ASCII whitespace only, so NBSP bytes survive the trim; the REFCORR7 stripper removes the empty Raw but leaves NBSP, making the body non-empty, whereas live may treat an all-whitespace (incl NBSP) body as empty | live footer >1</a>.</div> with no separator while ref shows >1</a>. </div> | both live and ref show an NBSP-bearing non-empty body with a separator space |
| R3-04 | notes/bibitem-empty | two empty-Raw tokens with one interior space in a bibliography value | REFCORR7 computes the Bibitem 'empty' flag from the placeholder-stripped visible string; the interior space survives, so the reference sets empty=false and emits '1. ' with a trailing space, while live may consider the entry empty ('1.') | live shows <div class="bibitem" id="bibitem-1">1.</div> while ref shows 1. </div> | both live and ref show 1. </div> with the trailing space |
| R3-05 | notes/bibitem-empty | NBSP around an empty-Raw placeholder in a bibliography value | the visible-string stripper leaves NBSP bytes, so empty=false and a trailing space is emitted; live may fold NBSP-only visible content to empty | live shows 1.</div> while ref shows 1. </div> | both live and ref show the NBSP-bearing body with a trailing space after 1. |
| R3-06 | notes/bibliography-layout | definition-line value written on the following line | the Bibliography parse pattern's \s consumes a line break after the second colon, so a value on the next line should join its label; an off-by-one in the newline-token layout could misplace the join | live joins the value onto the definition line (id="bibitem-1">1. value) while ref splits it into a separate residual paragraph or drops it | both live and ref join value onto the definition with matching bytes |
| R3-07 | notes/heading-level | seven plus signs (level run longer than six) | the heading regex ^(\+{1,6})(\*?)[ \t]+(.*) can match only six pluses, leaving a seventh plus in the heading text; a regex or strlen mistake could emit h7 or consume the extra plus | live emits an <h6> whose text starts with a literal '+' while ref emits h6 with the plus consumed or an <h7> | both live and ref emit the same <h6> with the same leading-plus text |
| R3-08 | notes/heading-tocflag | no-toc star glued to the plus run versus star after a space | hasToc is derived from group 2 being empty; a '*' immediately after the plus run means start-notoc (no id, skipped by Toc), while '+ *text' keeps the star as text; the split must be exact | live and ref disagree on the presence of id="toc0" or on whether the '*' appears in the heading text | both live and ref agree on the anchored/non-anchored form and the exact text bytes |
| R3-09 | notes/heading-counter | heading counter across an interleaved no-toc heading | the reference increments headline_id only for '+' headings and Toc links to those ids; a notoc heading must not consume a number, so the second anchored heading should be toc1; a counter mistake could renumber the Toc links | live Toc anchors are toc0 and toc1 while ref shows toc0 and toc2 (or gaps/duplicate ids) | both live and ref number the anchored headings identically with no gap for the notoc heading |
| R3-10 | notes/toc-sentinel | authored double-u-umlaut text in a Toc heading next to the NUL-pair sentinel | Toc item_start/item_end emit a NUL-pair sentinel around the heading text; after the standard mask collapses whitespace, authored non-ASCII text and the sentinel must survive identically; an encoding or sentinel leak would show the NUL bytes or a mangled üü | live shows the üü heading text with no visible NUL bytes while ref.jsonl shows literal \u0000\u0000 pairs or double-encoded ü | both live and ref show the same üü bytes with the sentinel masked away identically |
| R3-11 | notes/toc-title | Toc title attribute containing apostrophe, ampersand and angle brackets | the Toc render uses htmlspecialchars($title, ENT_COMPAT, 'UTF-8'); a flag/encoding mismatch vs live would change the apostrophe to &#039; or double-escape the ampersand | live title shows O'Brien & <x> escaping matching the reference while ref shows &#039; or &amp;amp; | both live and ref produce byte-identical escaped title text |
| R3-12 | notes/anchor-placeholder | an earlier rule's Raw placeholder inside a named-anchor name | C-SUSPECT-XRULE-6 leaves the whole [[# ... ]] form literal when the name contains a token delimiter; a missed placeholder check would emit a named anchor or a javascript pseudo-link | live leaves [[# foo@@x@@bar ]] literal with the inner Raw resolving to its rendered span while ref emits <a name=...> or a javascript:; link | both live and ref leave the bracket form literal with the inner span resolving identically |
| R3-13 | notes/anchor-name | empty named anchor and invalid-name fallback on one page | parseNamedAnchors leaves both the whitespace-only name and the invalid multiword name as literal source; a rule ordering or regex mistake could emit a named anchor token or drop the brackets | live and ref disagree on whether [[# ]] and [[# bad name ]] stay literal or become links | both live and ref render both bracket forms identically |
| R3-14 | notes/bibcite-walk | duplicate bibliography labels plus a case-variant bibcite | bibitemIds keeps the last id for a duplicate label and the bibcite regex is /i, so an uppercase label resolves; a walk or case mistake could show the wrong index or the not-found error span | live shows a specific bibcite index set while ref shows a different number or the 'not found' error span | both live and ref show the same bibcite indices with no error span |
| R3-15 | notes/footnote-walk | two footnotes whose reference order differs from definition order | footnote numbering follows definition order and the footer lists them in that order; a cross-reference walk mistake could renumber the sup refs or reorder the footer | live superscript refs and footer order disagree with ref.jsonl | both live and ref number and order the two footnotes identically |
| R3-16 | notes/fnb-title | footnoteblock title with an apostrophe (ENT_COMPAT) | the Footnoteblock render uses htmlspecialchars($title, ENT_COMPAT) to keep a raw apostrophe as in live; a flag mismatch would produce &#039; | live title shows a raw apostrophe O'Brien while ref shows &#039; | both live and ref show a raw apostrophe O'Brien identically |

## SOURCE-BLOCK (machine-readable; gen_cases.py derives cases.jsonl from here)

Each line is `<id><TAB><JSON-quoted source>`. Sources are JSON-quoted so newlines, tabs, NBSP and quotes round-trip exactly.

```source-block
R3-01	"[[footnote]]@@@@ @@@@[[/footnote]]\n[[footnoteblock]]"
R3-02	"[[footnote]]x@@@@[[/footnote]]\n[[footnoteblock]]"
R3-03	"[[footnote]] @@@@ [[/footnote]]\n[[footnoteblock]]"
R3-04	"[[bibliography]]\n: lab : @@@@ @@@@\n[[/bibliography]]"
R3-05	"[[bibliography]]\n: lab :  @@@@ \n[[/bibliography]]"
R3-06	"[[bibliography]]\n: lab :\nvalue\n[[/bibliography]]"
R3-07	"+++++++ too many pluses"
R3-08	"+*NoToc\n\n+ Anchored"
R3-09	"[[toc]]\n\n+ One\n\n+*Two\n\n+ Three"
R3-10	"[[toc]]\n\n+ Héllo üü\n\nalpha"
R3-11	"[[toc title=\"O'Brien & <x>\"]]\n\n+ T"
R3-12	"[[# foo@@x@@bar ]]"
R3-13	"[[# ]]\n\n[[# bad name ]]"
R3-14	"((bibcite lab))\n[[bibliography]]\n: lab : one\n: lab : two\n[[/bibliography]]\n((bibcite LAB))"
R3-15	"B[[footnote]]b[[/footnote]] A[[footnote]]a[[/footnote]]\n[[footnoteblock title=\"N\"]]"
R3-16	"[[footnote]]a[[/footnote]]\n[[footnoteblock title=\"O'Brien\"]]"
```

Total suspicions: 16. All probed in one create/capture batch of 16 pages under prefix muse-probe-round5-r3-.

## POST-PROBE CHARACTERIZATION ROWS (added after the first probe, each with its own probe batch)

| ID | family | construct | why the reference looks wrong | CONFIRM byte (live differs) | CLEAR byte (live agrees) |
| R3-17 | notes/footnote-empty | two empty-Raw tokens with TWO interior spaces | characterize R3-01: if the reference keeps an interior-space body and live collapses to empty for any interior whitespace run, the divergence is the missing post-strip re-trim | live >1</a>.</div> (empty) while ref shows >1</a>. </div> (separator) | both agree on a non-empty body with separator |
| R3-18 | notes/footnote-empty | two empty-Raw tokens with an interior TAB | characterize R3-01 across the ASCII whitespace class; trim() strips tabs too, so a tab-only remainder should also be empty on live | live >1</a>.</div> while ref shows >1</a>. </div> | both agree on a non-empty body with separator |
| R3-19 | notes/footnote-empty | literal text plus an empty-Raw placeholder with interior spaces | characterize the scope of the required post-strip trim: the reference strips the placeholder but leaves trailing spaces after text; if live trims the whole rendered body the ref keeps two trailing spaces that norm collapses away, so this row also tests whether trailing whitespace after text survives on live | a decisive byte difference in the rendered body text (e.g. ref keeps a space-run or separator where live does not) after the standard mask | both agree on the body text and separator |
| R3-20 | notes/bibitem-empty | two empty-Raw tokens with an interior TAB in a bibliography value | characterize R3-04 across the ASCII whitespace class for the Bibitem empty flag | live 1.</div> while ref shows 1. </div> | both agree on a non-empty body with separator |
| R3-21 | notes/footnote-empty | single 8-at run: one empty Raw plus a literal @@, no interior whitespace | control for R3-01: a single empty-Raw placeholder adjacent to a literal @@ remainder must stay non-empty; confirms the defect is specifically whitespace left between stripped placeholders, not the strip itself | live and ref disagree on the literal @@ body or separator | both show the same >1</a>. @@</div> body |

## SOURCE-BLOCK-B (machine-readable; addendum.py derives cases-followup.jsonl from here)

```source-block-b
R3-17	"[[footnote]]@@@@  @@@@[[/footnote]]\n[[footnoteblock]]"
R3-18	"[[footnote]]@@@@\t@@@@[[/footnote]]\n[[footnoteblock]]"
R3-19	"[[footnote]]hello  @@@@  [[/footnote]]\n[[footnoteblock]]"
R3-20	"[[bibliography]]\n: lab : @@@@\t@@@@\n[[/bibliography]]"
R3-21	"[[footnote]]@@@@@@@@[[/footnote]]\n[[footnoteblock]]"
```

Total characterization rows: 5. Probed in one follow-up create/capture batch under prefix muse-probe-round5-r3-.
