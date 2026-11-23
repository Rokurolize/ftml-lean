import LeanFtml.TokenState
import LeanFtml.FormRawRules
import LeanFtml.ModuleRules
import LeanFtml.NextRules
import LeanFtml.ContainRules
import LeanFtml.ListRules
import LeanFtml.ParaRules

namespace LeanFtml

/-! ## The final rules (R3.17): Anchor, User, Button, Embed,
    Social, File

    The last six unmirrored parse rules, which complete the
    pipeline: with this module every rule of the reference's
    sixty-eight is mirrored except Include, which stands on
    its Tier 1 proof and the R2 grammar as the recorded
    boundary. In the full pipeline Anchor sits between
    Divprefilter and Blockquote, User between Anchor and
    Blockquote, Button between Tableadv and Image, and
    Embed, Social, and File between Image and Center, in
    that order.

    Anchor is the only one of the six that overrides
    `parse()`: it runs two `preg_match_all` passes (named
    anchors first, then elements) and is the only rule here
    that writes document state, the `scored_anchors` table
    Paragraph reads (mirrored as `DocState.scoredAnchors`
    at this stage; the Paragraph mirror reads it in its
    process()). The other five are base-class
    `preg_replace_callback` rules; Social's callback returns
    a string spliced into the source rather than a token, so
    it claims nothing.

    Anchor's reference behavior was validated against live
    Wikidot by the refgaps mission (a sixty-case battery);
    for the other five rules no dedicated live validation
    ever ran, so this stage's claim for them is Lean ==
    reference only, as for the R3.15 and R3.16 families.

    Byte-form facts the mirrors rest on: a placeholder's
    bytes are `\xFF`, digits, `\xFF`; the delimiter byte is
    not a bracket, a letter, or a whitespace byte, so no
    match of any of the six patterns can partially overlap a
    placeholder except through the parts the patterns leave
    unconstrained (attribute strings, element and embed
    bodies, the dot and negated-class groups), and those
    parts are handled on bytes throughout (attribute values
    through `getAttrsBytes`, option strings through
    `textVal`, bodies spliced verbatim). -/

/-- The base-class `preg_replace_callback` scan (the
    Inline1Rules `pregScan` shape): at each position the
    matcher is tried on the remaining bytes; a match
    contributes its replacement and scanning resumes after
    the consumed match; a non-match copies one byte. The
    matcher returns (rest after the match, replacement,
    extended table) and always consumes at least one byte. -/
def finalPregScan
    (m : List Nat → List TokenEntry →
      Option (List Nat × List Nat × List TokenEntry))
    (bs : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  go m bs toks (bs.length + 1)
where
  go (m : List Nat → List TokenEntry →
        Option (List Nat × List Nat × List TokenEntry)) :
      List Nat → List TokenEntry → Nat → List Nat × List TokenEntry
    | [], toks, _ => ([], toks)
    | _, toks, 0 => ([], toks)
    | src@(b :: rest), toks, fuel + 1 =>
        match m src toks with
        | some (rest', repl, toks') =>
            let (o, t2) := go m rest' toks' fuel
            (repl ++ o, t2)
        | none =>
            let (o, t2) := go m rest toks fuel
            (b :: o, t2)

/-- The lazy `.+?` growth shared by Button's and File's
    tails: the shortest nonempty prefix of `s` that is
    followed by `]]`, with the bytes after the brackets. -/
def lazyGroupToClose : List Nat → Option (List Nat × List Nat)
  | [] => none
  | b :: rest =>
      match rest with
      | 93 :: 93 :: r2 => some ([b], r2)
      | _ => match lazyGroupToClose rest with
        | some (g, r2) => some (b :: g, r2)
        | none => none

/-! ## User -/

/-- A User match at the head of `src`: (the `*` image flag,
    the user-name group, the rest after the match). The
    pattern is `/\[\[(\*)?user ([^\]]+)\]\]/i`: a literal
    single space after `user`, and the name group is forced
    maximal to the first `]`, so the decomposition is
    unique. The name is not trimmed. -/
def userMatchAt (src : List Nat) :
    Option (Bool × List Nat × List Nat) :=
  match matchLitBytes (litBytes "[[") src with
  | none => none
  | some r0 =>
      let (starred, r1) : Bool × List Nat := match r0 with
        | 42 :: rest => (true, rest)
        | _ => (false, r0)
      match matchLitCI (litBytes "user") r1 with
      | none => none
      | some (32 :: r2) =>
          let (name, r3) := r2.span (fun b => b != 93)
          match r3 with
          | 93 :: 93 :: rest =>
              if name.isEmpty then none else some (starred, name, rest)
          | _ => none
      | _ => none

/-- The User matcher for the shared scan: `process()` claims
    the token, with the `image` flag (a true boolean) only
    for the starred form. -/
def userMatch (src : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match userMatchAt src with
  | none => none
  | some (starred, name, rest) =>
      let opts : OptMap := [("userName".toList, textVal name)] ++
        (if starred then [("image".toList, OptVal.bool true)] else [])
      let (ph, toks') := claimTok "User" opts toks
      some (rest, ph, toks')

/-- User: `[[user name]]` and `[[*user name]]`. -/
def userRule (st : ParseState) : ParseState :=
  applyByteRule st (finalPregScan userMatch)

/-! ## Button -/

/-- The Button type group's byte class, `[a-z0-9\-_]` under
    the pattern's case-insensitive flag. -/
def isButtonTypeByte (b : Nat) : Bool :=
  (48 ≤ b && b ≤ 57) || (65 ≤ b && b ≤ 90) ||
  (97 ≤ b && b ≤ 122) || b == 45 || b == 95

/-- The Button tail, `(?:\s+(.+?))?\]\]`, in PCRE's order:
    the group present first, with `\s+` lengths descending
    and group lengths ascending (the lazy growth of
    `lazyGroupToClose`), then the group absent. Returns the
    group (or its absence) and the rest after the match. -/
def buttonTail (r : List Nat) : Option (Option (List Nat) × List Nat) :=
  match tryW r ((r.takeWhile isWsByte).length) with
  | some x => some x
  | none =>
      match r with
      | 93 :: 93 :: rest => some (none, rest)
      | _ => none
where
  tryW (r : List Nat) : Nat → Option (Option (List Nat) × List Nat)
    | 0 => none
    | w + 1 =>
        match lazyGroupToClose (r.drop (w + 1)) with
        | some (g, rest) => some (some g, rest)
        | none => tryW r w

/-- A Button match at the head of `src`: (the type group,
    the optional attribute group, the rest after the
    match). The leading `\s+` and the type group are both
    forced maximal: a shorter whitespace run leaves a
    whitespace byte the type group cannot start with, and a
    shorter type run leaves a class byte the tail cannot
    start with. -/
def buttonMatchAt (src : List Nat) :
    Option (List Nat × Option (List Nat) × List Nat) :=
  match matchLitCI (litBytes "[[button") src with
  | none => none
  | some r0 =>
      let wlen := (r0.takeWhile isWsByte).length
      if wlen == 0 then none
      else
        let r1 := r0.drop wlen
        let tlen := (r1.takeWhile isButtonTypeByte).length
        if tlen == 0 then none
        else
          match buttonTail (r1.drop tlen) with
          | none => none
          | some (g2, rest) => some (r1.take tlen, g2, rest)

/-- Button's `process()`: the attribute group goes through
    `getAttrs` (an absent group is the empty string); of its
    entries only `text`, `class`, and `style` are kept, in
    that order; the type (the first group, underscores
    replaced by hyphens, case preserved) is appended last. -/
def buttonProcess (ty : List Nat) (g2 : Option (List Nat))
    (toks : List TokenEntry) : List Nat × List TokenEntry :=
  let attrStr := match g2 with
    | some g => g
    | none => []
  let attrs := getAttrsBytes attrStr
  let keep : OptMap := ["text", "class", "style"].foldr
    (fun k acc => match lookupB attrs (litBytes k) with
      | some v => (k.toList, textVal v) :: acc
      | none => acc) []
  let ty' := ty.map (fun b => if b == 95 then 45 else b)
  claimTok "Button" (keep ++ [("type".toList, textVal ty')]) toks

/-- The Button matcher for the shared scan. -/
def buttonMatch (src : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match buttonMatchAt src with
  | none => none
  | some (ty, g2, rest) =>
      let (ph, toks') := buttonProcess ty g2 toks
      some (rest, ph, toks')

/-- Button: `[[button type attrs]]`. -/
def buttonRule (st : ParseState) : ParseState :=
  applyByteRule st (finalPregScan buttonMatch)

/-! ## Embed -/

/-- The suffix alternatives of an Embed opener or closer,
    `(?:audio|video)?` followed by `]]`, in the pattern's
    alternation order: audio, then video, then absent. The
    choice is deterministic (the alternatives start with
    different bytes, and the absent form needs `]]`
    immediately), and the suffix value never reaches
    `process()`. -/
def embedSuffix (r : List Nat) : Option (List Nat) :=
  match matchLitCI (litBytes "audio]]") r with
  | some r2 => some r2
  | none => match matchLitCI (litBytes "video]]") r with
    | some r2 => some r2
    | none => matchLitCI (litBytes "]]") r

/-- An Embed opener at the head of `src`: the rest after
    the opener. -/
def embedOpenerAt (src : List Nat) : Option (List Nat) :=
  match matchLitCI (litBytes "[[embed") src with
  | none => none
  | some r => embedSuffix r

/-- An Embed closer at the head of `src`: the rest after
    the closer. The closer's suffix is independent of the
    opener's (the pattern has no backreference). -/
def embedCloserAt (src : List Nat) : Option (List Nat) :=
  match matchLitCI (litBytes "[[/embed") src with
  | none => none
  | some r => embedSuffix r

/-- The first Embed closer in `bs`: the body before it and
    the rest after it. The body group is lazy, so the first
    position at which a closer matches ends the match. -/
def embedCloserSearch : List Nat → Option (List Nat × List Nat)
  | [] => none
  | bs@(b :: rest) =>
      match embedCloserAt bs with
      | some r => some ([], r)
      | none => match embedCloserSearch rest with
        | some (body, r) => some (b :: body, r)
        | none => none

/-- An Embed match at the head of `src`: (the body, the
    rest after the match). -/
def embedMatchAt (src : List Nat) : Option (List Nat × List Nat) :=
  match embedOpenerAt src with
  | none => none
  | some r => embedCloserSearch r

/-- The Embed matcher for the shared scan: `process()`
    claims the token with the PHP-trimmed body as its
    `content`. -/
def embedMatch (src : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match embedMatchAt src with
  | none => none
  | some (body, rest) =>
      let (ph, toks') := claimTok "Embed"
        [("content".toList, textVal (trimBytes body))] toks
      some (rest, ph, toks')

/-- Embed: `[[embed]]...[[/embed]]` and its audio/video
    suffixed forms. -/
def embedRule (st : ParseState) : ParseState :=
  applyByteRule st (finalPregScan embedMatch)

/-! ## Social -/

/-- The uppercase hex digit byte for a nibble. -/
def hexDigitB (n : Nat) : Nat :=
  if n < 10 then 48 + n else 55 + n

/-- One byte of PHP `urlencode`: alphanumerics and `-_.`
    stay, a space becomes `+`, anything else becomes `%XX`
    with uppercase hex (so `~` becomes `%7E`). -/
def urlencodeByte (b : Nat) : List Nat :=
  if (48 ≤ b && b ≤ 57) || (65 ≤ b && b ≤ 90) ||
      (97 ≤ b && b ≤ 122) || b == 45 || b == 95 || b == 46
    then [b]
  else if b == 32 then [43]
  else [37, hexDigitB (b / 16), hexDigitB (b % 16)]

/-- PHP `urlencode` on bytes. -/
def urlencodeBytes (bs : List Nat) : List Nat :=
  bs.flatMap urlencodeByte

/-- Social's replacement text for a match whose sites group
    trimmed to `sites` (empty for the bare form): the
    `\xC3\xBE`-delimited module string (the reference's
    `utf8_encode("\xFE")`), with the urlencoded
    `sites="..."` parameter spliced in, space-padded on
    both sides, when the sites are nonempty. The callback
    returns this string; no token is claimed. -/
def socialReplacement (sites : List Nat) : List Nat :=
  let d : List Nat := [0xC3, 0xBE]
  d ++ litBytes "module \"wiki/social/SocialBookmarksModule\"" ++
    (if sites.isEmpty then []
     else [32] ++ urlencodeBytes (litBytes "sites=\"" ++ sites ++ [34])
       ++ [32]) ++ d

/-- A Social match at the head of `src`: (the trimmed sites
    group, the rest after the match). The pattern is
    `/\[\[social(\s+[^\]]+?)?(?:\]\])/is`: the group content
    contains no `]`, so the match, if any, ends at the
    first `]` byte, which must start a `]]` pair; the group
    is present exactly when the content before that pair
    has at least two bytes and starts with whitespace (one
    whitespace byte for `\s+`, at least one more byte for
    the lazy group), and absent exactly when the content is
    empty. -/
def socialMatchAt (src : List Nat) : Option (List Nat × List Nat) :=
  match matchLitCI (litBytes "[[social") src with
  | none => none
  | some r =>
      let (content, r2) := r.span (fun b => b != 93)
      match r2 with
      | 93 :: 93 :: rest =>
          match content with
          | [] => some ([], rest)
          | c :: _ :: _ =>
              if isWsByte c then some (trimBytes content, rest)
              else none
          | _ => none
      | _ => none

/-- The Social matcher for the shared scan: the replacement
    is the module string; the token table is unchanged. -/
def socialMatch (src : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match socialMatchAt src with
  | none => none
  | some (sites, rest) => some (rest, socialReplacement sites, toks)

/-- Social: `[[social]]` and `[[social sites]]`, replaced
    in place by the SocialBookmarks module string. -/
def socialRule (st : ParseState) : ParseState :=
  applyByteRule st (finalPregScan socialMatch)

/-! ## File -/

/-- A File match attempt with the whitespace run fixed:
    enumerate the first group's lengths ascending over
    `seg` (the bytes up to the first newline, since neither
    group can cross one); at each length the pipe
    alternative is tried present (the second group grown
    lazily) before absent. `g1` accumulates the first
    group; `suffix` is the remainder of the source from the
    first newline on, reattached to the rest. -/
def fileTryL : List Nat → List Nat → List Nat →
    Option (List Nat × Option (List Nat) × List Nat)
  | _, [], _ => none
  | g1, b :: rest, suffix =>
      let g1' := g1 ++ [b]
      let present : Option (List Nat × Option (List Nat) × List Nat) :=
        match rest with
        | 124 :: r2 => match lazyGroupToClose r2 with
          | some (g2, r3) => some (g1', some g2, r3 ++ suffix)
          | none => none
        | _ => none
      match present with
      | some x => some x
      | none =>
          match rest with
          | 93 :: 93 :: r2 => some (g1', none, r2 ++ suffix)
          | _ => fileTryL g1' rest suffix

/-- A File match at the head of `src`: (the file group,
    the optional anchor group, the rest after the match).
    The pattern is `/\[\[file\s+(.+?)(?:\|(.+?))?\]\]/i`
    without the dotall flag. The enumeration is PCRE's:
    `\s+` lengths descending (outermost), then the first
    group's lengths ascending, the pipe alternative present
    before absent at each length. -/
def fileMatchAt (src : List Nat) :
    Option (List Nat × Option (List Nat) × List Nat) :=
  match matchLitCI (litBytes "[[file") src with
  | none => none
  | some r0 =>
      tryW r0 ((r0.takeWhile isWsByte).length)
where
  tryW (r0 : List Nat) : Nat →
      Option (List Nat × Option (List Nat) × List Nat)
    | 0 => none
    | w + 1 =>
        let after := r0.drop (w + 1)
        let (seg, suffix) := after.span (fun b => b != 10)
        match fileTryL [] seg suffix with
        | some x => some x
        | none => tryW r0 w

/-- File's `process()`: both groups are PHP-trimmed; an
    empty (or absent) anchor group defaults to the file. -/
def fileProcess (g1 : List Nat) (g2 : Option (List Nat))
    (toks : List TokenEntry) : List Nat × List TokenEntry :=
  let file := trimBytes g1
  let anchor0 := trimBytes (match g2 with
    | some g => g
    | none => [])
  let anchor := if anchor0.isEmpty then file else anchor0
  claimTok "File" [("file".toList, textVal file),
    ("anchor".toList, textVal anchor)] toks

/-- The File matcher for the shared scan. -/
def fileMatch (src : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match fileMatchAt src with
  | none => none
  | some (g1, g2, rest) =>
      let (ph, toks') := fileProcess g1 g2 toks
      some (rest, ph, toks')

/-- File: `[[file name]]` and `[[file name|anchor]]`. -/
def fileRule (st : ParseState) : ParseState :=
  applyByteRule st (finalPregScan fileMatch)

/-! ## Anchor: attribute normalization -/

/-- Whether a byte is an ASCII alphanumeric (the `ctype_alnum`
    of the slug scan, in the C locale). -/
def isAlnumByteB (b : Nat) : Bool :=
  (48 ≤ b && b ≤ 57) || (65 ≤ b && b ≤ 90) || (97 ≤ b && b ≤ 122)

/-- ASCII lowercase of one byte. -/
def lowerByteB (b : Nat) : Nat :=
  if 65 ≤ b && b ≤ 90 then b + 32 else b

/-- Percent-encode the non-ASCII bytes of a verbatim href,
    one `%XX` (uppercase hex) per byte. -/
def pctEncodeNonAscii (bs : List Nat) : List Nat :=
  bs.flatMap (fun b => if b ≥ 128 then
    [37, hexDigitB (b / 16), hexDigitB (b % 16)] else [b])

/-- `isVerbatimHref`: the empty string is not verbatim; a
    leading `#` or `/` is; otherwise one of the thirteen
    scheme prefixes, matched case-sensitively. -/
def isVerbatimHref (h : List Nat) : Bool :=
  match h with
  | [] => false
  | b :: _ =>
      b == 35 || b == 47 ||
      ["http://", "https://", "ftp://", "mailto:", "gopher://",
       "news://", "mms://", "git://", "sftp://", "ssh://",
       "svn://", "telnet://", "cvs://"].any
        (fun p => (litBytes p).isPrefixOf h)

/-- The slug scan of `normalizeUnsafeHref`: alphanumerics
    are lowercased and appended, flushing a pending
    separator first (`:` when the pending separator came
    from a colon, `-` otherwise); a colon sets a pending
    colon separator, any other byte a pending plain
    separator, each only once the output is nonempty; a
    trailing pending separator is dropped. -/
def slugScan : List Nat → List Nat → Bool → Bool → List Nat
  | [], out, _, _ => out
  | b :: rest, out, ps, pc =>
      if isAlnumByteB b then
        let out1 := if ps then out ++ [if pc then 58 else 45]
          else out
        slugScan rest (out1 ++ [lowerByteB b]) false false
      else if b == 58 then
        if out.isEmpty then slugScan rest out ps pc
        else slugScan rest out true true
      else
        if out.isEmpty then slugScan rest out ps pc
        else slugScan rest out true pc

/-- `normalizeUnsafeHref`: normalize the value, strip
    leading and trailing NBSP pairs, delete every backslash
    and NBSP pair, then run the slug scan. Note the
    delimiter byte is not special here (unlike the verbatim
    branch): a placeholder inside an unsafe href feeds the
    slug scan as separator bytes. -/
def normalizeUnsafeHref (h : List Nat) : List Nat :=
  let n1 := normalizeAttrValue h
  let n2 := stripNbspPairs n1
  let n3 := deleteNbspBackslash n2
  slugScan n3 [] false false
where
  stripLead : List Nat → List Nat
    | 194 :: 160 :: rest => stripLead rest
    | bs => bs
  stripLeadRev : List Nat → List Nat
    | 160 :: 194 :: rest => stripLeadRev rest
    | bs => bs
  stripNbspPairs (bs : List Nat) : List Nat :=
    (stripLeadRev (stripLead bs).reverse).reverse
  deleteNbspBackslash : List Nat → List Nat
    | [] => []
    | 92 :: rest => deleteNbspBackslash rest
    | 194 :: 160 :: rest => deleteNbspBackslash rest
    | b :: rest => b :: deleteNbspBackslash rest

/-- One step of `buildAnchorAttrs`' fold over the raw
    `getAttrs` pairs, threading (the fixed map, the data-*
    pairs, the raw href). The reference skips non-string
    keys: in PHP, `getAttrs` keys that are numeric strings
    become integers. The byte map keeps every key a string,
    a distinction the consumers cannot observe (the fixed
    lookups name only non-numeric keys, and a numeric key
    never starts with `data-`; probed at this stage:
    `[[a 123="x" href="/y"]]` claims an anchor whose only
    attribute is the href), so the fold treats every key as
    a string. Assignments go through `omSetB`, PHP's array
    semantics (a repeated key keeps its first position and
    takes the last value), which matters for data-* keys
    that differ only in case. -/
def anchorAttrStep
    (st : List (List Nat × List Nat) ×
      List (List Nat × List Nat) × Option (List Nat))
    (kv : List Nat × List Nat) :
    List (List Nat × List Nat) ×
      List (List Nat × List Nat) × Option (List Nat) :=
  let (fixed, data, href) := st
  let (k, v) := kv
  if k == litBytes "href" then (fixed, data, some v)
  else if k == litBytes "id" then
    if v.isEmpty || v.contains 0xFF then (fixed, data, href)
    else
      let norm := normalizeAttrValue v
      let idv : List Nat :=
        if norm.isEmpty then litBytes "u-"
        else if (litBytes "u-").isPrefixOf norm then norm
        else if (match v with
                 | c :: _ => c == 32 || c == 9 || c == 10 || c == 13
                 | [] => false)
          then litBytes "u- " ++ norm
        else litBytes "u-" ++ norm
      (omSetB fixed k idv, data, href)
  else if [litBytes "class", litBytes "style", litBytes "role",
      litBytes "type", litBytes "target"].contains k then
    if v.isEmpty then (fixed, data, href)
    else if v.contains 0xFF then (omSetB fixed k [], data, href)
    else (omSetB fixed k (normalizeAttrValue v), data, href)
  else if (litBytes "data-").isPrefixOf k then
    (fixed, omSetB data (asciiLower k)
      (if v.contains 0xFF then [] else normalizeAttrValue v), href)
  else (fixed, data, href)

/-- `buildAnchorAttrs`: the allowlist normalization of an
    anchor opener's attribute string. The raw pairs come
    from `getAttrs` (skipped entirely for a blank string);
    the fold classifies them (href held back, id given its
    `u-` isolation, the five fixed keys normalized or
    emptied when they span a placeholder, data-* keys
    lowercased); the href is then finalized (a leading `*`
    is the starred form: a verbatim href with no authored
    target earns `target="_blank"`; a verbatim href is
    normalized, its spaces percent-encoded, and its
    non-ASCII bytes percent-encoded, or emptied when it
    spans a placeholder; any other href goes through the
    slug normalization); and the result is assembled in the
    canonical emission order: id, class, style, role, type,
    the data-* pairs in authored order, href (always), and
    target. -/
def buildAnchorAttrs (attrStr : List Nat) : OptMap :=
  let raw : List (List Nat × List Nat) :=
    if (trimBytes attrStr).isEmpty then [] else getAttrsBytes attrStr
  let (fixed, data, rawHref) := raw.foldl anchorAttrStep ([], [], none)
  let fixedVal (k : String) : Option (List Nat) :=
    lookupB fixed (litBytes k)
  let (hrefFinal, targetFinal) : List Nat × Option (List Nat) :=
    match rawHref with
    | none => ([], fixedVal "target")
    | some hv =>
        if hv.isEmpty then ([], fixedVal "target")
        else
          let (starred, rest) : Bool × List Nat := match hv with
            | 42 :: r => (true, r)
            | _ => (false, hv)
          if isVerbatimHref rest then
            let tgt := match fixedVal "target" with
              | some t => some t
              | none => if starred then some (litBytes "_blank")
                else none
            let hf := if rest.contains 0xFF then []
              else pctEncodeNonAscii
                ((normalizeAttrValue rest).flatMap
                  (fun b => if b == 32 then [37, 50, 48] else [b]))
            (hf, tgt)
          else (normalizeUnsafeHref rest, fixedVal "target")
  let ordered : List (List Nat × List Nat) :=
    ["id", "class", "style", "role", "type"].filterMap
      (fun k => (fixedVal k).map (fun v => (litBytes k, v)))
    ++ data
    ++ [(litBytes "href", hrefFinal)]
    ++ (match targetFinal with
        | some t => [(litBytes "target", t)]
        | none => [])
  ordered.map (fun (k, v) => (utf8Decode k, textVal v))

/-- The options of an Anchor start token. -/
def anchorStartOpts (attrs : OptMap) : OptMap :=
  [("type".toList, OptVal.str "start".toList),
   ("attrs".toList, OptVal.map attrs)]

/-- The options of an Anchor end token. -/
def anchorEndOpts : OptMap :=
  [("type".toList, OptVal.str "end".toList)]

/-! ## Anchor: the named-anchor pass -/

/-- The valid named-anchor byte class, `[-_A-Za-z0-9.%]`. -/
def isAnchorNameByte (b : Nat) : Bool :=
  (48 ≤ b && b ≤ 57) || (65 ≤ b && b ≤ 90) ||
  (97 ≤ b && b ≤ 122) || b == 45 || b == 95 || b == 46 || b == 37

/-- A named-anchor match at the head of `src`: (the name
    group, whether the residual `]` group participated, the
    full match bytes, the rest after the match). The
    pattern is `/\[\[#[ \t]([^\n\]]*)\]\](\])?/`: exactly
    one space or tab after `[[#`, the name group forced
    maximal (it excludes newline and `]`), then `]]` and
    one optional residual `]`. -/
def namedAnchorMatchAt (src : List Nat) :
    Option (List Nat × Bool × List Nat × List Nat) :=
  match matchLitBytes (litBytes "[[#") src with
  | none => none
  | some r0 =>
      match r0 with
      | c :: r1 =>
          if c != 32 && c != 9 then none
          else
            let (name, r2) := r1.span (fun b => b != 10 && b != 93)
            match r2 with
            | 93 :: 93 :: r3 =>
                let (resid, rest) : Bool × List Nat := match r3 with
                  | 93 :: r4 => (true, r4)
                  | _ => (false, r3)
                some (name, resid,
                  src.take (src.length - rest.length), rest)
            | _ => none
      | [] => none

/-- `process()` and the invalid-name fallback for one
    named-anchor match. A name that trims to empty leaves
    the whole match literal (no token). A valid name claims
    the name token, and the residual `]` is re-emitted after
    the placeholder. An invalid name closed by the residual
    `]` and not preceded by a `[` claims the literal token
    whose text is the whole match (residual included, and
    no re-emission); any other invalid name claims the
    invalid-named token with its leading and trailing
    space/tab runs split off, and the residual `]` is
    re-emitted. -/
def namedAnchorProcess (name : List Nat) (resid : Bool)
    (full : List Nat) (precededByBracket : Bool)
    (toks : List TokenEntry) : List Nat × List TokenEntry :=
  -- C-SUSPECT-XRULE-6: a name carrying an earlier rule's placeholder is
  -- left whole on live, so the inner token renders inside the brackets.
  if name.any (fun b => b == 0xFF) then (full, toks)
  else if (trimBytes name).isEmpty then (full, toks)
  else if name.all isAnchorNameByte then
    let (ph, toks') := claimTok "Anchor"
      [("name".toList, textVal name)] toks
    (ph ++ (if resid then [93] else []), toks')
  else if resid && !precededByBracket then
    let (ph, toks') := claimTok "Anchor"
      [("type".toList, OptVal.str "literal".toList),
       ("text".toList, textVal full)] toks
    (ph, toks')
  else
    let lead := name.takeWhile (fun b => b == 32 || b == 9)
    let afterLead := name.drop lead.length
    let trail := (afterLead.reverse.takeWhile
      (fun b => b == 32 || b == 9)).reverse
    let text := afterLead.take (afterLead.length - trail.length)
    let (ph, toks') := claimTok "Anchor"
      [("type".toList, OptVal.str "invalid_named".toList),
       ("lead".toList, textVal lead),
       ("text".toList, textVal text),
       ("trail".toList, textVal trail)] toks
    (ph ++ (if resid then [93] else []), toks')

/-- The named-anchor pass: a `preg_match_all` fold, which
    is the shared scan plus the byte before each match (the
    invalid-name fallback tests whether the match is
    preceded by a `[` in the pass input). Matches are
    processed in order; the scan threads the last consumed
    input byte for that test. -/
def namedAnchorScan (src : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  go src toks none (src.length + 1)
where
  go : List Nat → List TokenEntry → Option Nat → Nat →
      List Nat × List TokenEntry
    | [], toks, _, _ => ([], toks)
    | _, toks, _, 0 => ([], toks)
    | src@(b :: rest), toks, prev, fuel + 1 =>
        match namedAnchorMatchAt src with
        | some (name, resid, full, rest') =>
            let (repl, toks') := namedAnchorProcess name resid
              full (prev == some 91) toks
            let (o, t2) := go rest' toks' full.getLast? fuel
            (repl ++ o, t2)
        | none =>
            let (o, t2) := go rest toks (some b) fuel
            (b :: o, t2)

/-! ## Anchor: the element pass -/

/-- An Anchor element opener at the head of `src`: (the
    scored flag, the attribute group, the rest after the
    opener). The opener is `[[a`, an optional `_`, an
    optional attribute group, and `]]`; the group ends at
    the first `]`, which must be followed by a second `]`,
    and it decomposes uniquely: a whitespace run (the
    pattern's `\s+`) plus a remainder starting with a
    non-whitespace byte. An empty segment is the absent
    group; an all-whitespace or non-whitespace-led segment
    cannot match. -/
def anchorOpenerAt (src : List Nat) :
    Option (Bool × List Nat × List Nat) :=
  match matchLitCI (litBytes "[[a") src with
  | none => none
  | some r0 =>
      let (scored, r1) : Bool × List Nat := match r0 with
        | 95 :: rest => (true, rest)
        | _ => (false, r0)
      let (seg, r2) := r1.span (fun b => b != 93)
      match r2 with
      | 93 :: 93 :: rest =>
          if seg.isEmpty then some (scored, [], rest)
          else
            let wlen := (seg.takeWhile isWsByte).length
            if wlen == 0 || wlen == seg.length then none
            else some (scored, seg.drop wlen, rest)
      | _ => none

/-- The first Anchor opener match in `bs`: (its offset,
    its attribute group, its length). Used for the nested
    element test and for the trailing-closer prefix test,
    both of which are `preg_match` searches. -/
def anchorOpenerSearch : List Nat → Option (Nat × List Nat × Nat)
  | [] => none
  | bs@(_ :: rest) =>
      match anchorOpenerAt bs with
      | some (_, g2, r) => some (0, g2, bs.length - r.length)
      | none => match anchorOpenerSearch rest with
        | some (off, g2, len) => some (off + 1, g2, len)
        | none => none

/-- All Anchor element matches in the pass input, in
    `preg_match_all` order (non-overlapping, each search
    resuming after the previous match): (start offset, end
    offset, scored flag, attribute group, body). The body
    is lazy: it ends at the first `[[/a]]`. A position
    whose opener matches but which has no closer is not a
    match; the search advances one byte. -/
def anchorElemMatches (src : List Nat) :
    List (Nat × Nat × Bool × List Nat × List Nat) :=
  go src 0 (src.length + 1)
where
  go : List Nat → Nat → Nat →
      List (Nat × Nat × Bool × List Nat × List Nat)
    | [], _, _ => []
    | _, _, 0 => []
    | src@(_ :: rest), off, fuel + 1 =>
        match anchorOpenerAt src with
        | some (scored, g2, r1) =>
            match splitAtFirstCI (litBytes "[[/a]]") r1 with
            | some (body, r2) =>
                (off, off + (src.length - r2.length), scored, g2,
                  body) :: go r2 (off + (src.length - r2.length)) fuel
            | none => go rest (off + 1) fuel
        | none => go rest (off + 1) fuel

/-- The scored join on the output so far: when it ends with
    a non-newline byte followed by one or two newlines,
    those newlines are stripped (`/([^\n])(\n{1,2})$/`); a
    run of three or more trailing newlines, or an output
    that is only newlines, is left alone. -/
def scoredJoinStrip (out : List Nat) : List Nat :=
  let t := (out.reverse.takeWhile (fun b => b == 10)).length
  if (t == 1 || t == 2) && out.length > t
    then out.take (out.length - t) else out

/-- The scored forward join: how many newlines after a
    match are consumed, `\n{1,2}` when a non-newline byte
    follows them, else none. -/
def scoredNlAdvance : List Nat → Nat
  | 10 :: 10 :: c :: _ => if c != 10 then 2 else 0
  | 10 :: c :: _ => if c != 10 then 1 else 0
  | _ => 0

/-- The nested path's trailing-closer consumption: a lazy
    run of non-newline bytes from the head of `restAfter`
    up to the first `[[/a]]` on the same line; returns the
    run and the total bytes consumed (run plus closer). -/
def anchorTrailingClose (restAfter : List Nat) :
    Option (List Nat × Nat) :=
  let (line, _) := restAfter.span (fun b => b != 10)
  match splitAtFirstCI (litBytes "[[/a]]") line with
  | some (pre, _) => some (pre, pre.length + 6)
  | none => none

/-- The first maximal newline run of length at least two
    in `bs`: (the text before it, the run, the text after
    it). -/
def firstNlRun : List Nat → Option (List Nat × List Nat × List Nat)
  | [] => none
  | bs@(b :: rest) =>
      if b == 10 then
        let (run, r2) := bs.span (fun x => x == 10)
        if run.length ≥ 2 then some ([], run, r2)
        else match firstNlRun rest with
          | some (t, run, r2) => some (b :: t, run, r2)
          | none => none
      else match firstNlRun rest with
        | some (t, run, r2) => some (b :: t, run, r2)
        | none => none

/-- Split a byte string on maximal runs of two or more
    newlines, keeping the runs as their own parts
    (`preg_split('/(\n{2,})/', ..., PREG_SPLIT_DELIM_CAPTURE)`):
    the parts alternate text, run, text, run, text. -/
def splitNlRuns (bs : List Nat) : List (List Nat) :=
  go bs (bs.length + 1)
where
  go : List Nat → Nat → List (List Nat)
    | _, 0 => []
    | bs, fuel + 1 =>
        match firstNlRun bs with
        | none => [bs]
        | some (t, run, r2) => t :: run :: go r2 fuel

/-- Process one Anchor element match whose preceding text
    has already been appended to `out`: returns (the
    extended output, the extended table, the extended
    scored registrations, the new cursor). `src` is the
    whole pass input and `fullEnd` the offset just after
    the match.

    The nested path (a non-scored body containing an
    opener) claims start, end, start, end and splices
    outer body and inner body between them, then consumes
    a trailing same-line `[[/a]]` when the text before it
    holds no opener. Otherwise the scored adjustments run
    first (the join strip on the output, one leading and
    one trailing newline off the body), then the boundary
    space movement shared by both forms (leading and
    trailing space/tab runs leave the body; a single space
    is emitted outside the pair when the neighbor on that
    side exists and is not a newline, space, or tab), then
    either the paragraph split (non-scored, a body with a
    blank line and no `[[`: every text part gets its own
    token pair with the same attributes) or the simple
    pair, which for a scored anchor also registers the
    (end, start) placeholder pair. -/
def anchorElemProcess (src : List Nat) (fullEnd : Nat)
    (scored : Bool) (g2 body : List Nat) (out : List Nat)
    (toks : List TokenEntry)
    (anchors : List (List Nat × List Nat)) :
    List Nat × List TokenEntry ×
      List (List Nat × List Nat) × Nat :=
  let attrs := buildAnchorAttrs g2
  match (if scored then none else anchorOpenerSearch body) with
  | some (innerOff, innerG2, innerLen) =>
      let innerAttrs := buildAnchorAttrs innerG2
      let outerBody := body.take innerOff
      let innerBody := body.drop (innerOff + innerLen)
      let (s1, t1) := claimTok "Anchor" (anchorStartOpts attrs) toks
      let (e1, t2) := claimTok "Anchor" anchorEndOpts t1
      let (s2, t3) := claimTok "Anchor"
        (anchorStartOpts innerAttrs) t2
      let (e2, t4) := claimTok "Anchor" anchorEndOpts t3
      let out2 := out ++ s1 ++ outerBody ++ e1 ++ s2 ++
        innerBody ++ e2
      match anchorTrailingClose (src.drop fullEnd) with
      | some (pre, consumed) =>
          if (anchorOpenerSearch pre).isNone then
            (out2 ++ pre, t4, anchors, fullEnd + consumed)
          else (out2, t4, anchors, fullEnd)
      | none => (out2, t4, anchors, fullEnd)
  | none =>
      let outA := if scored then scoredJoinStrip out else out
      let bodyA := if scored then
          let b1 := match body with
            | 10 :: r => r
            | _ => body
          match b1.reverse with
          | 10 :: r => r.reverse
          | _ => b1
        else body
      let leadRun := bodyA.takeWhile (fun b => b == 32 || b == 9)
      let leadSpace := !leadRun.isEmpty
      let bodyB := bodyA.drop leadRun.length
      let trailRun := (bodyB.reverse.takeWhile
        (fun b => b == 32 || b == 9)).reverse
      let trailSpace := !bodyB.isEmpty && !trailRun.isEmpty
      let bodyC := bodyB.take (bodyB.length - trailRun.length)
      let nextPos := fullEnd +
        (if scored then scoredNlAdvance (src.drop fullEnd) else 0)
      let pre : List Nat :=
        if leadSpace && !outA.isEmpty &&
            (match outA.getLast? with
             | some c => c != 10 && c != 32 && c != 9
             | none => false)
          then [32] else []
      let suf : List Nat :=
        if trailSpace &&
            (match src[nextPos]? with
             | some c => c != 10 && c != 32 && c != 9
             | none => false)
          then [32] else []
      if !scored && bytesContains bodyC [10, 10] &&
          !(bytesContains bodyC (litBytes "[[")) then
        let (rebuilt, tEnd, _) := (splitNlRuns bodyC).foldl
          (fun (st : List Nat × List TokenEntry × Nat) part =>
            let (acc, tk, i) := st
            if i % 2 == 1 then (acc ++ part, tk, i + 1)
            else
              let (s, tk1) := claimTok "Anchor"
                (anchorStartOpts attrs) tk
              let (e, tk2) := claimTok "Anchor" anchorEndOpts tk1
              (acc ++ s ++ part ++ e, tk2, i + 1))
          ([], toks, 0)
        (outA ++ pre ++ rebuilt ++ suf, tEnd, anchors,
          nextPos)
      else
        let (s, t1) := claimTok "Anchor" (anchorStartOpts attrs)
          toks
        let (e, t2) := claimTok "Anchor" anchorEndOpts t1
        let anchors' := if scored then anchors ++ [(e, s)]
          else anchors
        (outA ++ pre ++ s ++ bodyC ++ e ++ suf, t2,
          anchors', nextPos)

/-- The element pass fold over the `preg_match_all`
    matches: a match whose start lies before the cursor is
    skipped (the nested path's trailing consumption can
    move the cursor past a later match's start); any other
    match first appends the input text between the cursor
    and its start. The tail of the input after the last
    match is appended at the end. -/
def anchorElemFold (src : List Nat)
    (ms : List (Nat × Nat × Bool × List Nat × List Nat))
    (toks : List TokenEntry)
    (anchors : List (List Nat × List Nat)) :
    List Nat × List TokenEntry × List (List Nat × List Nat) :=
  go ms [] toks anchors 0
where
  go : List (Nat × Nat × Bool × List Nat × List Nat) →
      List Nat → List TokenEntry →
      List (List Nat × List Nat) → Nat →
      List Nat × List TokenEntry × List (List Nat × List Nat)
    | [], out, toks, anchors, cursor =>
        (out ++ src.drop cursor, toks, anchors)
    | (start, fullEnd, scored, g2, body) :: rest, out, toks,
        anchors, cursor =>
        if start < cursor then go rest out toks anchors cursor
        else
          let out1 := out ++ (src.drop cursor).take (start - cursor)
          let (out2, toks2, anchors2, cursor2) :=
            anchorElemProcess src fullEnd scored g2 body out1
              toks anchors
          go rest out2 toks2 anchors2 cursor2

/-- Anchor: the named-anchor pass over the byte form, then
    the element pass over its output; the element pass's
    scored registrations are written back into the document
    state (the pass input's own registrations, in practice
    always the empty list, are threaded through). -/
def anchorRule (st : ParseState) : ParseState :=
  let input := byteForm st.work
  let (s1, t1) := namedAnchorScan input st.tokens
  let ms := anchorElemMatches s1
  let (out, t2, anchors) :=
    anchorElemFold s1 ms t1 st.doc.scoredAnchors
  { st with work := parseBytes out, tokens := t2, doc :=
    { st.doc with scoredAnchors := anchors } }

/-! ## Theorems -/

theorem userMatchAt_example :
    userMatchAt (litBytes "[[user john]]") =
      some (false, litBytes "john", []) := rfl

theorem userMatchAt_starred_example :
    userMatchAt (litBytes "[[*user john]]") =
      some (true, litBytes "john", []) := rfl

theorem buttonMatchAt_example :
    buttonMatchAt (litBytes "[[button edit]]") =
      some (litBytes "edit", none, []) := rfl

/-- The one-trailing-space Button tail does not match: the
    group present would need the space and a group byte,
    and the group absent needs the brackets immediately. -/
theorem buttonTail_space_example :
    buttonTail (litBytes " ]]") = none := rfl

/-- The two-trailing-space tail matches with the group a
    single space (the getAttrs of which is empty). -/
theorem buttonTail_twoSpace_example :
    buttonTail (litBytes "  ]]") =
      some (some (litBytes " "), []) := rfl

theorem embedMatchAt_example :
    embedMatchAt (litBytes "[[embed]]body[[/embed]]") =
      some (litBytes "body", []) := rfl

/-- The closer's suffix is independent of the opener's. -/
theorem embedMatchAt_suffix_example :
    embedMatchAt (litBytes "[[embedvideo]]body[[/embed]]") =
      some (litBytes "body", []) := rfl

theorem socialMatchAt_example :
    socialMatchAt (litBytes "[[social digg]]") =
      some (litBytes "digg", []) := rfl

/-- The bare Social form matches with empty sites; the
    one-space form does not match at all. -/
theorem socialMatchAt_bare_example :
    socialMatchAt (litBytes "[[social]]") = some ([], []) := rfl

theorem socialMatchAt_oneSpace_example :
    socialMatchAt (litBytes "[[social ]]") = none := rfl

theorem socialReplacement_bare_example :
    socialReplacement [] =
      [0xC3, 0xBE] ++
        litBytes "module \"wiki/social/SocialBookmarksModule\"" ++
        [0xC3, 0xBE] := rfl

theorem fileMatchAt_pipe_example :
    fileMatchAt (litBytes "[[file a.txt|]]") =
      some (litBytes "a.txt|", none, []) := rfl

theorem fileMatchAt_anchor_example :
    fileMatchAt (litBytes "[[file a|b|c]]") =
      some (litBytes "a", some (litBytes "b|c"), []) := rfl

theorem isVerbatimHref_case_example :
    isVerbatimHref (litBytes "HTTP://example.com") = false := rfl

theorem isVerbatimHref_slash_example :
    isVerbatimHref (litBytes "/x") = true := rfl

theorem normalizeUnsafeHref_example :
    normalizeUnsafeHref (litBytes "a:b_c") =
      litBytes "a:b-c" := rfl

theorem namedAnchorMatchAt_example :
    namedAnchorMatchAt (litBytes "[[# strawberry]]") =
      some (litBytes "strawberry", false,
        litBytes "[[# strawberry]]", []) := rfl

theorem anchorOpenerAt_example :
    anchorOpenerAt (litBytes "[[a href=\"/x\"]]rest") =
      some (false, litBytes "href=\"/x\"", litBytes "rest") := rfl

/-- The scored join strips a two-newline ending after
    content, and leaves a three-newline ending alone. -/
theorem scoredJoinStrip_example :
    scoredJoinStrip (litBytes "x\n\n") = litBytes "x" := rfl

theorem scoredJoinStrip_three_example :
    scoredJoinStrip (litBytes "x\n\n\n") =
      litBytes "x\n\n\n" := rfl
