#!/usr/bin/env python3
"""Generate R5H-R1 cases.jsonl from the pre-probe ledger.

The ledger's ID column is the authority: this script parses it and asserts an
exact one-to-one match with the id-to-source table below, so no source identity
can drift from the prose and no suspicion can be probed without a ledger row.
"""
import json
import re

U = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5H-R1"
ESC = chr(0x1b)
DEL = chr(0x7f)
VT  = chr(0x0b)
FS  = chr(0x1c)

SOURCES = {
    "R5HR1-A1": '[[div class="a' + VT + 'b"]]\nbody\n[[/div]]',
    "R5HR1-A2": '[[span style="\tcolor:red\t"]]body[[/span]]',
    "R5HR1-A3": '[[span type="A' + DEL + 'B"]]body[[/span]]',
    "R5HR1-A4": '[[span role="A' + ESC + 'B"]]body[[/span]]',
    "R5HR1-A5": '[[div DATA-X="  a  " data-x="b  "]]\nbody\n[[/div]]',
    "R5HR1-A6": '[[div class="   "]]\nbody\n[[/div]]',
    "R5HR1-A7": '[[span data-x="a' + FS + 'b"]]body[[/span]]',
    "R5HR1-B1": 'alpha\\\n[[div type="A' + DEL + 'B"]]\nbody\n[[/div]]',
    "R5HR1-B2": 'alpha **x**\\\n[[div class="a  "]]\nbody\n[[/div]]',
    "R5HR1-B3": 'alpha [[size 9px]]y[[/size]]\\\n[[div role="  r  "]]\nbody\n[[/div]]',
    "R5HR1-B4": 'alpha\\\n[[div_ type="A' + ESC + 'B"]]\nbody\n[[/div]]',
    "R5HR1-C1": '[[tabview]][[tab title="0 "]]x[[/tab]][[/tabview]]',
    "R5HR1-C2": '[[collapsible show="A' + ESC + 'B"]]body[[/collapsible]]',
    "R5HR1-C3": '[[div]]\n[[/div]]\nafter',
    "R5HR1-C4": '[[span_ class="  a  "]]X[[/span]]',
    "R5HR1-C5": '[[ul]]\n[[li]]A[[UL]]\n[[li]]B[[/UL]][[/li]]\n[[/ul]]',
}

ledger = open(U + "/LEDGER.md", encoding="utf-8").read()
ids = re.findall(r"^\| (R5HR1-[A-Z]\d) \|", ledger, flags=re.M)
assert len(ids) == len(set(ids)), "duplicate ledger ID"
assert set(ids) == set(SOURCES), (set(ids) ^ set(SOURCES))
assert len(ids) == 16, "expected sixteen ledger rows"

with open(U + "/cases.jsonl", "w", encoding="utf-8") as f:
    for cid in ids:
        f.write(json.dumps({"id": cid, "source": SOURCES[cid]}, ensure_ascii=False) + "\n")

print("ledger ids:", len(ids))
print("cases.jsonl written to", U + "/cases.jsonl")
