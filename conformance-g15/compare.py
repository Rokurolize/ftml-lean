#!/usr/bin/env python3
"""G1.5 bridge-A comparison: python3 compare.py inputs.jsonl lean.jsonl rust.jsonl.

Requires exact equality of the parsed JSON records in driver order, which
is stricter than field-wise equality: it also catches key order for the
serde-emitted trees after parsing only if combined with a raw-text check.
The RESULTS.md numbers use both the parsed comparison here and a raw-line
byte comparison of the two JSONL files.
"""
import json
import sys

def load(path):
    return [json.loads(line) for line in open(path) if line.strip()]

def main():
    grid, lean, rust = [load(p) for p in sys.argv[1:4]]
    bad = 0
    if len(grid) != len(lean) or len(grid) != len(rust):
        print(f"COUNT MISMATCH grid={len(grid)} lean={len(lean)} rust={len(rust)}")
        bad += 1
    for i, (g, a, b) in enumerate(zip(grid, lean, rust)):
        if a.get("id") != g["id"] or b.get("id") != g["id"]:
            print(f"ID MISMATCH line {i}: {g['id']}")
            bad += 1
        elif a != b:
            print(f"MISMATCH {g['id']}: lean={a} rust={b}")
            bad += 1
    print(f"{len(grid) - bad}/{len(grid)} cases agree")
    return 1 if bad else 0

if __name__ == "__main__":
    sys.exit(main())
