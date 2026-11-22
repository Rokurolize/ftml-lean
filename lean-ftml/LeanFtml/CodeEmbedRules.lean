/-
  LeanFtml.CodeEmbedRules — R4.7 render mirrors for the Code and
  Embed Xhtml render rules.

  Code (`ref-php/text-wiki/Text/Wiki/Render/Xhtml/Code.php`, the
  R2-corrected file): the body passes through the reference's
  `wikidotTrimCodeBody` (CRLF normalization, whole leading blank
  lines dropped with the first content line's indentation kept,
  trailing `" \t\n"` stripped, NBSP served as a plain space).
  Under the harness configuration every `css*` conf is unset, so
  `formatConf` yields empty interpolations and the `filename`
  branch is dead. Three branches remain:

  - the type (lowercased byte-wise) is one of the fourteen
    `Text_Highlighter` languages: the vendored highlighter
    library renders the body. That library is an EXTERNAL
    BOUNDARY of this mirror, not mirrored code (the recorded
    R4.7 scoping decision, REPORT-R47.md): `renderCode` emits
    the stated marker `\n[[UNMIRRORED:Text_Highlighter:<type>]]\n\n`
    on this branch, and the R4.7 entry points in
    `LeanFtml/CodeEmbedRender.lean` name the boundary in the
    outcome's `unmirrored` list, so every case reaching it is
    EXCLUDED, never passed and never failed;
  - the trimmed body is empty under PHP `trim`: the bare
    wrapper `<div class="code"></div>`;
  - otherwise tabs expand to four spaces, the body is escaped
    with `htmlspecialchars(..., ENT_COMPAT)` (exactly
    `RenderCore.htmlSpecialCharsCompat`), and the plain
    `<div class="code">\n<pre><code>…</code></pre></div>` wrapper
    is applied. Every branch is wrapped in `"\n" … "\n\n"`.

  Embed (`ref-php/text-wiki/Text/Wiki/Render/Xhtml/Embed.php`,
  the REFVAL2-corrected file): the content (PHP-`trim`med) is
  tested against the allowlist patterns in configuration order
  (the 76 entries of `LeanFtml/EmbedPatterns.lean`, interpreted
  by the PCRE-subset engine in `LeanFtml/Pcre.lean`). On the
  first match, `language="JavaScript…"` attributes are stripped
  (`preg_replace`), a `javascript:`/`vbscript:` scheme at the
  start of the `src` attribute value (after trim and lowering)
  renders the whole embed empty, an event-handler attribute in
  any tag (`<[^>]*\s+on[a-z]+\s*=[^>]+>`, flags `si`) or a
  dangerous scheme inside any attribute value breaks to the
  error block, and otherwise the (stripped) content passes
  through unchanged. No match also yields the error block
  `<div class="error-block">Sorry, no match for the embedded
  content.</div>`. The `src` and attribute-value scans are
  hand-rolled Lean scanners implementing the two small regexes'
  deterministic match semantics (see their doc comments).
-/

import LeanFtml.RenderCore
import LeanFtml.InlineSimpleRules
import LeanFtml.Pcre
import LeanFtml.EmbedPatterns

namespace LeanFtml

/-! ## PHP trim family (byte level) -/

/-- PHP's default `trim`/`ltrim`/`rtrim` charlist
    `" \t\n\r\0\x0B"` as a byte predicate. -/
def phpTrimSet (b : Nat) : Bool :=
  b == 32 || b == 9 || b == 10 || b == 13 || b == 0 || b == 11

/-- Strip trailing bytes satisfying `p` (PHP `rtrim` shape). -/
def rtrimBytesP (p : Nat → Bool) (bs : List Nat) : List Nat :=
  (bs.reverse.dropWhile p).reverse

/-- PHP `trim($s)` with the default charlist. -/
def phpTrimBytes (bs : List Nat) : List Nat :=
  rtrimBytesP phpTrimSet (bs.dropWhile phpTrimSet)

/-! ## Code -/

/-- CRLF → LF byte normalization (PHP `str_replace("\r\n",
    "\n", ...)`; non-overlapping, left to right). -/
def crlfToLf : List Nat → List Nat
  | 13 :: 10 :: rest => 10 :: crlfToLf rest
  | b :: rest => b :: crlfToLf rest
  | [] => []

/-- The leading-blank-line loop of `wikidotTrimCodeBody`: while
    the body, after dropping spaces and tabs, begins with a
    newline, drop through that newline and repeat; the first
    content line keeps its indentation (the `ltrim` result is
    discarded when the check fails). Fuel is the body length. -/
def dropCodeBlankLines : List Nat → Nat → List Nat
  | bs, 0 => bs
  | bs, fuel + 1 =>
      let t := bs.dropWhile (fun b => b == 32 || b == 9)
      match t with
      | 10 :: rest => dropCodeBlankLines rest fuel
      | _ => bs

/-- NBSP (UTF-8 `C2 A0`) → plain space (PHP
    `str_replace("\u{a0}", ' ', ...)`). -/
def nbspToSpace : List Nat → List Nat
  | 194 :: 160 :: rest => 32 :: nbspToSpace rest
  | b :: rest => b :: nbspToSpace rest
  | [] => []

/-- Mirror of `Text_Wiki_Render_Xhtml_Code::wikidotTrimCodeBody`. -/
def wikidotTrimCodeBody (body : List Nat) : List Nat :=
  let b1 := crlfToLf body
  let b2 := dropCodeBlankLines b1 (b1.length + 1)
  let b3 := rtrimBytesP (fun b => b == 32 || b == 9 || b == 10) b2
  nbspToSpace b3

/-- The Code token's `attr.type` bytes (`[]` when `attr` is not
    a map or carries no `type`; PHP reads `$attr['type']`). -/
def codeAttrType (opts : OptMap) : List Nat :=
  match omGet opts "attr".toList with
  | some (.map m) => optStrBytes m "type".toList
  | _ => []

/-- `strtolower($attr['type'])` (byte-wise ASCII lowering). -/
def codeType (opts : OptMap) : List Nat :=
  asciiLowerBytes (codeAttrType opts)

/-- The fourteen `Text_Highlighter` language names of
    `Code.php` (`mysql` has a grammar file in the library but
    is not in this list, so it takes the plain path). -/
def codeLangs : List (List Nat) :=
  [ litBytes "php", litBytes "cpp", litBytes "css",
    litBytes "html", litBytes "xhtml", litBytes "diff",
    litBytes "dtd", litBytes "java", litBytes "javascript",
    litBytes "sql", litBytes "perl", litBytes "python",
    litBytes "ruby", litBytes "xml" ]

/-- The stated fallback marker emitted on the
    `Text_Highlighter` branch (the branch itself is named in
    the outcome's `unmirrored` list by the R4.7 entry points). -/
def codeBoundaryMarker (ty : List Nat) : List Nat :=
  [10] ++ litBytes "[[UNMIRRORED:Text_Highlighter:" ++ ty ++
    litBytes "]]" ++ [10, 10]

/-- The boundary name for a Code option map, when its
    (lowercased) type reaches the `Text_Highlighter` library:
    `"Text_Highlighter:<type>"`. -/
def codeBoundaryName (opts : OptMap) : Option String :=
  let ty := codeType opts
  if codeLangs.contains ty then
    some ("Text_Highlighter:" ++
      String.ofList (ty.map (fun b => Char.ofNat b)))
  else none

/-- Mirror of `Text_Wiki_Render_Xhtml_Code::token` under the
    harness configuration (all `css*` confs unset; the
    `filename` branch dead). The `Text_Highlighter` branch is
    the recorded external boundary: it emits
    `codeBoundaryMarker`, and the case is excluded by name at
    the entry points. -/
def renderCode (opts : OptMap) : List Nat :=
  let body := wikidotTrimCodeBody (optStrBytes opts "text".toList)
  let ty := codeType opts
  if codeLangs.contains ty then
    codeBoundaryMarker ty
  else if phpTrimBytes body == [] then
    [10] ++ litBytes "<div class=\"code\"></div>" ++ [10, 10]
  else
    let tabbed := body.flatMap
      (fun b => if b == 9 then [32, 32, 32, 32] else [b])
    [10] ++ litBytes "<div class=\"code\">\n<pre><code>" ++
      htmlSpecialCharsCompat tabbed ++
      litBytes "</code></pre></div>" ++ [10, 10]

/-! ## Embed -/

/-- The allowlist patterns, parsed: the 76 configuration
    entries of `LeanFtml/EmbedPatterns.lean` in order. The
    conformance driver asserts the count is 76
    (`--embed-patterns-ok`); a pattern that failed to parse
    would shorten this list and fail that gate visibly. -/
def embedPatterns : List PcreParsed :=
  embedPatternStrings.filterMap (fun (_, s) => parsePcre s)

/-- The renderer's own `language="JavaScript…"` strip pattern
    (`preg_replace('/language="JavaScript[^"]*"/i', '', ...)`).
    The fallback arm is unreachable (the pattern is in the
    engine's subset by construction) and would surface in the
    strip theorems and the family gate if it were ever taken. -/
def languageStripPattern : PcreParsed :=
  match parsePcre "/language=\"JavaScript[^\"]*\"/i" with
  | some p => p
  | none => { ast := .eps, ci := true, dotall := false }

/-- The renderer's event-handler pattern
    (`';<[^>]*\s*on[a-z]+\s*=[^>]+>;si'`). REFCORR4
    C-SUSPECT-CODEEMBED-6 dropped the required whitespace before
    `on...`, so a glued `style=""/onclick=` is rejected. Same
    unreachable fallback note as `languageStripPattern`. -/
def embedEventPattern : PcreParsed :=
  match parsePcre ";<[^>]*\\s*on[a-z]+\\s*=[^>]+>;si" with
  | some p => p
  | none => { ast := .eps, ci := true, dotall := true }

/-- The no-match / rejected-content error block. -/
def embedError : List Nat :=
  litBytes "<div class=\"error-block\">Sorry, no match for the embedded content.</div>"

/-- One match attempt of
    `/(?<![a-zA-Z0-9_-])src\s*=\s*(["'])([^"']*)\1/i` at byte
    position `pos`: returns the captured value. REFCORR4
    C-SUSPECT-CODEEMBED-3 accepts either quote style and
    C-SUSPECT-CODEEMBED-4 excludes a preceding word byte or '-',
    so `data-src` is not seen as `src`. -/
def srcValueAt (subj : List Nat) (pos : Nat) : Option (List Nat) :=
  let boundaryOk : Bool :=
    pos == 0 ||
      !(let prev := (subj.drop (pos - 1)).headD 0
        isWrdByte prev || prev == 45)
  if !boundaryOk then none
  else
    match subj.drop pos with
    | a :: b :: c :: rest1 =>
        if byteMatchCI true 115 a && byteMatchCI true 114 b &&
            byteMatchCI true 99 c then
          let rest2 := rest1.dropWhile pcreIsWsByte
          match rest2 with
          | 61 :: rest3 =>
              let rest4 := rest3.dropWhile pcreIsWsByte
              match rest4 with
              | q :: rest5 =>
                  if q == 34 || q == 39 then
                    let val := rest5.takeWhile (fun x => x != q)
                    if val.length < rest5.length then some val else none
                  else none
              | _ => none
          | _ => none
        else none
    | _ => none

/-- `preg_match('/\bsrc\s*=\s*"([^"]*)"/i', ...)`: the captured
    value of the first (leftmost) match, if any. -/
def findSrcValue (subj : List Nat) : Option (List Nat) :=
  (List.range (subj.length + 1)).findSome? (srcValueAt subj)

/-- One match attempt of
    `/[a-zA-Z0-9_-]+\s*=\s*"([^"]*)"/` at the head of `bs`:
    returns the captured value and the bytes after the match.
    Deterministic at a fixed start for the same reason as
    `srcValueAt` (the name run, `\s*` runs, and the `[^"]*`
    capture admit no backtracking choice). -/
def attrMatchHere (bs : List Nat) : Option (List Nat × List Nat × List Nat) :=
  let (name, r1) := bs.span (fun b => isWrdByte b || b == 45)
  if name.isEmpty then none
  else
    let r2 := r1.dropWhile pcreIsWsByte
    match r2 with
    | 61 :: r3 =>
        let r4 := r3.dropWhile pcreIsWsByte
        match r4 with
        | 34 :: r5 =>
            let (val, r6) := r5.span (fun x => x != 34)
            match r6 with
            | 34 :: r7 => some (name, val, r7)
            | _ => none
        | _ => none
    | _ => none

/-- `preg_match_all` on the attribute pattern: every captured
    value, in match order (non-overlapping, left to right; on a
    failed start the scan advances one byte, as the regex
    engine does). -/
def attrValues : List Nat → Nat → List (List Nat)
  | _, 0 => []
  | bs, fuel + 1 =>
      match attrMatchHere bs with
      | some (name, val, rest) =>
          -- C-SUSPECT-CODEEMBED-5: `src` is prefix-tested above and
          -- is not part of the generic contains scan.
          (if asciiLowerBytes name == litBytes "src" then [] else [val]) ++
            attrValues rest fuel
      | none =>
          match bs with
          | _ :: rest => attrValues rest fuel
          | [] => []

/-- Does byte list `pat` occur in `subj`? -/
def bytesContainsSub (pat subj : List Nat) : Bool :=
  (List.range (subj.length + 1)).any
    fun s => pat.isPrefixOf (subj.drop s)

/-- A value starts with `javascript:` or `vbscript:` after
    PHP `trim` and `strtolower` (the `src` check). -/
def srcHasBadScheme (val : List Nat) : Bool :=
  let lv := asciiLowerBytes (phpTrimBytes val)
  (litBytes "javascript:").isPrefixOf lv ||
    (litBytes "vbscript:").isPrefixOf lv

/-- A value contains `javascript:` or `vbscript:` after
    `strtolower` (the any-attribute check). -/
def valueHasBadScheme (val : List Nat) : Bool :=
  let lv := asciiLowerBytes val
  bytesContainsSub (litBytes "javascript:") lv ||
    bytesContainsSub (litBytes "vbscript:") lv

/-- Mirror of `Text_Wiki_Render_Xhtml_Embed::token`,
    parameterized over the allowlist so theorems can use small
    pattern lists (the real list is `embedPatterns`). -/
def renderEmbedWith (pats : List PcreParsed) (opts : OptMap) :
    List Nat :=
  let content := phpTrimBytes (optStrBytes opts "content".toList)
  match pats.find? (fun p => pcreMatch p content) with
  | none => embedError
  | some _ =>
      let stripped := pcreReplaceAll languageStripPattern content
      -- C-SUSPECT-CODEEMBED-2: the event check wins over the src
      -- check when both fire.
      if pcreMatch embedEventPattern stripped then embedError
      else match findSrcValue stripped with
           | some v =>
               if srcHasBadScheme v then []
               else finishEmbed stripped
           | none => finishEmbed stripped
where
  /-- The any-attribute scheme check on attributes other than src,
      then the passthrough. -/
  finishEmbed (c : List Nat) : List Nat :=
    if (attrValues c (c.length + 1)).any valueHasBadScheme then
      embedError
    else c

/-- Mirror of `Text_Wiki_Render_Xhtml_Embed::token` with the
    real 75-pattern allowlist. -/
def renderEmbed (opts : OptMap) : List Nat :=
  renderEmbedWith embedPatterns opts

end LeanFtml
