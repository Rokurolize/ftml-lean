# REPORT-UFFFD-MIRROR

Lane C-UFFFD-1. The literal-text path in `LeanFtml/RenderCore.lean` now treats a U+FFFD in a text segment as a restored `\xFF` delimiter and rescans the segment list. The 36 live captures are the oracle. The reference remains R-UFFFD-1 (fatal on 29 of the 30 literal-segment cases) and is not compared except on the six controls.

## Model

`pre()` computes `htmlspecialchars("\xFF", ENT_COMPAT | ENT_SUBSTITUTE)`, which is the UTF-8 sequence `EF BF BD`, then `str_replace`s every such sequence back to the delimiter byte `0xFF`. A literal U+FFFD is that same sequence.

`reconvertFffdBytes` is that restore on bytes: every `0xEF, 0xBF, 0xBD` triple becomes `0xFF`, and every other byte is copied. `utf8Bytes '\uFFFD'` is `ufffdSubstBytes` (`[0xEF, 0xBF, 0xBD]`). The segment model has no raw `0xFF` (a placeholder is a `.tok`, not a character), so the consumption of a literal U+FFFD is the rescan below, gated by `segHasUfffd`.

`renderWith` keeps the historical body when no text segment contains U+FFFD: `renderSegsLoop` then `postStripToc`. A text segment that contains the character takes `ufffdBytes` for the output bytes. Exclusion flags still come from `renderSegsLoop` over the original segments, so a skipped token whose rule is unmirrored stays excluded. `xhtmlPreText` is unchanged and runs only on the pieces the rescan keeps; the character itself is gone before escaping.

`flattenUfffd` splits each text segment on U+FFFD into text atoms and fake-delimiter atoms, and captures each token's `TokenEntry` at flatten time. `ufffdWalk` then consumes that stream:

- A paragraph whose atoms are a paragraph start, two or more fakes, and a paragraph end serves empty (`only-two`).
- Text is gathered across fakes that do not sit immediately before a block-end token or an inline start. A swallowed fake collapses a horizontal whitespace run to one space. Text exposed at a block start is stripped of leading spaces and tabs.
- A fake immediately before a block-end token leaks that token's index as decimal digits and still renders the token. When the next atom is a block start, both indices leak and neither token is rendered (the blocks merge). A heading end merged with the following paragraph start is remembered: the later paragraph end emits `<br />\n<br />`, then the heading's own end, and the paragraph end itself is not rendered (`end-heading`).
- A fake immediately before an inline start (`Strong`, `Emphasis`, `Underline`, `Strikethrough`, `Tt`, `Superscript`, `Subscript`) whose matching end is reached with only text between leaks the end index and emits the interior text, and the inline tags are not rendered (`fake-before-bold`).
- Any other fake is dropped.
- A digit run lying between two fakes is ordinary gathered text, so it is emitted as literal digits even when it names token 0 (`pair-digits`, `pair-zero`).

Leaked indices are this mirror's own token numbers. Block-end kinds are paragraph end, heading end, and list item/list end; block starts are the matching starts.

## Gate against live

`lean-ftml-conformance-r48 --e2e-ufffd` is the driver (`conformance-ufffd/run_gate.sh`, `compare_live.py`). It runs `pipelineR48` and `renderStateR48` on the 36 sources in `conformance-ufffd/comparison.json`.

Live comparison is modulo the capture frame: strip leading and trailing newlines, then replace each `\n\n` with `\n`. The six controls are also required to equal the reference field byte for byte, frame included. A residue is a same-length framed pair that differs only where both sides are digits and the live digit is the mirror digit plus one.

| Family | n | Result |
|---|---:|---|
| control (`control`, `spaces-control`, `entity-dec`, `entity-hex`, `code-token`, `includer`) | 6 | MATCH 6, reference byte-exact |
| mid-recover | 18 | MATCH 18 |
| block-end leak (`plain-end`, `plain-only`, `end-after-bold`, `end-no-space`) | 4 | RESIDUE 4 |
| boundary merge (`end-first-para`, `end-both-para`, `end-list`, `end-heading`) | 4 | RESIDUE 4 |
| enclosed key (`pair-digits`, `pair-zero`) | 2 | MATCH 2 |
| only-chars (`only-two`) | 1 | MATCH 1 (empty) |
| inline degrade (`fake-before-bold`) | 1 | MATCH 1 |

`conformance-ufffd/gate-ufffd.txt`: `TOTAL 36`, `FAIL 0`.

## Residue (2-versus-1)

Bounded remainder, left in place. On a fresh document this mirror numbers the paragraph start 0 and the paragraph end 1 (the unreferenced Typography tokens are allocated after those and do not shift in-source ids). Live's leaked paragraph-end index in the same shapes is 2. Every leaked block index in the eight residue cases is one greater on live, at the same character positions; the strings are otherwise equal after framing:

- `plain-end`, `plain-only`, `end-after-bold`, `end-no-space`: mirror digit 1, live digit 2.
- `end-first-para`: mirror `12`, live `23`.
- `end-both-para`: mirror `12` and `3`, live `23` and `4`.
- `end-list`: mirror `23`, live `34` (list item-end and the next item-start).
- `end-heading`: mirror `12`, live `23` (heading end and the swallowed paragraph start).

`fake-before-bold` leaks the strong-end index. Paragraph occupies 0 and 1, strong start is 2, strong end is 3, and live leaks 3 as well, so that case matches exactly and is outside the residue. Enclosed and mid-text digits (`42`, `0`, `9`) agree on both sides and are not adjusted.

## Theorems

`#print axioms` lines are in `lean-ftml/Main.lean`. The axiom build (`conformance-r48/axioms-build.txt`) has no `sorryAx`. Each new theorem is inside `[propext, Classical.choice, Quot.sound]`:

| Theorem | Axioms |
|---|---|
| `utf8Bytes_ufffd` | none |
| `reconvertFffdBytes_marker` | propext |
| `reconvertFffdBytes_ascii` | propext |
| `ufffd_plain_mid` | propext, Classical.choice, Quot.sound |
| `ufffd_plain_end` | propext, Classical.choice, Quot.sound |
| `ufffd_plain_only` | propext, Classical.choice, Quot.sound |
| `ufffd_end_first_para` | propext, Classical.choice, Quot.sound |
| `ufffd_end_list` | propext, Classical.choice, Quot.sound |
| `ufffd_end_heading` | propext, Classical.choice, Quot.sound |
| `ufffd_fake_before_bold` | propext, Classical.choice, Quot.sound |
| `ufffd_pair_digits` | propext, Classical.choice, Quot.sound |
| `ufffd_pair_zero` | propext, Classical.choice, Quot.sound |
| `ufffd_only_two` | propext, Classical.choice, Quot.sound |
| `ufffd_no_marker` | propext, Classical.choice, Quot.sound |

The ten decisive examples are the post-parse segment lists of `plain-mid`, `plain-end`, `plain-only`, `end-first-para`, `end-list`, `end-heading`, `fake-before-bold`, `pair-digits`, `pair-zero`, and `only-two`. Block-end digits in those statements are the mirror's (paragraph end is 1). `ufffd_no_marker` is the fast path on a paragraph with no U+FFFD. `renderWith_unmirrored_not_complete`, `renderWith_all_mirrored_complete`, and `renderWith_lookup_ext` were re-proved across both branches of `renderWith` and stay inside the same three axioms.

## Regression

`sh conformance-r48/run_gates.sh` exits 0 (`GATES-DONE fail=0`), `LAKE_JOBS=2`. Adopted tallies, `TOTAL/PASS/EXCLUDED/FAIL/FATAL-AGREE`:

- Family state: 643/566/72/0/5 (the brief's 566/72/0/5). Family e2e: 643/563/75/0/5, FAIL 0.
- Notes, state and e2e: 365/365/0/0/0.
- Prose state: 740/740/0/0/0.
- R4.1 notes, both modes: 365/365/0/0/0. R4.7 family state: 156/147/9/0/0.
- No `sorry` in the Lean sources. The 21 R4.8 theorems stay inside `[propext, Classical.choice, Quot.sound]`. 61 mirrored rules, 76 embed patterns.

Prose e2e is outside that script's fail check. This worktree records 740/730/1/9/0 there. Four of the nine are the historical tabview-counter class (`x22-coll-in-tab`, `x23-div-in-tab`, `x25-tab-in-coll-in-div`, `x29-footnote-in-tab`). The other five (`dp-32`, `dp-33`, `dp-38`, `dp-45`, `x24-three-nested-divs`) have no U+FFFD in any text segment, and `renderWith` on them agrees with `renderSegsLoop`. They come from the Div vanished-pair parse already in this worktree's `ContainRules.lean` and `InteractiveRules.lean`.

COMPLETE
