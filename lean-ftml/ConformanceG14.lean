/-
  Conformance driver for G1.4 (bridge A, model side).

  A Lean fragment implementation of ftml's `include()` pipeline
  (src/includes/), end to end: line-start scan with the quote-prefix
  rule, block parse per grammar.pest, quoted consumption via
  normalize + offset mapping, argument segment scanning, fetch
  against a fixed page map, variable substitution, and the padded
  splice. It reuses the proved model functions where they exist
  (`scanPrefix`, `startsWithCI`, `findIncludeEnd`, `parsePageRef`,
  `separated`, `splice`, and for argument substitution
  `substitute`); the glue around them is exactly what this
  differential exists to discipline. Quoted stripping
  (`stripGt`, `origOffset`) and `parseSiteRef` are gone: the
  depth>0 branch below never ran (`findMatch` returns only
  depth-0 matches), and nothing called `parseSiteRef`. See the
  proof-scope annotation in `LeanFtml/IncludeGrammar.lean`.

  Protocol: JSONL on stdin, {"id", "source"} per line; JSONL on
  stdout, {"id", "output", "pages"} per line. The Rust counterpart
  is conformance-g14/rust-dump (the real `ftml::includes::include`
  with the same page map). A mismatch invalidates the model (or
  exposes an ftml divergence), never the other way round.

  Fragment bounds: page references are ASCII (the driver's
  `normalizeSlug` models `wikidot_normalize::normalize` for ASCII
  inputs; Unicode NFKC and case folding are outside the fragment).
  Argument values are unrestricted since 2026-11-20: substitution
  is the proved G1.4b fold (`LeanFtml.substitute`), under which
  `{$...}` text in values is literal data, exactly as on live.
-/

import LeanFtml

open LeanFtml

/-! ## Character classes -/

/-- Grammar whitespace (grammar.pest `whitespace`): space, \n, \t.
    Note the absence of \r, which the scanner regex's \s+ accepts
    but the grammar does not. -/
def isGramWs (c : Char) : Bool := c == ' ' || c == '\n' || c == '\t'

/-- The scanner regex's \s set (Rust regex \s, ASCII part). -/
def isRegexWs (c : Char) : Bool :=
  c == ' ' || c == '\n' || c == '\t' || c == '\r' ||
  c == Char.ofNat 11 || c == Char.ofNat 12

/-- PHP's default trim set, used by the argument scanner at both
    ends of a value and at the start of a segment. -/
def isTrimC (c : Char) : Bool :=
  c == ' ' || c == '\t' || c == '\n' || c == '\r' ||
  c == Char.ofNat 0 || c == Char.ofNat 11

/-- Argument key and variable name characters: ASCII alphanumeric,
    `-`, `_`. -/
def isKeyC (c : Char) : Bool :=
  (97 ≤ c.toNat && c.toNat ≤ 122) || (65 ≤ c.toNat && c.toNat ≤ 90) ||
  (48 ≤ c.toNat && c.toNat ≤ 57) || c == '-' || c == '_'

/-! ## Small list helpers -/

/-- Does `s` have `pat` at offset `i`? -/
def startsWithAt (s : List Char) (i : Nat) (pat : List Char) : Bool :=
  (s.drop i).take pat.length == pat

/-- First index at or after `from` where `pat` occurs in `s`. -/
def findSub (s : List Char) (pat : List Char) (startAt : Nat) :
    Nat → Option Nat
  | 0 => none
  | fuel + 1 =>
    if startAt > s.length then none
    else if startsWithAt s startAt pat then some startAt
    else findSub s pat (startAt + 1) fuel

/-- End of the maximal run of `p`-characters starting at `i`. -/
def runEnd (s : List Char) (i : Nat) (p : Char → Bool) : Nat :=
  i + ((s.drop i).takeWhile p).length

/-! ## Minimal JSON (string fields only) -/

def hexVal (c : Char) : Nat :=
  if 48 ≤ c.toNat && c.toNat ≤ 57 then c.toNat - 48
  else if 97 ≤ c.toNat && c.toNat ≤ 102 then c.toNat - 87
  else if 65 ≤ c.toNat && c.toNat ≤ 70 then c.toNat - 55
  else 0

/-- Parse a JSON string literal at the head of `l`; returns the
    decoded string and the rest of the input. -/
def parseJsonString (l : List Char) : Option (String × List Char) :=
  match l with
  | '"' :: rest => go rest [] (rest.length + 1)
  | _ => none
where
  go (l : List Char) (acc : List Char) : Nat → Option (String × List Char)
    | 0 => none
    | fuel + 1 =>
      match l with
      | [] => none
      | '"' :: rest => some (String.ofList acc.reverse, rest)
      | '\\' :: c :: rest =>
        match c with
        | '"' => go rest ('"' :: acc) fuel
        | '\\' => go rest ('\\' :: acc) fuel
        | '/' => go rest ('/' :: acc) fuel
        | 'n' => go rest ('\n' :: acc) fuel
        | 'r' => go rest ('\r' :: acc) fuel
        | 't' => go rest ('\t' :: acc) fuel
        | 'b' => go rest (Char.ofNat 8 :: acc) fuel
        | 'f' => go rest (Char.ofNat 12 :: acc) fuel
        | 'u' =>
          match rest with
          | h1 :: h2 :: h3 :: h4 :: rest' =>
            go rest' (Char.ofNat (hexVal h1 * 4096 + hexVal h2 * 256 +
              hexVal h3 * 16 + hexVal h4) :: acc) fuel
          | _ => none
        | _ => none
      | c :: rest => go rest (c :: acc) fuel

/-- Extract a string field from a flat JSON object line. -/
def jsonField (line : String) (key : String) : Option String :=
  let l := line.toList
  let pat := '"' :: (key.toList ++ ['"'])
  match findSub l pat 0 (l.length + 1) with
  | none => none
  | some p =>
    let rest := (l.drop (p + pat.length)).dropWhile
      (fun c => c == ' ' || c == '\t')
    match rest with
    | ':' :: rest' =>
      match parseJsonString (rest'.dropWhile (fun c => c == ' ' || c == '\t')) with
      | some (v, _) => some v
      | none => none
    | _ => none

def hexDigitC (n : Nat) : Char :=
  ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
   'a', 'b', 'c', 'd', 'e', 'f'][n % 16]!

/-- Escape a string as a JSON string body (without the quotes). -/
def escapeJson (str : String) : String :=
  String.ofList (str.toList.flatMap (fun c =>
    if c == '"' then ['\\', '"']
    else if c == '\\' then ['\\', '\\']
    else if c == '\n' then ['\\', 'n']
    else if c == '\r' then ['\\', 'r']
    else if c == '\t' then ['\\', 't']
    else if c.toNat < 32 then
      ['\\', 'u', '0', '0', hexDigitC (c.toNat / 16), hexDigitC c.toNat]
    else [c]))

/-! ## Page references -/

/-- Rust `str::trim` whitespace set (ASCII part): space, \t,
    \n, \r, vertical tab, form feed. -/
def isWsTrimC (c : Char) : Bool :=
  c == ' ' || c == '\t' || c == '\n' || c == '\r' ||
  c == Char.ofNat 11 || c == Char.ofNat 12

/-- Trim the whitespace set at both ends. -/
def trimWs (l : List Char) : List Char :=
  ((l.dropWhile isWsTrimC).reverse.dropWhile isWsTrimC).reverse

/-- `PageRef::split_page`: the page part ends at the first `#`
    or `/`; the rest is the (undisplayed) extra. -/
def splitPagePart (l : List Char) : List Char :=
  l.takeWhile (fun c => c != '#' && c != '/')

/-- ASCII case folding (the fragment is ASCII-only; the real
    `wikidot_normalize` folds and NFKC-normalizes Unicode). -/
def casefoldA (c : Char) : Char :=
  if 65 ≤ c.toNat && c.toNat ≤ 90 then Char.ofNat (c.toNat + 32) else c

/-- `canonical_include_site`: a host-form `<slug>.wikidot.com`
    site segment (ASCII case-insensitive suffix, one optional
    trailing dot, prefix of [A-Za-z0-9-]+) becomes `<slug>`;
    anything else is returned unchanged. -/
def canonSite (site : List Char) : List Char :=
  let t := trimWs site
  let t := if t.getLast? == some '.' then (t.reverse.drop 1).reverse else t
  if t.length ≥ 12 then
    let pfx := t.take (t.length - 12)
    let suffix := (t.drop (t.length - 12)).map casefoldA
    if suffix == ".wikidot.com".toList && !pfx.isEmpty &&
        pfx.all (fun c => isKeyC c && c != '_') then
      pfx
    else site
  else site

/-- Characters kept by the NON_NORMAL replacement: letters,
    digits, `-`, `:`, `_` (checked after case folding). -/
def isSlugKeep (c : Char) : Bool :=
  (97 ≤ c.toNat && c.toNat ≤ 122) || (48 ≤ c.toNat && c.toNat ≤ 57) ||
  c == '-' || c == ':' || c == '_'

/-- `merge_multi_categories`: every colon except the last
    becomes a dash. -/
def mergeCats (l : List Char) : List Char :=
  (go l.reverse true).reverse
where
  go : List Char → Bool → List Char
    | [], _ => []
    | c :: rest, first =>
      (if c == ':' then (if first then ':' else '-') else c) ::
        go rest (first && c != ':')

/-- `replace_underscores`: an underscore not at the start and
    not immediately after a colon becomes a dash. -/
def replaceUnders (l : List Char) : List Char :=
  go l false true
where
  go : List Char → Bool → Bool → List Char
    | [], _, _ => []
    | c :: rest, prevColon, isFirst =>
      (if c == '_' && !isFirst && !prevColon then '-' else c) ::
        go rest (c == ':') false

/-- Collapse every run of `ch` to a single `ch`. -/
def collapseRun (l : List Char) (ch : Char) : List Char :=
  go l false
where
  go : List Char → Bool → List Char
    | [], _ => []
    | c :: rest, prev =>
      if c == ch && prev then go rest true
      else c :: go rest (c == ch)

/-- First index where two adjacent characters match `p`. -/
def findAdj (p : Char → Char → Bool) : List Char → Nat → Option Nat
  | [], _ => none
  | [_], _ => none
  | a :: b :: rest, i =>
    if p a b then some i else findAdj p (b :: rest) (i + 1)

/-- Fixpoint pair replacement: the leftmost adjacent pair
    matching `p` is replaced by the single character `rep`. -/
def pairFix (p : Char → Char → Bool) (rep : Char) (l : List Char) :
    Nat → List Char
  | 0 => l
  | fuel + 1 =>
    match findAdj p l 0 with
    | none => l
    | some i => pairFix p rep (l.take i ++ rep :: l.drop (i + 2)) fuel

/-- `wikidot_normalize::normalize`, ASCII fragment, in the
    crate's own step order. -/
def normalizeSlug (input : List Char) : List Char :=
  let l := trimWs input
  let l := match l with | '/' :: rest => rest | _ => l
  let l := l.map casefoldA
  let l := l.map (fun c => if isSlugKeep c then c else '-')
  let l := mergeCats l
  let l := replaceUnders l
  let l := (l.dropWhile (fun c => c == '-')).reverse.dropWhile
    (fun c => c == '-')
  let l := l.reverse
  let l := collapseRun l '-'
  let l := collapseRun l ':'
  let l := pairFix (fun a b => (a == ':' && b == '-') ||
    (a == '-' && b == ':')) ':' l (l.length + 1)
  let l := pairFix (fun a b => (a == '_' && b == '-') ||
    (a == '-' && b == '_')) '_' l (l.length + 1)
  let l := (l.dropWhile (fun c => c == ':')).reverse.dropWhile
    (fun c => c == ':')
  let l := l.reverse
  if l.take 9 == "_default:".toList then l.drop 9 else l

/-- The live include-target charset (GRAMMAR-INCLUDE L6, the
    C6/C7 rule): ASCII alphanumerics plus `-`, `_`, `:`. -/
def targetCharset (l : List Char) : Bool :=
  l.all fun c =>
    (('a' ≤ c && c ≤ 'z') || ('A' ≤ c && c ≤ 'Z') ||
     ('0' ≤ c && c ≤ '9') || c == '-' || c == '_' || c == ':')

/-- Split a list at its first `:`, returning the parts before
    and after it. -/
def splitAtFirstColon : List Char → Option (List Char × List Char)
  | [] => none
  | ':' :: rest => some ([], rest)
  | c :: rest => (splitAtFirstColon rest).map fun (a, b) => (c :: a, b)

/-- The site-segment host gate (GRAMMAR-INCLUDE L6 as
    completed by AUDIT-G13, 2026-11-21): ASCII letters,
    digits, `-`, `.`. `_` is excluded: probe
    muse-probe-g13fix-site-underscore shows a `:foo_bar:` run
    falling back to whole-run page resolution (live names the
    missing page "foo-bar:muse-probe-audit-g13-target"). -/
def isSiteHostC (c : Char) : Bool :=
  ('a' ≤ c && c ≤ 'z') || ('A' ≤ c && c ≤ 'Z') ||
  ('0' ≤ c && c ≤ '9') || c == '-' || c == '.'

def siteHostOk (l : List Char) : Bool := !l.isEmpty && l.all isSiteHostC

/-- Resolve a raw page_ref run to its display form (the string
    `PageRef::to_string` produces, which is also the includer
    key), following the completed live rule of GRAMMAR-INCLUDE
    L6 (the C6/C7 rule as corrected by AUDIT-G13, 2026-11-21):
    a well-formed site pair (non-empty site, non-empty page
    segment) resolves cross-site when the site segment passes
    the host gate (`siteHostOk`; the AUDIT-G13 probes show
    `/`, `#`, and non-ASCII site runs stay literal) and the
    page segment passes the target charset; the site is
    canonicalized by `canonSite` only, never slug-normalized
    (probe muse-probe-g13fix-site-upper names the site "FOO"
    verbatim), and a page segment normalizing to empty still
    fires, with the empty name (probe
    muse-probe-audit-g13-site-empty-page-norm). A run failing
    the site gate falls back to the page-name rule: any other
    run resolves as a page name only when the whole run
    passes the charset, with no `#`/`/` splitting, and a run
    in the charset whose normalized form is empty still
    resolves, to the empty page name. -/
def splitRef (raw : List Char) : Option String :=
  let s := trimWs raw
  if s.isEmpty then none
  else
    let pagePath : Option String :=
      if !targetCharset s then none
      else some (String.ofList (normalizeSlug s))
    if s.head? == some ':' then
      match splitAtFirstColon s.tail with
      | some (siteRaw, pageRaw) =>
        let site := trimWs siteRaw
        let pageSeg := trimWs pageRaw
        if site.isEmpty || pageSeg.isEmpty then pagePath
        else if !siteHostOk site then pagePath
        else if !targetCharset pageSeg then none
        else
          let page := normalizeSlug pageSeg
          some (":" ++ String.ofList (canonSite site) ++
            ":" ++ String.ofList page)
      | none => pagePath
    else pagePath

/-! ## Argument segments -/

/-- Split the argument tail on raw `|` bytes. Live's segment
    scanning is comment-unaware: `[!-- ... --]` bytes are
    ordinary tail bytes, a pipe inside a comment splits there,
    and an unterminated comment is ordinary text that cannot
    fail the block (AUDIT probes muse-probe-audit-g14b-cmt-pipe
    and muse-probe-audit-g14b-cmt-unclosed, 2026-11-21). The
    earlier comment-aware split modelled ftml's parse.rs
    scan_include_arguments and was refuted by those probes. -/
def splitSegments (tail : List Char) : List (List Char) :=
  go 0 0 [] (tail.length + 2)
where
  go (i segStart : Nat) (acc : List (List Char)) :
      Nat → List (List Char)
    | 0 => acc ++ [tail.drop segStart]
    | fuel + 1 =>
      if i ≥ tail.length then acc ++ [tail.drop segStart]
      else if (tail.drop i).head? == some '|' then
        go (i + 1) (i + 1)
          (acc ++ [(tail.drop segStart).take (i - segStart)]) fuel
      else go (i + 1) segStart acc fuel

def trimStartT (l : List Char) : List Char := l.dropWhile isTrimC

def trimEndT (l : List Char) : List Char :=
  (l.reverse.dropWhile isTrimC).reverse

/-- One segment as an argument: trim the start, take the key run,
    require `=` after optional spaces, trim the value at both
    ends. Inert segments (no key, no `=`) and empty values (which
    `resolve_include_arguments` drops) produce no argument. -/
def segmentArg (seg : List Char) : Option (String × String) :=
  let src := trimStartT seg
  let key := src.takeWhile isKeyC
  if key.isEmpty then none
  else
    match trimStartT (src.drop key.length) with
    | '=' :: rest =>
      let v := trimEndT (trimStartT rest)
      if v.isEmpty then none else some (String.ofList key, String.ofList v)
    | _ => none

/-- The whole tail as the ordered argument list. G1.4b: source
    order and duplicates are semantic under the live fold, so
    nothing is resolved, expanded, or deduplicated here; the
    segment rules in `segmentArg` (static key, non-empty value)
    are the only filter. -/
def parseArgs (tail : List Char) : List (String × String) :=
  (splitSegments tail).filterMap segmentArg

/-! ## Variable substitution in fetched content

Substitution is the proved model function `LeanFtml.substitute`
(the live sequential fold, G1.4b): for each argument in source
order, every occurrence of `{$key}` in the current content is
replaced by the argument's raw value. It replaced this driver's
earlier map-based `replaceVars` on 2026-11-20, when the live
probes showed the map semantics is ftml's, not Wikidot's
(finding F-G14B-1). -/

/-! ## The block parse (grammar.pest `include`, at offset 0) -/

/-- The run of `space` (grammar whitespace or complete comments)
    that may follow the stray bracket run. An unterminated comment
    simply ends the run. -/
def spaceRunEnd (s : List Char) (i : Nat) : Nat → Nat
  | 0 => i
  | fuel + 1 =>
    if i ≥ s.length then i
    else if isGramWs (s.drop i).head! then spaceRunEnd s (i + 1) fuel
    else if startsWithAt s i ['[', '!', '-', '-'] then
      match findSub s ['-', '-', ']'] (i + 4) (s.length + 1) with
      | some p => spaceRunEnd s (p + 3) fuel
      | none => i
    else i

/-- After the whitespace following the page reference: consume
    the optional stray `[` run (never a comment start) and its
    optional trailing space run. Returns the tail start. -/
def strayEnd (s : List Char) (j : Nat) : Nat :=
  if (s.drop j).head? == some '[' &&
      !startsWithAt s j ['[', '!', '-', '-'] then
    spaceRunEnd s (runEnd s j (fun c => c == '[')) (s.length + 1)
  else j

/-- The grammar's own terminator scan: the first `]]` at or
    after `from` followed by a pest NEWLINE (\n, \r\n, or a lone
    \r) or by end of input; returns the offset just after `]]`.
    This is WIDER than `findIncludeEnd` (the scanner's
    `find_include_end`), which does not accept a lone \r: the
    block parse succeeds at a `]]\r` the candidate scan steps
    over, and the scan then resumes at the parsed end. -/
def gramTermEnd (t : List Char) (fromPos : Nat) : Nat → Option Nat
  | 0 => none
  | fuel + 1 =>
    if fromPos + 2 > t.length then none
    else if startsWithAt t fromPos [']', ']'] &&
        (fromPos + 2 == t.length ||
          (t.drop (fromPos + 2)).head? == some '\n' ||
          (t.drop (fromPos + 2)).head? == some '\r') then
      some (fromPos + 2)
    else gramTermEnd t (fromPos + 1) fuel

/-- Parse an include block at the head of `t` (the text from the
    block's line start, or a normalized quoted region). Returns
    the page display string, the argument map, and the block end
    (the offset just after the terminating `]]`). -/
def parseBlockFrag (t : List Char) :
    Option (String × List (String × String) × Nat) :=
  if !startsWithAt t 0 ['[', '['] then none
  else if !startsWithCI (t.drop 2) ['i', 'n', 'c', 'l', 'u', 'd', 'e'] then
    none
  else
    match (t.drop 9).head? with
    | none => none
    | some c =>
      if !isGramWs c then none
      else
        let wsEnd := runEnd t 9 isGramWs
        let raw := (parsePageRef (t.drop wsEnd)).1
        if raw.isEmpty then none
        else
          let refEnd := wsEnd + raw.length
          match gramTermEnd t refEnd (t.length + 1) with
          | none => none
          | some ce =>
            match splitRef raw with
            | none => none
            | some display =>
              if refEnd == ce - 2 then some (display, [], ce)
              else if refEnd > ce - 2 then none
              else
                match (t.drop refEnd).head? with
                | none => none
                | some c2 =>
                  if !isGramWs c2 then none
                  else
                    let j := runEnd t refEnd isGramWs
                    if j == ce - 2 then some (display, [], ce)
                    else if j > ce - 2 then none
                    else
                      let k := strayEnd t j
                      if k > ce - 2 then none
                      else
                        let tail := (t.drop k).take (ce - 2 - k)
                        some (display, parseArgs tail, ce)

/-! ## The scan (mod.rs `include`) -/

/-- The scanner regex at a line start: the quote prefix (modelled
    by `scanPrefix`), then `[[`, case-insensitive `include`, and a
    regex-whitespace character. Returns (prefix length, depth).
    `findMatch` keeps only depth 0, so a quote-prefixed line is
    not a match. The capstone pipeline's opener is
    `refFindCandidate`, not this function. -/
def driverOpener (s : List Char) (ls : Nat) : Option (Nat × Nat) :=
  let suffix := s.drop ls
  let (plen, depth) := scanPrefix suffix
  let rest := suffix.drop plen
  if !startsWithAt rest 0 ['[', '['] then none
  else if !startsWithCI (rest.drop 2) ['i', 'n', 'c', 'l', 'u', 'd', 'e'] then
    none
  else
    match (rest.drop 9).head? with
    | none => none
    | some c => if isRegexWs c then some (plen, depth) else none

/-- The first regex match at or after `fromPos`, as (line start,
    marker start, quote depth). Matches begin only at line starts.
    Since ftml PR #1531 (the F-G14-1 fix, merged 2026-11-20) the
    scanner regex matches only the unquoted line-start form, so a
    line start with quote depth > 0 is not a match at all and the
    scan moves on; the quoted-consumption path below is retired
    and unreachable, kept as the record of the pre-fix mechanism. -/
def findMatch (s : List Char) (fromPos : Nat) : Option (Nat × Nat × Nat) :=
  go fromPos (s.length + 1)
where
  go (p : Nat) : Nat → Option (Nat × Nat × Nat)
    | 0 => none
    | fuel + 1 =>
      if p > s.length then none
      else if p == 0 || s[p - 1]? == some '\n' then
        match driverOpener s p with
        | some (plen, depth) =>
          if depth == 0 then some (p, p + plen, depth)
          else go (p + 1) fuel
        | none => go (p + 1) fuel
      else go (p + 1) fuel

/-- A scanned include: its range in the input and its parsed
    reference and arguments. `ref = none` was the retired quoted
    deletion; `findMatch` never produces that branch. -/
structure Inc where
  a : Nat
  b : Nat
  ref : Option (String × List (String × String))

/-- The first line start strictly after the line containing
    `ls`; `s.length` when no newline remains. -/
def nextLineStart (s : List Char) (ls : Nat) : Nat :=
  match findSub s ['\n'] ls (s.length + 1) with
  | some p => p + 1
  | none => s.length

/-- The mod.rs scan loop: find matches, parse or consume them,
    resume at the block end on success; on failure resume at
    the next line start after the failed candidate's opener
    line (F1 as corrected by AUDIT-G13, 2026-11-21: resuming
    at the candidate end swallowed a valid include beginning
    on an intervening line; probe
    muse-probe-audit-g13-f1-bad-next-good). Stop when no
    terminator remains. The depth > 0 arm is unreachable:
    `findMatch` returns only depth-0 matches, so it resumes at
    the candidate end without calling anything. -/
def scanAll (s : List Char) : List Inc :=
  go 0 [] (s.length + 1)
where
  go (fromPos : Nat) (acc : List Inc) : Nat → List Inc
    | 0 => acc.reverse
    | fuel + 1 =>
      match findMatch s fromPos with
      | none => acc.reverse
      | some (ls, m, depth) =>
        let matchEnd :=
          m + 9 + ((s.drop (m + 9)).takeWhile isRegexWs).length
        match findIncludeEnd s matchEnd with
        | none => acc.reverse
        | some ce =>
          if depth == 0 then
            match parseBlockFrag (s.drop ls) with
            | some (display, args, endRel) =>
              go (ls + endRel)
                (⟨ls, ls + endRel, some (display, args)⟩ :: acc) fuel
            | none => go (nextLineStart s ls) acc fuel
          else
            go ce acc fuel

/-! ## Fetch and substitution -/

/-- The page map, identical to the Rust dumper's. -/
def fetchContent (display : String) : Option String :=
  [("muse-probe-g14-target",
    "TARGET-CONTENT-START\nValue is {$marker}.\nTARGET-CONTENT-END"),
   ("other-page",
    "OTHER-PAGE-CONTENT\nSecond value is {$marker}.\nOTHER-END"),
   ("empty-page", ""),
   (":sandbox:other-page", "SITE-PAGE-CONTENT"),
   ("muse-probe-g14b-target",
    "A is {$a}.\nB is {$b}.\nM is {$marker}.\nTARGET-END"),
   ("muse-probe-audit-g14b-target",
    "A={$a}\nB={$b}\nADJ={$a}{$b}\nNEST={{$a}b}\nM={$marker}\nUPPER={$MARKER}\nZERO={$z}\nDOT={$a.b}\nCOL={$a:b}"),
   -- AUDIT-G13 target page (data only; the conformance-g13
   -- set's same-site pair fetches under the pair key).
   ("muse-probe-audit-g13-target", "TARGET-OK-{$marker}"),
   (":sandbox-for-codex:muse-probe-audit-g13-target",
    "TARGET-OK-{$marker}")].lookup display

/-- The fragment `include()`: scan, fetch, substitute, splice. -/
def fragInclude (s : List Char) : (List Char × List String) :=
  let incs := scanAll s
  let repls : List Repl := incs.map (fun inc =>
    match inc.ref with
    | none => (inc.a, inc.b, [])
    | some (display, args) =>
      let text := match fetchContent display with
        | some c => substitute c.toList
            (args.map (fun kv => (kv.1.toList, kv.2.toList)))
        | none => ("<MISSING-PAGE " ++ display ++ ">").toList
      (inc.a, inc.b, separated s inc.a inc.b text))
  let pages := incs.filterMap (fun inc => inc.ref.map (·.1))
  (splice repls s 0, pages)

/-! ## Driver main -/

def processLine (line : String) : String :=
  match jsonField line "id", jsonField line "source" with
  | some id, some source =>
    let (out, pages) := fragInclude source.toList
    let pagesJson := String.intercalate ", "
      (pages.map (fun p => "\"" ++ escapeJson p ++ "\""))
    "{\"id\": \"" ++ escapeJson id ++ "\", \"output\": \"" ++
      escapeJson (String.ofList out) ++ "\", \"pages\": [" ++ pagesJson ++ "]}"
  | _, _ => "{\"id\": \"?\", \"error\": \"bad-input\"}"

/-- Drop one trailing line ending (`\n`, optionally preceded
    by `\r`) from a line read off stdin. -/
def dropLineEnd : List Char → List Char
  | [] => []
  | [c] => if c == '\n' || c == '\r' then [] else [c]
  | c :: rest => c :: dropLineEnd rest

partial def mainLoop (stdin : IO.FS.Stream) : IO Unit := do
  let raw ← stdin.getLine
  let line := String.ofList (dropLineEnd raw.toList)
  if line.isEmpty then return ()
  IO.println (processLine line)
  mainLoop stdin

def main : IO Unit := do
  let stdin ← IO.getStdin
  mainLoop stdin
