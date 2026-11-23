#!/usr/bin/env python3
"""Generator for the List Class C bounded certificate corpus.

Emits cases.jsonl with records {"id": ..., "bytes": [...]}.

Part A: every sequence of length 0..5 over the 17-symbol quotient
alphabet Sigma_list as listed in ADVISOR-PROOF-POLICY.md section 2.2
Class C (the policy prose says 16 symbols but lists 17; the list is
the operative definition and all 17 are used).

Part B: failed-close adjacency frames: every sequence of length 6
over the 8 block-tag symbols (4 openers, 4 closers) with exactly 3
openers and 3 closers (depth <= 3 stack interactions), 81,920 cases.

Emission order is deterministic: Part A by (length, lexicographic
symbol index), then Part B in product order. Ids are sequential.
"""
import hashlib, itertools, json, sys

SYMBOLS = [
    ("UL",     b"[[ul]]"),
    ("ULRAW",  b"[[UL]]"),
    ("OL",     b"[[ol]]"),
    ("OLRAW",  b"[[OL]]"),
    ("ULS",    b"[[ul_]]"),
    ("LI",     b"[[li]]"),
    ("LIRAW",  b"[[LI]]"),
    ("CUL",    b"[[/ul]]"),
    ("CULRAW", b"[[/UL]]"),
    ("COL",    b"[[/ol]]"),
    ("COLRAW", b"[[/OL]]"),
    ("CLI",    b"[[/li]]"),
    ("CLIRAW", b"[[/LI]]"),
    ("RB",     b"]"),
    ("NL",     b"\n"),
    ("X",      b"X"),
    ("PH",     b"\xff0\xff"),
]
OPENERS = {0, 1, 2, 3}
BLOCK8 = [0, 1, 2, 3, 7, 8, 9, 10]

def main():
    out = open("cases.jsonl", "wb")
    h = hashlib.sha256()
    n = 0
    counts = {}
    def emit(symbols):
        nonlocal n
        data = b"".join(SYMBOLS[i][1] for i in symbols)
        rec = json.dumps({"id": "s%07d" % n, "bytes": list(data)}).encode() + b"\n"
        out.write(rec)
        h.update(rec)
        n += 1
    a = 0
    for length in range(0, 6):
        c = 0
        for tup in itertools.product(range(len(SYMBOLS)), repeat=length):
            emit(tup)
            c += 1
        counts["A_len%d" % length] = c
        a += c
    counts["A_total"] = a
    b = 0
    for tup in itertools.product(BLOCK8, repeat=6):
        if sum(1 for i in tup if i in OPENERS) == 3:
            emit(tup)
            b += 1
    counts["B_frames"] = b
    counts["total"] = n
    out.close()
    manifest = {
        "symbols": [[name, list(data)] for name, data in SYMBOLS],
        "counts": counts,
        "cases_sha256": h.hexdigest(),
    }
    with open("manifest.json", "w") as f:
        json.dump(manifest, f, indent=1, sort_keys=True)
    print(json.dumps(counts, sort_keys=True))
    print("cases_sha256", h.hexdigest())

if __name__ == "__main__":
    main()
