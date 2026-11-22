#!/usr/bin/env python3
"""Bounded Tableadv shape grammar and the reference-vs-DFS comparison.

The grammar is the union of two languages over one alphabet.

Alphabet (20 symbols), in this order. It is the feature alphabet the
R2 Tableadv battery exercises, plus the two quote-trick symbols the
witness is built from (`[[table"]]` and `"]]`) and the bare `]]`
(a free-language fragment; the frame does not insert it between
those two symbols):

  row and cell forms:  [[table]] [[/table]] [[row]] [[/row]]
                       [[cell]] [[/cell]] [[hcell]] [[/hcell]]
                       newline, space
  span, valid:         [[cell colspan="2"]]
  span, invalid:       [[cell colspan="0"]]  [[cell colspan="abc"]]
  alignment:           [[cell align="center"]]
  unknown attribute:   [[cell foo="1"]]
  quoted bracket:      [[table class="a]]b"]]
  quote-trick pieces:  [[table"]]   "]]   ]]
  cell text:           X

Free language F: every concatenation of at most 3 symbols, including
the empty concatenation. |F| = (20^4 - 1) / 19.

Frame language R: the quote-trick shape

  [[table]] · A · [[table"]] · [[/table]] · "]] · B · [[/table]]

where A and B are concatenations of at most 2 symbols (including
empty). The witness is the member with A = [[row]][[cell]] and
B = [[/cell]][[/row]]: the bytes between [[table"]] and "]] are
[[/table]], which is what the long quoted head swallows. |R| =
(1 + 20 + 400)^2. F and R are disjoint because every frame has
five fixed symbols and the free language has length at most 3.

The comparison is the Lean depth-first mirror (`tableadvScanGo`)
against the Lean enumeration (`tableadvEnumScan`) and, separately,
against PHP 8.5.4's Tableadv rule (the reference pattern).
"""

from __future__ import annotations

SIGMA = [
    "[[table]]",
    "[[/table]]",
    "[[row]]",
    "[[/row]]",
    "[[cell]]",
    "[[/cell]]",
    "[[hcell]]",
    "[[/hcell]]",
    "\n",
    " ",
    '[[cell colspan="2"]]',
    '[[cell colspan="0"]]',
    '[[cell colspan="abc"]]',
    '[[cell align="center"]]',
    '[[cell foo="1"]]',
    '[[table class="a]]b"]]',
    '[[table"]]',
    '"]]',
    "]]",
    "X",
]

FREE_BOUND = 3
FRAME_BOUND = 2


def concat_upto(bound: int):
    """Every concatenation of at most `bound` symbols, shortest first."""
    yield ""
    frontier = [""]
    for _ in range(bound):
        nxt = []
        for prefix in frontier:
            for sym in SIGMA:
                s = prefix + sym
                nxt.append(s)
                yield s
        frontier = nxt


def frames():
    left = list(concat_upto(FRAME_BOUND))
    right = left
    pre = "[[table]]"
    mid = '[[table"]]' + "[[/table]]" + '"]]'
    end = "[[/table]]"
    for a in left:
        for b in right:
            yield pre + a + mid + b + end


def grammar():
    """Disjoint union. Frames are yielded after the free language."""
    yield from concat_upto(FREE_BOUND)
    yield from frames()


def counts():
    n = len(SIGMA)
    free = (n ** (FREE_BOUND + 1) - 1) // (n - 1)
    fillers = (n ** (FRAME_BOUND + 1) - 1) // (n - 1)
    frame = fillers * fillers
    return {
        "alphabet": n,
        "free_bound": FREE_BOUND,
        "frame_bound": FRAME_BOUND,
        "free": free,
        "fillers": fillers,
        "frame": frame,
        "union": free + frame,
    }


if __name__ == "__main__":
    import json
    import sys
    c = counts()
    print(json.dumps(c), file=sys.stderr)
    mode = sys.argv[1] if len(sys.argv) > 1 else "count"
    if mode == "count":
        # exact, without materializing the frame
        seen_free = sum(1 for _ in concat_upto(FREE_BOUND))
        assert seen_free == c["free"]
        print(json.dumps({**c, "free_enumerated": seen_free}))
    elif mode == "dump":
        for s in grammar():
            b = s.encode()
            sys.stdout.buffer.write(f"{len(b)}\n".encode())
            sys.stdout.buffer.write(b)
