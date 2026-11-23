# REPORT-DSH-PROOF-PARAINLINE — Wave 2 para-inline proof lane

This is the Wave 2 `proof/para-inline` lane of the ftml Lean equivalence programme, worked on branch `proof/para-inline` from current `main` (the `proof-base-v1` freeze plus the landed F1–F3 foundation). The rule list is the one the ADVISOR-PROOF-POLICY sequencing §4.4 lane 4 names and the classification tables §2.2 assign: `ParaRules` (Image, Newline, Paragraph), `Inline1/2/3Rules` (Url, Mathinline, Interwiki, Colortext, Strong, Emphasis, Underline, Strikethrough, Tt, Superscript, Subscript, Typography, Tighten), plus the `InlineRender` and `ListTableRender` pure-renderer families. That is 16 parse rules and 2 render modules. The work is 9 proof modules plus an umbrella, 263 named theorems in namespace `LeanFtml`, all with `parainline_`-prefixed headline names so the coordinator can audit them mechanically.

## What was proved, and the method

The lane followed the owner's calibration: formal proof only where it is most effective. Class A rules received general universal theorems about the mirror's actual functions; Class B rules received the strongest kernel-free universal forms with the kernel-dependent remainder named; there are no Class C rules in this group. Every theorem is a kernel-checked statement about a concrete function in the mirror source, never about a second hand-written copy, and no mirror source, `Main.lean`, `LeanFtml.lean`, or existing file outside the new proof files was edited.

New files, all under `lean-ftml/LeanFtml/`: `ProofParaNewline.lean`, `ProofParaTighten.lean`, `ProofParaImage.lean`, `ProofParaParagraph.lean`, `ProofInline1.lean`, `ProofInline2.lean`, `ProofInline3.lean`, `ProofInlineRender.lean`, `ProofListTableRender.lean`, and the umbrella `ProofParaInline.lean`. The umbrella imports all nine units; the coordinator wires that single import at adoption. Prose is on single lines throughout.

## Per-rule record

### Class A — Newline (`ProofParaNewline.lean`, 21 theorems)

Proved: the exact pointwise window predicate `nlWindowMatch b rest` is equivalent to `b ≠ 10 ∧ rest.head? = some 10 ∧ rest.tail.head? ≠ some 10`; the scan step is exactly the conditional emission of the byte plus a claimed `Newline` placeholder; `newlineScan` equals a structurally recursive spec for every byte input and is fuel-independent; no-LF inputs are the identity on bytes and tokens; the claimed-token list is a suffix append; all six WF predicates are monotone in the token-table length; the six non-work `WFState` conjuncts are preserved unconditionally; full `WFState` and `TokEquiv` are preserved under explicit work-preservation hypotheses. Remains: the work-WFSegs and segsTokEquiv premises are the unproved Tier-1 round trip (G3), and regex-vs-`libpcre2` agreement for `([^\n])\n(?!\n)` is TCB-2 coordinator scope. No mirror divergence found.

### Class A — Tighten (`ProofParaTighten.lean`, 46 theorems)

Proved: exact specs of `collapsePad`, `replaceAllB`, `dropAfterPh`, `dropBeforePh`, `tightenColorPass`, `tightenEdgePass`, `stripEmptyRawPh`, `stripDiscardedControls`, and the LF filter; `tightenBytes` is the exact composition of the five passes in mirror order; token table, doc registries, fatal flag and `continuedDivLeads` are preserved unconditionally; full `WFState` and `TokEquiv` follow under the work-segment hypotheses; the discarded-control byte class is characterized exactly. Remains: the work-WFSegs premise (G3) and regex-vs-`libpcre2` agreement (TCB-2). No mirror divergence found.

### Class A — inline pure renderers (`ProofInlineRender.lean`, 38 theorems)

Proved: hex and percent encoding algebra, ASCII-lowering idempotence and length/append laws, a complete two-case characterization of PHP truthiness on bytes, escape-table determinism, `sprintfPercentS` slot laws, table-lookup determinism, and option-locality plus exact tag-emission shape for `renderUrl`, `renderEmail`, `renderMathinline`, `renderInterwiki`, `renderColortext`, `renderStrong`, `renderEmphasis`, `renderUnderline`, `renderStrikethrough`, `renderTt`, `renderSuperscript`, `renderSubscript` and `renderTypography`, plus color-admission facts and `renderTighten`. These quantify over all `OptMap`, which is strictly stronger than the reachable-`OptMap` shape. Remains: agreement of these mirrors with the extracted PHP reference spec and a concrete `ReachableTok` predicate are coordinator/TCB scope (`ProofInterface` parameters, F2/F3), and no extracted-PHP oracle was consulted. No divergence found.

### Class A — list/table pure renderers (`ProofListTableRender.lean`, 36 theorems)

Proved: `ltTypeIs`/`ltIsset` determination, `attrPairs` non-map behavior, `omGet`/`omSet` and `optStrBytes`/`omSet` interaction, `attrsFragment` append and extensionality, stable insertion-sort laws for `rankAttrs` (`insertRanked` sorted/filter, rank sort sorted/stable/idempotent), the four `eq_ref_shape` theorems over reachable `OptMap`, renderer emission shapes for list, deflist, table and tableadv, and placeholder passthrough on both list trails and leads. Remains: the extracted-PHP spec agreement and `ReachableTok` are coordinator scope. The simple `advAttrRank ≤ 6` bound was attempted and dropped rather than assumed, because the nested Bool-conditioned if chain did not reduce under the case hypotheses without a dedicated equality lemma; this is recorded in the file as a named remainder, and no dependent theorem relies on it. No divergence found.

### Class B — Image (`ProofParaImage.lean`, 36 theorems)

Proved: exact reconstruction for both `splitAtFirstBytes` and `splitAtFirstCI`, all six `imageAlignSplits` reconstruction branches except the one noted below, exact host-label byte and hostname predicates with scanning monotonicity in fuel, idempotent whitespace and href trimming, `imageProcess` literal-delimiter behavior, and `WFState`/`TokEquiv` preservation for `imageRule`. Remains: regex-vs-`libpcre2` agreement (TCB-2); the `imageAlignSplits` general reconstruction lemma was dropped because its split-tail hypotheses are not all equalities, and is named in the file; no placeholder was introduced. No mirror divergence found.

### Class B — Paragraph (`ProofParaParagraph.lean`, 21 theorems)

Proved: exact `PUnit` byte forms, `unitAt` whitespace reading, `tokenRuleAt` out-of-range behavior, break classification, the newline-drop and whitespace-erase laws for `filterRunBytes`, the four-case `wsRunNl` characterization, exact `paraWrap` token append and byte shape, `bytesEndsWith`/`bytesContains` empty-suffix facts, `stripPhBytes` on the empty input, and doc/fatal/`continuedDivLeads` frame preservation for `paragraphRule`. Remains: regex-vs-`libpcre2` agreement (TCB-2); the `phT` keep-branch foldl law and the `stripPhBytes` ASCII-head law were attempted and dropped rather than assumed, each needing a dedicated accumulator/fuel lemma, and are named in the file. No mirror divergence found.

### Class B — Inline1: Url, Mathinline, Interwiki (`ProofInline1.lean`, 16 theorems)

Proved: `runOf` nil/step arithmetic, the exact `isAlphaB` iff, the zero and no-close cases of `descrTail`, a general all-nonmatching theorem for `pregScan` with its fuel-indexed helper, `placeholdersOf` nil, exact `optStringBytes` behavior on string, bytes and boolean option values, and doc/fatal/`continuedDivLeads` frame preservation for all three rules. Email is deliberately untouched (Wave 1 `proof/email` lane). Remains: regex-vs-`libpcre2` agreement (TCB-2), the Tier-1 round trip for work preservation, and the `replaceAllBytes` substitution algebra, which needs a dedicated fuel lemma for the drop/consume length relation and was dropped rather than assumed. No mirror divergence found.

### Class B — Inline2: Colortext, Strong, Emphasis, Underline, Strikethrough (`ProofInline2.lean`, 18 theorems)

Proved: the shared `pairBodyLen` exact spec, bounds, nil and newline cases; `colorBodyScan` and `emphCloseScan` specs and newline cases; `colorParseCharB` delimiter facts; `pairClaim` shape and token-append law; `colortextMatch` opener and `underlineMatch` quad cases; `pregScan` append; `strikethroughRule` token append; and doc/fatal frame preservation across all five rules. Remains: regex-vs-`libpcre2` agreement (TCB-2) and the tier-1 round trip for work preservation. No mirror divergence found.

### Class B — Inline3: Tt, Superscript, Subscript, Typography (`ProofInline3.lean`, 31 theorems)

Proved: `ttMatchAt` opener iff, `ttScan` nil and all-none cases, the degenerate and claiming branches of `ttProcess`, the exact `claimTok` placeholder-index law, super/subscript match dichotomies, the algebra of the `UMatch` combinators (`litM`, `classM`, `entM`, `anchorM`, `altM`, `optM`, `seqM` including associativity and empty-right), `typoPair` and `typoNumSpace` no-op laws, `typoUnits` no-digit-space law, `replaceAllB` absent-pattern law, `typographyRule` appending exactly 13 tokens, `applyByteRule` frame and token-table preservation, and WF monotonicity/non-work preservation. Remains: regex-vs-`libpcre2` agreement (TCB-2), the work-segment WFSegs/TokEquiv premises (G3), the Typography dead `---` statement and the no-new-dash law for the `--` pass, and one xentM candidate-count bound; all named in the file, none axiomatized. Tighten is the separate Class A unit above and was not touched. No mirror divergence found.

## Gate results

G1 build and axiom purity: `lake build` of all nine proof modules and `lake env lean LeanFtml/ProofParaInline.lean` both exit 0. The integrated axiom audit emitted 144 `#print axioms` lines. Their distinct axiom sets are exactly `[propext]`, `[propext, Quot.sound]`, and `[propext, Classical.choice, Quot.sound]`. There are zero `sorryAx`, zero `native_decide`, zero `bv_decide`, zero `Lean.ofReduceBool`, zero new `axiom`/`constant`, and zero placeholder proofs in any of the ten files. This is the machine result of the mandated build, recorded verbatim by the build log.

G4/G5 fit: every rule in this lane now carries universal kernel-free theorems against the mirror's actual functions, and every one of the 16 parse rules and both render modules has a named remainder where the policy puts it (TCB-2 regex agreement, G3 Tier-1 bridge, and the un-instantiated F2/F3 reference functions). Ground `decide` pins were not counted toward proof completion. G6/G7 and the other programme-wide gates are outside this lane's boundary and were not run.

No live probes were needed, so the probe prefix was not used. No mirror or reference divergence was encountered in this group; there is therefore no minimal witness to record and no mirror line was touched. `.lake` build artifacts changed only as a side effect of the mandated `lean-build.sh` wrapper; they are not part of this commit.

## Verdict

The kernel-free universal core is complete for all 16 parse rules and both render modules in this lane, with the axiom audit clean. The lane is not self-contained-complete because three categories of remainder are explicitly outside its boundary and owned elsewhere: TCB-2 (regex-vs-PHP `libpcre2` agreement), G3 (the Tier-1 `byteForm`/`parseBytes` round trip in the foundation), and the F2/F3 reference-side functions plus a concrete `ReachableTok` predicate that the coordinator wires at adoption. Those are named, not hidden, and no proof was invented to cover them. Per the brief's COMPLETE/PARTIAL choice, the honest verdict is:

PARTIAL
