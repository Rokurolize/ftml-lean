#!/usr/bin/env python3
"""Build the fresh SUSPECT-BLOCK probe case files and the reference input.

Sources are LF-only and have no trailing newline: Wikidot strips one on save
and wikidot-probe requires a byte-identical read-back. The tagged set is
published with tags=['alpha'] because the bundled probe CLI has no tag
subcommand.
"""
import json
import os

OUT = os.path.dirname(os.path.abspath(__file__))

untagged = [
    ("bq-nospace-only", ">nospace"),
    ("bq-nospace-then-text", ">nospace\nX"),
    ("bq-nospace-run", ">one\n>two\nX"),
    ("bq-multi-nospace", ">>>nospace\nX"),
    ("bq-space-control", "> space\nX"),
    ("bq-comment-line", "> [!-- hide --]\n> shown"),
    ("bq-comment-between", "> one\n[!-- c --]\n> two"),
    ("if-trail-plus-untag", "[[iftags +alpha,]]KEEP[[/iftags]]\nX"),
    ("if-empty-untag", "[[iftags]]KEEP[[/iftags]]\nX"),
    ("if-dangling-minus-untag", "[[iftags -]]KEEP[[/iftags]]\nX"),
    ("if-comment-closer-untag", "[[iftags -beta]]KEEP[!-- [[/iftags]] --]TAIL"),
    ("cm-hides-if-open", "[!-- [[iftags +alpha]] --]KEEP[[/iftags]]\nX"),
    ("cm-basic-inline", "A[!-- hide --]B"),
    ("cm-own-line", "a\n[!-- hide --]\nb"),
    ("cm-two-leading-nl", "a\n\n[!-- hide --]\nb"),
    ("cm-indented", "a\n  [!-- hide --]\nb"),
    ("cm-double-bracket", "A[[!-- hide --]]B"),
    ("cm-in-code", "[[code]]\n[!-- hide --]\n[[/code]]"),
    ("cm-extra-hyphen", "A[!-- hide ---]B"),
    ("cm-two-inline", "[!-- a --]X[!-- b --]Y"),
    ("cm-unterminated", "A[!-- hide B"),
    ("cm-multiline", "[!-- a\nb --]\nX"),
]

tagged = [
    ("if-plain-plus-tagged", "[[iftags +alpha]]KEEP[[/iftags]]\nX"),
    ("if-trail-plus-tagged", "[[iftags +alpha,]]KEEP[[/iftags]]\nX"),
    ("if-trail-bare-tagged", "[[iftags alpha,]]KEEP[[/iftags]]\nX"),
    ("if-lead-comma-tagged", "[[iftags ,+alpha]]KEEP[[/iftags]]\nX"),
    ("if-double-comma-tagged", "[[iftags +alpha,,]]KEEP[[/iftags]]\nX"),
    ("if-trail-minus-tagged", "[[iftags -beta,]]KEEP[[/iftags]]\nX"),
    ("if-trail-space-tagged", "[[iftags +alpha, ]]KEEP[[/iftags]]\nX"),
    ("if-dangling-minus-tagged", "[[iftags -]]KEEP[[/iftags]]\nX"),
    ("if-case-plus-tagged", "[[iftags +ALPHA]]KEEP[[/iftags]]\nX"),
    ("if-nospace-tagged", "[[iftags+alpha]]KEEP[[/iftags]]\nX"),
    ("if-newline-tagged", "[[iftags +alpha\n+beta]]KEEP[[/iftags]]\nX"),
    ("if-nested-tagged", "[[iftags +alpha]]A[[iftags -beta]]B[[/iftags]]C[[/iftags]]\nX"),
]

for name, rows, tags in (("probe-untagged.jsonl", untagged, None),
                         ("probe-tagged.jsonl", tagged, ["alpha"])):
    with open(os.path.join(OUT, name), "w", encoding="utf-8") as fh:
        for cid, src in rows:
            rec = {"id": cid, "source": src}
            if tags is not None:
                rec["tags"] = tags
            fh.write(json.dumps(rec, ensure_ascii=False) + "\n")
    print("wrote", name, len(rows))

with open(os.path.join(OUT, "ref-input.jsonl"), "w", encoding="utf-8") as fh:
    for rows, tags in ((untagged, []), (tagged, ["alpha"])):
        for cid, src in rows:
            fh.write(json.dumps({"id": cid, "source": src, "tags": tags},
                                ensure_ascii=False) + "\n")
print("wrote ref-input.jsonl", len(untagged) + len(tagged))
