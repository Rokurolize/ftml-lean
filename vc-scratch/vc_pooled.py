#!/usr/bin/env python3
"""VERIFY-COMBINED pooled CAPSTONE recheck, lane-owned.

Uses the retained 4,205-case pooled-cases.jsonl verbatim (no corpus
reassembly), regenerates the PHP full-pipeline side with run_oracle.run,
runs the freshly rebuilt capstone driver through the serial Lean queue
wrapper, and applies pooled_run.py / compare.py's canonical comparison
logic unchanged (the loop is copied verbatim from
conformance-refcorr5/run_pooled_recheck.py). Every output goes to a
uniquely named vc-scratch file; no canonical artifact is overwritten.
"""
import json
import os
import subprocess
import sys

ROOT = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-verify-combined"
CAP = os.path.join(ROOT, "conformance-capstone")
SC = os.path.join(ROOT, "vc-scratch")
WRAP = "/home/roku/.local/state/wikijump/muse-bhl/tools/lean-build.sh"
LFWD = os.path.join(ROOT, "lean-ftml")
EXE = os.path.join(LFWD, ".lake", "build", "bin", "lean-ftml-conformance-capstone")
sys.path.insert(0, CAP)

import compare  # noqa: E402
import pooled_run  # noqa: E402
import run_oracle  # noqa: E402


def main():
    cases_path = os.path.join(CAP, "pooled-cases.jsonl")  # retained, verbatim
    php_path = os.path.join(SC, "vc-pooled-php-full.jsonl")
    lean_path = os.path.join(SC, "vc-pooled-lean.jsonl")

    rc = run_oracle.run("full", cases_path, php_path)
    print("PHP oracle rc=%d" % rc)

    with open(cases_path, "rb") as fh:
        blob = fh.read()
    proc = subprocess.run([WRAP, LFWD, EXE], input=blob,
                          capture_output=True, cwd=SC)
    print("LEAN driver (via wrapper) rc=%d stderr-bytes=%d" %
          (proc.returncode, len(proc.stderr)))
    if proc.returncode != 0:
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
    with open(os.path.join(SC, "vc-pooled-comparison.txt"), "w") as f:
        f.write("\n".join(lines) + "\n")
    with open(os.path.join(SC, "vc-pooled-mismatches.json"), "w") as f:
        json.dump(mismatches, f, indent=1, ensure_ascii=False)
    print("\n".join(lines))


if __name__ == "__main__":
    main()
