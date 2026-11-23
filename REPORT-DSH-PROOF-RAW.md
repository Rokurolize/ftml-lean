# REPORT-DSH-PROOF-RAW — Raw family proof lane (2026-11-23)

## 0. Scope and ground

This lane is the pilot Class-A proof lane of the `ADVISOR-PROOF-POLICY` equivalence programme: the Raw family's parse/emit laws against this branch's actual mirror functions (`LeanFtml.FormRawRules.rawScan`, `rawoldScan`, `claimText`, and `LeanFtml.RawHeadingRules.renderRaw`, `renderRawold`). It works on `proof/raw` at the handed-over commit `b7899e9`, whose mirror base is `f7a117c`. No mirror, reference, `Main.lean`, or other existing source file was edited; the coordinator wires imports at adoption. Module evaluation remains out of scope programme-wide.

All Lean work went through `~/.local/state/wikijump/muse-bhl/tools/lean-build.sh` with workdir `lean-ftml`, one invocation at a time. The build wrapper serializes box-wide; no `lean`/`lake` process was started outside it.

## 1. The inherited draft and its adjudication

The inherited draft is the single file `lean-ftml/LeanFtml/RawProof.lean`, added whole by the handover commit (519 lines, one file in that commit). It contained four kinds of material:

1. reusable byte/scan helper lemmas and general laws (bare-run threshold, `raw_long_open`, `rawScan_skip_no_at`, `raw_long_open_copies`, `raw_bare_token_iff`);
2. roughly two dozen closed ground `rfl` pins for individual `@`-run and cross-line shapes (`raw_bare3_no_token`, `raw_shape_4_3`, `raw_xline_close3`, …);
3. one 147-case bounded enumeration (`rawEnumOk` / `raw_span_enum`, `maxHeartbeats 2000000`) with neither generator/cardinality/hash metadata nor a named remainder;
4. two minimal divergence witnesses for the later-quad shape (`raw_later_quad_mirror`, `raw_later_quad_ne_reference`), plus a `#print axioms` line per theorem.

The policy's §4.3 row for `proof/raw` names **no keeper** — its keep column is "— (clean start)" — and its Class-A classification asks for general universal theorems over the actual byte scanner. G4 excludes ground `rfl`/`decide` pins from the proof count, and §2.1 requires a bounded enumeration to carry a generator, a cardinality, a deterministic hash and an explicitly named remainder before it counts as a certificate rather than a test.

**Adjudication performed.** I kept the draft's policy-aligned *results* but not its monolithic text: the general laws are re-proved and re-homed as named, general theorems in the family's proof modules, and the draft file is replaced by a clean integrating module. I dropped the ~24 ground case pins from the proof record and reclassified them as explicitly labelled regression evidence in the certificate module; I dropped the unlabelled enumeration as a "proof" and recast it as a bounded certificate with generator, cardinality, hash and named remainder. The divergence witnesses were kept and kept labelled as divergence/regression records, never as equivalence proofs. The per-theorem axiom audit was kept and extended to every theorem in the adopted family. In short: no source line of the inherited file survives verbatim as the deliverable; the general theorems it established survive as the family's general laws, and everything the policy excludes from proof completion is demoted to its proper evidence class.

## 2. Build-hygiene finding (important for adopters)

The first baseline elaboration of the inherited draft failed at `raw_span_enum`: `decide` reported `rawEnumOk = true` false, and the failed theorem picked up `sorryAx` in the axiom audit. This was **not** a defect in the draft's prediction model. The cloned `.lake/build` oleans had been copied from the coordinator tree: `FormRawRules.trace` records `LEAN_PATH=…/lean-ftml-coordinator/…` and a compile of the coordinator's copy of `FormRawRules.lean`, so the evaluation used that tree's pre-REFCORR10 scanner (the six failures were exactly the `run = 3`, `closer >= 4` bodies where REFCORR10 puts the opener's surplus `@` into the token text). After `lake build LeanFtml.FormRawRules LeanFtml.RawHeadingRules` rebuilt both modules from **this branch's** source, the same generator matched the mirror on **147/147** cases and zero failures. Adopters must rebuild from the proof branch before trusting any evaluation or axiom output; stale oleans silently change the function being proved about and can manufacture a `sorryAx` audit line.

## 3. What is established

The family is delivered as six disjoint proof modules plus one integrating module. `RawProof.lean` imports all six and restates ten headline results under family-level names, so the coordinator wires a single import.

| Module | Theorems | What it establishes |
|---|---|---|
| `RawScanProof.lean` | 34 | General Raw scanner laws: byte helpers, bare-run threshold, fuel-parameterized long opener, `'@'`-free prefix copying, empty-body cross-line surplus law, `hasLaterQuad` domain laws, `rawSurplusClose` function laws |
| `RawCrosslineProof.lean` | 7 | General non-empty cross-line claim law over arbitrary bodies and closer lengths, plus its `OptVal.str` corollary and the empty-body companion |
| `RawoldProof.lean` | 28 | General Rawold body/scan/emit laws: safe-alphabet bodies, lookbehind, leftmost claim, placeholder emission, escape identity |
| `RawEquivProof.lean` | 18 | Composite emit laws and the processRef-shaped claim equality for Raw and Rawold |
| `RawBridgeProof.lean` | 29 | Rule-level emit bridge: `rawRule`/`rawoldRule` as `applyByteRule`, placeholder decoding, placeholder inertness |
| `RawCert.lean` | 9 | Labelled 147-case bounded certificate, later-quad divergence witness, four regression-only pins |
| `RawProof.lean` | 10 | Integrating aliases and the family-level axiom audit |

**Composite behavior as general statements.** `RawScan.rs_bare_threshold` proves, for every `n`, that a bare run is literal below four and above that is exactly one empty Raw token plus `n - 4` literal `@` bytes; `rs_bare_token_iff` gives the token-existence equivalence. `RawEquiv.re_composite_emptyRaw_renders_nil` and the `re_renderRaw_*` laws prove for every option map that an empty text renders to no bytes and a nonempty one to the fixed pre-wrap span. `RawScan.rs_xline_empty` gives a general empty-body cross-line surplus law for every closer length `c ≥ 2` and abstract fuel, `RawCrossline.rx_xline_claim` proves the non-empty cross-line claim for arbitrary `@`-free, newline-free bodies and every `c ≥ 2` (with `rx_xline_claim_str` the `OptVal.str` corollary under `255 ∉ mid`), and the `rs_rawSurplusClose_*` laws give the closer's surplus arithmetic on the whole reachable domain. `RawEquiv.re_wikidotEscapeRaw_at_append` proves `@` bytes survive escaping. These are general theorems over the mirror functions, not pins for particular source strings.

**Rawold scan and emit.** `Rawold.ro_body_safe` and its companions characterize `rawoldBody` on the safe alphabet; `ro_scan_lookbehind`, `ro_scan_leftmost_claim`, `ro_scan_claim`/`ro_scan_claim_ph` prove the parse-side claim behavior with arbitrary fuel and token tables; `ro_renderRawold_safe_id` and `ro_claim_render` prove the corresponding emit behavior. This is the template's Rawold half: both rules now have scan and emit laws.

**processRef-shaped equivalence, as far as the tree allows.** `RawEquiv.re_processRef` is a locally defined PHP-shaped `process()` spec; `re_claimText_eq_processRef_raw`, `_rawold` and `_empty` prove by kernel reduction that the mirror's `claimText` equals it for arbitrary text and token tables, including the empty Raw case. `RawBridge` proves the rule-level emit bridge and that `phBytes` contains no `@`, so placeholders are inert to the Raw scanner. This does **not** claim full Boundary-B equivalence: there is no in-tree `ProofInterface.lean`/`applyRuleRef` (coordinator foundation unit F1 has not landed), and the regex/scanner half is the mirror's own TCB-4 code; the theorem is the process-callback half only. Token-index shifting by the extra empty Raw is likewise deferred to `TokEquiv`.

**Bounded certificate.** `RawCert.rc_cases` generates opener runs 0..6 × closer runs 0..6 × bodies `{empty, Z, ZZ}`; `rc_card` and `rc_card_factors` prove the cardinality is 147 = 7×7×3; `rc_span_enum_zero_mismatch` proves by `decide` that the composite prediction agrees with the mirror on all 147 cases. The canonical observed-view table `rc_table` hashes to SHA-256 `a23386c7015706307c3a6e2951ff8151b3bc7757b9b1dc0478669f99c734ae3a`. The remainder is named in the file: no cross-line families, multiple spans, runs ≥7, later-quad re-association or placeholder-bearing bodies are covered by the certificate; general laws cover some of those separately.

**Divergence record, not a proof.** `RawCert.rc_div_later_quad_mirror` gives the mirror's exact result on `@@@@a@@@b@@@@` by `rfl`, and `rc_div_later_quad_ne_reference` proves its bytes differ from the reference shape. The mirror's `preOk` arm `some _, none => true` ignores `hasLaterQuad` when the tail has no newline. Per the brief that line is stopped here: no mirror or reference file was edited, and the fix belongs to the coordinator's REFCORR lane.

## 4. What remains and why

- Full Boundary-B equivalence (`applyRule r = applyRuleRef r`) for the family needs the coordinator's F1/F2 foundation units (`ByteCore`, `TokenStateProof`, `ProofInterface`, `PcreCore`, `RefTables`) and the extracted PHP regex corpus; none of that exists in this tree, so the processRef-shaped statement above is the honest maximum now.
- The scanner half is taken as the mirror's TCB-4 code and is not re-proved against PHP; only its general internal laws are proved here.
- The Tier-1 byte-form round trip `parseBytes_byteForm_id` is a coordinator F1 item. This lane proves only the emit-side bridge (`RawBridge`), deliberately not the round trip.
- `TokEquiv` for the token-index shift caused by the composite empty Raw, and pipeline composition with the other 67 rules, belong to the programme's later waves, not to this family lane.
- The later-quad divergence is coordinator-owned. When its REFCORR correction lands, `rc_div_later_quad_mirror` and `rc_div_later_quad_ne_reference` become false and must be restated as regression pins; that is the one place where a correction round will force this lane's bundle to be re-based. The in-flight REFCORR12 candidate (`C-R5E-R3-1`) is in the Notes/Footnote family and does not touch Raw.
- Module evaluation is out of scope programme-wide.

## 5. Axiom audit

A complete per-file audit (`lake env lean` on each of the seven family modules, all seven exiting 0) emitted 143 `#print axioms` information lines: 7 axiom-free, 15 `[propext]`, 9 `[propext, Quot.sound]`, and 112 `[propext, Classical.choice, Quot.sound]`. `lake build` of the same seven modules also exited 0. Zero occurrences of `sorryAx`, `native_decide`, `bv_decide` or `Lean.ofReduceBool` in the family files or their build output. The only `decide` uses are Prop-level kernel reductions (finite cardinality/enumeration facts and byte arithmetic), which introduce no trust axiom. This satisfies the programme's axiom discipline.

COMPLETE
