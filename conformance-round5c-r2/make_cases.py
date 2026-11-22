#!/usr/bin/env python3
"""Generate cases.jsonl from the R5C-R2 ledger so source identities cannot drift.

Reads the ledger table, extracts the case id in the final column of every
R2C-NN row, and pairs it with the single source literal below. Any missing,
extra or duplicate id is a hard failure, so the probe corpus is exactly the
set of ledger suspicions and nothing else. Control bytes are embedded as
literal escapes so the saved page source is byte-exact.
"""
import json
import os
import re

HERE = os.path.dirname(os.path.abspath(__file__))
LEDGER = os.path.join(HERE, "LEDGER.md")
OUT = os.path.join(HERE, "cases.jsonl")

SOURCES = {
    "r2c-01-math-TyPe": '[[math TyPe="align"]]\nx\n[[/math]]',
    "r2c-02-math-tYPE": '[[math tYPE="gather"]]\nx\n[[/math]]',
    "r2c-03-math-dual-attrs": '[[math TYPE="gather" type="align"]]\nx\n[[/math]]',
    "r2c-04-math-typeeq": '[[math typeeq="align"]]\nx\n[[/math]]',
    "r2c-05-mathinline-amp-entity": '[[$ &amp; <b> $]]',
    "r2c-06-freelink-u2029": '[[[\u2029_default:x]]]',
    "r2c-07-freelink-double-lead": '[[[\x0c\u2028_default:x]]]',
    "r2c-08-freelink-star-space": '[[[* _default:x]]]',
    "r2c-09-freelink-other-cat": '[[[ _foo:x]]]',
    "r2c-10-freelink-hashroute": '[[[foo/#/bar]]]',
    "r2c-11-url-raw-nonascii": 'https://example.com/café?q=x',
    "r2c-12-url-plain-labeled": '[http://example.com/x mail]',
    "r2c-13-interwiki-space": '[google:a b]',
    "r2c-14-interwiki-dict-amp": '[dictionary:A&B]',
    "r2c-15-image-alt-lt": '[[image http://x/y.png alt="a<b"]]',
    "r2c-16-image-existing-pct": '[[image http://x/a%20b.png]]',
    "r2c-17-embed-vbscript": '[[embed]]<iframe src="vbscript:alert(1)"></iframe>[[/embed]]',
    "r2c-18-embed-nomatch": '[[embed]]plain text[[/embed]]',
}


def ledger_ids():
    ids = []
    with open(LEDGER, encoding="utf-8") as fh:
        for line in fh:
            if not re.match(r"^\|\s*R2C-\d+\s*\|", line):
                continue
            cells = [c.strip() for c in line.strip().strip("|").split("|")]
            case_id = cells[-1]
            if not case_id:
                raise SystemExit("ledger row without case id: " + line)
            ids.append(case_id)
    return ids


def main():
    ids = ledger_ids()
    if len(ids) != len(set(ids)):
        raise SystemExit("duplicate case ids in ledger")
    if set(ids) != set(SOURCES):
        missing = sorted(set(ids) - set(SOURCES))
        extra = sorted(set(SOURCES) - set(ids))
        raise SystemExit("ledger/source drift: missing=%s extra=%s" % (missing, extra))
    with open(OUT, "w", encoding="utf-8") as fh:
        for case_id in ids:
            # ensure_ascii=True emits \uXXXX escapes for control bytes and
            # non-ASCII, which are valid JSON and decode back to the exact
            # saved-page bytes. Literal control bytes are invalid JSON.
            fh.write(json.dumps({"id": case_id, "source": SOURCES[case_id]},
                                ensure_ascii=True) + "\n")
    print("wrote %d cases to %s" % (len(ids), OUT))


if __name__ == "__main__":
    main()
