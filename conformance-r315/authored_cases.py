#!/usr/bin/env python3
"""Authored targeted cases for the R3.15 middle rules (corpus
source (b) in BRIEF-R3.15.md): whole-document sources written
per rule from its rule file, covering the rule's own grammar
and its seams with the already-mirrored neighbors (Toc above;
Span, Paragraph, Newline below and inside; the other four
family rules among themselves; and placeholder seams from the
earlier token-producing rules). Emits authored-cases.jsonl
beside itself: one {"id", "source"} record per case, ids
hz-/sep-/cf-/br-/ce- numbered per rule in list order.

The oracle defines truth for every case; nothing here asserts
an expected output.
"""

import json
import os

HERE = os.path.dirname(os.path.abspath(__file__))

HORIZ = [
    # run-length grammar: the {4,} threshold and greedy extent
    "----\n",
    "----",
    "x\n----\ny\n",
    "x\n----\ny",
    "x\n-----\ny\n",
    "x\n----------\ny\n",
    "x\n----------------------------------------\ny\n",
    "x\n---\ny\n",
    "x\n--\ny\n",
    "x\n-\ny\n",
    # whole document is the rule line, no trailing newline
    "x\n----",
    # line-shape defeats: trailing/leading matter on the line
    "x\n---- \ny\n",
    "x\n----\t\ny\n",
    "x\n ----\ny\n",
    "x\n----x\ny\n",
    "x\nx----\ny\n",
    "a ---- b\n",
    "- - - -\n",
    # stacking and repetition
    "----\n----\n",
    "----\n\n----\n",
    "a\n----\nb\n----\nc\n",
    "----\n====\n",
    # seams: neighbors in pipeline order
    "[[toc]]\n----\nx\n",
    "+ Head\n----\nx\n",
    "x\n----\n**bold**\n",
    "x\n----\n[[span]]s[[/span]]\n",
    "x\n----\npara one\n\npara two\n",
    "* item\n----\nx\n",
    "|| cell ||\n----\nx\n",
    # shielded seams: earlier rules claim the region first
    "[[code]]\n----\n[[/code]]\nx\n",
    "@@\n----\n@@\nx\n",
    "[[div]]\n----\n[[/div]]\nx\n",
    "> quote\n----\nx\n",
    # seams with the other four family rules
    "a _\n----\nb\n",
    "----\n= centered\nx\n",
    "~~~~\n----\nx\n",
    "====\n----\nx\n",
    "x\n----\n====\ny\n",
    # placeholder-adjacent: the rule line follows claimed blocks
    "[[code]]\nx\n[[/code]]\n----\ny\n",
    "**a**\n----\ny\n",
    "x\n----\n[[code]]\ny\n[[/code]]\n",
    # dash runs inside longer text lines
    "before\nsome ---- text\n----\nafter\n",
    "x\n----\n",
    "\n----\nx\n",
    "x\n\n----\n\ny\n",
]

SEPARATOR = [
    # run-length grammar
    "====\n",
    "====",
    "x\n====\ny\n",
    "x\n=====\ny\n",
    "x\n==========\ny\n",
    "x\n===\ny\n",
    "x\n==\ny\n",
    "x\n=\ny\n",
    "x\n====",
    # line-shape defeats
    "x\n==== \ny\n",
    "x\n ====\ny\n",
    "x\n====x\ny\n",
    "x\nx====\ny\n",
    "a ==== b\n",
    "= = = =\n",
    # the Center seam: "= " lines are not separators
    "x\n= text\ny\n",
    "x\n= ====\ny\n",
    "= ====\n",
    "x\n==== =\ny\n",
    # stacking and repetition
    "====\n====\n",
    "====\n\n====\n",
    "a\n====\nb\n====\nc\n",
    # seams with the other four family rules
    "----\n====\nx\n",
    "====\n----\nx\n",
    "~~~~\n====\nx\n",
    "x\n====\n~~~~\ny\n",
    "a _\n====\nb\n",
    "x\n====\n= centered\ny\n",
    # seams: neighbors
    "[[toc]]\n====\nx\n",
    "+ Head\n====\nx\n",
    "x\n====\n**bold**\n",
    "* item\n====\nx\n",
    "[[code]]\n====\n[[/code]]\nx\n",
    "@@\n====\n@@\nx\n",
    "[[div]]\n====\n[[/div]]\nx\n",
    "> quote\n====\nx\n",
    "[[code]]\nx\n[[/code]]\n====\ny\n",
    "x\n====\n",
    "\n====\nx\n",
    "x\n\n====\n\ny\n",
    "before\nsome ==== text\n====\nafter\n",
]

CLEARFLOAT = [
    # run-length grammar and the side group
    "~~~~\n",
    "~~~~",
    "~~~~>\n",
    "~~~~<\n",
    "~~~~~>\n",
    "~~~~~~<\n",
    "~~~~~~~~~~\n",
    "x\n~~~~\ny\n",
    "x\n~~~~>\ny\n",
    "x\n~~~~<\ny\n",
    "x\n~~~~",
    "x\n~~~~>",
    # below threshold
    "x\n~~~\ny\n",
    "x\n~~\ny\n",
    "x\n~\ny\n",
    # side-group defeats: at most one side byte, then line end
    "x\n~~~~>>\ny\n",
    "x\n~~~~><\ny\n",
    "x\n~~~~>x\ny\n",
    "x\n~~~~>\ny\n",
    "x\n~~~~ >\ny\n",
    "x\n~~~~> \ny\n",
    "x\n~~~~ \ny\n",
    "x\n ~~~~\ny\n",
    "x\n~~~~~\ny\n",
    "a ~~~~ b\n",
    # stacking and repetition
    "~~~~\n~~~~<\n",
    "~~~~>\n\n~~~~\n",
    "a\n~~~~\nb\n~~~~>\nc\n",
    # seams with the other four family rules
    "----\n~~~~\nx\n",
    "~~~~\n----\nx\n",
    "====\n~~~~>\nx\n",
    "~~~~<\n====\nx\n",
    "a _\n~~~~\nb\n",
    "x\n~~~~\n= centered\ny\n",
    # seams: neighbors
    "[[toc]]\n~~~~\nx\n",
    "+ Head\n~~~~<\nx\n",
    "x\n~~~~\n**bold**\n",
    "* item\n~~~~\nx\n",
    "[[code]]\n~~~~\n[[/code]]\nx\n",
    "@@\n~~~~\n@@\nx\n",
    "[[div]]\n~~~~>\n[[/div]]\nx\n",
    "> quote\n~~~~\nx\n",
    "[[code]]\nx\n[[/code]]\n~~~~<\ny\n",
    "x\n~~~~\n",
    "\n~~~~>\nx\n",
    "x\n\n~~~~\n\ny\n",
]

BREAK = [
    # the literal shape: space, underscore, newline
    "a _\nb\n",
    "a _\nb",
    "a _\n",
    " _\nb\n",
    "a _\nb _\nc\n",
    "a _\n _\nb\n",
    "a _\n\nb\n",
    "one two _\nthree\n",
    "a _\nb _\nc _\nd\n",
    # near misses
    "a _",
    "a _ \nb\n",
    "a\t_\nb\n",
    "a\n_\nb\n",
    "a _\rb\n",
    "a__\nb\n",
    "a _ _\nb\n",
    "a  _\nb\n",
    "a _\n_\nb\n",
    "_\nb\n",
    "a _x\nb\n",
    # runs and clusters
    "a _\n _\n _\nb\n",
    "x _\ny _\nz _\nw\n",
    "a _\nb\nc _\nd\n",
    # seams: neighbors and earlier rules
    "**a _\nb**\n",
    "[[span]]a _\nb[[/span]]\n",
    "* item _\n* next\n",
    "+ head _\nx\n",
    "[[code]]\na _\nb\n[[/code]]\nx\n",
    "@@a _\nb@@\nx\n",
    "[[div]]\na _\nb\n[[/div]]\nx\n",
    "> a _\n> b\n",
    "|| a _\n|| b ||\n",
    "[[footnote]]a _\nb[[/footnote]]\nx\n",
    # seams with the other four family rules
    "a _\n----\nb\n",
    "----\na _\nb\n",
    "a _\n====\nb\n",
    "a _\n~~~~\nb\n",
    "x\n= a _\nb\ny\n",
    "x\n= centered\na _\nb\n",
    # placeholder-boundary seams
    "[[code]]\nx\n[[/code]] _\ny\n",
    "a _\n[[code]]\nx\n[[/code]]\n",
    "text _\n",
    " _\n",
    "a _\n----",
]

CENTER = [
    # the basic form and body shapes
    "x\n= hello\ny\n",
    "x\n= hello =\ny\n",
    "x\n= a = b\ny\n",
    "x\n= \ny\n",
    "x\n=  \ny\n",
    "x\n=  padded\ny\n",
    "x\n= trailing \ny\n",
    "x\n= **bold** text\ny\n",
    "x\n= café\ny\n",
    # the leading-newline requirement
    "= hello\ny\n",
    "= hello\n",
    "x= hello\ny\n",
    "x\n = hello\ny\n",
    "x\n== hello\ny\n",
    "x\n=hello\ny\n",
    # the closing-newline requirement
    "x\n= hello",
    "x\n= hello\ny",
    # repetition: consecutive lines share the newline
    "x\n= a\n= b\ny\n",
    "x\n= a\n\n= b\ny\n",
    "x\n= a\ntext\n= b\ny\n",
    "x\n= a\n= b\n= c\ny\n",
    # seams: neighbors
    "[[toc]]\n= a\nx\n",
    "+ Head\n= a\nx\n",
    "x\n= a\n**bold**\n",
    "* item\n= a\nx\n",
    "[[div]]\n= a\n[[/div]]\nx\n",
    "> quote\n= a\nx\n",
    "[[code]]\n= a\n[[/code]]\nx\n",
    # body holding earlier rules' placeholders
    "x\n= see [[footnote]]n[[/footnote]] here\ny\n",
    "x\n= a [[math]]x[[/math]] b\ny\n",
    "x\n= http://example.com\ny\n",
    # seams with the other four family rules
    "----\n= a\nx\n",
    "x\n= a\n----\ny\n",
    "====\n= a\nx\n",
    "~~~~\n= a\nx\n",
    "x\n= a _\nb\ny\n",
    "a _\n= c\nd\n",
    # paragraph seams: center lines among paragraphs
    "para one\n\n= centered\n\npara two\n",
    "para one\n= centered\npara two\n",
    "x\n= a\n",
    "\n= a\nx\n",
    "x\n= a\n\ny\n",
    "x\n= a\n----\n= b\ny\n",
]

SETS = [("hz", HORIZ), ("sep", SEPARATOR), ("cf", CLEARFLOAT),
        ("br", BREAK), ("ce", CENTER)]


def main():
    out = []
    for tag, sources in SETS:
        for i, src in enumerate(sources, 1):
            out.append({"id": f"{tag}-{i:02d}", "source": src})
    path = os.path.join(HERE, "authored-cases.jsonl")
    with open(path, "w") as f:
        for rec in out:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")
    counts = {tag: len(s) for tag, s in SETS}
    print("authored cases:", counts, "total:", len(out))


if __name__ == "__main__":
    main()
