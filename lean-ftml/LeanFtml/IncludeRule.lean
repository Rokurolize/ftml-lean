/-
  LeanFtml.IncludeRule — the R3 mirror of the reference PHP Include
  parse rule (`ref-php/text-wiki/Text/Wiki/Parse/Default/Include.php`),
  pipeline position 1 of the reference's sixty-eight active parse
  rules.

  ## Mechanism (determined from `Include.php` and `ozone-stubs.php`)

  `Text_Wiki_Parse_Include::parse` runs a bounded whole-document
  expansion loop before any token-producing rule runs:

  1. **Bounded 5-pass fixpoint loop (`parse`)**:
     `do { $oldSource = $this->wiki->source;
           $this->wiki->source = $this->refExpandPass($oldSource);
           $level++;
     } while ($oldSource != $this->wiki->source && $level < 5);`
     At least one and at most five whole-document expansion passes
     run; the loop stops early as soon as a pass produces no source
     change, and stops unconditionally after pass 5 even if the
     fifth pass produced new `[[include ...]]` syntax.

  2. **Candidate and terminator scan (`refFindCandidate`,
     `refFindIncludeEnd`)**:
     Line starts are scanned over their leading blank/`>` run. A
     line whose lead run contains a `>` is skipped whole: it is
     never a candidate (G13 correction; see point 3). Any other
     line is a candidate only when the tight case-insensitive
     `[[include` stands at the line start itself, followed by at
     least one PCRE whitespace character (`" \t\n\r\x0B\x0C"`); the
     returned `plen` and `depth` are therefore always 0. The
     candidate terminator `candEnd` is the offset just after the
     first `]]` at or after `matchEnd` (`at + 9`) that is followed
     by `\n` or end of input. If no such terminator exists, the rest
     of the source is emitted untouched and the pass ends.

  3. **No quoted consumption (G13 correction)**:
     The pre-correction reference retained the Q1-Q3
     quoted-consumption branch (a `depth > 0` candidate was
     quote-stripped, parsed, and on success deleted with no page
     fetch). The AUDIT-G13 correction removed that path from
     `Include.php` (finding F-G14-1: live never consumes a quoted
     include, and the branch deleted tight quoted includes even
     inside `[[code]]`). A quote-prefixed line is now skipped by
     the scanner (point 2) and its text stays literal; this mirror
     has no quoted-attempt machinery.

  4. **Block parse (`refParseBlock`, `refSegments`,
     `refSegmentArg`)**:
     After `[[include`, requires a non-empty run of grammar
     whitespace (`" \t\n"`), then a non-empty `page_ref` run
     (characters outside `" \t\n[|]\"'"`), then locates the block
     end `end` at the first `]]` followed by `\n`, `\r`, or end of
     text. If arguments follow `page_ref`, requires grammar
     whitespace, tolerates a stray `[` run (not starting `[!--`)
     plus one optional `' '`, splits the tail on raw `|` bytes
     (G4/G5 as corrected by AUDIT-G14B: live's segment scanning is
     comment-unaware, `[!-- ... --]` bytes are ordinary value
     bytes, and an unterminated comment is ordinary text that
     cannot fail the block), and extracts `(key, value)` pairs
     where `key` is a non-empty `[A-Za-z0-9\-_]+` run after
     `isPhpTrim` leading trim, followed after `isPhpTrim` trim by
     `=`, and `value` is non-empty after `isPhpTrim` trim at both
     ends. `refSegments` therefore returns a plain list and never
     fails.

  5. **Reference resolution (`refResolveRef`, `refCanonicalSite`,
     `refNormalize`)**:
     Trims the `page_ref` run with `isPhpTrim`. If it begins with
     `:` and has a second `:` at index `> 1` whose `pagePart` after
     the second `:` is non-empty and consists entirely of
     `[A-Za-z0-9\-_:]`, and whose site segment consists entirely of
     host characters `[A-Za-z0-9.-]` (the G13 host gate; `_` is
     outside the set), resolves as a cross-site pair `(some site,
     page)` where `site = refCanonicalSite sitePart` (R3
     canonicalization only, never slug normalization, case
     preserved) and `page = refNormalize pagePart`, firing even
     when `page` normalizes to empty. A run failing the host gate
     falls through to the page-name rule. Otherwise, if the whole
     trimmed run consists of `[A-Za-z0-9\-_:]`, resolves as a
     same-site page `(none, refNormalize s)` (even when
     `refNormalize s` is empty); any other character fails
     resolution. On block-parse or resolution failure the
     candidate stays literal and scanning resumes at the next
     line start after the failed candidate's opener line
     (`refNextLineStart`; F1 as corrected by AUDIT-G13), so an
     include beginning on an intervening line is still found.

  6. **Page fetch, document-state registration, argument fold, and
     missing-page splice (`refFetch`)**:
     Include never claims a token in `$this->wiki->tokens`
     (`Text_Wiki_Render_Xhtml_Include` is an unused fallback).
     Instead:
     * Let `display` be `":{site}:{page}"` for a cross-site pair and
       `"{page}"` for a same-site ref.
     * The harness page map (`ref-php/harness/pages.php` via
       `DB_PagePeer` in `ozone-stubs.php`) is consulted at key
       `display`.
     * **Missing page**: splices the literal wikitext
       `"\n\n[[div class=\"error-block\"]]\nIncluded page \"" ++
       htmlspecialchars(pageName) ++ "\" does not exist ([" ++
       createHref ++ " create it now])\n[[/div]]\n\n"` into the
       source (subsequently parsed by `Div`, `Paragraph`, `Url`,
       `Typography`, and `Tighten`), where `createHref` is
       `"https://" ++ site ++ ".wikidot.com/" ++ page ++ "/edit/true"`
       when `site` is present and non-empty (PHP loose
       `$siteName != null`) and `"/" ++ page ++ "/edit/true"`
       otherwise, and registers `display` in
       `vars['inclusionsNotExist']` (first-insertion set order).
     * **Existing page**: registers `page->getPageId()`
       (`1000 + crc32(display) % 1000` in `ozone-stubs.php`) in
       `vars['inclusions']` (first-insertion set order; note that
       `Include.php` never reads `inclusions` to block re-inclusion),
       applies the G1.4b sequential argument substitution fold
       (`LeanFtml.substitute`) over `args` in source order, and
       splices `"\n\n" ++ output ++ "\n\n"`.
-/

import LeanFtml.TokenState
import LeanFtml.Include
import LeanFtml.IncludeGrammar
import LeanFtml.IncludeExpr
import LeanFtml.UnicodeCore

namespace LeanFtml

/-! ## IEEE 802.3 CRC-32 and reference harness page map -/

/-- The reflected IEEE 802.3 CRC-32 polynomial `0xEDB88320`, as 32
    bits in LSB-first order (bit 0 to bit 31). -/
def crc32PolyBits : List Bool :=
  [ false, false, false, false,  -- 0x0
    false, true,  false, false,  -- 0x2
    true,  true,  false, false,  -- 0x3
    false, false, false, true,   -- 0x8
    false, false, false, true,   -- 0x8
    true,  true,  false, true,   -- 0xB
    true,  false, true,  true,   -- 0xD
    false, true,  true,  true ]  -- 0xE

/-- Initial 32-bit CRC-32 register (`0xFFFFFFFF`, 32 `true` bits). -/
def crc32InitBits : List Bool :=
  [ true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true ]

/-- One bit step of reflected CRC-32 over a 32-bit LSB-first register. -/
def crc32BitStep (reg : List Bool) (inBit : Bool) : List Bool :=
  let fb := Bool.xor (reg.headD false) inBit
  let shifted := reg.tail ++ [false]
  if fb then List.zipWith Bool.xor shifted crc32PolyBits
  else shifted

/-- The 8 bits of a byte `b` in LSB-first order. -/
def byteToBits8 (b : Nat) : List Bool :=
  [ b % 2 == 1,
    (b / 2) % 2 == 1,
    (b / 4) % 2 == 1,
    (b / 8) % 2 == 1,
    (b / 16) % 2 == 1,
    (b / 32) % 2 == 1,
    (b / 64) % 2 == 1,
    (b / 128) % 2 == 1 ]

/-- Update the 32-bit CRC-32 register with one byte. -/
def crc32ByteStep (reg : List Bool) (b : Nat) : List Bool :=
  (byteToBits8 b).foldl crc32BitStep reg

/-- Compute `crc32($str) % m` (for `m ≥ 2`) directly by Horner evaluation modulo
    `m` over the final inverted 32-bit register (since `acc < m`,
    `acc * 2 + b < 2 * m`, so one subtraction replaces `Nat.mod`). -/
def crc32Mod (m : Nat) (bs : List Nat) : Nat :=
  let fin := bs.foldl crc32ByteStep crc32InitBits
  fin.foldr (fun bit acc =>
    let v := acc * 2 + (if !bit then 1 else 0)
    if v ≥ m then v - m else v) 0

/-- Compute `crc32($str) % 1000` directly by Horner evaluation modulo 1000. -/
def crc32Mod1000 (bs : List Nat) : Nat :=
  crc32Mod 1000 bs

/-- `DB_PagePeer` page ID formula in `ref-php/harness/ozone-stubs.php`:
    `1000 + crc32($key) % 1000`. -/
def refPageId (display : List Char) : Nat :=
  1000 + crc32Mod1000 (display.flatMap utf8Bytes)

/-- The reference harness page map (`ref-php/harness/pages.php`,
    all eight entries). -/
def refPageMap : List (List Char × List Char) :=
  [ ("muse-probe-g14-target".toList,
     "TARGET-CONTENT-START\nValue is {$marker}.\nTARGET-CONTENT-END".toList),
    ("other-page".toList,
     "OTHER-PAGE-CONTENT\nSecond value is {$marker}.\nOTHER-END".toList),
    ("empty-page".toList,
     []),
    (":sandbox:other-page".toList,
     "SITE-PAGE-CONTENT".toList),
    ("muse-probe-g14b-target".toList,
     "A is {$a}.\nB is {$b}.\nM is {$marker}.\nTARGET-END".toList),
    ("muse-probe-r2link-free-exists".toList,
     "FREELINK TARGET ONE".toList),
    ("muse-probe-r2link-free-exists2".toList,
     "FREELINK TARGET TWO".toList),
    ("muse-probe-r2notes-x-inc-src".toList,
     "included [[footnote]]from include[[/footnote]] text".toList) ]

/-- Look up a display key in a page map. -/
def lookupPage : List (List Char × List Char) → List Char → Option (List Char)
  | [], _ => none
  | (k, v) :: rest, key => if k == key then some v else lookupPage rest key

/-! ## Character classes and string helpers -/

/-- Grammar whitespace inside `refParseBlock`: space, tab, LF
    (`strpos(" \t\n", $c) !== false`). -/
def isIncGramWs (c : Char) : Bool :=
  c == ' ' || c == '\t' || c == '\n'

/-- Argument key characters (`[A-Za-z0-9\-_]`). -/
def isIncKeyC (c : Char) : Bool :=
  ('a' ≤ c && c ≤ 'z') || ('A' ≤ c && c ≤ 'Z') ||
  ('0' ≤ c && c ≤ '9') || c == '-' || c == '_'

/-- Include target charset (`[A-Za-z0-9\-_:]`, GRAMMAR-INCLUDE L6). -/
def isIncTargetC (c : Char) : Bool :=
  isIncKeyC c || c == ':'

/-- Dotted-host site slug characters (`[A-Za-z0-9-]`). -/
def isIncSiteSlugC (c : Char) : Bool :=
  ('a' ≤ c && c ≤ 'z') || ('A' ≤ c && c ≤ 'Z') ||
  ('0' ≤ c && c ≤ '9') || c == '-'

/-- PHP `strtolower` (ASCII case fold). -/
def asciiLowerC (c : Char) : Char :=
  if 'A' ≤ c && c ≤ 'Z' then Char.ofNat (c.toNat + 32) else c

/-- Characters kept by `refNormalize`'s
    `preg_replace('/[^\p{L}\p{N} :\-_]/u', '-', $s)` after
    `strtolower`. -/
def isIncNormKeep (c : Char) : Bool :=
  ('a' ≤ c && c ≤ 'z') || ('0' ≤ c && c ≤ '9') ||
  c == ' ' || c == ':' || c == '-' || c == '_' ||
  (c.toNat ≥ 0x80 && isIncNormKeepU c.toNat)

/-- First index at or after `fromPos` where `pat` occurs in `s`. -/
def findSubChar (s : List Char) (pat : List Char) (fromPos : Nat) :
    Option Nat :=
  go fromPos (s.length + 2)
where
  go : Nat → Nat → Option Nat
    | _, 0 => none
    | i, fuel + 1 =>
      if i + pat.length > s.length then none
      else if (s.drop i).take pat.length == pat then some i
      else go (i + 1) fuel

/-- PHP `htmlspecialchars($s)` (ENT_QUOTES | ENT_SUBSTITUTE default:
    `&`, `"`, `<`, `>`). -/
def htmlSpecialChars : List Char → List Char
  | [] => []
  | '&' :: rest => '&' :: 'a' :: 'm' :: 'p' :: ';' :: htmlSpecialChars rest
  | '"' :: rest => '&' :: 'q' :: 'u' :: 'o' :: 't' :: ';' :: htmlSpecialChars rest
  | '<' :: rest => '&' :: 'l' :: 't' :: ';' :: htmlSpecialChars rest
  | '>' :: rest => '&' :: 'g' :: 't' :: ';' :: htmlSpecialChars rest
  | c :: rest => c :: htmlSpecialChars rest

/-! ## Candidate and terminator scanning (`refFindCandidate`, `refFindIncludeEnd`) -/

/-- `Text_Wiki_Parse_Include::refFindCandidate($src, $from)`:
    scan line starts from `fromPos`. A line whose leading
    blank/`>` run contains a `>` is skipped whole (G13: a quoted
    line is never a candidate); any other line is a candidate
    only when the tight case-insensitive `[[include` stands at
    the line start itself, followed by a PCRE whitespace char
    (`" \t\n\r\x0B\x0C"`). Returns `(lineStart, prefixLen, depth,
    matchEnd)` with `prefixLen` and `depth` always 0, exactly as
    the corrected reference returns them. -/
def refFindCandidate (src : List Char) (fromPos : Nat) :
    Option (Nat × Nat × Nat × Nat) :=
  go fromPos (src.length + 2)
where
  go : Nat → Nat → Option (Nat × Nat × Nat × Nat)
    | _, 0 => none
    | ls, fuel + 1 =>
      if ls > src.length then none
      else
        let suffix := src.drop ls
        let lead := suffix.takeWhile
          (fun c => c == ' ' || c == '\t' || c == '>')
        if lead.contains '>' then
          match findSubChar src ['\n'] ls with
          | none => none
          | some nl => go (nl + 1) fuel
        else
          let matchOk :=
            suffix.take 2 == ['[', '['] &&
            startsWithCI (suffix.drop 2) ['i', 'n', 'c', 'l', 'u', 'd', 'e'] &&
            match (suffix.drop 9).head? with
            | some c => isPcreWs c
            | none => false
          if matchOk then some (ls, 0, 0, ls + 9)
          else
            match findSubChar src ['\n'] ls with
            | none => none
            | some nl => go (nl + 1) fuel

/-- `Text_Wiki_Parse_Include::refFindIncludeEnd($src, $from)`:
    the offset just after the first `]]` at or after `fromPos` that
    is followed by `\n` or end of input. -/
def refFindIncludeEnd (src : List Char) (fromPos : Nat) : Option Nat :=
  go fromPos (src.length + 2)
where
  go : Nat → Nat → Option Nat
    | _, 0 => none
    | i, fuel + 1 =>
      match findSubChar src [']', ']'] i with
      | none => none
      | some j =>
        let after := j + 2
        if after ≥ src.length || src[after]? == some '\n' then
          some after
        else
          go (j + 1) fuel

/-! ## Block grammar and argument segments (`refParseBlock`, `refSegments`, `refSegmentArg`) -/

/-- `Text_Wiki_Parse_Include::refSegmentArg($seg)`:
    parse one `key = value` segment; returns `some (key, value)` when
    `key` is a non-empty `[A-Za-z0-9\-_]+` run and `value` is
    non-empty after `isPhpTrim` trimming at both ends, else `none`. -/
def refSegmentArg (seg : List Char) : Option (List Char × List Char) :=
  let src := seg.dropWhile isPhpTrim
  let key := src.takeWhile isIncKeyC
  if key.isEmpty then none
  else
    let after := (src.drop key.length).dropWhile isPhpTrim
    match after with
    | '=' :: rest =>
      let value := trimChars rest
      if value.isEmpty then none else some (key, value)
    | _ => none

/-- PHP `explode('|', $tail)`: split on raw `|` bytes; `n` pipes
    produce `n + 1` segments, empty segments included. -/
def splitRawPipe : List Char → List (List Char)
  | [] => [[]]
  | '|' :: rest => [] :: splitRawPipe rest
  | c :: rest =>
      match splitRawPipe rest with
      | [] => [[c]]
      | h :: t => (c :: h) :: t

/-- `Text_Wiki_Parse_Include::refSegments($tail)`:
    split `tail` on raw `|` bytes (G4/G5 as corrected by
    AUDIT-G14B: the split is comment-unaware, `[!-- ... --]`
    bytes are ordinary value bytes, and an unterminated comment
    is ordinary text that cannot fail the block), then filter-map
    `refSegmentArg`. Never fails. -/
def refSegments (tail : List Char) : List (List Char × List Char) :=
  (splitRawPipe tail).filterMap refSegmentArg

/-- First `]]` in `text` at or after `fromPos` followed by `\n`,
    `\r`, or end of `text`; returns the index `k` of `]]`. -/
def refFindBlockClose (text : List Char) (fromPos : Nat) : Option Nat :=
  go fromPos (text.length + 2)
where
  go : Nat → Nat → Option Nat
    | _, 0 => none
    | j, fuel + 1 =>
      match findSubChar text [']', ']'] j with
      | none => none
      | some k =>
        let after := k + 2
        if after ≥ text.length ||
            text[after]? == some '\n' ||
            text[after]? == some '\r' then
          some k
        else
          go (k + 1) fuel

/-- `Text_Wiki_Parse_Include::refParseBlock($text)`:
    parse a block body starting immediately after `"[[include"`.
    Returns `some (endOffsetRelative, refRun, args)` or `none`. -/
def refParseBlock (text : List Char) :
    Option (Nat × List Char × List (List Char × List Char)) :=
  let ws1 := (text.takeWhile isIncGramWs).length
  if ws1 == 0 then none
  else
    let refRun := (text.drop ws1).takeWhile isPageC
    if refRun.isEmpty then none
    else
      let i0 := ws1 + refRun.length
      match refFindBlockClose text i0 with
      | none => none
      | some endPos =>
        if i0 == endPos then
          some (endPos + 2, refRun, [])
        else
          let ws2 := (((text.drop i0).take (endPos - i0)).takeWhile isIncGramWs).length
          if ws2 == 0 then none
          else
            let i1 := i0 + ws2
            let i2 :=
              if i1 < endPos && text[i1]? == some '[' &&
                  (text.drop i1).take 4 != ['[', '!', '-', '-'] then
                let brkLen :=
                  (((text.drop i1).take (endPos - i1)).takeWhile (· == '[')).length
                let iBrk := i1 + brkLen
                if iBrk < endPos && text[iBrk]? == some ' ' then iBrk + 1
                else iBrk
              else i1
            let tail := (text.drop i2).take (endPos - i2)
            some (endPos + 2, refRun, refSegments tail)

/-! ## Reference resolution (`refCanonicalSite`, `refNormalize`, `refResolveRef`) -/

/-- `Text_Wiki_Parse_Include::refCanonicalSite($raw)`:
    strip one optional trailing `.` after `trim`; if the result
    matches `/^([A-Za-z0-9-]+)\.wikidot\.com$/i`, return the slug
    with case preserved; else return `$raw` unchanged. -/
def refCanonicalSite (raw : List Char) : List Char :=
  let t0 := trimChars raw
  let t :=
    if t0.getLast? == some '.' then (t0.reverse.drop 1).reverse
    else t0
  if t.length ≥ 12 then
    let slug := t.take (t.length - 12)
    let suf := (t.drop (t.length - 12)).map asciiLowerC
    if suf == ".wikidot.com".toList && !slug.isEmpty &&
        slug.all isIncSiteSlugC then
      slug
    else raw
  else raw

/-- Merge every colon except the last into a dash. -/
def refMergeColons (l : List Char) : List Char :=
  (go l.reverse true).reverse
where
  go : List Char → Bool → List Char
    | [], _ => []
    | c :: rest, isLast =>
      (if c == ':' then (if isLast then ':' else '-') else c) ::
        go rest (isLast && c != ':')

/-- Replace every `_` at index `> 0` whose previous character is not
    `:` with `-`. -/
def refReplaceUnderscores (l : List Char) : List Char :=
  go l false true
where
  go : List Char → Bool → Bool → List Char
    | [], _, _ => []
    | c :: rest, prevColon, isFirst =>
      (if c == '_' && !isFirst && !prevColon then '-' else c) ::
        go rest (c == ':') false

/-- Collapse consecutive runs of `ch` to a single `ch`. -/
def refCollapseRun (l : List Char) (ch : Char) : List Char :=
  go l false
where
  go : List Char → Bool → List Char
    | [], _ => []
    | c :: rest, prev =>
      if c == ch && prev then go rest true
      else c :: go rest (c == ch)

/-- Replace all non-overlapping occurrences of a 2-character pattern
    `(a, b)` with `rep` in one left-to-right pass. -/
def replacePairPass (a b rep : Char) : List Char → List Char
  | [] => []
  | [x] => [x]
  | x :: y :: rest =>
    if x == a && y == b then rep :: replacePairPass a b rep rest
    else x :: replacePairPass a b rep (y :: rest)

/-- Fixpoint loop for `str_replace(array(ab, ba), rep, $s)`. -/
def replacePairsFix (a b rep : Char) (l : List Char) : List Char :=
  go l (l.length + 1)
where
  go (cur : List Char) : Nat → List Char
    | 0 => cur
    | fuel + 1 =>
      let next := replacePairPass b a rep (replacePairPass a b rep cur)
      if next == cur then cur else go next fuel

/-- `Text_Wiki_Parse_Include::refNormalize($s)`:
    Wikidot slug normalization in the reference's step order. -/
def refNormalize (input : List Char) : List Char :=
  let s0 := trimChars input
  let s1 := match s0 with | '/' :: rest => rest | _ => s0
  let s2 := s1.map asciiLowerC
  let s3 := s2.map (fun c => if isIncNormKeep c then c else '-')
  let s4 := refMergeColons s3
  let s5 := refReplaceUnderscores s4
  let s6 := ((s5.dropWhile (· == '-')).reverse.dropWhile (· == '-')).reverse
  let s7 := refCollapseRun s6 '-'
  let s8 := refCollapseRun s7 ':'
  let s9 := replacePairsFix ':' '-' ':' s8
  let s10 := replacePairsFix '_' '-' '_' s9
  let s11 := ((s10.dropWhile (· == ':')).reverse.dropWhile (· == ':')).reverse
  if s11.take 9 == "_default:".toList then s11.drop 9 else s11

/-- Split a character list at its first `:`. -/
def splitFirstColon : List Char → Option (List Char × List Char)
  | [] => none
  | ':' :: rest => some ([], rest)
  | c :: rest => (splitFirstColon rest).map (fun (a, b) => (c :: a, b))

/-- Site-segment host characters (`[A-Za-z0-9.-]`, the G13 host
    gate): a site pair fires only when the site segment consists
    entirely of these. `_` is outside the set (probe
    muse-probe-g13fix-site-underscore: its run falls back to
    whole-run page resolution). Distinct from `isIncSiteSlugC`,
    the narrower slug class of the `.wikidot.com`
    canonicalization regex. -/
def isIncHostC (c : Char) : Bool :=
  ('a' ≤ c && c ≤ 'z') || ('A' ≤ c && c ≤ 'Z') ||
  ('0' ≤ c && c ≤ '9') || c == '.' || c == '-'

/-- `Text_Wiki_Parse_Include::refResolveRef($run)`:
    returns `some (some site, page)` for a cross-site pair,
    `some (none, page)` for a same-site page name, or `none` when
    the reference does not fire (leaving the block literal). A
    pair fires when the site segment is non-empty and passes the
    host gate and the page part is non-empty and entirely
    `[A-Za-z0-9\-_:]`; the site then passes through
    `refCanonicalSite` only (G13: never slug normalization, case
    preserved) and the page part fires even when it normalizes to
    empty. A run failing the pair conditions falls through to
    the page-name rule on the whole run. -/
def refResolveRef (run : List Char) :
    Option (Option (List Char) × List Char) :=
  go (trimChars run)
where
  /-- Resolution of an already-trimmed reference run. The colon arm
      is the cross-site pair; every other non-empty run is the
      same-site page rule. Same decisions as the previous `match`
      on the trimmed run. -/
  go : List Char → Option (Option (List Char) × List Char)
    | [] => none
    | ':' :: rest =>
      match splitFirstColon rest with
      | none =>
        if (':' :: rest).all isIncTargetC then
          some (none, refNormalize (':' :: rest))
        else none
      | some pair =>
        let sitePart := pair.1
        let pagePart := pair.2
        if !sitePart.isEmpty && !pagePart.isEmpty &&
            pagePart.all isIncTargetC && sitePart.all isIncHostC then
          some (some (refCanonicalSite sitePart), refNormalize pagePart)
        else if (':' :: rest).all isIncTargetC then
          some (none, refNormalize (':' :: rest))
        else none
    | c :: rest =>
      if (c :: rest).all isIncTargetC then
        some (none, refNormalize (c :: rest))
      else none

/-! ## Fetch, document-state registration, argument fold, and expansion loop -/

/-- Structural-fuel implementation of `repPass` (`IncludeExpr.lean`)
    so kernel reduction (`rfl`) computes directly without unfolding
    `WellFounded.fix`; proved equal to `repPass` for all inputs in
    `refSubPass_eq_repPass` below. -/
def refSubPassGo (key val : List Char) : Nat → List Char → List Char
  | 0, _ => []
  | _ + 1, [] => []
  | fuel + 1, c :: cs =>
    match matchPat (placeholder key) (c :: cs) with
    | some rest => val ++ refSubPassGo key val fuel rest
    | none => c :: refSubPassGo key val fuel cs

/-- One argument substitution pass (`str_replace('{$'.$key.'}', $val, $s)`). -/
def refSubPass (l key val : List Char) : List Char :=
  refSubPassGo key val l.length l

/-- The G1.4b sequential argument substitution fold over `args` in
    source order; proved equal to `LeanFtml.substitute` in
    `refSubstitute_eq_substitute` below. -/
def refSubstitute (content : List Char)
    (args : List (List Char × List Char)) : List Char :=
  args.foldl (fun c kv => refSubPass c kv.1 kv.2) content

theorem refSubPassGo_eq_repPass (key val : List Char) :
    ∀ (fuel : Nat) (l : List Char),
      l.length ≤ fuel → refSubPassGo key val fuel l = repPass l key val := by
  intro fuel
  induction fuel with
  | zero =>
    intro l hl
    cases l with
    | nil => exact (repPass_nil key val).symm
    | cons c cs =>
      simp only [List.length_cons] at hl
      omega
  | succ fuel ih =>
    intro l hl
    cases l with
    | nil => exact (repPass_nil key val).symm
    | cons c cs =>
      simp only [refSubPassGo]
      cases hm : matchPat (placeholder key) (c :: cs) with
      | none =>
        simp only [hm]
        rw [repPass_cons_none hm]
        simp only [List.length_cons] at hl
        rw [ih cs (by omega)]
      | some rest =>
        simp only [hm]
        rw [repPass_cons_some hm]
        have hlen := congrArg List.length (matchPat_eq_some.mp hm)
        simp only [List.length_append, List.length_cons,
          placeholder_length] at hlen hl
        rw [ih rest (by omega)]

/-- `refSubPass` is extensionally identical to G1.4b's `repPass`. -/
theorem refSubPass_eq_repPass (l key val : List Char) :
    refSubPass l key val = repPass l key val :=
  refSubPassGo_eq_repPass key val l.length l (Nat.le_refl _)

/-- `refSubstitute` is extensionally identical to G1.4b's `substitute`. -/
theorem refSubstitute_eq_substitute (content : List Char)
    (args : List (List Char × List Char)) :
    refSubstitute content args = substitute content args := by
  induction args generalizing content with
  | nil => rfl
  | cons kv rest ih =>
    simp only [refSubstitute, substitute, List.foldl_cons,
      refSubPass_eq_repPass, ih]

/-- Insert a page ID into `DocState.inclusions` preserving first-seen
    order (PHP `$wiki->vars['inclusions'][$id] = $id`). -/
def addInclusionId (ids : List Nat) (pid : Nat) : List Nat :=
  if ids.contains pid then ids else ids ++ [pid]

/-- Insert a missing display name into `DocState.inclusionsNotExist`
    preserving first-seen order (PHP
    `$wiki->vars['inclusionsNotExist'][$display] = $display`). -/
def addInclusionMissing (names : List (List Char)) (display : List Char) :
    List (List Char) :=
  if names.contains display then names else names ++ [display]

/-- `Text_Wiki_Parse_Include::refFetch($resolved, $args)` parameterized
    over a page map `pages`: looks up `display`, updates `doc.inclusions`
    or `doc.inclusionsNotExist`, runs the G1.4b sequential argument
    substitution fold (`refSubstitute`, proved equal to
    `LeanFtml.substitute`) on found content or constructs the
    missing-page error block wikitext, and pads with `"\n\n"` on both
    sides. -/
def refFetchWith (pages : List (List Char × List Char))
    (resolved : Option (List Char) × List Char)
    (args : List (List Char × List Char))
    (doc : DocState) : List Char × DocState :=
  let (siteOpt, pageName) := resolved
  let display : List Char :=
    match siteOpt with
    | some site => ':' :: (site ++ (':' :: pageName))
    | none => pageName
  match lookupPage pages display with
  | none =>
    -- PHP loose inequality `$siteName != null`: true iff `siteOpt` is
    -- `some site` with `site` non-empty (`"" != null` is false in PHP).
    let createHref : List Char :=
      match siteOpt with
      | some site =>
        if !site.isEmpty then
          "https://".toList ++ site ++ ".wikidot.com/".toList ++
            pageName ++ "/edit/true".toList
        else
          '/' :: (pageName ++ "/edit/true".toList)
      | none =>
        '/' :: (pageName ++ "/edit/true".toList)
    let output : List Char :=
      "\n\n[[div class=\"error-block\"]]\nIncluded page \"".toList ++
        htmlSpecialChars pageName ++
        "\" does not exist ([".toList ++ createHref ++
        " create it now])\n[[/div]]\n\n".toList
    let doc' :=
      { doc with inclusionsNotExist :=
          addInclusionMissing doc.inclusionsNotExist display }
    (output, doc')
  | some pageSource =>
    let pid := refPageId display
    let doc' :=
      { doc with inclusions := addInclusionId doc.inclusions pid }
    let substituted := refSubstitute pageSource args
    ("\n\n".toList ++ substituted ++ "\n\n".toList, doc')

/-- `refFetch` against the reference harness page map `refPageMap`. -/
def refFetch (resolved : Option (List Char) × List Char)
    (args : List (List Char × List Char))
    (doc : DocState) : List Char × DocState :=
  refFetchWith refPageMap resolved args doc

/-- `Text_Wiki_Parse_Include::refNextLineStart($src, $ls)`: the
    offset of the first line start strictly after the line
    containing `ls` (F1 resumption); `src.length` when no newline
    remains. -/
def refNextLineStart (src : List Char) (ls : Nat) : Nat :=
  match findSubChar src ['\n'] ls with
  | some nl => nl + 1
  | none => src.length

/-- One whole-document expansion pass (`refExpandPass`) parameterized
    over a page map `pages`. On block-parse or resolution failure
    the candidate stays literal and scanning resumes at the next
    line start after the failed candidate's opener line (F1 as
    corrected by AUDIT-G13), not at the candidate end. -/
def refExpandPassWith (pages : List (List Char × List Char))
    (src : List Char) (doc : DocState) : List Char × DocState :=
  go 0 [] doc (src.length + 2)
where
  go (pos : Nat) (out : List Char) (doc : DocState) :
      Nat → List Char × DocState
    | 0 => (out ++ src.drop pos, doc)
    | fuel + 1 =>
      match refFindCandidate src pos with
      | none => (out ++ src.drop pos, doc)
      | some (ls, _plen, _depth, matchEnd) =>
        match refFindIncludeEnd src matchEnd with
        | none => (out ++ src.drop pos, doc)
        | some _candEnd =>
          match refParseBlock (src.drop matchEnd) with
          | none =>
            let resume := refNextLineStart src ls
            go resume (out ++ (src.drop pos).take (resume - pos)) doc fuel
          | some (blockEndRel, refRun, args) =>
            let blockEnd := matchEnd + blockEndRel
            match refResolveRef refRun with
            | none =>
              let resume := refNextLineStart src ls
              go resume (out ++ (src.drop pos).take (resume - pos)) doc fuel
            | some resolved =>
              let (fetched, doc') := refFetchWith pages resolved args doc
              go blockEnd
                (out ++ (src.drop pos).take (ls - pos) ++ fetched)
                doc' fuel

/-- `Text_Wiki_Parse_Include::refExpandPass($src)` over `refPageMap`. -/
def refExpandPass (src : List Char) (doc : DocState) :
    List Char × DocState :=
  refExpandPassWith refPageMap src doc

/-- Bounded multi-pass expansion loop (`Text_Wiki_Parse_Include::parse`
    runs with `maxPasses = 5`): runs `refExpandPassWith` up to
    `maxPasses` times, stopping early as soon as a pass produces no
    source change. -/
def includePassesWith (pages : List (List Char × List Char)) :
    Nat → List Char → DocState → List Char × DocState
  | 0, src, doc => (src, doc)
  | fuel + 1, src, doc =>
      let (src', doc') := refExpandPassWith pages src doc
      if src' == src then (src', doc')
      else includePassesWith pages fuel src' doc'

/-- The 5-pass expansion loop over `refPageMap`. -/
def includePasses (maxPasses : Nat) (src : List Char) (doc : DocState) :
    List Char × DocState :=
  includePassesWith refPageMap maxPasses src doc

/-- The Include parse rule on a `ParseState` (pipeline position 1).
    Like `prefilterRule`, its input at position 1 is token-free;
    it updates `st.work` with the expanded text and `st.doc` with
    the accumulated `inclusions` and `inclusionsNotExist` lists,
    leaving `st.tokens` untouched. -/
def includeRule (st : ParseState) : ParseState :=
  match allText st.work with
  | some cs =>
      let (cs', doc') := includePasses 5 cs st.doc
      { st with work := normSegs [TSeg.text cs'], doc := doc' }
  | none => st

/-! ## Theorems -/

set_option maxRecDepth 100000

/-- `includeRule` never claims or alters tokens: the token table after
    `includeRule` is identical to the token table before it. -/
theorem includeRule_tokens (st : ParseState) :
    (includeRule st).tokens = st.tokens := by
  unfold includeRule
  cases allText st.work <;> rfl

/-- `includeRule` preserves the fatal flag. -/
theorem includeRule_fatal (st : ParseState) :
    (includeRule st).fatal = st.fatal := by
  unfold includeRule
  cases allText st.work <;> rfl

/-- Zero passes of `includePassesWith` is the identity on source and
    document state. -/
theorem includePassesWith_zero (pages : List (List Char × List Char))
    (src : List Char) (doc : DocState) :
    includePassesWith pages 0 src doc = (src, doc) := rfl

/-- CRC-32 page IDs match PHP 8.5.4 `1000 + crc32($key) % 1000` across
    the harness page map. -/
theorem refPageId_g14_target_example :
    refPageId "muse-probe-g14-target".toList = 1156 := rfl

theorem refPageId_other_page_example :
    refPageId "other-page".toList = 1517 := rfl

theorem refPageId_empty_page_example :
    refPageId "empty-page".toList = 1697 := rfl

theorem refPageId_site_other_page_example :
    refPageId ":sandbox:other-page".toList = 1728 := rfl

theorem refPageId_g14b_target_example :
    refPageId "muse-probe-g14b-target".toList = 1589 := rfl

theorem refPageId_notes_inc_src_example :
    refPageId "muse-probe-r2notes-x-inc-src".toList = 1376 := rfl

/-- Candidate scan finds an unquoted line-start opener. -/
theorem refFindCandidate_basic_example :
    refFindCandidate "Before\n[[include other-page]]\n".toList 0 =
      some (7, 0, 0, 16) := rfl

/-- Candidate scan skips quoted lines whole (G13): neither a
    spaced nor a tight quoted opener is a candidate. -/
theorem refFindCandidate_quoted_skipped_example :
    refFindCandidate "> [[include no]]\n>[[include yes]]".toList 0 =
      none := rfl

/-- A quoted line is skipped whole, and the scan continues at
    the following line: a plain include after a quoted one is
    still found, at its own line start with no prefix. -/
theorem refFindCandidate_quoted_then_plain_example :
    refFindCandidate ">[[include no]]\n[[include yes]]\n".toList 0 =
      some (16, 0, 0, 25) := rfl

/-- Terminator scan stops at `]]` before `\n` or EOF, and steps over
    `]]` followed by non-newline text or a lone `\r`. -/
theorem refFindIncludeEnd_example :
    refFindIncludeEnd " page | a=]]b]]\rx]]\n".toList 0 =
      some 19 := rfl

/-- Block parse stops at `]]\r` (grammar newline, wider than candidate
    terminator `refFindIncludeEnd`) and Tolerates stray `[` plus one
    space before arguments (G3). -/
theorem refParseBlock_stray_example :
    refParseBlock " target\n[[ | marker=OK]]\rrest".toList =
      some (24, "target".toList, [("marker".toList, "OK".toList)]) := rfl

/-- Raw segment splitting is comment-unaware (AUDIT-G14B): a pipe
    inside `[!-- ... --]` splits like any other, so the comment
    opener lands in one argument's value and the closer in the
    next segment's key position. -/
theorem refSegments_raw_pipe_example :
    refSegments "a=1 [!-- | b=2 --] | c=3".toList =
      [("a".toList, "1 [!--".toList),
       ("b".toList, "2 --]".toList),
       ("c".toList, "3".toList)] := rfl

/-- An unterminated `[!--` is ordinary text (AUDIT-G14B): it
    cannot fail the block, and the split proceeds on raw pipes. -/
theorem refSegments_unclosed_comment_example :
    refSegments "a=1 [!-- unclosed | c=3".toList =
      [("a".toList, "1 [!-- unclosed".toList),
       ("c".toList, "3".toList)] := rfl

/-- Dotted-host site canonicalization strips `.wikidot.com` (and one
    optional trailing dot) while preserving slug case. -/
theorem refCanonicalSite_host_example :
    refCanonicalSite "SCP-JP.Wikidot.com.".toList =
      "SCP-JP".toList := rfl

/-- Reference resolution covers cross-site pairs, leading-colon
    fallback, empty-normalized page names, and the character gate. -/
theorem refResolveRef_cross_site_example :
    refResolveRef ":wikipedia:Albert_Einstein".toList =
      some (some "wikipedia".toList, "albert-einstein".toList) := rfl

theorem refResolveRef_leading_colons_example :
    refResolveRef ":::Page_Name".toList =
      some (none, "page-name".toList) := rfl

theorem refResolveRef_site_empty_fallback_example :
    refResolveRef ":site:".toList =
      some (none, "site".toList) := rfl

theorem refResolveRef_empty_norm_fires_example :
    refResolveRef ":::".toList =
      some (none, []) := rfl

theorem refResolveRef_char_gate_rejects_example :
    refResolveRef "other-page#frag".toList = none := rfl

theorem refResolveRef_pair_char_gate_rejects_example :
    refResolveRef ":sandbox:other-page#frag".toList = none := rfl

/-- A site segment failing the host gate (`_` is outside
    `[A-Za-z0-9.-]`) falls back to whole-run page resolution, so
    the missing-page display name is the normalized whole run
    (AUDIT-G13, probe muse-probe-g13fix-site-underscore). -/
theorem refResolveRef_host_gate_fallback_example :
    refResolveRef ":foo_bar:other-page".toList =
      some (none, "foo-bar:other-page".toList) := rfl

/-- A pair whose page part normalizes to empty fires with the
    empty name (AUDIT-G13, probe
    muse-probe-audit-g13-site-empty-page-norm). -/
theorem refResolveRef_empty_pair_page_fires_example :
    refResolveRef ":sandbox:---".toList =
      some (some "sandbox".toList, []) := rfl

/-- The site segment is never slug-normalized: its case is
    preserved verbatim (AUDIT-G13, probe
    muse-probe-g13fix-site-upper). -/
theorem refResolveRef_site_case_preserved_example :
    refResolveRef ":FOO:other-page".toList =
      some (some "FOO".toList, "other-page".toList) := rfl

/-- A dotted site segment passes the host gate and, not being a
    `.wikidot.com` host, canonicalizes to itself. -/
theorem refResolveRef_dotted_site_example :
    refResolveRef ":a.b:other-page".toList =
      some (some "a.b".toList, "other-page".toList) := rfl

/-- Missing page splices the error block wikitext and records the
    display name in `inclusionsNotExist`. The expected text is
    spelled in the definition's own append segments: as a single
    ~190-character literal the `rfl` check exceeds the stock
    `whnf` heartbeat budget (the one build failure of the
    delivered CAPSTONE tree), while the segmented spelling,
    which denotes the identical character list, checks cheaply. -/
theorem refFetch_missing_cross_site_example :
    refFetch (some "wikipedia".toList, "albert-einstein".toList) [] {} =
      ("\n\n[[div class=\"error-block\"]]\nIncluded page \"".toList ++
        "albert-einstein".toList ++
        "\" does not exist ([".toList ++
        "https://wikipedia.wikidot.com/albert-einstein/edit/true".toList ++
        " create it now])\n[[/div]]\n\n".toList,
       { inclusionsNotExist := [":wikipedia:albert-einstein".toList] }) := rfl

/-- Existing page records its CRC-32 page ID in `inclusions` and runs
    the G1.4b sequential argument fold. -/
theorem refFetch_existing_fold_example :
    refFetch (none, "muse-probe-g14b-target".toList)
      [("a".toList, "{$b}".toList), ("b".toList, "SECOND".toList),
       ("marker".toList, "MVAL".toList)] {} =
      ("\n\nA is SECOND.\nB is SECOND.\nM is MVAL.\nTARGET-END\n\n".toList,
       { inclusions := [1589] }) := rfl

/-- F1 resumption (AUDIT-G13): a candidate whose ref fails the
    resolution charset gate stays literal, and scanning resumes
    at the next line start, so the valid include on the following
    line still fires (the shape of probe
    muse-probe-audit-g13-f1-bad-next-good). -/
theorem refExpandPass_resumption_example :
    refExpandPass
      "[[include bad#page]]\n[[include other-page]]\n".toList {} =
      ("[[include bad#page]]\n".toList ++
        "\n\nOTHER-PAGE-CONTENT\nSecond value is {$marker}.\nOTHER-END\n\n".toList ++
        "\n".toList,
       { inclusions := [1517] }) := rfl

/-- A tight quoted include is not a candidate at all (G13): the
    pass leaves the line literal and registers nothing. -/
theorem refExpandPass_quoted_literal_example :
    refExpandPass ">[[include other-page]]\n".toList {} =
      (">[[include other-page]]\n".toList, {}) := rfl

/-- Self-include recursion terminates at the 5-pass ceiling, leaving
    5 expanded copies and the 6th `[[include self]]` unexpanded, with
    `inclusions` holding the page ID once. -/
theorem includePassesWith_self_cycle_bound_example :
    let pages := [("self".toList, "S\n[[include self]]".toList)]
    let (out, doc) := includePassesWith pages 5 "[[include self]]".toList {}
    (out, doc.inclusions) =
      ("\n\nS\n\n\nS\n\n\nS\n\n\nS\n\n\nS\n[[include self]]\n\n\n\n\n\n\n\n\n\n".toList,
       [refPageId "self".toList]) := rfl

/-- Mutual-include cycle (`p1 -> p2 -> p1`) terminates at the 5-pass
    ceiling and records both page IDs in first-seen order. -/
theorem includePassesWith_mutual_cycle_bound_example :
    let pages := [("p1".toList, "ONE\n[[include p2]]".toList),
                  ("p2".toList, "TWO\n[[include p1]]".toList)]
    let (out, doc) := includePassesWith pages 5 "[[include p1]]".toList {}
    (out, doc.inclusions) =
      ("\n\nONE\n\n\nTWO\n\n\nONE\n\n\nTWO\n\n\nONE\n[[include p2]]\n\n\n\n\n\n\n\n\n\n".toList,
       [refPageId "p1".toList, refPageId "p2".toList]) := rfl

/-- Include of a missing page inside an included page expands on pass 2,
    recording the outer page in `inclusions` and the inner missing page
    in `inclusionsNotExist`. -/
theorem includePassesWith_nested_missing_example :
    let pages := [("outer".toList, "OUT\n[[include no-such]]".toList)]
    let (out, doc) := includePassesWith pages 5 "[[include outer]]".toList {}
    (out, doc.inclusions, doc.inclusionsNotExist) =
      ("\n\nOUT\n\n\n[[div class=\"error-block\"]]\nIncluded page \"no-such\" does not exist ([/no-such/edit/true create it now])\n[[/div]]\n\n\n\n".toList,
       [refPageId "outer".toList],
       ["no-such".toList]) := rfl

/-! ## Reconnected include grammar (C-AUDIT-G13-3)

    The headline facts that used to talk about `matchOpener`,
    `stripGt`, `origOffset`, and `parseSiteRef` are restated here
    against `refFindCandidate` and `refResolveRef`, the functions
    `includeRule` actually runs. -/

/-- A blank, a tab, or `>`. This is the lead test inside
    `refFindCandidate`, written so the theorems can name it.
    Definitionally the same predicate as the scanner's lambda. -/
abbrev isQuoteLeadC (c : Char) : Bool :=
  c == ' ' || c == '\t' || c == '>'

theorem findSubChar_go_zero (s pat : List Char) (i : Nat) :
    findSubChar.go s pat i 0 = none := rfl

theorem findSubChar_go_succ (s pat : List Char) (i fuel : Nat) :
    findSubChar.go s pat i (fuel + 1) =
      if i + pat.length > s.length then none
      else if (s.drop i).take pat.length == pat then some i
      else findSubChar.go s pat (i + 1) fuel := rfl

theorem findSubChar_go_ge (s pat : List Char) :
    ∀ fuel i k, findSubChar.go s pat i fuel = some k → i ≤ k := by
  intro fuel
  induction fuel with
  | zero =>
    intro i k h
    rw [findSubChar_go_zero] at h
    cases h
  | succ fuel ih =>
    intro i k h
    rw [findSubChar_go_succ] at h
    by_cases hlen : i + pat.length > s.length
    · rw [if_pos hlen] at h
      cases h
    · rw [if_neg hlen] at h
      by_cases heq : ((s.drop i).take pat.length == pat) = true
      · rw [if_pos heq] at h
        cases h
        exact Nat.le_refl _
      · rw [if_neg heq] at h
        exact Nat.le_trans (Nat.le_succ i) (ih (i + 1) k h)

theorem findSubChar_ge (s pat : List Char) (fromPos k : Nat)
    (h : findSubChar s pat fromPos = some k) : fromPos ≤ k := by
  unfold findSubChar at h
  exact findSubChar_go_ge s pat (s.length + 2) fromPos k h

theorem refFindCandidate_eq (src : List Char) (fromPos : Nat) :
    refFindCandidate src fromPos =
      refFindCandidate.go src fromPos (src.length + 2) := rfl

theorem refFindCandidate_go_zero (src : List Char) (start : Nat) :
    refFindCandidate.go src start 0 = none := rfl

theorem refFindCandidate_go_succ (src : List Char) (start fuel : Nat) :
    refFindCandidate.go src start (fuel + 1) =
      if start > src.length then none
      else
        let suffix := src.drop start
        let lead := suffix.takeWhile
          (fun c => c == ' ' || c == '\t' || c == '>')
        if lead.contains '>' then
          match findSubChar src ['\n'] start with
          | none => none
          | some nl => refFindCandidate.go src (nl + 1) fuel
        else
          let matchOk :=
            suffix.take 2 == ['[', '['] &&
            startsWithCI (suffix.drop 2) ['i', 'n', 'c', 'l', 'u', 'd', 'e'] &&
            match (suffix.drop 9).head? with
            | some c => isPcreWs c
            | none => false
          if matchOk then some (start, 0, 0, start + 9)
          else
            match findSubChar src ['\n'] start with
            | none => none
            | some nl => refFindCandidate.go src (nl + 1) fuel := rfl

/-- What a successful `refFindCandidate` hit looks like: prefix
    length 0, depth 0, the match ends nine characters later, the
    line's blank/`>` lead contains no `>`, and the line starts
    with `[[` plus case-insensitive `include` plus one PCRE
    whitespace character. -/
def refCandidateShape (src : List Char) (ls plen depth mend : Nat) : Prop :=
  plen = 0 ∧ depth = 0 ∧ mend = ls + 9 ∧
  '>' ∉ ((src.drop ls).takeWhile isQuoteLeadC) ∧
  (src.drop ls).take 2 = ['[', '['] ∧
  startsWithCI ((src.drop ls).drop 2) ['i', 'n', 'c', 'l', 'u', 'd', 'e'] = true ∧
  ∃ c, ((src.drop ls).drop 9).head? = some c ∧ isPcreWs c = true

theorem refFindCandidate_go_inv (src : List Char) :
    ∀ fuel start ls plen depth mend,
      refFindCandidate.go src start fuel = some (ls, plen, depth, mend) →
      start ≤ ls ∧ refCandidateShape src ls plen depth mend := by
  intro fuel
  induction fuel with
  | zero =>
    intro start ls plen depth mend h
    rw [refFindCandidate_go_zero] at h
    cases h
  | succ fuel ih =>
    intro start ls plen depth mend h
    rw [refFindCandidate_go_succ] at h
    by_cases hlen : start > src.length
    · rw [if_pos hlen] at h
      cases h
    · rw [if_neg hlen] at h
      dsimp at h
      by_cases hcont :
          ((src.drop start).takeWhile isQuoteLeadC).contains '>' = true
      · rw [if_pos hcont] at h
        cases hfind : findSubChar src ['\n'] start with
        | none =>
          simp [hfind] at h
        | some nl =>
          simp [hfind] at h
          have hinv := ih (nl + 1) ls plen depth mend h
          have hge := findSubChar_ge src ['\n'] start nl hfind
          exact ⟨Nat.le_trans (Nat.le_trans hge (Nat.le_succ nl)) hinv.1, hinv.2⟩
      · rw [if_neg hcont] at h
        let matchOk :=
          (src.drop start).take 2 == ['[', '['] &&
          startsWithCI ((src.drop start).drop 2)
            ['i', 'n', 'c', 'l', 'u', 'd', 'e'] &&
          match ((src.drop start).drop 9).head? with
          | some c => isPcreWs c
          | none => false
        by_cases hok : matchOk = true
        · rw [if_pos hok] at h
          have heq := Option.some.inj h
          have hls : start = ls := (Prod.mk.inj heq).1
          have hr1 := (Prod.mk.inj heq).2
          have hplen : 0 = plen := (Prod.mk.inj hr1).1
          have hr2 := (Prod.mk.inj hr1).2
          have hdepth : 0 = depth := (Prod.mk.inj hr2).1
          have hmend : start + 9 = mend := (Prod.mk.inj hr2).2
          have hplen' : plen = 0 := hplen.symm
          have hdepth' : depth = 0 := hdepth.symm
          have hmend' : mend = start + 9 := hmend.symm
          subst hls
          subst hplen'
          subst hdepth'
          subst hmend'
          obtain ⟨hab, hc⟩ := Bool.and_eq_true_iff.mp hok
          obtain ⟨ha, hb⟩ := Bool.and_eq_true_iff.mp hab
          have htake : (src.drop start).take 2 = ['[', '['] := beq_iff_eq.mp ha
          have hnot : '>' ∉ (src.drop start).takeWhile isQuoteLeadC := by
            intro hmem
            have hct : ((src.drop start).takeWhile isQuoteLeadC).contains '>' = true := by
              rw [List.contains_eq_mem]
              exact decide_eq_true hmem
            exact hcont hct
          cases hhead : ((src.drop start).drop 9).head? with
          | none =>
            rw [hhead] at hc
            cases hc
          | some c =>
            rw [hhead] at hc
            exact ⟨Nat.le_refl _, rfl, rfl, rfl, hnot, htake, hb, ⟨c, hhead, hc⟩⟩
        · rw [if_neg hok] at h
          cases hfind : findSubChar src ['\n'] start with
          | none =>
            simp [hfind] at h
          | some nl =>
            simp [hfind] at h
            have hinv := ih (nl + 1) ls plen depth mend h
            have hge := findSubChar_ge src ['\n'] start nl hfind
            exact ⟨Nat.le_trans (Nat.le_trans hge (Nat.le_succ nl)) hinv.1, hinv.2⟩

/-- A returned candidate is the tight line-start opener: no quote
    marker in the lead, prefix length and depth both 0. -/
theorem refFindCandidate_success_shape {src : List Char}
    {fromPos ls plen depth mend : Nat}
    (h : refFindCandidate src fromPos = some (ls, plen, depth, mend)) :
    refCandidateShape src ls plen depth mend :=
  (refFindCandidate_go_inv src (src.length + 2) fromPos ls plen depth mend
    (by rw [← refFindCandidate_eq]; exact h)).2

/-- ADJACENCY, restated for the live scanner. A successful candidate
    never carries a positive prefix length (the corrected scanner
    does not accept a quote prefix at all). The old implication
    "a non-empty prefix ends at `>`" therefore holds of every hit
    `refFindCandidate` returns. -/
theorem refFindCandidate_adjacent {src : List Char}
    {fromPos ls plen depth mend : Nat}
    (h : refFindCandidate src fromPos = some (ls, plen, depth, mend))
    (hplen : 0 < plen) :
    (src.drop ls)[plen - 1]? = some '>' := by
  have hs := refFindCandidate_success_shape h
  have : plen = 0 := hs.1
  exact absurd hplen (by rw [this]; exact Nat.lt_irrefl 0)

/-- A line start whose blank/`>` lead contains `>` is not returned
    as a candidate at that offset. This is the G13 rule the pipeline
    runs: quoted lines are skipped whole. -/
theorem refFindCandidate_skips_gt {src : List Char} {ls : Nat}
    (hgt : '>' ∈ (src.drop ls).takeWhile isQuoteLeadC) :
    ∀ plen depth mend,
      refFindCandidate src ls ≠ some (ls, plen, depth, mend) := by
  intro plen depth mend h
  rw [refFindCandidate_eq] at h
  have hfuel : src.length + 2 = (src.length + 1) + 1 := rfl
  rw [hfuel, refFindCandidate_go_succ] at h
  by_cases hlen : ls > src.length
  · rw [if_pos hlen] at h
    cases h
  · rw [if_neg hlen] at h
    dsimp at h
    have hcont :
        ((src.drop ls).takeWhile isQuoteLeadC).contains '>' = true := by
      rw [List.contains_eq_mem]
      exact decide_eq_true hgt
    rw [if_pos hcont] at h
    cases hfind : findSubChar src ['\n'] ls with
    | none =>
      simp [hfind] at h
    | some nl =>
      simp [hfind] at h
      have hinv := refFindCandidate_go_inv src (src.length + 1) (nl + 1)
        ls plen depth mend h
      have hge := findSubChar_ge src ['\n'] ls nl hfind
      have hlt : nl + 1 ≤ ls := hinv.1
      have hle : ls ≤ nl := hge
      omega

theorem quoteLead_spaced {lb sb t : List Char}
    (hlb : ∀ c ∈ lb, isBlankC c = true)
    (hsb : ∀ c ∈ sb, isBlankC c = true) :
    ((lb ++ '>' :: (sb ++ '[' :: '[' :: t)).takeWhile isQuoteLeadC)
      = lb ++ '>' :: sb := by
  have hq : ∀ c ∈ lb ++ '>' :: sb, isQuoteLeadC c = true := by
    intro c hc
    simp only [List.mem_append, List.mem_cons] at hc
    cases hc with
    | inl h1 =>
      have hb := hlb c h1
      simp only [isBlankC, Bool.or_eq_true, beq_iff_eq] at hb
      cases hb with
      | inl h => simp [isQuoteLeadC, h]
      | inr h => simp [isQuoteLeadC, h]
    | inr h1 =>
      cases h1 with
      | inl h =>
        subst h
        decide
      | inr h =>
        have hb := hsb c h
        simp only [isBlankC, Bool.or_eq_true, beq_iff_eq] at hb
        cases hb with
        | inl h => simp [isQuoteLeadC, h]
        | inr h => simp [isQuoteLeadC, h]
  have e1 : lb ++ '>' :: (sb ++ '[' :: '[' :: t) =
      (lb ++ '>' :: sb) ++ ('[' :: '[' :: t) := by
    simp only [List.append_assoc, List.cons_append]
  rw [e1, takeWhile_append_of_all hq]
  have hstop : ('[' :: '[' :: t).takeWhile isQuoteLeadC = [] :=
    List.takeWhile_cons_of_neg (by decide)
  rw [hstop]
  simp

/-- SPACED FORM, restated for the live scanner. A line whose
    pre-`[[` segment is blanks, one `>`, then at least one blank,
    is not a candidate at that line start. -/
theorem refFindCandidate_spaced_none {lb sb t : List Char}
    (hlb : ∀ c ∈ lb, isBlankC c = true)
    (hsb : ∀ c ∈ sb, isBlankC c = true)
    (hsb0 : 0 < sb.length) :
    ∀ plen depth mend,
      refFindCandidate (lb ++ '>' :: (sb ++ '[' :: '[' :: t)) 0 ≠
        some (0, plen, depth, mend) := by
  intro plen depth mend h
  have _ : sb ≠ [] := by
    intro hempty
    simp [hempty] at hsb0
  have hgt : '>' ∈
      ((lb ++ '>' :: (sb ++ '[' :: '[' :: t)).takeWhile isQuoteLeadC) := by
    rw [quoteLead_spaced hlb hsb]
    simp
  exact refFindCandidate_skips_gt
    (src := lb ++ '>' :: (sb ++ '[' :: '[' :: t)) (ls := 0)
    hgt plen depth mend h

theorem splitFirstColon_cons_ne {c : Char} {rest : List Char} (hne : c ≠ ':') :
    splitFirstColon (c :: rest) =
      (splitFirstColon rest).map (fun (a, b) => (c :: a, b)) :=
  splitFirstColon.eq_3 c rest (fun h => hne h)

theorem splitFirstColon_spec {l a b : List Char}
    (h : splitFirstColon l = some (a, b)) :
    l = a ++ ':' :: b ∧ ∀ c ∈ a, c ≠ ':' := by
  induction l generalizing a b with
  | nil =>
    rw [splitFirstColon.eq_1] at h
    cases h
  | cons c rest ih =>
    by_cases hc : c = ':'
    · subst hc
      rw [splitFirstColon.eq_2] at h
      cases h
      refine ⟨rfl, ?_⟩
      intro c hc
      cases hc
    · rw [splitFirstColon_cons_ne hc] at h
      cases hrest : splitFirstColon rest with
      | none =>
        rw [hrest] at h
        cases h
      | some p =>
        obtain ⟨a', b'⟩ := p
        rw [hrest] at h
        cases h
        have ih' := ih hrest
        refine ⟨?_, ?_⟩
        · simp [ih'.1]
        · intro d hd
          cases hd with
          | head => exact hc
          | tail _ hd => exact ih'.2 d hd

/-- A cross-site hit of `refResolveRef` splits the trimmed run into
    a non-empty host-gate site, a colon, and a non-empty target-gate
    page. The site that comes back is that slice after
    `refCanonicalSite` only, and the page is `refNormalize` of the
    page slice. This is the live form of the old site-prefix split. -/
theorem refResolveRef_pair_spec {run site page : List Char}
    (h : refResolveRef run = some (some site, page)) :
    ∃ sitePart pagePart,
      trimChars run = ':' :: (sitePart ++ ':' :: pagePart) ∧
      sitePart ≠ [] ∧ pagePart ≠ [] ∧
      (∀ c ∈ sitePart, isIncHostC c = true) ∧
      (∀ c ∈ pagePart, isIncTargetC c = true) ∧
      site = refCanonicalSite sitePart ∧
      page = refNormalize pagePart := by
  unfold refResolveRef at h
  cases htrim : trimChars run with
  | nil =>
    rw [htrim, refResolveRef.go.eq_1] at h
    cases h
  | cons c rest =>
    by_cases hc : c = ':'
    · subst hc
      rw [htrim, refResolveRef.go.eq_2] at h
      cases hsplit : splitFirstColon rest with
      | none =>
        rw [hsplit] at h
        by_cases hall : (':' :: rest).all isIncTargetC = true
        · rw [if_pos hall] at h
          cases h
        · rw [if_neg hall] at h
          cases h
      | some parts =>
        obtain ⟨sitePart, pagePart⟩ := parts
        rw [hsplit] at h
        let gate := !sitePart.isEmpty && !pagePart.isEmpty &&
          pagePart.all isIncTargetC && sitePart.all isIncHostC
        have hred :
            (match some (sitePart, pagePart) with
              | none =>
                if (':' :: rest).all isIncTargetC then
                  some (none, refNormalize (':' :: rest))
                else none
              | some pair =>
                let sitePart := pair.1
                let pagePart := pair.2
                if !sitePart.isEmpty && !pagePart.isEmpty &&
                    pagePart.all isIncTargetC && sitePart.all isIncHostC then
                  some (some (refCanonicalSite sitePart), refNormalize pagePart)
                else if (':' :: rest).all isIncTargetC then
                  some (none, refNormalize (':' :: rest))
                else none) =
            (if gate then
              some (some (refCanonicalSite sitePart), refNormalize pagePart)
            else if (':' :: rest).all isIncTargetC then
              some (none, refNormalize (':' :: rest))
            else none) := rfl
        rw [hred] at h
        by_cases hgate : gate = true
        · rw [if_pos hgate] at h
          cases h
          obtain ⟨habc, hhost⟩ := Bool.and_eq_true_iff.mp hgate
          obtain ⟨hab, htarget⟩ := Bool.and_eq_true_iff.mp habc
          obtain ⟨hsiteE, hpageE⟩ := Bool.and_eq_true_iff.mp hab
          have hsite_ne : sitePart ≠ [] := by
            intro hempty
            subst hempty
            simp [List.isEmpty] at hsiteE
          have hpage_ne : pagePart ≠ [] := by
            intro hempty
            subst hempty
            simp [List.isEmpty] at hpageE
          have hchars := splitFirstColon_spec hsplit
          refine ⟨sitePart, pagePart, ?_, hsite_ne, hpage_ne, ?_, ?_, rfl, rfl⟩
          · simp [hchars.1]
          · intro cc hcc
            exact (List.all_eq_true.mp hhost) cc hcc
          · intro cc hcc
            exact (List.all_eq_true.mp htarget) cc hcc
        · rw [if_neg hgate] at h
          by_cases hall : (':' :: rest).all isIncTargetC = true
          · rw [if_pos hall] at h
            cases h
          · rw [if_neg hall] at h
            cases h
    · rw [htrim, refResolveRef.go.eq_3 c rest (fun h' => hc h')] at h
      by_cases hall : (c :: rest).all isIncTargetC = true
      · rw [if_pos hall] at h
        cases h
      · rw [if_neg hall] at h
        cases h

end LeanFtml
