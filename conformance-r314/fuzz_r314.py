#!/usr/bin/env python3
"""Seeded fuzz differential for the R3.14 (INLINE3) stage.

Generates 500 synthetic documents across the stage's
families -- Tt shapes (brace runs on both edges, padded,
empty and zero bodies, adjacent matches, padded followers,
newline bodies, bodies holding earlier rules'
placeholders), Superscript shapes (caret runs of two to
eight, empty pairs, padded and edge-whitespace bodies,
the x87 crossings with Subscript markers), Subscript
shapes (comma runs of two to eight, empty pairs,
crossings), Typography shapes (the three quote pairs,
guillemets, digit-space-digit, number-space-unit shapes
across every units branch including the entity forms, the
money end-anchor shapes, lookahead failures, dash runs,
ellipses), Tighten shapes (color edge spaces, paragraph
and break edges, newline removal) -- plus whole-document
mixtures with earlier families.

Usage: fuzz_r314.py [seed]   (default 20261121)
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
                        "lean-ftml-conformance-r314")
RULES = ("Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,"
         "Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
         "Freelink,Equationreference,Footnote,Footnoteitem,"
         "Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,"
         "Heading,Toc,Span,Size,Div,Collapsible,Tabview,List,Deflist,"
         "Table,Tableadv,Image,Newline,Paragraph,Url,Email,"
         "Mathinline,Interwiki,Colortext,Strong,Emphasis,Underline,"
         "Strikethrough,Tt,Superscript,Subscript,Typography,Tighten")

FILL = ["a", "mono", "two words", "x", "café", "a|b", " lead",
        "trail ", " both ", "a/b", "0", "", " ", "  ", "a{b}c",
        "{a}", "a}b", "**bold**", "http://example.com/x"]


def gen_tt(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        r = rng.random()
        if r < 0.45:
            body = rng.choice(FILL + ["\ta\tb", "a  b", " x ",
                                      "one\ntwo"])
            parts.append("{{" + body + "}}")
        elif r < 0.65:
            n1 = rng.randint(0, 3)
            n2 = rng.randint(0, 3)
            body = rng.choice(["a", "ab", "a b", "", " x", "x "])
            parts.append("{" * (2 + n1) + body + "}" * (2 + n2))
        elif r < 0.85:
            parts.append(rng.choice([
                "{{a}}{{b}}", "{{a }} {{ b }}", "{{a }}{{ b}}",
                "{{ }}", "{{0}}", "{{}}", "{{a}}b}}", "{{{a}}",
                "x{{ a }}y", "{{a\nb}}", "{{**not mono**}}"]))
        else:
            parts.append(rng.choice(["text", "some words", "café"]))
    joiner = rng.choice(["\n", "\n\n", " ", " and "])
    return {"source": joiner.join(parts)}


def marker_gen(marker, empty, rng, extra):
    parts = []
    for _ in range(rng.randint(1, 3)):
        r = rng.random()
        if r < 0.45:
            body = rng.choice(["a", "ab", "a b", "x", "", " ",
                               " lead", "trail ", "one\ntwo",
                               "a" + marker + "b"])
            parts.append(marker + body + marker)
        elif r < 0.7:
            n1 = rng.randint(1, 4)
            n2 = rng.randint(1, 4)
            body = rng.choice(["a", "ab", "", " x", "x "])
            parts.append(marker * n1 + body + marker * n2)
        elif r < 0.85:
            parts.append(rng.choice(extra))
        else:
            parts.append(rng.choice(["text", "some words", "café"]))
    joiner = rng.choice(["\n", "\n\n", " ", " and "])
    return {"source": joiner.join(parts)}


def gen_sup(rng):
    return marker_gen("^^", "^^^^", rng, [
        "^^^^", "^^^^^^", "^^a^^^^", "^^ a ^^,, b,, ^^^^,,,, ^^x^^^^,,,,y,,,,",
        "^^x^^,,y,,", ",,a,,^^b^^", "^^http://example.com^^"])


def gen_sub(rng):
    return marker_gen(",,", ",,,,", rng, [
        ",,,,", ",,,,,,", ",,a,,,,", ",,,,four,,,,", ",,,a,,",
        ",,,,,five,,,,,", ",,__underline sub__,,", "^^a^^,,b,,"])


UNITS = ["5 m", "5 kg", "12 mol", "3 Hz", "5 KB", "5 kbps",
         "5 flops", "5 ¢", "5 £", "5 €", "5 ¥", "5 °C", "5 °F",
         "5 °", "5 %", "5 pt", "5 pi", "5 px", "5 Mpx", "5 em",
         "5 en", "5 gal", "5 lb", "5 N", "5 NE", "5 ha",
         "5 mbar", "5 µs", "5 &micro;s", "5 &#181;s", "5 &#xB5;s",
         "5 &#937;", "5 &Omega;", "5 Ohm", "5 rad", "5 kat",
         "5 m2", "5 mx", "5 ms", "5 s", "5 T", "5 G", "5 cd",
         "5 ", "5 M", "5 M ", "42 42", "1 000 000", "5  m"]


def gen_typo(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        r = rng.random()
        if r < 0.3:
            parts.append(rng.choice(UNITS))
        elif r < 0.5:
            parts.append(rng.choice([
                "``quoted''", ",,quoted''", "`quoted'", "<<french>>",
                "``unclosed", "a ``b'' c", "``a\nb''", "`a' `b'"]))
        elif r < 0.7:
            n = rng.randint(2, 7)
            parts.append(rng.choice([
                "-" * n, "a" + "-" * n + "b", "...", ". . .",
                "a...b", "wait...", "--", "---", "----"]))
        elif r < 0.85:
            parts.append(rng.choice([
                "5 6", "1 2 3", "a 5 b", "5 6 7", "12 34"]))
        else:
            parts.append(rng.choice(["text", "some words", "café"]))
    joiner = rng.choice(["\n", "\n\n", " ", " and "])
    return {"source": joiner.join(parts)}


def gen_tighten(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        r = rng.random()
        if r < 0.5:
            parts.append(rng.choice([
                "##red| padded ##", "##red|padded ##",
                "##red| padded##", "##blue| x ## y",
                "a ##red|b## c", "##red|##", "## red | x ##"]))
        elif r < 0.75:
            parts.append(rng.choice([
                "line one\nline two", "a\n\n\nb", "word \n next",
                "trail \n\npara", "a  b", "a\t\tb", "a \t b"]))
        else:
            parts.append(rng.choice([
                "{{ mono }} text", "^^sup^^ and ,,sub,,",
                "**bold** tail ", " lead **bold**"]))
    joiner = rng.choice(["\n", "\n\n", " ", " and "])
    return {"source": joiner.join(parts)}


CROSSES = ["{{^^a^^}}", "^^ {{a}} ^^", ",,{{a}},,", "{{a}}--b",
           "``{{tt}}''", "##red|{{ x }}##", "{{a}} ``q''",
           "^^a,,b^^c,,", ",,a^^b,,c^^", "{{a}}}} {{b}}",
           "5 m and ``quoted'' -- dash...", "{{ x }}{{ y }}",
           "^^a^^ 5 kg ,,b,,", "--{{a}}--", "``5 m''"]


def gen_mix(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        r = rng.random()
        if r < 0.55:
            parts.append(rng.choice(CROSSES))
        elif r < 0.8:
            parts.append(rng.choice([
                "* item with {{mono}}\n* item with ^^sup^^",
                "|| {{cell}} || 5 m ||",
                "[[div]]^^in div^^[[/div]]",
                "[[code]]{{not mono}}[[/code]]",
                "@@^^not sup^^@@", "> quoted ,,sub,, text"]))
        else:
            parts.append(rng.choice(["text", "plain words", "café"]))
    joiner = rng.choice(["\n", "\n\n", " ", " and "])
    return {"source": joiner.join(parts)}


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261121
    rng = random.Random(seed)
    cases = []
    for i in range(100):
        cases.append({"id": f"fz-tt-{i:03d}", **gen_tt(rng)})
    for i in range(80):
        cases.append({"id": f"fz-sup-{i:03d}", **gen_sup(rng)})
    for i in range(80):
        cases.append({"id": f"fz-sub-{i:03d}", **gen_sub(rng)})
    for i in range(120):
        cases.append({"id": f"fz-typo-{i:03d}", **gen_typo(rng)})
    for i in range(60):
        cases.append({"id": f"fz-tighten-{i:03d}", **gen_tighten(rng)})
    for i in range(60):
        cases.append({"id": f"fz-mix-{i:03d}", **gen_mix(rng)})
    suffix = "" if seed == 20261121 else f"-s{seed}"
    cases_path = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
    with open(cases_path, "w") as f:
        for c in cases:
            f.write(json.dumps(c) + "\n")
    blob = open(cases_path, "rb").read()

    php = subprocess.run(
        [WSL_SSH, f"cd /tmp/r314/ref-php && php harness/state-restricted.php {RULES}"],
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
