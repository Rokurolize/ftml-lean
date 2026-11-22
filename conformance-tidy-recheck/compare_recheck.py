#!/usr/bin/env python3
"""Validate the Lean driver against the retained model outputs and compute the
three-way recheck: regenerated Stage 1 -> retained oracle and retained model,
compared against the frozen live capture.
"""
import json
import os

HERE = os.path.dirname(os.path.abspath(__file__))
SCRATCH = os.path.join(HERE, "scratch")
WS = " \t\r\n"


def strip_ws(s):
    return s.strip(WS)


def read_model(tag, ident):
    path = os.path.join(SCRATCH, "rc-model-out-" + tag + "__" + ident + ".html")
    with open(path, encoding="utf-8") as f:
        return f.read()


def main():
    rows = [json.loads(l) for l in open(os.path.join(HERE, "oracle-outputs.jsonl"),
                                        encoding="utf-8")]
    validation = []
    out = []
    for r in rows:
        ident = r["id"]
        model_old_lean = read_model("old", ident)
        model_new_lean = read_model("new", ident)
        # driver faithfulness: old Stage 1 -> Lean model must equal retained model
        # bytes after the same outer-ASCII-whitespace stripping the Stage 2 and
        # oracle reports use.
        faithful = strip_ws(model_old_lean) == strip_ws(r["model_old"])
        validation.append({"id": ident, "faithful": faithful,
                           "retained_model": r["model_old"],
                           "driver_model": model_old_lean})
        o = strip_ws(r["oracle"])
        m = strip_ws(model_new_lean)
        l = strip_ws(r["live"])
        out.append({
            "id": ident,
            "battery": r["battery"],
            "source": next(x["source"] for x in [json.loads(y) for y in
                           open(os.path.join(HERE, "stage1-regenerated.jsonl"),
                                encoding="utf-8")] if x["id"] == ident),
            "stage1": r["stage1"],
            "stage1_changed": r["stage1_changed"],
            "model": model_new_lean,
            "live": r["live"],
            "oracle": r["oracle"],
            "oracle_eq_live": o == l,
            "model_eq_live": m == l,
            "oracle_eq_model": o == m,
            "all_three_agree": o == l == m,
        })
    with open(os.path.join(HERE, "driver-validation.jsonl"), "w", encoding="utf-8") as f:
        for rec in validation:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")
    nf = sum(v["faithful"] for v in validation)
    with open(os.path.join(HERE, "driver-validation-summary.json"), "w",
              encoding="utf-8") as f:
        json.dump({"cases": len(validation), "faithful": nf, "unfaithful": len(validation) - nf,
                   "unfaithful_ids": [v["id"] for v in validation if not v["faithful"]]},
                  f, indent=2)
        f.write("\n")
    with open(os.path.join(HERE, "three-way-results.jsonl"), "w", encoding="utf-8") as f:
        for rec in out:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")
    summ = {
        "total": len(out),
        "all_three_agree": sum(r["all_three_agree"] for r in out),
        "oracle_eq_live": sum(r["oracle_eq_live"] for r in out),
        "model_eq_live": sum(r["model_eq_live"] for r in out),
        "oracle_eq_model": sum(r["oracle_eq_model"] for r in out),
        "disagreements": [r["id"] for r in out if not r["all_three_agree"]],
    }
    with open(os.path.join(HERE, "three-way-summary.json"), "w", encoding="utf-8") as f:
        json.dump(summ, f, indent=2)
        f.write("\n")
    print(json.dumps({"driver_faithful": nf, "of": len(validation)}, indent=2))
    print(json.dumps(summ, indent=2))


if __name__ == "__main__":
    main()
