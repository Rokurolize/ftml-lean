#!/usr/bin/env python3
"""REFCORR4 pooled CAPSTONE recheck without corpus reassembly.

The canonical conformance-capstone/pooled_run.py re-assembles
pooled-cases.jsonl from SOURCES, but this tree no longer carries the
materials/ directory that contributed 3,139 of the 4,205 retained pool
cases. Running that reassembly here would silently shrink the pool. This
lane-owned variant therefore uses the retained 4,205-case
pooled-cases.jsonl verbatim, regenerates the PHP side with run_oracle.run
("full", 68 rules) and the Lean side with the capstone driver, and applies
pooled_run.py's own canon_state comparison and output format unchanged.
All four outputs are written in place; predecessors are kept beside them
as .before-refcorr4 files.
"""
import json
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
CAP = os.path.join(ROOT, "conformance-capstone")
sys.path.insert(0, CAP)

import compare  # noqa: E402
import pooled_run  # noqa: E402
import run_oracle  # noqa: E402


def main():
    cases_path = os.path.join(CAP, "pooled-cases.jsonl")
    php_path = os.path.join(CAP, "pooled-php-full.jsonl")
    lean_path = os.path.join(CAP, "pooled-lean.jsonl")
    for path in (cases_path, php_path, lean_path,
                 os.path.join(CAP, "pooled-comparison.txt"),
                 os.path.join(CAP, "pooled-mismatches.json"),
                 os.path.join(CAP, "pooled-provenance.json")):
        bak = path + ".before-refcorr4"
        if not os.path.exists(bak):
            with open(path, "rb") as src, open(bak, "wb") as dst:
                dst.write(src.read())
    run_oracle.run("full", cases_path, php_path)
    with open(cases_path, "rb") as fh:
        proc = subprocess.run([pooled_run.EXE], input=fh.read(),
                              capture_output=True)
    if proc.returncode != 0:
        print("LEAN DRIVER FAILED rc=%d" % proc.returncode)
        print(proc.stderr.decode("utf-8", "replace")[:4000])
        sys.exit(1)
    with open(lean_path, "wb") as fh:
        fh.write(proc.stdout)
    php = compare.load_jsonl(php_path)
    lean = compare.load_jsonl(lean_path)
    cases = pooled_run.read_jsonl(cases_path)
    mismatches = {}
    fatal_agree = 0
    npass = 0
    for rec in cases:
        cid = rec["id"]
        a, b = php.get(cid), lean.get(cid)
        if a is None or b is None:
            mismatches[cid] = {"components": ["missing-record"],
                               "source": rec.get("source", "")}
            continue
        af, bf = a.get("fatal"), b.get("fatal")
        if af is not None or bf is not None:
            if af is not None and af == bf:
                npass += 1
                fatal_agree += 1
            else:
                mismatches[cid] = {"components": ["fatal"],
                                   "detail": "php fatal=%r lean fatal=%r" % (af, bf),
                                   "source": rec.get("source", "")}
            continue
        if "error" in a or "error" in b:
            mismatches[cid] = {"components": ["error-record"],
                               "detail": "php error=%r lean error=%r" % (a.get("error"), b.get("error")),
                               "source": rec.get("source", "")}
            continue
        has_inc = ("inclusions" in a and "inclusions" in b)
        ca = compare.canon_state(a, include_doc_inc=has_inc)
        cb = compare.canon_state(b, include_doc_inc=has_inc)
        if ca == cb:
            npass += 1
        else:
            diff = [pooled_run.COMPONENTS[i] for i in range(len(pooled_run.COMPONENTS))
                    if ca[i] != cb[i]]
            mismatches[cid] = {"components": diff,
                               "source": rec.get("source", "")}
    lines = ["pooled cases: %d (retained case list, no reassembly)" % len(cases),
             "PASS: %d/%d (including %d parse-fatal agreements)" % (npass, len(cases), fatal_agree),
             "MISMATCH: %d" % len(mismatches)]
    for cid in sorted(mismatches):
        lines.append("  %s: %s" % (cid, ",".join(mismatches[cid]["components"])))
    with open(os.path.join(CAP, "pooled-comparison.txt"), "w") as f:
        f.write("\n".join(lines) + "\n")
    with open(os.path.join(CAP, "pooled-mismatches.json"), "w") as f:
        json.dump(mismatches, f, indent=1, ensure_ascii=False)
    print("\n".join(lines))


if __name__ == "__main__":
    main()
