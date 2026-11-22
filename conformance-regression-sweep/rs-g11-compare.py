#!/usr/bin/env python3
"""Regression-sweep G1.1 spot comparison: reuse the retained audit-g11
independent stack-machine oracle over the 7,030-case stress set and compare
it with the fresh Lean driver output produced through the serial wrapper.
Does not launch any Lean binary."""
import importlib.util
import pathlib
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
spec = importlib.util.spec_from_file_location("g11stress", ROOT / "audit-g11/stress_test.py")
m = importlib.util.module_from_spec(spec)
spec.loader.exec_module(m)

cases = m.generate_cases()
out_path = ROOT / "conformance-regression-sweep/g11-lean-fresh.txt"
lean_lines = out_path.read_text().splitlines()
assert len(lean_lines) == len(cases), f"line count {len(lean_lines)} vs {len(cases)}"
mismatches = []
for idx, (rows, lean_out) in enumerate(zip(cases, lean_lines)):
    trees = m.ref_process_depths(9, rows)
    ref_out = m.ser_trees(trees)
    placed = m.walk_and_check(trees)
    expected = [(i, d, t) for d, t, i in rows]
    assert placed == expected, f"invariant failure case {idx}"
    if lean_out != ref_out:
        mismatches.append((idx, lean_out, ref_out))
for row in mismatches[:10]:
    print("MISMATCH case", row[0], "lean=", row[1], "ref=", row[2])
print(f"G11-STRESS PASS cases={len(cases)} mismatches={len(mismatches)}")
sys.exit(1 if mismatches else 0)
