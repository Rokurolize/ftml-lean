#!/usr/bin/env python3
"""R3.17 consistency check (R3-SCOPE.md), run before the
mirroring on the assembled stage corpus
(final-all-cases.jsonl). Family: Anchor, User, Button,
Embed, Social, File.

  A (fixtures are the full pipeline): the prefix-source full
    run's family token claims equal the fixture file's (the
    state-restricted run over the same sixty-eight rules).
  B (the restricted pipeline's family claims match the full
    pipeline's): restricted-317 family claims equal the
    fixture's; disagreements are recorded as exclusions.
  B-so (Social firing agreement): Social claims no tokens,
    so Check B is vacuous for it; instead, for every case,
    whether removing Social changes the record at all (the
    canonical state, segments and tokens and compared state)
    must agree between the restricted pair (sixty-seven
    rules vs sixty-six) and the full pair (sixty-eight vs
    sixty-seven). A case where the rule fires on one side
    but not the other is a disagreement.
  C (no earlier-rule disturbance): restricted-317 claims
    for the sixty previously mirrored token-claiming rules
    equal the prefix run's.

Canonicalization: token indices are per-batch cumulative in
every driver, so claims compare per document after
renumbering each side's tokens in table order (the R3.1
protocol), with options compared under the compare.py
canonicalization (a PHP empty array and an empty map agree;
keys sorted). The compared state for B-so is the full
canonical state of compare.py's canon_state.
"""
import json
import sys

sys.path.insert(0, ".")
from compare import canon_state  # noqa: E402

FAMILY = ("Anchor", "User", "Button", "Embed", "File")
# The claims comparison keys on rule names as they appear in
# token entries; Prefilter, Delimiter, Modulepre, and
# Divprefilter never claim tokens in the compared records,
# so the EARLIER set lists the sixty previously mirrored
# rules that can claim (the R3.16 EARLIER fifty-seven plus
# its token-claiming family, Divalign, Note, Gallery).
EARLIER = ("Code", "Form", "Raw", "Rawold", "Module", "Module654",
           "Iftags", "Comment", "Iframe", "Date", "Math",
           "Concatlines", "Freelink", "Equationreference", "Footnote",
           "Footnoteitem", "Footnoteblock", "Bibitem",
           "Bibliography", "Bibcite", "Blockquote", "Heading",
           "Toc", "Horiz", "Separator", "Clearfloat", "Break",
           "Span", "Size", "Div", "Collapsible", "Tabview",
           "List", "Deflist", "Table", "Tableadv", "Image",
           "Center", "Newline", "Paragraph", "Url", "Email",
           "Mathinline", "Interwiki", "Colortext", "Strong",
           "Emphasis", "Underline", "Strikethrough", "Tt",
           "Superscript", "Subscript", "Typography", "Tighten",
           "Divalign", "Note", "Gallery")


def canon_val(v):
    if v is None or v == {}:
        return None
    if isinstance(v, dict):
        if set(v) == {"$bytes"}:
            return ("bytes", tuple(v["$bytes"]))
        return ("map", tuple(sorted(
            (k, canon_val(x)) for k, x in v.items())))
    if isinstance(v, list):
        return ("list", tuple(canon_val(x) for x in v))
    return v


def canon_opts(opts):
    if opts is None or opts == [] or opts == {}:
        return None
    return canon_val(opts)


def claims(rec, rules):
    toks = rec.get("tokens")
    if isinstance(toks, dict):
        entries = [(int(k), v) for k, v in toks.items()]
    elif isinstance(toks, list):
        entries = list(enumerate(toks))
    else:
        return []
    entries.sort(key=lambda kv: kv[0])
    renum = {old: i for i, (old, _) in enumerate(entries)}
    out = []
    for old, (rule, opts) in entries:
        if rule in rules:
            out.append((renum[old], rule, canon_opts(opts)))
    return out


def load(path):
    with open(path) as f:
        return {json.loads(l)["id"]: json.loads(l)
                for l in f if l.strip()}


def fires(a, b):
    """Whether two records (with and without Social) differ
    in canonical state; fatal records compare by message, an
    error record counts as differing."""
    if "error" in a or "error" in b:
        return True
    if "fatal" in a or "fatal" in b:
        return a.get("fatal") != b.get("fatal")
    return canon_state(a) != canon_state(b)


def main():
    cases = sys.argv[1]
    ids = [json.loads(l)["id"] for l in open(cases) if l.strip()]
    full = load("expected-final-full.jsonl")
    prefix = load("prefix-final-states.jsonl")
    restr = load("restricted-final-states.jsonl")
    restr_noso = load("restricted-nosocial-final-states.jsonl")
    full_noso = load("full-nosocial-final-states.jsonl")
    a_bad, b_bad, bso_bad, c_bad = [], [], [], []
    for cid in ids:
        if claims(prefix[cid], FAMILY) != claims(full[cid], FAMILY):
            a_bad.append(cid)
        if claims(restr[cid], FAMILY) != claims(full[cid], FAMILY):
            b_bad.append(cid)
        if fires(restr[cid], restr_noso[cid]) != fires(full[cid], full_noso[cid]):
            bso_bad.append(cid)
        if claims(restr[cid], EARLIER) != claims(prefix[cid], EARLIER):
            c_bad.append(cid)
    n = len(ids)
    print(f"A prefix==fixture on family claims: "
          f"{n - len(a_bad)}/{n}  disagreements: {a_bad}")
    print(f"B restricted==full on family claims: "
          f"{n - len(b_bad)}/{n}  exclusions: {b_bad}")
    print(f"B-so Social firing agreement (restricted pair vs "
          f"full pair): {n - len(bso_bad)}/{n}  disagreements: {bso_bad}")
    print(f"C restricted==prefix on earlier claims: "
          f"{n - len(c_bad)}/{n}  disagreements: {c_bad}")


if __name__ == "__main__":
    main()
