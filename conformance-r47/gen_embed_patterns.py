#!/usr/bin/env python3
"""Generate lean-ftml/LeanFtml/EmbedPatterns.lean from
embed-patterns.json (the exact pattern strings PHP evaluates when it
loads ref-php/wikidot-root/conf/wikiparser/embed/default.php, dumped
on WSL by dump_patterns.php).

Each pattern string is emitted as a Lean string literal (escaping
backslash and double quote; the generator asserts every byte is
printable ASCII so no other escape can occur). The table preserves
the PHP array's order, which is the order Text_Wiki_Render_Xhtml_Embed
tries the patterns in.
"""

import json
import os

HERE = os.path.dirname(os.path.abspath(__file__))
WORKTREE = os.path.dirname(HERE)
SRC = os.path.join(HERE, "embed-patterns.json")
DST = os.path.join(WORKTREE, "lean-ftml", "LeanFtml", "EmbedPatterns.lean")


def lean_str(s):
    out = []
    for ch in s:
        o = ord(ch)
        assert 32 <= o <= 126, f"non-printable byte {o} in pattern"
        if ch == "\\":
            out.append("\\\\")
        elif ch == '"':
            out.append('\\"')
        else:
            out.append(ch)
    return '"' + "".join(out) + '"'


def main():
    pats = json.load(open(SRC, encoding="utf-8"))
    lines = []
    lines.append("/-")
    lines.append("  LeanFtml.EmbedPatterns — the Embed render rule's")
    lines.append("  allowlist, transcribed byte-for-byte from the")
    lines.append("  reference's configuration.")
    lines.append("")
    lines.append("  The reference renderer (`Text_Wiki_Render_Xhtml_Embed`)")
    lines.append("  loads every file in `WIKIDOT_ROOT/conf/wikiparser/embed/`")
    lines.append("  at construction; the tree carries exactly one such file,")
    lines.append(f"  `default.php`, whose `$patterns` array ({len(pats)} entries, in")
    lines.append("  the order below) becomes the renderer's pattern list.")
    lines.append("  These strings are the values PHP itself evaluates for")
    lines.append("  that array (dumped from the interpreter, not retyped),")
    lines.append("  including the entries the file builds by string")
    lines.append("  concatenation (`googlevideo`, `odeo1`, `jskit.rating`,")
    lines.append("  `jskit.top`). The PCRE-subset parser and matcher in")
    lines.append("  `LeanFtml/Pcre.lean` interprets them.")
    lines.append("-/")
    lines.append("")
    lines.append("namespace LeanFtml")
    lines.append("")
    lines.append("/-- The embed allowlist as (service name, PCRE pattern")
    lines.append("    string) pairs, in configuration order. -/")
    lines.append("def embedPatternStrings : List (String × String) := [")
    for i, p in enumerate(pats):
        comma = "," if i < len(pats) - 1 else ""
        lines.append(f"  ({lean_str(p['name'])}, {lean_str(p['pattern'])}){comma}")
    lines.append("]")
    lines.append("")
    lines.append("end LeanFtml")
    lines.append("")
    with open(DST, "w", encoding="utf-8") as f:
        f.write("\n".join(lines))
    print(f"wrote {DST}: {len(pats)} patterns")


if __name__ == "__main__":
    main()
