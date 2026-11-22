import json, sys, importlib.machinery, importlib.util, re

loader = importlib.machinery.SourceFileLoader(
    "wikidot_probe", "/home/roku/.agents/skills/wikidot-py-operations/scripts/wikidot-probe")
spec = importlib.util.spec_from_loader("wikidot_probe", loader)
probe = importlib.util.module_from_spec(spec)
spec.loader.exec_module(probe)


def shape(s):
    s = s.replace("\r\n", "\n").replace("<br />", "<br>")
    s = re.sub(r"\n{2,}", "\n", s)
    return s.strip()


cases = [json.loads(l) for l in open("conformance-suspect4b/cases.jsonl", encoding="utf-8")]
ref = {o["id"]: o.get("output", o.get("error"))
       for o in map(json.loads, open("conformance-suspect4b/ref-render.jsonl", encoding="utf-8"))}
cap = json.load(open("conformance-suspect4b/captures.json", encoding="utf-8"))

summary = {"agree": 0, "differ": 0, "invalid": 0, "missing": 0}
for c in cases:
    cid = c["id"]
    got = cap.get(cid)
    if got is None:
        print(cid, "MISSING")
        summary["missing"] += 1
        continue
    if not (got.get("valid") and got.get("stable") and got.get("saved_source_matches")):
        print(cid, "INVALID", {k: got.get(k) for k in ("valid", "stable", "saved_source_matches")})
        summary["invalid"] += 1
        continue
    live = shape(probe.norm(got["html"]))
    expected = shape(probe.norm(ref[cid]))
    if live == expected:
        print(cid, "AGREE")
        summary["agree"] += 1
    else:
        print(cid, "DIFFER")
        print("  ref :", repr(expected))
        print("  live:", repr(live))
        summary["differ"] += 1
print("SUMMARY", summary)
