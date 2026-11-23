# MIRROR-CONSEQUENCE — round-5h unit R5H-S1

All mirror consequences below are inferred by source reading of the canonical mirror in lean-ftml/LeanFtml; none was claimed as an elaboration and no Lean invocation was run by this unit.

- C-R5H-S1-1 / s01-fl-url-frag-ctl: [[[https://ex.test/ab#sec|L]]]
- C-R5H-S1-2 / s02-fl-star-url-esc: [[[*https://ex.test/café|L]]]
- C-R5H-S1-3 / s05-img-src-ctl: [[image src="https://ex.test/ab.png" alt="xy"]]
- C-R5H-S1-4 / s06-btn-edit-padzero: [[button edit text=" 0 "]]
- C-R5H-S1-5 / s08-tabview-title-padzero: [[tabview]][[tab title=" 0 " ]]x[[/tab]][[/tabview]]
- C-R5H-S1-6 / s11-math-trail-ctl: [[math type="align"]]
x
[[/math]]

C-R5H-S1-1 and C-R5H-S1-2: `ServingRules.lean::renderFreelink` lines 355-357 applies `percentEncodeNonAscii (url ++ anchor ++ extra)`; `InlineSimpleRules.lean::percentEncodeNonAscii` lines 65-67 encodes only bytes >= 0x80, so the mirror transcribes the non-ASCII-only narrowing and needs the non-printable widening to match live.
C-R5H-S1-3: `ServingRules.lean::renderImage` line 456 percent-encodes the src with the same `percentEncodeNonAscii`, so the mirror needs the same widening on the Image src path.
C-R5H-S1-4: `InteractiveRules.lean::renderButton` line 758 emits `htmlSpecialCharsCompat txt` with no `phpTrimBytes`; the mirror needs a label trim.
C-R5H-S1-5: `ContainRules.lean::tabTitle` lines 1132-1136 defaults a trimmed `0` to `untitled`; the mirror needs the same adjustment as the reference.
C-R5H-S1-6: `ServingRules.lean::renderMath` lines 277-283 interpolates `mathStripStar ty` into the error text with no discarded-D filtering; the mirror needs the same control-byte discard as live.

