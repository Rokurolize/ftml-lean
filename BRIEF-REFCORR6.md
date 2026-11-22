# BRIEF-REFCORR6 — the Mathinline structural correction (C-SUSPECT3-1)

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Standing method (all lanes)

Live Wikidot behavior is definitional, however malformed; the evidence order is (1) ftml corpus and integration pins, (2) frozen parity captures, (3) fresh live sandbox probes, fetched once, cached and reused. Never edit ftml. Never run cargo. Never set a repository-local git identity, identity environment variables, or -c user.* overrides. Every Lean invocation without exception, builds and single-file elaborations alike, goes through the serial queue wrapper at ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time; never invoke lean or lake directly, never run elaborations in parallel, and give any scratch file a unique name inside your tree (a sibling lane's parallel scratch elaborations exhausted the machine's memory on 2026-11-22; this rule is hard). Write each deliverable to disk as soon as its part is done. Prose in files is flowing paragraphs on single lines, never hard-wrapped. This tree is the canonical programme tree after the REFCORR5 adoption; REPORT-SUSPECT3.md at its root and the conformance-suspect3/ tree are your primary sources.

## The defect

SUSPECT3's dedicated sixteen-case battery (conformance-suspect3/cases-m1.jsonl, captures-m1.json, ADJUDICATION-M1.md) settled live's Mathinline rule: live preserves the trimmed authored body verbatim, expanding each earlier-rule placeholder back to that token's original source text recursively, and suppresses the whole formula to `$$` when a Freelink, Raw, Newline or Image token occurs anywhere in the body at any nesting level. The reference instead resolves exactly one level through token option values, drops the email address and brackets of a described email, leaks the inner placeholder as a visible replacement, and suppresses only a first-level Newline or Raw token. Six of the sixteen rows match live byte for byte; ten diverge. The SUSPECT3 lane deliberately did not patch this: the reference's token table stores only a rule name and an options array (Text/Wiki.php addToken), so live's rule cannot be reproduced by a local edit to the Mathinline rule alone.

## The work

Design and land the smallest mechanism that reproduces live's rule in the reference, and justify the choice in the report against the alternatives the SUSPECT3 record names: (a) carrying each token's original source text in the token table from addToken onward (investigate what addToken call sites actually receive; if the matched source text is available there, this is the least invasive route and changes no pipeline order), (b) a per-rule source-text reconstruction at Mathinline time, (c) a pre-tokenization capture pass over `[[$ ... $]]` bodies, which changes pipeline order for all sixty-eight rules and needs the strongest justification if chosen. Whichever mechanism is chosen, the suppression set is the four rules the battery proves (Freelink, Raw, Newline, Image) at any depth, the expansion is recursive to the tokens' original source text, and the six currently matching rows must keep matching byte for byte. Keep a byte-identical .before-refcorr6 copy of every edited PHP file and write the CORRECTION record into the owning conformance-refphp section (inline1, beside the Mathinline material). Mirror consequence: rework Inline1Rules.lean's mathResolve and mathRepl to the same recursive source-text expansion and suppression set, keeping the six matching rows as regression pins.

## Gates

The sixteen-case battery byte-exact on both the reference and the mirror after the change; smoke 9/9; the r43 family (Mathinline's home stage) re-run with every movement attributed to this correction by case name; the CAPSTONE pooled comparison re-run with the result stated against the standing baseline (a34 the standing batching artifact, plus lb07 if the MIRROR-FIX lane has not landed first). Every driver rebuilt by name through the wrapper before its run.

## Deliverable

REPORT-REFCORR6.md at the tree root: the mechanism chosen and the evidence for it, the alternatives rejected and why, the files changed, the mirror consequence, and the gate tallies. End the report with COMPLETE or PARTIAL.
