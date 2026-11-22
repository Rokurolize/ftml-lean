#!/usr/bin/env python3
"""R3.16 differential fuzz: 500 generated cases per seed across
Divprefilter boundary matrices, Divalign key/nesting/closer
shapes, Note wrapper shapes, Gallery opener/body/attribute
shapes, and mixtures, run through the 61-rule restricted
pipeline on both sides (the reference on WSL via run_oracle,
the Lean driver locally) and compared under compare.py's
canonicalization. Usage: fuzz_r316.py [seed] [count]."""
import json
import random
import subprocess
import sys

import compare
import run_oracle

WS = ["", " ", "  ", "\t", "\n", "\n\n", " \n ", "\x0b", "\x0c",
      " \t\n"]
TEXT = ["x", "body", "some text", "a b c", "[[div]]", "[[/div]]",
        "[[note]]", "[[/note]]", "[[=]]", "[[/=]]", ": img.png",
        "http://x.y", "**bold**", "\n", "\n\n"]


def dp_case(rng):
    parts = []
    for _ in range(rng.randint(1, 4)):
        parts.append(rng.choice(TEXT))
        parts.append(rng.choice(["[[/div]]", "[[/DIV]]", "[[/Div]]",
                                 "[[/div]", "[[/div ]]", "[[/div]]x"]))
        parts.append(rng.choice(WS))
        parts.append(rng.choice(["[[div", "[[DIV", "[[div]]", "[[div_",
                                  "[[div ", "[[divx", "[[di", "[[div="]))
        parts.append(rng.choice(TEXT))
    return "".join(parts)


KEYS = ["=", "<", ">", "=="]


def da_block(rng, depth):
    key = rng.choice(KEYS)
    body = []
    for _ in range(rng.randint(0, 3)):
        r = rng.random()
        if depth < 2 and r < 0.3:
            body.append(da_block(rng, depth + 1))
        elif r < 0.45:
            body.append(rng.choice(["[[/=]]", "[[/<]]", "[[/>]]",
                                    "[[/==]]", "[[=]]", "[[note]]\nn\n[[/note]]"]))
        else:
            body.append(rng.choice(TEXT))
    closer = "[[%s]]" % ("/" + rng.choice([key, rng.choice(KEYS)]))
    tail = rng.choice(["", "", "", " tail", "\nmore", "x"])
    return "[[%s]]\n%s%s%s" % (key, "".join(body), closer, tail)


def da_case(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        parts.append(rng.choice(["", "pre\n", "pre ", "\n"]))
        parts.append(da_block(rng, 0))
        parts.append(rng.choice(["", "\n", "\npost", " post"]))
    return "".join(parts)


def nt_case(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        parts.append(rng.choice(["", "x", "x\n", "\n", "pre "]))
        parts.append(rng.choice(["[[note]]", "[[NOTE]]", "[[note]] x",
                                  "[[note]]"]))
        parts.append(rng.choice(["\n", "\n", "", " \n"]))
        body = "".join(rng.choice(TEXT + ["[[note]]", "[[/note]]",
                                           "[[note]]\n"])
                       for _ in range(rng.randint(0, 3)))
        parts.append(body)
        parts.append(rng.choice(["[[/note]]", "[[/NOTE]]", "[[/note]]",
                                  "", "[[/note]"]))
        parts.append(rng.choice(["", "\n", " post", "\npost"]))
    return "".join(parts)


def ga_case(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        parts.append(rng.choice(["", "pre\n", "\n", "pre "]))
        parts.append(rng.choice(["[[gallery", "[[GALLERY", "[[gallery"]))
        parts.append(rng.choice([
            "", "", "]", " ", "  ", "\t", "\n",
            ' size="small"', ' size="0"', ' size=""', " size=small",
            ' size = "s"', ' size="a]b"', ' foo="bar" size="large"',
            ' ="v"', ' size="small" size="large"']))
        if rng.random() < 0.85:
            parts.append("]]")
        lines = []
        for _ in range(rng.randint(0, 4)):
            lines.append(rng.choice(["\n: a.png", "\n: b", "\n:x",
                                      "\n: ", "\n:: c", "\n : d",
                                      "\n: e f"]))
        parts.append("".join(lines))
        parts.append(rng.choice(["\n[[/gallery]]", "\n[[/gallery]]",
                                  "\n[[/GALLERY]]", "", "\nx",
                                  " [[/gallery]]"]))
        parts.append(rng.choice(["", "\n", " post"]))
    return "".join(parts)


def mix_case(rng):
    gens = [dp_case, da_case, nt_case, ga_case]
    parts = []
    for _ in range(rng.randint(2, 4)):
        parts.append(rng.choice(gens)(rng))
        parts.append(rng.choice(["\n", "\n\n", " ", ""]))
    return "".join(parts)


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261121
    count = int(sys.argv[2]) if len(sys.argv) > 2 else 500
    rng = random.Random(seed)
    gens = [dp_case, da_case, nt_case, ga_case, mix_case]
    cases = []
    for i in range(count):
        src = gens[i % len(gens)](rng)
        cases.append({"id": "fz316-%d-%04d" % (seed, i), "source": src})
    with open("fuzz-cases-%d.jsonl" % seed, "w", encoding="utf-8") as fh:
        for c in cases:
            fh.write(json.dumps(c, ensure_ascii=False) + "\n")
    run_oracle.run("restricted", "fuzz-cases-%d.jsonl" % seed,
                   "fuzz-php-%d.jsonl" % seed)
    exe = "../lean-ftml/.lake/build/bin/lean-ftml-conformance-r316"
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
    print("fuzz seed %d: agree %d/%d (fatal agreements %d)"
          % (seed, agree, total, fatal))
    if agree != total:
        for cid in bad[:5]:
            c = next(x for x in cases if x["id"] == cid)
            print("MISMATCH", cid, repr(c["source"])[:300])
            print("  php :", json.dumps(php.get(cid),
                                         ensure_ascii=False)[:400])
            print("  lean:", json.dumps(lean.get(cid),
                                         ensure_ascii=False)[:400])
        sys.exit(1)


if __name__ == "__main__":
    main()
