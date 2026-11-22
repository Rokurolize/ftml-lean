#!/usr/bin/env python3
"""Second SUSPECT-BLOCK probe batch: order-sensitive and trim/whitespace seams."""
import json
import os

OUT = os.path.dirname(os.path.abspath(__file__))
NBSP = "\u00a0"

untagged = [
    ("bq-nbsp-only", "X\n> " + NBSP + "\nY"),
    ("bq-comment-only", "A\n> [!--c--]\nB"),
    ("bq-spaced-marker", "X\n> > q\nY"),
    ("bq-empty-in-run", "A\n> a\n> \n> b\nB"),
    ("bq-indented-next", "X\n> a\n > b\nY"),
    ("cm-two-lines", "a\n[!--1--]\n[!--2--]\nb"),
    ("cm-nbsp-indent", "a\n" + NBSP + "[!--c--]\nb"),
    ("cm-before-quote", "A\n[!--c--]> q\nB"),
    ("cm-nested", "a[!--x[!--y--]z--]b"),
    ("cm-quote-bridge-blank", "A\n> x\n\n[!--c--]\n\n> y\nB"),
]

tagged = [
    ("bq-if-false-tagged", "A\n> [[iftags +beta]]KEEP[[/iftags]]\nB"),
    ("if-spec-comment-tagged", "[[iftags [!--x--]+alpha]]KEEP[[/iftags]]\nX"),
    ("if-trail-forbid-hit-tagged", "[[iftags -alpha,]]KEEP[[/iftags]]\nX"),
]

for name, rows, tags in (("probe2-untagged.jsonl", untagged, None),
                         ("probe2-tagged.jsonl", tagged, ["alpha"])):
    with open(os.path.join(OUT, name), "w", encoding="utf-8") as fh:
        for cid, src in rows:
            rec = {"id": cid, "source": src}
            if tags is not None:
                rec["tags"] = tags
            fh.write(json.dumps(rec, ensure_ascii=False) + "\n")
    print("wrote", name, len(rows))

with open(os.path.join(OUT, "ref2-input.jsonl"), "w", encoding="utf-8") as fh:
    for rows, tags in ((untagged, []), (tagged, ["alpha"])):
        for cid, src in rows:
            fh.write(json.dumps({"id": cid, "source": src, "tags": tags},
                                ensure_ascii=False) + "\n")
print("wrote ref2-input.jsonl", len(untagged) + len(tagged))
