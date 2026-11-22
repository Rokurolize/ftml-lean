#!/usr/bin/env python3
"""REFCORR6: regenerate the PHP-side gate artifacts from the corrected ref-php."""
import os
import shutil
import subprocess
import sys

ROOT = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-refcorr6"
sys.path.insert(0, os.path.join(ROOT, "conformance-capstone"))
import run_oracle

RULES = run_oracle.RULES_FULL


def render(cases, out):
    with open(cases, "rb") as fh:
        blob = fh.read()
    p = subprocess.run(["php", "harness/render-restricted.php", RULES],
                       input=blob, capture_output=True,
                       cwd=os.path.join(ROOT, "ref-php"))
    with open(out, "wb") as fh:
        fh.write(p.stdout)
    print(os.path.relpath(out, ROOT), "rc", p.returncode,
          "bytes", len(p.stdout), "stderr", len(p.stderr))
    with open(out[:-6] + ".err", "wb") as fh:
        fh.write(p.stderr)
    return p.returncode


def backup(path):
    bak = path + ".before-refcorr6"
    if not os.path.exists(bak):
        shutil.copy2(path, bak)


def main():
    d = os.path.join(ROOT, "conformance-r43")
    for prefix in ("family", "notes365", "prose740"):
        cases = os.path.join(d, prefix + "-cases.jsonl")
        states = os.path.join(d, prefix + "-states-full.jsonl")
        renders = os.path.join(d, prefix + "-renders-full.jsonl")
        for path in (states, renders):
            backup(path)
        run_oracle.run("full", cases, states)
        render(cases, renders)
    pooled = os.path.join(ROOT, "conformance-capstone")
    for path in (os.path.join(pooled, "pooled-php-full.jsonl"),):
        backup(path)
    run_oracle.run("full", os.path.join(pooled, "pooled-cases.jsonl"),
                   os.path.join(pooled, "pooled-php-full.jsonl"))


if __name__ == "__main__":
    main()
