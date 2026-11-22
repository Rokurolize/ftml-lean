#!/usr/bin/env python3
"""R3.15 exclusion-retirement re-runs (BRIEF-R3.15.md, the
consistency check's second duty). Each recorded exclusion from
R3.9, R3.10, R3.11, R3.13, and R3.14 whose recorded cause is
one of this stage's five rules is re-run against the extended
pipeline: the case's stage-family token claims under the
R3.15 restricted pipeline (fifty-seven rules) are compared
with the full pipeline's. Agreement retires the exclusion;
the comparison demonstrates it, nothing is asserted.

Check-C-origin disagreements compare over the set the
originating stage's Check C used (its EARLIER list). Four
cases whose exclusions belong to still-unmirrored rules
(lb35: Note; smoke-include: Include; s59 and u50: Anchor;
sup59 and typo69: Anchor) are carried as controls and are
expected to remain open; they demonstrate the comparison
still discriminates.

The candidate cases are drawn from the stage corpus
(middle-all-cases.jsonl); the controls are drawn from the
canonical stage corpora by file and id. Both state files are
produced here by run_oracle.py over retirement-cases.jsonl.
"""
import json
import os

import run_oracle
from consistency_check_r315 import claims

HERE = os.path.dirname(os.path.abspath(__file__))
CANON = os.path.expanduser("~/workspace/ftml-lean-equivalence")

LIST = ("List", "Deflist")
TABLE = ("Table", "Tableadv")
PARA = ("Image", "Newline", "Paragraph")
INLINE2 = ("Colortext", "Strong", "Emphasis", "Underline",
           "Strikethrough")
INLINE3 = ("Tt", "Superscript", "Subscript", "Typography",
           "Tighten")
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
    ("b03-continuation-lines", "R3.9 B", LIST, "RETIRED"),
    ("t35-30-line-continuation", "R3.10 B", TABLE, "RETIRED"),
    ("n38-19-before-hr", "R3.11 B", PARA, "RETIRED"),
    ("n38-20-after-hr", "R3.11 B", PARA, "RETIRED"),
    ("n38-43-underscore-break", "R3.11 B", PARA, "RETIRED"),
    ("n38-44-underscore-doubled", "R3.11 B", PARA, "RETIRED"),
    ("pg33-heading-above", "R3.11 B", PARA, "RETIRED"),
    ("pg34-heading-below", "R3.11 B", PARA, "RETIRED"),
    ("pg43-horiz-between", "R3.11 B", PARA, "RETIRED"),
    ("pg46-mixed-blocks", "R3.11 B", PARA, "RETIRED"),
    ("pg49-only-heading", "R3.11 B", PARA, "RETIRED"),
    ("x23-text-heading-text", "R3.11 B", PARA, "RETIRED"),
    ("x28-heading-text-list", "R3.11 B", PARA, "RETIRED"),
    ("x2-05-scored-span-then-heading", "R3.11 B", PARA, "RETIRED"),
    ("s33", "R3.13 B", INLINE2, "RETIRED"),
    ("sup33", "R3.14 B", INLINE3, "RETIRED"),
    ("typo10", "R3.14 C", C314, "RETIRED"),
    ("typo12", "R3.14 C", C314, "RETIRED"),
    ("typo14", "R3.14 C", C314, "RETIRED"),
    ("typo16", "R3.14 C", C314, "RETIRED"),
    ("typo18", "R3.14 C", C314, "RETIRED"),
]
CONTROLS = [
    ("lb35", "R3.9 B (Note)", LIST, "STILL OPEN"),
    ("smoke-include", "R3.11 B (Include)", PARA, "STILL OPEN"),
    ("s59", "R3.13 C (Anchor)", C313, "STILL OPEN"),
    ("u50", "R3.13 C (Anchor)", C313, "STILL OPEN"),
    ("sup59", "R3.14 C (Anchor)", C314, "STILL OPEN"),
    ("typo69", "R3.14 C (Anchor)", C314, "STILL OPEN"),
]
CONTROL_SOURCES = {
    "lb35": "conformance-r39/list-all-cases.jsonl",
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
        os.path.join(HERE, "middle-all-cases.jsonl"))}
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
