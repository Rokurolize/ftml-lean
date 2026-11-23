#!/usr/bin/env bash
# middle2_axiom_audit.sh - reusable audit/gate for the DSH-PROOF-MIDDLE2 proof lane.
# Usage: middle2_axiom_audit.sh [-a AXFILE] <theorem-names-file> <proof-file>...
#   -a AXFILE  file holding Lean `#print axioms` output; use `-a -` to read stdin explicitly.
#              If omitted, non-empty piped stdin is used; otherwise the axiom section is SKIP.
#   --help     print this usage and exit.
# The names file has one fully-qualified theorem name per line; blank lines and lines starting with '#' are ignored.
# Glob expansion of proof files is done by the caller, so pass the expanded paths (quote nothing).
# Check B: each listed name must have a theorem or private theorem declaration in the proof files, matched on its last component.
# Check C: no forbidden token (sorry, sorryAx, native_decide, bv_decide) and no axiom declaration may occur in code.
# Check D: each audited theorem's axiom set must be a subset of [propext, Classical.choice, Quot.sound].
# Prose handling: before scans B and C each file passes through an awk state machine that drops -- line comments, nested /- -/ block comments, and quoted strings.
# So prose such as "-- no sorry here" or a string literal containing "native_decide" cannot create a false finding.
# Tokens are matched as whole words, so an identifier like no_sorry is not flagged, while sorryAx is caught by its own rule.
# Allowed axioms: propext, Classical.choice, Quot.sound.
# Exit status is 0 only when every executed check passes; any FAIL line forces status 1.

set -u

ALLOWED_AXIOMS="propext,Classical.choice,Quot.sound"
FAILURES=0
AX_FILE=""
NAMES_FILE=""
APOS="'"

pass() { echo "[PASS] $*"; }
fail() { echo "[FAIL] $*"; FAILURES=$((FAILURES + 1)); }
warn() { echo "[WARN] $*"; }
skip() { echo "[SKIP] $*"; }

while [ $# -gt 0 ]; do
  case "$1" in
    -a)
      shift
      if [ $# -eq 0 ]; then echo "[FAIL] -a requires a file argument (use - for stdin)"; exit 2; fi
      AX_FILE=$1
      shift
      ;;
    -h|--help)
      sed -n '2,16p' "$0"
      exit 0
      ;;
    --)
      shift
      break
      ;;
    -*)
      echo "[FAIL] unknown option: $1"
      exit 2
      ;;
    *)
      break
      ;;
  esac
done

if [ $# -eq 0 ]; then
  echo "[FAIL] missing theorem-names file"
  echo "Usage: $0 [-a AXFILE] <theorem-names-file> <proof-file>..."
  exit 2
fi
NAMES_FILE=$1
shift
PROOFS=("$@")

if [ ! -r "$NAMES_FILE" ]; then echo "[FAIL] names file not readable: $NAMES_FILE"; exit 2; fi
if [ ${#PROOFS[@]} -eq 0 ]; then echo "[FAIL] no proof files supplied"; exit 2; fi

TMPD=$(mktemp -d) || { echo "[FAIL] mktemp failed"; exit 2; }
trap 'rm -rf "$TMPD"' EXIT HUP INT TERM

# strip_comments FILE: emit FILE with comments and string literals blanked, preserving line numbers.
strip_comments() {
  awk '
  {
    s = $0; out = ""; n = length(s); i = 1
    while (i <= n) {
      c = substr(s, i, 1)
      if (block > 0) {
        two = substr(s, i, 2)
        if (two == "/-") { block++; i += 2; continue }
        if (two == "-/") { block--; i += 2; continue }
        i++; continue
      }
      if (instr) {
        if (c == "\\") { i += 2; continue }
        i++
        if (c == "\"") instr = 0
        continue
      }
      two = substr(s, i, 2)
      if (two == "--") break
      if (two == "/-") { block = 1; i += 2; continue }
      if (c == "\"") { instr = 1; i++; continue }
      out = out c; i++
    }
    print out
  }' "$1"
}

echo "=== middle2 axiom audit ==="
echo "[INFO] names file: $NAMES_FILE"
echo "[INFO] proof files: ${#PROOFS[@]}"

# Validate inputs and build code-only copies once, reused by checks B and C.
missing=0
i=0
for pf in "${PROOFS[@]}"; do
  i=$((i + 1))
  if [ ! -r "$pf" ]; then echo "[FAIL] proof file not readable: $pf"; FAILURES=$((FAILURES + 1)); missing=$((missing + 1)); continue; fi
  strip_comments "$pf" > "$TMPD/code.$i"
done
if [ "$missing" -eq 0 ]; then pass "inputs: all ${#PROOFS[@]} proof file(s) readable"; fi

# Check B: every listed theorem name has a matching declaration.
: > "$TMPD/names.clean"
b_total=0
b_found=0
while IFS= read -r raw || [ -n "$raw" ]; do
  name=$(printf '%s' "$raw" | sed 's/^[[:space:]]*//; s/[[:space:]]*$//')
  [ -z "$name" ] && continue
  case "$name" in \#*) continue ;; esac
  printf '%s\n' "$name" >> "$TMPD/names.clean"
  b_total=$((b_total + 1))
  lc=${name##*.}
  hit=""
  i=0
  for pf in "${PROOFS[@]}"; do
    i=$((i + 1))
    [ -r "$pf" ] || continue
    case "$lc" in
      *[!A-Za-z0-9_$APOS]*)
        found=$(grep -nF -m1 "theorem $lc" "$TMPD/code.$i" || true)
        ;;
      *)
        re="^[[:space:]]*(private[[:space:]]+)?theorem[[:space:]]+([A-Za-z_][A-Za-z0-9_${APOS}]*\.)*${lc}([[:space:]:{(]|$)"
        found=$(grep -nE -m1 "$re" "$TMPD/code.$i" || true)
        ;;
    esac
    if [ -n "$found" ]; then hit="$pf:${found%%:*} ($name -> $lc)"; break; fi
  done
  if [ -n "$hit" ]; then
    b_found=$((b_found + 1))
    echo "[PASS] declaration: $name at $hit"
  else
    fail "declaration: no theorem/private theorem declaration for $name (last component: $lc) in proof files"
  fi
done < "$NAMES_FILE"
if [ "$b_total" -eq 0 ]; then fail "declarations: theorem-names file contains no names"; fi
if [ "$b_found" -eq "$b_total" ] && [ "$b_total" -gt 0 ]; then pass "declarations: $b_found/$b_total listed theorem names found"; else fail "declarations: $b_found/$b_total listed theorem names found"; fi

# Check C: forbidden tokens and axiom declarations in code-only copies.
c_hits=0
i=0
for pf in "${PROOFS[@]}"; do
  i=$((i + 1))
  [ -r "$pf" ] || continue
  for spec in \
    "sorry|\\bsorry\\b" \
    "sorryAx|\\bsorryAx\\b" \
    "native_decide|\\bnative_decide\\b" \
    "bv_decide|\\bbv_decide\\b" \
    "axiom-decl|^[[:space:]]*(private[[:space:]]+)?axiom[[:space:]]"
  do
    label=${spec%%|*}
    re=${spec#*|}
    found=$(grep -nE -m1 "$re" "$TMPD/code.$i" || true)
    if [ -n "$found" ]; then
      fail "forbidden: $pf:$(printf '%s' "$found" | cut -d: -f1) matched '$label' :: $(printf '%s' "$found" | cut -d: -f2-)"
      c_hits=$((c_hits + 1))
    fi
  done
done
if [ "$c_hits" -eq 0 ]; then pass "forbidden-tokens: none of sorry/sorryAx/native_decide/bv_decide/axiom in code of ${#PROOFS[@]} proof file(s)"; else fail "forbidden-tokens: $c_hits finding(s)"; fi

# Check D: parse Lean `#print axioms` output from -a FILE or -a - (stdin).
AX_SRC=""
if [ -n "$AX_FILE" ]; then
  if [ "$AX_FILE" = "-" ]; then
    cat > "$TMPD/axioms.in"
    AX_SRC="$TMPD/axioms.in"
  else
    if [ -r "$AX_FILE" ]; then AX_SRC=$AX_FILE; else fail "axiom output file not readable: $AX_FILE"; fi
  fi
else
  if [ ! -t 0 ]; then
    peek=""
    if IFS= read -r -t 0.05 -n 1 peek 2>/dev/null; then
      { printf '%s' "$peek"; cat; } > "$TMPD/axioms.in"
      AX_SRC="$TMPD/axioms.in"
      echo "[INFO] axioms: reading piped stdin (no -a supplied)"
    fi
  fi
  if [ -z "$AX_SRC" ]; then skip "axioms: no -a supplied and stdin empty, supply -a FILE or -a - to enable the axiom audit"; fi
fi

if [ -n "$AX_SRC" ]; then
  sed -n -E "s/^[[:space:]]*'([^']+)'[[:space:]]+depends[[:space:]]+on[[:space:]]+axioms:[[:space:]]*\[(.*)\][[:space:]]*$/\1|\2/p" "$AX_SRC" \
    | awk -F'|' -v allow="$ALLOWED_AXIOMS" '
      BEGIN { nallow = split(allow, ok, ",") }
      {
        name = $1; list = $2; n = split(list, arr, ","); bad = ""
        for (i = 1; i <= n; i++) {
          a = arr[i]; gsub(/^[[:space:]]+|[[:space:]]+$/, "", a)
          if (a == "") continue
          good = 0
          for (j = 1; j <= nallow; j++) if (a == ok[j]) { good = 1; break }
          if (!good) bad = bad (bad == "" ? "" : ", ") a
        }
        if (bad == "") print "OK|" name "|" list
        else print "BAD|" name "|" bad
      }' > "$TMPD/axrows"
  : > "$TMPD/audited.names"
  ax_total=0
  ax_bad=0
  if [ ! -s "$TMPD/axrows" ]; then
    fail "axioms: no '#print axioms' lines parsed from $AX_SRC"
  else
    while IFS='|' read -r status aname adetail; do
      ax_total=$((ax_total + 1))
      printf '%s\n' "$aname" >> "$TMPD/audited.names"
      if [ "$status" = "BAD" ]; then
        fail "axioms: $aname depends on disallowed axiom(s): [$adetail]"
        ax_bad=$((ax_bad + 1))
      else
        echo "[PASS] axioms: $aname :: [$adetail]"
      fi
      if ! grep -qFx "$aname" "$TMPD/names.clean"; then warn "axioms: audited name $aname is not in the theorem-names file"; fi
    done < "$TMPD/axrows"
    while IFS= read -r nm; do
      if ! grep -qFx "$nm" "$TMPD/audited.names"; then fail "axioms: no '#print axioms' audit line for $nm"; fi
    done < "$TMPD/names.clean"
  fi
  if [ "$ax_bad" -eq 0 ] && [ -s "$TMPD/axrows" ]; then pass "axioms: $ax_total audited theorem(s) within [propext, Classical.choice, Quot.sound]"; fi
fi

if [ "$FAILURES" -eq 0 ]; then
  note=""
  [ -z "$AX_SRC" ] && note=" (axiom audit skipped: pass -a FILE, -a -, or pipe the output)"
  echo "OVERALL: PASS$note"
  exit 0
fi
echo "OVERALL: FAIL ($FAILURES finding(s))"
exit 1
