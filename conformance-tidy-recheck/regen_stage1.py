#!/usr/bin/env python3
"""Regenerate the 266 settled cases' Stage 1 outputs from THIS tree's reference.

Reads the frozen battery result files (which carry the source wikitext and the
retained live capture), feeds {id, source} through ref-php/harness/batch.php in
render mode, and records the freshly generated Stage 1 bytes beside the old
Stage 1 bytes. No live traffic; no ftml edit; no cargo; no git identity.
"""
import json
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
EVID = os.path.join(ROOT, "stage2", "stage2-evidence")
SCRATCH = os.path.join(HERE, "scratch")
BATCHES = [("A", "battery-a-results.jsonl"), ("B", "battery-b-results.jsonl"),
           ("C", "battery-c-results.jsonl")]


def main():
    cases = []
    for battery, fname in BATCHES:
        with open(os.path.join(EVID, fname), encoding="utf-8") as f:
            for line in f:
                if not line.strip():
                    continue
                d = json.loads(line)
                cases.append({"battery": battery, "id": d["id"],
                              "source": d["source"], "stage1_old": d["stage1"],
                              "model_old": d["model"], "live": d["live"],
                              "recorded_agree": d.get("agree")})
    assert len(cases) == 266, len(cases)
    inp = os.path.join(SCRATCH, "rc-sources-266.jsonl")
    outp = os.path.join(SCRATCH, "rc-regenerated-stage1.jsonl")
    errp = os.path.join(SCRATCH, "rc-batch-php.stderr")
    with open(inp, "w", encoding="utf-8") as f:
        for c in cases:
            f.write(json.dumps({"id": c["id"], "source": c["source"]},
                               ensure_ascii=False) + "\n")
    with open(inp, "rb") as fi, open(outp, "wb") as fo, open(errp, "wb") as fe:
        rc = subprocess.call(["php", os.path.join(ROOT, "ref-php", "harness",
                                                  "batch.php"), "render"],
                             stdin=fi, stdout=fo, stderr=fe)
    if rc != 0:
        sys.stderr.write("batch.php exit %d; see %s\n" % (rc, errp))
        sys.exit(rc)
    rendered = {}
    errors = []
    with open(outp, encoding="utf-8") as f:
        for line in f:
            if not line.strip():
                continue
            d = json.loads(line)
            if "error" in d:
                errors.append((d["id"], d["error"]))
            else:
                rendered[d["id"]] = d["output"]
    if errors:
        sys.stderr.write("render errors: %r\n" % (errors,))
        sys.exit(2)
    if set(rendered) != {c["id"] for c in cases}:
        sys.stderr.write("id set mismatch: %d rendered, %d expected\n" %
                         (len(rendered), len(cases)))
        sys.exit(3)
    records = []
    changed = 0
    for c in cases:
        new = rendered[c["id"]]
        ch = new != c["stage1_old"]
        changed += ch
        records.append({"battery": c["battery"], "id": c["id"],
                        "source": c["source"], "stage1_old": c["stage1_old"],
                        "stage1": new, "stage1_changed": ch,
                        "model_old": c["model_old"], "live": c["live"],
                        "recorded_agree": c["recorded_agree"]})
    final = os.path.join(HERE, "stage1-regenerated.jsonl")
    with open(final, "w", encoding="utf-8") as f:
        for r in records:
            f.write(json.dumps(r, ensure_ascii=False) + "\n")
    summary = {"total": len(records), "stage1_changed": changed,
               "stage1_unchanged": len(records) - changed,
               "render_errors": len(errors), "php_stderr_bytes":
               os.path.getsize(errp),
               "changed_ids": [r["id"] for r in records if r["stage1_changed"]]}
    with open(os.path.join(HERE, "stage1-regen-summary.json"), "w",
              encoding="utf-8") as f:
        json.dump(summary, f, indent=2, ensure_ascii=False)
        f.write("\n")
    print(json.dumps({k: v for k, v in summary.items() if k != "changed_ids"},
                     indent=2))
    print("changed ids (%d): %s" % (changed, ", ".join(summary["changed_ids"])))


if __name__ == "__main__":
    main()
