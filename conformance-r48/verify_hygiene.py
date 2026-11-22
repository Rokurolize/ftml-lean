#!/usr/bin/env python3
"""R4.8 hygiene gate: no `sorry` token in any Lean source.

Comments (line and nested block) and string literals are stripped by a
small lexer before the search, so prose such as Main.lean's header note
"there is no `sorry` anywhere in the project" is not a false positive.
`sorryAx` is a different identifier and is audited through the Main
`#print axioms` output instead.
"""
import os
import re
import sys

SORRY = re.compile(r'(?<![A-Za-z0-9_])sorry(?![A-Za-z0-9_])')


def code_only(text):
    out = []
    i = 0
    n = len(text)
    depth = 0
    while i < n:
        c = text[i]
        nxt = text[i + 1] if i + 1 < n else ''
        if depth:
            if c == '/' and nxt == '-':
                depth += 1
                i += 2
                continue
            if c == '-' and nxt == '/':
                depth -= 1
                i += 2
                continue
            i += 1
            continue
        if c == '-' and nxt == '-':
            i += 2
            while i < n and text[i] != '\n':
                i += 1
            continue
        if c == '/' and nxt == '-':
            depth = 1
            i += 2
            continue
        if c == '"':
            i += 1
            while i < n:
                if text[i] == '\\':
                    i += 2
                    continue
                if text[i] == '"':
                    i += 1
                    break
                i += 1
            out.append(' ')
            continue
        out.append(c)
        i += 1
    return ''.join(out)


def main():
    root = sys.argv[1]
    paths = []
    for dirpath, _, files in os.walk(root):
        # only the checked-in Lean sources, never build products
        if '.lake' in dirpath.split(os.sep):
            continue
        for f in files:
            if f.endswith('.lean'):
                paths.append(os.path.join(dirpath, f))
    bad = []
    for path in sorted(paths):
        with open(path, encoding='utf-8') as fh:
            text = fh.read()
        if SORRY.search(code_only(text)):
            bad.append(os.path.relpath(path, root))
    if bad:
        for p in bad:
            print(f'DRIFT sorry in {p}')
        return 1
    print(f'OK  no sorry token in {len(paths)} Lean source files '
          '(comments and strings excluded)')
    return 0


if __name__ == '__main__':
    sys.exit(main())
