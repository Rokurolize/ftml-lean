/-
  LeanFtml.InlineSimpleRules — the R4.3 inline-simple and typography
  Xhtml render mirrors.

  Each function mirrors one `Text_Wiki_Render_Xhtml_<Rule>::token()`
  in the validated PHP reference (`ref-php/text-wiki/Text/Wiki/Render/
  Xhtml/<Rule>.php`), under the harness configuration of
  `ref-php/harness/wiki-config.php` (`ref_configure_wiki`):

  * `Url`: `setRenderConf('Xhtml', 'url', 'images', false)` disables
    the image branch outright (the class default is `true`), and no
    `css_inline` / `css_descr` / `css_footnote` / `target` render conf
    is set, so every `formatConf(' class="%s"', 'css_<type>')` in the
    body evaluates to the empty string and `getConf('target')` is
    `null`. The renderer's write to `vars['externalLinks']` is
    write-only (R4-SCOPE.md section 1.4) and unobservable in the
    output bytes.
  * `Interwiki`: the harness sets the five HTTPS site templates
    (`wikipedia`, `wikipedia.pl`, `pl.wikipedia`, `google`,
    `dictionary`), each carrying exactly one `%s` slot; the class
    `target` conf `'_blank'` is not overridden, and `css` is `null`.
  * `Strong`, `Emphasis`, `Tt`, `Superscript`, `Subscript`: `css`
    conf is `null`, so `formatConf` yields the empty string.
    `Underline` and `Strikethrough` never read their `css` conf.
  * `Tighten`: the parse rule emits no tokens at all, and its render
    body is the constant empty string; the mirror is included so the
    family's enumeration is complete.

  Where a PHP `token()` falls through without a return (a `type`
  other than the handled branches), PHP concatenates the resulting
  `null` as the empty string; the mirrors return `[]`.

  The dispatcher that consumes these functions is
  `LeanFtml.dispatchRenderR41` in `LeanFtml/NotesRender.lean`,
  extended in R4.3 to all thirty-two mirrored rules; the stage's
  entry points and theorems live in `LeanFtml/InlineRender.lean`.
-/

import LeanFtml.RenderCore

namespace LeanFtml

/-- Test whether the token's `"type"` option equals the given ASCII
    byte string. Identical in definition to `optTypeIs` in
    `LeanFtml/NotesRender.lean` and `proseTypeIs` in
    `LeanFtml/ProseRules.lean`; restated here so this module depends
    only on the render core (the dispatcher module imports all). -/
def inlineTypeIs (opts : OptMap) (expected : List Nat) : Bool :=
  optStrBytes opts "type".toList == expected

/-! ## Url -/

/-- Uppercase two-digit hex rendering of one byte (`%`-encoding
    body): `0` → `"00"`, `0xC3` → `"C3"`. -/
def hexByteUpper (b : Nat) : List Nat :=
  let hi := b / 16
  let lo := b % 16
  [if hi < 10 then 48 + hi else 55 + hi,
   if lo < 10 then 48 + lo else 55 + lo]

/-- The F-R2-68 percent-encoding of `Text_Wiki_Render_Xhtml_Url`
    (and of the Image renderer's `encodeNonAscii`): every byte
    `>= 0x80` becomes `%` followed by its uppercase two-digit hex;
    ASCII bytes pass through. -/
def percentEncodeNonAscii (bs : List Nat) : List Nat :=
  bs.flatMap (fun b => if b < 0x80 then [b] else 37 :: hexByteUpper b)

/-- ASCII-only lowercase (PHP `strtolower` / `strtolower(substr(...))`
    semantics: bytes `A`–`Z` fold, every other byte is untouched). -/
def asciiLowerBytes (bs : List Nat) : List Nat :=
  bs.map (fun b => if 65 ≤ b && b ≤ 90 then b + 32 else b)

/-- PHP string truthiness for the `if ($target)` test: the empty
    string and the string `"0"` are the only falsy strings. -/
def phpTruthyBytes (bs : List Nat) : Bool :=
  !(bs.isEmpty || bs == [48])

/-- Mirror of `Text_Wiki_Render_Xhtml_Url::token` (`Url.php`), under
    the harness configuration (image branch disabled; see the module
    header). The steps follow the PHP body in order: the filename
    extension is computed but only feeds the disabled image branch;
    the href is percent-encoded bytewise, escaped with
    `htmlspecialchars(..., ENT_COMPAT, 'UTF-8')` (the HTMLCHARS
    correction: the fossil's bare call, PHP 8.5's
    `ENT_QUOTES | ENT_SUBSTITUTE` default, was corrected in the
    reference after live probes showed the apostrophe raw), and
    the exact string `"#"` becomes `"javascript:;"` before the anchor
    is assembled. The authored `target` is emitted unchanged: the
    reference no longer clears it for on-page (`#`) or `mailto:`
    hrefs (REFCORR3 C-SUSPECT-INLINE-1/2). -/
def renderUrl (opts : OptMap) : List Nat :=
  let href0 := optStrBytes opts "href".toList
  let hrefE := htmlSpecialCharsCompat (percentEncodeNonAscii href0)
  let href := if hrefE == litBytes "#" then litBytes "javascript:;" else hrefE
  let text := htmlSpecialCharsCompat (optStrBytes opts "text".toList)
  let target0 := optStrBytes opts "target".toList
  let target := target0
  let targetAttr :=
    if phpTruthyBytes target then
      litBytes " target=\"" ++ htmlSpecialCharsCompat target ++ litBytes "\""
    else []
  let link :=
    litBytes "<a href=\"" ++ href ++ litBytes "\"" ++ targetAttr ++
      litBytes ">" ++ text ++ litBytes "</a>"
  if inlineTypeIs opts (litBytes "footnote") then
    litBytes "<sup>" ++ link ++ litBytes "</sup>"
  else
    link

/-! ## Email -/

/-- Mirror of `Text_Wiki_Render_Xhtml_Email::token` (`Email.php`):
    `str_replace('@', '|', strrev($email) . '#' . strrev($text))`
    inside the wiki-email span. PHP `strrev` is bytewise, and the
    `@` → `|` replacement runs over the whole concatenation. -/
def renderEmail (opts : OptMap) : List Nat :=
  let email := optStrBytes opts "email".toList
  let text := optStrBytes opts "text".toList
  let joined := email.reverse ++ [35] ++ text.reverse
  let mapped := joined.map (fun b => if b == 64 then 124 else b)
  litBytes "<span class=\"wiki-email\">" ++
    htmlSpecialCharsNoQuotesSubst mapped ++
    litBytes "</span>"

/-! ## Mathinline -/

/-- One byte of the `strtr` escape table of
    `Text_Wiki_Render_Xhtml_Mathinline::token` (`Mathinline.php`):
    `&` → `&amp;`, `<` → `&lt;`, `>` → `&gt;`, `"` → `&quot;`,
    `'` → `&#39;` (note: not `&#039;`), NUL → a single space; every
    other byte (including non-ASCII) passes through verbatim. All
    table keys are single bytes, so PHP's longest-match `strtr`
    reduces to this per-byte map. -/
def mathinlineEscByte (b : Nat) : List Nat :=
  if b == 38 then litBytes "&amp;"
  else if b == 60 then litBytes "&lt;"
  else if b == 62 then litBytes "&gt;"
  else if b == 34 then litBytes "&quot;"
  else if b == 39 then litBytes "&#39;"
  else if b == 0 then [32]
  else [b]

/-- Mirror of `Text_Wiki_Render_Xhtml_Mathinline::token`: the
    escaped content between literal dollar signs in the math-inline
    span (the R2-corrected body: live's saved-page shape carries no
    generated image). -/
def renderMathinline (opts : OptMap) : List Nat :=
  litBytes "<span class=\"math-inline\">$" ++
    (optStrBytes opts "content".toList).flatMap mathinlineEscByte ++
    litBytes "$</span>"

/-! ## Interwiki -/

/-- The harness interwiki site table (`ref_configure_wiki` in
    `ref-php/harness/wiki-config.php`): the five HTTPS templates
    live's `resetWiki` registers, each with exactly one `%s` slot. -/
def interwikiSites : List (List Nat × List Nat) :=
  [ (litBytes "wikipedia", litBytes "https://en.wikipedia.org/wiki/%s"),
    (litBytes "wikipedia.pl", litBytes "https://pl.wikipedia.org/wiki/%s"),
    (litBytes "pl.wikipedia", litBytes "https://pl.wikipedia.org/wiki/%s"),
    (litBytes "google", litBytes "https://www.google.com/search?q=%s"),
    (litBytes "dictionary", litBytes "https://dictionary.reference.com/browse/%s") ]

/-- Look up a site key in a byte-keyed table (PHP `isset($table[$k])`
    plus the value). -/
def bytesTableLookup : List (List Nat × List Nat) → List Nat → Option (List Nat)
  | [], _ => none
  | (k, v) :: rest, key => if k == key then some v else bytesTableLookup rest key

/-- The `sprintf($template, $page)` step of the Interwiki renderer
    for the harness templates: each `%s` is replaced by the page,
    `%%` collapses to one `%`, and every other byte passes through.
    (Every harness template carries exactly one `%s` and no other
    `%` byte.) Structural recursion on the template so concrete
    instances reduce in the kernel at compiled speed. -/
def sprintfPercentS (template page : List Nat) : List Nat :=
  match template with
  | [] => []
  | 37 :: 115 :: rest => page ++ sprintfPercentS rest page
  | 37 :: 37 :: rest => [37] ++ sprintfPercentS rest page
  | b :: rest => b :: sprintfPercentS rest page

/-- Mirror of `Text_Wiki_Render_Xhtml_Interwiki::token`
    (`Interwiki.php`): an unknown site returns the token's text
    escaped with ENT_COMPAT (REFCORR4 Batch C); a known
    site builds the href by `sprintf` (or by appending the page when
    the template has no `%s`, which no harness template exercises),
    escapes the text with `htmlspecialchars(...,
    ENT_COMPAT, 'UTF-8')` (the HTMLCHARS correction of the fossil's
    bare call; live spells a described label's apostrophe raw), and
    always emits the `window.open` onclick fragment for the class
    target conf `'_blank'` (harness-unoverridden). The href itself
    is never escaped. -/
def renderInterwiki (opts : OptMap) : List Nat :=
  let site := optStrBytes opts "site".toList
  let page := optStrBytes opts "page".toList
  let text := optStrBytes opts "text".toList
  match bytesTableLookup interwikiSites site with
  | none => htmlSpecialCharsCompat text
  | some template =>
      let href :=
        if (findSub [37, 115] template).isSome then
          sprintfPercentS template page
        else template ++ page
      litBytes "<a href=\"" ++ href ++
        litBytes "\" onclick=\"window.open(this.href, '_blank'); return false;\">" ++
        htmlSpecialCharsCompat text ++ litBytes "</a>"

/-! ## Colortext -/

/-- Split a byte string on runs of space (32) and tab (9), dropping
    the empty pieces: `preg_split('/[ \t]+/', $s, -1,
    PREG_SPLIT_NO_EMPTY)` followed by `implode(' ', $parts)`. -/
def collapseSpaceTab (bs : List Nat) : List Nat :=
  let parts := go bs [] []
  parts.intersperse [32] |>.flatten
where
  go : List Nat → List Nat → List (List Nat) → List (List Nat)
    | [], cur, acc => (if cur.isEmpty then acc else acc ++ [cur.reverse]).filter
        (fun p => !p.isEmpty)
    | b :: rest, cur, acc =>
        if b == 32 || b == 9 then
          go rest [] (if cur.isEmpty then acc else acc ++ [cur.reverse])
        else go rest (b :: cur) acc

/-- Hex-digit test (PHP `ctype_xdigit` on one byte). -/
def isHexDigitB (b : Nat) : Bool :=
  (48 ≤ b && b ≤ 57) || (65 ≤ b && b ≤ 70) || (97 ≤ b && b ≤ 102)

/-- The character class of the Colortext admission regex
    `/^[A-Za-z0-9#(),\- ]*$/D` on one byte. -/
def colorClassB (b : Nat) : Bool :=
  (65 ≤ b && b ≤ 90) || (97 ≤ b && b ≤ 122) || (48 ≤ b && b ≤ 57) ||
  b == 35 || b == 40 || b == 41 || b == 44 || b == 45 || b == 32

/-- Mirror of `Text_Wiki_Render_Xhtml_Colortext::normalizeColor`:
    collapse space/tab runs to single spaces (dropping edge runs),
    lowercase, fold a 3- or 6-digit hex spec (with or without the
    leading `#`) to its `#`-prefixed lowercase form, admit any other
    spec built from the class bytes as-is, and reject everything
    else (`none`, PHP `null`). A whitespace-only field collapses to
    the empty string, which is admitted. -/
def normalizeColor (raw : List Nat) : Option (List Nat) :=
  let collapsed := asciiLowerBytes (collapseSpaceTab raw)
  let hex := if collapsed.head? == some 35 then collapsed.tail else collapsed
  if (hex.length == 3 || hex.length == 6) && hex.all isHexDigitB then
    some (35 :: hex)
  else if collapsed.all colorClassB then
    some collapsed
  else
    none

/-- Mirror of `Text_Wiki_Render_Xhtml_Colortext::token`
    (`Colortext.php`, R2-corrected to live's normalization): an
    inadmissible spec restores the literal source form (the opener
    emits `##<raw>|`, every other type emits `##`); an admitted
    empty spec renders `<span style="color:">` with no space after
    the colon; any other admitted spec renders
    `<span style="color: <spec>">` (no trailing semicolon); the end
    token renders `</span>`; any other type falls through to the
    empty string. -/
def renderColortext (opts : OptMap) : List Nat :=
  let raw := optStrBytes opts "color".toList
  match normalizeColor raw with
  | none =>
      if inlineTypeIs opts (litBytes "start") then
        litBytes "##" ++ raw ++ litBytes "|"
      else
        litBytes "##"
  | some color =>
      if inlineTypeIs opts (litBytes "start") then
        if color.isEmpty then litBytes "<span style=\"color:\">"
        else litBytes "<span style=\"color: " ++ color ++ litBytes "\">"
      else if inlineTypeIs opts (litBytes "end") then
        litBytes "</span>"
      else
        []

/-! ## The paired-tag family (Strong, Emphasis, Underline,
       Strikethrough, Tt, Superscript, Subscript) -/

/-- The shared shape of the seven paired-tag renderers: `start`
    emits the opener, `end` emits the closer, and any other type
    falls through to the empty string. (For Strong, Emphasis, Tt,
    Superscript and Subscript the opener interpolates the `css`
    render conf, which is `null` under the harness configuration,
    so `formatConf` yields the empty string; Underline and
    Strikethrough emit their fixed style spans unconditionally.) -/
def renderTaggedPair (opts : OptMap) (openB closeB : List Nat) : List Nat :=
  if inlineTypeIs opts (litBytes "start") then openB
  else if inlineTypeIs opts (litBytes "end") then closeB
  else []

/-- Mirror of `Text_Wiki_Render_Xhtml_Strong::token`. -/
def renderStrong (opts : OptMap) : List Nat :=
  renderTaggedPair opts (litBytes "<strong>") (litBytes "</strong>")

/-- Mirror of `Text_Wiki_Render_Xhtml_Emphasis::token`. -/
def renderEmphasis (opts : OptMap) : List Nat :=
  renderTaggedPair opts (litBytes "<em>") (litBytes "</em>")

/-- Mirror of `Text_Wiki_Render_Xhtml_Underline::token`. -/
def renderUnderline (opts : OptMap) : List Nat :=
  renderTaggedPair opts
    (litBytes "<span style=\"text-decoration: underline;\">") (litBytes "</span>")

/-- Mirror of `Text_Wiki_Render_Xhtml_Strikethrough::token`. -/
def renderStrikethrough (opts : OptMap) : List Nat :=
  renderTaggedPair opts
    (litBytes "<span style=\"text-decoration: line-through;\">") (litBytes "</span>")

/-- Mirror of `Text_Wiki_Render_Xhtml_Tt::token`. -/
def renderTt (opts : OptMap) : List Nat :=
  renderTaggedPair opts (litBytes "<tt>") (litBytes "</tt>")

/-- Mirror of `Text_Wiki_Render_Xhtml_Superscript::token`. -/
def renderSuperscript (opts : OptMap) : List Nat :=
  renderTaggedPair opts (litBytes "<sup>") (litBytes "</sup>")

/-- Mirror of `Text_Wiki_Render_Xhtml_Subscript::token`. -/
def renderSubscript (opts : OptMap) : List Nat :=
  renderTaggedPair opts (litBytes "<sub>") (litBytes "</sub>")

/-! ## Typography -/

/-- Mirror of `Text_Wiki_Render_Xhtml_Typography::token`
    (`Typography.php`): the constant replacement table, keyed by
    the token's `char` option. The eleven keys are exactly the ones
    the parse rule registers (the two space keys both carry the
    single byte 32). A key outside the table is a PHP undefined-key
    warning returning `null`, rendered as the empty string; the
    parse rule never produces one. -/
def renderTypography (opts : OptMap) : List Nat :=
  let c := optStrBytes opts "char".toList
  if c == litBytes "``" then litBytes "&#8220;"
  else if c == litBytes "''" then litBytes "&#8221;"
  else if c == litBytes ",," then litBytes "&#8222;"
  else if c == litBytes "`" then litBytes "&#8216;"
  else if c == litBytes "'" then litBytes "&#8217;"
  else if c == litBytes "<<" then litBytes "&#171;"
  else if c == litBytes ">>" then litBytes "&#187;"
  else if c == litBytes " " then litBytes "&#160;"
  else if c == litBytes "..." then litBytes "&#8230;"
  else if c == litBytes "---" then litBytes "&#8212;"
  else if c == litBytes "--" then litBytes "&#8212;"
  else []

/-! ## Tighten -/

/-- Mirror of `Text_Wiki_Render_Xhtml_Tighten::token`
    (`Tighten.php`): the constant empty string. The parse rule
    emits no Tighten tokens, so this arm exists only to complete
    the family's enumeration; it can never be reached by a token
    the reference pipeline produces. -/
def renderTighten : List Nat :=
  []

end LeanFtml
