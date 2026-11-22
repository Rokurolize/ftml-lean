#!/usr/bin/env python3
"""R3.10 consistency check (the R3-SCOPE.md obligation, TABLE stage).

Per R3-SCOPE, a stage's restricted-pipeline oracle is trusted only
after it is shown to agree with the full pipeline on the stage's
claim family. Three records per case are compared here:

  * FULL: the pre-seeded full-pipeline fixtures
    (expected-{table,tableadv,x,x2}-states.jsonl, probe output:
    post-parse source with delimiter markers plus the token table,
    generated with a tags-honoring, wire-encoded fixture probe).
    All 176 battery and interaction cases are present. The fixture
    records carry no fatal records in this stage.
  * PREFIX: a fresh full-pipeline prefix run (prefix-source.php:
    the true pipeline prefix through Tableadv — Include, the
    stage's thirty-five rules, and the eleven still-unmirrored
    rules the full order interposes before the family
    (Divprefilter, Anchor, User between Bibcite and Blockquote;
    Horiz, Separator, Clearfloat, Break between Toc and Span;
    Divalign between Div and Collapsible; Note and Gallery
    between Tabview and List; no rule is interposed between
    Deflist and Table or between Table and Tableadv) — under the
    full configuration and page map, with the R3.4 tags
    construction and fatal record). Rules after the prefix cannot
    create, remove, or mutate claims inside it, so the prefix
    record stands in for the full pipeline on the family's
    claims; it is used as the FULL side for the nine smoke cases,
    which have no pre-seeded fixture in this worktree, and its
    agreement with FULL on the 176 present cases is itself
    reported.
  * RESTRICTED: the thirty-five-rule stage oracle
    (state-restricted.php with Prefilter..Tableadv).

Comparisons, per case, over canonicalized claim sequences
(canonicalization as in compare.py, including $bytes decoding,
per-record placeholder renumbering, and the R3.8 per-document
canonicalization of the Collapsible count and Tabview tabviewId
class-static counter options):
  A. PREFIX family claims (Table, Tableadv) vs FULL family claims,
     on the cases FULL carries.
     A full-side fatal agrees only with a prefix-side fatal
     carrying the same message.
  B. RESTRICTED family claims vs the full side (FULL where
     present, else PREFIX). A disagreement here is a consistency
     exclusion for the stage corpus, with its reason. A full-side
     fatal agrees only with a restricted-side fatal on the same
     case (the PARSE-FATAL agreement class).
  C. Supporting evidence: RESTRICTED vs PREFIX claims for the
     other shared token-producing rules (Code, Form, Raw,
     Rawold, Module, Module654, Iftags, Comment, Iframe, Date,
     Math, Freelink, Equationreference, Footnote, Footnoteitem,
     Footnoteblock, Bibitem, Bibliography, Bibcite, Blockquote,
     Heading, Toc, Span, Size, Div, Collapsible, Tabview, List,
     Deflist), skipping cases either side records as fatal or
     error.

Usage: consistency_check_r310.py CASES.jsonl RESTRICTED.jsonl PREFIX.jsonl FIXTURE.jsonl [FIXTURE.jsonl ...]
Prints per-case verdicts and summary counts; writes nothing.
"""

import json
import sys

sys.path.insert(0, ".")
from compare import canon_opts, counter_renums, token_entries

FAMILY = ("Table", "Tableadv")
EARLIER = ("Code", "Form", "Raw", "Rawold", "Module", "Module654",
           "Iftags", "Comment", "Iframe", "Date", "Math",
           "Freelink", "Equationreference", "Footnote",
           "Footnoteitem", "Footnoteblock", "Bibitem",
           "Bibliography", "Bibcite", "Blockquote", "Heading",
           "Toc", "Span", "Size", "Div", "Collapsible", "Tabview",
           "List", "Deflist")


def load_jsonl(path):
    out = {}
    with open(path) as f:
        for line in f:
            line = line.strip()
            if line:
                rec = json.loads(line)
                out[rec["id"]] = rec
    return out


def claims(rec, rules):
    ids, by_id = token_entries(rec["tokens"])
    renum = {old: new for new, old in enumerate(ids)}
    cmaps = counter_renums(rec)
    out = []
    for old in ids:
        rule, opts = by_id[old][0], by_id[old][1]
        if rule in rules:
            out.append((rule, canon_opts(rule, opts, renum, cmaps)))
    return tuple(out)


def fatal_of(rec):
    return rec.get("fatal") if rec is not None else None


def main():
    cases = list(load_jsonl(sys.argv[1]).keys())
    restricted = load_jsonl(sys.argv[2])
    prefix = load_jsonl(sys.argv[3])
    full = {}
    for path in sys.argv[4:]:
        full.update(load_jsonl(path))

    a_agree = a_total = 0
    exclusions = []
    surrogate = []
    c_disagree = []
    c_skipped = []
    fatal_agree = 0
    for cid in cases:
        if cid in full:
            a_total += 1
            f_fatal, p_fatal = fatal_of(full[cid]), fatal_of(prefix[cid])
            if f_fatal is not None or p_fatal is not None:
                if f_fatal is not None and f_fatal == p_fatal:
                    a_agree += 1
                else:
                    print(f"{cid}: PREFIX-vs-FULL FATAL DISAGREEMENT "
                          f"(full: {f_fatal!r}; prefix: {p_fatal!r})")
            elif "error" in full[cid] or "error" in prefix[cid]:
                print(f"{cid}: PREFIX-vs-FULL ERROR RECORD")
            elif claims(prefix[cid], FAMILY) == claims(full[cid], FAMILY):
                a_agree += 1
            else:
                print(f"{cid}: PREFIX-vs-FULL FAMILY DISAGREEMENT")
                print(f"  full:   {claims(full[cid], FAMILY)}")
                print(f"  prefix: {claims(prefix[cid], FAMILY)}")
            full_side, origin = full[cid], "fixture"
        else:
            full_side, origin = prefix[cid], "prefix-surrogate"
            surrogate.append(cid)
        r_fatal, f_fatal = fatal_of(restricted[cid]), fatal_of(full_side)
        if r_fatal is not None or f_fatal is not None:
            if r_fatal is not None and r_fatal == f_fatal:
                fatal_agree += 1
                print(f"{cid}: CONSISTENT-FATAL (full side: {origin})")
            else:
                exclusions.append(cid)
                print(f"{cid}: EXCLUDED (full side: {origin}; fatal mismatch: "
                      f"restricted {r_fatal!r}, full {f_fatal!r})")
        elif "error" in restricted[cid] or "error" in full_side:
            exclusions.append(cid)
            print(f"{cid}: EXCLUDED (full side: {origin}; error record)")
        else:
            r_fam = claims(restricted[cid], FAMILY)
            f_fam = claims(full_side, FAMILY)
            if r_fam == f_fam:
                print(f"{cid}: CONSISTENT (full side: {origin})")
            else:
                exclusions.append(cid)
                print(f"{cid}: EXCLUDED (full side: {origin})")
                print(f"  restricted family: {r_fam}")
                print(f"  full family:       {f_fam}")
        if fatal_of(restricted[cid]) is not None \
                or fatal_of(prefix[cid]) is not None \
                or "error" in restricted[cid] or "error" in prefix[cid]:
            c_skipped.append(cid)
        elif claims(restricted[cid], EARLIER) != claims(prefix[cid], EARLIER):
            c_disagree.append(cid)
    print(f"SUMMARY A (prefix vs fixture, family): {a_agree}/{a_total} agree")
    print(f"SUMMARY B (restricted vs full, family): "
          f"{len(cases) - len(exclusions)}/{len(cases)} consistent "
          f"(including {fatal_agree} fatal agreements); "
          f"exclusions: {exclusions}")
    print(f"SUMMARY: full-side surrogate (prefix) cases: {sorted(surrogate)}")
    print(f"SUMMARY C (restricted vs prefix, earlier rules): "
          f"{len(cases) - len(c_disagree) - len(c_skipped)}/"
          f"{len(cases) - len(c_skipped)} agree; "
          f"disagreeing: {c_disagree}; skipped (fatal/error): {c_skipped}")


if __name__ == "__main__":
    main()
