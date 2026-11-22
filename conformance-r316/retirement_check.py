#!/usr/bin/env python3
"""R3.16 exclusion-retirement re-runs (BRIEF-R3.16.md, the
consistency check's second duty). Each recorded open
exclusion whose cause is one of this stage's four rules is
re-run against the extended pipeline: the case's stage-family
token claims under the R3.16 restricted pipeline (sixty-one
rules) are compared with the full pipeline's. Agreement
retires the exclusion; the comparison demonstrates it,
nothing is asserted.

The one candidate is lb35 (R3.9 B): the Note rule claims the
[[note]] wrapper before List in the full pipeline, so the
R3.9 restricted pipeline's List claims for the case disagreed
with the full pipeline's. With Note mirrored, the claims must
now agree.

The remaining recorded open items belong to still-unmirrored
rules (Include: smoke-include, iw43-61-include-site-pair,
x30; Anchor: h18-anchor, s59, u50, sup59, typo69) and are
carried as controls, expected to remain open; they
demonstrate the comparison still discriminates. Check-C-origin
disagreements compare over the set the originating stage's
Check C used (its EARLIER list), as in the R3.15 check.

The candidate and smoke-include are drawn from this stage's
corpus (middle2-all-cases.jsonl); the other controls from the
canonical stage corpora by file and id. Both state files are
produced here by run_oracle.py over retirement-cases.jsonl.
"""
import json
import os

import run_oracle
from consistency_check_r316 import claims

HERE = os.path.dirname(os.path.abspath(__file__))
CANON = os.path.expanduser("~/workspace/ftml-lean-equivalence")

LIST = ("List", "Deflist")
BLOCK = ("Blockquote", "Heading", "Toc")
PARA = ("Image", "Newline", "Paragraph")
INLINE1 = ("Url", "Email", "Mathinline", "Interwiki")
C313 = ("Code", "Form", "Raw", "Rawold", "Module", "Module654",
        "Iftags", "Comment", "Iframe", "Date", "Math",
        "Freelink", "Equationreference", "Footnote",
        "Footnoteitem", "Footnoteblock", "Bibitem",
        "Bibliography", "Bibcite", "Blockquote", "Heading",
        "Toc", "Span", "Size", "Div", "Collapsible", "Tabview",
        "List", "Deflist", "Table", "Tableadv", "Url", "Email",
        "Mathinline", "Interwiki")
C314 = C313 + ("Colortext", "Strong", "Emphasis", "Underline",
               "Strikethrough", "Newline", "Paragraph", "Image")

# (case id, originating stage, comparison set, expected)
CANDIDATES = [
    ("lb35", "R3.9 B", LIST, "RETIRED"),
]
CONTROLS = [
    ("h18-anchor", "R3.7 B (Anchor)", BLOCK, "STILL OPEN"),
    ("smoke-include", "R3.11 B (Include)", PARA, "STILL OPEN"),
    ("iw43-61-include-site-pair", "R3.12 B (Include)", INLINE1,
     "STILL OPEN"),
    ("x30", "R3.12 B (Include)", INLINE1, "STILL OPEN"),
    ("s59", "R3.13 C (Anchor)", C313, "STILL OPEN"),
    ("u50", "R3.13 C (Anchor)", C313, "STILL OPEN"),
    ("sup59", "R3.14 C (Anchor)", C314, "STILL OPEN"),
    ("typo69", "R3.14 C (Anchor)", C314, "STILL OPEN"),
]
CONTROL_SOURCES = {
    "h18-anchor": "conformance-r37/block-all-cases.jsonl",
    "iw43-61-include-site-pair": "conformance-r312/inline1-all-cases.jsonl",
    "x30": "conformance-r312/inline1-all-cases.jsonl",
    "s59": "conformance-r313/inline2-all-cases.jsonl",
    "u50": "conformance-r313/inline2-all-cases.jsonl",
    "sup59": "conformance-r314/inline3-all-cases.jsonl",
    "typo69": "conformance-r314/inline3-all-cases.jsonl",
}


def read_jsonl(path):
    with open(path) as f:
        return [json.loads(l) for l in f if l.strip()]


def main():
    corpus = {r["id"]: r for r in read_jsonl(
        os.path.join(HERE, "middle2-all-cases.jsonl"))}
    cases = []
    for cid, _, _, _ in CANDIDATES:
        cases.append(corpus[cid])
    for cid, _, _, _ in CONTROLS:
        if cid in corpus:
            cases.append(corpus[cid])
        else:
            src = read_jsonl(os.path.join(
                CANON, CONTROL_SOURCES[cid]))
            cases.append(next(r for r in src if r["id"] == cid))
    cases_path = os.path.join(HERE, "retirement-cases.jsonl")
    with open(cases_path, "w") as f:
        for rec in cases:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")
    restr_p = os.path.join(HERE, "retirement-restricted.jsonl")
    full_p = os.path.join(HERE, "retirement-full.jsonl")
    run_oracle.run("restricted", cases_path, restr_p)
    run_oracle.run("full", cases_path, full_p)
    restr = {r["id"]: r for r in read_jsonl(restr_p)}
    full = {r["id"]: r for r in read_jsonl(full_p)}
    retired, open_ = [], []
    for cid, origin, rules, expected in CANDIDATES + CONTROLS:
        agree = (claims(restr[cid], rules)
                 == claims(full[cid], rules))
        verdict = "RETIRED" if agree else "STILL OPEN"
        mark = "ok" if verdict == expected else "** UNEXPECTED **"
        print(f"{cid} [{origin}] over {len(rules)} rules: "
              f"{verdict} (expected {expected}) {mark}")
        (retired if agree else open_).append(cid)
    print(f"retired: {len(retired)} {retired}")
    print(f"still open: {len(open_)} {open_}")


if __name__ == "__main__":
    main()
