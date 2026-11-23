#!/usr/bin/env python3
"""Generate R5F-R1 cases.jsonl from the pre-probe ledger.

The ledger's ID column is the authority: this script parses it and asserts an
exact one-to-one match with the id-to-source table below, so no source identity
can drift from the prose and no suspicion can be probed without a ledger row.
"""
import json
import re

U = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5F-R1"

SOURCES = {
    "R5FR1-D1": '[[div type="t\t"]]\nbody\n[[/div]]',
    "R5FR1-D2": '[[div role="note  "]]\nbody\n[[/div]]',
    "R5FR1-D3": '[[div data-z="v  "]]\nbody\n[[/div]]',
    "R5FR1-D4": '[[div style="color:red  " class="a  "]]\nbody\n[[/div]]',
    "R5FR1-D5": '[[div type="  "]]\nbody\n[[/div]]',
    "R5FR1-D6": '[[div type="a  b  c  "]]\nbody\n[[/div]]',
    "R5FR1-S1": '[[span data-y="[[size 12px]]q[[/size]]"]]body[[/span]]',
    "R5FR1-S2": '[[span class="a  "]]body[[/span]]',
    "R5FR1-S3": '[[span id="[[size 12px]]q[[/size]]"]]body[[/span]]',
    "R5FR1-S4": '[[span data-X="v  "]]body[[/span]]',
    "R5FR1-S5": '[[span type="t  "]]body[[/span]]',
    "R5FR1-K1": '[[collapsible folded="NO"]]body[[/collapsible]]',
    "R5FR1-K2": '[[collapsible hideLocation="Bottom"]]body[[/collapsible]]',
    "R5FR1-T1": '[[tabview]][[tab title="a\'b"]]x[[/tab]][[/tabview]]',
    "R5FR1-Z1": '[[size -12px]]x[[/size]]',
    "R5FR1-X1": '[[ol type="  a  "]]\n[[li]]A[[/li]]\n[[/ol]]',
}

ledger = open(U + "/LEDGER.md", encoding="utf-8").read()
ids = re.findall(r"^\| (R5FR1-[A-Z]\d) \|", ledger, flags=re.M)
assert len(ids) == len(set(ids)), "duplicate ledger ID"
assert set(ids) == set(SOURCES), (set(ids) ^ set(SOURCES))
assert len(ids) == 16, "expected sixteen ledger rows"

with open(U + "/cases.jsonl", "w", encoding="utf-8") as f:
    for cid in ids:
        f.write(json.dumps({"id": cid, "source": SOURCES[cid]}, ensure_ascii=False) + "\n")

print("ledger ids:", len(ids))
print("cases.jsonl written to", U + "/cases.jsonl")
