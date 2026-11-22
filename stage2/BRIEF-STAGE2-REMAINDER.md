# BRIEF-STAGE2-REMAINDER: settle the Stage 2 model's named remainder (U1, U2-U5, C-R43-1)

"This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it."

You are the Cursor lane (Grok) running in herdr on WSL. Worktree: ~/.local/state/wikijump/muse-bhl/lean-ftml-antigravity-stage2/ (the Stage 2 evidence worktree: stage2-model/ holds the corrected five-pass model Stage2.lean with its pristine pre-evidence backup, stage2-evidence/ holds the battery artifacts, and REPORT-STAGE2.md at the root records the settled inventory T1-T12, the five probe-forced corrections M1-M5, and the named remainder this lane settles). Read REPORT-STAGE2.md first, in full: its remainder section names the settling probe shapes for each open item, and those shapes are your starting battery, not a suggestion to redesign from scratch.

## The open items

U1 (unsettled): after a multi-crossing that drops a span, live closes the whole inline chain at the dropped span's later closer and reopens an em at a subsequent closer; the model does not reproduce this tail (the p15 case). Three runnable settling shapes are named in the report. Run them, and whatever further discriminating shapes the results force, until U1's mechanism is stated as a rule the model can implement or the shape is proven to depend on something outside the model's input.

U2-U5 (fitted two-point boundaries): unwrap scope, break-drop bounds, the anchor rule at depth two or more, and lone-content paragraphs. Each has named settling shapes in the report. Run them and pin each boundary at its true point.

C-R43-1 (the footnote block-boundary family): at a footnote body's block boundary, live places a newline before a block element inside the body while keeping the footnote item separator space; the Text_Wiki layer emits neither. The R4.3 adjudication record (seven probes, muse-probe-r43-*) established the phenomenon's outline: live emits the space for every shape except where the body's first rendered node is a claimed block element, and a newline appears mid-body before a list. Settle this family with the same probe discipline and state it as a model rule alongside U1, since both are post-render block-boundary behavior.

## Method (binding)

Live Wikidot behavior is definitionally correct; the fossil Text_Wiki source is never evidence. Probes run with the wikidot-py-operations tooling (cd ~/.agents/skills/wikidot-py-operations && scripts/wikidot-python scripts/wikidot-probe create/capture against site sandbox-for-codex; muse-probe-* page names are kept permanently; fetch once, cache, reuse). Every capture you rely on must validate (valid, stable, saved_source_matches all true) before it settles anything. When a probe forces a model correction: keep the pre-correction model file as a byte-identical backup with a clear name, rebuild the model binary, and re-run ALL batteries (A, B, C, and the r4c4 check) after the correction, reporting before and after counts per battery. Classify every battery case exactly once, as the first evidence lane did.

## Deliverable

REPORT-STAGE2-REMAINDER.md in the worktree root, ending with the exact line COMPLETE (every item settled as a stated rule, with the model corrected and all batteries re-run where a correction landed) or PARTIAL: (naming what remains open and the evidence that bounds it). It covers: per item, the probes run (page names), what each decided, the rule as finally stated, any model corrections with their battery movements, and the updated remainder if any. The coordinator verifies the decisive captures and battery numbers firsthand before adopting anything into the canonical record.
