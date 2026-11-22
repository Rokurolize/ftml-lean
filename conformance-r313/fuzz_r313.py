#!/usr/bin/env python3
"""Seeded fuzz differential for the R3.13 (INLINE2) stage.

Generates 500 synthetic documents across the stage's
families -- Colortext shapes (color specs of every class,
whitespace-only and empty fields, pipes inside color and
body, ## inside the body, empty bodies, newline-crossed
forms, bodies holding earlier rules' placeholders: bare
URLs, inline math, interwiki links), Strong shapes
(asterisk runs of two to eight, empty pairs, padded and
edge-whitespace bodies, bodies with internal markers,
crossings with the other four markers, placeholder-
spanning bodies, newline shapes), Emphasis shapes (slash
runs, URL collisions paired and unpaired, empty pairs,
whitespace-padded bodies, crossings), Underline shapes
(underscore runs of two to eight, the __a____b__ family,
padded bodies, crossings), Strikethrough shapes (hyphen
runs, padded closers, newline-stopped pairs, crossings)
-- plus whole-document mixtures with earlier families.

Usage: fuzz_r313.py [seed]   (default 20261121)
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
                        "lean-ftml-conformance-r313")
RULES = ("Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,"
         "Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
         "Freelink,Equationreference,Footnote,Footnoteitem,"
         "Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,"
         "Heading,Toc,Span,Size,Div,Collapsible,Tabview,List,Deflist,"
         "Table,Tableadv,Image,Newline,Paragraph,Url,Email,"
         "Mathinline,Interwiki,Colortext,Strong,Emphasis,Underline,"
         "Strikethrough")

FILL = ["a", "bold", "two words", "x", "café", "a|b", " lead",
        "trail ", " both ", "a/b", "under_score", "hy-phen",
        "http://example.com/x", "[[$ e=mc^2 $]]",
        "[wikipedia:Some_Page]", "user@example.com"]


def gen_color(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        r = rng.random()
        if r < 0.5:
            color = rng.choice([
                "red", "#ff0000", "#f00", "rgb(1,2,3)", "var(--x)",
                " ", "", "light blue", "a|b", "bl ue", "#", "123"])
            body = rng.choice(FILL + ["", " ", "a#b", "a##b",
                                       "x | y", "one\ntwo"])
            parts.append(f"##{color}|{body}##")
        elif r < 0.75:
            parts.append(rng.choice([
                "##red|unclosed", "##|body##", "##red|##",
                "##red|a##b##", "##a|b|c##", "## red | body ##",
                "##red|a\nb##", "pre ##blue|x## post",
                "####", "##|##", "###|x##", "##x|###"]))
        else:
            parts.append(rng.choice(["text", "some words", "café",
                                     "## plain hashes"]))
    joiner = rng.choice(["\n", "\n\n", " ", " and "])
    return {"source": joiner.join(parts)}


def marker_gen(marker, rng, extra):
    parts = []
    for _ in range(rng.randint(1, 3)):
        r = rng.random()
        if r < 0.45:
            body = rng.choice(FILL + ["", " ", "  ", "a" + marker + "b",
                                       marker, "one\ntwo"])
            parts.append(f"{marker}{body}{marker}")
        elif r < 0.7:
            n1 = rng.randint(1, 4)
            n2 = rng.randint(1, 4)
            body = rng.choice(["a", "ab", "a b", "", " x", "x "])
            parts.append(marker * n1 + body + marker * n2)
        elif r < 0.85:
            parts.append(rng.choice(extra))
        else:
            parts.append(rng.choice(["text", "some words", "café"]))
    joiner = rng.choice(["\n", "\n\n", " ", " and "])
    return {"source": joiner.join(parts)}


def gen_strong(rng):
    return marker_gen("**", rng, [
        "****", "******", "**a**b**c**", "wor**d**in",
        "**a\n----\nb**", "**http://example.com/x**",
        "pre **** post", "**a** **b**", "***a***", "**a***"])


def gen_em(rng):
    return marker_gen("//", rng, [
        "////", "//////", "//example.com/a", "//example.com/a//",
        "http://example.com/a", "//a//b//c//", "// padded //",
        "//a // b //", "a // b", "//[[$ x $]]//"])


def gen_u(rng):
    return marker_gen("__", rng, [
        "____", "______", "__a____b__", "____a__", "__a____",
        "a____b", "__a__b__c__", "___a___", "__ __", "____x____"])


def gen_strike(rng):
    return marker_gen("--", rng, [
        "----", "---", "--a----b--", "a -- b", "-- strike--",
        "--strike --", "--a\nb--", "-----", "--a--b--c--",
        "--http://example.com--"])


CROSSES = ["**a //b** c//", "//a **b// c**", "__a --b__ c--",
           "--a __b-- c__", "##red|**bold**##", "**##red|x##**",
           "//__a__//", "__//a//__", "**--a--**", "--**a**--",
           "**a**//b//__c__--d--", "##blue|//x// __y__##",
           "**a\nb**", "//a\nb//", "__a\nb__", "--a\nb--",
           "##red|a\nb##", "**a|b**", "##a**b|c##"]


def gen_mix(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        r = rng.random()
        if r < 0.55:
            parts.append(rng.choice(CROSSES))
        elif r < 0.8:
            parts.append(rng.choice([
                "* item with **bold**\n* item with //em//",
                "|| **cell** || --cell-- ||",
                "[[div]]**in div**[[/div]]",
                "[[span]]##red|in span##[[/span]]",
                "> quoted **bold** text",
                "[[code]]**not bold**[[/code]]",
                "@@--not strike--@@"]))
        else:
            parts.append(rng.choice(["text", "plain words", "café"]))
    joiner = rng.choice(["\n", "\n\n", " ", " and "])
    return {"source": joiner.join(parts)}


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261121
    rng = random.Random(seed)
    cases = []
    for i in range(100):
        cases.append({"id": f"fz-color-{i:03d}", **gen_color(rng)})
    for i in range(100):
        cases.append({"id": f"fz-strong-{i:03d}", **gen_strong(rng)})
    for i in range(80):
        cases.append({"id": f"fz-em-{i:03d}", **gen_em(rng)})
    for i in range(80):
        cases.append({"id": f"fz-u-{i:03d}", **gen_u(rng)})
    for i in range(80):
        cases.append({"id": f"fz-strike-{i:03d}", **gen_strike(rng)})
    for i in range(60):
        cases.append({"id": f"fz-mix-{i:03d}", **gen_mix(rng)})
    suffix = "" if seed == 20261121 else f"-s{seed}"
    cases_path = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
    with open(cases_path, "w") as f:
        for c in cases:
            f.write(json.dumps(c) + "\n")
    blob = open(cases_path, "rb").read()

    php = subprocess.run(
        [WSL_SSH, f"cd /tmp/r313/ref-php && php harness/state-restricted.php {RULES}"],
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
