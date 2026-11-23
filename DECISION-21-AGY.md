# Decision on WBS Package 2.1 — Boundary A Validation of `wikidot-php-reference`

**Decision-maker:** Proof-policy author (standing in for the programme owner under `BRIEF-AGY-DECISION-21.md`)  
**Date:** 2026-11-23  
**Subject:** Disposition of WBS package 2.1 at `snapshot-38` (`Rokurolize/wikidot-php-reference` commit `64c0009` / `cd7febe`; `lean-ftml-coordinator` HEAD `6774bba`)

---

## 1. Judgment

**I reject the coordinator's disposition to close WBS package 2.1 at `snapshot-38` as-is, and I permanently halt adversarial suspicion hunting (rejecting both unbounded full rounds and yield-rate-scoped hunting).** Instead, I direct a single, strictly bounded closeout pass: repair the closeout record, mechanically triage the 56 confirmed divergences from Rounds `5g` and `5h` that are actually unfixed in `snapshot-38`, measure `ref-php` on real Wikidot pages (zero-traffic local corpus plus a one-shot 200-page split diagnostic/holdout sample), land one final surgical correction snapshot (`snapshot-39`) covering only real-corpus, standard-syntax-regression, and sanitizer-bypass defects, and close WBS 2.1 under the completion test's second branch once the untouched 150-page real-corpus holdout clears a hard ≤ 2.0% divergence gate.

---

## 2. Evidence Carrying the Judgment

### 2.1 Firsthand record correction: `snapshot-38` did NOT correct Round `5g` or Round `5h`

The decision brief's premise that *"every confirmation in every round was a real rule-level divergence, and every one was corrected and published (reference snapshots through 38)"* is **false on disk**. Direct inspection of `wikidot-php-reference` (`git show --stat`) and `lean-ftml-coordinator/ref-php` (which is byte-identical to `wikidot-php-reference/text-wiki`) establishes:

- `snapshot-37` (`facd6ff`, `REFCORR13`) corrected Round `5f` (25 confirmations) plus the Antigravity uncovered-ground hunt (14 confirmations).
- `snapshot-38` (`cd7febe`, `REFCORR14`) modified **only one file**: `text-wiki/Text/Wiki/Parse/Default/Raw.php` (32 lines, landing the `WITNESS-RAW` `W-WIT`/`W-EQ` threshold fix).
- **None of Round `5g`'s 21 confirmations** (P1:3, P2:7, P3:4, R1:2, R2:3, S1:2) **and none of Round `5h`'s 35 confirmations** (P1:3, P2:9, P3:2, P4:1, R1:4, R2:8, S1:6, S2:2) **were corrected in `snapshot-38`**, and there is no `REFCORR15`.

Accepting the coordinator's disposition as written would close package 2.1 on a defective record while silently dropping 56 valid, confirmed, live-captured rule-level divergences without either fixing them or individually dispositioning them.

### 2.2 Reading the yield sequence `17, 16, 29, 28, 20, 25 (+14), 21, 35`

Read against the underlying probe ledgers, commit history, and per-lane reports, the sequence is **not** evidence of a deteriorating reference, nor is it a stationary measurement of real-world defect density. It decomposes into three distinct effects:

1. **Rounds `5` through `5g` (`17, 16, 29, 28, 20, 25, 21`) are flat because adversarial suspicion hunting is a non-stationary oracle.** Across those seven rounds, the nine lanes probed roughly `134–148` cases per round (`5`: 146, `5b`: 148, `5c`: 147, `5d`: 146, `5e`: 138, `5f`: 134, `5g`: 146) under an explicit mandate to *"read the reference PHP for constructs no human would write on purpose"* (`REPORT-ROUND5.md`) and inspect the latest `.before-refcorrN` diffs for adjacent unprobed bytes. An adaptive adversary reading source diffs of a hand-reconstructed parser against closed-source Wikidot PHP + libtidy can sustain an 11–20% confirmation rate indefinitely by walking unenumerated C0/C1/Cf control bytes, synthetic tag-case permutations, and multi-rule edge shapes. That rate measures **adversarial enumerability of byte-level degrees of freedom**, not the residual error rate on real Wikidot pages.
2. **Patch-boundary churn fed the loop while taxing Boundary B.** Between `snapshot-31` and `snapshot-38` (`REFCORR8`–`REFCORR14`), the same handful of files were repeatedly rewritten: `Footnote.php` (5×), `Freelink.php` (5×), `List.php` (5×), `Div.php` (4×), and `Bibitem.php`, `Image.php`, `Raw.php`, `Footnoteitem.php` (3× each). Successive patches directly generated the next round's confirmations:
   - `REFCORR10` added a list post-failed-close adjacency guard → `5d` broke it with a footnote gap → `REFCORR11` generalized it → `5e` showed it flattened nested lists → `REFCORR12`/`13` rewrote nested-boundary rules → `5g`/`5h` broke lowercase-outer, scored, attributed, and footnoteblock-inside-list variants.
   - `REFCORR13` (adopting AGY hunt `D08`/`D10`/`D11`) replaced Math's regex with an incomplete allowlist → `5g`/`5h` immediately confirmed 6 omitted standard AMS environments (`alignat`, `alignat*`, `aligned`, `alignedat`, `gathered`, `cases`); changed `Tabview::_tabTitle` to a PHP falsy check → `5g`/`5h` broke space-padded `" 0 "`; added individual codepoints to Freelink/Div/Span control-byte filters → `5g`/`5h` immediately hit the next adjacent control bytes (`U+0001`, `0x18`, `0x1C`, `0x1F`, `0x7F`, `0x80`, `0x8D`, `0x9F`, `U+FFF0`, `U+FFF1`).
   - `REFCORR14` lowered `Raw.php`'s same-line later-run threshold from 4 to 2 → `5h` (`C-R5H-P3-1`, `C-R5H-P3-2`, `C-R5H-P4-1`) immediately exposed that live's reassociation crosses newlines.
   - Every correction cycle simultaneously imposed heavy **Boundary B rebase tax** on scarce fleet capacity (`ProofNotes` had to retire five ESC laws, `ProofFreelink` rebased onto `0x2065`/`0x1B`, `ProofRaw` retired two theorems on `R14`, `ProofDivAttr` retired `refcorr12_type_witness`, and missed `REFCORR13` mirror edits broke clean main builds until repair commit `0666029`).
3. **The Round `5h` spike to `35` is an artifact of unfixed ground plus higher probe volume, not a sudden collapse.** Because `REFCORR14` changed only `Raw.php`, Round `5h` ran on the **same unfixed `snapshot-37` defects as Round `5g`** while probing **181 cases** (+24% over `5g`'s 146). Roughly two-thirds of `5h`'s 35 confirmations are direct duplicates or same-mechanism siblings of `5g`'s unfixed 21 — Freelink C0/C1/U+FFF0 lead bytes (5), omitted AMS Math types (4), Embed/Gallery scheme filters and `#/` route encoding (6), Tabview/Button padded `" 0 "` (3), continued-lead Div (`C-R5H-R1-1`, itself duplicating `C-R5G-R1-1` and still-open `C-R5E-R1-2`), raw ESC in URLs/image `src` (2), and List nested-case siblings (2) — plus 3 confirmations directly triggered by `R14`'s `Raw.php` change.

### 2.3 What the real 25,534-page SCP-EN corpus shows: vanishing adversarial tail, glaring real-page blind spot

Scanning all **25,534 real SCP-EN pages** held locally in `corpus-distill-20261109/sources.jsonl` (398 MB of real Wikidot wikitext) and running `snapshot-38` (`batch.php render` + `tidy 5.8.0 --force-output yes`) against cached live HTML in `scp-wiki-translation/corpus/en/pages/*/api-response.json` yields two decisive empirical results:

1. **The unfixed `5g` + `5h` adversarial tail is ~99.99% absent from real pages.**
   - **0 / 25,534 (0.00%)** real SCP-EN pages contain *any* C0/DEL control byte (`0x01–0x08`, `0x0B–0x0C`, `0x0E–0x1F`, `0x7F`), eliminating **12** of the 56 `5g`+`5h` confirmations immediately; **0 / 25,534** combine C1/U+FFF0–FFF8 bytes with `_default:` in a freelink (**5** more confirmations, **17** control/unassigned-codepoint confirmations in total).
   - **0 / 25,534** exhibit mixed-case `[[UL]]`/`[[LI]]`, cross-line short-closer `@@@@`, uppercase `[[[HTTP://...]]]`, non-ASCII `#/route/` freelinks, `[[embed]]` `srcdoc`/`_on*=`, `[[gallery]]` leading-whitespace `javascript:`/`vbscript:`, space-padded `" 0 "` button/tabview labels, `[[span id=" ... "]]`, or `\\\n[[div attr="... "]]`.
   - **Only 3 / 25,534 pages (0.012%)** even match a broad syntactic precondition of *any* of the 56 `5g`+`5h` confirmations: `everetts-proposal` and `scp-8335` (`[[footnoteblock]]` inside `[[ul]]`) and `rise-of-the-wave` (`[[image ... style=" ..."]]`).
   - Two non-frequency exceptions stand out: (i) the 6 omitted AMS LaTeX math environments (`alignat`, `alignat*`, `aligned`, `alignedat`, `gathered`, `cases`) are standard author-written math syntax broken by `REFCORR13`'s incomplete allowlist (0 hits in SCP-EN, where only 1 page uses `[[math type=...]]`, `gather`, but genuinely author-reachable on math-heavy Wikidot wikis); and (ii) the `[[embed]]`/`[[gallery]]` scheme and `_on*=` bypasses are security-relevant regardless of benign-corpus frequency.
2. **Eight inward-out suspicion rounds missed four real-world defects that a zero-traffic check on 71 full-length real SCP-EN pages caught immediately.**
   - Filtering `sources.jsonl` to `_default`-category standalone pure-wikitext pages (no `include`/`module`/`html`/`iframe`/`embed`/`iftags`/`image`/`gallery`/`file`/`math`/`user`/`*user`, no `:` or leading `_`) yields 79 pages, of which **71** carry non-empty cached live HTML in `api-response.json`.
   - After normalizing `batch.php`'s `Tabview` static counter leak (`wiki-tab-\d+-\d+`, a harness bug on 4 pages analogous to `Math::$equationsArray`), API-stripped `onclick`, and `RenderEnv` internal-link title lookups, `snapshot-38 + tidy 5.8.0` matched **66 / 71 (93.0%)** full-length real articles (up to 46 KB) byte-for-byte — and on the `200..8,000`-char subset without `[[*user]]` (`43` pages, `16` others hitting a missing `Criteria` stub in `ozone-stubs.php`), **42 / 43 (97.7%)**.
   - **Yet the 5 / 71 (7.0%) real-page failures immediately surfaced four genuine, author-visible defects that all 1,273+ adversarial probes missed:**
     1. **Silent 0-byte document wipe in `Parse/Default/Div.php` on ~16 KB real pages (`scp-9241-human-anchor` [16,166 chars] and `scp-l9956` [15,888 chars] — 2 / 71 = 2.8%):** `Div.php`'s recursive `((?:(?R)|.)*?)` regex fails PCRE limits on real full-length articles, returns `null`, triggers one more recursion of `parse()`, and silently erases the entire page to `""` (`error = null`, `tokens_len = 0`). Tiny one-line suspicion probes could never expose this.
     2. **Unmodeled `@<...>@` construct (`tf-alpha-440` — 117 / 25,534 real SCP-EN pages = 0.46%):** Live Wikidot's cached HTML renders `@<**Title:** (Work Title)>@` as `<span style="white-space: pre-wrap;">**Title:**&#32;(Work&#32;Title)</span>`, whereas `snapshot-38` emits literal `@&lt;<strong>Title:</strong> (Work Title)&gt;@` and parses inner markup. It occurs on nearly **40× more real pages** than all 56 `5g`+`5h` findings combined (including `advanced-formatting-and-you` and `canon-hub`), and had been early-misclassified in `GAP-LEDGER.md` `F-R2-7` after testing `@<` only inside `@@...@@`.
     3. **Freelink 60-character slug truncation (`new-years-contest` — 58 / 25,534 real SCP-EN pages = 0.23% carry >60-char internal freelink targets):** Live Wikidot truncates `[[[Interlude - Excerpt from an Auction Catalog, Marshall Carter and Dark, 2012]]]` to the 60-character slug `interlude-excerpt-from-an-auction-catalog-marshall-carter-an`; `snapshot-38` emits the full 74-character slug.
     4. **Raw `&#32;` space encoding inside `--@@Written by@@--` (`news-05-2017`, 33,135 chars):** Live HTML serves `<span style="white-space: pre-wrap;">Written&#32;by</span>` against a literal space after `snapshot-38 + tidy` (requiring adjudication of Raw output vs `tidy 5.8.0` entity decoding).

### 2.4 Why options (a), (b), and unamended acceptance all fail

- **Option (a) (resume full rounds to zero):** Violates the owner's standing calibration directly. Unbounded cost, no convergence mechanism, continuous Boundary B proof breakage, near-zero marginal real-world value.
- **Option (b) (scoped hunting to a yield-rate cutoff):** Fundamentally flawed metric. Because adaptive LLM hunters choose both numerator targets and denominator difficulty from recent diffs, yield rate is non-stationary and arbitrary rather than a measure of real residual divergence rate.
- **Accepting the coordinator's disposition as-is:** Closes package 2.1 on a factually incorrect record (56 unfixed confirmations), leaves real-page silent document wipes (`Div.php`), unmodeled `@<...>@` (117 real pages), 60-char Freelink truncation (58 real pages), the `REFCORR13` AMS Math regression, and Embed/Gallery sanitizer bypasses unfixed, and calls user-visible significance "unknown" when a real-corpus measurement is cheap, local, and decisive.

---

## 3. Changed Strategy (Operational Form and Mechanically Checkable Stopping Rule)

The coordinator shall execute the following four-step, single-lane closeout plan exactly as written. **No further adversarial suspicion rounds are authorized.** Total live probe budget is strictly capped at **200 pages once** (~1 suspicion round total, never repeated), releasing all 9 suspicion lanes immediately to Boundary B (`F1`, `R46` footnoteitem mirror fix, `G4`/`G5`).

### Step 0 — Permanent halt to suspicion hunting (immediate)
- Mark Round `5h` as the terminal suspicion round. Do not dispatch Round `5i` or any further diff-reading suspicion pass. Reassign all suspicion-lane capacity to Boundary B proofs.

### Step 1 — Record repair and mechanical triage of the 56 `5g`/`5h` confirmations (0 live probes)
- Amend `REPORT-ROUND5.md`, `COMPLETION-WBS.md`, and `STATE.md` to record accurately that `snapshot-38` (`REFCORR14`) landed only `Raw.php` (`W-WIT`/`W-EQ`), leaving Round `5g`'s 21 and Round `5h`'s 35 confirmations unpatched at `snapshot-38`.
- Partition all 56 confirmed divergences from `REPORT-ROUND5G-*` and `REPORT-ROUND5H-*` using this **strictly mechanical three-clause triage rule**:
  - **Class 1 (`FIX-IN-REFCORR15`):** Include a `5g`/`5h` confirmation if and only if at least one of the following holds:
    1. Its construct matches `>= 1` page in `/home/roku/.local/state/wikijump/muse-bhl/corpus-distill-20261109/sources.jsonl` **and** `snapshot-38` diverges from live on the extracted real-page block (already narrowed to at most 3 candidate pages: `rise-of-the-wave` for `C-R5G-P3-1` `[[image ... style=" ..."]]`, and `everetts-proposal`/`scp-8335` for `C-R5H-P1-3`/`C-R5H-S2-1`/`C-R5H-S2-2` `[[footnoteblock]]` inside `[[ul]]`); OR
    2. It is a `REFCORR13` standard AMS Math allowlist omission (`C-R5G-P2-6..7`, `C-R5H-P2-6..9`: `alignat`, `alignat*`, `aligned`, `alignedat`, `gathered`, `cases`); OR
    3. It is an HTML/URL sanitizer bypass in `[[embed]]` or `[[gallery]]` (`C-R5G-P3-4`, `C-R5G-R2-2..3`, `C-R5H-R2-4..8`: single-quoted/data `srcdoc`, `_on*=`, leading-whitespace `javascript:`/`vbscript:`).
  - **Class 2 (`DISPOSITIONED-UNFIXED`):** Every remaining `5g`/`5h` confirmation (all 17 C0/DEL/C1/U+FFF0 control/unassigned-byte cases, mixed-case `[[UL_]]`/`[[LI]]` nesting, cross-line short-closer `@@@@`, uppercase `[[[HTTP://...]]]`, non-ASCII `#/route/`, padded `" 0 "` button/tabview labels, `[[span id=" ... "]]`, and `\\\n[[div ...]]` continued-lead). Record every Class 2 item in `RESIDUAL-2.1-LEDGER.md` with its candidate ID, capture `html_sha256`, and verified `0 / 25,534` hit count in `sources.jsonl`. **Do NOT patch Class 2 items in `ref-php` or `ftml-lean`** (preserving Boundary B proof stability on `ProofFreelink`, `ProofRaw`, `ProofNotes`, `ProofDivAttr`).

### Step 2 — Fixed-budget real-corpus diagnostic measurement (`0` + `50` live probes)
- **Sampling frame (already verified on disk):** Filter `corpus-distill-20261109/sources.jsonl` to non-empty pages containing none of the environment/external-dependent directives matching regex `\[\[(?:include|module|html|iframe|embed|iftags|[<>=f]*image|gallery|file|math|\*?user)\b` (case-insensitive). This yields **79 `_default`-category pure-wikitext pages** (of which **71** have non-empty cached `html` in `scp-wiki-translation/corpus/en/pages/<slug>/api-response.json`) and **665 all-category pure-wikitext pages**.
- **Deterministic split:** Sort the 665 all-category pure-wikitext `case_id`s lexicographically, shuffle once with Python `random.Random(20261123).shuffle`, and partition cleanly before probing:
  - `S_local`: all **71** HTML-backed `_default`-category pure-wikitext pages, scored locally with **0 live requests** against `api-response.json['html']`.
  - `S_diag`: indices `0..49` (**50 pages**) from the shuffled 665-page list, probed once on `sandbox-for-codex` under prefix `muse-probe-21-diag-` with the standard double-fetch recipe (neutralizing category `_template` headers present in SCP-EN's `api-response.json`).
  - `S_holdout`: indices `50..199` (**150 pages**) from the exact same shuffled 665-page list — **MUST NOT be inspected, rendered, or probed until `snapshot-39` is built and tagged.**
- **Deterministic comparison pipeline:** Reset Tabview's static per-document counter in `harness/batch.php` (or render one process per case / normalize `wiki-tab-\d+-\d+` so batch runs never leak tab indices). Render each source via `php harness/batch.php render` piped through `tidy -q --output-xhtml yes --indent no --wrap 0 -utf8 --show-body-only yes --tidy-mark no --force-output yes`, then apply the fixed campaign frame normalizer (`probe.norm()`, `>\s+<` → `><`, `<br\s*/?>` → `<br/>`, strip `<script>...</script>`, normalize random IDs `toc\d+`/`u-*`/`bibcite-*`/`wiki-tabview-*`/`wiki-tab-\d+-\d+`/`collapsible-block-*`, normalize `class="newpage"`, `rel="nofollow"`, and on `S_local` only strip `onclick="..."` + trailing tag space ` +>` and normalize internal `/slug` anchor text for `RenderEnv` page-title lookup).
- **Non-gating secondary benchmark (0 live probes):** Also score `snapshot-38 + tidy` over the **632** standalone non-media/math captures in `opus-line-assembly/evidence/inventory.json` and record the resulting fraction in the report as a labeled adversarial line-assembly stress metric (explicitly non-gating because `inventory.json` is an adversarial torture suite, not a real-page sample).

### Step 3 — Single surgical closeout round (`REFCORR15-FINAL` → `snapshot-39`)
- Scope `REFCORR15-FINAL` strictly to the union of:
  1. Step 1 **Class 1** items, AND
  2. Every confirmed rule-level divergence (and harness static-counter leak) surfaced by `S_local` ∪ `S_diag` — already known from `S_local` to include: (a) fixing `Parse/Default/Div.php`'s PCRE backtrack/null silent 0-byte wipe on long pages (`scp-9241-human-anchor`, `scp-l9956`), (b) adding live-confirmed `@<...>@` (`tf-alpha-440`, 117 real SCP-EN pages; also updating `GAP-LEDGER.md` `F-R2-7` and noting for `WORKLIST-FTML.md`), (c) live-confirming and fixing 60-character Freelink slug truncation (`new-years-contest`, 58 real SCP-EN pages), (d) adjudicating Raw `&#32;` vs `tidy 5.8.0` on `news-05-2017`, and (e) per-case Tabview counter reset in `harness/batch.php`.
- Implement the fixes cleanly in `ref-php` and the Lean mirror, update `RefTables`, re-run every standard gate (`r43`–`r48`, `pooled 4,204/4,205` with `a34` sole, `smoke 9/9`, `RefTables --verify`, clean-archive Lean build), re-score `S_local` and cached `S_diag` locally (**0 new live probes**), and publish **`snapshot-39`** (via branch + PR + annotated tag) as the frozen Boundary A baseline (`proof-base-v2`).

### Step 4 — Unbiased holdout measurement and mechanically checkable stopping rule (`150` live probes, once)
- Only **after** `snapshot-39` is tagged and frozen, probe the untouched **`S_holdout`** (`150` pages, indices `50..199`) once on `sandbox-for-codex` under prefix `muse-probe-21-holdout-`, and score `snapshot-39 + tidy` against those captures using the exact Step 2 normalizer.
- Let $N_{\text{valid}}$ be the number of valid, stable, saved-source-matching captures in `S_holdout`, and let $k$ be the number of holdout pages exhibiting **any** post-normalizer rule-level divergence (counting a divergence once per page; excluding only serving ad chrome and pre-declared Stage-2/frame normalizations).

**Mechanically checkable stopping rule (no coordinator judgment calls):**

WBS package 2.1 transitions to **`CLOSED WITH MEASURED EMPIRICAL BOUND (BRANCH 2)`** if and only if **all five** conditions hold:

1. `0` adversarial suspicion rounds ran after `5h`.
2. Every one of the 56 `5g`+`5h` confirmations is accounted for either as fixed in `REFCORR15-FINAL` (Class 1) or recorded with its capture hash and `0 / 25,534` corpus count in `RESIDUAL-2.1-LEDGER.md` (Class 2).
3. `snapshot-39` is published with all existing regression gates (`r43`–`r48`, `pooled 4,204/4,205`, `smoke 9/9`, `RefTables --verify`, clean-archive Lean build) green.
4. `S_holdout` achieves $N_{\text{valid}} \ge 135$ (≥ 90% clean captures; if save-normalized/untestable pages push $N_{\text{valid}} < 135$, top up deterministically from indices `200, 201, ...` of the same shuffled list until $N_{\text{valid}} = 150$).
5. On `S_holdout`, **$k / N_{\text{valid}} \le 2.0\%$** (at most **3 divergent pages out of 150**, yielding a 95% Clopper-Pearson upper confidence bound of $\le 5.73\%$, or $\le 2.43\%$ if $k = 0$) **AND** **`0` holdout pages trigger a PHP runtime/fatal error, silent empty output (`output === ""` on non-empty live HTML), or an unmodeled construct matching $\ge 10$ pages in `sources.jsonl`**.

**If Condition 5 FAILS:** **STOP immediately and escalate to the owner** with the exact failing holdout pages, mechanisms, and measured Clopper-Pearson interval. Do **not** automatically open `REFCORR16` or resume hunting.

*(Note on residual risk after closure at `snapshot-39`)*: Once closed under this rule, the owner receives an honest, auditable Boundary A guarantee: (i) a true out-of-sample 95% upper confidence bound on real pure-wikitext Wikidot page divergence (targeting `≤ 2%` point / `≤ 5.7%` upper CI), (ii) explicit exclusion of external-environment surfaces (`[[include]]`, `[[module]]`, `[[html]]`, `[[iframe]]`, `[[embed]]`, `[[iftags]]`, media/files, `[[math]]`, `[[*user]]`, which stay governed by `RenderEnv` and existing family batteries), and (iii) a complete `RESIDUAL-2.1-LEDGER.md` enumerating every known unfixed synthetic/zero-corpus edge.

---

## 4. What Evidence Would Change My Judgment

Concrete, falsifiable developments would reverse or amend this decision in either direction:

1. **Toward accepting `snapshot-38` immediately (skipping `REFCORR15-FINAL` and the 200-page measurement):** If the owner confirms that fleet quota/schedule constraints cannot spare even **one** single-lane closeout pass and one small mirror update without jeopardizing Boundary B (`F1`/`G4`/`G5`) completion, **and** confirms that `wikidot-php-reference` is strictly a frozen formal-proof target rather than a real-wiki fidelity oracle. Even in that case, I would still require the zero-cost Step 1 record correction and `RESIDUAL-2.1-LEDGER.md` (recording the 56 `5g`/`5h` items plus the four `S_local` findings: `Div.php` 16 KB PCRE wipe, `@<...>@`, 60-char Freelink slug truncation, and Raw `&#32;`) so the record never claims fixes that did not land.
2. **Toward reopening Boundary A after `snapshot-39` (targeted rule-level work, still never 9-lane suspicion hunting):**
   - `S_holdout` failing Condition 5 (`> 2.0%` real-page divergence, or any PHP fatal / silent empty render / unmodeled construct hitting `>= 10` corpus pages) — proving additional real-world gaps remain beyond the `S_local` + `S_diag` fixes;
   - A real-page differential on **non-SCP-EN corpora** (e.g., CJK/Cyrillic-heavy branches such as SCP-JP/CN/KO/RU, math-heavy Wikidot wikis, or full Wikijump display comparisons with `[[include]]`/`[[module]]` expanded) revealing `> 2.0%` structural divergence attributable to `ref-php` rather than `RenderEnv` stubs or templates;
   - A Boundary B proof attempt or `ftml` parity PR surfacing a live-vs-reference disagreement on an author-reachable construct (`>= 1` real corpus page) or a security sanitizer surface — handled strictly as an **event-driven single-rule witness adjudication** (the `WITNESS-RAW`/`WITNESS-DNF` pattern), never as a resumed suspicion round;
   - Live Wikidot itself deploying a parser, sanitizer, or libtidy change detected by periodic replay of a small canary set.
