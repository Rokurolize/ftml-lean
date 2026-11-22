# VERIFY-COMBINED part 2 — axiom audit

`Main.lean` has 642 `#print axioms` command lines (640 distinct names; `LeanFtml.renderRuleOfName_roundtrip` is deliberately audited three times), plus the three MIRROR-FIX Item 4 comment lines at lines 461, 468 and 469 that the brief counts separately. The Main elaboration was captured in full through the serial wrapper as `LAKE_JOBS=2 ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh <tree>/lean-ftml lake env lean Main.lean` (exit 0, 645 lines, `vc-scratch/vc-main-elaboration.log`), and the compiled Main executable was run through the same wrapper (exit 0, one output line, `vc-scratch/vc-main-executable.log`). `vc-scratch/vc_audit_parse.py` checked every command name against the reported lines: 642 reports parsed against 642 commands, zero missing, zero count mismatches, zero unexpected names, zero unparsed report lines, zero `sorryAx` lines. 30 reports are axiom-free (`does not depend on any axioms`) and 612 report an axiom set, every one a subset of the programme standard `[propext, Classical.choice, Quot.sound]`; there are zero nonstandard sets and therefore zero exceptions to name by theorem name. The audit summary is `vc-scratch/vc-audit-summary.txt` and ends `AUDIT-VERDICT: PASS`.

AUDIT RESULT: 642/642 reported, 612 standard + 30 axiom-free, 0 sorryAx, 0 exceptions.

COMPLETE
