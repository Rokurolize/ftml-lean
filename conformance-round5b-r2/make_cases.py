#!/usr/bin/env python3
"""Generate cases.jsonl from the R5B-R2 ledger so source identities cannot drift.

Reads the ledger table, extracts the case id in the final column of every
R2B-NN row, and pairs it with the single source literal below. Any missing,
extra or duplicate id is a hard failure, so the probe corpus is exactly the
set of ledger suspicions and nothing else.
"""
import json
import os
import re

HERE = os.path.dirname(os.path.abspath(__file__))
LEDGER = os.path.join(HERE, "LEDGER.md")
OUT = os.path.join(HERE, "cases.jsonl")

# Wiki source for each suspicion, kept minimal and rule-level. Image sources
# use an external URL so the harness page-name-dependent local--files path is
# not a serving-layer confounder.
SOURCES = {
    "r2b-math-uppercase-TYPE-valid": '[[math TYPE="gather"]]\nx\n[[/math]]',
    "r2b-math-type-uppercase-value": '[[math type="ALIGN"]]\nx\n[[/math]]',
    "r2b-math-type-entity": '[[math type="a&b"]]\nx\n[[/math]]',
    "r2b-mathinline-date-only": '[[$[[date 0]]$]]',
    "r2b-mathinline-quote-escape": '[[$ "a" \'b\' $]]',
    "r2b-mathinline-nonascii": '[[$ é & α $]]',
    "r2b-mathinline-code-token": '[[$ [[code X]] $]]',
    "r2b-email-claimed-url": '[a@b.com http://example.com]',
    "r2b-email-claimed-raw": '[a@b.com @@raw@@]',
    "r2b-email-bytewise-ee": '[a@b.com éé]',
    "r2b-email-bytewise-cafe": '[a@b.com café]',
    "r2b-email-label-at": '[a@b.com @@raw]',
    "r2b-email-claimed-multidigit": '@@a@@ @@b@@ @@c@@ @@d@@ @@e@@ @@f@@ @@g@@ @@h@@ @@i@@ @@j@@ @@k@@ @@l@@ [a@b.com http://example.com]',
    "r2b-url-lower-pct": 'https://example.com/%c3%a9',
    "r2b-url-fragment": 'http://example.com/a#frag',
    "r2b-freelink-anchor-label": '[[[foo#frag|shown]]]',
    "r2b-interwiki-pl-site": '[wikipedia.pl:A&B]',
    "r2b-image-nonascii-src": '[[image http://x/café.png]]',
    "r2b-image-alt-quote": '[[image http://x/y.png alt="a\\"b&c"]]',
    "r2b-embed-data-scheme": '[[embed]]<iframe src="http://x/y" data-x="javascript:alert(1)"></iframe>[[/embed]]',
    "r2b-embed-datasrc": '[[embed]]<iframe data-src="javascript:alert(1)"></iframe>[[/embed]]',
    "r2b-image-link-nonascii": '[[image http://x/y.png link="http://x/café"]]',
}


def ledger_ids():
    ids = []
    with open(LEDGER, encoding="utf-8") as fh:
        for line in fh:
            if not re.match(r"^\|\s*R2B-\d+\s*\|", line):
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
            fh.write(json.dumps({"id": case_id, "source": SOURCES[case_id]},
                                ensure_ascii=False) + "\n")
    print("wrote %d cases to %s" % (len(ids), OUT))


if __name__ == "__main__":
    main()
