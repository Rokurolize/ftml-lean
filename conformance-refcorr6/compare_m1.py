#!/usr/bin/env python3
"""REFCORR6 M1 battery comparator.

Runs one side's saved render JSONL (`{"id":..,"output":..}`) against the
frozen live captures in conformance-suspect3/captures-m1.json. Two tallies
are reported: exact full-document bytes, and bytes after the standing
frame canonicalization used by ADJUDICATION-M1 (CRLF->LF, br spelling,
newline-run collapse, outer-newline strip plus the already-owned outer
paragraph wrapper). The Mathinline span itself is never reshaped.
"""
import json
import re
import sys

TREE = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-refcorr6"


def canon(s):
    s = s.replace("\r\n", "\n")
    s = re.sub(r"<br\s*/?>", "<br />", s)
    s = re.sub(r"\n{2,}", "\n", s)
    s = s.strip()
    if s.startswith("<p>") and s.endswith("</p>"):
        s = s[3:-4]
    return s


def main():
    path = sys.argv[1]
    renders = {}
    with open(path, encoding="utf-8", errors="surrogateescape") as fh:
        for line in fh:
            if not line.strip():
                continue
            rec = json.loads(line)
            if "output" in rec:
                renders[rec["id"]] = rec["output"]
    with open(TREE + "/conformance-suspect3/captures-m1.json", encoding="utf-8") as fh:
        live = json.load(fh)
    exact = stripped = framed = 0
    rows = []
    for cid, cap in live.items():
        got = renders.get(cid)
        if got is None:
            rows.append((cid, "NO-RENDER", "", ""))
            continue
        want = cap["html"]
        e = got == want
        s = got.strip() == want.strip()
        f = canon(got) == canon(want)
        exact += e
        stripped += s
        framed += f
        rows.append((cid, "EXACT" if e else ("NEWLINE" if s else
                     ("FRAME" if f else "DIVERGE")), want, got))
    for cid, verdict, want, got in rows:
        print(f"{cid:28} {verdict}")
    print(f"raw-exact {exact}/{len(live)}  newline-stripped {stripped}/{len(live)}  framed {framed}/{len(live)}")


if __name__ == "__main__":
    main()
