#!/usr/bin/env python3
"""Generate cases.jsonl from the R5D-R2 ledger so source identities cannot drift.

Reads the ledger table, extracts the case id in the final column of every
R2D-NN row, and pairs it with the single source literal below. Any missing,
extra or duplicate id is a hard failure, so the probe corpus is exactly the
set of ledger suspicions and nothing else. Control and non-ASCII bytes are
written as JSON escapes and decode back to the exact saved-page bytes.
"""
import json
import os
import re

HERE = os.path.dirname(os.path.abspath(__file__))
LEDGER = os.path.join(HERE, "LEDGER.md")
OUT = os.path.join(HERE, "cases.jsonl")

SOURCES = {
    "r2d-01-freelink-u2000": "[[[\u2000_default:x]]]",
    "r2d-02-freelink-u0085": "[[[\u0085_default:x]]]",
    "r2d-03-freelink-u1680": "[[[\u1680_default:x]]]",
    "r2d-04-freelink-u205f": "[[[\u205f_default:x]]]",
    "r2d-05-freelink-nbsp-star": "[[[\u00a0*_default:x]]]",
    "r2d-06-freelink-feff-star": "[[[\ufeff*_default:x]]]",
    "r2d-07-freelink-triple-star": "[[[***_default:x]]]",
    "r2d-08-freelink-mixed-run": "[[[\t \u00a0\u3000_default:x]]]",
    "r2d-09-freelink-route-label": "[[[foo/#/bar|shown]]]",
    "r2d-10-freelink-route-empty-base": "[[[/#/bar]]]",
    "r2d-11-freelink-route-then-anchor": "[[[foo/#/bar#baz]]]",
    "r2d-12-freelink-route-twice": "[[[a/#/b/#/c]]]",
    "r2d-13-freelink-route-empty-rest": "[[[foo/#/]]]",
    "r2d-14-freelink-route-leading-space": "[[[ foo/#/bar]]]",
    "r2d-15-url-upper-ext": "https://example.com/PIC.JPG",
    "r2d-16-interwiki-nonascii-page": "[wikipedia:café]",
    "r2d-17-image-nonascii-alt": '[[image http://x/y.png alt="café"]]',
    "r2d-18-embed-uppercase-event": '[[embed]]<iframe ONLOAD="x"></iframe>[[/embed]]',
}


def ledger_ids():
    ids = []
    with open(LEDGER, encoding="utf-8") as fh:
        for line in fh:
            if not re.match(r"^\|\s*R2D-\d+\s*\|", line):
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
                                ensure_ascii=True) + "\n")
    print("wrote %d cases to %s" % (len(ids), OUT))


if __name__ == "__main__":
    main()
