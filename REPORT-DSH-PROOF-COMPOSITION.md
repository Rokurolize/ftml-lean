# REPORT-DSH-PROOF-COMPOSITION — Wave 3 composition package

**Verdict: PARTIAL.** The composition that main's files actually support is proved and axiom-audited; the pipeline's remaining 67 rules have no file-verified constituent result on main, so no wider composition is claimed. The two F1 byte-bridge headlines remain unproved in their full generality, but a genuine, proved narrowing is delivered.

Provenance. Work was carried out on branch `proof/composition` of `Rokurolize/ftml-lean`, based on current main `f2d4316fcf960094481857f0550f8dcc3878d2b5`. All Lean invocations went through `~/.local/state/wikijump/muse-bhl/tools/lean-build.sh`, one at a time, with the workdir set to this clone's `lean-ftml` directory. Five independent units (inventory, WF composition, alpha composition, bridge assessment, axiom audit) were split onto the shared team task board with disjoint write scopes and run concurrently; the root integrated, gated, and wrote this report. No mirror rule source, foundation module, existing proof file, `Main.lean`, or `LeanFtml.lean` was edited; the coordinator wires imports at adoption.

## 1. What was read and how the inventory was verified

The mission's Tier 1 composition material was read in full from `ADVISOR-PROOF-POLICY.md`: the `pipelineFull` and `runRules` statements of §1.3, gate G3 (the two bridge theorems, `pipelineFull_preserves_wf`, `parse_alpha_invariant`, `render_alpha_invariant`), and the TokEquiv / alpha-invariance section §5.2 with its base-shift observer law and the `base = 1` live counter case. The inventory was built from theorem statements actually present in the files at `f2d4316`, cross-checked against `LeanFtml.lean:55-58` for wiring, against `GAP-LEDGER.md` / `STATE.md` for adoption records, and against the already-fetched `origin/proof/*` refs for branch-only results. Report prose was never accepted as proof of a theorem. The 68 table rows were checked programmatically against both the `RuleId` constructor list (`Pipeline.lean:51-118`) and `pipelineFull = .include :: pipelineR317` (`Pipeline.lean:451-454`).

Classification key. **WF** = a proved `WFState`-preservation theorem for that rule exists on main. **TokEquiv** = a proved per-rule TokEquiv / renumbering / observer theorem exists on main (wiring status noted separately). **Neither** = no file-verified such theorem exists on main. **Adoption-pending** = the strongest result exists only on a fetched but unadopted `origin/*` proof branch; nothing branch-only was imported into this package.

## 2. File-verified per-rule inventory

| `pipelineFull` pos | RuleId | Class | Verified file and theorem (or reason for neither) |
|---:|---|---|---|
| 1 | `.include` | WF | `lean-ftml/LeanFtml/ProofInclude.lean:132` `includeRule_preserves_wf`; statement `WFState st → WFState (includeRule st)` read in full, wired at `LeanFtml.lean:55`. |
| 2 | `.prefilter` | adoption-pending | Only `origin/proof/frame-include-code`: `lean-ftml/LeanFtml/Proof/FramePrefilterProof.lean:324` `prefilterRule_preserves_wf`; no main result. |
| 3 | `.delimiter` | adoption-pending | Only `origin/proof/frame-include-code`: `lean-ftml/LeanFtml/Proof/FrameDelimiterProof.lean:20` `delimiterRule_preserves_wf` and `:30` `delimiterRule_tokEquiv`; no main result. |
| 4 | `.code` | neither | Only the branch's conditional token bound `Proof/CodeRuleProof.lean:337` `codeRule_tokens_bounded`; not WF or TokEquiv. |
| 5 | `.form` | neither | No file-verified WF or TokEquiv theorem on main. |
| 6 | `.raw` | neither | `RawBridgeProof.lean:57` `rb_rawRule_tokens` is token-table invariance, not WF/TokEquiv; `RawEquivProof.lean:145` defers the index shift. |
| 7 | `.rawold` | neither | `RawBridgeProof.lean:67` `rb_rawoldRule_tokens` is token-table invariance; TokEquiv for composite empty Raw is a recorded remainder. |
| 8 | `.modulepre` | neither | No file-verified WF or TokEquiv theorem on main. |
| 9 | `.module` | neither | No file-verified WF or TokEquiv theorem on main. |
| 10 | `.module654` | neither | No file-verified WF or TokEquiv theorem on main. |
| 11 | `.iftags` | neither | No file-verified WF or TokEquiv theorem on main. |
| 12 | `.comment` | neither | No file-verified WF or TokEquiv theorem on main. |
| 13 | `.iframe` | neither | No file-verified WF or TokEquiv theorem on main. |
| 14 | `.date` | neither | No file-verified WF or TokEquiv theorem on main. |
| 15 | `.math` | neither | No file-verified WF or TokEquiv theorem on main. |
| 16 | `.concatlines` | neither | No file-verified WF or TokEquiv theorem on main. |
| 17 | `.freelink` | neither | No file-verified WF or TokEquiv theorem on main. |
| 18 | `.equationreference` | neither | No file-verified WF or TokEquiv theorem on main. |
| 19 | `.footnote` | neither | No file-verified WF or TokEquiv theorem on main. |
| 20 | `.footnoteitem` | neither | No file-verified WF or TokEquiv theorem on main. |
| 21 | `.footnoteblock` | neither | No file-verified WF or TokEquiv theorem on main. |
| 22 | `.bibitem` | neither | No file-verified WF or TokEquiv theorem on main. |
| 23 | `.bibliography` | neither | No file-verified WF or TokEquiv theorem on main. |
| 24 | `.bibcite` | neither | No file-verified WF or TokEquiv theorem on main. |
| 25 | `.divprefilter` | neither | No file-verified WF or TokEquiv theorem on main. |
| 26 | `.anchor` | neither | No file-verified WF or TokEquiv theorem on main. |
| 27 | `.user` | neither | No file-verified WF or TokEquiv theorem on main. |
| 28 | `.blockquote` | neither | No file-verified WF or TokEquiv theorem on main. |
| 29 | `.heading` | neither | No file-verified WF or TokEquiv theorem on main. |
| 30 | `.toc` | neither | No file-verified WF or TokEquiv theorem on main. |
| 31 | `.horiz` | neither | No file-verified WF or TokEquiv theorem on main. |
| 32 | `.separator` | neither | No file-verified WF or TokEquiv theorem on main. |
| 33 | `.clearfloat` | neither | No file-verified WF or TokEquiv theorem on main. |
| 34 | `.break` | neither | No file-verified WF or TokEquiv theorem on main. |
| 35 | `.span` | neither | No file-verified WF or TokEquiv theorem on main. |
| 36 | `.size` | neither | No file-verified WF or TokEquiv theorem on main. |
| 37 | `.div` | neither | No file-verified WF or TokEquiv theorem on main. |
| 38 | `.divalign` | neither | No file-verified WF or TokEquiv theorem on main. |
| 39 | `.collapsible` | neither | No file-verified WF or TokEquiv theorem on main. |
| 40 | `.tabview` | neither | No file-verified WF or TokEquiv theorem on main. |
| 41 | `.note` | neither | No file-verified WF or TokEquiv theorem on main. |
| 42 | `.gallery` | neither | No file-verified WF or TokEquiv theorem on main. |
| 43 | `.list` | neither | No file-verified WF or TokEquiv theorem on main. |
| 44 | `.deflist` | neither | No file-verified WF or TokEquiv theorem on main. |
| 45 | `.table` | neither | No file-verified WF or TokEquiv theorem on main. |
| 46 | `.tableadv` | neither | No file-verified WF or TokEquiv theorem on main. |
| 47 | `.button` | neither | No file-verified WF or TokEquiv theorem on main. |
| 48 | `.image` | neither | No file-verified WF or TokEquiv theorem on main. |
| 49 | `.embed` | neither | No file-verified WF or TokEquiv theorem on main. |
| 50 | `.social` | neither | No file-verified WF or TokEquiv theorem on main. |
| 51 | `.file` | neither | No file-verified WF or TokEquiv theorem on main. |
| 52 | `.center` | neither | No file-verified WF or TokEquiv theorem on main. |
| 53 | `.newline` | neither | No file-verified WF or TokEquiv theorem on main. |
| 54 | `.paragraph` | neither | No file-verified WF or TokEquiv theorem on main. |
| 55 | `.url` | neither | No file-verified WF or TokEquiv theorem on main. |
| 56 | `.email` | TokEquiv (on main, unwired) | `ProofEmailRenumber.lean:95` `email_tok_equiv_base_shift`, helper `:81` `tokRenumberBytes_phBytes`, predicate `:88` `EmailTokEquiv`; `ProofEmailObserver.lean:12` `email_index_observer_law`, `:28` `email_index_observer_plus_one`, `:52` `email_renumber_index_injective`. No main import reaches `ProofEmail.lean`; see §2.1. |
| 57 | `.mathinline` | neither | No file-verified WF or TokEquiv theorem on main. |
| 58 | `.interwiki` | neither | No file-verified WF or TokEquiv theorem on main. |
| 59 | `.colortext` | neither | No file-verified WF or TokEquiv theorem on main. |
| 60 | `.strong` | neither | No file-verified WF or TokEquiv theorem on main. |
| 61 | `.emphasis` | neither | No file-verified WF or TokEquiv theorem on main. |
| 62 | `.underline` | neither | No file-verified WF or TokEquiv theorem on main. |
| 63 | `.strikethrough` | neither | No file-verified WF or TokEquiv theorem on main. |
| 64 | `.tt` | neither | No file-verified WF or TokEquiv theorem on main. |
| 65 | `.superscript` | neither | No file-verified WF or TokEquiv theorem on main. |
| 66 | `.subscript` | neither | No file-verified WF or TokEquiv theorem on main. |
| 67 | `.typography` | neither | No file-verified WF or TokEquiv theorem on main. |
| 68 | `.tighten` | neither | No file-verified WF or TokEquiv theorem on main. |

Counts: WF 1, TokEquiv 1 (unwired), adoption-pending 2, neither 64. Foundation facts are not per-rule results: `TokenStateProof.lean` defines `WFState` (`:59`), `TokEquiv` (`:96`) and `wfState_ofSource` (`:116`) plus identity-only `tokEquiv_refl` (`:141`); `ProofInterface.lean:30` defines `RuleProofBundle` but instantiates none.

### 2.1 Wiring and two overclaims checked against the files

`LeanFtml.lean:55-58` imports only `ProofInclude`, `ProofNotes`, `RawProof` and `DivAttrProof`. `GAP-LEDGER.md:203` claims the ProofEmail umbrella was imported into `LeanFtml.lean`; the files disprove that claim, while `GAP-LEDGER.md:205` itself records the real resolution: `LeanFtml.decBytes` is defined twice (foundation `ByteCore.lean:39` and proof `ProofEmailKeepers.lean:16`), so co-import collides and the umbrella was left unimported. Consequently the Email facts are citable as main-file facts but not in the main library build; this package imports the Email chain alone in its alpha file and flags the collision as a coordinator/foundation boundary. The brief's package-level phrasing about WF and TokEquiv results must not be read per rule: the Raw, Notes and DivAttr adoption records name bundle packaging and TokEquiv as unproved remainders. The two F1 bridge statements at `TokenStateProof.lean:158/:163` are inside the block comment at `:156-167` and are not proved.

## 3. What is now composed

Three new files were added under `lean-ftml/LeanFtml/Proof/`, with disjoint import chains so the duplicate-`decBytes` collision is avoided; no import was wired into `LeanFtml.lean` or `Main.lean`.

### 3.1 WF composition — `Proof/WfComposition.lean`

`runRules_preserves_wf (rules : List RuleId) (h : ∀ r ∈ rules, ∀ st, WFState st → WFState (applyRule r st)) (st) (hwf) : WFState (runRules rules st)` proves composition over the actual mirror runner `runRules = rules.foldl (fun s r => if s.fatal then s else applyRule r s) st`, handling the fatal-skip branch honestly, since `WFState` does not constrain `st.fatal`. `applyRule_include_preserves_wf` lifts the main theorem through `applyRule`. The concrete instantiations are `pipelineFull_wf_prefix (cs) : WFState (runRules [.include] (ParseState.ofSource cs))` and `pipelineFull_wf_prefix_of_wf (st) (hwf) : WFState (runRules [.include] st)`.

The covered prefix is exactly `[.include]`, length 1: the next rule `.prefilter` has no file-verified WF theorem on main. Composition remainder: the 67 rules `.prefilter` through `.tighten` (positions 2-68, `pipelineR317`). The branch-only `prefilterRule_preserves_wf` and `delimiterRule_preserves_wf` are adoption-pending and were not imported, so nothing is claimed beyond the one-rule prefix or about G3's full `pipelineFull_preserves_wf`.

### 3.2 Alpha-invariance composition — `Proof/AlphaComposition.lean`

The covered segment is the Email claimed-placeholder observer surface only, using the main-carried Email facts. `tokRenumberBytes_comp (σ₁ σ₂) (k) (pre post)` is a semigroup law for arbitrary renamings on one `\xFF<k>\xFF` placeholder, bridging the FF-bearing intermediate string through `tokRenumberBytes_phBytes`; `tokRenumberBytes_base_shift_comp (b₁ b₂ k)` is its cumulative-base instance with composed shift `fun j => b₂ + (b₁ + j)`. `email_index_observer_base_shift_comp (b₁ b₂ k) (email pre post)` chains the observer law through both shifts and proves the emitted index digits are exactly `(decBytes (b₂ + (b₁ + k))).reverse` between the two U+FFFD runs, with no reproof of render internals. `segment_shift_list_of_commute` and its unconditional instance `tokRenumberBytes_shift_list` fold an arbitrary list of shift rules with an explicit per-rule commutation hypothesis discharged on main by `tokRenumberBytes_phBytes`; `shift_fold_add` and `email_index_observer_shift_list` extend the chained observer to N shifts with digits `(decBytes (fold shifts + k)).reverse`.

No state-level renaming function and no per-rule bundle were invented. Uncovered set: all 67 non-Email rules have no file-verified rule-level TokEquiv or renumbering result on main; `tokEquiv_refl` and its segment lemmas are identity-only and establish no rule's alpha-invariance. The `ProofEmail` chain is imported alone because of the `decBytes` collision; G3's `parse_alpha_invariant` and `render_alpha_invariant` are therefore not claimed.

### 3.3 F1 byte bridge — `Proof/ByteBridge.lean`

The two full obligations are not discharged, but genuine narrowings are proved from main results: `utf8Decode_flatMap_ascii` proves the exact ASCII restriction of the first blocker lemma; `parseBytes_byteForm_id_of_toks` and `byteForm_parseBytes_id_of_toks` cover token-only segment lists (plus their `..._WF` forms under a token-list witness); `parseBytes_byteForm_id_of_ascii_text` and `byteForm_parseBytes_id_of_ascii_text` cover one nonempty all-ASCII text segment (plus WF forms); `parseBytes_byteForm_id_of_single_tok` and `byteForm_parseBytes_id_of_single_tok` restate the single-placeholder instance. What changed is exactly these proved classes in a new file; no existing proof file or foundation module was edited. The full statements remain unproved in their comment block.

Blocker for the full obligations, precisely as the files establish it. `TokenStateProof.lean:17-22` names two missing list-level facts: `utf8Decode (cs.flatMap utf8Bytes) = cs` for arbitrary `cs`, and `utf8Valid bs → (utf8Decode bs).flatMap utf8Bytes = bs`. `ByteCore.utf8Decode_utf8Bytes` proves only the singleton BMP case (`c.toNat < 0x10000`), leaves the astral four-byte case open, and no main lemma lifts it to a flatMap over lists. Structurally, main exposes only the empty-accumulator step `rb_parseBytes_phBytes_step` of the fuel-indexed, accumulator-based `parseBytes.go`; a mixed token/text canonical list would need new go-prefix and decode-append lemmas that are not on main. Because `WFBytes` is the image of `WFSegs` under `byteForm`, the second full identity would follow from the first, but that does not bypass the blocker. The mixed canonical ASCII-list extension was deliberately not manufactured.

## 4. Axiom discipline and gates

Every theorem in `WfComposition.lean`, `AlphaComposition.lean` and `ByteBridge.lean` was re-elaborated after final editing through the serializer with exit 0; the captured logs are `scratch/root/elab-WfComposition.log`, `elab-AlphaComposition.log` and `elab-ByteBridge.log` outside the git tree. The `#print axioms` output records the standard ceiling only: all four WF theorems, `tokRenumberBytes_comp`, `tokRenumberBytes_base_shift_comp`, `email_index_observer_base_shift_comp`, `segment_shift_list_of_commute`, `tokRenumberBytes_shift_list`, `email_index_observer_shift_list`, both token-only bridge identities and both ASCII-text bridge identities report `[propext, Classical.choice, Quot.sound]`; `shift_fold_add`, `utf8Decode_flatMap_ascii`, `email_renumber_index_injective` report strict subsets thereof. The independent audit unit checked 21 proof modules and 18 relied-on theorems with `#print axioms` (four serializer runs, all status 0) and found zero live banned constructs; its per-file and per-theorem tables are in `scratch/audit/AUDIT.md`. A root scan of the three new files for `sorry`, `sorryAx`, `native_decide`, `bv_decide`, `Lean.ofReduceBool`, `axiom`, `admit`, `AE` and `by _` found only one prose word "axioms" in a comment; there are no live hits. The two `by _` skeletons at `TokenStateProof.lean:159/:164` are inside a block comment and compile as no declarations.

Final build evidence. The final build was run from a clean extraction of this committed state, not from the working tree: `git archive HEAD` into an absent directory, `rm -rf lean-ftml/.lake` to remove every cached olean, then `~/.local/state/wikijump/muse-bhl/tools/lean-build.sh <extract>/lean-ftml lake build`, followed by the same serializer invoking `lake env lean` on each of the three new proof files in that extraction. The captured output is at `/home/roku/.local/state/wikijump/muse-bhl/dsh-proof-composition/scratch/root/final-clean-build.log`. This matters in this programme: tracked oleans copied from another tree have twice manufactured false build results, so no build claim here rests on a pre-existing or copied `.lake`. Because the coordinator wires imports at adoption, the new modules are not in the main library's import graph on this branch; they are verified by direct elaboration in the clean extraction, and this report does not claim G1's "zero unimported proof files" condition. Tracked `.lake` files were restored to the committed state before committing, and none of the build artifacts are part of this commit.

## 5. What remains and why

The pipeline-wide WF theorem, the parse/render alpha-invariance theorems of G3, and the two full F1 byte-bridge identities remain unproved. They are blocked by missing constituent results, not by a composition trick: 67 rules have no file-verified WF preservation, 67 have no rule-level TokEquiv, the two prefix candidates live on unadopted branches, the Email chain cannot yet be co-imported with the wired foundation chain because of the duplicate `decBytes`, and the list-level UTF-8 round trip is absent. Discharging those is foundation and family-lane work; importing branch-only results into this package would have manufactured evidence the tree does not carry. This package composes exactly what exists and names everything it does not.

**PARTIAL**
