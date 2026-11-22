#!/usr/bin/env python3
"""Compare cached live captures with the tree's own reference render, per case.

Prints raw strings first (entities and break spelling intact), then a
conservative canonical form that ignores only inter-tag whitespace and the
`<br />`/`<br>` spelling. No entity decoding is performed: the numeric-entity
spelling is itself a possible surface, so hiding it would lose evidence.
"""
import json
import os
import re
import sys

OUT = os.path.dirname(os.path.abspath(__file__))


def load_json(name):
    with open(os.path.join(OUT, name), encoding="utf-8") as fh:
        return json.load(fh)


def load_jsonl(name):
    with open(os.path.join(OUT, name), encoding="utf-8") as fh:
        return {r["id"]: r for r in
                (json.loads(line) for line in fh if line.strip())}


def canon(s):
    s = s.replace("<br />", "<br>")
    s = re.sub(r">\s+<", "><", s)
    return s.strip()


def main():
    captures = {}
    for name in ("captures-untagged.json", "captures-tagged.json",
                 "captures2-untagged.json", "captures2-tagged.json",
                 "captures3-untagged.json", "captures3-tagged.json"):
        path = os.path.join(OUT, name)
        if os.path.exists(path):
            captures.update(load_json(name))
    refs = {}
    for name in ("ref-render.jsonl", "ref2-render.jsonl", "ref3-render.jsonl"):
        path = os.path.join(OUT, name)
        if os.path.exists(path):
            refs.update(load_jsonl(name))
    ids = sorted(set(captures) & set(refs))
    for cid in ids:
        cap = captures[cid]
        ref = refs[cid].get("output", "ERROR: " + str(refs[cid].get("error")))
        live = cap.get("html", "")
        print("=== " + cid + " ===")
        print("page: " + str(cap.get("fullname")))
        print("valid=%s stable=%s source_match=%s" %
              (cap.get("valid"), cap.get("stable"), cap.get("saved_source_matches")))
        print("source: " + json.dumps(cap.get("source"), ensure_ascii=False))
        print("ref:    " + json.dumps(ref, ensure_ascii=False))
        print("live:   " + json.dumps(live, ensure_ascii=False))
        print("canon_equal=" + str(canon(ref) == canon(live)))
    print("\nTOTAL compared=%d, canonical-equal=%d" %
          (len(ids), sum(1 for cid in ids
                         if canon(refs[cid].get("output", "")) ==
                         canon(captures[cid].get("html", "")))))
    missing = sorted(set(refs) - set(captures))
    if missing:
        print("MISSING LIVE CAPTURES: " + ", ".join(missing))


if __name__ == "__main__":
    main()
