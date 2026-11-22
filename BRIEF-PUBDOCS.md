# BRIEF-PUBDOCS — the reference's publication docs pass: the tidy dependency note and a currency audit

This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it.

## Standing method (every lane in this programme)

Never edit ftml. Never run cargo. Never set a repository-local git identity, identity environment variables, or -c user.* overrides. Write deliverables to disk as each part completes. Prose in files flows in single-line paragraphs, never hard-wrapped. Your tree is a full copy of the canonical programme tree at the post-REFCORR4 state; ref-php/ is the reference source, REPO-README.md at the tree root is the public repository's README source, and GAP-LEDGER.md plus the publication records in STATE.md are your context. This lane changes documentation only: no PHP file, no Lean file, no conformance artifact moves.

## Mission

Two documentation debts ride on the reference's next publication. First, the environment dependency note: the R-UFFFD-1 correction (ref-php/text-wiki/Text/Wiki.php, renderLiteralUfffdRecovery) repairs its fragment through the system HTML Tidy binary at /usr/bin/tidy (5.8.0) because the PHP tidy extension is not loaded in the reference's environment; a reader running the reference without that binary gets different behavior on the U+FFFD shapes, and nothing in the published docs says so. Write that dependency into the reference's docs where a runner of the reference will actually meet it: REPO-README.md (a requirements or environment section, in the README's existing voice) and docs/INVENTORY.md if that is where environment facts live in the staging layout, checking the staging repository's actual layout from the records before choosing. Second, a currency audit of REPO-README.md and docs/INVENTORY.md against the tree as it now stands: the rule inventory and counts, the snapshot history (through snapshot-27, with snapshot-28 noted as in preparation if the README tracks snapshots), the correction-record locations, and any claim the REFCORR2 through REFCORR4 rounds have made stale. Fix every drift you find, and list each fix with its evidence (the file or record that proves the new wording). While auditing, also check the EXTERNAL LIBRARY INVENTORY facts in GAP-LEDGER.md (PHPMailer 2.0.0 rc1 for transport, Text_Highlighter's snapshot, the libtidy 5.4/5.8 equivalence class) and make sure the README's account of bundled and external code agrees with them.

## Deliverables

REPORT-PUBDOCS.md at the tree root, ending COMPLETE or PARTIAL, listing every documentation change with its evidence. The edited REPO-README.md and docs/INVENTORY.md (or their staging-layout equivalents) in place in your tree, with the pre-edit copies kept beside them as .before-pubdocs files.
