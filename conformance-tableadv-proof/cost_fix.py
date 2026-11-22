#!/usr/bin/env python3
"""Measure the cost of the repaired enumeration search against the
legacy first-parse shortcut on identical inputs, so the report can
state the performance consequence of F-TABLEADV-1's repair instead
of reintroducing an unproved shortcut. Three corpora are timed: the
185-case R3.10 stage corpus, the fourteen witness frames, and the
full 185,662-string grammar union. Each driver is run three times
per corpus and the minimum is reported.
"""

import json
import os
import statistics
import subprocess
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)
from grammar import grammar

BIN = os.path.join(ROOT, "lean-ftml", ".lake", "build", "bin")
FIX = os.path.join(BIN, "lean-ftml-tableadv-fix")
DFS = os.path.join(BIN, "lean-ftml-tableadv-dfs-measure")
OUT = os.path.join(HERE, "cost-fix-measurements.txt")


def hex_lines(sources):
    return "".join("X" + s.encode().hex() + "\n" for s in sources).encode()


def time_run(exe, blob):
    t0 = time.monotonic()
    p = subprocess.run([exe], input=blob, capture_output=True)
    dt = time.monotonic() - t0
    if p.returncode != 0:
        print("driver failed", exe, p.returncode, p.stderr[:200])
        return None
    return dt


def main():
    with open(os.path.join(ROOT, "conformance-r310", "table-all-cases.jsonl")) as f:
        stage = [json.loads(line)["source"] for line in f if line.strip()]
    with open(os.path.join(ROOT, "conformance-r310", "witness-family-cases.jsonl")) as f:
        witness = [json.loads(line)["source"] for line in f if line.strip()]
    all_strings = list(grammar())
    corpora = [("r310-stage-185", stage), ("witness-family-14", witness),
               ("grammar-185662", all_strings)]
    lines = []
    for name, sources in corpora:
        blob = hex_lines(sources)
        fix_times = [time_run(FIX, blob) for _ in range(3)]
        dfs_times = [time_run(DFS, blob) for _ in range(3)]
        if any(t is None for t in fix_times + dfs_times):
            return 2
        fix_min, dfs_min = min(fix_times), min(dfs_times)
        lines.append(f"{name}: strings={len(sources)} "
                     f"mirror_min={fix_min:.3f}s dfs_min={dfs_min:.3f}s "
                     f"ratio={fix_min / dfs_min if dfs_min else 0:.2f} "
                     f"mirror_runs={[round(t, 3) for t in fix_times]} "
                     f"dfs_runs={[round(t, 3) for t in dfs_times]}")
        print(lines[-1])
    with open(OUT, "w") as f:
        f.write("\n".join(lines) + "\n")
    return 0


if __name__ == "__main__":
    sys.exit(main())
