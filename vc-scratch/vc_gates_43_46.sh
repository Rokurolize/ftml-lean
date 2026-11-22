#!/bin/bash
# VERIFY-COMBINED stage gates r43/r44/r45/r46. Every Lean invocation goes
# through the serial queue wrapper; all outputs are uniquely named scratch
# files in vc-scratch and no canonical artifact is overwritten.
set -u
ROOT=/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-verify-combined
LFWD=$ROOT/lean-ftml
BIN=$LFWD/.lake/build/bin
SC=$ROOT/vc-scratch
WRAP=/home/roku/.local/state/wikijump/muse-bhl/tools/lean-build.sh
CMP='python3 '$ROOT'/conformance-r43/compare_render.py'

rebuild() { # exe
  echo "== rebuild $1"
  LAKE_JOBS=2 "$WRAP" "$LFWD" lake build "$1" > "$SC/vc-build-$1.log" 2>&1
  st=$?
  echo "   build $1 exit=$st jobs=$(grep -oE 'Build completed successfully \([0-9]+ jobs\)' "$SC/vc-build-$1.log" | tail -1)"
  return 0
}

run() { # label exe mode input expected
  local label=$1 exe=$2 mode=$3 input=$4 expected=$5
  echo "== $label ($exe $mode)"
  "$WRAP" "$LFWD" "$BIN/$exe" $mode < "$input" > "$SC/vc-$label.jsonl" 2> "$SC/vc-$label.err"
  local rst=$?
  echo "   driver exit=$rst stderr-bytes=$(wc -c < "$SC/vc-$label.err")"
  $CMP "$expected" "$SC/vc-$label.jsonl" --detail "$SC/vc-$label-detail.jsonl" \
    | tee "$SC/vc-$label-comparison.txt"
  echo "   compare exit=${PIPESTATUS[0]}"
}

rebuild lean-ftml-conformance-r43
rebuild lean-ftml-conformance-r44
rebuild lean-ftml-conformance-r45
rebuild lean-ftml-conformance-r46

run r43-family-state lean-ftml-conformance-r43 state \
  "$ROOT/conformance-r43/family-states-full.jsonl" "$ROOT/conformance-r43/family-renders-full.jsonl"
run r43-family-e2e lean-ftml-conformance-r43 --e2e-r43 \
  "$ROOT/conformance-r43/family-cases.jsonl" "$ROOT/conformance-r43/family-renders-full.jsonl"

run r44-family-state lean-ftml-conformance-r44 state \
  "$ROOT/conformance-r44/family-states-full.jsonl" "$ROOT/conformance-r44/family-renders-full.jsonl"
run r44-family-e2e lean-ftml-conformance-r44 --e2e-r44 \
  "$ROOT/conformance-r44/family-cases.jsonl" "$ROOT/conformance-r44/family-renders-full.jsonl"

run r45-family-state lean-ftml-conformance-r45 state \
  "$ROOT/conformance-r45/family-states-full.jsonl" "$ROOT/conformance-r45/family-renders-full.jsonl"
run r45-family-e2e lean-ftml-conformance-r45 --e2e-r45 \
  "$ROOT/conformance-r45/family-cases.jsonl" "$ROOT/conformance-r45/family-renders-full.jsonl"

run r46-family-state lean-ftml-conformance-r46 state \
  "$ROOT/conformance-r46/family-states-full.jsonl" "$ROOT/conformance-r46/family-renders-full.jsonl"
run r46-family-e2e lean-ftml-conformance-r46 --e2e-r46 \
  "$ROOT/conformance-r46/family-cases.jsonl" "$ROOT/conformance-r46/family-renders-full.jsonl"

echo GATES-43-46-DONE
