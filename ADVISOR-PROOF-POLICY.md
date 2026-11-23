# ADVISOR-PROOF-POLICY — Formal Proof Policy for the ftml Lean Equivalence Programme

**Target programme:** `Rokurolize/wikidot-php-reference` (snapshot-35) ↔ `Rokurolize/ftml-lean` (`lean-ftml/` at `e8d36b4`, Lean `4.36.0`)  
**Coordinator tree audited (read-only):** `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator`  
**Mathlib probe audited (read-only):** `/home/roku/.local/state/wikijump/muse-bhl/mathlib-check`  
**Active proof lanes audited (read-only):** `/home/roku/.local/state/wikijump/muse-bhl/cursor-proof-{freelink,list,notes,divattr,raw,email,tableadv,module}`

---

## Executive Diagnosis: Why Conformance Has Not Converged to Proof

The programme has built an extraordinary empirical and engineering base: 43,897 lines of Lean across `LeanFtml/*.lean`, all 68 active parse rules in `pipelineFull` (`LeanFtml/Pipeline.lean`), all 61 token-rendering rules in `RenderRuleId` (`LeanFtml/RenderCore.lean`, plus 7 non-token parse rules), 898 `#print axioms` lines in `Main.lean` (zero `sorryAx`, zero `native_decide`), and byte-exact conformance across 4,204/4,205 pooled cases (`a34` sole batch-counter artifact).

Yet the formal record does **not** yet constitute a proof that the mirror implements the PHP reference, for three concrete structural reasons observed directly in the tree:

1. **Ground pins and abstract enums are standing in for equivalence proofs.** Across `Spec*.lean` and `SuspectSpec.lean` (344 theorems), the overwhelming majority are closed ground `rfl`/`decide` unit pins (e.g., `SpecBlock.lean` 40/40 ground, `SpecProse.lean` 23/23 ground, `SpecRefcorr11.lean` 6/6 ground). Across `Coverage*.lean` (373 theorems), proofs establish completeness of hand-transcribed abstract `*Shape`/`*Class` inductive enums — explicitly disclaiming equivalence to the actual byte scanners (`CoverageProse.lean:19-22`). Neither proves anything universally about arbitrary inputs on the mirror.
2. **Hand-compiled regex sprawl bloats the Trusted Computing Base (TCB) and generates recurring divergences.** In `ref-php`, 45 of 68 parse rules inherit `Text_Wiki_Parse::parse()`'s single `preg_replace_callback`, and most of the remaining 23 custom-`parse()` rules still dispatch on `preg_replace_callback`/`preg_match_all` (only ~4 — `Include`, `Raw`, `Concatlines`, `Tighten` — are primarily non-regex imperative loops). Yet `lean-ftml` hand-compiled every PHP regex into ~25,000 lines of bespoke, fuel-driven `List Nat` backtracking scanners with 6 duplicated sets of byte helpers. Every hand-translation is an unverified compiler pass; that exact mechanism produced `F-TABLEADV-1` (depth-first shortcut vs PCRE `(?R)` backtracking) and `REFCORR10-MODFIX` (over-generalized defense rewrite).
3. **Active proof lanes are proving self-referential properties on stale branches.** All eight `cursor-proof-*` repos sit on `f7a117c` (pre-REFCORR12, behind `main` at `e8d36b4` and active `R12-LISTGEN`), and `cursor-proof-list/repo` has modified tracked `.lake/build/` artifacts. Their drafts (`ProofEmail.lean`, `TableadvProof.lean`) prove internal properties of mirror functions or equality against a second hand-written Lean copy (`advHeadRuns = refHeadRuns`). Proving `mirror = second_hand_copy` does not shrink the TCB and breaks on every correction round.

This policy resolves all three failures into one executable plan.

---

## 1. Architecture: Formal Semantics, Tier Statements, and the Trusted Computing Base

### 1.1 Separating Boundary A from Boundary B

The programme crosses two fundamentally different boundaries that must never be conflated in theorem statements or completion criteria:

- **Boundary A (Live Wikidot ↔ PHP Reference `ref-php`):** Live Wikidot is a closed-source hosted service. **No Lean theorem can cross Boundary A.** Boundary A is owned exclusively by empirical pins, live sandbox probes, suspicion rounds (Discovery Package 2.1), and REFCORR rounds.
- **Boundary B (PHP Reference `ref-php` ↔ Lean Mirror `LeanFtml`):** This is the formal-verification target. Because PHP 8.5, `libpcre2`, `ext/standard` C, and `libtidy.so.58` are not Lean terms, proving "the mirror implements the PHP reference" inside Lean means:
  1. Constructing a **small, auditable, mechanically extracted Formal Reference Kernel (`RefKernel`)** inside Lean whose syntactic fidelity to `ref-php` is direct and CI-checked; and
  2. Proving inside Lean that `LeanFtml` equals (or refines/simulates, where equality is the wrong shape) `RefKernel`, plus pipeline-composition and representation invariants.

### 1.2 The Minimal Trusted Computing Base (TCB)

This architecture collapses the Boundary-B TCB from ~43,900 lines of ad-hoc hand-compiled Lean scanners down to **five explicitly named, independently auditable items**:

| TCB Item | Artifact / Scope | How Trust Is Earned |
|---|---|---|
| **TCB-1: Lean Kernel & Axioms** | Lean `4.36.0` kernel; `[propext, Classical.choice, Quot.sound]` only | Zero `sorryAx`, zero `native_decide`/`Lean.ofReduceBool`, zero `bv_decide` trust axiom; `#print axioms` gate in `Main.lean`. |
| **TCB-2: PCRE2-Byte-Subset Engine** | Single ~700-LOC executable `LeanFtml.PcreCore` (generalizing `LeanFtml/Pcre.lean`) | Dedicated PCRE2 differential torture suite (`conformance-pcre2/`) against PHP 8.5 `libpcre2` covering every construct occurring across all 68 rules' regexes, orthogonal to wikitext corpora. |
| **TCB-3: PHP Stdlib Primitives** | ~15 small functions in `LeanFtml.ByteCore` (`htmlspecialchars` flags, `trim`, `urlencode`, `stripslashes`, `strtolower`, `explode`, `str_replace`, `strrev`, `substr`, `strpos`/`strrpos`, PHP `empty`/truthiness) + `UnicodeCore` | Direct byte-level differential tests against PHP 8.5 `ext/standard`; exhaustive verification over all 1,112,064 Unicode scalar values for `UnicodeCore` tables. |
| **TCB-4: Extracted Rule Tables & `process()` Correspondence** | `LeanFtml.RefTables` (mechanically extracted PHP regex strings + static maps) + compact `processRef` callbacks (~10–60 LOC each) | Deterministic CI extractor `tools/extract_ref_tables.py --verify` checking SHA-256/exact literal match against `ref-php` snapshot tag + line-tagged PHP↔Lean traceability audit for `process()` and the ~4 custom-loop `parse()` rules. |
| **TCB-5: External C / Serving Boundaries** | `libtidy.so.58` (Stage 2), `Text_Highlighter` (14 langs), `LatexRenderer`, `DB_OzoneUserPeer`, `FlickrHandler`, `DB_PagePeer::selectByPrimaryKey`, `DB_FilePeer` | Explicitly abstracted as fields of `RenderEnv` (Stage 1 render) or isolated behind a parametricity-justified bounded skeleton oracle certificate (Stage 2). Never silently stubbed. |

### 1.3 Formal Correctness Statements Per Tier

#### Tier 1 — Parse Phase (`Text_Wiki::parse`)

**Representation bridge (currently missing and mandatory):** Every rule from `Form` (pos 5) to `Tighten` (pos 68) runs `applyByteRule`: `work : List TSeg` → `byteForm` → `List Nat` → `parseBytes` → `List TSeg`. Right now `parseBytes (byteForm segs) = normSegs segs` is **unproved**. Define:

- `WFSegs (segs : List TSeg) (n : Nat) : Prop` — `segs = normSegs segs` and every `TSeg.tok k ∈ segs` satisfies `k < n`.
- `WFBytes (bs : List Nat) (n : Nat) : Prop` — `∀ b ∈ bs, b < 256`; every `0xFF` opens a well-formed `\xFF<dec>\xFF` with canonical decimal digits representing `k < n`; every byte span between placeholders satisfies `utf8Valid = true`.
- `WFState (st : ParseState) : Prop` — `WFSegs st.work st.tokens.length`, every `OptVal.bytes bs` in `st.tokens` and every byte-list entry in `st.doc` (`footnotes`, `bibitems`, `bibitemIds`, `scoredAnchors`, `continuedDivLeads`) satisfies `∀ b ∈ bs, b < 256` and valid placeholder references `< st.tokens.length`.

**Required Tier-1 bridge theorems (`LeanFtml/TokenStateProof.lean`):**
```lean
theorem parseBytes_byteForm_id (segs : List TSeg) (n : Nat) (h : WFSegs segs n) :
    parseBytes (byteForm segs) = segs

theorem byteForm_parseBytes_id (bs : List Nat) (n : Nat) (h : WFBytes bs n) :
    byteForm (parseBytes bs) = bs
```

**Per-rule parse correctness (Direct Functional Equality on canonical per-document `ParseState`):** Every rule `r : RuleId` must deliver a `RuleProofBundle r` containing:
```lean
theorem <r>_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (applyRule r st)

theorem <r>_eq_ref (st : ParseState) (hwf : WFState st) :
    applyRule r st = applyRuleRef r st

theorem <r>_reachable_tokens (st : ParseState) (hwf : WFState st) (hr : ReachableState st) :
    ReachableState (applyRule r st)
```
where `applyRuleRef r` executes `PcreCore.pregReplaceCallback` on the extracted PHP regex in `RefTables` + `processRef r` (for PCRE-driven rules) or the fuel-free structural spec (for the ~4 custom-loop rules). Note: where the mirror itself is refactored to invoke `PcreCore` directly, matcher equivalence holds by construction and `<r>_eq_ref` reduces to `process()` + fuel-sufficiency equivalence!

**Pipeline composition theorem (Direct Functional Equality):**
```lean
theorem pipelineFull_preserves_wf (cs : List Char) :
    WFState (runRules pipelineFull (ParseState.ofSource cs))

theorem pipelineFull_eq_ref (cs : List Char) :
    runRules pipelineFull (ParseState.ofSource cs) =
    runRulesRef pipelineFull (ParseState.ofSource cs)
```

**Where direct equality is the WRONG shape — Token-Index Simulation (`TokEquiv`):** For process-cumulative batch runs (`base > 0`, `a34`, `BatchTokenIdCounter`), live's `+1` offset (`ownedLiveIndex`), and cross-allocator comparisons (`u3-listfour`), direct equality fails because placeholder decimal bytes depend on token indices. The right formal relation is a **Simulation / Alpha-Equivalence Relation `TokEquiv (σ : Nat → Nat) st₁ st₂`** (detailed in §5.2), proving:
- All 67 non-`Email` parse rules commute with additive shift `σ(k) = base + k` (`rule_shift_commutes`);
- `Email` satisfies an exact `base`-parameterized observer law (`email_index_observer_law`).

#### Tier 2 — Render Phase (`Text_Wiki::render('Xhtml')`)

**Environment parameterization (mandatory):** Lift the harness constants currently hardcoded in `ServingRules.lean` and `CodeEmbedRules.lean` into an explicit record `LeanFtml.RenderEnv`:
```lean
structure RenderEnv where
  pageName        : List Nat
  pageExists      : List Nat → Bool
  pageTitle       : List Nat → Option (List Nat)
  moduleAvailable : List Nat → Bool
  highlightCode   : List Nat → List Nat → Option (List Nat)
  renderLatex     : List Nat → List Nat → Option (List Nat)
  lookupUser      : List Nat → Option UserRecord
  flickrResolve   : List Nat → Option FlickrRecord
  localAttachments : List Nat → Option (List AttachmentRecord)
```
Define `def harnessEnv : RenderEnv` matching `ref-php/harness/{wiki-config,ozone-stubs,pages}.php` verbatim for conformance binaries.

**Per-rule render correctness (Direct Functional Equality on reachable tokens, parametric in `env`):** For every `r : RenderRuleId` (all 61):
```lean
theorem render_<r>_eq_ref (env : RenderEnv) (conf : RenderConf) (doc : DocState)
    (opts : OptMap) (hr : ReachableTok r opts doc) :
    renderMirror env r conf doc opts = renderRefSpec env r conf doc opts
```
For the 53 pure render rules, `env` is unused. For the 8 serving/external rules (`Freelink`, `Module`, `Module654`, `Math`, `Image`, `Gallery`, `User`, `Code`), equality holds parametrically over ALL `env : RenderEnv`, making every external call an explicit, matched call on both sides.

**Render driver correctness:**
- **Non-U+FFFD path (Direct Functional Equality):**
  ```lean
  theorem renderWith_eq_ref (env : RenderEnv) (conf : RenderConf) (st : ParseState)
      (hwf : WFState st) (hr : ReachableState st) (hnou : ¬ st.work.any segHasUfffd) :
      renderWith (dispatch env) st.tokens[·]? conf st.work st.doc =
      renderRefWith env conf st
  ```
- **Literal U+FFFD recovery path (Pre-Tidy Simulation + Stage-2 Composition):** Direct equality between `RenderCore.ufffdWalk` and PHP's `renderLiteralUfffdRecovery` is the WRONG shape because PHP shells out to `/usr/bin/tidy` (`purifyRecoveredHtml`, `Wiki.php:1018`) and shifts indices by `tok.id - first + 1`, whereas `RenderCore.ufffdWalk` currently bakes Tidy's heading-swallow/whitespace behavior directly into Stage 1. Split `ufffdWalk` into `ufffdPreTidy (offset : Nat)` + `Stage2_TidyCore`:
  1. Prove **exact equality** `ufffdPreTidy offset` = PHP `Wiki.php:925-1015` (`$html` before `purifyRecoveredHtml`), parameterized by `offset` (`0` canonical, `1` live).
  2. Compose with `Stage2_TidyCore` under Tier 3's contract.

#### Tier 3 — Stage 2 (`WikiTransformation::purifyHtml` / `libtidy` 5.8.0)

`libtidy.so.58` is a ~50k-LOC external C library; direct functional equality `Stage2.lean = libtidy.so.58` is not provable in Lean. The formal specification is a **two-layer contract** over a totalized, decoupled `Stage2_TidyCore` (detailed in §5.3):

1. **In-Lean Structural & Algebraic Contract (Universal Theorems):**
   - `stage2_well_formed`: balanced, valid `HtmlNode` output for all inputs;
   - `stage2_idempotent`: `stage2TidyCore (stage2TidyCore s) = stage2TidyCore s`;
   - `stage2_wf_identity`: `NormalizedWF s → stage2TidyCore s = blockLayoutOnly s` (lifting Stage-1 equivalence directly to end-to-end equivalence on all well-formed documents);
   - `stage2_parametric_in_text`: commutation with non-tag, whitespace-class-preserving payload substitution (justifying finite skeleton quotienting);
   - `stage2_repair_laws`: universal theorems for T1–T5, T7–T10, T12.
2. **Oracle-Bound Equivalence Certificate (TCB-5):** Exhaustive differential agreement between `stage2TidyCore` and `conformance-tidy-oracle/tidy_oracle` over the parametricity-quotiented tag-skeleton language up to stated bound `(depth ≤ 4, length ≤ 8)`, plus the 266 settled cases and 39 remainder probes. `Stage2_FrameComp` (T6 unwrap, T11 break-drop) is isolated outside `Stage2_TidyCore`.

---

## 2. Per-Family Strategy (All 68 Parse Rules + 61 Render Rules)

### 2.1 What Makes a Bounded Enumeration Proof-Grade Rather Than a Test

A finite corpus check (even 3.2M LCG inputs) is only **evidence**, not a proof-grade bound. A bounded enumeration earns proof-grade status **only** when paired with an explicit Lean reduction or mathematically argued saturation bound consisting of four elements:

1. **Lean Parametricity / Alphabet Quotient Theorem:** Prove in Lean that the rule reads raw bytes only through a finite equivalence relation of `k` character classes (collapsing `256` bytes to `|Σ_q| = k` representatives, e.g., `|Σ_q| = 16` for explicit list tags, `|Σ_q| = 12` for Stage 2 tag skeletons).
2. **Explicit Interaction/Depth Bound `(d, L)` Derived From the Automaton:**
   - **Exact Small-Model (Upgrades to Universal Proof):** Where the machine has finite state `S` or bounded local window `W` (or finite scalar domain — e.g., **all 1,112,064 Unicode scalar values in `UnicodeCore`!**), proving a pumping/cutoff lemma in Lean turns finite exhaustion into an **unconditional universal theorem**.
   - **Honest Bounded Maximum:** Where unbounded recursion/global rescanning prevents a clean cutoff (`List` explicit blocks, `PcreCore ↔ libpcre2` on `(?R)`, `Stage2_TidyCore ↔ libtidy`), derive `(d, L)` from the minimum depth required to expose cascading multi-level interactions (e.g., `d = 3` for `(?R)` backtracking because depth 2 triggers single continuation-failure backtrack like `F-TABLEADV-1` and depth 3 tests nested backtrack cascade; `d = 4` for Stage 2 because T4 requires ≥2 elements above target inside a block inside a table cell), sizing the quotient domain at `10^5`–`10^6` distinct canonical skeletons.
3. **Zero-Mismatch Exhaustive Check Against PHP 8.5 / `tidy_oracle`:** Complete enumeration (no random sampling) with recorded generator script, cardinality proof, and deterministic hash.
4. **Explicitly Named Remainder:** State plainly in the theorem's doc header and TCB ledger what sits above `(d, L)`. Never label a bounded certificate a universal proof.

### 2.2 Complete Classification of the Mirror's Rule Families

Starting from the mirror's actual module layout in `LeanFtml.lean`:

#### Class A — Admit General Universal Theorems NOW (No New Core Engine Required)

| Family / Module | Rules (Count) | Why General Proof Works Now | Named Proof Target |
|---|---|---|---|
| **Pure Renderers** (`NotesRender`, `ProseRules`/`Render`, `InlineSimpleRules`/`Render`, `RawHeadingRules`/`Render`, `ListTableRules`/`Render`, `InteractiveRules`/`Render`, pure skeletons of `CodeEmbedRules` & `ServingRules`) | 53 pure + 8 `RenderEnv`-parametric = **61 render rules** | 50/61 have 0 PHP regexes; 10 others use trivial prefix/suffix/charset checks (`Embed` already uses `Pcre.lean`). Direct algebraic functions on `OptMap × DocState × RenderConf`. | `render_<r>_eq_ref` over `ReachableTok`, `RenderEnv`-parametricity, lifting `Coverage*` enums onto actual `render*` functions. |
| **`FrameRules`** | `Prefilter`, `Delimiter` (2) | Pre-token pure `List Char` passes; `Delimiter` is identity on valid UTF-8. | Fuel-free equivalence of all 6 `Prefilter` passes; `delimiterRule_id`; `WFState` creation from any `List Char`. |
| **`IncludeRule`** | `Include` (1) | Tier 1 already has general proofs (`Include.lean`, `IncludeGrammar.lean`, `IncludeExpr.lean`) — just disconnected from `IncludeRule.lean`! | Reconnect Tier 1 proofs to `IncludeRule.lean`'s 5-pass loop, `refResolveRef` (S/G/Q/R/X/L6), and `WFState` preservation. |
| **`FormRawRules` (Raw only)** | `Raw` (1) | Custom byte-run scanner in PHP (no regex). Exact arithmetic on `@` run lengths. | Fuel-independence of `rawScan`; exact `run ≥ 4` empty-Raw + `run - 4` literal theorem; `rawSurplusClose`; `hasLaterQuad`; cross-line trim; `renderRaw` elision. |
| **`LinkRules` (Concatlines only)** | `Concatlines` (1) | Single-pass hand scanner over `\\\n` + standalone `[[div]]` lookahead. | Single-pass non-cascading join; `isDivOpenerLine` exemption + `continuedDivLeads` invariant; `WFState` + `TokEquiv`. |
| **`ParaRules` (Newline only)** | `Newline` (1) | Deterministic 2-byte sliding window `([^\n])\n(?!\n)`. | Exact pointwise window characterization; `WFState` + `TokEquiv`. |
| **`Inline3Rules` (Tighten only)** | `Tighten` (1) | 5-step deterministic pass over bytes + token table. | Exact 5-pass spec (`\n` deletion, ws-fold, Colortext edge hoist/eject, Newline/Paragraph trim); token-table preservation; `WFState` + `TokEquiv`. |
| **`MiddleRules`** | `Horiz`, `Separator`, `Clearfloat`, `Break`, `Center` (5) | Simple line-anchored or fixed-literal single-pass rules. | Exact line-predicate characterization; `WFState` + `TokEquiv` + `ReachableTok`. |
| **`BlockRules`** | `Blockquote`, `Heading`, `Toc` (3) | `Blockquote` depth-stack mirrors Tier 1 `Depth.lean`; `Heading` is line-anchored + monotonic `headlineId`; `Toc` reads token table. | Stack-balance theorem for `blockquoteProcess`; `headlineId` monotonicity; `tocItems` order; `WFState` + `TokEquiv`. |
| **`NotesRules`** | `Footnote`, `Footnoteitem`, `Footnoteblock`, `Bibitem`, `Bibliography`, `Bibcite` (6) | Simple tag/block patterns + append-only doc registries + REFCORR8/11/12 C0/empty-Raw trim. | Registry monotonicity; token-aware emptiness; `notes_title_never_bool_false` (closing Register 3.3 formally!); `WFState` + `TokEquiv`. |

#### Class B — Build Shared Abstraction FIRST (`ByteCore` + `PcreCore` + `UnicodeCore`), Then Prove Universally

| Family / Module | Rules (Count) | Blocking Abstraction | Why Building the Core First Wins |
|---|---|---|---|
| **Base-Class PCRE Parse Rules** (`FormRawRules` Form/Rawold, `ModuleRules` Modulepre/Module654, `NextRules` Iframe/Date, `LinkRules` Eref, `Middle2Rules` Divprefilter/Note/Gallery, `ContainRules` Collapsible, `FinalRules` User/Button/Embed/Social/File, `Inline2Rules` Colortext/Strong/Emphasis/Underline/Strikethrough, `Inline3Rules` Superscript/Subscript) | **23 parse rules** (+ `Embed` render) | **`ByteCore` + `PcreCore` + `RefTables`** | All 23 use single-pass `preg_replace_callback`. Once `PcreCore` runs on extracted PHP regexes, matcher equivalence holds by construction and only the 10–40 LOC `process()` callback needs a direct functional proof! |
| **Recursive `(?R)` PCRE Rules** (`CodeRule` Code, `NextRules` Iftags/Math, `ContainRules` Span/Size/Div, `Middle2Rules` Divalign, `TableRules` Tableadv) | **8 parse rules** | **`PcreCore` (with CPS `(?R)`) + `UnicodeCore` (Div/Tableadv)** | All 8 currently have separate hand-coded backtracking matchers (source of `F-TABLEADV-1` and `SpecBlock.lean:177` kernel timeout). Unifying on `PcreCore`'s single CPS `(?R)` engine turns all 8 — including `Tableadv`! — into universal theorems modulo `PcreCore`. |
| **Hybrid Multi-Pass / Multi-Regex Parse Rules** (`ModuleRules` Module, `NextRules` Comment, `ContainRules` Tabview, `FinalRules` Anchor, `ListRules` Deflist, `TableRules` Table, `ParaRules` Image/Paragraph, `Inline1Rules` Url/Email/Mathinline/Interwiki, `Inline3Rules` Tt/Typography) | **14 parse rules** | **`ByteCore` + `PcreCore`** | `PcreCore` discharges every embedded regex (`preg_match_all`, `preg_replace`, `getAttrs`, `tokenizeScoredSpans`, `Typography`'s 10 statements), leaving clean structural proofs of the outer loop (`modulePasses` termination, `Typography`'s dead `---` statement, `Mathinline` placeholder resolution, `Email`'s `TokEquiv` observer law). |
| **Unicode `/u` Parse Rules** (`LinkRules` Freelink + Unicode helpers of `Div` `isolateId` and `Tableadv` `normalizeValue`) | **1 rule** (`Freelink`) + 2 helpers | **`UnicodeCore` + `PcreCore`** | `UnicodeCore` exhaustively certifies `\s/u`, `Cf`, Freelink's lead class, and the 468-entry transliteration map over all 1,112,064 Unicode scalars against PHP 8.5, turning `Freelink` and `Div.isolateId` into universal theorems! |

*(Count check: Class A = 21 parse rules; Class B = 23 + 8 + 14 + 1 = 46 parse rules; Class C = 1 parse rule (`List`, whose native-list half is also Class A) → **68 parse rules total**, 0 omitted.)*

#### Class C — Hybrid Universal Core + Proof-Grade Bounded Enumeration

| Artifact | Universal Core Proved in Lean | Proof-Grade Bounded Enumeration & Honest Maximum |
|---|---|---|
| **`ListRules` (`List` explicit blocks — 2,027 LOC Lean / 1,262 LOC PHP / 47 `preg_*`)** | Native `*`/`#` line lists (`nativeRunAt`, `collectRawItems`, depth-stack — exact Class A proof); explicit block `findPair` raw-case asymmetry (`tagIsRawCase`); `WFState` + `TokEquiv` preservation; **text-parametricity reduction theorem** over sentinel-free inputs. | Exhaustive differential check vs PHP 8.5 `List.php` over the quotient tag alphabet `Σ_list` (16 canonical symbols: `{[[ul]], [[UL]], [[ol]], [[OL]], [[ul_]], [[li]], [[LI]], [[/ul]], [[/UL]], [[/ol]], [[/OL]], [[/li]], [[/LI]], ], \n, X, \xFF0\xFF}`) up to length 6 + failed-close adjacency frames (depth ≤ 3, `~500k–1M` strings). **Why honest maximum now:** `List.php` is still under active `R12-LISTGEN` churn with 47 interacting regexes and sentinel masking; full universal proof waits until `List.php` stabilizes on `PcreCore` or is replaced by a unified grammar. |
| **`PcreCore` ↔ PHP 8.5 `libpcre2` (TCB-2 Certification)** | Internal soundness, fuel-sufficiency, and termination of `PcreCore` proved universally in Lean. | Exhaustive differential torture suite against PHP 8.5 `libpcre2` over a bounded grammar for every PCRE construct in the 68 rules (including the 20-symbol `Tableadv` `(?R)` alphabet extended with `data-*`/UTF-8/placeholders to depth 3, `~500k` strings). **Honest maximum:** `libpcre2` is C code outside Lean. |
| **`Stage2_TidyCore` ↔ `libtidy.so.58` (TCB-5 Certification)** | Well-formedness, idempotence, well-formed preservation, text/attr parametricity, and repair laws T1–T5, T7–T10, T12 proved universally in Lean. | Exhaustive differential check vs `conformance-tidy-oracle/tidy_oracle` over parametricity-quotiented HTML tag skeletons (12 representative tag classes, length ≤ 8, stack depth ≤ 4) + 266 settled cases + 39 remainder probes. **Honest maximum:** `libtidy.so.58` is a 50k-LOC external C binary. |

---

## 3. Mathlib Assessment: Concrete Verdict From `mathlib-check` and Lean 4.36.0

### 3.1 Measured Evidence From `/home/roku/.local/state/wikijump/muse-bhl/mathlib-check`

Firsthand inspection of `mathlib-check` (Lean `v4.36.0`, Mathlib `v4.36.0` rev `fc4f59e5`, 9,117 cache files downloaded, `CACHE-OK`) and the installed Lean `4.36.0` toolchain establishes five hard facts:

1. **Weight & infrastructure cost (67× heavier):** `mathlib-check/.lake` is **7.3 GB** (`mathlib` 7.0 GB, `batteries` 135 MB, `aesop` 134 MB, `importGraph` 40 MB, `proofwidgets` 35 MB, `Qq` 22 MB, `plausible` 14 MB, `LeanSearchClient` 5.3 MB) versus **108 MB** for `lean-ftml/.lake`. On a machine running 9+ concurrent worktrees (coordinator + 8 Cursor proof lanes + scratch `coord-units/`) behind a single serialized `flock` (`lean-build.sh`, `LAKE_JOBS=2`, `MemoryMax=22G`, ~191 GB free disk after an earlier ENOSPC incident), pulling Mathlib into `lean-ftml` risks 60–80 GB of replicated `.lake` trees (unless centrally symlinked), adds ~570 MB RAM overhead per single-file import (observed live on `MathlibCheck/Basic.lean`), and increases lock contention across all lanes.
2. **String & byte libraries — Mathlib adds almost nothing; Lean 4.36.0 core already has what matters:**
   - `Mathlib/Data/String/Basic.lean` (154 LOC) and `Lemmas.lean` (42 LOC) provide only `LinearOrder String`, `Legacy.Iterator.ltb`, and `leftpad`. In fact, `MathlibCheck/Basic.lean` itself tripped on Lean 4.36.0's `String.take` (`String.Slice`) API change while its other test (`List.reverse_reverse`) is already in core `Init`.
   - Meanwhile, **Lean 4.36.0's built-in `Init` + `Std` ALREADY ship** `Init.Data.String.Decode` (complete verified UTF-8 encode/decode inverse proofs!), `Init.Data.ByteArray.Lemmas`, `Init.Data.UInt.Lemmas`, `Init.Data.List.{TakeDrop,Sublist,Pairwise,Nat.Find}`, `Std.Data.HashMap`, `omega`, **`grind`**, `fun_induction`, and `fun_cases`.
3. **Automata & computability — wrong mathematical object for PCRE2:**
   - `Mathlib/Computability/DFA.lean` defines acceptance as non-computable `accept : Set σ` (`Prop`-valued).
   - `Mathlib/Computability/RegularExpressions.lean` explicitly warns in its header: *"these are regular expressions in terms of formal language theory... different to regexes used in computer science... Currently, we do not show that regular expressions and DFAs/NFAs are equivalent."*
   - It lacks ordered backtracking, capture groups, lazy quantifiers, lookarounds, backreferences, `(?R)` recursion, and transducer replacement. Our own computable ~700-LOC `LeanFtml.PcreCore` is strictly more faithful and faster to reason about.
4. **Lists, finite enumerations, and tactics:** Lean 4.36.0's `Init.Data.List.*` + `omega` + `grind` + `decide` cover ~95% of list/nat/enumeration needs (as `Coverage*.lean` already demonstrates with `Nodup`/`decide`). Only `Finset`/`Fintype` cardinality combinatorics are unique to Mathlib — and our bounded enumerations are `List`-generated concrete alphabets, not abstract finite-set algebra.
5. **Axiom audit compatibility:** Mathlib stays inside `[propext, Classical.choice, Quot.sound]` (so it would not violate the hard ceiling), **but** importing `Mathlib.Computability.*` or `Finset` routinely introduces `Classical.choice` into definitions/lemmas that core Lean proves constructively (`[propext]` or `[propext, Quot.sound]`). **Separate core-Lean caution:** Lean 4.36.0's `Std.Sat` tactic **`bv_decide` MUST BE FORBIDDEN** in `lean-ftml` because it relies on `Lean.ofReduceBool` (same banned trust class as `native_decide`).

### 3.2 Verdict: **Do NOT Depend on Mathlib in `lean-ftml` (Not in Whole, Not in Part)**

- **Policy:** Keep `lean-ftml/lakefile.toml` **zero-dependency on Lean 4.36.0 core (`Init` + `Std`)**.
- **Immediate zero-cost upgrade:** Mandate adoption of Lean 4.36.0 core features currently underused in `lean-ftml`: `Init.Data.String.Decode`, `Init.Data.ByteArray.Lemmas`, `fun_induction`, `fun_cases`, and **`grind`** (within `[propext, Classical.choice, Quot.sound]`).
- **Narrow contingency (only if a concrete blocker arises later):** If a future proof genuinely requires missing `List`/`Array`/`HashMap` lemmas absent from Lean 4.36.0 `Init`/`Std`, evaluate adding **`batteries` alone (135 MB — 52× smaller than Mathlib)**, never `mathlib`. Retire `mathlib-check` once the probe conclusion is logged.

---

## 4. Sequencing: Re-Anchoring the 8 Cursor Proof Lanes, Coordinator Handoffs, and the New Completion Test

### 4.1 Immediate Hygiene Corrections (Day 0)

1. **Freeze a Proof Baseline (`proof-base-v1`)** on `ftml-lean` `main` immediately after `R12-LISTGEN` lands and `snapshot-36` publishes.
2. **Rebase all 8 `proof/<family>` branches from `f7a117c` onto `proof-base-v1`** (never let proof lanes work against pre-REFCORR12 mirrors).
3. **Purge `.lake/` from git tracking** (observed dirty in `cursor-proof-list/repo`) so proof branches contain only Lean sources and reports.
4. **Enforce a uniform module contract:** Every proof lane outputs `lean-ftml/LeanFtml/Proof/<Family>.lean` instantiating the standardized `RuleProofBundle` / `RenderProofBundle` structures from `LeanFtml/ProofInterface.lean` (so the coordinator wires them cleanly into `LeanFtml.lean` and `Main.lean` without bespoke glue).

### 4.2 Phase 0 — Coordinator Foundation Sprint (Before Scaling Family Proofs)

Dispatch 3 disjoint foundation units (2–4 days total) and tag their merge as **`proof-base-v2`**:

| Unit | Deliverable File(s) | Exact Responsibility |
|---|---|---|
| **F1: Byte, WF, & Shift Kernel** | `LeanFtml/ByteCore.lean`, `LeanFtml/TokenStateProof.lean`, `LeanFtml/ProofInterface.lean` | Unify duplicated byte helpers; prove `utf8Valid_utf8Bytes`, `utf8Decode_utf8Bytes`, `utf8_no_ascii_split`, `parseBytes_byteForm_id`, `byteForm_parseBytes_id`; define `WFState`, `ReachableState`, `TokEquiv`, `RuleProofBundle`, `RenderProofBundle`. |
| **F2: Verified PCRE2 Core & Mechanical Extractor** | `LeanFtml/PcreCore.lean`, `LeanFtml/RefTables.lean`, `tools/extract_ref_tables.py`, `conformance-pcre2/` | Generalize `Pcre.lean` to full captures, `/i /s /m /U /D`, lookarounds, `\1`/`\2`, CPS `(?R)`, `pregReplaceCallback`/`pregMatchAll`; mechanically extract all 68 PHP regexes + static tables from `ref-php`; pass PCRE2 torture suite vs PHP 8.5 with 0 diffs. |
| **F3: Unicode Core & Render Environment** | `LeanFtml/UnicodeCore.lean`, `LeanFtml/RenderEnv.lean`, `conformance-unicode/` | Exhaustive PHP 8.5 certification of `\s/u`, `Cf`, Freelink lead & 468-entry transliteration tables across all 1,112,064 Unicode scalars; factor `RenderEnv` + `harnessEnv` out of `ServingRules`/`CodeEmbedRules`; refactor `RenderCore.htmlSpecialChars*Subst` onto shared `utf8SanitizeStep`. |

### 4.3 Phase 1 — Reshaping the 8 Active Cursor Proof Lanes (Wave 1)

Re-brief the 8 existing branches so their in-flight work composes directly into the policy instead of scattering:

| Branch | Timing | Keep From Current Draft | New Target Under Policy |
|---|---|---|---|
| **`proof/raw`** | Immediate (on `proof-base-v1`, then `v2`) | — (clean start) | **Pilot `RuleProofBundle` + `RenderProofBundle` (Class A):** fuel-independent `rawScan`, exact `run ≥ 4` empty-Raw + `rawSurplusClose` + `hasLaterQuad` + cross-line trim + `renderRaw` elision; then `Rawold`/`Form` on `PcreCore`. |
| **`proof/email`** | Immediate (rebase on `v1`, finish on `v2`) | `ProofEmail.lean` (`decBytes_safe`, `htmlSubst_safe`, `renderEmail_claimed_placeholder`) | Upgrade to **Hard Core #2 showcase:** prove `email_index_observer_law (base k)` under `TokEquiv`, prove `emailMatchLen` vs extracted regex via `PcreCore`, and prove `renderEmail` direct equality. |
| **`proof/notes`** | Immediate (on `v1`, then `v2`) | `ProofNotesProbe.lean` diagnostics | Full 6-rule `NotesRules` + `NotesRender` bundles (post-R12 ESC/C0 fixes): registry monotonicity, token-aware emptiness, `TokEquiv`, AND **`notes_title_never_bool_false`** formally discharging Register 3.3! |
| **`proof/module`** | Immediate (on `v1`, then `v2`) | — (clean start) | **Hard Core #4 showcase:** `Modulepre`/`Module`/`Module654` parse-only `RuleProofBundle` (`modulePasses` termination, REFCORR10-MODFIX inline-only defense via `PcreCore`, REFCORR7/9 Code-only re-emit, `module_parse_env_independent`) + `renderModule` handoff/error contract parametric in `RenderEnv.moduleAvailable`. |
| **`proof/divattr`** | After `F3` (`UnicodeCore`) + `F2` (`PcreCore`) | — (clean start) | Shared attribute/ID theorem (`getAttrs`, `isolateId` via `UnicodeCore`, duplicate-last-wins, `data-*` lowercase allowlist — reused by 7 rules!) + `Div`/`Span`/`Size`/`Divalign` `(?R)` equivalence to `PcreCore`. |
| **`proof/tableadv`** | After `F2` (`PcreCore`) + `divattr` attrs | `TableadvProof.lean` (`advHeadRuns_eq_ref`, `advHeadRuns_quote_front`) | **Eliminate duplicate-copy proof:** prove `tableadvEnumMatchFirst` equals `PcreCore` on extracted `Tableadv.php` regex + reuse `divattr` attr theorem → upgrades `Tableadv` from 185,662-string bounded evidence to a **universal theorem** modulo `PcreCore`! |
| **`proof/freelink`** | After `F2` + `F3` (`UnicodeCore`) | — (clean start) | First full `UnicodeCore` consumer: `freelinkMatchAt` via `PcreCore`, multi-hash anchor peeling, `_default:` + `Cf`-lead + 468-entry translit via `UnicodeCore`, `toUnixName` invariants, `renderFreelink` parametric in `RenderEnv`. |
| **`proof/list`** | **HOLD until `R12-LISTGEN` lands** | Drop pre-R12 probe; clean `.lake` | **Class C Hybrid:** universal theorems for native line lists (`nativeRunAt`, `collectRawItems`, depth-stack) + `findPair` raw-case asymmetry + text-parametricity reduction + exhaustive PHP 8.5 certificate over `(Σ_list, len ≤ 6, depth ≤ 3)`. |

### 4.4 Phase 2 & 3 — Completing the Remaining 45+ Rules, Pipeline Composition, and Stage 2

- **Wave 2 (4 parallel lanes once `proof-base-v2` lands):**
  1. `proof/frame-include-code`: `FrameRules`, `IncludeRule` (reconnecting Tier 1 proofs), `CodeRule` (`PcreCore` + `renderCode` parametric in `RenderEnv.highlightCode`).
  2. `proof/block-middle`: `BlockRules` (`Blockquote`, `Heading`, `Toc`) + `MiddleRules` (5) + `Middle2Rules` (4) + `ProseRender` + `RawHeadingRender`.
  3. `proof/next-final`: `NextRules` (`Iftags`, `Comment`, `Iframe`, `Date`, `Math`) + `FinalRules` (`Anchor`, `User`, `Button`, `Embed`, `Social`, `File`) + `CodeEmbedRender` + `InteractiveRender` + `ServingRender`.
  4. `proof/para-inline`: `ParaRules` (`Image`, `Newline`, `Paragraph`) + `Inline1/2/3Rules` (`Url`, `Mathinline`, `Interwiki`, `Colortext`, `Strong`, `Emphasis`, `Underline`, `Strikethrough`, `Tt`, `Superscript`, `Subscript`, `Typography`, `Tighten`) + `InlineRender` + `ListTableRender`.
- **Wave 3 (Closure & Stage 2):**
  1. `LeanFtml/Proof/PipelineComposition.lean`: compose all 68 `RuleProofBundle`s into `pipelineFull_preserves_wf`, `pipelineFull_eq_ref`, `parse_alpha_invariant`, and all 61 `RenderProofBundle`s into `renderWith_eq_ref` + `UfffdRescanSim`.
  2. `LeanFtml/Stage2TidyCore.lean` + `LeanFtml/Proof/Stage2Proof.lean`: totalize `Stage2.lean` (0 `partial def`), decouple `Stage2_FrameComp`, prove all Stage-2 structural/parametricity/repair laws, and run the bounded skeleton oracle certificate against `tidy_oracle`.

### 4.5 What Coordinator Correction Rounds (REFCORR) Must Hand Proof Lanes

Every REFCORR round must produce a **4-item handoff packet** before resuming affected proof lanes:

1. **Pinned Snapshot & Regenerated Tables:** `wikidot-php-reference` tag + `ftml-lean` commit SHA with `RefTables.lean` regenerated strictly by `tools/extract_ref_tables.py` (never hand-edited).
2. **Delta Manifest (`PROOF-DELTA-R<n>.md`):** Classifies each rule edit into (a) *regex-only* (zero proof breakage under `PcreCore`), (b) *Unicode-table-only* (auto-reverified by `conformance-unicode/`), or (c) *`process()`/loop logic* (explicitly naming affected theorems in `Proof/<Family>.lean`).
3. **Regression Pin Only:** Minimal witness + live capture ID added to `SpecRefcorr<n>.lean` (classified strictly as a regression test, never counted toward proof completion).
4. **Stability Lock:** Never dispatch or accept a proof lane on a family with an active unmerged REFCORR unit (e.g., `R12-LISTGEN`).

### 4.6 The Revised Completion Test for Deliverable 2

Under this policy, **Deliverable 2 ("the Lean proof against the PHP reference") is COMPLETE iff all seven gates pass simultaneously** (replacing the current criterion of elaborated ground pins + abstract coverage enums + passing finite corpora):

| Gate | Concrete Machine-Checkable Criterion |
|---|---|
| **G1: Build & Axiom Purity** | `lake build` builds `LeanFtml` **including every `LeanFtml/Proof/*.lean` module** (zero unimported proof files) at exit 0; `Main.lean` prints axioms for every headline theorem, all strictly within `[propext, Classical.choice, Quot.sound]` (zero `sorryAx`, zero `native_decide`/`Lean.ofReduceBool`/`bv_decide`). |
| **G2: Mechanical TCB Gate** | `tools/extract_ref_tables.py --verify` exits 0 against the published `ref-php` snapshot tag; `conformance-pcre2/` (PCRE2 torture suite) and `conformance-unicode/` (all 1,112,064 scalars) exit 0 with 0 mismatches against PHP 8.5. |
| **G3: Core Bridge Gate** | `parseBytes_byteForm_id`, `byteForm_parseBytes_id`, `pipelineFull_preserves_wf`, `parse_alpha_invariant`, and `render_alpha_invariant` are proved universally and imported in `Main.lean`. |
| **G4: 68-Rule Parse Gate** | Every `r : RuleId` (68/68) carries a `RuleProofBundle r` — Class A/B universal `applyRule r = applyRuleRef r` on `WFState`, or Class C (`List` explicit blocks only) Lean parametricity reduction + exhaustive PHP 8.5 certificate with named remainder. Ground `rfl`/`decide` pins in `Spec*.lean` are reclassified as regression tests and **excluded from this count**. |
| **G5: 61-Rule Render Gate** | Every `r : RenderRuleId` (61/61) carries a universal `RenderProofBundle r` over `ReachableTok` parametric in `RenderEnv` (formally closing unreachable-input remainders like `OptVal.bool false`), composed into `renderWith_eq_ref` and `UfffdRescanSim`. All 6 external serving oracles are explicit `RenderEnv` fields. |
| **G6: Stage-2 Contract Gate** | `Stage2_TidyCore` has 0 `partial def`s, is decoupled from `Stage2_FrameComp`, is imported in `LeanFtml`, satisfies `stage2_well_formed`, `stage2_idempotent`, `stage2_wf_identity`, `stage2_parametric_in_text`, and repair laws T1–T5/T7–T10/T12, and passes the bounded skeleton certificate vs `tidy_oracle` with 0 model gaps. |
| **G7: Conformance & Boundary-A Alignment** | Existing gates (`r43`–`r48`, `pooled` with `a34` formally accounted by `TokEquiv`, `smoke 9/9`, `tidy-oracle`) stay green. Discovery Package 2.1 (zero-confirmation suspicion round) remains the separate Boundary-A completion criterion. |

---

## 5. Policies for the Four Hard Cores

### 5.1 Byte-Level and UTF-8 Reasoning

**Root pain points today:** Three mixed representations (`List Char`, unguarded `List Nat`, `String`); `litBytes s := s.toList.map Char.toNat` leaking `Classical.choice`; duplicated 95-line UTF-8 state machines in `RenderCore.lean:434-538`; and unproved `utf8Decode`/`utf8Valid`/`parseBytes` round-trips.

**Policy:**
1. **No 40k-LOC representation rewrite — add a thin invariant layer (`ByteCore.lean`):** Keep `List Nat` in existing mirrors to avoid churn, guarded by `IsByteList (bs : List Nat) : Prop := ∀ b ∈ bs, b < 256` (bundled inside `WFState`). In new kernel/spec code, emit ASCII literals directly as byte lists without `String.toList` when constructive axiom hygiene (`[propext]`/`[propext, Quot.sound]`) is desired.
2. **Bridge once to Lean 4.36.0's built-in `Init.Data.String.Decode`:** Prove `utf8Valid_utf8Bytes`, `utf8Decode_utf8Bytes`, and **`utf8_no_ascii_split`** ("no ASCII byte `< 0x80` or delimiter `0xFF` ever appears inside a multibyte UTF-8 sequence, so splitting/splicing a valid-UTF-8 stream at ASCII/delimiter boundaries preserves `utf8Valid` on every piece"). This single lemma makes UTF-8 completely transparent across all 64 byte-mode parse rules.
3. **Factor HTML escaping onto one shared UTF-8 sanitizer:** Replace the duplicated loops in `htmlSpecialCharsQuotesSubst` and `htmlSpecialCharsNoQuotesSubst` (`RenderCore.lean:434-538`) with a single `utf8Sanitize (escAscii : Nat → List Nat) (bs : List Nat)` proved to reduce to `bs.flatMap escAscii` on every `utf8Valid bs = true` input (not only ASCII!).
4. **Exhaustively certify the 4 `/u` rules via `UnicodeCore`:** Because Unicode scalar values form a finite set of **1,112,064** codepoints (`0x0000..0xD7FF ∪ 0xE000..0x10FFFF`), single-codepoint predicates (`\s/u`, `Cf`, Freelink lead/transliteration) are exhaustively checked against PHP 8.5 PCRE2 in `< 1s` — a complete finite decision, not a sample — and invalid UTF-8 inputs (such as spans crossing `0xFF`) are gated explicitly on `utf8Valid bs`.

### 5.2 The Cumulative Token-Index State Machine

The programme records currently conflate **three distinct phenomena** that require three distinct formal treatments:

1. **Process-cumulative batch base (`base : Nat`, causing `a34` and `BatchTokenIdCounter`):** Formalize **`TokEquiv (σ : Nat → Nat) st₁ st₂`** (alpha-equivalence under order-preserving token-ID renaming, reindexing `TSeg.tok k` and embedded `\xFF<k>\xFF` bytes in `OptVal.bytes` and `DocState` registries). Prove **`parse_alpha_invariant`** for all 67 non-`Email` rules (`σ(k) = base + k`) and **`render_alpha_invariant`** ("for every U+FFFD-free document whose `Email` labels contain no earlier placeholders, rendered XHTML is independent of `base`"). This formally validates per-document canonicalization and proves `a34` is purely a cross-document reflection leak.
2. **Live `+1` offset on index-observing surfaces (`ownedLiveIndex k = k + 1` in `ProofEmail.lean` and `U+FFFD` leaks):** Isolate the **exact two reflection surfaces** in the entire 68-rule pipeline that inspect placeholder decimal digits:
   - **`Email` claimed-placeholder labels:** Prove `email_index_observer_law (base k : Nat)` giving the exact reversed `U+FFFD ++ (decBytes (base + k)).reverse ++ U+FFFD` output bytes.
   - **Literal `U+FFFD` delimiter collision:** Prove `ufffd_index_observer_law (offset : Nat)` on `ufffdPreTidy offset` (with `offset = 0` for canonical mirror and `offset = 1` for live's `tok.id - first + 1`).
3. **Cross-allocator ordering difference (`u3-listfour`, R8-E: live `91102113124136814` vs ref `11112213314457910`):** Prove the **Non-Interference Theorem for Arbitrary Bijective Token Renamings `σ`** (not just `+ base`!): two parse pipelines whose token tables differ by any permutation `σ` produce **byte-identical XHTML** on every document outside the two reflection surfaces (`Email`-claimed-placeholder and literal `U+FFFD`). Thus `u3-listfour` is proved to be a Boundary-A internal-allocator observability artifact — never a Boundary-B mirror defect and never a semantic divergence on ordinary documents.

### 5.3 The Stage-2 `libtidy` Model

**Current blockers found firsthand:** `stage2/stage2-model/Stage2.lean` (1,210 LOC) contains **21 `partial def`s** (rendering every single pass opaque to Lean's kernel!) and mixes **6 frame-compensation cases** (`T6` paragraph unwrap, `T11` break-drop — not libtidy behavior per `REPORT-TIDY-ORACLE.md` §4) directly into the Tidy passes.

**Policy:**
1. **Decompose `Stage2.lean` into two separate modules:**
   - `LeanFtml/Stage2TidyCore.lean`: Passes 1, 3, 4-core, 5 — strictly libtidy 5.8.0 (`indent=0`, `output-xhtml=yes`, `wrap=0`, `preserve-entities=yes`, Strict DOCTYPE, no `tidyCleanAndRepair`).
   - `LeanFtml/Stage2FrameComp.lean`: T6 (`pass2ParagraphUnwrap`) and T11 (`dropBlockSandwichedBrs`), explicitly quarantined as Stage-1-frame compensation for the 6+3 documented cases (with a coordinator action item to determine whether they belong in Stage-1 `Paragraph`/`Table` rules or Wikidot's pre-tidy frame).
2. **Eliminate all 21 `partial def`s in `Stage2TidyCore.lean`:**
   - Lexical/tag scanners (`scanQuoted`, `scanTagRest`, `parseAndNormAttrs`, `scanUntilCloseTag`, `pass1Loop`, `tokenizeHtmlLoop`) → length-bounded recursion (`cs.length + 1`, trivially total).
   - Stack pops (`closeInlinesForBlockEnd`, `popDepth*`, `popCrossedForReopen`, `unwindTreeFrames`) → structural recursion on `openStack`/`frames`.
   - `repairInlineEnd` → structural recursion on its existing `fuel : Nat`.
   - Tree passes (`processNodePass4`, `serializeTreeRaw`, `serializeChildrenPass5`, `serializeNodePass5`) → nested structural recursion on `HtmlNode` / `List HtmlNode`.
3. **Prove the 5-part Stage-2 Lean Contract (`LeanFtml/Proof/Stage2Proof.lean`):**
   - `stage2_well_formed`, `stage2_idempotent`, `stage2_wf_identity` (lifting Stage-1 equivalence to end-to-end equivalence on well-formed HTML!), `stage2_parametric_in_text`, and repair laws T1–T5, T7–T10, T12.
4. **Close the `libtidy.so.58` gap via Parametricity-Justified Bounded Oracle Certification:** Exhaustively compare `stage2TidyCore` vs `conformance-tidy-oracle/tidy_oracle` over the quotient skeleton language justified by `stage2_parametric_in_text` (12 tag classes, length ≤ 8, depth ≤ 4) + 266 settled cases + 39 probes. Unify `RenderCore`'s literal-`U+FFFD` path as `stage2TidyCore ∘ ufffdPreTidy`, retiring the ad-hoc Tidy duplication inside `RenderCore.ufffdWalk`.

### 5.4 The Parse-Only Module Boundary

**Policy (Formalizing G3.12 Without Evaluation Creep):**
1. **Explicit Interface Type (`ModuleInvocation`):** Define `structure ModuleInvocation where name rawAttr rawBody : List Nat; kind : ModuleKind` (`module | module654`) as the exact formal output contract of rules 8–10 (`Modulepre`, `Module`, `Module654`), plus `Social`'s direct `\xFE module "wiki/social/SocialBookmarksModule" ... \xFE` handoff emission.
2. **Universal Parse-Side Theorems (Zero Evaluation Dependence):**
   - `modulepre_rewrite_exact`: claims 0 tokens; rewrites only exact lowercase `[[module654` at line starts.
   - `module_fixpoint_terminates`: strict decrease measure (`countModuleOpeners` + inline-opener count) proves `modulePasses` reaches its fixpoint well within `src.length + 1` steps.
   - `module_defense_inline_only` (REFCORR10-MODFIX): multi-opener match claims 0 tokens, inserts `\n` only after inline nested openers, rewrites only leading `[[module` → `[[module654`.
   - `module_code_vs_raw_body_law` (REFCORR7/9): single-opener `Module` re-emits `bodyRaw ++ authoredCloser` iff `bodyHasCodeToken bodyRaw toks`, consuming `Raw` placeholders silently.
   - `module_parse_env_independent`: **key boundary theorem** — proves `modulepreRule`, `moduleRule`, and `module654Rule` are 100% independent of `RenderEnv` / `ModuleManager` (installed-module list never affects parsing).
3. **Narrow Render-Side Handoff Contract:** Parameterize `renderModule` on `env.moduleAvailable : List Nat → Bool`. Prove `renderModule_handoff_iff`: available names emit the exact injective `\xFE module "Name" <urlencoded attr> \xFE` handoff marker (the formal parser-to-deepwell boundary); unknown names emit the exact `"No such module"` `<div class="error-block">` with raw `name` and no `rel` attribute. Everything downstream of decoding the handoff marker is formally fenced as deepwell's evaluation domain, outside `LeanFtml`.

---

## 6. If You Cut This Policy to One Move

**Single Most Consequential Recommendation:** **Build `LeanFtml.PcreCore` + `ByteCore` + mechanical PHP regex extraction (`RefTables.lean`) BEFORE letting the eight Cursor proof lanes write any more per-rule proofs against hand-compiled scanners.**

Why this one move dominates every other choice:
- It replaces **~25,000 lines of unverified, hand-compiled regex scanners across 68 rules** (the exact bug factory behind `F-TABLEADV-1` and `REFCORR10-MODFIX`) with **one ~700-line PCRE2 engine + mechanically extracted PHP regexes** certified orthogonally against PHP 8.5 `libpcre2`.
- It collapses **46 of the 68 parse rules** from intractable bespoke backtracking proofs into thin, REFCORR-resilient `process()` proofs that survive regex corrections automatically.
- It gives all eight Cursor proof lanes a **single composable target (`RuleProofBundle` / `RenderProofBundle`)** so their parallel work assembles into `pipelineFull_eq_ref` instead of scattering into stale self-referential proofs.
