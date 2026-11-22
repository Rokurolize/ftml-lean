# Inventory — what ftml parses, what pins it, what is formalized

Measured 2026-11-19 on WSL ~/src/Rokurolize/ftml @ 8cb2757c2. Classification key: **L** = proven in Lean · **M** = model-checked (TLA+) · **E** = exhaustively enumerated on the real Rust code within stated bounds · **T** = tested only (corpus / integration / unit / proptest) · **N** = neither.

Headline: **L = 0 for the parser.** No Lean code exists in the ftml repo (the only Lean project in the house is lean-sql-opt, SQL rewrites, a different loop). Everything below that is not E/M is T.

## 1. The pipeline (src/lib.rs, src/parsing/mod.rs, src/preproc/mod.rs)

| Stage | Code | Class |
|---|---|---|
| Include expansion (pre-parse, text→text) | src/includes/ (mod, parse, quoted, include_ref, includer; grammar.pest) | **E** (bounded, see §4) + T |
| Preprocessing | src/preproc/ (typography, whitespace, comments, compatibility, parser_functions/{expression,literal}) | **E** for the seam-typography slice only; rest T |
| Tokenization | src/tokenizer.rs, src/parsing/lexer.pest, src/parsing/token/ | T |
| Parsing (tokens→SyntaxTree) | src/parsing/ (parser, rule/, paragraph/, collect/, token/, depth, inline_scope, wikidot_text, body_end, hidden_body, footnote, heading, …) | **E** for block-end closers and paragraph-stack no-panic only; rest T |
| Delayed / seam resolution | src/delayed.rs, src/delayed/{seam,toc,seam_equivalence} | **E** (seam slice) + T |
| Render (tree→HTML/text) | src/render/ (html, text, debug, null) | **M** for footnote/biblio/equation/tab walks; **E** (proptest) for MathML emission + highlighting; rest T |

Layouts: `Layout::Wikidot` and `Layout::Wikijump` (src/layout.rs). Equivalence target for this loop is the Wikidot layout semantics; the Wikijump layout is a second semantics wherever the tree or renderer branches on layout (notably ContainerType::html_tag, inline_scope, paragraph stack modes).

## 2. The AST the equivalence must be stated over (src/tree/)

- `Element<'t>` (src/tree/element/object.rs, ~50 variants): Container, Module, Text, Raw, Variable, Email, Delayed, ContentSeparator, Table, TabView, StandaloneButton, SocialButtons, EmbedVideo, Gallery, Anchor, AnchorName, Link, FileLink, Image, Audio, Video, List, DefinitionList, RadioButton, CheckBox, Collapsible, WikidotBlockFrame, TableOfContents, Footnote, FootnoteBlock, BibliographyCite, BibliographyBlock, User, Date, Color, Code, Math, MathInline, EquationReference, Embed, Html, Iframe, Include, Style, LineBreak, LineBreaks, ClearFloat, HorizontalRule, Partial. Note the Wikidot-compat state smuggled in variants (e.g. Collapsible's wikidot_label_spans / wikidot_block_open_elements / unfolded_tail_start, List's wikidot_explicit_block / wikidot_unclosed / wikidot_marker_head_spawn, FootnoteBlock's wikidot_wrappers): the expected-semantics AST must decide, per field, whether it is authored syntax or renderer-owned placement state.
- `ContainerType` (src/tree/container.rs, 23): Bold, Italics, Underline, Superscript, Subscript, Strikethrough, Monospace, Span, HeadingLabel, Div, Mark, Blockquote, Note, Insertion, Deletion, Hidden, Invisible, Size, Ruby, RubyText, Paragraph, Align(Alignment), Header(Heading).
- `Module<'t>` (src/tree/module.rs): Backlinks, Categories, Join, ListPages, Runtime, PageTree, Rate, Redirect, TagCloud (+ the full module rule set under src/parsing/rule/impls/block/blocks/module/). Modules are backend-evaluated, so parse-equivalence covers their head grammar and body capture only; their *evaluation* belongs to deepwell, out of this loop's scope unless the owner extends it.

## 3. Constructs implemented (parser rules)

- Block rules: 62 files in src/parsing/rule/impls/block/blocks/ — align (+4 directional), anchor, bibcite, bibliography, blockquote, bold, button, char, checkbox, code, collapsible, date, del, div, embed, embedaudio, embedvideo, equation-ref, file, footnote (+footnoteblock), gallery, hidden, html, ifcategory, iframe, iftags, image, include-elements, include-wikidot, ins, invisible, italics, later, lines, list ([[ul]]/[[ol]]/[[li]]), mark, math, media, module, monospace, note, paragraph, radio, raw, ruby, size, social, span, strikethrough, subscript, superscript, table, tabs (tabview), target, toc, underline, user. Plus the module sub-rules.
- Inline rules: ~44 in src/parsing/rule/impls/ — anchor, bibcite, blockquote (quoted lines), bold, center, clear-float, color, comment, dash, definition list, delayed, double-angle, email, entity, fallback, footnote-first, header, horizontal rule, inline delimiter ownership, italics, line break, line owner, link-anchor, link-single, link-triple (+transliteration), list (marker lines), math inline, monospace, page, raw (@@, @< >@), section marker, strikethrough, subscript, superscript, table (simple || tables), text, underline, underscore line-break, url, variable ({$...}).
- Cross-cutting machines (where the bugs have actually lived): block body-end scanning (verify_end_block / get_body_generic, src/wikidot_code.rs), paragraph gathering + ParagraphStack, inline-scope pairing (two-stage live model: source pairing, then libtidy-style re-nesting where span/size/color/ strikethrough all render as <span> — ruling 2026-11-04), list/blockquote/TOC depth processing (process_depths), include expansion, typography + seam resolution for suppressed blocks, parser functions ([[include]] variables, {$...}, literal regions).

## 4. What is already formalized (inputs from goal_81c535de1ec6)

All in-repo at verification/ + .claude/skills/verify-*/. None of it is Lean; all of it is bounded enumeration on the real code or TLA+ models of extracted steps. A pass means "findings equal the recorded known-findings file".

| Harness | Property | Bound / status |
|---|---|---|
| verify-block-end (E) | Closer + trailing blanks ≡ bare closer (P0–P2); nested same-name pairing = recorded-pairing.txt (P3, 8 rows) for code/math/footnote/collapsible/bibliography | 5 blocks × 4 contexts × 7 bodies × 5 blank variants × 3 line endings ≈ 1,980 parses; known findings: none |
| verify-include-expansion (E) | include() never panics; exact PageRef set; deletion-only when nothing inserted; padding follows surrounding line endings | All strings ≤5 tokens from an 18-token alphabet = 2,000,719 inputs × 4 includers; grammar of *which* text is an include explicitly NOT stated |
| verify-paragraph-stack (E) | No operation order panics ParagraphStack | All orders ≤5 of 17 ops, both modes (≤6 checked, same result); known findings: none. Output-tree *correctness* explicitly not covered |
| verify-process-depths (E) | process_depths: no panic, rows preserved once/in order, depth and list-type fidelity, no empty trees | ≤6 rows, depths 0..=3, 3 types = 3,257,437 inputs; PASS. Kani tried and abandoned (CBMC >9 min at 3 rows) — a direct warning for Lean/CBMC-style approaches on recursive Vec code |
| verify-seam-typography (E) | Typography is transparent across seams left by suppressed blocks | ≤5 items from 11 tokens + seam = 271,453 inputs; known findings REMAIN: 5 classes, all adjudicated against live evidence (evidence/wikidot-2026-11-01/02/05.json) as oracle artifacts with no render-level remainder |
| verify-ftml-render walk (M) | Footnote/biblio ref stacks pair enter/exit; legacy equation numbering assigned at the footnote-ref walk point; tabview nav assignment/lift discipline | 4 TLA+ models (EquationWalk, RefStacks, TabLift, TabNav) checked by TLC against extracted Rust steps; mutation-tested |
| verify-ftml-render emission (E) | sanitize_mathml emits only allowlisted tags/attrs, mismatched close stays escaped; highlight tokenize terminates, stays on char boundaries, covers source | proptest on the real private functions; mutation-tested |

## 5. Test evidence that acts as the spec today (all class T)

- Corpus: test/ — 64 categories, **2,797 cases**. Each case: input.ftml, tree.json (parse-only expectation), wikidot.html (live-shaped render), output.html / output.txt, errors.json where applicable. Category sizes show where live behavior has been fought over: blockquote 412, list 384, span 209, bold 153, table 148, iftags 144, footnote 118, tabview 116, strikethrough 97, color 87, anchor/div/link 79/79/79, iframe 44, italics 38, code 37, size 35, math/collapsible 34, monospace 31, underline 28, bibliography 26, paragraph 24, definition-list 21, heading/note 20, date 18, raw/image 18/17, subscript/ superscript 17/16, toc 14, module/user 13, align 12, embed/html/file 10/7/7, and a long tail of 1–4-case categories (include only 4 — thin, given §4's grammar gap).
- Integration: tests/ — 78 Rust files, mostly wikidot_*_syntax / *_ownership / *_boundaries suites naming the exact live-derived rule they pin (crossed closers, alias closers, inline-scope, 2568 crossed closers, scp-9506 and scp-8980 syntax, canonical_wikidot_source, include_grammar, include_variables, parser_functions_wikidot_syntax, …), plus performance/hang budgets and security regressions.
- Frozen pool: ~7,071 live-measured pages replayed on the VM (~/workspace/vm-replay/); this is render-level evidence, not parse-level: it can falsify a semantics claim about rendered output but does not directly give an AST.
- Fuzz: fuzz/fuzz_targets/public_pipeline.rs (notably never calls includes::include — the gap verify-include-expansion was built to close).

## 6. Classification summary

- **L (Lean-proven): nothing.** The backlog is the whole parser.
- **M (TLA+):** 4 render-walk machines only.
- **E (bounded exhaustive on real code):** block-end closers, include expansion (minus grammar), paragraph-stack no-panic, process_depths, seam typography (with 5 adjudicated remainder classes), MathML emission, highlighting.
- **T (tested only):** tokenization, every block/inline rule's *semantic* correctness (as opposed to the E-covered safety properties), paragraph-stack output correctness, module head grammar, parser functions, tables, tabs, lists beyond process_depths' slice, links, images, all render except the M/E slices.
- **N (neither pinned nor formalized, known):** the include *grammar* itself (which ranges count as include blocks — the E harness deliberately never states it); variable substitution results in includes (replace_variables); Layout::Wikijump branches of most rules (the corpus is Wikidot-first); any construct where tree.json pins exist but no wikidot.html was ever live-verified (PagePreview-route evidence is provisional per ftml AGENTS.md).
