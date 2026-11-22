#!/bin/bash
# Capture #print axioms for the five NATIVE-RESTORE statements.
# Usage: run_axioms.sh <label>   (label is e.g. before or after)
# Each harness is a byte copy of the placed spec file plus appended
# #print axioms commands; the propositions and proofs are untouched.
set -u
LABEL="${1:?usage: run_axioms.sh <label>}"
ROOT=/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-native-restore
LEAN="$ROOT/lean-ftml"
SCRATCH="$ROOT/native-restore-axioms"
WRAPPER="$HOME/.local/state/wikijump/muse-bhl/tools/lean-build.sh"
mkdir -p "$SCRATCH"
OUT="$SCRATCH/$LABEL-axioms.txt"
: > "$OUT"

cp "$LEAN/LeanFtml/SpecInline.lean" "$SCRATCH/HarnessInline.lean"
cp "$LEAN/LeanFtml/SpecRawhead.lean" "$SCRATCH/HarnessRawhead.lean"
cp "$LEAN/LeanFtml/SpecInteract.lean" "$SCRATCH/HarnessInteract.lean"

cat >> "$SCRATCH/HarnessInline.lean" <<'EOF'

#print axioms LeanFtml.spec_inline_url_plain
#print axioms LeanFtml.spec_inline_url_hash_target_kept
EOF
cat >> "$SCRATCH/HarnessRawhead.lean" <<'EOF'

#print axioms LeanFtml.spec_rawold_backticks_literal
EOF
cat >> "$SCRATCH/HarnessInteract.lean" <<'EOF'

#print axioms LeanFtml.suspect_iframe_src_apostrophe
#print axioms LeanFtml.suspect_file_anchor_apostrophe
EOF

for f in HarnessInline HarnessRawhead HarnessInteract; do
  echo "===== $f ($LABEL) =====" >> "$OUT"
  ( cd "$LEAN" && "$WRAPPER" "$LEAN" lake env lean "$SCRATCH/$f.lean" ) >> "$OUT" 2>&1
  echo "===== $f EXIT=$? =====" >> "$OUT"
done
echo "AXIOMS-CAPTURED=$OUT"
