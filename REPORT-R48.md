# REPORT-R48 — R4.8 render mirror: serving-layer renderers and render-tier close-out

Stage R4.8 of the render tier is complete, in the continuation worktree. The seven remaining render rules (Freelink, Module, Module654, Math, Image, Gallery, User) are mirrored in `lean-ftml/LeanFtml/ServingRules.lean`, their entry points, disposition scan and worked-example theorems are in `lean-ftml/LeanFtml/ServingRender.lean`, `pipelineR48` is the full 68-rule parse pipeline, and the shared dispatcher now declares **61** render rules (54 from R4.7 plus these seven). The conformance driver is `lean-ftml/ConformanceR48.lean` (exe `lean-ftml-conformance-r48`); every gate, artifact and reproduction script is under `conformance-r48/`. All gates in BRIEF-R48.md §Gates are green with every exclusion named; the gate suite `sh conformance-r48/run_gates.sh` exits 0.

The interrupted lane's mirror files, corpora and PHP artifacts were kept: nothing was regenerated and no reference file was corrected. The build and gates exposed four local defects, all fixed at the proof/tooling layer with no change to any mirror function's semantics (details in "Build fixes" below).

## 1. Mirror structure per rule, and the formal dispositions

The mirror reads token options plus fixed harness facts baked into `ServingRules.lean`: the eight-page `REF_EXISTING_PAGES` Freelink existence set, the nine available module names from the ModuleManager stub, the unset `vars['pageName']` (empty-string concatenations), and the no-op LatexRenderer. `renderWithR48` (`ServingRender.lean`) renders through the shared dispatcher and then folds the names of any serving-layer boundary reached by the document's referenced tokens into `RenderOutcome.unmirrored`; such cases are EXCLUDED by construction and can never be counted as passes. `renderStateR48` is the 0-indexed `st.tokens` entry point; `renderServingE2E` is `convCRLF → pipelineR48 → renderStateR48`.

* **Freelink** (`renderFreelink`): truthy `url` renders the external anchor with bare `htmlspecialchars` on the trimmed text and URL; the fossil `site` branch is unreachable after the R2-LINK parse correction but mirrored in its fossil shape; the local branch checks `freelinkExistingPages`, renders `<a href="/page<suffix>">` for an existing page and the `newpage` class for a missing one, keeps the anchor-plus-extra suffix in both arms (correction C1), and falls back to the page name as text for `textFromTitle` on a missing page.
  * **Disposition `Freelink:textFromTitle`** — reached by a Freelink token with falsy `url`/`site`, truthy `textFromTitle`, and `page` in the eight-page existence set. The reference would call `DB_PagePeer::instance()->selectByPrimaryKey()`; the harness stub class has no such method, so PHP fatals `Error: Call to undefined method DB_PagePeer::selectByPrimaryKey()`. Excludes exactly one battery case, `freelink-exist2-empty-label`. The missing-page arm of `textFromTitle` is deterministic and mirrored, not dispositioned.
* **Module / Module654** (`renderModule`, shared; the reference Module654 renderer is an empty subclass): an available name (case-insensitive byte-wise `strtolower` over the stub's nine names) renders the `þmodule "Name" <urlencoded attr> þ` handoff marker with the name's case preserved; any other name renders the R2-corrected `No such module` error block with the name raw. A truthy `module_body` appends ` module_body="<urlencoded body>"` to the attr before the whole attr is urlencoded. Both the marker and `renderError` paths are deterministic under the harness stub, so **nothing is dispositioned** here.
* **Math** (`renderMath`): the harness LatexRenderer methods are no-ops, so the equation PNG never exists and `token()` always takes its fossil failure block (including the "prabably" spelling). The real-LaTeX/PNG-exists path is a **named unreachable boundary**: the reference would consult `Ozone::getRunData()->getTemp('site')`, the filesystem and `LatexRenderer`; no battery case reaches it. Separately, five family cases hit the reference's *parse* guard and raise `ProcessException: Invalid LaTeX expression(s) found.`; these are counted `FATAL-AGREE` (neither pass nor fail), exactly as in the R3 protocol.
* **Image** (`renderImage`): a `:first` source renders the empty string (page lookup keys on the unset page name and misses) and is mirrored, not dispositioned; URL sources pass through untouched; local sources take the resized path for validated sizes (`small`/`medium`/`thumbnail`/`square`), defaulting to `medium` for non-image extensions, with the original-file link filled in when no link is set, `percentEncodeNonAscii` on `src`/`href`, bare `htmlspecialchars` escaping, the case-sensitive attr key set `class/alt/style/width/height/title`, `align` wrappers and `target`.
  * **Disposition `Image:FlickrHandler`** — reached by an Image token whose `src` contains `flickr:` and does not start with `:first`. The reference would instantiate `FlickrHandler`, which is absent from the harness tree, and fatals `Error: Class "FlickrHandler" not found`. No battery case reaches this path (0 exclusions); the found-page `DB_FilePeer` first-attachment branch behind `:first` is likewise unreachable and is recorded here only.
* **Gallery** (`renderGallery` with `galleryGetAttrs`, `gallerySplitRow`, `galleryRowSrc`, `galleryRowStep`): falsy `sources` renders the constant `Error selecting page.` block (page lookup on the unset page name misses); truthy `sources` renders one thumbnail item per `: ` row, with validated size, `stripslashes` attribute values, and the reference's intra-call `$target`/`$osrc` leak across rows.
  * **Disposition `Gallery:FlickrHandler`** — reached by a Gallery token with a processed (`: `) source row whose source contains `flickr:`. The reference would instantiate `FlickrHandler` and fatal `Error: Class "FlickrHandler" not found`. No battery case reaches this path (0 exclusions); the attachment listing behind a found page is unreachable and recorded here only. `galleryRowSrc` is shared by the renderer and the disposition scan so the two can never disagree about which rows are processed.
* **User** (`renderUser`): mirrors the REFVAL2-corrected not-found branch (name escaped with ENT_COMPAT inside the `error-inline` span).
  * **Disposition `User:DB_OzoneUserPeer`** — reached by *every* User token, before either branch. The reference would consult `WDStringUtils::toUnixName`, `Criteria`, `DB_OzoneUserPeer::instance()` and `WDRenderUtils::renderUser()`; none of those classes exists in the harness tree, so PHP fatals `Error: Class "Criteria" not found`. This excludes exactly 71 battery cases: `user-p01`…`user-p19` (except p11, p20), `user-us-01`…`user-us-06`, `user-us-09`, `user-us-11`…`user-us-14`, `user-us-17`, `user-us-19`, `user-us-20`, `user-us-23`…`user-us-42`, and `user-us-x01`…`user-us-x20`. The other 11 cases of the user battery (`user-p11`, `user-p20`, `user-us-07`, `user-us-08`, `user-us-10`, `user-us-15`, `user-us-16`, `user-us-18`, `user-us-21`, `user-us-22`, `user-us-29`) contain no rendered User token and pass normally. The mirrored not-found branch is the rule's recorded content under a lookup miss and is never used to claim a pass in this tier.

### Exclusion and boundary table (family gate, both modes)

| Cause | Token shape | Reference consultation | Cases |
|---|---|---|---|
| `User:DB_OzoneUserPeer` | every User token | `Criteria`/`DB_OzoneUserPeer`/`WDRenderUtils` (absent) | 71 (listed above) |
| `Freelink:textFromTitle` | local branch, `textFromTitle` set, page exists | `DB_PagePeer::selectByPrimaryKey()` (absent) | 1: `freelink-exist2-empty-label` |
| `Image:FlickrHandler` | `flickr:` in `src`, not `:first` | `FlickrHandler` (absent) | 0 (formal disposition) |
| `Gallery:FlickrHandler` | processed `: ` row with `flickr:` | `FlickrHandler` (absent) | 0 (formal disposition) |
| Math real LaTeX | PNG-exists path | site temp dir / filesystem / `LatexRenderer` (no-op) | 0 (unreachable boundary) |
| `Text_Highlighter:*` (R4.7 standing) | Code token with a language in the 14-name list | vendored highlighter library | 0 in this corpus |
| `BatchTokenIdCounter` (standing harness class, e2e only) | rendered bytes contain PHP batch token-id placeholders (`\xFF<n>\xFF` or URL-encoded `%25FF<n>%25FF`) | PHP process-global token counter vs Lean case-local counter | 3 e2e cases (below) |
| `FATAL-AGREE` (protocol) | five Math parse-guard cases | `ProcessException: Invalid LaTeX expression(s) found.` | `math-include-brace`, `math-include-in-label-block`, `math-include-in-word`, `math-include-uppercase`, `math-input-brace` |

The three e2e counter cases are `gallery-ga-24` (expected `\xFF6002\xFFx\xFF6003\xFF`, got `\xFF0\xFFx\xFF1\xFF`), `module-mod-nested-two-openers` (`%25FF2086%25FF` vs `%25FF0%25FF`) and `modulex-x-known-mod-body-654` (`%25FF3587%25FF` vs `%25FF0%25FF`). In state mode all three pass byte-exactly, because the state harness serializes the token ids. They are the same standing harness class as R4.7's four tabview counter cases and the x44 canonicalization exclusions. `compare_render.py` classifies them under the explicit name `BatchTokenIdCounter` only when the two byte strings are equal after replacing those placeholders with a canonical marker and at least one placeholder was present; **no normalization is used for a PASS decision**. Their divergence is recorded as candidates C-R48-1…3 below rather than matched away.

## 2. Token-free disposal verification and final tier accounting

`REPORT-R4.md` §6's disposal row listed eight rules as never emitting parse tokens: `Include`, `Prefilter`, `Modulepre`, `Iftags`, `Concatlines`, `Divprefilter`, `Social`, `Tighten`. Verification was both static and empirical (`conformance-r48/verify_token_free.py`):

* **Static**: for each of the seven remaining names, the corresponding `ref-php/text-wiki/Text/Wiki/Parse/Default/<Name>.php` has no *active* `addToken` call. `Social.php:60`'s single `addToken` sits inside a `/* … */` block; its active `process()` rewrites directly to the `þmodule …þ` marker. `Include.php` expands wikitext in place; `Prefilter`, `Modulepre`, `Iftags`, `Concatlines`, `Divprefilter` return `''` or rewrite text. Tighten's parse rule emits no token either.
* **Corpus**: zero token entries named after any of the eight appear in any of the five state corpora checked (R4.8 family 643, notes365 365, prose740 740, R4.1 notes prefix 365, R4.7 family 156). No such token could reach the dispatcher.

**Tighten reconciliation**: Tighten's *parse* rule is token-free, but its *render* rule was mirrored in R4.3 because it rewrites the residual stream; `renderRuleName .tighten` is present in `mirroredRenderRules`. The disposal row's eight therefore resolve to **seven verified token-free rules plus one mirrored rule**, with no gap.

**Render tier's final accounting**: the reference's 68 active rules partition into **61 byte-exact mirrored render rules** (the six R4.1 NOTES rules plus the rules added in R4.2–R4.8, including Tighten and the UTF-8-unreachable Delimiter) and **7 verified token-free rules**. Every mirrored rule is either byte-exact over its full reachable input space, scoped to a named external boundary (Code's `Text_Highlighter` in R4.7; Math's real-LaTeX path and the Image/Gallery serving-layer paths recorded above), or dispositioned to a named serving-layer path (the four R4.8 dispositions). The one standing named remainder from the pilot — the reference's U+FFFD-to-delimiter collision in `Xhtml::pre()` — is unchanged, documented in `REPORT-R4-VERIFY.md`, and exercised by no battery case; it is not a rule and is not silently resolved here.

## 3. Corpus assembly and provenance

`conformance-r48/assemble_corpus.py` assembles 12 R2/REFVAL batteries into `cases.jsonl`, namespacing each id by its battery. Per-battery counts (also in `provenance.json`): freelink 60, linkx 36, module 52, module654 59, modulex 29, image 68, math 76, gallery 88, gallerysupp 4, user 82, file 83, filesupp 6 — **643 cases total**. `verify_provenance.py` re-derived the counts from the batteries (not from the assembled output) and confirmed the record's `_raw_id_collisions_across_batteries = 20`: twenty bare ids are shared across batteries with different sources, and all 643 namespaced ids are unique, so dedupe-by-bare-id would have dropped real cases. The pre-existing PHP states/renders over the full 68-rule pipeline were not regenerated; the gates did not prove the assembly wrong, so it was left intact as BRIEF-R48-CONT requires.

## 4. Gates

All numbers are `TOTAL / PASS / EXCLUDED / FAIL / FATAL-AGREE`, produced by `conformance-r48/compare_render.py` over the driver JSONL output and the PHP expected renders.

| Gate | Driver / artifacts | Result |
|---|---|---|
| Family, state | r48 / `states-full.jsonl`, `renders-full.jsonl` | **643 / 566 / 72 / 0 / 5** |
| Family, e2e | r48 / `cases.jsonl` | **643 / 563 / 75 / 0 / 5** |
| Full pipeline notes, state | r48 / `notes365-*` | **365 / 365 / 0 / 0 / 0** |
| Full pipeline notes, e2e | r48 / `notes365-*` | **365 / 365 / 0 / 0 / 0** |
| Full pipeline prose, state | r48 / `prose740-*` | **740 / 740 / 0 / 0 / 0** |
| Prose e2e (reported, not a brief gate) | r48 / `prose740-*` | 740 / 735 / 1 / 4 / 0 |
| Regression R4.1 notes, state | r41 / `conformance-r42/notes-prefix-*` | **365 / 365 / 0 / 0 / 0** |
| Regression R4.1 notes, e2e | r41 / `conformance-r42/notes365-cases.jsonl` | **365 / 365 / 0 / 0 / 0** |
| Regression R4.7 family, state | r47 / `conformance-r47/family-*` | **156 / 147 / 9 / 0 / 0** |

Family exclusions are named by `check_exclusions.py` from each detail file: state and e2e both carry 71 `User:DB_OzoneUserPeer` and 1 `Freelink:textFromTitle`; e2e adds 3 `BatchTokenIdCounter`. No mirrored rule name is ever used as an exclusion cause. The 5 `FATAL-AGREE` rows are the Math parse-guard cases listed above. The four remaining prose-e2e failures are R4.7's unchanged tabview counter class (`x22-coll-in-tab`, `x23-div-in-tab`, `x25-tab-in-coll-in-div`, `x29-footnote-in-tab`); all four pass in state mode, and prose e2e is outside the brief's gate list.

Hygiene and close-out gates: library builds green with `LAKE_JOBS=2`; no `sorry` token in any of 80 Lean source files (comments and strings excluded by the lexer in `verify_hygiene.py`); no `sorryAx` in the 507-line axiom build output; all 21 R4.8 theorems audit within `[propext, Classical.choice, Quot.sound]`; `--list-rules` = 61 and `--embed-patterns-ok` = 76; provenance collision count re-derived at 20; token-free disposal verified; candidate audit run. `run_gates.sh` exits 0.

## 5. Full-pipeline movement

The parenthesised numbers in BRIEF-R48 are the **R4.7-adopted baselines for movement**, not R4.8 targets; the R4.8 condition is FAIL 0 with the ceiling reached and every remaining exclusion named. Case-by-case movement was computed from the R4.7 and R4.8 detail files:

* **notes365, state and e2e**: 364/1/0 → 365/0/0. Exactly one case moves, `bibc-42-internal-link-label`, EXCLUDED (`Freelink`) → PASS in each mode. No remaining exclusion.
* **prose740, state**: 671/69/0 → 740/0/0. Exactly 69 cases move, all EXCLUDED → PASS: the 43 `ga-*` Gallery cases, the 24 `x01`…`x46` Image cases, `smoke-link` (Freelink) and `smoke-math` (Math) — precisely the R4.7 exclusion tally (Gallery 43, Image 24, Freelink 1, Math 1). No case moved in any other direction.
* **prose740, e2e (reported)**: 667/69/4 → 735/1/4. 68 cases move EXCLUDED → PASS; `ga-24` stays excluded under `BatchTokenIdCounter`; the same four tabview counter failures remain.
* **R4.1 regression**: 364/1/0 → 365/0/0 in both modes, again only `bibc-42-internal-link-label` moving. The regression is re-run with the *same* R4.1 driver and the *same* adopted artifacts; the shared dispatcher legitimately covers Freelink now, so the one case moves. There are no new failures.
* **R4.7 family regression**: byte-for-byte unchanged at 147/9/0 — zero case movements.

## 6. Theorem inventory, axiom audit and proof devices

Twenty-one theorem axiom prints were added to `Main.lean` for this stage, all present in `conformance-r48/axioms-build.txt` (generated by `lake env lean Main.lean`, since running the built binary does not emit `#print axioms` output):

* **Axiom-free**: `pipelineR48_length`, `pipelineR48_full`, `renderRuleOfName_roundtrip`.
* **`[propext, Classical.choice, Quot.sound]`**: `module_known_marker`, `module_known_upper_marker`, `module_unknown_error`, `module_body_marker`, `math_error_block`, `user_not_found`, `user_boundary_excluded`, `user_boundary_incomplete`, `freelink_title_boundary`, `image_flickr_boundary`, `image_first_no_boundary`, `freelink_exists_anchor`, `freelink_new_anchor`, `freelink_title_missing_fallback`, `image_plain_local`, `image_first_empty`, `gallery_local_mode_block`, `gallery_one_local_row`.

All are within the brief's allowed set; none depends on `sorryAx`. Disclosed proof devices, all statement-preserving, with the measurement that forced each:

1. `explodeSeq.go` in `ServingRules.lean` carries `termination_by xs => xs.length`. The initial build failed at `ServingRules.lean:154` with "Could not find a decreasing measure" because `pat.length - 1` is consumed from the recursive argument; the explicit measure on the first argument (strictly shorter on every recursive call) discharges it.
2. The local `exists` binding in `renderFreelink` was renamed `pageExists` (two sites): `exists` is a reserved Lean token and the build failed with "unexpected token 'exists'" at `ServingRules.lean:315`. No semantic change.
3. Six worked-example theorems (`user_not_found`, the three `freelink_*` output theorems, `image_plain_local`, plus the escape steps they share) needed `dsimp` after `unfold`: `rw` reported "Did not find an occurrence of the pattern `htmlSpecialCharsCompat ?m`" / `htmlSpecialCharsQuotesSubst ?m` because the escape call sat under a `have`-bound local name that was not zeta-reduced. After `dsimp`, the existing `*_ascii` characterizations apply and `rfl` closes. This is the brief's escape-characterization discipline, not a kernel-budget workaround.
4. `gallery_one_local_row` carries a proof-local `set_option maxRecDepth 8192 in`. At the default depth the build reported "maximum recursion depth has been reached" at `ServingRender.lean:301` for the `rfl` proof; the raised depth (the R4.3/R4.6/R4.7 precedent named in BRIEF-R48) compiles it. No statement or mirror function changed.

### Build fixes made in this continuation lane

The interrupted lane's sources did not compile. The fixes above (`termination_by`, reserved-name rename, `dsimp`, `maxRecDepth`) were the complete set applied to the mirror files. The draft `run_gates.sh` also had a `cd` that landed at the worktree root instead of `lean-ftml/`, so it could not build at all; it was rewritten as a self-locating suite covering the full brief gate list with explicit count/movement reporting. `compare_render.py` gained the named `BatchTokenIdCounter` exclusion class for the three e2e counter cases. Verification helpers added under `conformance-r48/`: `verify_hygiene.py`, `verify_axioms.py`, `verify_provenance.py`, `verify_token_free.py`, `check_exclusions.py`. No PHP source, corpus file or mirror function was changed to hide a divergence.

## 7. Candidates

The candidate audit (`conformance-r48/audit_candidates.py`) compared the fresh family renders with the R2/REFVAL corrected records and found three disagreements. All three are recorded in the worktree `GAP-LEDGER.md` with the capture named, and adjudicated without correcting the reference or changing the mirror:

* **C-R48-1** — `gallery-ga-24` (REFVAL battery `ga-24`, source `[[gallery]]\n: [[span]]x[[/span]]\n[[/gallery]]`). The fresh render embeds batch token ids 6002/6003; `conformance-refphp/refval/gallery/ref-render-corrected.jsonl` has no `ga-24` record at all (87 ids for 88 battery cases). This is a historical coverage gap, not a live-capture divergence. In e2e mode the case is excluded under `BatchTokenIdCounter`; in state mode it is byte-exact.
* **C-R48-2** — `module-mod-nested-two-openers`: fresh `%25FF2086%25FF` versus `conformance-refphp/module/module/ref-render-after.jsonl`'s `%25FF557%25FF`. The module handoff bytes are otherwise identical; the difference is the batch token-id position.
* **C-R48-3** — `modulex-x-known-mod-body-654`: fresh `%25FF3587%25FF` versus `conformance-refphp/module/x-ref-render-final.jsonl`'s `%25FF425%25FF`; same adjudication.

No reference-side correction and no mirror change arose from this stage.

## 8. Reproduction

Run `sh conformance-r48/run_gates.sh` from anywhere in the worktree (with `export PATH="$HOME/.elan/bin:$PATH"` in scope). It builds the library and every executable by name (`lean-ftml`, `lean-ftml-conformance-r48`, `-r47`, `-r41`), runs all gates above, and writes the per-gate comparison details, exclusion audits, axiom build output, candidate audit and verification reports into `conformance-r48/`. The decisive outputs are `gates-run.log`, `gate-state.txt`, `gate-e2e.txt`, `gate-notes.txt`, `gate-notes-e2e.txt`, `gate-prose.txt`, `gate-prose-e2e.txt`, `gate-r41-state.txt`, `gate-r41-e2e.txt`, `gate-r47-family.txt`, `exclusion-audit-state.txt`, `exclusion-audit-e2e.txt`, `axioms-build.txt` and `candidate-audit.txt`. Final run: `GATES-DONE fail=0`.

COMPLETE
