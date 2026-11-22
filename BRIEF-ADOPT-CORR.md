# BRIEF-ADOPT-CORR — Discharge the Lean consequences of the HTMLCHARS and X44 reference corrections (2026-11-22)

Lane: ADOPT-CORR, coordinator sub-agent on the VM, worktree ~/workspace/ftml-lean-equivalence-adoptcorr/ (a fresh copy of canonical: lean-ftml without .lake, ref-php with BOTH corrections already adopted, conformance-r41 through r48, conformance-capstone, conformance-refphp, GAP-LEDGER.md, STATE.md, REPORT-HTMLCHARS.md, REPORT-X44.md). The reference PHP in this tree is final; do not edit any PHP file. Your work is the Lean mirror consequences plus the gate-artifact regenerations and gate re-runs that prove them. Source documents: REPORT-HTMLCHARS.md sections per site (the Lean consequence paragraphs) and REPORT-X44.md section 4, both in this worktree's root.

## The six mirror changes

1. `renderUrl` in LeanFtml/InlineSimpleRules.lean: the href, text, and target escapes switch from `htmlSpecialCharsQuotesSubst` to `htmlSpecialCharsCompat`.
2. `renderInterwiki` in the same file: the text escape switches to `htmlSpecialCharsCompat`.
3. `renderRawold` in LeanFtml/RawHeadingRules.lean: switch to `htmlSpecialCharsCompat`.
4. `renderButton` in LeanFtml/InteractiveRules.lean: the class and style escapes switch to `htmlSpecialCharsCompat` (its text escape already uses Compat).
5. `renderFreelink` and `renderImage` in LeanFtml/ServingRules.lean: every escape that mirrors the fossil's bare `htmlspecialchars` call switches to `htmlSpecialCharsCompat` (the HTMLCHARS lane corrected Freelink.php's seven calls and Image.php's five calls to ENT_COMPAT; the R4.8 mirror was built against the pre-correction files).
6. `interwikiDescrMatch` in LeanFtml/Inline1Rules.lean (the parse mirror of the described interwiki form, called from `interwikiRule`): reject a candidate label containing the token delimiter byte (0xFF) or an opening bracket `[` before constructing the token, mirroring the corrected PHP pattern class `[^\]\[\n<delim>]+` exactly (the closing bracket and newline are already excluded by the match's construction; confirm and say so).

Theorem discipline: statements over apostrophe-free values are unaffected; any worked theorem whose statement asserts the old escaping on an apostrophe-bearing value, or whose proof relied on the unguarded match, is restated to the corrected behavior with the reason recorded in its doc comment (never silently deleted). Use the established escape-characterization discipline (the `*_ascii` characterizations; `dsimp` after `unfold` where a have-bound local hides the escape call, per REPORT-R48.md's disclosed device 3). All theorems audit within [propext, Classical.choice, Quot.sound], none on sorryAx; add `#print axioms` lines to Main.lean for any new theorem. Build with LAKE_JOBS=2, serially; no other lane builds on this VM concurrently.

## Artifact regeneration and gates (WSL, PHP 8.5.4)

The retained PHP artifacts in the r43/r44/r46/r48 trees were generated with the pre-correction reference. Regenerate the affected ones with this tree's corrected reference, following each stage's own recorded generation route (the state-restricted.php / render-restricted.php invocations in the stage reports and run_gates.sh scripts), keeping before-copies of every regenerated artifact:

- conformance-r43: family states and renders (the Interwiki parse correction moves the x44 and iw43-37 parse states; the Url/Interwiki render corrections move apostrophe-bearing renders), plus its notes/prose full-pipeline artifacts.
- conformance-r44: family renders (Rawold), plus notes/prose artifacts if their corpora move.
- conformance-r46: family renders (Button class/style), plus notes/prose artifacts if they move.
- conformance-r48: family renders (Freelink, Image), plus notes/prose artifacts if they move.
- conformance-capstone: regenerate pooled-php-full.jsonl with the corrected reference (run_oracle.py full over pooled-cases.jsonl, the route used for the REFCORR2 regeneration) and re-run the pooled comparison.

Then run the gate suites: r43, r44, r46, r48 run_gates.sh, the r41/r45/r47 regression sections they carry, and the pooled gate. Acceptance: every gate at FAIL 0 genuine; x44 passes in BOTH modes with no exclusion and no digit-run normalization anywhere (find where the R4.3 comparison applied that normalization and retire it, recording the retirement); movement accounting per gate listing every case that moved against the pre-correction artifacts, each attributable to one of the six corrections (the HTMLCHARS lane measured 13 apostrophe-bearing probe cases; the X44 lane measured exactly x44 and iw43-37 in the r43 family corpus); any movement you cannot attribute is a finding, reported, not absorbed. Smoke battery 9/9 byte-identical through the corrected reference.

## Deliverable

REPORT-ADOPT-CORR.md in the worktree root, ending COMPLETE or PARTIAL:, recording: the six mirror changes with file and function; every theorem restated and why; the regeneration list with before-copy locations; per-gate tallies before and after with the movement accounting; the pooled gate result; the x44 retirement evidence. No changes outside this worktree; no reference PHP edits; ftml untouched.
