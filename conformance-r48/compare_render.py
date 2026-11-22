#!/usr/bin/env python3
"""R4.8 render conformance comparison (R4-SCOPE.md / REPORT-R4.md
gate protocol). Copied from the R4.7 tool with one stage-scoped
extension, the disposition-agreement rule in the PHP-error branch
below: a PHP fatal naming one of the three serving-layer absences
this stage dispositions counts as EXCLUDED (not FAIL) when the
driver reports the case excluded and names the matching
disposition. A second stage-scoped extension classifies e2e byte
differences confined to PHP batch token-id placeholders
(`\xFF<decimal>\xFF`) as EXCLUDED under the name `BatchTokenIdCounter`,
never PASS and never FAIL: the PHP batch oracle numbers tokens
process-globally while the Lean e2e driver numbers them per case.
Any other PHP error keeps the base tool's FAIL.

Compares a Lean conformance driver's JSONL output against the PHP
reference's expected-render JSONL, case by case, byte-exactly with
zero normalization. Both sides' "output" values decode through the
R3.3 wire encoding (a plain JSON string is its UTF-8 bytes;
{"$bytes": [b0, ...]} is the byte list).

Verdicts:
  PASS         driver status "ok" and output bytes equal the PHP
               render bytes.
  FAIL         driver status "ok" but bytes differ; a record missing
               on either side; a driver "error" record; a PHP error
               the driver did not reproduce as the matching fatal;
               a driver "fatal" the PHP side did not raise.
  EXCLUDED     driver status "excluded" (some referenced token's
               render rule is unmirrored, or a token key is missing);
               the case's unmirrored rule names are tallied.
  FATAL-AGREE  driver status "fatal" and the PHP side's error is the
               same ProcessException (Math's parse guard); counted
               separately, neither pass nor fail (the R3 protocol).

Usage: compare_render.py EXPECTED.jsonl GOT.jsonl [--detail FILE]
Exit status is 0 iff FAIL == 0. The detail file, if requested,
receives one JSON record per case with its verdict (and, for
exclusions, the unmirrored rule names and missing keys; for
failures, both byte strings as latin-1-safe reprs).
"""

import json
import re
import sys
from collections import Counter

# R4.8 batch token-id-counter exclusion. The PHP batch oracle assigns
# process-global token ids (`\xFF<decimal>\xFF` placeholders embedded in
# rendered bytes); the Lean e2e driver numbers tokens per case from zero.
# When the two byte strings are equal after replacing those placeholders
# with a canonical marker, and at least one placeholder was present, the
# case is named EXCLUDED as `BatchTokenIdCounter` -- never PASS, never FAIL.
# This is an exclusion classification only: no normalization is applied
# to any PASS decision. It is the same standing-harness-class device as
# the R4.7 tabview-counter and the x44 canonicalization exclusions.
TOKEN_ID_RE = re.compile(rb'(?:\xff|%25FF|%FF)[0-9]+(?:\xff|%25FF|%FF)')


def counter_artifact(eb, gb):
    if eb == gb:
        return False
    if TOKEN_ID_RE.search(eb) is None and TOKEN_ID_RE.search(gb) is None:
        return False
    return TOKEN_ID_RE.sub(b'\xff#\xff', eb) == TOKEN_ID_RE.sub(b'\xff#\xff', gb)

# R4.8 disposition-agreement table: the PHP fatal (exact record
# text) -> the driver-side disposition name(s) that settle it.
DISPOSITIONS = {
    'Error: Class "Criteria" not found': {"User:DB_OzoneUserPeer"},
    'Error: Class "FlickrHandler" not found': {
        "Image:FlickrHandler", "Gallery:FlickrHandler"},
    "Error: Call to undefined method DB_PagePeer::selectByPrimaryKey()": {
        "Freelink:textFromTitle"},
}


def decode_output(v):
    if isinstance(v, str):
        return v.encode("utf-8")
    if isinstance(v, dict) and set(v.keys()) == {"$bytes"}:
        return bytes(v["$bytes"])
    raise ValueError(f"undecodable output value: {type(v)}")


def load_jsonl(path):
    out = {}
    with open(path, encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if line:
                rec = json.loads(line)
                out[rec["id"]] = rec
    return out


def main():
    expected = load_jsonl(sys.argv[1])
    got = load_jsonl(sys.argv[2])
    detail_path = None
    if len(sys.argv) > 4 and sys.argv[3] == "--detail":
        detail_path = sys.argv[4]
    counts = Counter()
    unmirrored_tally = Counter()
    details = []
    failures = []
    for cid in sorted(set(expected) | set(got)):
        e = expected.get(cid)
        g = got.get(cid)
        rec = {"id": cid}
        if e is None or g is None:
            counts["FAIL"] += 1
            rec["verdict"] = "FAIL"
            rec["reason"] = "missing record on one side"
            failures.append(cid)
            details.append(rec)
            continue
        e_err = e.get("error")
        g_status = g.get("status")
        if g_status == "fatal":
            if e_err is not None and e_err.startswith("ProcessException"):
                counts["FATAL-AGREE"] += 1
                rec["verdict"] = "FATAL-AGREE"
            else:
                counts["FAIL"] += 1
                rec["verdict"] = "FAIL"
                rec["reason"] = f"driver fatal {g.get('fatal')!r}, PHP error {e_err!r}"
                failures.append(cid)
            details.append(rec)
            continue
        if e_err is not None:
            disp = DISPOSITIONS.get(e_err)
            if disp is not None and g_status == "excluded" and \
                    disp & set(g.get("unmirrored", [])):
                counts["EXCLUDED"] += 1
                rec["verdict"] = "EXCLUDED"
                rec["disposition"] = sorted(disp & set(g.get("unmirrored", [])))
                rec["php_error"] = e_err
                rec["unmirrored"] = g.get("unmirrored", [])
                rec["missingKeys"] = g.get("missingKeys", [])
                for rule in rec["unmirrored"]:
                    unmirrored_tally[rule] += 1
                details.append(rec)
                continue
            counts["FAIL"] += 1
            rec["verdict"] = "FAIL"
            rec["reason"] = f"PHP error {e_err!r}, driver status {g_status!r}"
            failures.append(cid)
            details.append(rec)
            continue
        if g_status == "error":
            counts["FAIL"] += 1
            rec["verdict"] = "FAIL"
            rec["reason"] = f"driver error {g.get('error')!r}"
            failures.append(cid)
            details.append(rec)
            continue
        if g_status == "excluded":
            counts["EXCLUDED"] += 1
            rec["verdict"] = "EXCLUDED"
            rec["unmirrored"] = g.get("unmirrored", [])
            rec["missingKeys"] = g.get("missingKeys", [])
            for rule in rec["unmirrored"]:
                unmirrored_tally[rule] += 1
            details.append(rec)
            continue
        if g_status == "ok":
            eb = decode_output(e["output"])
            gb = decode_output(g["output"])
            if eb == gb:
                counts["PASS"] += 1
                rec["verdict"] = "PASS"
            elif counter_artifact(eb, gb):
                counts["EXCLUDED"] += 1
                rec["verdict"] = "EXCLUDED"
                rec["unmirrored"] = ["BatchTokenIdCounter"]
                rec["missingKeys"] = []
                rec["counter_note"] = ("PHP batch token-id placeholder vs "
                                       "Lean case-local token id")
                rec["expected"] = repr(eb)
                rec["got"] = repr(gb)
                unmirrored_tally["BatchTokenIdCounter"] += 1
            else:
                counts["FAIL"] += 1
                rec["verdict"] = "FAIL"
                rec["expected"] = repr(eb)
                rec["got"] = repr(gb)
                failures.append(cid)
            details.append(rec)
            continue
        counts["FAIL"] += 1
        rec["verdict"] = "FAIL"
        rec["reason"] = f"unknown driver status {g_status!r}"
        failures.append(cid)
        details.append(rec)
    total = sum(counts.values())
    print(f"TOTAL {total}")
    print(f"PASS {counts['PASS']}")
    print(f"EXCLUDED {counts['EXCLUDED']}")
    print(f"FAIL {counts['FAIL']}")
    print(f"FATAL-AGREE {counts['FATAL-AGREE']}")
    if unmirrored_tally:
        print("UNMIRRORED-TALLY " + json.dumps(dict(unmirrored_tally),
                                               sort_keys=True))
    if failures:
        print("FAILURES " + json.dumps(failures))
    if detail_path:
        with open(detail_path, "w", encoding="utf-8") as f:
            for rec in details:
                f.write(json.dumps(rec, ensure_ascii=False) + "\n")
    sys.exit(0 if counts["FAIL"] == 0 else 1)


if __name__ == "__main__":
    main()
