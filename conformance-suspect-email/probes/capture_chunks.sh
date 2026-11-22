#!/bin/bash
set -u
BASE=/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-suspect-email/conformance-suspect-email/probes
TOOL=/home/roku/.agents/skills/wikidot-py-operations
cd "$TOOL" || exit 1
for i in 0 1 2 3 4 5; do
  out="$BASE/captures-c$i.json"
  for attempt in 1 2 3; do
    scripts/wikidot-python scripts/wikidot-probe capture --site sandbox-for-codex \
      --map "$BASE/map-c$i.json" --out "$out" > "$BASE/capture-c$i.log" 2>&1
    rc=$?
    if [ $rc -eq 0 ]; then echo "chunk $i ok on attempt $attempt"; break; fi
    echo "chunk $i attempt $attempt rc=$rc; retrying"
    sleep 5
  done
done
