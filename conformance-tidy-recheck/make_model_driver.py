#!/usr/bin/env python3
"""Assemble a self-contained Lean driver for the retained Stage 2 model and
prepare per-case input files plus a manifest.

The Stage 2 model source is copied byte-for-byte from
stage2/stage2-model/Stage2.lean; only a driver suffix is appended. A copy is
used so the retained model file is never edited. Each case is run twice: on the
old (frozen) Stage 1, to validate the driver reproduces the retained model
output, and on the newly regenerated Stage 1, to produce the recheck output.
"""
import hashlib
import json
import os

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
MODEL = os.path.join(ROOT, "stage2", "stage2-model", "Stage2.lean")
DRIVER_DIR = os.path.join(HERE, "model-driver")
SCRATCH = os.path.join(HERE, "scratch")

SUFFIX = r'''

-- recheck driver suffix (root-owned; Stage 2 model above is byte-identical to
-- stage2/stage2-model/Stage2.lean and is not modified)

def rcSplitCharsAux (c : Char) : List Char → List Char → List String → List String
  | [], cur, acc => String.ofList cur.reverse :: acc
  | x :: xs, cur, acc =>
      if x == c then rcSplitCharsAux c xs [] (String.ofList cur.reverse :: acc)
      else rcSplitCharsAux c xs (x :: cur) acc

def rcSplitOnChar (c : Char) (s : String) : List String :=
  (rcSplitCharsAux c s.toList [] []).reverse

def main : IO Unit := do
  let manifest ← IO.FS.readFile "rc-manifest.txt"
  for line in rcSplitOnChar '\n' manifest do
    if line.length > 0 then
      let parts := rcSplitOnChar '\t' line
      match parts with
      | [tag, inp, outp] =>
          let s ← IO.FS.readFile inp
          let o := Stage2.transform s
          IO.FS.writeFile outp o
          IO.println ("rc-model-done " ++ tag)
      | _ => IO.println ("rc-model-skip malformed: " ++ line)
    else
      IO.println "rc-model-skip blank"
'''


def main():
    model = open(MODEL, "rb").read()
    os.makedirs(DRIVER_DIR, exist_ok=True)
    os.makedirs(SCRATCH, exist_ok=True)
    combined = model + SUFFIX.encode("utf-8")
    drv = os.path.join(DRIVER_DIR, "rc-model-driver.lean")
    with open(drv, "wb") as f:
        f.write(combined)
    assert combined.startswith(model)
    manifest_lines = []
    rows = [json.loads(l) for l in open(os.path.join(HERE, "stage1-regenerated.jsonl"),
                                        encoding="utf-8")]
    for r in rows:
        for mode, key in (("old", "stage1_old"), ("new", "stage1")):
            tag = mode + "__" + r["id"]
            inp = os.path.join(SCRATCH, "rc-model-in-" + tag + ".html")
            outp = os.path.join(SCRATCH, "rc-model-out-" + tag + ".html")
            with open(inp, "w", encoding="utf-8") as f:
                f.write(r[key])
            manifest_lines.append(tag + "\t" + inp + "\t" + outp)
    mpath = os.path.join(DRIVER_DIR, "rc-manifest.txt")
    with open(mpath, "w", encoding="utf-8") as f:
        f.write("\n".join(manifest_lines) + "\n")
    meta = {
        "model_source": MODEL,
        "model_source_sha256": hashlib.sha256(model).hexdigest(),
        "driver_sha256": hashlib.sha256(combined).hexdigest(),
        "model_prefix_identical": combined.startswith(model),
        "manifest_lines": len(manifest_lines),
        "cases": len(rows),
    }
    with open(os.path.join(HERE, "model-driver-provenance.json"),
              "w", encoding="utf-8") as f:
        json.dump(meta, f, indent=2)
        f.write("\n")
    print(json.dumps(meta, indent=2))


if __name__ == "__main__":
    main()
