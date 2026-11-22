# BRIEF-PUBDOCS-2 — publication documentation currency after REFCORR5 and REFCORR6

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Standing method (all lanes)

Live Wikidot behavior is definitional, however malformed. Never edit ftml. Never run cargo. Never set a repository-local git identity, identity environment variables, or -c user.* overrides. This lane runs no Lean at all and publishes nothing (a sibling PUBLISH lane owns the snapshot pushes; your updated documents are inputs to its later snapshots and to the closing publication pass). Write each deliverable to disk as soon as its part is done. Prose in files is flowing paragraphs on single lines, never hard-wrapped. This tree is the canonical programme tree after the REFCORR4, TABLEADV-FIX, REFCORR5, COVERAGE-INLINE, MIRROR-FIX and REFCORR6 adoptions.

## The work

The PUBDOCS lane brought REPO-README.md and ref-php/INVENTORY.md current through snapshot-27 and the REFCORR4 round. Since then the reference has taken the REFCORR5 round (twelve PHP corrections across list case handling, Colortext parse validation, Email escaping, the Date fabrication removal, Freelink transliteration, the Raw composite token, and the Span, Size and Gallery shelf corrections), the REFCORR6 Mathinline structural correction (the tokenSource side table in Text/Wiki.php and the nine files it touched), and the MIRROR-FIX lane's confirmation that the pooled comparison stands at 4,204 of 4,205 with a34 the sole artifact. Audit both documents against the current tree the way the PUBDOCS lane did: every behavioral claim checked against the code or its CORRECTION record, every count re-derived (parse rule files, render rule files, active rules), the snapshot history extended to name snapshot-28 (REFCORR4), snapshot-29 (REFCORR5) and snapshot-30 (REFCORR6) as the rounds they publish, and the Mathinline mechanism described as it now works (authored source spans carried from addToken, recursive expansion, the four-rule suppression set). Save byte-identical pre-edit copies as REPO-README.md.before-pubdocs2 and ref-php/INVENTORY.md.before-pubdocs2 before editing. Touch no PHP, no Lean, and no conformance file.

## Deliverable

REPORT-PUBDOCS-2.md at the tree root: the claims corrected with their evidence, the counts re-derived, and any claim you could not verify flagged as UNVERIFIED rather than rewritten. End the report with COMPLETE or PARTIAL.
