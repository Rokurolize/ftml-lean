import LeanFtml.TokenState
import LeanFtml.FrameRules
import LeanFtml.CodeRule
import LeanFtml.FormRawRules
import LeanFtml.ModuleRules
import LeanFtml.NextRules
import LeanFtml.LinkRules
import LeanFtml.NotesRules
import LeanFtml.BlockRules
import LeanFtml.ContainRules
import LeanFtml.ListRules
import LeanFtml.TableRules

/-!
# R3.11: the Image, Newline, and Paragraph rules

The last block-family stage of the R3 sequence: the reference's
Image, Newline, and Paragraph rules, in reference pipeline
order, extending the mirrored pipeline from thirty-five rules
to thirty-eight. The compared state is unchanged (the
post-parse source plus the token table; Paragraph's scored-span
table is rule-local state, consumed inside the rule's own pass
exactly as the reference consumes it, and never serialized).

## Image: byte-form analysis

The reference pattern is `/(\[\[((?:f)?[<>=])?image\s+)(.*?)\]\]/is`:
an opener `[[`, an optional alignment group, the word `image`
(case-insensitive), a greedy whitespace run, and a lazy body to
the first `]]`. The alignment group's candidates in PCRE
order are the f-prefixed form, the bare form, and absence (the
`/i` modifier covers the `f` too, so the prefix byte may be
uppercase; the recorded alignment keeps the matched bytes);
the whitespace run after `image` is greedy-maximal, so the body is
exactly the bytes between the end of that run and the first
`]]`, with no backtracking freedom anywhere (a longer or
shorter whitespace run would move the first `]]` only if the
run itself contained `]]`, which whitespace cannot). The
mirror therefore enumerates the three alignment candidates in
order and takes the first that completes, which is the
reference's own search.

process() first bails out to the literal match when the whole
match contains a delimiter byte (correction C7: a raw-token
head, or any earlier rule's placeholder inside the would-be
image, makes the opener literal). Every option value is
therefore a plain string in this mirror, never a `$bytes`
value. The body splits at the first space byte: no space means
the whole body is the source and the attribute map is empty;
otherwise the tail goes through the base class's `getAttrs`
(the R3.5 byte mirror) and only the whitelisted keys are
copied, in the fixed order title, link, style, class, alt,
height, width, size, with the size value lowercased. A link
starting with `*` loses the star and sets the target to
`_blank`; a link whose first byte is a `ctype_space` byte
makes the whole match literal (correction C3); a link
containing `://` must satisfy the reference's URL pattern or
the match is literal. REFCORR3 C-SUSPECT-SERVING-3: the URL
pattern is head-anchored (`^`), so a scheme that appears only
embedded later in the link value does not qualify and the whole
opener is left literal. It remains a case-sensitive `preg_match`
for a scheme in http, https, ftp, gopher, news, then `://`, then a
host part whose decisive property is reachability: after any
number of `label.` groups (a label is one or more bytes outside
the excluded set: dot,
PCRE whitespace, `/ " ' < \`, the delimiter byte, and control
bytes 0x01-0x1A), a byte in `[a-z]` must occur. The label run
is deterministic (labels cannot contain the dot that ends
them), so host reachability is a simple recursion. The
alignment option is set from the opener group when present,
and a source starting with `*` loses the star and sets the
target. The replacement is the placeholder, padded with
`"\n\n"` on both sides when an alignment is present.

## Newline: byte-form analysis

The reference pattern is `/([^\n])\n(?!\n)/m`: a byte that is
not a newline, a newline, and a negative lookahead for a
second newline. The scan is deterministic position by
position: a match at byte `b` exactly when `b` is not 0x0A,
the next byte is 0x0A, and the byte after that is not 0x0A
(or the input ends). process() returns the captured byte
followed by a Newline placeholder with empty options; the
newline byte itself is consumed. Byte form matters: the
captured "character" is a single byte, so a match can start
at a UTF-8 continuation byte, and the byte before a newline
can be a placeholder's delimiter byte, letting a Newline
claim follow a placeholder directly. The mirror is a
one-pass scan with a two-byte lookahead, which is exactly the
pattern.

## Paragraph: byte-form analysis

The rule runs in two passes. The preparation pass,
`tokenizeScoredSpans`, applies the pattern
`/(\xFF-unit*)\[\[span_([^\]]*)\]\](.*?)\[\[\/span\]\](\xFF-unit*)/is`
globally, where a unit is a single space, tab, CR, or LF byte
or one whole placeholder. Matches are computed on the
pre-pass source and spliced without rescanning. The lead
unit run is greedy with backtracking (longer leads are tried
first); the attribute group runs to the first `]`; the body
is lazy to the first case-insensitive `[[/span]]`, and since
the trail unit run is greedy-maximal at the end of the
pattern, the first closer always completes the match, so the
body is deterministic given the lead. The callback inspects
the lead and trail runs: a run has a break when it contains
an LF or CR byte, or a placeholder whose CURRENT token (the
table grows as callbacks claim Span tokens) is a Newline
token. A run with a break is replaced by only its
non-Newline placeholders, concatenated (every literal
whitespace byte and every Newline placeholder is dropped); a
run without a break is kept verbatim. The pair itself is
`Span::process` with the attribute text prefixed by one space
(the R3.8 byte mirror, reused unchanged): it claims the Span
start and end tokens and returns the spliced pair, or nothing
when the trimmed content and the arguments are both empty.
When the pair is non-empty the rule records it in its
scored-span table under the start token's index.

The main pass is `preg_replace_callback` with
`/^.*?\n\s*?\n/m`. A match at a line start is unique: the
first line (the lazy `.*?` must reach the line's newline, or
be empty for an empty line), then a newline, then the lazy
whitespace run ending at the FIRST newline inside it; a
whitespace run with no newline cannot complete the match.
Matches therefore always end just after a newline, and the
scan resumes at a line start. process() returns the empty
string when the trimmed match is empty; when the match
starts with a delimiter byte it reads the first token's key
and returns the match unchanged when the key is a scored
span whose recorded pair trims to the same bytes as the
match, or when the token's lowercased rule name is in the
skip list (blockquote, code, clearfloat, heading, horiz,
separator, deflist, table, tableadv, list, toc, center,
tabview, div, divalign and its four side forms, collapsible,
note, math, module, module654, footnoteblock, footnoteitem,
bibliography, bibitem, gallery, image); otherwise it claims a Paragraph
start token and an end token and returns start placeholder,
the trimmed match, end placeholder, and `"\n\n"`. Between
the empty check and the delimiter branch sits the scored-
anchors branch (added at R3.17, when Anchor was mirrored):
when the trimmed match ends with a registered scored
anchor's end placeholder and contains its start placeholder,
the match is returned unchanged. The table is the document
state's `scoredAnchors`; in any pipeline without Anchor it
is empty and the branch never fires.
-/

namespace LeanFtml

/-- Split at the first occurrence of a byte pattern: the bytes
    before it and the bytes after it. -/
def splitAtFirstBytes (pat : List Nat) (s : List Nat) :
    Option (List Nat × List Nat) :=
  match s with
  | [] => none
  | b :: rest =>
      if pat.isPrefixOf s then some ([], s.drop pat.length)
      else match splitAtFirstBytes pat rest with
        | some (a, r) => some (b :: a, r)
        | none => none

/-- Split at the first case-insensitive occurrence of a byte
    pattern: the bytes before it and the bytes after it. -/
def splitAtFirstCI (pat : List Nat) (s : List Nat) :
    Option (List Nat × List Nat) :=
  match s with
  | [] => none
  | b :: rest =>
      if ciAt pat s then some ([], s.drop pat.length)
      else match splitAtFirstCI pat rest with
        | some (a, r) => some (b :: a, r)
        | none => none

/-- The length of the leading PCRE-whitespace run. -/
def countWsB : List Nat → Nat
  | [] => 0
  | b :: rest => if isWsByte b then countWsB rest + 1 else 0

/-! ## Image -/

/-- The alignment group's splits of the bytes after `[[`, in
    PCRE candidate order: the f-prefixed form, the bare form,
    then absence (always available). Each split is the group
    bytes and the remaining bytes. The pattern's `/i` modifier
    covers the `f` as well, so the prefix byte is `f` or `F`;
    the recorded alignment keeps the matched bytes. -/
def imageAlignSplits (s : List Nat) : List (List Nat × List Nat) :=
  let fForm := match s with
    | f :: c :: rest =>
        if (f == 102 || f == 70) && (c == 60 || c == 62 || c == 61) then
          [([f, c], rest)]
        else []
    | _ => []
  let bareForm := match s with
    | c :: rest =>
        if c == 60 || c == 62 || c == 61 then [([c], rest)] else []
    | _ => []
  fForm ++ bareForm ++ [([], s)]

/-- An Image match at the head of `src`: the whole match, the
    alignment group (empty when absent), the body, and the
    bytes after the match. -/
def imageMatchAt (src : List Nat) :
    Option (List Nat × List Nat × List Nat × List Nat) :=
  match matchLitBytes (litBytes "[[") src with
  | none => none
  | some r0 =>
      (imageAlignSplits r0).findSome? (fun (align, r1) =>
        match matchLitCI (litBytes "image") r1 with
        | none => none
        | some r2 =>
            let n := countWsB r2
            if n == 0 then none
            else
              match splitAtFirstBytes (litBytes "]]") (r2.drop n) with
              | none => none
              | some (body, r4) =>
                  some (src.take (src.length - r4.length), align, body, r4))

/-- One byte of the reference URL pattern's host label set:
    anything except dot, PCRE whitespace, `/`, `"`, `'`, `<`,
    `\`, the delimiter byte, and the control bytes 0x01-0x1A. -/
def imageUrlLabelByte (b : Nat) : Bool :=
  !(b == 46 || isWsByte b || b == 47 || b == 34 || b == 39 || b == 60 ||
    b == 92 || b == 0xFF || (1 ≤ b && b ≤ 26))

/-- Consume one `label.` group at the head: a nonempty label
    run followed by a dot. Deterministic, since a label cannot
    contain the dot that ends it. -/
def imageUrlLabelDot (s : List Nat) : Option (List Nat) :=
  let run := s.takeWhile imageUrlLabelByte
  if run.isEmpty then none
  else if (s.drop run.length).head? == some 46 then
    some (s.drop (run.length + 1))
  else none

/-- The URL pattern's host reachability: a byte in `[a-z]` at
    the head, or after one `label.` group, recursively. -/
def imageUrlHost : List Nat → Nat → Bool
  | _, 0 => false
  | s, fuel + 1 =>
      (match s with
       | b :: _ => 97 ≤ b && b ≤ 122
       | [] => false) ||
      (match imageUrlLabelDot s with
       | some rest => imageUrlHost rest fuel
       | none => false)

/-- The URL pattern anchored at the head: one of the five
    schemes, `://`, and a reachable host. -/
def imageUrlHere (s : List Nat) : Bool :=
  [litBytes "http", litBytes "https", litBytes "ftp",
   litBytes "gopher", litBytes "news"].any (fun sch =>
    match matchLitBytes sch s with
    | some r1 =>
        match matchLitBytes (litBytes "://") r1 with
        | some r2 => imageUrlHost r2 (r2.length + 1)
        | none => false
    | none => false)

/-- The pre-correction unanchored URL check (REFCORR3
    C-SUSPECT-SERVING-3): the old pattern matched at some
    starting position of the link value. Kept only for
    reference; `imageProcess` now uses the head-anchored
    `imageUrlHere`. -/
def imageUrlMatches : List Nat → Bool
  | [] => imageUrlHere []
  | s@(_ :: rest) => imageUrlHere s || imageUrlMatches rest

/-- Right-trim an accepted Image attribute value over the rule's own
    ctype_space / PCRE `\s` byte set (space, tab, LF, VT, FF, CR), the same
    set the leading-whitespace rejection guard tests, removing an entire
    trailing run. REFCORR11 applied it to `link` only; REFCORR12 extends the
    same byte twin of Image.php's `rtrim` to `link`, `width` and `class`.
    The name `rtrimImageHrefWs` is retained as an alias for prior pins. -/
def rtrimImageAttrWs (bs : List Nat) : List Nat :=
  (bs.reverse.dropWhile isWsByte).reverse

def rtrimImageHrefWs (bs : List Nat) : List Nat :=
  rtrimImageAttrWs bs

/-- REFCORR13: the live-discarded C0 class D is the shared
    `isLiveDroppedControl` (below 0x20 except TAB, LF, CR and ESC; DEL is
    kept). Applying it to an accepted Image technical value explains the
    interior form feed that live discards from `class="thi\fck"` while the
    reference kept it (C-R5F-S1-3); the text/label values title and alt are
    not passed through this filter (S12 keeps an ESC-bearing title raw). -/
def dropImageDroppedControls (v : List Nat) : List Nat :=
  v.filter (fun b => ! isLiveDroppedControl b)

/-- REFCORR13 selective normalization: the technical/presentation keys link,
    width, class, style and height drop the shared C0 class D and then lose
    one trailing ctype_space / PCRE `\s` run; title and alt stay byte-verbatim
    and size is dropped by both sides. REFCORR12 trimmed only link, width and
    class; C-R5F-P3-1/2 and C-R5F-R2-2/3 add style and height, and
    C-R5F-S1-3 adds the interior D drop. Byte twin of the PHP consumer loop,
    placed after every acceptance guard so those guards see authored bytes. -/
def imageTrimAttr (k : List Nat) (v : List Nat) : List Nat :=
  if k == litBytes "link" || k == litBytes "width" ||
      k == litBytes "class" || k == litBytes "style" ||
      k == litBytes "height" then rtrimImageAttrWs (dropImageDroppedControls v)
  else v

/-- process() for one Image match: the whole match, the
    alignment group, the body, and the current table, returning
    the replacement bytes and the extended table. A match
    containing a delimiter byte, a whitespace-led link, or a
    `://` link failing the head-anchored URL pattern is returned
    literal. -/
def imageProcess (whole align body : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  if whole.contains 0xFF then (whole, toks)
  else
    let (srcPart, attr) : List Nat × List (List Nat × List Nat) :=
      match splitAtFirstBytes [32] body with
      | none => (body, [])
      | some (a, b) => (a, getAttrsBytes b)
    let keys := [litBytes "title", litBytes "link", litBytes "style",
      litBytes "class", litBytes "alt", litBytes "height",
      litBytes "width", litBytes "size"]
    let attr2 := keys.foldl (fun acc k => match lookupB attr k with
      | some v =>
          omSetB acc k (if k == litBytes "size" then asciiLower v else v)
      | none => acc) []
    let linkV := lookupB attr2 (litBytes "link")
    let linkBs := linkV.getD []
    let (attr3, linkTarget) : List (List Nat × List Nat) × Bool :=
      if linkV.isSome && linkBs.head? == some 42 then
        (omSetB attr2 (litBytes "link") linkBs.tail, true)
      else (attr2, false)
    let linkNow := lookupB attr3 (litBytes "link")
    let linkNowBs := linkNow.getD []
    if linkNow.isSome && !linkNowBs.isEmpty &&
        isWsByte (linkNowBs.head?.getD 0) then (whole, toks)
    else if linkNow.isSome &&
        (splitAtFirstBytes (litBytes "://") linkNowBs).isSome &&
        !imageUrlHere linkNowBs then (whole, toks)
    else
      let srcStar := srcPart.head? == some 42
      let srcFinal := if srcStar then srcPart.tail else srcPart
      -- REFCORR12: the trailing-whitespace trim runs on the accepted
      -- technical values link, width and class, after the leading-space
      -- rejection and the scheme guard above have already tested the
      -- authored bytes. The text/label values title, alt, style, height and
      -- size keep their authored whitespace byte-for-byte (the P3E-06,
      -- P3E-07 and P3E-10 boundary), as do the target, order, source
      -- handling and alignment. C-R5D-P3-1 and C-R5E-P3-1/2/3.
      let attr4 := attr3.map (fun (k, v) => (k, imageTrimAttr k v))
      let opts : OptMap :=
        [("src".toList, textVal srcFinal),
         ("attr".toList, OptVal.map
           (attr4.map (fun (k, v) => (utf8Decode k, textVal v))))] ++
        (if linkTarget then [("target".toList, textVal (litBytes "_blank"))]
         else []) ++
        (if align.isEmpty then []
         else [("align".toList, textVal align)]) ++
        (if !linkTarget && srcStar then
           [("target".toList, textVal (litBytes "_blank"))]
         else [])
      let (ph, toks1) := claimTok "Image" opts toks
      let pad := if align.isEmpty then ([] : List Nat) else [10, 10]
      (pad ++ ph ++ pad, toks1)

/-- The Image rule's scanner: preg_replace_callback semantics
    over the byte form. -/
def imageScan (src : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  go src toks (src.length + 1)
where
  go : List Nat → List TokenEntry → Nat → List Nat × List TokenEntry
    | [], toks, _ => ([], toks)
    | src, toks, 0 => (src, toks)
    | src@(b :: rest), toks, fuel + 1 =>
        match imageMatchAt src with
        | some (whole, align, body, rest') =>
            let (rep, toks1) := imageProcess whole align body toks
            let (tail, toks2) := go rest' toks1 fuel
            (rep ++ tail, toks2)
        | none =>
            let (tail, toks1) := go rest toks fuel
            (b :: tail, toks1)

/-- The Image rule mirror. -/
def imageRule (st : ParseState) : ParseState :=
  applyByteRule st imageScan

/-! ## Newline -/

/-- The Newline rule's scanner: at each byte, a match exactly
    when the byte is not a newline, the next byte is a newline,
    and the byte after that is not a newline (or the input
    ends); the match emits the byte and a Newline placeholder
    and consumes the newline. -/
def newlineScan (src : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  go src toks (src.length + 1)
where
  go : List Nat → List TokenEntry → Nat → List Nat × List TokenEntry
    | [], toks, _ => ([], toks)
    | src, toks, 0 => (src, toks)
    | src@(b :: rest), toks, fuel + 1 =>
        if b != 10 && rest.head? == some 10 &&
            (rest.tail.head? != some 10) then
          let (ph, toks1) := claimTok "Newline" [] toks
          let (o, toks2) := go rest.tail toks1 fuel
          (b :: (ph ++ o), toks2)
        else
          let (o, toks1) := go rest toks fuel
          (b :: o, toks1)

/-- The Newline rule mirror. -/
def newlineRule (st : ParseState) : ParseState :=
  applyByteRule st newlineScan

/-! ## Paragraph: the scored-span preparation -/

/-- One unit of a scored-span lead or trail run: a single
    whitespace byte (space, tab, CR, LF) or one whole
    placeholder, identified by its token index. -/
inductive PUnit where
  | wsB : Nat → PUnit
  | phT : Nat → PUnit
  deriving DecidableEq, Repr

/-- The byte form of one unit. -/
def unitBytes : PUnit → List Nat
  | .wsB b => [b]
  | .phT n => phBytes n

/-- Read one unit at the head of a byte string. -/
def unitAt (s : List Nat) : Option (PUnit × List Nat) :=
  match s with
  | b :: rest =>
      if b == 32 || b == 9 || b == 10 || b == 13 then some (.wsB b, rest)
      else match readPlaceholder s with
        | some (n, r) => some (.phT n, r)
        | none => none
  | [] => none

/-- Every split of the maximal unit run at the head of `src`,
    in ascending lead length: the units, their byte form, and
    the bytes after them. The last split is the full run. -/
def unitSplits (src : List Nat) : List (List PUnit × List Nat × List Nat) :=
  go src [] [] (src.length + 1)
where
  go : List Nat → List PUnit → List Nat → Nat →
      List (List PUnit × List Nat × List Nat)
    | src, units, bytes, 0 => [(units, bytes, src)]
    | src, units, bytes, fuel + 1 => (units, bytes, src) ::
        match unitAt src with
        | some (u, rest) => go rest (units ++ [u]) (bytes ++ unitBytes u) fuel
        | none => []

/-- The rule name of token `n`, or the empty string when the
    index is out of range (which the reference's table lookups
    never produce on well-formed runs). -/
def tokenRuleAt (toks : List TokenEntry) (n : Nat) : String :=
  match (toks.drop n).head? with
  | some t => t.rule
  | none => ""

/-- A run unit carries a break when it is an LF or CR byte, or
    a placeholder whose current token is a Newline token. -/
def unitIsBreak (toks : List TokenEntry) (u : PUnit) : Bool :=
  match u with
  | .wsB b => b == 10 || b == 13
  | .phT n => tokenRuleAt toks n == "Newline"

/-- A break-carrying run's replacement: only its non-Newline
    placeholders, concatenated; every whitespace byte and every
    Newline placeholder is dropped. -/
def filterRunBytes (toks : List TokenEntry) (units : List PUnit) : List Nat :=
  units.foldl (fun acc u => match u with
    | .phT n =>
        if tokenRuleAt toks n == "Newline" then acc else acc ++ phBytes n
    | .wsB _ => acc) []

/-- A scored-span match at the head of `src`: lead splits are
    tried longest first (the pattern's greedy unit run with
    backtracking); the attribute runs to the first `]`; the
    body ends at the first case-insensitive `[[/span]]`; the
    trail is the maximal unit run after the closer. Returns
    the callback's replacement, the extended table, the
    scored-span entry to record (the start index and the pair,
    when the pair is non-empty), and the bytes after the
    match. -/
def scoredMatchAt (src : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List TokenEntry × Option (Nat × List Nat) ×
      List Nat) :=
  (unitSplits src).reverse.findSome? (fun (leadUnits, leadBytes, afterLead) =>
    match matchLitCI (litBytes "[[span_") afterLead with
    | none => none
    | some afterOpen =>
        let attr := afterOpen.takeWhile (fun b => b != 93)
        match matchLitBytes (litBytes "]]") (afterOpen.drop attr.length) with
        | none => none
        | some bodyStart =>
            match splitAtFirstCI (litBytes "[[/span]]") bodyStart with
            | none => none
            | some (body, afterClose) =>
                match (unitSplits afterClose).getLast? with
                | none => none
                | some (trailUnits, trailBytes, afterTrail) =>
                    let lead' :=
                      if leadUnits.any (unitIsBreak toks) then
                        filterRunBytes toks leadUnits
                      else leadBytes
                    let trail' :=
                      if trailUnits.any (unitIsBreak toks) then
                        filterRunBytes toks trailUnits
                      else trailBytes
                    let (pair, toks1) :=
                      spanProcess (some (32 :: attr)) body toks
                    let entry :=
                      if pair.isEmpty then none
                      else some (toks.length, pair)
                    some (lead' ++ pair ++ trail', toks1, entry, afterTrail))

/-- The preparation pass: preg_replace_callback semantics for
    the scored-span pattern over the whole source, threading
    the token table and accumulating the scored-span table. -/
def scoredScan (src : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry × List (Nat × List Nat) :=
  go src toks [] (src.length + 1)
where
  go : List Nat → List TokenEntry → List (Nat × List Nat) → Nat →
      List Nat × List TokenEntry × List (Nat × List Nat)
    | [], toks, scored, _ => ([], toks, scored)
    | src, toks, scored, 0 => (src, toks, scored)
    | src@(b :: rest), toks, scored, fuel + 1 =>
        match scoredMatchAt src toks with
        | some (rep, toks1, entry, rest') =>
            let scored1 := match entry with
              | some e => scored ++ [e]
              | none => scored
            let (o, toks2, scored2) := go rest' toks1 scored1 fuel
            (rep ++ o, toks2, scored2)
        | none =>
            let (o, toks1, scored1) := go rest toks scored fuel
            (b :: o, toks1, scored1)

/-! ## Paragraph: the main pass -/

/-- The position of the first newline inside the leading
    whitespace run, when the run contains one: the main
    pattern's lazy `\s*?` ends at the first newline it can
    reach. -/
def wsRunNl : List Nat → Option Nat
  | [] => none
  | b :: rest =>
      if b == 10 then some 0
      else if isWsByte b then (wsRunNl rest).map (· + 1)
      else none

/-- A Paragraph match at a line start: the first line, its
    newline, and the following whitespace run up to and
    including its first newline. Returns the match and the
    bytes after it. -/
def paraMatchAt (src : List Nat) : Option (List Nat × List Nat) :=
  match splitAtFirstBytes [10] src with
  | none => none
  | some (line, after) =>
      match wsRunNl after with
      | none => none
      | some j =>
          let len := line.length + 1 + (j + 1)
          some (src.take len, src.drop len)

/-- The skip list: lowercased rule names whose token, when it
    opens a match, leaves the match unwrapped. The REFVAL
    live validation (2026-11-21) added `separator` and the
    bare `divalign` to the reference's list (the separator
    block and the aligned div both serve without a paragraph
    wrapper); the mirror follows. -/
def paraSkipRules : List (List Nat) :=
  ["blockquote", "code", "clearfloat", "heading", "horiz", "separator",
   "deflist", "table", "tableadv", "list", "toc", "center", "tabview",
   "div", "divalign", "divalignleft", "divalignright", "divaligncenter",
   "divalignjustify", "collapsible", "note", "math", "module",
   "module654", "footnoteblock", "footnoteitem", "bibliography",
   "bibitem", "gallery", "image"].map litBytes

/-- The wrap: a Paragraph start claim and an end claim around
    the trimmed match, followed by a blank line. -/
def paraWrap (m : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  let (pS, toks1) := claimTok "Paragraph"
    [("type".toList, OptVal.str "start".toList)] toks
  let (pE, toks2) := claimTok "Paragraph"
    [("type".toList, OptVal.str "end".toList)] toks1
  (pS ++ trimBytes m ++ pE ++ [10, 10], toks2)

/-- Whether `e` is a suffix of `s` (byte lists). -/
def bytesEndsWith (s e : List Nat) : Bool :=
  e.isPrefixOf (s.drop (s.length - e.length))

/-- Whether `sub` occurs in `s` as a contiguous run. -/
def bytesContains (s sub : List Nat) : Bool :=
  match s with
  | [] => sub.isPrefixOf []
  | _ :: rest => sub.isPrefixOf s || bytesContains rest sub

/-- R11-CONCAT: remove token placeholder byte sequences from a run,
    leaving only the residual plain text. Used to compare a run with a
    recorded continued-div lead. -/
def stripPhBytes (bs : List Nat) : List Nat := go bs (bs.length + 1)
where
  go : List Nat → Nat → List Nat
    | _, 0 => []
    | 0xFF :: rest, n + 1 =>
        let (digits, tail) := rest.span (fun b => 48 <= b && b <= 57)
        match tail with
        | 0xFF :: rest2 => go rest2 n
        | _ => 0xFF :: go rest n
    | b :: rest, n + 1 => b :: go rest n
    | [], _ => []

/-- R11-CONCAT: whether a paragraph run holds a div token. Narrowed by
    the recorded lead so authored same-line openers keep their pinned
    paragraph wrapper. -/
def runHasDivStart (m : List Nat) (toks : List TokenEntry) : Bool :=
  go m toks (m.length + 1)
where
  go : List Nat → List TokenEntry → Nat → Bool
    | 0xFF :: rest, toks, n + 1 =>
        let (digits, tail) := rest.span (fun b => 48 <= b && b <= 57)
        match tail with
        | 0xFF :: rest2 =>
            let id := digits.foldl (fun a b => a * 10 + (b - 48)) 0
            tokenRuleAt toks id == "Div" || go rest2 toks n
        | _ => go rest toks n
    | _ :: rest, toks, n + 1 => go rest toks n
    | _, _, 0 => false
    | [], _, _ => false

/-- process() for one Paragraph match: empty after trimming
    means the empty string; a trimmed match that ends with a
    scored anchor's end placeholder and contains its start
    placeholder is returned unchanged (the reference's
    scored-anchors branch, R3.17); a match opening with a
    scored span whose recorded pair trims to the match's own
    trimmed bytes, or with a skip-listed token, is returned
    unchanged; anything else is wrapped. -/
def paraProcess (m : List Nat) (toks : List TokenEntry)
    (scored : List (Nat × List Nat))
    (anchors : List (List Nat × List Nat))
    (leads : List (List Nat)) :
    List Nat × List TokenEntry :=
  -- R11-CONCAT: a continued block boundary keeps its lead text bare.
  if ! leads.isEmpty && runHasDivStart m toks &&
     leads.any (fun lead => trimBytes (stripPhBytes m) == lead)
  then (m, toks)
  else if (trimBytes m).isEmpty then ([], toks)
  else if anchors.any (fun (e, s) =>
      bytesEndsWith (trimBytes m) e && bytesContains (trimBytes m) s)
    then (m, toks)
  else
    match m with
    | 0xFF :: _ =>
        match readPlaceholder m with
        | some (key, _) =>
            let scoredHit := match scored.find? (fun (k, _) => k == key) with
              | some (_, pair) => trimBytes m == trimBytes pair
              | none => false
            if scoredHit then (m, toks)
            else if paraSkipRules.contains
                (asciiLower ((tokenRuleAt toks key).toList.map Char.toNat))
              then (m, toks)
            else paraWrap m toks
        | none => paraWrap m toks
    | _ => paraWrap m toks

theorem paraProcess_continued_div_example :
    let m := litBytes "alpha " ++ phBytes 0 ++ litBytes "\n\n"
    let ts : List TokenEntry :=
      [{ rule := "Div",
         opts := [("type".toList, OptVal.str "start".toList)] }]
    paraProcess m ts [] [] [litBytes "alpha"] = (m, ts) := rfl

/-- The main pass: preg_replace_callback semantics for the
    paragraph pattern. Matches are attempted only at line
    starts (the pattern's multiline `^`); a match always ends
    just after a newline, so the scan resumes at a line start;
    a failed attempt consumes nothing. -/
def paraScan (src : List Nat) (toks : List TokenEntry)
    (scored : List (Nat × List Nat))
    (anchors : List (List Nat × List Nat))
    (leads : List (List Nat)) :
    List Nat × List TokenEntry :=
  go src toks scored true (src.length + 1)
where
  go : List Nat → List TokenEntry → List (Nat × List Nat) → Bool → Nat →
      List Nat × List TokenEntry
    | [], toks, _, _, _ => ([], toks)
    | src, toks, _, _, 0 => (src, toks)
    | src@(b :: rest), toks, scored, atStart, fuel + 1 =>
        if atStart then
          match paraMatchAt src with
          | some (m, r) =>
              let (rep, toks1) := paraProcess m toks scored anchors leads
              let (o, toks2) := go r toks1 scored true fuel
              (rep ++ o, toks2)
          | none =>
              let (o, toks1) := go rest toks scored (b == 10) fuel
              (b :: o, toks1)
        else
          let (o, toks1) := go rest toks scored (b == 10) fuel
          (b :: o, toks1)

/-- The Paragraph rule mirror: the scored-span preparation
    pass, then the main pass over its output, with the
    scored-span table threaded inside the rule exactly as the
    reference keeps it in the rule object. The scored-anchors
    table is read from the document state (Anchor writes it,
    at R3.17); the rule itself never changes it. -/
def paragraphRule (st : ParseState) : ParseState :=
  let input := byteForm st.work
  let (s1, t1, scored) := scoredScan input st.tokens
  let (out, t2) := paraScan s1 t1 scored st.doc.scoredAnchors st.continuedDivLeads
  { st with work := parseBytes out, tokens := t2 }

/-! ## Worked examples (the stage's theorems)

    Small closed computations in the earlier stages' style: an
    Image match and two Image processes (plain, and aligned
    with its blank-line padding), the placeholder bail that
    keeps a raw-headed image literal, one Newline scan, one
    Paragraph match, and the four Paragraph process outcomes
    (wrap, skip-list suppression, scored-span suppression, and
    the scored-anchors suppression added at R3.17).
    The family's whole-rule evidence is the exhaustive
    conformance of the stage corpus and the fuzz differentials
    in REPORT-R311.md. -/

theorem imageMatchAt_example :
    imageMatchAt (litBytes "[[image x.png]]") =
      some (litBytes "[[image x.png]]", [], litBytes "x.png", []) := rfl

theorem imageProcess_example :
    imageProcess (litBytes "[[image x.png]]") [] (litBytes "x.png") [] =
      (phBytes 0,
       [{ rule := "Image", opts :=
          [("src".toList, OptVal.str "x.png".toList),
           ("attr".toList, OptVal.map [])] }]) := rfl

theorem imageProcess_aligned_example :
    imageProcess (litBytes "[[>image x.png]]") (litBytes ">")
        (litBytes "x.png") [] =
      ([10, 10] ++ phBytes 0 ++ [10, 10],
       [{ rule := "Image", opts :=
          [("src".toList, OptVal.str "x.png".toList),
           ("attr".toList, OptVal.map []),
           ("align".toList, OptVal.str ">".toList)] }]) := rfl

theorem imageProcess_placeholder_example :
    imageProcess (phBytes 0) [] [] [] = (phBytes 0, []) := rfl

/-- REFCORR3 C-SUSPECT-SERVING-3: the URL check is head-anchored,
    so a link value whose only valid scheme is embedded later
    fails it (the pre-correction unanchored check would pass). -/
theorem imageUrl_anchor_example :
    imageUrlHere (litBytes "://x http://example.com/y") = false ∧
    imageUrlMatches (litBytes "://x http://example.com/y") = true :=
  ⟨rfl, rfl⟩

/-- REFCORR3 C-SUSPECT-SERVING-3: consequently an opener whose
    link value has only an embedded scheme is left literal. -/
theorem imageProcess_embedded_scheme_literal :
    imageProcess
        (litBytes "[[image x.png link=\"://x http://example.com/y\"]]") []
        (litBytes "x.png link=\"://x http://example.com/y\"") [] =
      (litBytes "[[image x.png link=\"://x http://example.com/y\"]]", []) := rfl

theorem newlineScan_example :
    newlineScan (litBytes "a\nb") [] =
      ([97] ++ phBytes 0 ++ [98],
       [{ rule := "Newline", opts := [] }]) := rfl

theorem paraMatchAt_example :
    paraMatchAt (litBytes "foo\n\nbar") =
      some (litBytes "foo\n\n", litBytes "bar") := rfl

theorem paraProcess_wrap_example :
    paraProcess (litBytes "foo\n\n") [] [] [] [] =
      (phBytes 0 ++ litBytes "foo" ++ phBytes 1 ++ [10, 10],
       [{ rule := "Paragraph", opts :=
          [("type".toList, OptVal.str "start".toList)] },
        { rule := "Paragraph", opts :=
          [("type".toList, OptVal.str "end".toList)] }]) := rfl

theorem paraProcess_skip_example :
    paraProcess (phBytes 0 ++ litBytes "x\n\n")
        [{ rule := "Table", opts := [] }] [] [] [] =
      (phBytes 0 ++ litBytes "x\n\n",
       [{ rule := "Table", opts := [] }]) := rfl

/-- The REFVAL skip additions: a run opening with a Separator
    token, or with a bare Divalign token, is returned
    unwrapped. -/
theorem paraProcess_separator_skip_example :
    paraProcess (phBytes 0 ++ litBytes "x\n\n")
        [{ rule := "Separator", opts := [] }] [] [] [] =
      (phBytes 0 ++ litBytes "x\n\n",
       [{ rule := "Separator", opts := [] }]) := rfl

theorem paraProcess_divalign_skip_example :
    paraProcess (phBytes 0 ++ litBytes "x\n\n")
        [{ rule := "Divalign", opts := [] }] [] [] [] =
      (phBytes 0 ++ litBytes "x\n\n",
       [{ rule := "Divalign", opts := [] }]) := rfl

theorem paraProcess_scored_example :
    paraProcess ((phBytes 0 ++ [88] ++ phBytes 1) ++ [10, 10])
        [{ rule := "Span", opts :=
            [("args".toList, OptVal.map []),
             ("type".toList, OptVal.str "start".toList)] },
         { rule := "Span", opts :=
            [("type".toList, OptVal.str "end".toList)] }]
        [(0, phBytes 0 ++ [88] ++ phBytes 1)] [] [] =
      ((phBytes 0 ++ [88] ++ phBytes 1) ++ [10, 10],
       [{ rule := "Span", opts :=
            [("args".toList, OptVal.map []),
             ("type".toList, OptVal.str "start".toList)] },
        { rule := "Span", opts :=
            [("type".toList, OptVal.str "end".toList)] }]) := rfl

/-- The scored-anchors branch (R3.17): a run that is exactly
    one scored anchor (its trimmed form ends with the
    registered end placeholder and contains the start
    placeholder) is returned unwrapped, even though Anchor
    is not in the skip list. -/
theorem paraProcess_anchor_example :
    paraProcess ((phBytes 0 ++ [88] ++ phBytes 1) ++ [10, 10])
        [{ rule := "Anchor", opts :=
            [("type".toList, OptVal.str "start".toList)] },
         { rule := "Anchor", opts :=
            [("type".toList, OptVal.str "end".toList)] }]
        [] [(phBytes 1, phBytes 0)] [] =
      ((phBytes 0 ++ [88] ++ phBytes 1) ++ [10, 10],
       [{ rule := "Anchor", opts :=
            [("type".toList, OptVal.str "start".toList)] },
        { rule := "Anchor", opts :=
            [("type".toList, OptVal.str "end".toList)] }]) := rfl

end LeanFtml
