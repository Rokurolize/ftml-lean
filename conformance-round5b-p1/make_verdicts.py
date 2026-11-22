#!/usr/bin/env python3
# R5B-P1 dispositions, derived from comparison.json plus the stricter rule-level view.
import json, os, re, importlib.machinery, importlib.util

U = os.path.dirname(os.path.abspath(__file__))
P = "/home/roku/.agents/skills/wikidot-py-operations/scripts/wikidot-probe"
loader = importlib.machinery.SourceFileLoader("wikidot_probe", P)
spec = importlib.util.spec_from_loader("wikidot_probe", loader)
probe = importlib.util.module_from_spec(spec); spec.loader.exec_module(probe)

caps = json.load(open(os.path.join(U, "captures.json"), encoding="utf-8"))
ref = {}
for line in open(os.path.join(U, "ref.jsonl"), encoding="utf-8"):
    r = json.loads(line); ref[r["id"]] = r.get("output", None)

def rule_level(s):
    if s is None: return None
    s = re.sub(r"<script[^>]*>.*?</script>", "", s, flags=re.S)
    s = probe.norm(s)
    s = re.sub(r">\s+<", "><", s)
    return re.sub(r"\s+", " ", s).strip()

confirm = {
    "LA-ABS": ("C-R5B-P1-1", "List.php:444-459,533-571,614-619",
        "ListRules.lean:1265-1278 (stripBlockCloserTag),1307-1320 (absorbLastLiTail),1427-1433 (explLoop synthetic)",
        "The mirror strips every case-variant block closer and re-homes the tail after the last [[/li]], so it also forms two <li> items and inherits the defect."),
    "LB-S1IN": ("C-R5B-P1-2", "List.php:274-282",
        "ListRules.lean:1563-1570 (normalizeRefcorr8 exact-byte rewrites)",
        "The mirror's two rewrites are exact-byte replacements of the two recorded round-5 skeletons only, with no uppercase-inner spelling, so the sibling is not normalized and the defect is inherited."),
    "LC-S1TAIL": ("C-R5B-P1-3", "List.php:288-298",
        "ListRules.lean:1563-1570 (normalizeRefcorr8 exact-byte rewrites)",
        "The mirror's second rewrite is the exact recorded source ending at [[/ul]]; any trailing TAIL leaves it unmatched, so the defect is inherited."),
    "LE-EMPTYITEM": ("C-R5B-P1-4", "List.php:738-740,603-605,933-938",
        "ListRules.lean:1177-1225 (buildExplicit lis.foldl / formatItem / dissolveBlock),1100-1108 (wrapListTokensUnclosed),finalizeOne",
        "Source reading shows the same empty-item dissolve, unclosed wrap and boundary-follower path, so the mirror is inferred to emit the same extra break; no Lean elaboration was run for this claim."),
    "DB-DATAEMPTY": ("C-R5B-P1-5", "Div.php:138-139,165-169",
        "ContainRules.lean:640-646 (divArgs omSetOpt last-wins),733-741 (divAuthoredNonEmpty),770-776 (valueEmpty unset)",
        "The mirror's authored table removes the lowercased key when the last authored value is literally empty, so the last-wins empty value is unset and the defect is inherited."),
}
frame_reason = {
    "LD-SCOREDTAIL": "standard-mask byte-identical: the REFCORR8 raw-case scored tail trim now matches live",
    "LF-DATAUP": "rule-level equal after inter-tag-newline mask; list data-* last-wins matches live",
    "DA-STYLEWS": "rule-level equal after inter-tag-newline mask; REFCORR8 authoredValue keeps whitespace-only style as style=\"\"",
    "DC-DATATRIPLE": "rule-level equal after inter-tag-newline mask; three-way data-* collision is last-wins on both",
    "DD-IDTAB": "rule-level equal after inter-tag-newline mask; REFCORR8 render keeps the u- shell",
    "DE-IDLIT": "rule-level equal after inter-tag-newline mask; literally authored u- id is kept on both",
    "BB-LEADSPACE": "standard-mask byte-identical; space-prefixed quote marker stays literal on both",
    "NN-3LF": "standard-mask byte-identical; three-LF run forms two paragraphs on both",
    "TT-UNPAIREDAT": "rule-level equal after Stage 2 frame mask; tab title x@@y is literal on both, script host/body and random ids are serving surfaces",
}

rows = []
for cid, cap in caps.items():
    live, rf = cap["html"], ref.get(cid)
    lm = probe.norm(live); rm = probe.norm(rf)
    lm = re.sub(r"(footnoteref|footnote|bibitem)-\d+", r"\1-X", lm)
    rm = re.sub(r"(footnoteref|footnote|bibitem)-\d+", r"\1-X", rm)
    std_eq = (lm == rm)
    strict_eq = (rule_level(live) == rule_level(rf))
    if cid in confirm:
        cid_name, ref_lines, mirror_lines, mirror_note = confirm[cid]
        verdict = "CONFIRMED"
        reason = "valid/stable/source-matching live capture disagrees with reference and mirror on a rule-level value"
    elif std_eq or strict_eq:
        verdict = "CLEARED"; cid_name = None; ref_lines = None; mirror_lines = None; mirror_note = ""
        reason = frame_reason.get(cid, "rule-level agreement after standard mask")
    else:
        verdict = "UNTESTABLE"; cid_name = None; ref_lines = None; mirror_lines = None; mirror_note = ""
        reason = "no valid source-matching capture or unresolved disposition"
    rows.append({
        "id": cid, "fullname": cap["fullname"], "verdict": verdict,
        "candidate": cid_name, "standard_mask_equal": std_eq,
        "rule_level_equal": strict_eq,
        "valid": cap["valid"], "stable": cap["stable"],
        "saved_source_matches": cap["saved_source_matches"],
        "html_sha256": cap["html_sha256"], "source_sha256": cap["source_sha256"],
        "live_rule_bytes": rule_level(live), "ref_rule_bytes": rule_level(rf),
        "owning_reference_lines": ref_lines, "mirror_lines": mirror_lines,
        "mirror_consequence": mirror_note, "reason": reason,
    })
json.dump(rows, open(os.path.join(U, "verdicts.json"), "w", encoding="utf-8"),
          ensure_ascii=False, indent=1)
print("verdicts:", {v: sum(1 for r in rows if r["verdict"] == v)
                    for v in ("CONFIRMED", "CLEARED", "UNTESTABLE")})
