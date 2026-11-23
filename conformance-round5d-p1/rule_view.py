#!/usr/bin/env python3
# R5D-P1 stricter rule-level view: distinguish owned Stage 2 frame surfaces
# (inter-tag newlines, script hosts, generated ids, whitespace spelling) from
# rule-level value differences, following the round-5b P1 precedent.
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
    s = re.sub(r"(footnoteref|footnote|bibitem)-\d+", r"\1-X", s)
    s = re.sub(r"\b(idx|index)-\d+", r"\1-X", s)
    s = re.sub(r">\s+<", "><", s)
    return re.sub(r"\s+", " ", s).strip()

rows = []
for cid, cap in caps.items():
    live, rf = cap["html"], ref.get(cid)
    l, r = rule_level(live), rule_level(rf)
    rows.append({"id": cid, "valid": cap["valid"], "stable": cap["stable"],
                 "source_matches": cap["saved_source_matches"],
                 "rule_level_equal": (l == r), "live_rule": l, "ref_rule": r})
json.dump(rows, open(os.path.join(U, "rule_view.json"), "w", encoding="utf-8"),
          ensure_ascii=False, indent=1)
for row in rows:
    print("%-18s %s" % (row["id"], "RULE-EQ" if row["rule_level_equal"] else "RULE-DIFF"))
    if not row["rule_level_equal"]:
        print("  LIVE: " + str(row["live_rule"])[:600])
        print("  REF : " + str(row["ref_rule"])[:600])
print("rule-level equal:", sum(1 for r in rows if r["rule_level_equal"]), "/", len(rows))
