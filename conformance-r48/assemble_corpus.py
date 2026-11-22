#!/usr/bin/env python3
"""R4.8 family corpus assembly.

Assembles the R4.8 family corpus from the R2/REFVAL batteries of
the seven rules, namespacing every case id by its battery (the
R4.3 discipline: the R2 batteries reuse short ids across batteries
with different sources, so dedupe by bare id would silently drop
distinct cases). Collisions are verified programmatically: every
battery's raw id multiset is counted, the assembled id set is
asserted unique, and the per-battery counts are written to
provenance.json so the assembly is auditable.

Inputs (relative to conformance-refphp/):
  link/freelink/battery.jsonl      -> freelink-<id>     (60)
  link/xbattery.jsonl              -> linkx-<id>        (36)
  module/module/battery.jsonl      -> module-<id>       (52)
  module/module654/battery.jsonl   -> module654-<id>    (59)
  module/xbattery.jsonl            -> modulex-<id>      (29)
  para/image/battery.jsonl         -> image-<id>        (68)
  next/math/battery.jsonl          -> math-<id>         (76)
  refval/gallery/battery.jsonl     -> gallery-<id>      (88)
  refval/gallery/supplementary.jsonl -> gallerysupp-<id> (4)
  refval/user/battery.jsonl        -> user-<id>         (82)
  refval/file/battery.jsonl        -> file-<id>         (83)
  refval/file/supplementary.jsonl  -> filesupp-<id>     (6)

Outputs: cases.jsonl (id, source[, tags]) and provenance.json in
this directory.
"""
import json
import os
import sys
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
REFPHP = os.path.join(HERE, "..", "conformance-refphp")

BATTERIES = [
    ("freelink", "link/freelink/battery.jsonl"),
    ("linkx", "link/xbattery.jsonl"),
    ("module", "module/module/battery.jsonl"),
    ("module654", "module/module654/battery.jsonl"),
    ("modulex", "module/xbattery.jsonl"),
    ("image", "para/image/battery.jsonl"),
    ("math", "next/math/battery.jsonl"),
    ("gallery", "refval/gallery/battery.jsonl"),
    ("gallerysupp", "refval/gallery/supplementary.jsonl"),
    ("user", "refval/user/battery.jsonl"),
    ("file", "refval/file/battery.jsonl"),
    ("filesupp", "refval/file/supplementary.jsonl"),
]


def main():
    cases = []
    provenance = {}
    raw_ids = Counter()
    for ns, rel in BATTERIES:
        path = os.path.join(REFPHP, rel)
        rows = []
        with open(path, encoding="utf-8") as fh:
            for line in fh:
                line = line.strip()
                if line:
                    rows.append(json.loads(line))
        ids = [r["id"] for r in rows]
        raw_ids.update(ids)
        dup = [i for i, n in Counter(ids).items() if n > 1]
        assert not dup, f"{rel}: duplicate ids inside one battery: {dup}"
        for r in rows:
            rec = {"id": f"{ns}-{r['id']}", "source": r["source"]}
            if "tags" in r:
                rec["tags"] = r["tags"]
            cases.append(rec)
        provenance[ns] = {"file": rel, "count": len(rows)}
    all_ids = [c["id"] for c in cases]
    assert len(all_ids) == len(set(all_ids)), "namespaced id collision"
    cross = sum(1 for i, n in raw_ids.items() if n > 1)
    provenance["_total"] = len(cases)
    provenance["_raw_id_collisions_across_batteries"] = cross
    with open(os.path.join(HERE, "cases.jsonl"), "w", encoding="utf-8") as fh:
        for c in cases:
            fh.write(json.dumps(c, ensure_ascii=False) + "\n")
    with open(os.path.join(HERE, "provenance.json"), "w", encoding="utf-8") as fh:
        json.dump(provenance, fh, indent=1, ensure_ascii=False)
        fh.write("\n")
    print(f"assembled {len(cases)} cases; raw ids shared across "
          f"batteries: {cross}; per-battery: "
          + ", ".join(f"{k}={v['count']}" for k, v in provenance.items()
                      if not k.startswith("_")))
    return 0


if __name__ == "__main__":
    sys.exit(main())
