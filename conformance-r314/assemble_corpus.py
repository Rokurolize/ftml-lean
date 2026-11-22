#!/usr/bin/env python3
"""Assemble the R3.14 stage corpus and the merged full-pipeline
fixture file.

Corpus: the INLINE3 family's six batteries (tt 55, sup 66,
sub 55, typo 92, tighten 70, interactions 108 = 446 cases)
plus the nine smoke sources (455 lines), written to
inline3-all-cases.jsonl beside this script. All 446 battery
ids are unique across the six batteries (verified at
assembly), so no id renaming is needed on assembly (the
R3.13 strike-renaming precedent does not arise).

The merged fixture file (expected-inline3-full.jsonl) is the
six pre-seeded conformance-r3/expected-*-states.jsonl files
concatenated; their id sets were verified equal to the
batteries' id sets in order at assembly.
"""

import glob
import json
import os

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
IN3 = os.path.join(ROOT, "conformance-refphp", "inline3")
SMOKE = os.path.join(ROOT, "conformance-refphp", "smoke")
FIXDIR = os.path.join(ROOT, "conformance-r3")

BATTERIES = [
    ("tt", os.path.join(IN3, "tt", "battery.jsonl")),
    ("sup", os.path.join(IN3, "sup", "battery.jsonl")),
    ("sub", os.path.join(IN3, "sub", "battery.jsonl")),
    ("typo", os.path.join(IN3, "typo", "battery.jsonl")),
    ("tighten", os.path.join(IN3, "tighten", "battery.jsonl")),
    ("x", os.path.join(IN3, "xbattery.jsonl")),
]

FIXTURES = [
    "expected-tt-states.jsonl",
    "expected-sup-states.jsonl",
    "expected-sub-states.jsonl",
    "expected-typo-states.jsonl",
    "expected-tighten-states.jsonl",
    "expected-i3x2-states.jsonl",
]


def read_jsonl(path):
    with open(path) as f:
        return [json.loads(line) for line in f if line.strip()]


def main():
    cases = []
    for _name, path in BATTERIES:
        cases.extend(read_jsonl(path))
    for txt in sorted(glob.glob(os.path.join(SMOKE, "*.txt"))):
        name = os.path.splitext(os.path.basename(txt))[0]
        with open(txt) as f:
            cases.append({"id": f"smoke-{name}", "source": f.read()})
    out = os.path.join(HERE, "inline3-all-cases.jsonl")
    with open(out, "w") as f:
        for rec in cases:
            f.write(json.dumps(rec) + "\n")
    ids = [c["id"] for c in cases]
    assert len(ids) == len(set(ids)), "corpus ids not unique"
    print(f"corpus: {len(cases)} cases -> {out}")

    full = []
    for fname in FIXTURES:
        full.extend(read_jsonl(os.path.join(FIXDIR, fname)))
    out = os.path.join(HERE, "expected-inline3-full.jsonl")
    with open(out, "w") as f:
        for rec in full:
            f.write(json.dumps(rec) + "\n")
    fids = [r["id"] for r in full]
    assert len(fids) == len(set(fids)), "fixture ids not unique"
    print(f"fixtures: {len(full)} records -> {out}")
    missing = set(ids) - set(fids)
    print("corpus ids without fixtures (smoke expected):",
          sorted(missing))


if __name__ == "__main__":
    main()
