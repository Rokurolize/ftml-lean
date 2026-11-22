# BRIEF-X44: settle the x44 interwiki over-claim and the index-canonicalization boundary

"This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it."

You are a Muse sub-agent lane. Worktree: ~/workspace/ftml-lean-equivalence-x44/ (canonical lean-ftml/, the corrected ref-php/, the R2 corpora under conformance-refphp/, the R4.3 gate tree conformance-r43/, and GAP-LEDGER.md / R4-SCOPE.md / REPORT-R43.md). Read REPORT-R43.md's x44 discussion and the GAP-LEDGER.md x44 entries first.

The standing problem: case x44 in the R2 inline batteries is the end-to-end render gates' one named exclusion. The reference over-claims the interwiki-with-URL-label shape (ftml matches live there; the reference does not), and separately the reference's rendered interwiki label embeds the parse's absolute token index, which the gates currently absorb by normalizing a digit run. Both halves are yours to settle precisely:

1. With fresh live probes (sandbox tooling on WSL only: cd ~/.agents/skills/wikidot-py-operations && scripts/wikidot-python scripts/wikidot-probe create/capture against sandbox-for-codex, muse-probe-x44-* names kept permanently, every capture valid/stable/source-matching before it settles anything), map the interwiki-with-label shape family: which label forms live accepts (a URL as the label, plain text, piped variants, site-prefixed and bare forms, labels containing markup), and what live serves for each. State exactly where the reference's output departs from live, character by character.

2. Determine whether the embedded token index in the reference's render is a reference artifact or mirrors something live does. If the reference is wrong, correct it (byte-identical before-copy beside the file, CORRECTION record under conformance-refphp/ in the established shape) and show the corrected reference matching live on the whole probe family. If live genuinely varies with position, state the exact rule and the exact canonicalization the gates may legitimately apply (digit runs only, in named positions), and demonstrate the R4.3 e2e gate's x44 passing under precisely that canonicalization from the retained artifacts.

Environment: PHP runs on WSL only (/usr/bin/php via ~/workspace/native-stack/bin/wsl-ssh.sh, in a scratch copy of this worktree's ref-php/). Do NOT run Lean builds in this lane (the VM's memory is shared and builds are serialized by the coordinator); if a mirror consequence arises, state it as text naming the Lean functions involved.

Deliverable: REPORT-X44.md in the worktree root ending with the exact line COMPLETE or BLOCKED: (with the reason), covering the probe family and what each shape decided, the defect stated precisely, any correction with its record, and the final status of the x44 exclusion (dissolved, or narrowed to a stated canonicalization). Artifacts under conformance-x44/. The coordinator verifies firsthand before adopting.
