#!/usr/bin/env python3
"""R3.12 oracle runs against the WSL scratch copy of this
worktree's reference (/tmp/r312/ref-php, md5-verified against the
worktree). Both PHP state drivers take the rule list as argv[1]
and the case JSONL on stdin:

  run_oracle.py restricted <cases.jsonl> <out.jsonl>
  run_oracle.py prefix <cases.jsonl> <out.jsonl>

restricted: state-restricted.php over the forty-two mirrored
rules through Interwiki. prefix: prefix-source.php over Include
plus the forty-two plus the sixteen still-unmirrored rules the
full order interposes before the family (the R3.11 prefix list)
and the four family rules at the end, fifty-eight rules in all,
under the full configuration and page map.
"""
import subprocess
import sys

WSL_SSH = "/home/hatch/workspace/native-stack/bin/wsl-ssh.sh"
REMOTE_DIR = "/tmp/r312"

RULES_RESTRICTED = (
    "Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,"
    "Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,"
    "Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,"
    "Bibliography,Bibcite,Blockquote,Heading,Toc,Span,Size,Div,"
    "Collapsible,Tabview,List,Deflist,Table,Tableadv,Image,Newline,"
    "Paragraph,Url,Email,Mathinline,Interwiki"
)
RULES_PREFIX = (
    "Include,Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,"
    "Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
    "Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,"
    "Bibitem,Bibliography,Bibcite,Divprefilter,Anchor,User,"
    "Blockquote,Heading,Toc,Horiz,Separator,Clearfloat,Break,Span,"
    "Size,Div,Divalign,Collapsible,Tabview,Note,Gallery,List,"
    "Deflist,Table,Tableadv,Button,Image,Embed,Social,File,Center,"
    "Newline,Paragraph,Url,Email,Mathinline,Interwiki"
)


def run(mode, cases_path, out_path):
    if mode == "restricted":
        rules, driver = RULES_RESTRICTED, "state-restricted.php"
    elif mode == "prefix":
        rules, driver = RULES_PREFIX, "prefix-source.php"
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
