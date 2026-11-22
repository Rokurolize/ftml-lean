#!/bin/bash
# Stale-audit regeneration driver. Run from the audit root.
# Uses the scratch copy of this tree's canonical ref-php (post ADOPT-CORR / snapshot-25)
# and each stage's own render-restricted.php where one is recorded.
set -u
AUDIT=$(cd "$(dirname "$0")" && pwd)
ROOT=$(cd "$AUDIT/.." && pwd)
SCRATCH="$AUDIT/_scratch"
R="Include,Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Divprefilter,Anchor,User,Blockquote,Heading,Toc,Horiz,Separator,Clearfloat,Break,Span,Size,Div,Divalign,Collapsible,Tabview,Note,Gallery,List,Deflist,Table,Tableadv,Button,Image,Embed,Social,File,Center,Newline,Paragraph,Url,Email,Mathinline,Interwiki,Colortext,Strong,Emphasis,Underline,Strikethrough,Tt,Superscript,Subscript,Typography,Tighten"
RP54=$(python3 -c 'r="'"$R"'".split(","); print(",".join(r[:54]))')

# install the stage's render driver into the scratch harness
install_render() {
  local src="$1"
  cp "$src" "$SCRATCH/harness/render-restricted.php"
}

run_pair() {
  local tree="$1" prefix="$2" cases="$3" rules="$4"
  local out="$AUDIT/$tree/${prefix}"
  ( cd "$SCRATCH" && \
    php harness/state-restricted.php "$rules" < "$cases" > "${out}-states.jsonl" 2> "${out}-states.err" && \
    php harness/render-restricted.php "$rules" < "$cases" > "${out}-renders.jsonl" 2> "${out}-renders.err" )
  printf '%-28s %-18s state=%s render=%s err=%s/%s\n' "$tree" "$prefix" \
    "$(wc -l < "${out}-states.jsonl")" "$(wc -l < "${out}-renders.jsonl")" \
    "$(wc -c < "${out}-states.err")" "$(wc -c < "${out}-renders.err")"
}

mkdir -p "$AUDIT"/{r42,r43,r44,r45,r46,r47,r48,capstone}

# R4.2: its own driver; family corpora at both 54-rule prefix and full 68
install_render "$ROOT/conformance-r42/render-restricted.php"
run_pair r42 family-prefix "$ROOT/conformance-r42/family-cases.jsonl" "$RP54"
run_pair r42 family-full   "$ROOT/conformance-r42/family-cases.jsonl" "$R"
run_pair r42 notes-prefix  "$ROOT/conformance-r42/notes365-cases.jsonl" "$RP54"
run_pair r42 notes-full    "$ROOT/conformance-r42/notes365-cases.jsonl" "$R"

# R4.3 / R4.4 / R4.5 / R4.6: each tree's own driver
for t in r43 r44 r45 r46; do
  install_render "$ROOT/conformance-$t/render-restricted.php"
  for c in family notes365 prose740; do
    run_pair "$t" "$c" "$ROOT/conformance-$t/${c}-cases.jsonl" "$R"
  done
done
# R4.3 R4-C2 family
install_render "$ROOT/conformance-r43/render-restricted.php"
run_pair r43 r4c2 "$ROOT/conformance-r43/r4c2-cases.jsonl" "$R"

# R4.7 / R4.8: no own driver recorded; carried-over R4.6 restricted harness
install_render "$ROOT/conformance-r46/render-restricted.php"
for c in family notes365 prose740; do
  run_pair r47 "$c" "$ROOT/conformance-r47/${c}-cases.jsonl" "$R"
done
run_pair r48 family "$ROOT/conformance-r48/cases.jsonl" "$R"
for c in notes365 prose740; do
  run_pair r48 "$c" "$ROOT/conformance-r48/${c}-cases.jsonl" "$R"
done

# CAPSTONE pooled states (run_oracle.py full) and its spot families
( cd "$ROOT/conformance-capstone" && python3 run_oracle.py full \
    "$ROOT/conformance-capstone/pooled-cases.jsonl" \
    "$AUDIT/capstone/pooled-states.jsonl" )
