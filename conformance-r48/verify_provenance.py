#!/usr/bin/env python3
"""R4.8 provenance verification: re-derive the battery counts and the
raw-id collision count from the R2/REFVAL batteries, never from the
assembled output, and check them against provenance.json. The R4.3
discipline requires namespacing every id by battery; this script also
asserts the assembled ids are unique (so the collision count is a fact
about bare ids, not a silent loss of cases).
"""
import json
import os
import sys
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = sys.argv[1] if len(sys.argv) > 1 else os.path.join(HERE, '..')
REFPHP = os.path.join(ROOT, 'conformance-refphp')
PROV = os.path.join(HERE, 'provenance.json')
CASES = os.path.join(HERE, 'cases.jsonl')


def load(path):
    with open(path, encoding='utf-8') as fh:
        return [json.loads(line) for line in fh if line.strip()]


def main():
    prov = json.load(open(PROV, encoding='utf-8'))
    batteries = {k: v for k, v in prov.items() if not k.startswith('_')}
    raw = Counter()
    total = 0
    bad = 0
    for ns, rec in batteries.items():
        rows = load(os.path.join(REFPHP, rec['file']))
        ids = [r['id'] for r in rows]
        raw.update(ids)
        total += len(rows)
        if len(rows) != rec['count']:
            print(f'DRIFT {ns}: provenance count {rec["count"]} vs {len(rows)}')
            bad = 1
        if len(ids) != len(set(ids)):
            print(f'DRIFT {ns}: duplicate bare ids inside one battery')
            bad = 1
    cross = sum(1 for n in raw.values() if n > 1)
    cases = load(CASES)
    assembled = [c['id'] for c in cases]
    if len(assembled) != len(set(assembled)):
        print('DRIFT assembled ids are not unique after namespacing')
        bad = 1
    expect_total = prov['_total']
    expect_cross = prov['_raw_id_collisions_across_batteries']
    if total != expect_total or len(cases) != expect_total:
        print(f'DRIFT total: provenance {expect_total}, batteries {total}, '
              f'cases {len(cases)}')
        bad = 1
    if cross != expect_cross:
        print(f'DRIFT collision count: provenance {expect_cross}, '
              f'recomputed {cross}')
        bad = 1
    if bad:
        return 1
    print(f'OK  provenance: {len(batteries)} batteries, {total} cases, '
          f'{cross} bare ids shared across batteries (recorded {expect_cross}), '
          f'all {len(cases)} assembled ids unique')
    return 0


if __name__ == '__main__':
    sys.exit(main())
