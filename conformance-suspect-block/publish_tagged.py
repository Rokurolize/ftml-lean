#!/usr/bin/env python3
"""Publish tagged probe cases: python publish_tagged.py cases.jsonl map.json."""
import importlib.machinery
import importlib.util
import json
import sys
import time

loader = importlib.machinery.SourceFileLoader(
    "wikidot_probe", "/home/roku/.agents/skills/wikidot-py-operations/scripts/wikidot-probe")
spec = importlib.util.spec_from_loader("wikidot_probe", loader)
probe = importlib.util.module_from_spec(spec)
spec.loader.exec_module(probe)

cases_file, map_file = sys.argv[1], sys.argv[2]
cases = [json.loads(line) for line in open(cases_file, encoding="utf-8") if line.strip()]
result = {}
with probe.make_client("sandbox-for-codex", "A") as client:
    if not client.is_logged_in:
        raise SystemExit("login failed")
    site = client.site.get("sandbox-for-codex")
    for case in cases:
        fullname = "muse-probe-suspect-block-" + probe.slugify(case["id"])
        site.page.publish(fullname, title="probe " + case["id"],
                          source=case["source"], tags=case["tags"],
                          verify_source=True)
        saved = probe.read_saved_source(site, fullname)
        result[case["id"]] = {"fullname": fullname, "source": saved,
                              "action": "publish-tags"}
        print(case["id"], "->", fullname, "match=", saved == case["source"],
              flush=True)
        time.sleep(1.0)
with open(map_file, "w", encoding="utf-8") as fh:
    fh.write(json.dumps(result, ensure_ascii=False, indent=1) + "\n")
print("wrote", len(result), "tagged probe pages", flush=True)
