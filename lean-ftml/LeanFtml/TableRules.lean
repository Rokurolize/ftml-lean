import LeanFtml.ListRules

/-!
# R3.10: the TABLE family — Table and Tableadv

Mirrors `Text_Wiki_Parse_Table::parse()` / `process()` and
`Text_Wiki_Parse_Tableadv::parse()` / `process()` of the validated
reference, in pipeline order (Table, then Tableadv), with the R2
stage's corrections in force (conformance-refphp/R2-TABLE.md and
the per-rule SECTION.md files under conformance-refphp/table/):
Table's correction C2 (a row with no content cell still owns one
empty cell, span one, the accumulated span discarded) and
Tableadv's corrections C1 through C8 (closer-driven header-ness,
the safe-attribute allowlist with `u-` id isolation, span rules,
strict structural validation, the quoted-`]]` table head,
structural whitespace discarded, and nested tables tokenized
before the outer split).

## Byte-form analysis (R3-SCOPE section 2)

Both rules run after thirty-three token-producing rules, so both
mirrors work on the byte-form view (`applyByteRule`), and
placeholders are ordinary bytes throughout:

* Table's pattern opens with a newline byte and `||`; a
  placeholder is `\xFF`, decimal digits, `\xFF`, so it contains
  no newline and no pipe: a placeholder can sit inside a row line
  (the normal case — an earlier rule's claim inside a cell) but
  can never start a row, end a row, or split a `||` separator,
  because the separator and the row boundaries are made of bytes
  no placeholder contains. Cell text is spliced back verbatim
  (after PHP trim), so a placeholder inside a cell survives as a
  placeholder; the sharp edge named in the brief, a cell
  separator split by a placeholder, cannot arise. The evidence is
  the byte inventory of `phBytes` together with the corpus: the
  interaction batteries carry footnote, span, and list claims
  inside cells (their placeholders land inside cell text and are
  compared byte-exactly).
* Tableadv's head group `[^\]]*` (and its quoted-string
  alternative) and the row/cell head groups `[^\]]*` admit any
  byte but `]`, so a placeholder can stand inside a head, where
  `getAttrs` then sees its bytes: a value spanning a placeholder
  is not valid UTF-8, so `normalizeValue`'s `/u` replacement
  fails there exactly as it does in the reference (the value
  normalizes to the empty string); a key carrying a placeholder
  byte fails the key grammar and is dropped. Bodies are lazy
  byte spans and routinely carry placeholders (a nested table's
  placeholder is the normal content of an outer cell); the
  nested-table recursion consumes a complete nested match —
  opener through its own closer — as one unit, and a placeholder
  is never split by the unit boundary because the recursion is
  over the byte form, where the placeholder is bytes like any
  other and the nested pattern's own bytes (`[[`, `]]`) are not
  among them.

Neither rule reads or writes document state (the R2 inventory
stands: no counter is observable in either family's token
options), so no compared-state extension is needed.

## The Table matcher

The pattern is `/\n((\|\|).*)(\n)(?!(\|\|))/Us`: a newline, a
group that opens with `||` and extends (dotall, lazy) to the
first following newline that is NOT followed by `||`, and that
newline. Laziness makes the end unique: the first newline after
the opening `||` whose next two bytes are not `||` ends the
match, and every internal newline of the group is therefore
followed by `||` (every row line opens with `||`). A table whose
last row line is unterminated at end of subject never matches,
and neither does a subject with no newline before the opening
`||` (the Prefilter's frame padding supplies both boundary
newlines on real documents). `tableMatchAt` is that scan stated
directly; `tableProcess` is the reference's explode-and-loop
process, including the token creation order (row and cell tokens
in row order, `table_start` and `table_end` claimed last, though
their placeholders wrap the rows in the replacement).

## The Tableadv matcher

The pattern is
`~\[\[table((?:"[^"]*"|[^\]])*)\]\]((?:(?R)|.)*?)\[\[/table\]\]~si`.
The head group's greedy run is tried longest first,
backtracking token by token (a token being a quoted string —
preferred — or one non-`]` byte; `advHeadRuns`), and the body
is tried shortest first, extending by one nested match in
preference to one byte. The reference does not keep a nested
match at its first parse: after a nested match's continuation
fails, it tries every later parse of that nested match, in
PCRE backtracking order, before taking the `.` alternative.
The repaired mirror does the same: `tableadvScanGo` uses
`tableadvEnumMatchFirst`, whose continuation-based
`tableadvEnumBody` / `tableadvEnumExtend` / `tableadvEnumHeads`
enumerate nested parses and stop at the first continuation
that accepts. `tableadvMatchFirst` / `tableadvBodyFirst` /
`tableadvDfsScanGo` / `tableadvDfsProcess` are retained as the
legacy first-parse search that F-TABLEADV-1 refuted: on
`tableadvWitness` its greedy quoted head consumes the outer
closer, its continuation fails, and it takes `.`, closing the
outer table at the `[[/table]]` inside the quotes, while the
enumeration's next nested parse stops at that quoted `]]` and
lets the outer closer succeed. `tableadv_dfs_ne_enum` (restated
in `TableadvEnum.lean`) records that divergence; the mirror's
agreement with the enumeration is the repaired invariant,
pinned by the fourteen witness-family frames in
`conformance-r310/`. The cost is stated honestly in
`REPORT-TABLEADV-FIX.md`: the enumeration can explore every
parse of a nested match, so a body holding k closed sibling
tables has 2^k parses ending at later closers; the mirror now
pays that cost rather than silently changing the answer. The
fuel bound below limits a single path, not the number of
paths. A match's body is a span of the subject, recovered
from the rest by `advBodyOf` where process() needs it. The
four mutual functions of this family (matcher, body, scanner,
process) share one fuel, sized by `tableFuel` so no path a
subject of the given length affords is cut off: along any one
backtracking or processing path, nesting descends at most
(length / 19 + 1) levels (a table match is at least the 19
bytes of `[[table]]` and `[[/table]]`), each level's byte
steps number at most the subject length, and the
non-consuming steps (match entry, body entry, process entry)
number at most four per byte consumed, for a path bound under
(n/19 + 1) * (5n + 4), which `(n + 1)^2 + 4n + 64` exceeds at
every n.

`tableadvProcess` reproduces the reference's process()
step for step, including its failure shape: the body is first
rescanned for nested tables (their tokens are claimed even when
the outer table then fails validation and returns its matched
text literally, leaving the nested tokens as orphans in the
table), the rows are extracted with the row grammar and the
residue must trim to empty, and each row's cells likewise; a row
that fails after earlier rows claimed their tokens leaves those
tokens claimed. Token creation order per row is the reference's:
every cell's start and end tokens first, then the row's start
and end; the table's start and end tokens are claimed after all
rows.
-/

namespace LeanFtml

/-! ## Shared helpers -/

/-- Claim a token with an explicit option map; returns the
    placeholder bytes to splice into the rewritten source and
    the extended table (the general form of `claimText`). -/
def claimTok (rule : String) (opts : OptMap) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  (phBytes toks.length, toks ++ [{ rule := rule, opts := opts }])

/-! ## Table -/

/-- The terminating-newline search of the Table pattern: scan
    the bytes after the leading `\n` (which open with the `||`
    the caller checked, accumulated reversed in `acc`); the
    match ends at the first newline not followed by `||`.
    Returns the group (the row lines) and the subject after
    the final newline. -/
def tableEndScan : List Nat → List Nat → Option (List Nat × List Nat)
  | [], _ => none
  | 10 :: rest, acc =>
      if rest.take 2 == [124, 124] then tableEndScan rest (10 :: acc)
      else some (acc.reverse, rest)
  | b :: rest, acc => tableEndScan rest (b :: acc)

/-- A Table match at the head of `src`: a newline, a group
    opening with `||`, and the terminating newline of
    `tableEndScan`. Returns (group 1, rest after the match). -/
def tableMatchAt (src : List Nat) : Option (List Nat × List Nat) :=
  match src with
  | 10 :: rest =>
      if rest.take 2 == [124, 124] then tableEndScan rest []
      else none
  | _ => none

/-- PHP `explode('||', s)`: split at every non-overlapping
    occurrence of the two-byte separator, empty parts kept,
    always at least one part. -/
def explodePipes (s : List Nat) : List (List Nat) :=
  go s [] [] (s.length + 1)
where
  go : List Nat → List Nat → List (List Nat) → Nat → List (List Nat)
    | _, cur, acc, 0 => (cur.reverse :: acc).reverse
    | [], cur, acc, _ + 1 => (cur.reverse :: acc).reverse
    | 124 :: 124 :: rest, cur, acc, fuel + 1 =>
        go rest [] (cur.reverse :: acc) fuel
    | b :: rest, cur, acc, fuel + 1 => go rest (b :: cur) acc fuel

/-- The alignment/header marker at the head of a raw cell: the
    first two bytes decide (`> `, `= `, `< `, `~ `), and are
    stripped when they match; anything else (including a cell
    shorter than two bytes) has no marker and keeps its bytes. -/
def cellMarker (cell : List Nat) : Option (List Char) × List Nat :=
  if cell.take 2 == [62, 32] then (some "right".toList, cell.drop 2)
  else if cell.take 2 == [61, 32] then (some "center".toList, cell.drop 2)
  else if cell.take 2 == [60, 32] then (some "left".toList, cell.drop 2)
  else if cell.take 2 == [126, 32] then (some "header".toList, cell.drop 2)
  else (none, cell)

/-- One row's inner cells (the explode parts between the first
    and the last), in order, carrying the span accumulator: an
    exactly-empty part adds one to the span and emits nothing;
    any other part is a content cell, claimed with its marker
    attribute and the accumulated span, its PHP-trimmed text
    spliced between the start and end placeholders, and the span
    reset to one. Returns the emitted bytes, the extended table,
    and whether any content cell was emitted. -/
def tableCells : List (List Nat) → Nat → Bool → List Nat →
    List TokenEntry → List Nat × List TokenEntry × Bool
  | [], _, has, out, toks => (out, toks, has)
  | cell :: rest, span, has, out, toks =>
      if cell.isEmpty then tableCells rest (span + 1) has out toks
      else
        let (attr, content) := cellMarker cell
        let attrVal : OptVal := match attr with
          | some a => OptVal.str a
          | none => OptVal.null
        let (ph1, toks1) := claimTok "Table"
          [("type".toList, OptVal.str "cell_start".toList),
           ("attr".toList, attrVal),
           ("span".toList, OptVal.int (span : Int))] toks
        let (ph2, toks2) := claimTok "Table"
          [("type".toList, OptVal.str "cell_end".toList),
           ("attr".toList, attrVal),
           ("span".toList, OptVal.int (span : Int))] toks1
        tableCells rest 1 true
          (out ++ ph1 ++ trimBytes content ++ ph2) toks2

/-- The rows of one table, in order: a `row_start` claim, the
    cells, correction C2's single empty cell (span one) when the
    row produced no content cell, and a `row_end` claim; the
    column count accumulates the per-row maximum of (parts - 2),
    the reference's `last - 1`. Returns the emitted bytes, the
    extended table, and the column count. -/
def tableRows : List (List Nat) → List Nat → List TokenEntry → Nat →
    List Nat × List TokenEntry × Nat
  | [], out, toks, cols => (out, toks, cols)
  | row :: rest, out, toks, cols =>
      let (phR, toks1) := claimTok "Table"
        [("type".toList, OptVal.str "row_start".toList)] toks
      let cells := explodePipes row
      let last := cells.length - 1
      let cols' := max cols (last - 1)
      let inner := (cells.drop 1).take (last - 1)
      let (cellsOut, toks2, has) := tableCells inner 1 false [] toks1
      let (cellsOut', toks3) :=
        if has then (cellsOut, toks2)
        else
          let (p1, t1) := claimTok "Table"
            [("type".toList, OptVal.str "cell_start".toList),
             ("attr".toList, OptVal.null),
             ("span".toList, OptVal.int 1)] toks2
          let (p2, t2) := claimTok "Table"
            [("type".toList, OptVal.str "cell_end".toList),
             ("attr".toList, OptVal.null),
             ("span".toList, OptVal.int 1)] t1
          (cellsOut ++ p1 ++ p2, t2)
      let (phRE, toks4) := claimTok "Table"
        [("type".toList, OptVal.str "row_end".toList)] toks3
      tableRows rest (out ++ phR ++ cellsOut' ++ phRE) toks4 cols'

/-- process() for one Table match: the rows are exploded on
    newlines and claimed in order; `table_start` (with the row
    and column counts) and `table_end` are claimed after every
    row token, though their placeholders wrap the rows in the
    replacement, which is `"\n"`, the start placeholder, the
    rows, the end placeholder, and `"\n\n"`. -/
def tableProcess (g1 : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  let rows := splitBytes 10 g1
  let (rowsOut, toks1, cols) := tableRows rows [] toks 0
  let (phS, toks2) := claimTok "Table"
    [("type".toList, OptVal.str "table_start".toList),
     ("rows".toList, OptVal.int (rows.length : Int)),
     ("cols".toList, OptVal.int (cols : Int))] toks1
  let (phE, toks3) := claimTok "Table"
    [("type".toList, OptVal.str "table_end".toList)] toks2
  ([10] ++ phS ++ rowsOut ++ phE ++ [10, 10], toks3)

/-- The Table rule's scanner: preg_replace_callback semantics
    over the byte form — the leftmost match wins, its process()
    replacement is spliced in and never rescanned, and the scan
    continues after the matched text. The step fuel is the
    subject length plus one; every step consumes at least one
    byte (a match consumes at least the four of `\n||\n`). -/
def tableScan (src : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  go src toks (src.length + 1)
where
  go : List Nat → List TokenEntry → Nat → List Nat × List TokenEntry
    | [], toks, _ => ([], toks)
    | src, toks, 0 => (src, toks)
    | src@(b :: rest), toks, fuel + 1 =>
        match tableMatchAt src with
        | some (g1, rest') =>
            let (rep, toks1) := tableProcess g1 toks
            let (tail, toks2) := go rest' toks1 fuel
            (rep ++ tail, toks2)
        | none =>
            let (tail, toks1) := go rest toks fuel
            (b :: tail, toks1)

/-- The Table rule mirror. -/
def tableRule (st : ParseState) : ParseState :=
  applyByteRule st tableScan

/-! ## Tableadv: the attribute machinery -/

/-- Tableadv's `normalizeValue`: strip the control bytes
    (0x00–0x1F and 0x7F), collapse each run of Unicode
    whitespace to one space (the `/u` replacement; a subject
    that is not valid UTF-8 — in this pipeline, a value spanning
    a placeholder — makes the reference's preg_replace return
    null, and the value comes out empty), then PHP-trim. The
    collapse reuses the Contain stage's Unicode whitespace set
    and run collapse over the decoded characters. -/
def normalizeValueAdv (v : List Nat) : List Nat :=
  let stripped := v.filter (fun b => !(b < 0x20 || b == 0x7F))
  if utf8Valid stripped then
    trimBytes ((collapseWsU (utf8Decode stripped)).flatMap utf8Bytes)
  else []

/-- Tableadv's `isolateId` on the raw value: the empty value
    isolates to itself; a value already opening with `u-` is
    just whitespace-normalized; any other value takes the `u-`
    prefix, with a space after it when the raw value led with
    (byte-mode) whitespace. The caller applies `normalizeValue`
    to the result a second time, as the reference does. -/
def isolateIdAdv (v : List Nat) : List Nat :=
  if v.isEmpty then []
  else
    let collapsed := normalizeValueAdv v
    if v.take 2 == [117, 45] then collapsed
    else
      (if isWsByte (v.headD 0) then litBytes "u- " else litBytes "u-") ++
        collapsed

/-- The Wikitext safe-attribute allowlist of Tableadv.php
    (lower-case names only at this block level). `align` is not on
    the live allowlist (REFCORR3 C-R45-3). -/
def safeAttrNames : List (List Nat) :=
  ["accept", "alt", "autocapitalize", "autoplay",
   "background", "bgcolor", "border", "buffered", "checked",
   "cite", "class", "cols", "colspan", "contenteditable",
   "controls", "coords", "datetime", "decoding", "default",
   "dir", "dirname", "disabled", "download", "draggable", "for",
   "form", "frameborder", "headers", "height", "hidden", "high",
   "href", "hreflang", "id", "inputmode", "ismap", "itemprop",
   "kind", "label", "lang", "list", "loop", "low", "max",
   "maxlength", "min", "minlength", "multiple", "muted", "name",
   "optimum", "pattern", "placeholder", "poster", "preload",
   "readonly", "required", "reversed", "role", "rows", "rowspan",
   "scope", "selected", "shape", "size", "sizes", "span",
   "spellcheck", "src", "srclang", "start", "step", "style",
   "tabindex", "target", "title", "translate", "type", "usemap",
   "value", "width", "wrap"].map litBytes

/-- Tableadv's `isSafeAttr`: any `data-` name, or a name on the
    allowlist. Live drops `aria-*` attributes on advanced tables
    (REFCORR3 C-R45-2 / C-SUSPECT-LISTTABLE-8), so there is no
    `aria-` branch here. -/
def isSafeAttrB (k : List Nat) : Bool :=
  if (litBytes "data-").isPrefixOf k then true
  else safeAttrNames.contains k

/-- The block-head key grammar, `^[a-z][a-z0-9-]*$`, applied
    case-sensitively: an upper-case byte anywhere drops the
    attribute rather than folding. -/
def advKeyOk (k : List Nat) : Bool :=
  match k with
  | [] => false
  | b :: rest =>
      (97 ≤ b && b ≤ 122) && rest.all (fun x =>
        (97 ≤ x && x ≤ 122) || (48 ≤ x && x ≤ 57) || x == 45)

/-- REFCORR9 C-R5B-P3-2: after the REFCORR8 fold, live admits `_` in a
    data-* key while the general block-head grammar still rejects it. This
    is `^data-[a-z0-9_-]*$` on the folded key, byte for byte. The `data-`
    prefix must already be lower case, so an upper-case `DATA-` prefix never
    reaches this gate and is still dropped by `advKeyOk`. Leaving `advKeyOk`
    itself unchanged preserves the CoverageTable key-shape pin. -/
def advDataKeyOk (k : List Nat) : Bool :=
  let p := litBytes "data-"
  p.isPrefixOf k &&
    (k.drop p.length).all (fun x =>
      (97 ≤ x && x ≤ 122) || (48 ≤ x && x ≤ 57) || x == 45 || x == 95)

/-- Which key grammar applies: the relaxed data-* one only to an already
    lower-case `data-` prefix, otherwise the settled general one. -/
def advAttrKeyOk (k : List Nat) : Bool :=
  if (litBytes "data-").isPrefixOf k then advDataKeyOk k else advKeyOk k

/-- REFCORR8 C-R5-P3-2: PHP `buildAttrs` folds a data-* key to lower case
    before the key grammar and allowlist run. The prefix must already be
    the exact lower-case `data-`, exactly as in the List and Div siblings;
    other keys keep their authored case and an upper-case byte still drops
    them. This definition leaves `advKeyOk` itself untouched, so the
    CoverageTable key-shape pin is unaffected. -/
def foldDataKeyAdv (k : List Nat) : List Nat :=
  if (litBytes "data-").isPrefixOf k then lowerBytes k else k

/-- One parsed attribute pair through Tableadv's `buildAttrs`
    filter for the given owner (`"cell"`, `"row"`, or
    `"table"`): a data-* key folded to lower case first
    (REFCORR8 C-R5-P3-2), then the key grammar and the safe-attribute test,
    `title` and `hidden` always dropped, spans dropped off
    cells, an empty raw value dropped, a cell span of exactly
    `0` dropped, the value normalized (`id` through the
    isolation first), and a value that normalizes to empty
    dropped for class, id, role, style, and type but kept for
    the rest. Survivors are assigned with PHP array semantics. -/
def advAttrStep (owner : String)
    (acc : List (List Nat × List Nat)) (kv : List Nat × List Nat) :
    List (List Nat × List Nat) :=
  let k := foldDataKeyAdv kv.1
  let v := kv.2
  if !advAttrKeyOk k then acc
  else if !isSafeAttrB k || k == litBytes "title" ||
      k == litBytes "hidden" then acc
  else if owner != "cell" &&
      (k == litBytes "colspan" || k == litBytes "rowspan") then acc
  else if v.isEmpty then acc
  else if owner == "cell" &&
      (k == litBytes "colspan" || k == litBytes "rowspan") &&
      v == litBytes "0" then acc
  else
    let normalized :=
      if k == litBytes "id" then normalizeValueAdv (isolateIdAdv v)
      else normalizeValueAdv v
    if normalized.isEmpty &&
        [litBytes "class", litBytes "id", litBytes "role",
         litBytes "style", litBytes "type"].contains k then acc
    else omSetB acc k normalized

/-- Insert one attribute into a key-sorted list (the order
    `ksort` leaves; keys are unique after the filter's PHP-array
    assignments, so insertion order among equals never arises).
    The byte order is the Contain stage's `bytesLe`. -/
def insertAttrB (kv : List Nat × List Nat) :
    List (List Nat × List Nat) → List (List Nat × List Nat)
  | [] => [kv]
  | kv' :: rest =>
      if bytesLe kv.1 kv'.1 then kv :: kv' :: rest
      else kv' :: insertAttrB kv rest

/-- Tableadv's `buildAttrs`: `getAttrs` over the trimmed head
    text, the per-pair filter in parse order, and the final
    key sort. -/
def buildAttrsAdv (text : List Nat) (owner : String) :
    List (List Nat × List Nat) :=
  let parsed := getAttrsBytes (trimBytes text)
  let kept := parsed.foldl (advAttrStep owner) []
  kept.foldr insertAttrB []

/-- The token-option form of a built attribute list: keys and
    values cross as decoded text. A surviving value is always
    valid UTF-8 with no placeholder byte (a placeholder-spanning
    value normalized to the empty string in `normalizeValueAdv`,
    and keys that survive the key grammar are pure ASCII), so
    the plain string form is the value's only form. -/
def attrsOpt (attrs : List (List Nat × List Nat)) : OptVal :=
  OptVal.map (attrs.map (fun (k, v) =>
    (utf8Decode k, OptVal.str (utf8Decode v))))

/-! ## Tableadv: the row and cell grammars (on a scanned body) -/

/-- `preg_match_all` with its `preg_replace` residue, for a head
    matcher that returns a payload and the rest after the match:
    matches are sought left to right, non-overlapping; a failed
    position contributes its first byte to the residue and the
    search advances by one byte. -/
def advMatchAll {α : Type} (matchAt : List Nat → Option (α × List Nat))
    (src : List Nat) : List α × List Nat :=
  go src (src.length + 1)
where
  go : List Nat → Nat → List α × List Nat
    | [], _ => ([], [])
    | src, 0 => ([], src)
    | src@(b :: rest), fuel + 1 =>
        match matchAt src with
        | some (a, rest') =>
            let (ms, res) := go rest' fuel
            (a :: ms, res)
        | none =>
            let (ms, res) := go rest fuel
            (ms, b :: res)

/-- A row match at the head of `src` (the row grammar
    `\[\[row([^\]]*)\]\](.*?)\[\[/row\]\]`, case-insensitive):
    the head is the maximal non-`]` run after `[[row` and must
    be followed by `]]`; the body is lazy to the first
    `[[/row]]`. Returns ((head, body), rest). -/
def advRowMatch (src : List Nat) :
    Option ((List Nat × List Nat) × List Nat) :=
  match matchLitCI (litBytes "[[row") src with
  | none => none
  | some r1 =>
      let head := r1.takeWhile (fun b => b != 93)
      match r1.drop head.length with
      | 93 :: 93 :: r2 =>
          match findSubCI (litBytes "[[/row]]") r2 with
          | some i =>
              some ((head, r2.take i), r2.drop (i + (litBytes "[[/row]]").length))
          | none => none
      | _ => none

/-- The first cell closer in `src` (`[[/cell]]` or `[[/hcell]]`,
    matched case-insensitively as the pattern's `/i` flag
    requires; the two are disjoint at any position, the first
    letter differing): returns the body before it, the closer's
    name EXACTLY AS AUTHORED (so the case-sensitive header test
    in `advCellsGo` sees `[[/HCELL]]` as a plain cell, REFCORR3
    C-SUSPECT-LISTTABLE-2), and the rest after it. -/
def advCellCloser : List Nat → Option (List Nat × List Nat × List Nat)
  | [] => none
  | src@(b :: rest) =>
      match matchLitCI (litBytes "[[/cell]]") src with
      | some r =>
          some ([], (src.drop 3).takeWhile (fun x => x != 93), r)
      | none =>
          match matchLitCI (litBytes "[[/hcell]]") src with
          | some r =>
              some ([], (src.drop 3).takeWhile (fun x => x != 93), r)
          | none =>
              (advCellCloser rest).map (fun (body, cl, r) =>
                (b :: body, cl, r))

/-- A cell match at the head of `src` (the cell grammar
    `\[\[(cell|hcell)([^\]]*)\]\](.*?)\[\[/(cell|hcell)\]\]`,
    case-insensitive): either opener name, the head the maximal
    non-`]` run followed by `]]`, the body lazy to the first
    closer of either name. Header-ness is the closer's alone
    (correction C1), so the opener's name is not recorded.
    Returns ((head, body, closer), rest). -/
def advCellMatch (src : List Nat) :
    Option ((List Nat × List Nat × List Nat) × List Nat) :=
  match matchLitCI (litBytes "[[") src with
  | none => none
  | some r0 =>
      let afterName : Option (List Nat) :=
        match matchLitCI (litBytes "cell") r0 with
        | some r => some r
        | none => matchLitCI (litBytes "hcell") r0
      match afterName with
      | none => none
      | some r1 =>
          let head := r1.takeWhile (fun b => b != 93)
          match r1.drop head.length with
          | 93 :: 93 :: r2 =>
              match advCellCloser r2 with
              | some (body, closer, r3) => some ((head, body, closer), r3)
              | none => none
          | _ => none

/-! ## Tableadv: the head-group enumeration -/

/-- Enumerate the parses of the table head group
    `((?:"[^"]*"|[^\]])*)` at the head of `src`, as (run, rest)
    pairs in PCRE priority order: consume-more before stopping,
    and at each position the quoted-string token before the
    single byte. A token is a quoted string (`"`, a run of
    non-quote bytes, `"`) or one byte other than `]`; a quote
    with no closing quote is available only as a single byte.
    The fuel bounds the depth of any one backtracking path;
    every token consumes at least one byte, so the input length
    plus one never cuts a path off. -/
def advHeadRuns (src : List Nat) : List (List Nat × List Nat) :=
  go src (src.length + 1)
where
  go : List Nat → Nat → List (List Nat × List Nat)
    | [], _ => [([], [])]
    | src, 0 => [([], src)]
    | src@(b :: rest), fuel + 1 =>
        let quoted : List (List Nat × List Nat) :=
          if b == 34 then
            let inner := rest.takeWhile (fun x => x != 34)
            match rest.drop inner.length with
            | 34 :: rest' =>
                (go rest' fuel).map (fun (r, rr) =>
                  (src.take (inner.length + 2) ++ r, rr))
            | _ => []
          else []
        let single : List (List Nat × List Nat) :=
          if b == 93 then []
          else (go rest fuel).map (fun (r, rr) => (b :: r, rr))
        quoted ++ single ++ [([], src)]

/-! ## Tableadv: the reference search (continued by the mirror) -/

mutual

/-- One body completion of `((?:(?R)|.)*?)[[/table]]`, in PCRE's
    lazy order: the closer at this position first, and if the
    continuation `k` rejects it, a longer body (another nested
    parse, else one byte) and then `k` again. -/
def tableadvEnumBody {α : Type} (src : List Nat)
    (k : List Nat → Option α) : Nat → Option α
  | 0 => none
  | fuel + 1 =>
      match matchLitCI (litBytes "[[/table]]") src with
      | some r =>
          match k r with
          | some a => some a
          | none => tableadvEnumExtend src k fuel
      | none => tableadvEnumExtend src k fuel
  termination_by fuel => (fuel, 0)

/-- The backtracking extension of a body: every parse of a nested
    table at this position, then one byte. -/
def tableadvEnumExtend {α : Type} (src : List Nat)
    (k : List Nat → Option α) : Nat → Option α
  | 0 => none
  | fuel + 1 =>
      match tableadvEnumMatch src
          (fun _ r => tableadvEnumBody r k fuel) fuel with
      | some a => some a
      | none =>
          match src with
          | [] => none
          | _ :: rest => tableadvEnumBody rest k fuel
  termination_by fuel => (fuel, 0)

/-- Head candidates in `advHeadRuns` order. The list measure
    decreases; fuel is not spent per head. -/
def tableadvEnumHeads {α : Type}
    (k : List Nat → List Nat → Option α) :
    Nat → List (List Nat × List Nat) → Option α
  | _, [] => none
  | fuel, (head, r2) :: more =>
      match r2 with
      | 93 :: 93 :: r3 =>
          match tableadvEnumBody r3 (fun r4 => k head r4) fuel with
          | some a => some a
          | none => tableadvEnumHeads k fuel more
      | _ => tableadvEnumHeads k fuel more
  termination_by fuel heads => (fuel, heads.length + 1)

/-- Every parse of the whole Tableadv pattern at the head of
    `src`, fed to `k` in PCRE order, stopping at the first `k`
    that accepts. The top-level call uses `k` that always
    accepts, so the result is the pattern's first match. -/
def tableadvEnumMatch {α : Type} (src : List Nat)
    (k : List Nat → List Nat → Option α) : Nat → Option α
  | 0 => none
  | fuel + 1 =>
      match matchLitCI (litBytes "[[table") src with
      | none => none
      | some r1 => tableadvEnumHeads k fuel (advHeadRuns r1)
  termination_by fuel => (fuel, 0)

end

/-- The reference pattern's first match at the head of `src`:
    `(head, rest after the closer)`. -/
def tableadvEnumMatchFirst (src : List Nat) (fuel : Nat) :
    Option (List Nat × List Nat) :=
  tableadvEnumMatch src (fun head rest => some (head, rest)) fuel

/-- One row's cells, in order: the start token (with the
    closer-driven header flag and the built attributes), the
    content — PHP-trimmed, or wrapped in blank lines when the
    authored body carries a blank line, so paragraph
    boundaries survive — and the end token. The authored
    closer name is compared byte-for-byte against lower-case
    `hcell`, so an upper-case `[[/HCELL]]` yields header=false
    (REFCORR3 C-SUSPECT-LISTTABLE-2). -/
def advCellsGo : List (List Nat × List Nat × List Nat) →
    List TokenEntry → List Nat × List TokenEntry
  | [], toks => ([], toks)
  | (chead, cbody, closer) :: rest, toks =>
      let isHeader := closer == litBytes "hcell"
      let content :=
        if (findSub (litBytes "\n\n") cbody).isSome then
          [10, 10] ++ trimBytes cbody ++ [10, 10]
        else trimBytes cbody
      let (phCS, toks1) := claimTok "Tableadv"
        [("type".toList, OptVal.str "cellStart".toList),
         ("header".toList, OptVal.bool isHeader),
         ("attrs".toList, attrsOpt (buildAttrsAdv chead "cell"))]
        toks
      let (phCE, toks2) := claimTok "Tableadv"
        [("type".toList, OptVal.str "cellEnd".toList),
         ("header".toList, OptVal.bool isHeader)] toks1
      let (tail, toks3) := advCellsGo rest toks2
      (phCS ++ content ++ phCE ++ tail, toks3)

/-- The rows of one table, in order, claiming as the
    reference's loop does: a row whose cells fail validation
    fails the whole process (`none`), with the tokens claimed
    so far — this row's predecessors and the nested scan's —
    kept in the returned table. -/
def advRowsGo : List (List Nat × List Nat) → List TokenEntry →
    Option (List Nat) × List TokenEntry
  | [], toks => (some [], toks)
  | (rhead, rbody) :: rest, toks =>
      let (cells, cres) := advMatchAll advCellMatch rbody
      if cells.isEmpty || !(trimBytes cres).isEmpty then (none, toks)
      else
        let (cellsOut, toks1) := advCellsGo cells toks
        let (phRS, toks2) := claimTok "Tableadv"
          [("type".toList, OptVal.str "rowStart".toList),
           ("attrs".toList, attrsOpt (buildAttrsAdv rhead "row"))]
          toks1
        let (phRE, toks3) := claimTok "Tableadv"
          [("type".toList, OptVal.str "rowEnd".toList)] toks2
        match advRowsGo rest toks3 with
        | (some tail, toks4) =>
            (some (phRS ++ cellsOut ++ phRE ++ tail), toks4)
        | (none, toks4) => (none, toks4)

/-- Fuel for the Tableadv family's mutual recursion on a subject
    of length `n`: a bound on the depth of any one backtracking
    or processing path (see the file header's accounting), which
    `(n + 1)^2 + 4n + 64` exceeds at every n. -/
def tableFuel (n : Nat) : Nat := (n + 1) * (n + 1) + 4 * n + 64

/-- The body span of a Tableadv match: given the subject, the
    head group, and the rest after the closer, the body is the
    span between the opener (`[[table`, the head, and `]]`,
    9 + head.length bytes) and the closer (`[[/table]]`, 10
    bytes) inside the matched prefix. -/
def advBodyOf (src head rest : List Nat) : List Nat :=
  let m := src.length - rest.length
  (src.drop (9 + head.length)).take (m - 19 - head.length)

/-! ## Tableadv: the legacy depth-first search (not the mirror)

    These four functions are the first-parse search that F-TABLEADV-1
    refuted. They are retained solely so the counterexample and the
    conformance pins can name the old behavior; the mirror below
    uses `tableadvEnumMatchFirst`, not `tableadvMatchFirst`. -/

mutual

/-- Find the whole Tableadv pattern's first match at the head
    of `src`, in PCRE priority order, keeping a nested match at
    its first parse only: the result is (head, rest after the
    closer); the body is the span `advBodyOf` recovers. The head
    candidates come from `advHeadRuns` in its order, each required
    to be followed by `]]`; the first head whose body search
    succeeds is the match. This is the legacy search of
    F-TABLEADV-1, not the mirror's search. -/
def tableadvMatchFirst (src : List Nat) :
    Nat → Option (List Nat × List Nat)
  | 0 => none
  | fuel + 1 =>
      match matchLitCI (litBytes "[[table") src with
      | none => none
      | some r1 =>
          (advHeadRuns r1).findSome? (fun (head, r2) =>
            match r2 with
            | 93 :: 93 :: r3 =>
                (tableadvBodyFirst r3 fuel).map (fun r4 => (head, r4))
            | _ => none)

/-- Find the body pattern's first completion at the head of
    `src`, in PCRE priority order, as the rest after the
    closer: stop at the `[[/table]]` closer first (the body is
    lazy), then extend by one nested match (its first parse
    only — the refuted shortcut of F-TABLEADV-1), then by one
    byte. This helper belongs to the legacy search only. -/
def tableadvBodyFirst (src : List Nat) : Nat → Option (List Nat)
  | 0 => none
  | fuel + 1 =>
      match matchLitCI (litBytes "[[/table]]") src with
      | some r => some r
      | none =>
          match (tableadvMatchFirst src fuel).bind
              (fun (_, r) => tableadvBodyFirst r fuel) with
          | some rr => some rr
          | none =>
              match src with
              | [] => none
              | _ :: rest => tableadvBodyFirst rest fuel

/-- The legacy depth-first scanner: preg_replace_callback
    semantics with `tableadvMatchFirst` as its match search.
    Retained for the F-TABLEADV-1 counterexample only. -/
def tableadvDfsScanGo (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => (src, toks)
  | fuel + 1 =>
      match src with
      | [] => ([], toks)
      | b :: rest =>
          match tableadvMatchFirst src fuel with
          | some (head, rest') =>
              let matched := src.take (src.length - rest'.length)
              let body := advBodyOf src head rest'
              let (rep, toks1) :=
                tableadvDfsProcess head body matched toks fuel
              let (tail, toks2) := tableadvDfsScanGo rest' toks1 fuel
              (rep ++ tail, toks2)
          | none =>
              let (tail, toks1) := tableadvDfsScanGo rest toks fuel
              (b :: tail, toks1)

/-- process() for the legacy depth-first scanner. Its nested
    pass uses that scanner, so the legacy parse states stay
    reproducible for the refuted-search evidence. -/
def tableadvDfsProcess (head body matched : List Nat)
    (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => (matched, toks)
  | fuel + 1 =>
      let (body', toks1) := tableadvDfsScanGo body toks fuel
      let (rows, residue) := advMatchAll advRowMatch body'
      if rows.isEmpty then (matched, toks1)
      else if !(trimBytes residue).isEmpty then (matched, toks1)
      else
        match advRowsGo rows toks1 with
        | (none, toksF) => (matched, toksF)
        | (some rowsOut, toks2) =>
            let (phS, toks3) := claimTok "Tableadv"
              [("type".toList, OptVal.str "start".toList),
               ("attrs".toList, attrsOpt (buildAttrsAdv head "table"))]
              toks2
            let (phE, toks4) := claimTok "Tableadv"
              [("type".toList, OptVal.str "end".toList)] toks3
            (phS ++ rowsOut ++ phE, toks4)

end

/-! ## Tableadv: the repaired mirror

    F-TABLEADV-1 is discharged by adopting the reference
    enumeration as the mirror's own search. The scanner below is
    `tableadvDfsScanGo` with `tableadvEnumMatchFirst` in place of
    `tableadvMatchFirst`; `tableadvProcess` is unchanged in
    signature, token shapes, and body, and its nested pass uses
    this (repaired) scanner. -/

mutual

/-- The Tableadv scanner: preg_replace_callback semantics over
    the byte form. At each position the pattern's first match in
    the reference enumeration is the match; its process()
    replacement is spliced in and never rescanned, and the scan
    continues after the matched text. The scanner is also
    process()'s nested-table pass over a body, which is why it
    and `tableadvProcess` are mutual. -/
def tableadvScanGo (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => (src, toks)
  | fuel + 1 =>
      match src with
      | [] => ([], toks)
      | b :: rest =>
          match tableadvEnumMatchFirst src fuel with
          | some (head, rest') =>
              let matched := src.take (src.length - rest'.length)
              let body := advBodyOf src head rest'
              let (rep, toks1) :=
                tableadvProcess head body matched toks fuel
              let (tail, toks2) := tableadvScanGo rest' toks1 fuel
              (rep ++ tail, toks2)
          | none =>
              let (tail, toks1) := tableadvScanGo rest toks fuel
              (b :: tail, toks1)

/-- process() for one Tableadv match. The body is first
    rescanned for nested tables (the tokens they claim stay
    claimed whatever happens next); the rows are then extracted
    from the rescanned body, and any validation failure — no
    rows, non-row residue, a row with no cells, or non-cell
    residue in a row — returns the matched text literally, with
    whatever tokens the nested scan and any earlier rows
    claimed left in the table as orphans. On success the claims
    are, per row, the cells' start and end tokens, then the
    row's start and end, and after all rows the table's start
    and end; the replacement is the start placeholder, the
    rows, and the end placeholder, with no added newlines. -/
def tableadvProcess (head body matched : List Nat)
    (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => (matched, toks)
  | fuel + 1 =>
      let (body', toks1) := tableadvScanGo body toks fuel
      let (rows, residue) := advMatchAll advRowMatch body'
      if rows.isEmpty then (matched, toks1)
      else if !(trimBytes residue).isEmpty then (matched, toks1)
      else
        match advRowsGo rows toks1 with
        | (none, toksF) => (matched, toksF)
        | (some rowsOut, toks2) =>
            let (phS, toks3) := claimTok "Tableadv"
              [("type".toList, OptVal.str "start".toList),
               ("attrs".toList, attrsOpt (buildAttrsAdv head "table"))]
              toks2
            let (phE, toks4) := claimTok "Tableadv"
              [("type".toList, OptVal.str "end".toList)] toks3
            (phS ++ rowsOut ++ phE, toks4)

end

/-- The Tableadv rule mirror: the scanner over the byte form,
    with the family fuel sized by the subject. -/
def tableadvRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    tableadvScanGo src toks (tableFuel src.length))

/-! ## Worked examples (the stage's theorems)

    Small closed computations in the earlier stages' style: a
    Table match and a one-row Table process, and the Tableadv
    attribute filter exercised pair by pair on literal pairs
    (its keep-with-isolation, its always-dropped names, its
    owner-gated spans, and its zero-span drop). The family's
    whole-rule evidence is the exhaustive conformance of the
    stage corpus and fuzz differentials: the Tableadv scanner's
    backtracking search does not reduce in the kernel at
    document scale, so no whole-rule worked example is stated
    for it (the same reason the report gives for characterizing
    this family by conformance rather than by theorems). -/

theorem tableMatchAt_example :
    tableMatchAt (litBytes "\n|| a ||\n") =
      some (litBytes "|| a ||", []) := rfl

theorem tableProcess_example :
    tableProcess (litBytes "|| a ||") [] =
      ([10] ++ phBytes 4 ++ phBytes 0 ++ phBytes 1 ++ litBytes "a" ++
        phBytes 2 ++ phBytes 3 ++ phBytes 5 ++ [10, 10],
       [{ rule := "Table", opts :=
          [("type".toList, OptVal.str "row_start".toList)] },
        { rule := "Table", opts :=
          [("type".toList, OptVal.str "cell_start".toList),
           ("attr".toList, OptVal.null),
           ("span".toList, OptVal.int 1)] },
        { rule := "Table", opts :=
          [("type".toList, OptVal.str "cell_end".toList),
           ("attr".toList, OptVal.null),
           ("span".toList, OptVal.int 1)] },
        { rule := "Table", opts :=
          [("type".toList, OptVal.str "row_end".toList)] },
        { rule := "Table", opts :=
          [("type".toList, OptVal.str "table_start".toList),
           ("rows".toList, OptVal.int 1),
           ("cols".toList, OptVal.int 1)] },
        { rule := "Table", opts :=
          [("type".toList, OptVal.str "table_end".toList)] }]) := rfl

theorem advAttrStep_id_example :
    advAttrStep "cell" [] (litBytes "id", litBytes "x") =
      [(litBytes "id", litBytes "u-x")] := rfl

theorem advAttrStep_title_example :
    advAttrStep "cell" [] (litBytes "title", litBytes "t") = [] := rfl

theorem advAttrStep_span_owner_example :
    advAttrStep "row" [] (litBytes "colspan", litBytes "2") = [] := rfl

theorem advAttrStep_span_zero_example :
    advAttrStep "cell" [] (litBytes "colspan", litBytes "0") = [] := rfl

theorem advAttrStep_data_example :
    advAttrStep "cell" [] (litBytes "data-y", litBytes "2") =
      [(litBytes "data-y", litBytes "2")] := rfl

/-- REFCORR8 C-R5-P3-2: `data-Foo` survives with its key folded to
    `data-foo`, matching the cached live table head. -/
theorem adv_data_key_upper_folded :
    foldDataKeyAdv (litBytes "data-Foo") = litBytes "data-foo" := rfl

theorem adv_attr_step_upper_data_example :
    advAttrStep "table" [] (litBytes "data-Foo", litBytes "UP") =
      [(litBytes "data-foo", litBytes "UP")] := rfl

/-- The upper-case prefix and the upper-case non-data keys stay dropped. -/
theorem adv_attr_step_upper_prefix_data_dropped :
    advAttrStep "table" [] (litBytes "DATA-foo", litBytes "x") = [] := rfl

theorem adv_attr_step_upper_class_dropped :
    advAttrStep "table" [] (litBytes "CLASS", litBytes "x") = [] := rfl

/-- REFCORR9 C-R5B-P3-2: `data-Foo_Bar` folds to `data-foo_bar` and the
    underscore survives only the data-* grammar, matching the cached live
    table head. -/
theorem adv_data_key_underscore_folded :
    foldDataKeyAdv (litBytes "data-Foo_Bar") = litBytes "data-foo_bar" := rfl

theorem adv_data_key_underscore_ok :
    advAttrKeyOk (litBytes "data-foo_bar") = true := rfl

theorem adv_attr_step_data_underscore_example :
    advAttrStep "table" [] (litBytes "data-Foo_Bar", litBytes "UB") =
      [(litBytes "data-foo_bar", litBytes "UB")] := rfl

/-- The general grammar still rejects the underscore; only the data-* gate
    admits it, so the CoverageTable `tbl_key_shape` pin is unchanged. -/
theorem adv_key_ok_underscore_still_false :
    advKeyOk (litBytes "data-foo_bar") = false := rfl

theorem adv_attr_step_upper_prefix_underscore_dropped :
    advAttrStep "table" [] (litBytes "DATA-Foo_Bar", litBytes "x") = [] := rfl

theorem adv_attr_step_dot_data_dropped :
    advAttrStep "table" [] (litBytes "data-foo.bar", litBytes "x") = [] := rfl

/-- REFCORR3 C-R45-2 / C-R45-3: `align` and `aria-*` are not safe
advanced-table attributes on live. -/
theorem adv_align_and_aria_dropped :
    !isSafeAttrB (litBytes "align") &&
    !isSafeAttrB (litBytes "aria-label") := rfl

theorem adv_attr_step_align_dropped :
    advAttrStep "cell" [] (litBytes "align", litBytes "center") = [] := rfl

theorem adv_attr_step_aria_dropped :
    advAttrStep "cell" [] (litBytes "aria-label", litBytes "l") = [] := rfl

/-- REFCORR3 C-SUSPECT-LISTTABLE-2: the closer name is preserved
as authored, so `[[/HCELL]]` is a plain cell rather than a header. -/
theorem adv_cell_closer_authored_case :
    advCellCloser (litBytes "X[[/HCELL]]Y") =
      some (litBytes "X", litBytes "HCELL", litBytes "Y") := rfl

theorem adv_cells_uppercase_closer_plain :
    advCellsGo [(litBytes "", litBytes "X", litBytes "HCELL")] [] =
      (phBytes 0 ++ litBytes "X" ++ phBytes 1,
       [{ rule := "Tableadv", opts :=
           [("type".toList, OptVal.str "cellStart".toList),
            ("header".toList, OptVal.bool false),
            ("attrs".toList, OptVal.map [])] },
         { rule := "Tableadv", opts :=
           [("type".toList, OptVal.str "cellEnd".toList),
            ("header".toList, OptVal.bool false)] }]) := rfl

/-- The lower-case closer control still yields a header cell. -/
theorem adv_cells_lowercase_closer_header :
    advCellsGo [(litBytes "", litBytes "X", litBytes "hcell")] [] =
      (phBytes 0 ++ litBytes "X" ++ phBytes 1,
       [{ rule := "Tableadv", opts :=
           [("type".toList, OptVal.str "cellStart".toList),
            ("header".toList, OptVal.bool true),
            ("attrs".toList, OptVal.map [])] },
         { rule := "Tableadv", opts :=
           [("type".toList, OptVal.str "cellEnd".toList),
            ("header".toList, OptVal.bool true)] }]) := rfl

end LeanFtml
