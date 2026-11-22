#!/usr/bin/env python3
"""Compare the G1.6 Lean model outputs with the real ftml seam dumper.

Usage: python3 compare.py rust-out.jsonl lean-out.jsonl [known-findings.txt]
Records are joined by their harness ordinal `id`. The comparison checks the
seam-resolved `got`, the naive oracle `expected`, and that the Lean
`corrected` value equals the Lean `got` (the model's adjudication claim).
"""
import json
import sys
from collections import Counter


def load(path):
    return [json.loads(line) for line in open(path) if line.strip()]


def main():
    rust = load(sys.argv[1])
    lean = load(sys.argv[2])
    if len(rust) != len(lean):
        print(f"COUNT MISMATCH rust={len(rust)} lean={len(lean)}")
        return 1
    by_id = {r["id"]: r for r in rust}
    bad_got, bad_expected, bad_corrected = [], [], []
    for l in lean:
        r = by_id.get(l["id"])
        if r is None:
            bad_got.append((l["id"], "missing rust record", ""))
            continue
        if r["got"] != l["got"]:
            bad_got.append((l["id"], r["got"], l["got"]))
        if r["expected"] != l["expected"]:
            bad_expected.append((l["id"], r["expected"], l["expected"]))
        if l["got"] != l["corrected"]:
            bad_corrected.append((l["id"], l["got"], l["corrected"]))
    print(f"cases: {len(lean)}")
    print(f"got mismatches: {len(bad_got)}")
    print(f"expected mismatches: {len(bad_expected)}")
    print(f"model got != corrected: {len(bad_corrected)}")
    for name, bad in (("GOT", bad_got), ("EXPECTED", bad_expected),
                      ("CORRECTED", bad_corrected)):
        for row in bad[:12]:
            print(f"  {name} id={row[0]} rust/left={row[1]!r} lean/right={row[2]!r}")
    classes = Counter((r.get("class") or "agree") for r in rust)
    print("rust difference classes:")
    for key, count in classes.most_common():
        print(f"  {count} {key}")
    if len(sys.argv) > 3:
        known = Counter()
        for line in open(sys.argv[3]):
            line = line.strip()
            if not line or line.startswith("#"):
                continue
            parts = line.split("|")
            known[parts[0]] = int(parts[2])
        print("known finding classes vs observed:")
        for key in sorted(set(known) | set(classes)):
            print(f"  {key}: known={known.get(key, 0)} observed={classes.get(key, 0)}")
    return 1 if bad_got or bad_expected or bad_corrected else 0


if __name__ == "__main__":
    sys.exit(main())
