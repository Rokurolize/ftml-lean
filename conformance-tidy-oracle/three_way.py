#!/usr/bin/env python3
"""Run the full settled Stage 2 corpus through the libtidy oracle driver and
record a three-way comparison: oracle vs Lean model vs retained live capture.

Inputs are the settled battery result files in ../stage2/stage2-evidence/:
battery-a (34), battery-b (27), battery-c (205) = the 266 settled cases.
Each carries the wikitext source, the reference Stage 1 render (the exact
bytes purifyHtml receives), the Stage 2 model output, and the live capture.

Writes three-way-results.jsonl and three-way-summary.json next to this file.
"""
import json
import os
import subprocess
import sys
import tempfile

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
EVID = os.path.join(ROOT, "stage2", "stage2-evidence")
DRIVER = os.path.join(HERE, "tidy_oracle")
BATTERIES = [
    ("A", "battery-a-results.jsonl"),
    ("B", "battery-b-results.jsonl"),
    ("C", "battery-c-results.jsonl"),
]
WS = " \t\r\n"


def strip_ws(s):
    return s.strip(WS)


def run_oracle(stage1, extra=()):
    with tempfile.NamedTemporaryFile("w", suffix=".html", delete=False, encoding="utf-8") as tf:
        tf.write(stage1)
        path = tf.name
    try:
        out = subprocess.check_output(
            [DRIVER, path, *extra], stderr=subprocess.DEVNULL
        ).decode("utf-8")
    finally:
        os.unlink(path)
    return out


def main():
    extra = ()
    tag = ""
    if "--no-preserve-entities" in sys.argv:
        extra = ("--no-preserve-entities",)
        tag = "-stock-entities"
    rows = []
    for battery, fname in BATTERIES:
        with open(os.path.join(EVID, fname), encoding="utf-8") as f:
            for line in f:
                if not line.strip():
                    continue
                d = json.loads(line)
                oracle = run_oracle(d["stage1"], extra)
                o = strip_ws(oracle)
                m = strip_ws(d["model"])
                l = strip_ws(d["live"])
                rows.append({
                    "id": d["id"],
                    "battery": battery,
                    "source": d["source"],
                    "stage1": d["stage1"],
                    "model": d["model"],
                    "live": d["live"],
                    "oracle": oracle,
                    "oracle_eq_live": o == l,
                    "model_eq_live": m == l,
                    "oracle_eq_model": o == m,
                    "all_three_agree": o == l == m,
                    "recorded_agree": d.get("agree"),
                })
    outp = os.path.join(HERE, "three-way-results" + tag + ".jsonl")
    with open(outp, "w", encoding="utf-8") as f:
        for r in rows:
            f.write(json.dumps(r, ensure_ascii=False) + "\n")
    summ = {
        "total": len(rows),
        "all_three_agree": sum(r["all_three_agree"] for r in rows),
        "oracle_eq_live": sum(r["oracle_eq_live"] for r in rows),
        "model_eq_live": sum(r["model_eq_live"] for r in rows),
        "oracle_eq_model": sum(r["oracle_eq_model"] for r in rows),
        "disagreements": [
            r["id"] for r in rows if not r["all_three_agree"]
        ],
    }
    with open(os.path.join(HERE, "three-way-summary" + tag + ".json"), "w", encoding="utf-8") as f:
        json.dump(summ, f, indent=2)
        f.write("\n")
    print(json.dumps(summ, indent=2))


if __name__ == "__main__":
    main()
