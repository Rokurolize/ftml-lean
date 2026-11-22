#!/usr/bin/env python3
"""Resumable page creation using the standard wikidot-probe tool functions.

Uses probe.make_client / probe.save_with_verify / probe.slugify imported from
the campaign-standard tool itself. Skips pages whose saved source already
matches cases.jsonl and never re-saves them. Logs one status line per case to
create-resume.log and writes create-resume-status.json. Longer pacing than the
default create batch because AMC savePage draws try_again under fleet load.
"""
import importlib.machinery
import importlib.util
import json
import time

BASE = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5C-R3"
P = "/home/roku/.agents/skills/wikidot-py-operations/scripts/wikidot-probe"
loader = importlib.machinery.SourceFileLoader("wikidot_probe", P)
spec = importlib.util.spec_from_loader("wikidot_probe", loader)
probe = importlib.util.module_from_spec(spec)
spec.loader.exec_module(probe)

PREFIX = "muse-probe-round5c-r3-"
PACE = 2.5
rows = [json.loads(line) for line in open(BASE + "/cases.jsonl", encoding="utf-8") if line.strip()]
status = {}
log = open(BASE + "/create-resume.log", "a", encoding="utf-8")

with probe.make_client("sandbox-for-codex", "A") as client:
    site = client.site.get("sandbox-for-codex")
    for row in rows:
        cid = row["id"]
        fullname = PREFIX + probe.slugify(cid)
        existing = probe.read_saved_source(site, fullname)
        if existing == row["source"]:
            status[cid] = {"fullname": fullname, "state": "MATCH"}
            log.write(f"{cid} {fullname} MATCH (skipped)\n")
            log.flush()
            continue
        if existing is not None:
            status[cid] = {"fullname": fullname, "state": "DRIFT"}
            log.write(f"{cid} {fullname} DRIFT (not re-saved; saved len {len(existing)})\n")
            log.flush()
            continue
        try:
            action = probe.save_with_verify(site, fullname, f"probe {cid}", row["source"],
                                            PACE, attempts=6)
            status[cid] = {"fullname": fullname, "state": "SAVED", "action": action}
            log.write(f"{cid} {fullname} SAVED {action}\n")
        except SystemExit as exc:
            status[cid] = {"fullname": fullname, "state": "FAILED", "error": str(exc)[:300]}
            log.write(f"{cid} {fullname} FAILED {str(exc)[:200]}\n")
        log.flush()
        time.sleep(PACE)

with open(BASE + "/create-resume-status.json", "w", encoding="utf-8") as fh:
    json.dump(status, fh, ensure_ascii=False, indent=1)
    fh.write("\n")
log.close()
print(json.dumps({k: v["state"] for k, v in status.items()}, indent=1))
