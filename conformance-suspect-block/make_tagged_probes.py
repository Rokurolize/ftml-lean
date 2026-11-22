#!/usr/bin/env python3
"""Publish the tagged-alpha SUSPECT-BLOCK probe pages with wikidot.py.

The bundled wikidot-probe CLI has no tag subcommand; site.page.publish with
tags=["alpha"] is the standard campaign route for both Iftags polarities.
Saved sources are read back so wikidot-probe capture can verify them.
"""
import importlib.machinery
import importlib.util
import json
import os
import time

loader = importlib.machinery.SourceFileLoader(
    "wikidot_probe", "/home/roku/.agents/skills/wikidot-py-operations/scripts/wikidot-probe")
spec = importlib.util.spec_from_loader("wikidot_probe", loader)
probe = importlib.util.module_from_spec(spec)
spec.loader.exec_module(probe)

OUT = os.path.dirname(os.path.abspath(__file__))
PREFIX = "muse-probe-suspect-block-"
SITE = "sandbox-for-codex"
cases = [json.loads(line) for line in
         open(os.path.join(OUT, "probe-tagged.jsonl"), encoding="utf-8") if line.strip()]
result = {}
with probe.make_client(SITE, "A") as client:
    if not client.is_logged_in:
        raise SystemExit("login failed")
    site = client.site.get(SITE)
    for case in cases:
        fullname = PREFIX + probe.slugify(case["id"])
        res = site.page.publish(fullname, title="probe " + case["id"],
                                source=case["source"], tags=case["tags"],
                                verify_source=True)
        saved = probe.read_saved_source(site, fullname)
        result[case["id"]] = {"fullname": fullname, "source": saved,
                              "action": "publish-tags"}
        print(case["id"], "->", fullname, "match=", saved == case["source"],
              flush=True)
        time.sleep(1.0)
with open(os.path.join(OUT, "map-tagged.json"), "w", encoding="utf-8") as fh:
    fh.write(json.dumps(result, ensure_ascii=False, indent=1) + "\n")
print("wrote", len(result), "tagged probe pages", flush=True)
