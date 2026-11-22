/-
  CLASSIFICATION PASS (BRIEF-SPECINTENT): elaborated against this tree's current
  mirror through the serial lean-build.sh wrapper (mirror: lake build LeanFtml,
  104 jobs, exit 0; this file: lake env lean LeanFtml/SpecIntent.lean, exit 0,
  zero errors). All 43 statements elaborate exactly as written: 0 proof repairs,
  0 native_decide uses, 0 sorry. By the coordinator's binding adjudications,
  36 statements are CLEAN and 7 are FALSE against live semantics: the three
  blockquote line-preservation statements and the four iftags non-suppression
  statements (conformance-spec2-adjudicate/spec2-captures.json). The full
  per-statement classification, axiom audit, counterexamples, REFCORR5 queue
  notes and proposed corrected propositions are in REPORT-SPECINTENT.md at the
  tree root; the corrected propositions are also in
  spec-corrected-intent/SpecIntentCorrectedLive.lean. This file is deliberately
  NOT imported by LeanFtml.lean. Every declaration below is byte-for-byte the
  original text: no proposition was weakened, edited, or fenced.
-/

/-
  LeanFtml.SpecIntent — Formal intent specifications, input classifications,
  and internal consequence proofs for Mission SPEC2 (`PROMPT-ANTIGRAVITY-SPEC2.md`).

  Covers:
  * Workstream 1: All 7 confirmed defect families (List explicit blocks, Colortext,
    Div attributes, Date, Blockquote, Iftags, Freelink transliteration).
    Email and Raw are excluded per prompt scope.
  * Workstream 2: All 10 untestable / unreachable constructs from SUSPECT §4,
    stating plainly where independent intent cannot be read off dead code
    (Render/Xhtml/Footnote dead $label / $equationsArray reads).

  Zero live probes; grounded strictly in source intent and recorded evidence.
  Builds under LAKE_JOBS=2 with zero `sorry`, zero `native_decide`, and every
  theorem auditing within [propext, Classical.choice, Quot.sound].
-/

import LeanFtml.TokenState
import LeanFtml.RenderCore

namespace LeanFtml.SpecIntent

open LeanFtml

/-! ## Shared Byte & Escaping Intent Helpers -/

def isAsciiUpperByte (b : Nat) : Bool :=
  0x41 ≤ b && b ≤ 0x5A

def isAsciiLowerByte (b : Nat) : Bool :=
  0x61 ≤ b && b ≤ 0x7A

def isAsciiAlphaByte (b : Nat) : Bool :=
  isAsciiUpperByte b || isAsciiLowerByte b

def isAsciiDigitByte (b : Nat) : Bool :=
  0x30 ≤ b && b ≤ 0x39

def isAsciiAlnumByte (b : Nat) : Bool :=
  isAsciiAlphaByte b || isAsciiDigitByte b

def toAsciiLowerByte (b : Nat) : Nat :=
  if isAsciiUpperByte b then b + 32 else b

def asciiLowerBytes (bs : List Nat) : List Nat :=
  bs.map toAsciiLowerByte

def isHorizWsByte (b : Nat) : Bool :=
  b == 0x20 || b == 0x09

def isWsByte (b : Nat) : Bool :=
  b == 0x20 || b == 0x09 || b == 0x0A || b == 0x0D

def trimHorizWs : List Nat → List Nat :=
  fun bs => ((bs.dropWhile isHorizWsByte).reverse.dropWhile isHorizWsByte).reverse

def trimAllWs : List Nat → List Nat :=
  fun bs => ((bs.dropWhile isWsByte).reverse.dropWhile isWsByte).reverse

/-- Intended `ENT_COMPAT, 'UTF-8'` HTML attribute/text escaping: escapes `&`, `"`,
    `<`, `>` and passes `'`, ASCII, and valid UTF-8 bytes through unchanged. -/
def compatEscapeBytes : List Nat → List Nat
  | [] => []
  | 0x26 :: rest => litBytes "&amp;" ++ compatEscapeBytes rest
  | 0x22 :: rest => litBytes "&quot;" ++ compatEscapeBytes rest
  | 0x3C :: rest => litBytes "&lt;" ++ compatEscapeBytes rest
  | 0x3E :: rest => litBytes "&gt;" ++ compatEscapeBytes rest
  | b :: rest => b :: compatEscapeBytes rest

def containsDelimByte (bs : List Nat) : Bool :=
  bs.any (· == 0xFF)

private def hexDigitUpper (n : Nat) : Nat :=
  if n < 10 then 0x30 + n else 0x41 + (n - 10)

/-- RFC 3986-style bytewise `rawurlencode` helper mapping non-unreserved bytes
    (specifically `0xFF`, `@`, `&`, `<`, space, `%`, etc.) to `%XX`. -/
def isRawUrlSafeByte (b : Nat) : Bool :=
  isAsciiAlnumByte b || b == 0x2D || b == 0x5F || b == 0x2E || b == 0x7E

def rawUrlEncodeBytes : List Nat → List Nat
  | [] => []
  | b :: rest =>
    if isRawUrlSafeByte b then
      b :: rawUrlEncodeBytes rest
    else
      [0x25, hexDigitUpper (b / 16), hexDigitUpper (b % 16)] ++ rawUrlEncodeBytes rest

theorem toAsciiLowerByte_idempotent (b : Nat) :
    toAsciiLowerByte (toAsciiLowerByte b) = toAsciiLowerByte b := by
  unfold toAsciiLowerByte isAsciiUpperByte
  by_cases h1 : 0x41 ≤ b
  · by_cases h2 : b ≤ 0x5A
    · simp [h1, h2]
      omega
    · simp [h1, h2]
  · simp [h1]

theorem asciiLowerBytes_idempotent (bs : List Nat) :
    asciiLowerBytes (asciiLowerBytes bs) = asciiLowerBytes bs := by
  induction bs with
  | nil => rfl
  | cons b rest ih =>
    simp only [asciiLowerBytes, List.map_cons] at ih ⊢
    rw [toAsciiLowerByte_idempotent b, ih]

theorem compatEscape_keeps_apos :
    compatEscapeBytes [0x27] = [0x27] := rfl

theorem compatEscape_escapes_meta :
    compatEscapeBytes (litBytes "a&b<c>d'e\"f") = litBytes "a&amp;b&lt;c&gt;d'e&quot;f" := by
  decide

/-! ===================================================================
    WORKSTREAM 1 — FAMILY 1: Explicit List-Block Case Handling
    =================================================================== -/

inductive ListCaseClass where
  | canonicalLower
  | upperOrMixedOpenClose
  | mixedInnerLi
  | scoredMixedCase
  | upperOrMixedAttrKeys
  | degradedNoLi
  | crossTagMismatch
  | standaloneLi
  deriving DecidableEq, Repr

inductive ListTagKind where
  | ul
  | ol
  | li
  deriving DecidableEq, Repr

structure ListTagToken where
  isClose : Bool
  kind : ListTagKind
  scored : Bool
  attrs : List (List Nat × List Nat)
  deriving Repr

/-- Normalize list tag names case-insensitively (`ul`, `ol`, `li`). -/
def classifyListTagName (raw : List Nat) : Option ListTagKind :=
  let low := asciiLowerBytes raw
  if low == litBytes "ul" then some .ul
  else if low == litBytes "ol" then some .ol
  else if low == litBytes "li" then some .li
  else none

/-- Intended Wikidot container attribute allowlist (settled in `contain/div` &
    `listblocks`): case-sensitive lowercase `id`, `class`, `style`, `role`, `type`,
    plus lowercase `data-` prefix with suffix normalized to lowercase. Uppercase
    `CLASS`, `ID`, or `DATA-*` prefixes are dropped intentionally. -/
def normalizeListAttrKeyIntent (key : List Nat) : Option (List Nat) :=
  if key == litBytes "id" || key == litBytes "class" ||
     key == litBytes "style" || key == litBytes "role" || key == litBytes "type" then
    some key
  else if (litBytes "data-").isPrefixOf key && key.length > 5 then
    some (asciiLowerBytes key)
  else
    none

/-- Intended opener/closer match predicate: same `ListTagKind` suffices regardless
    of authored ASCII case on either side. -/
def listCloserMatchesIntent (openTok closeTok : ListTagToken) : Bool :=
  (!openTok.isClose) && closeTok.isClose && openTok.kind == closeTok.kind

def classifyListInput (openName closeName : List Nat) (innerLiName : Option (List Nat))
    (scored : Bool) (hasUpperAttrKey : Bool) (insideList : Bool) : ListCaseClass :=
  match classifyListTagName openName, classifyListTagName closeName with
  | some .li, some .li =>
    if insideList then .canonicalLower else .standaloneLi
  | some ok, some ck =>
    if ok != ck then .crossTagMismatch
    else if innerLiName.isNone && ok != .li then .degradedNoLi
    else if hasUpperAttrKey then .upperOrMixedAttrKeys
    else if scored && openName != asciiLowerBytes openName then .scoredMixedCase
    else
      match innerLiName with
      | some li =>
        if li != litBytes "li" && openName == asciiLowerBytes openName then .mixedInnerLi
        else if openName == litBytes "ul" || openName == litBytes "ol" then
          if closeName == asciiLowerBytes closeName then .canonicalLower else .upperOrMixedOpenClose
        else .upperOrMixedOpenClose
      | none => .degradedNoLi
  | _, _ => .standaloneLi

theorem classifyListTagName_case_invariant (raw : List Nat) :
    classifyListTagName (asciiLowerBytes raw) = classifyListTagName raw := by
  simp [classifyListTagName, asciiLowerBytes_idempotent]

theorem listTag_ul_mixed_variants :
    classifyListTagName (litBytes "ul") = some .ul ∧
    classifyListTagName (litBytes "UL") = some .ul ∧
    classifyListTagName (litBytes "Ul") = some .ul ∧
    classifyListTagName (litBytes "oL") = some .ol ∧
    classifyListTagName (litBytes "Li") = some .li := by
  decide

theorem normalizeListAttrKey_live_allowlist :
    normalizeListAttrKeyIntent (litBytes "data-Foo") = some (litBytes "data-foo") ∧
    normalizeListAttrKeyIntent (litBytes "class") = some (litBytes "class") ∧
    normalizeListAttrKeyIntent (litBytes "DATA-foo") = none ∧
    normalizeListAttrKeyIntent (litBytes "CLASS") = none ∧
    normalizeListAttrKeyIntent (litBytes "ID") = none := by
  decide

theorem listCloserMatches_case_independent (k : ListTagKind) (sc1 sc2 : Bool)
    (a1 a2 : List (List Nat × List Nat)) :
    listCloserMatchesIntent ⟨false, k, sc1, a1⟩ ⟨true, k, sc2, a2⟩ = true := by
  cases k <;> simp [listCloserMatchesIntent]

/-! ===================================================================
    WORKSTREAM 1 — FAMILY 2: Colortext Parse-Time Validation
    =================================================================== -/

inductive ColortextClass where
  | validWhitespaceOnly
  | validHex
  | validCssKeywordOrRgb
  | invalidEmptySpec
  | invalidHtmlOrPunct
  | invalidTokenDelim
  | invalidNonAscii
  | invalidFollowedByValidSameLine
  deriving DecidableEq, Repr

def isColorAllowedChar (b : Nat) : Bool :=
  isAsciiAlnumByte b || b == 0x23 || b == 0x28 || b == 0x29 ||
  b == 0x2C || b == 0x2D || b == 0x20 || b == 0x09

private def collapseHorizGo (inSp : Bool) : List Nat → List Nat
  | [] => []
  | b :: rest =>
    if isHorizWsByte b then
      if inSp then collapseHorizGo true rest else 0x20 :: collapseHorizGo true rest
    else
      b :: collapseHorizGo false rest

def collapseHorizSpaces (bs : List Nat) : List Nat :=
  trimHorizWs (collapseHorizGo false bs)

def isHexDigitByte (b : Nat) : Bool :=
  (0x30 ≤ b && b ≤ 0x39) || (0x61 ≤ b && b ≤ 0x66) || (0x41 ≤ b && b ≤ 0x46)

/-- Parse-time gate mirroring live `normalizeColor` admission rules: non-empty
    color slot (`>= 1` byte before `|`) whose bytes all lie in `[A-Za-z0-9#(),\- \t]`.
    This excludes `<`, `>`, `&`, `"`, `!`, `.`, non-ASCII, and token delimiter `0xFF`. -/
def validateColorSpecIntent (rawColor : List Nat) : Option (List Nat) :=
  if rawColor.isEmpty || !rawColor.all isColorAllowedChar then
    none
  else
    let norm := asciiLowerBytes (collapseHorizSpaces rawColor)
    if norm.isEmpty then
      some []
    else
      let bare := match norm with | 0x23 :: tail => tail | xs => xs
      if (bare.length == 3 || bare.length == 6) && bare.all isHexDigitByte then
        some (0x23 :: bare)
      else
        some norm

def classifyColortextSpec (rawColor : List Nat) (hasTrailingValidSpan : Bool) : ColortextClass :=
  match validateColorSpecIntent rawColor with
  | some norm =>
    if norm.isEmpty then .validWhitespaceOnly
    else if (litBytes "#").isPrefixOf norm then .validHex
    else .validCssKeywordOrRgb
  | none =>
    if hasTrailingValidSpan then .invalidFollowedByValidSameLine
    else if rawColor.isEmpty then .invalidEmptySpec
    else if containsDelimByte rawColor then .invalidTokenDelim
    else if rawColor.any (· ≥ 0x80) then .invalidNonAscii
    else .invalidHtmlOrPunct

private def findColortextEnd (acc : List Nat) : List Nat → Option (List Nat)
  | 0x23 :: 0x23 :: _ => some acc.reverse
  | x :: t => findColortextEnd (x :: acc) t
  | [] => none

/-- Simplified single-line scanner capturing the parse-time invariant: when a candidate
    spec between `##` and `|` fails `validateColorSpecIntent`, the scanner leaves the
    leading `##` and text untouched and advances so later valid `##color|body##` spans
    on the same line still parse. -/
def scanColortextFirstValid (fuel : Nat) (bs : List Nat) : Option (List Nat × List Nat) :=
  match fuel with
  | 0 => none
  | f + 1 =>
    match bs with
    | [] => none
    | 0x23 :: 0x23 :: rest =>
      let colorCand := rest.takeWhile (fun b => b != 0x7C && b != 0x0A)
      let afterColor := rest.dropWhile (fun b => b != 0x7C && b != 0x0A)
      match afterColor with
      | 0x7C :: bodyStart =>
        let body := bodyStart.takeWhile (· != 0x0A)
        match validateColorSpecIntent colorCand, findColortextEnd [] body with
        | some normC, some bContent =>
          if bContent.isEmpty then scanColortextFirstValid f (0x23 :: rest)
          else some (normC, bContent)
        | _, _ => scanColortextFirstValid f (0x23 :: rest)
      | _ => scanColortextFirstValid f (0x23 :: rest)
    | _ :: rest => scanColortextFirstValid f rest

theorem colortextIntent_rejects_invalid_specs :
    validateColorSpecIntent [] = none ∧
    validateColorSpecIntent (litBytes "<i>") = none ∧
    validateColorSpecIntent (litBytes "a!b") = none ∧
    validateColorSpecIntent (litBytes "a&b") = none ∧
    validateColorSpecIntent (litBytes "a\"b'c") = none ∧
    validateColorSpecIntent (litBytes "rgba(1, 2, 3, 0.5)") = none ∧
    validateColorSpecIntent [0xFF, 0x30, 0xFF] = none ∧
    validateColorSpecIntent [0xC3, 0xA9] = none := by
  decide

theorem colortextIntent_accepts_valid_specs :
    validateColorSpecIntent (litBytes "   ") = some [] ∧
    validateColorSpecIntent (litBytes " #aBc ") = some (litBytes "#abc") ∧
    validateColorSpecIntent (litBytes "abc") = some (litBytes "#abc") ∧
    validateColorSpecIntent (litBytes "rgb(1, 2, 3)") = some (litBytes "rgb(1, 2, 3)") := by
  decide

theorem colortextIntent_invalid_preserves_following_valid :
    let src := litBytes "##bad!|a##red|b##"
    scanColortextFirstValid src.length src = some (litBytes "red", litBytes "b") := by
  decide

/-! ===================================================================
    WORKSTREAM 1 — FAMILY 3: Div Attribute Escaping & Placeholder Clearing
    =================================================================== -/

inductive DivAttrClass where
  | cleanAllowed
  | htmlMetaInAllowed
  | placeholderInAllowed
  | upperOrMixedAttrKey
  | emptyBodyWithClearedAttr
  | settledOrderOrVanished
  deriving DecidableEq, Repr

/-- Intended Div key allowlist matching live `contain/div`: case-sensitive lowercase
    `id`, `class`, `style`, `role`, `type`, plus lowercase-prefix `data-*`.
    (REFCORR2 attribute emission order is settled and NOT reopened here.) -/
def normalizeDivAttrKeyIntent : List Nat → Option (List Nat) :=
  normalizeListAttrKeyIntent

/-- Intended Div attribute value sanitizer & renderer:
    1. If the raw value contains `\xFF` anywhere, clear to `""` without `u-` on `id`
       and keep the attribute entry on `<div ...>` (even if the div body is empty).
    2. Otherwise for `id`, mirror `Div.php::isolateId`: omit if empty, preserve
       `"u- "` on leading whitespace before non-`u-` / untrimmed `" u-foo"`, and
       escape with `compatEscapeBytes` (`ENT_COMPAT`).
    3. Escape all kept attribute values with `compatEscapeBytes` (`ENT_COMPAT`). -/
def sanitizeDivAttrIntent (lowKey rawVal : List Nat) : Option (List Nat × List Nat) :=
  if containsDelimByte rawVal then
    some (lowKey, [])
  else if lowKey == litBytes "id" then
    if rawVal.isEmpty then none
    else
      let leading := match rawVal with | b :: _ => isWsByte b | [] => false
      let trimmed := trimAllWs rawVal
      if trimmed.isEmpty then some (lowKey, litBytes "u-")
      else if (litBytes "u-").isPrefixOf rawVal then
        some (lowKey, compatEscapeBytes trimmed)
      else
        let pref := if leading then litBytes "u- " else litBytes "u-"
        some (lowKey, compatEscapeBytes (pref ++ trimmed))
  else
    some (lowKey, compatEscapeBytes rawVal)

def classifyDivAttrCase (rawKey rawVal : List Nat) (bodyEmpty : Bool) : DivAttrClass :=
  if containsDelimByte rawVal then
    if bodyEmpty then .emptyBodyWithClearedAttr else .placeholderInAllowed
  else if normalizeDivAttrKeyIntent rawKey == none then
    .upperOrMixedAttrKey
  else if rawVal.any (fun b => b == 0x26 || b == 0x3C || b == 0x3E || b == 0x22) then
    .htmlMetaInAllowed
  else
    .cleanAllowed

theorem divIntent_placeholder_clears_without_uprefix (k : List Nat)
    (v : List Nat) (hv : containsDelimByte v = true) :
    sanitizeDivAttrIntent k v = some (k, []) := by
  simp [sanitizeDivAttrIntent, hv]

theorem divIntent_id_placeholder_witness :
    sanitizeDivAttrIntent (litBytes "id") ([0x61, 0xFF, 0x30, 0xFF, 0x62]) = some (litBytes "id", []) ∧
    sanitizeDivAttrIntent (litBytes "style") ([0x61, 0xFF, 0x30, 0xFF, 0x62]) = some (litBytes "style", []) ∧
    sanitizeDivAttrIntent (litBytes "role") ([0xFF, 0x30, 0xFF]) = some (litBytes "role", []) ∧
    sanitizeDivAttrIntent (litBytes "type") ([0xFF, 0x30, 0xFF]) = some (litBytes "type", []) := by
  decide

theorem divIntent_escapes_compat_all_fields :
    sanitizeDivAttrIntent (litBytes "class") (litBytes "a&b<c>d'e") =
      some (litBytes "class", litBytes "a&amp;b&lt;c&gt;d'e") ∧
    sanitizeDivAttrIntent (litBytes "style") (litBytes "a&b<c>d'e") =
      some (litBytes "style", litBytes "a&amp;b&lt;c&gt;d'e") ∧
    sanitizeDivAttrIntent (litBytes "id") (litBytes "a&b<c>d'e") =
      some (litBytes "id", litBytes "u-a&amp;b&lt;c&gt;d'e") ∧
    sanitizeDivAttrIntent (litBytes "id") (litBytes " u-foo") =
      some (litBytes "id", litBytes "u- u-foo") ∧
    sanitizeDivAttrIntent (litBytes "id") (litBytes "u-foo") =
      some (litBytes "id", litBytes "u-foo") := by
  decide

theorem divIntent_attr_key_allowlist :
    normalizeDivAttrKeyIntent (litBytes "data-Foo") = some (litBytes "data-foo") ∧
    normalizeDivAttrKeyIntent (litBytes "style") = some (litBytes "style") ∧
    normalizeDivAttrKeyIntent (litBytes "DATA-X") = none ∧
    normalizeDivAttrKeyIntent (litBytes "CLASS") = none := by
  decide

/-! ===================================================================
    WORKSTREAM 1 — FAMILY 4: Date (`encodeFormat` & `timestamp=` override)
    =================================================================== -/

inductive DateClass where
  | validPositionalOrOverride
  | emptyTimestampOverride
  | nonNumericOrMetaTimestampOverride
  | realPlaceholderInFormat
  | literalAtDigitsInFormat
  | blankPositionalWithTimestampAttr
  deriving DecidableEq, Repr

def stripLeadingAsciiZeros (ds : List Nat) : List Nat :=
  match ds.dropWhile (· == 0x30) with
  | [] => [0x30]
  | xs => xs

/-- Intended strict integer parser for positional or `timestamp=` attribute:
    trims horizontal whitespace, requires `[-]?[0-9]+`, normalizes `-0` and
    leading zeros. Rejects `""`, `"abc"`, and `"a&b<c"` before constructing
    CSS class `time_<suffix>`. -/
def parseDateTimestampStrict (raw : List Nat) : Option (Int × List Nat) :=
  match trimHorizWs raw with
  | [] => none
  | b :: rest =>
    if b == 0x2D then
      if rest.isEmpty || !rest.all isAsciiDigitByte then none
      else
        let mag := rest.foldl (fun acc d => acc * 10 + (d - 0x30)) 0
        let canon := stripLeadingAsciiZeros rest
        if mag == 0 then some (0, [0x30])
        else some (-(Int.ofNat mag), 0x2D :: canon)
    else
      let ds := b :: rest
      if !ds.all isAsciiDigitByte then none
      else
        let mag := ds.foldl (fun acc d => acc * 10 + (d - 0x30)) 0
        some (Int.ofNat mag, stripLeadingAsciiZeros ds)

/-- Intended `Date` timestamp resolution matching live `p21` and safe CSS emission:
    when `timestamp=` attribute is present, validate it strictly with
    `parseDateTimestampStrict` (emitting epoch class on valid integer even when
    positional is blank per `p21`, and rejecting `""` / non-numeric / unescaped
    HTML strings rather than emitting raw `time_abc` / `time_a&b<c` or `<p></p>`).
    When `timestamp=` is absent and positional is blank, emits `none` (`F-R2-23`). -/
def resolveDateTimestampIntent (posOpt attrOpt : Option (List Nat)) : Option (Int × List Nat) :=
  match attrOpt with
  | some attrRaw => parseDateTimestampStrict attrRaw
  | none =>
    match posOpt with
    | none => none
    | some posRaw => parseDateTimestampStrict posRaw

/-- Intended `Date::encodeFormat` (reproducing live capture `p22` / `x02`):
    percent-encodes genuine raw `0xFF` delimiter bytes as `%FF` and literal `@`
    (`0x40`) as `%40`, NEVER synthesizing `%FF<digits>%FF` from ASCII `@@<digits>@@`. -/
def encodeDateFormatIntent (fmt : List Nat) : List Nat :=
  rawUrlEncodeBytes fmt

private theorem mem_dropWhile_subset {α : Type} (p : α → Bool) :
    ∀ (xs : List α) {x : α}, x ∈ xs.dropWhile p → x ∈ xs
  | [], _, hx => hx
  | y :: ys, _, hx => by
    unfold List.dropWhile at hx
    split at hx
    · exact List.mem_cons_of_mem y (mem_dropWhile_subset p ys hx)
    · exact hx

private theorem stripLeadingAsciiZeros_digits (ds : List Nat)
    (hds : ds.all isAsciiDigitByte = true) :
    ∀ c ∈ stripLeadingAsciiZeros ds, isAsciiDigitByte c = true := by
  unfold stripLeadingAsciiZeros
  cases hdw : ds.dropWhile (· == 0x30) with
  | nil =>
    intro c hc
    cases hc with
    | head => decide
    | tail _ ht => contradiction
  | cons y ys =>
    intro c hc
    have hmem : c ∈ ds.dropWhile (· == 0x30) := hdw ▸ hc
    exact List.all_eq_true.mp hds c (mem_dropWhile_subset (· == 0x30) ds hmem)

theorem dateIntent_class_suffix_digits_only (raw : List Nat) (z : Int) (sfx : List Nat)
    (h : parseDateTimestampStrict raw = some (z, sfx)) :
    ∀ c ∈ sfx, c == 0x2D || isAsciiDigitByte c = true := by
  unfold parseDateTimestampStrict at h
  cases htr : trimHorizWs raw with
  | nil => simp [htr] at h
  | cons b rest =>
    simp only [htr] at h
    by_cases hb : b == 0x2D
    · simp only [hb, ↓reduceIte] at h
      by_cases herr : rest.isEmpty || !rest.all isAsciiDigitByte
      · simp [herr] at h
      · have hdig : rest.all isAsciiDigitByte = true := by
          revert herr; cases rest.all isAsciiDigitByte <;> simp
        simp only [herr, Bool.false_eq_true, ↓reduceIte] at h
        split at h
        · injection h with hpair
          have hsfx := congrArg Prod.snd hpair
          subst hsfx
          intro c hc
          cases hc with
          | head => decide
          | tail _ ht => contradiction
        · injection h with hpair
          have hsfx := congrArg Prod.snd hpair
          subst hsfx
          intro c hc
          rcases List.mem_cons.mp hc with rfl | htail
          · decide
          · simp [stripLeadingAsciiZeros_digits rest hdig c htail]
    · simp only [hb, Bool.false_eq_true, ↓reduceIte] at h
      by_cases hdig : (b :: rest).all isAsciiDigitByte = true
      · have hndig : (!(b :: rest).all isAsciiDigitByte) = false := by simp [hdig]
        simp only [hndig, Bool.false_eq_true, ↓reduceIte] at h
        injection h with hpair
        have hsfx := congrArg Prod.snd hpair
        subst hsfx
        intro c hc
        simp [stripLeadingAsciiZeros_digits (b :: rest) hdig c hc]
      · have hndig : (!(b :: rest).all isAsciiDigitByte) = true := by
          revert hdig; cases (b :: rest).all isAsciiDigitByte <;> simp
        simp only [hndig, ↓reduceIte] at h
        contradiction

theorem dateIntent_literal_at_digits_never_forges_pctFF :
    encodeDateFormatIntent (litBytes "@@123@@") = litBytes "%40%40123%40%40" := by
  decide

theorem dateIntent_real_delim_encodes_pctFF :
    encodeDateFormatIntent [0x61, 0xFF, 0x31, 0xFF, 0x62] = litBytes "a%FF1%FFb" := by
  decide

theorem dateIntent_rejects_invalid_ts_overrides :
    resolveDateTimestampIntent (some (litBytes "86400")) (some []) = none ∧
    resolveDateTimestampIntent (some (litBytes "86400")) (some (litBytes "abc")) = none ∧
    resolveDateTimestampIntent (some (litBytes "0")) (some (litBytes "a&b<c")) = none := by
  decide

theorem dateIntent_valid_override_and_trim :
    resolveDateTimestampIntent (some (litBytes "86400")) (some (litBytes "0")) = some (0, litBytes "0") ∧
    resolveDateTimestampIntent (some (litBytes "86400")) (some (litBytes " 120 ")) = some (120, litBytes "120") ∧
    resolveDateTimestampIntent none (some (litBytes "86400")) = some (86400, litBytes "86400") ∧
    resolveDateTimestampIntent none none = none := by
  decide

/-! ===================================================================
    WORKSTREAM 1 — FAMILY 5: Blockquote Silent Deletion
    =================================================================== -/

inductive BlockquoteLineClass where
  | validQuoteWithSpace
  | nospaceAfterGt
  | emptyAfterGtSpace
  | plainLine
  deriving DecidableEq, Repr

/-- Intended line classification for `Blockquote`: a line opens/continues a blockquote
    strictly when it begins with one or more `>` followed by `' '` AND non-empty
    non-whitespace payload. Any line starting with `>` without `' '` (or empty `>`)
    is ordinary prose text and MUST NOT be matched and deleted. -/
def classifyBlockquoteLine (line : List Nat) : BlockquoteLineClass :=
  let gts := line.takeWhile (· == 0x3E)
  let rest := line.dropWhile (· == 0x3E)
  if gts.isEmpty then .plainLine
  else
    match rest with
    | 0x20 :: tail =>
      if (tail.dropWhile isHorizWsByte).isEmpty then .emptyAfterGtSpace
      else .validQuoteWithSpace
    | _ => .nospaceAfterGt

inductive BlockquoteOutSegment where
  | quoted (depth : Nat) (body : List Nat)
  | literalLine (raw : List Nat)
  deriving DecidableEq, Repr

def blockquoteLineIntent (line : List Nat) : BlockquoteOutSegment :=
  match classifyBlockquoteLine line with
  | .validQuoteWithSpace =>
    let depth := (line.takeWhile (· == 0x3E)).length
    let body := (line.dropWhile (· == 0x3E)).drop 1
    .quoted depth body
  | _ => .literalLine line

def blockquoteRunIntent (lines : List (List Nat)) : List BlockquoteOutSegment :=
  lines.map blockquoteLineIntent

theorem blockquoteIntent_never_deletes_lines (lines : List (List Nat)) :
    (blockquoteRunIntent lines).length = lines.length := by
  simp [blockquoteRunIntent]

theorem blockquoteIntent_preserves_nospace_lines :
    blockquoteLineIntent (litBytes ">nospace") = .literalLine (litBytes ">nospace") ∧
    blockquoteLineIntent (litBytes ">>nospace") = .literalLine (litBytes ">>nospace") ∧
    blockquoteLineIntent (litBytes ">") = .literalLine (litBytes ">") ∧
    blockquoteLineIntent (litBytes "> ") = .literalLine (litBytes "> ") := by
  decide

theorem blockquoteIntent_mixed_run_keeps_middle_nospace :
    blockquoteRunIntent [litBytes "> first", litBytes ">nospace", litBytes "> last"] =
      [.quoted 1 (litBytes "first"), .literalLine (litBytes ">nospace"), .quoted 1 (litBytes "last")] := by
  decide

/-! ===================================================================
    WORKSTREAM 1 — FAMILY 6: Iftags Comma Splitting & Spec Parsing
    =================================================================== -/

inductive IftagsClass where
  | emptyOrSepsOnly
  | requiredWithComma
  | optionalAnyWithComma
  | forbiddenWithComma
  | danglingSignWithComma
  | multiSepMid
  | newlineInSpecR2
  deriving DecidableEq, Repr

def isIftagsSepByte (b : Nat) : Bool :=
  b == 0x2C || b == 0x20 || b == 0x09

private def splitIftagsGo (cur : List Nat) (acc : List (List Nat)) : List Nat → List (List Nat)
  | [] => (if cur.isEmpty then acc else cur.reverse :: acc).reverse
  | b :: rest =>
    if isIftagsSepByte b then
      if cur.isEmpty then splitIftagsGo [] acc rest
      else splitIftagsGo [] (cur.reverse :: acc) rest
    else
      splitIftagsGo (b :: cur) acc rest

/-- Split on runs of `[,\t ]` WITHOUT emitting empty strings. -/
def splitIftagsTokensIntent (spec : List Nat) : List (List Nat) :=
  splitIftagsGo [] [] spec

structure ParsedIftagsSpec where
  reqTags : List (List Nat)
  notTags : List (List Nat)
  anyTags : List (List Nat)
  deriving Repr

def parseIftagsSpecIntent (spec : List Nat) : ParsedIftagsSpec :=
  let toks := splitIftagsTokensIntent spec
  toks.foldl (fun st t =>
    match t with
    | 0x2B :: r => { st with reqTags := st.reqTags ++ [r] }
    | 0x2D :: r => { st with notTags := st.notTags ++ [r] }
    | _ => { st with anyTags := st.anyTags ++ [t] }) { reqTags := [], notTags := [], anyTags := [] }

def hasTagCI (pageTags : List (List Nat)) (needle : List Nat) : Bool :=
  let lowN := asciiLowerBytes needle
  pageTags.any (fun t => asciiLowerBytes t == lowN)

def evalIftagsIntent (pageTags : List (List Nat)) (spec : List Nat) : Bool :=
  let ps := parseIftagsSpecIntent spec
  let okReq := ps.reqTags.all (hasTagCI pageTags)
  let okNot := ps.notTags.all (fun t => !hasTagCI pageTags t)
  let okAny := ps.anyTags.isEmpty || ps.anyTags.any (hasTagCI pageTags)
  okReq && okNot && okAny

private theorem append_singleton_isEmpty_false {α : Type} (xs : List α) (a : α) :
    (xs ++ [a]).isEmpty = false := by
  cases xs <;> rfl

private theorem reverse_isEmpty_eq_false {α : Type} (xs : List α) (h : xs.isEmpty = false) :
    xs.reverse.isEmpty = false := by
  cases xs with
  | nil => contradiction
  | cons a t => simp only [List.reverse_cons]; exact append_singleton_isEmpty_false t.reverse a

private theorem splitIftags_go_nonempty (spec cur : List Nat) (acc : List (List Nat))
    (hacc : ∀ x ∈ acc, x.isEmpty = false) :
    ∀ x ∈ splitIftagsGo cur acc spec, x.isEmpty = false := by
  induction spec generalizing cur acc with
  | nil =>
    unfold splitIftagsGo
    by_cases hcur : cur.isEmpty = true
    · simp only [hcur, ↓reduceIte]
      intro x hx
      exact hacc x (List.mem_reverse.mp hx)
    · have hcf : cur.isEmpty = false := Bool.eq_false_iff.mpr hcur
      simp only [hcf, Bool.false_eq_true, ↓reduceIte]
      intro x hx
      rcases List.mem_cons.mp (List.mem_reverse.mp hx) with rfl | htail
      · exact reverse_isEmpty_eq_false cur hcf
      · exact hacc x htail
  | cons b rest ih =>
    unfold splitIftagsGo
    by_cases hsep : isIftagsSepByte b = true
    · simp only [hsep, ↓reduceIte]
      by_cases hcur : cur.isEmpty = true
      · simp only [hcur, ↓reduceIte]
        exact ih [] acc hacc
      · have hcf : cur.isEmpty = false := Bool.eq_false_iff.mpr hcur
        simp only [hcf, Bool.false_eq_true, ↓reduceIte]
        refine ih [] (cur.reverse :: acc) ?_
        intro x hx
        rcases List.mem_cons.mp hx with rfl | htail
        · exact reverse_isEmpty_eq_false cur hcf
        · exact hacc x htail
    · have hns : isIftagsSepByte b = false := Bool.eq_false_iff.mpr hsep
      simp only [hns, Bool.false_eq_true, ↓reduceIte]
      exact ih (b :: cur) acc hacc

theorem iftagsIntent_split_never_empty (spec : List Nat) :
    ∀ t ∈ splitIftagsTokensIntent spec, t.isEmpty = false := by
  intro t ht
  exact splitIftags_go_nonempty spec [] [] (fun _ h => by cases h) t ht

theorem iftagsIntent_empty_and_commas_keep (pageTags : List (List Nat)) :
    evalIftagsIntent pageTags [] = true ∧
    evalIftagsIntent pageTags (litBytes "   ") = true ∧
    evalIftagsIntent pageTags (litBytes ",") = true ∧
    evalIftagsIntent pageTags (litBytes ",,") = true := by
  have hs1 : litBytes "   " = [0x20, 0x20, 0x20] := rfl
  have hs2 : litBytes "," = [0x2C] := rfl
  have hs3 : litBytes ",," = [0x2C, 0x2C] := rfl
  rw [hs1, hs2, hs3]
  simp [evalIftagsIntent, parseIftagsSpecIntent, splitIftagsTokensIntent,
        splitIftagsGo, isIftagsSepByte]

theorem iftagsIntent_plus_trailing_comma_keeps_tagged :
    evalIftagsIntent [litBytes "foo"] (litBytes "+foo,") = true ∧
    evalIftagsIntent [litBytes "foo"] (litBytes ",+foo") = true ∧
    evalIftagsIntent [litBytes "foo", litBytes "bar"] (litBytes "+foo, +bar,") = true := by
  decide

theorem iftagsIntent_dangling_signs_with_comma :
    evalIftagsIntent [litBytes "foo"] (litBytes "-,") = true ∧
    evalIftagsIntent [litBytes "foo"] (litBytes "+,") = false ∧
    evalIftagsIntent [] (litBytes ",-foo") = true := by
  decide

/-! ===================================================================
    WORKSTREAM 1 — FAMILY 7: Freelink Transliteration ASCII Pass-Through
    =================================================================== -/

inductive FreelinkTranslitClass where
  | pureAscii
  | asciiAlnumMixedNonAscii
  | catPrefixMixedNonAscii
  | defaultPrefixWithNonAscii
  | anchorOrHashWithNonAscii
  | unmappedWithAscii
  | cyrillicGermanGreekWithAscii
  | underscoreHyphenSpaceMix
  deriving DecidableEq, Repr

/-- Intended per-codepoint transliteration pass:
    1. Keep ASCII alphanumerics `[A-Za-z0-9]` as well as `# : / space _ -`.
    2. Map known non-ASCII characters via `charMap`.
    3. Map unmapped non-ASCII/punctuation characters to `' '`. -/
def isTranslitPassByte (b : Nat) : Bool :=
  isAsciiAlnumByte b ||
  b == 0x23 || b == 0x3A || b == 0x2F || b == 0x20 || b == 0x5F || b == 0x2D

def translitSampleCharMap (c : Nat) : Option (List Nat) :=
  if c == 0xE9 || c == 0xC9 then some [0x65]         -- é / É -> e
  else if c == 0x142 || c == 0x141 then some [0x6C]   -- ł / Ł -> l
  else if c == 0xF3 || c == 0xD3 then some [0x6F]   -- ó / Ó -> o
  else if c == 0x17A || c == 0x179 then some [0x7A]   -- ź / Ź -> z
  else if c == 0xDC || c == 0xFC then some [0x75, 0x65] -- Ü / ü -> ue
  else if c == 0x3B1 then some [0x61]               -- α -> a
  else none

def freelinkTranslitIntent (charMap : Nat → Option (List Nat)) (cps : List Nat) : List Nat :=
  cps.flatMap fun c =>
    if isTranslitPassByte c then [c]
    else match charMap c with
         | some out => out
         | none => [0x20]

def stripDefaultPrefixCps (cps : List Nat) : List Nat :=
  let pref := litBytes "_default:"
  if asciiLowerBytes (cps.take 9) == pref then cps.drop 9 else cps

/-- Intended preprocessing order: strip `_default:` BEFORE transliteration so
    that `_default:café` strips cleanly rather than corrupting `_default` to `_:`. -/
def freelinkPreTranslitSlugIntent (charMap : Nat → Option (List Nat)) (cps : List Nat) : List Nat :=
  let stripped := stripDefaultPrefixCps cps
  if stripped.any (· ≥ 0x80) then freelinkTranslitIntent charMap stripped
  else stripped

theorem freelinkTranslit_preserves_ascii_alnum (charMap : Nat → Option (List Nat))
    (c : Nat) (h : isAsciiAlnumByte c = true) :
    freelinkTranslitIntent charMap [c] = [c] := by
  have hp : isTranslitPassByte c = true := by simp [isTranslitPassByte, h]
  simp [freelinkTranslitIntent, hp]

theorem stripDefaultPrefixCps_cons_default (tail : List Nat) :
    stripDefaultPrefixCps (litBytes "_default:" ++ tail) = tail := by
  rfl

theorem freelinkIntent_stripDefault_matches_plain (charMap : Nat → Option (List Nat))
    (tail : List Nat) (hno : asciiLowerBytes (tail.take 9) ≠ litBytes "_default:") :
    freelinkPreTranslitSlugIntent charMap (litBytes "_default:" ++ tail) =
      freelinkPreTranslitSlugIntent charMap tail := by
  have hs1 : stripDefaultPrefixCps (litBytes "_default:" ++ tail) = tail :=
    stripDefaultPrefixCps_cons_default tail
  have hs2 : stripDefaultPrefixCps tail = tail := by
    simp [stripDefaultPrefixCps, hno]
  simp [freelinkPreTranslitSlugIntent, hs1, hs2]

theorem freelinkIntent_witness_cafe_default_and_cat :
    freelinkPreTranslitSlugIntent translitSampleCharMap (litBytes "_default:café") = litBytes "cafe" ∧
    freelinkPreTranslitSlugIntent translitSampleCharMap (litBytes "cat:café") = litBytes "cat:cafe" := by
  decide

/-! ===================================================================
    WORKSTREAM 2: 10 Untestable / Unreachable Constructs (SUSPECT §4)
    =================================================================== -/

/-! ### WS2 #1: `Parse/Default/Typography.php:126-129` & `Render/Xhtml/Typography.php:27` (`---` vs `--`) -/

/-- Longest-match-first intent implied by having `"---" => '&#8212;'` alongside
    `"--" => '&#8212;'` in `Render/Xhtml/Typography.php:27`. -/
def typoDashLongestFirstIntent : List Nat → List Nat
  | [] => []
  | 0x2D :: 0x2D :: 0x2D :: rest => litBytes "&#8212;" ++ typoDashLongestFirstIntent rest
  | 0x2D :: 0x2D :: rest => litBytes "&#8212;" ++ typoDashLongestFirstIntent rest
  | b :: rest => b :: typoDashLongestFirstIntent rest

/-- Actual greedy `--`-first parse behavior of `Parse/Default/Typography.php:126-128`. -/
def typoDashGreedyTwoCode : List Nat → List Nat
  | [] => []
  | 0x2D :: 0x2D :: rest => litBytes "&#8212;" ++ typoDashGreedyTwoCode rest
  | b :: rest => b :: typoDashGreedyTwoCode rest

theorem ws2_1_typo_triple_dash_no_stray_hyphen :
    typoDashLongestFirstIntent (litBytes "a --- b") = litBytes "a &#8212; b" ∧
    typoDashGreedyTwoCode (litBytes "a --- b") = litBytes "a &#8212;- b" := by
  decide

/-! ### WS2 #2: `Render/Xhtml/Include.php:25-36` (`type === 'missing'`) -/

def buildIncludeMissingUrl (siteOpt : Option (List Nat)) (page : List Nat) : List Nat :=
  match siteOpt with
  | some s => litBytes "https://" ++ s ++ litBytes ".wikidot.com/" ++ page ++ litBytes "/edit/true"
  | none => litBytes "/" ++ page ++ litBytes "/edit/true"

def renderIncludeMissingIntent (siteOpt : Option (List Nat)) (page : List Nat) : List Nat :=
  let url := buildIncludeMissingUrl siteOpt page
  litBytes "<div class=\"error-block\">\n<p>Included page &quot;" ++ compatEscapeBytes page ++
    litBytes "&quot; does not exist (<a href=\"" ++ compatEscapeBytes url ++
    litBytes "\">create it now</a>)</p>\n</div>"

theorem ws2_2_include_missing_escapes_and_urls :
    compatEscapeBytes (buildIncludeMissingUrl none (litBytes "foo")) =
      litBytes "/foo/edit/true" ∧
    compatEscapeBytes (buildIncludeMissingUrl (some (litBytes "bar")) (litBytes "foo")) =
      litBytes "https://bar.wikidot.com/foo/edit/true" ∧
    compatEscapeBytes (litBytes "a<b>\"c'd") = litBytes "a&lt;b&gt;&quot;c'd" ∧
    compatEscapeBytes (buildIncludeMissingUrl none (litBytes "a<b>\"c'd")) =
      litBytes "/a&lt;b&gt;&quot;c'd/edit/true" := by
  decide

/-! ### WS2 #3: `Parse/Default/Delimiter.php:53-77` & `Render/Xhtml/Delimiter.php` (`/\xFF/`) -/

inductive DelimTok where
  | textByte (b : Nat)
  | delimByte (b : Nat)
  deriving DecidableEq, Repr

def delimiterParseIntent (bs : List Nat) : List DelimTok :=
  bs.map fun b => if b == 0xFF then .delimByte 0xFF else .textByte b

def delimiterRenderIntent (ts : List DelimTok) : List Nat :=
  ts.map fun | .textByte b => b | .delimByte b => b

theorem ws2_3_delimiter_roundtrip_all_bytes (bs : List Nat) :
    delimiterRenderIntent (delimiterParseIntent bs) = bs := by
  induction bs with
  | nil => rfl
  | cons b rest ih =>
    change (match (if b == 0xFF then DelimTok.delimByte 0xFF else DelimTok.textByte b) with
            | .textByte x => x | .delimByte x => x) :: delimiterRenderIntent (delimiterParseIntent rest) = b :: rest
    rw [ih]
    by_cases h : b == 0xFF
    · have hb : b = 0xFF := beq_iff_eq.mp h
      simp [hb]
    · simp [h]

theorem ws2_3_delimiter_protects_fake_placeholder :
    (delimiterParseIntent [0x61, 0xFF, 0x30, 0xFF, 0x62]).count (.delimByte 0xFF) = 2 := by
  decide

/-! ### WS2 #4: `Render/Xhtml/Footnote.php:40-41` (`$label` & `$refs` dead reads) -/

/-- NOTE: No independent evident intent can be read off the dead local assignments
    `$label = $options['label'];` and `$refs = Text_Wiki_Parse_Math::$equationsArray;`
    in `Render/Xhtml/Footnote.php:40-41`, because neither local variable participates
    in any branch or return value. We intentionally do NOT invent a synthetic spec;
    the trivial theorem below solely records output invariance over those dead reads. -/
def renderFootnoteIntent (_label : Option (List Nat)) (_equations : List (List Nat))
    (numAscii body : List Nat) : List Nat :=
  litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ numAscii ++
    litBytes "\">" ++ body ++ litBytes "</div>"

theorem ws2_4_footnote_dead_reads_vacuous
    (l1 l2 : Option (List Nat)) (e1 e2 : List (List Nat)) (n body : List Nat) :
    renderFootnoteIntent l1 e1 n body = renderFootnoteIntent l2 e2 n body := rfl

/-! ### WS2 #5: `Render/Xhtml/Heading.php:40-41,65-95` (Collapse JS guard) -/

/-- Stateful emission of heading collapse `<script>`: `startContent` must emit the
    inline `<script>` helper AT MOST ONCE per render pass when `$collapse !== null`.
    Actual `Render/Xhtml/Heading.php:70-81` omits `$jsOutput = true;`, which would
    re-emit the `<script>` on every collapsible heading if collapse were enabled. -/
private def countHeadingScriptsGo (jsEmitted : Bool) : List (Bool × List Nat) → Bool × Nat
  | [] => (jsEmitted, 0)
  | (collapsible, _) :: rest =>
    if collapsible then
      if jsEmitted then
        countHeadingScriptsGo true rest
      else
        let r := countHeadingScriptsGo true rest
        (r.1, 1 + r.2)
    else
      countHeadingScriptsGo jsEmitted rest

def countHeadingScriptsIntent (items : List (Bool × List Nat)) : Nat :=
  (countHeadingScriptsGo false items).2

private theorem countHeadingScriptsGo_true_zero (items : List (Bool × List Nat)) :
    (countHeadingScriptsGo true items).2 = 0 := by
  induction items with
  | nil => rfl
  | cons hd rest ih =>
    cases hd with
    | mk c _ =>
      cases c
      · simp [countHeadingScriptsGo, ih]
      · simp [countHeadingScriptsGo, ih]

theorem ws2_5_heading_collapse_js_at_most_once (items : List (Bool × List Nat)) :
    countHeadingScriptsIntent items ≤ 1 := by
  unfold countHeadingScriptsIntent
  induction items with
  | nil => simp [countHeadingScriptsGo]
  | cons hd rest ih =>
    cases hd with
    | mk c _ =>
      cases c
      · simpa [countHeadingScriptsGo] using ih
      · simp [countHeadingScriptsGo, countHeadingScriptsGo_true_zero]

/-! ### WS2 #6: `Render/Xhtml/Freelink.php:62-67` (`if ($site)` cross-site branch) -/

def renderFreelinkSiteIntent (urlDomain : List Nat) (siteOpt : Option (List Nat))
    (page : List Nat) (anchorOpt : Option (List Nat)) (extra text : List Nat) : List Nat :=
  let base := match siteOpt with
    | some s => litBytes "https://" ++ s ++ litBytes "." ++ urlDomain ++ litBytes "/" ++ page
    | none => litBytes "/" ++ page
  let fullUrl := match anchorOpt with
    | some a => base ++ litBytes "#" ++ a ++ extra
    | none => base ++ extra
  litBytes "<a href=\"" ++ compatEscapeBytes fullUrl ++ litBytes "\">" ++
    compatEscapeBytes text ++ litBytes "</a>"

theorem ws2_6_freelink_site_cross_link_escapes :
    renderFreelinkSiteIntent (litBytes "wikidot.com") (some (litBytes "other"))
      (litBytes "pag&e") (some (litBytes "sec")) [] (litBytes "O'Brien & Co") =
      litBytes "<a href=\"https://other.wikidot.com/pag&amp;e#sec\">O'Brien &amp; Co</a>" := by
  decide

/-! ### WS2 #7: `Render/Xhtml/Embed.php:40,49` (Multi-file `$this->_patterns` typo) -/

/-- Intended multi-file pattern accumulation (`files.flatten`), as opposed to
    `Embed.php:49` `$this->_patterns = array_merge($this->patterns, $patterns)`
    where `$this->patterns` stays `[]` and each subsequent conf file overwrites
    earlier files' patterns. -/
def embedLoadPatternsIntent {α : Type} (files : List (List α)) : List α :=
  files.flatten

theorem ws2_7_embed_preserves_earlier_files {α : Type} (f1 f2 : List α)
    (h1 : (x : α) → x ∈ f1 → x ∈ embedLoadPatternsIntent [f1, f2]) :
    (embedLoadPatternsIntent [f1, f2]).length = f1.length + f2.length ∧
    ∀ x ∈ f1, x ∈ embedLoadPatternsIntent [f1, f2] := by
  refine ⟨?_, h1⟩
  simp [embedLoadPatternsIntent]

theorem ws2_7_embed_mem_first_file {α : Type} (f1 f2 : List α) (x : α) (hx : x ∈ f1) :
    x ∈ embedLoadPatternsIntent [f1, f2] := by
  simp [embedLoadPatternsIntent, hx]

/-! ### WS2 #8: `Render/Xhtml/Social.php:89,122-126,156-157` (Bookmarks bugs) -/

structure SocialSiteSpec where
  key : List Nat
  titleParamName : Option (List Nat) -- e.g. `some "t"` for YahooMyWeb, `some "tttl"` for RawSugar
  literalTittleBugPresent : Bool
  deriving DecidableEq, Repr

def socialSiteIntentTable : List SocialSiteSpec :=
  [ ⟨litBytes "digg", some (litBytes "title"), false⟩
  , ⟨litBytes "rawsugar", some (litBytes "tttl"), false⟩
  , ⟨litBytes "yahoomyweb", some (litBytes "t"), false⟩
  ]

def lookupSocialSiteIntent (name : List Nat) : Option SocialSiteSpec :=
  let low := asciiLowerBytes name
  socialSiteIntentTable.find? (fun s => s.key == low)

theorem ws2_8_social_case_insensitive_and_valid_params :
    lookupSocialSiteIntent (litBytes "Digg") = lookupSocialSiteIntent (litBytes "digg") ∧
    (lookupSocialSiteIntent (litBytes "rawsugar")).map (·.literalTittleBugPresent) = some false ∧
    (lookupSocialSiteIntent (litBytes "yahoomyweb")).bind (·.titleParamName) = some (litBytes "t") := by
  decide

/-! ### WS2 #9: `Parse/Default/Url.php:183,224` (`(.*?)` & `$matches[6]`) -/

/-- Regex `/ (^|[^A-Za-z]) (\*)? (url) (.*?) /` produces 5 match entries
    (`0..4`): group 4 (`(.*?)` unanchored lazy quantifier) always captures `[]`,
    and group index `6` never exists (`none`), so `$trailing = ''`. -/
def urlRegexGroupOpt (groups : List (List Nat)) (idx : Nat) : Option (List Nat) :=
  if h : idx < groups.length then some groups[idx] else none

theorem ws2_9_url_group6_always_none (g0 g1 g2 g3 : List Nat) :
    urlRegexGroupOpt [g0, g1, g2, g3, []] 6 = none ∧
    urlRegexGroupOpt [g0, g1, g2, g3, []] 4 = some [] := by
  simp [urlRegexGroupOpt]

/-! ### WS2 #10: `Render/Xhtml/Table.php` (`caption`, `rowspan`) & `Render/Xhtml/Url.php` (`images`, `footnote`) -/

def renderTableCaptionIntent (isEnd : Bool) : List Nat :=
  if isEnd then litBytes "</caption>\n" else litBytes "<caption>\n"

def renderTableCellIntent (isHeader : Bool) (rowspan : Nat) : List Nat :=
  let tag := if isHeader then litBytes "th" else litBytes "td"
  let rs := if rowspan > 1 then litBytes " rowspan=\"" ++ litBytes (toString rowspan) ++ litBytes "\"" else []
  litBytes "<" ++ tag ++ rs ++ litBytes ">"

def renderUrlFootnoteIntent (href numText : List Nat) : List Nat :=
  litBytes "<sup><a href=\"" ++ compatEscapeBytes href ++ litBytes "\">" ++
    compatEscapeBytes numText ++ litBytes "</a></sup>"

def renderUrlImageIntent (href alt : List Nat) : List Nat :=
  litBytes "<img src=\"" ++ compatEscapeBytes href ++ litBytes "\" alt=\"" ++
    compatEscapeBytes alt ++ litBytes "\" />"

theorem ws2_10_table_and_url_unreachable_specs :
    renderTableCaptionIntent false = litBytes "<caption>\n" ∧
    renderTableCaptionIntent true = litBytes "</caption>\n" ∧
    renderTableCellIntent false 1 = litBytes "<td>" ∧
    renderTableCellIntent false 2 = litBytes "<td rowspan=\"2\">" ∧
    renderUrlFootnoteIntent (litBytes "http://example.com") (litBytes "1") =
      litBytes "<sup><a href=\"http://example.com\">1</a></sup>" ∧
    renderUrlImageIntent (litBytes "http://example.com/a'b.png") (litBytes "a'b.png") =
      litBytes "<img src=\"http://example.com/a'b.png\" alt=\"a'b.png\" />" := by
  decide

end LeanFtml.SpecIntent
