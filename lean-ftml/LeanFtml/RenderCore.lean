/-
  LeanFtml.RenderCore — the R4 Xhtml render-phase core.

  R4 mirrors the validated PHP reference's render phase
  (`Text_Wiki::render('Xhtml')`, see ../R4-SCOPE.md): starting from an
  R3 `ParseState` (post-parse working segments `work`, token table
  `tokens`, and document state `doc`) plus render configuration
  `RenderConf`, it performs:

    1. `Text_Wiki_Render_Xhtml::pre()` on literal text segments outside
     placeholders (escaping `&`, `"`, `<`, `>`, leaving `'` raw under
     `ENT_COMPAT`), including the `str_replace` restore that turns a
     literal U+FFFD back into the `\xFF` delimiter (C-UFFFD-1);
  2. single-pass non-recursive token expansion over `work`, calling
     each mirrored rule's renderer (leaving unreferenced entries in
     `tokens`, such as `Typography`'s 13 constant entries, untouched);
  3. `Text_Wiki::render()`'s post-pass (`Wiki.php:963–972`), stripping
     HTML tags inside `üü...üü` (`\xC3\xBC\xC3\xBC`) delimiter pairs.

  ## No-silent-stand-in discipline (the R3 precedent)

  `RenderRuleId` enumerates strictly the render rules mirrored so far.
  Any referenced token whose rule name is not in `RenderRuleId` is
  recorded in `RenderOutcome.unmirrored` and rendered via the explicit
  fallback marker `[[UNMIRRORED:<rule>:<key>]]`, causing
  `RenderOutcome.isComplete` to be `false`. The conformance driver
  treats any non-complete case as EXCLUDED (out of the pilot corpus),
  never as a pass.
-/

import LeanFtml.TokenState
import LeanFtml.ModuleRules

namespace LeanFtml

/-! ## Render configuration and mirrored-rule enumeration -/

/-- Render-time configuration keys read by mirrored Xhtml render rules.
    Defaults match `ref_configure_wiki()` (`ref-php/harness/wiki-config.php`)
    combined with the rule classes' own `$conf` defaults. -/
structure RenderConf where
  /-- `getRenderConf('xhtml', 'footnote', 'id_prefix')` (Footnote, Footnoteitem). -/
  footnoteIdPrefix : List Nat := []
  /-- `getRenderConf('xhtml', 'bibitem', 'id_prefix')` (Bibitem, Bibcite). -/
  bibitemIdPrefix : List Nat := []
  /-- `getRenderConf('xhtml', 'math', 'id_prefix')` (Equationreference, Math). -/
  mathIdPrefix : List Nat := []
deriving Inhabited

/-- The render rules mirrored in Lean so far.
    Pilot (R4.1): the six NOTES family render rules.
    R4.2 adds the twelve prose-core rules (`LeanFtml/ProseRules.lean`).
    R4.3 adds the fourteen inline-simple and typography rules
    (`LeanFtml/InlineSimpleRules.lean`).
    R4.4 adds the five raw/form and heading/toc rules
    (`LeanFtml/RawHeadingRules.lean`).
    R4.5 adds the four list and table rules
    (`LeanFtml/ListTableRules.lean`).
    R4.6 adds the eleven interactive, link-pure, and small
    stateless rules (`LeanFtml/InteractiveRules.lean`).
    R4.7 adds the Code and Embed rules
    (`LeanFtml/CodeEmbedRules.lean`); Code's `Text_Highlighter`
    branch is a named external boundary, not a mirrored rule
    body (see that file's header).
    R4.8 adds the seven serving-layer and stubbed rules
    (`LeanFtml/ServingRules.lean`): Freelink, Module,
    Module654, Math, Image, Gallery, User; four serving-layer
    paths inside them are named dispositions at the entry
    point rather than mirrored bodies (see that file's
    header). With R4.8 the mirrored set covers every render
    rule whose parse emits tokens, plus Tighten. -/
inductive RenderRuleId where
  | footnote
  | footnoteitem
  | footnoteblock
  | bibitem
  | bibliography
  | bibcite
  | paragraph
  | newline
  | break
  | center
  | horiz
  | separator
  | clearfloat
  | blockquote
  | note
  | divalign
  | comment
  | delimiter
  | url
  | email
  | mathinline
  | interwiki
  | colortext
  | strong
  | emphasis
  | underline
  | strikethrough
  | tt
  | superscript
  | subscript
  | typography
  | tighten
  | raw
  | rawold
  | form
  | heading
  | toc
  | list
  | deflist
  | table
  | tableadv
  | equationreference
  | anchor
  | collapsible
  | tabview
  | button
  | iframe
  | date
  | file
  | size
  | span
  | div
  | code
  | embed
  | freelink
  | module
  | module654
  | math
  | image
  | gallery
  | user
  | html
deriving DecidableEq, Inhabited, Repr

/-- Canonical reference rule name for each mirrored `RenderRuleId`. -/
def renderRuleName : RenderRuleId → String
  | .footnote => "Footnote"
  | .footnoteitem => "Footnoteitem"
  | .footnoteblock => "Footnoteblock"
  | .bibitem => "Bibitem"
  | .bibliography => "Bibliography"
  | .bibcite => "Bibcite"
  | .paragraph => "Paragraph"
  | .newline => "Newline"
  | .break => "Break"
  | .center => "Center"
  | .horiz => "Horiz"
  | .separator => "Separator"
  | .clearfloat => "Clearfloat"
  | .blockquote => "Blockquote"
  | .note => "Note"
  | .divalign => "Divalign"
  | .comment => "Comment"
  | .delimiter => "Delimiter"
  | .url => "Url"
  | .email => "Email"
  | .mathinline => "Mathinline"
  | .interwiki => "Interwiki"
  | .colortext => "Colortext"
  | .strong => "Strong"
  | .emphasis => "Emphasis"
  | .underline => "Underline"
  | .strikethrough => "Strikethrough"
  | .tt => "Tt"
  | .superscript => "Superscript"
  | .subscript => "Subscript"
  | .typography => "Typography"
  | .tighten => "Tighten"
  | .raw => "Raw"
  | .rawold => "Rawold"
  | .form => "Form"
  | .heading => "Heading"
  | .toc => "Toc"
  | .list => "List"
  | .deflist => "Deflist"
  | .table => "Table"
  | .tableadv => "Tableadv"
  | .equationreference => "Equationreference"
  | .anchor => "Anchor"
  | .collapsible => "Collapsible"
  | .tabview => "Tabview"
  | .button => "Button"
  | .iframe => "Iframe"
  | .date => "Date"
  | .file => "File"
  | .size => "Size"
  | .span => "Span"
  | .div => "Div"
  | .code => "Code"
  | .embed => "Embed"
  | .freelink => "Freelink"
  | .module => "Module"
  | .module654 => "Module654"
  | .math => "Math"
  | .image => "Image"
  | .gallery => "Gallery"
  | .user => "User"
  | .html => "Html"

/-- Map a reference token rule name to a mirrored `RenderRuleId`, or
    `none` when that render rule is not yet mirrored. -/
def renderRuleOfName : String → Option RenderRuleId
  | "Footnote" => some .footnote
  | "Footnoteitem" => some .footnoteitem
  | "Footnoteblock" => some .footnoteblock
  | "Bibitem" => some .bibitem
  | "Bibliography" => some .bibliography
  | "Bibcite" => some .bibcite
  | "Paragraph" => some .paragraph
  | "Newline" => some .newline
  | "Break" => some .break
  | "Center" => some .center
  | "Horiz" => some .horiz
  | "Separator" => some .separator
  | "Clearfloat" => some .clearfloat
  | "Blockquote" => some .blockquote
  | "Note" => some .note
  | "Divalign" => some .divalign
  | "Comment" => some .comment
  | "Delimiter" => some .delimiter
  | "Url" => some .url
  | "Email" => some .email
  | "Mathinline" => some .mathinline
  | "Interwiki" => some .interwiki
  | "Colortext" => some .colortext
  | "Strong" => some .strong
  | "Emphasis" => some .emphasis
  | "Underline" => some .underline
  | "Strikethrough" => some .strikethrough
  | "Tt" => some .tt
  | "Superscript" => some .superscript
  | "Subscript" => some .subscript
  | "Typography" => some .typography
  | "Tighten" => some .tighten
  | "Raw" => some .raw
  | "Rawold" => some .rawold
  | "Form" => some .form
  | "Heading" => some .heading
  | "Toc" => some .toc
  | "List" => some .list
  | "Deflist" => some .deflist
  | "Table" => some .table
  | "Tableadv" => some .tableadv
  | "Equationreference" => some .equationreference
  | "Anchor" => some .anchor
  | "Collapsible" => some .collapsible
  | "Tabview" => some .tabview
  | "Button" => some .button
  | "Iframe" => some .iframe
  | "Date" => some .date
  | "File" => some .file
  | "Size" => some .size
  | "Span" => some .span
  | "Div" => some .div
  | "Code" => some .code
  | "Embed" => some .embed
  | "Freelink" => some .freelink
  | "Module" => some .module
  | "Module654" => some .module654
  | "Math" => some .math
  | "Image" => some .image
  | "Gallery" => some .gallery
  | "User" => some .user
  | "Html" => some .html
  | _ => none

/-- The exact list of rule names mirrored by this build (self-declared
    by the conformance driver via `--list-rules`). -/
def mirroredRenderRules : List String :=
  [ renderRuleName .footnote,
    renderRuleName .footnoteitem,
    renderRuleName .footnoteblock,
    renderRuleName .bibitem,
    renderRuleName .bibliography,
    renderRuleName .bibcite,
    renderRuleName .paragraph,
    renderRuleName .newline,
    renderRuleName .break,
    renderRuleName .center,
    renderRuleName .horiz,
    renderRuleName .separator,
    renderRuleName .clearfloat,
    renderRuleName .blockquote,
    renderRuleName .note,
    renderRuleName .divalign,
    renderRuleName .comment,
    renderRuleName .delimiter,
    renderRuleName .url,
    renderRuleName .email,
    renderRuleName .mathinline,
    renderRuleName .interwiki,
    renderRuleName .colortext,
    renderRuleName .strong,
    renderRuleName .emphasis,
    renderRuleName .underline,
    renderRuleName .strikethrough,
    renderRuleName .tt,
    renderRuleName .superscript,
    renderRuleName .subscript,
    renderRuleName .typography,
    renderRuleName .tighten,
    renderRuleName .raw,
    renderRuleName .rawold,
    renderRuleName .form,
    renderRuleName .heading,
    renderRuleName .toc,
    renderRuleName .list,
    renderRuleName .deflist,
    renderRuleName .table,
    renderRuleName .tableadv,
    renderRuleName .equationreference,
    renderRuleName .anchor,
    renderRuleName .collapsible,
    renderRuleName .tabview,
    renderRuleName .button,
    renderRuleName .iframe,
    renderRuleName .date,
    renderRuleName .file,
    renderRuleName .size,
    renderRuleName .span,
    renderRuleName .div,
    renderRuleName .code,
    renderRuleName .embed,
    renderRuleName .freelink,
    renderRuleName .module,
    renderRuleName .module654,
    renderRuleName .math,
    renderRuleName .image,
    renderRuleName .gallery,
    renderRuleName .user ]

/-! ## Byte and option coercion helpers (matching PHP semantics) -/

/-- Decimal ASCII bytes of a natural number (without `String.toList`). -/
def natBytes (n : Nat) : List Nat :=
  go n (n + 1) []
where
  go : Nat → Nat → List Nat → List Nat
    | 0, _, [] => [48]
    | 0, _, acc => acc
    | _, 0, acc => acc
    | k, fuel + 1, acc =>
        let acc' := (48 + k % 10) :: acc
        if k < 10 then acc' else go (k / 10) fuel acc'

/-- Decimal ASCII bytes of an integer. -/
def intBytes (i : Int) : List Nat :=
  if i < 0 then 45 :: natBytes i.natAbs else natBytes i.natAbs

/-- Convert an `OptVal` to its PHP `(string)` byte representation. -/
def renderOptValBytes : OptVal → List Nat
  | .str cs => cs.flatMap utf8Bytes
  | .bytes bs => bs
  | .int n => intBytes n
  | .bool b => if b then [49] else []
  | .null => []
  | .map _ => []
  | .list _ => []

/-- Look up an option key and coerce to bytes (`[]` if absent or null). -/
def optStrBytes (opts : OptMap) (key : List Char) : List Nat :=
  match omGet opts key with
  | some v => renderOptValBytes v
  | none => []

/-- Parse an unsigned decimal integer from ASCII bytes. -/
def parseNatBytes : List Nat → Option Nat
  | [] => none
  | bs => go bs 0
where
  go : List Nat → Nat → Option Nat
    | [], acc => some acc
    | b :: rest, acc =>
        if 48 ≤ b && b ≤ 57 then go rest (acc * 10 + (b - 48)) else none

/-- Extract a natural-number option value (handles `OptVal.int` and
    decimal string/byte forms). -/
def optNat (opts : OptMap) (key : List Char) : Option Nat :=
  match omGet opts key with
  | some (.int n) => if n ≥ 0 then some n.toNat else none
  | some (.str cs) => parseNatBytes (cs.map Char.toNat)
  | some (.bytes bs) => parseNatBytes bs
  | _ => none

/-- PHP `empty($options[$key])` semantics on an `Option OptVal`. -/
def phpEmptyOpt : Option OptVal → Bool
  | none => true
  | some .null => true
  | some (.bool b) => !b
  | some (.int n) => n == 0
  | some (.str cs) => cs.isEmpty || cs == ['0']
  | some (.bytes bs) => bs.isEmpty || bs == [48]
  | some (.list xs) => xs.isEmpty
  | some (.map m) => m.isEmpty

/-! ## HTML escaping (matching PHP 8.5 `htmlspecialchars` flags) -/

/-- Bytewise escape for `ENT_COMPAT` (`&`, `"`, `<`, `>`, leaving `'` raw). -/
def escHtmlCompatByte (b : Nat) : List Nat :=
  if b == 38 then [38, 97, 109, 112, 59]          -- &amp;
  else if b == 34 then [38, 113, 117, 111, 116, 59] -- &quot;
  else if b == 60 then [38, 108, 116, 59]          -- &lt;
  else if b == 62 then [38, 103, 116, 59]          -- &gt;
  else [b]

/-- REFCORR5 Batch 3: bytewise escape for `ENT_NOQUOTES` (`&`, `<`, `>`, leaving both quote characters raw). -/
def escHtmlNoQuotesByte (b : Nat) : List Nat :=
  if b == 38 then [38, 97, 109, 112, 59]
  else if b == 60 then [38, 108, 116, 59]
  else if b == 62 then [38, 103, 116, 59]
  else [b]

/-- Bytewise escape for `ENT_QUOTES` (`&`, `"`, `'`, `<`, `>`). -/
def escHtmlQuotesByte (b : Nat) : List Nat :=
  if b == 39 then [38, 35, 48, 51, 57, 59]         -- &#039;
  else escHtmlCompatByte b

/-- Matches PHP 8.5 `htmlspecialchars($s, ENT_COMPAT)` (UTF-8, without
    `ENT_SUBSTITUTE`): returns `[]` on any invalid UTF-8 input (such as a
    string carrying an unexpanded `\xFF` placeholder byte), and otherwise
    escapes `&`, `"`, `<`, `>`, keeping `'` raw. -/
def htmlSpecialCharsCompat (bs : List Nat) : List Nat :=
  if utf8Valid bs then bs.flatMap escHtmlCompatByte else []

/-- UTF-8 replacement character U+FFFD (`EF BF BD`). -/
def utf8Fffd : List Nat := [0xEF, 0xBF, 0xBD]

/-- Matches PHP 8.5 default `htmlspecialchars($s)`
    (`ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401`, UTF-8): replaces ill-formed
    UTF-8 sequences with U+FFFD (`EF BF BD`) following PHP's `ext/standard/html.c`
    continuation-consumption rule (3-byte leads `E0..EF` consume up to 2
    continuation bytes and 4-byte leads `F0..F4` consume up to 3 before
    range-checking overlongs/surrogates/overflow), and escapes `&`, `"`, `'`
    (`&#039;`), `<`, `>`. -/
def htmlSpecialCharsQuotesSubst (bs : List Nat) : List Nat :=
  go bs bs.length
where
  go : List Nat → Nat → List Nat
    | [], _ => []
    | _, 0 => []
    | b :: rest, fuel + 1 =>
        if b < 0x80 then
          escHtmlQuotesByte b ++ go rest fuel
        else if 0xC2 ≤ b && b < 0xE0 then
          match rest with
          | b2 :: rest' =>
              if isContByte b2 then b :: b2 :: go rest' fuel
              else utf8Fffd ++ go rest fuel
          | [] => utf8Fffd
        else if 0xE0 ≤ b && b < 0xF0 then
          match rest with
          | b2 :: b3 :: rest' =>
              if isContByte b2 && isContByte b3 then
                let ok := (b != 0xE0 || 0xA0 ≤ b2) && (b != 0xED || b2 < 0xA0)
                if ok then b :: b2 :: b3 :: go rest' fuel
                else utf8Fffd ++ go rest' fuel
              else if isContByte b2 then
                utf8Fffd ++ go (b3 :: rest') fuel
              else
                utf8Fffd ++ go rest fuel
          | [b2] =>
              if isContByte b2 then utf8Fffd else utf8Fffd ++ go [b2] fuel
          | [] => utf8Fffd
        else if 0xF0 ≤ b && b ≤ 0xF4 then
          match rest with
          | b2 :: b3 :: b4 :: rest' =>
              if isContByte b2 && isContByte b3 && isContByte b4 then
                let ok := (b != 0xF0 || 0x90 ≤ b2) && (b != 0xF4 || b2 < 0x90)
                if ok then b :: b2 :: b3 :: b4 :: go rest' fuel
                else utf8Fffd ++ go rest' fuel
              else if isContByte b2 && isContByte b3 then
                utf8Fffd ++ go (b4 :: rest') fuel
              else if isContByte b2 then
                utf8Fffd ++ go (b3 :: b4 :: rest') fuel
              else
                utf8Fffd ++ go rest fuel
          | [b2, b3] =>
              if isContByte b2 && isContByte b3 then utf8Fffd
              else if isContByte b2 then utf8Fffd ++ go [b3] fuel
              else utf8Fffd ++ go [b2, b3] fuel
          | [b2] =>
              if isContByte b2 then utf8Fffd else utf8Fffd ++ go [b2] fuel
          | [] => utf8Fffd
        else
          utf8Fffd ++ go rest fuel

/-- REFCORR5 Batch 3: PHP `htmlspecialchars($s, ENT_NOQUOTES | ENT_SUBSTITUTE, 'UTF-8')` — escapes `& < >`, keeps quotes raw, substitutes ill-formed UTF-8 with U+FFFD. -/
def htmlSpecialCharsNoQuotesSubst (bs : List Nat) : List Nat :=
  go bs bs.length
where
  go : List Nat → Nat → List Nat
    | [], _ => []
    | _, 0 => []
    | b :: rest, fuel + 1 =>
        if b < 0x80 then
          escHtmlNoQuotesByte b ++ go rest fuel
        else if 0xC2 ≤ b && b < 0xE0 then
          match rest with
          | b2 :: rest' =>
              if isContByte b2 then b :: b2 :: go rest' fuel
              else utf8Fffd ++ go rest fuel
          | [] => utf8Fffd
        else if 0xE0 ≤ b && b < 0xF0 then
          match rest with
          | b2 :: b3 :: rest' =>
              if isContByte b2 && isContByte b3 then
                let ok := (b != 0xE0 || 0xA0 ≤ b2) && (b != 0xED || b2 < 0xA0)
                if ok then b :: b2 :: b3 :: go rest' fuel
                else utf8Fffd ++ go rest' fuel
              else if isContByte b2 then
                utf8Fffd ++ go (b3 :: rest') fuel
              else
                utf8Fffd ++ go rest fuel
          | [b2] =>
              if isContByte b2 then utf8Fffd else utf8Fffd ++ go [b2] fuel
          | [] => utf8Fffd
        else if 0xF0 ≤ b && b ≤ 0xF4 then
          match rest with
          | b2 :: b3 :: b4 :: rest' =>
              if isContByte b2 && isContByte b3 && isContByte b4 then
                let ok := (b != 0xF0 || 0x90 ≤ b2) && (b != 0xF4 || b2 < 0x90)
                if ok then b :: b2 :: b3 :: b4 :: go rest' fuel
                else utf8Fffd ++ go rest' fuel
              else if isContByte b2 && isContByte b3 then
                utf8Fffd ++ go (b4 :: rest') fuel
              else if isContByte b2 then
                utf8Fffd ++ go (b3 :: b4 :: rest') fuel
              else
                utf8Fffd ++ go rest fuel
          | [b2, b3] =>
              if isContByte b2 && isContByte b3 then utf8Fffd
              else if isContByte b2 then utf8Fffd ++ go [b3] fuel
              else utf8Fffd ++ go [b2, b3] fuel
          | [b2] =>
              if isContByte b2 then utf8Fffd else utf8Fffd ++ go [b2] fuel
          | [] => utf8Fffd
        else
          utf8Fffd ++ go rest fuel

/-- `Text_Wiki_Render_Xhtml::pre()` on a decoded literal text segment:
    escapes `&`, `"`, `<`, `>` under `ENT_COMPAT` (leaving `'` raw).
    A literal U+FFFD is not escaped here; `pre()`'s `str_replace` restore
    treats those bytes as delimiters, which `ufffdBytes` applies before
    this escape runs on the recovered pieces. -/
def xhtmlPreText (cs : List Char) : List Nat :=
  (cs.flatMap utf8Bytes).flatMap escHtmlCompatByte

/-- UTF-8 encoding of U+FFFD, the `ENT_SUBSTITUTE` image of the `\xFF`
    delimiter (`htmlspecialchars("\xFF", ENT_COMPAT | ENT_SUBSTITUTE)`). -/
def ufffdSubstBytes : List Nat := [0xEF, 0xBF, 0xBD]

/-- `pre()`'s restore: replace every `EF BF BD` sequence with the
    delimiter byte `0xFF`. On a literal U+FFFD this is the collision. -/
def reconvertFffdBytes : List Nat → List Nat
  | [] => []
  | 0xEF :: 0xBF :: 0xBD :: rest => 0xFF :: reconvertFffdBytes rest
  | b :: rest => b :: reconvertFffdBytes rest

/-- The character `pre()` re-converts. -/
def isUfffdChar (c : Char) : Bool :=
  c == '\uFFFD'

theorem utf8Bytes_ufffd :
    utf8Bytes '\uFFFD' = ufffdSubstBytes := rfl

theorem reconvertFffdBytes_marker :
    reconvertFffdBytes ufffdSubstBytes = [0xFF] := rfl

theorem reconvertFffdBytes_ascii :
    reconvertFffdBytes [97, 32, 98] = [97, 32, 98] := rfl

/-! ## Post-render TOC NUL-pair `strip_tags` pass (REFCORR4 C-SUSPECT-XRULE-4; `Wiki.php`) -/

/-- The unforgeable 4-byte marker: two NUL pairs. The old marker was the
    authorable UTF-8 pair `üü`; REFCORR4 C-SUSPECT-XRULE-4 replaced both
    the Toc renderer emission and this post-pass sentinel together. -/
def tocStripDelim : List Nat := [0, 0, 0, 0]

/-- Strip `<...>` HTML tags from a byte span (used inside `üü...üü` pairs
    by `Text_Wiki::render()`'s `strip_tags` post-pass). Tail-recursive. -/
def stripHtmlTags (bs : List Nat) : List Nat :=
  go bs false 0 []
where
  -- `inTag = false`: outside tag; `inTag = true`, `quote = 0|34|39`
  go : List Nat → Bool → Nat → List Nat → List Nat
    | [], _, _, acc => acc.reverse
    | b :: rest, false, _, acc =>
        if b == 60 then go rest true 0 acc
        else go rest false 0 (b :: acc)
    | b :: rest, true, q, acc =>
        if q != 0 then
          if b == q then go rest true 0 acc else go rest true q acc
        else if b == 34 || b == 39 then go rest true b acc
        else if b == 62 then go rest false 0 acc
        else go rest true 0 acc

/-- Find the first index of `tocStripDelim` in `bs`. -/
def findTocDelim (bs : List Nat) : Option Nat :=
  go bs 0
where
  go : List Nat → Nat → Option Nat
    | [], _ => none
    | b1 :: b2 :: b3 :: b4 :: rest, idx =>
        if b1 == 0 && b2 == 0 && b3 == 0 && b4 == 0 then some idx
        else go (b2 :: b3 :: b4 :: rest) (idx + 1)
    | _ :: rest, idx => go rest (idx + 1)

/-- Post-render `preg_replace_callback("/\0\0(.*?)\0\0/s", strip_tags,
    $output)` from `Text_Wiki::render()`. Tail-recursive with a 1-head
    check so non-NUL bytes advance in O(1). -/
def postStripToc (bs : List Nat) : List Nat :=
  go bs (bs.length + 1) []
where
  go : List Nat → Nat → List Nat → List Nat
    | [], _, acc => acc.reverse
    | _, 0, acc => acc.reverse
    | b1 :: rest, fuel + 1, acc =>
        if b1 == 0 then
          match rest with
          | 0 :: 0 :: 0 :: after =>
              match findTocDelim after with
              | some j =>
                  go (after.drop (j + 4)) fuel
                    ((stripHtmlTags (after.take j)).reverse ++ acc)
              | none =>
                  acc.reverse ++ (b1 :: rest)
          | _ => go rest fuel (b1 :: acc)
        else
          go rest fuel (b1 :: acc)

/-! ## Render outcome and generic single-pass segment renderer -/

/-- Outcome of rendering a parsed document. A case is in scope of the
    mirrored renderer iff `unmirrored` and `missingKeys` are both empty. -/
structure RenderOutcome where
  /-- Rendered bytes (exact HTML when `isComplete = true`; contains
      stated fallback markers otherwise). -/
  output : List Nat
  /-- Deduplicated rule names of referenced unmirrored tokens, in
      encounter order. -/
  unmirrored : List String
  /-- Deduplicated referenced token keys absent from the token table. -/
  missingKeys : List Nat
deriving Inhabited

/-- True iff every referenced token resolved to a mirrored render rule. -/
def RenderOutcome.isComplete (o : RenderOutcome) : Bool :=
  o.unmirrored.isEmpty && o.missingKeys.isEmpty

/-- Append `x` to `xs` iff not already present. -/
def pushUnique {α : Type} [DecidableEq α] (xs : List α) (x : α) : List α :=
  if xs.contains x then xs else xs ++ [x]

/-- Stated unmistakable fallback emitted for an unmirrored token. -/
def unmirroredFallback (rule : String) (key : Nat) : List Nat :=
  litBytes "[[UNMIRRORED:" ++ rule.toList.map Char.toNat ++
    litBytes ":" ++ natBytes key ++ litBytes "]]"

/-- Stated unmistakable fallback emitted if a placeholder key is absent
    from the token table. -/
def missingKeyFallback (key : Nat) : List Nat :=
  litBytes "[[MISSING_TOKEN:" ++ natBytes key ++ litBytes "]]"

/-! ## U+FFFD delimiter re-conversion (C-UFFFD-1)

    `pre()` runs `htmlspecialchars` (which turns each `\xFF` into the
    three bytes `EF BF BD`) and then `str_replace`s every such sequence
    back to `\xFF`. A literal U+FFFD in a text segment is the same byte
    sequence, so it re-enters the delimiter stream. The walker below
    is that rescan, with the recovery live exhibits where the fossil
    loop fatals (R-UFFFD-1): a fake delimiter in mid-text vanishes and
    the surrounding text is recovered (space runs collapsed, as live's
    served text joins them); a fake delimiter immediately before a
    block-end token leaks that token's index and still renders it,
    unless the next token is a block start, in which case both indices
    leak and the two blocks merge; a heading end merged with the
    following paragraph start swallows the paragraph into the heading
    and surfaces the paragraph break as `<br />\n<br />`; a fake
    delimiter immediately before an inline start/end pair leaks the
    closing index and emits the pair's text; two or more fake
    delimiters that are the whole of a paragraph consume both
    placeholders and serve empty. Leaked indices are this mirror's own
    token numbers. Live's block indices in the same shapes are one
    greater (paragraph-end 2 against this mirror's 1); that gap is the
    bounded residue, not a number the walker invents. -/

/-- A text segment contains a literal U+FFFD. -/
def segHasUfffd : TSeg → Bool
  | .text cs => cs.contains '\uFFFD'
  | .tok _ => false

/-- One atom of the post-`pre()` stream. The token entry is captured
    when the atom is built, so the walk agrees for any two lookups
    that agree on the keys the segment list actually references. -/
inductive UfffdAtom where
  | text : List Char → UfffdAtom
  | fake : UfffdAtom
  | tok : Nat → Option TokenEntry → UfffdAtom

/-- Rule name and `type` option of a captured token, when the key
    resolved. -/
def ufffdTokInfo : Option TokenEntry → Option (String × List Char)
  | none => none
  | some e =>
      match omGet e.opts "type".toList with
      | some (.str ty) => some (e.rule, ty)
      | _ => some (e.rule, [])

def ufffdIsBlockEnd (info : String × List Char) : Bool :=
  let (rule, ty) := info
  (rule == "Paragraph" && ty == "end".toList) ||
  (rule == "Heading" && ty == "end".toList) ||
  (rule == "List" &&
    (ty == "bullet_item_end".toList || ty == "number_item_end".toList ||
     ty == "bullet_list_end".toList || ty == "number_list_end".toList))

def ufffdIsBlockStart (info : String × List Char) : Bool :=
  let (rule, ty) := info
  (rule == "Paragraph" && ty == "start".toList) ||
  (rule == "Heading" && ty == "start".toList) ||
  (rule == "List" &&
    (ty == "bullet_item_start".toList || ty == "number_item_start".toList ||
     ty == "bullet_list_start".toList || ty == "number_list_start".toList))

def ufffdIsInlineStart (info : String × List Char) : Bool :=
  let (rule, ty) := info
  ty == "start".toList &&
  (rule == "Strong" || rule == "Emphasis" || rule == "Underline" ||
   rule == "Strikethrough" || rule == "Tt" ||
   rule == "Superscript" || rule == "Subscript")

def ufffdIsParaStart (info : String × List Char) : Bool :=
  info.1 == "Paragraph" && info.2 == "start".toList

def ufffdIsParaEnd (info : String × List Char) : Bool :=
  info.1 == "Paragraph" && info.2 == "end".toList

def ufffdIsHeadingEnd (info : String × List Char) : Bool :=
  info.1 == "Heading" && info.2 == "end".toList

/-- Split a literal text segment on U+FFFD. Each character becomes a
    fake delimiter; the pieces between them stay text. -/
def explodeUfffd (cs : List Char) : List UfffdAtom :=
  go cs []
where
  go : List Char → List Char → List UfffdAtom
    | [], acc =>
        if acc.isEmpty then [] else [UfffdAtom.text acc.reverse]
    | c :: rest, acc =>
        if isUfffdChar c then
          let pre := if acc.isEmpty then [] else [UfffdAtom.text acc.reverse]
          pre ++ UfffdAtom.fake :: go rest []
        else
          go rest (c :: acc)

def flattenUfffd (lookup : Nat → Option TokenEntry) : List TSeg → List UfffdAtom
  | [] => []
  | .tok k :: rest => UfffdAtom.tok k (lookup k) :: flattenUfffd lookup rest
  | .text cs :: rest => explodeUfffd cs ++ flattenUfffd lookup rest

def ufffdAllFake : List UfffdAtom → Bool
  | [] => true
  | .fake :: rest => ufffdAllFake rest
  | _ => false

def ufffdAtLeast2 : List UfffdAtom → Bool
  | _ :: _ :: _ => true
  | _ => false

/-- A paragraph whose only content is two or more re-converted
    characters: both placeholders are consumed and nothing is served. -/
def ufffdOnlyFakesPara (atoms : List UfffdAtom) : Bool :=
  match atoms with
  | .tok _ e1 :: rest =>
      match rest.reverse with
      | .tok _ e2 :: mid =>
          match ufffdTokInfo e1, ufffdTokInfo e2 with
          | some i1, some i2 =>
              ufffdIsParaStart i1 && ufffdIsParaEnd i2 &&
                ufffdAllFake mid && ufffdAtLeast2 mid
          | _, _ => false
      | _ => false
  | _ => false

/-- Collapse a horizontal whitespace run to one space. -/
def ufffdCollapseWs (cs : List Char) : List Char :=
  go false cs
where
  go (prev : Bool) : List Char → List Char
    | [] => []
    | c :: rest =>
        if c == ' ' || c == '\t' then
          if prev then go true rest else ' ' :: go true rest
        else
          c :: go false rest

def lstripWs : List Char → List Char
  | ' ' :: rest => lstripWs rest
  | '\t' :: rest => lstripWs rest
  | cs => cs

/-- The first atom that is not a fake delimiter. -/
def skipFakes : List UfffdAtom → List UfffdAtom
  | .fake :: rest => skipFakes rest
  | other => other

/-- A fake run opens a block-end token or an inline start token. -/
def boundaryFake (atoms : List UfffdAtom) : Bool :=
  match skipFakes atoms with
  | .tok _ e :: _ =>
      match ufffdTokInfo e with
      | some info => ufffdIsBlockEnd info || ufffdIsInlineStart info
      | none => false
  | _ => false

/-- Gather literal text, swallowing fake delimiters that do not open
    a block end or an inline token. `saw` is true when a fake was
    swallowed, which is when the joined text collapses whitespace. -/
def gatherUfffd : List UfffdAtom → List Char × Bool × List UfffdAtom
  | [] => ([], false, [])
  | .tok k e :: rest => ([], false, .tok k e :: rest)
  | .text cs :: rest =>
      let (more, saw, rest') := gatherUfffd rest
      (cs ++ more, saw, rest')
  | .fake :: rest =>
      if boundaryFake (.fake :: rest) then
        ([], false, .fake :: rest)
      else
        let (more, _, rest') := gatherUfffd rest
        (more, true, rest')

/-- Render one captured token the way `renderSegsLoop` would. -/
def renderCaptured
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (conf : RenderConf) (doc : DocState) (k : Nat) (e : Option TokenEntry) :
    List Nat :=
  match e with
  | none => missingKeyFallback k
  | some entry =>
      match renderRuleOfName entry.rule with
      | some rid => dispatch rid conf doc entry.opts
      | none => unmirroredFallback entry.rule k

/-- Bytes of an inline pair's interior, up to its closing token.
    Fails if a fake delimiter or a different token comes first. -/
def takeInline (rule : String) :
    List UfffdAtom → Option (List Char × Nat × Option TokenEntry × List UfffdAtom)
  | [] => none
  | .fake :: _ => none
  | .text cs :: rest =>
      match takeInline rule rest with
      | some (inner, k, e, rest') => some (cs ++ inner, k, e, rest')
      | none => none
  | .tok k e :: rest =>
      match ufffdTokInfo e with
      | some (rule', ty) =>
          if rule' == rule && ty == "end".toList then
            some ([], k, e, rest)
          else
            none
      | none => none

/-- The two breaks a paragraph swallowed into a heading leaves behind
    (`</p>\n\n` does not survive inside the heading span; the blank
    line surfaces as `<br />\n<br />`, trailing newline stripped by the
    capture frame). -/
def swallowedBreaks : List Nat :=
  litBytes "<br />\n<br />"

/-- Leak the index of every further token immediately adjacent to a
    block-end/block-start pair opened by a fake delimiter, stopping at
    the first text or fake atom. REFCORR7 (idx-after): live leaks the
    whole adjacent run, not just the first two tokens. A pending
    heading-end swallow keeps the old two-token shape so the heading
    merge is unchanged. -/
def ufffdLeakRun : List UfffdAtom → List Nat × List UfffdAtom
  | .tok k _ :: rest =>
      let (leaked, tail) := ufffdLeakRun rest
      (natBytes k ++ leaked, tail)
  | atoms => ([], atoms)

/-- Rescan a flattened stream. `edge` trims text exposed at a block
    start by a removed fake delimiter. `owe` is a heading-end token
    whose close was delayed so a following paragraph could be swallowed. -/
def ufffdWalk
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (conf : RenderConf) (doc : DocState) :
    Nat → List UfffdAtom → Bool → Option (Nat × Option TokenEntry) → List Nat → List Nat
  | 0, _, _, _, acc => acc
  | _ + 1, [], _, owe, acc =>
      match owe with
      | some (k, e) => acc ++ renderCaptured dispatch conf doc k e
      | none => acc
  | fuel + 1, atoms@(.text _ :: _), edge, owe, acc =>
      let (cs, saw, rest) := gatherUfffd atoms
      let cs := if edge then lstripWs cs else cs
      let cs := if saw then ufffdCollapseWs cs else cs
      let acc := if cs.isEmpty then acc else acc ++ xhtmlPreText cs
      ufffdWalk dispatch conf doc fuel rest false owe acc
  | fuel + 1, .fake :: rest, edge, owe, acc =>
      match skipFakes (.fake :: rest) with
      | .tok k e :: rest2 =>
          match ufffdTokInfo e with
          | some info =>
              if ufffdIsBlockEnd info then
                match rest2 with
                | .tok k2 e2 :: rest3 =>
                    match ufffdTokInfo e2 with
                    | some info2 =>
                        if ufffdIsBlockStart info2 then
                          let acc := acc ++ natBytes k ++ natBytes k2
                          let owe' :=
                            if ufffdIsHeadingEnd info && ufffdIsParaStart info2 then
                              some (k, e)
                            else
                              owe
                          let (leaked, tail) :=
                            if owe'.isNone then ufffdLeakRun rest3 else ([], rest3)
                          ufffdWalk dispatch conf doc fuel tail false owe' (acc ++ leaked)
                        else
                          let acc := acc ++ natBytes k ++ renderCaptured dispatch conf doc k e
                          ufffdWalk dispatch conf doc fuel rest2 false owe acc
                    | none =>
                        let acc := acc ++ natBytes k ++ renderCaptured dispatch conf doc k e
                        ufffdWalk dispatch conf doc fuel rest2 false owe acc
                | _ =>
                    let acc := acc ++ natBytes k ++ renderCaptured dispatch conf doc k e
                    ufffdWalk dispatch conf doc fuel rest2 false owe acc
              else if ufffdIsInlineStart info then
                match takeInline info.1 rest2 with
                | some (inner, endK, _, rest3) =>
                    let acc := acc ++ natBytes endK ++ xhtmlPreText inner
                    ufffdWalk dispatch conf doc fuel rest3 false owe acc
                | none =>
                    ufffdWalk dispatch conf doc fuel rest edge owe acc
              else
                ufffdWalk dispatch conf doc fuel rest edge owe acc
          | none =>
              ufffdWalk dispatch conf doc fuel rest edge owe acc
      | _ =>
          ufffdWalk dispatch conf doc fuel rest edge owe acc
  | fuel + 1, .tok k e :: rest, _, owe, acc =>
      match owe with
      | some (hk, he) =>
          match ufffdTokInfo e with
          | some info =>
              if ufffdIsParaEnd info then
                let acc := acc ++ swallowedBreaks ++ renderCaptured dispatch conf doc hk he
                ufffdWalk dispatch conf doc fuel rest false none acc
              else
                let acc := acc ++ renderCaptured dispatch conf doc k e
                let edge := ufffdIsBlockStart info
                ufffdWalk dispatch conf doc fuel rest edge owe acc
          | none =>
              let acc := acc ++ renderCaptured dispatch conf doc k e
              ufffdWalk dispatch conf doc fuel rest false owe acc
      | none =>
          let acc := acc ++ renderCaptured dispatch conf doc k e
          let edge :=
            match ufffdTokInfo e with
            | some info => ufffdIsBlockStart info
            | none => false
          ufffdWalk dispatch conf doc fuel rest edge none acc

/-- Render bytes of a segment list after the U+FFFD rescan. -/
def ufffdBytes
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (lookup : Nat → Option TokenEntry)
    (conf : RenderConf) (doc : DocState) (work : List TSeg) : List Nat :=
  let atoms := flattenUfffd lookup work
  if ufffdOnlyFakesPara atoms then
    []
  else
    ufffdWalk dispatch conf doc (atoms.length + 1) atoms false none []

/-- Single-pass segment expansion (`Text_Wiki::render()` loop), generic
    over the rule dispatcher and token-table lookup function. -/
def renderSegsLoop
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (lookup : Nat → Option TokenEntry)
    (conf : RenderConf) (doc : DocState) :
    List TSeg → RenderOutcome
  | [] => { output := [], unmirrored := [], missingKeys := [] }
  | seg :: rest =>
      let tail := renderSegsLoop dispatch lookup conf doc rest
      match seg with
      | .text cs =>
          { tail with output := xhtmlPreText cs ++ tail.output }
      | .tok k =>
          match lookup k with
          | none =>
              { output := missingKeyFallback k ++ tail.output,
                unmirrored := tail.unmirrored,
                missingKeys := if tail.missingKeys.contains k
                               then tail.missingKeys
                               else k :: tail.missingKeys }
          | some entry =>
              match renderRuleOfName entry.rule with
              | some rid =>
                  { tail with
                    output := dispatch rid conf doc entry.opts ++ tail.output }
              | none =>
                  { output := unmirroredFallback entry.rule k ++ tail.output,
                    unmirrored := if tail.unmirrored.contains entry.rule
                                  then tail.unmirrored
                                  else entry.rule :: tail.unmirrored,
                    missingKeys := tail.missingKeys }

/-- Full `Text_Wiki::render('Xhtml')` pipeline over a segment list,
    token lookup function, render configuration, and document state.
    Literal text with no U+FFFD takes the historical path (`xhtmlPreText`
    + single-pass expansion + `postStripToc`). A text segment that
    contains U+FFFD is rescanned by `ufffdBytes` first; exclusion flags
    still come from the single-pass loop, so a skipped token whose rule
    is unmirrored cannot become a silent pass. -/
def renderWith
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (lookup : Nat → Option TokenEntry)
    (conf : RenderConf) (work : List TSeg) (doc : DocState) : RenderOutcome :=
  if work.any segHasUfffd then
    let flags := renderSegsLoop dispatch lookup conf doc work
    { output := postStripToc (ufffdBytes dispatch lookup conf doc work),
      unmirrored := flags.unmirrored,
      missingKeys := flags.missingKeys }
  else
    let raw := renderSegsLoop dispatch lookup conf doc work
    { raw with output := postStripToc raw.output }

/-! ## Core structural theorems -/

/-- Every mirrored `RenderRuleId` round-trips through `renderRuleName`
    and `renderRuleOfName`. -/
theorem renderRuleOfName_roundtrip (r : RenderRuleId) :
    renderRuleOfName (renderRuleName r) = some r := by
  cases r <;> rfl

/-- `htmlSpecialCharsCompat` returns `[]` on any byte list that fails
    UTF-8 validation (matching PHP 8.5 `htmlspecialchars(..., ENT_COMPAT)`). -/
theorem htmlSpecialCharsCompat_invalid (bs : List Nat) (h : utf8Valid bs = false) :
    htmlSpecialCharsCompat bs = [] := by
  simp [htmlSpecialCharsCompat, h]

private theorem utf8Valid_go_ascii :
    ∀ (bs : List Nat) (fuel : Nat),
      bs.length ≤ fuel → (∀ b ∈ bs, b < 0x80) → utf8Valid.go bs fuel = true
  | [], _, _, _ => rfl
  | _ :: _, 0, hle, _ => by simp at hle
  | b :: rest, fuel + 1, hle, hall => by
      have hb : b < 0x80 := hall b (List.mem_cons_self ..)
      have hrest : ∀ x ∈ rest, x < 0x80 :=
        fun x hx => hall x (List.mem_cons_of_mem _ hx)
      have hle' : rest.length ≤ fuel := Nat.le_of_succ_le_succ hle
      unfold utf8Valid.go
      simp only [hb, ↓reduceIte]
      exact utf8Valid_go_ascii rest fuel hle' hrest

/-- Every pure-ASCII byte list passes UTF-8 validation. -/
theorem utf8Valid_ascii (bs : List Nat) (h : ∀ b ∈ bs, b < 0x80) :
    utf8Valid bs = true :=
  utf8Valid_go_ascii bs bs.length (Nat.le_refl _) h

/-- On pure-ASCII input, `htmlSpecialCharsCompat` reduces to bytewise
    `escHtmlCompatByte` escaping. -/
theorem htmlSpecialCharsCompat_ascii (bs : List Nat) (h : ∀ b ∈ bs, b < 0x80) :
    htmlSpecialCharsCompat bs = bs.flatMap escHtmlCompatByte := by
  simp [htmlSpecialCharsCompat, utf8Valid_ascii bs h]

private theorem htmlSpecialCharsQuotesSubst_go_ascii :
    ∀ (bs : List Nat) (fuel : Nat),
      bs.length ≤ fuel → (∀ b ∈ bs, b < 0x80) →
      htmlSpecialCharsQuotesSubst.go bs fuel = bs.flatMap escHtmlQuotesByte
  | [], _, _, _ => by simp [htmlSpecialCharsQuotesSubst.go]
  | _ :: _, 0, hle, _ => by simp at hle
  | b :: rest, fuel + 1, hle, hall => by
      have hb : b < 0x80 := hall b (List.mem_cons_self ..)
      have hrest : ∀ x ∈ rest, x < 0x80 :=
        fun x hx => hall x (List.mem_cons_of_mem _ hx)
      have hle' : rest.length ≤ fuel := Nat.le_of_succ_le_succ hle
      unfold htmlSpecialCharsQuotesSubst.go
      simp only [hb, ↓reduceIte, List.flatMap_cons]
      rw [htmlSpecialCharsQuotesSubst_go_ascii rest fuel hle' hrest]

/-- On pure-ASCII input, `htmlSpecialCharsQuotesSubst` reduces to bytewise
    `escHtmlQuotesByte` escaping (including `'` → `&#039;`). -/
theorem htmlSpecialCharsQuotesSubst_ascii (bs : List Nat) (h : ∀ b ∈ bs, b < 0x80) :
    htmlSpecialCharsQuotesSubst bs = bs.flatMap escHtmlQuotesByte :=
  htmlSpecialCharsQuotesSubst_go_ascii bs bs.length (Nat.le_refl _) h

/-- No-silent-stand-in invariant (soundness of exclusion): if a referenced
    token in `work` resolves to an entry whose rule name is not mirrored
    (`renderRuleOfName entry.rule = none`), then `unmirrored` contains
    `entry.rule`. -/
theorem renderSegsLoop_unmirrored_mem
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (lookup : Nat → Option TokenEntry)
    (conf : RenderConf) (doc : DocState)
    (work : List TSeg) (k : Nat) (entry : TokenEntry)
    (hmem : TSeg.tok k ∈ work)
    (hlook : lookup k = some entry)
    (hunm : renderRuleOfName entry.rule = none) :
    entry.rule ∈ (renderSegsLoop dispatch lookup conf doc work).unmirrored := by
  induction work with
  | nil => cases hmem
  | cons seg rest ih =>
      simp only [List.mem_cons] at hmem
      rcases hmem with rfl | htail
      · simp only [renderSegsLoop, hlook, hunm]
        split
        · rename_i hc
          exact List.contains_iff_mem.mp hc
        · exact List.mem_cons_self ..
      · have hih := ih htail
        cases seg with
        | text cs => exact hih
        | tok k' =>
            simp only [renderSegsLoop]
            cases hlk' : lookup k' with
            | none => exact hih
            | some e' =>
                simp only
                cases hr' : renderRuleOfName e'.rule with
                | some _ => exact hih
                | none =>
                    simp only
                    split
                    · exact hih
                    · exact List.mem_cons_of_mem _ hih

/-- Corollary: any document referencing an unmirrored render rule has
    `isComplete = false`, so the driver can never silently pass it. -/
theorem renderWith_unmirrored_not_complete
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (lookup : Nat → Option TokenEntry)
    (conf : RenderConf) (doc : DocState)
    (work : List TSeg) (k : Nat) (entry : TokenEntry)
    (hmem : TSeg.tok k ∈ work)
    (hlook : lookup k = some entry)
    (hunm : renderRuleOfName entry.rule = none) :
    (renderWith dispatch lookup conf work doc).isComplete = false := by
  have hmem' := renderSegsLoop_unmirrored_mem dispatch lookup conf doc work k entry hmem hlook hunm
  cases hff : work.any segHasUfffd with
  | true =>
      simp only [renderWith, hff, RenderOutcome.isComplete]
      cases hu : (renderSegsLoop dispatch lookup conf doc work).unmirrored with
      | nil => simp [hu] at hmem'
      | cons _ _ => rfl
  | false =>
      simp only [renderWith, hff, RenderOutcome.isComplete]
      cases hu : (renderSegsLoop dispatch lookup conf doc work).unmirrored with
      | nil => simp [hu] at hmem'
      | cons _ _ => rfl

/-- Completeness invariant: if every token referenced in `work` exists in
    `lookup` and maps to a mirrored `RenderRuleId`, then `isComplete = true`. -/
theorem renderWith_all_mirrored_complete
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (lookup : Nat → Option TokenEntry)
    (conf : RenderConf) (doc : DocState)
    (work : List TSeg)
    (hall : ∀ k, TSeg.tok k ∈ work →
      ∃ entry rid, lookup k = some entry ∧ renderRuleOfName entry.rule = some rid) :
    (renderWith dispatch lookup conf work doc).isComplete = true := by
  suffices h : (renderSegsLoop dispatch lookup conf doc work).unmirrored = [] ∧
      (renderSegsLoop dispatch lookup conf doc work).missingKeys = [] by
    cases hff : work.any segHasUfffd with
    | true => simp [renderWith, hff, RenderOutcome.isComplete, h.1, h.2]
    | false => simp [renderWith, hff, RenderOutcome.isComplete, h.1, h.2]
  induction work with
  | nil => exact ⟨rfl, rfl⟩
  | cons seg rest ih =>
      have hrest : ∀ k, TSeg.tok k ∈ rest →
          ∃ entry rid, lookup k = some entry ∧ renderRuleOfName entry.rule = some rid :=
        fun k hk => hall k (List.mem_cons_of_mem _ hk)
      obtain ⟨hu, hm⟩ := ih hrest
      cases seg with
      | text cs => simp [renderSegsLoop, hu, hm]
      | tok k =>
          obtain ⟨entry, rid, hlook, hrid⟩ := hall k (List.mem_cons_self ..)
          simp [renderSegsLoop, hlook, hrid, hu, hm]

/-- Unreferenced-token irrelevance: two token lookups that agree on all
    keys actually referenced in `work` produce the exact same `RenderOutcome`.
    (Formalizes why `Typography`'s 13 unreferenced table entries cannot
    affect rendering or trigger exclusion.) -/
theorem renderWith_lookup_ext
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (lookup₁ lookup₂ : Nat → Option TokenEntry)
    (conf : RenderConf) (doc : DocState)
    (work : List TSeg)
    (hagree : ∀ k, TSeg.tok k ∈ work → lookup₁ k = lookup₂ k) :
    renderWith dispatch lookup₁ conf work doc =
    renderWith dispatch lookup₂ conf work doc := by
  -- Proved before `hflat` exists, so the induction does not generalize
  -- the flatten equality into the motive.
  have hloop : renderSegsLoop dispatch lookup₁ conf doc work =
      renderSegsLoop dispatch lookup₂ conf doc work := by
    induction work with
    | nil => rfl
    | cons seg rest ih =>
        have hrest : ∀ k, TSeg.tok k ∈ rest → lookup₁ k = lookup₂ k :=
          fun k hk => hagree k (List.mem_cons_of_mem _ hk)
        have htail := ih hrest
        cases seg with
        | text cs => simp [renderSegsLoop, htail]
        | tok k =>
            have hk := hagree k (List.mem_cons_self ..)
            simp [renderSegsLoop, hk, htail]
  have hflat : flattenUfffd lookup₁ work = flattenUfffd lookup₂ work := by
    clear hloop
    induction work with
    | nil => rfl
    | cons seg rest ih =>
        have hrest : ∀ k, TSeg.tok k ∈ rest → lookup₁ k = lookup₂ k :=
          fun k hk => hagree k (List.mem_cons_of_mem _ hk)
        have htail := ih hrest
        cases seg with
        | text cs => simp [flattenUfffd, htail]
        | tok k =>
            have hk := hagree k (List.mem_cons_self ..)
            simp [flattenUfffd, hk, htail]
  cases hff : work.any segHasUfffd with
  | true => simp [renderWith, ufffdBytes, hff, hloop, hflat]
  | false => simp [renderWith, hff, hloop]

/-- `postStripToc.go` is the identity on any byte list containing no NUL
    byte (in particular, any ordinary rendered output), whenever fuel is
    at least the list length. -/
private theorem postStripToc_go_no_nul :
    ∀ (bs : List Nat) (fuel : Nat) (acc : List Nat),
      bs.length ≤ fuel →
      (∀ b ∈ bs, b ≠ 0) →
      postStripToc.go bs fuel acc = acc.reverse ++ bs
  | [], _, acc, _, _ => by simp [postStripToc.go]
  | b :: rest, 0, _, hle, _ => by simp at hle
  | b :: rest, fuel + 1, acc, hle, hno => by
      have hb : b ≠ 0 := hno b (List.mem_cons_self ..)
      have hbeq : (b == 0) = false := beq_false_of_ne hb
      have hrest : ∀ x ∈ rest, x ≠ 0 :=
        fun x hx => hno x (List.mem_cons_of_mem _ hx)
      have hle' : rest.length ≤ fuel := Nat.le_of_succ_le_succ hle
      simp only [postStripToc.go, hbeq, Bool.false_eq_true, ↓reduceIte]
      rw [postStripToc_go_no_nul rest fuel (b :: acc) hle' hrest]
      simp [List.reverse_cons]

/-- `postStripToc` is the identity on any byte list with no NUL byte. -/
theorem postStripToc_no_nul (bs : List Nat) (h : ∀ b ∈ bs, b ≠ 0) :
    postStripToc bs = bs := by
  unfold postStripToc
  rw [postStripToc_go_no_nul bs (bs.length + 1) [] (Nat.le_succ _) h]
  rfl

/-- Concrete `postStripToc` test: strips HTML tags inside NUL-pair pairs
    while preserving surrounding bytes. -/
theorem postStripToc_strips_tags :
    postStripToc (litBytes "a" ++ tocStripDelim ++ litBytes "<b>hi</b>" ++
                  tocStripDelim ++ litBytes "z") =
      litBytes "ahiz" := rfl

-- The examples reduce the fuel-bounded rescan in the kernel. A
-- paragraph of ordinary length nests past the default depth.
set_option maxRecDepth 8192

/-! ## Worked examples of the U+FFFD rescan

    The dispatcher below emits the bytes the mirrored Paragraph, Strong,
    Heading, and List rules emit for these option shapes, so each
    example is the rescan's output on the post-parse segment list of
    one decisive case. Block-end indices are this mirror's own numbers
    (paragraph end is 1), which is the 2-versus-1 residue against live. -/

def ufffdExEntry (rule ty : String) : TokenEntry :=
  { rule := rule, opts := [("type".toList, .str ty.toList)] }

def ufffdExLookup (table : List (Nat × String × String)) (k : Nat) :
    Option TokenEntry :=
  match table.find? (fun p => p.1 == k) with
  | some (_, rule, ty) => some (ufffdExEntry rule ty)
  | none => none

def ufffdExDispatch (rid : RenderRuleId) (_c : RenderConf) (_d : DocState)
    (opts : OptMap) : List Nat :=
  let ty := match omGet opts "type".toList with
    | some (.str cs) => cs
    | _ => []
  match rid with
  | .paragraph =>
      if ty == "start".toList then litBytes "<p>"
      else if ty == "end".toList then litBytes "</p>\n\n"
      else []
  | .strong =>
      if ty == "start".toList then litBytes "<strong>"
      else if ty == "end".toList then litBytes "</strong>"
      else []
  | .heading =>
      if ty == "start".toList then [10] ++ litBytes "<h1 id=\"toc0\"><span>"
      else if ty == "end".toList then litBytes "</span></h1>\n"
      else []
  | .list =>
      if ty == "bullet_list_start".toList then litBytes "<ul>\n"
      else if ty == "bullet_item_start".toList then litBytes "<li>"
      else if ty == "bullet_list_end".toList then litBytes "</li>\n</ul>"
      else []
  | _ => []

def ufffdEx (table : List (Nat × String × String)) (work : List TSeg) :
    List Nat :=
  (renderWith ufffdExDispatch (ufffdExLookup table) {} work {}).output

def paraPair : List (Nat × String × String) :=
  [(0, "Paragraph", "start"), (1, "Paragraph", "end")]

theorem ufffd_plain_mid :
    ufffdEx paraPair
      [.tok 0, .text "alpha \uFFFD bravo charlie delta".toList, .tok 1] =
      litBytes "<p>alpha bravo charlie delta</p>\n\n" := rfl

theorem ufffd_plain_end :
    ufffdEx paraPair
      [.tok 0, .text "alpha bravo charlie \uFFFD".toList, .tok 1] =
      litBytes "<p>alpha bravo charlie 1</p>\n\n" := rfl

theorem ufffd_plain_only :
    ufffdEx paraPair [.tok 0, .text ['\uFFFD'], .tok 1] =
      litBytes "<p>1</p>\n\n" := rfl

theorem ufffd_end_first_para :
    ufffdEx [(0, "Paragraph", "start"), (1, "Paragraph", "end"),
             (2, "Paragraph", "start"), (3, "Paragraph", "end")]
      [.tok 0, .text "alpha \uFFFD".toList, .tok 1, .tok 2,
       .text "bravo charlie".toList, .tok 3] =
      litBytes "<p>alpha 12bravo charlie</p>\n\n" := rfl

theorem ufffd_end_list :
    ufffdEx [(0, "List", "bullet_list_start"), (1, "List", "bullet_item_start"),
             (2, "List", "bullet_item_end"), (3, "List", "bullet_item_start"),
             (4, "List", "bullet_item_end"), (5, "List", "bullet_list_end")]
      [.tok 0, .tok 1, .text "item one \uFFFD".toList, .tok 2, .tok 3,
       .text "item two".toList, .tok 4, .tok 5] =
      litBytes "<ul>\n<li>item one 23item two</li>\n</ul>" := rfl

theorem ufffd_end_heading :
    ufffdEx [(0, "Heading", "start"), (1, "Heading", "end"),
             (2, "Paragraph", "start"), (3, "Paragraph", "end")]
      [.tok 0, .text "Head Word \uFFFD".toList, .tok 1, .tok 2,
       .text "body alpha bravo".toList, .tok 3] =
      [10] ++ litBytes "<h1 id=\"toc0\"><span>Head Word 12body alpha bravo<br />\n<br /></span></h1>\n" := rfl

theorem ufffd_fake_before_bold :
    ufffdEx [(0, "Paragraph", "start"), (1, "Paragraph", "end"),
             (2, "Strong", "start"), (3, "Strong", "end")]
      [.tok 0, .text "alpha \uFFFD".toList, .tok 2, .text "bold".toList, .tok 3,
       .text " omega tail".toList, .tok 1] =
      litBytes "<p>alpha 3bold omega tail</p>\n\n" := rfl

theorem ufffd_pair_digits :
    ufffdEx paraPair
      [.tok 0, .text "alpha \uFFFD42\uFFFD charlie delta".toList, .tok 1] =
      litBytes "<p>alpha 42 charlie delta</p>\n\n" := rfl

theorem ufffd_pair_zero :
    ufffdEx paraPair
      [.tok 0, .text "alpha \uFFFD0\uFFFD bravo charlie".toList, .tok 1] =
      litBytes "<p>alpha 0 bravo charlie</p>\n\n" := rfl

theorem ufffd_only_two :
    ufffdEx paraPair [.tok 0, .text ['\uFFFD', '\uFFFD'], .tok 1] = [] := rfl

theorem ufffd_no_marker :
    ufffdEx paraPair [.tok 0, .text "alpha bravo".toList, .tok 1] =
      litBytes "<p>alpha bravo</p>\n\n" := rfl

end LeanFtml
