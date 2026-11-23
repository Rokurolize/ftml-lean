# C-R5E-P4-1 — footnote control filter must not drop ESC 0x1B

Claim: the REFCORR11 unconditional footnote control filter in ref-php/text-wiki/Text/Wiki/Parse/Default/Footnote.php:66 drops byte 0x1B from the stored footnote body, but live Wikidot keeps that byte verbatim in the emitted footnote. The correct filter class is the residual-text class of Tighten.php:99, `[\x00-\x08\x0B\x0C\x0E-\x1A\x1C-\x1F]`, which excludes ESC, rather than the footnote class `[\x00-\x08\x0B\x0C\x0E-\x1F]`, which includes it.

Primary witness R5E-P4-C05, source `[[footnote]]A\x1bB[[/footnote]]\n[[footnoteblock]]`, capture muse-probe-round5e-p4-r5e-p4-c05 (valid=true, stable=true, saved_source_matches=true, html_sha256 642ea89a5b9b…): live emits footnote footer text `1</a>. A\x1bB</div>`, reference emits `1</a>. AB</div>` at ref.jsonl line 5.

Second witness R5E-P4-C08, source `[[footnote]]A\x1b\nB[[/footnote]]\n[[footnoteblock]]`, capture muse-probe-round5e-p4-r5e-p4-c08 (valid/stable/source-matching, html_sha256 cbc8481210f1…): live `1</a>. A\x1b<br />\nB</div>` against reference `1</a>. A<br />\nB</div>` at ref.jsonl line 8. The `<br />` and surrounding structure match; only the ESC character differs.

Decisive controls: C01 (`alpha\x1bbravo`) is byte-clear with ESC kept on both sides, so live does not strip ESC globally; C03 confirms a genuinely dropped C0 byte (VT) disappears on both sides; C06 confirms the 0x1F upper bound leaves DEL alone on both sides. The saved sources match byte-for-byte, so the result is testable, and the difference is a character value, not a serving id, host, placeholder, counter digit or tidy frame surface.

Owning reference file: Footnote.php line 66. Inferred mirror site: lean-ftml/LeanFtml/NotesRules.lean:209-213 (`isLiveDroppedControl`, `stripLiveDroppedControls`) applied unconditionally by `footnoteProcess` at lines 224-238; by source reading the mirror carries the same over-broad class. No Lean elaboration was run by this evidence-only unit.

Note: the REFCORR11 GENERAL-CONTROL record explicitly flagged the ESC-width caveat as unverifiable from cached evidence; these two fresh valid captures supply that evidence and show the wider class is wrong for ESC.
