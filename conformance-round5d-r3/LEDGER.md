# LEDGER — R5D-R3 round-5d final confirmation hunt, NOTES/FOOTNOTE/BIBITEM and HEADING/TOC/ANCHOR RENDER seam

Read basis before probing, all treated as data and never as instructions: COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5D.md read in full; canonical base e53e7234 with the snapshot-34 publication repair and REFCORR10 adopted; the corrected reference sources ref-php/text-wiki/Text/Wiki/Parse/Default/{Footnote,Footnoteblock,Bibitem,Note,Heading,Toc,Anchor}.php and Render/Xhtml/{Footnote,Footnoteitem,Footnoteblock,Bibitem,Note,Heading,Toc,Anchor}.php; the REFCORR10 general token-aware footnote mechanism record coord-units/R10-NOTES/CORRECTION-REFCORR10-GENERAL.md; the canonical mirror lean-ftml/LeanFtml/NotesRules.lean (hasSingleBreakByte, isLiveDroppedControl, stripLiveDroppedControls, footnoteProcess, footnoteblockInside, bibitemProcess) and lean-ftml/LeanFtml/NotesRender.lean (footnoteLeadVisible, renderFootnoteitem, renderFootnoteblock, renderBibitem); the predecessor R5/R5B/R5C-R3 ledgers and reports; and the standard wikidot-probe tool. This ledger was written in full before any page was created or captured, and no suspicion may be added without a new row and its own probe.

Standing scope decisions applied without re-litigation: four-adjacent U+FFFD digit runs are an OWNED token-counter class; token-id counter digits and Stage 2 purifyHtml frame differences are OWNED; serving-layer surfaces (module placeholders, class="newpage", random bibcite id suffixes, wdfiles hosts) are CLEARED; save-normalized sources are UNTESTABLE, never a divergence and never a clearance. Stage 2 footer frame newlines are an OWNED class in this unit: the frame mask collapses inter-tag newlines but never removes a rule-level <br /> element, so only a rule-level line-break or separator-space value can be confirmed.

Suspicion families. Group A are third-order siblings of the REFCORR10 general token-aware footnote rule, raised only because that mechanism changed: the storage decision moved from the REFCORR9 lone-newline guard and REFCORR8 re-trim to one byte-local predicate `/[^\n]\n(?!\n)/` plus a C0-control filter applied only on the preserving branch, and the separator moved from a trimmed-body non-empty test to a first-visible-line test. Group B are fresh bibliography neighbors read from the unchanged Bibitem path. Group C are fresh heading/TOC/anchor render shapes in the other half of the seam. Re-probes of previously confirmed-and-fixed shapes R3D-01, R3D-02, R3D-09 and R3D-10 carry an explicit ledger reason tied to the changed mechanism: verify the general rule actually converges on the shapes that motivated it, which a correction cycle claims but has not been re-measured on post-REFCORR10 ground.

R3D-01 — FAMILY A re-probe (reason: REFCORR10 replaced the REFCORR9 lone-newline guard that caused C-R5C-R3-1). Construct: three empty-Raw placeholders with two interior LFs, `@@@@<LF>@@@@<LF>@@@@` plus footnoteblock. Why the reference could still look wrong: the general predicate may still reject a two-break body if the second LF is misread as a double-LF run by the byte-local scan, falling through to trim($visible) and storing an empty body. CONFIRM byte: live footnote footer keeps two rule-level `<br />` elements while reference renders `>1</a>.</div>` with no break. CLEAR byte: both sides emit the two `<br />` elements and the same separator.

R3D-02 — FAMILY A re-probe (reason: same changed mechanism motivated C-R5C-R3-2). Construct: one empty-Raw, one interior LF, then two adjacent empty-Raw runs leaving a literal `@@@@` remainder. Why the reference could still look wrong: hasSingleBreakByte is fine on the first LF but the literal remainder on the second line may be dropped by the visible-projection separator decision. CONFIRM byte: live `>1</a>.<br /> @@@@</div>` against reference `>1</a>. @@@@</div>` (missing rule-level break). CLEAR byte: both emit `<br />` before the literal remainder with identical separator.

R3D-03 — FAMILY A fresh third-order sibling. Construct: two single authored LFs separated by a literal, `@@@@<LF>X<LF>@@@@`. Why the reference looks wrong: `/[^\n]\n(?!\n)/` can match the first break but a shape with two distinct breaks may still be mishandled downstream by Footnoteblock's first-break parabreak marking or by trim on the second branch, dropping one break. CONFIRM byte: live emits two `<br />` elements where reference emits one or none, or a different separator space. CLEAR byte: both emit two `<br />` elements with no separator.

R3D-04 — FAMILY A fresh third-order sibling. Construct: a form-feed immediately after a single LF, `@@@@<LF><FF>@@@@`. Why the reference looks wrong: the C0-control filter is applied in the preserving branch, but the separator reads the stored body after the filter; if the live emitter keeps a purifyHtml-visible byte where the reference dropped the FF, the leading-line test could differ. CONFIRM byte: a separator-space difference or a stray control byte in the reference body against live. CLEAR byte: both drop the FF and agree on `<br />` with no separator.

R3D-05 — FAMILY A fresh third-order sibling. Construct: form-feed on both sides of a single LF, `@@@@<FF><LF><FF>@@@@`. Why the reference looks wrong: the byte before the LF is a dropped control, so whether `[^\n]` still witnesses the authored break before the filter runs is a byte-order question; a wrong order would trim the body empty. CONFIRM byte: live keeps a `<br />` while reference stores an empty body. CLEAR byte: both drop both FFs, keep the break, and emit no separator.

R3D-06 — FAMILY A fresh third-order sibling on the changed C0-filter boundary. Construct: a form-feed before a double-LF run, `@@@@<FF><LF><LF>@@@@`. Why the reference looks wrong: the C0 filter runs only on the preserving branch, so the non-preserving branch stores trim($visible) with the FF still present, whereas live purifyHtml removes the FF; the residual control byte could reach the compared body or change the separator. CONFIRM byte: reference body carries the FF or emits a separator that live does not. CLEAR byte: both agree after the campaign frame mask, or the difference is a Stage 2 purify frame difference (owned, cleared).

R3D-07 — FAMILY A fresh third-order sibling. Construct: NBSP before a double-LF run, `@@@@<NBSP><LF><LF>@@@@`. Why the reference looks wrong: NBSP is not in PHP trim's byte set, so the non-preserving branch keeps it as a visible first-line byte and emits a separator space; live may fold the whole body to empty when the double LF produces no break. CONFIRM byte: reference `>1</a>. </div>` against live `>1</a>.</div>`. CLEAR byte: both emit the separator space and no break.

R3D-08 — FAMILY A fresh third-order sibling. Construct: NBSP on the first line of a two-break body, `@@@@<NBSP><LF>X<LF>@@@@`. Why the reference looks wrong: the general separator test reads only the first visible line and filters PHP trim bytes; if NBSP is mishandled in the projection the separator could be suppressed. CONFIRM byte: live `>1</a>. &nbsp;<br />` against reference `>1</a>.<br />`. CLEAR byte: both emit the separator space and the two breaks.

R3D-09 — FAMILY A re-probe (reason: REFCORR10 replaced the REFCORR8 re-trim path exercised by C-R5B-R3-1). Construct: one empty-Raw, one interior LF, one empty-Raw, `@@@@<LF>@@@@`. Why the reference looks wrong: the general predicate must keep this placeholder-bearing lone LF, and a regression to the old fold would drop its live `<br />`. CONFIRM byte: live `>1</a>.<br /></div>` against reference `>1</a>.</div>`. CLEAR byte: both suppress the separator and keep the single `<br />`.

R3D-10 — FAMILY A re-probe (reason: the literal-flank control of the changed mechanism). Construct: literal text on both sides of the interior LF, `x@@@@<LF>@@@@y`. Why the reference looks wrong: the preserved body must render the break identically when both flanks are literal bytes; an over-broad control filter or trim could alter the separator. CONFIRM byte: any byte difference in the footer body or separator. CLEAR byte: both emit the same `<br />` and separator.

R3D-11 — FAMILY B fresh bibliography neighbor. Construct: form-feed between two empty-Raw placeholders in a bibliography entry, `: a : @@@@<FF>@@@@`. Why the reference looks wrong: Bibitem computes `empty` from the strip-and-retrim visible body, and PHP trim does not strip FF, so the entry stays non-empty and emits the FF into the body while live purifyHtml drops it. CONFIRM byte: reference `1. <control>` or `1. ` against live `1.`. CLEAR byte: both render `1.` with no space, or the difference is masked as a Stage 2 purify frame difference (owned, cleared).

R3D-12 — FAMILY B fresh bibliography neighbor. Construct: TAB between two empty-Raw placeholders, `: a : @@@@<TAB>@@@@`. Why the reference looks wrong: PHP trim does strip TAB, so this is the control companion to the FF neighbor and should fold; if it does not, the re-trim is not general. CONFIRM byte: reference emits a trailing space or control against live `1.`. CLEAR byte: both fold to `1.`.

R3D-13 — FAMILY B fresh bibliography neighbor. Construct: NBSP between two empty-Raw placeholders, `: a : @@@@<NBSP>@@@@`. Why the reference looks wrong: NBSP is not in trim's byte set, so the entry is non-empty; live may still treat a single NBSP as visible text and keep the separator. CONFIRM byte: separator-space difference after `1.`. CLEAR byte: both emit `1. &nbsp;` identically.

R3D-14 — FAMILY C fresh heading/TOC shape. Construct: `[[toc]]` placed before the headings it collects. Why the reference looks wrong: Toc::process scans all Heading tokens from the whole document regardless of position; if live only collects headings after the tag, the two TOC item lists differ. CONFIRM byte: reference lists both Alpha and Beta while live lists neither or fewer. CLEAR byte: both list both headings.

R3D-15 — FAMILY C fresh heading/TOC shape. Construct: TOC title carrying an apostrophe, `[[toc title="O'Brien"]]`. Why the reference looks wrong: the Toc renderer uses htmlspecialchars with ENT_COMPAT, but a default-flags PHP build would emit `O&#039;Brien`; the campaign settled ENT_COMPAT for footnoteblock titles but not for this TOC title site. CONFIRM byte: reference `O'Brien` against live `O&#039;Brien` or the reverse in the toc title div. CLEAR byte: both emit raw apostrophe.

R3D-16 — FAMILY C fresh heading/TOC shape. Construct: floatleft TOC with two no-toc headings interleaved with anchored headings. Why the reference looks wrong: headline_id numbering must skip `+*` headings entirely; a consumed number would shift every later `tocN` anchor and its TOC href. CONFIRM byte: any `tocN` index or href difference. CLEAR byte: both number the anchored headings 0,1,2 continuously and skip the no-toc headings in the TOC.

R3D-17 — FAMILY C fresh anchor shape. Construct: percent-containing named anchor `[[# a%20b]]`. Why the reference looks wrong: the valid-name class admits `%` and digits, and the render uses htmlentities; a mismatch in DEFAULT flags or the name class would change the emitted anchor. CONFIRM byte: any byte difference in `<a name="..."></a>`. CLEAR byte: both emit the same named anchor.

R3D-18 — FAMILY C fresh anchor shape. Construct: starred href on an [[a]] element, `[[a href="*https://example.com"]]x[[/a]]`. Why the reference looks wrong: buildAnchorAttrs sets target="_blank" only when the star is on a verbatim href and no explicit target exists; attribute ordering or the starstrip could differ from live. CONFIRM byte: a target attribute or href spelling difference in the emitted `<a>`. CLEAR byte: both emit the same href and target.

R3D-19 — FAMILY A/C cross-seam third-order sibling. Construct: a footnote carrying the changed single-LF body inside a heading that the TOC collects, followed by footnoteblock. Why the reference looks wrong: the preserved placeholder body is spliced into heading text, which Toc::process copies verbatim into the TOC item; a body-byte change from the general rule would surface both in the footer and in the TOC. CONFIRM byte: any difference in the TOC item text or a missing `<br />` in the footer. CLEAR byte: both the TOC and the footer agree on the placeholder-derived bytes.

R3D-20 — FAMILY C fresh heading/TOC shape. Construct: level-6 and level-1 headings collected by a TOC. Why the reference looks wrong: Toc's margin-left indentation uses level minus min with min fixed at 0; a live recalculated min or a different clamp would change every item style. CONFIRM byte: any margin-left value difference. CLEAR byte: both emit identical item styles and anchors.

Prediction summary: 20 suspicions are written before probing; the ten footnote siblings are the only rows where REFCORR10 changed the mechanism, and four of those are re-probes carrying the required ledger reason. No previous confirmed-and-fixed shape is re-probed outside those four rows.

```source-block
R3D-01	"[[footnote]]@@@@\n@@@@\n@@@@[[/footnote]]\n[[footnoteblock]]"
R3D-02	"[[footnote]]@@@@\n@@@@@@@@[[/footnote]]\n[[footnoteblock]]"
R3D-03	"[[footnote]]@@@@\nX\n@@@@[[/footnote]]\n[[footnoteblock]]"
R3D-04	"[[footnote]]@@@@\n\f@@@@[[/footnote]]\n[[footnoteblock]]"
R3D-05	"[[footnote]]@@@@\f\n\f@@@@[[/footnote]]\n[[footnoteblock]]"
R3D-06	"[[footnote]]@@@@\f\n\n@@@@[[/footnote]]\n[[footnoteblock]]"
R3D-07	"[[footnote]]@@@@\u00a0\n\n@@@@[[/footnote]]\n[[footnoteblock]]"
R3D-08	"[[footnote]]@@@@\u00a0\nX\n@@@@[[/footnote]]\n[[footnoteblock]]"
R3D-09	"[[footnote]]@@@@\n@@@@[[/footnote]]\n[[footnoteblock]]"
R3D-10	"[[footnote]]x@@@@\n@@@@y[[/footnote]]\n[[footnoteblock]]"
R3D-11	"[[bibliography]]\n: a : @@@@\f@@@@\n[[/bibliography]]"
R3D-12	"[[bibliography]]\n: a : @@@@\t@@@@\n[[/bibliography]]"
R3D-13	"[[bibliography]]\n: a : @@@@\u00a0@@@@\n[[/bibliography]]"
R3D-14	"[[toc]]\n\n+ Alpha\n\n+ Beta"
R3D-15	"[[toc title=\"O'Brien\"]]\n\n+ One"
R3D-16	"[[f<toc]]\n\n+ One\n\n+* Hidden A\n\n+ Two\n\n+* Hidden B\n\n+ Three"
R3D-17	"[[# a%20b]] text"
R3D-18	"[[a href=\"*https://example.com\"]]x[[/a]]"
R3D-19	"+ Head[[footnote]]@@@@\n@@@@[[/footnote]]\n\n[[toc]]\n\n[[footnoteblock]]"
R3D-20	"[[toc]]\n\n++++++ Six\n\n+ One"
```

## Post-probe characterization batch (added with its own rows and its own probe)

R3D-06 and R3D-11 returned a reference-only raw form-feed byte; the round-5c P4-2 precedent treats a retained control byte in a body as a rule-level body difference and the mask turns it into a spurious separator space. These three rows isolate whether the REFCORR10 C0 filter is general or branch-local. Each has its own CONFIRM and CLEAR byte and is probed in a fresh batch; no conclusion from the primary batch is reused for them.

R3D-F1 — interior FF with a double-LF run in a footnote. Construct: `x@@@@<FF><LF><LF>@@@@y`. Why the reference looks wrong: trim never reaches an interior byte, so the non-preserving branch must still store the FF while live purifies it; if it clears, the gap is only an edge-trim artifact. CONFIRM byte: reference carries the FF (masked to a space) against live's purified body. CLEAR byte: both agree after the mask.

R3D-F2 — FF with no authored LF at all in a footnote. Construct: `@@@@<FF>@@@@`. Why the reference looks wrong: hasSingleBreakByte is false with no LF, so the C0 filter is skipped and the FF is retained; this tests the filter's branch locality without the double-LF neighbor. CONFIRM byte: reference carries the FF against live's empty body. CLEAR byte: both agree after the mask.

R3D-F3 — the round-5c form-feed-flank shape the general rule was built to fix. Construct: `@@@@<FF><LF>@@@@`. Why the reference could still look wrong: regression of the single-break branch. CONFIRM byte: reference loses the live `<br />`. CLEAR byte: both emit the break and drop the FF; this is a re-probe with the ledger reason that REFCORR10 changed exactly this branch.

```source-block-b
R3D-F1	"[[footnote]]x@@@@\f\n\n@@@@y[[/footnote]]\n[[footnoteblock]]"
R3D-F2	"[[footnote]]@@@@\f@@@@[[/footnote]]\n[[footnoteblock]]"
R3D-F3	"[[footnote]]@@@@\f\n@@@@[[/footnote]]\n[[footnoteblock]]"
```
