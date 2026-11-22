#!/usr/bin/env python3
"""Assemble the R3.13 stage corpus and the merged full-pipeline
fixture file.

Corpus: the INLINE2 family's six batteries (color 67, strong
60, em 50, u 60, strike 54, interactions 63 = 354 cases) plus
the nine smoke sources (363 lines), written to
inline2-all-cases.jsonl beside this script.

Assembly fact (the R3.4 stray-closer precedent): the Strong
and Strikethrough batteries both number their cases s01.. in
their own files, with different sources under the shared ids.
The stage corpus renames the Strikethrough battery's ids to
strike-sNN on assembly only; the Strong battery keeps sNN.
The merged fixture file (expected-inline2-full.jsonl, the six
pre-seeded conformance-r3/expected-*-states.jsonl files
concatenated) applies the same renaming to the strike fixture
records, so every side of every comparison keys identically.
"""

import glob
import json
import os

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
IN2 = os.path.join(ROOT, "conformance-refphp", "inline2")
SMOKE = os.path.join(ROOT, "conformance-refphp", "smoke")
FIXDIR = os.path.join(ROOT, "conformance-r3")

BATTERIES = [
    ("color", os.path.join(IN2, "color", "battery.jsonl"), None),
    ("strong", os.path.join(IN2, "strong", "battery.jsonl"), None),
    ("em", os.path.join(IN2, "em", "battery.jsonl"), None),
    ("u", os.path.join(IN2, "u", "battery.jsonl"), None),
    ("strike", os.path.join(IN2, "strike", "battery.jsonl"),
     lambda cid: "strike-" + cid),
    ("x", os.path.join(IN2, "xbattery.jsonl"), None),
]

FIXTURES = [
    ("color", "expected-color-states.jsonl", None),
    ("strong", "expected-strong-states.jsonl", None),
    ("em", "expected-em-states.jsonl", None),
    ("u", "expected-u-states.jsonl", None),
    ("strike", "expected-strike-states.jsonl",
     lambda cid: "strike-" + cid),
    ("x", "expected-i2x-states.jsonl", None),
]


def read_jsonl(path):
    with open(path) as f:
        return [json.loads(line) for line in f if line.strip()]


def main():
    cases = []
    for _name, path, rename in BATTERIES:
        for rec in read_jsonl(path):
            if rename is not None:
                rec = dict(rec, id=rename(rec["id"]))
            cases.append(rec)
    for txt in sorted(glob.glob(os.path.join(SMOKE, "*.txt"))):
        name = os.path.splitext(os.path.basename(txt))[0]
        with open(txt) as f:
            cases.append({"id": f"smoke-{name}", "source": f.read()})
    out = os.path.join(HERE, "inline2-all-cases.jsonl")
    with open(out, "w") as f:
        for rec in cases:
            f.write(json.dumps(rec) + "\n")
    ids = [c["id"] for c in cases]
    assert len(ids) == len(set(ids)), "corpus ids not unique"
    print(f"corpus: {len(cases)} cases -> {out}")

    full = []
    for _name, fname, rename in FIXTURES:
        for rec in read_jsonl(os.path.join(FIXDIR, fname)):
            if rename is not None:
                rec = dict(rec, id=rename(rec["id"]))
            full.append(rec)
    out = os.path.join(HERE, "expected-inline2-full.jsonl")
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
