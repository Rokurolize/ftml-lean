# REPORT-COVERAGE-NOTES

Coverage tier for the NOTES render family: Footnote, Footnoteitem, Footnoteblock, Bibitem, Bibliography, Bibcite.

The classes are the branches of the reference `token()` methods in `ref-php/text-wiki/Text/Wiki/Render/Xhtml/{Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite}.php`. Membership is the decidable predicate `streamClassAt` over a token stream and the render-time `DocState` (`LeanFtml/CoverageNotes.lean`). `classify` returns exactly one class on every NOTES rule, and every token the parse mirrors append lands in a class that is not a fallthrough arm.

Build: `LAKE_JOBS=2 lake build lean-ftml lean-ftml-conformance-r41` (Lean 4.36.0). All twenty-six audited theorems depend on `[propext, Classical.choice, Quot.sound]`. None depends on `sorryAx`.

Fuzz: seed `20261122`, PHP 8.5.4 through `conformance-covnotes/driver.php`, against `lean-ftml-conformance-r41`. 262 source cases on the R3.6 pipeline (`--e2e-r36`) and 77 one-token states (`state`), 339 in total. A source case counts for every class its parsed tokens include. Two token cases disagree; both are recorded below.

## Class table

| Class | Definition | Branch | Pin | Fuzz |
|---|---|---|---|---|
| `fnCite` | Footnote token. `label` and the equation map are read and discarded. `id` and `id_prefix` are parameters. | Footnote.php:39–45, no test | Live: `muse-probe-r2notes-fn-case-close`, `muse-probe-r2notes-fn-empty-body`. Corpus: `fn01-single`, `a-fn-define` | PASS (source 116, token 4) |
| `fniParabreak` | `type == 'parabreak'`. Renders a single LF. Dominates `start` and `end`. | Footnoteitem.php:43 | Corpus only: `fnb-24-note-paragraphs`, `fni-12-paragraphs`, `fn14-multiline-body`, `fn44-across-paragraphs`. No retained live capture | PASS (source 16, token 1) |
| `fniStartEmpty` | `type == 'start'` and the stored body at `footnotes[id-1]` is `''` (missing id, id 0, or empty text). | Footnoteitem.php:46 then :62 | Live: `muse-probe-r2notes-fni-p-empty`, `muse-probe-r2notes-fni-p-empty-ws`. Corpus: `fn07-empty-body`, `fni-05-empty-one` | PASS (source 20, token 3) |
| `fniStartBody` | `type == 'start'` and that body is non-empty. A trailing space is appended. | Footnoteitem.php:62 | Live: `muse-probe-r2notes-fn-case-close`, `muse-probe-r2notes-fn-block-title`. Corpus: `fn01-single` | PASS (source 96, token 2) |
| `fniEnd` | `type == 'end'`. Renders `</div>`. | Footnoteitem.php:67 | Live: `muse-probe-r2notes-fn-case-close`. Corpus: `fn01-single` | PASS (source 116, token 1) |
| `fniFallthrough` | `type` is none of `parabreak`, `start`, `end`. The method returns null, which `Text_Wiki::render` concatenates as `''`. | Footnoteitem.php implicit, after :67 | No page pin. A source never emits this token. Designed probe: `Footnoteitem` `token()` with `type=other` and with `type` absent. Run locally as `tok-fni-fall-other`, `tok-fni-fall-missing` | PASS (token 2) |
| `fnbNoNotes` | `count(footnotes) == 0`. Returns `''` and dominates `type`. | Footnoteblock.php:40 | No page pin of this line. `footnoteblockProcess` on an empty collection emits no token (`fnb_empty_emits_nothing`), so a page never calls the render arm. The observable empty block is the parser deleting the match, corpus `fnb-05-block-only-no-notes`, `fn48-no-notes`, `b-fn-empty-block` (e2e PASS, token table empty). Designed probe of the render line: `Footnoteblock` `token()` with `footnotes=[]` and `type` in `start`/`end`/`nope`. Run locally as `tok-fnb-empty-*` | PASS (token 3) |
| `fnbStartDefault` | Notes nonempty, `type == 'start'`, `title === null` (missing key reads null). Default title `Footnotes`. | Footnoteblock.php:43 then :45 | Live: `muse-probe-r2notes-fn-case-close`. Corpus: `fnb-01-block-after-notes` | PASS (source 68, token 2) |
| `fnbStartBlank` | Notes nonempty, `type == 'start'`, `title === ''`. The title div is omitted. | Footnoteblock.php:49, the `=== ""` arm | Live: `muse-probe-r2notes-fnb-title-empty`. Corpus: `fnb-11-title-empty`, `fn27-block-title-empty` | PASS (source 16, token 1) |
| `fnbStartTitled` | Notes nonempty, `type == 'start'`, `title` is neither null nor `''`. `htmlspecialchars` of the title, `ENT_COMPAT`. | Footnoteblock.php:49, the `!== ""` arm | Live: `muse-probe-r2notes-fnb-title-apostrophe`, `muse-probe-r2notes-fnb-title-special`, `muse-probe-r2notes-fnb-title`. Corpus: `fnb-10-title-simple`, `fn24-block-title` | PASS on parser-reachable values (source 32, token 18). FINDING on `OptVal.bool false`: see below |
| `fnbEnd` | Notes nonempty, `type == 'end'`. Renders `</div>`. | Footnoteblock.php:61 | Live: `muse-probe-r2notes-fn-case-close`. Corpus: `fnb-01-block-after-notes` | PASS (source 116, token 1) |
| `fnbFallthrough` | Notes nonempty and `type` is neither `start` nor `end`. Implicit null. | Footnoteblock.php after :61 | No page pin. Designed probe: `Footnoteblock` `token()` with a nonempty footnote list and `type=nope`. Run locally as `tok-fnb-fall` | PASS (token 1) |
| `bibiStartSpace` | `type == "start"` and `empty($options['empty'])` is true. A space follows the id. | Bibitem.php:41 then :48 | Live: `muse-probe-r2notes-bibc-p-id-defined`. Corpus: `b01-single` | PASS (source 96, token 5, including missing, null-equivalent, `false`, `0`, `""`, `"0"`) |
| `bibiStartTight` | `type == "start"` and `empty($options['empty'])` is false. No space. The parser stores `true` when the trimmed body is empty, and `empty(true)` is false, so an empty body is this class. | Bibitem.php:48 | Live: `muse-probe-r2notes-bibi-p-empty-body`, `muse-probe-r2notes-bibi-p-space-only-body`, `muse-probe-r2notes-bibi-p-tab-only-body`. Corpus: `b07-empty-body` | PASS (source 16, token 3, including `true`, `1`, `"00"`) |
| `bibiEnd` | `type == "end"`. Renders `</div>`. | Bibitem.php:52 | Live: `muse-probe-r2notes-bibc-p-id-defined`. Corpus: `b01-single` | PASS (source 112, token 1) |
| `bibiFallthrough` | `type` is neither `start` nor `end`. Implicit null. | Bibitem.php after :52 | No page pin. Designed probe: `Bibitem` `token()` with `type=nope`. Run locally as `tok-bibi-fall` | PASS (token 1) |
| `bibNl` | `type == 'nl'`, tested before `start`. Renders a single LF. | Bibliography.php:44 | Live: `muse-probe-r2notes-bibi-p-mixed-lines`, `muse-probe-r2notes-bibi-p-hyphen-label`. Corpus: `bib42-invalid-line-residual`, `b24-label-hyphen` | PASS (source 16, token 1) |
| `bibStartDefault` | `type == 'start'`, `title === null`. Default title `Bibliography`. The empty-collection guard is commented out and is not a branch; a block with no entries still emits start and end. | Bibliography.php:48 then :50 | Live: `muse-probe-r2notes-bibc-p-id-defined`. Corpus: `b01-single` | PASS (source 96, token 1) |
| `bibStartBlank` | `type == 'start'`, `title === ''`. The title div is omitted. | Bibliography.php:54, the `=== ""` arm | Live: `muse-probe-r2notes-bib-p03-title-empty`. Corpus: `b52-title-empty`, `bib15-title-empty` | PASS (source 16, token 1) |
| `bibStartTitled` | `type == 'start'`, `title` neither null nor `''`. | Bibliography.php:54, the `!== ""` arm | Live: `muse-probe-r2notes-bibi-p-title-option`, `muse-probe-r2notes-bib-p04-title-special`. Corpus: `b21-title`, `bib16-title-special-chars` | PASS on parser-reachable values (source 16, token 17). FINDING on `OptVal.bool false`: see below |
| `bibEnd` | `type == 'end'`. Renders `</div>`. | Bibliography.php:68 | Live: `muse-probe-r2notes-bibc-p-id-defined`. Corpus: `b01-single` | PASS (source 128, token 1) |
| `bibFallthrough` | `type` is none of `nl`, `start`, `end`. Implicit null. | Bibliography.php after :68 | No page pin. Designed probe: `Bibliography` `token()` with `type=nope`. Run locally as `tok-bib-fall` | PASS (token 1) |
| `bibcMissing` | `bibitemIds[label]` is null (a missing key reads null). Error span; the label is interpolated raw. | Bibcite.php:41–46, the null arm | Live: `muse-probe-r2notes-bibc-p-undef`, `muse-probe-r2notes-bibc-p-case-mismatch`. Corpus: `b18-undefined-cite`, `bibc-01-undef-basic` | PASS (source 16, token 2, including label `a<b`) |
| `bibcResolved` | `bibitemIds[label]` holds an id. Anchor to `bibitem-<id>`. No fallthrough: both arms return a string. | Bibcite.php:41–46, the found arm | Live: `muse-probe-r2notes-bibc-p-id-defined`, `muse-probe-r2notes-bibc-p-id-forward`. Corpus: `b16-forward-cite`, `b17-backward-cite` | PASS (source 32, token 2, including id 0) |

### Finding: `OptVal.bool false` inside the titled classes

`tok-fnb-bool-false` and `tok-bib-bool-false` (seed `20261122`). PHP classifies both as the titled arm, because `false !== ""`, and `htmlspecialchars(false, ENT_COMPAT)` yields the empty string inside an empty title div:

- PHP Footnoteblock: `<div class="footnotes-footer"><div class="title"></div>`
- Lean Footnoteblock: `<div class="footnotes-footer">`
- PHP Bibliography: `<div class="bibitems"><div class="title"></div>`
- Lean Bibliography: `<div class="bibitems">`

The mirror's title test is `renderOptValBytes`, and `renderOptValBytes (OptVal.bool false)` is `[]`, so the mirror takes the blank arm's output while `fnbClass` / `bibClass` still report the titled class. `fnb_bool_false_divergence` and `bib_bool_false_divergence` record both facts. `titleOpt` stores only `null` or `textVal` (a string, or bytes when the text contains `0xFF`); `textVal_title_agrees` and `titleOpt_class_agrees` show the PHP test and the mirror test agree on those values. Every source case in the two titled classes matched byte for byte. `OptVal.bool true` and `OptVal.int 0` also matched (both sides emit `1` and `0`).

## Theorem inventory

File `lean-ftml/LeanFtml/CoverageNotes.lean`, imported from `LeanFtml.lean`. `#print axioms` lines are at the end of `lean-ftml/Main.lean`. Each theorem below audits at `[propext, Classical.choice, Quot.sound]`.

Partition of the six renderers. `none` is only for a rule outside the family.

- `classify_isSome`, `notes_class_complete`, `memClass_complete`: a NOTES rule has some class.
- `notes_class_exclusive`, `memClass_exclusive`: that class is unique, so membership is exactly one class.
- `streamClassAt` / `tokenMem`: the same predicate read off the token stream.

Exclusivity the cascades themselves give.

- `notes_type_tags_distinct`, `optTypeIs_exclusive`: one `type` value cannot be two of the tags.
- `fni_parabreak_dominates`: `parabreak` wins over `start` and `end`.
- `fnb_empty_dominates`: an empty footnote list wins over `type`.
- `bib_nl_excludes_start`: a token whose type is `nl` is not a `start`.

Title tests.

- `textVal_title_agrees`, `titleOpt_class_agrees`: on the values the parsers store, the PHP trichotomy (null, then `""`) and the mirror's emptiness test name the same branch.
- `fnb_bool_false_divergence`, `bib_bool_false_divergence`: the finding above.

Reachability. `NotesReach` is the set of token shapes the parse functions append, paired with a render state. Footnoteblock start and end require a nonempty `doc.footnotes`, because `footnoteblockProcess` emits them only for such a collection.

- `notesReach_classified`: every reachable token has a rule, a class, and `isFallthrough = false`.
- `notes_stream_classified`: the same for the token at an index of a stream.
- `footnoteProcess_tokens`, `footnoteScan_reach`: Footnote scan appends only `fnCite` tokens.
- `fniEmit_reach`, `footnoteblockInside_tokens`, `footnoteblockProcess_reach`: a nonempty collection appends item tokens plus a start and an end; the empty collection appends nothing (`fnb_empty_emits_nothing`).
- `bibitemProcess_reach`, `bibWalk_reach`, `bibliographyProcess_reach`: the walk appends `bibNl` and bibitem start/end tokens, then the block's own start and end.
- `bibciteScan_reach`: Bibcite scan appends only cite tokens.

## Closing accounting

The family's input classification is proved. On the six NOTES rules, `classify` is total and single-valued, and the decidable stream predicate `streamClassAt` is that function read at an index. The order of the PHP tests is the order of the Lean cascades: parabreak before start before end; the empty footnote list before type; `nl` before start; the title trichotomy null then `""`. Type-tag arms are exclusive because one option value cannot equal two byte strings.

Live evidence pins eighteen classes, cited in the table from the retained `muse-probe-r2notes-*` captures. `fniParabreak` has corpus conformance and no retained live capture; the corpus cases name the paragraph-break notes (`fnb-24-note-paragraphs` and the three companions). Five classes have no page pin: the four fallthrough arms and the empty-collection Footnoteblock render line. A page cannot enter them. The parsers do not emit a fallthrough token, and `footnoteblockProcess` on `[]` leaves the token list unchanged, which is what `fnb-05-block-only-no-notes` and `b-fn-empty-block` observe. The probe that would pin each of those five is a direct `token()` call with the option map and `DocState` named in the table. Those calls were run against PHP 8.5.4 in the token half of the fuzz; they were not issued as sandbox pages, because a page would not execute the branch.

Within-class constancy holds for every class on the values a NOTES parse produces, and on the synthetic token states except one scalar. `fnbStartTitled` and `bibStartTitled` disagree with the reference when `title` is `OptVal.bool false`: the reference emits an empty title div, the mirror omits it. That scalar is outside `titleOpt`. The rest of both classes, including every source case and the other synthetic titles, matched byte for byte.

The named remainder is those two facts together. The fallthrough arms and `fnbNoNotes` are members of the partition and unreachable from the parsers. `OptVal.bool false` is reachable as a render input, classified with the titled arm, and rendered by the mirror as the blank arm's bytes. No other class failed the fuzz.

COMPLETE
