# REPORT-ROUND5G-S1 — round-5g confirmation hunt, cross-rule seams around the REFCORR8/9/10/11/12/13 corrections

Unit R5G-S1 hunted fresh cross-rule seams on the post-REFCORR13, snapshot-37 published ground, canonical base e53e7234, under COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5G.md read in full. Eighteen suspects were raised before any probe from firsthand reading of the REFCORR13 Freelink, List, footnote-break and Math corrections, the AGY2 D08/D10/D11/D12/D13/D14 corrections, the REFCORR13-GENERAL attribute rule and the corrected PHP sources for Freelink, Footnote, Footnoteitem, Math, Button, Tabview, List, Div, Span and Image and their mirror definitions. Each suspicion combines two or more corrected mechanisms or is a third-order neighbor of a generalized rule; no previously confirmed minimal shape was re-run as-is. The four-adjacent U+FFFD digit class, the parity Email index family, Stage 2 frames and serving surfaces were treated as standing owned or cleared classes. All writes are under coord-units/R5G-S1/.

Pages were created and captured on sandbox-for-codex with prefix `muse-probe-round5g-s1-`, paced at 1.5 seconds, fetched once with double-fetch and cached, and left in place; all 18 are listed in map.json and CAPTURE-INDEX.md. All 18 captures are valid, stable and saved-source-matching, zero untestable. The canonical PHP harness render exited 0 with 18 rows and zero stderr bytes. Source sha256 values are in captures.json; frame-masked comparison is in comparison.json and verdict adjudication in verdicts.json. Two capture ids were reclassified from automated CANDIDATE to CLEARED on rule-level review: `muse-probe-round5g-s1-s11-math-multistar` (both sides accept the star-stripped align environment; the live math-equation stub versus the reference LatexRenderer PNG failure block is the named external LatexRenderer serving boundary of AGY2 D08) and `muse-probe-round5g-s1-s17-img-esc-class` (the class byte value a<ESC>b is identical; only the wdfiles host and page path differ, an owned serving surface).

## Confirmed divergences

C-R5G-S1-1 (suspicion S03, capture `muse-probe-round5g-s1-s03-fl-esc-in-url`). Source `[[[https://example.com/a\u001bb]]]`. Live serves href `https://example.com/a%1Bb`; the reference serves href `https://example.com/a\x1bb` with a raw ESC byte. The display text is identical after the mask; the href is a rule-level value. Owning reference file `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Freelink.php` lines 67-76, whose REFCORR13 bytewise encoder rewrites only bytes >= 0x80 and never an ASCII C0 control, unlike the REFCORR13-GENERAL Anchor verbatim-href encoder that widened to every non-printable byte. Mirror consequence inferred by source reading: `lean-ftml/LeanFtml/ServingRules.lean::renderFreelink` lines 355-357 uses `percentEncodeNonAscii` and needs the same widening. Full record in conformance-round5g-s1/CANDIDATE-C-R5G-S1-1.md.

C-R5G-S1-2 (suspicion S13, capture `muse-probe-round5g-s1-s13-btn-settags-space0`). Source `[[button set-tags text=" 0 "]]`. Live label is `0`; the reference label is ` 0 ` with both authored spaces. The guard, href, onclick and class attributes are identical; the label is a rule-level value. Owning reference file `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Button.php` line 127, which escapes the text without a trim, while live trims the label after the D10 truthy guard. Mirror consequence inferred by source reading: `lean-ftml/LeanFtml/InteractiveRules.lean::renderButton` lines 735-758 emits `htmlSpecialCharsCompat txt` with no trim and needs `phpTrimBytes` on the label. Full record in conformance-round5g-s1/CANDIDATE-C-R5G-S1-2.md.

## Cleared and untestable

Sixteen suspicions CLEARED and zero UNTESTABLE. Fourteen cleared on byte equality after the standard probe.norm and campaign frame mask (S01, S02, S04, S05, S06, S07, S08, S10, S12, S14, S15, S16, S18 and S09 which also matched at rule-level signature); two cleared on owned serving surfaces after manual adjudication (S11 external LatexRenderer math stub, S17 wdfiles image host). Substantive cleared groups: the REFCORR13 ESC and U+2065 lead members do not extend ahead of external-URL detection (S01/S02), and they compose correctly with the /#/ route, empty-pipe fallback and uniform multi-hash guard (S04/S05/S06); the REFCORR13 footnote break witness and whole-tail list hoist compose correctly in preserved literal tails (S07/S08/S09); the AGY2 Math allowlist rejects ESC-bearing and digit-bearing names and the star-strip accepts multi-star names on both sides (S10/S11/S12); the D10/D11 falsy guards and the REFCORR13 attribute D-set agree on ESC-only and exact-zero forms (S14/S15/S16/S18/S17).

## Evidence-only adoption payload

Copy exactly REPORT-ROUND5G-S1.md and conformance-round5g-s1/ from coord-units/R5G-S1/ into canonical; no source files. sha256 for every payload file:

188c23ce7bfff6380a2986d3157f25192ed530ab1ccad2b732e2b7ca02ae5b01  conformance-round5g-s1/CANDIDATE-C-R5G-S1-1.md
4c4dcfcbedd1d1184ab9b4cdfbfe8d2942efa8de6a24f97477411761d6128d38  conformance-round5g-s1/CANDIDATE-C-R5G-S1-2.md
979d4202098da645b2b810ee9dc99af6e9a67d1f69204a4cac1cf24c1b2abe91  conformance-round5g-s1/CAPTURE-INDEX.md
2b25611e3c43305d84dcc856a074eae7f3d0d8a0a094f712f432944bfba44cb2  conformance-round5g-s1/captures.json
fc3181e1f5b40a351f0883030563bf2bfc7f514e86ecdbff49fd88b21e9c4db3  conformance-round5g-s1/cases.jsonl
29f01938b3cff62be2369c26920eb47ab09b31dd13834ebd891d1d7a587cd324  conformance-round5g-s1/comparison.json
f5550d79ad41b09db3b6949de83a55edbd8479a19f8e6f5fece16e0180de4d62  conformance-round5g-s1/LEDGER.md
34318fc1bffd78d4d01928f86323eafd4768bcc14780393f24f2ebf12336c414  conformance-round5g-s1/LEDGER-TABLE.md
930eff1df4e38e913ad25ea1e11379c39c55422e02a9f908e074ef1de0730b63  conformance-round5g-s1/map.json
3e1267c8dff817c7a7192701f28bffc1d2f42a41a1fea8263612e14822210db9  conformance-round5g-s1/MIRROR-CONSEQUENCE.md
e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855  conformance-round5g-s1/ref.err
faaf7b1b382b781b7abe7bc52a8296bad1181542e298fa164d9cccc45dd6fa10  conformance-round5g-s1/ref.jsonl
3eeed1d5576d26715ed30d971cdc06573c60ec8720bd12b51840d97866f5a67c  conformance-round5g-s1/verdicts.json

## Verdict

TWO CONFIRMED: C-R5G-S1-1 and C-R5G-S1-2. Eighteen suspicions raised and probed, 18 valid/stable/source-matching captures, 2 confirmations, 16 cleared and 0 untestable. Package 2.1 cannot close by evidence on this round; the two seams need correction and a fresh full pass. Operational caveats: both mirror consequences are inferred by source reading and need wrapped elaborations; the AMC save path absorbed `try_again` responses but every page verified on read-back; the external LatexRenderer stub and wdfiles host are owned serving surfaces cleared on explicit masks.
