#!/usr/bin/env python3
"""R3.2 consistency check (BRIEF-R3.2 mandatory gate).

For every corpus case, the restricted reference's Form, Raw and
Rawold claims (the sequence of those rules' token options, in claim
order) must agree with the same rules' tokens recorded in the
full-pipeline fixture (expected-formraw-states.jsonl, generated
from the canonical reference by probe-source.php). A case whose
claims differ is excluded from the R3.2 corpus; the expected cause
is an Include expansion feeding a Form/Raw/Rawold shape in the full
pipeline (Include runs first there and is not part of the
restricted rule list). This script prints a per-case verdict,
writes the exclusion list as JSON, and summarizes.

Usage: consistency_check.py RESTRICTED.jsonl FULL.jsonl EXCLUSIONS.json
Attribute maps are compared as unordered key-value sets; scalar
values are compared after JSON round-trip string coercion.
"""

import json
import sys

RULES = ("Form", "Raw", "Rawold")


def token_entries(tokens):
    """Normalize a tokens payload (list, or object keyed by global id)
    to the claim-ordered list of [rule, options] entries."""
    if isinstance(tokens, list):
        return tokens
    if isinstance(tokens, dict):
        return [tokens[k] for k in tokens.keys()]
    raise TypeError("unexpected tokens payload: %r" % type(tokens))


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


def canon_token(entry):
    rule, opts = entry[0], entry[1]
    return (rule, canon_value(opts))


def stage_claims(entries):
    return [canon_token(e) for e in entries if e[0] in RULES]


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
    restricted = load_jsonl(sys.argv[1])
    full = load_jsonl(sys.argv[2])
    exclusions_path = sys.argv[3]
    exclusions = []
    agree = 0
    for cid in sorted(restricted):
        r = stage_claims(token_entries(restricted[cid]["tokens"]))
        f = stage_claims(token_entries(full[cid]["tokens"])) if cid in full else None
        if f is not None and r == f:
            print(f"{cid}: AGREE ({len(r)} form/raw/rawold claims)")
            agree += 1
        else:
            print(f"{cid}: DISAGREE restricted={len(r)} full={len(f) if f is not None else 'absent'}")
            exclusions.append(cid)
    with open(exclusions_path, "w") as f:
        json.dump(exclusions, f, indent=2)
        f.write("\n")
    total = len(restricted)
    print(f"SUMMARY: {agree}/{total} agree, {len(exclusions)} excluded: {exclusions}")


if __name__ == "__main__":
    main()
