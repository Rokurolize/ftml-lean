# BRIEF-PUBLISH — publish snapshots 28, 29 and 30 of the PHP reference

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Standing method (all lanes)

Live Wikidot behavior is definitional, however malformed. Never edit ftml. Never run cargo. Never set a repository-local git identity, identity environment variables, or -c user.* overrides; commits use the WSL global git identity as configured. This lane runs no Lean at all. Write each deliverable to disk as soon as its part is done. Prose in files is flowing paragraphs on single lines, never hard-wrapped. This tree is the canonical programme tree after the REFCORR4, TABLEADV-FIX, REFCORR5, COVERAGE-INLINE, MIRROR-FIX and REFCORR6 adoptions; the publication target is the public repository https://github.com/Rokurolize/wikidot-php-reference, whose staging checkout lives at ~/.local/state/wikijump/muse-bhl/wikidot-php-reference on this machine and currently stands at snapshot-27 (commit a86c2ff).

## The three round states

Each snapshot publishes the reference as it stood at the end of one correction round. Your tree holds the final (post-REFCORR6) state plus the rollback copies that reconstruct the earlier endpoints:

- snapshot-30 state: ref-php/ exactly as it stands in this tree (post-REFCORR6).
- snapshot-29 state: the snapshot-30 state with REFCORR6 rolled back: for each of the nine files carrying a .before-refcorr6 copy (Text/Wiki.php and Parse/Default Url, Email, Freelink, Newline, Image, Code, Raw, Mathinline), the .before-refcorr6 content is the snapshot-29 content.
- snapshot-28 state: the snapshot-29 state with REFCORR5 rolled back the same way via the .before-refcorr5 copies (Parse/Default Colortext, Deflist, Freelink, List, Raw, Size, Span, Tighten; Render/Xhtml Date, Email, Gallery, Raw). Where a file carries both rounds' copies (Freelink, Raw, Email), chain them in that order.

Verify each reconstruction before publishing it: the REFCORR6 correction record (conformance-refphp/inline1/mathinline/CORRECTION-REFCORR6-SRC.md) tabulates SHA-256 prefixes for its files before and after, and the REFCORR5 and REFCORR4 records and retained artifacts in this tree give the same checks for their rounds; a reconstructed file whose hash matches neither side of its round's record is a stop, reported in your deliverable, not a publish.

## Publication mechanics

This repository is managed the ordinary way, the same as the wikijump and ftml repositories: plain commits on main in the order the work landed, with a tag marking each correction round's endpoint. There is no separate publication ceremony, and after this catch-up the standing rule is that each future correction round commits its reference changes to this repository as part of its adoption, in the same ordinary way. For this catch-up: mirror the snapshot-27 commit's path pattern (inspect it in the staging checkout with git show --stat snapshot-27): the ref-php tree synced in, the conformance-refphp material mapped under conformance/ the same way, the same exclusions (no rust-dump target directories, no Cargo.lock, no build.log, no __pycache__). Stage explicit paths with git add (never git add -A), one ordinary commit per round in order (the REFCORR4 state, then REFCORR5, then REFCORR6), each tagged snapshot-28, snapshot-29, snapshot-30 at its commit, pushing main and the tag after each commit. The documentation state (README.md and docs/INVENTORY.md) goes in with the REFCORR4 commit, since the PUBDOCS adoption predates all three rounds' publication, and stays unchanged for the other two. After all three pushes, verify with git ls-remote that main and all three tags resolve on the public repository, and record the commit hashes and tag object ids.

## Deliverable

REPORT-PUBLISH.md at the tree root: the three states' verification results (hash checks per file), the three commit hashes and tag object ids, the ls-remote verification output, and any stop encountered. End the report with COMPLETE or PARTIAL.
