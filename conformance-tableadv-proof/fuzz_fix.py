#!/usr/bin/env python3
"""F-TABLEADV-1 fuzz pass over the lane's grammar languages F and R.

Every string of the 185,662-string union in grammar.py is fed to the
built lean-ftml-tableadv-fix driver (hex per line) and to the local
PHP 8.5.4 Tableadv rule (length-prefixed binary). The script counts
mirror-vs-enumeration state diffs, mirror-vs-PHP output-byte diffs,
and token-table diffs, times both processes, and writes a summary to
fuzz-fix-comparison.txt plus the diff detail (if any) to
fuzz-fix-diffs.txt. The exit code is zero iff both diff counts are
zero and both processes exited zero.
"""

import os
import subprocess
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)
from grammar import counts, grammar

BIN = os.path.join(ROOT, "lean-ftml", ".lake", "build", "bin", "lean-ftml-tableadv-fix")
PHP = os.path.join(HERE, "php_tableadv.php")
SUMMARY = os.path.join(HERE, "fuzz-fix-comparison.txt")
DIFFS = os.path.join(HERE, "fuzz-fix-diffs.txt")


def main():
    c = counts()
    strings = list(grammar())
    assert len(strings) == c["union"], (len(strings), c)
    hex_input = "".join("X" + s.encode().hex() + "\n" for s in strings).encode()
    bin_input = b"".join(f"{len(s.encode())}\n".encode() + s.encode()
                         for s in strings)
    t0 = time.monotonic()
    lean = subprocess.run([BIN], input=hex_input, capture_output=True)
    t_lean = time.monotonic() - t0
    if lean.returncode != 0:
        print("Lean driver failed:", lean.stderr.decode(errors="replace")[:500])
        return 2
    t0 = time.monotonic()
    php = subprocess.run(["php", PHP], input=bin_input, capture_output=True)
    t_php = time.monotonic() - t0
    if php.returncode != 0:
        print("PHP driver failed:", php.stderr.decode(errors="replace")[:500])
        return 2
    lean_lines = lean.stdout.decode().splitlines()
    php_lines = php.stdout.decode().splitlines()
    assert len(lean_lines) == len(strings), (len(lean_lines), len(strings))
    assert len(php_lines) == len(strings), (len(php_lines), len(strings))
    state_diffs = 0
    php_diffs = 0
    token_diffs = 0
    detail = []
    for i, (src, ll, pl) in enumerate(zip(strings, lean_lines, php_lines)):
        fields = ll.split()
        status = fields[0]
        mirror_hex = fields[1] if len(fields) > 1 else ""
        php_hex = pl.split("\t")[0]
        if status != "OK":
            state_diffs += 1
        if len(fields) > 4:
            token_diffs += 1
        if mirror_hex != php_hex:
            php_diffs += 1
            if len(detail) < 40:
                detail.append(f"PHP-DIFF id={i} source_hex={src.encode().hex()} "
                              f"mirror={mirror_hex} php={php_hex}")
        if status != "OK" and len(detail) < 40:
            detail.append(f"ENUM-DIFF id={i} source_hex={src.encode().hex()} {ll}")
    summary = (
        f"grammar counts: {c}\n"
        f"strings compared: {len(strings)}\n"
        f"mirror vs enumeration parse-state diffs: {state_diffs}\n"
        f"mirror vs enumeration token-table diffs: {token_diffs}\n"
        f"mirror vs PHP 8.5.4 output-byte diffs: {php_diffs}\n"
        f"lean driver seconds: {t_lean:.3f}\n"
        f"php driver seconds: {t_php:.3f}\n"
        f"lean driver exit: {lean.returncode}; php driver exit: {php.returncode}\n"
        f"lean stderr bytes: {len(lean.stderr)}; php stderr bytes: {len(php.stderr)}\n"
    )
    with open(SUMMARY, "w") as f:
        f.write(summary)
    with open(DIFFS, "w") as f:
        f.write("\n".join(detail) + ("\n" if detail else ""))
    print(summary, end="")
    return 0 if state_diffs == 0 and php_diffs == 0 and token_diffs == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
