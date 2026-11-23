#!/usr/bin/env python3
"""Generate R5E-R1 cases.jsonl from the pre-probe ledger.

The ledger's ID column is the authority: this script parses it and asserts an
exact one-to-one match with the id-to-source table below, so no source identity
can drift from the prose and no suspicion can be probed without a ledger row.
"""
import json
import re

U = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5E-R1"

SOURCES = {
    "R5ER1-D1": '[[div id="U-foo"]]\nbody\n[[/div]]',
    "R5ER1-D2": '[[div id="  u-foo"]]\nbody\n[[/div]]',
    "R5ER1-D3": '[[div id=" [[size 12px]]x[[/size]]"]]\nbody\n[[/div]]',
    "R5ER1-D4": '[[div data-x="[[size 12px]]q[[/size]]"]]\nbody\n[[/div]]',
    "R5ER1-D5": '[[div style="a:[[size 12px]]q[[/size]]"]]\nbody\n[[/div]]',
    "R5ER1-D6": '[[div type="  t  "]]\nbody\n[[/div]]',
    "R5ER1-L1": 'alpha\\\n[[div]]\na[[/div]]\nbeta\\\n[[div]]\nb[[/div]]',
    "R5ER1-L2": 'alpha [[size 12px]]x[[/size]]\\\n[[div]]\nbody[[/div]]',
    "R5ER1-L3": 'alpha\\\n[[DIV]]\nbody[[/DIV]]',
    "R5ER1-L4": 'alpha   \\\n[[div]]\nbody[[/div]]',
    "R5ER1-L5": 'alpha\\\n[[div]]   \nbody[[/div]]',
    "R5ER1-S1": '[[span data-x="[[size 12px]]q[[/size]]"]]body[[/span]]',
    "R5ER1-Z1": '[[size 12PX]]x[[/size]]',
    "R5ER1-K1": '[[collapsible hideLocation="BOTH"]]body[[/collapsible]]',
    "R5ER1-T1": '[[tabview]][[tab title="  hi  "]]a[[/tab]][[/tabview]]',
    "R5ER1-B1": '>>> x',
    "R5ER1-X1": '[[ol type="a"]]\n[[li]]A[[/li]]\n[[/ol]]',
}

ledger = open(U + "/LEDGER.md", encoding="utf-8").read()
ids = re.findall(r"^\| (R5ER1-[A-Z]\d) \|", ledger, flags=re.M)
assert len(ids) == len(set(ids)), "duplicate ledger ID"
assert set(ids) == set(SOURCES), (set(ids) ^ set(SOURCES))
assert len(ids) == 17, "expected seventeen ledger rows"

with open(U + "/cases.jsonl", "w", encoding="utf-8") as f:
    for cid in ids:
        f.write(json.dumps({"id": cid, "source": SOURCES[cid]}, ensure_ascii=False) + "\n")

print("ledger ids:", len(ids))
print("cases.jsonl written to", U + "/cases.jsonl")
