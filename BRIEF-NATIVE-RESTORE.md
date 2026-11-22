# BRIEF-NATIVE-RESTORE — retire the five native_decide proofs from SPEC-ADOPT pass 1

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Standing method (every lane in this programme)

Live Wikidot behavior is definitionally correct. Never edit ftml. Never run cargo. Never set a repository-local git identity, identity environment variables, or -c user.* overrides. Every Lean build runs through the serial queue wrapper: ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh <workdir> lake build ... (never call lake directly for a full build). Write deliverables to disk as each part completes. Prose in files flows in single-line paragraphs, never hard-wrapped. Your tree is a full copy of the canonical programme tree at the post-REFCORR4, post-TABLEADV-FIX state; GAP-LEDGER.md's SPEC-ADOPT entry and REPORT-SPEC-ADOPT.md are your context.

## Mission

The first SPEC-ADOPT pass repaired five statements by trading rfl for native_decide, because the plain kernel reduction runs through the utf8Valid guard and explodes (the R4.6 pathology, measured: kernel reduction of utf8Valid in TokenState.lean explodes from roughly four-byte inputs upward). The five statements, in the spec files under lean-ftml/LeanFtml/, are: spec_inline_url_plain and spec_inline_url_hash_target_kept (SpecInline.lean), spec_rawold_backticks_literal (SpecRawhead.lean), suspect_iframe_src_apostrophe and suspect_file_anchor_apostrophe (SpecInteract.lean). Each currently carries a generated native-computation trust axiom on top of the standard set. Restore all five to proofs within the standard core axiom set [propext, Classical.choice, Quot.sound] with no native trust, using the programme's established pattern for this pathology: ascii escape characterizations and restated lemmas that route around the utf8Valid reduction (the R4.6 remedies), branch rewriting with named haves, right-hand-side re-chunking at concatenation boundaries, and proof-local set_option maxRecDepth where the statement is unchanged. The propositions themselves must not change by a single byte; only proof scripts and any NEW helper lemmas you add (in the same files, clearly marked) may move. If a statement genuinely resists every remedy, leave its native_decide in place and report the attempts and the measurements that defeated them; a disclosed remainder is an acceptable outcome, a silently weakened proposition is not.

## Deliverables

REPORT-NATIVE-RESTORE.md at the tree root, ending COMPLETE or PARTIAL, with for each of the five statements: the before and after #print axioms output, the remedy used, and the build evidence. The patched spec files in place under lean-ftml/LeanFtml/ (they stay unimported, as they are). The whole library still builds green through the wrapper with your changes present in the tree.
