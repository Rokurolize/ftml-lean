#!/bin/bash
# VERIFY-COMBINED r48 gate suite. Mirrors conformance-r48/run_gates.sh but
# routes every Lean invocation through the serial queue wrapper and writes
# every output into uniquely named vc-scratch files (canonical artifacts are
# never overwritten). The canonical python checks and comparison logic are
# used unchanged.
set -u
ROOT=/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-verify-combined
LFWD=$ROOT/lean-ftml
BIN=$LFWD/.lake/build/bin
SC=$ROOT/vc-scratch
WRAP=/home/roku/.local/state/wikijump/muse-bhl/tools/lean-build.sh
C48=$ROOT/conformance-r48
C42=$ROOT/conformance-r42
C47=$ROOT/conformance-r47
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
compare() { # expected, got, detail prefix, gate file prefix
  python3 "$C48/compare_render.py" "$1" "$2" --detail "$SC/vc-r48-$3-detail.jsonl" \
    | tee "$SC/vc-r48-$4.txt"
  return 0
}
wrapbin() { # exe args... (stdin/stdout already redirected by caller)
  "$WRAP" "$LFWD" "$BIN/$@"
}

note "rebuild drivers by name through wrapper"
LAKE_JOBS=2 "$WRAP" "$LFWD" lake build lean-ftml lean-ftml-conformance-r48 \
  lean-ftml-conformance-r47 lean-ftml-conformance-r41 \
  > "$SC/vc-r48-rebuild.log" 2>&1
echo "   rebuild exit=$? jobs=$(grep -oE 'Build completed successfully \([0-9]+ jobs\)' "$SC/vc-r48-rebuild.log" | tail -1)"

note "hygiene: no sorry token in any Lean source outside comments"
python3 "$C48/verify_hygiene.py" "$LFWD" > "$SC/vc-r48-hygiene.log" 2>&1 \
  && echo "OK hygiene" || { echo "DRIFT hygiene"; cat "$SC/vc-r48-hygiene.log"; fail=1; }

note "axiom audit (Main #print axioms) through wrapper"
LAKE_JOBS=2 "$WRAP" "$LFWD" lake env lean Main.lean > "$SC/vc-r48-axioms-build.txt" 2>&1
echo "   lean exit=$?"
if grep -q "sorryAx" "$SC/vc-r48-axioms-build.txt"; then
  echo "DRIFT axioms: sorryAx present"; grep "sorryAx" "$SC/vc-r48-axioms-build.txt"; fail=1
else echo "OK  axioms: no sorryAx in build"; fi
python3 "$C48/verify_axioms.py" "$SC/vc-r48-axioms-build.txt" > "$SC/vc-r48-verify-axioms.log" 2>&1 \
  && tail -1 "$SC/vc-r48-verify-axioms.log" \
  || { echo "DRIFT verify_axioms"; cat "$SC/vc-r48-verify-axioms.log"; fail=1; }

note "tier accounting"
wrapbin lean-ftml-conformance-r48 --list-rules > "$SC/vc-r48-list-rules.json" 2> "$SC/vc-r48-list-rules.err"
n=$(python3 -c 'import json;print(len(json.load(open("'$SC'/vc-r48-list-rules.json"))))')
expect "mirrored rules" "61" "$n"
wrapbin lean-ftml-conformance-r48 --embed-patterns-ok > "$SC/vc-r48-embed-patterns.txt" 2> "$SC/vc-r48-embed.err"
n=$(tr -d '\r\n' < "$SC/vc-r48-embed-patterns.txt")
expect "embed patterns" "75" "$n"

note "corpus provenance"
python3 "$C48/verify_provenance.py" "$ROOT" > "$SC/vc-r48-provenance.log" 2>&1 \
  && echo "OK provenance" || { echo "DRIFT provenance"; cat "$SC/vc-r48-provenance.log"; fail=1; }

note "gate 1 family state"
wrapbin lean-ftml-conformance-r48 < "$C48/states-full.jsonl" > "$SC/vc-r48-driver-state.jsonl" 2> "$SC/vc-r48-driver-state.err"
compare "$C48/renders-full.jsonl" "$SC/vc-r48-driver-state.jsonl" state gate-state
check_fail0 "$SC/vc-r48-gate-state.txt"
echo "    counts $(counts "$SC/vc-r48-gate-state.txt")"
python3 "$C48/check_exclusions.py" "$SC/vc-r48-state-detail.jsonl" \
  "$(cat "$SC/vc-r48-list-rules.json")" "$SC/vc-r48-exclusion-audit-state.txt" \
  > "$SC/vc-r48-excl-state.log" 2>&1 \
  && echo "OK exclusion-audit-state" || { echo "DRIFT exclusion-audit-state"; cat "$SC/vc-r48-excl-state.log"; fail=1; }

note "gate 1 family e2e"
wrapbin lean-ftml-conformance-r48 --e2e-r48 < "$C48/cases.jsonl" > "$SC/vc-r48-driver-e2e.jsonl" 2> "$SC/vc-r48-driver-e2e.err"
compare "$C48/renders-full.jsonl" "$SC/vc-r48-driver-e2e.jsonl" e2e gate-e2e
check_fail0 "$SC/vc-r48-gate-e2e.txt"
echo "    counts $(counts "$SC/vc-r48-gate-e2e.txt")"
python3 "$C48/check_exclusions.py" "$SC/vc-r48-e2e-detail.jsonl" \
  "$(cat "$SC/vc-r48-list-rules.json")" "$SC/vc-r48-exclusion-audit-e2e.txt" \
  > "$SC/vc-r48-excl-e2e.log" 2>&1 \
  && echo "OK exclusion-audit-e2e" || { echo "DRIFT exclusion-audit-e2e"; cat "$SC/vc-r48-excl-e2e.log"; fail=1; }

note "gate 2 notes365 state"
wrapbin lean-ftml-conformance-r48 < "$C48/notes365-states-full.jsonl" > "$SC/vc-r48-driver-notes.jsonl" 2> "$SC/vc-r48-driver-notes.err"
compare "$C48/notes365-renders-full.jsonl" "$SC/vc-r48-driver-notes.jsonl" notes gate-notes
check_fail0 "$SC/vc-r48-gate-notes.txt"
echo "    counts $(counts "$SC/vc-r48-gate-notes.txt")"

note "gate 2 notes365 e2e"
wrapbin lean-ftml-conformance-r48 --e2e-r48 < "$C48/notes365-cases.jsonl" > "$SC/vc-r48-driver-notes-e2e.jsonl" 2> "$SC/vc-r48-driver-notes-e2e.err"
compare "$C48/notes365-renders-full.jsonl" "$SC/vc-r48-driver-notes-e2e.jsonl" notes-e2e gate-notes-e2e
check_fail0 "$SC/vc-r48-gate-notes-e2e.txt"
echo "    counts $(counts "$SC/vc-r48-gate-notes-e2e.txt")"

note "gate 2 prose740 state"
wrapbin lean-ftml-conformance-r48 < "$C48/prose740-states-full.jsonl" > "$SC/vc-r48-driver-prose.jsonl" 2> "$SC/vc-r48-driver-prose.err"
compare "$C48/prose740-renders-full.jsonl" "$SC/vc-r48-driver-prose.jsonl" prose gate-prose
check_fail0 "$SC/vc-r48-gate-prose.txt"
echo "    counts $(counts "$SC/vc-r48-gate-prose.txt")"

note "reported (non-gate) prose740 e2e"
wrapbin lean-ftml-conformance-r48 --e2e-r48 < "$C48/prose740-cases.jsonl" > "$SC/vc-r48-driver-prose-e2e.jsonl" 2> "$SC/vc-r48-driver-prose-e2e.err"
compare "$C48/prose740-renders-full.jsonl" "$SC/vc-r48-driver-prose-e2e.jsonl" prose-e2e gate-prose-e2e
echo "    counts $(counts "$SC/vc-r48-gate-prose-e2e.txt")"

note "gate 3 r41 notes state"
wrapbin lean-ftml-conformance-r41 < "$C42/notes-prefix-states.jsonl" > "$SC/vc-r48-driver-r41-prefix.jsonl" 2> "$SC/vc-r48-driver-r41-prefix.err"
compare "$C42/notes-prefix-renders.jsonl" "$SC/vc-r48-driver-r41-prefix.jsonl" r41-state gate-r41-state
check_fail0 "$SC/vc-r48-gate-r41-state.txt"
echo "    counts $(counts "$SC/vc-r48-gate-r41-state.txt")"

note "gate 3 r41 notes e2e"
wrapbin lean-ftml-conformance-r41 --e2e-r36 < "$C42/notes365-cases.jsonl" > "$SC/vc-r48-driver-r41-e2e.jsonl" 2> "$SC/vc-r48-driver-r41-e2e.err"
compare "$C42/notes-prefix-renders.jsonl" "$SC/vc-r48-driver-r41-e2e.jsonl" r41-e2e gate-r41-e2e
check_fail0 "$SC/vc-r48-gate-r41-e2e.txt"
echo "    counts $(counts "$SC/vc-r48-gate-r41-e2e.txt")"

note "gate 3 r47 family state"
wrapbin lean-ftml-conformance-r47 < "$C47/family-states-full.jsonl" > "$SC/vc-r48-driver-r47-family.jsonl" 2> "$SC/vc-r48-driver-r47-family.err"
compare "$C47/family-renders-full.jsonl" "$SC/vc-r48-driver-r47-family.jsonl" r47-family gate-r47-family
expect_counts "R4.7 family state" "156/147/9/0/0" "$SC/vc-r48-gate-r47-family.txt"

note "close-out: token-free disposal"
python3 "$C48/verify_token_free.py" "$ROOT" \
  "$C48/states-full.jsonl" "$C48/notes365-states-full.jsonl" \
  "$C48/prose740-states-full.jsonl" "$C42/notes-prefix-states.jsonl" \
  "$C47/family-states-full.jsonl" > "$SC/vc-r48-token-free.log" 2>&1 \
  && echo "OK token-free" || { echo "DRIFT token-free"; cat "$SC/vc-r48-token-free.log"; fail=1; }

note "candidate audit"
python3 "$C48/audit_candidates.py" > "$SC/vc-r48-candidate-audit.txt" 2> "$SC/vc-r48-candidate-audit.err" \
  && echo "OK candidate-audit" || { echo "DRIFT candidate-audit"; cat "$SC/vc-r48-candidate-audit.err"; fail=1; }
tail -1 "$SC/vc-r48-candidate-audit.txt"

echo "GATES-DONE fail=$fail"
exit $fail
