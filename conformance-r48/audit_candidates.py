#!/usr/bin/env python3
"""R4.8 candidate audit: compare the fresh family renders
(conformance-r48/renders-full.jsonl, ids namespaced by battery)
against the historical corrected reference records from the
R2/REFVAL stages, battery by battery. Any disagreement is
printed for individual adjudication (harness-context framing
vs substantive divergence), in the R4.7 gate discipline.

Historical counterparts:
  freelink-*    link/freelink/ref-render-after.jsonl
  module-*      module/module/ref-render-after.jsonl
  module654-*   module/module654/ref-render-final.jsonl
  image-*       para/image/ref-render-after.jsonl (if present)
  gallery-*     refval/gallery/ref-render-corrected.jsonl
  user-*        refval/user/ref-render-corrected.jsonl
  file-*        refval/file/ref-render-corrected.jsonl
  filesupp-*    refval/file/supplementary-render.jsonl
  gallerysupp-* refval/gallery/ref-render-corrected.jsonl (pg ids)
"""
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
REFPHP = os.path.join(HERE, "..", "conformance-refphp")

PAIRS = [
    ("freelink-", "link/freelink/ref-render-after.jsonl"),
    ("linkx-", "link/x-ref-render-final.jsonl"),
    ("module-", "module/module/ref-render-after.jsonl"),
    ("modulex-", "module/x-ref-render-final.jsonl"),
    ("module654-", "module/module654/ref-render-final.jsonl"),
    ("image-", "para/image/ref-render-final.jsonl"),
    ("gallery-", "refval/gallery/ref-render-corrected.jsonl"),
    ("gallerysupp-", "refval/gallery/supplementary-render.jsonl"),
    ("user-", "refval/user/ref-render-corrected.jsonl"),
    ("file-", "refval/file/ref-render-corrected.jsonl"),
    ("filesupp-", "refval/file/supplementary-render.jsonl"),
]


def load(path):
    out = {}
    with open(path, encoding="utf-8") as fh:
        for line in fh:
            line = line.strip()
            if line:
                rec = json.loads(line)
                out[rec["id"]] = rec
    return out


def canon(rec):
    if rec is None:
        return None
    if "error" in rec:
        return ("error", rec["error"])
    return ("output", json.dumps(rec.get("output")))


def main():
    fresh = load(os.path.join(HERE, "renders-full.jsonl"))
    total_diff = 0
    for prefix, rel in PAIRS:
        path = os.path.join(REFPHP, rel)
        if not os.path.exists(path):
            print(f"== {prefix}: historical record {rel} ABSENT, skipped")
            continue
        hist = load(path)
        mine = {cid[len(prefix):]: rec for cid, rec in fresh.items()
                if cid.startswith(prefix)}
        diffs = []
        for cid in sorted(set(mine) | set(hist)):
            if canon(mine.get(cid)) != canon(hist.get(cid)):
                diffs.append(cid)
        print(f"== {prefix}: fresh {len(mine)} vs historical "
              f"{len(hist)}; disagreements {len(diffs)}")
        for cid in diffs:
            total_diff += 1
            print(f"  DIFF {prefix}{cid}")
            print(f"    fresh: {canon(mine.get(cid))!r:.300}")
            print(f"    hist:  {canon(hist.get(cid))!r:.300}")
    print(f"TOTAL DISAGREEMENTS {total_diff}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
