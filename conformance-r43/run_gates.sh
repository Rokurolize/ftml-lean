#!/bin/bash
# R4.3 gate comparisons (driver outputs already produced; see
# REPORT-R43.md section 3 for the full procedure). Each comparison
# writes <name>-comparison.txt and <name>-detail.jsonl here.
set -u
cd "$(dirname "$0")/.."
C="python3 conformance-r43/compare_render.py"
D=conformance-r43

run() { # name expected got
  echo "== $1" 
  $C "$2" "$3" --detail "$D/$1-detail.jsonl" | tee "$D/$1-comparison.txt"
}

run family-state   $D/family-renders-full.jsonl   $D/family-lean-state.jsonl
run family-e2e     $D/family-renders-full.jsonl   $D/family-lean-e2e.jsonl
run notes-full-state $D/notes365-renders-full.jsonl $D/notes-full-lean-r43-state.jsonl
run notes-full-e2e   $D/notes365-renders-full.jsonl $D/notes-full-lean-r43-e2e.jsonl
run prose-full-state $D/prose740-renders-full.jsonl $D/prose-full-lean-r43-state.jsonl
run prose-full-e2e   $D/prose740-renders-full.jsonl $D/prose-full-lean-r43-e2e.jsonl
run reg-r41-state  conformance-r42/notes-prefix-renders.jsonl $D/notes-prefix-lean-r41.jsonl
run reg-r41-e2e    conformance-r42/notes-prefix-renders.jsonl $D/notes-e2e-lean-r41.jsonl
run reg-r42-prefix conformance-r42/prefix-renders.jsonl $D/prose-prefix-lean-r42.jsonl
