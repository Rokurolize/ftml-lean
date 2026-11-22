#!/usr/bin/env python3
"""CAPSTONE differential fuzz (Gate 4), in the R3 pattern
(fuzz_r317.py) extended with include-bearing shapes: 500
generated cases per seed across plain/site/missing include
refs, argument folds (pipes and comment bytes in values,
duplicate keys, tight pipes, stray bracket runs, values holding
include syntax for the multi-pass loop), quoted-prefix lines,
failed candidates followed by valid includes, unterminated and
junk-terminated candidates, includes in block contexts, and
the REFVAL Center / Paragraph-skip shapes, run through the
68-rule full pipeline on both sides (run_oracle.py full and
lean-ftml-conformance-capstone) and compared under
compare.py's canonicalization. Usage: fuzz_capstone.py [seed]
[count]. Mismatches are classified in
fuzz-capstone-mismatches-<seed>.json by differing component.
"""
import json
import random
import subprocess
import sys

import compare
import run_oracle

PAGES = ["muse-probe-g14-target", "other-page", "empty-page",
         "muse-probe-g14b-target", "muse-probe-r2link-free-exists",
         "muse-probe-r2link-free-exists2",
         "muse-probe-r2notes-x-inc-src", "Other-Page", "OTHER-PAGE",
         "no-such-page", "missing-page", "---", "a.b", "café-page"]
SITES = [":sandbox:other-page", ":SANDBOX:other-page",
         ":sandbox.wikidot.com:other-page", ":sandbox.:other-page",
         ":foo_bar:other-page", ":sandbox:missing-page",
         ":sandbox:---", ":sandbox:", "::other-page",
         ":a:b:other-page", ":sandbox:Other-Page",
         ":sandbox:muse-probe-g14-target"]
REFS = PAGES + SITES
VALS = ["hello", "a b", "", " ", "x", "1", "**bold**", "a=b",
        "{$a}", "{$marker}", "[!-- c --]", "pre [!-- a|b --] post",
        "[!-- unclosed", "unclosed --]", "x|y",
        "[[include other-page]]", "[[include muse-probe-g14-target]]",
        "text]]tail", "café"]
ARGSETS = ["", " | marker=%s", " | a=%s", " | a=1 | b=2",
           " | a=1 | a=2", " | marker=m1 | other=o", " | =noval",
           " | noval", " | a = spaced ", "|a=1", " | [ stray | a=1",
           " | marker=%s | b=%s", " | marker=", " | "]
OPENERS = ["[[include ", "[[INCLUDE ", "[[Include ", "[[include  ",
           "[[include\t", "[[include\n", "[[include\x0b"]
CLOSES = ["]]", "]]", "]]", "]]]", "]]x", "]] ", "]", ""]
PRE = ["", "", "", "> ", ">> ", " > ", "  > ", ">", "\t> ",
       "x ", "* "]
POST = ["", " tail", "\n", "\n\n", " y"]


def inc(rng, ref=None, args=None, opener=None, close=None):
    ref = rng.choice(REFS) if ref is None else ref
    if args is None:
        a = rng.choice(ARGSETS)
        args = a % tuple(rng.choice(VALS)
                         for _ in range(a.count("%s")))
    opener = rng.choice(OPENERS) if opener is None else opener
    close = rng.choice(CLOSES) if close is None else close
    return opener + ref + args + close


def inc_case(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        parts.append(rng.choice(["", "pre ", "pre\n", "\n", "x\n"]))
        parts.append(rng.choice(PRE))
        parts.append(inc(rng))
        parts.append(rng.choice(POST))
    return "".join(parts)


QUOTED_REFS = ['"other-page"', '"muse-probe-g14-target"',
               '"missing-page"', '"Other-Page"', "'other-page'",
               '":sandbox:other-page"', '"---"', '"empty-page"',
               '"muse-probe-g14b-target"']


def quoted_case(rng):
    parts = []
    for _ in range(rng.randint(1, 2)):
        parts.append(rng.choice(["> ", ">> ", " > ", ">", "\t> ", ""]))
        opener = rng.choice(["[[include ", "[[INCLUDE ", "[[include\t"])
        ref = rng.choice(QUOTED_REFS)
        args = rng.choice(["", " | marker=x", " | a=1 | b=2",
                           " | marker=[!-- a|b --]", " | =noval"])
        parts.append(opener + ref + args + rng.choice(["]]", "]]", "]]x"]))
        parts.append(rng.choice(["\n", "\n> quoted text\n", "\n"]))
    return "".join(parts)


def fail_then_good_case(rng):
    bad = rng.choice([
        "[[include bad.page",
        "[[include a/b",
        "[[include",
        "[[include foo/bar]]\n",
        "[[include ]]\n",
        "[[include café-page]]\n",
    ])
    good = inc(rng, ref=rng.choice(
        ["other-page", "muse-probe-g14-target", "empty-page"]),
        args="", close="]]")
    return bad + "\n" + good + "\n"


def ctx_case(rng):
    inner = inc(rng, close="]]")
    wrap = rng.choice([
        ("[[div]]\n", "\n[[/div]]"),
        ("[[code]]\n", "\n[[/code]]"),
        ("[[blockquote]]\n", "\n[[/blockquote]]"),
        ("[[div class=\"x\"]]\n", "\n[[/div]]"),
        ("", ""),
    ])
    return (rng.choice(["", "intro\n"]) + wrap[0] + inner + wrap[1]
            + rng.choice(["", "\noutro"]))


def center_case(rng):
    lines = []
    for _ in range(rng.randint(1, 3)):
        lines.append(rng.choice([
            "= Title", "=Title", "== Title", " = Title",
            "x = y", "text = more text", "=  spaced  ",
            "plain line", "a = b = c"]))
    if rng.random() < 0.4:
        lines.append(inc(rng, close="]]"))
    return "\n".join(lines)


def paraskip_case(rng):
    body = rng.choice([
        "aaa\n[[separator]]\nbbb",
        "aaa [[separator]] bbb",
        "aaa\n[[div align=\"center\"]]\nbbb\n[[/div]]\nccc",
        "one paragraph\n\n[[separator]]\n\nanother",
        "text [[div align=\"right\"]] inner [[/div]] tail",
    ])
    if rng.random() < 0.4:
        body += "\n" + inc(rng, close="]]")
    return body


def mix_case(rng):
    gens = [inc_case, quoted_case, fail_then_good_case, ctx_case,
            center_case, paraskip_case]
    parts = []
    for _ in range(rng.randint(2, 3)):
        parts.append(rng.choice(gens)(rng))
        parts.append(rng.choice(["\n", "\n\n", " ", ""]))
    return "".join(parts)


COMPONENTS = ["segments", "tokens", "equations", "mathId",
              "footnotes", "bibitems", "bibitemIds",
              "scoredAnchors", "inclusions", "inclusionsNotExist"]


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 7
    count = int(sys.argv[2]) if len(sys.argv) > 2 else 500
    rng = random.Random(seed)
    gens = [inc_case, quoted_case, fail_then_good_case, ctx_case,
            center_case, paraskip_case, mix_case]
    cases = []
    for i in range(count):
        src = gens[i % len(gens)](rng)
        cases.append({"id": "fzc-%d-%04d" % (seed, i), "source": src})
    cpath = "fuzz-capstone-cases-%d.jsonl" % seed
    with open(cpath, "w", encoding="utf-8") as fh:
        for c in cases:
            fh.write(json.dumps(c, ensure_ascii=False) + "\n")
    run_oracle.run("full", cpath, "fuzz-capstone-php-%d.jsonl" % seed)
    exe = "../lean-ftml/.lake/build/bin/lean-ftml-conformance-capstone"
    with open(cpath, encoding="utf-8") as fh:
        proc = subprocess.run([exe], stdin=fh, capture_output=True,
                              text=True)
    if proc.returncode != 0:
        print("LEAN DRIVER FAILED rc=%d\n%s" % (proc.returncode,
                                                proc.stderr[:2000]))
        sys.exit(1)
    with open("fuzz-capstone-lean-%d.jsonl" % seed, "w",
              encoding="utf-8") as fh:
        fh.write(proc.stdout)
    php = compare.load_jsonl("fuzz-capstone-php-%d.jsonl" % seed)
    lean = compare.load_jsonl("fuzz-capstone-lean-%d.jsonl" % seed)
    total = agree = fatal = 0
    bad = {}
    for c in cases:
        cid = c["id"]
        total += 1
        a, b = php.get(cid), lean.get(cid)
        if a is None or b is None or "error" in a or "error" in b:
            bad[cid] = {"components": ["missing-or-error-record"],
                        "source": c["source"]}
            continue
        af, bf = a.get("fatal"), b.get("fatal")
        if af is not None or bf is not None:
            if af is not None and af == bf:
                agree += 1
                fatal += 1
            else:
                bad[cid] = {"components": ["fatal"],
                            "source": c["source"]}
            continue
        has_inc = ("inclusions" in a and "inclusions" in b)
        ca = compare.canon_state(a, include_doc_inc=has_inc)
        cb = compare.canon_state(b, include_doc_inc=has_inc)
        if ca == cb:
            agree += 1
        else:
            diff = [COMPONENTS[i] for i in range(len(COMPONENTS))
                    if ca[i] != cb[i]]
            bad[cid] = {"components": diff, "source": c["source"]}
    with open("fuzz-capstone-mismatches-%d.json" % seed, "w",
              encoding="utf-8") as fh:
        json.dump(bad, fh, indent=1, ensure_ascii=False)
    print("seed %d: %d/%d agree (%d fatal agreements); "
          "disagreements: %d %s"
          % (seed, agree, total, fatal, len(bad),
             sorted(bad)[:20]))


if __name__ == "__main__":
    main()
