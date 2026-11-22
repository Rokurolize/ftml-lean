#!/usr/bin/env python3
"""Assemble the R3.15 stage corpus (BRIEF-R3.15.md, corpus
assembly section). Three sources:

  (a) existing cases in the canonical record whose
      full-pipeline behavior exercises one of the five rules:
      the fifteen R3 stage corpora in the canonical record are
      pooled, run through the full pipeline, and every case
      whose full-pipeline token table holds a Horiz,
      Separator, Clearfloat, Break, or Center token is
      selected. The recorded exclusion cases of R3.9, R3.10,
      R3.11, R3.13, and R3.14 are members of those corpora and
      are asserted present in the selection by name.
  (b) authored targeted cases (authored_cases.py).
  (c) the nine smoke sources.

Modes:
  candidates  pool the canonical corpora (dedupe by id; an id
              colliding with a different source is renamed
              with its corpus label, the R3.13 precedent) and
              write candidates-a.jsonl.
  finish      read candidates-a-full.jsonl (the full-pipeline
              run over the candidates, produced by
              run_oracle.py full), select source (a), merge
              all three sources, and write
              middle-all-cases.jsonl plus
              corpus-provenance.json (per-case provenance).

Provenance is recorded per case in corpus-provenance.json:
{"kind": "canonical"|"authored"|"smoke", "detail": ...}.
"""

import glob
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
CANON = os.path.expanduser("~/workspace/ftml-lean-equivalence")
SMOKE = os.path.join(ROOT, "conformance-refphp", "smoke")

FAMILY = ("Horiz", "Separator", "Clearfloat", "Break", "Center")

CORPORA = [
    ("r31smoke", "conformance-r3/smoke-cases.jsonl"),
    ("r31code", "conformance-refphp/code/battery.jsonl"),
    ("r32formraw", "conformance-r33/formraw-cases.jsonl"),
    ("r33module", "conformance-r33/module-all-cases.jsonl"),
    ("r34next", "conformance-r34/next-all-cases.jsonl"),
    ("r35link", "conformance-r35/link-all-cases.jsonl"),
    ("r36notes", "conformance-r36/notes-all-cases.jsonl"),
    ("r37block", "conformance-r37/block-all-cases.jsonl"),
    ("r38contain", "conformance-r38/contain-all-cases.jsonl"),
    ("r39list", "conformance-r39/list-all-cases.jsonl"),
    ("r310table", "conformance-r310/table-all-cases.jsonl"),
    ("r311para", "conformance-r311/para-all-cases.jsonl"),
    ("r312inline1", "conformance-r312/inline1-all-cases.jsonl"),
    ("r313inline2", "conformance-r313/inline2-all-cases.jsonl"),
    ("r314inline3", "conformance-r314/inline3-all-cases.jsonl"),
]

# Recorded exclusion / disagreement cases the brief names for
# the retirement re-runs, with the stage that recorded them.
# (lb35 is Note's and smoke-include is Include's: not this
# stage's, listed in the report only.)
NAMED = {
    "b03-continuation-lines": "r39",
    "t35-30-line-continuation": "r310",
    "n38-19-before-hr": "r311", "n38-20-after-hr": "r311",
    "n38-43-underscore-break": "r311",
    "n38-44-underscore-doubled": "r311",
    "pg33-heading-above": "r311", "pg34-heading-below": "r311",
    "pg43-horiz-between": "r311", "pg46-mixed-blocks": "r311",
    "pg49-only-heading": "r311", "x23-text-heading-text": "r311",
    "x28-heading-text-list": "r311",
    "x2-05-scored-span-then-heading": "r311",
    "s33": "r313", "sup33": "r314",
    "typo10": "r314", "typo12": "r314", "typo14": "r314",
    "typo16": "r314", "typo18": "r314",
}


def read_jsonl(path):
    with open(path) as f:
        return [json.loads(line) for line in f if line.strip()]


def write_jsonl(path, recs):
    with open(path, "w") as f:
        for rec in recs:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")


def token_rules(rec):
    toks = rec.get("tokens")
    if isinstance(toks, dict):
        entries = toks.values()
    elif isinstance(toks, list):
        entries = toks
    else:
        return set()
    return {e[0] for e in entries}


def candidates():
    seen = {}
    order = []
    renames = []
    for label, rel in CORPORA:
        for rec in read_jsonl(os.path.join(CANON, rel)):
            cid, src = rec["id"], rec["source"]
            if cid in seen:
                if seen[cid]["source"] == src:
                    continue
                new = f"{cid}@{label}"
                renames.append((cid, new))
                rec = dict(rec, id=new)
                cid = new
            seen[cid] = rec
            order.append(cid)
    out = [seen[c] for c in order]
    write_jsonl(os.path.join(HERE, "candidates-a.jsonl"), out)
    print(f"candidates: {len(out)} unique cases "
          f"({len(renames)} id-collision renames: {renames})")


def finish():
    full = {r["id"]: r for r in
            read_jsonl(os.path.join(HERE, "candidates-a-full.jsonl"))}
    cand = {r["id"]: r for r in
            read_jsonl(os.path.join(HERE, "candidates-a.jsonl"))}
    prov = {}
    cases = []
    selected = []
    for cid, rec in cand.items():
        frec = full.get(cid)
        if frec is None or "tokens" not in frec:
            continue
        rules = token_rules(frec) & set(FAMILY)
        if rules:
            selected.append(cid)
            cases.append(rec)
            prov[cid] = {"kind": "canonical",
                         "detail": "full pipeline claims "
                                   + ",".join(sorted(rules))}
    missing_named = [c for c in NAMED if c not in prov]
    print(f"source (a): {len(selected)} cases selected")
    print(f"named cases missing from (a): {missing_named}")
    for rec in read_jsonl(os.path.join(HERE, "authored-cases.jsonl")):
        assert rec["id"] not in prov, rec["id"]
        cases.append(rec)
        prov[rec["id"]] = {"kind": "authored",
                           "detail": "authored_cases.py"}
    for txt in sorted(glob.glob(os.path.join(SMOKE, "*.txt"))):
        name = os.path.splitext(os.path.basename(txt))[0]
        cid = f"smoke-{name}"
        with open(txt) as f:
            src = f.read()
        if cid in prov:
            # a smoke case already selected from a canonical
            # corpus keeps that provenance; do not duplicate
            continue
        cases.append({"id": cid, "source": src})
        prov[cid] = {"kind": "smoke", "detail": "conformance-refphp/smoke"}
    write_jsonl(os.path.join(HERE, "middle-all-cases.jsonl"), cases)
    with open(os.path.join(HERE, "corpus-provenance.json"), "w") as f:
        json.dump(prov, f, indent=1, sort_keys=True)
    kinds = {}
    for v in prov.values():
        kinds[v["kind"]] = kinds.get(v["kind"], 0) + 1
    print(f"corpus: {len(cases)} cases; provenance: {kinds}")


if __name__ == "__main__":
    if sys.argv[1] == "candidates":
        candidates()
    elif sys.argv[1] == "finish":
        finish()
    else:
        raise SystemExit(__doc__)
