#!/usr/bin/env python3
"""Generate the conformance-pcre2 full torture suite (F2, TCB-2).

Deterministic: no randomness anywhere; every subject is enumerated or
derived by a stated rule.  Patterns are the unique patterns of
RefTables.json (primaries + inline preg_* literals + embed statics;
`dynamic-template` entries are PHP expressions, not patterns, and are
excluded).  Subjects come in three parts:

  A  alphabet sweep: every string of length <= 2 over the 18-symbol
     quotient alphabet Sigma_pcre (policy section 2.2 Class C), for
     every pattern.
  B  pattern-derived mutations: a literal-ish seed stripped from the
     pattern body, plus every single-byte deletion, every single-byte
     substitution by 'a' and '[', and every single-byte prefix/suffix
     extension by a Sigma byte (seed length capped at 40).
  C  recursion shapes: for patterns containing (?R), every string of
     length <= 7 over {'[', ']', 'a'} whose running balance never
     drops below -1 (bracket-ish strings), exercising nested
     backtracking to depth 3.

Outputs patterns.json (hex + flags per unique pattern), cases.jsonl
({"p": pattern index, "s": subject hex}), and gen_meta.json with the
generator parameters, per-part cardinalities, and the SHA-256 of
cases.jsonl.
"""
import hashlib
import itertools
import json
import pathlib
import sys

HERE = pathlib.Path(__file__).resolve().parent
ROOT = HERE.parent
SIGMA = [97, 98, 48, 57, 10, 9, 32, 47, 91, 93, 40, 41, 123, 125, 64,
         92, 88, 255]
META = set(b"()[]{}|*+?^$.\\")


def pattern_flags(p: str):
    """(body, flags) of a delimited pattern, mirroring the extractor."""
    if len(p) < 2:
        return p, ""
    first = p[0]
    if first.isalnum() or first in "_([\\":
        return p, ""
    delim = first
    esc = in_cls = False
    for idx in range(1, len(p)):
        c = p[idx]
        if esc:
            esc = False
            continue
        if c == "\\":
            esc = True
            continue
        if c == "[" and not in_cls:
            in_cls = True
            continue
        if c == "]" and in_cls:
            in_cls = False
            continue
        if c == delim and not in_cls:
            tail = p[idx + 1:]
            if any(ch not in "imsUxDASuJn" for ch in tail):
                return p, ""
            return p[1:idx], tail
    return p, ""


def seed_of(p: str) -> bytes:
    body, _ = pattern_flags(p)
    out = bytearray()
    i = 0
    raw = body.encode("latin-1")
    while i < len(raw) and len(out) < 40:
        c = raw[i]
        if c == 92 and i + 1 < len(raw):
            d = raw[i + 1]
            if d in b"nrtfv":
                out.append({110: 10, 114: 13, 116: 9, 102: 12,
                            118: 11}[d])
            elif 49 <= d <= 57:
                pass  # backreference: no literal byte
            else:
                out.append(d)
            i += 2
            continue
        if c in META:
            i += 1
            continue
        out.append(c)
        i += 1
    return bytes(out)


def bracketish(maxlen: int):
    out = []
    for n in range(0, maxlen + 1):
        for tup in itertools.product((91, 93, 97), repeat=n):
            bal = 0
            ok = True
            for b in tup:
                if b == 91:
                    bal += 1
                elif b == 93:
                    bal -= 1
                if bal < -1:
                    ok = False
                    break
            if ok:
                out.append(bytes(tup))
    return out


def main() -> int:
    tables = json.loads((ROOT / "RefTables.json").read_text())
    pats = {}
    for r in tables["rules"]:
        for p in r["patterns"]:
            pats.setdefault(p, None)
        for it in r["inline"]:
            if it["api"] != "dynamic-template":
                pats.setdefault(it["pattern"], None)
    for _, p in tables["embed_patterns"]:
        pats.setdefault(p, None)
    patterns = sorted(pats.keys())
    pat_meta = []
    for p in patterns:
        _, fl = pattern_flags(p)
        # Bare = the extractor's definition: the first byte could not
        # be a PHP delimiter.  A string that starts with a delimiter
        # byte but never closes is a literal fragment of a
        # concatenated pattern, not a bare pattern.
        bare = len(p) >= 2 and (p[0].isalnum() or p[0] in "_([\\")
        php_pat = p
        if bare:
            # The reference stores these undelimited and wraps them at
            # the call site; wrap for the PHP oracle in a delimiter
            # byte that occurs nowhere in the pattern.
            for cand in "%!;~#^":
                if cand not in p:
                    php_pat = cand + p + cand
                    break
        pat_meta.append({"hex": p.encode("latin-1").hex(),
                         "php_hex": php_pat.encode("latin-1").hex(),
                         "bare": bare, "flags": fl,
                         "recursive": "(?R)" in p})

    cases = []
    part_counts = {"A": 0, "B": 0, "C": 0}
    # Part A
    subjects_a = [b""] + [bytes([b]) for b in SIGMA] + \
        [bytes(t) for t in itertools.product(SIGMA, repeat=2)]
    for pi in range(len(patterns)):
        for s in subjects_a:
            cases.append((pi, s))
            part_counts["A"] += 1
    # Part B
    for pi, p in enumerate(patterns):
        seed = seed_of(p)
        subs = {seed}
        for i in range(len(seed)):
            subs.add(seed[:i] + seed[i + 1:])
            subs.add(seed[:i] + b"a" + seed[i + 1:])
            subs.add(seed[:i] + b"[" + seed[i + 1:])
        for b in SIGMA:
            subs.add(bytes([b]) + seed)
            subs.add(seed + bytes([b]))
        for s in sorted(subs):
            cases.append((pi, s))
            part_counts["B"] += 1
    # Part C
    subs_c = bracketish(7)
    for pi, pm in enumerate(pat_meta):
        if pm["recursive"]:
            for s in subs_c:
                cases.append((pi, s))
                part_counts["C"] += 1

    with (HERE / "patterns.json").open("w") as f:
        json.dump(pat_meta, f, indent=1, sort_keys=True)
        f.write("\n")
    h = hashlib.sha256()
    with (HERE / "cases.jsonl").open("w") as f:
        for pi, s in cases:
            line = json.dumps({"p": pi, "s": s.hex()},
                              separators=(",", ":")) + "\n"
            h.update(line.encode())
            f.write(line)
    meta = {"patterns": len(patterns), "subjects_a": len(subjects_a),
            "subjects_c": len(subs_c), "part_counts": part_counts,
            "total_cases": len(cases), "cases_sha256": h.hexdigest(),
            "sigma": SIGMA}
    (HERE / "gen_meta.json").write_text(json.dumps(meta, indent=1) + "\n")
    print(json.dumps(meta, indent=1))
    return 0


if __name__ == "__main__":
    sys.exit(main())
