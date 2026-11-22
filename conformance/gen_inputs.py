#!/usr/bin/env python3
"""Deterministic input generation for the process_depths conformance run.

Two blocks, one case per line, rows as `depth,type,id` joined by `;`
(an empty line is the empty case; id is the row's position):

1. The bounded box, in the exhaustive harness's shape: every row sequence
   of length <= MAXLEN (argv[1], default 5) over depths 0..3 and 3 list
   types. Length <= 5 gives 271,453 cases; length <= 6 gives 3,257,437,
   exactly the ftml harness's box.
2. 20,000 pseudo-random cases from a fixed-seed LCG (pure integer
   arithmetic, identical output on any machine): lengths 0..40, depths
   0..8, 4 list types. These leave the harness's box on purpose.
"""
import sys

MAXLEN = int(sys.argv[1]) if len(sys.argv) > 1 else 5
MAXD = 3
NTYPES = 3
NRAND = 20000


def box():
    choices = [(d, t) for d in range(MAXD + 1) for t in range(NTYPES)]
    seqs = [[]]
    allseqs = [[]]
    for _ in range(MAXLEN):
        seqs = [s + [c] for s in seqs for c in choices]
        allseqs += seqs
    return allseqs


def lcg_cases():
    state = 0x2545F491

    def nxt():
        nonlocal state
        state = (state * 1103515245 + 12345) & 0x7FFFFFFF
        return state

    cases = []
    for _ in range(NRAND):
        n = nxt() % 41
        cases.append([(nxt() % 9, nxt() % 4) for _ in range(n)])
    return cases


def emit(seqs):
    lines = [";".join(f"{d},{t},{i}" for i, (d, t) in enumerate(s)) for s in seqs]
    sys.stdout.write("\n".join(lines) + "\n")


emit(box())
emit(lcg_cases())
