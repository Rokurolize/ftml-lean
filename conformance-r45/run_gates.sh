#!/bin/sh
# R4.5 gate reproduction. Run from the worktree root
# (~/workspace/ftml-lean-equivalence-r45/). Assumes the PHP-side
# artifacts (family/notes365/prose740 states and renders) already
# exist under conformance-r45/ (produced on WSL by
# state-restricted.php and render-restricted.php over the full
# 68-rule pipeline; see REPORT-R45.md §2) and the drivers are
# built (lake build lean-ftml-conformance-r41
# lean-ftml-conformance-r42 lean-ftml-conformance-r43
# lean-ftml-conformance-r44 lean-ftml-conformance-r45).
set -e
B=lean-ftml/.lake/build/bin
D=conformance-r45
C="python3 conformance-r45/compare_render.py"

$B/lean-ftml-conformance-r45 --list-rules
$B/lean-ftml-conformance-r45 state < $D/family-states-full.jsonl > $D/family-lean-state.jsonl
$B/lean-ftml-conformance-r45 --e2e-r45 < $D/family-cases.jsonl > $D/family-lean-e2e.jsonl
$C $D/family-renders-full.jsonl $D/family-lean-state.jsonl --detail $D/family-state-detail.jsonl
$C $D/family-renders-full.jsonl $D/family-lean-e2e.jsonl --detail $D/family-e2e-detail.jsonl

$B/lean-ftml-conformance-r45 state < $D/notes365-states-full.jsonl > $D/notes-full-lean-r45-state.jsonl
$B/lean-ftml-conformance-r45 --e2e-r45 < $D/notes365-cases.jsonl > $D/notes-full-lean-r45-e2e.jsonl
$C $D/notes365-renders-full.jsonl $D/notes-full-lean-r45-state.jsonl --detail $D/notes-full-state-detail.jsonl
$C $D/notes365-renders-full.jsonl $D/notes-full-lean-r45-e2e.jsonl --detail $D/notes-full-e2e-detail.jsonl

$B/lean-ftml-conformance-r45 state < $D/prose740-states-full.jsonl > $D/prose-full-lean-r45-state.jsonl
$B/lean-ftml-conformance-r45 --e2e-r45 < $D/prose740-cases.jsonl > $D/prose-full-lean-r45-e2e.jsonl
$C $D/prose740-renders-full.jsonl $D/prose-full-lean-r45-state.jsonl --detail $D/prose-full-state-detail.jsonl
$C $D/prose740-renders-full.jsonl $D/prose-full-lean-r45-e2e.jsonl --detail $D/prose-full-e2e-detail.jsonl

# Regression gates (earlier-stage drivers over their adopted artifacts).
$B/lean-ftml-conformance-r41 state < conformance-r42/notes-prefix-states.jsonl > $D/notes-prefix-lean-r41.jsonl
$B/lean-ftml-conformance-r41 --e2e-r36 < conformance-r42/notes365-cases.jsonl > $D/notes-e2e-lean-r41.jsonl
$C conformance-r42/notes-prefix-renders.jsonl $D/notes-prefix-lean-r41.jsonl --detail $D/reg-r41-state-detail.jsonl
$C conformance-r42/notes-prefix-renders.jsonl $D/notes-e2e-lean-r41.jsonl --detail $D/reg-r41-e2e-detail.jsonl
$B/lean-ftml-conformance-r43 state < conformance-r43/family-states-full.jsonl > $D/family43-lean-state.jsonl
$C conformance-r43/family-renders-full.jsonl $D/family43-lean-state.jsonl --detail $D/reg-r43-family-detail.jsonl
$B/lean-ftml-conformance-r44 state < conformance-r44/family-states-full.jsonl > $D/family44-lean-state.jsonl
$C conformance-r44/family-renders-full.jsonl $D/family44-lean-state.jsonl --detail $D/reg-r44-family-detail.jsonl
