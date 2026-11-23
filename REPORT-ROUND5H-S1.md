# REPORT-ROUND5H-S1 — round-5h confirmation hunt, cross-rule seams around the REFCORR8/9/10/11/12/13/14 corrections

Unit R5H-S1 hunted fresh cross-rule seams on the post-REFCORR14, snapshot-38 published ground, canonical base e53e7234, under COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5H.md read in full. Sixteen suspicions were raised before any probe from firsthand reading of the corrected PHP sources for Freelink (the REFCORR12 general Cf+White_Space lead, the REFCORR13 U+2065 and ESC extension, the REFCORR11 multi-hash guard, the REFCORR10 /#/ route peel, the REFCORR13 empty-pipe fallback and non-ASCII-only href encoder), Anchor (the REFCORR13-GENERAL verbatim-href non-printable encoder, REFCORR12 data-* lowercasing, REFCORR9 u- shell and REFCORR13 discarded-D set), Div/Span/Image attribute rules, Button (REFCORR13 D10 isset guard and falsy default), Tabview (REFCORR13 D11 falsy title), Footnoteitem (REFCORR13 separator and break witness), Math (AGY2 D08 star strip and allowlist) and Raw (REFCORR14 threshold two and newline-free preOk consultation), plus their mirror definitions. Each suspicion combines two or more corrected mechanisms or is a distinct third-order sibling with a changed-mechanism reason; no previously confirmed minimal shape was re-run unchanged. The four-adjacent U+FFFD digit class, the parity Email index family, Stage 2 frames and all serving surfaces were treated as standing owned or cleared classes. All writes are under coord-units/R5H-S1/.

Pages were created and captured on sandbox-for-codex with prefix `muse-probe-round5h-s1-`, paced at 1.5 seconds, fetched once with double-fetch and cached, and left in place; all 16 are listed in map.json and CAPTURE-INDEX.md. All 16 captures are valid, stable and saved-source-matching, zero untestable. The canonical PHP harness render exited 0 with 16 rows and zero stderr bytes. Source and html sha256 values are in captures.json; frame-masked comparison is in comparison.json and verdict adjudication in verdicts.json. Six capture ids were adjudicated CONFIRMED on rule-level review; the remaining ten are CLEARED. No cleared row depended on a serving-surface mask except the tabview script host and random id, which were explicitly separated from the confirmed label value.

## Confirmed divergences

C-R5H-S1-1 (suspicion S01, capture `muse-probe-round5h-s1-s01-fl-url-frag-ctl`). Source `[[[https://ex.test/a\u0001b#sec|L]]]`. Live serves href `https://ex.test/ab#sec`, the reference serves href `https://ex.test/a\x01b#sec`; the label L and the retained `#sec` fragment are identical, so the rule-level value that differs is the interior SOH byte. Owning reference file `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Freelink.php` line 68, whose non-ASCII-only bytewise encoder passes the ASCII control through while live drops it. Mirror `ServingRules.lean::renderFreelink` lines 355-357 and `InlineSimpleRules.lean::percentEncodeNonAscii` lines 65-67 transcribe the same narrowing; consequence inferred by source reading. Full record conformance-round5h-s1/CANDIDATE-C-R5H-S1-1.md.

C-R5H-S1-2 (suspicion S02, capture `muse-probe-round5h-s1-s02-fl-star-url-esc`). Source `[[[*https://ex.test/caf\u00e9\u001b|L]]]`. Live serves href `https://ex.test/caf%C3%A9%1B` with target=_blank, the reference serves href `https://ex.test/caf%C3%A9\x1b` with the same target; the trailing ESC byte is the rule-level difference. Owning reference file `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Freelink.php` line 68. Mirror `ServingRules.lean::renderFreelink` lines 355-357 needs the same non-printable widening; consequence inferred by source reading. Full record conformance-round5h-s1/CANDIDATE-C-R5H-S1-2.md.

C-R5H-S1-3 (suspicion S05, capture `muse-probe-round5h-s1-s05-img-src-ctl`). Source `[[image src="https://ex.test/a\u001bb.png" alt="x\u001by"]]`. Live emits an img whose src carries `%1B`, the reference the raw ESC byte; the alt value keeps the ESC identically on both sides, so the src is the rule-level difference. Owning reference file `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Image.php` lines 55-60 applied at line 197. Mirror `ServingRules.lean::renderImage` line 456 needs the same widening; consequence inferred by source reading. Full record conformance-round5h-s1/CANDIDATE-C-R5H-S1-3.md.

C-R5H-S1-4 (suspicion S06, capture `muse-probe-round5h-s1-s06-btn-edit-padzero`). Source `[[button edit text=" 0 "]]`. Live label node is `0`, reference label node is ` 0 `; all attributes are identical, so the label is the rule-level difference. Owning reference file `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Button.php` line 127, which escapes the text without a trim. Mirror `InteractiveRules.lean::renderButton` line 758 needs a label trim; consequence inferred by source reading. Full record conformance-round5h-s1/CANDIDATE-C-R5H-S1-4.md.

C-R5H-S1-5 (suspicion S08, capture `muse-probe-round5h-s1-s08-tabview-title-padzero`). Source `[[tabview]][[tab title=" 0 " ]]x[[/tab]][[/tabview]]`. Live tab anchor text is `0`, reference is `untitled`; the cloudfront script host and random tabview id are owned serving surfaces separated from this label value. Owning reference file `ref-php/text-wiki/Text/Wiki/Parse/Default/Tabview.php` lines 107-116. Mirror `ContainRules.lean::tabTitle` lines 1132-1136 needs the same adjustment; consequence inferred by source reading. Full record conformance-round5h-s1/CANDIDATE-C-R5H-S1-5.md.

C-R5H-S1-6 (suspicion S11, capture `muse-probe-round5h-s1-s11-math-trail-ctl`). Source `[[math type="align\u0001"]]\nx\n[[/math]]`. Live error text is `Unsupported math environment "align"`, reference is `Unsupported math environment "align\x01"`; both reject, so the environment name in the error is the rule-level difference. Owning reference file `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Math.php` lines 58-62. Mirror `ServingRules.lean::renderMath` lines 277-283 needs the same D-set discard; consequence inferred by source reading. Full record conformance-round5h-s1/CANDIDATE-C-R5H-S1-6.md.

## Cleared and untestable

Ten suspicions CLEARED, zero UNTESTABLE. Every cleared row matched after the standard probe.norm and campaign frame mask: the anchor multi-attribute seam (S03), span ESC+DEL (S04), button class with ESC (S07), footnote SOH lead (S09), footnote ESC with break (S10), raw multi-short-run chain (S12), raw cross-line plus short closer (S13), table header control with data underscore (S14), mixed Cf+ESC freelink lead (S15) and non-ASCII div id (S16). No previously confirmed minimal shape was re-run as-is.

## Evidence-only adoption payload

Copy exactly REPORT-ROUND5H-S1.md and conformance-round5h-s1/ from coord-units/R5H-S1/ into canonical; no source files. sha256 for every payload file:

55f32c787a3d95984bc9bac35d6537da507bf6a12bf3bf8352c44c59320bbf0f  conformance-round5h-s1/CANDIDATE-C-R5H-S1-1.md
b1668ffb1c2bef0d5a2fdc55f4928b66a396282c5d1f430c602bbe7b19685e8c  conformance-round5h-s1/CANDIDATE-C-R5H-S1-2.md
cfb1dabd2c191b9a7ee814790380d793e9852be741c4a9e8e7ed338433fd673a  conformance-round5h-s1/CANDIDATE-C-R5H-S1-3.md
65a02cb30fe1269212d15eac04b6cf01763bb5c16902ef15179e2f4ffaf07494  conformance-round5h-s1/CANDIDATE-C-R5H-S1-4.md
eb0bd018e03fc2b945f4d8932a1ff21458140545fe2b63b2677b973f03e86938  conformance-round5h-s1/CANDIDATE-C-R5H-S1-5.md
ed492d9ba39ab117caa6a82fe4a02705c9bb10a6d556abfffbf6bc910b0f1677  conformance-round5h-s1/CANDIDATE-C-R5H-S1-6.md
07f893afb73612a82b279da7f341109b9369fd6021987752340d8f65b62eb6dc  conformance-round5h-s1/CAPTURE-INDEX.md
9efebcbe32ef9e2cd597ed601a5845aad82e6c4204d23d2eb88e2f23a082fffe  conformance-round5h-s1/LEDGER-TABLE.md
d23f2458c61a784307db00526d3e6b3323fa8640cf4b54d88227cbd43807f1bb  conformance-round5h-s1/LEDGER.md
faece0e3f62337a7bb20f09dcaf13210ca137d8b17e7d0c32d2c8cef7b9406ae  conformance-round5h-s1/MIRROR-CONSEQUENCE.md
b2f565b7a860efb16fd20cda2d0b5a6d17c1929860bc2907c5a516398c73dbd6  conformance-round5h-s1/captures.json
5a847f829713d437823c8ae763f4d415728968619c70dac198d9912d2344fdec  conformance-round5h-s1/cases.jsonl
86cf97c278ff8068fc1f9ecb3efffe8ef039a183c170de31a395cbb658b35c36  conformance-round5h-s1/comparison.json
d3dd185ebd5e0a38e239cf2807cb4809889fa589c4e4da2029eb9e8fd16b897d  conformance-round5h-s1/map.json
e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855  conformance-round5h-s1/ref.err
c8a455ef3455a9e683d77c1d3dece9299ca49a06edbbb8240896a53c51698c0e  conformance-round5h-s1/ref.jsonl
94a7c1ad9f93954c68f9a7605cd4a902ef6affb38a4814af13c0ac9ed586ce1c  conformance-round5h-s1/verdicts.json

## Verdict

SIX CONFIRMED: C-R5H-S1-1 through C-R5H-S1-6. Sixteen suspicions raised and probed, 16 valid/stable/source-matching captures, 6 confirmations, 10 cleared and 0 untestable. Package 2.1 cannot close by evidence on this round; the six seams need correction and a fresh full pass. Operational caveats: every mirror consequence is inferred by source reading and needs a wrapped elaboration; the AMC save path absorbed deterministic `try_again` responses but all 16 pages verified on read-back; the cloudfront script host, random tabview id, raw-escape wrapper and wdfiles-style hosts are owned serving surfaces cleared on explicit masks.
