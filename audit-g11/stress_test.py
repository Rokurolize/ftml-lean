#!/usr/bin/env python3
"""Adversarial stress & differential test for G1.1 (LeanFtml/Depth.lean)."""
import random
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parent
BIN = ROOT / "lean-ftml/.lake/build/bin/lean-ftml-conformance"
IN_FILE = ROOT / "stress_in.txt"
OUT_FILE = ROOT / "stress_out.txt"


def ref_process_depths(top, rows):
    """Exact mirror of Rust src/parsing/depth.rs DepthStack with explicit panic checks."""
    finished = []
    stack = [(top, [])]  # (ltype, list of ('i', id) | ('L', ltype, sub))
    prev = 0

    def decrease():
        assert len(stack) >= 2, "PANIC: decrease_depth called with stack.len() < 2"
        ltype, items = stack.pop()
        stack[-1][1].append(("L", ltype, items))

    def new_list(ltype):
        if len(stack) == 1:
            tl, items = stack[0]
            if items:
                finished.append((tl, items))
            stack[0] = (ltype, [])
        else:
            decrease()
            stack.append((ltype, []))

    for depth, ltype, item_id in rows:
        if depth >= prev:
            for _ in range(depth - prev):
                stack.append((ltype, []))
        else:
            for _ in range(prev - depth):
                decrease()
        if stack[-1][0] != ltype:
            new_list(ltype)
        stack[-1][1].append(("i", item_id))
        prev = depth

    while len(stack) > 1:
        decrease()
    tl, items = stack[0]
    if items:
        finished.append((tl, items))
    return finished


def ser_forest(nodes):
    if not nodes:
        return "-"
    parts = []
    for n in nodes:
        if n[0] == "i":
            parts.append(f"i{n[1]}")
        else:
            parts.append(f"L{n[1]}({ser_forest(n[2])})")
    return " ".join(parts)


def ser_trees(trees):
    if not trees:
        return "EMPTY"
    return " ".join(f"T{l}[{ser_forest(ns)}]" for l, ns in trees)


def walk_and_check(trees):
    placed = []
    for ltype, nodes in trees:
        assert len(nodes) > 0, "Empty top-level tree!"
        def rec(ns, cur_l, depth):
            for n in ns:
                if n[0] == "i":
                    placed.append((n[1], depth, cur_l))
                else:
                    _, sub_l, sub_ns = n
                    assert len(sub_ns) > 0, "Empty sub-list node!"
                    rec(sub_ns, sub_l, depth + 1)
        rec(nodes, ltype, 0)
    return placed


def generate_cases():
    cases = []
    # 1. Edge cases: empty, single rows at various depths & top collisions
    cases.append([])
    for d in [0, 1, 2, 5, 20, 100, 250]:
        for t in [0, 1, 9]:
            cases.append([(d, t, 0)])
    # 2. Extreme depth jumps & sawtooths
    cases.append([(0, 1, 0), (150, 2, 1), (0, 3, 2), (150, 9, 3), (0, 9, 4)])
    cases.append([(200, 1, 0), (199, 2, 1), (0, 3, 2)])
    cases.append([(50, 1, 0), (50, 2, 1), (50, 1, 2), (50, 9, 3)])
    cases.append([(0, 9, 0), (0, 1, 1), (0, 9, 2), (0, 2, 3)])
    cases.append([(10, 1, 0), (5, 2, 1), (10, 3, 2), (5, 1, 3), (1, 9, 4), (0, 1, 5)])
    # 3. Monotonic ascending/descending with type flips every step
    cases.append([(i, i % 7, i) for i in range(60)])
    cases.append([(59 - i, i % 7, i) for i in range(60)])
    cases.append([(i * 3, i % 5, i) for i in range(30)] + [(87 - i * 3, (i + 2) % 5, 30 + i) for i in range(30)])
    # 4. Random adversarial interleavings (fixed seed)
    rng = random.Random(20261121)
    for _ in range(5000):
        n = rng.randint(1, 35)
        max_d = rng.choice([3, 8, 25, 60])
        num_t = rng.choice([2, 4, 12, 30])
        rows = []
        for idx in range(n):
            d = rng.randint(0, max_d)
            t = rng.choice([0, 1, 9, rng.randint(0, num_t)])
            rows.append((d, t, idx))
        cases.append(rows)
    # 5. Deep-flip torture: stays at high depth flipping types and dipping slightly
    for _ in range(2000):
        n = rng.randint(2, 25)
        rows = []
        d = rng.randint(10, 40)
        for idx in range(n):
            d = max(0, d + rng.randint(-15, 15))
            t = rng.randint(0, 15)
            rows.append((d, t, idx))
        cases.append(rows)
    return cases


def main():
    cases = generate_cases()
    with IN_FILE.open("w") as f:
        for rows in cases:
            f.write(";".join(f"{d},{t},{i}" for d, t, i in rows) + "\n")

    subprocess.run([str(BIN), str(IN_FILE), str(OUT_FILE)], check=True)
    lean_lines = OUT_FILE.read_text().splitlines()
    assert len(lean_lines) == len(cases), f"Line count mismatch: {len(lean_lines)} vs {len(cases)}"

    mismatches = 0
    for idx, (rows, lean_out) in enumerate(zip(cases, lean_lines)):
        trees = ref_process_depths(9, rows)
        ref_out = ser_trees(trees)
        placed = walk_and_check(trees)
        expected = [(i, d, t) for d, t, i in rows]
        assert placed == expected, f"Invariant failure on case {idx}"
        if lean_out != ref_out:
            mismatches += 1
            if mismatches <= 5:
                print(f"MISMATCH case {idx}:\n  lean={lean_out}\n  ref ={ref_out}")

    print(f"G11-STRESS PASS cases={len(cases)} mismatches={mismatches}")
    assert mismatches == 0


if __name__ == "__main__":
    main()
