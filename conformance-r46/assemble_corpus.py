#!/usr/bin/env python3
"""R4.6 corpus assembly (the R4.3 discipline: the R2 batteries reuse
short ids across batteries with different sources, so every record's
id is namespaced by its battery (<battery>/<orig-id>) and every
record is kept; the script verifies programmatically that ids are
unique within each battery file and counts the cross-battery
collisions it finds, split into same-source and different-source).

Family sources (the brief's R2 stage corpora: link, next, contain,
the R3.17 anchor battery, and the REFVAL sets for Button and File):

  eref        conformance-refphp/link/equationreference/battery.jsonl
  linkx       conformance-refphp/link/xbattery.jsonl
  date        conformance-refphp/next/date/battery.jsonl
  iframe      conformance-refphp/next/iframe/battery.jsonl
  nextx       conformance-refphp/next/xbattery.jsonl
  collapsible conformance-refphp/contain/collapsible/battery.jsonl
  div         conformance-refphp/contain/div/battery.jsonl
  size        conformance-refphp/contain/size/battery.jsonl
  span        conformance-refphp/contain/span/battery.jsonl
  tabview     conformance-refphp/contain/tabview/battery.jsonl
  containx    conformance-refphp/contain/xbattery.jsonl
  anchor      conformance-refphp/anchor/battery.jsonl
  button      conformance-refphp/refval/button/battery.jsonl
  file        conformance-refphp/refval/file/battery.jsonl

Also copies the R4.5-assembled regression corpora byte-identically:
  notes365-cases.jsonl (365) from conformance-r45/
  prose740-cases.jsonl (740) from conformance-r45/

Outputs (this directory):
  family-cases.jsonl, family-provenance.json,
  notes365-cases.jsonl, prose740-cases.jsonl
"""

import json
import os
import shutil
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
WORKTREE = os.path.dirname(HERE)

FAMILY_SOURCES = [
    ("eref", "conformance-refphp/link/equationreference/battery.jsonl"),
    ("linkx", "conformance-refphp/link/xbattery.jsonl"),
    ("date", "conformance-refphp/next/date/battery.jsonl"),
    ("iframe", "conformance-refphp/next/iframe/battery.jsonl"),
    ("nextx", "conformance-refphp/next/xbattery.jsonl"),
    ("collapsible", "conformance-refphp/contain/collapsible/battery.jsonl"),
    ("div", "conformance-refphp/contain/div/battery.jsonl"),
    ("size", "conformance-refphp/contain/size/battery.jsonl"),
    ("span", "conformance-refphp/contain/span/battery.jsonl"),
    ("tabview", "conformance-refphp/contain/tabview/battery.jsonl"),
    ("containx", "conformance-refphp/contain/xbattery.jsonl"),
    ("anchor", "conformance-refphp/anchor/battery.jsonl"),
    ("button", "conformance-refphp/refval/button/battery.jsonl"),
    ("file", "conformance-refphp/refval/file/battery.jsonl"),
]

COPIES = [
    ("notes365-cases.jsonl", "conformance-r45/notes365-cases.jsonl", 365),
    ("prose740-cases.jsonl", "conformance-r45/prose740-cases.jsonl", 740),
]


def read_jsonl(path):
    with open(path, encoding="utf-8") as f:
        return [json.loads(line) for line in f if line.strip()]


def main():
    cases = []
    provenance = {}
    per_source = {}
    seen = {}  # bare id -> (battery, source) for collision counting
    collisions_same = 0
    collisions_diff = 0
    for battery, rel in FAMILY_SOURCES:
        path = os.path.join(WORKTREE, rel)
        recs = read_jsonl(path)
        ids = [r["id"] for r in recs]
        if len(ids) != len(set(ids)):
            print(f"ERROR: duplicate ids within {rel}", file=sys.stderr)
            sys.exit(1)
        n = 0
        for rec in recs:
            bare = rec["id"]
            if bare in seen:
                if seen[bare][1] == rec.get("source"):
                    collisions_same += 1
                else:
                    collisions_diff += 1
            else:
                seen[bare] = (battery, rec.get("source"))
            new = dict(rec)
            new["id"] = f"{battery}/{bare}"
            cases.append(new)
            provenance[new["id"]] = rel
            n += 1
        per_source[rel] = {"battery": battery, "lines_in": n, "kept": n}
    with open(os.path.join(HERE, "family-cases.jsonl"), "w",
              encoding="utf-8") as f:
        for rec in cases:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")
    with open(os.path.join(HERE, "family-provenance.json"), "w",
              encoding="utf-8") as f:
        json.dump({"per_source": per_source, "total": len(cases),
                   "bare_id_collisions_same_source": collisions_same,
                   "bare_id_collisions_different_source": collisions_diff,
                   "provenance": provenance}, f, indent=1, sort_keys=True)
    print(f"family-cases.jsonl: {len(cases)} cases")
    for rel, info in per_source.items():
        print(f"  [{info['battery']}] {rel}: {info['lines_in']} in, "
              f"{info['kept']} kept")
    print(f"bare-id collisions across batteries: {collisions_same} "
          f"same-source, {collisions_diff} different-source (all kept, "
          f"namespaced)")
    for out_name, rel, expected in COPIES:
        src = os.path.join(WORKTREE, rel)
        dst = os.path.join(HERE, out_name)
        shutil.copyfile(src, dst)
        n = len(read_jsonl(dst))
        print(f"{out_name}: copied {n} cases from {rel}")
        if n != expected:
            print(f"WARNING: expected {expected} cases in {out_name}",
                  file=sys.stderr)
            sys.exit(1)


if __name__ == "__main__":
    main()
