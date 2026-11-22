# REPORT-TABLEADV-PROOF — R3.10 Tableadv subsumption

## Finding

The recorded subsumption is false. On one 74-byte source the depth-first first-parse mirror and the reference enumeration return different parse states, and PHP 8.5.4 (cli, built Nov 19 2026 00:22:49, NTS) agrees with the enumeration.

The source is `tableadvWitness`:

```
[[table]][[row]][[cell]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]
```

`tableadvWitness_length` proves its length is 74. At `tableFuel` of that length:

- `tableadvScanGo` copies the source and records no tokens. The mirror's first nested parse is the greedy quoted head `"]][[/table]]"`, which swallows the outer closer, so the outer table closes at the inner `[[/table]]`. The body is `[[row]][[cell]][[table"]]`, which has no `[[/row]]`, and `tableadvProcess` echoes it.
- `tableadvEnumScan` rejects that head (its continuation fails) and takes the next head in `advHeadRuns`, the one-byte `"`. That head ends at the `[[/table]]` inside the quotes, the outer closer then succeeds, and the body validates as one row and one cell. The output bytes are

```
ff34ffff32ffff30ff5b5b7461626c65225d5d5b5b2f7461626c655d5d225d5dff31ffff33ffff35ff
```

  which is `\xFF4\xFF\xFF2\xFF\xFF0\xFF` + `[[table"]][[/table]]"]]` + `\xFF1\xFF\xFF3\xFF\xFF5\xFF`. The six tokens, in claim order, are cellStart (header false, attrs empty), cellEnd, rowStart, rowEnd, start, end.

The same hex and the same six token types are what `conformance-tableadv-proof/php_tableadv.php` prints for this source under `new Text_Wiki(["Tableadv"])`, with placeholder ids renumbered to 0..n-1. The reference pattern is `Text/Wiki/Parse/Default/Tableadv.php`'s

```
~\[\[table((?:"[^"]*"|[^\]])*)\]\]((?:(?R)|.)*?)\[\[/table\]\]~si
```

Every one-byte deletion of the witness (74 strings) makes the two Lean parse states agree, on output bytes and on token fingerprints. Inside the grammar below, this 74-byte string is the shortest state divergence.

## Theorem

The universal claim does not hold:

```
∀ src, tableadvScanGo src [] (tableFuel src.length)
         = tableadvEnumScan src [] (tableFuel src.length)
```

What is proved, in `LeanFtml/TableadvEnum.lean`, is the counterexample on output bytes (the first component of the parse state):

```
theorem tableadv_dfs_ne_enum :
    (tableadvScanGo tableadvWitness [] (tableFuel tableadvWitness.length)).1 ≠
    (tableadvEnumScan tableadvWitness [] (tableFuel tableadvWitness.length)).1
```

`Main.lean` prints the axioms. The build reports

```
'LeanFtml.tableadv_dfs_ne_enum' depends on axioms: [propext, Classical.choice, Quot.sound]
'LeanFtml.tableadvWitness_length' depends on axioms: [propext, Classical.choice, Quot.sound]
```

`sorryAx` is absent. `native_decide` is absent. `Classical.choice` is the `String.toList` / overlapping-match axiom and is inside the audit budget.

`tableadvEnumScan` is `tableadvScanGo` with `tableadvEnumMatchFirst` in place of `tableadvMatchFirst` and with the same `tableadvProcess`. A difference of that pair is a difference of parse state. The mirror's doc comments in `LeanFtml/TableRules.lean` (the Tableadv header and `tableadvBodyFirst`) now cite `tableadv_dfs_ne_enum`. The functions `tableadvScanGo`, `tableadvBodyFirst`, `tableadvMatchFirst`, and `tableadvProcess` are unchanged.

## Obstruction

The split that does not close, because the two sides compute different values, is the body step at which the first nested parse's continuation fails.

- `tableadvBodyFirst` binds `tableadvMatchFirst`. When that returns `some` and the continuation `tableadvBodyFirst` on its rest returns `none`, the mirror takes the `.` alternative (one byte).
- `tableadvEnumExtend` / `tableadvEnumHeads` try the next head in `advHeadRuns`, and the next lazy body ending of that head, before `.`. A failing continuation is the backtracking step the depth-first mirror skips.

On `tableadvWitness` that next head is the one-byte `"`, which ends at the `[[/table]]` inside the quoted head. The outer closer then succeeds and `tableadvProcess` accepts the longer body. The mirror has already closed the outer table at the inner closer. This is a semantic gap between the first-parse shortcut and the reference search, on an input the local PHP 8.5.4 confirms.

## Empirical bound

The grammar is `conformance-tableadv-proof/grammar.py`. One alphabet of 20 symbols, in this order:

| Role | Symbols |
|---|---|
| Row and cell forms | `[[table]]` `[[/table]]` `[[row]]` `[[/row]]` `[[cell]]` `[[/cell]]` `[[hcell]]` `[[/hcell]]` newline space |
| Span, valid | `[[cell colspan="2"]]` |
| Span, invalid | `[[cell colspan="0"]]` `[[cell colspan="abc"]]` |
| Alignment | `[[cell align="center"]]` |
| Unknown attribute | `[[cell foo="1"]]` |
| Quoted bracket | `[[table class="a]]b"]]` |
| Quote-trick pieces | `[[table"]]` `"]]` `]]` |
| Cell text | `X` |

Free language F: every concatenation of at most 3 symbols, including empty. `|F| = (20^4 − 1) / 19 = 8421`, and enumerating the generator yields 8421.

Frame language R:

```
[[table]] · A · [[table"]] · [[/table]] · "]] · B · [[/table]]
```

A and B are concatenations of at most 2 symbols, including empty. `|Σ≤2| = (20^3 − 1) / 19 = 421`, so `|R| = 421^2 = 177241`. The witness is the member `A = [[row]][[cell]]`, `B = [[/cell]][[/row]]`. The bytes between `[[table"]]` and `"]]` are `[[/table]]`, which is what the long quoted head swallows. F and R are disjoint as strings (intersection 0): every frame contains five fixed symbols and every free string is at most three. The 177241 frames are unique. The union that was compared is `8421 + 177241 = 185662` distinct strings.

Comparison, every string, both processes exit 0:

- Lean executable `lean-ftml/.lake/build/bin/lean-ftml-tableadv-proof` runs `tableadvScanGo` and `tableadvEnumScan` at `tableFuel` of the source length and prints both output hex strings and both token fingerprints.
- `php conformance-tableadv-proof/php_tableadv.php` runs PHP 8.5.4's Tableadv rule alone and prints the renumbered output hex.

| Comparison | Count |
|---|---|
| Strings | 185662 |
| DFS vs enumeration, output bytes differ | 14 |
| DFS vs enumeration, token fingerprint differs | 14 |
| DFS vs enumeration, parse state differs | 14 |
| Enumeration vs PHP 8.5.4, output bytes differ | 0 |
| One-byte deletions of the witness, parse state differs | 0 of 74 |

The 14 state diffs are all frames, and all 8421 free strings agree. Each of the 14 is `[[table]][[row]]` + one cell opener + `[[table"]][[/table]]"]]` + one cell closer + `[[/row]][[/table]]`:

1. `[[table]][[row]][[cell]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]` (the witness, 74 bytes)
2. `[[table]][[row]][[cell]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]`
3. `[[table]][[row]][[hcell]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]`
4. `[[table]][[row]][[hcell]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]`
5. `[[table]][[row]][[cell colspan="2"]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]`
6. `[[table]][[row]][[cell colspan="2"]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]`
7. `[[table]][[row]][[cell colspan="0"]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]`
8. `[[table]][[row]][[cell colspan="0"]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]`
9. `[[table]][[row]][[cell colspan="abc"]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]`
10. `[[table]][[row]][[cell colspan="abc"]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]`
11. `[[table]][[row]][[cell align="center"]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]`
12. `[[table]][[row]][[cell align="center"]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]`
13. `[[table]][[row]][[cell foo="1"]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]`
14. `[[table]][[row]][[cell foo="1"]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]`

On all 14, the enumeration's output bytes equal PHP's.

## Conformance-r45 family gate

Re-ran `sh conformance-r45/run_gates.sh` from this tree after `LAKE_JOBS=2 lake build` of the r41–r45 drivers. Family, both modes, over the 381-case corpus:

| Mode | TOTAL | PASS | EXCLUDED | FAIL |
|---|---|---|---|---|
| state | 381 | 381 | 0 | 0 |
| e2e | 381 | 381 | 0 | 0 |

The brief's adopted 379/2/0 is this same 381-case family with two cases excluded. Those two are `listblocks/lb37` and `tablex/x23-cell-with-triple-link`, the two family cases whose token table contains Freelink. In this tree `mirroredRenderRules` already names Freelink (and the rules through User). The r45 driver reads that shared list, so both cases render and match the PHP bytes: PASS, and the excluded count is 0. This lane did not edit `mirroredRenderRules` or any render function. The stored R4.5 log (`conformance-r45/gates-run.log`, `family-state-comparison.txt`) is the earlier 340/41/0 run, from a `--list-rules` list that ended at Tableadv.

The same rebuild moves the later blocks the same way, FAIL staying 0 except the prose e2e block, where `compare_render.py` has no `BatchTokenIdCounter` exclusion class: notes state and e2e 365/365/0/0, prose state 740/740/0/0, prose e2e 740/730/0/10. The ten prose-e2e failures are `dp-32`, `dp-33`, `dp-38`, `dp-45`, `ga-24`, `x22-coll-in-tab`, `x23-div-in-tab`, `x24-three-nested-divs`, `x25-tab-in-coll-in-div`, `x29-footnote-in-tab` (div-boundary bytes and tabview/gallery placeholder ids). The r41 notes regression is 365/365/0/0 in both modes; the r43 family regression is 1109/1109/0/0; the r44 family regression is 215/215/0/0. `run_gates.sh` exits 1 on the prose e2e block. The family comparisons themselves are FAIL 0.

PARTIAL: (obstruction plus empirical bound)
