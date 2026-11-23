#!/usr/bin/env python3
"""Generate R5G-R1 cases.jsonl from the pre-probe ledger.

The ledger's ID column is the authority: this script parses it and asserts an
exact one-to-one match with the id-to-source table below, so no source identity
can drift from the prose and no suspicion can be probed without a ledger row.
"""
import json
import re

U = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5G-R1"
ESC = chr(0x1b)
DEL = chr(0x7f)

SOURCES = {
    "R5GR1-A1": '[[span class="  a  "]]body[[/span]]',
    "R5GR1-A2": '[[span style="color:  red"]]body[[/span]]',
    "R5GR1-A3": '[[span type="A' + ESC + 'B"]]body[[/span]]',
    "R5GR1-A4": '[[span data-x="A' + DEL + 'B"]]body[[/span]]',
    "R5GR1-A5": '[[div class="a' + ESC + '  "]]\nbody\n[[/div]]',
    "R5GR1-A6": '[[span role="   "]]body[[/span]]',
    "R5GR1-A7": '[[span data-X="  v  "]]body[[/span]]',
    "R5GR1-B1": 'alpha\\\n[[div type="A' + ESC + 'B"]]\nbody\n[[/div]]',
    "R5GR1-B2": 'alpha\\\n[[div_ class="  a  "]]\nbody\n[[/div]]',
    "R5GR1-B3": 'alpha [[size 12px]]x[[/size]]\\\n[[div class="a  "]]\nbody\n[[/div]]',
    "R5GR1-B4": 'alpha\\\n[[div type="A' + DEL + 'B"]]\nX\n[[/div]]\nbeta\\\n[[div type="t  "]]\nY\n[[/div]]',
    "R5GR1-C1": '[[collapsible show="0 "]]body[[/collapsible]]',
    "R5GR1-C2": '[[tabview]][[tab title=" 0 "]]x[[/tab]][[/tabview]]',
    "R5GR1-C3": '[[tabview]][[tab 00]]x[[/tab]][[/tabview]]',
    "R5GR1-C4": '[[size 12px]]A' + ESC + 'B[[/size]]',
    "R5GR1-C5": '[[UL]]\n[[LI]]A[[ul]]\n[[li]]B[[/ul]][[/LI]]\n[[/UL]]',
}

ledger = open(U + "/LEDGER.md", encoding="utf-8").read()
ids = re.findall(r"^\| (R5GR1-[A-Z]\d) \|", ledger, flags=re.M)
assert len(ids) == len(set(ids)), "duplicate ledger ID"
assert set(ids) == set(SOURCES), (set(ids) ^ set(SOURCES))
assert len(ids) == 16, "expected sixteen ledger rows"

with open(U + "/cases.jsonl", "w", encoding="utf-8") as f:
    for cid in ids:
        f.write(json.dumps({"id": cid, "source": SOURCES[cid]}, ensure_ascii=False) + "\n")

print("ledger ids:", len(ids))
print("cases.jsonl written to", U + "/cases.jsonl")
