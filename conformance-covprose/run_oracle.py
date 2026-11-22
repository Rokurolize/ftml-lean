#!/usr/bin/env python3
"""CAPSTONE oracle runs against this worktree's reference
(ref-php/), run in place under the local PHP 8.5.4 (the R3.17
route copied the tree to a WSL scratch and ran it there over
ssh; this mission's host has PHP 8.5.4 itself, so the drivers
run directly on the worktree files and no scratch copy or md5
cross-check is needed). All PHP state drivers take the rule list
as argv[1] and the case JSONL on stdin:

  run_oracle.py full <cases.jsonl> <out.jsonl>
  run_oracle.py restricted <cases.jsonl> <out.jsonl>
  run_oracle.py prefix <cases.jsonl> <out.jsonl>
  run_oracle.py expand <cases.jsonl> <out.jsonl>
  run_oracle.py rules <Rule,list> <cases.jsonl> <out.jsonl>

full: state-restricted.php over all sixty-eight active rules of
Text/Wiki.php, Include first (the fixture route of R3.17, now the
pipeline the Lean side mirrors in full).
restricted: the R3.17 sixty-seven (the full pipeline minus
Include), kept for the boundary demonstration.
prefix: prefix-source.php over the full pipeline.
expand: batch.php expand mode (Include alone, the expanded source
string only).
rules: state-restricted.php over an explicit rule list.
"""
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
REF = os.path.normpath(os.path.join(HERE, "..", "ref-php"))

RULES_FULL = (
    "Include,Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,"
    "Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
    "Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,"
    "Bibitem,Bibliography,Bibcite,Divprefilter,Anchor,User,"
    "Blockquote,Heading,Toc,Horiz,Separator,Clearfloat,Break,Span,"
    "Size,Div,Divalign,Collapsible,Tabview,Note,Gallery,List,"
    "Deflist,Table,Tableadv,Button,Image,Embed,Social,File,Center,"
    "Newline,Paragraph,Url,Email,Mathinline,Interwiki,Colortext,"
    "Strong,Emphasis,Underline,Strikethrough,Tt,Superscript,"
    "Subscript,Typography,Tighten"
)
RULES_RESTRICTED = RULES_FULL[len("Include,"):]


def run_cmd(argv, cases_path, out_path):
    with open(cases_path, "rb") as fh:
        blob = fh.read()
    p = subprocess.run(argv, input=blob, capture_output=True, cwd=REF)
    with open(out_path, "wb") as fh:
        fh.write(p.stdout)
    err_path = out_path[:-len(".jsonl")] + ".err" \
        if out_path.endswith(".jsonl") else out_path + ".err"
    with open(err_path, "wb") as fh:
        fh.write(p.stderr)
    print(os.path.relpath(out_path), "rc:", p.returncode,
          "bytes:", len(p.stdout), "stderr bytes:", len(p.stderr))
    return p.returncode


def run_rules(rules, driver, cases_path, out_path):
    return run_cmd(["php", f"harness/{driver}", rules], cases_path,
                   out_path)


def run(mode, cases_path, out_path):
    if mode == "full":
        return run_rules(RULES_FULL, "state-restricted.php",
                         cases_path, out_path)
    if mode == "restricted":
        return run_rules(RULES_RESTRICTED, "state-restricted.php",
                         cases_path, out_path)
    if mode == "prefix":
        return run_rules(RULES_FULL, "prefix-source.php",
                         cases_path, out_path)
    if mode == "expand":
        return run_cmd(["php", "harness/batch.php", "expand"],
                       cases_path, out_path)
    raise SystemExit(f"unknown mode {mode}")


if __name__ == "__main__":
    if len(sys.argv) == 4:
        sys.exit(run(sys.argv[1], sys.argv[2], sys.argv[3]))
    elif len(sys.argv) == 5 and sys.argv[1] == "rules":
        sys.exit(run_rules(sys.argv[2], "state-restricted.php",
                           sys.argv[3], sys.argv[4]))
    else:
        raise SystemExit(__doc__)
