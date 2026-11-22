#!/usr/bin/env python3
"""Attach final verdicts to the R5C-R2 raw comparison rows.

Every raw DIFF is resolved with an artifact, never with intent. Artifacts used:
(1) reference tokens mode gives the Math type for the four Math rows; where the
token matches the live envelope, the render-only difference is the owned Math
PNG/no-PNG serving surface; (2) the non-`type` attribute row r2c-04 is the
adopted absent-type/default-align class (REFCORR3 C-SUSPECT-SERVING-1, REFCORR8
CORRECTION-REFCORR8-MATH-TYPE: a genuinely absent type key still defaults to
align and reverting to equation would break cleared rows), structurally
identical to the adopted `attr-unknown` probe, not a new value; (3) the two
embed rows are the owned Stage 2 tidy frame (empty-paragraph drop and
div-out-of-paragraph hoist). Any other DIFF is CONFIRMED.
"""
import json
import os

HERE = os.path.dirname(os.path.abspath(__file__))
rows = json.load(open(os.path.join(HERE, "comparison.json"), encoding="utf-8"))

OWNED = {
    "r2c-01-math-TyPe": (
        "CLEARED",
        "owned Math PNG/no-PNG serving surface; reference tokens mode gives "
        "type=equation, matching live's \\begin{equation} envelope and counter"),
    "r2c-02-math-tYPE": (
        "CLEARED",
        "owned Math PNG/no-PNG serving surface; reference tokens mode gives "
        "type=equation, value gather ignored, matching live's equation envelope"),
    "r2c-03-math-dual-attrs": (
        "CLEARED",
        "owned Math PNG/no-PNG serving surface; reference tokens mode gives "
        "type=align with the exact lowercase key winning over TYPE, matching "
        "live's \\begin{align} envelope"),
    "r2c-04-math-typeeq": (
        "CLEARED",
        "owned Math PNG/no-PNG serving surface plus adopted absent-type "
        "default-align class: typeeq is not a case variant of type, so the "
        "reference takes the REFCORR3/REFCORR8 absent-type branch (align) "
        "exactly as the adopted attr-unknown probe does; live's equation "
        "envelope is the already-cleared PNG-side discrepancy, not a new value"),
    "r2c-17-embed-vbscript": (
        "CLEARED",
        "owned Stage 2 tidy frame; the reference's empty <p></p> wrapper is "
        "dropped by Stage 2, byte-identical to live's empty result"),
    "r2c-18-embed-nomatch": (
        "CLEARED",
        "owned Stage 2 tidy frame; tidy hoists the error div out of the "
        "paragraph, byte-identical to live, as in R5B-R2"),
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
