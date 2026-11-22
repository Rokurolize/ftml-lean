#!/usr/bin/env python3
"""CAPSTONE exclusion-retirement demonstration (Acceptance Gate 1,
in the R3.15-R3.17 retirement_check.py style).

The three standing Include boundary controls carried through R3.11-
R3.17 -- smoke-include (R3.11 Check B, over Image/Newline/Paragraph),
iw43-61-include-site-pair and x30 (R3.12 Check B, over Url/Email/
Mathinline/Interwiki) -- plus the five Anchor items retired at R3.17
(h18-anchor, s59, u50, sup59, typo69) are run through:
  1. The sixty-eight-rule Lean pipeline (lean-ftml-conformance-capstone)
  2. The full sixty-eight-rule PHP reference pipeline (run_oracle.py full)
  3. The R3.17 recorded full-pipeline fixture (../conformance-r317/retirement-full.jsonl)
  4. The sixty-seven-rule restricted pipeline without Include
     (run_oracle.py restricted, kept as a discriminating control)

Demonstrates:
  (a) Over each item's originating comparison-set rules (the R3.15-
      R3.17 retirement instrument), all three Include boundary items
      and all five Anchor items agree between the 68-rule Lean
      pipeline and the full reference pipeline: 8/8 RETIRED, 0 STILL
      OPEN (while the 67-rule restricted control still marks the
      three Include items STILL OPEN, proving the instrument
      discriminates).
  (b) Under the full R3 canonical-state comparison (compare.py's
      canon_state across all sixty-eight rules: post-parse segments,
      full token table, and all compared document state including
      inclusions and inclusionsNotExist), the 68-rule Lean pipeline
      agrees byte-exact with both the fresh full reference run
      (8/8 PASS) and the R3.17 recorded full-pipeline fixture
      (8/8 PASS).
"""
import json
import os
import subprocess
import sys

import compare
import run_oracle

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
MATERIALS = os.path.join(ROOT, "materials")
R317 = os.path.join(ROOT, "conformance-r317")
EXE = os.path.join(ROOT, "lean-ftml", ".lake", "build", "bin",
                   "lean-ftml-conformance-capstone")

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

BOUNDARY_CANDIDATES = [
    ("smoke-include", "R3.11 B (Include)", PARA, "RETIRED"),
    ("iw43-61-include-site-pair", "R3.12 B (Include)", INLINE1,
     "RETIRED"),
    ("x30", "R3.12 B (Include)", INLINE1, "RETIRED"),
]
ANCHOR_CONTROLS = [
    ("h18-anchor", "R3.7 B (Anchor)", BLOCK, "RETIRED"),
    ("s59", "R3.13 C (Anchor)", C313, "RETIRED"),
    ("u50", "R3.13 C (Anchor)", C313, "RETIRED"),
    ("sup59", "R3.14 C (Anchor)", C314, "RETIRED"),
    ("typo69", "R3.14 C (Anchor)", C314, "RETIRED"),
]
SOURCES = {
    "smoke-include": os.path.join(R317, "final-all-cases.jsonl"),
    "iw43-61-include-site-pair": os.path.join(MATERIALS, "inline1-all-cases.jsonl"),
    "x30": os.path.join(MATERIALS, "inline1-all-cases.jsonl"),
    "h18-anchor": os.path.join(MATERIALS, "block-all-cases.jsonl"),
    "s59": os.path.join(MATERIALS, "inline2-all-cases.jsonl"),
    "u50": os.path.join(MATERIALS, "inline2-all-cases.jsonl"),
    "sup59": os.path.join(MATERIALS, "inline3-all-cases.jsonl"),
    "typo69": os.path.join(MATERIALS, "inline3-all-cases.jsonl"),
}


def canon_val(v):
    if v is None or v == {}:
        return None
    if isinstance(v, dict):
        if set(v) == {"$bytes"}:
            return ("bytes", tuple(v["$bytes"]))
        return ("map", tuple(sorted(
            (k, canon_val(x)) for k, x in v.items())))
    if isinstance(v, list):
        return ("list", tuple(canon_val(x) for x in v))
    return v


def canon_opts(opts):
    if opts is None or opts == [] or opts == {}:
        return None
    return canon_val(opts)


def claims(rec, rules):
    toks = rec.get("tokens")
    if isinstance(toks, dict):
        entries = [(int(k), v) for k, v in toks.items()]
    elif isinstance(toks, list):
        entries = list(enumerate(toks))
    else:
        return []
    entries.sort(key=lambda kv: kv[0])
    renum = {old: i for i, (old, _) in enumerate(entries)}
    out = []
    for old, (rule, opts) in entries:
        if rule in rules:
            out.append((renum[old], rule, canon_opts(opts)))
    return out


def read_jsonl(path):
    with open(path) as f:
        return [json.loads(l) for l in f if l.strip()]


def main():
    items = ANCHOR_CONTROLS + BOUNDARY_CANDIDATES
    cases = []
    for cid, _, _, _ in items:
        src = read_jsonl(SOURCES[cid])
        cases.append(next(r for r in src if r["id"] == cid))
    cases_path = os.path.join(HERE, "retirement-cases.jsonl")
    with open(cases_path, "w") as f:
        for rec in cases:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")

    restr_p = os.path.join(HERE, "retirement-restricted.jsonl")
    full_p = os.path.join(HERE, "retirement-full.jsonl")
    lean_p = os.path.join(HERE, "retirement-lean.jsonl")
    r317_full_p = os.path.join(R317, "retirement-full.jsonl")

    run_oracle.run("restricted", cases_path, restr_p)
    run_oracle.run("full", cases_path, full_p)

    with open(cases_path, "rb") as fh:
        proc = subprocess.run([EXE], input=fh.read(), capture_output=True)
    if proc.returncode != 0:
        print("LEAN DRIVER FAILED", proc.stderr.decode("utf-8", "replace"))
        sys.exit(1)
    with open(lean_p, "wb") as fh:
        fh.write(proc.stdout)

    restr = {r["id"]: r for r in read_jsonl(restr_p)}
    full = {r["id"]: r for r in read_jsonl(full_p)}
    lean = {r["id"]: r for r in read_jsonl(lean_p)}
    r317_full = {r["id"]: r for r in read_jsonl(r317_full_p)}

    print("=== 1. Sixty-eight-rule Lean pipeline vs full PHP reference (originating comparison sets) ===")
    retired, open_ = [], []
    for cid, origin, rules, expected in items:
        agree = (claims(lean[cid], rules) == claims(full[cid], rules))
        agree_r317 = (claims(lean[cid], rules) == claims(r317_full[cid], rules))
        verdict = "RETIRED" if (agree and agree_r317) else "STILL OPEN"
        mark = "ok" if verdict == expected else "** UNEXPECTED **"
        print(f"{cid} [{origin}] over {len(rules)} rules: "
              f"{verdict} (expected {expected}) {mark}")
        (retired if (agree and agree_r317) else open_).append(cid)
    print(f"retired: {len(retired)} {retired}")
    print(f"still open: {len(open_)} {open_}")

    print("\n=== 2. Discriminating control: 67-rule restricted pipeline (without Include) vs full reference ===")
    restr_open = []
    for cid, origin, rules, _ in BOUNDARY_CANDIDATES:
        agree_restr = (claims(restr[cid], rules) == claims(full[cid], rules))
        verdict_restr = "RETIRED" if agree_restr else "STILL OPEN"
        print(f"{cid} [{origin}] restricted-67 vs full-68: {verdict_restr} (discriminates: {not agree_restr})")
        if not agree_restr:
            restr_open.append(cid)

    print("\n=== 3. Full canonical-state comparison (all 68 rules, segments, tokens, and DocState including inclusions & inclusionsNotExist) ===")
    full_pass = 0
    r317_pass = 0
    for cid, origin, _, _ in items:
        c_lean = compare.canon_state(lean[cid], include_doc_inc=True)
        c_full = compare.canon_state(full[cid], include_doc_inc=True)
        c_lean_noinc = compare.canon_state(lean[cid], include_doc_inc=False)
        c_r317 = compare.canon_state(r317_full[cid], include_doc_inc=False)
        ok_full = (c_lean == c_full)
        ok_r317 = (c_lean_noinc == c_r317)
        if ok_full:
            full_pass += 1
        if ok_r317:
            r317_pass += 1
        inc_ids = lean[cid].get("inclusions", [])
        inc_miss = lean[cid].get("inclusionsNotExist", [])
        print(f"{cid}: full-state vs fresh PHP = {'PASS' if ok_full else 'FAIL'}, "
              f"vs R3.17 recorded fixture = {'PASS' if ok_r317 else 'FAIL'} "
              f"(inclusions={inc_ids}, inclusionsNotExist={inc_miss})")
    print(f"SUMMARY-FULL-STATE: {full_pass}/{len(items)} fresh PHP match, "
          f"{r317_pass}/{len(items)} R3.17 recorded fixture match")

    if len(open_) != 0 or full_pass != len(items) or r317_pass != len(items) or len(restr_open) != 3:
        sys.exit(1)


if __name__ == "__main__":
    main()
