#!/usr/bin/env python3
"""Attach final verdicts to the R5B-R2 raw comparison rows.

Every raw DIFF is resolved with an artifact, never with intent. The four
artifact kinds used here are: (1) the reference's own Stage 2 tidy command
turns a raw ampersand into `&amp;` and hoists a div out of a paragraph, so
those two byte differences are the owned Stage 2 frame; (2) reference tokens
mode shows Math type `equation` for the uppercase-TYPE sibling, matching
live's equation envelope, so the remaining difference is the owned no-PNG
serving stub; (3) the three claimed-placeholder rows differ only inside the
decimal digit run of a U+FFFD-wrapped token index, the owned token-counter
class, with the wrapper shape identical on both sides. Any other DIFF would
be CONFIRMED.
"""
import json
import os

HERE = os.path.dirname(os.path.abspath(__file__))
rows = json.load(open(os.path.join(HERE, "comparison.json"), encoding="utf-8"))

OWNED = {
    "r2b-math-uppercase-TYPE-valid": (
        "CLEARED",
        "owned Math PNG/no-PNG serving surface; reference tokens mode gives "
        "type=equation, matching live's \\begin{equation} envelope and counter"),
    "r2b-math-type-entity": (
        "CLEARED",
        "owned Stage 2 entity spelling; reference's own tidy command on the "
        "Stage 1 error block emits a&amp;b, byte-identical to live"),
    "r2b-email-claimed-url": (
        "CLEARED",
        "owned token-id counter digits; U+FFFD-wrapped reversed-index span "
        "shape identical, only the index value differs"),
    "r2b-email-claimed-raw": (
        "CLEARED",
        "owned token-id counter digits; U+FFFD-wrapped reversed-index span "
        "shape identical, only the index value differs"),
    "r2b-email-claimed-multidigit": (
        "CLEARED",
        "owned token-id counter digits; U+FFFD-wrapped reversed-index span "
        "shape identical, only the index value differs"),
    "r2b-embed-data-scheme": (
        "CLEARED",
        "owned Stage 2 tidy frame; tidy hoists the error div out of the "
        "paragraph, byte-identical to live"),
    "r2b-embed-datasrc": (
        "CLEARED",
        "owned Stage 2 tidy frame; tidy hoists the error div out of the "
        "paragraph, byte-identical to live"),
}

for r in rows:
    if r["status"] == "UNTESTABLE":
        r["final_verdict"] = "UNTESTABLE"
        r["reason"] = "capture invalid, unstable or source mismatch"
    elif r["status"] == "CLEAR":
        r["final_verdict"] = "CLEARED"
        r["reason"] = "masked canonical bytes equal"
    elif r["id"] in OWNED:
        r["final_verdict"], r["reason"] = OWNED[r["id"]]
    else:
        r["final_verdict"] = "CONFIRMED"
        r["reason"] = "rule-level byte divergence with no owned-surface artifact"

out = os.path.join(HERE, "classification.json")
with open(out, "w", encoding="utf-8") as fh:
    json.dump(rows, fh, ensure_ascii=False, indent=1)
    fh.write("\n")

final = {}
for r in rows:
    final[r["final_verdict"]] = final.get(r["final_verdict"], 0) + 1
print("wrote", out, final)
for r in rows:
    if r["final_verdict"] != "CLEARED":
        print(r["id"], r["final_verdict"], r["reason"])
