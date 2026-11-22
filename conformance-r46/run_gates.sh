#!/bin/sh
# R4.6 gate reproduction. Run from the worktree root
# (~/workspace/ftml-lean-equivalence-r46/). Assumes the PHP-side
# artifacts (family/notes365/prose740 states and renders) already
# exist under conformance-r46/ (produced on WSL by
# state-restricted.php and render-restricted.php over the full
# 68-rule pipeline; see REPORT-R46.md) and the drivers are built
# (lake build lean-ftml-conformance-r41
# lean-ftml-conformance-r44 lean-ftml-conformance-r45
# lean-ftml-conformance-r46).
B=lean-ftml/.lake/build/bin
D=conformance-r46
C="python3 conformance-r46/compare_render.py"

$B/lean-ftml-conformance-r46 --list-rules
$B/lean-ftml-conformance-r46 state < $D/family-states-full.jsonl > $D/family-lean-state.jsonl
$B/lean-ftml-conformance-r46 --e2e-r46 < $D/family-cases.jsonl > $D/family-lean-e2e.jsonl
$C $D/family-renders-full.jsonl $D/family-lean-state.jsonl --detail $D/family-state-detail.jsonl
$C $D/family-renders-full.jsonl $D/family-lean-e2e.jsonl --detail $D/family-e2e-detail.jsonl

$B/lean-ftml-conformance-r46 state < $D/notes365-states-full.jsonl > $D/notes-full-lean-r46-state.jsonl
$B/lean-ftml-conformance-r46 --e2e-r46 < $D/notes365-cases.jsonl > $D/notes-full-lean-r46-e2e.jsonl
$C $D/notes365-renders-full.jsonl $D/notes-full-lean-r46-state.jsonl --detail $D/notes-full-state-detail.jsonl
$C $D/notes365-renders-full.jsonl $D/notes-full-lean-r46-e2e.jsonl --detail $D/notes-full-e2e-detail.jsonl

$B/lean-ftml-conformance-r46 state < $D/prose740-states-full.jsonl > $D/prose-full-lean-r46-state.jsonl
$B/lean-ftml-conformance-r46 --e2e-r46 < $D/prose740-cases.jsonl > $D/prose-full-lean-r46-e2e.jsonl
$C $D/prose740-renders-full.jsonl $D/prose-full-lean-r46-state.jsonl --detail $D/prose-full-state-detail.jsonl
$C $D/prose740-renders-full.jsonl $D/prose-full-lean-r46-e2e.jsonl --detail $D/prose-full-e2e-detail.jsonl

# Regression gates (earlier-stage drivers over their adopted artifacts).
$B/lean-ftml-conformance-r41 state < conformance-r42/notes-prefix-states.jsonl > $D/notes-prefix-lean-r41.jsonl
$B/lean-ftml-conformance-r41 --e2e-r36 < conformance-r42/notes365-cases.jsonl > $D/notes-e2e-lean-r41.jsonl
python3 conformance-r42/compare_render.py conformance-r42/notes-prefix-renders.jsonl $D/notes-prefix-lean-r41.jsonl --detail $D/reg-r41-state-detail.jsonl
python3 conformance-r42/compare_render.py conformance-r42/notes-prefix-renders.jsonl $D/notes-e2e-lean-r41.jsonl --detail $D/reg-r41-e2e-detail.jsonl
$B/lean-ftml-conformance-r44 state < conformance-r44/family-states-full.jsonl > $D/family44-lean-state.jsonl
python3 conformance-r44/compare_render.py conformance-r44/family-renders-full.jsonl $D/family44-lean-state.jsonl --detail $D/reg-r44-family-detail.jsonl
$B/lean-ftml-conformance-r45 state < conformance-r45/family-states-full.jsonl > $D/family45-lean-state.jsonl
python3 conformance-r45/compare_render.py conformance-r45/family-renders-full.jsonl $D/family45-lean-state.jsonl --detail $D/reg-r45-family-detail.jsonl
