# CORRECTION-REFCORR11-LIST (draft) — GENERAL post-failed-close adjacency rule

## General rule (the single coherent generalization)

When a raw-case (upper-case or mixed-case) explicit list opener has no pairing closer, and its body contains a first `[[li]]…[[/li]]` item followed by a failed block closer `[[/(ul|ol)]]`, live emits ONE closed item whose literal tail runs from just after that failed closer to the surviving final block closer, and the list is closed. The decisive generalization of REFCORR11 R11-LIST is that this guard is ADJACENCY-TOLERANT: any intervening material between the failed closer and the next raw-case `[[LI]]` marker — a residual closing bracket, one or more blank lines, a collected footnote block, or any other block marker — does not defeat the guard. Formally, the guard requires only that (a) the first item and a failed closer precede the material, and (b) a further LI opener exists anywhere later in the body; it then keeps every byte after the failed closer (minus the single line-end LF of the closer itself) LITERAL inside the first item, truncates the literal tail at the surviving final block closer so that trailing material such as `[[footnoteblock]]` is processed by the normal pipeline, closes the list, and consumes the failed closer. The live captures decide which bytes are intervening material; no per-shape enumeration is encoded.

This replaces the REFCORR9/REFCORR10 C1 guard's exact byte skeleton `…\[\[/li\]\]\n\[\[/(ul|ol)\]\]\n(\[\[li…`, which required a bare closer immediately followed by exactly one LF and then the LI. That skeleton is the rule-level cause of confirmed C-R5D-P1-1 (residual bracket), C-R5D-P1-2 (blank line) and C-R5D-S1-1 (footnote block inserted between closer and LI). Mirror counterpart: `listPostFailedClose10` in `lean-ftml/LeanFtml/ListRules.lean`: its `liOpenerAt (post.dropWhile isWsByte)` test stopped at the first non-whitespace byte, so a footnote block defeated it; the generalized predicate searches every offset of the post-closer byte stream for an LI opener and preserves the whole post-closer region as the literal tail.

Scope note: round 5d's other four confirmed list divergences (C-R5D-P1-3 empty-item native list, C-R5D-P1-4 nested-split blank-line break count, C-R5D-P1-5 byte-empty nested-list close gate, C-R5D-P1-6 scored empty plus nested combination) are separate empty-item / nested-list predicates in the same guard region, already carried as general predicates by REFCORR10; they are NOT subsumed by the adjacency rule and are recorded here as residual sub-mechanisms for a follow-up correction, not claimed as fixed by this draft.

## PHP change (scratch, verified)

In `ref-php/text-wiki/Text/Wiki/Parse/Default/List.php`, the C1 fast path at the post-failed-close guard replaces the exact adjacency regex and literal-body construction with the generalized form:

```
/^\n\[\[li(?:\s+[^\]]*)?\]\](.*?)\[\[\/li\]\]\n\[\[\/(?:ul|ol)\]\](.*?\[\[li(?:\s+[^\]]*)?\]\].*)$/is
```

The new capture group 2 is the whole post-closer region provided a further LI opener exists anywhere in it (the `.*?` tolerates arbitrary intervening bytes). The literal body is capture 1 followed by capture 2 with a single leading LF consumed (the closer's own line end) and trailing whitespace rtrimmed. The literal tail is then split at the LAST surviving `[[/(ul|ol)]]` closer; everything after that closer is emitted verbatim AFTER the list-end token so a following `[[footnoteblock]]` renders its footer outside the item, exactly as live does. The failed closer itself is consumed and never appears in the output.

## Mirror change (scratch)

See the unified diff `ListRules.lean.refcorr11.diff` and the closed pin `R11_AdjacencyPin.lean`. The mirror generalizes `listPostFailedClose10` with two total, fuel-bounded byte helpers (first LI opener at any offset; split at the final block closer) and keeps the residual bracket in the literal tail by dropping it from the closer token length. Token creation order and the four-token wire (list start, item start, item end, list end, Newline) are unchanged.

## Verification summary

php -l clean on the scratch PHP. Rendering the union of the round-5d P1 and S1 cases through the scratch harness moved exactly four outputs: L1-C1RESBR, L2-C1BLANK, s01-li-guard-footnote-gap (the three adjacency confirmations, now byte-equal to cached live after the campaign mask) and s04-li-fn-newline-before-failed-close (a previously cleared control whose footer moves from inside the item to after the list, matching cached live exactly and leaving its campaign signature identical). No other output moved: every cleared list control of rounds 5/5b/5c/5d and every prior REFCORR wire is byte-identical before and after. Wrapper Lean build and pin results, hashes and gate rechecks are recorded in UNIT.md.

COMPLETE
