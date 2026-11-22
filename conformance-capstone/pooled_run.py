#!/usr/bin/env python3
"""CAPSTONE Gate 2 pooled full-pipeline conformance runner
(lane-written, in the retirement check's style; compare.py and
run_oracle.py are used unmodified).

Assembles the pooled corpus from, in order (dedupe by id, first
occurrence wins):
  1. materials/*-all-cases.jsonl (glob order)
  2. conformance-r3/smoke-cases.jsonl
  3. conformance-r33/{code,formraw,module,module-all,smoke}-cases
     (the R3.2 formraw corpus is housed under conformance-r33 in
     this tree, per conformance-r317/assemble_corpus.py's map;
     conformance-r32 itself holds only fuzz corpora and probes)
  4. conformance-r34/next-all-cases.jsonl
  5. conformance-r317/{final-all-cases,authored-cases}.jsonl
Fuzz corpora (fuzz-cases*.jsonl, reg*-fuzz-cases*.jsonl) and the
R3.17 pre-selection candidates-a.jsonl are excluded (fuzz is
Gate 4's domain; candidates-a is the unselected superset).

Runs run_oracle.py full over the pool (pooled-php-full.jsonl),
the capstone Lean exe over the pool (pooled-lean.jsonl), and
compares per case under compare.canon_state with the has_inc rule of compare.py main() (inclusion components compared only when both records carry the keys; the PHP drivers emit none).
Outputs pooled-comparison.txt (totals + per-mismatch differing
components) and pooled-mismatches.json (machine-readable detail
for classification).
"""
import glob
import json
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)

import compare  # noqa: E402
import run_oracle  # noqa: E402

EXE = os.path.join(ROOT, "lean-ftml", ".lake", "build", "bin",
                   "lean-ftml-conformance-capstone")

SOURCES = (
    sorted(glob.glob(os.path.join(ROOT, "materials",
                                  "*-all-cases.jsonl")))
    + [os.path.join(ROOT, "conformance-r3", "smoke-cases.jsonl"),
       os.path.join(ROOT, "conformance-r33", "code-cases.jsonl"),
       os.path.join(ROOT, "conformance-r33", "formraw-cases.jsonl"),
       os.path.join(ROOT, "conformance-r33", "module-cases.jsonl"),
       os.path.join(ROOT, "conformance-r33", "module-all-cases.jsonl"),
       os.path.join(ROOT, "conformance-r33", "smoke-cases.jsonl"),
       os.path.join(ROOT, "conformance-r34", "next-all-cases.jsonl"),
       os.path.join(ROOT, "conformance-r317", "final-all-cases.jsonl"),
       os.path.join(ROOT, "conformance-r317", "authored-cases.jsonl")]
)

COMPONENTS = ["segments", "tokens", "equations", "mathId", "footnotes",
              "bibitems", "bibitemIds", "scoredAnchors", "inclusions",
              "inclusionsNotExist"]


def read_jsonl(path):
    with open(path, encoding="utf-8") as f:
        return [json.loads(l) for l in f if l.strip()]


def main():
    pool = {}
    provenance = {}
    per_source = {}
    for path in SOURCES:
        rel = os.path.relpath(path, ROOT)
        n_in = n_new = 0
        for rec in read_jsonl(path):
            n_in += 1
            cid = rec["id"]
            if cid not in pool:
                pool[cid] = rec
                provenance[cid] = rel
                n_new += 1
        per_source[rel] = (n_in, n_new)
    cases = [pool[cid] for cid in sorted(pool)]
    cases_path = os.path.join(HERE, "pooled-cases.jsonl")
    with open(cases_path, "w", encoding="utf-8") as f:
        for rec in cases:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")
    with open(os.path.join(HERE, "pooled-provenance.json"), "w") as f:
        json.dump(provenance, f, indent=1, sort_keys=True)

    php_path = os.path.join(HERE, "pooled-php-full.jsonl")
    run_oracle.run("full", cases_path, php_path)
    lean_path = os.path.join(HERE, "pooled-lean.jsonl")
    with open(cases_path, "rb") as fh:
        proc = subprocess.run([EXE], input=fh.read(), capture_output=True)
    if proc.returncode != 0:
        print("LEAN DRIVER FAILED rc=%d" % proc.returncode)
        print(proc.stderr.decode("utf-8", "replace")[:4000])
        sys.exit(1)
    with open(lean_path, "wb") as fh:
        fh.write(proc.stdout)

    php = compare.load_jsonl(php_path)
    lean = compare.load_jsonl(lean_path)
    lines = []
    lines.append("pool sources (file: lines in, new ids contributed):")
    for rel, (n_in, n_new) in per_source.items():
        lines.append("  %s: %d in, %d new" % (rel, n_in, n_new))
    lines.append("pool size: %d cases" % len(cases))
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
                mismatches[cid] = {
                    "components": ["fatal"],
                    "detail": "php fatal=%r lean fatal=%r" % (af, bf),
                    "source": rec.get("source", "")}
            continue
        if "error" in a or "error" in b:
            mismatches[cid] = {
                "components": ["error-record"],
                "detail": "php error=%r lean error=%r" % (
                    a.get("error"), b.get("error")),
                "source": rec.get("source", "")}
            continue
        has_inc = ("inclusions" in a and "inclusions" in b)
        ca = compare.canon_state(a, include_doc_inc=has_inc)
        cb = compare.canon_state(b, include_doc_inc=has_inc)
        if ca == cb:
            npass += 1
        else:
            diff = [COMPONENTS[i] for i in range(len(COMPONENTS))
                    if ca[i] != cb[i]]
            mismatches[cid] = {"components": diff,
                               "source": rec.get("source", "")}
    lines.append("PASS: %d/%d (including %d parse-fatal agreements)"
                 % (npass, len(cases), fatal_agree))
    lines.append("MISMATCH: %d" % len(mismatches))
    for cid in sorted(mismatches):
        lines.append("  %s: %s" % (cid, ",".join(
            mismatches[cid]["components"])))
    with open(os.path.join(HERE, "pooled-comparison.txt"), "w") as f:
        f.write("\n".join(lines) + "\n")
    with open(os.path.join(HERE, "pooled-mismatches.json"), "w") as f:
        json.dump(mismatches, f, indent=1, ensure_ascii=False)
    print("\n".join(lines))


if __name__ == "__main__":
    main()
