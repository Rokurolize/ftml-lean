# BRIEF-HTMLCHARS: adjudicate the six bare-htmlspecialchars call sites against live

"This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it."

You are a Muse sub-agent lane. Worktree: ~/workspace/ftml-lean-equivalence-htmlchars/ (canonical lean-ftml/, the corrected ref-php/, the R2 corpora, the R4.3/R4.4/R4.6 gate trees, and GAP-LEDGER.md / R4-SCOPE.md). The reference-side remainder list in GAP-LEDGER.md names six fossil renderers that still call bare htmlspecialchars() (whose modern PHP default flags differ from the explicit ENT_COMPAT / ENT_QUOTES choices the corrected reference makes elsewhere): the Render/Xhtml files for Rawold, Freelink, Button, Image, Url, and Interwiki. Each site needs its own live adjudication; none may be corrected on suspicion alone.

For EACH of the six call sites, in this order:

1. Read the call site and trace what string flows through it: attribute value or text content, authored by whom, and which character classes can actually reach it (double quote, apostrophe, ampersand, angle brackets, already-escaped entities, non-ASCII). The reachability argument comes first; a character class that cannot reach the call cannot indict it.

2. Design live probes that drive each reachable character class through that surface (sandbox tooling on WSL only: cd ~/.agents/skills/wikidot-py-operations && scripts/wikidot-python scripts/wikidot-probe create/capture against sandbox-for-codex, muse-probe-htmlchars-* names kept permanently, every capture valid/stable/source-matching). Compare live's escaping byte by byte against what the fossil's bare call produces and against the explicit-flag variants, running the reference on WSL (/usr/bin/php via ~/workspace/native-stack/bin/wsl-ssh.sh, scratch copy of this worktree's ref-php/).

3. Verdict per site, exactly one of: CORRECTED (live indicts the bare call; apply the correction with a byte-identical before-copy beside the file and a CORRECTION record under conformance-refphp/ in the established shape, and show the corrected reference matching live on the probe family), CONFIRMED (the bare call already matches live on every reachable class, with the probe evidence named), or UNREACHABLE (the differing character classes cannot reach the call; state the reachability proof from the parse side). Note any Lean mirror consequence as text (which render functions embed the affected escaping helper), but do NOT run Lean builds in this lane; the coordinator serializes builds at adoption.

Deliverable: REPORT-HTMLCHARS.md in the worktree root ending with the exact line COMPLETE (all six sites verdicted) or BLOCKED: (with the reason), with a per-site section. Artifacts under conformance-htmlchars/. The coordinator verifies the decisive captures and any correction firsthand before adopting.
