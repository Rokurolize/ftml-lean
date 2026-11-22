#!/usr/bin/env python3
"""R3.15 oracle runs against the WSL scratch copy of this
worktree's reference (/tmp/r315/ref-php, md5-verified against
the worktree for the five family rule files, both state
drivers, and Text/Wiki.php before use). All PHP state drivers
take the rule list as argv[1] and the case JSONL on stdin:

  run_oracle.py restricted <cases.jsonl> <out.jsonl>
  run_oracle.py prefix <cases.jsonl> <out.jsonl>
  run_oracle.py full <cases.jsonl> <out.jsonl>

restricted: state-restricted.php over the fifty-seven mirrored
rules through R3.15 (the R3.14 fifty-two plus Horiz, Separator,
Clearfloat, Break slotted between Toc and Span, and Center
slotted between Image and Newline, in full-pipeline order).
prefix: prefix-source.php over the FULL pipeline (all
sixty-eight active rules, R3.14's fixture-validated list
verbatim). full: state-restricted.php over the same
sixty-eight rules -- the stage's fixture generation route
(the tags-honoring, wire-encoded, fatal-safe full-pipeline
construction; the batch.php subset-construction precedent),
cross-validated against the prefix run by consistency
Check A.
"""
import subprocess
import sys

WSL_SSH = "/home/hatch/workspace/native-stack/bin/wsl-ssh.sh"
REMOTE_DIR = "/tmp/r315"

RULES_RESTRICTED = (
    "Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,"
    "Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,"
    "Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,"
    "Bibliography,Bibcite,Blockquote,Heading,Toc,Horiz,Separator,"
    "Clearfloat,Break,Span,Size,Div,Collapsible,Tabview,List,Deflist,"
    "Table,Tableadv,Image,Center,Newline,Paragraph,Url,Email,"
    "Mathinline,Interwiki,Colortext,Strong,Emphasis,Underline,"
    "Strikethrough,Tt,Superscript,Subscript,Typography,Tighten"
)
RULES_PREFIX = (
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


def run(mode, cases_path, out_path):
    if mode == "restricted":
        rules, driver = RULES_RESTRICTED, "state-restricted.php"
    elif mode == "prefix":
        rules, driver = RULES_PREFIX, "prefix-source.php"
    elif mode == "full":
        rules, driver = RULES_PREFIX, "state-restricted.php"
    else:
        raise SystemExit(f"unknown mode {mode}")
    with open(cases_path, "rb") as fh:
        blob = fh.read()
    p = subprocess.run(
        [WSL_SSH, f"cd {REMOTE_DIR}/ref-php && php harness/{driver} {rules}"],
        input=blob, capture_output=True)
    with open(out_path, "wb") as fh:
        fh.write(p.stdout)
    err_path = out_path.replace(".jsonl", ".err")
    with open(err_path, "wb") as fh:
        fh.write(p.stderr)
    print(out_path, "rc:", p.returncode, "bytes:", len(p.stdout),
          "stderr bytes:", len(p.stderr))
    return p.returncode


if __name__ == "__main__":
    if len(sys.argv) != 4:
        raise SystemExit(__doc__)
    sys.exit(run(sys.argv[1], sys.argv[2], sys.argv[3]))
