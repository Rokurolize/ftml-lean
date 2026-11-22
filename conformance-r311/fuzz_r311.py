#!/usr/bin/env python3
"""Seeded fuzz differential for the R3.11 (PARA) stage.

Generates 500 synthetic documents across the stage's
families — image shapes (spelling and alignment matrices
including the upper-case and f-prefixed forms, source forms,
the whitelisted attribute matrix, link forms: starred,
whitespace-led, scheme-bearing valid and invalid, raw-token
heads, unclosed openers), newline and paragraph shapes
(single, doubled, and tripled breaks, whitespace-only lines
including form feed and vertical tab, breaks at block
boundaries, scored spans alone, with text, across blank
lines, and inside divs, unpaired span openers, score-class
spans) — plus whole-document mixtures with earlier families
(images inside containers, aligned images at paragraph
starts, tables and lists between paragraphs, code blocks
holding image-like text).

Usage: fuzz_r311.py [seed]   (default 20261121)
Writes fuzz-cases[-sSEED].jsonl, fuzz-php[-sSEED].jsonl,
fuzz-lean[-sSEED].jsonl and comparison-fuzz[-sSEED].txt
beside itself; prints the comparison's summary lines.
"""

import json
import os
import random
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
WSL_SSH = os.path.expanduser("~/workspace/native-stack/bin/wsl-ssh.sh")
LEAN_EXE = os.path.join(ROOT, "lean-ftml", ".lake", "build", "bin",
                        "lean-ftml-conformance-r311")
RULES = ("Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,"
         "Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
         "Freelink,Equationreference,Footnote,Footnoteitem,"
         "Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,"
         "Heading,Toc,Span,Size,Div,Collapsible,Tabview,List,Deflist,"
         "Table,Tableadv,Image,Newline,Paragraph")

SRCS = ["a.png", "https://example.com/a.png", "http://x.y/z.jpg",
        "café.png", "*star.png", "a b.png", "ftp://h/f.gif",
        "image", "x", "a.png]]tail", "UP.PNG"]
ALIGNS = ["", "<", ">", "=", "f<", "f>", "f=", "F>", "F<", "F="]
ATTRS = ["", ' width="10"', ' height="9" width="10"', ' size="LARGE"',
         ' size="medium"', ' alt="an alt"', ' title="T" class="c"',
         ' link="some-page"', ' link="*https://example.com"',
         ' link="https://example.com/x"', ' link=" http://sp.example"',
         ' link="http://bad host/x"', ' link="gopher://h/x"',
         ' link="news://h/x"', ' link="xyz://h/x"', ' link="a://b"',
         ' foo="bar"', ' style="s" id="drop"', ' alt="a]]b"',
         ' width="10" link="*p" size="Small"']
SPELL = ["image", "IMAGE", "Image", "iMaGe"]


def gen_image(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        r = rng.random()
        if r < 0.62:
            parts.append(f"[[{rng.choice(ALIGNS)}{rng.choice(SPELL)} "
                         f"{rng.choice(SRCS)}{rng.choice(ATTRS)}]]")
        elif r < 0.72:
            parts.append(f"[[image{rng.choice([' ', '  ', chr(9), chr(10)])}"
                         f"{rng.choice(SRCS)}]]")
        elif r < 0.8:
            parts.append(rng.choice(["[[image]]", "[[imagex a.png]]",
                                     "[[ image a.png]]", "[[image a.png]",
                                     "[[<image a.png]]", "[[fimage a.png]]"]))
        elif r < 0.88:
            parts.append(f"@@[[image {rng.choice(SRCS)}]]@@")
        else:
            parts.append(rng.choice(["text", "some words", "café"]))
    joiner = rng.choice(["\n", "\n\n", " ", "\n\n\n"])
    s = joiner.join(parts)
    if rng.random() < 0.3:
        s = rng.choice(["lead\n", "lead\n\n", ""]) + s
    if rng.random() < 0.3:
        s = s + rng.choice(["\ntail", "\n\ntail", " tail"])
    return {"source": s}


LINES = ["plain text", "two words here", "café au lait", "a  b",
         "trail ", " lead", "+ Head", "----", "= Centered =",
         "* item", ": term : def", "under _", "end _", "",
         " ", "\t", "\x0b", "\x0c", " \t ",
         "[[span_]]scored[[/span]]", "[[span_]]100[[/span]]",
         "[[span class=\"c\"]]plain span[[/span]]",
         "[[span_]]unclosed", "[[/span]] stray closer",
         "[[image a.png]]", "[[>image a.png]]",
         "[[div]]", "[[/div]]", "|| a || b ||",
         "[[footnote]]n[[/footnote]]"]


def gen_para(rng):
    lines = [rng.choice(LINES) for _ in range(rng.randint(1, 8))]
    s = "\n".join(lines)
    r = rng.random()
    if r < 0.2:
        s = s.replace("\n", "\n\n", 1)
    elif r < 0.35:
        s = "\n" + s
    elif r < 0.5:
        s = s + "\n"
    if rng.random() < 0.12:
        s = s.replace("\n", "\r\n", 2)
    if rng.random() < 0.15:
        s = ("[[span_]]span body\n\nsecond para[[/span]]"
             if rng.random() < 0.5 else
             "pre [[span_]]mid[[/span]] post\n\nnext")
    return {"source": s}


def gen_mix(rng):
    frags = ["plain paragraph", "more text\nwith break",
             "[[image pic.png]]", "[[>image pic.png width=\"5\"]]",
             "[[<image http://example.com/i.png link=\"*p\"]]",
             "[[div]]\ninside div\n[[/div]]",
             "[[collapsible]]\nhidden\n[[/collapsible]]",
             "|| a || b ||\n|| c || d ||",
             "* item one\n* item two",
             "[[span_]]99[[/span]] alone",
             "text [[span_]]inline score[[/span]] text",
             "[[span_]]block\n\nspan[[/span]]",
             "[[code]]\n[[image literal.png]]\n[[/code]]",
             "[[footnote]]note[[/footnote]] text",
             "+ Heading", "----", "a _\nb",
             "[[image one.png]] and [[image two.png]]",
             ""]
    s = "\n\n".join(rng.choice(frags) for _ in range(rng.randint(2, 6)))
    return {"source": s}


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261121
    rng = random.Random(seed)
    cases = []
    for i in range(170):
        cases.append({"id": f"fz-img-{i:03d}", **gen_image(rng)})
    for i in range(170):
        cases.append({"id": f"fz-para-{i:03d}", **gen_para(rng)})
    for i in range(160):
        cases.append({"id": f"fz-mix-{i:03d}", **gen_mix(rng)})
    suffix = "" if seed == 20261121 else f"-s{seed}"
    cases_path = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
    with open(cases_path, "w") as f:
        for c in cases:
            f.write(json.dumps(c) + "\n")
    blob = open(cases_path, "rb").read()

    php = subprocess.run(
        [WSL_SSH, f"cd /tmp/r311/ref-php && php harness/state-restricted.php {RULES}"],
        input=blob, capture_output=True)
    if php.returncode != 0:
        sys.stderr.write(php.stderr.decode("utf-8", "replace"))
        return 2
    php_path = os.path.join(HERE, f"fuzz-php{suffix}.jsonl")
    open(php_path, "wb").write(php.stdout)

    lean = subprocess.run([LEAN_EXE], input=blob, capture_output=True)
    if lean.returncode != 0:
        sys.stderr.write(lean.stderr.decode("utf-8", "replace"))
        return 2
    lean_path = os.path.join(HERE, f"fuzz-lean{suffix}.jsonl")
    open(lean_path, "wb").write(lean.stdout)

    cmp = subprocess.run(
        [sys.executable, os.path.join(HERE, "compare.py"), php_path, lean_path],
        capture_output=True, text=True)
    out_path = os.path.join(HERE, f"comparison-fuzz{suffix}.txt")
    with open(out_path, "w") as f:
        f.write(cmp.stdout)
    sys.stdout.write("\n".join(cmp.stdout.splitlines()[-4:]) + "\n")
    return cmp.returncode


if __name__ == "__main__":
    sys.exit(main())
