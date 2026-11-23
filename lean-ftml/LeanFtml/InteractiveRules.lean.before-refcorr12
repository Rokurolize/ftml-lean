/-
  LeanFtml.InteractiveRules — the R4.6 interactive and link-pure
  Xhtml render mirrors, plus Size, Span, and Div.

  Each function mirrors one `Text_Wiki_Render_Xhtml_<Rule>::token()`
  in the validated PHP reference (`ref-php/text-wiki/Text/Wiki/Render/
  Xhtml/<Rule>.php`), under the harness configuration of
  `ref-php/harness/wiki-config.php` (`ref_configure_wiki`):

  * `Equationreference`: reads only the render-time equations
    registry (`Text_Wiki_Parse_Math::$equationsArray`, carried in
    `DocState.equations`; the lookup is render-side, REPORT-R35.md)
    and the `math` `id_prefix` render conf, which the harness does
    not set, so `RenderConf.mathIdPrefix` is empty. An undefined
    label resolves to the empty id (PHP reads the missing array
    entry as `null` and interpolates it as nothing).
  * `Anchor`: the `start` branch renders the token's `attrs` map
    (defaulting to a lone empty `href` when absent) with values
    under `htmlspecialchars(..., ENT_COMPAT)`; `invalid_named` and
    `literal` escape their `text` the same way; every other shape
    (including a `type` outside the four handled values) falls
    through to the named-anchor branch, whose name goes through
    PHP 8.5's default `htmlentities` (mirrored by `htmlEntities`
    below, named-entity table included).
  * `Collapsible`: reads only the token's `args` map. Both labels
    are computed for every token type (the end token needs the hide
    label), through the reference's `wikidotLabel` (default labels
    for unset/empty/`"0"` texts, `ENT_QUOTES` escaping without
    `ENT_SUBSTITUTE`, the space/tab/newline/CR replacements in
    order, then control-byte stripping).
  * `Tabview`: reads only the token's options; the `start` token
    carries the `tabs` list (each entry a map with `title` and
    `tabId`), whose labels are escaped `ENT_COMPAT`, an empty label
    emitting a bare anchor and a missing label defaulting to
    `untitled`. The YUI script fragments are byte-exact heredocs.
  * `Button`: the REFVAL2-corrected renderer. The type is
    ASCII-lowercased before the allowlist test; the harness's
    gettext stub `_()` is the identity, so the default texts are
    the literal English strings; the `$hrefs` table is empty, so
    every button links to `javascript:;`; class and style go
    through bare `htmlspecialchars` (PHP 8.5 default flags), the
    text through `ENT_COMPAT`.
  * `Iframe`: iterates the token's whole option map in stored
    order; only the `src` value is percent-encoded for non-ASCII
    bytes first; every value is escaped `ENT_COMPAT` (the
    `ENT_HTML401` flag the body ORs in does not change the escape
    table).
  * `Date`: the REFVAL-era corrected renderer. The timestamp is
    canonicalized as a decimal string clamped to the signed
    64-bit range; the format contributes only a class suffix
    (with `%g` first replaced by `ago`, then percent-encoded with
    the `@@digits@@` raw-escape placeholders rendered as
    `%FF<digits>%FF`); the visible text is the default
    `%d %b %Y %H:%M` format in UTC over a proleptic Gregorian
    calendar, computed with floor division so the 64-bit extremes
    stay exact.
  * `File`: the REFVAL2-corrected renderer. The `no_local` conf is
    unset (falsy) and the `base` conf is the class default `/`, so
    a slash-free file renders as `/` plus the encoded name and any
    file containing a slash as `/local--files/` plus the encoded
    path with one leading slash stripped. The path encoding
    percent-encodes only spaces and non-ASCII bytes; href and
    anchor are escaped `ENT_COMPAT`.
  * `Size`, `Span`, `Div`: the small stateless emitters folded
    into this stage by the recorded staging correction. `Span`
    escapes its attribute values `ENT_COMPAT`; `Div` interpolates
    its values raw (its stray-space fossil shape was corrected at
    R4-C3: `"<div" . $argstr . ">"`); `Size` interpolates its
    `size` raw.

  Where a PHP `token()` falls through without a return (a `type`
  other than the handled branches), PHP concatenates the resulting
  `null` as the empty string; the mirrors return `[]`.

  The dispatcher that consumes these functions is
  `LeanFtml.dispatchRenderR41` in `LeanFtml/NotesRender.lean`,
  extended in R4.6 to all fifty-two mirrored rules; the stage's
  entry points and theorems live in
  `LeanFtml/InteractiveRender.lean`.
-/

import LeanFtml.RenderCore
import LeanFtml.InlineSimpleRules
import LeanFtml.ListTableRules

namespace LeanFtml

/-- Test whether the token's `"type"` option equals the given ASCII
    byte string. Identical in definition to `optTypeIs` in
    `LeanFtml/NotesRender.lean` and its per-stage restatements;
    restated here so this module depends only on the render core
    and the helper modules. -/
def intTypeIs (opts : OptMap) (expected : List Nat) : Bool :=
  optStrBytes opts "type".toList == expected

/-- PHP `isset($options[$key])`: the key is present and its value
    is not `null`. Identical in definition to `ltIsset` in
    `LeanFtml/ListTableRules.lean`. -/
def intIsset (opts : OptMap) (key : List Char) : Bool :=
  match omGet opts key with
  | some .null => false
  | some _ => true
  | none => false

/-- The bytes of an option value under PHP `isset` semantics: an
    absent key or a `null` value yields `none` (the PHP body's
    `isset(...) ? ... : null` shape), any other value its
    `(string)` bytes. -/
def optBytesOpt (opts : OptMap) (key : List Char) : Option (List Nat) :=
  match omGet opts key with
  | some .null => none
  | some v => some (renderOptValBytes v)
  | none => none

/-- Matches PHP 8.5 `htmlspecialchars($s, ENT_QUOTES)` (UTF-8,
    without `ENT_SUBSTITUTE`): returns `[]` on any invalid UTF-8
    input, and otherwise escapes `&`, `"`, `'`, `<`, `>` (the
    apostrophe as `&#039;`). No longer used by Collapsible's
    `wikidotLabel`, whose flags argument is now `ENT_COMPAT`;
    retained here for any remaining `ENT_QUOTES`-based path. -/
def htmlSpecialCharsQuotes (bs : List Nat) : List Nat :=
  if utf8Valid bs then bs.flatMap escHtmlQuotesByte else []

/-- Replace every occurrence of a single byte by a fixed byte
    string (the per-byte case of PHP's `str_replace`, whose
    single-byte search strings make it a plain map). -/
def replaceByteAll (b : Nat) (repl : List Nat) : List Nat → List Nat
  | [] => []
  | x :: rest => (if x == b then repl else [x]) ++ replaceByteAll b repl rest

/-! ## `htmlentities` (PHP 8.5 default flags) for Anchor names -/

/-- The HTML 4.01 named-entity table PHP's `htmlentities` uses
    (the `HTML_ENTITIES` translation table): codepoint to entity
    name, for every codepoint the table covers. The five markup
    characters are handled separately by `escEntByte` and the
    caller, so they do not appear here. -/
def entityName : Nat → Option (List Nat)
  | 160 => some (litBytes "nbsp")
  | 161 => some (litBytes "iexcl")
  | 162 => some (litBytes "cent")
  | 163 => some (litBytes "pound")
  | 164 => some (litBytes "curren")
  | 165 => some (litBytes "yen")
  | 166 => some (litBytes "brvbar")
  | 167 => some (litBytes "sect")
  | 168 => some (litBytes "uml")
  | 169 => some (litBytes "copy")
  | 170 => some (litBytes "ordf")
  | 171 => some (litBytes "laquo")
  | 172 => some (litBytes "not")
  | 173 => some (litBytes "shy")
  | 174 => some (litBytes "reg")
  | 175 => some (litBytes "macr")
  | 176 => some (litBytes "deg")
  | 177 => some (litBytes "plusmn")
  | 178 => some (litBytes "sup2")
  | 179 => some (litBytes "sup3")
  | 180 => some (litBytes "acute")
  | 181 => some (litBytes "micro")
  | 182 => some (litBytes "para")
  | 183 => some (litBytes "middot")
  | 184 => some (litBytes "cedil")
  | 185 => some (litBytes "sup1")
  | 186 => some (litBytes "ordm")
  | 187 => some (litBytes "raquo")
  | 188 => some (litBytes "frac14")
  | 189 => some (litBytes "frac12")
  | 190 => some (litBytes "frac34")
  | 191 => some (litBytes "iquest")
  | 192 => some (litBytes "Agrave")
  | 193 => some (litBytes "Aacute")
  | 194 => some (litBytes "Acirc")
  | 195 => some (litBytes "Atilde")
  | 196 => some (litBytes "Auml")
  | 197 => some (litBytes "Aring")
  | 198 => some (litBytes "AElig")
  | 199 => some (litBytes "Ccedil")
  | 200 => some (litBytes "Egrave")
  | 201 => some (litBytes "Eacute")
  | 202 => some (litBytes "Ecirc")
  | 203 => some (litBytes "Euml")
  | 204 => some (litBytes "Igrave")
  | 205 => some (litBytes "Iacute")
  | 206 => some (litBytes "Icirc")
  | 207 => some (litBytes "Iuml")
  | 208 => some (litBytes "ETH")
  | 209 => some (litBytes "Ntilde")
  | 210 => some (litBytes "Ograve")
  | 211 => some (litBytes "Oacute")
  | 212 => some (litBytes "Ocirc")
  | 213 => some (litBytes "Otilde")
  | 214 => some (litBytes "Ouml")
  | 215 => some (litBytes "times")
  | 216 => some (litBytes "Oslash")
  | 217 => some (litBytes "Ugrave")
  | 218 => some (litBytes "Uacute")
  | 219 => some (litBytes "Ucirc")
  | 220 => some (litBytes "Uuml")
  | 221 => some (litBytes "Yacute")
  | 222 => some (litBytes "THORN")
  | 223 => some (litBytes "szlig")
  | 224 => some (litBytes "agrave")
  | 225 => some (litBytes "aacute")
  | 226 => some (litBytes "acirc")
  | 227 => some (litBytes "atilde")
  | 228 => some (litBytes "auml")
  | 229 => some (litBytes "aring")
  | 230 => some (litBytes "aelig")
  | 231 => some (litBytes "ccedil")
  | 232 => some (litBytes "egrave")
  | 233 => some (litBytes "eacute")
  | 234 => some (litBytes "ecirc")
  | 235 => some (litBytes "euml")
  | 236 => some (litBytes "igrave")
  | 237 => some (litBytes "iacute")
  | 238 => some (litBytes "icirc")
  | 239 => some (litBytes "iuml")
  | 240 => some (litBytes "eth")
  | 241 => some (litBytes "ntilde")
  | 242 => some (litBytes "ograve")
  | 243 => some (litBytes "oacute")
  | 244 => some (litBytes "ocirc")
  | 245 => some (litBytes "otilde")
  | 246 => some (litBytes "ouml")
  | 247 => some (litBytes "divide")
  | 248 => some (litBytes "oslash")
  | 249 => some (litBytes "ugrave")
  | 250 => some (litBytes "uacute")
  | 251 => some (litBytes "ucirc")
  | 252 => some (litBytes "uuml")
  | 253 => some (litBytes "yacute")
  | 254 => some (litBytes "thorn")
  | 255 => some (litBytes "yuml")
  | 338 => some (litBytes "OElig")
  | 339 => some (litBytes "oelig")
  | 352 => some (litBytes "Scaron")
  | 353 => some (litBytes "scaron")
  | 376 => some (litBytes "Yuml")
  | 402 => some (litBytes "fnof")
  | 913 => some (litBytes "Alpha")
  | 914 => some (litBytes "Beta")
  | 915 => some (litBytes "Gamma")
  | 916 => some (litBytes "Delta")
  | 917 => some (litBytes "Epsilon")
  | 918 => some (litBytes "Zeta")
  | 919 => some (litBytes "Eta")
  | 920 => some (litBytes "Theta")
  | 921 => some (litBytes "Iota")
  | 922 => some (litBytes "Kappa")
  | 923 => some (litBytes "Lambda")
  | 924 => some (litBytes "Mu")
  | 925 => some (litBytes "Nu")
  | 926 => some (litBytes "Xi")
  | 927 => some (litBytes "Omicron")
  | 928 => some (litBytes "Pi")
  | 929 => some (litBytes "Rho")
  | 931 => some (litBytes "Sigma")
  | 932 => some (litBytes "Tau")
  | 933 => some (litBytes "Upsilon")
  | 934 => some (litBytes "Phi")
  | 935 => some (litBytes "Chi")
  | 936 => some (litBytes "Psi")
  | 937 => some (litBytes "Omega")
  | 945 => some (litBytes "alpha")
  | 946 => some (litBytes "beta")
  | 947 => some (litBytes "gamma")
  | 948 => some (litBytes "delta")
  | 949 => some (litBytes "epsilon")
  | 950 => some (litBytes "zeta")
  | 951 => some (litBytes "eta")
  | 952 => some (litBytes "theta")
  | 953 => some (litBytes "iota")
  | 954 => some (litBytes "kappa")
  | 955 => some (litBytes "lambda")
  | 956 => some (litBytes "mu")
  | 957 => some (litBytes "nu")
  | 958 => some (litBytes "xi")
  | 959 => some (litBytes "omicron")
  | 960 => some (litBytes "pi")
  | 961 => some (litBytes "rho")
  | 962 => some (litBytes "sigmaf")
  | 963 => some (litBytes "sigma")
  | 964 => some (litBytes "tau")
  | 965 => some (litBytes "upsilon")
  | 966 => some (litBytes "phi")
  | 967 => some (litBytes "chi")
  | 968 => some (litBytes "psi")
  | 969 => some (litBytes "omega")
  | 977 => some (litBytes "thetasym")
  | 978 => some (litBytes "upsih")
  | 982 => some (litBytes "piv")
  | 8194 => some (litBytes "ensp")
  | 8195 => some (litBytes "emsp")
  | 8201 => some (litBytes "thinsp")
  | 8204 => some (litBytes "zwnj")
  | 8205 => some (litBytes "zwj")
  | 8206 => some (litBytes "lrm")
  | 8207 => some (litBytes "rlm")
  | 8211 => some (litBytes "ndash")
  | 8212 => some (litBytes "mdash")
  | 8216 => some (litBytes "lsquo")
  | 8217 => some (litBytes "rsquo")
  | 8218 => some (litBytes "sbquo")
  | 8220 => some (litBytes "ldquo")
  | 8221 => some (litBytes "rdquo")
  | 8222 => some (litBytes "bdquo")
  | 8224 => some (litBytes "dagger")
  | 8225 => some (litBytes "Dagger")
  | 8226 => some (litBytes "bull")
  | 8230 => some (litBytes "hellip")
  | 8240 => some (litBytes "permil")
  | 8242 => some (litBytes "prime")
  | 8243 => some (litBytes "Prime")
  | 8249 => some (litBytes "lsaquo")
  | 8250 => some (litBytes "rsaquo")
  | 8254 => some (litBytes "oline")
  | 8260 => some (litBytes "frasl")
  | 8364 => some (litBytes "euro")
  | 8465 => some (litBytes "image")
  | 8472 => some (litBytes "weierp")
  | 8476 => some (litBytes "real")
  | 8482 => some (litBytes "trade")
  | 8501 => some (litBytes "alefsym")
  | 8592 => some (litBytes "larr")
  | 8593 => some (litBytes "uarr")
  | 8594 => some (litBytes "rarr")
  | 8595 => some (litBytes "darr")
  | 8596 => some (litBytes "harr")
  | 8629 => some (litBytes "crarr")
  | 8656 => some (litBytes "lArr")
  | 8657 => some (litBytes "uArr")
  | 8658 => some (litBytes "rArr")
  | 8659 => some (litBytes "dArr")
  | 8660 => some (litBytes "hArr")
  | 8711 => some (litBytes "nabla")
  | 8712 => some (litBytes "isin")
  | 8713 => some (litBytes "notin")
  | 8715 => some (litBytes "ni")
  | 8719 => some (litBytes "prod")
  | 8721 => some (litBytes "sum")
  | 8722 => some (litBytes "minus")
  | 8727 => some (litBytes "lowast")
  | 8730 => some (litBytes "radic")
  | 8733 => some (litBytes "prop")
  | 8734 => some (litBytes "infin")
  | 8736 => some (litBytes "ang")
  | 8743 => some (litBytes "and")
  | 8744 => some (litBytes "or")
  | 8745 => some (litBytes "cap")
  | 8746 => some (litBytes "cup")
  | 8747 => some (litBytes "int")
  | 8756 => some (litBytes "there4")
  | 8764 => some (litBytes "sim")
  | 8773 => some (litBytes "cong")
  | 8776 => some (litBytes "asymp")
  | 8800 => some (litBytes "ne")
  | 8801 => some (litBytes "equiv")
  | 8804 => some (litBytes "le")
  | 8805 => some (litBytes "ge")
  | 8834 => some (litBytes "sub")
  | 8835 => some (litBytes "sup")
  | 8836 => some (litBytes "nsub")
  | 8838 => some (litBytes "sube")
  | 8839 => some (litBytes "supe")
  | 8853 => some (litBytes "oplus")
  | 8855 => some (litBytes "otimes")
  | 8869 => some (litBytes "perp")
  | 8901 => some (litBytes "sdot")
  | 8968 => some (litBytes "lceil")
  | 8969 => some (litBytes "rceil")
  | 8970 => some (litBytes "lfloor")
  | 8971 => some (litBytes "rfloor")
  | 9001 => some (litBytes "lang")
  | 9002 => some (litBytes "rang")
  | 9674 => some (litBytes "loz")
  | 9824 => some (litBytes "spades")
  | 9827 => some (litBytes "clubs")
  | 9829 => some (litBytes "hearts")
  | 9830 => some (litBytes "diams")
  | _ => none

/-- One decoded codepoint under `htmlentities`: a tabled
    codepoint becomes `&name;`, anything else keeps its original
    UTF-8 bytes. -/
def entityOrOrig (cp : Nat) (orig : List Nat) : List Nat :=
  match entityName cp with
  | some name => [38] ++ name ++ [59]
  | none => orig

/-- Matches PHP 8.5 `htmlentities($s)` (default flags
    `ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401`, UTF-8): the five
    markup characters escape as in `escHtmlQuotesByte`, every
    codepoint in the HTML 4.01 table becomes its named entity,
    and ill-formed UTF-8 sequences are replaced by U+FFFD under
    the same continuation-consumption rule as
    `htmlSpecialCharsQuotesSubst` (whose traversal this mirrors;
    only the per-codepoint emission differs). -/
def htmlEntities (bs : List Nat) : List Nat :=
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
              if isContByte b2 then
                entityOrOrig ((b - 0xC0) * 64 + (b2 - 0x80)) [b, b2] ++
                  go rest' fuel
              else utf8Fffd ++ go rest fuel
          | [] => utf8Fffd
        else if 0xE0 ≤ b && b < 0xF0 then
          match rest with
          | b2 :: b3 :: rest' =>
              if isContByte b2 && isContByte b3 then
                let ok := (b != 0xE0 || 0xA0 ≤ b2) && (b != 0xED || b2 < 0xA0)
                if ok then
                  entityOrOrig ((b - 0xE0) * 4096 + (b2 - 0x80) * 64 +
                    (b3 - 0x80)) [b, b2, b3] ++ go rest' fuel
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
                if ok then
                  entityOrOrig ((b - 0xF0) * 262144 + (b2 - 0x80) * 4096 +
                    (b3 - 0x80) * 64 + (b4 - 0x80)) [b, b2, b3, b4] ++
                    go rest' fuel
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

/-! ## Equationreference -/

/-- Mirror of `Text_Wiki_Render_Xhtml_Equationreference::token`:
    the label resolves against the render-time equations registry
    (`DocState.equations`, whose keys are unique by `eqSet`'s
    replace-in-place writes, so the first match is the
    registration); an undefined label yields the empty id, exactly
    as PHP's missing-entry `null` interpolates. The id prefix is
    the `math` render conf (unset under the harness). -/
def renderEquationreference (conf : RenderConf) (doc : DocState)
    (opts : OptMap) : List Nat :=
  let label := optStrBytes opts "label".toList
  let idBytes := match doc.equations.find? (fun kv =>
      kv.1.flatMap utf8Bytes == label) with
    | some (_, n) => natBytes n
    | none => []
  litBytes "<a class=\"eref\" href=\"javascript:;\" " ++
    litBytes "onclick=\"WIKIDOT.page.utils.scrollToReference('equation-" ++
    conf.mathIdPrefix ++ idBytes ++ litBytes "')\">" ++
    idBytes ++ litBytes "</a>"

/-! ## Anchor -/

/-- The named-anchor fall-through branch of
    `Text_Wiki_Render_Xhtml_Anchor::token`: `<a name="%s"></a>`
    with the name under `htmlentities` (PHP 8.5 default flags). -/
def renderAnchorName (opts : OptMap) : List Nat :=
  litBytes "<a name=\"" ++ htmlEntities (optStrBytes opts "name".toList) ++
    litBytes "\"></a>"

/-- Mirror of `Text_Wiki_Render_Xhtml_Anchor::token`. A `type`
    outside the four handled values falls through to the named
    branch, as does a missing or `null` `type` (the body's
    `isset` test). The `start` branch's attribute map defaults
    to a lone empty `href` when `attrs` is absent or not a map;
    an empty attribute array renders the bare opener. -/
def renderAnchor (opts : OptMap) : List Nat :=
  if !intIsset opts "type".toList then renderAnchorName opts
  else if intTypeIs opts (litBytes "start") then
    let attrs : OptMap := match omGet opts "attrs".toList with
      | some (.map m) => m
      | some (.list []) => []
      | _ => [("href".toList, OptVal.str [])]
    litBytes "<a" ++ attrsFragment htmlSpecialCharsCompat attrs ++
      litBytes ">"
  else if intTypeIs opts (litBytes "end") then
    litBytes "</a>"
  else if intTypeIs opts (litBytes "invalid_named") then
    litBytes "[" ++ optStrBytes opts "lead".toList ++
      litBytes "<a href=\"javascript:;\">" ++
      htmlSpecialCharsCompat (optStrBytes opts "text".toList) ++
      litBytes "</a>" ++ optStrBytes opts "trail".toList ++
      litBytes "]"
  else if intTypeIs opts (litBytes "literal") then
    htmlSpecialCharsCompat (optStrBytes opts "text".toList)
  else renderAnchorName opts

/-! ## Collapsible -/

/-- Mirror of `Text_Wiki_Render_Xhtml_Collapsible::wikidotLabel`:
    an unset, empty, or `"0"` text takes the default label
    (`+ show block`, or the en-dash `– hide block`); the text is
    escaped with `htmlspecialchars(..., ENT_COMPAT)` (no
    `ENT_SUBSTITUTE`, so invalid UTF-8 empties it), then the
    ordered `str_replace` passes run (space to `&nbsp;`, tab to
    four `&nbsp;`, LF to a plain space, CR to nothing), and
    finally every remaining control byte (`< 0x20`, `0x7F`) is
    stripped. -/
def wikidotLabel (text : Option (List Nat)) (isShow : Bool) : List Nat :=
  let default : List Nat :=
    if isShow then litBytes "+ show block"
    else [0xE2, 0x80, 0x93] ++ litBytes " hide block"
  let t := match text with
    | none => default
    | some bs => if bs.isEmpty || bs == [48] then default else bs
  let esc := htmlSpecialCharsCompat t
  let s1 := replaceByteAll 32 (litBytes "&nbsp;") esc
  let s2 := replaceByteAll 9 (litBytes "&nbsp;&nbsp;&nbsp;&nbsp;") s1
  let s3 := replaceByteAll 10 [32] s2
  let s4 := replaceByteAll 13 [] s3
  s4.filter (fun b => !(b < 0x20 || b == 0x7F))

/-- Mirror of `Text_Wiki_Render_Xhtml_Collapsible::token`. Both
    labels are computed for both token types (the unfolded-link
    block carrying the hide label appears at the top of a `start`
    and at the bottom of an `end`, per `hideLocation`). -/
def renderCollapsible (opts : OptMap) : List Nat :=
  let args : OptMap := match omGet opts "args".toList with
    | some (.map m) => m
    | _ => []
  let folded : Bool := match optBytesOpt args "folded".toList with
    | some bs => !(bs == litBytes "no" || bs == litBytes "false")
    | none => true
  let showLbl := wikidotLabel (optBytesOpt args "show".toList) true
  let hide := wikidotLabel (optBytesOpt args "hide".toList) false
  let hideLoc : List Nat := match optBytesOpt args "hideLocation".toList with
    | some bs =>
        if bs == litBytes "bottom" then litBytes "bottom"
        else if bs == litBytes "both" then litBytes "both"
        else litBytes "top"
    | none => litBytes "top"
  let hideB :=
    litBytes "<div class=\"collapsible-block-unfolded-link\">" ++
      litBytes "<a class=\"collapsible-block-link\" " ++
      litBytes "href=\"javascript:;\">" ++ hide ++
      litBytes "</a></div>"
  if intTypeIs opts (litBytes "start") then
    litBytes "<div class=\"collapsible-block\">" ++
      litBytes "<div class=\"collapsible-block-folded\"" ++
      (if folded then [] else litBytes " style=\"display:none\"") ++
      litBytes "><a class=\"collapsible-block-link\" " ++
      litBytes "href=\"javascript:;\">" ++ showLbl ++
      litBytes "</a></div>" ++
      litBytes "<div class=\"collapsible-block-unfolded\"" ++
      (if folded then litBytes " style=\"display:none\"" else []) ++
      litBytes ">" ++
      (if hideLoc == litBytes "top" || hideLoc == litBytes "both"
       then hideB else []) ++
      litBytes "<div class=\"collapsible-block-content\">"
  else if intTypeIs opts (litBytes "end") then
    litBytes "</div>" ++
      (if hideLoc == litBytes "bottom" || hideLoc == litBytes "both"
       then hideB else []) ++
      litBytes "</div></div>"
  else []

/-! ## Tabview -/

/-- One tab entry of a Tabview `start` token: `<li>` with the
    `selected` class iff the entry's `tabId` is zero (a missing
    `tabId` is `null`, which PHP's loose `== 0` accepts); the
    label defaults to `untitled` when unset, and an empty label
    emits the bare anchor without `<em>`. -/
def tabviewTabItem (entry : OptVal) : List Nat :=
  let m : OptMap := match entry with
    | .map mm => mm
    | _ => []
  let isZero : Bool := match omGet m "tabId".toList with
    | none => true
    | some (.int n) => n == 0
    | some v => renderOptValBytes v == [48]
  let cls := if isZero then litBytes " class=\"selected\"" else []
  let label := match optBytesOpt m "title".toList with
    | none => litBytes "untitled"
    | some bs => bs
  if label.isEmpty then
    litBytes "<li" ++ cls ++ litBytes "><a href=\"javascript:;\"></a></li>"
  else
    litBytes "<li" ++ cls ++
      litBytes "><a href=\"javascript:;\"><em>" ++
      htmlSpecialCharsCompat label ++ litBytes "</em></a></li>"

/-- The tab entries of a Tabview `start` token, in stored order
    (plain structural recursion, as in `attrsFragment`). -/
def tabviewTabItems : List OptVal → List Nat
  | [] => []
  | e :: rest => tabviewTabItem e ++ tabviewTabItems rest

/-- Mirror of `Text_Wiki_Render_Xhtml_Tabview::token`. The two
    script fragments are the reference's heredocs byte for byte
    (the start heredoc joins its two script tags with a single
    LF and carries no trailing newline; the end heredoc's script
    body is LF-joined with a tab indent and no trailing
    newline). -/
def renderTabview (opts : OptMap) : List Nat :=
  let idBytes := optStrBytes opts "tabviewId".toList
  if intTypeIs opts (litBytes "start") then
    let tabs : List OptVal := match omGet opts "tabs".toList with
      | some (.list xs) => xs
      | _ => []
    litBytes "<script type=\"text/javascript\" " ++
      litBytes "src=\"/common--javascript/yahooui/element-beta-min.js\">" ++
      litBytes "</script>" ++ [10] ++
      litBytes "<script type=\"text/javascript\" " ++
      litBytes "src=\"/common--javascript/yahooui/tabview-min.js\">" ++
      litBytes "</script>" ++
      litBytes "<div id=\"wiki-tabview-" ++ idBytes ++
      litBytes "\" class=\"yui-navset\"><ul class=\"yui-nav\">" ++
      tabviewTabItems tabs ++
      litBytes "</ul><div class=\"yui-content\">"
  else if intTypeIs opts (litBytes "tabStart") then
    let tabIdBytes := optStrBytes opts "tabId".toList
    let style :=
      if !tabIdBytes.isEmpty && tabIdBytes != [48] then
        litBytes " style=\"display:none\""
      else []
    litBytes "<div id=\"wiki-tab-" ++ idBytes ++ [45] ++ tabIdBytes ++
      litBytes "\"" ++ style ++ litBytes ">"
  else if intTypeIs opts (litBytes "tabEnd") then
    litBytes "</div>"
  else if intTypeIs opts (litBytes "end") then
    litBytes "</div></div>" ++
      litBytes "<script type=\"text/javascript\">" ++ [10] ++
      litBytes "(function(){" ++ [10] ++ [9] ++
      litBytes "var tabView" ++ idBytes ++
      litBytes " = new YAHOO.widget.TabView('wiki-tabview-" ++
      idBytes ++ litBytes "');" ++ [10] ++
      litBytes "})();" ++ [10] ++ litBytes "</script>"
  else []

/-! ## Button -/

/-- The Button allowlist (`$allowedTypes`), tested against the
    ASCII-lowercased type. -/
def buttonAllowed (ty : List Nat) : Bool :=
  [ "edit", "edit-append", "edit-sections", "history", "print",
    "files", "tags", "source", "talk", "backlinks", "rename",
    "delete", "parent", "edit-meta", "watchers",
    "set-tags" ].any (fun s => ty == litBytes s)

/-- The Button default texts (`$defaultText`), under the
    harness's identity gettext stub. `set-tags` has no entry (it
    is unreachable: a textless `set-tags` returns earlier). -/
def buttonDefaultText (ty : List Nat) : List Nat :=
  if ty == litBytes "edit" then litBytes "edit"
  else if ty == litBytes "edit-append" then litBytes "append"
  else if ty == litBytes "edit-sections" then litBytes "edit sections"
  else if ty == litBytes "history" then litBytes "history"
  else if ty == litBytes "print" then litBytes "print"
  else if ty == litBytes "files" then litBytes "files"
  else if ty == litBytes "tags" then litBytes "tags"
  else if ty == litBytes "source" then litBytes "view source"
  else if ty == litBytes "talk" then litBytes "talk"
  else if ty == litBytes "backlinks" then litBytes "backlinks"
  else if ty == litBytes "rename" then litBytes "rename"
  else if ty == litBytes "delete" then litBytes "delete"
  else if ty == litBytes "parent" then litBytes "parent"
  else if ty == litBytes "edit-meta" then litBytes "edit meta"
  else if ty == litBytes "watchers" then litBytes "watchers"
  else []

/-- The Button `onclick` handlers (`$jsOnclick`). -/
def buttonOnclick (ty : List Nat) : List Nat :=
  if ty == litBytes "edit" then
    litBytes "WIKIDOT.page.listeners.editClick(event)"
  else if ty == litBytes "edit-append" then
    litBytes "WIKIDOT.page.listeners.append(event)"
  else if ty == litBytes "edit-sections" then
    litBytes "WIKIDOT.page.listeners.toggleEditSections(event)"
  else if ty == litBytes "history" then
    litBytes "WIKIDOT.page.listeners.historyClick(event)"
  else if ty == litBytes "print" then
    litBytes "WIKIDOT.page.listeners.printClick(event)"
  else if ty == litBytes "files" then
    litBytes "WIKIDOT.page.listeners.filesClick(event)"
  else if ty == litBytes "tags" then
    litBytes "WIKIDOT.page.listeners.editTags(event)"
  else if ty == litBytes "source" then
    litBytes "WIKIDOT.page.listeners.viewSourceClick(event)"
  else if ty == litBytes "talk" then
    litBytes "window.location.href='/talk:'+WIKIREQUEST.info.pageUnixName"
  else if ty == litBytes "backlinks" then
    litBytes "WIKIDOT.page.listeners.backlinksClick(event)"
  else if ty == litBytes "rename" then
    litBytes "WIKIDOT.page.listeners.renamePage(event)"
  else if ty == litBytes "delete" then
    litBytes "WIKIDOT.page.listeners.deletePage(event)"
  else if ty == litBytes "parent" then
    litBytes "WIKIDOT.page.listeners.parentClick(event)"
  else if ty == litBytes "edit-meta" then
    litBytes "WIKIDOT.page.listeners.editMetaClick(event)"
  else if ty == litBytes "watchers" then
    litBytes "WIKIDOT.page.listeners.watchersClick(event)"
  else if ty == litBytes "set-tags" then
    litBytes "WIKIDOT.page.listeners.updateTagsByButton(event, '')"
  else []

/-- Mirror of `Text_Wiki_Render_Xhtml_Button::token` (the
    REFVAL2-corrected body). Falsiness is PHP string falsiness
    (empty or `"0"`); all three escapes (class, style, and text)
    are `ENT_COMPAT` (the class and style calls were the fossil's
    bare `htmlspecialchars` until the HTMLCHARS correction; live
    spells apostrophes in both attribute values raw); the
    trailing spaces after the class, href, and onclick
    attributes are the body's own. -/
def renderButton (opts : OptMap) : List Nat :=
  let ty := asciiLowerBytes (optStrBytes opts "type".toList)
  let text := optStrBytes opts "text".toList
  let style := optStrBytes opts "style".toList
  let class0 := optStrBytes opts "class".toList
  if !buttonAllowed ty then
    litBytes "<div class=\"error-block\"><em>" ++ ty ++
      litBytes "</em> is not a valid button type</div>"
  else if ty == litBytes "set-tags" && !phpTruthyBytes text then
    litBytes "<div class=\"error-block\">" ++
      litBytes "You need to set text for set-tags button.</div>"
  else
    let cls := if phpTruthyBytes class0 then class0
      else litBytes "wiki-standalone-button"
    let txt := if phpTruthyBytes text then text else buttonDefaultText ty
    litBytes "<a class=\"" ++ htmlSpecialCharsCompat cls ++
      litBytes "\" " ++
      (if phpTruthyBytes style then
        litBytes "style=\"" ++ htmlSpecialCharsCompat style ++
          litBytes "\" "
       else []) ++
      litBytes "href=\"javascript:;\" " ++
      litBytes "onclick=\"" ++ buttonOnclick ty ++ litBytes "\" " ++
      litBytes ">" ++ htmlSpecialCharsCompat txt ++ litBytes "</a>"

/-! ## Iframe -/

/-- One `key="value"` part of an Iframe token: the `src` value
    is percent-encoded for non-ASCII bytes before escaping,
    every value is escaped `ENT_COMPAT`. -/
def iframePart (kv : List Char × OptVal) : List Nat :=
  let val := renderOptValBytes kv.2
  let val' := if kv.1 == "src".toList then percentEncodeNonAscii val
    else val
  kv.1.flatMap utf8Bytes ++ litBytes "=\"" ++
    htmlSpecialCharsCompat val' ++ litBytes "\""

/-- Join byte strings with a single-space separator (PHP's
    `implode(' ', $parts)`), structural recursion. -/
def joinSpaceBytes : List (List Nat) → List Nat
  | [] => []
  | [x] => x
  | x :: y :: rest => x ++ [32] ++ joinSpaceBytes (y :: rest)

/-- Mirror of `Text_Wiki_Render_Xhtml_Iframe::token`: every
    option of the token, in stored order, becomes one attribute;
    a token with no options yields `<iframe ></iframe>` (the
    body's literal space after the tag name). -/
def renderIframe (opts : OptMap) : List Nat :=
  litBytes "<iframe " ++ joinSpaceBytes (opts.map iframePart) ++
    litBytes "></iframe>"

/-! ## Date -/

/-- Lexicographic byte comparison for equal-length digit
    strings (PHP's `strcmp` on the canonicalization bound). -/
def digitsLexLe : List Nat → List Nat → Bool
  | [], _ => true
  | _ :: _, [] => false
  | a :: as, b :: bs => a < b || (a == b && digitsLexLe as bs)

/-- Mirror of `Date::canonicalTimestamp`: strip the sign, drop
    leading zeros (an all-zero magnitude becomes `"0"`), clamp
    the magnitude to the signed 64-bit bound for the sign, and
    re-attach the sign unless the clamped value is `"0"`. -/
def canonTimestamp (raw : List Nat) : List Nat :=
  let neg := raw.head? == some 45
  let rest := if neg then raw.tail else raw
  let digits0 := rest.dropWhile (fun b => b == 48)
  let digits := if digits0.isEmpty then [48] else digits0
  let bound := if neg then litBytes "9223372036854775808"
    else litBytes "9223372036854775807"
  let clamped :=
    if digits.length > bound.length then bound
    else if digits.length == bound.length && !digitsLexLe digits bound
    then bound
    else digits
  if neg && clamped != [48] then 45 :: clamped else clamped

/-- PHP's `(int)` cast of a string: an optional sign, then the
    longest digit prefix; no digits yields 0. -/
def phpIntCast (bs : List Nat) : Int :=
  let digitsVal : List Nat → Nat :=
    fun ds => (ds.takeWhile (fun b => 48 ≤ b && b ≤ 57)).foldl
      (fun acc b => acc * 10 + (b - 48)) 0
  match bs with
  | 45 :: rest => -(digitsVal rest : Int)
  | 43 :: rest => (digitsVal rest : Int)
  | _ => (digitsVal bs : Int)

/-- Replace every non-overlapping occurrence of `pat` by
    `repl`, left to right (PHP's `str_replace` for a single
    search string; replacements are not rescanned). Fueled by
    the input length, as in the parse mirrors. -/
def replaceSubBytes (pat repl : List Nat) : List Nat → Nat → List Nat
  | [], _ => []
  | _, 0 => []
  | bs@(b :: rest), fuel + 1 =>
      if pat.isPrefixOf bs then
        repl ++ replaceSubBytes pat repl (bs.drop pat.length) fuel
      else b :: replaceSubBytes pat repl rest fuel

/-- Whether a byte is in the Date format class's unreserved set
    (`A-Z a-z 0-9 - _ . ~`). -/
def dateFormatUnreserved (b : Nat) : Bool :=
  (65 ≤ b && b ≤ 90) || (97 ≤ b && b ≤ 122) || (48 ≤ b && b ≤ 57) ||
    b == 45 || b == 95 || b == 46 || b == 126

/-- One byte of `Date::encodeFormat`: unreserved bytes pass,
    every other byte is percent-encoded with uppercase hex. -/
def dateFormatByte (b : Nat) : List Nat :=
  if dateFormatUnreserved b then [b] else 37 :: hexByteUpper b

/-- Mirror of `Date::encodeFormat` after REFCORR5 Batch 4. The former
    `@@<digits>@@ -> %FF<digits>%FF` branch was fabricated; live percent-encodes
    every literal `@` as `%40` and a real Raw placeholder's 0xFF delimiter as
    `%FF`. This is exactly `rawUrlEncodeBytes` over the format bytes. -/
def encodeDateFormat (bs : List Nat) : List Nat :=
  bs.flatMap dateFormatByte

/-- Left-pad a byte string with `0`s to width 4 (PHP's
    `str_pad(..., 4, '0', STR_PAD_LEFT)`; longer strings pass
    unchanged). -/
def pad4Bytes (bs : List Nat) : List Nat :=
  if bs.length < 4 then List.replicate (4 - bs.length) 48 ++ bs else bs

/-- Left-pad a byte string with `0`s to width 2 (`%02d`). -/
def pad2Bytes (bs : List Nat) : List Nat :=
  if bs.length < 2 then List.replicate (2 - bs.length) 48 ++ bs else bs

/-- The month abbreviations of `Date::formatTimestamp`. -/
def monthAbbr (m : Int) : List Nat :=
  match m with
  | 1 => litBytes "Jan"
  | 2 => litBytes "Feb"
  | 3 => litBytes "Mar"
  | 4 => litBytes "Apr"
  | 5 => litBytes "May"
  | 6 => litBytes "Jun"
  | 7 => litBytes "Jul"
  | 8 => litBytes "Aug"
  | 9 => litBytes "Sep"
  | 10 => litBytes "Oct"
  | 11 => litBytes "Nov"
  | _ => litBytes "Dec"

/-- Mirror of `Date::formatTimestamp`: the default
    `%d %b %Y %H:%M` text in UTC over a proleptic Gregorian
    calendar (Howard Hinnant's civil-from-days, as the reference
    transcribes it). Lean's `Int` division is already floor
    division and its `%` already floor modulo for a positive
    divisor, which is exactly the reference's `floorDiv` /
    `floorMod`. -/
def formatTimestamp (value : Int) : List Nat :=
  let days := value / 86400
  let seconds := value % 86400
  let z := days + 719468
  let era := z / 146097
  let dayOfEra := z - era * 146097
  let yearOfEra := (dayOfEra - dayOfEra / 1460 + dayOfEra / 36524 -
    dayOfEra / 146096) / 365
  let year0 := yearOfEra + era * 400
  let dayOfYear := dayOfEra -
    (365 * yearOfEra + yearOfEra / 4 - yearOfEra / 100)
  let monthPrime := (5 * dayOfYear + 2) / 153
  let day := dayOfYear - (153 * monthPrime + 2) / 5 + 1
  let month := if monthPrime < 10 then monthPrime + 3 else monthPrime - 9
  let year := if month ≤ 2 then year0 + 1 else year0
  let yearText :=
    if year < 0 then [45] ++ pad4Bytes (natBytes (-year).toNat)
    else pad4Bytes (natBytes year.toNat)
  pad2Bytes (natBytes day.toNat) ++ [32] ++ monthAbbr month ++ [32] ++
    yearText ++ [32] ++
    pad2Bytes (natBytes (seconds / 3600).toNat) ++ [58] ++
    pad2Bytes (natBytes ((seconds % 3600) / 60).toNat)

/-- Mirror of `Text_Wiki_Render_Xhtml_Date::token`: an empty
    timestamp renders nothing; otherwise the span carries the
    canonical timestamp class, the optional encoded format
    class (after the `%g` to `ago` replacement), and the
    statically formatted text. -/
def renderDate (opts : OptMap) : List Nat :=
  let raw := optStrBytes opts "timestamp".toList
  if raw.isEmpty then []
  else
    let ts := canonTimestamp raw
    let format := optStrBytes opts "format".toList
    let classSuffix :=
      if format.isEmpty then []
      else litBytes " format_" ++
        encodeDateFormat
          (replaceSubBytes (litBytes "%g") (litBytes "ago") format
            (format.length + 1))
    litBytes "<span class=\"odate time_" ++ ts ++ classSuffix ++
      litBytes "\">" ++ formatTimestamp (phpIntCast ts) ++
      litBytes "</span>"

/-! ## File -/

/-- Mirror of `File::encodePath`: only spaces and non-ASCII
    bytes are percent-encoded (uppercase hex); every other byte,
    including `+`, `%`, and `#`, stays raw. -/
def encodeFilePath (bs : List Nat) : List Nat :=
  bs.flatMap (fun b => if b == 32 || b ≥ 0x80 then 37 :: hexByteUpper b
    else [b])

/-- Mirror of `Text_Wiki_Render_Xhtml_File::token` under the
    harness configuration (the `no_local` conf unset, the
    `base` conf the class default `/`). -/
def renderFile (opts : OptMap) : List Nat :=
  let file := optStrBytes opts "file".toList
  let anchor := optStrBytes opts "anchor".toList
  let href :=
    if file.contains 47 then
      let stripped := match file with
        | 47 :: r => r
        | _ => file
      litBytes "/local--files/" ++ encodeFilePath stripped
    else litBytes "/" ++ encodeFilePath file
  litBytes "<a href=\"" ++ htmlSpecialCharsCompat href ++
    litBytes "\">" ++ htmlSpecialCharsCompat anchor ++
    litBytes "</a>"

/-! ## Size, Span, Div -/

/-- Mirror of `Text_Wiki_Render_Xhtml_Size::token`: the `size`
    is interpolated raw. -/
def renderSize (opts : OptMap) : List Nat :=
  if intTypeIs opts (litBytes "start") then
    litBytes "<span style=\"font-size:" ++
      optStrBytes opts "size".toList ++ litBytes ";\">"
  else if intTypeIs opts (litBytes "end") then
    litBytes "</span>"
  else []

/-- Mirror of `Text_Wiki_Render_Xhtml_Span::token`: attribute
    values escaped `ENT_COMPAT`, in stored order; an empty
    attribute set emits the bare `<span>`. -/
def renderSpan (opts : OptMap) : List Nat :=
  if intTypeIs opts (litBytes "start") then
    litBytes "<span" ++
      attrsFragment htmlSpecialCharsCompat (attrPairs opts "args".toList) ++
      litBytes ">"
  else if intTypeIs opts (litBytes "end") then
    litBytes "</span>"
  else []

/-- Attribute fragment for Div under REFCORR4 Batch C as narrowed by
    REFCORR8 (C-R5-R1-1). A value carrying a placeholder byte is cleared
    with its key kept; the bare `u-` shell that isolateId leaves for a
    whitespace-only authored id is not a placeholder carrier on live and
    is escaped and emitted verbatim (`id="u-"`). Other values use the
    ENT_COMPAT escaper. Stored order is preserved. -/
def divAttrFragment : List (List Char × OptVal) → List Nat
  | [] => []
  | (k, v) :: rest =>
      let raw := renderOptValBytes v
      let val := if raw.any (fun b => b == 0xFF)
                 then [] else htmlSpecialCharsCompat raw
      [32] ++ k.flatMap utf8Bytes ++ litBytes "=\"" ++ val ++
        litBytes "\"" ++ divAttrFragment rest

/-- Mirror of `Text_Wiki_Render_Xhtml_Div::token` (with the
    R4-C3 correction and REFCORR4 Batch C escaping/clearing):
    attribute values escaped with ENT_COMPAT, in stored order
    (live's emission order, built by the parse; see
    `divArgsOrder`); an empty attribute set emits the bare
    `<div>`. A pair the parse flagged `vanished` emits "" for
    both types (REFCORR2 correction C-STAGE2-2). -/
def renderDiv (opts : OptMap) : List Nat :=
  if (match omGet opts "vanished".toList with
      | some (OptVal.bool b) => b
      | _ => false) then []
  else if intTypeIs opts (litBytes "start") then
    litBytes "<div" ++
      divAttrFragment (attrPairs opts "args".toList) ++
      litBytes ">"
  else if intTypeIs opts (litBytes "end") then
    litBytes "</div>"
  else []

end LeanFtml
