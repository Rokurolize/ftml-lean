#!/usr/bin/env python3
"""Append post-probe characterization rows R3-17..R3-21 to LEDGER.md and
emit cases-followup.jsonl from the appended SOURCE-BLOCK-B.

These rows were added only AFTER the first probe exposed R3-01/R3-04, and each
gets its own fresh probe batch, as the protocol requires for any suspicion
added after probing.
"""
import json

LEDGER = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5-R3/LEDGER.md"
OUT = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5-R3/cases-followup.jsonl"

S = [
    ("R3-17", "notes/footnote-empty", "two empty-Raw tokens with TWO interior spaces",
     "characterize R3-01: if the reference keeps an interior-space body and live collapses to empty for any interior whitespace run, the divergence is the missing post-strip re-trim",
     "live >1</a>.</div> (empty) while ref shows >1</a>. </div> (separator)",
     "both agree on a non-empty body with separator",
     "[[footnote]]@@@@  @@@@[[/footnote]]\n[[footnoteblock]]"),
    ("R3-18", "notes/footnote-empty", "two empty-Raw tokens with an interior TAB",
     "characterize R3-01 across the ASCII whitespace class; trim() strips tabs too, so a tab-only remainder should also be empty on live",
     "live >1</a>.</div> while ref shows >1</a>. </div>",
     "both agree on a non-empty body with separator",
     "[[footnote]]@@@@\t@@@@[[/footnote]]\n[[footnoteblock]]"),
    ("R3-19", "notes/footnote-empty", "literal text plus an empty-Raw placeholder with interior spaces",
     "characterize the scope of the required post-strip trim: the reference strips the placeholder but leaves trailing spaces after text; if live trims the whole rendered body the ref keeps two trailing spaces that norm collapses away, so this row also tests whether trailing whitespace after text survives on live",
     "a decisive byte difference in the rendered body text (e.g. ref keeps a space-run or separator where live does not) after the standard mask",
     "both agree on the body text and separator",
     "[[footnote]]hello  @@@@  [[/footnote]]\n[[footnoteblock]]"),
    ("R3-20", "notes/bibitem-empty", "two empty-Raw tokens with an interior TAB in a bibliography value",
     "characterize R3-04 across the ASCII whitespace class for the Bibitem empty flag",
     "live 1.</div> while ref shows 1. </div>",
     "both agree on a non-empty body with separator",
     "[[bibliography]]\n: lab : @@@@\t@@@@\n[[/bibliography]]"),
    ("R3-21", "notes/footnote-empty", "single 8-at run: one empty Raw plus a literal @@, no interior whitespace",
     "control for R3-01: a single empty-Raw placeholder adjacent to a literal @@ remainder must stay non-empty; confirms the defect is specifically whitespace left between stripped placeholders, not the strip itself",
     "live and ref disagree on the literal @@ body or separator",
     "both show the same >1</a>. @@</div> body",
     "[[footnote]]@@@@@@@@[[/footnote]]\n[[footnoteblock]]"),
]

append = ["", "## POST-PROBE CHARACTERIZATION ROWS (added after the first probe, each with its own probe batch)", ""]
append.append("| ID | family | construct | why the reference looks wrong | CONFIRM byte (live differs) | CLEAR byte (live agrees) |")
for rid, fam, con, why, conf, clear, src in S:
    append.append(f"| {rid} | {fam} | {con} | {why} | {conf} | {clear} |")
append += ["", "## SOURCE-BLOCK-B (machine-readable; addendum.py derives cases-followup.jsonl from here)", "",
           "```source-block-b"]
for rid, fam, con, why, conf, clear, src in S:
    append.append(rid + "\t" + json.dumps(src, ensure_ascii=False))
append += ["```", "", f"Total characterization rows: {len(S)}. Probed in one follow-up create/capture batch under prefix muse-probe-round5-r3-."]
with open(LEDGER, "a", encoding="utf-8") as f:
    f.write("\n".join(append) + "\n")
with open(OUT, "w", encoding="utf-8") as f:
    for rid, fam, con, why, conf, clear, src in S:
        f.write(json.dumps({"id": rid, "source": src}, ensure_ascii=False) + "\n")
print("appended", len(S), "rows; wrote", OUT)
