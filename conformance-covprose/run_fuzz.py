#!/usr/bin/env python3
"""Seeded within-class fuzz of the prose-core rules against the reference.

For every class of LeanFtml.CoverageProse.lean's enumeration, gen_cases.py
produces authored shapes realizing that class. The same cases run through

  * the reference PHP, ref-php/harness/state-restricted.php over the full
    68-rule pipeline (run_oracle.run("full")), and
  * the Lean mirror, lean-ftml/.lake/build/bin/lean-ftml-conformance-capstone
    (the same full pipeline),

and the canonical parse states are compared with the programme's compare.py
canon_state. Agreement is counted per class. A disagreement is a finding and
is written to disagreements-<seed>.json with the source and the differing
state components.

Usage: run_fuzz.py [seed] [per_class]
"""

import json
import subprocess
import sys
from pathlib import Path

import compare
import gen_cases
import run_oracle

HERE = Path(__file__).resolve().parent
LEAN = HERE.parent / "lean-ftml" / ".lake" / "build" / "bin" / \
    "lean-ftml-conformance-capstone"


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261122
    per_class = int(sys.argv[2]) if len(sys.argv) > 2 else 6
    cases = gen_cases.generate(seed, per_class)
    cpath = HERE / ("cases-%d.jsonl" % seed)
    with open(cpath, "w", encoding="utf-8") as fh:
        for c in cases:
            fh.write(json.dumps(c, ensure_ascii=False) + "\n")

    php_path = HERE / ("php-%d.jsonl" % seed)
    run_oracle.run("full", str(cpath), str(php_path))

    with open(cpath, "rb") as fh:
        proc = subprocess.run([str(LEAN)], stdin=fh, capture_output=True)
    if proc.returncode != 0:
        print("LEAN DRIVER FAILED rc=%d: %s" %
              (proc.returncode, proc.stderr[:1000]))
        sys.exit(1)
    lean_path = HERE / ("lean-%d.jsonl" % seed)
    with open(lean_path, "wb") as fh:
        fh.write(proc.stdout)
    if proc.stderr:
        print("lean stderr bytes:", len(proc.stderr))

    php = compare.load_jsonl(str(php_path))
    lean = compare.load_jsonl(str(lean_path))

    per = {}
    bad = []
    total = 0
    agree = 0
    components = ["segments", "tokens", "equations", "mathId", "footnotes",
                  "bibitems", "bibitemIds", "scoredAnchors", "inclusions",
                  "inclusionsNotExist"]
    for c in cases:
        cid = c["id"]
        a, b = php.get(cid), lean.get(cid)
        total += 1
        st = per.setdefault(c["class"], [0, 0])
        if a is None or b is None or "error" in a or "error" in b:
            bad.append({"id": cid, "class": c["class"],
                        "source": c["source"], "reason": "missing-or-error"})
            st[1] += 1
            continue
        af, bf = a.get("fatal"), b.get("fatal")
        if af or bf:
            if af == bf:
                agree += 1
                st[0] += 1
            else:
                bad.append({"id": cid, "class": c["class"],
                            "source": c["source"], "reason": "fatal"})
                st[1] += 1
            continue
        has_inc = ("inclusions" in a and "inclusions" in b)
        ca = compare.canon_state(a, include_doc_inc=has_inc)
        cb = compare.canon_state(b, include_doc_inc=has_inc)
        if ca == cb:
            agree += 1
            st[0] += 1
        else:
            diff = [components[i] for i in range(len(components))
                    if i < len(ca) and i < len(cb) and ca[i] != cb[i]]
            bad.append({"id": cid, "class": c["class"],
                        "source": c["source"], "components": diff})
            st[1] += 1

    with open(HERE / ("disagreements-%d.json" % seed), "w",
              encoding="utf-8") as fh:
        json.dump(bad, fh, indent=1, ensure_ascii=False)

    print("seed %d: %d/%d cases agree across %d classes; disagreements %d" %
          (seed, agree, total, len(per), len(bad)))
    for cls in sorted(per):
        a, b = per[cls]
        print("  %-16s %d/%d" % (cls, a, a + b))
    if bad:
        print("  first disagreements:", [x["id"] for x in bad[:20]])


if __name__ == "__main__":
    main()
