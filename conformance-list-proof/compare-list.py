#!/usr/bin/env python3
"""R3 conformance comparison (R3-SCOPE.md protocol).

Compares two canonical-state JSONL files (one from the Lean driver,
one from the PHP state driver), case by case, and prints a per-case
verdict plus a summary count.

Canonicalization, applied identically to both sides:
  * Token ids are renumbered per document in table (claim) order
    starting from zero: the PHP side's process-global ids are mapped
    through the order its token table lists them, and segment
    references are rewritten. The Lean side's ids are already
    per-document positions; the same renumbering is the identity
    there, applied anyway so both sides pass through one code path.
  * Segments are normalized: empty text segments dropped, adjacent
    text segments merged.
  * Attribute/option maps compare as unordered key-value sets, with
    scalar values compared as strings after the JSON round-trip
    (so PHP's 1 and Lean's 1 agree; a PHP empty array and an empty
    map agree).

Usage: compare.py EXPECTED.jsonl GOT.jsonl [CASES.jsonl]
  CASES.jsonl, if given, restricts the comparison to its case ids
  (used to apply recorded exclusions). Exit status is 0 iff every
  compared case matches.
"""

import json
import sys


def canon_value(v):
    if isinstance(v, dict):
        return ("map", tuple(sorted((k, canon_value(x)) for k, x in v.items())))
    if isinstance(v, list):
        if not v:
            return ("map", ())
        return ("list", tuple(canon_value(x) for x in v))
    if isinstance(v, bool):
        return ("str", "true" if v else "false")
    if v is None:
        return ("str", "null")
    if isinstance(v, float) and v.is_integer():
        return ("str", str(int(v)))
    return ("str", str(v))


def token_entries(tokens):
    """(ids in claim order, {id: entry}) for a tokens payload given
    either as a list (ids are positions) or an object keyed by id."""
    if isinstance(tokens, list):
        return list(range(len(tokens))), {i: e for i, e in enumerate(tokens)}
    ids = [int(k) for k in tokens.keys()]
    return ids, {int(k): tokens[k] for k in tokens.keys()}


def canon_state(rec):
    ids, by_id = token_entries(rec["tokens"])
    renum = {old: new for new, old in enumerate(ids)}
    # ListCert extension (disclosed in LeanFtml.Proof.ProofListCert):
    # the rule-level corpus starts from an empty token table, so the
    # alphabet's placeholder symbol is a dangling token reference.
    # Dangling ids are renumbered in first-appearance order after the
    # table's ids, identically on both sides; the upstream comparator
    # (full-pipeline corpora, where token 0 is always created by an
    # earlier rule) has no dangling case and crashes on one.
    for seg in rec["segments"]:
        if "k" in seg and int(seg["k"]) not in renum:
            renum[int(seg["k"])] = len(renum)
    tokens = []
    for old in ids:
        rule, opts = by_id[old][0], by_id[old][1]
        tokens.append((rule, canon_value(opts)))
    segments = []
    for seg in rec["segments"]:
        if "t" in seg:
            if seg["t"] == "":
                continue
            if segments and "t" in segments[-1]:
                segments[-1] = ("t", segments[-1][1] + seg["t"])
            else:
                segments.append(("t", seg["t"]))
        else:
            segments.append(("k", renum[int(seg["k"])]))
    return (tuple(segments), tuple(tokens))


def load_jsonl(path):
    out = {}
    with open(path) as f:
        for line in f:
            line = line.strip()
            if line:
                rec = json.loads(line)
                out[rec["id"]] = rec
    return out


def main():
    expected = load_jsonl(sys.argv[1])
    got = load_jsonl(sys.argv[2])
    only = None
    if len(sys.argv) > 3:
        only = set(load_jsonl(sys.argv[3]).keys())
    failures = 0
    compared = 0
    for cid in sorted(expected):
        if only is not None and cid not in only:
            continue
        compared += 1
        if cid not in got:
            print(f"{cid}: MISSING on the got side")
            failures += 1
            continue
        e = canon_state(expected[cid])
        g = canon_state(got[cid])
        if e == g:
            print(f"{cid}: PASS")
        else:
            failures += 1
            print(f"{cid}: FAIL")
            if e[0] != g[0]:
                print(f"  expected segments: {e[0]}")
                print(f"  got      segments: {g[0]}")
            if e[1] != g[1]:
                print(f"  expected tokens: {e[1]}")
                print(f"  got      tokens: {g[1]}")
    print(f"SUMMARY: {compared - failures}/{compared} cases match")
    sys.exit(0 if failures == 0 else 1)


if __name__ == "__main__":
    main()
