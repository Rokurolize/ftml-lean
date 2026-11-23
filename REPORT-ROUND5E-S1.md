# REPORT-ROUND5E-S1 — round-5e confirmation hunt, unit S1, cross-rule seams around REFCORR8/9/10/11

## Assignment and read basis

Unit R5E-S1 hunted cross-rule seams around the REFCORR8/9/10/11 corrections on the post-REFCORR11, snapshot-35 repaired ground, canonical base e53e7234, under COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5E.md read in full. Read basis: all six conformance-refcorr11 correction records (C0DROP, CONCATLINES, FREELINK, GENERAL-CONTROL, IMAGE, MATH-ABSENT-TYPE), RECONCILIATION.md, PINS.md and R11-GATE-RESULT.md, and the corrected PHP sources read firsthand by diff against their before companions: List.php, Footnote.php, Bibitem.php, Bibliography.php, Freelink.php, Concatlines.php, Paragraph.php, Image.php, Math.php, Mathinline.php, Tighten.php and harness/batch.php. The mirror was read at ListRules.lean, NotesRules.lean, Inline3Rules.lean, LinkRules.lean, ParaRules.lean, NextRules.lean and FormRawRules.lean. No ftml edit, cargo, Lean invocation, git identity override or git stash; every write stayed under coord-units/R5E-S1/. The four-adjacent U+FFFD digit class and Stage 2/serving surfaces were treated as standing owned or cleared classes, not re-litigated. The one re-entry of a previously confirmed bare shape (S01) carries the named changed REFCORR11 mechanism in its ledger row.

## Ledger table

All 22 suspicions were written to LEDGER.md before any live probe; cases.jsonl was derived from its SOURCE lines by gen_cases.py so identities could not drift. The full table with each pre-probe CONFIRM/CLEAR prediction, final verdict and evidence coordinate is in the conformance file LEDGER.md and its generated LEDGER-TABLE.md; the verdict summary is repeated here.

| suspicion | family | verdict | evidence |
|---|---|---|---|
| S01 s01-list-ft-gap-footnoteblock | list/notes | CLEARED | ref row 1; capture html_sha256 7afe4c9a2813a11b6fbcb30500fbc51a3e4c951479d6f840726225f3f04583c0 |
| S02 s02-list-ft-gap-ff-body | list/notes/C0 | CLEARED | ref row 2; capture b56c3285f3a1f0ba91217fb79e1d864638a06aff4269d71138f9576a50fe7ac5 |
| S03 s03-list-ft-gap-two-footnotes | list/notes | CLEARED | ref row 3; capture 3763dff03cd085752ba438e312a5ee7fa9e8a6a8658cca705ba045b090387e97 |
| S04 s04-list-nested-failed-closer-ft | list/notes | CONFIRMED | ref row 4; capture d6d9a12b48675fc0960c5b6e57fec2ba1a206ccbe143b9c5b68ee0dab1e4fb3d; first_diff=14 |
| S05 s05-fl-zwsp-described | freelink | CLEARED | ref row 5; capture 0e36d57f505020ddf88415b2fceb54d66c8a702572ccc4b7f4ffaf3be3e2d65a |
| S06 s06-fl-wj-described | freelink | CLEARED | ref row 6; capture 0e36d57f505020ddf88415b2fceb54d66c8a702572ccc4b7f4ffaf3be3e2d65a |
| S07 s07-fl-lead-in-described-label | freelink | CLEARED | ref row 7; capture 75cbaa74d8e2d3c53ac1f6cd9540cf4e26e52844c70f0b615911eee43eb275af |
| S08 s08-fl-multihash-described | freelink | CLEARED | ref row 8; capture 4489601b4d170249bd107ad1931aae2a052335ceeb2a873854cd4e923460b2f3 |
| S09 s09-ff-footnote-in-quote-doublelf | notes/contain/C0 | CLEARED | ref row 9; capture b58533957aa1b33bef795bf0bf2a47a4e8be2e2913d8e8ce99f14cf29a9517a1 |
| S10 s10-esc-footnote-nolf | notes/C0 | CONFIRMED | ref row 10; capture 12735a85d0fa75984f4c4430e16932bf36ee8d1c67b564f935b2df0a264eb1f9 |
| S11 s11-esc-footnote-doublelf | notes/C0 | CONFIRMED | ref row 11; capture 754824ec1ff17c87bcd9630ae67e55adb88a3c878c4c4edc7f33e8c4a2d26842 |
| S12 s12-ff-bibitem-in-quote | notes/contain/C0 | CONFIRMED | ref row 12; capture db9f2ad79d6af818f51deb6e7efe157f43d784136bdfcbd38e4945ea224da2cb; first_diff=90 |
| S13 s13-contdiv-in-quote | contain/para | CLEARED | ref row 13; capture 6f2026c4b3a3b0e5db405885e4d84c53ebb7c466b07b5dec91b5f8daf817ca11 |
| S14 s14-contdiv-in-listitem | list/contain/para | CLEARED | ref row 14; capture f858e72c9a91409850a433c3ffd15474bd437f48598572295637385f4e420675 |
| S15 s15-contdiv-in-footnote | notes/contain/para | CLEARED | ref row 15; capture 5d9e92fa34d11457a16142746757abd08da60d349b87cfd74b4c4ca94990b4ed |
| S16 s16-contdiv-lead-freelink | contain/freelink | CLEARED | ref row 16; capture c57b41511fc6d9c7b02419b10814428ab84418baaeb16986c9fe266898a83ac2 |
| S17 s17-image-link-trailws-caption | image/para | CLEARED | ref row 17; capture 0e7ab550195dc723240042b1b170ddde686c9e5c1dfdc7344e6968b59ae96ad3 |
| S18 s18-image-link-trailws-in-div-caption | image/contain | CLEARED | ref row 18; capture 84bb70b2820bfe23a3e479da4e6fdb97c9998c52fc2b5afae1989b1218c68a2f |
| S19 s19-image-link-multitab-trailws | image | CLEARED | ref row 19; capture c67ad9e3f08607b257633913c8db5b4f1803863370b509d08afec2895a843971 |
| S20 s20-math-type-plus-mathinline | math | CLEARED | ref row 20; capture cb67cc9d1de7124fcbdb37ac23fb0f4c9dac0f9f2dc044e9aafb81737d40f6dc; PNG-stub serving surface, token type align matches live |
| S21 s21-math-absent-inline-date | math | CLEARED | ref row 21; capture 7167e37b2199f9428acf078104c809217dc7306c727ac651259f30c88cb95a80; PNG-stub serving surface, token type equation matches live |
| S22 s22-fl-lead-inside-mathinline | math/freelink | CLEARED | ref row 22; capture 8119dd8e254d13e759b9ee65895322c26e3e6e9fd2c600c47fb9e0ed1270506a |

## Probe record

Page prefix `muse-probe-round5e-s1-` on sandbox-for-codex; 22 pages created and 22 captured, all 22 valid, stable and saved-source-matching, 0 untestable; every page left in place and listed in map.json and CAPTURE-INDEX.md. The standard create tool paced at 1.5 seconds and absorbed deterministic AMC `try_again` responses with its verify-then-retry path; all 22 saves verified on read-back and no fallback AMC path was needed. The canonical PHP render exited 0 with 22 rows and zero stderr bytes. A separate tokens-mode render of S20/S21 (math-cases.jsonl / math-tokens.jsonl, zero stderr) supplied the rule-level Math type used to clear those two serving-surface candidates. Hashes (sha256): cases.jsonl 354a05ac9ecf3910630ccee821bdf7cc7b9662f183a24f958b3511b67ff62aa2; map.json 27494e448dc09d7780bdcb4c724cde3936d536a29b9a40d447658f10d561d041; captures.json 4c237a1bf18b3c0db9c144325cbd2e3f690bac70caba8d98c1fd510a98fe11f9; ref.jsonl 64c1f8fd675b2151ecd7452ff96972469e7b5cca3aa103d991c0dbc1fa6e7d51; ref.err e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 (empty); comparison.json 9e70680d2681eb96b35dc206c4239628fd79b182fa79fa30241b534b175e5f63; verdicts.json bc11a31a266826697dd6a5d01cff5b155a982764ac7c401cf6f814f954d7c21b; LEDGER.md 377947f8364e0f473243ede0afe2454faf727bf12a5d4d725535054e1a468228.

## Confirmed divergences

C-R5E-S1-1 (S04, capture `muse-probe-round5e-s1-s04-list-nested-failed-closer-ft`, ref.jsonl row 4): on a mixed-tag nested list with a failed outer closer, a collected footnote and a post-closer raw-case item, live emits two sibling items `<li>outer</li><li>in…` while the reference keeps `<li>outer<ul><li>in…`. The owning file is List.php REFCORR11 generalized C1 adjacency (lines 489-520); the mirror consequence is uncertain pending one elaborated source. Full record CANDIDATE-C-R5E-S1-1.md.

C-R5E-S1-2 (S10 and S11, captures `muse-probe-round5e-s1-s10-esc-footnote-nolf` and `muse-probe-round5e-s1-s11-esc-footnote-doublelf`, ref.jsonl rows 10-11): live retains ESC 0x1B in the footnote footer body (`A\x1bB`, `A\x1b\n<p>B</p>`) while the reference drops it (`AB`, `A\n<p>B</p>`). This resolves the deferred ESC-width caveat. The owning file is Footnote.php:66 and the mirror transcription is NotesRules.lean:209 `isLiveDroppedControl`. Full record CANDIDATE-C-R5E-S1-2.md.

C-R5E-S1-3 (S12, capture `muse-probe-round5e-s1-s12-ff-bibitem-in-quote`, ref.jsonl row 12): live emits `[[bibitem k]]AB[[/bibitem]]` while the reference emits `[[bibitem k]]A B[[/bibitem]]` because Bibliography.php:84 folds the form feed to a space before Tighten.php:99 can drop it. The mirror transcription is NotesRules.lean:531 `collapseWs` with FormRawRules.lean:229 `isWsByte` including byte 12. Full record CANDIDATE-C-R5E-S1-3.md.

## Cleared and untestable

Eighteen suspicions CLEARED, zero UNTESTABLE. Reason categories: byte-identical after the standard probe.norm and campaign frame mask (S02, S03, S05-S09, S22); identical rule-level signature with only Stage 2 tidy or owned wdfiles host frame differences (S01, S13-S19); and the owned harness PNG-stub serving surface with token-level type agreeing with the live equation envelope (S20, S21). Substantive cleared groups: four Freelink described-link lead shapes all serve href /x with the correct label, two of them exercising the REFCORR11 U+200B and U+2060 Cf leads through the pipe branch; three continued-div-in-container shapes and one Freelink-lead shape clear on identical rule-level signatures despite Stage 2 wrapper differences; three Image trailing-whitespace caption shapes clear with the trimmed href and identical attributes; three footnote/list adjacency shapes and one quote-nested footnote shape clear after the frame mask. No prior confirmed minimal shape was re-run as-is except S01, which carries the REFCORR11 generalized-adjacency changed mechanism and cleared.

## Verdict

THREE CONFIRMED: C-R5E-S1-1, C-R5E-S1-2 and C-R5E-S1-3, from 22 suspicions raised and probed, 22 valid/stable/source-matching captures, 4 confirmed suspicions deduplicated into 3 candidate classes, 18 cleared and 0 untestable. Round 5e cannot close package 2.1 by evidence until these three seams are corrected and a fresh full confirmation pass returns zero. Operational caveat: the Math render-mode error block versus live equation envelope is the documented no-op PNG-stub surface and was cleared on tokens-mode evidence; the C-R5E-S1-1 mirror consequence is explicitly uncertain and needs one wrapped elaboration.
