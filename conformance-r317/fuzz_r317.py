#!/usr/bin/env python3
"""R3.17 differential fuzz: 500 generated cases per seed across
Anchor named/element shapes (attribute fragments, href
classes, boundary spaces, paragraph splits, nesting, scored
joins), User shapes, Button type/attribute/tail shapes,
Embed suffix and closer shapes, Social shapes, File
pipe/newline shapes, and mixtures, run through the 67-rule
restricted pipeline on both sides (the reference on WSL via
run_oracle, the Lean driver locally) and compared under
compare.py's canonicalization. Usage: fuzz_r317.py [seed]
[count].

One shape family is deliberately not generated: a bare
placeholder inside an unsafe-class href (the corpus case
a34). There the reference's slug output keeps the digits of
the placeholder's process-global token id, so the expected
record depends on the batch composition rather than the
document; the corpus carries the shape with its
per-document demonstration (comparison-a34-fresh.txt).
Placeholder-spanning values are generated for the paths
whose outcome is id-independent (class/id/data attributes,
verbatim hrefs, bodies, and the other rules' groups)."""
import json
import random
import subprocess
import sys

import compare
import run_oracle

WS = ["", " ", "  ", "\t", "\n", "\n\n", " \n ", "\x0b", "\x0c"]
TEXT = ["x", "body", "some text", "a b c", "**bold**", "\n", "\n\n",
        "[[div]]", "[[/div]]", "[[note]]", "[[/note]]"]

HREFS = ["/x", "/a b", "#frag", "http://e.com", "https://e.com/p?q=1",
         "*http://e.com", "*/x", "page-name", "a b c", "a:b", "a::b",
         "a/b", "--a--", "café", "x", "", "mailto:a@b.c", "HTTP://e.com",
         "/x@@a@@", "ftp://h/f", "a_b-c.d", "*page"]
ATTRS = ["", ' href="%s"', ' id="i1"', ' id=" u"', ' id=""',
         ' class="c1 c2"', ' class="a  b"', ' style="s"',
         ' data-X="1" data-y="2"', ' target="_self"', ' target=""',
         ' href="%s" target="_blank"', ' class="@@a@@"',
         ' id="@@a@@"', ' href="%s" class="@@a@@"',
         ' foo="bar"', ' href="%s" href="/dup"', ' 123="n"',
         ' data-9="v"', ' href="%s" id="x" class="c"']


def attr_str(rng):
    a = rng.choice(ATTRS)
    if "%s" in a:
        a = a % rng.choice(HREFS)
    return a


def an_case(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        parts.append(rng.choice(["", "pre ", "pre\n", "\n", "x"]))
        kind = rng.random()
        if kind < 0.25:
            name = rng.choice(["strawberry", "a.b%c-d_e", "9lives",
                               "trail ", " lead", "a b", "", " ",
                               "x]y", "[x", "café", "a\tb"])
            parts.append("[[# %s]]" % name)
            parts.append(rng.choice(["", "]", "\n", " post"]))
        elif kind < 0.55:
            scored = rng.choice(["", "_"])
            body = "".join(rng.choice(TEXT + ["[[a href=\"/i\"]]in[[/a]]",
                                              "[[a]]in[[/a]]"])
                           for _ in range(rng.randint(0, 2)))
            parts.append("[[a%s%s]]%s[[/a]]" %
                         (scored, attr_str(rng), body))
            parts.append(rng.choice(["", " post", "\npost", "\n\npost",
                                      "\n", "]]", " tail"]))
        else:
            body = rng.choice(["  pad  ", " lead", "trail ", "a\n\nb",
                               "a\n\n\nb", "\nbody\n", " x ",
                               "a [[b]] c", "one\n\ntwo\n\nthree"])
            parts.append("[[a%s]]%s[[/a]]" % (attr_str(rng), body))
            parts.append(rng.choice(["", " ", " post", "\n\n"]))
    return "".join(parts)


def us_case(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        parts.append(rng.choice(["", "x ", "\n", "pre "]))
        parts.append(rng.choice(["[[user ", "[[*user ", "[[USER ",
                                 "[[user", "[[*user  "]))
        parts.append(rng.choice(["john", "John Doe", "a", " x ",
                                 "john]] [[user jane", "a]b",
                                 "[[math]]x[[/math]]", "café"]))
        parts.append(rng.choice(["]]", "]", "]]", "]]]"]))
        parts.append(rng.choice(["", " y", "\n"]))
    return "".join(parts)


def bt_case(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        parts.append(rng.choice(["", "x ", "\n"]))
        parts.append(rng.choice(["[[button ", "[[BUTTON ", "[[button  ",
                                  "[[button\t"]))
        parts.append(rng.choice(["edit", "EDIT", "edit_button", "a1_-b",
                                  "123", "e", "edit-type"]))
        tail = rng.choice(["", " ", "  ", ' text="T"', ' text="a b"',
                           ' class="c"', ' style="s" id="x"',
                           ' text="a" text="b"', " x", ' text="a\nb"',
                           ' text=""', ' text="@@a@@"', " "])
        parts.append(tail)
        parts.append(rng.choice(["]]", "]]", "]", " ]]", ""]))
        parts.append(rng.choice(["", " y", "\n"]))
    return "".join(parts)


def eb_case(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        parts.append(rng.choice(["", "x ", "\n"]))
        op = rng.choice(["[[embed]]", "[[embedvideo]]", "[[embedaudio]]",
                         "[[EMBED]]", "[[embedx]]", "[[embed ]]"])
        cl = rng.choice(["[[/embed]]", "[[/embedvideo]]",
                         "[[/embedaudio]]", "[[/EMBED]]", "",
                         "[[/embedx]]"])
        body = "".join(rng.choice(TEXT + ["[[embed]]", "[[/embed]]",
                                          "[[file a.txt]]"])
                       for _ in range(rng.randint(0, 2)))
        parts.append(op + body + cl)
        parts.append(rng.choice(["", " y", "\n", "\n\n"]))
    return "".join(parts)


def so_case(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        parts.append(rng.choice(["", "x", "x ", "\n"]))
        parts.append(rng.choice(["[[social", "[[SOCIAL", "[[social"]))
        parts.append(rng.choice(["", " digg", " digg reddit", " ",
                                  "  ", "\ta", " a\"b", " café", " a~b",
                                  " a_b-c.d", " a]b", " a", " %20"]))
        parts.append(rng.choice(["]]", "]]", "]", ""]))
        parts.append(rng.choice(["", " y", "\n"]))
    return "".join(parts)


def fi_case(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        parts.append(rng.choice(["", "x ", "\n", "* "]))
        parts.append(rng.choice(["[[file ", "[[FILE ", "[[file  ",
                                  "[[file\t"]))
        parts.append(rng.choice(["a.txt", "a.txt|L", "a.txt|", "a.txt| ",
                                  "a|b|c", "|x", "my file.txt",
                                  "a.txt | L", "café.txt", "a\nb.txt",
                                  "[[math]]x[[/math]].txt", "a.txt]]",
                                  "a.txt|[[math]]x[[/math]]"]))
        parts.append(rng.choice(["]]", "]]", "]", ""]))
        parts.append(rng.choice(["", " y", "\n"]))
    return "".join(parts)


def mix_case(rng):
    gens = [an_case, us_case, bt_case, eb_case, so_case, fi_case]
    parts = []
    for _ in range(rng.randint(2, 4)):
        parts.append(rng.choice(gens)(rng))
        parts.append(rng.choice(["\n", "\n\n", " ", ""]))
    return "".join(parts)


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261121
    count = int(sys.argv[2]) if len(sys.argv) > 2 else 500
    rng = random.Random(seed)
    gens = [an_case, us_case, bt_case, eb_case, so_case, fi_case,
            mix_case]
    cases = []
    for i in range(count):
        src = gens[i % len(gens)](rng)
        cases.append({"id": "fz317-%d-%04d" % (seed, i), "source": src})
    with open("fuzz-cases-%d.jsonl" % seed, "w", encoding="utf-8") as fh:
        for c in cases:
            fh.write(json.dumps(c, ensure_ascii=False) + "\n")
    run_oracle.run("restricted", "fuzz-cases-%d.jsonl" % seed,
                   "fuzz-php-%d.jsonl" % seed)
    exe = "../lean-ftml/.lake/build/bin/lean-ftml-conformance-r317"
    with open("fuzz-cases-%d.jsonl" % seed, encoding="utf-8") as fh:
        proc = subprocess.run([exe], stdin=fh, capture_output=True,
                              text=True)
    if proc.returncode != 0:
        print("LEAN DRIVER FAILED rc=%d\n%s" % (proc.returncode,
                                                proc.stderr[:2000]))
        sys.exit(1)
    with open("fuzz-lean-%d.jsonl" % seed, "w", encoding="utf-8") as fh:
        fh.write(proc.stdout)
    php = compare.load_jsonl("fuzz-php-%d.jsonl" % seed)
    lean = compare.load_jsonl("fuzz-lean-%d.jsonl" % seed)
    total = agree = fatal = 0
    bad = []
    for c in cases:
        cid = c["id"]
        total += 1
        a, b = php.get(cid), lean.get(cid)
        if a is None or b is None or "error" in a or "error" in b:
            bad.append(cid)
            continue
        af, bf = a.get("fatal"), b.get("fatal")
        if af is not None or bf is not None:
            if af is not None and af == bf:
                agree += 1
                fatal += 1
            else:
                bad.append(cid)
            continue
        if compare.canon_state(a) == compare.canon_state(b):
            agree += 1
        else:
            bad.append(cid)
    print("seed %d: %d/%d agree (%d fatal agreements); "
          "disagreements: %s" % (seed, agree, total, fatal, bad[:20]))


if __name__ == "__main__":
    main()
