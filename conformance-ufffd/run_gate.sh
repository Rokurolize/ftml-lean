#!/bin/sh
# U+FFFD mirror gate. Compares the shared render core, through the
# R4.8 end-to-end pipeline, to the 36 live captures. The reference is
# not the oracle: it fatals on the literal-segment cases.
#
# Self-locating. Builds only the executable it runs.
set -u
SCRIPT_DIR=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
ROOT=$(CDPATH= cd -- "$SCRIPT_DIR/.." && pwd)
LF="$ROOT/lean-ftml"
BIN="$LF/.lake/build/bin"
export PATH="$HOME/.elan/bin:$PATH"

cd "$LF" || exit 1
LAKE_JOBS=2 lake build lean-ftml-conformance-r48 || exit 1

python3 -c '
import json, sys
cases = json.load(open(sys.argv[1], encoding="utf-8"))
out = open(sys.argv[2], "w", encoding="utf-8")
for c in cases:
    out.write(json.dumps({"id": c["id"], "source": c["source"]}, ensure_ascii=False))
    out.write("\n")
' "$SCRIPT_DIR/comparison.json" "$SCRIPT_DIR/cases-e2e.jsonl"

"$BIN/lean-ftml-conformance-r48" --e2e-ufffd \
  < "$SCRIPT_DIR/cases-e2e.jsonl" > "$SCRIPT_DIR/driver-ufffd.jsonl"

python3 "$SCRIPT_DIR/compare_live.py" \
  "$SCRIPT_DIR/comparison.json" "$SCRIPT_DIR/driver-ufffd.jsonl" \
  > "$SCRIPT_DIR/gate-ufffd.txt"
status=$?
cat "$SCRIPT_DIR/gate-ufffd.txt"
exit $status
