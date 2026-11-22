#!/usr/bin/env python3
"""REFCORR5: regenerate stage-gate PHP-side artifacts from the corrected ref-php."""
import os, shutil, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "conformance-capstone"))
import run_oracle
RULES = run_oracle.RULES_FULL

def render(cases, out):
    with open(cases, "rb") as f: blob = f.read()
    env = dict(os.environ)
    p = __import__("subprocess").run(
        ["php", "harness/render-restricted.php", RULES], input=blob,
        capture_output=True, cwd=os.path.join(ROOT, "ref-php"), env=env)
    with open(out, "wb") as f: f.write(p.stdout)
    print(os.path.relpath(out, ROOT), "rc", p.returncode, "bytes", len(p.stdout),
          "stderr", len(p.stderr))
    return p.returncode

def main():
    stages = ["conformance-r43", "conformance-r44", "conformance-r45",
              "conformance-r46", "conformance-r48"]
    for st in stages:
        d = os.path.join(ROOT, st)
        for prefix in ["family", "notes365", "prose740", ""]:
            cases = os.path.join(d, (prefix + "-cases.jsonl") if prefix else "cases.jsonl")
            states = os.path.join(d, (prefix + "-states-full.jsonl") if prefix else "states-full.jsonl")
            renders = os.path.join(d, (prefix + "-renders-full.jsonl") if prefix else "renders-full.jsonl")
            if not os.path.exists(cases) or not os.path.exists(states) or not os.path.exists(renders):
                continue
            for f in (states, renders):
                bak = f + ".before-refcorr5"
                if not os.path.exists(bak): shutil.copy2(f, bak)
            run_oracle.run("full", cases, states)
            render(cases, renders)
if __name__ == "__main__": main()
