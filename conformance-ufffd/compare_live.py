#!/usr/bin/env python3
"""Compare the U+FFFD mirror against the 36 live captures.

The reference fatals on the literal-segment cases, so it is not the
oracle. This comparer reads the conformance driver's JSONL (one object
per case, `output` the rendered bytes as a JSON string) and
conformance-ufffd/comparison.json.

Framing, the programme's capture frame: strip leading and trailing
newlines, then replace a paragraph break `\\n\\n` with a single
newline. Live comparison is modulo that frame. The six controls are
also required to equal the reference byte for byte, frame included.

A residue is a same-length framed pair that differs only at digit
positions where the live digit is the mirror digit plus one. That is
the 2-versus-1 token-numbering gap; content digits that agree are not
residue.
"""
import json
import sys

FAMILIES = {
    "control": [
        "control", "spaces-control", "entity-dec", "entity-hex",
        "code-token", "includer",
    ],
    "mid-recover": [
        "plain-mid", "plain-start", "pair-text", "near-token",
        "swallow-bold", "inside-bold", "heading", "second-para",
        "list-item", "inc-target", "raw-token", "start-bold-after",
        "mid-no-space", "fake-after-bold", "fake-space-fake",
        "digits-text", "unclosed-digits", "fake-digit-mid",
    ],
    "block-end-leak": [
        "plain-end", "plain-only", "end-after-bold", "end-no-space",
    ],
    "boundary-merge": [
        "end-first-para", "end-both-para", "end-list", "end-heading",
    ],
    "enclosed-key": ["pair-digits", "pair-zero"],
    "only-chars": ["only-two"],
    "inline-degrade": ["fake-before-bold"],
}

EXPECT = {
    "control": "MATCH",
    "mid-recover": "MATCH",
    "block-end-leak": "RESIDUE",
    "boundary-merge": "RESIDUE",
    "enclosed-key": "MATCH",
    "only-chars": "MATCH",
    "inline-degrade": "MATCH",
}


def frame(s):
    s = s.lstrip("\n").rstrip("\n")
    return s.replace("\n\n", "\n")


def classify(mirror, live):
    a, b = frame(mirror), frame(live)
    if a == b:
        return "MATCH", []
    if len(a) != len(b):
        return "DIFF", []
    gaps = []
    for i, (ca, cb) in enumerate(zip(a, b)):
        if ca == cb:
            continue
        if ca.isdigit() and cb.isdigit() and ord(cb) == ord(ca) + 1:
            gaps.append((i, ca, cb))
            continue
        return "DIFF", []
    if gaps:
        return "RESIDUE", gaps
    return "DIFF", []


def output_of(row):
    if row.get("status") == "ok":
        out = row.get("output", "")
        if isinstance(out, str):
            return out
        return None
    return None


def main():
    if len(sys.argv) != 3:
        print("usage: compare_live.py comparison.json driver.jsonl", file=sys.stderr)
        return 2
    cases = json.load(open(sys.argv[1], encoding="utf-8"))
    by_id = {}
    for line in open(sys.argv[2], encoding="utf-8"):
        line = line.strip()
        if not line:
            continue
        row = json.loads(line)
        by_id[row.get("id")] = row
    family_of = {}
    for fam, ids in FAMILIES.items():
        for i in ids:
            family_of[i] = fam
    seen = []
    fail = 0
    tallies = {fam: {"MATCH": 0, "RESIDUE": 0, "DIFF": 0, "OTHER": 0, "n": 0}
               for fam in FAMILIES}
    for case in cases:
        cid = case["id"]
        fam = family_of.get(cid)
        if fam is None:
            print("UNKNOWN %s" % cid)
            fail += 1
            continue
        seen.append(cid)
        tallies[fam]["n"] += 1
        row = by_id.get(cid)
        if row is None:
            print("MISSING %s %s" % (fam, cid))
            tallies[fam]["OTHER"] += 1
            fail += 1
            continue
        mirror = output_of(row)
        if mirror is None:
            print("OTHER %s %s status=%s" % (fam, cid, row.get("status")))
            tallies[fam]["OTHER"] += 1
            fail += 1
            continue
        kind, gaps = classify(mirror, case["live_html"])
        tallies[fam][kind] += 1
        extra = ""
        if fam == "control" and mirror != case["ref"]:
            extra = " REF-MISMATCH"
            fail += 1
        elif kind != EXPECT[fam]:
            fail += 1
            extra = " expected %s" % EXPECT[fam]
        gap_s = ""
        if gaps:
            gap_s = " gaps=" + ",".join("%s:%s->%s" % (i, a, b) for i, a, b in gaps)
        if kind != "MATCH" or extra:
            print("%s %s %s%s%s" % (kind, fam, cid, gap_s, extra))
            if kind == "DIFF" or extra:
                print("  mirror %r" % frame(mirror))
                print("  live   %r" % frame(case["live_html"]))
                if fam == "control":
                    print("  ref    %r" % case["ref"])
                    print("  raw    %r" % mirror)
    missing_fam = [i for i in family_of if i not in seen]
    if missing_fam:
        print("CASES-ABSENT %s" % ",".join(missing_fam))
        fail += 1
    extra_ids = [i for i in by_id if i not in family_of]
    if extra_ids:
        print("DRIVER-EXTRA %s" % ",".join(extra_ids))
        fail += 1
    print("TOTAL %d" % len(cases))
    for fam in FAMILIES:
        t = tallies[fam]
        print("FAMILY %s n=%d MATCH=%d RESIDUE=%d DIFF=%d OTHER=%d expect=%s" % (
            fam, t["n"], t["MATCH"], t["RESIDUE"], t["DIFF"], t["OTHER"], EXPECT[fam]))
    print("FAIL %d" % fail)
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
