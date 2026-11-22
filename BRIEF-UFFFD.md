# BRIEF-UFFFD: decide the U+FFFD collision (reference truncation vs Lean preservation)

"This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it."

You are a Muse sub-agent lane. Worktree: ~/workspace/ftml-lean-equivalence-ufffd/ (canonical lean-ftml/, the corrected ref-php/, the R2 corpora, and R4-SCOPE.md). R4-SCOPE.md section 1.1 records the open decision: the reference's Xhtml::pre() maps a literal U+FFFD character in prose back to the \xFF token-delimiter byte and truncates the document at that point, while the Lean render core preserves the character. No battery case exercises the shape. Your mission is to decide, from evidence, which behavior is live's, or whether the shape is unreachable.

Work in this order:

1. Reachability: enumerate every route by which a literal U+FFFD could enter the render pipeline from authored page source: direct authoring of the character itself (test what live's save layer does with it: kept, normalized, rejected), character references or escapes the parser decodes into it, module or include output, and file/page metadata paths. Each route gets a live probe or a parse-side argument (sandbox tooling on WSL only: cd ~/.agents/skills/wikidot-py-operations && scripts/wikidot-python scripts/wikidot-probe create/capture against sandbox-for-codex, muse-probe-ufffd-* names kept permanently, every capture valid/stable/source-matching; PHP runs on WSL via ~/workspace/native-stack/bin/wsl-ssh.sh in a scratch copy of this worktree's ref-php/).

2. Behavior: for each reachable route, capture what live serves (full document, truncated at the character, character preserved, character replaced) and what the reference produces on the same source. Compare byte by byte, including what happens to content AFTER the character and to tokens whose placeholders sit near it.

3. Decision, exactly one of: REFERENCE CORRECTED (live preserves or replaces, the reference's truncation is a fossil artifact; apply the correction with a byte-identical before-copy and a CORRECTION record under conformance-refphp/, showing the corrected reference matching live on the probe family, and state the Lean side needs no change), MIRROR FINDING (live truncates like the reference; record the finding against the Lean render core as a numbered candidate with the evidence, stating exactly which Lean function must change, as text; do NOT run Lean builds in this lane), or UNREACHABLE (no authored route delivers the character; record the route-by-route evidence and the boundary statement that closes the item).

Deliverable: REPORT-UFFFD.md in the worktree root ending with the exact line COMPLETE or BLOCKED: (with the reason). Artifacts under conformance-ufffd/. The coordinator verifies the decisive captures firsthand before adopting the decision.
