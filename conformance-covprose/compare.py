#!/usr/bin/env python3
"""R3 conformance comparison (R3-SCOPE.md protocol), CAPSTONE copy.

CAPSTONE changes (this stage copy; earlier copies in materials/
and conformance-r317/ are untouched):
  * The compared state gains the Include rule's inclusions and
    inclusionsNotExist registries (the fourth disclosed compared-
    state extension in the R3.4/R3.6/R3.17 pattern): "inclusions"
    compares as the ordered list of included page IDs, and
    "inclusionsNotExist" as the ordered list of missing-include
    display names. When comparing against a pre-CAPSTONE archived
    record that lacks the "inclusions" / "inclusionsNotExist" keys
    in its JSON object, those fields compare as empty so archived
    pre-extension full-pipeline snapshots and restricted-pipeline
    records continue to compare cleanly.
"""

import json
import sys

COUNTER_KEYS = (("Collapsible", "count"), ("Tabview", "tabviewId"))


def rewrite_bytes(bs, renum):
    """Renumber placeholder references inside a byte string:
    0xFF <decimal id> 0xFF becomes 0xFF <renumbered id> 0xFF,
    using the owning record's token renumbering."""
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
    if isinstance(tokens, list):
        return list(range(len(tokens))), {i: e for i, e in enumerate(tokens)}
    ids = [int(k) for k in tokens.keys()]
    return ids, {int(k): tokens[k] for k in tokens.keys()}


def counter_renums(rec):
    ids, by_id = token_entries(rec["tokens"])
    maps = {rk: {} for rk in COUNTER_KEYS}
    for old in ids:
        rule, opts = by_id[old][0], by_id[old][1]
        if not isinstance(opts, dict):
            continue
        for rk in COUNTER_KEYS:
            if rule == rk[0]:
                v = opts.get(rk[1])
                if isinstance(v, int) and not isinstance(v, bool):
                    m = maps[rk]
                    if v not in m:
                        m[v] = len(m)
    return maps


def canon_opts(rule, opts, renum, cmaps):
    if isinstance(opts, dict):
        opts = dict(opts)
        for rk in COUNTER_KEYS:
            if rule == rk[0] and rk[1] in opts:
                v = opts[rk[1]]
                if isinstance(v, int) and not isinstance(v, bool):
                    opts[rk[1]] = cmaps[rk].get(v, v)
    return canon_value(opts, renum)


def canon_state(rec, include_doc_inc=True):
    ids, by_id = token_entries(rec["tokens"])
    renum = {old: new for new, old in enumerate(ids)}
    cmaps = counter_renums(rec)
    tokens = []
    for old in ids:
        rule, opts = by_id[old][0], by_id[old][1]
        tokens.append((rule, canon_opts(rule, opts, renum, cmaps)))
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
    equations = tuple(
        (canon_value(label, {}), canon_value(mid, {}))
        for label, mid in rec.get("equations", []))
    math_id = canon_value(rec.get("mathId"), {})
    footnotes = tuple(
        canon_value(body, renum) for body in rec.get("footnotes", []))
    bibitems = tuple(
        (canon_value(label, renum), canon_value(content, renum))
        for label, content in rec.get("bibitems", []))
    bibitem_ids = tuple(
        (canon_value(label, renum), canon_value(bid, {}))
        for label, bid in rec.get("bibitemIds", []))
    scored_anchors = tuple(
        (canon_value(end_tok, renum), canon_value(start_tok, renum))
        for end_tok, start_tok in rec.get("scoredAnchors", []))
    if include_doc_inc:
        inclusions = tuple(
            canon_value(pid, {}) for pid in rec.get("inclusions", []))
        inclusions_not_exist = tuple(
            canon_value(name, {}) for name in rec.get("inclusionsNotExist", []))
    else:
        inclusions = ()
        inclusions_not_exist = ()
    return (tuple(segments), tuple(tokens), equations, math_id,
            footnotes, bibitems, bibitem_ids, scored_anchors,
            inclusions, inclusions_not_exist)


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
    fatal_pass = 0
    fatal_fail = 0
    compared = 0
    for cid in sorted(expected):
        if only is not None and cid not in only:
            continue
        compared += 1
        if cid not in got:
            print(f"{cid}: MISSING on the got side")
            failures += 1
            continue
        e_fatal = expected[cid].get("fatal")
        g_fatal = got[cid].get("fatal")
        if e_fatal is not None or g_fatal is not None:
            if e_fatal is not None and e_fatal == g_fatal:
                fatal_pass += 1
                print(f"{cid}: PASS-FATAL")
            else:
                failures += 1
                fatal_fail += 1
                print(f"{cid}: FAIL-FATAL (expected fatal: {e_fatal!r}; "
                      f"got fatal: {g_fatal!r})")
            continue
        e_err = "error" in expected[cid]
        g_err = "error" in got[cid]
        if e_err or g_err:
            failures += 1
            sides = [s for s, e in (("expected", e_err), ("got", g_err)) if e]
            print(f"{cid}: FAIL-ERROR (error record on the {' and '.join(sides)} side)")
            continue
        has_inc = ("inclusions" in expected[cid] and "inclusions" in got[cid])
        e = canon_state(expected[cid], include_doc_inc=has_inc)
        g = canon_state(got[cid], include_doc_inc=has_inc)
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
            if e[2] != g[2]:
                print(f"  expected equations: {e[2]}")
                print(f"  got      equations: {g[2]}")
            if e[3] != g[3]:
                print(f"  expected mathId: {e[3]}")
                print(f"  got      mathId: {g[3]}")
            if e[4] != g[4]:
                print(f"  expected footnotes: {e[4]}")
                print(f"  got      footnotes: {g[4]}")
            if e[5] != g[5]:
                print(f"  expected bibitems: {e[5]}")
                print(f"  got      bibitems: {g[5]}")
            if e[6] != g[6]:
                print(f"  expected bibitemIds: {e[6]}")
                print(f"  got      bibitemIds: {g[6]}")
            if e[7] != g[7]:
                print(f"  expected scoredAnchors: {e[7]}")
                print(f"  got      scoredAnchors: {g[7]}")
            if e[8] != g[8]:
                print(f"  expected inclusions: {e[8]}")
                print(f"  got      inclusions: {g[8]}")
            if e[9] != g[9]:
                print(f"  expected inclusionsNotExist: {e[9]}")
                print(f"  got      inclusionsNotExist: {g[9]}")
    print(f"SUMMARY: {compared - failures}/{compared} cases match")
    print(f"SUMMARY-FATAL: {fatal_pass} parse-fatal agreements, "
          f"{fatal_fail} fatal mismatches")
    sys.exit(0 if failures == 0 else 1)


if __name__ == "__main__":
    main()
