# Candidate C-R5D-S1-1 — footnote gap defeats the REFCORR10 post-failed-close adjacency guard

## Status

CONFIRMED. Suspicion S01 (ledger section `s01-li-guard-footnote-gap`), family list/notes, third-order sibling of the REFCORR9/REFCORR10 post-failed-closer raw-case LI corrections. Fresh shape: no prior round-5b/5c confirmed minimal shape is re-run; the changed mechanism is that REFCORR10 generalised the C1 guard from an exact uppercase `[[LI]]` skeleton to any case/attribute LI but kept a rigid "LI immediately after the failed closer newline" adjacency, and no prior probe inserted a collected footnote between the failed closer and that LI.

## Minimal source

```
[[UL]]
[[LI]]A[[/LI]]
[[/UL]]
[[footnote]]gap[[/footnote]]
[[LI]]B[[/LI]]
[[/UL]]
[[footnoteblock]]
```

Source sha256 `3e317eb8399ee4a8c4b630278dbb17e1938b3183e6be8e66f4b7c5e456c2cea4`. Page `muse-probe-round5d-s1-s01-li-guard-footnote-gap`, left in place on sandbox-for-codex. Capture valid=true, stable=true, saved_source_matches=true, html_sha256 `b56c3285f3a1f0ba91217fb79e1d864638a06aff4269d71138f9576a50fe7ac5`.

## Decisive bytes

Live page-content (rule-level): one `<ul>` with one `<li>` containing `A`, the footnote reference, `<br />`, the literal bytes `[[LI]]B[[/LI]]`, `<br />`, and the literal `[[/UL]]`; the footnote footer then renders with body `gap`. In compact form: `<ul><li>A<sup ...>1</sup><br />[[LI]]B[[/LI]]<br />[[/UL]]</li></ul>` followed by the footer.

Reference (`ref.jsonl` row 1) page-content: two list items, `<ul>\n<li>A</li>\n<li>B<div class="footnotes-footer">…1</a>. gap</div></li>\n</ul>`; both `[[LI]]` markers are consumed as real items and no literal `[[/UL]]` survives inside the list.

After the standard `probe.norm` mask plus the campaign frame mask (inter-tag newlines, `<br />` spelling, trailing newlines, owned token counter digits, Stage 2 single-paragraph wrapper) the surviving difference is rule-level: item count (1 vs 2) and literal wiki text kept vs consumed. `comparison.json` records first_diff=10 with live text signature `A 1 [[LI]]B[[/LI]] [[/UL]] Footnotes 1 . gap` versus reference `A B Footnotes 1 . gap`. This is not a serving surface (no module placeholder, no gallery id, no `class="newpage"`, no wdfiles host), not a token-id counter digit, and not a Stage 2 tidy frame. The tokens-mode reference stream contains two consecutive `explicit_item_start` tokens, confirming the structural difference at the token level.

## Owning reference file

`ref-php/text-wiki/Text/Wiki/Parse/Default/List.php`, the C1 failed-closer guard introduced by REFCORR9 and generalised by REFCORR10 at line 489:

```
/^\n\[\[li(?:\s+[^\]]*)?\]\](.*?)\[\[\/li\]\]\n\[\[\/(?:ul|ol)\]\]\n(\[\[li(?:\s+[^\]]*)?\]\].*)$/is
```

The guard requires the surviving raw-case `[[LI]]` to begin immediately on the newline after the failed `[[/UL]]`. In this source the first failed closer is followed by `\n[[footnote]]gap[[/footnote]]\n`, so the guard cannot match. Execution then falls to the generic synthetic-tail absorption branch, which pairs both LI markers as two items and consumes the closers. Live instead keeps the whole post-closer tail literal inside the first item and closes a single list.

## Inferred mirror consequence

`lean-ftml/LeanFtml/ListRules.lean`, `listPostFailedClose10` (lines 1636-1677) and `listPostFailedClose9` (lines 1680-1704), reached in that order from `listExplicitPass` (lines 1713-1720). `listPostFailedClose9` requires an exact byte prefix and cannot match. `listPostFailedClose10` takes the first closer in the body and tests `liOpenerAt (post.dropWhile isWsByte)`; after dropping whitespace the next bytes are `[[footnote]]…`, not an LI opener, so the predicate returns `none` and the generic `explLoop` path builds two items. The same adjacency weakness is therefore transcribed in the mirror, and a correction must teach both sides to skip a collected footnote (or other block token) between the failed closer and the following LI while preserving live's literal-tail, one-item shape. This consequence is inferred by source reading and the recorded tokens artifact; no Lean elaboration was run for this unit.
