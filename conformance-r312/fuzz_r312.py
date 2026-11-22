#!/usr/bin/env python3
"""Seeded fuzz differential for the R3.12 (INLINE1) stage.

Generates 500 synthetic documents across the stage's
families -- Url shapes (the thirteen-scheme matrix, path
segment and trailing-punctuation shapes, final-character
edges, stars, letter and non-letter prefixes, described
forms with anchor and path hrefs, labels carrying the C5
math opener, targets carrying the C4 opener with and
without the pipe, mailto forms, unterminated brackets,
%%-forms), Email shapes (atom chains, dot edges, plus
shapes, described forms with single and double gaps,
uppercase, addresses inside words, missing-dot domains),
Mathinline shapes (spacing and trim forms, bodies holding
earlier rules' placeholders: bare URLs, single newlines,
raw spans, code spans; dollar and bracket content,
unterminated and newline-crossed forms), Interwiki shapes
(configured, dotted, unknown, and case-variant sites,
pages with colons and slashes, double colons, described
forms with multiword labels, the x44 URL-label shape) --
plus whole-document mixtures with earlier families.

Usage: fuzz_r312.py [seed]   (default 20261121)
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
                        "lean-ftml-conformance-r312")
RULES = ("Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,"
         "Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
         "Freelink,Equationreference,Footnote,Footnoteitem,"
         "Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,"
         "Heading,Toc,Span,Size,Div,Collapsible,Tabview,List,Deflist,"
         "Table,Tableadv,Image,Newline,Paragraph,Url,Email,"
         "Mathinline,Interwiki")

SCHEMES = ["http://", "https://", "ftp://", "gopher://", "news://",
           "mailto:", "mms://", "ssh://", "git://", "sftp://",
           "svn://", "telnet://", "cvs://", "HTTP://", "xyz://"]
HOSTS = ["example.com", "x.y", "a-b_c.example.org:8080", "localhost",
         "café.example", "192.168.0.1", "example.com.", "a..b"]
PATHS = ["", "/", "/a", "/a/b", "/a/b/", "a", "a/b?x=1&y=2", "/p#frag",
         "/p.", "/p,", "/p!", "/p)", "/(p)", "/p'q", '/p"q', "/p|q",
         "/a b", "/x[[y", "/x|[[y", "/x[[$y", "%20", "/~u/_f-1",
         "/a//b", "/tab\there", "/nl\nhere"]
PREFIXES = ["", " ", "(", "x", "1", "\n", "* ", "see ", "\t", "["]


def bare_url(rng):
    return (rng.choice(PREFIXES) + rng.choice(["", "*"]) +
            rng.choice(SCHEMES) + rng.choice(HOSTS) +
            rng.choice(PATHS) + rng.choice(["", " ", " end", ".", ")"]))


def gen_url(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        r = rng.random()
        if r < 0.45:
            parts.append(bare_url(rng))
        elif r < 0.7:
            star = rng.choice(["", "*"])
            href = rng.choice([
                rng.choice(SCHEMES) + rng.choice(HOSTS) + rng.choice(PATHS),
                "#anchor-1", "#", "/some/path", "/a b", "/x|y"])
            label = rng.choice(["Label", "two words", "x [[$ y $]] z",
                                "a|b", "", " lead", "http://inner.example"])
            parts.append(f"[{star}{href} {label}]")
        elif r < 0.8:
            parts.append(rng.choice([
                "[http://example.com]", "[http://example.com label",
                "http://example.com]]", "[%%VAR%% label]",
                "[[http://example.com]]", "mailto:a@b.example",
                "http://example.com|[[rest", "prehttp://x.example/a",
                "ahttp://x.example", "**http://x.example/a"]))
        else:
            parts.append(rng.choice(["text", "some words", "café"]))
    joiner = rng.choice(["\n", "\n\n", " ", " and "])
    return {"source": joiner.join(parts)}


LOCALS = ["user", "a.b", "a..b", "user+tag", "u_s-e.r", "USER", "a",
          ".lead", "trail.", "x_y-z"]
DOMS = ["example.com", "x.y", "a.b.c.d", "EXAMPLE.COM", "ex-ample.co",
        "nodot", "a.", ".a.com", "a..com", "192.168.0.1"]


def gen_email(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        r = rng.random()
        addr = rng.choice(LOCALS) + "@" + rng.choice(DOMS)
        if r < 0.45:
            parts.append(rng.choice(["", " ", "(", "x", "mail: "]) + addr +
                         rng.choice(["", " ", ".", ",", " end", ")"]))
        elif r < 0.7:
            parts.append(f"[{addr} {rng.choice(['Label', 'two words', ' lead', 'a@b.co'])}]")
            if rng.random() < 0.3:
                parts.append(f"[{addr}  double gap]")
        elif r < 0.85:
            parts.append(rng.choice([
                "a@b", "@x.com", "a@", "a@.com", "a b@c.com",
                "pre" + addr + "post", addr + "@again.com"]))
        else:
            parts.append(rng.choice(["text", "no mail here", "café"]))
    joiner = rng.choice(["\n", "\n\n", " ", ", "])
    return {"source": joiner.join(parts)}


BODIES = ["x^2", " a+b ", "", " ", "\\frac{1}{2}", "a$b", "a]]b",
          "e=mc^2", "x\ny", " lead and trail ", "a|b", "{set}",
          "http://example.com/x", "@@raw text@@", "multi  space",
          "tab\there", "[[code]]x[[/code]]"]


def gen_mathinline(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        r = rng.random()
        if r < 0.6:
            parts.append(f"[[$ {rng.choice(BODIES)} $]]")
        elif r < 0.75:
            parts.append(rng.choice([
                "[[$x$]]", "[[$ x $]", "[[$ x", "$ x $]]", "[[$ $]]",
                "[[$$]]", "[[$ a $]] and [[$ b $]]", "[[$a$b$]]",
                "pre [[$ x^2 $]] post"]))
        elif r < 0.88:
            parts.append("A [[$ x\ny $]] B")
            parts.append("[[$ @@line1@@ $]]")
        else:
            parts.append(rng.choice(["text", "some words", "$$"]))
    joiner = rng.choice(["\n", "\n\n", " ", " and "])
    return {"source": joiner.join(parts)}


SITES = ["wikipedia", "wikipedia.pl", "pl.wikipedia", "google",
         "dictionary", "Wikipedia", "WIKIPEDIA", "nosuch", "google.",
         "en.wikipedia", "a_b", "x9"]
PAGES = ["Albert_Einstein", "Some_Page", "a/b/c", "Page:Sub",
         "Page::Double", "A=B&C", "x#frag", "Page.", "P~1", "a;b",
         "under_score-page", "C++"]


def gen_interwiki(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        r = rng.random()
        link = rng.choice(SITES) + ":" + rng.choice(PAGES)
        if r < 0.45:
            parts.append(f"[{link}]")
        elif r < 0.7:
            label = rng.choice(["Label", "two words",
                                "http://example.com/x", " lead"])
            parts.append(f"[{link} {label}]")
        elif r < 0.85:
            parts.append(rng.choice([
                f"[[{link}]]", f"[{link} ]", f"[ {link}]",
                f"[{rng.choice(SITES)}::Page]", f"[{link}]tail",
                f"x[{link}]"]))
        else:
            parts.append(rng.choice(["text", "some words", "café"]))
    joiner = rng.choice(["\n", "\n\n", " ", " and "])
    return {"source": joiner.join(parts)}


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261121
    rng = random.Random(seed)
    cases = []
    for i in range(140):
        cases.append({"id": f"fz-url-{i:03d}", **gen_url(rng)})
    for i in range(120):
        cases.append({"id": f"fz-email-{i:03d}", **gen_email(rng)})
    for i in range(120):
        cases.append({"id": f"fz-math-{i:03d}", **gen_mathinline(rng)})
    for i in range(120):
        cases.append({"id": f"fz-iw-{i:03d}", **gen_interwiki(rng)})
    suffix = "" if seed == 20261121 else f"-s{seed}"
    cases_path = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
    with open(cases_path, "w") as f:
        for c in cases:
            f.write(json.dumps(c) + "\n")
    blob = open(cases_path, "rb").read()

    php = subprocess.run(
        [WSL_SSH, f"cd /tmp/r312/ref-php && php harness/state-restricted.php {RULES}"],
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
