# Mission R4 Report: Render-Equivalence Scope, Conformance Driver, and NOTES Pilot

Mission R4 opens the render-equivalence tier (Tier R4) of the ftml Lean equivalence loop, directly atop R3's parse-phase mirror (`R3-SCOPE.md`, `REPORT-R317.md`). All three parts specified in `PROMPT-ANTIGRAVITY-RENDER.md` are delivered and verified firsthand inside this worktree, with zero edits outside this worktree, zero edits to `ref-php/`, zero `sorry`, and zero `sorryAx`.

---

## 1. Scope decisions and their evidence (`R4-SCOPE.md`)

`R4-SCOPE.md` settles the Tier R4 boundary from a firsthand audit of `ref-php/text-wiki/Text/Wiki.php`, `Text/Wiki/Render/Xhtml.php`, all 84 files in `Text/Wiki/Render/Xhtml/`, all 68 active rules in `Text/Wiki/Parse/Default/`, `ref-php/harness/*.php`, `conformance-refphp/R2-*.md`, `REPORT-R35.md`, `REPORT-R36.md`, `REPORT-R317.md`, `REPORT-REFGAPS.md`, and `GAP-LEDGER.md`.

### Key verified inventory facts

1. **Complete 84-file render inventory (`R4-SCOPE.md` §1.2–§1.3)**:
   - **68 active rules** in `Text_Wiki::$rules` (`Wiki.php:52–133`), each backed by a matching file in `Render/Xhtml/<Rule>.php`. Nine active rules produce no parse tokens (`Include`, `Prefilter`, `Modulepre`, `Iftags`, `Concatlines`, `Divprefilter`, `Social`, `Tighten`, plus `Delimiter` unreachable on valid UTF-8 JSON inputs); two rules receive tokens only from sibling parse rules (`Footnoteitem` via `Footnoteblock`; `Bibitem` via `Bibliography`).
   - **16 inactive/orphan files** excluded by construction: 7 commented-out rules in `Text_Wiki::$rules` (`Bold`, `Function`, `Html`, `Italic`, `Moduledelimiter`, `Phplookup`, `Wikilink`; note `Embed` appears both commented at line 85 and active at line 109) plus 9 orphan Xhtml files absent from `$rules` (`Box`, `Font`, `Plugin`, `Postfilter`, `Preformatted`, `Revise`, `Smiley`, `Specialchar`, `Titlebar`).
2. **Render-phase state-flow audit (`R4-SCOPE.md` §1.4)**:
   - **No Xhtml render rule's `token()` writes any state that another Xhtml render rule's `token()` reads.**
   - Read-only cross-phase state flows from R3 parse into R4 render are: `vars['footnotes']` (read by `Footnoteitem` and `Footnoteblock`), `vars['bibitemIds']` (read by `Bibcite`), `Text_Wiki_Parse_Math::$equationsArray` (read by `Equationreference`; `Footnote` reads it into an unused dead local `$refs`), `vars['pageName']` (read by `Gallery` and `Image`), and `$this->wiki->renderConf` overrides (`wiki-config.php`). `vars['bibitems']` (commented out at `Bibliography.php:47`) and `vars['scored_anchors']` (R3.17, consumed only by `Paragraph::process()` at parse time) are unread during render.
   - Render-side writes are strictly write-only metadata for OZONE (`Freelink` writes `vars['internalLinksExist']`/`vars['internalLinksNotExist']`; `Url` writes `vars['externalLinks']`), one-time `__construct()` pattern loading (`Embed::$this->_patterns`), and a dead never-mutated `static $jsOutput = false` in `Heading`.
   - Consequence: `Text_Wiki::render('Xhtml')` is a **pure structural fold** over `work : List TSeg`, bracketed only by `Text_Wiki_Render_Xhtml::pre()` (`Xhtml.php:34–89`) and `Text_Wiki::render()`'s `üü...üü` `strip_tags` post-pass (`Wiki.php:963–972`).
3. **Target, excluded framing surfaces, and Stage 2 in-tree audit (`R4-SCOPE.md` §2)**:
   - **Primary target (Bridge A)**: byte-exact equality between Lean's `RenderOutcome.output` and fresh PHP `Text_Wiki::render('Xhtml')` (`ref-php/harness/batch.php render` on the 68-rule pipeline; matching `ref_configure_wiki(new Text_Wiki($rules))->transform($src, 'Xhtml')` on stage-restricted prefixes), with **zero normalization**.
   - **Framing surfaces excluded when comparing against live captures / ftml dumps** (with record citations in `R4-SCOPE.md` §2.3): `transform.php:39`'s appended `"\n"`, live's `#page-content` chrome, serving-layer pretty-printing and save-time whitespace normalization, serving-layer dynamic/DB surfaces (`Bibcite` random hex id suffix S1, `Math` `LatexRenderer`, `Module` `ModuleManager`, `Freelink`/`Image`/`Gallery`/`User` DB lookups), external Stage 2 `purifyHtml` (libtidy) repairs (paragraph unwrap, crossed inline re-nesting, illegal tag unnesting, `<br />` closing-tag newline trim), and unreconciled ftml serializer findings (`M22`/`M28`, `M33`/`M56`, `M38`/`M72`).
   - **Stage 2 in-tree audit (`rg -i "purify|tidy|strip_tags" ref-php`)**: no `purifyHtml` or `libtidy` lives in `ref-php/`. Two in-tree touches receive explicit dispositions (`R4-SCOPE.md` §2.4):
     - `Parse/Default/Tighten.php:53–149` (R2-INLINE3 C1/C2/C3 Stage-2-derived whitespace/Colortext shaping) executes during `parse()` and is already mirrored at R3.14; R4 inherits it faithfully via `ParseState` without duplicating or stripping it.
     - `Text_Wiki_Render_Xhtml::pre()` (`Xhtml.php:34–89`) and `Text_Wiki::render()`'s `üü...üü` `strip_tags` pass (`Wiki.php:963–972`) live inside `render('Xhtml')` itself and are **in scope** of `LeanFtml/RenderCore.lean`.
   - **Edge quirk verified firsthand**: PHP's `Xhtml::pre()` maps `U+FFFD` back to `\xFF` (`str_replace($new_delim, "\xFF", ...)`), so a literal `U+FFFD` in prose opens an unclosed delimiter span on PHP 8.5.4 (`"a \uFFFD b"` → `"\na "`, whereas Lean preserves `"\na \uFFFD b\n\n"`). Documented explicitly in `R4-SCOPE.md` §1.1.
4. **Render-side resolution semantics pinned (`R4-SCOPE.md` §4)**:
   - Incorporates `REPORT-R35.md:15` (`Equationreference`), `REPORT-R36.md:15` (`Bibcite`), plus `Footnoteitem` (`vars['footnotes'][$id - 1]` empty-body separator check and `parabreak` → `"\n"`), `Footnoteblock` (`count($footnotes) == 0` → `""`, `ENT_COMPAT`), and PHP 8.5 `htmlspecialchars` flag sensitivity (`ENT_COMPAT` returning `""` on invalid UTF-8 vs. bare `htmlspecialchars` using `ENT_QUOTES | ENT_SUBSTITUTE` and PHP `ext/standard/html.c` continuation consumption).

---

## 2. Driver and render-core design

### Modules added and updated in `lean-ftml/`

- **`lean-ftml/LeanFtml/RenderCore.lean`** (new, 581 lines):
  - `RenderConf` (render-time config keys, defaulting to `ref_configure_wiki()` + class defaults).
  - `RenderRuleId` inductive enumerating **strictly** the render rules mirrored so far (R4.1: `footnote`, `footnoteitem`, `footnoteblock`, `bibitem`, `bibliography`, `bibcite`), plus `renderRuleName`, `renderRuleOfName`, and `mirroredRenderRules`.
  - Exact PHP 8.5 escaping helpers: `xhtmlPreText` (`ENT_COMPAT` on literal text segments), `htmlSpecialCharsCompat` (`ENT_COMPAT`, returning `[]` on any invalid UTF-8 byte list), and `htmlSpecialCharsQuotesSubst` (`ENT_QUOTES | ENT_SUBSTITUTE`, matching PHP 8.5's `ext/standard/html.c` continuation-byte consumption on overlongs/surrogates/overflows — verified 92/92 against PHP 8.5.4).
  - Tail-recursive `stripHtmlTags` and `postStripToc` mirroring `Text_Wiki::render()`'s `üü...üü` `strip_tags` pass (`Wiki.php:963–972`).
  - Generic single-pass segment renderer `renderSegsLoop` and `renderWith` returning `RenderOutcome { output, unmirrored, missingKeys }` with `isComplete := unmirrored.isEmpty && missingKeys.isEmpty`.
  - **No-silent-stand-in enforcement (proved, not merely conventional)**: any referenced `TSeg.tok k` whose rule name maps to `none` under `renderRuleOfName` emits `[[UNMIRRORED:<rule>:<key>]]` and records `entry.rule` in `unmirrored` (`renderWith_unmirrored_not_complete`); any missing token key emits `[[MISSING_TOKEN:<key>]]` and records `k` in `missingKeys`. Unreferenced table entries (e.g., `Typography`'s 13 constant tokens) are ignored identically to `Text_Wiki::render()` (`renderWith_lookup_ext`).
- **`lean-ftml/LeanFtml/NotesRender.lean`** (new, 999 lines):
  - Pure total Lean mirrors of all six NOTES Xhtml render rules (`renderFootnote`, `renderFootnoteitem`, `renderFootnoteblock`, `renderBibitem`, `renderBibliography`, `renderBibcite`), `bibLookup` (dual of `NotesRules.bibSet`), `dispatchRenderR41`, `renderWithR41`, `renderStateR41`, and `renderNotesE2E`.
  - Mirrors `Footnoteitem`'s 2026-11-21 `parabreak` token (`CORRECTION-FNB24.md`) as `[10]` (`"\n"`), `Footnoteitem`'s `vars['footnotes'][id - 1]` empty-body separator check, `Footnoteblock`'s `ENT_COMPAT` title escaping and empty-collection suppression, `Bibitem`'s `empty($options['empty'])` separator check, `Bibliography`'s `nl` → `"\n"` and PHP 8.5 default `htmlspecialchars` title escaping, and `Bibcite`'s `vars['bibitemIds'][$label]` lookup.
- **`lean-ftml/ConformanceR41.lean`** (new, 431 lines; exe `lean-ftml-conformance-r41`):
  - `--list-rules`: prints `["Footnote","Footnoteitem","Footnoteblock","Bibitem","Bibliography","Bibcite"]`.
  - `state` (default): reads R3 parse-state JSONL (from `ref-php/harness/state-restricted.php` or Lean `serState`) on stdin, accepting `"tokens"` as either a 0-indexed JSON array or a process-global-keyed JSON object, empty PHP option maps `[]`, and `{"$bytes": [...]}` wire values everywhere; passes through `fatal`/`error` records; emits `{"id":...,"status":"ok","mirrored":[...],"output":...}` when `isComplete = true` and `{"id":...,"status":"excluded","mirrored":[...],"unmirrored":[...],"missingKeys":[...],"fallback":...}` otherwise.
  - `--e2e-r36`: reads raw `{"id","source","tags"?}` JSONL, runs Lean's R3.6 `convCRLF → pipelineR36` parse pipeline directly into `renderStateR41`, and emits the same JSONL schema.
- **`lean-ftml/LeanFtml.lean`**, **`lean-ftml/lakefile.toml`**, **`lean-ftml/Main.lean`**: library imports, `lean-ftml-conformance-r41` exe target, and the R4.1 `#print axioms` audit block.
- **`ref-php/` immutability verified**: zero files under `ref-php/` were created or modified (verified by mtime check against `PROMPT-ANTIGRAVITY-RENDER.md` and SHA-256 check of all six NOTES Xhtml render files).

---

## 3. Pilot family (NOTES) conformance numbers and named exclusions

Corpus: all **365 cases** across the eight JSONL batteries in `conformance-refphp/notes/` (`footnote` 53, `footnoteitem` 50, `footnoteblock` 48, `bibitem` 52, `bibliography` 56, `bibcite` 60, `xbattery` 39, `audit/state-leak-battery` 7), plus all **137 live probe sources** (`conformance-refphp/notes/**/captures*.json`, `probe-captures*.json`, and `relay-probes/captures-fnb24.json`), the **9 smoke cases** (`conformance-refphp/smoke/`), **92 synthetic ill-formed UTF-8 escaping cases**, and **25 adversarial edge cases**.

### 3.1 Summary table (all byte-exact with zero normalization)

| Gate | Corpus | Total | In-scope PASS | In-scope FAIL | Excluded (unmirrored) | Missing keys / errors |
|---|---|---:|---:|---:|---:|---:|
| **Full 68-rule pipeline** (`state-restricted.php` 68 rules → Lean `state` vs. `batch.php render`) | NOTES batteries | 365 | **43** | **0** | 322 | 0 / 0 |
| **R3.6 23-rule prefix** (`state-restricted.php` `Prefilter..Bibcite` → Lean `state` vs. PHP 23-rule `transform`) | NOTES batteries | 365 | **360** | **0** | 5 | 0 / 0 |
| **End-to-end Lean parse+render** (`--e2e-r36` vs. PHP 23-rule `transform`) | NOTES batteries | 365 | **360** | **0** | 5 | 0 / 0 (0 status mismatches) |
| **Full 68-rule pipeline** (live probe sources incl. `fnb24`) | NOTES live probes | 137 | **24** | **0** | 113 | 0 / 0 |
| **R3.6 23-rule prefix** (live probe sources incl. `fnb24`) | NOTES live probes | 137 | **135** | **0** | 2 | 0 / 0 |
| **Full 68-rule pipeline** (smoke battery) | `smoke/*.txt` | 9 | **0** | **0** | 9 | 0 / 0 |
| **Ill-formed UTF-8 `htmlspecialchars`** (`Bibliography` + `Footnoteblock` synthetic states vs. PHP 8.5.4) | Synthetic UTF-8 | 92 | **92** | **0** | 0 | 0 / 0 |
| **Adversarial edge cases** (23-rule prefix: empty/WS, CRLF, `üü...üü` strip, `@@raw@@`-spanning titles, CJK/emoji, `title="0"`, `body="0"`, `parabreak` multi, `Math` fatal) | Synthetic edge | 25 | **24** (+ 1 fatal agree)* | **0** | 0 | 0 / 0 |

\*Note on `edge-bib-title-raw-placeholder` (`[[bibliography title="pre @@x@@ post"]]`): `state` mode matched PHP batch render byte-for-byte (`pre \xEF\xBF\xBD17\xEF\xBF\xBD post`); `--e2e-r36` produced `pre \xEF\xBF\xBD0\xEF\xBF\xBD post` due to PHP's cumulative batch `addToken` counter (`REPORT-R35.md:29`, `REPORT-R317.md:35`), and matched fresh-process PHP render byte-for-byte (`True`).

All four battery cases exercising `Footnoteitem`'s 2026-11-21 `parabreak` token (`fn14-multiline-body`, `fn44-across-paragraphs`, `fni-12-paragraphs`, `fnb-24-note-paragraphs`) plus live probe `fnb24` pass byte-for-byte in both decoupled `state` and `--e2e-r36` modes.

### 3.2 Per-battery breakdown (365 NOTES battery cases)

| Battery | Total | 68-rule Pass | 68-rule Excl | 23-rule Pass (`state` & `e2e`) | 23-rule Excl |
|---|---:|---:|---:|---:|---:|
| `footnote/battery.jsonl` | 53 | 1 | 52 | 53 | 0 |
| `footnoteitem/battery.jsonl` | 50 | 1 | 49 | 49 | 1 |
| `footnoteblock/battery.jsonl` | 48 | 0 | 48 | 48 | 0 |
| `bibitem/battery.jsonl` | 52 | 25 | 27 | 52 | 0 |
| `bibliography/battery.jsonl` | 56 | 15 | 41 | 56 | 0 |
| `bibcite/battery.jsonl` | 60 | 1 | 59 | 57 | 3 |
| `xbattery.jsonl` | 39 | 0 | 39 | 38 | 1 |
| `audit/state-leak-battery.jsonl` | 7 | 0 | 7 | 7 | 0 |
| **Total** | **365** | **43** | **322** | **360** | **5** |

### 3.3 Named exclusions — R3.6 23-rule prefix gate (5 of 365 excluded)

Every case excluded in the 23-rule stage-prefix gate references an earlier unmirrored parse rule's token in `work`:

1. `fni-16-code-body` (`footnoteitem`): unmirrored `["Rawold"]`
2. `bibc-36-code-owner` (`bibcite`): unmirrored `["Code"]`
3. `bibc-37-raw-owner` (`bibcite`): unmirrored `["Raw"]`
4. `bibc-42-internal-link-label` (`bibcite`): unmirrored `["Freelink"]`
5. `x-fn-in-code` (`xbattery`): unmirrored `["Code"]`

(The 2 excluded live probes on the 23-rule prefix are `footnote:code-body` (`Rawold` / `Code`) and `x:x-fn-in-code` (`Code`).)

### 3.4 Named in-scope passes & exclusions — Full 68-rule pipeline gate (43 pass, 322 excluded)

The **43 in-scope cases** that passed byte-for-byte against `ref-php/harness/batch.php render` are:
`fn53-empty-doc`, `fni-26-empty-block-bare`, `b01-single`, `b02-two`, `b03-three`, `b04-dup-adjacent`, `b05-dup-separated`, `b07-empty-body`, `b08-two-empty`, `b09-empty-then-value`, `b13-self-cite`, `b14-nested-footnote`, `b20-block-only`, `b21-title`, `b22-hide`, `b23-title-hide`, `b26-no-space-before-colon`, `b27-two-spaces-before-colon`, `b28-no-space-after-colon`, `b31-mixed-valid-invalid`, `b32-tab-separators`, `b33-uppercase-label`, `b34-digit-label`, `b42-special-chars`, `b44-leading-trailing-space`, `b51-blank-lines`, `b52-title-empty`, `bib06-body-only-no-cite`, `bib13-title-double-quoted`, `bib14-title-single-quoted`, `bib15-title-empty`, `bib16-title-special-chars`, `bib17-hide-yes`, `bib18-hide-short-t`, `bib19-unknown-args`, `bib20-title-and-hide`, `bib27-opener-extra-close`, `bib35-line-anchored-list`, `bib36-line-anchored-heading`, `bib44-whitespace-body`, `bib48-footnote-opened-in-bib-body`, `bib54-trailing-paragraph`, `bibc-18-cite-inside-bibliography`.

**Unmirrored rule frequency across the 322 full-pipeline exclusions**: `Paragraph` (299), `Newline` (37), `Deflist` (15), `Strong` (13), `Url` (10), `Div` (9), `Emphasis` (9), `List` (9), `Blockquote` (5), `Collapsible` (4), `Span` (3), `Code` (2), `Size` (2), `Table` (2), `Tableadv` (2), `Tt` (2), `Typography` (2), `Anchor` (1), `Center` (1), `Freelink` (1), `Heading` (1), `Interwiki` (1), `Raw` (1), `Rawold` (1), `Underline` (1).

All **322 excluded full-pipeline cases** are listed by name with their exact unmirrored rule(s) in **Appendix A** below. (All 9 smoke cases were also excluded on 68-rule due to unmirrored rules: `smoke-code` (`Code`), `smoke-collapsible` (`Paragraph`, `Collapsible`), `smoke-div` (`Paragraph`, `Div`), `smoke-footnote` (`Paragraph`), `smoke-include` (`Newline`, `Paragraph`), `smoke-link` (`Freelink`, `Paragraph`), `smoke-math` (`Paragraph`, `Math`), `smoke-quote` (`Newline`, `Paragraph`, `Blockquote`), `smoke-table` (`Table`).)

---

## 4. Theorem inventory and axiom audits

All **34 new theorems** (11 in `LeanFtml/RenderCore.lean`, 23 in `LeanFtml/NotesRender.lean`) are verified by `#print axioms` in `lean-ftml/Main.lean:311–344`. Every theorem audits within `[propext, Classical.choice, Quot.sound]`, none depends on `sorryAx`, `rg -n "sorry"` finds zero occurrences in all new/edited files (only the two pre-existing prose comments in `Main.lean:8,43`), and `lake build` + `lake build lean-ftml lean-ftml-conformance-r41 lean-ftml-conformance-r36 lean-ftml-conformance-r317` succeed with zero errors and zero warnings in any R4 file.

| # | Theorem | File | Property characterized | Axioms |
|---:|---|---|---|---|
| 1 | `renderRuleOfName_roundtrip` | `RenderCore.lean` | Every mirrored `RenderRuleId` round-trips through name lookup | *(none)* |
| 2 | `htmlSpecialCharsCompat_invalid` | `RenderCore.lean` | `ENT_COMPAT` returns `[]` on any invalid UTF-8 input | `[propext]` |
| 3 | `utf8Valid_ascii` | `RenderCore.lean` | Every pure-ASCII byte list passes UTF-8 validation | `[propext]` |
| 4 | `htmlSpecialCharsCompat_ascii` | `RenderCore.lean` | `ENT_COMPAT` reduces to bytewise `escHtmlCompatByte` on ASCII | `[propext]` |
| 5 | `htmlSpecialCharsQuotesSubst_ascii` | `RenderCore.lean` | `ENT_QUOTES\|ENT_SUBSTITUTE` reduces to bytewise `escHtmlQuotesByte` on ASCII | `[propext, Quot.sound]` |
| 6 | `renderSegsLoop_unmirrored_mem` | `RenderCore.lean` | Any referenced unmirrored token's rule is recorded in `unmirrored` | `[propext, Classical.choice, Quot.sound]` |
| 7 | `renderWith_unmirrored_not_complete` | `RenderCore.lean` | No-silent-stand-in corollary: any unmirrored token forces `isComplete = false` | `[propext, Classical.choice, Quot.sound]` |
| 8 | `renderWith_all_mirrored_complete` | `RenderCore.lean` | Completeness: all referenced tokens present & mirrored → `isComplete = true` | `[propext, Classical.choice, Quot.sound]` |
| 9 | `renderWith_lookup_ext` | `RenderCore.lean` | Unreferenced-token irrelevance (`Typography`'s 13 constant entries cannot affect render) | `[propext, Classical.choice, Quot.sound]` |
| 10 | `postStripToc_no_c3` | `RenderCore.lean` | `postStripToc` is the identity on any byte list with no `0xC3` byte | `[propext, Classical.choice, Quot.sound]` |
| 11 | `postStripToc_strips_tags` | `RenderCore.lean` | Concrete `üü<b>hi</b>üü` tag-strip witness | `[propext, Classical.choice, Quot.sound]` |
| 12 | `bibLookup_bibSet_same` | `NotesRender.lean` | Parse→render bridge: `bibLookup (bibSet m k v) k = some v` (last-registration-wins) | `[propext, Classical.choice, Quot.sound]` |
| 13 | `bibLookup_bibSet_other` | `NotesRender.lean` | Parse→render bridge: `bibSet` preserves lookup for all distinct labels | `[propext, Classical.choice, Quot.sound]` |
| 14 | `footnote_spec` | `NotesRender.lean` | Universal `Footnote` superscript anchor formula for any `conf`, `id` | `[propext, Classical.choice, Quot.sound]` |
| 15 | `footnoteitem_parabreak` | `NotesRender.lean` | `Footnoteitem` `parabreak` token always emits `[10]` (`"\n"`) | `[propext, Classical.choice, Quot.sound]` |
| 16 | `footnoteitem_end` | `NotesRender.lean` | `Footnoteitem` `end` token always emits `</div>` | `[propext, Classical.choice, Quot.sound]` |
| 17 | `footnoteitem_start_empty_body` | `NotesRender.lean` | `Footnoteitem` `start` omits space after `.` when `doc.footnotes[id-1]` is empty | `[propext, Classical.choice, Quot.sound]` |
| 18 | `footnoteitem_start_nonempty_body` | `NotesRender.lean` | `Footnoteitem` `start` emits `' '` after `.` when `doc.footnotes[id-1]` is non-empty | `[propext, Classical.choice, Quot.sound]` |
| 19 | `footnoteblock_empty_doc` | `NotesRender.lean` | `Footnoteblock` emits `[]` for every token when `doc.footnotes = []` | `[propext, Classical.choice, Quot.sound]` |
| 20 | `footnoteblock_title_empty` | `NotesRender.lean` | `Footnoteblock` omits `<div class="title">` when `title = ""` | `[propext, Classical.choice, Quot.sound]` |
| 21 | `footnoteblock_title_default` | `NotesRender.lean` | `Footnoteblock` defaults `title = null` to `"Footnotes"` | `[propext, Classical.choice, Quot.sound]` |
| 22 | `footnoteblock_end` | `NotesRender.lean` | `Footnoteblock` `end` emits `</div>` when footnotes exist | `[propext, Classical.choice, Quot.sound]` |
| 23 | `bibitem_end` | `NotesRender.lean` | `Bibitem` `end` always emits `</div>` | `[propext, Classical.choice, Quot.sound]` |
| 24 | `bibitem_start_empty_sep` | `NotesRender.lean` | Universal `Bibitem` `start` separator law (`empty = true` → no space; `false` → `' '`) | `[propext, Classical.choice, Quot.sound]` |
| 25 | `bibliography_nl` | `NotesRender.lean` | `Bibliography` `nl` token always emits `[10]` (`"\n"`) | `[propext, Classical.choice, Quot.sound]` |
| 26 | `bibliography_end` | `NotesRender.lean` | `Bibliography` `end` always emits `</div>` | `[propext, Classical.choice, Quot.sound]` |
| 27 | `bibliography_title_empty` | `NotesRender.lean` | `Bibliography` `start` with `title = ""` omits title div | `[propext, Classical.choice, Quot.sound]` |
| 28 | `bibliography_title_default` | `NotesRender.lean` | `Bibliography` `start` with `title = null` emits default `"Bibliography"` title div | `[propext, Classical.choice, Quot.sound]` |
| 29 | `bibcite_not_found` | `NotesRender.lean` | Universal `Bibcite` undefined-label error span (`REPORT-R36.md`) | `[propext, Classical.choice, Quot.sound]` |
| 30 | `bibcite_found` | `NotesRender.lean` | Universal `Bibcite` defined-label anchor with `conf.bibitemIdPrefix` (`REPORT-R36.md`) | `[propext, Classical.choice, Quot.sound]` |
| 31 | `notes_e2e_bibcite_duplicate_example` | `NotesRender.lean` | Worked parse→render composition: duplicate `a, a, b` (`1, 2, 2`), forward `((bibcite a))` → `2`, undefined `((bibcite z))` → error span | `[propext, Classical.choice, Quot.sound]` |
| 32 | `notes_e2e_parabreak_example` | `NotesRender.lean` | Worked parse→render composition: multi-paragraph footnote emits `parabreak` LF byte | `[propext, Classical.choice, Quot.sound]` |
| 33 | `notes_e2e_title_apostrophe_contrast` | `NotesRender.lean` | Worked parse→render composition: `Footnoteblock` (`O'Brien`) vs. `Bibliography` (`O&#039;Brien`) | `[propext, Classical.choice, Quot.sound]` |
| 34 | `notes_e2e_unmirrored_code_excluded` | `NotesRender.lean` | Worked parse→render composition: `Code` + `Footnote` document rejected as incomplete with `unmirrored = ["Code"]` | `[propext, Classical.choice, Quot.sound]` |

---

## 5. Reference-render candidates found (for coordinator triage)

Comparing all **137 cached live captures** in `conformance-refphp/notes/` and `conformance-refphp/relay-probes/captures-fnb24.json` against fresh `ref-php/harness/batch.php render` (restoring `tags=["alpha"]` for `probe-x-tagged.jsonl`), **128 of 137** match under frame normalization (bibcite hex suffix S1 + inter-tag newline normalization). No `ref-php/` file was modified. The remaining 9 capture diffs plus 1 static PHP 8.5 inspection yield **4 reference-render candidates** (and 4 already-classified Stage 2 `purifyHtml` cases):

1. **Candidate R4-C1 (`Render/Xhtml/Bibliography.php:55` — PHP 8.1+ `htmlspecialchars` default-flags artifact)**:
   - **Evidence**: `Bibliography.php:55` calls bare `htmlspecialchars($title)` (PHP 8.5 default `ENT_QUOTES | ENT_SUBSTITUTE`, turning `'` into `&#039;` and invalid UTF-8 into `U+FFFD`), whereas `Footnoteblock.php:50–57` was explicitly corrected in R2-NOTES to `htmlspecialchars($title, ENT_COMPAT)` after live probe `muse-probe-r2notes-fnb-title-apostrophe` showed live emitting raw `'`.
   - **Verification status**: No R2-NOTES bibliography live probe placed an apostrophe inside a title value (`bib14` used single-quoted attribute delimiters `title='Works'`), so this awaits a single live probe on `[[bibliography title="It's fine"]]`. The same bare `htmlspecialchars(...)` pattern also exists in 6 other fossil renderers (`Rawold`, `Freelink`, `Button`, `Image`, `Url`, `Interwiki`).
   - **R4.1 disposition**: Mirrored faithfully as `htmlSpecialCharsQuotesSubst` to match the current reference byte-for-byte.
2. **Candidate R4-C2 (`Render/Xhtml/Footnoteitem.php:62–64` & `Parse/Default/Footnoteblock.php` — block-first / list-body separator)**:
   - **Evidence**: Live captures `conformance-refphp/notes/footnoteitem/captures.json` `p-div-first` and `p-list-body`:
     - `p-div-first`: live emits `1</a>.\n<div><p>block body</p></div>`, whereas reference emits `1</a>. <div ><p>block body</p></div>` (space instead of `\n`, plus `Div`'s `<div >` below).
     - `p-list-body`: live emits `1</a>. * one\n<ul><li>two</li></ul>`, whereas reference emits `1</a>. * one<ul><li>two</li></ul>` (Tighten deleted the raw newline before `<ul>`, the same mechanism `CORRECTION-FNB24.md` fixed for `/\n[ ]*\n/` paragraph breaks).
   - **Prior record**: Noted as F2 in `conformance-refphp/notes/footnoteitem/SECTION.md:21` and `R2-NOTES.md:13,41`.
3. **Candidate R4-C3 (`Render/Xhtml/Div.php:46` — stray space in `<div >` / `<div  k="v">`)**:
   - **Evidence**: Live captures `footnoteitem:p-div-first`, `footnoteblock:div-block`, and `x:x-fn-in-div` all show live emitting `<div>` where `Render/Xhtml/Div.php:46` returns `"<div " . $argstr . ">"` (emitting `<div >` for empty `$args` and double space `<div  k="v">` for non-empty `$args` since line 44 prepends `' '`). Also noted at `REPORT-REFGAPS.md:17` (`a49`). Owned by CONTAIN render stage, not NOTES.
4. **Candidate R4-C4 (`Bibliography` / `Footnoteblock` tail boundary — `bibliography/probe-captures.json` `p13-footnote-open`)**:
   - **Evidence**: Raw bytes of `p13-footnote-open` (`[[bibliography]]\n: a : A\n[[footnote]]\n: b : B\n[[/bibliography]]\n[[/footnote]]\nafter`): live emits `</div>\nafter\n<div class="footnotes-footer">`, whereas fresh `ref-php` emits `</div>\nafter <div class="footnotes-footer">` (literal space `' '` from `Bibliography::parse()`'s residual-line join). Note that R2-NOTES `probe-compare.txt:74` collapsed `\n` to `' '`, masking this raw byte difference; triage is needed on whether live's `\n` is Stage 2 pretty-printing (wrapping `<div class="footnotes-footer">`) or a `Bibliography` residual-space artifact.

*(The other 4 of the 9 live diffs are confirmed Stage 2 `purifyHtml`/libtidy repairs already out of R4 scope per `R4-SCOPE.md` §2.3–§2.4: `footnoteblock:inline-block` stray `</p>` unwrap, `bibliography1:p15-two-blocks` & `x:x-bib-unterminated` `<p>` unwrap around `<dl>`, and `bibcite:p-anchor` nested `<a>` unnesting.)*

---

## 6. Proposed staging order for the remaining render families

The 68 active rules partition into: **6 mirrored (R4.1 NOTES)**, **8 token-free parse-rewrite-only rules** (`Include`, `Prefilter`, `Modulepre`, `Iftags`, `Concatlines`, `Divprefilter`, `Social`, `Tighten` — zero runtime tokens, verified no-op or unreachable), **1 UTF-8-unreachable rule** (`Delimiter`), and **53 remaining token-producing render rules**.

The pilot's full-pipeline exclusion histogram gives the single strongest staging signal: **`Paragraph` alone blocked 299 of the 322 full-pipeline exclusions** (and `Paragraph` + `Newline` + inline formatting blocked >90%). Staging `PARA-CORE` and pure inline formatting immediately after NOTES unlocks massive full-pipeline coverage on every subsequent family before tackling complex escaping, external highlighters, or serving-layer stubs.

| Stage | Family / Rules | Count | Difficulty signals & rationale |
|---|---|---:|---|
| **R4.1 (DONE)** | **NOTES**: `Footnote`, `Footnoteitem`, `Footnoteblock`, `Bibitem`, `Bibliography`, `Bibcite` | 6 | State-reading pilot; PHP 8.5 `ENT_COMPAT` vs. `ENT_QUOTES\|ENT_SUBSTITUTE`; `parabreak` & `nl`. |
| **R4.2** | **PROSE-CORE & TRIVIAL STRUCTURAL**: `Paragraph`, `Newline`, `Break`, `Center`, `Horiz`, `Separator`, `Clearfloat`, `Blockquote`, `Note`, `Divalign`, `Comment`, `Delimiter` | 12 | **Highest leverage, lowest risk.** All 12 are tiny, stateless, zero-external-dep tag emitters. Adding `Paragraph` + `Newline` immediately unlocks ~250+ full-pipeline cases in the NOTES corpus alone (re-run NOTES 68-rule gate as regression!). |
| **R4.3** | **INLINE-SIMPLE & TYPOGRAPHY**: `Strong`, `Emphasis`, `Underline`, `Strikethrough`, `Tt`, `Superscript`, `Subscript`, `Typography`, `Mathinline`, `Email`, `Colortext`, `Size`, `Span`, `Div` | 14 | Pure stateless rules; `Typography` (11-entry map), `Mathinline` (`strtr` `'`→`&#39;`, `\0`→`' '`), `Email` (`strrev` + `@`→`|`), `Colortext` (`normalizeColor`), `Span` (`ENT_COMPAT`), `Div` (raw attrs + `<div >` quirk). Unlocks nearly all remaining prose/inline battery cases. |
| **R4.4** | **RAW / FORM & HEADING / TOC**: `Form`, `Raw`, `Rawold`, `Heading`, `Toc` | 5 | `Form`/`Raw` (`wikidotEscapeRaw`, leading-space `&nbsp;&#32;` pairing), `Rawold` (bare `htmlspecialchars`), `Heading` (`start`/`start-notoc`/`end`), `Toc` (first real producer of `üü...üü`, end-to-end exercising `RenderCore.postStripToc` and validating `stripHtmlTags` edge fidelity against PHP `strip_tags`). |
| **R4.5** | **LISTS & TABLES**: `List`, `Deflist`, `Table`, `Tableadv` | 4 | Pure stateless, moderate option branching (`List` native + Gap 2 explicit `[[ul]]`/`[[ol]]`/`[[li]]` attrs; `Table` `css_table` + `colspan`/`rowspan`/`align`; `Tableadv` `ENT_QUOTES\|ENT_SUBSTITUTE`). |
| **R4.6** | **INTERACTIVE & LINK-PURE**: `Equationreference`, `Anchor`, `Collapsible`, `Tabview`, `Button`, `Url`, `Interwiki`, `Iframe`, `Date`, `File` | 10 | Pure (no DB/OZONE calls), moderate complexity: `Equationreference` (`doc.equations` lookup, `REPORT-R35.md`), `Anchor` (named `htmlentities` vs. element `ENT_COMPAT`), `Collapsible` (`wikidotLabel`), `Tabview` (YUI template), `Url`/`Iframe` (non-ASCII percent-encoding + bare `htmlspecialchars`), `Interwiki` (5 HTTPS `RenderConf` templates), `Date` (64-bit proleptic-Gregorian UTC formatting), `Button`, `File`. |
| **R4.7** | **REGEX / EXTERNAL-LIB RENDERERS**: `Code`, `Embed` | 2 | Pure given fixed bundled assets, but heavy: `Code` invokes `Text_Highlighter` (`WIKIDOT_ROOT/lib/Text_Highlighter/` — 19 syntax highlighters; recommend mirroring plain/unknown-type `Code` first and scoping `Text_Highlighter` grammars explicitly or as an external-library boundary), `Embed` loads `conf/wikiparser/embed/*.php` PCRE allowlist + `on[a-z]+=` JS filter. |
| **R4.8** | **SERVING-LAYER / STUBBED RENDERERS**: `Freelink`, `Module`, `Module654`, `Math`, `Image`, `Gallery`, `User` | 7 | External OZONE/DB/filesystem boundary. Mirror deterministic harness-stubbed paths (`Freelink` non-`textFromTitle` + `REF_EXISTING_PAGES` conf; `Module`/`Module654` `þmodule ...þ` + `renderError` against `ModuleManager` known-module list; `Image` URL/non-DB paths; `Math` harness error-block stub) and issue formal serving-layer dispositions for unstubbed DB/external paths (`User` `DB_OzoneUserPeer`/`WDRenderUtils`, `Gallery` `DB_FilePeer`/`FlickrHandler`, `Image` `flickr:`/`:first`, `Freelink` `textFromTitle` on existing pages, `Math` real LaTeX PNG rendering). |
| **Disposal** | **Token-free active rules**: `Include`, `Prefilter`, `Modulepre`, `Iftags`, `Concatlines`, `Divprefilter`, `Social`, `Tighten` | 8 | Proved/verified never to emit tokens in active parse (0 runtime invocations; `Include` disposed via Tier 1 G1.3/G1.4/G1.4b + `REPORT-REFGAPS.md` Gap 3). |

*(Total: 6 + 12 + 14 + 5 + 4 + 10 + 2 + 7 + 8 = 68 active rules.)*

---

## Appendix A: Complete named exclusion list for the full 68-rule NOTES gate (322 cases)

Every case below was explicitly marked `"status":"excluded"` by `lean-ftml-conformance-r41 state` (zero silent stand-ins, zero passes counted), with the exact deduplicated `unmirrored` render rule(s) in parentheses.

### `footnote` (52 excluded)
`fn01-single` (Paragraph); `fn02-two` (Paragraph); `fn03-block-after` (Paragraph); `fn04-block-before` (Paragraph); `fn05-block-between` (Paragraph); `fn06-two-blocks` (Newline, Paragraph); `fn07-empty-body` (Paragraph); `fn08-bold-italic-body` (Paragraph, Strong, Emphasis, Underline); `fn09-link-body` (Paragraph, Url, Interwiki); `fn10-code-body` (Paragraph); `fn11-math-body` (Paragraph); `fn12-list-body` (Paragraph, List); `fn13-quote-body` (Paragraph, Blockquote); `fn14-multiline-body` (Newline, Paragraph); `fn15-unicode-body` (Paragraph, Strong); `fn16-uppercase-tag` (Paragraph); `fn17-mixed-case-tag` (Url, Paragraph); `fn18-space-in-opener` (Paragraph); `fn19-unterminated` (Paragraph); `fn20-stray-closer` (Paragraph); `fn21-nested-footnote` (Paragraph); `fn22-block-in-footnote` (Paragraph); `fn23-fused-close` (Paragraph); `fn24-block-title` (Paragraph); `fn25-block-hide` (Paragraph); `fn26-block-bogus-arg` (Paragraph); `fn27-block-title-empty` (Paragraph); `fn28-leading-newline` (Paragraph); `fn29-leading-spaces` (Paragraph); `fn30-many-notes` (Paragraph); `fn31-block-then-more` (Newline, Paragraph); `fn32-adj-bibitem` (Paragraph); `fn33-adj-bibcite-before` (Paragraph); `fn34-adj-undefined-bibcite` (Paragraph); `fn35-adj-footnoteitem` (Paragraph); `fn36-div-wrapped` (Paragraph, Div); `fn37-list-wrapped` (List); `fn38-quote-wrapped` (Newline, Paragraph, Blockquote); `fn39-collapsible-wrapped` (Paragraph, Collapsible); `fn40-iftags-kept` (Paragraph); `fn41-iftags-hidden` (Paragraph); `fn42-brackets-in-body` (Paragraph); `fn43-double-closer` (Paragraph); `fn44-across-paragraphs` (Paragraph); `fn45-block-after-list` (List, Paragraph); `fn46-table-cell` (Table); `fn47-header-note` (Center); `fn48-no-notes` (Paragraph); `fn49-comment-around` (Paragraph); `fn50-bracket-prefix` (Paragraph); `fn51-underscore-closer` (Paragraph, Url); `fn52-sameline-code-close` (Paragraph).

### `footnoteitem` (49 excluded)
`fni-01-one` (Paragraph); `fni-02-two` (Paragraph); `fni-03-three` (Paragraph); `fni-04-four` (Paragraph); `fni-05-empty-one` (Paragraph); `fni-06-empty-mixed` (Paragraph); `fni-07-empty-ws` (Paragraph); `fni-08-all-empty` (Paragraph); `fni-09-bold-italic` (Paragraph, Strong, Emphasis); `fni-10-link` (Paragraph, Url); `fni-11-multiline` (Paragraph, Newline); `fni-12-paragraphs` (Paragraph); `fni-13-list-body` (Paragraph, List); `fni-14-blockquote-body` (Paragraph, Blockquote); `fni-15-div-body` (Paragraph, Div); `fni-16-code-body` (Paragraph, Rawold); `fni-17-html-special` (Paragraph); `fni-18-nested-footnote` (Paragraph); `fni-19-block-first` (Paragraph); `fni-20-block-middle` (Paragraph); `fni-21-block-last` (Paragraph); `fni-22-two-blocks` (Newline, Paragraph); `fni-23-block-with-tail` (Paragraph); `fni-24-no-block` (Paragraph); `fni-25-empty-block` (Paragraph); `fni-27-two-empty-blocks` (Paragraph); `fni-28-title` (Paragraph); `fni-29-title-empty` (Paragraph); `fni-30-title-special` (Paragraph); `fni-31-hide` (Paragraph); `fni-32-title-unquoted` (Paragraph); `fni-33-unterminated-note` (Paragraph); `fni-34-stray-close` (Paragraph); `fni-35-unterminated-then-good` (Paragraph, Newline); `fni-36-fused-close` (Paragraph); `fni-37-malformed-block` (Paragraph); `fni-38-malformed-opener` (Paragraph); `fni-39-uppercase` (Paragraph); `fni-40-with-bib` (Paragraph); `fni-41-bibcite-before` (Paragraph); `fni-42-undefined-bibcite` (Paragraph); `fni-43-dup-biblabel` (Paragraph, Url); `fni-44-note-in-div` (Paragraph, Div); `fni-45-note-in-quote` (Paragraph, Blockquote); `fni-46-note-in-list` (List); `fni-47-note-in-collapsible` (Paragraph, Collapsible); `fni-48-unicode` (Paragraph); `fni-49-repeated-marker` (Paragraph); `fni-50-block-in-div` (Paragraph, Div).

### `footnoteblock` (48 excluded)
`fnb-01-block-after-notes` (Paragraph); `fnb-02-block-before-notes` (Paragraph); `fnb-03-block-between-notes` (Paragraph); `fnb-04-no-block-autoappend` (Paragraph); `fnb-05-block-only-no-notes` (Paragraph); `fnb-06-no-notes-no-block` (Paragraph); `fnb-07-two-blocks` (Paragraph); `fnb-08-two-blocks-titles` (Paragraph); `fnb-09-two-blocks-empty-first` (Paragraph); `fnb-10-title-simple` (Paragraph); `fnb-11-title-empty` (Paragraph); `fnb-12-title-spaces` (Paragraph); `fnb-13-title-htmlspecial` (Paragraph); `fnb-14-title-singlequote` (Paragraph); `fnb-15-title-unicode` (Paragraph); `fnb-16-hide-true` (Paragraph); `fnb-17-hide-false` (Paragraph); `fnb-18-bogus-attr` (Paragraph); `fnb-19-title-and-hide` (Paragraph); `fnb-20-attr-singlequoted` (Paragraph); `fnb-21-note-bold` (Paragraph, Strong, Emphasis); `fnb-22-note-link` (Paragraph, Url); `fnb-23-note-multiline` (Paragraph, Newline); `fnb-24-note-paragraphs` (Paragraph); `fnb-25-note-list` (Paragraph, List); `fnb-26-note-code` (Paragraph); `fnb-27-note-nested-div` (Paragraph, Div); `fnb-28-empty-note-body` (Paragraph); `fnb-29-whitespace-note-body` (Paragraph); `fnb-30-unterminated-block` (Paragraph); `fnb-31-block-no-close-bracket` (Paragraph); `fnb-32-lowercase-variants-ignored` (Paragraph); `fnb-33-uppercase-block` (Paragraph); `fnb-34-block-extra-spaces` (Paragraph); `fnb-35-block-leading-space` (Newline, Paragraph); `fnb-36-adjacent-bibitem` (Paragraph); `fnb-37-adjacent-bibliography` (Paragraph); `fnb-38-adjacent-bibcite` (Paragraph); `fnb-39-literal-footnoteitem` (Paragraph); `fnb-40-block-then-bibcite-before-def` (Paragraph); `fnb-41-block-in-div` (Paragraph, Div); `fnb-42-block-in-quote` (Paragraph); `fnb-43-block-in-list` (Paragraph); `fnb-44-block-inline` (Paragraph, Newline); `fnb-45-block-tight` (Newline, Paragraph); `fnb-46-many-notes` (Paragraph); `fnb-47-block-then-note-then-title-block` (Paragraph); `fnb-48-block-with-newline-attr` (Paragraph).

### `bibitem` (27 excluded)
`b06-dup-then-third` (Paragraph); `b10-italic` (Emphasis); `b11-bold` (Strong); `b12-link` (Url); `b15-nested-code` (Tt); `b16-forward-cite` (Paragraph); `b17-backward-cite` (Paragraph); `b18-undefined-cite` (Paragraph); `b19-cite-only` (Paragraph); `b24-label-hyphen` (Paragraph); `b25-label-underscore` (Paragraph); `b29-unterminated` (Newline, Deflist, Paragraph); `b30-no-entries` (Paragraph); `b35-in-div` (Div); `b36-in-collapsible` (Collapsible); `b37-in-table` (Tableadv); `b38-adjacent-footnoteblock` (Paragraph); `b39-adjacent-footnote` (Paragraph); `b40-two-blocks` (Newline, Deflist, Paragraph); `b41-mixed-markup` (Strong, Emphasis, Tt); `b43-multiple-cites` (Paragraph); `b45-colon-in-body` (Url); `b46-long-label` (Paragraph); `b47-dup-nested-markup` (Emphasis, Strong); `b48-empty-block-cite` (Paragraph); `b49-span-inline` (Span); `b50-size-inline` (Size).

### `bibliography` (41 excluded)
`bib01-canonical-two` (Newline, Paragraph, Emphasis); `bib02-cite-after` (Paragraph); `bib03-cite-both-sides` (Paragraph); `bib04-duplicate-label` (Paragraph); `bib05-empty-block` (Paragraph); `bib07-alphabetical-order` (Paragraph); `bib08-citation-order` (Paragraph); `bib09-definition-order` (Paragraph); `bib10-two-blocks` (Newline, Deflist, Paragraph); `bib11-first-empty-second-full` (Newline, Deflist, Paragraph); `bib12-three-blocks` (Newline, Deflist, Paragraph); `bib21-unterminated` (Newline, Deflist, Paragraph); `bib22-unterminated-empty` (Paragraph); `bib23-name-case-uppercase` (Newline, Deflist, Paragraph); `bib24-name-case-title` (Newline, Deflist, Paragraph); `bib25-closer-uppercase` (Newline, Deflist, Paragraph); `bib26-opener-leading-space` (Newline, Deflist, Paragraph); `bib28-closer-trailing-spaces` (Paragraph); `bib29-closer-trailing-tab` (Paragraph); `bib30-closer-trailing-text` (Newline, Deflist, Paragraph); `bib31-nested-bibliography` (Paragraph); `bib32-overlap-bold-closer` (Newline, Paragraph); `bib33-inline-strong-em` (Paragraph, Strong, Emphasis); `bib34-inline-size-span` (Paragraph, Size, Span); `bib37-bibcite-in-value` (Paragraph); `bib38-definition-separators` (Paragraph); `bib39-label-charset` (Paragraph); `bib40-tab-prefix-label` (Paragraph); `bib41-next-line-value` (Paragraph); `bib42-invalid-line-residual` (Paragraph, Strong); `bib43-label-only-crossing` (Paragraph); `bib45-footnote-then-bibliography` (Paragraph); `bib46-bibliography-then-footnote` (Paragraph); `bib47-bibliography-inside-footnote` (Newline, Deflist, Paragraph); `bib49-bibliography-inside-list` (Newline, List); `bib50-item-inside-table` (Tableadv, Paragraph); `bib51-iftags-kept` (Paragraph); `bib52-iftags-closer-inside` (Paragraph); `bib53-tabview-residue` (Url); `bib55-dashes-typography` (Paragraph, Typography); `bib56-no-bibliography` (Paragraph).

### `bibcite` (59 excluded)
`bibc-01-undef-basic` (Paragraph); `bibc-02-undef-adjacent` (Paragraph); `bibc-03-undef-multi` (Paragraph); `bibc-04-def-backward` (Paragraph); `bibc-05-def-forward` (Paragraph); `bibc-06-def-two-cites-forward` (Paragraph); `bibc-07-def-two-cites-backward` (Paragraph); `bibc-08-def-dup-label` (Paragraph); `bibc-09-def-same-label-twice` (Paragraph); `bibc-10-def-case-mismatch` (Paragraph); `bibc-11-def-mixed-case-label` (Paragraph); `bibc-12-def-tabbed-cite` (Paragraph); `bibc-13-def-two-space` (Paragraph); `bibc-14-empty-body-bib` (Paragraph); `bibc-15-empty-bibliography` (Paragraph); `bibc-16-no-bibliography` (Paragraph); `bibc-17-two-bibliographies` (Newline, Deflist, Paragraph); `bibc-19-undef-empty-label` (Paragraph); `bibc-20-undef-no-space` (Paragraph); `bibc-21-undef-missing-close` (Paragraph); `bibc-22-undef-closer-only` (Paragraph); `bibc-23-undef-extra-word` (Paragraph); `bibc-24-undef-unicode` (Paragraph); `bibc-25-undef-hyphen` (Paragraph); `bibc-26-undef-underscore` (Paragraph); `bibc-27-undef-upper-marker` (Paragraph); `bibc-28-undef-bibcite-word` (Paragraph); `bibc-29-undef-pipe` (Paragraph); `bibc-30-undef-bold` (Strong, Paragraph); `bibc-31-undef-paragraph-break` (Paragraph); `bibc-32-undef-single-newline` (Newline, Paragraph); `bibc-33-undef-newline-after-bibcite` (Paragraph); `bibc-34-comment-in-label` (Paragraph); `bibc-35-comment-tag-in-label` (Paragraph); `bibc-36-code-owner` (Code); `bibc-37-raw-owner` (Raw, Paragraph); `bibc-38-heading-owner` (Heading); `bibc-39-list-owner` (List); `bibc-40-table-owner` (Table); `bibc-41-external-link-label` (Url, Paragraph); `bibc-42-internal-link-label` (Freelink, Paragraph); `bibc-43-escaped-cite` (Paragraph); `bibc-44-span-attr-owner` (Span, Paragraph); `bibc-45-footnote-adjacency` (Paragraph); `bibc-46-footnoteitem-adjacency` (Paragraph); `bibc-47-iftags-seam-off` (Paragraph); `bibc-48-iftags-seam-on` (Paragraph); `bibc-49-block-undef` (Paragraph); `bibc-50-block-score-undef` (Paragraph); `bibc-51-block-defined` (Paragraph); `bibc-52-anchor-adjacency` (Anchor, Paragraph); `bibc-53-div-adjacency` (Paragraph, Div); `bibc-54-nested-in-note` (Paragraph); `bibc-55-cite-in-bib-body` (Paragraph); `bibc-56-html-escape-label` (Paragraph); `bibc-57-residual-para` (Paragraph); `bibc-58-typography-adjacency` (Typography, Strong, Paragraph); `bibc-59-colon-in-body` (Paragraph); `bibc-60-multi-paragraph` (Paragraph).

### `xbattery` (39 excluded)
`x-fn-in-div` (Paragraph, Div, Newline); `x-fn-in-collapsible` (Paragraph, Collapsible); `x-fn-in-iftags-drop` (Paragraph); `x-fn-in-iftags-keep` (Paragraph); `x-fn-around-iftags` (Paragraph); `x-fn-in-include` (Newline, Paragraph); `x-fn-in-code` (Code, Newline); `x-fn-in-quote` (Blockquote, Paragraph); `x-fn-in-list` (List, Paragraph); `x-fn-block-before` (Newline, Paragraph); `x-fn-block-between` (Paragraph); `x-fn-block-after` (Newline, Paragraph); `x-fn-block-multiple` (Newline, Paragraph); `x-fn-block-none` (Newline, Paragraph); `x-fn-block-two-before` (Paragraph); `x-fn-block-empty` (Paragraph); `x-fn-block-title` (Paragraph); `x-fn-block-title-empty` (Paragraph); `x-bib-def-order` (Paragraph); `x-bib-unordered-labels` (Paragraph); `x-bib-cite-before` (Paragraph); `x-bib-cite-after` (Paragraph); `x-bib-dup-label` (Paragraph); `x-bib-undefined` (Paragraph); `x-bib-multi-block` (Deflist, Newline, Paragraph); `x-bib-title` (Paragraph); `x-bib-empty` (Paragraph); `x-bib-empty-body` (Paragraph); `x-mix-fn-bib` (Paragraph); `x-mix-bibcite-in-fn` (Paragraph); `x-mix-fn-in-bib` (Paragraph); `x-mix-blocks-interleaved` (Paragraph); `x-mix-bibcite-in-block` (Paragraph); `x-fn-nested-strong` (Paragraph, Strong, Emphasis); `x-bib-nested-markup` (Strong, Paragraph); `x-fn-unterminated` (Paragraph); `x-bib-unterminated` (Newline, Deflist, Paragraph); `x-fn-empty-body` (Paragraph); `x-bib-cite-malformed` (Paragraph).

### `audit` (7 excluded)
`a-fn-define` (Paragraph); `b-fn-empty-block` (Paragraph); `c-fn-new-number` (Paragraph); `d-bib-define` (Paragraph); `e-bib-cite-alone` (Paragraph); `f-bib-new` (Paragraph); `g-fn-bib-both` (Paragraph).

---

COMPLETE
