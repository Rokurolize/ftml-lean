#!/usr/bin/env python3
"""Byte comparison of reference render vs live capture for this lane.

Only the programme's frame-level shaping is applied: CRLF->LF, <br />-><br>,
collapse runs of >=2 newlines, strip outer newlines. Rule-level bytes are
preserved; invalid UTF-8 from token placeholders is kept as raw bytes.
"""
import base64
import json
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.dirname(ROOT)
HARNESS = os.path.join(REPO, "ref-php", "harness", "transform.php")


def shape(b):
    b = b.replace(b"\r\n", b"\n").replace(b"<br />", b"<br>")
    b = re.sub(rb"\n{2,}", b"\n", b)
    return b.strip(b"\n")


def reference(source):
    p = subprocess.run(["php", HARNESS, "render"], input=source.encode("utf-8"),
                       stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if p.returncode != 0:
        raise RuntimeError(p.stderr.decode("utf-8", "replace"))
    return p.stdout


def main():
    tag = sys.argv[1] if len(sys.argv) > 1 else "b12"
    cases = {}
    for line in open(os.path.join(ROOT, "cases-%s.jsonl" % tag), encoding="utf-8"):
        if line.strip():
            d = json.loads(line)
            cases[d["id"]] = d["source"]
    caps = json.load(open(os.path.join(ROOT, "captures-%s.json" % tag), encoding="utf-8"))
    out = {}
    diffs = []
    for cid, src in cases.items():
        cap = caps.get(cid, {})
        if not (cap.get("valid") and cap.get("stable") and cap.get("saved_source_matches")):
            print("INVALID", cid)
            continue
        ref = reference(src)
        live = cap["html"].encode("utf-8")
        out[cid] = {"source": src, "ref_b64": base64.b64encode(ref).decode(),
                    "live_b64": base64.b64encode(live).decode(),
                    "match": shape(ref) == shape(live)}
        if not out[cid]["match"]:
            diffs.append(cid)
        print(("%s %-30s %s" % ("DIFF" if not out[cid]["match"] else "OK  ", cid,
                                "ref=%r live=%r" % (shape(ref), shape(live)))))
    json.dump(out, open(os.path.join(ROOT, "ref-%s-render.json" % tag), "w"),
              ensure_ascii=False, indent=1)
    print("total=%d match=%d diff=%d" % (len(out), len(out) - len(diffs), len(diffs)))


if __name__ == "__main__":
    main()
