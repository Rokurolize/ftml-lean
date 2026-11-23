#!/usr/bin/env python3
"""Generate cases.jsonl from LEDGER.md SOURCE lines so identities cannot drift.

Each `### R5EP2-NN | ...` heading opens a suspicion; the following
`LEDGER-SOURCE: "..."` line is decoded as a JSON string literal into the
case source. The script fails loudly if a heading has no source, a source
has no heading, or an id repeats. ensure_ascii keeps splitlines-sensitive
bytes out of the raw JSONL because the probe tool loads cases with
str.splitlines().
"""
import json
import os
import re

HERE = os.path.dirname(os.path.abspath(__file__))
LEDGER = os.path.join(HERE, "LEDGER.md")
OUT = os.path.join(HERE, "cases.jsonl")

rows = []
current = None
for line in open(LEDGER, encoding="utf-8"):
    m = re.match(r"^### (R5EP2-\d\d) \|", line)
    if m:
        current = m.group(1)
        continue
    if line.startswith("LEDGER-SOURCE: "):
        if current is None:
            raise SystemExit("LEDGER-SOURCE without a heading")
        src = json.loads(line[len("LEDGER-SOURCE: "):].rstrip("\n"))
        rows.append({"id": current, "source": src})
        current = None

ids = [r["id"] for r in rows]
if len(ids) != len(set(ids)):
    raise SystemExit("duplicate suspicion ids in ledger")
if len(rows) != 18:
    raise SystemExit("expected 18 suspicion rows, got %d" % len(rows))

with open(OUT, "w", encoding="utf-8") as f:
    for r in rows:
        f.write(json.dumps(r, ensure_ascii=True) + "\n")

print("wrote", len(rows), "cases to", OUT)
for r in rows:
    print(r["id"], repr(r["source"])[:120])
