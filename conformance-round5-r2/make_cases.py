#!/usr/bin/env python3
"""Generate cases.jsonl from the R5-R2 ledger so source identities cannot drift.

Reads the ledger table, extracts the case id in the final column of every
R2-NN row, and pairs it with the single source literal below. Any missing,
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
    "url-nbsp-href": "https://example.com/a\u00a0b",
    "url-star-target": "[*http://example.com/a label]",
    "url-mailto-star": "[*mailto:a@example.com mail me]",
    "url-existing-pct": "https://example.com/%C3%A9",
    "email-quote-raw": '[foo@example.com say "hi"]',
    "email-angles-amp": "[foo@example.com a&b<c>]",
    "freelink-star-url": "[[[*http://example.com/x|label]]]",
    "freelink-new-anchor": "[[[foo#anchor]]]",
    "interwiki-known-amp": "[google:a&b]",
    "interwiki-unknown": "[nosuchwiki:A&B]",
    "image-title-alt": '[[image http://x/y.png title="a&b" alt="A&B"]]',
    "image-link-fragment": '[[image http://x/y.png link="#frag"]]',
    "image-link-star": '[[image http://x/y.png link="*http://z/w"]]',
    "image-align": "[[=image http://x/y.png]]",
    "embed-glued-event": '[[embed]]<iframe src="http://x/y"onload="x"></iframe>[[/embed]]',
    "embed-js-scheme": "[[embed]]<iframe src='javascript:alert(1)'></iframe>[[/embed]]",
    "math-escape": "[[$ a & b < c > d $]]",
    "math-freelink-suppress": "[[$ [[[foo]]] $]]",
    "math-interwiki-expand": "[[$ [[wikipedia:X]] $]]",
}


def ledger_ids():
    ids = []
    with open(LEDGER, encoding="utf-8") as fh:
        for line in fh:
            if not re.match(r"^\|\s*R2-\d+\s*\|", line):
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
