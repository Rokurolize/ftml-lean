#!/usr/bin/env python3
"""Attach final verdicts to the R5D-R2 raw comparison rows.

Every raw DIFF is resolved with an artifact, never with intent. The single
owned artifact here is the Stage 2 tidy frame: the reference Stage 1 emits
<p><div class="error-block">...</div></p> for the embed no-match error and
Stage 2 purifyHtml hoists the div out of the paragraph, giving live's bare
error div. The rule-level error-block signature is byte-identical and the
tidy wrapper artifact is in conformance-round5d-r2/tidy-embed-stage2.html.
The two Freelink hash-route rows have no owned-surface artifact: live leaves
the whole triple bracket literal while the reference renders a link, so the
multi-hash exception in the reference and mirror guards is CONFIRMED.
"""
import json
import os

HERE = os.path.dirname(os.path.abspath(__file__))
rows = json.load(open(os.path.join(HERE, "comparison.json"), encoding="utf-8"))

OWNED = {
    "r2d-18-embed-uppercase-event": (
        "CLEARED",
        "owned Stage 2 tidy frame; the reference Stage 1 wraps the no-match "
        "error div in a paragraph and Stage 2 purifyHtml hoists it out, giving "
        "live's bare error div with a byte-identical error-block signature"),
}

CONFIRMED = {
    "r2d-11-freelink-route-then-anchor": (
        "CONFIRMED",
        "valid/stable/source-matching live serves the source literal "
        "<p>[[[foo/#/bar#baz]]]</p> while the reference renders "
        "<a href=\"/foo#/bar#baz\">foo/</a>; the reference's multi-hash guard "
        "exempts every target containing /#/, so a second # survives to the "
        "renderer, but live rejects the multi-hash target outright"),
    "r2d-12-freelink-route-twice": (
        "CONFIRMED",
        "valid/stable/source-matching live serves the source literal "
        "<p>[[[a/#/b/#/c]]]</p> while the reference renders "
        "<a href=\"/a#/b/#/c\">a/</a>; two /#/ separators give two # bytes "
        "and the same over-broad reference exemption, while live rejects it"),
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
    elif r["id"] in CONFIRMED:
        r["final_verdict"], r["reason"] = CONFIRMED[r["id"]]
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
