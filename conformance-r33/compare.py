#!/usr/bin/env python3
"""R3 conformance comparison (R3-SCOPE.md protocol), R3.3 copy.

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

R3.3 changes (this stage copy; the R3.2 copy in conformance-r3-prev/
is untouched):
  * Byte-string option values cross the wire under the $bytes
    encoding (see state-restricted.php and TokenState.lean): a
    value of the form {"$bytes": [b0, b1, ...]} is decoded back to
    a byte string here, and placeholder references inside it
    (delimiter byte, decimal id, delimiter byte) are renumbered
    through the owning record's own token renumbering, exactly as
    segment references are. The shape cannot be a genuine option
    map: option keys are the parse rules' fixed ASCII identifiers
    and no rule builds a single-key "$bytes" map or a bare
    integer-list option value.
  * The PASS-UNREPRESENTABLE verdict is retired. A driver error
    record ({"id", "error"}) is a failure (FAIL-ERROR) on whichever
    side it appears: after the encoding above, no content-bearing
    state can produce one, so an error record means a driver
    failure, not a state.
"""

import json
import sys


def rewrite_bytes(bs, renum):
    """Renumber placeholder references inside a byte string:
    0xFF <decimal id> 0xFF becomes 0xFF <renumbered id> 0xFF,
    using the owning record's token renumbering. A 0xFF that does
    not open a well-formed placeholder passes through unchanged
    (reachable byte strings contain none in text position)."""
    out = []
    i = 0
    while i < len(bs):
        if bs[i] == 0xFF:
            j = i + 1
            while j < len(bs) and 48 <= bs[j] <= 57:
                j += 1
            if j > i + 1 and j < len(bs) and bs[j] == 0xFF:
                old = int(bytes(bs[i + 1:j]).decode("ascii"))
                new = renum.get(old, old)
                out.append(0xFF)
                out.extend(str(new).encode("ascii"))
                out.append(0xFF)
                i = j + 1
                continue
        out.append(bs[i])
        i += 1
    return tuple(out)


def is_bytes_wire(v):
    return (
        isinstance(v, dict)
        and set(v.keys()) == {"$bytes"}
        and isinstance(v["$bytes"], list)
        and all(isinstance(x, int) and not isinstance(x, bool) for x in v["$bytes"])
    )


def canon_value(v, renum):
    if is_bytes_wire(v):
        return ("bytes", rewrite_bytes(v["$bytes"], renum))
    if isinstance(v, dict):
        return ("map", tuple(sorted((k, canon_value(x, renum)) for k, x in v.items())))
    if isinstance(v, list):
        if not v:
            return ("map", ())
        return ("list", tuple(canon_value(x, renum) for x in v))
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
    tokens = []
    for old in ids:
        rule, opts = by_id[old][0], by_id[old][1]
        tokens.append((rule, canon_value(opts, renum)))
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
        e_err = "error" in expected[cid]
        g_err = "error" in got[cid]
        if e_err or g_err:
            failures += 1
            sides = [s for s, e in (("expected", e_err), ("got", g_err)) if e]
            print(f"{cid}: FAIL-ERROR (error record on the {' and '.join(sides)} side)")
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
