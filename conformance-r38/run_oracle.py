#!/usr/bin/env python3
"""R3.8 oracle runs: the thirty-one-rule restricted pipeline and
the forty-rule full-pipeline prefix through Tabview, over the
stage corpus, against the WSL scratch copy of this worktree's
reference (/tmp/r38/ref-php). Writes restricted-contain-states
.jsonl and prefix-contain-states.jsonl (plus .err sidecars)
beside itself."""

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
              "Collapsible,Tabview")
PREFIX = ("Include,Prefilter,Delimiter,Code,Form,Raw,Rawold,"
          "Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,"
          "Math,Concatlines,Freelink,Equationreference,Footnote,"
          "Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,"
          "Divprefilter,Anchor,User,Blockquote,Heading,Toc,Horiz,"
          "Separator,Clearfloat,Break,Span,Size,Div,Divalign,"
          "Collapsible,Tabview")


def run(script, rules, blob, out_name):
    p = subprocess.run(
        [WSL_SSH, f"cd /tmp/r38/ref-php && php harness/{script} {rules}"],
        input=blob, capture_output=True)
    open(os.path.join(HERE, out_name), "wb").write(p.stdout)
    open(os.path.join(HERE, out_name.replace(".jsonl", ".err")),
         "wb").write(p.stderr)
    print(out_name, "rc:", p.returncode,
          "bytes:", len(p.stdout), "stderr bytes:", len(p.stderr))
    return p.returncode


def main():
    blob = open(os.path.join(HERE, "contain-all-cases.jsonl"), "rb").read()
    rc = run("state-restricted.php", RESTRICTED, blob,
             "restricted-contain-states.jsonl")
    rc |= run("prefix-source.php", PREFIX, blob,
              "prefix-contain-states.jsonl")
    return rc


if __name__ == "__main__":
    sys.exit(main())
