# OWNED-ARTIFACTS — R5C-R2 owned-surface resolutions for raw DIFFs

Six of the eight raw DIFFs are resolved to standing owned classes with artifacts, not intent.

Math PNG/no-PNG serving surface (r2c-01 TyPe, r2c-02 tYPE, r2c-03 dual attrs): the canonical harness has a no-op LatexRenderer, so every valid Math type renders the generic `The equation has not been processed correctly` block on the reference side while live emits a real equation envelope. Adjudication is from reference tokens mode (tokens.jsonl): r2c-01 type=equation and r2c-02 type=equation match live's `\begin{equation}` envelope with counter (1); r2c-03 type=align matches live's `\begin{align}` envelope, confirming the exact lowercase key still wins over TYPE after REFCORR9. No rule-level value diverges.

Absent-type default-align class (r2c-04 typeeq): the reference token is `align`. The attribute name `typeeq` ASCII-folds to `typeeq`, not `type`, so REFCORR9's `isTypeVariantKey` predicate does not fire and the reference takes the REFCORR3 absent-type branch. This is structurally identical to the adopted REFCORR3 probe `attr-unknown` (`[[math foo="bar"]]`, conformance-refphp/next/math/captures.json, live equation envelope against reference align), and CORRECTION-REFCORR8-MATH-TYPE.md explicitly rules that a genuinely absent type key still defaults to align and that reverting it to equation would break the cleared absent-type row. Live's equation envelope here is the already-cleared PNG-side discrepancy for the absent-type class, not a new mechanism.

Stage 2 tidy frame (r2c-17 vbscript, r2c-18 no-match): the reference Stage 1 emits `<p></p>` for the empty embed result and `<p><div class="error-block">...</div></p>` for the no-match error. Stage 2 purifyHtml drops the empty paragraph and hoists the div out of the paragraph, giving live's empty result and bare error div respectively. This is the same owned Stage 2 frame class cleared in R5B-R2 for r2b-embed-data-scheme and r2b-embed-datasrc.

The token-id counter class and the parity-side Email index family were deliberately not re-probed in this unit; no case in cases.jsonl touches them.
