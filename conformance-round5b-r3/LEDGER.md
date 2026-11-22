# UNIT R5B-R3 pre-probe ledger (round 5b, post-REFCORR8 ground)

Assignment: NOTES/FOOTNOTE/BIBITEM AND HEADING/TOC/ANCHOR RENDER around the REFCORR8 corrections. Canonical base e53e7234 with all 16 REFCORR8 fixes adopted and build green at 176 jobs. Ground announcement from lead received before this ledger was written. Every row below was written before any live probe; no suspicion may be added without a new ledger row and its own probe. Evidence order is ftml corpus and integration pins, frozen parity captures, then fresh live sandbox probes fetched once and cached and reused. The gabrys/wikidot fossil is never behavior evidence. Stage 2 footer frame newlines are an owned class, not a divergence. Serving-layer surfaces (module placeholders, newpage class, gallery random ids, wdfiles hosts, Stage 2 tidy frame, token-id counter digits) are CLEARED by rule, never confirmed. A structurally different value in an owned family is analyzed with artifacts and the decision recorded.

The decisive live byte for each row is stated as the CONFIRM condition; the byte that would clear it is the CLEAR condition. All rows are graded only after the campaign-standard probe.norm mask plus the campaign frame mask, so inter-tag newlines, trailing paragraph newlines, &nbsp;/U+00A0 spelling, random tab ids, date attributes, token-id counter digits and Stage 2 purifyHtml frame differences are already normalized away

## Re-probe reason rows (changed mechanism)

Rows R3B-01 through R3B-09 revisit shapes that round 5 cleared or characterized, but REFCORR8 changed their mechanism: Footnote::process now applies a second trim() after the REFCORR7 empty-Raw strip (ref Footnote.php line 81) and Bibitem::process now trims the visible remainder after the strip and emits that trimmed body in place of the verbatim body (ref Bibitem.php lines 78-79). A cleared byte from round 5 no longer tests the same code path, so each sibling is re-probed to verify the new re-trim generalizes across placeholder count, whitespace class and mixed text rather than fitting only the two-placeholder ASCII-space case that motivated the patch.

## Suspicion table (written before probing)

| ID | family | construct | why the reference looks wrong | CONFIRM byte (live differs) | CLEAR byte (live agrees) |

| R3B-01 | notes/footnote-retrim | three empty-Raw placeholders with two interior ASCII spaces | REFCORR8 adds exactly one trim() after the strip; three placeholders leave a two-space interior remainder, and a strip implemented with a narrower whitespace model could leave one space behind | live footer >1</a>.</div> (empty) while corrected ref shows >1</a>. </div> or a stray space | both live and corrected ref show >1</a>.</div> with no separator |
| R3B-02 | notes/footnote-retrim | two empty-Raw placeholders with an interior TAB | PHP trim() covers \t, but a re-trim implemented by a whitespace class that omits tabs would leave the tab and keep the body non-empty | live >1</a>.</div> while ref shows >1</a>. </div> or a tab byte | both show >1</a>.</div> with no separator |
| R3B-03 | notes/footnote-retrim | two empty-Raw placeholders separated by a newline | the Footnote regex is /s so a newline can sit between placeholders; the cross-line Raw scanner emits an empty Raw plus a literal newline, and the re-trim must remove that newline too | live >1</a>.</div> while ref shows a newline-bearing non-empty body and separator | both show >1</a>.</div> with no separator |
| R3B-04 | notes/footnote-retrim | literal text plus two empty-Raw placeholders with interior spaces | the re-trim only trims ends, so interior spaces left by the strip stay in the stored body; if live collapses the interior run differently the rule-level text bytes disagree | live footer body text alpha beta while ref keeps alpha   beta (or vice versa) after the standard mask | both show the same body text and separator |
| R3B-05 | notes/footnote-retrim | literal text with a trailing empty-Raw placeholder and surrounding spaces | round 5 showed the ref kept a trailing space after the body text; the REFCORR8 re-trim must now drop it, and a partial re-trim could drop too much or too little | live >1</a>. hello</div> while ref shows >1</a>. hello </div> (or a missing hello) | both show >1</a>. hello</div> identically |
| R3B-06 | notes/footnote-retrim | two empty-Raw placeholders separated by U+00A0 NBSP | PHP trim() strips ASCII whitespace only, so an NBSP remainder is not re-trimmed; if live folds an NBSP-only body to empty while the ref keeps NBSP the byte-level body disagrees | live >1</a>.</div> while ref shows >1</a>. \u00a0</div> | both show the NBSP-bearing body with a separator |
| R3B-07 | notes/bibitem-retrim | three empty-Raw placeholders with two interior spaces | REFCORR8 re-trims the visible Bibitem remainder; three placeholders leave two spaces, and a fix tuned to one space could leave one behind | live 1.</div> while ref shows 1. </div> or a stray space | both show 1.</div> with the empty flag true |
| R3B-08 | notes/bibitem-retrim | two empty-Raw placeholders with an interior TAB | the Bibitem re-trim must cover the whole ASCII whitespace class including tabs; a tab that survives makes empty=false | live 1.</div> while ref shows 1. </div> or a tab byte | both show 1.</div> with no separator |
| R3B-09 | notes/bibitem-retrim | literal text plus two empty-Raw placeholders with interior spaces | the re-trim trims ends but not the interior, and REFCORR8 also changed the emitted body from verbatim content to the trimmed visible string; an interior-space or body-text mismatch would be a new rule-level divergence | live bibitem body alpha beta while ref keeps alpha   beta (or vice versa) | both show the same bibitem body text and separator |

## Fresh code-reading rows (new mechanisms, not round-5 clears)

| ID | family | construct | why the reference looks wrong | CONFIRM byte (live differs) | CLEAR byte (live agrees) |

| R3B-10 | notes/toc-placeholder | non-empty Raw token inside heading text with a Toc present | Raw runs before Heading (rule 59 vs 89), so the heading `text` option carries an earlier token delimiter; Toc::process copies that text verbatim into the item anchor, and a token-id or placeholder resolution mistake could leak a delimiter byte or drop the raw body in the TOC link | live TOC item text a@b while ref shows a delimited placeholder or a@@x@@b literal | both show the same a x b text in the heading and the TOC entry |
| R3B-11 | notes/toc-align | left-floated Toc via [[f<toc]] | Toc::process passes matches[1] as align and the renderer maps f< to class="floatleft" and suppresses the wrapper table; an align capture or mapping mistake could drop the class or keep the table | live shows <div id="toc" class="floatleft"> without the table while ref shows the table wrapper or a floatright class | both show the same aligned Toc frame and heading link |
| R3B-12 | notes/anchor-name | uppercase and punctuation named anchor [[# Foo.Bar%20]] | Anchor::process uses a /i regex and htmlentities() on the name; a case-fold or entity-flag mismatch could lowercase the name or escape the percent/dot | live <a name="Foo.Bar%20"></a> while ref shows a lowercased or entity-escaped name | both show the same <a name="Foo.Bar%20"></a> bytes |
| R3B-13 | notes/anchor-element | [[a]] element with id, class and data-* attributes | buildAnchorAttrs lowercases data-* keys, prefixes ids with u- and emits in a fixed order; a normalization or ordering mistake changes the anchor tag bytes | live tag differs in id prefix, data key case, href or attribute order from ref | both emit the same <a id="u-foo" class="c" data-z="v" href="/x">link</a> bytes |
| R3B-14 | notes/anchor-scored | scored anchor [[a_ ...]] spanning two lines | parseAnchorElements strips one leading and one trailing newline for scored anchors and joins 1-2 newlines to neighbor lines; an off-by-one could keep or drop a newline | live joins line1 and line2 with a single space while ref keeps a newline or splits paragraphs | both show the same joined scored anchor body |
| R3B-15 | notes/fnb-title | footnoteblock title with ampersand and angle brackets | Footnoteblock render uses htmlspecialchars(ENT_COMPAT); a flag or double-escape mistake would emit &amp;amp; or leave raw <x> | live title A &amp; B &lt;x&gt; while ref shows a double-escaped or raw form | both show byte-identical escaped title text |
| R3B-16 | notes/footnote-ws-control | plain whitespace-only footnote body with no Raw placeholder | REFCORR7/8 only touch empty-Raw placeholders; a whitespace-only literal body is folded by the original trim, so this is a control that the re-trim did not change the plain-whitespace path | live shows a separator space while ref shows an empty footer (or vice versa) | both show >1</a>.</div> with no separator |

## SOURCE-BLOCK (machine-readable; gen_cases.py derives cases.jsonl from here)

Each line is `<id><TAB><JSON-quoted source>`. Sources are JSON-quoted so newlines, tabs, NBSP and quotes round-trip exactly.

```source-block
R3B-01	"[[footnote]]@@@@ @@@@ @@@@[[/footnote]]\n[[footnoteblock]]"
R3B-02	"[[footnote]]@@@@\t@@@@[[/footnote]]\n[[footnoteblock]]"
R3B-03	"[[footnote]]@@@@\n@@@@[[/footnote]]\n[[footnoteblock]]"
R3B-04	"[[footnote]]alpha @@@@ @@@@ beta[[/footnote]]\n[[footnoteblock]]"
R3B-05	"[[footnote]]hello  @@@@  [[/footnote]]\n[[footnoteblock]]"
R3B-06	"[[footnote]]@@@@ @@@@[[/footnote]]\n[[footnoteblock]]"
R3B-07	"[[bibliography]]\n: lab : @@@@ @@@@ @@@@\n[[/bibliography]]"
R3B-08	"[[bibliography]]\n: lab : @@@@\t@@@@\n[[/bibliography]]"
R3B-09	"[[bibliography]]\n: lab : alpha @@@@ @@@@ beta\n[[/bibliography]]"
R3B-10	"[[toc]]\n\n+ a@@x@@b\n\n+ Plain"
R3B-11	"[[f<toc]]\n\n+ One"
R3B-12	"[[# Foo.Bar%20]]"
R3B-13	"[[a href=\"/x\" id=\"foo\" class=\"c\" data-Z=\"v\"]]link[[/a]]"
R3B-14	"[[a_ href=\"/x\"]]line1\nline2[[/a]]"
R3B-15	"[[footnote]]a[[/footnote]]\n[[footnoteblock title=\"A & B <x>\"]]"
R3B-16	"[[footnote]]   [[/footnote]]\n[[footnoteblock]]"
```

Total suspicions: 16. All were probed in one create/capture batch under prefix muse-probe-round5b-r3-.

## POST-PROBE CHARACTERIZATION ROWS (added after the first probe, each with its own probe batch)

R3B-03 produced a valid, stable, source-matching DIFF whose only residual is a `<br />` element inside the footnote footer: live `>1</a>.<br /></div>` against corrected reference `>1</a>.</div>`. That is a rule-level line-break element, not an inter-tag frame newline, so it is not auto-cleared by the owned Stage 2 footer frame class. These rows isolate whether the newline survives because of the REFCORR8 post-strip re-trim, whether it is generic to any newline-only note body, and whether a literal-text remainder changes the outcome. No suspicion may be graded without its own probe.

| ID | family | construct | why the reference looks wrong | CONFIRM byte (live differs) | CLEAR byte (live agrees) |

| R3B-17 | notes/footnote-retrim | newline-only footnote body with no Raw placeholders | isolates the re-trim from the empty-Raw strip: the pre-existing trim alone already folds a newline-only body, so a live `<br />` here would show the line break is preserved independently of the REFCORR8 change | live >1</a>.<br /></div> while ref shows >1</a>.</div> | both show >1</a>.</div> with no br element |
| R3B-18 | notes/footnote-retrim | literal text then two empty-Raw placeholders separated by a newline | tests whether a non-empty body keeps the interior newline as a br on live while the re-trim leaves only the text | live >1</a>. x<br />y</div> while ref drops the br or changes the text | both show the same text and br framing |
| R3B-19 | notes/footnote-retrim | two interior newlines (paragraph break) between two empty-Raw placeholders | the Footnoteblock parabreak marker keys on \n[ ]*\n; a two-newline remainder should yield a paragraph break on both sides, but the REFCORR8 re-trim may remove it entirely | live keeps a parabreak or br where ref shows a flat empty footer | both show the same break shape in the footer |

```source-block-b
R3B-17	"[[footnote]]\n[[/footnote]]\n[[footnoteblock]]"
R3B-18	"[[footnote]]x@@@@\n@@@@y[[/footnote]]\n[[footnoteblock]]"
R3B-19	"[[footnote]]@@@@\n\n@@@@[[/footnote]]\n[[footnoteblock]]"
```

Total characterization rows: 3. Probed in one follow-up create/capture batch under prefix muse-probe-round5b-r3-.
