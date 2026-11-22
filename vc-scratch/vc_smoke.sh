#!/bin/bash
# VERIFY-COMBINED smoke battery: the nine canonical smoke sources rendered
# through this tree's reference transform.php render (the harness that
# reproduces the canonical per-case baselines), compared byte-for-byte to
# conformance-refcorr5/final-gates. All outputs are uniquely named scratch
# files; nothing canonical is overwritten.
set -u
ROOT=/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-verify-combined
SC=$ROOT/vc-scratch
BASE=$ROOT/conformance-refcorr5/final-gates
OUT=$SC/vc-smoke-gate.txt
: > "$OUT"
n=0; matched=0
for f in "$ROOT"/conformance-refphp/smoke/*.txt; do
  name=$(basename "$f" .txt)
  php "$ROOT/ref-php/harness/transform.php" render < "$f" \
    > "$SC/vc-smoke-$name.txt" 2> "$SC/vc-smoke-$name.err"
  rc=$?
  if cmp -s "$SC/vc-smoke-$name.txt" "$BASE/smoke-$name.txt"; then
    verdict=MATCH; matched=$((matched+1))
  else
    verdict=DIFF
  fi
  echo "$name.txt $verdict rc=$rc outbytes=$(wc -c < "$SC/vc-smoke-$name.txt") errbytes=$(wc -c < "$SC/vc-smoke-$name.err")" >> "$OUT"
  n=$((n+1))
done
echo "smoke cases: $n" >> "$OUT"
echo "byte-identical: $matched/$n" >> "$OUT"
cat "$OUT"
