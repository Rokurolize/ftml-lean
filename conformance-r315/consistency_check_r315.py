#!/usr/bin/env python3
"""R3.15 consistency check (R3-SCOPE.md), run before the
mirroring on the assembled stage corpus
(middle-all-cases.jsonl). Family: Horiz, Separator, Clearfloat,
Break, Center.

  A (fixtures are the full pipeline): the prefix-source full
    run's family token claims equal the fixture file's (the
    state-restricted run over the same sixty-eight rules).
  B (the restricted pipeline's family claims match the full
    pipeline's): restricted-315 family claims equal the
    fixture's; disagreements are recorded as exclusions.
  C (no earlier-rule disturbance): restricted-315 claims for
    the fifty-two previously mirrored rules equal the prefix
    run's.

Canonicalization: token indices are per-batch cumulative in
every driver, so claims compare per document after renumbering
each side's tokens in table order (the R3.1 protocol), with
options compared under the compare.py canonicalization (a PHP
empty array and an empty map agree; a PHP empty map and a Lean
null agree; keys sorted). The compared state is the token
claims; the post-parse source and the Math / footnote /
bibliography state fields are covered by the main conformance
comparison (compare.py).
"""
import json
import sys

FAMILY = ("Horiz", "Separator", "Clearfloat", "Break", "Center")
EARLIER = ("Code", "Form", "Raw", "Rawold", "Module", "Module654",
           "Iftags", "Comment", "Iframe", "Date", "Math",
           "Concatlines", "Freelink", "Equationreference", "Footnote",
           "Footnoteitem", "Footnoteblock", "Bibitem",
           "Bibliography", "Bibcite", "Blockquote", "Heading",
           "Toc", "Span", "Size", "Div", "Collapsible", "Tabview",
           "List", "Deflist", "Table", "Tableadv", "Image",
           "Newline", "Paragraph", "Url", "Email", "Mathinline",
           "Interwiki", "Colortext", "Strong", "Emphasis",
           "Underline", "Strikethrough", "Tt", "Superscript",
           "Subscript", "Typography", "Tighten")


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


def main():
    cases, full_p, prefix_p, restr_p = sys.argv[1:5]
    ids = [json.loads(l)["id"] for l in open(cases) if l.strip()]
    full, prefix, restr = load(full_p), load(prefix_p), load(restr_p)
    a_bad, b_bad, c_bad = [], [], []
    for cid in ids:
        if claims(prefix[cid], FAMILY) != claims(full[cid], FAMILY):
            a_bad.append(cid)
        if claims(restr[cid], FAMILY) != claims(full[cid], FAMILY):
            b_bad.append(cid)
        if claims(restr[cid], EARLIER) != claims(prefix[cid], EARLIER):
            c_bad.append(cid)
    n = len(ids)
    print(f"A prefix==fixture on family claims: "
          f"{n - len(a_bad)}/{n}  disagreements: {a_bad}")
    print(f"B restricted==full on family claims: "
          f"{n - len(b_bad)}/{n}  exclusions: {b_bad}")
    print(f"C restricted==prefix on earlier claims: "
          f"{n - len(c_bad)}/{n}  disagreements: {c_bad}")


if __name__ == "__main__":
    main()
