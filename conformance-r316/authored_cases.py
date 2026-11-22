#!/usr/bin/env python3
"""Authored targeted cases for the R3.16 stage corpus
(BRIEF-R3.16.md, corpus assembly source (b)): at least forty
whole-document cases per rule, written from the rule files,
covering each rule's own grammar and its seams with its
pipeline neighbors.

  dp-*  Divprefilter: the `[[/div]]` + lazy-whitespace +
        `[[div` rewrite (case-insensitive literals, the
        constant lowercase replacement, every \\s byte class,
        scored and attributed openers, chains, and the
        no-fire shapes).
  da-*  Divalign: the four align keys and their backreference
        discipline, the line-end anchor on the closer, nested
        blocks (the (?R) unit and the parse() recursion that
        claims a nested block on the second pass), siblings,
        unterminated and crossed shapes, and bodies holding
        earlier rules' placeholders.
  nt-*  Note: the optional leading-newline group (doubled in
        the replacement), the lazy body to the first closer,
        case-insensitive tags, nested openers, and bodies
        holding Div placeholders (Div runs before Note) and
        literal Gallery text (Gallery runs after Note).
  ga-*  Gallery: the line-start opener, the attribute group
        through getAttrs (size present, absent, empty, "0",
        unquoted), the optional source-line body (one or more
        `\\n: ...` lines then the closer), the opener-only
        claim when the body group fails, and case folding.

Writes authored-cases.jsonl beside itself.
"""

import json
import os

HERE = os.path.dirname(os.path.abspath(__file__))

DP = [
    "[[/div]]\n[[div]]\nx\n[[/div]]",
    "[[/div]] [[div]]",
    "[[/div]]   [[div]]",
    "[[/div]]\t[[div]]",
    "[[/div]]\n\n\n[[div]]",
    "[[/div]][[div]]",
    "[[/div]] \n \t [[div]]",
    "[[/DIV]]\n[[DIV]]",
    "[[/Div]] [[dIv]]",
    "x[[/div]] [[div]]y",
    "[[/div]] [[span]]",
    "[[/div]] \n[[span]]",
    "[[div]]\nx\n[[/div]]",
    "[[/div]] [[div",
    "[[/div]]\n[[div",
    "[[/div]] [[div]]\na\n[[/div]] [[div]]\nb\n[[/div]]",
    "[[/div]] [[div]] [[div]]",
    "[[div]]\n[[/div]]\n\n[[div]]\n[[/div]]",
    "[[/div]] x [[div]]",
    "[[/div]]\n[[/div]] [[div]]",
    "[[/div]] [[div_]]",
    '[[/div]] [[div class="a"]]',
    '[[/div]]\n[[div class="a"]]\nx\n[[/div]]',
    "[[/div]]\r\n[[div]]",
    "[[/div]]\f[[div]]",
    "[[/div]]\v[[div]]",
    "[[/div]] [[div]] [[/div]] [[div]]",
    "text\n[[/div]]\n[[div]]\ntext",
    "[[/div]]  ",
    "[[div]]",
    "[[/div]] [[div]]x[[/div]] [[div]]",
    "[[/div]]\n[[div]]\n[[/div]]\n[[div]]",
    "[[/div]] [[div]]\n[[/div]]\n[[div]]",
    "a [[/div]] b [[div]] c",
    "[[/div]]\t \n[[div]]",
    "[[/div]] [[div]] [[/div]]",
    "[[/div]][[div]][[/div]][[div]]",
    "[[/div]] [[div]]\n\n[[/div]] [[div]]",
    "[[/div]] [[div]]\ntail line",
    '[[div]]\ncontent\n[[/div]]   \n\n   [[div]]\nmore\n[[/div]]',
    "[[/div]] [[div]] [[div]] [[/div]] [[div]]",
    "[[/div]] [[divx]]",
    "[[/div]] [[di]]",
    "[[/div] ] [[div]]",
    "[[/div]] [[div]]\n[[/div]] [[div]]\n[[/div]] [[div]]",
]

DA = [
    "[[=]]\ncentered\n[[/=]]",
    "[[<]]\nleft\n[[/<]]",
    "[[>]]\nright\n[[/>]]",
    "[[==]]\njustified\n[[/==]]",
    "[[==]]\nx\n[[/=]]",
    "[[=]]\nx\n[[/==]]",
    "[[=]]\n[[/=]]",
    "[[=]]\n\n[[/=]]",
    "x\n[[=]]\nbody\n[[/=]]\ny",
    "[[=]]\nbody\n[[/=]]",
    "[[=]]\nbody\n[[/=]]\n",
    "[[=]]\nbody\n[[/=]] tail",
    " [[=]]\nbody\n[[/=]]",
    "x[[=]]\nbody\n[[/=]]",
    "[[=]]\n[[<]]\ninner\n[[/<]]\n[[/=]]",
    "[[=]]\n[[=]]\ninner\n[[/=]]\n[[/=]]",
    "[[=]]\na\n[[/=]]\n[[<]]\nb\n[[/<]]",
    "[[=]]\nunterminated",
    "[[=]] body\n[[/=]]",
    "[[=]]\nbody[[/=]]",
    "[[=]]\n[[/=]]\n[[/=]]",
    "[[=]]\nline1\nline2\nline3\n[[/=]]",
    "[[==]]\nlonger body here\n[[/==]]",
    "[[=]]\n[[>]]\ndeep\n[[/>]]\nmid\n[[/=]]",
    "[[<]]\n[[=]]\nx\n[[/=]]\n[[/<]]",
    "[[=]]\n[[=]]\n[[/=]]\n[[/=]]",
    "[[=]]\n**bold** body\n[[/=]]",
    "[[=]]\n[[/=]] extra\n[[/=]]",
    "[[=]]",
    "[[=]]\n",
    "[[>]]\n\n\n[[/>]]",
    "[[=]]\nbody\n[[/=]]\n[[=]]\nmore\n[[/=]]",
    "[[=]]\n[[code]]\nx\n[[/code]]\n[[/=]]",
    "[[=]]\n[[=]]\n[[/=]]",
    "[[=]]\nx\n[[/=]]\n[[/=]]",
    "[[=<]]\nx\n[[/=<]]",
    "[[==]]\n[[/==]]",
    "[[<]]\nx[[/<]]",
    "[[=]]\nbody\n[[/=]]\n\n[[>]]\nb2\n[[/>]]",
    "[[=]]\n[[<]]\n[[/<]]\n[[/=]]",
    "[[=]]\n[[<]]\n[[/=]]\n[[/<]]",
    "[[=]]\n= centered line\n[[/=]]",
    "[[>]]\n~~~~\n[[/>]]",
    "[[=]]\n----\n[[/=]]",
    "[[=]]\n[[=]]\nx\n[[/=]]\ny\n[[/=]]",
    "[[=]]\n[[<]]\nx\n[[/<]]\ny\n[[/=]]",
    "[[=]]\n[[=]]\nx\n[[/=]]\n[[/=]]",
]

NT = [
    "[[note]]\nbody\n[[/note]]",
    "x\n[[note]]\nbody\n[[/note]]",
    "[[note]]\n[[/note]]",
    "[[note]]\nline1\nline2\n[[/note]]",
    "[[note]] body\n[[/note]]",
    "[[note]]\nbody",
    "[[note]]\nbody[[/note]]",
    "[[note]]\na[[/note]]b[[/note]]",
    "[[NOTE]]\nbody\n[[/NOTE]]",
    "[[Note]]\nbody\n[[/note]]",
    "[[note]]\n[[note]]\ninner\n[[/note]]\n[[/note]]",
    "a [[note]]\nb\n[[/note]] c",
    "\n[[note]]\nb\n[[/note]]",
    "[[note]]\nb\n[[/note]]\n[[note]]\nc\n[[/note]]",
    "[[note]]\nb\n[[/note]] and [[note]]\nc\n[[/note]]",
    "[[note]]\n**bold**\n[[/note]]",
    "[[note]]\n[[code]]\nx\n[[/code]]\n[[/note]]",
    "[[note]]\n[[/note]]\n[[/note]]",
    "text[[/note]]",
    "[[note]]\nbody\n[[/note]]\n[[/note]]",
    "[[note]]\n* item\n[[/note]]",
    "[[note]]\n[[ol]]\n[[li]]u[[/li]]\n[[/ol]]\n[[/note]]",
    "[[note]]\nbody\n[[/note]]\ntail",
    "head\n\n[[note]]\nbody\n[[/note]]",
    "[[note]]\n\n[[/note]]",
    "[[note]]\n \n[[/note]]",
    "[[note]]\nx\n[[/note]]",
    "[[note]]\n[[div]]\nx\n[[/div]]\n[[/note]]",
    "[[note]]\n[[gallery]]\n[[/note]]",
    "[[note]]\ncafé\n[[/note]]",
    "[[note]]\nbody\n[[/NOTE]]",
    "x[[note]]\nb\n[[/note]]",
    "[[note]]\nb\n[[/note]]x",
    "[[note]]\n[[/note]] [[note]]\n[[/note]]",
    "[[note]]\n----\n[[/note]]",
    "[[note]]\n= centered\n[[/note]]",
    "[[note]]",
    "[[note]]\n",
    "[[/note]]\n[[note]]\nb\n[[/note]]",
    "[[note]]\nb\n[[/note]]\n",
    "[[note]]\n[[note]]\n[[/note]]",
    "[[note]]\r\nbody\r\n[[/note]]",
]

GA = [
    "[[gallery]]",
    "[[gallery]]\n: a.png\n[[/gallery]]",
    "[[gallery]]\n: a.png\n: b.png\n[[/gallery]]",
    '[[gallery size="small"]]\n: a.png\n[[/gallery]]',
    '[[gallery size="large"]]',
    "[[gallery]]\n: a.png",
    "[[gallery]]\nnot a source\n[[/gallery]]",
    "[[gallery]]\n: a.png\nnot source\n[[/gallery]]",
    "x\n[[gallery]]\n: a\n[[/gallery]]",
    "x [[gallery]]\n: a\n[[/gallery]]",
    "[[GALLERY]]\n: a\n[[/GALLERY]]",
    '[[gallery size="small" other="x"]]\n: a\n[[/gallery]]',
    '[[gallery foo="bar"]]\n: a\n[[/gallery]]',
    '[[gallery size=""]]\n: a\n[[/gallery]]',
    '[[gallery size="0"]]\n: a\n[[/gallery]]',
    "[[gallery size=small]]\n: a\n[[/gallery]]",
    "[[gallery]]\n:a.png\n[[/gallery]]",
    "[[gallery]]\n: \n[[/gallery]]",
    "[[gallery]]\n:  double space\n[[/gallery]]",
    "[[gallery]]\n: a.png\n: b.png",
    "[[gallery]]\n: a.png\n[[/gallery]]\ntail",
    "[[gallery]]\n: a.png\n[[/gallery]] extra",
    "[[gallery]]\n: a.png\n\n[[/gallery]]",
    "[[gallery]]\n: [[span]]x[[/span]]\n[[/gallery]]",
    "[[gallery]]\n: café.png\n[[/gallery]]",
    "[[gallery]]\n: a]b.png\n[[/gallery]]",
    '[[gallery a="1" size="medium" b="2"]]\n: x\n[[/gallery]]',
    '[[gallery size="small"]]\n: a\n: b\n: c\n[[/gallery]]',
    "[[gallery]]\n: a\n[[gallery]]\n: b\n[[/gallery]]",
    "[[gallery]]\n: a\n[[/gallery]]\n[[gallery]]\n: b\n[[/gallery]]",
    " [[gallery]]\n: a\n[[/gallery]]",
    "[[gallery]] \n: a\n[[/gallery]]",
    "[[gallery\t]]",
    "[[gallery ]]",
    "[[gallery]]\n: a\n: b\n[[/gallery]]\n: c\n[[/gallery]]",
    '[[gallery size="small"]]\n: a\n[[/GALLERY]]',
    "[[gallery]]\n: a.png \n[[/gallery]]",
    "[[gallery]]\n: one.jpg\n[[/gallery]]",
    "text\n\n[[gallery]]\n: a\n[[/gallery]]",
    "[[gallery]]\n: [[code]]x[[/code]]\n[[/gallery]]",
    '[[gallery size="small"]]\n: a\n[[/gallery]]\n[[gallery]]\n: b\n[[/gallery]]',
    '[[gallery  size="wide"  ]]',
    '[[gallery\nsize="small"]]\n: a\n[[/gallery]]',
    "[[gallery]]\n: a\n[[/gallery]]\n",
]


def main():
    out = []
    for prefix, srcs in (("dp", DP), ("da", DA), ("nt", NT), ("ga", GA)):
        assert len(srcs) >= 40, (prefix, len(srcs))
        for i, src in enumerate(srcs, 1):
            out.append({"id": f"{prefix}-{i:02d}", "source": src})
    path = os.path.join(HERE, "authored-cases.jsonl")
    with open(path, "w") as f:
        for rec in out:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")
    print(f"authored: {len(out)} cases "
          f"(dp {len(DP)}, da {len(DA)}, nt {len(NT)}, ga {len(GA)})")


if __name__ == "__main__":
    main()
