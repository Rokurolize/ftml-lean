#!/usr/bin/env python3
"""Generate R5D-R1 cases.jsonl from the pre-probe ledger.

The ledger's ID column is the authority: this script parses it and asserts an
exact one-to-one match with the id-to-source table below, so no source identity
can drift from the prose and no suspicion can be probed without a ledger row.
"""
import json
import re

U = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5D-R1"

SOURCES = {
    "R5DR1-D1": '[[div id="u-  x[[size 12px]]y[[/size]]"]]\nbody\n[[/div]]',
    "R5DR1-D2": '[[div id="@@x@@"]]\nbody\n[[/div]]',
    "R5DR1-D3": '[[div class="  a  b  "]]\nbody\n[[/div]]',
    "R5DR1-D4": '[[div data-X="L" data-x=""]]\nbody\n[[/div]]',
    "R5DR1-D5": '[[div id="u-  "]]\nbody\n[[/div]]',
    "R5DR1-D6": '[[div type="[[span class=k]]s[[/span]]"]]\nbody\n[[/div]]',
    "R5DR1-S1": '[[span id="[[size 12px]]x[[/size]]"]]body[[/span]]',
    "R5DR1-Z1": '[[size 00012px]]x[[/size]]',
    "R5DR1-K1": '[[collapsible show="0"]]body[[/collapsible]]',
    "R5DR1-K2": '[[collapsible folded="FALSE"]]body[[/collapsible]]',
    "R5DR1-K3": '[[collapsible show="a&<b\\"c\'d"]]body[[/collapsible]]',
    "R5DR1-T1": '[[tabview]][[tab title="@@x@@"]]a[[/tab]][[/tabview]]',
    "R5DR1-T2": '[[tabview]][[tab title="a&<b>c"]]a[[/tab]][[/tabview]]',
    "R5DR1-T3": '[[tabview]][[tab]]a[[/tab]][[/tabview]]',
    "R5DR1-L1": '[[UL]]\n[[LI class="a&b"]]x[[/LI]]\n[[/UL]]',
    "R5DR1-L2": '[[ul]]\n[[li]]A[[/li]]\n[[LI]]B[[/LI]]\n[[/ul]]',
    "R5DR1-L3": '* a\n** b\n* c',
    "R5DR1-B1": '> a\n> > b\n> c',
}

ledger = open(U + "/LEDGER.md", encoding="utf-8").read()
ids = re.findall(r"^\| (R5DR1-[A-Z]\d) \|", ledger, flags=re.M)
assert len(ids) == len(set(ids)), "duplicate ledger ID"
assert set(ids) == set(SOURCES), (set(ids) ^ set(SOURCES))
assert len(ids) == 18, "expected eighteen ledger rows"

with open(U + "/cases.jsonl", "w", encoding="utf-8") as f:
    for cid in ids:
        f.write(json.dumps({"id": cid, "source": SOURCES[cid]}, ensure_ascii=False) + "\n")

print("ledger ids:", len(ids))
print("cases.jsonl written to", U + "/cases.jsonl")
