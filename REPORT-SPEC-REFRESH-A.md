# REPORT-SPEC-REFRESH-A — re-elaboration of SuspectSpec.lean against the corrected mirror

This lane executed BRIEF-SPEC-REFRESH-A.md in the canonical programme tree after the REFCORR4, TABLEADV-FIX, REFCORR5, COVERAGE-INLINE, MIRROR-FIX and REFCORR6 adoptions. Live Wikidot behavior was treated as definitional throughout; the evidence order was the ftml corpus and integration records as reflected in this tree's mirror and reports, the frozen parity captures cited in the file's probe comments, and the already-cached live probes named there, fetched once by earlier lanes and reused without a new probe. No ftml file was edited, no cargo was run, no repository-local git identity or identity environment variable or -c user.* override was set, no commit was made, and Main.lean was not edited because this file is unimported and carries no audit lines. Every Lean invocation without exception — the cold library build, the whole-file elaborations and every single-file diagnostic — went through the serial queue wrapper at ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time, with uniquely named scratch files inside this tree under spec-refresh-a-scratch/. Prose in files is written as flowing single lines. The byte-identical baseline is lean-ftml/LeanFtml/SuspectSpec.lean.before-refresh-a at SHA-256 6c74d1fb1014592c2cfc626b10b34b84e0be4801e2ab9a51d1f78ef1d54105dc; the final file hashes to 8cc1f9d7695c2ac4241cd148e6b06df365051a2e9aa881a3518246b818589687.

## 1. Build and elaboration evidence

The cold mirror build through the wrapper completed with 106 jobs, exit 0, no errors, in refresh-a-initial-lib-build.log. The first whole-file isolation elaboration through the wrapper exited 143 with no diagnostics because the kernel OOM killer killed lean at the wrapper's 22G cgroup cap: the journal records "The kernel OOM killer killed some processes in this unit" with a 22G memory peak for that scope, and dmesg records the memcg OOM kill of lean. This was reproduced twice and is a resource pathology of the whole-file proof-term load, not one bad declaration. Classification was therefore done in uniquely named scratch harnesses generated from the file's own preamble and exact declaration text, each elaborated alone through the wrapper: harness-ra-freelink.lean, harness-ra-partb-v2.lean, harness-ra-parta1.lean, harness-ra-parta2a.lean, harness-ra-email.lean, harness-ra-one-*.lean, harness-ra-lemma-*.lean, harness-ra-p23-unfold.lean and harness-ra-flips.lean, with logs refresh-a-elab-*.log in the tree root. After the edits the whole file was elaborated in isolation again through the wrapper as `lake env lean LeanFtml/SuspectSpec.lean`; refresh-a-elab-final.log records exit 0 with zero errors, warnings or sorry. The file contains 33 theorems, no `sorry`, no `native_decide` and no proof-local option changes.

The two confirmations conforms_p16_f10_interwiki_unknown and conforms_p23_f09_div_attr_escapes had TRUE propositions but their `constructor <;> decide` scripts exhausted the kernel: even `rfl` over the whole render equality OOMed, while `#eval` of the same render calls returned 21 and 23 bytes respectively and `native_decide` proved both instantly. Rather than introduce native-computation trust, which the programme retired in NATIVE-RESTORE, the repairs unfold the render path in stages and discharge the ENT_COMPAT escape with the standing `htmlSpecialCharsCompat_ascii` lemma; the resulting proofs are compact and elaborate cleanly. Both propositions are byte-for-byte unchanged. The two OOM proofs were the load-bearing cause of the whole-file exit 143; with them repaired the full file elaborates under the same wrapper cap.

## 2. Per-theorem classification

STILL-TRUE means the theorem elaborated as written; PROOF-REPAIRED means the proposition was kept byte-for-byte and only the proof script changed; FLIPPED means the old diverges_* statement was falsified by a recorded correction and was replaced by the matching confirmation; RESTATED-AS-PIN means a confirmation was falsified by recorded corrections and was restated to the corrected mechanism while keeping its live meaning. The correction-round column names the round that discharged a flip or restatement.

| # | Theorem | Class | Correction round |
|---:|---|---|---|
| 1 | confirmed_p05_tabview_attr | STILL-TRUE | — |
| 2 | confirmed_p07_deflist_blank_merge | STILL-TRUE | — |
| 3 | confirmed_p11_module_upper_nested | STILL-TRUE | — |
| 4 | confirmed_f07_modulepre_upper_tail | STILL-TRUE | — |
| 5 | confirmed_b3_mod654_upper_body | STILL-TRUE | — |
| 6 | confirmed_p15_typo_dollar_unit | STILL-TRUE | — |
| 7 | confirmed_p21_date_ts_override | STILL-TRUE | — |
| 8 | confirmed_p28_f08_iftags_commas | STILL-TRUE | — |
| 9 | confirmed_p31_div_sameline | STILL-TRUE | — |
| 10 | confirmed_p32_x07_bq_nospace_deletion | STILL-TRUE | — |
| 11 | confirmed_p19_f01_email_bytewise_strrev | STILL-TRUE | — |
| 12 | confirmed_x03_x04_x05_email_overclaim | STILL-TRUE | — |
| 13 | confirmed_p18_p19_f01_f02_email_render | STILL-TRUE (already flipped by MIRROR-FIX before this pass) | REFCORR5 Batch 3 |
| 14 | conforms_x08_b3_div_raw_attr_render | STILL-TRUE | — |
| 15 | confirmed_p16_f10_interwiki_unknown | PROOF-REPAIRED | — |
| 16 | conforms_p23_f09_div_attr_escapes | PROOF-REPAIRED | — |
| 17 | confirmed_x09_deflist_raw_empty_dt_omitted | RESTATED-AS-PIN | REFCORR3 C-SUSPECT-LISTTABLE-1 + REFCORR5 Batch 6 |
| 18 | diverges_p08_strong_quad_follow | STILL-TRUE (live divergence pin) | — |
| 19 | diverges_p12_module654_upper_empty | STILL-TRUE (live divergence pin) | — |
| 20 | diverges_x08_b3_div_raw_attr | STILL-TRUE (live divergence pin) | — |
| 21 | confirmed_p02_postStripToc (was diverges_p02_postStripToc) | FLIPPED | REFCORR4 C-SUSPECT-XRULE-4 |
| 22 | confirmed_p03_p04_f03_freelink_transliterate (was diverges_p03_p04_f03_freelink_transliterate) | FLIPPED | REFCORR5 Batch 5 |
| 23 | confirmed_p06_deflist_raw_term (was diverges_p06_deflist_raw_term) | FLIPPED | REFCORR3 C-SUSPECT-LISTTABLE-1 |
| 24 | confirmed_p09_p10_x06_colortext_parse (was diverges_p09_p10_x06_colortext_parse) | FLIPPED | REFCORR5 Batch 2 |
| 25 | confirmed_p10_tighten_no_hoist (was diverges_p10_tighten_hoist_witness) | FLIPPED | REFCORR5 Batch 2 |
| 26 | confirmed_x06_color_raw_no_leak (was diverges_x06_color_raw_leaks_placeholder) | FLIPPED | REFCORR5 Batch 2 |
| 27 | confirmed_p14_span_double_u_id (was diverges_p14_span_double_u_id) | FLIPPED | REFCORR5 Batch 8 |
| 28 | confirmed_p17_x10_url_star_target (was diverges_p17_x10_url_star_target) | FLIPPED | REFCORR3 C-SUSPECT-INLINE-C1 |
| 29 | confirmed_p27_raw_triple_open_literal (was diverges_p27_raw_triple_open_literal) | FLIPPED | REFCORR3 C-SUSPECT-RAWHEAD-1TO4 |
| 30 | confirmed_x01_raw_empty_emits_token (was diverges_x01_raw_empty_emits_token) | FLIPPED | REFCORR5 Batch 6 |
| 31 | confirmed_p22_x02_date_encodeFormat (was diverges_p22_x02_date_encodeFormat) | FLIPPED | REFCORR5 Batch 4 |
| 32 | confirmed_p26_size_invalid_inner (was diverges_p26_size_invalid_inner) | FLIPPED | REFCORR5 Batch 8 |
| 33 | confirmed_p30_f05_b3_listblocks_case (was diverges_p30_f05_b3_listblocks_case) | FLIPPED | REFCORR5 Batch 1 |

Counts: 14 STILL-TRUE clean as written, 3 STILL-TRUE live divergence pins, 2 PROOF-REPAIRED, 1 RESTATED-AS-PIN, 13 FLIPPED, 0 NEW CANDIDATE, total 33. Every flipped and restated LiveSpec_* definition and probe citation comment was kept in place; only the theorem name, assertion form, proof and the added SPEC-REFRESH-A round note changed. The three surviving divergences still falsify their LiveSpec propositions against the current mirror, as their unchanged proofs demonstrate.

## 3. Flip and restatement evidence

Each flipped confirmation was first established in harness-ra-flips.lean, which elaborates with exit 0 and zero errors. p02 now satisfies the identity proposition because REFCORR4's NUL sentinel leaves the authored `üü` pair alone; the freelink flip passes all three café/Lódź/cafe123 slug cases after REFCORR5 Batch 5's ASCII pass-through; p06's `<dt>`/`<dd>` counts are 1/1 after REFCORR3's Comment-only stripping; the three Colortext flips hold after REFCORR5 Batch 2's parse-time validation, including the no-hoist bytes `x##a!b| hello ##y` and zero Colortext tokens for the embedded Raw spec; p14's authored `u-foo` id survives after REFCORR5 Batch 8's guard; p17's starred `#foo` and `mailto:` links keep `target="_blank"` after REFCORR3 C-SUSPECT-INLINE-C1 removed Url's suppression block; p27's `A @@@hello B` stays literal after REFCORR3 C-SUSPECT-RAWHEAD-1TO4 kept a bare three-@ run whole; x01's `a@@@@b` emits one Raw token and rejects the Interwiki claim after REFCORR5 Batch 6; p22's literal `@@123@@` encodes as `%40%40123%40%40` after REFCORR5 Batch 4 deleted the fabricated `%FF` branch; p26's valid outer Size spans the invalid inner one after REFCORR5 Batch 8's recursive body; and p30's mixed-case list blocks form tokens after REFCORR5 Batch 1's case-insensitive recognition.

The x09 restatement needed care. The original first conjunct called `termRendersEmpty (phBytes 0)`, but REFCORR3 C-SUSPECT-LISTTABLE-1 changed that function to `(toks : List TokenEntry) → (term : List Nat) → Bool`, stripping only Comment placeholders, so the call no longer types; and a firsthand evaluation of the old composition `deflistRule (rawRule st)` on `\n: @@@@ : def\n` now gives list_start = 1 and term_start = 1, whereas live omits `<dt>`. REFCORR5 Batch 6 landed the reference correction and its mirror consequence as empty-Raw transparency in Inline3Rules.lean's stripEmptyRawPh. Applying that correction step explicitly before Deflist gives list_start = 1 and term_start = 0, byte-identical to the live rule; this is the restated theorem and it elaborates by `decide`. The old composition's two sides are recorded here because they show what the correction changed: failing input `\n: @@@@ : def\n`, mirror before correction term_start = 1 (`<dt>` emitted), live and corrected mirror term_start = 0 (`<dl>\n<dd>def</dd>\n</dl>`). No new candidate is recorded: the only falsifications found were discharged by named corrections, and every remaining divergence still stands.

## 4. Final result

The final isolated elaboration of lean-ftml/LeanFtml/SuspectSpec.lean against this tree's current mirror, through the serial queue wrapper as `lake env lean LeanFtml/SuspectSpec.lean`, completed with exit 0 and zero diagnostics (refresh-a-elab-final.log). All 33 theorems are classified in section 2, the baseline copy is preserved byte-identically, and no ftml, cargo, git identity or Main.lean rule was violated.

COMPLETE
