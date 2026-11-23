# C-R5H-S1-4 — edit-button space-padded zero label: live trims, reference keeps authored spaces

Suspicion S06, capture id `muse-probe-round5h-s1-s06-btn-edit-padzero`, html_sha256 `7e133671b41e7ea58ee6232b1570499959c20b40a7bb6a3874505b9c8cf6da4a`, ref.jsonl row 6. Minimal source `[[button edit text=" 0 "]]`. This composes the REFCORR13 AGY2 D10 isset guard with the falsy-default table on a typed button that has a defaultText entry, unlike the earlier set-tags witness which has no such entry, so the two mechanisms take a different path here.

Decisive live bytes are an anchor whose text node is `0`, reference bytes are the same anchor whose text node is ` 0 `; the class, href and onclick attributes are identical, so the rule-level value that differs is the label. Live trims the padded zero, the reference keeps both authored spaces.

Owning reference file `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Button.php` line 127, which emits `htmlspecialchars($text, ENT_COMPAT, 'UTF-8')` with no trim; line 115's falsy default keeps the truthy space-padded string. Mirror consequence inferred by source reading, not by elaboration: `InteractiveRules.lean::renderButton` line 758 emits `htmlSpecialCharsCompat txt` with no `phpTrimBytes`; the mirror needs the same label trim as live.
