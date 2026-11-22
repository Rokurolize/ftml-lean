#!/usr/bin/env python3
"""VERIFY-COMBINED axiom-audit parser.

Reads Main.lean's #print axioms command list and the captured full output of
`lake env lean Main.lean`, then checks: every command reported once (by name,
including names audited more than once), no sorryAx anywhere, and every
reported axiom set a subset of the programme standard
[propext, Classical.choice, Quot.sound]. Exceptions are named.
"""
import re
import sys
from collections import Counter

ROOT = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-verify-combined"
MAIN = ROOT + "/lean-ftml/Main.lean"
CAPTURE = ROOT + "/vc-scratch/vc-main-elaboration.log"
OUT = ROOT + "/vc-scratch/vc-audit-summary.txt"

STANDARD = {"propext", "Classical.choice", "Quot.sound"}
cmd_re = re.compile(r"^\s*#print\s+axioms\s+([A-Za-z0-9_.]+)\s*$")
rep_re = re.compile(r"'?([A-Za-z0-9_.]+)'?\s+depends on axioms: \[([^\]]*)\]")
free_re = re.compile(r"'?([A-Za-z0-9_.]+)'?\s+does not depend on any axioms")

expected = []
for line in open(MAIN, encoding="utf-8"):
    m = cmd_re.match(line)
    if m:
        expected.append(m.group(1))
want = Counter(expected)

text = open(CAPTURE, encoding="utf-8", errors="replace").read()
reported = {}
extra = []
for line in text.splitlines():
    if "axioms" not in line:
        continue
    m = rep_re.search(line)
    if m:
        axioms = [a.strip() for a in m.group(2).split(",") if a.strip()]
        reported.setdefault(m.group(1), []).append((axioms, line.strip()))
        continue
    m = free_re.search(line)
    if m:
        reported.setdefault(m.group(1), []).append(([], line.strip()))
        continue
    if "depends on" in line or "axioms" in line:
        extra.append(("UNPARSED-REPORT", line.strip()))

lines = []
lines.append("audit commands in Main.lean: %d" % len(expected))
lines.append("distinct names in Main.lean: %d" % len(want))
lines.append("reported axiom lines parsed: %d" % sum(len(v) for v in reported.values()))
lines.append("distinct reported names: %d" % len(reported))

missing = [n for n in want if n not in reported]
count_mismatch = [(n, want[n], len(reported.get(n, [])))
                  for n in want if n in reported and len(reported[n]) != want[n]]
extra_names = sorted(set(reported) - set(want))
lines.append("missing reports: %d" % len(missing))
for n in missing:
    lines.append("  MISSING %s" % n)
lines.append("count mismatches: %d" % len(count_mismatch))
for n, w, g in count_mismatch:
    lines.append("  COUNT %s expected=%d got=%d" % (n, w, g))
lines.append("unexpected reported names: %d" % len(extra_names))
for n in extra_names:
    lines.append("  EXTRA %s" % n)
for tag, line in extra:
    lines.append("  %s: %s" % (tag, line))

sorry_lines = [l for l in text.splitlines() if "sorryAx" in l]
lines.append("sorryAx lines: %d" % len(sorry_lines))
for l in sorry_lines[:50]:
    lines.append("  SORRYAX %s" % l.strip())

bad_axiom = []
axiom_free = 0
standard = 0
for n, reps in reported.items():
    for axioms, raw in reps:
        if not axioms:
            axiom_free += 1
        elif set(axioms) <= STANDARD:
            standard += 1
        else:
            bad_axiom.append((n, axioms, raw))
lines.append("axiom-free reports: %d" % axiom_free)
lines.append("standard-subset reports: %d" % standard)
lines.append("nonstandard axiom sets: %d" % len(bad_axiom))
for n, axioms, raw in bad_axiom:
    lines.append("  NONSTANDARD %s %s" % (n, axioms))

ok = (not missing and not count_mismatch and not extra_names and not extra
      and not sorry_lines and not bad_axiom
      and sum(len(v) for v in reported.values()) == len(expected))
lines.append("AUDIT-VERDICT: %s" % ("PASS" if ok else "FAIL"))
blob = "\n".join(lines) + "\n"
open(OUT, "w", encoding="utf-8").write(blob)
print(blob)
sys.exit(0 if ok else 1)
