#!/bin/sh
# R4.8 gate reproduction (render-equivalence tier close-out).
#
# Self-locating: run as `sh conformance-r48/run_gates.sh` from anywhere in
# the worktree. Assumes the PHP-side artifacts (family/notes365/prose740
# states and renders, assembled by assemble_corpus.py and the restricted
# harnesses) are already on disk under conformance-r48/, and the R4.2 /
# R4.7 regression artifacts are on disk under conformance-r42/ and
# conformance-r47/. Every executable used is built explicitly by name.
#
# Gates (BRIEF-R48.md §Gates):
#   1 family gate: state + e2e, every exclusion named to its cause
#   2 full pipeline: notes and prose against the R4.7-adopted baselines
#     (notes 364/1/0 both modes, prose 671/69/0 state mode) -- these are
#     movement references, not R4.8 targets; the R4.8 ceiling is measured
#     by FAIL 0 plus the reported case-by-case movement. Prose e2e is
#     reported but is not a brief gate: R4.7's 4 tabview-counter failures
#     remain.
#   3 regressions: R4.1 notes and R4.7 family (147/9/0 state) re-run with
#     the same drivers and artifacts; movement is reported, not suppressed
#   4 hygiene: green build, no sorry, axiom audit, 61 rules, 75 patterns (REFCORR4 retired digg)
#   plus the close-out duties: token-free disposal, provenance collisions,
#   render-tier accounting, and the candidate audit.
set -u
SCRIPT_DIR=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
ROOT=$(CDPATH= cd -- "$SCRIPT_DIR/.." && pwd)
LF="$ROOT/lean-ftml"
BIN="$LF/.lake/build/bin"
C48="$ROOT/conformance-r48"
C42="$ROOT/conformance-r42"
C47="$ROOT/conformance-r47"
export PATH="$HOME/.elan/bin:$PATH"

fail=0
note() { echo "== $*"; }
expect() {
  if [ "$2" = "$3" ]; then echo "OK  $1: $3"; else
    echo "DRIFT $1: expected [$2] got [$3]"; fail=1; fi
}
counts() {
  awk '/^TOTAL /{t=$2} /^PASS /{p=$2} /^EXCLUDED /{e=$2} /^FAIL /{f=$2}
       /^FATAL-AGREE /{a=$2} END{printf "%s/%s/%s/%s/%s",t,p,e,f,a}' "$1"
}
expect_counts() { expect "$1" "$2" "$(counts "$3")"; }
check_fail0() {
  if grep -q '^FAIL 0$' "$1"; then echo "OK  $1: FAIL 0"; else
    echo "DRIFT $1: FAIL > 0"; fail=1; fi
}
compare() { # expected renders, got driver, detail prefix, gate file name
  python3 "$C48/compare_render.py" "$1" "$2" --detail "$3" | tee "$4"
  return 0   # the FAIL assertion is made by check_fail0 / expect_counts
}

cd "$LF" || exit 1

note "build: library + every executable used, built explicitly by name"
LAKE_JOBS=2 lake build lean-ftml lean-ftml-conformance-r48 \
  lean-ftml-conformance-r47 lean-ftml-conformance-r41 || exit 1

note "hygiene: no sorry token in any Lean source outside comments"
python3 "$C48/verify_hygiene.py" "$LF" || fail=1

note "hygiene: axiom audit (all 21 R4.8 theorems, via Main #print axioms)"
LAKE_JOBS=2 lake env lean Main.lean > "$C48/axioms-build.txt" 2>&1
if grep -q "sorryAx" "$C48/axioms-build.txt"; then
  echo "DRIFT axioms: sorryAx present"; grep "sorryAx" "$C48/axioms-build.txt"; fail=1
else echo "OK  axioms: no sorryAx in build"; fi
python3 "$C48/verify_axioms.py" "$C48/axioms-build.txt" || fail=1

note "tier accounting: mirrored rules and embed allowlist"
n=$("$BIN/lean-ftml-conformance-r48" --list-rules | python3 -c 'import json,sys; print(len(json.load(sys.stdin)))')
expect "mirrored rules" "61" "$n"
n=$("$BIN/lean-ftml-conformance-r48" --embed-patterns-ok)
expect "embed patterns" "75" "$n"

note "corpus provenance: raw-id collision count and namespaced uniqueness"
python3 "$C48/verify_provenance.py" "$ROOT" || fail=1

note "gate 1: family gate (state mode)"
"$BIN/lean-ftml-conformance-r48" < "$C48/states-full.jsonl" \
  > "$C48/driver-r48.jsonl"
compare "$C48/renders-full.jsonl" "$C48/driver-r48.jsonl" \
  "$C48/detail-state.jsonl" "$C48/gate-state.txt"
check_fail0 "$C48/gate-state.txt"
echo "    counts(TOTAL/PASS/EXCLUDED/FAIL/FATAL-AGREE) $(counts "$C48/gate-state.txt")"
python3 "$C48/check_exclusions.py" "$C48/detail-state.jsonl" \
  "$($BIN/lean-ftml-conformance-r48 --list-rules)" \
  "$C48/exclusion-audit-state.txt" || fail=1

note "gate 1: family gate (e2e mode)"
"$BIN/lean-ftml-conformance-r48" --e2e-r48 < "$C48/cases.jsonl" \
  > "$C48/driver-r48-e2e.jsonl"
compare "$C48/renders-full.jsonl" "$C48/driver-r48-e2e.jsonl" \
  "$C48/detail-e2e.jsonl" "$C48/gate-e2e.txt"
check_fail0 "$C48/gate-e2e.txt"
echo "    counts $(counts "$C48/gate-e2e.txt")"
python3 "$C48/check_exclusions.py" "$C48/detail-e2e.jsonl" \
  "$($BIN/lean-ftml-conformance-r48 --list-rules)" \
  "$C48/exclusion-audit-e2e.txt" || fail=1

note "gate 2: full pipeline, notes365 (state mode)"
"$BIN/lean-ftml-conformance-r48" < "$C48/notes365-states-full.jsonl" \
  > "$C48/driver-notes365.jsonl"
compare "$C48/notes365-renders-full.jsonl" "$C48/driver-notes365.jsonl" \
  "$C48/detail-notes.jsonl" "$C48/gate-notes.txt"
check_fail0 "$C48/gate-notes.txt"
echo "    counts (R4.7 baseline 365/364/1/0/0): $(counts "$C48/gate-notes.txt")"

note "gate 2: full pipeline, notes365 (e2e mode)"
"$BIN/lean-ftml-conformance-r48" --e2e-r48 < "$C48/notes365-cases.jsonl" \
  > "$C48/driver-notes365-e2e.jsonl"
compare "$C48/notes365-renders-full.jsonl" "$C48/driver-notes365-e2e.jsonl" \
  "$C48/detail-notes-e2e.jsonl" "$C48/gate-notes-e2e.txt"
check_fail0 "$C48/gate-notes-e2e.txt"
echo "    counts (R4.7 baseline 365/364/1/0/0): $(counts "$C48/gate-notes-e2e.txt")"

note "gate 2: full pipeline, prose740 (state mode)"
"$BIN/lean-ftml-conformance-r48" < "$C48/prose740-states-full.jsonl" \
  > "$C48/driver-prose740.jsonl"
compare "$C48/prose740-renders-full.jsonl" "$C48/driver-prose740.jsonl" \
  "$C48/detail-prose.jsonl" "$C48/gate-prose.txt"
check_fail0 "$C48/gate-prose.txt"
echo "    counts (R4.7 baseline 740/671/69/0/0): $(counts "$C48/gate-prose.txt")"

note "reported (non-gate): prose740 e2e, R4.7's four counter failures persist"
"$BIN/lean-ftml-conformance-r48" --e2e-r48 < "$C48/prose740-cases.jsonl" \
  > "$C48/driver-prose740-e2e.jsonl"
compare "$C48/prose740-renders-full.jsonl" "$C48/driver-prose740-e2e.jsonl" \
  "$C48/detail-prose-e2e.jsonl" "$C48/gate-prose-e2e.txt"
echo "    counts (R4.7 baseline 740/667/69/4/0): $(counts "$C48/gate-prose-e2e.txt")"
echo "    remaining failures are the named tabview counter class"

note "gate 3: regression R4.1 notes (state mode, R4.1 driver)"
"$BIN/lean-ftml-conformance-r41" < "$C42/notes-prefix-states.jsonl" \
  > "$C48/driver-r41-prefix.jsonl"
compare "$C42/notes-prefix-renders.jsonl" "$C48/driver-r41-prefix.jsonl" \
  "$C48/detail-r41-state.jsonl" "$C48/gate-r41-state.txt"
check_fail0 "$C48/gate-r41-state.txt"
echo "    counts (R4.7 adopted 365/364/1/0/0): $(counts "$C48/gate-r41-state.txt")"

note "gate 3: regression R4.1 notes (e2e mode, R4.1 driver)"
"$BIN/lean-ftml-conformance-r41" --e2e-r36 < "$C42/notes365-cases.jsonl" \
  > "$C48/driver-r41-e2e.jsonl"
compare "$C42/notes-prefix-renders.jsonl" "$C48/driver-r41-e2e.jsonl" \
  "$C48/detail-r41-e2e.jsonl" "$C48/gate-r41-e2e.txt"
check_fail0 "$C48/gate-r41-e2e.txt"
echo "    counts (R4.7 adopted 365/364/1/0/0): $(counts "$C48/gate-r41-e2e.txt")"

note "gate 3: regression R4.7 family (state mode, R4.7 driver)"
"$BIN/lean-ftml-conformance-r47" < "$C47/family-states-full.jsonl" \
  > "$C48/driver-r47-family.jsonl"
compare "$C47/family-renders-full.jsonl" "$C48/driver-r47-family.jsonl" \
  "$C48/detail-r47-family.jsonl" "$C48/gate-r47-family.txt"
expect_counts "R4.7 family state" "156/147/9/0/0" "$C48/gate-r47-family.txt"

note "close-out: token-free disposal verification"
python3 "$C48/verify_token_free.py" "$ROOT" \
  "$C48/states-full.jsonl" "$C48/notes365-states-full.jsonl" \
  "$C48/prose740-states-full.jsonl" "$C42/notes-prefix-states.jsonl" \
  "$C47/family-states-full.jsonl" || fail=1

note "candidate audit: fresh family renders vs historical corrected records"
python3 "$C48/audit_candidates.py" > "$C48/candidate-audit.txt" || fail=1
tail -1 "$C48/candidate-audit.txt"

echo "GATES-DONE fail=$fail"
exit $fail
