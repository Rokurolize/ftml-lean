/-
  LeanFtml.ListTableRules — the R4.5 list and table Xhtml render
  mirrors.

  Each function mirrors one `Text_Wiki_Render_Xhtml_<Rule>::token()`
  in the validated PHP reference (`ref-php/text-wiki/Text/Wiki/Render/
  Xhtml/<Rule>.php`), under the harness configuration of
  `ref-php/harness/wiki-config.php` (`ref_configure_wiki`):

  * `List`: every css conf (`css_ol`, `css_ol_li`, `css_ul`,
    `css_ul_li`) is null under the harness, so every
    `formatConf(' class="%s"', ...)` evaluates to the empty string.
    The render is a flat per-token function: the nested-list shape
    (a child list opening inside its parent item, the inline
    wrapper for a skipped depth) is encoded by the parse rule in
    the token stream itself (`level`, `count`, `in_sublist`, and
    `tail` options, plus the `sublist_start` / `sublist_end`
    wrapper tokens and the explicit `[[ul]]` / `[[ol]]` / `[[li]]`
    block tokens of the refgaps M46 family), so no recursion or
    enumeration arises at render time. The native `format` option
    (a numbered list's type attribute) is never set by the active
    parse; it is mirrored anyway for totality, interpolated raw
    exactly as the PHP body interpolates it.
  * `Deflist`: every css conf is null; the six token types are
    fixed strings.
  * `Table`: the harness sets exactly one render conf in this
    family, `css_table = 'wiki-content-table'`, so `table_start`
    carries ` class="wiki-content-table"`; `css_caption`,
    `css_tr`, `css_th`, and `css_td` are null. The free `format`
    fragment is caller-supplied and never set by the active parse;
    it is mirrored anyway (`isset` semantics: present and
    non-null), as is the `rowspan` option, which the parse never
    emits (the renderer's default of 1 then applies).
  * `Tableadv`: the conf array is empty. The attribute fragment is
    computed for every token type before the type dispatch, in the
    wikidot rank order fixed by the reference's parse rule
    (`Parse/Default/Tableadv.php::buildAttrs`, C-R45-1: the named
    attributes id, class, style, role, type, then `data-*`, then
    the remaining attributes; equal ranks keep stored order).
    Each value is escaped with `htmlspecialchars(..., ENT_COMPAT,
    'UTF-8')`, so an authored apostrophe stays raw (REFCORR3
    C-SUSPECT-LISTTABLE-7). The cell tag is `th` iff the token's
    `header` option is PHP-truthy.

  Where a PHP `token()` falls through without a return (a `type`
  other than the handled branches), PHP concatenates the resulting
  `null` as the empty string; the mirrors return `[]`.

  The dispatcher that consumes these functions is
  `LeanFtml.dispatchRenderR41` in `LeanFtml/NotesRender.lean`,
  extended in R4.5 to all forty-one mirrored rules; the stage's
  entry points and theorems live in
  `LeanFtml/ListTableRender.lean`.
-/

import LeanFtml.RenderCore

namespace LeanFtml

/-- Test whether the token's `"type"` option equals the given ASCII
    byte string. Identical in definition to `optTypeIs` in
    `LeanFtml/NotesRender.lean`, `proseTypeIs` in
    `LeanFtml/ProseRules.lean`, `inlineTypeIs` in
    `LeanFtml/InlineSimpleRules.lean`, and `rhTypeIs` in
    `LeanFtml/RawHeadingRules.lean`; restated here so this module
    depends only on the render core (the dispatcher module imports
    all). -/
def ltTypeIs (opts : OptMap) (expected : List Nat) : Bool :=
  optStrBytes opts "type".toList == expected

/-- PHP `isset($options[$key])`: the key is present and its value
    is not `null`. Identical in definition to `optIsset` in
    `LeanFtml/RawHeadingRules.lean`. -/
def ltIsset (opts : OptMap) (key : List Char) : Bool :=
  match omGet opts key with
  | some .null => false
  | some _ => true
  | none => false

/-- The key/value pairs of an `attrs` option: the pairs of a map
    value, in stored order; any other shape (including the empty
    PHP array, which the wire encodes as an empty list) contributes
    no pairs. -/
def attrPairs (opts : OptMap) (key : List Char) : List (List Char × OptVal) :=
  match omGet opts key with
  | some (.map m) => m
  | _ => []

/-- An attribute fragment over a pair list, under a given value
    escape: each pair renders as ` key="value"`, in stored order.
    Plain structural recursion (not a fold) so concrete instances
    reduce in the kernel. -/
def attrsFragment (esc : List Nat → List Nat) :
    List (List Char × OptVal) → List Nat
  | [] => []
  | kv :: rest =>
      [32] ++ kv.1.flatMap utf8Bytes ++ litBytes "=\"" ++
        esc (renderOptValBytes kv.2) ++ litBytes "\"" ++
        attrsFragment esc rest

/-- Mirror of `Text_Wiki_Render_Xhtml_List::renderAttrs` (the
    explicit-block attribute formatter): each pair renders as
    ` key="value"` with the value escaped by
    `htmlspecialchars(..., ENT_COMPAT, 'UTF-8')`, in stored order. -/
def renderAttrsCompat (opts : OptMap) (key : List Char) : List Nat :=
  attrsFragment htmlSpecialCharsCompat (attrPairs opts key)

/-- The wikidot rank of an attribute name in the reference's
    `Tableadv::buildAttrs` (REFCORR3 C-R45-1): id, class, style,
    role, type first, then `data-*`, then every other name.
    Equal ranks keep their stored order (PHP 8's `uksort` is
    stable). -/
def advAttrRank (k : List Char) : Nat :=
  if k == "id".toList then 0
  else if k == "class".toList then 1
  else if k == "style".toList then 2
  else if k == "role".toList then 3
  else if k == "type".toList then 4
  else if "data-".toList.isPrefixOf k then 5
  else 6

/-- Stable insertion sort of an attribute pair list by `advAttrRank`;
    pairs of equal rank keep their input order. -/
def rankAttrs : List (List Char × OptVal) → List (List Char × OptVal)
  | [] => []
  | kv :: rest => insertRanked kv (rankAttrs rest)
where
  insertRanked : List Char × OptVal →
      List (List Char × OptVal) → List (List Char × OptVal)
    | kv, [] => [kv]
    | kv, kv' :: rest =>
        if advAttrRank kv.1 ≤ advAttrRank kv'.1 then kv :: kv' :: rest
        else kv' :: insertRanked kv rest

/-- The `Tableadv` attribute fragment: each pair of the token's
    `attrs` map renders as ` key="value"` with the value cast to
    string and escaped by `htmlspecialchars(..., ENT_COMPAT,
    'UTF-8')` (raw apostrophes, REFCORR3 C-SUSPECT-LISTTABLE-7),
    in the wikidot rank order of the reference's parse rule. -/
def renderAttrsQuotesSubst (opts : OptMap) (key : List Char) : List Nat :=
  attrsFragment htmlSpecialCharsCompat (rankAttrs (attrPairs opts key))

/-! ## List -/

/-- Mirror of `Text_Wiki_Render_Xhtml_List::token` (`List.php`)
    under the harness configuration (all css confs null; see the
    module header). The `level` tests reproduce the PHP body's
    `$level > 0` and strict `$level === 0` on the extracted value:
    an absent `level` is `null` in PHP, which is neither `> 0` nor
    `=== 0`. -/
def renderList (opts : OptMap) : List Nat :=
  let levelGt0 : Bool := match optNat opts "level".toList with
    | some n => 0 < n
    | none => false
  let levelEq0 : Bool := match optNat opts "level".toList with
    | some 0 => true
    | _ => false
  if ltTypeIs opts (litBytes "bullet_list_start") then
    let typeAttr := []
    let html := litBytes "<ul" ++ typeAttr ++ litBytes ">\n"
    if levelGt0 && phpEmptyOpt (omGet opts "in_sublist".toList) then
      [10] ++ html
    else html
  else if ltTypeIs opts (litBytes "number_list_start") then
    let format := optStrBytes opts "format".toList
    let typeAttr :=
      if ltIsset opts "format".toList && !format.isEmpty then
        litBytes " type=\"" ++ format ++ litBytes "\""
      else []
    let html := litBytes "<ol" ++ typeAttr ++ litBytes ">\n"
    if levelGt0 && phpEmptyOpt (omGet opts "in_sublist".toList) then
      [10] ++ html
    else html
  else if ltTypeIs opts (litBytes "bullet_list_end") then
    let tailSublist := ltIsset opts "tail".toList &&
      optStrBytes opts "tail".toList == litBytes "sublist"
    let html :=
      if tailSublist then litBytes "</ul>"
      else litBytes "</li>\n</ul>"
    if levelGt0 || (levelEq0 && tailSublist) then html ++ [10] else html
  else if ltTypeIs opts (litBytes "number_list_end") then
    let tailSublist := ltIsset opts "tail".toList &&
      optStrBytes opts "tail".toList == litBytes "sublist"
    let html :=
      if tailSublist then litBytes "</ol>"
      else litBytes "</li>\n</ol>"
    if levelGt0 || (levelEq0 && tailSublist) then html ++ [10] else html
  else if ltTypeIs opts (litBytes "sublist_start") then
    litBytes "<li style=\"list-style: none; display: inline\">\n"
  else if ltTypeIs opts (litBytes "sublist_end") then
    litBytes "</li>\n"
  else if ltTypeIs opts (litBytes "bullet_item_start") ||
      ltTypeIs opts (litBytes "number_item_start") then
    let countGt0 : Bool := match optNat opts "count".toList with
      | some n => 0 < n
      | none => false
    if countGt0 then litBytes "</li>\n<li>" else litBytes "<li>"
  else if ltTypeIs opts (litBytes "bullet_item_end") ||
      ltTypeIs opts (litBytes "number_item_end") then
    []
  else if ltTypeIs opts (litBytes "explicit_list_start") then
    let tag :=
      if optStrBytes opts "list_type".toList == litBytes "ol" then
        litBytes "ol"
      else litBytes "ul"
    litBytes "<" ++ tag ++ renderAttrsCompat opts "attrs".toList ++
      litBytes ">\n"
  else if ltTypeIs opts (litBytes "explicit_list_end") then
    let tag :=
      if optStrBytes opts "list_type".toList == litBytes "ol" then
        litBytes "ol"
      else litBytes "ul"
    litBytes "</" ++ tag ++ litBytes ">" ++
      optStrBytes opts "trail".toList
  else if ltTypeIs opts (litBytes "explicit_item_start") then
    litBytes "<li" ++ renderAttrsCompat opts "attrs".toList ++
      litBytes ">" ++ optStrBytes opts "lead".toList
  else if ltTypeIs opts (litBytes "explicit_item_end") then
    optStrBytes opts "lead".toList ++ litBytes "</li>\n"
  else if ltTypeIs opts (litBytes "explicit_none_item_start") then
    litBytes "<li style=\"list-style: none\">"
  else if ltTypeIs opts (litBytes "explicit_none_item_end") then
    litBytes "</li>\n"
  else if ltTypeIs opts (litBytes "explicit_inline_wrapper_start") then
    litBytes "<li style=\"list-style: none; display: inline\">\n"
  else if ltTypeIs opts (litBytes "explicit_inline_wrapper_end") then
    litBytes "\n</li>\n"
  else if ltTypeIs opts (litBytes "explicit_br_no_nl") then
    litBytes "<br />"
  else if ltTypeIs opts (litBytes "explicit_raw_nl") then
    litBytes "\n"
  else
    []

/-! ## Deflist -/

/-- Mirror of `Text_Wiki_Render_Xhtml_Deflist::token`
    (`Deflist.php`) under the harness configuration (all css confs
    null, so every `formatConf` is empty). -/
def renderDeflist (opts : OptMap) : List Nat :=
  if ltTypeIs opts (litBytes "list_start") then
    litBytes "<dl>\n"
  else if ltTypeIs opts (litBytes "list_end") then
    litBytes "</dl>\n"
  else if ltTypeIs opts (litBytes "term_start") then
    litBytes "<dt>"
  else if ltTypeIs opts (litBytes "term_end") then
    litBytes "</dt>\n"
  else if ltTypeIs opts (litBytes "narr_start") then
    litBytes "<dd>"
  else if ltTypeIs opts (litBytes "narr_end") then
    litBytes "</dd>\n"
  else
    []

/-! ## Table -/

/-- Mirror of `Text_Wiki_Render_Xhtml_Table::token` (`Table.php`)
    under the harness configuration (`css_table` is
    `'wiki-content-table'`; `css_caption`, `css_tr`, `css_th`, and
    `css_td` are null; see the module header). The cell `attr`
    tests reproduce the PHP body's loose comparisons on the
    extracted value: a `null` attr (the parse's plain-cell shape)
    is neither `== 'header'` nor `!= ''`, so it contributes no
    style, exactly as the empty byte string the mirror coerces it
    to. -/
def renderTable (opts : OptMap) : List Nat :=
  let format :=
    if ltIsset opts "format".toList then
      [32] ++ optStrBytes opts "format".toList
    else []
  if ltTypeIs opts (litBytes "table_start") then
    litBytes "<table class=\"wiki-content-table\"" ++ format ++
      litBytes ">\n"
  else if ltTypeIs opts (litBytes "table_end") then
    litBytes "</table>"
  else if ltTypeIs opts (litBytes "caption_start") then
    litBytes "<caption" ++ format ++ litBytes ">\n"
  else if ltTypeIs opts (litBytes "caption_end") then
    litBytes "</caption>\n"
  else if ltTypeIs opts (litBytes "row_start") then
    litBytes "<tr" ++ format ++ litBytes ">\n"
  else if ltTypeIs opts (litBytes "row_end") then
    litBytes "</tr>\n"
  else if ltTypeIs opts (litBytes "cell_start") then
    let attr := optStrBytes opts "attr".toList
    let isHeader := attr == litBytes "header"
    let span := (optNat opts "span".toList).getD 1
    let rowspan := (optNat opts "rowspan".toList).getD 1
    let base := if isHeader then litBytes "<th" else litBytes "<td"
    let spanAttr :=
      if 1 < span then
        litBytes " colspan=\"" ++ natBytes span ++ litBytes "\""
      else []
    let rowspanAttr :=
      if 1 < rowspan then
        litBytes " rowspan=\"" ++ natBytes rowspan ++ litBytes "\""
      else []
    let alignAttr :=
      if !isHeader && !attr.isEmpty then
        litBytes " style=\"text-align: " ++ attr ++ litBytes ";\""
      else []
    base ++ spanAttr ++ rowspanAttr ++ alignAttr ++ format ++
      litBytes ">"
  else if ltTypeIs opts (litBytes "cell_end") then
    let attr := optStrBytes opts "attr".toList
    if attr == litBytes "header" then litBytes "</th>\n"
    else litBytes "</td>\n"
  else
    []

/-! ## Tableadv -/

/-- Mirror of `Text_Wiki_Render_Xhtml_Tableadv::token`
    (`Tableadv.php`): the attribute fragment is computed before
    the type dispatch (so it is also computed, and discarded, for
    the fragment-free types), and the cell tag follows the token's
    `header` flag under PHP `empty()` semantics. -/
def renderTableadv (opts : OptMap) : List Nat :=
  let rendered := renderAttrsQuotesSubst opts "attrs".toList
  let tag :=
    if phpEmptyOpt (omGet opts "header".toList) then litBytes "td"
    else litBytes "th"
  if ltTypeIs opts (litBytes "start") then
    litBytes "<table" ++ rendered ++ litBytes ">\n"
  else if ltTypeIs opts (litBytes "rowStart") then
    litBytes "<tr" ++ rendered ++ litBytes ">\n"
  else if ltTypeIs opts (litBytes "cellStart") then
    litBytes "<" ++ tag ++ rendered ++ litBytes ">"
  else if ltTypeIs opts (litBytes "cellEnd") then
    litBytes "</" ++ tag ++ litBytes ">\n"
  else if ltTypeIs opts (litBytes "rowEnd") then
    litBytes "</tr>\n"
  else if ltTypeIs opts (litBytes "end") then
    litBytes "</table>"
  else
    []

end LeanFtml
