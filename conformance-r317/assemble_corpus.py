#!/usr/bin/env python3
"""Assemble the R3.17 stage corpus (BRIEF-R3.17.md, corpus
assembly section). Four sources:

  (a) existing cases in the canonical record whose
      full-pipeline behavior exercises one of the six rules:
      the seventeen R3 stage corpora in the canonical record
      (the sixteen R3.16 pooled, plus the R3.16 stage corpus
      itself) are pooled, run through the full pipeline, and
      selected as follows. Anchor, User, Button, Embed, and
      File claim tokens, so a case is selected for one of
      them when its full-pipeline token table holds a token
      of that rule. Social claims no tokens -- its process()
      returns a \\xFE-delimited module string spliced into
      the source -- so a case is selected for it when the
      case's record under the full-pipeline prefix ending at
      Social differs from its record under the same prefix
      with the rule removed (run_oracle's RULES_UPTO_SOCIAL /
      RULES_UPTO_NOSOCIAL lists), compared under the
      compare.py canonicalization: the measurement is taken
      at the rule's own pipeline position because a rewrite
      can be masked downstream (the R3.16 Divprefilter
      instrument). The five Anchor-owned retirement cases
      (h18-anchor, s59, u50, sup59, typo69) are asserted
      present in the selection by name.
  (b) the refgaps Anchor battery sources
      (conformance-refphp/anchor/battery.jsonl in this
      worktree, 60 cases): case sources for parse-state
      conformance, included whole with their provenance;
      their render-side expectations are not this stage's
      business.
  (c) authored targeted cases (authored_cases.py).
  (d) the nine smoke sources.

Modes:
  candidates  pool the canonical corpora (dedupe by id; an
              id colliding with a different source is
              renamed with its corpus label, the R3.13
              precedent) and write candidates-a.jsonl.
  finish      read candidates-a-full.jsonl (the full-pipeline
              run over the candidates) and
              candidates-a-uptosocial.jsonl /
              candidates-a-uptonosocial.jsonl (the Social
              prefix runs), all produced by run_oracle.py,
              select source (a), merge all four sources, and
              write final-all-cases.jsonl plus
              corpus-provenance.json (per-case provenance).

Provenance is recorded per case in corpus-provenance.json:
{"kind": "canonical"|"anchor-battery"|"authored"|"smoke",
 "detail": ...}.
"""

import glob
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
CANON = os.path.expanduser("~/workspace/ftml-lean-equivalence")
SMOKE = os.path.join(ROOT, "conformance-refphp", "smoke")
BATTERY = os.path.join(ROOT, "conformance-refphp", "anchor",
                       "battery.jsonl")
sys.path.insert(0, HERE)
from compare import canon_state  # noqa: E402

TOKEN_FAMILY = ("Anchor", "User", "Button", "Embed", "File")

CORPORA = [
    ("r31smoke", "conformance-r3/smoke-cases.jsonl"),
    ("r31code", "conformance-refphp/code/battery.jsonl"),
    ("r32formraw", "conformance-r33/formraw-cases.jsonl"),
    ("r33module", "conformance-r33/module-all-cases.jsonl"),
    ("r34next", "conformance-r34/next-all-cases.jsonl"),
    ("r35link", "conformance-r35/link-all-cases.jsonl"),
    ("r36notes", "conformance-r36/notes-all-cases.jsonl"),
    ("r37block", "conformance-r37/block-all-cases.jsonl"),
    ("r38contain", "conformance-r38/contain-all-cases.jsonl"),
    ("r39list", "conformance-r39/list-all-cases.jsonl"),
    ("r310table", "conformance-r310/table-all-cases.jsonl"),
    ("r311para", "conformance-r311/para-all-cases.jsonl"),
    ("r312inline1", "conformance-r312/inline1-all-cases.jsonl"),
    ("r313inline2", "conformance-r313/inline2-all-cases.jsonl"),
    ("r314inline3", "conformance-r314/inline3-all-cases.jsonl"),
    ("r315middle", "conformance-r315/middle-all-cases.jsonl"),
    ("r316middle2", "conformance-r316/middle2-all-cases.jsonl"),
]

# Recorded exclusion cases this stage's retirement re-runs
# cover. The five Anchor-owned items must be selected into
# source (a) (each exercises Anchor in the full pipeline --
# that is why it was recorded); the three Include-owned
# controls are drawn from their own stage corpora by
# retirement_check.py, not from this corpus.
NAMED = ["h18-anchor", "s59", "u50", "sup59", "typo69"]


def read_jsonl(path):
    with open(path) as f:
        return [json.loads(line) for line in f if line.strip()]


def write_jsonl(path, recs):
    with open(path, "w") as f:
        for rec in recs:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")


def token_rules(rec):
    toks = rec.get("tokens")
    if isinstance(toks, dict):
        entries = toks.values()
    elif isinstance(toks, list):
        entries = toks
    else:
        return set()
    return {e[0] for e in entries}


def same_record(a, b):
    """Canonical-state equality of two state-driver records
    (the compare.py canonicalization). Fatal records compare
    by their message; error records never count as equal."""
    if a is None or b is None:
        return a is b
    if "error" in a or "error" in b:
        return False
    if "fatal" in a or "fatal" in b:
        return a.get("fatal") == b.get("fatal")
    return canon_state(a) == canon_state(b)


def candidates():
    seen = {}
    order = []
    renames = []
    for label, rel in CORPORA:
        for rec in read_jsonl(os.path.join(CANON, rel)):
            cid, src = rec["id"], rec["source"]
            if cid in seen:
                if seen[cid]["source"] == src:
                    continue
                new = f"{cid}@{label}"
                renames.append((cid, new))
                rec = dict(rec, id=new)
                cid = new
            seen[cid] = rec
            order.append(cid)
    out = [seen[c] for c in order]
    write_jsonl(os.path.join(HERE, "candidates-a.jsonl"), out)
    print(f"candidates: {len(out)} unique cases "
          f"({len(renames)} id-collision renames: {renames})")


def finish():
    full = {r["id"]: r for r in
            read_jsonl(os.path.join(HERE, "candidates-a-full.jsonl"))}
    withso = {r["id"]: r for r in read_jsonl(
        os.path.join(HERE, "candidates-a-uptosocial.jsonl"))}
    noso = {r["id"]: r for r in read_jsonl(
        os.path.join(HERE, "candidates-a-uptonosocial.jsonl"))}
    cand = {r["id"]: r for r in
            read_jsonl(os.path.join(HERE, "candidates-a.jsonl"))}
    prov = {}
    cases = []
    counts = {r: 0 for r in TOKEN_FAMILY + ("Social",)}
    for cid, rec in cand.items():
        frec = full.get(cid)
        if frec is None or "tokens" not in frec:
            continue
        exercised = token_rules(frec) & set(TOKEN_FAMILY)
        if not same_record(withso.get(cid), noso.get(cid)):
            exercised = exercised | {"Social"}
        if exercised:
            for r in exercised:
                counts[r] += 1
            cases.append(rec)
            prov[cid] = {"kind": "canonical",
                         "detail": "full pipeline exercises "
                                   + ",".join(sorted(exercised))}
    missing_named = [c for c in NAMED if c not in prov]
    print(f"source (a): {len(cases)} cases selected; per rule: {counts}")
    print(f"named Anchor cases missing from (a): {missing_named}")
    for rec in read_jsonl(BATTERY):
        cid = rec["id"]
        if cid in prov:
            if prov[cid]["kind"] == "canonical":
                prov[cid] = {"kind": "anchor-battery",
                             "detail": "refgaps battery; also "
                                       "selected in (a)"}
            continue
        cases.append(rec)
        prov[cid] = {"kind": "anchor-battery",
                     "detail": "refgaps battery source"}
    for rec in read_jsonl(os.path.join(HERE, "authored-cases.jsonl")):
        assert rec["id"] not in prov, rec["id"]
        cases.append(rec)
        prov[rec["id"]] = {"kind": "authored",
                           "detail": "authored_cases.py"}
    for txt in sorted(glob.glob(os.path.join(SMOKE, "*.txt"))):
        name = os.path.splitext(os.path.basename(txt))[0]
        cid = f"smoke-{name}"
        with open(txt) as f:
            src = f.read()
        if cid in prov:
            continue
        cases.append({"id": cid, "source": src})
        prov[cid] = {"kind": "smoke", "detail": "conformance-refphp/smoke"}
    write_jsonl(os.path.join(HERE, "final-all-cases.jsonl"), cases)
    with open(os.path.join(HERE, "corpus-provenance.json"), "w") as f:
        json.dump(prov, f, indent=1, sort_keys=True)
    kinds = {}
    for v in prov.values():
        kinds[v["kind"]] = kinds.get(v["kind"], 0) + 1
    print(f"corpus: {len(cases)} cases; provenance: {kinds}")


if __name__ == "__main__":
    if sys.argv[1] == "candidates":
        candidates()
    elif sys.argv[1] == "finish":
        finish()
    else:
        raise SystemExit(__doc__)
