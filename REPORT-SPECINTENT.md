# REPORT-SPECINTENT — elaborate `SpecIntent.lean` against the current mirror and classify every statement

This lane carried out BRIEF-SPECINTENT.md in full. The canonical tree at this path is the post-REFCORR4, post-TABLEADV-FIX state: the reference and mirror already carry the Div escaping and placeholder-clearing corrections, while the list-case, Colortext, Date and Freelink corrections are queued as REFCORR5 batches 1, 2, 4 and 5. Live Wikidot behavior is definitional throughout; the evidence order used here is (1) the ftml corpus and integration records as reflected in this tree's mirror, (2) the frozen parity captures, and (3) the coordinator's fresh live sandbox probes in `conformance-spec2-adjudicate/`. No ftml was edited, no cargo was run, no repository-local git identity was set, and every Lean invocation below went through the serial queue wrapper `~/.local/state/wikijump/muse-bhl/tools/lean-build.sh`.

## 1. Method and build evidence

The mirror was built from a cold tree with `lean-build.sh <workdir> lake build LeanFtml`: 104 jobs, `Build completed successfully`, exit 0, no errors (only the tree's pre-existing linter warnings in Include, IncludeGrammar, BlockEnd, Depth, FrameRules, FormRawRules, NextRules, Middle2Rules, Pipeline, CoverageProse, TableadvEnum, IncludeRule, CoverageNotes, ProseRender, InlineRender, ListTableRender, RawHeadingRender and InteractiveRender). `SpecIntent.lean` was then elaborated with `lean-build.sh <workdir> lake env lean LeanFtml/SpecIntent.lean`: exit 0, zero errors, zero warnings from the spec file. This is the first elaboration of this file against the current canonical mirror. A separate `lean-build.sh <workdir> lake build LeanFtml.SpecIntent` produced the spec module's own olean (15 jobs, exit 0) so that the axiom audit could reference its declarations; that olean is a build artifact only, and the spec file remains deliberately unimported by `LeanFtml.lean`, exactly as in every prior spec pass.

The axiom audit used `#print axioms` on all 43 public theorems (the six `private` helper theorems are not statements and are not counted), with the audit lines appended to a temporary copy of the spec file and elaborated under the same wrapper. Counterexample evaluations used `#eval` on the spec's own model functions in that same temporary file. The coordinator's adjudication captures were read from `conformance-spec2-adjudicate/spec2-captures.json`, `spec2-cases.jsonl` and `spec2-ref-out.jsonl`; the sibling-shape evidence was read from `REPORT-AGY-SPEC2.md` and `conformance-agy-spec2/`.

One observation important for reading the table: in this file all 43 statements are theorems of a self-contained intent model defined inside `SpecIntent.lean` itself; the only mirror symbol they consume is `litBytes`. Consequently every statement elaborates. The seven FALSE classifications below are therefore not elaboration failures (as they were for the two false SpecServing statements in the first SPEC-ADOPT pass); they are the coordinator's binding adjudications that the asserted intent is contradicted by live, so they classify FALSE against live semantics while remaining unweakened and elaborating. This distinction is stated explicitly so that no reader mistakes a semantically false intent statement for a Lean-accepted proof of live behavior.

## 2. Classification table (SPEC-ADOPT shape)

| File | Statements total | Clean as written | Proof-repaired | False | Explicit `sorry` | `native_decide` |
|---|---:|---:|---:|---:|---:|---:|
| `LeanFtml/SpecIntent.lean` | 43 | 36 | 0 | 7 | 0 | 0 |

Per-family breakdown:

| Section | Statements | Clean | Proof-repaired | False |
|---|---:|---:|---:|---:|
| Shared byte/escaping helpers | 4 | 4 | 0 | 0 |
| Family 1 — list-block case handling | 4 | 4 | 0 | 0 |
| Family 2 — Colortext parse-time validation | 3 | 3 | 0 | 0 |
| Family 3 — Div attributes | 4 | 4 | 0 | 0 |
| Family 4 — Date | 5 | 5 | 0 | 0 |
| Family 5 — Blockquote | 3 | 0 | 0 | 3 |
| Family 6 — Iftags | 4 | 0 | 0 | 4 |
| Family 7 — Freelink transliteration | 4 | 4 | 0 | 0 |
| Workstream 2 — unreachable constructs | 12 | 12 | 0 | 0 |
| **Total** | **43** | **36** | **0** | **7** |

No proof script needed a repair: no stale helper name, no simp-list adjustment, no `rfl` to `native_decide` substitution, and no `set_option` was required. The classified file therefore differs from the original only by a leading comment block that records this pass; every declaration, proposition and proof is byte-for-byte the original text.

## 3. Per-statement classification

`CLEAN` means it elaborates as written and the asserted intent agrees with live (or, for Workstream 2, is a faithfully recorded pin of dead/unreachable code). `FALSE` means the coordinator's live captures contradict the asserted intent; the statement is left unweakened and its counterexample is in section 5. The queue-note column names the REFCORR5 batch whose correction changes the mirror behavior in that family, in the sense of section 6.

| # | Statement | Family | Class | Queue note |
|---:|---|---|---|---|
| 1 | `toAsciiLowerByte_idempotent` | helpers | CLEAN | — |
| 2 | `asciiLowerBytes_idempotent` | helpers | CLEAN | — |
| 3 | `compatEscape_keeps_apos` | helpers | CLEAN | — |
| 4 | `compatEscape_escapes_meta` | helpers | CLEAN | — |
| 5 | `classifyListTagName_case_invariant` | list | CLEAN | REFCORR5 batch 1 |
| 6 | `listTag_ul_mixed_variants` | list | CLEAN | REFCORR5 batch 1 |
| 7 | `normalizeListAttrKey_live_allowlist` | list | CLEAN | REFCORR5 batch 1 |
| 8 | `listCloserMatches_case_independent` | list | CLEAN | REFCORR5 batch 1 |
| 9 | `colortextIntent_rejects_invalid_specs` | colortext | CLEAN | REFCORR5 batch 2 |
| 10 | `colortextIntent_accepts_valid_specs` | colortext | CLEAN | REFCORR5 batch 2 |
| 11 | `colortextIntent_invalid_preserves_following_valid` | colortext | CLEAN | REFCORR5 batch 2 |
| 12 | `divIntent_placeholder_clears_without_uprefix` | div | CLEAN | REFCORR4 landed |
| 13 | `divIntent_id_placeholder_witness` | div | CLEAN | REFCORR4 landed |
| 14 | `divIntent_escapes_compat_all_fields` | div | CLEAN | REFCORR4 landed |
| 15 | `divIntent_attr_key_allowlist` | div | CLEAN | REFCORR4 landed |
| 16 | `dateIntent_class_suffix_digits_only` | date | CLEAN | REFCORR5 batch 4 |
| 17 | `dateIntent_literal_at_digits_never_forges_pctFF` | date | CLEAN | REFCORR5 batch 4 |
| 18 | `dateIntent_real_delim_encodes_pctFF` | date | CLEAN | REFCORR5 batch 4 |
| 19 | `dateIntent_rejects_invalid_ts_overrides` | date | CLEAN | REFCORR5 batch 4 |
| 20 | `dateIntent_valid_override_and_trim` | date | CLEAN | REFCORR5 batch 4 |
| 21 | `blockquoteIntent_never_deletes_lines` | blockquote | FALSE | adjudicated: live deletes |
| 22 | `blockquoteIntent_preserves_nospace_lines` | blockquote | FALSE | adjudicated: live deletes |
| 23 | `blockquoteIntent_mixed_run_keeps_middle_nospace` | blockquote | FALSE | adjudicated: live deletes |
| 24 | `iftagsIntent_split_never_empty` | iftags | FALSE | adjudicated: live injects `""` |
| 25 | `iftagsIntent_empty_and_commas_keep` | iftags | FALSE | adjudicated: live suppresses |
| 26 | `iftagsIntent_plus_trailing_comma_keeps_tagged` | iftags | FALSE | adjudicated: live suppresses |
| 27 | `iftagsIntent_dangling_signs_with_comma` | iftags | FALSE | adjudicated: live suppresses |
| 28 | `freelinkTranslit_preserves_ascii_alnum` | freelink | CLEAN | REFCORR5 batch 5 |
| 29 | `stripDefaultPrefixCps_cons_default` | freelink | CLEAN | REFCORR5 batch 5 |
| 30 | `freelinkIntent_stripDefault_matches_plain` | freelink | CLEAN | REFCORR5 batch 5 |
| 31 | `freelinkIntent_witness_cafe_default_and_cat` | freelink | CLEAN | REFCORR5 batch 5 |
| 32 | `ws2_1_typo_triple_dash_no_stray_hyphen` | WS2 #1 | CLEAN | — |
| 33 | `ws2_2_include_missing_escapes_and_urls` | WS2 #2 | CLEAN | — |
| 34 | `ws2_3_delimiter_roundtrip_all_bytes` | WS2 #3 | CLEAN | — |
| 35 | `ws2_3_delimiter_protects_fake_placeholder` | WS2 #3 | CLEAN | — |
| 36 | `ws2_4_footnote_dead_reads_vacuous` | WS2 #4 | CLEAN | — |
| 37 | `ws2_5_heading_collapse_js_at_most_once` | WS2 #5 | CLEAN | — |
| 38 | `ws2_6_freelink_site_cross_link_escapes` | WS2 #6 | CLEAN | — |
| 39 | `ws2_7_embed_preserves_earlier_files` | WS2 #7 | CLEAN | — |
| 40 | `ws2_7_embed_mem_first_file` | WS2 #7 | CLEAN | — |
| 41 | `ws2_8_social_case_insensitive_and_valid_params` | WS2 #8 | CLEAN | — |
| 42 | `ws2_9_url_group6_always_none` | WS2 #9 | CLEAN | — |
| 43 | `ws2_10_table_and_url_unreachable_specs` | WS2 #10 | CLEAN | — |

## 4. Axiom audit

`#print axioms` was run on all 43 public theorems. The distribution is 33 statements at the full standard core set `[propext, Classical.choice, Quot.sound]`, 6 at `[propext]` alone, 3 at `[propext, Quot.sound]`, and 1 with no axioms at all. No statement depends on `sorryAx`, on any `native_decide`-generated trust axiom, or on any non-core axiom; there are zero explicit `sorry` placeholders and zero `native_decide` uses, so there is nothing to disclose under the brief's native-trust rule.

| # | Statement | Axiom set |
|---:|---|---|
| 1 | `toAsciiLowerByte_idempotent` | `[propext, Classical.choice, Quot.sound]` |
| 2 | `asciiLowerBytes_idempotent` | `[propext, Classical.choice, Quot.sound]` |
| 3 | `compatEscape_keeps_apos` | `[propext, Classical.choice, Quot.sound]` |
| 4 | `compatEscape_escapes_meta` | `[propext, Classical.choice, Quot.sound]` |
| 5 | `classifyListTagName_case_invariant` | `[propext, Classical.choice, Quot.sound]` |
| 6 | `listTag_ul_mixed_variants` | `[propext, Classical.choice, Quot.sound]` |
| 7 | `normalizeListAttrKey_live_allowlist` | `[propext, Classical.choice, Quot.sound]` |
| 8 | `listCloserMatches_case_independent` | `[propext]` |
| 9 | `colortextIntent_rejects_invalid_specs` | `[propext, Classical.choice, Quot.sound]` |
| 10 | `colortextIntent_accepts_valid_specs` | `[propext, Classical.choice, Quot.sound]` |
| 11 | `colortextIntent_invalid_preserves_following_valid` | `[propext, Classical.choice, Quot.sound]` |
| 12 | `divIntent_placeholder_clears_without_uprefix` | `[propext, Classical.choice, Quot.sound]` |
| 13 | `divIntent_id_placeholder_witness` | `[propext, Classical.choice, Quot.sound]` |
| 14 | `divIntent_escapes_compat_all_fields` | `[propext, Classical.choice, Quot.sound]` |
| 15 | `divIntent_attr_key_allowlist` | `[propext, Classical.choice, Quot.sound]` |
| 16 | `dateIntent_class_suffix_digits_only` | `[propext, Quot.sound]` |
| 17 | `dateIntent_literal_at_digits_never_forges_pctFF` | `[propext, Classical.choice, Quot.sound]` |
| 18 | `dateIntent_real_delim_encodes_pctFF` | `[propext, Classical.choice, Quot.sound]` |
| 19 | `dateIntent_rejects_invalid_ts_overrides` | `[propext, Classical.choice, Quot.sound]` |
| 20 | `dateIntent_valid_override_and_trim` | `[propext, Classical.choice, Quot.sound]` |
| 21 | `blockquoteIntent_never_deletes_lines` | `[propext]` |
| 22 | `blockquoteIntent_preserves_nospace_lines` | `[propext, Classical.choice, Quot.sound]` |
| 23 | `blockquoteIntent_mixed_run_keeps_middle_nospace` | `[propext, Classical.choice, Quot.sound]` |
| 24 | `iftagsIntent_split_never_empty` | `[propext, Quot.sound]` |
| 25 | `iftagsIntent_empty_and_commas_keep` | `[propext, Classical.choice, Quot.sound]` |
| 26 | `iftagsIntent_plus_trailing_comma_keeps_tagged` | `[propext, Classical.choice, Quot.sound]` |
| 27 | `iftagsIntent_dangling_signs_with_comma` | `[propext, Classical.choice, Quot.sound]` |
| 28 | `freelinkTranslit_preserves_ascii_alnum` | `[propext]` |
| 29 | `stripDefaultPrefixCps_cons_default` | `[propext, Classical.choice, Quot.sound]` |
| 30 | `freelinkIntent_stripDefault_matches_plain` | `[propext, Classical.choice, Quot.sound]` |
| 31 | `freelinkIntent_witness_cafe_default_and_cat` | `[propext, Classical.choice, Quot.sound]` |
| 32 | `ws2_1_typo_triple_dash_no_stray_hyphen` | `[propext, Classical.choice, Quot.sound]` |
| 33 | `ws2_2_include_missing_escapes_and_urls` | `[propext, Classical.choice, Quot.sound]` |
| 34 | `ws2_3_delimiter_roundtrip_all_bytes` | `[propext, Classical.choice, Quot.sound]` |
| 35 | `ws2_3_delimiter_protects_fake_placeholder` | no axioms |
| 36 | `ws2_4_footnote_dead_reads_vacuous` | `[propext, Classical.choice, Quot.sound]` |
| 37 | `ws2_5_heading_collapse_js_at_most_once` | `[propext, Quot.sound]` |
| 38 | `ws2_6_freelink_site_cross_link_escapes` | `[propext, Classical.choice, Quot.sound]` |
| 39 | `ws2_7_embed_preserves_earlier_files` | `[propext]` |
| 40 | `ws2_7_embed_mem_first_file` | `[propext]` |
| 41 | `ws2_8_social_case_insensitive_and_valid_params` | `[propext, Classical.choice, Quot.sound]` |
| 42 | `ws2_9_url_group6_always_none` | `[propext]` |
| 43 | `ws2_10_table_and_url_unreachable_specs` | `[propext, Classical.choice, Quot.sound]` |

## 5. The seven FALSE statements and their counterexamples

All seven are intent errors in the spec, not mirror defects: the coordinator's live probes prove that live deletes and suppresses exactly as the reference does. The frozen captures are in `conformance-spec2-adjudicate/spec2-captures.json` (each is `valid`, `stable` and `saved_source_matches`) and the reference's own outputs are in `spec2-ref-out.jsonl`; the sibling blast radius is in `REPORT-AGY-SPEC2.md` sections 2.5 and 2.6. Each statement is left unweakened in the classified file; the corrected propositions live satisfy are proposed in section 7 and in `spec-corrected-intent/SpecIntentCorrectedLive.lean`. The counterexample evaluation below is the Lean `#eval` of the spec's own model functions (bytes shown as decimal `List Nat`), run through the serial wrapper in the same audit file that produced section 4; it shows what the spec computes, and the capture quoted after it shows what live serves.

```
#eval blockquoteRunIntent ["> first", ">nospace", "> last"]
= [quoted 1 [102,105,114,115,116], literalLine [62,110,111,115,112,97,99,101], quoted 1 [108,97,115,116]]
#eval blockquoteLineIntent ">nospace" = literalLine [62,110,111,115,112,97,99,101]
#eval blockquoteLineIntent ">"       = literalLine [62]
#eval evalIftagsIntent ["foo"] []      = true
#eval evalIftagsIntent ["foo"] ","     = true
#eval evalIftagsIntent ["foo"] "+foo," = true
#eval evalIftagsIntent ["foo"] "-,"    = true
#eval splitIftagsTokensIntent "+foo,"  = [[43,102,111,111]]
#eval splitIftagsTokensIntent ","      = []
```

**21. `blockquoteIntent_never_deletes_lines`** asserts that every run's output has the same length as its input. The spec model evaluates `blockquoteRunIntent ["> first", ">nospace", "> last"]` to `[quoted 1 "first", literalLine ">nospace", quoted 1 "last"]` — three segments — and for `[">", ...]` likewise keeps the bare `>` line. Live counterexample, capture `bq-lone-gt`: source `A\n\n>\n\nB` serves `<p>A</p>\n<p>B</p>` (two paragraphs; the `>` line is gone); the reference serves `<p>A</p>\n\n<p>B</p>\n\n`, the same deletion. Capture `bq-mixed-mid`: source `> first\n>nospace\n> last` serves `<blockquote>\n<p>first<br />\nlast</p>\n</blockquote>`, omitting the middle line. FALSE.

**22. `blockquoteIntent_preserves_nospace_lines`** asserts that `>nospace`, `>>nospace`, `>` and `> ` each evaluate to a `literalLine` segment, i.e. survive. The spec model evaluates `blockquoteLineIntent ">nospace"` to `literalLine ">nospace"` and `blockquoteLineIntent ">"` to `literalLine ">"`. Live counterexample, capture `bq-sib-sof-nospace` in `REPORT-AGY-SPEC2.md`: `>nospace\n\nafter` serves only `<p>after</p>`; `bq-lone-gt` (above) deletes bare `>`; `bq-sib-empty-gt-space` deletes `> `; capture `bq-inside-div` shows `[[div]]\n>nospace\n[[/div]]` serving the empty string `""` because the deleted line collapses the div. FALSE.

**23. `blockquoteIntent_mixed_run_keeps_middle_nospace`** asserts the mixed run evaluates to `[quoted 1 "first", literalLine ">nospace", quoted 1 "last"]`, which is exactly what `#eval` confirms for the model. Live counterexample, capture `bq-mixed-mid`: the served HTML `<blockquote>\n<p>first<br />\nlast</p>\n</blockquote>` has no `>nospace` text at all, and the reference output `<blockquote><p>first<br \/>\nlast<\/p>\n\n<\/blockquote>\n` agrees. FALSE.

**24. `iftagsIntent_split_never_empty`** asserts that every token of `splitIftagsTokensIntent spec` is non-empty. The model's `decide` proof holds because the splitter drops empty fields; `#eval splitIftagsTokensIntent "+foo,"` returns a single token with no trailing `[]`. Live counterexample: live uses `preg_split(';[, ]+;', trim($matches[1]))`, which retains empty fields, so `""` splits to `[""]`, `","` to `["", ""]` and `"+foo,"` to `["+foo", ""]`; captures `if-empty-tagged`, `if-lone-comma-tagged` and `if-plusfoo-trail-tagged` all serve `""` (body suppressed), which is the observable trace of that injected empty tag. FALSE.

**25. `iftagsIntent_empty_and_commas_keep`** asserts `evalIftagsIntent pageTags []`, `"   "`, `","` and `",,"` all evaluate to `true` (body kept). The model's `decide` proof confirms those evaluations. Live counterexample, capture `if-empty-tagged`: source `[[iftags]]KEPT[[/iftags]]` on a page tagged `["foo"]` serves `""`, not `KEPT`; `if-lone-comma-tagged` (`[[iftags ,]]KEPT[[/iftags]]`, same tags) also serves `""`; `REPORT-AGY-SPEC2.md` rows `if-sib-spaces-only` and `if-sib-double-comma` extend this to whitespace-only and doubled-comma specs. FALSE.

**26. `iftagsIntent_plus_trailing_comma_keeps_tagged`** asserts `evalIftagsIntent ["foo"] "+foo," = true`, `",+foo" = true` and `["foo","bar"] "+foo, +bar," = true`. The model's `decide` proof confirms all three. Live counterexample, capture `if-plusfoo-trail-tagged`: source `[[iftags +foo,]]KEPT[[/iftags]]` on a page tagged `["foo"]` serves `""` — the trailing comma injects an empty any-tag and suppresses the body even though `foo` is present. The reference serves `""` as well, and `REPORT-AGY-SPEC2.md` rows `if-sib-plus-foo-lead-comma-tagged` and `if-sib-plus-foo-trail-comma-both-tags` extend it to the leading-comma and both-tags shapes. FALSE.

**27. `iftagsIntent_dangling_signs_with_comma`** asserts `evalIftagsIntent ["foo"] "-," = true`, `["foo"] "+," = false` and `[] ",-foo" = true`. The model's `decide` proof confirms all three. Live counterexample: `REPORT-AGY-SPEC2.md` row `if-sib-dangling-minus-trail-comma` (`[[iftags -,]]KEPT[[/iftags]]`, tags `["foo"]`) serves `""`, contradicting the first conjunct; the settled SUSPECT baselines `p28` / `f08` show `,-foo` suppressing too, contradicting the third. The middle conjunct (`"+,"` suppresses) agrees with live, but a false conjunct falsifies the stated conjunction. FALSE.

## 6. REFCORR queue notes

The Div family (statements 12–15) is CLEAN with no queue debt: REFCORR4 has landed, so the reference and mirror now perform the `ENT_COMPAT` escaping and `\xFF` placeholder clearing these statements assert.

For the four queued families the statements are CLEAN as written and are the exact intent the correction adopts. Precisely: each is true of the spec's live-intent model and agrees with live; the CURRENT mirror still exhibits the pre-correction behavior, so the statement is presently a spec-versus-mirror divergence pin; the named REFCORR5 batch corrects the mirror to the behavior the statement asserts, at which point the statement becomes a true regression pin for that batch. Read as a claim about the current pre-correction mirror's bytes instead of about live intent, the same correction is what would falsify that reading — this is the sense in which the brief asks for the batch that will falsify the pinned pre-correction behavior. No statement in this file pins the reference's divergent bytes the way the two SpecEmail render statements did; unlike those, these pin live's behavior and therefore need no restatement when REFCORR5 lands.

The batch mapping, from `BRIEF-REFCORR5.md` and the addendum that folds in `REPORT-AGY-SPEC2.md`: batch 1 (list-block case handling) owns statements 5–8, including the TitleCase `[[Ul]]/[[Li]]/[[/Ul]]` and mixed nested `[[ul]]/[[OL]]` adjudications; batch 2 (Colortext parse-time validation) owns statements 9–11 and the `ct-sib-*` set; batch 4 (Date: encoded format and `timestamp=` override) owns statements 16–20 and the `dt-sib-*` set; batch 5 (Freelink transliteration ASCII pass-through and `_default:` ordering) owns statements 28–31 and the `fl-sib-*` set. Blockquote and Iftags are explicitly excluded from REFCORR5: the coordinator settled them as live's own behavior, so their seven false statements are intent errors in the spec rather than correction work.

## 7. Corrected intent propositions proposed for Blockquote and Iftags

These are NEW propositions written by this lane; the originals are untouched. They are elaborated (through the serial wrapper) in `spec-corrected-intent/SpecIntentCorrectedLive.lean`, which is deliberately unimported. The blockquote model keeps a `>`-leading line only when it is a valid quote opener/continuator (`>` run, space, non-whitespace payload) and drops bare `>`, `> ` with empty payload and `>`-without-space lines; the run shrinks. The iftags model replaces the empty-discarding splitter with a `preg_split`-faithful splitter that retains empty fields, so an empty, whitespace-only, leading-comma, trailing-comma or dangling-sign spec injects `[]` into `$anyTags` or `$reqTags` and suppresses the body.

```
def blockquoteLineLiveIntent (line : List Nat) : Option BlockquoteOutSegment :=
  match classifyBlockquoteLine line with
  | .validQuoteWithSpace =>
      let depth := (line.takeWhile (· == 0x3E)).length
      let body := (line.dropWhile (· == 0x3E)).drop 1
      some (.quoted depth body)
  | .plainLine => some (.literalLine line)
  | .nospaceAfterGt | .emptyAfterGtSpace => none

def blockquoteRunLiveIntent (lines : List (List Nat)) : List BlockquoteOutSegment :=
  lines.filterMap blockquoteLineLiveIntent

theorem blockquoteLive_mixed_run_drops_middle_nospace :
    blockquoteRunLiveIntent [litBytes "> first", litBytes ">nospace", litBytes "> last"] =
      [.quoted 1 (litBytes "first"), .quoted 1 (litBytes "last")] := by
  decide

theorem blockquoteLive_lone_gt_is_dropped :
    blockquoteRunLiveIntent [litBytes "A", litBytes ">", litBytes "B"] =
      [.literalLine (litBytes "A"), .literalLine (litBytes "B")] := by
  decide
```

```
def splitIftagsTokensLive (spec : List Nat) : List (List Nat) :=
  let rec go (cur : List Nat) (acc : List (List Nat)) : List Nat → List (List Nat)
    | [] => (cur.reverse :: acc).reverse
    | b :: rest =>
        if b == 0x2C || b == 0x20 then go [] (cur.reverse :: acc) rest
        else go (b :: cur) acc rest
  go [] [] (trimAllWs spec)

def evalIftagsLive (pageTags : List (List Nat)) (spec : List Nat) : Bool :=
  let ps := (splitIftagsTokensLive spec).foldl (fun st t =>
    match t with
    | 0x2B :: r => { st with reqTags := st.reqTags ++ [r] }
    | 0x2D :: r => { st with notTags := st.notTags ++ [r] }
    | _ => { st with anyTags := st.anyTags ++ [t] }) { reqTags := [], notTags := [], anyTags := [] }
  ps.reqTags.all (hasTagCI pageTags) &&
  ps.notTags.all (fun t => !hasTagCI pageTags t) &&
  (ps.anyTags.isEmpty || ps.anyTags.any (hasTagCI pageTags))

theorem iftagsLive_empty_and_commas_suppress_tagged :
    evalIftagsLive [litBytes "foo"] [] = false ∧
    evalIftagsLive [litBytes "foo"] (litBytes "   ") = false ∧
    evalIftagsLive [litBytes "foo"] (litBytes ",") = false ∧
    evalIftagsLive [litBytes "foo"] (litBytes ",,") = false := by
  decide

theorem iftagsLive_plus_trailing_comma_suppresses :
    evalIftagsLive [litBytes "foo"] (litBytes "+foo,") = false ∧
    evalIftagsLive [litBytes "foo"] (litBytes ",+foo") = false ∧
    evalIftagsLive [litBytes "foo", litBytes "bar"] (litBytes "+foo, +bar,") = false := by
  decide
```

One caveat on the iftags correction, recorded rather than hidden: `hasTagCI pageTags []` would be true only for a page that literally carries an empty tag, which live does not produce; the concrete-page-tag formulations above are therefore the faithful ones, and the file also includes the well-formed-tagged control (`+foo`, `foo,`, `-bar` keep the body). The div-inside-blockquote empty-output effect (`bq-inside-div` serving `""`) is a downstream Stage 1 consequence of the deletion, not an extra rule in the corrected line model.

## 8. Scope, artifacts and limitations

Changed on disk: `REPORT-SPECINTENT.md` (this report), a leading classification comment in `lean-ftml/LeanFtml/SpecIntent.lean`, and the new unimported `spec-corrected-intent/SpecIntentCorrectedLive.lean`. The mirror, all ftml, all PHP, the build configuration, the conformance captures and every other spec file are untouched. The temporary audit file and build logs are transport artifacts, not deliverables. No live probe was created in this lane: the coordinator's eight fresh `muse-probe-spec2adj-*` captures are the definitional evidence for the two adjudicated families and were fetched once, cached and reused. The Workstream 2 statements are pins of dead or unreachable PHP paths: their verdicts (four spec-pinned, five intent-versus-code candidates, one no-evident-intent) stand as recorded in `REPORT-AGY-SPEC2.md` and are not reference corrections.

COMPLETE: the current mirror built green through the serial wrapper, all 43 statements of `SpecIntent.lean` were elaborated and classified (36 clean, 0 proof-repaired, 7 false with counterexamples, 0 sorry, 0 `native_decide`), the axiom audit found every statement within `[propext, Classical.choice, Quot.sound]` or better with no `sorryAx`, the REFCORR4/REFCORR5 queue notes are recorded with their batch names, the corrected live-satisfied blockquote and iftags propositions are written and elaborated as new files, and the classified spec remains unimported in `LeanFtml/`.
