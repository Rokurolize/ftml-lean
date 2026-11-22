#!/usr/bin/env python3
"""Third SUSPECT-BLOCK batch: coordinator lead shapes and unprobed seams."""
import json
import os

OUT = os.path.dirname(os.path.abspath(__file__))

untagged = [
    ("bq-raw-nospace", "A\n\n>@@hello@@\n\nB"),
    ("bq-raw-space-control", "A\n\n> @@hello@@\n\nB"),
    ("bq-comment-after-marker", "A\n\n>[!-- c --]\n\nB"),
    ("if-trail-forbid-untag", "A [[iftags -foo,]]KEPT[[/iftags]] B"),
    ("if-lead-forbid-untag", "A [[iftags ,-foo]]KEPT[[/iftags]] B"),
    ("cm-in-raw", "@@[!-- c --]@@"),
    ("bq-comment-tail-text", "> [!-- c --] q"),
]

tagged = [
    ("if-comma-space-multi-tagged", "[[iftags +alpha, +beta]]KEEP[[/iftags]]\nX",
     ["alpha", "beta"]),
    ("if-only-comma-tagged", "[[iftags ,]]KEEP[[/iftags]]\nX", ["alpha"]),
]

with open(os.path.join(OUT, "probe3-untagged.jsonl"), "w", encoding="utf-8") as fh:
    for cid, src in untagged:
        fh.write(json.dumps({"id": cid, "source": src},
                            ensure_ascii=False) + "\n")
print("wrote probe3-untagged.jsonl", len(untagged))
with open(os.path.join(OUT, "probe3-tagged.jsonl"), "w", encoding="utf-8") as fh:
    for cid, src, tags in tagged:
        fh.write(json.dumps({"id": cid, "source": src, "tags": tags},
                            ensure_ascii=False) + "\n")
print("wrote probe3-tagged.jsonl", len(tagged))

with open(os.path.join(OUT, "ref3-input.jsonl"), "w", encoding="utf-8") as fh:
    for cid, src in untagged:
        fh.write(json.dumps({"id": cid, "source": src, "tags": []},
                            ensure_ascii=False) + "\n")
    for cid, src, tags in tagged:
        fh.write(json.dumps({"id": cid, "source": src, "tags": tags},
                            ensure_ascii=False) + "\n")
print("wrote ref3-input.jsonl", len(untagged) + len(tagged))
