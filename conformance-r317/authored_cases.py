#!/usr/bin/env python3
"""Authored targeted cases for the R3.17 stage corpus
(BRIEF-R3.17.md, corpus assembly source (c)): at least forty
whole-document cases per rule, written from the rule files,
covering each rule's own grammar and its seams with its
pipeline neighbors.

  an-*  Anchor: the named form (valid charset, the
        invalid-name javascript:; fallback with lead/trail
        hoisting, the residual-']' literal token, the
        triple-bracket predecessor exception, empty names)
        and the element forms (plain and scored [[a_]],
        the attribute allowlist and ordering, id u-
        isolation, href verbatim vs slug normalization,
        starred target implication, boundary-space hoisting,
        the nested-opener close, the paragraph split, the
        scored line joins, placeholder-spanning attributes).
  us-*  User: the starred image form, case folding, the
        literal-space separator, untrimmed names, names
        spanning lines and placeholders, and the no-match
        shapes.
  bt-*  Button: the type charset and underscore rewrite,
        getAttrs over the attribute string (quoted, empty,
        duplicated, escaped, unterminated), the allowlist,
        the optional group's backtracking shapes.
  eb-*  Embed: the audio/video suffixes on opener and
        closer (independent, no backreference), lazy body
        to the first true closer, trimmed content, bodies
        spanning placeholders.
  so-*  Social: the token-free \\xFE module rewrite, the
        sites group (trimmed, then urlencoded into the
        module string), the space-only no-match shape.
  fi-*  File: the lazy name group and the optional pipe
        group in PCRE enumeration order, trim and the
        anchor-defaults-to-file rule, the newline ban (no
        /s), placeholder-spanning groups.

Writes authored-cases.jsonl beside itself.
"""

import json
import os

HERE = os.path.dirname(os.path.abspath(__file__))

AN = [
    "[[# strawberry]]",
    "[[# _lemon-lime.2%20]]",
    "[[# A]]",
    "[[#durian]]",
    "[[# ]]",
    "[[#  ]]",
    "[[# a b]]",
    "[[#  lead]]",
    "[[# trail ]]",
    "[[# a b]]]",
    "[[[# a b]]]",
    "x[[# a b]]]y",
    "[[# good]]]",
    "[[#\ttab-name]]",
    "[[# a\tb]]",
    "[[# %20]]",
    "[[# a$b]]",
    "[[# café]]",
    "pre [[# mid]] post",
    "[[# one]]\n[[# two]]",
    "[[# a]] [[# b c]] [[# d]]",
    "[[# a]]]]",
    "[[# [[math]]x[[/math]]]]",
    "[[a href=\"/x\"]]body[[/a]]",
    "[[a]]body[[/a]]",
    "pre [[a href=\"/x\"]] body [[/a]] post",
    "[[A HREF=\"/x\"]]body[[/A]]",
    "[[a_ href=\"/x\"]]body[[/a]]",
    "[[a_ href=\"/x\"]]\nbody\n[[/a]]",
    "pre\n[[a_ href=\"/x\"]]body[[/a]]",
    "[[a_ href=\"/x\"]]body[[/a]]\npost",
    "[[a_ href=\"/x\"]]body[[/a]]\n\npost",
    "[[a_ href=\"/x\"]]body[[/a]]\n\n\npost",
    "[[a href=\"/1\"]]x[[a href=\"/2\"]]y[[/a]]z[[/a]]",
    "[[a href=\"/1\"]]x[[a href=\"/2\"]]y[[/a]]",
    "[[a href=\"/1\"]]x[[a href=\"/2\"]]y[[/a]] mid [[a href=\"/3\"]]w[[/a]]",
    "[[a href=\"/x\"]]p1\n\np2[[/a]]",
    "[[a href=\"/x\"]]p1\n\n[[div]]p2[[/a]]",
    "[[a id=\"myid\" class=\"c\" style=\"s\" role=\"r\" type=\"t\" data-X=\"1\" data-y=\"2\" href=\"/h\" target=\"_self\"]]b[[/a]]",
    "[[a id=\"\"]]b[[/a]]",
    "[[a id=\" u\"]]b[[/a]]",
    "[[a id=\"u-x\"]]b[[/a]]",
    "[[a id=\"x\"]]b[[/a]]",
    "[[a href=\"*http://e.com\"]]b[[/a]]",
    "[[a href=\"*http://e.com\" target=\"_self\"]]b[[/a]]",
    "[[a href=\"Some Page\"]]b[[/a]]",
    "[[a href=\"a:b_c\"]]b[[/a]]",
    "[[a href=\"#frag\"]]b[[/a]]",
    "[[a href=\"page name with spaces\"]]b[[/a]]",
    "[[a href=\"HTTP://E.COM\"]]b[[/a]]",
    "[[a href=\"/a b\"]]b[[/a]]",
    "[[a href=\"/café\"]]b[[/a]]",
    "[[a class=\"a  b\"]]x[[/a]]",
    "[[a href='/single']]x[[/a]]",
    "[[a 123=\"x\" href=\"/y\"]]t[[/a]]",
    "[[a href=\"/x\"]]unclosed",
    "[[anchor]]x[[/anchor]]",
    "[[a ]]x[[/a]]",
    "[[a href=\"/x\"]][[/a]]",
    "x[[a href=\"/x\"]] y [[/a]]z",
    "[[a_ href=\"/x\"]]body[[/a]]",
    "\n\n[[a_ href=\"/x\"]]body[[/a]]\n\n",
    "[[a href=\"[[math]]x[[/math]]\"]]b[[/a]]",
    "[[a class=\"[[math]]x[[/math]]\"]]b[[/a]]",
    "[[a_ href=\"/x\"]]p1\n\np2[[/a]]",
    "[[a href=\"/x\"]]a[[/a]] [[a href=\"/y\"]]b[[/a]]",
    "[[a_ href=\"/1\"]]x[[a href=\"/2\"]]y[[/a]]",
    "[[code]][[a href=\"/x\"]]b[[/a]][[/code]]",
    "[[a href=\"/x\"]] [[/a]]",
    "[[a href=\"/x\"]]body[[/a]] tail",
    "lead [[a href=\"/x\"]]body[[/a]]",
    "[[a href=\"/x\"]]\nbody\n[[/a]]",
    "[[a_ href=\"/x\"]]body[[/a]]\n\n[[a_ href=\"/y\"]]more[[/a]]",
]

US = [
    "[[user john]]",
    "[[*user john]]",
    "[[user John Doe]]",
    "[[USER bob]]",
    "[[User bob]]",
    "[[*USER bob]]",
    "[[user]]",
    "[[user ]]",
    "[[user a]]b]]",
    "[[user a]b]]",
    "[[user  double]]",
    "[[user a\nb]]",
    "pre [[user x]] post",
    "[[user x]] and [[*user y]]",
    "[[user x]",
    "[[users x]]",
    "[[user\tx]]",
    "[[ user x]]",
    "[[user x ]]",
    "[[user *]]",
    "[[*user]]",
    "[[**user x]]",
    "[[user café]]",
    "[[user a]] [[user b]]",
    "[[user a]]\n\n[[user b]]",
    "[[user a|b]]",
    "[[user a]]x[[user b]]",
    "[[user [[math]]x[[/math]]]]",
    "[[code]][[user a]][[/code]]",
    "[[user a]]]",
    "[[user _x-1.2]]",
    "[[user a]] and [[*user a]]",
    "[[user a\tb]]",
    "x[[user a]]",
    "+ Head\n[[user a]]",
    "[[user  ]]",
    "[[div]][[user a]][[/div]]",
    "[[a href=\"/x\"]][[user a]][[/a]]",
    "[[note]]\n[[user a]]\n[[/note]]",
    "[[*User X]]",
    "[[user x]][[user y]]",
    "[[user a]]\n[[user b]]",
]

BT = [
    "[[button edit]]",
    "[[button edit text=\"Edit\"]]",
    "[[button edit text=\"Edit\" class=\"c\" style=\"s\"]]",
    "[[button edit id=\"x\"]]",
    "[[button edit_button]]",
    "[[button EDIT]]",
    "[[button Edit_Type]]",
    "[[button edit text=\"a\" text=\"b\"]]",
    "[[button edit  ]]",
    "[[button edit ]]",
    "[[button edit x]]",
    "[[button edit text='single']]",
    "[[button edit text=\"a b\" class=\"c\"]]",
    "[[button 123]]",
    "[[button a-b_c]]",
    "[[BUTTON edit]]",
    "[[button]]",
    "[[button ]]",
    "[[button edit",
    "[[button edit text=\"a]]",
    "[[button edit text=\"a\" extra=\"1\"]]",
    "[[button edit text=\"a\\\"b\"]]",
    "[[button edit\ntext=\"a\"]]",
    "pre [[button edit text=\"a\"]] post",
    "[[button edit]] [[button history]]",
    "[[button edit text=\"a\" ]]",
    "[[button edit  text=\"a\"]]",
    "[[button edit text=\"a|b\"]]",
    "[[button e]]",
    "[[button edit class=\"c\" text=\"t\" style=\"s\" type=\"x\"]]",
    "[[button edit text=\"\"]]",
    "[[button a1_-b]]",
    "[[code]][[button edit]][[/code]]",
    "[[button edit text=\"a\"",
    "[[button edit[]]",
    "[[Button EDIT Text=\"x\"]]",
    "[[button edit text=\"a\" class=\"b\" style=\"c\" text=\"z\"]]",
    "[[button edit text=\"a\nb\"]]",
    "[[button edit text=\"a\"]]tail",
    "+ [[button edit]]",
    "[[div]][[button edit]][[/div]]",
    "[[button edit\ttext=\"a\"]]",
    "[[button edit text=\"a\" class=\"b\"]]",
]

EB = [
    "[[embed]]body[[/embed]]",
    "[[embedvideo]]body[[/embedvideo]]",
    "[[embedaudio]]body[[/embedaudio]]",
    "[[embedvideo]]body[[/embed]]",
    "[[embed]]body[[/embedvideo]]",
    "[[embed]]  padded  [[/embed]]",
    "[[embed]]\n\nmultiline\n\n[[/embed]]",
    "[[EMBED]]x[[/EMBED]]",
    "[[EmbedVideo]]x[[/EmbedAudio]]",
    "[[embed]]unclosed",
    "[[embed]]a[[/embed]]b[[/embed]]",
    "[[embed]][[embed]]x[[/embed]]",
    "[[embedx]]y[[/embedx]]",
    "[[embed]]x[[/embed]] [[embed]]y[[/embed]]",
    "[[embed]] [[/embed]]",
    "[[embed]][[/embed]]",
    "[[embed]]a ] b[[/embed]]",
    "[[embed]]a [[/embedx]] b[[/embed]]",
    "[[embed]]a [[/embedvid]] b[[/embed]]",
    "[[embed]]a [[/embedaudio]] b [[/embed]]",
    "[[div]][[embed]]x[[/embed]][[/div]]",
    "pre[[embed]]x[[/embed]]post",
    "[[embed]]**bold**[[/embed]]",
    "[[embed]] [[user x]] [[/embed]]",
    "[[embedvideo]]",
    "[[embed]]x[[/embed]]\n\n[[embed]]y[[/embed]]",
    "[[embedaudio]]x[[/embedvideo]]",
    "[[embed]]a[[embed]]b[[/embed]]c[[/embed]]",
    "[[embed]]\t\n x \n\t[[/embed]]",
    "[[embed ]]x[[/embed]]",
    "[[embed]]x[[/embed ]]",
    "[[embed]][[file a.txt]][[/embed]]",
    "a [[embed]]x[[/embed]] b [[embed]]y[[/embed]] c",
    "|| [[embed]]x[[/embed]] ||",
    "[[embed]]\n[[/embed]]",
    "[[embedvideo]]x[[/embedvideo]]y[[embedaudio]]z[[/embedaudio]]",
    "[[embed]]x[[/embed]]\n[[social]]",
    "[[embed]][[code]]c[[/code]][[/embed]]",
    "[[embed]]long body with ]] inside[[/embed]]",
    "[[a href=\"/x\"]][[embed]]y[[/embed]][[/a]]",
    "[[embed]]x[[/embed]]",
    "[[embed]]line1\nline2[[/embed]]",
]

SO = [
    "[[social]]",
    "[[social digg]]",
    "[[social digg reddit]]",
    "[[SOCIAL digg]]",
    "[[social ]]",
    "[[social  digg]]",
    "[[social digg ]]",
    "[[social\tdigg]]",
    "[[social\ndigg]]",
    "[[social a]] [[social b]]",
    "[[social a\"b]]",
    "[[social a=b]]",
    "[[social café]]",
    "[[social a~b]]",
    "[[social a_b-c.d]]",
    "pre [[social x]] post",
    "[[social]]x[[social]]",
    "[[social a]]]",
    "[[social a]b]]",
    "[[social a b c]]",
    "[[social  ]]",
    "[[social a\nb]]",
    "[[div]][[social x]][[/div]]",
    "[[code]][[social x]][[/code]]",
    "[[social %20]]",
    "[[social a+b]]",
    "[[social a/b]]",
    "[[social a]]\nmore text",
    "[[a href=\"/x\"]][[social]][[/a]]",
    "[[note]]\n[[social x]]\n[[/note]]",
    "[[social \t a \t]]",
    "[[social 0]]",
    "[[social a]]x",
    "x[[social a]]",
    "[[social a]]\n",
    "[[social a]]\n\n[[social b]]",
    "[[social a] extra",
    "[[social\va]]",
    "[[social\fa]]",
    "[[social a[b]]",
    "+ [[social a]]",
    "[[social x]]",
]

FI = [
    "[[file a.txt]]",
    "[[file a.txt|Label]]",
    "[[file a.txt|]]",
    "[[file a.txt| ]]",
    "[[file  a.txt  ]]",
    "[[file a.txt | Label ]]",
    "[[FILE a.txt]]",
    "[[file a.txt|a|b]]",
    "[[file a\nb.txt]]",
    "[[file a.txt|x\ny]]",
    "[[file ]]",
    "[[file a.txt]] [[file b.txt|L]]",
    "[[div]][[file a.txt]][[/div]]",
    "[[a href=\"/x\"]][[file a.txt|L]][[/a]]",
    "[[code]][[file a.txt]][[/code]]",
    "[[file my file.txt]]",
    "[[file a.txt|Label With Spaces]]",
    "[[file a.txt|  ]]",
    "[[file |x]]",
    "[[file a|b|c]]",
    "[[file a]]]",
    "[[file a]b]]",
    "[[file café.txt]]",
    "[[file a.txt|[[math]]x[[/math]]]]",
    "[[file [[math]]x[[/math]].txt]]",
    "x[[file a.txt|L]]y",
    "[[file a.txt]]\n",
    "[[file a.txt |]]",
    "[[file a.txt| L]]",
    "[[file A.TXT|Label]]",
    "|| [[file a.txt]] ||",
    "* [[file a.txt]]",
    "[[file |]]",
    "[[file a.txt|b]]",
    "[[file  a.txt|b  ]]",
    "[[file a.txt]] and [[file b.txt]]",
    "[[social]] [[file a.txt]]",
    "[[embed]][[file a.txt]][[/embed]]",
    "[[note]]\n[[file a.txt]]\n[[/note]]",
    "[[file a|]x]]",
    "[[file\ta.txt]]",
    "> [[file a.txt]]",
    "[[file a.txt|L]]",
]

FAMILIES = [
    ("an", AN), ("us", US), ("bt", BT),
    ("eb", EB), ("so", SO), ("fi", FI),
]


def main():
    out = []
    for prefix, cases in FAMILIES:
        for i, src in enumerate(cases, 1):
            out.append({"id": f"{prefix}-{i:02d}", "source": src})
    path = os.path.join(HERE, "authored-cases.jsonl")
    with open(path, "w") as f:
        for rec in out:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")
    counts = {p: len(c) for p, c in FAMILIES}
    print(f"authored: {len(out)} cases; per rule: {counts}")


if __name__ == "__main__":
    main()
