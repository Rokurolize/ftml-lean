#!/usr/bin/env python3
"""Re-run the R3.10 gates after the Tableadv mirror repair, locally.

The original stage scripts fetch PHP oracles over WSL from a canonical
worktree that is absent here. This runner uses the same drivers and
comparators with the local PHP 8.5.4 harness over this tree's ref-php
for the stage corpus, the pre-seeded prefix/fixture records for the
consistency check, and the stored R3.10 PHP outputs for the fuzz and
regression slices. Outputs are written as fix-* files beside this
script so the stage's original records stay intact.
"""

import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
BIN = os.path.join(ROOT, "lean-ftml", ".lake", "build", "bin")
PHP_HARNESS = os.path.join(ROOT, "ref-php", "harness", "state-restricted.php")
RESTRICTED = ("Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,"
              "Module,Module654,Iftags,Comment,Iframe,Date,Math,"
              "Concatlines,Freelink,Equationreference,Footnote,"
              "Footnoteitem,Footnoteblock,Bibitem,Bibliography,"
              "Bibcite,Blockquote,Heading,Toc,Span,Size,Div,"
              "Collapsible,Tabview,List,Deflist,Table,Tableadv")
PREFIX = ("Include,Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Divprefilter,Anchor,User,Blockquote,Heading,Toc,Horiz,Separator,Clearfloat,Break,Span,Size,Div,Divalign,Collapsible,Tabview,Note,Gallery,List,Deflist,Table,Tableadv")
RULESETS = {
    "R31": "Prefilter,Delimiter,Code",
    "R32": "Prefilter,Delimiter,Code,Form,Raw,Rawold",
    "R33": "Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654",
    "R34": "Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math",
    "R35": "Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference",
    "R36": "Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite",
    "R37": "Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,Heading,Toc",
    "R38": "Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,Heading,Toc,Span,Size,Div,Collapsible,Tabview",
    "R39": "Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,Heading,Toc,Span,Size,Div,Collapsible,Tabview,List,Deflist",
}
# slice name, case file relative to ROOT, ruleset, driver, stored PHP record
REGRESSIONS = [
    ("reg31-code", "conformance-r33/code-cases.jsonl", "R31", "r31", "reg31-code-php.jsonl"),
    ("reg31-smoke", "conformance-r310/smoke-cases.jsonl", "R31", "r31", "reg31-smoke-php.jsonl"),
    ("reg31-fuzz", "conformance-r3/fuzz-cases.jsonl", "R31", "r31", "reg31-fuzz-php.jsonl"),
    ("reg31-fuzz-s7", "conformance-r3/fuzz-cases-s7.jsonl", "R31", "r31", "reg31-fuzz-s7-php.jsonl"),
    ("reg32-formraw", "conformance-r33/formraw-cases.jsonl", "R32", "r32", "reg32-formraw-php.jsonl"),
    ("reg32-fuzz", "conformance-r34/reg32-fuzz-cases.jsonl", "R32", "r32", "reg32-fuzz-php.jsonl"),
    ("reg32-fuzz-s7", "conformance-r34/reg32-fuzz-cases-s7.jsonl", "R32", "r32", "reg32-fuzz-s7-php.jsonl"),
    ("reg33-module", "conformance-r33/module-all-cases.jsonl", "R33", "r33", "reg33-module-php.jsonl"),
    ("reg33-fuzz", "conformance-r33/fuzz-cases.jsonl", "R33", "r33", "reg33-fuzz-php.jsonl"),
    ("reg33-fuzz-s7", "conformance-r33/fuzz-cases-s7.jsonl", "R33", "r33", "reg33-fuzz-s7-php.jsonl"),
    ("reg34-next", "conformance-r34/next-all-cases.jsonl", "R34", "r34", "reg34-next-php.jsonl"),
    ("reg34-fuzz", "conformance-r34/fuzz-cases.jsonl", "R34", "r34", "reg34-fuzz-php.jsonl"),
    ("reg34-fuzz-s7", "conformance-r34/fuzz-cases-s7.jsonl", "R34", "r34", "reg34-fuzz-s7-php.jsonl"),
    ("reg35-link", "conformance-r35/link-all-cases.jsonl", "R35", "r35", "reg35-link-php.jsonl"),
    ("reg35-fuzz", "conformance-r35/fuzz-cases.jsonl", "R35", "r35", "reg35-fuzz-php.jsonl"),
    ("reg35-fuzz-s7", "conformance-r35/fuzz-cases-s7.jsonl", "R35", "r35", "reg35-fuzz-s7-php.jsonl"),
    ("reg36-notes", "conformance-r36/notes-all-cases.jsonl", "R36", "r36", "reg36-notes-php.jsonl"),
    ("reg36-fuzz", "conformance-r36/fuzz-cases.jsonl", "R36", "r36", "reg36-fuzz-php.jsonl"),
    ("reg36-fuzz-s7", "conformance-r36/fuzz-cases-s7.jsonl", "R36", "r36", "reg36-fuzz-s7-php.jsonl"),
    ("reg37-block", "conformance-r37/block-all-cases.jsonl", "R37", "r37", "reg37-block-php.jsonl"),
    ("reg37-fuzz", "conformance-r37/fuzz-cases.jsonl", "R37", "r37", "reg37-fuzz-php.jsonl"),
    ("reg37-fuzz-s7", "conformance-r37/fuzz-cases-s7.jsonl", "R37", "r37", "reg37-fuzz-s7-php.jsonl"),
    ("reg38-contain", "conformance-r38/contain-all-cases.jsonl", "R38", "r38", "reg38-contain-php.jsonl"),
    ("reg38-fuzz", "conformance-r38/fuzz-cases.jsonl", "R38", "r38", "reg38-fuzz-php.jsonl"),
    ("reg38-fuzz-s7", "conformance-r38/fuzz-cases-s7.jsonl", "R38", "r38", "reg38-fuzz-s7-php.jsonl"),
    ("reg39-list", "conformance-r39/list-all-cases.jsonl", "R39", "r39", "reg39-list-php.jsonl"),
    ("reg39-fuzz", "conformance-r39/fuzz-cases.jsonl", "R39", "r39", "reg39-fuzz-php.jsonl"),
    ("reg39-fuzz-s7", "conformance-r39/fuzz-cases-s7.jsonl", "R39", "r39", "reg39-fuzz-s7-php.jsonl"),
]


def run_lean(exe, cases_path, out_path):
    with open(cases_path, "rb") as f:
        blob = f.read()
    p = subprocess.run([os.path.join(BIN, "lean-ftml-conformance-" + exe)],
                       input=blob, capture_output=True)
    with open(out_path, "wb") as f:
        f.write(p.stdout)
    with open(out_path + ".err", "wb") as f:
        f.write(p.stderr)
    return p.returncode


def run_php(cases_path, rules, out_path):
    with open(cases_path, "rb") as f:
        blob = f.read()
    p = subprocess.run(["php", PHP_HARNESS, rules], input=blob,
                       capture_output=True)
    with open(out_path, "wb") as f:
        f.write(p.stdout)
    with open(out_path + ".err", "wb") as f:
        f.write(p.stderr)
    return p.returncode


def run_php_prefix(cases_path, out_path):
    with open(cases_path, "rb") as f:
        blob = f.read()
    p = subprocess.run(["php", os.path.join(ROOT, "ref-php", "harness",
                                            "prefix-source.php"), PREFIX],
                       input=blob, capture_output=True)
    with open(out_path, "wb") as f:
        f.write(p.stdout)
    with open(out_path + ".err", "wb") as f:
        f.write(p.stderr)
    return p.returncode


def run_legacy(exe, cases_path, out_path):
    with open(cases_path, "rb") as f:
        blob = f.read()
    p = subprocess.run([os.path.join(BIN, "lean-ftml-conformance-r310-legacy")],
                       input=blob, capture_output=True)
    with open(out_path, "wb") as f:
        f.write(p.stdout)
    with open(out_path + ".err", "wb") as f:
        f.write(p.stderr)
    return p.returncode


def compare(expected, got, out_path):
    p = subprocess.run([sys.executable, os.path.join(HERE, "compare.py"),
                        expected, got], capture_output=True, text=True)
    with open(out_path, "w") as f:
        f.write(p.stdout)
    lines = [ln for ln in p.stdout.splitlines() if ln.strip()]
    return p.returncode, " | ".join(lines[-2:])


def main():
    results = []
    rc = 0
    stage_cases = os.path.join(HERE, "table-all-cases.jsonl")
    stage_php = os.path.join(HERE, "fix-table-php.jsonl")
    stage_lean = os.path.join(HERE, "fix-table-lean.jsonl")
    r = run_php(stage_cases, RESTRICTED, stage_php)
    if r:
        print("stage PHP failed", r)
        return 2
    r = run_lean("r310", stage_cases, stage_lean)
    if r:
        print("stage Lean failed", r)
        return 2
    c, tail = compare(stage_php, stage_lean,
                      os.path.join(HERE, "fix-table-comparison.txt"))
    results.append(("stage-corpus-185", tail))
    rc |= c
    fixture = [os.path.join(HERE, f) for f in
               ("expected-table-states.jsonl", "expected-tableadv-states.jsonl",
                "expected-x-states.jsonl", "expected-x2-states.jsonl")]
    prefix = os.path.join(HERE, "fix-prefix-table-states.jsonl")
    r = run_php_prefix(stage_cases, prefix)
    if r:
        print("prefix PHP failed", r)
        return 2
    chk = subprocess.run([sys.executable,
                          os.path.join(HERE, "consistency_check_r310.py"),
                          stage_cases, stage_php, prefix] + fixture,
                         capture_output=True, text=True, cwd=HERE)
    with open(os.path.join(HERE, "fix-consistency.txt"), "w") as f:
        f.write(chk.stdout + chk.stderr)
    lines = [ln for ln in chk.stdout.splitlines() if ln.strip()]
    results.append(("consistency", " | ".join(lines[-3:])))
    rc |= chk.returncode
    for suffix in ("", "-s7"):
        cases = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
        lean = os.path.join(HERE, f"fix-fuzz{suffix}-lean.jsonl")
        fuzz_php = os.path.join(HERE, f"fix-fuzz{suffix}-php.jsonl")
        r = run_php(cases, RESTRICTED, fuzz_php)
        if r:
            print("fuzz PHP failed", suffix, r)
            return 2
        r = run_lean("r310", cases, lean)
        if r:
            print("fuzz Lean failed", suffix, r)
            return 2
        c, tail = compare(fuzz_php, lean,
                          os.path.join(HERE, f"fix-fuzz{suffix}-comparison.txt"))
        results.append(("fuzz" + suffix, tail))
        rc |= c
    for name, cases_rel, ruleset, exe, php_name in REGRESSIONS:
        cases = os.path.join(ROOT, cases_rel)
        lean = os.path.join(HERE, "fix-" + name + "-lean.jsonl")
        r = run_lean(exe, cases, lean)
        if r:
            results.append((name, "LEAN DRIVER FAILED"))
            rc |= 2
            continue
        slice_php = os.path.join(HERE, "fix-" + name + "-php.jsonl")
        r = run_php(cases, RULESETS[ruleset], slice_php)
        if r:
            results.append((name, "LOCAL PHP DRIVER FAILED"))
            rc |= 2
            continue
        c, tail = compare(slice_php, lean,
                          os.path.join(HERE, "fix-" + name + "-comparison.txt"))
        results.append((name, tail))
        rc |= c
    # Isolate the repair: compare the repaired and pre-repair R3.10
    # drivers case by case on every corpus that includes Tableadv.
    repair_corpora = [("stage-corpus-185", stage_cases, stage_lean)]
    repair_corpora += [
        ("repair-fuzz" + suffix,
         os.path.join(HERE, f"fuzz-cases{suffix}.jsonl"),
         os.path.join(HERE, f"fix-fuzz{suffix}-lean.jsonl"))
        for suffix in ("", "-s7")]
    repair_corpora.append(("repair-witness-family",
                           os.path.join(HERE, "witness-family-cases.jsonl"),
                           os.path.join(HERE, "witness-family-lean.jsonl")))
    for name, cases, repaired in repair_corpora:
        legacy = os.path.join(HERE, "fix-" + name + "-legacy.jsonl")
        r = run_legacy("r310", cases, legacy)
        if r:
            results.append((name + "-vs-legacy", "LEGACY DRIVER FAILED"))
            rc |= 2
            continue
        c, tail = compare(repaired, legacy,
                          os.path.join(HERE, "fix-" + name + "-vs-legacy.txt"))
        results.append((name + "-vs-legacy", tail))
        rc |= c
    with open(os.path.join(HERE, "fix-gates-summary.txt"), "w") as f:
        for name, tail in results:
            f.write(f"{name}: {tail}\n")
        f.write(f"overall_rc: {rc}\n")
    for name, tail in results:
        print(f"{name}: {tail}")
    print("overall_rc:", rc)
    return rc


if __name__ == "__main__":
    sys.exit(main())
