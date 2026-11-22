#!/usr/bin/env python3
"""R4.8 exclusion audit: every EXCLUDED case must name its cause.

A cause is one of
  * a rule absent from the driver's --list-rules list (an unmirrored rule),
  * `Text_Highlighter:<type>` (the R4.7 named external boundary),
  * one of the four R4.8 serving-layer dispositions, or
  * a missing token key (recorded in missingKeys, with no rule name).

Any other name, or a missing explanation, is a DRIFT. The tally of names
is written to the requested output file for the report's exclusion table.
"""
import json
import sys
from collections import Counter

DISPOSITIONS = {
    'User:DB_OzoneUserPeer',
    'Image:FlickrHandler',
    'Gallery:FlickrHandler',
    'Freelink:textFromTitle',
}
STANDING = {'BatchTokenIdCounter'}  # PHP batch token-id counter class


def main():
    detail_path = sys.argv[1]
    rules = set(json.loads(sys.argv[2]))
    out_path = sys.argv[3]
    tally = Counter()
    bad = 0
    excluded = 0
    with open(detail_path, encoding='utf-8') as fh:
        for line in fh:
            if not line.strip():
                continue
            rec = json.loads(line)
            if rec.get('verdict') != 'EXCLUDED':
                continue
            excluded += 1
            names = rec.get('unmirrored', [])
            missing = rec.get('missingKeys', [])
            if not names and not missing:
                print(f'DRIFT {rec["id"]}: EXCLUDED with no named cause')
                bad = 1
            for name in names:
                tally[name] += 1
                if name in DISPOSITIONS or name in STANDING:
                    continue
                if name.startswith('Text_Highlighter:'):
                    continue
                if name not in rules:
                    continue  # an unmirrored rule, named by construction
                print(f'DRIFT {rec["id"]}: {name!r} is mirrored but named '
                      'as an exclusion cause')
                bad = 1
    with open(out_path, 'w', encoding='utf-8') as fh:
        fh.write(f'EXCLUDED {excluded}\n')
        for name, n in sorted(tally.items()):
            if name in DISPOSITIONS:
                cause = 'disposition'
            elif name in STANDING:
                cause = 'standing harness counter class'
            elif name.startswith('Text_Highlighter:'):
                cause = 'named boundary'
            elif name not in rules:
                cause = 'unmirrored rule'
            else:
                cause = 'UNEXPLAINED'
            fh.write(f'{name}\t{n}\t{cause}\n')
    if bad:
        return 1
    print(f'OK  exclusion audit: {excluded} EXCLUDED, all causes named; '
          f'{len(tally)} distinct names (see {out_path})')
    return 0


if __name__ == '__main__':
    sys.exit(main())
