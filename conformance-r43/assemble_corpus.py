#!/usr/bin/env python3
"""R4.3 corpus assembly (coordinator pattern, cf. conformance-r42/
assemble_corpus.py, with one correction this stage's corpora force:
the R2 inline batteries reuse short ids (s01, x01, ...) across rule
batteries and across stages with DIFFERENT sources behind them, so
ids are unique only within one battery file. The family assembly
therefore namespaces every record's id by its battery
(<stage>-<battery>/<orig-id>) and keeps every record; a programmatic
check during assembly verifies that ids are unique within each
battery file and reports the cross-battery collisions it found.)

Family sources (the brief's three R2 stage corpora; per-rule
batteries plus the stage cross-batteries):

  inline1 conformance-refphp/inline1/{url,email,mathinline,
          interwiki}/battery.jsonl, conformance-refphp/inline1/
          xbattery.jsonl
  inline2 conformance-refphp/inline2/{color,strong,em,u,strike}/
          battery.jsonl, conformance-refphp/inline2/xbattery.jsonl
  inline3 conformance-refphp/inline3/{tt,sup,sub,typo,tighten}/
          battery.jsonl, conformance-refphp/inline3/xbattery.jsonl

Also assembles the R4.1 regression corpus (the 365-case NOTES
battery set of REPORT-R4.md section 3, whose ids are globally
distinct by construction) from conformance-refphp/notes/, and
copies the R4.2 family corpus (740 cases, assembled and verified by
conformance-r42/assemble_corpus.py) for the R4.2 regression gate.

Outputs (this directory):
  family-cases.jsonl, family-provenance.json,
  notes365-cases.jsonl, notes365-provenance.json,
  prose740-cases.jsonl (copied from conformance-r42/family-cases.jsonl)
"""

import json
import os
import shutil
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
WORKTREE = os.path.dirname(HERE)

FAMILY_SOURCES = [
    ("inline1", "url", "conformance-refphp/inline1/url/battery.jsonl"),
    ("inline1", "email", "conformance-refphp/inline1/email/battery.jsonl"),
    ("inline1", "mathinline", "conformance-refphp/inline1/mathinline/battery.jsonl"),
    ("inline1", "interwiki", "conformance-refphp/inline1/interwiki/battery.jsonl"),
    ("inline1", "xbattery", "conformance-refphp/inline1/xbattery.jsonl"),
    ("inline2", "color", "conformance-refphp/inline2/color/battery.jsonl"),
    ("inline2", "strong", "conformance-refphp/inline2/strong/battery.jsonl"),
    ("inline2", "em", "conformance-refphp/inline2/em/battery.jsonl"),
    ("inline2", "u", "conformance-refphp/inline2/u/battery.jsonl"),
    ("inline2", "strike", "conformance-refphp/inline2/strike/battery.jsonl"),
    ("inline2", "xbattery", "conformance-refphp/inline2/xbattery.jsonl"),
    ("inline3", "tt", "conformance-refphp/inline3/tt/battery.jsonl"),
    ("inline3", "sup", "conformance-refphp/inline3/sup/battery.jsonl"),
    ("inline3", "sub", "conformance-refphp/inline3/sub/battery.jsonl"),
    ("inline3", "typo", "conformance-refphp/inline3/typo/battery.jsonl"),
    ("inline3", "tighten", "conformance-refphp/inline3/tighten/battery.jsonl"),
    ("inline3", "xbattery", "conformance-refphp/inline3/xbattery.jsonl"),
]

NOTES_SOURCES = [
    ("notes", "conformance-refphp/notes/footnote/battery.jsonl"),
    ("notes", "conformance-refphp/notes/footnoteitem/battery.jsonl"),
    ("notes", "conformance-refphp/notes/footnoteblock/battery.jsonl"),
    ("notes", "conformance-refphp/notes/bibitem/battery.jsonl"),
    ("notes", "conformance-refphp/notes/bibliography/battery.jsonl"),
    ("notes", "conformance-refphp/notes/bibcite/battery.jsonl"),
    ("notes", "conformance-refphp/notes/xbattery.jsonl"),
    ("notes", "conformance-refphp/notes/audit/state-leak-battery.jsonl"),
]


def read_jsonl(path):
    with open(path, encoding="utf-8") as f:
        return [json.loads(line) for line in f if line.strip()]


def assemble_family():
    cases = []
    provenance = {}
    per_source = {}
    raw_id_collisions = 0
    seen_raw = {}
    for stage, battery, rel in FAMILY_SOURCES:
        path = os.path.join(WORKTREE, rel)
        recs = read_jsonl(path)
        ids_in_file = [r["id"] for r in recs]
        if len(ids_in_file) != len(set(ids_in_file)):
            print(f"ERROR: duplicate ids inside {rel}", file=sys.stderr)
            sys.exit(1)
        for rec in recs:
            raw = rec["id"]
            if raw in seen_raw:
                prev = seen_raw[raw]
                if prev.get("source") != rec.get("source") or \
                        prev.get("tags") != rec.get("tags"):
                    raw_id_collisions += 1
            else:
                seen_raw[raw] = rec
            nid = f"{stage}-{battery}/{raw}"
            out = dict(rec)
            out["id"] = nid
            cases.append(out)
            provenance[nid] = {"battery": f"{stage}/{battery}",
                               "file": rel, "orig_id": raw}
        per_source[rel] = {"battery": f"{stage}/{battery}",
                           "lines_in": len(recs)}
        print(f"  [{stage}/{battery}] {rel}: {len(recs)} in")
    cases.sort(key=lambda r: r["id"])
    with open(os.path.join(HERE, "family-cases.jsonl"), "w",
              encoding="utf-8") as f:
        for rec in cases:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")
    with open(os.path.join(HERE, "family-provenance.json"), "w",
              encoding="utf-8") as f:
        json.dump({"per_source": per_source, "total": len(cases),
                   "cross_battery_id_collisions_with_different_sources":
                       raw_id_collisions,
                   "provenance": provenance}, f, indent=1, sort_keys=True)
    print(f"family-cases.jsonl: {len(cases)} cases "
          f"({raw_id_collisions} cross-battery raw-id collisions with "
          f"different sources, all kept under namespaced ids)")
    return len(cases)


def assemble_notes():
    pool = {}
    provenance = {}
    per_source = {}
    for battery, rel in NOTES_SOURCES:
        path = os.path.join(WORKTREE, rel)
        n_in = n_new = 0
        for rec in read_jsonl(path):
            n_in += 1
            cid = rec["id"]
            if cid not in pool:
                pool[cid] = rec
                provenance[cid] = battery + ":" + rel
                n_new += 1
            else:
                k = pool[cid]
                if k.get("source") != rec.get("source") or \
                        k.get("tags") != rec.get("tags"):
                    print(f"ERROR: differing duplicate in notes corpus: "
                          f"{cid}", file=sys.stderr)
                    sys.exit(1)
        per_source[rel] = (battery, n_in, n_new)
    cases = [pool[cid] for cid in sorted(pool)]
    with open(os.path.join(HERE, "notes365-cases.jsonl"), "w",
              encoding="utf-8") as f:
        for rec in cases:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")
    with open(os.path.join(HERE, "notes365-provenance.json"), "w",
              encoding="utf-8") as f:
        json.dump({"per_source": {rel: {"battery": b, "lines_in": i,
                                        "new_ids": n}
                                  for rel, (b, i, n) in per_source.items()},
                   "total": len(cases),
                   "provenance": provenance}, f, indent=1, sort_keys=True)
    print(f"notes365-cases.jsonl: {len(cases)} cases")
    return len(cases)


def main():
    n_family = assemble_family()
    n_notes = assemble_notes()
    src = os.path.join(WORKTREE, "conformance-r42", "family-cases.jsonl")
    dst = os.path.join(HERE, "prose740-cases.jsonl")
    shutil.copyfile(src, dst)
    n_prose = len(read_jsonl(dst))
    print(f"prose740-cases.jsonl: {n_prose} cases (copied from conformance-r42)")
    print(f"family corpus: {n_family} cases; notes regression corpus: "
          f"{n_notes} cases; prose regression corpus: {n_prose} cases")
    if n_notes != 365:
        print("WARNING: notes corpus is not 365 cases", file=sys.stderr)
        sys.exit(1)
    if n_prose != 740:
        print("WARNING: prose corpus is not 740 cases", file=sys.stderr)
        sys.exit(1)


if __name__ == "__main__":
    main()
