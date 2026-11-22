#!/usr/bin/env python3
"""Compare the Lean fragment driver and the Rust dumper outputs
over the G1.4 grid. Usage: compare.py grid.jsonl lean.jsonl rust.jsonl
Exit 0 when every case agrees (output and pages, exactly)."""
import json
import sys


def load(path):
    recs = {}
    for line in open(path, encoding="utf-8"):
        line = line.strip()
        if not line:
            continue
        rec = json.loads(line)
        recs[rec["id"]] = rec
    return recs


def main() -> int:
    grid = load(sys.argv[1])
    lean = load(sys.argv[2])
    rust = load(sys.argv[3])
    bad = 0
    for cid, grec in grid.items():
        a, b = lean.get(cid), rust.get(cid)
        if a is None or b is None:
            print(f"{cid}: MISSING lean={a is not None} rust={b is not None}")
            bad += 1
            continue
        if "error" in a or "error" in b:
            print(f"{cid}: ERROR lean={a.get('error')} rust={b.get('error')}")
            bad += 1
            continue
        if a["output"] != b["output"] or a["pages"] != b["pages"]:
            bad += 1
            print(f"{cid}: MISMATCH")
            print(f"  source: {grec['source']!r}")
            print(f"  rust:   out={b['output']!r} pages={b['pages']}")
            print(f"  lean:   out={a['output']!r} pages={a['pages']}")
    total = len(grid)
    print(f"{total - bad}/{total} cases agree")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
