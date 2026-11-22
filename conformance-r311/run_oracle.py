#!/usr/bin/env python3
"""R3.11 oracle runs: the thirty-eight-rule restricted pipeline
and the fifty-four-rule full-pipeline prefix through Paragraph,
over the stage corpus, against the WSL scratch copy of this
worktree's reference (/tmp/r311/ref-php). Writes
restricted-para-states.jsonl and prefix-para-states.jsonl (plus
.err sidecars) beside itself."""

import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
WSL_SSH = os.path.expanduser("~/workspace/native-stack/bin/wsl-ssh.sh")

RESTRICTED = ("Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,"
              "Module,Module654,Iftags,Comment,Iframe,Date,Math,"
              "Concatlines,Freelink,Equationreference,Footnote,"
              "Footnoteitem,Footnoteblock,Bibitem,Bibliography,"
              "Bibcite,Blockquote,Heading,Toc,Span,Size,Div,"
              "Collapsible,Tabview,List,Deflist,Table,Tableadv,"
              "Image,Newline,Paragraph")
PREFIX = ("Include,Prefilter,Delimiter,Code,Form,Raw,Rawold,"
          "Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,"
          "Math,Concatlines,Freelink,Equationreference,Footnote,"
          "Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,"
          "Divprefilter,Anchor,User,Blockquote,Heading,Toc,Horiz,"
          "Separator,Clearfloat,Break,Span,Size,Div,Divalign,"
          "Collapsible,Tabview,Note,Gallery,List,Deflist,Table,"
          "Tableadv,Button,Image,Embed,Social,File,Center,"
          "Newline,Paragraph")


def run(script, rules, blob, out_name):
    p = subprocess.run(
        [WSL_SSH, f"cd /tmp/r311/ref-php && php harness/{script} {rules}"],
        input=blob, capture_output=True)
    open(os.path.join(HERE, out_name), "wb").write(p.stdout)
    open(os.path.join(HERE, out_name.replace(".jsonl", ".err")),
         "wb").write(p.stderr)
    print(out_name, "rc:", p.returncode,
          "bytes:", len(p.stdout), "stderr bytes:", len(p.stderr))
    return p.returncode


def main():
    blob = open(os.path.join(HERE, "para-all-cases.jsonl"), "rb").read()
    rc = run("state-restricted.php", RESTRICTED, blob,
             "restricted-para-states.jsonl")
    rc |= run("prefix-source.php", PREFIX, blob,
              "prefix-para-states.jsonl")
    return rc


if __name__ == "__main__":
    sys.exit(main())
