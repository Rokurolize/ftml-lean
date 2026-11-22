#!/usr/bin/env python3
"""Drive the retained conformance-tidy-oracle driver on the regenerated Stage 1
inputs. Writes one record per case with the raw oracle bytes.
"""
import json
import os
import subprocess
import tempfile

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
DRIVER = os.path.join(ROOT, "conformance-tidy-oracle", "tidy_oracle")
SCRATCH = os.path.join(HERE, "scratch")


def main():
    rows = [json.loads(l) for l in open(os.path.join(HERE, "stage1-regenerated.jsonl"),
                                        encoding="utf-8")]
    out = []
    for r in rows:
        path = os.path.join(SCRATCH, "rc-oracle-in-" + r["id"] + ".html")
        with open(path, "w", encoding="utf-8") as f:
            f.write(r["stage1"])
        try:
            oracle = subprocess.check_output([DRIVER, path],
                                             stderr=subprocess.DEVNULL).decode("utf-8")
        finally:
            os.unlink(path)
        out.append({"battery": r["battery"], "id": r["id"],
                    "stage1": r["stage1"], "stage1_changed": r["stage1_changed"],
                    "live": r["live"], "model_old": r["model_old"],
                    "oracle": oracle})
    with open(os.path.join(HERE, "oracle-outputs.jsonl"), "w", encoding="utf-8") as f:
        for rec in out:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")
    print("oracle outputs:", len(out))


if __name__ == "__main__":
    main()
