# REPORT-NATIVE-RESTORE — retire the five native_decide proofs from SPEC-ADOPT pass 1

I carried out BRIEF-NATIVE-RESTORE.md against this full canonical programme copy at the post-REFCORR4, post-TABLEADV-FIX state and retired all five generated native-computation trust axioms. Each of the five propositions named in the brief is now proved inside the standard core axiom set [propext, Classical.choice, Quot.sound] with no native trust, each proposition is byte-for-byte unchanged, the three patched spec files remain unimported as they were, and the whole library builds green through the serial Lean queue wrapper with the patched files in place. No ftml, mirror, PHP, or build-configuration file was edited, no cargo was run, no repository-local git identity or identity override was set, and every Lean build and every elaboration passed through ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh.

## Evidence locations and method

The before/after axiom captures are native-restore-axioms/before-axioms.txt and native-restore-axioms/after-axioms.txt, produced by native-restore-axioms/run_axioms.sh, which byte-copies each placed spec file into a harness with appended `#print axioms` commands and elaborates it with `lake env lean` through the wrapper. The baseline and final library builds are native-restore-baseline-build.log and native-restore-build.log. Because the spec files are deliberately unimported, each was elaborated as a root file against the already-built mirror, exactly as the SPEC-ADOPT lane did it. All five remedies are proof-script-only: no NEW helper lemma was needed, because the R4.6 ascii escape characterization `htmlSpecialCharsCompat_ascii` (RenderCore.lean:989) already exists and is used here as the programme's standing pattern; no proof-local `set_option maxRecDepth` was needed (SpecInteract.lean already carries its file-level `set_option maxRecDepth 8192`, untouched), and no statement text moved. A scripted comparison of the five theorem statements against their spec-incoming/ originals returned byte-identical = True for all five (248, 316, 130, 163 and 219 characters respectively), and a grep confirms no `native_decide` remains in any of the three target files.

## Statement 1 — spec_inline_url_plain (lean-ftml/LeanFtml/SpecInline.lean:25)

Before, from native-restore-axioms/before-axioms.txt:
```
'LeanFtml.spec_inline_url_plain' depends on axioms: [propext,
 Classical.choice,
 Quot.sound,
 LeanFtml.spec_inline_url_plain._native.native_decide.ax_1_1]
```
After, from native-restore-axioms/after-axioms.txt:
```
'LeanFtml.spec_inline_url_plain' depends on axioms: [propext, Classical.choice, Quot.sound]
```
Remedy: branch rewriting with named haves, using the already-proved `url_inline_plain` in InlineRender.lean:80 as the exact template, since this proposition is identical to that theorem. The proof records `hhref0`, `henc`, `htext0`, `htarget0`, `htruth` and `htype` as `rfl`, discharges the two ENT_COMPAT escapes `hhrefE` through `htmlSpecialCharsCompat_ascii _ (by decide)`, records `hhash` as false, then `unfold renderUrl`, closes the branch with `simp only [... Bool.false_eq_true, ↓reduceIte, List.nil_append, List.append_assoc]` and finishes by `rfl`. No concatenation re-chunking was needed because the assembled bytes reduce to the statement's literal. The generated `_native.native_decide.ax_1_1` is gone.

## Statement 2 — spec_inline_url_hash_target_kept (lean-ftml/LeanFtml/SpecInline.lean:35)

Before, from native-restore-axioms/before-axioms.txt:
```
'LeanFtml.spec_inline_url_hash_target_kept' depends on axioms: [propext,
 Classical.choice,
 Quot.sound,
 LeanFtml.spec_inline_url_hash_target_kept._native.native_decide.ax_1_1]
```
After, from native-restore-axioms/after-axioms.txt:
```
'LeanFtml.spec_inline_url_hash_target_kept' depends on axioms: [propext, Classical.choice, Quot.sound]
```
Remedy: the same branch-rewriting pattern, copied from the already-proved `url_hash_target_kept` in InlineRender.lean:210, whose proposition is identical. `hhref0`, `henc`, `htext0`, `htarget0`, `htruth` and `htype` are `rfl`; `hhrefE`, `htext` and `htargetE` are discharged through `htmlSpecialCharsCompat_ascii _ (by decide)`; `hhash` is recorded as true so the `"#"` → `"javascript:;"` substitution fires before the target attribute is assembled; `unfold renderUrl`, `simp only [...]`, `rfl`. No native trust remains.

## Statement 3 — spec_rawold_backticks_literal (lean-ftml/LeanFtml/SpecRawhead.lean:39)

Before, from native-restore-axioms/before-axioms.txt:
```
'LeanFtml.spec_rawold_backticks_literal' depends on axioms: [propext,
 Classical.choice,
 Quot.sound,
 LeanFtml.spec_rawold_backticks_literal._native.native_decide.ax_1_1]
```
After, from native-restore-axioms/after-axioms.txt:
```
'LeanFtml.spec_rawold_backticks_literal' depends on axioms: [propext, Classical.choice, Quot.sound]
```
Remedy: `htext0` records the concrete `"text"` option lookup by `rfl`, and `hqc` discharges the sole `htmlSpecialCharsCompat (litBytes "```x```")` through `htmlSpecialCharsCompat_ascii _ (by decide)` followed by `rfl`; backticks and `x` are all ASCII non-escapable bytes, so the flatMap reduces to the identical literal. Then `unfold renderRawold` and `simp only [htext0, hqc] <;> rfl`; the `<;>` form is used because that final `simp only` closes the goal outright by reflexivity. No native trust remains.

## Statement 4 — suspect_iframe_src_apostrophe (lean-ftml/LeanFtml/SpecInteract.lean:119)

Before, from native-restore-axioms/before-axioms.txt:
```
'LeanFtml.suspect_iframe_src_apostrophe' depends on axioms: [propext,
 Classical.choice,
 Quot.sound,
 LeanFtml.suspect_iframe_src_apostrophe._native.native_decide.ax_1_1]
```
After, from native-restore-axioms/after-axioms.txt:
```
'LeanFtml.suspect_iframe_src_apostrophe' depends on axioms: [propext, Classical.choice, Quot.sound]
```
Remedy: the `iframe_src_null_attr` pattern from InteractiveRender.lean:826 applied to a single src part. `hval`, `hcond` (the src-key test is true), `henc` (percentEncodeNonAscii is the identity on ASCII) and `hkey` are `rfl`; `hqc` first establishes the pure-ASCII condition as `hascii : ∀ b ∈ litBytes "http://example.com/a'b", b < 0x80` by `decide`, then rewrites with `htmlSpecialCharsCompat_ascii` and closes by `rfl`, which keeps the apostrophe raw without reducing the utf8Valid guard. `unfold iframePart`, `simp only [hval, hcond, henc, hqc, hkey, ↓reduceIte, List.append_nil, List.append_assoc]`, `rfl`. This proof elaborated in about three seconds and passed on its first attempt. No native trust remains.

## Statement 5 — suspect_file_anchor_apostrophe (lean-ftml/LeanFtml/SpecInteract.lean:135)

Before, from native-restore-axioms/before-axioms.txt:
```
'LeanFtml.suspect_file_anchor_apostrophe' depends on axioms: [propext,
 Classical.choice,
 Quot.sound,
 LeanFtml.suspect_file_anchor_apostrophe._native.native_decide.ax_1_1]
```
After, from native-restore-axioms/after-axioms.txt:
```
'LeanFtml.suspect_file_anchor_apostrophe' depends on axioms: [propext, Classical.choice, Quot.sound]
```
Remedy: the `file_path` pattern from InteractiveRender.lean:1009, with two extra branch facts forced by this proposition's slashless file name. `hfile` and `hanchor` are `rfl` option lookups; `hqc2` discharges the anchor's `htmlSpecialCharsCompat (litBytes "it's")` through `htmlSpecialCharsCompat_ascii _ (by decide)`. For the href, `hcontCons : (100 :: litBytes "ir/a.txt").contains 47 = true`, `hcons : litBytes "dir/a.txt" = 100 :: litBytes "ir/a.txt"` and the original `hcont` are `rfl`; `hcons` exposes the `match` scrutinee as a cons so `simp only` can reduce the branch, and `hcontCons` decides the resulting `if`. `hqc1` is stated on `htmlSpecialCharsCompat (litBytes "/local--files/" ++ encodeFilePath (100 :: litBytes "ir/a.txt"))`; its argument is pinned to the concrete href by `hpath : ... = litBytes "/local--files/dir/a.txt" := rfl` (plain flatMap reduction, no utf8Valid), and the escape is then discharged through `htmlSpecialCharsCompat_ascii _ (by decide)`. Final assembly is `unfold renderFile`, `simp only [hfile, hanchor, hcont, hcontCons, hcons, hqc1, hqc2, ↓reduceIte, List.append_nil, List.append_assoc]`, `rfl`; this is the right-hand-side re-chunking discipline at the concatenation boundary. No native trust remains.

## Measurements that defeated the discarded attempts on statement 5

I disclose these because they are the evidence that the retained remedy is necessary. The first attempt stated `hqc1` on `htmlSpecialCharsCompat (litBytes "/local--files/" ++ encodeFilePath (litBytes "dir/a.txt"))`; `simp only` left the `match` on the opaque `litBytes` scrutinee unreduced, so the rewrite never matched, and the final `rfl` fell into the R4.6 trap by kernel-reducing utf8Valid on the four-byte href tail. That run was killed by SIGTERM after 230 seconds (wrapper exit 143) during the first full Interact harness, and an isolated reproduction with `timeout 90 lake env lean` exited 124 at exactly 90 seconds. Goal-state inspections (harnesses HarnessFileDebug through HarnessFileDebug5) showed the surviving `match` and the undecided `if`, and showed that adding the `match` to `hqc1`'s pattern or using explicit `rw` still failed with "did not find an occurrence of the pattern"; a `change`-based variant hung because definitional equality unfolded `htmlSpecialCharsCompat` on both sides. Folding the match into `hcons` plus `hcontCons`, dropping a henc/hcons rewrite loop, and characterizing hqc1's argument by `hpath` reduced the accepted proof to a two-second elaboration. The R4.6 pathology was therefore re-measured here, not assumed: kernel reduction through `utf8Valid` remains infeasible at these lengths, while the ascii-characterization route is instant.

## Build evidence and disclosures

A baseline `LAKE_JOBS=2 ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh <workdir> lake build LeanFtml` completed 104 jobs with exit 0 at 2026-11-22T16:54:13+09:00, establishing that this tree started green. After all five patches, a full `LAKE_JOBS=2 ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh <workdir> lake build` completed 158 jobs with exit 0 at 2026-11-22T17:41:07+09:00 (BUILD-EXIT=0); its Main.lean audit block still prints every audited name at a standard axiom set or axiom-free, with no native-computation trust and no `sorryAx`, and the spec files remain unimported. The axiom captures were taken at 17:00 (before) and 17:39 (after) on 2026-11-22; HarnessRawhead and HarnessInteract exited 0 in both captures. HarnessInline exits 1 in both captures, before and after, for one unrelated pre-existing reason: `spec_inline_interwiki_unknown_raw` asserts that an unknown-site Interwiki label is returned raw, while the current mirror returns it escaped after the REFCORR4 Batch C correction; that false statement was out of scope and its proposition was left byte-identical as the brief requires, and it printed no effect on the five target statements, whose axioms are quoted above from those same runs. No statement outside the five was edited, no helper lemma was added, and no disclosure of a weakened proposition is needed.

COMPLETE
