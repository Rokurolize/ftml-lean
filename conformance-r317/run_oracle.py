#!/usr/bin/env python3
"""R3.17 oracle runs against the WSL scratch copy of this
worktree's reference (/tmp/r317/ref-php, md5-verified against
the worktree for the six family rule files, Paragraph.php,
both state drivers, and Text/Wiki.php before use). All PHP
state drivers take the rule list as argv[1] and the case
JSONL on stdin:

  run_oracle.py restricted <cases.jsonl> <out.jsonl>
  run_oracle.py prefix <cases.jsonl> <out.jsonl>
  run_oracle.py full <cases.jsonl> <out.jsonl>
  run_oracle.py rules <Rule,list> <cases.jsonl> <out.jsonl>

restricted: state-restricted.php over the sixty-seven
mirrored rules through R3.17 (the full pipeline minus
Include, which stands on its Tier 1 proof as the recorded
boundary): the R3.16 sixty-one plus Anchor and User slotted
between Divprefilter and Blockquote, and Button, Embed,
Social, File slotted between Tableadv and Center (Button
before Image; Embed, Social, File after Image), in
full-pipeline order.
prefix: prefix-source.php over the FULL pipeline (all
sixty-eight active rules, verbatim from Text/Wiki.php).
full: state-restricted.php over the same sixty-eight rules --
the stage's fixture generation route (the tags-honoring,
wire-encoded, fatal-safe full-pipeline construction; the
batch.php subset-construction precedent), cross-validated
against the prefix run by consistency Check A.
rules: state-restricted.php over an explicit rule list (the
corpus-selection differentials and the pre-mirroring oracle
probes).
"""
import subprocess
import sys

WSL_SSH = "/home/hatch/workspace/native-stack/bin/wsl-ssh.sh"
REMOTE_DIR = "/tmp/r317"

RULES_RESTRICTED = (
    "Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,"
    "Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,"
    "Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,"
    "Bibliography,Bibcite,Divprefilter,Anchor,User,Blockquote,"
    "Heading,Toc,Horiz,Separator,Clearfloat,Break,Span,Size,Div,"
    "Divalign,Collapsible,Tabview,Note,Gallery,List,Deflist,Table,"
    "Tableadv,Button,Image,Embed,Social,File,Center,Newline,"
    "Paragraph,Url,Email,Mathinline,Interwiki,Colortext,Strong,"
    "Emphasis,Underline,Strikethrough,Tt,Superscript,Subscript,"
    "Typography,Tighten"
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
# The full pipeline minus Social (the consistency firing
# differential's full side).
RULES_FULL_NOSOCIAL = (
    "Include,Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,"
    "Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
    "Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,"
    "Bibitem,Bibliography,Bibcite,Divprefilter,Anchor,User,"
    "Blockquote,Heading,Toc,Horiz,Separator,Clearfloat,Break,Span,"
    "Size,Div,Divalign,Collapsible,Tabview,Note,Gallery,List,"
    "Deflist,Table,Tableadv,Button,Image,Embed,File,Center,"
    "Newline,Paragraph,Url,Email,Mathinline,Interwiki,Colortext,"
    "Strong,Emphasis,Underline,Strikethrough,Tt,Superscript,"
    "Subscript,Typography,Tighten"
)
# The R3.17 restricted pipeline minus Social: the restricted
# side of the firing differential (Check B-so).
RULES_RESTRICTED_NOSOCIAL = (
    "Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,"
    "Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,"
    "Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,"
    "Bibliography,Bibcite,Divprefilter,Anchor,User,Blockquote,"
    "Heading,Toc,Horiz,Separator,Clearfloat,Break,Span,Size,Div,"
    "Divalign,Collapsible,Tabview,Note,Gallery,List,Deflist,Table,"
    "Tableadv,Button,Image,Embed,File,Center,Newline,"
    "Paragraph,Url,Email,Mathinline,Interwiki,Colortext,Strong,"
    "Emphasis,Underline,Strikethrough,Tt,Superscript,"
    "Subscript,Typography,Tighten"
)
# The full-pipeline prefix ending at Social, with and without
# the rule itself (the corpus-selection differential for
# Social: it claims no tokens -- its process() returns a
# \xFE-delimited module string spliced into the source -- so
# its footprint is measured at its own pipeline position, the
# R3.16 Divprefilter instrument).
RULES_UPTO_SOCIAL = (
    "Include,Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,"
    "Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
    "Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,"
    "Bibitem,Bibliography,Bibcite,Divprefilter,Anchor,User,"
    "Blockquote,Heading,Toc,Horiz,Separator,Clearfloat,Break,Span,"
    "Size,Div,Divalign,Collapsible,Tabview,Note,Gallery,List,"
    "Deflist,Table,Tableadv,Button,Image,Embed,Social"
)
RULES_UPTO_NOSOCIAL = (
    "Include,Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,"
    "Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
    "Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,"
    "Bibitem,Bibliography,Bibcite,Divprefilter,Anchor,User,"
    "Blockquote,Heading,Toc,Horiz,Separator,Clearfloat,Break,Span,"
    "Size,Div,Divalign,Collapsible,Tabview,Note,Gallery,List,"
    "Deflist,Table,Tableadv,Button,Image,Embed"
)


def run_rules(rules, driver, cases_path, out_path):
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


def run(mode, cases_path, out_path):
    if mode == "restricted":
        rules, driver = RULES_RESTRICTED, "state-restricted.php"
    elif mode == "prefix":
        rules, driver = RULES_PREFIX, "prefix-source.php"
    elif mode == "full":
        rules, driver = RULES_PREFIX, "state-restricted.php"
    else:
        raise SystemExit(f"unknown mode {mode}")
    return run_rules(rules, driver, cases_path, out_path)


if __name__ == "__main__":
    if len(sys.argv) == 4:
        sys.exit(run(sys.argv[1], sys.argv[2], sys.argv[3]))
    elif len(sys.argv) == 5 and sys.argv[1] == "rules":
        sys.exit(run_rules(sys.argv[2], "state-restricted.php",
                           sys.argv[3], sys.argv[4]))
    else:
        raise SystemExit(__doc__)
