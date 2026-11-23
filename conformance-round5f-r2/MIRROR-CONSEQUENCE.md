# MIRROR-CONSEQUENCE R5F-R2 — mirror consequences by source reading, round 5f

Per PROTOCOL-R5 step 6, the canonical mirror sources were read for each confirmed reference divergence and the same mechanism is stated as transcribed or not. No Lean was invoked, so every statement here is a source-reading inference and no elaboration is claimed.

C-R5F-R2-1 (U+2065 Freelink lead): lean-ftml/LeanFtml/LinkRules.lean::isUnicodeFormatCp lines 1031-1052 pins the full Unicode 17.0 Cf set with two disjoint arms around the gap, `(0x2060 <= cp && cp <= 0x2064)` at line 1041 and `(0x2066 <= cp && cp <= 0x206F)` at line 1042; isDefaultLeadCp at line 1066 is the union with White_Space, U+FEFF and star. The unassigned 0x2065 is admitted by neither arm. The same exclusion mechanism is transcribed, so the mirror is inferred to keep `_default:` in the slug and share the divergence.

C-R5F-R2-2 and C-R5F-R2-3 (Image height/style trailing spaces): lean-ftml/LeanFtml/ParaRules.lean::rtrimImageAttrWs lines 277-281 and imageTrimAttr lines 283-289 apply the trim only when the key is link, width or class; the attr4 map at line 334 applies that selective trim and the ordered key list at lines 304-306 places height and style in the kept set. The same split is transcribed, so the mirror is inferred to emit the authored trailing space and share both divergences.

C-R5F-R2-4 (Freelink external target href): lean-ftml/LeanFtml/ServingRules.lean::renderFreelink lines 318-342 formats the URL branch with htmlSpecialCharsCompat url and no percentEncodeNonAscii call; that encoder is named for Image only in the file header at line 93. The same no-encode mechanism is transcribed, so the mirror is inferred to emit the raw non-ASCII href and share the divergence.

For the fourteen CLEARED rows the live and reference bytes agree after the standard mask, so no mirror elaboration or mirror consequence was needed. No previously corrected-and-fixed shape was re-probed verbatim, and the Email index, owned digit classes and Stage 2 serving surfaces were not reopened.
