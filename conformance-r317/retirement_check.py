#!/usr/bin/env python3
"""R3.17 exclusion-retirement re-runs (BRIEF-R3.17.md, the
consistency check's second duty). Each recorded open item
from R3.16's retirement evidence is re-run against the
extended pipeline: the case's comparison-set token claims
under the R3.17 restricted pipeline (sixty-seven rules) are
compared with the full pipeline's. Agreement retires the
item; the comparison demonstrates it, nothing is asserted.

The five Anchor-owned items are expected to retire now that
Anchor is mirrored: h18-anchor (R3.7 B), s59 and u50
(R3.13 C), sup59 and typo69 (R3.14 C) -- in each, the full
pipeline's Anchor claims (a [[a href=...]] construct, or an
anchor inside a heading line) changed the claims of rules
the originating stage compared, while its restricted
pipeline had no Anchor.

The three Include-owned items are carried as controls,
expected to remain open as the recorded boundary: smoke-
include (R3.11 B), iw43-61-include-site-pair and x30
(R3.12 B). Include stands on its Tier 1 proof and is not
mirrored, so the restricted pipeline still lacks the
include expansion (and, for the R3.12 pair, the missing-page
error block's create-it-now Url claim) that the full
pipeline has; they demonstrate the comparison still
discriminates.

Check-C-origin disagreements compare over the set the
originating stage's Check C used (its EARLIER list), as in
the R3.15/R3.16 checks. All eight cases are drawn from the
canonical stage corpora by file and id (smoke-include also
sits in this stage's corpus). Both state files are produced
here by run_oracle.py over retirement-cases.jsonl.
"""
import json
import os

import run_oracle
from consistency_check_r317 import claims

HERE = os.path.dirname(os.path.abspath(__file__))
CANON = os.path.expanduser("~/workspace/ftml-lean-equivalence")

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
    ("h18-anchor", "R3.7 B", BLOCK, "RETIRED"),
    ("s59", "R3.13 C", C313, "RETIRED"),
    ("u50", "R3.13 C", C313, "RETIRED"),
    ("sup59", "R3.14 C", C314, "RETIRED"),
    ("typo69", "R3.14 C", C314, "RETIRED"),
]
CONTROLS = [
    ("smoke-include", "R3.11 B (Include)", PARA, "STILL OPEN"),
    ("iw43-61-include-site-pair", "R3.12 B (Include)", INLINE1,
     "STILL OPEN"),
    ("x30", "R3.12 B (Include)", INLINE1, "STILL OPEN"),
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
        os.path.join(HERE, "final-all-cases.jsonl"))}
    cases = []
    for cid, _, _, _ in CANDIDATES + CONTROLS:
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
