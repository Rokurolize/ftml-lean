# BRIEF-COVERAGE-CONTAIN — coverage-tier classification of the container (Div, Blockquote, Collapsible, Tabview) family

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Standing method (all lanes)

Live Wikidot behavior is definitional, however malformed; the evidence order is (1) ftml corpus and integration pins, (2) frozen parity captures, (3) fresh live sandbox probes, fetched once, cached and reused. Never edit ftml. Never run cargo. Never set a repository-local git identity, identity environment variables, or -c user.* overrides. Every Lean invocation without exception, builds and single-file elaborations alike, goes through the serial queue wrapper at ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time; never invoke lean or lake directly, never run elaborations in parallel, and give any scratch file a unique name inside your tree (a sibling lane's parallel scratch elaborations exhausted the machine's memory on 2026-11-22; this rule is hard). Write each deliverable to disk as soon as its part is done. Prose in files is flowing paragraphs on single lines, never hard-wrapped. This tree is the canonical programme tree after the REFCORR4, TABLEADV-FIX, REFCORR5, COVERAGE-INLINE, MIRROR-FIX and REFCORR6 adoptions.

## The standard you are working to

The prose, notes and inline families already stand at the coverage standard (lean-ftml/LeanFtml/CoverageProse.lean, CoverageNotes.lean, CoverageInline.lean and their reports are your models): a formal input classification derived from the reference's own decision structure, a Lean proof that the classification is complete over that structure (every class reachable, the classes covering the input space, exclusivity where the reference's cascade is exclusive), a pin for every class (a live probe, a retained battery case, or a recorded reason with a designed direct-call pin where a page cannot enter the branch), and seeded within-class fuzz against the reference on at least two seeds. Check name collisions with the existing coverage modules before naming your classifier, exactly as the inline lane had to.

## Your family

The container family: the Div, Blockquote, Collapsible and Tabview rules across their parse and render decision structure in this tree's mirror (ContainRules.lean and the blockquote material) cross-read against ref-php's Parse/Default and Render/Xhtml files for those rules under the harness configuration. Span and Size render classes already stand in CoverageInline.lean and are out of scope except where a container decision consumes them. Settle the div attribute emission and vanished-flag behavior (C-STAGE2-1 and C-STAGE2-2, corrected in REFCORR2) as classes, the blockquote line-deletion behavior the SPEC2 adjudication settled against live, collapsible label and fold behavior, and tabview's class and panel decisions.

## Deliverables

A new module lean-ftml/LeanFtml/CoverageContain.lean.lean, imported from LeanFtml.lean (append the import there; do NOT edit Main.lean, instead stage your audit lines in coverage-contain-audit-block.txt at the tree root for the coordinator to merge), a conformance directory conformance-covcontain/ holding the pin inventory and fuzz artifacts, and REPORT-COVERAGE-CONTAIN.md at the tree root with the per-class accounting table, the fuzz tallies, and every remainder named with its reason. Axiom discipline: no sorry, no sorryAx, no native_decide; the classification theorems audit within the standard core set [propext, Classical.choice, Quot.sound] or better. End the report with COMPLETE or PARTIAL.
