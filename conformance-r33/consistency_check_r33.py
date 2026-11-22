#!/usr/bin/env python3
"""R3.3 consistency check (the R3-SCOPE.md obligation, Module stage).

Per R3-SCOPE, a stage's restricted-pipeline oracle is trusted only
after it is shown to agree with the full pipeline on the stage's
claim family. Three records per case are compared here:

  * FULL: the pre-seeded full-pipeline fixtures
    (expected-module*-states.jsonl, probe-source.php output:
    post-parse source with <FF> markers plus the token table).
    Nine cases are absent from these files — probe-source.php's
    json_encode failed on exactly the cases whose module_body
    spans an earlier placeholder (the gap R3.3 Part 1 closed).
  * PREFIX: a full-pipeline prefix run (prefix-source.php: the ten
    rules Include..Module654 under the full configuration and page
    map). Rules after the prefix cannot create, remove, or mutate
    claims inside it, so the prefix record stands in for the full
    pipeline on the family's claims; it is used as the FULL side
    for the nine missing cases, and its agreement with FULL on the
    186 present cases is itself reported.
  * RESTRICTED: the nine-rule stage oracle
    (state-restricted.php with Prefilter..Module654).

Comparisons, per case, over canonicalized claim sequences
(canonicalization as in compare.py, including $bytes decoding and
per-record placeholder renumbering):
  A. PREFIX family claims (Module, Module654) vs FULL family
     claims, on the cases FULL carries.
  B. RESTRICTED family claims vs the full side (FULL where
     present, else PREFIX). A disagreement here is a consistency
     exclusion for the stage corpus, with its reason.
  C. Supporting evidence: RESTRICTED vs PREFIX claims for the
     other shared token-producing rules (Code, Form, Raw, Rawold).

Usage: consistency_check_r33.py CASES.jsonl RESTRICTED.jsonl PREFIX.jsonl FIXTURE.jsonl [FIXTURE.jsonl ...]
Prints per-case verdicts and summary counts; writes nothing.
"""

import json
import sys

sys.path.insert(0, ".")
from compare import canon_value, token_entries

FAMILY = ("Module", "Module654")
EARLIER = ("Code", "Form", "Raw", "Rawold")


def load_jsonl(path):
    out = {}
    with open(path) as f:
        for line in f:
            line = line.strip()
            if line:
                rec = json.loads(line)
                out[rec["id"]] = rec
    return out


def claims(rec, rules):
    ids, by_id = token_entries(rec["tokens"])
    renum = {old: new for new, old in enumerate(ids)}
    out = []
    for old in ids:
        rule, opts = by_id[old][0], by_id[old][1]
        if rule in rules:
            out.append((rule, canon_value(opts, renum)))
    return tuple(out)


def main():
    cases = list(load_jsonl(sys.argv[1]).keys())
    restricted = load_jsonl(sys.argv[2])
    prefix = load_jsonl(sys.argv[3])
    full = {}
    for path in sys.argv[4:]:
        full.update(load_jsonl(path))

    a_agree = a_total = 0
    exclusions = []
    surrogate = []
    c_disagree = []
    for cid in cases:
        if cid in full:
            a_total += 1
            if claims(prefix[cid], FAMILY) == claims(full[cid], FAMILY):
                a_agree += 1
            else:
                print(f"{cid}: PREFIX-vs-FULL FAMILY DISAGREEMENT")
                print(f"  full:   {claims(full[cid], FAMILY)}")
                print(f"  prefix: {claims(prefix[cid], FAMILY)}")
            full_side, origin = full[cid], "fixture"
        else:
            full_side, origin = prefix[cid], "prefix-surrogate"
            surrogate.append(cid)
        r_fam = claims(restricted[cid], FAMILY)
        f_fam = claims(full_side, FAMILY)
        if r_fam == f_fam:
            print(f"{cid}: CONSISTENT (full side: {origin})")
        else:
            exclusions.append(cid)
            print(f"{cid}: EXCLUDED (full side: {origin})")
            print(f"  restricted family: {r_fam}")
            print(f"  full family:       {f_fam}")
        if claims(restricted[cid], EARLIER) != claims(prefix[cid], EARLIER):
            c_disagree.append(cid)
    print(f"SUMMARY A (prefix vs fixture, family): {a_agree}/{a_total} agree")
    print(f"SUMMARY B (restricted vs full, family): "
          f"{len(cases) - len(exclusions)}/{len(cases)} consistent; "
          f"exclusions: {exclusions}")
    print(f"SUMMARY: full-side surrogate (prefix) cases: {sorted(surrogate)}")
    print(f"SUMMARY C (restricted vs prefix, earlier rules): "
          f"{len(cases) - len(c_disagree)}/{len(cases)} agree; "
          f"disagreeing: {c_disagree}")


if __name__ == "__main__":
    main()
