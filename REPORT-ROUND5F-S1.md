# REPORT-ROUND5F-S1 — round-5f confirmation hunt, unit S1, cross-rule seams around REFCORR8/9/10/11/12

## Assignment and read basis

Unit R5F-S1 hunted cross-rule seams around the REFCORR8/9/10/11/12 corrections on the post-REFCORR12, snapshot-36 published ground, canonical base e53e7234, under COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5F.md read in full. Read basis: conformance-refcorr12/CORRECTION-REFCORR12-{FREELINK,GENERAL,LIST,NOTES-CONTROL}.md and CORRECTION-R12A-{DIV,IMAGE,SPAN}.md plus VERDICT.md, and the corrected PHP sources read firsthand by diff against their before companions: Freelink.php, Div.php, Span.php, Image.php, List.php, Footnote.php, Bibitem.php, Bibliography.php, Tighten.php, Parse.php, Render/Xhtml/{Div,Span,Freelink}.php and harness/batch.php. The mirror was read at LinkRules.lean, ContainRules.lean, InteractiveRules.lean, ParaRules.lean, NotesRules.lean and ListRules.lean. No ftml edit, cargo, Lean invocation, git identity override, git stash or canonical write; every write stayed under coord-units/R5F-S1/. The four-adjacent U+FFFD digit class, the parity Email index family, Stage 2 frames and serving surfaces were treated as standing owned or cleared classes, not re-litigated. No previously confirmed minimal shape was re-run as-is; each of the 18 suspicions is a fresh combination of corrected mechanisms or a third-order neighbor.

## Ledger table

All 18 suspicions were written to LEDGER.md before any live probe; cases.jsonl was derived from its SOURCE lines by gen_cases.py so identities could not drift. The full table with each pre-probe CONFIRM/CLEAR prediction, final verdict and evidence coordinate is in LEDGER-TABLE.md and in the conformance copy of LEDGER.md.

| suspicion | family | verdict | evidence |
|---|---|---|---|
| S01 s01-fl-astral-cf-lead | freelink | CLEARED | ref row 1; capture html_sha256 (see CAPTURE-INDEX.md) |
| S02 s02-fl-tag-cf-lead | freelink | CLEARED | ref row 2 |
| S03 s03-fl-ufff9-cf-lead | freelink | CLEARED | ref row 3 |
| S04 s04-fl-cf-route-described | freelink | CLEARED | ref row 4 |
| S05 s05-fl-cf-multihash | freelink | CLEARED | ref row 5 |
| S06 s06-fl-u2028-lead | freelink | CLEARED | ref row 6 |
| S07 s07-div-attr-esc | contain/notes | CONFIRMED | ref row 7; capture d88f3e6ef211544782d1f1bbc6a0babe2a387bd2b5b4638a82ce941694b9739f |
| S08 s08-div-attr-del | contain | CONFIRMED | ref row 8; capture 93fad04fe2d3a1a8c110226caee8aec8b51faacdb7d21760f5ffb7844d0a3125 |
| S09 s09-span-data-trailws | contain/inline | CONFIRMED | ref row 9; capture 0f7390135f0d06a0d999559c8fc525321ffe942545731e7f007ee97cbe5cd46f |
| S10 s10-span-class-trailws | contain/inline | CONFIRMED | ref row 10; capture 73290068b81ad4e7059a0ca0192897f8597f76d4dbcbed46b598c55c6ae46bf0 |
| S11 s11-span-ph-data-trailws | contain/inline | CLEARED | ref row 11; Stage 2 inter-token whitespace frame |
| S12 s12-image-title-esc | image/notes | CLEARED | ref row 12; owned wdfiles-host serving surface |
| S13 s13-image-class-ff | image/notes | CONFIRMED | ref row 13; capture 1068c5ff1677282bd1390e09ba3a59c3f0d1c14027478fa79bb1ff2f1a032dbe |
| S14 s14-list-trail-fl-cf | list/freelink | CLEARED | ref row 14 |
| S15 s15-list-trail-esc-footnote | list/notes | CLEARED | ref row 15 |
| S16 s16-list-lower-nested-rawcase | list/contain | CLEARED | ref row 16 |
| S17 s17-bibitem-esc | notes | CLEARED | ref row 17 |
| S18 s18-footnote-nel | notes/freelink | CLEARED | ref row 18 |

## Probe record

Page prefix `muse-probe-round5f-s1-` on sandbox-for-codex; 18 pages created and 18 captured, all 18 valid, stable and saved-source-matching, 0 untestable; every page left in place and listed in map.json and CAPTURE-INDEX.md. The standard create tool paced at 1.5 seconds absorbed deterministic AMC `try_again` responses through its verify-then-retry path; all 18 saves verified on read-back and no fallback AMC path was needed. The canonical PHP render exited 0 with 18 rows and zero stderr bytes. Hashes (sha256): cases.jsonl b15bf667e061353662711bbdcf7467771d83e41d4130bb24d79af2bff21f92f9; map.json 9da4c6185c4c4c02d6cdb3eeaee471c9427d635a8f00f5d8975e980021a5e83b; captures.json c7059f5218b054f9eb048324b1e5633d4f3b83273e0c4ca99b4260583afe0bf6; ref.jsonl 1e485de18984e8c20c5a52f7d0421fdcb409cf49e1dc07a9d7043a7e91ea12a4; ref.err e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 (empty); comparison.json b57e8cfd8142afa725f11d41ce1a549e3b0c5e7f2ea6e88ca0b24b22a92f8e44; verdicts.json 17af3c5f1a093e36549b049d0152f4fdd44e9189958b2ba48b8d9f82bd94eee7; LEDGER.md 980cc08c2047f67d63f1cc0061f7fdb789ece9045ae83723b8b6ddd35fea1f8e.

## Confirmed divergences

C-R5F-S1-1 (suspicions S07 and S08, captures `muse-probe-round5f-s1-s07-div-attr-esc` html_sha256 d88f3e6ef211544782d1f1bbc6a0babe2a387bd2b5b4638a82ce941694b9739f and `muse-probe-round5f-s1-s08-div-attr-del` html_sha256 93fad04fe2d3a1a8c110226caee8aec8b51faacdb7d21760f5ffb7844d0a3125, ref.jsonl rows 7-8): live emits `<div type="A\x1bB">` and `<div data-x="A\x7fB">` retaining ESC 0x1B and DEL 0x7F, while the reference emits `<div type="AB">` and `<div data-x="AB">`. Owning file `ref-php/text-wiki/Text/Wiki/Parse/Default/Div.php::normalizeValue` lines 57-72, specifically the wide C0/DEL drop at line 58; mirror transcription `ContainRules.lean::normalizeValue` line 582. Inferred by source reading, no elaboration. Full record CANDIDATE-C-R5F-S1-1.md.

C-R5F-S1-2 (suspicions S09 and S10, captures `muse-probe-round5f-s1-s09-span-data-trailws` html_sha256 0f7390135f0d06a0d999559c8fc525321ffe942545731e7f007ee97cbe5cd46f and `muse-probe-round5f-s1-s10-span-class-trailws` html_sha256 73290068b81ad4e7059a0ca0192897f8597f76d4dbcbed46b598c55c6ae46bf0, ref.jsonl rows 9-10): live emits `<span data-x="x">b</span>` and `<span class="c">b</span>` after normalizing the authored leading and trailing W run, while the reference emits the raw `<span data-x="  x  ">` and `<span class="  c  ">`. Owning file `ref-php/text-wiki/Text/Wiki/Parse/Default/Span.php::process` lines 109-129, which never calls the normalizer despite the REFCORR12-GENERAL one-rule claim; mirror `ContainRules.lean::spanProcess` line 273 and `InteractiveRules.lean::spanAttrFragment` lines 974-981. Inferred by source reading, no elaboration. Full record CANDIDATE-C-R5F-S1-2.md.

C-R5F-S1-3 (suspicion S13, capture `muse-probe-round5f-s1-s13-image-class-ff` html_sha256 1068c5ff1677282bd1390e09ba3a59c3f0d1c14027478fa79bb1ff2f1a032dbe, ref.jsonl row 13): live emits `class="thick"` with the interior form feed discarded, while the reference emits `class="thi\x0cck"` (masked `class="thi ck"`). Owning file `ref-php/text-wiki/Text/Wiki/Parse/Default/Image.php` lines 225-230, which trims only a trailing W run from the technical keys; mirror `ParaRules.lean::imageTrimAttr` lines 286-288. Inferred by source reading, no elaboration. Full record CANDIDATE-C-R5F-S1-3.md.

## Cleared and untestable

Thirteen suspicions CLEARED, zero UNTESTABLE. Reason categories: byte-identical after the standard probe.norm and campaign frame mask (S01-S06, S14-S18); identical rule-level signature with only the owned Stage 2 inter-element whitespace frame (S11); and the owned wdfiles-host serving surface with an identical ESC-bearing title (S12). Substantive cleared groups: six Freelink lead/route/hash siblings (astral Cf, tag Cf, U+FFF9, Cf-with-route, Cf-with-multihash and U+2028) all match the reference after the general Cf/White_Space predicate; five list/notes cross-mechanism seams (literal-tail freelink, ESC footnote with footnoteblock hoist, lowercase nested raw-case discriminator, bibitem ESC, footnote NEL) clear on identical rule-level signatures after the frame mask. No previously confirmed minimal shape was re-run as-is.

## Verdict

THREE CONFIRMED: C-R5F-S1-1, C-R5F-S1-2 and C-R5F-S1-3, from 18 suspicions raised and probed, 18 valid/stable/source-matching captures, 5 confirmed suspicions deduplicated into 3 candidate classes, 13 cleared and 0 untestable. Round 5f cannot close package 2.1 by evidence until these three seams are corrected and a fresh full confirmation pass returns zero. Operational caveats: all mirror consequences are inferred by source reading and need wrapped elaborations; the AMC save path absorbed `try_again` responses but every page verified on read-back; the image src host and Stage 2 inter-token space are owned surfaces and were cleared on explicit masks.
