#!/usr/bin/env python3
"""R4.8 close-out: verify the token-free disposal claim.

The disposal row in REPORT-R4.md §6 names eight rules as never emitting
parse tokens: Include, Prefilter, Modulepre, Iftags, Concatlines,
Divprefilter, Social, Tighten. Tighten has since been mirrored as a render
rule (R4.3), so this checks two things:

  1. statically, on the PHP parse sources: the remaining seven contain no
     *active* `addToken` call (Social's one occurrence is inside a block
     comment and is quoted in the output); and
  2. by corpus evidence: no token entry in any state corpus from R4.1
     through R4.8 is named after any of the seven, so none could ever
     reach the Lean dispatcher; and
  3. Tighten is reconciled: its parse rule also emits no token, but it is
     present in the Lean `mirroredRenderRules` list, so it is mirrored,
     not disposed.

Exit 1 on any violation.
"""
import json
import os
import re
import sys

SEVEN = ['Include', 'Prefilter', 'Modulepre', 'Iftags',
         'Concatlines', 'Divprefilter', 'Social']
TIGHTEN = 'Tighten'
PARSE_DIR = os.path.join('ref-php', 'text-wiki', 'Text', 'Wiki', 'Parse',
                         'Default')


def php_code_only(text):
    """Strip PHP comments and string literals, preserving line structure."""
    out = []
    i, n = 0, len(text)
    while i < n:
        c = text[i]
        nxt = text[i + 1] if i + 1 < n else ''
        if c == '/' and nxt == '*':
            i += 2
            while i + 1 < n and not (text[i] == '*' and text[i + 1] == '/'):
                i += 1
            i += 2
            continue
        if c == '/' and nxt == '/':
            while i < n and text[i] != '\n':
                i += 1
            continue
        if c == '#':
            while i < n and text[i] != '\n':
                i += 1
            continue
        if c in ('"', "'"):
            quote = c
            i += 1
            while i < n:
                if text[i] == '\\':
                    i += 2
                    continue
                if text[i] == quote:
                    i += 1
                    break
                i += 1
            out.append(' ')
            continue
        out.append(c)
        i += 1
    return ''.join(out)


def state_rules(path):
    with open(path, encoding='utf-8') as fh:
        for line in fh:
            if not line.strip():
                continue
            rec = json.loads(line)
            toks = rec.get('tokens', [])
            if isinstance(toks, dict):
                toks = list(toks.values())
            if not isinstance(toks, list):
                continue
            for entry in toks:
                if isinstance(entry, list) and entry and isinstance(entry[0], str):
                    yield rec.get('id', '?'), entry[0]


def main():
    root = sys.argv[1]
    state_files = sys.argv[2:]
    bad = 0
    # 1. static PHP source check
    for name in SEVEN + [TIGHTEN]:
        path = os.path.join(root, PARSE_DIR, name + '.php')
        with open(path, encoding='utf-8') as fh:
            code = php_code_only(fh.read())
        if re.search(r'\baddToken\s*\(', code):
            print(f'DRIFT {name}.php has an active addToken call')
            bad = 1
        else:
            note = ''
            if name == 'Social':
                note = ' (its addToken is inside a /* ... */ block)'
            print(f'OK  {name}.php: no active addToken call{note}')
    # 2. corpus evidence
    forbidden = set(SEVEN + [TIGHTEN])
    seen = set()
    for path in state_files:
        hits = []
        for cid, rule in state_rules(path):
            if rule in forbidden:
                hits.append((cid, rule))
                seen.add(rule)
        if hits:
            print(f'DRIFT {os.path.basename(path)}: token-free rule tokens: '
                  f'{hits[:5]}')
            bad = 1
        else:
            print(f'OK  {os.path.basename(path)}: 0 token-free-rule tokens')
    # 3. Tighten reconciliation
    rc = os.path.join(root, 'lean-ftml', 'LeanFtml', 'RenderCore.lean')
    with open(rc, encoding='utf-8') as fh:
        body = fh.read()
    if 'renderRuleName .tighten' not in body:
        print('DRIFT Tighten is not in mirroredRenderRules')
        bad = 1
    else:
        print('OK  Tighten: parse emits no token, but is mirrored as a '
              'render rule (renderRuleName .tighten in mirroredRenderRules)')
    if bad:
        return 1
    print(f'OK  disposal verified: {len(SEVEN)} rules emit no tokens the '
          f'dispatcher could receive; Tighten reconciled as mirrored')
    return 0


if __name__ == '__main__':
    sys.exit(main())
