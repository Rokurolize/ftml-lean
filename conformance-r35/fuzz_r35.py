#!/usr/bin/env python3
"""R3.5 fuzz differential: seeded random sources over the LINK
family's shapes, run through the seventeen-rule restricted PHP
oracle (WSL scratch copy) and the Lean R3.5 driver, compared with
this stage's compare.py.

Families:
  fz-concat-*  backslash-newline runs and cascades, div-opener
               lines (case variants, attributes, the underscore
               form, malformed openers), continuations before
               block openers, at placeholder boundaries, and at
               end of input.
  fz-free-*    targets and labels: pipes, anchors and hash
               routes, malformed multi-hash forms, URLs with and
               without a leading space, _default: and colon
               forms, whitespace and empty targets, bracket
               runs, and non-ASCII targets (mapped Latin and
               Cyrillic, unmapped CJK, ASCII mixed with accents,
               where the reference's transliteration turns the
               ASCII letters into separators).
  fz-eref-*    labels (empty, padded, multiword, with pipes and
               placeholders inside), defined, forward, duplicate,
               and case-mismatched references against generated
               math blocks, unterminated and case-variant forms.
  fz-mix-*     placeholder-spanning mixtures: continuations
               inside and around code, raw, and math spans;
               freelinks and erefs inside iftags bodies under
               both tag polarities, inside math bodies, and with
               raw spans inside their labels.

Usage: fuzz_r35.py [seed]   (default 20261120)
Writes fuzz-cases[-sSEED].jsonl, fuzz-php[-sSEED].jsonl,
fuzz-lean[-sSEED].jsonl and comparison-fuzz[-sSEED].txt beside
itself; prints the comparison's summary lines.
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
                        "lean-ftml-conformance-r35")
RULES = ("Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,"
         "Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
         "Freelink,Equationreference")

TAG_POOL = ["alpha", "beta", "Alpha", ""]


def gen_concat(rng):
    line = rng.choice(["b", "text", "x y", "", "[[div]]", "[[DIV]]",
                       "[[div_]]", "[[div class=\"c\"]]", "[[div x]]",
                       "[[divx]]", "[[division]]", " [[div]] ",
                       "\t[[div\t]]", "[[span]]", "[[code]]",
                       "[[math]]", "[[iframe http://a.b/c]]",
                       "[[date 1]]", "[[div_ x]]", "[[div ]]", "\\"])
    n_bs = rng.randint(1, 3)
    n_nl = rng.randint(1, 2)
    s = "a" + "\\" * n_bs + "\n" * n_nl + line
    if rng.random() < 0.4:
        s += rng.choice(["\nb", "\\\nb", "\n", "\\", " tail"])
    if rng.random() < 0.25:
        s = rng.choice(["pre ", "pre\n", ""]) + s
    if rng.random() < 0.15:
        s += "\\\n" + rng.choice(["[[div]]", "[[div_]]", "z"])
    return {"source": s}


def gen_free(rng):
    target = rng.choice([
        "some-page", "muse-probe-r2link-free-exists", "Page Name",
        "a|b", "page#sec", "page#1", "page##x", "a#b#c", "home###",
        "main/#/route", "x/#/y/#/z", "http://example.com/a",
        "https://x.y/", "ftp://h/f", "mailto:a@b.c", "feed:burner",
        " http://example.com", "HTTP://EXAMPLE.COM", "_default:cat",
        "_DEFAULT:Cat", "_under", ":colon-start", "/slash-start",
        "system:Recent Changes", "site::page", "a b c", "   ",
        "caf\u00e9", "\u0434\u043e\u043a\u0443\u043c\u0435\u043d\u0442",
        "\u4e2d\u6587\u9875\u9762", "na\u00efve caf\u00e9",
        "\u00c9mile", "stra\u00dfe", "#a", "#", " #a", "a#", "a# ",
        "end\\", "a,b.c", "x_y-z"])
    label = rng.choice(["", "|label", "|A|B|C", "|", "| ", "|  x  ",
                        "|#frag", "|http://l.l", "|[[nested]]"])
    s = "[[[" + target + label + "]]]"
    if rng.random() < 0.3:
        s = rng.choice(["pre ", "x ", "\n", "[[", "[[[["]) + s + \
            rng.choice([" post", "]", "]]", "\npost", ""])
    if rng.random() < 0.15:
        s += " and " + s
    return {"source": s}


def gen_eref(rng):
    label = rng.choice(["a", "E", "eq_1", "", " ", "a b", "A",
                        "x|y", "x=y", "a]]b", "[[[page]]]",
                        "long-label-with-dashes"])
    parts = []
    if rng.random() < 0.6:
        mlab = rng.choice(["a", "E", "eq_1", "A", "other"])
        parts.append(f"[[math {mlab}]]\nx\n[[/math]]")
    parts.append(f"[[eref {label}]]")
    if rng.random() < 0.35:
        mlab = rng.choice(["a", "E", "eq_1", label.strip() or "z"])
        parts.append(f"[[math {mlab}]]\ny\n[[/math]]")
        if rng.random() < 0.4:
            parts.append(f"[[eref {label}]]")
    s = "\n".join(parts)
    if rng.random() < 0.2:
        s = rng.choice(["[[EREF a]]", "[[eref]]", "[[eref  a]]",
                        "[[eref\ta]]", "[[eref a]", "[[eref a"]) 
    return {"source": s}


def gen_mix(rng):
    frags = ["[[code]]\nc\\\nd\n[[/code]]\n", "@@r\\\ns@@",
             "[[math]]\nm\n[[/math]] ", "[[eref a]]",
             "[[[some-page|lab]]]", "[[[a|@@w@@]]]",
             "[[[muse-probe-r2link-free-exists|]]]",
             "[[iftags +alpha]]K[[[p]]][[/iftags]]",
             "[[iftags -alpha]]D[[eref a]][[/iftags]]",
             "a\\\n[[div]]\n", "a\\\n[[code]]\n",
             "[[math E]]\n[[[p]]]\n[[/math]] ", "[[eref [[[p]]]]]",
             "text ", "\n", "\\\n", "[[date 0]]\\n",
             "[[[caf\u00e9|@@x@@]]]"]
    s = "".join(rng.choice(frags) for _ in range(rng.randint(2, 6)))
    case = {"source": s}
    if rng.random() < 0.5:
        case["tags"] = [rng.choice(TAG_POOL)
                        for _ in range(rng.randint(0, 2))]
    return case


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261120
    rng = random.Random(seed)
    cases = []
    for i in range(130):
        cases.append({"id": f"fz-concat-{i:03d}", **gen_concat(rng)})
    for i in range(150):
        cases.append({"id": f"fz-free-{i:03d}", **gen_free(rng)})
    for i in range(110):
        cases.append({"id": f"fz-eref-{i:03d}", **gen_eref(rng)})
    for i in range(110):
        cases.append({"id": f"fz-mix-{i:03d}", **gen_mix(rng)})
    suffix = "" if seed == 20261120 else f"-s{seed}"
    cases_path = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
    with open(cases_path, "w") as f:
        for c in cases:
            f.write(json.dumps(c) + "\n")
    blob = open(cases_path, "rb").read()

    php = subprocess.run(
        [WSL_SSH, f"cd /tmp/r35/ref-php && php harness/state-restricted.php {RULES}"],
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
