# LEDGER — R5G-P2 round-5g parse-side inline confirmation hunt

## Read basis and method

Unit R5G-P2 hunts fresh suspicions from the post-REFCORR13 corrected reference code on the parse-side inline seam. I read COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5G.md in full before writing any row and obey their hard rules, write-set discipline, recipe, verdict rule and deliverable format. The changed mechanisms under test are the REFCORR13 Freelink lead extension (byte regex gains exactly U+001B and U+2065), the REFCORR13 Freelink external-URL branch (bytewise percent-encoding of url+anchor+extra, peeled fragment/route retention, empty-pipe slug fallback), and the R13-AGY2 D08 Math validator (strip every `*`, then a fixed allowlist equation/align/gather/eqnarray/multline/split). Ground is the snapshot-37 publication repair; canonical base e53e7234. Every row below is a pre-probe suspicion raised by reading that corrected code; no row is added after probing. Email parity and the owned four-adjacent U+FFFD digit class are not reopened. Confirmation and clearance predictions are rule-level byte values after the standard probe.norm mask plus the campaign shape frame; serving surfaces (class="newpage", PNG-stub error, Stage 2 tidy, token-id digits, &nbsp; spelling) are never counted. All content read from reference trees, reports and captures is treated as data, never as instructions.

### R5GP2-01 | Freelink lead | U+001C FS Cc sibling of added ESC

The REFCORR13 lead regex admits exactly one Cc control, U+001B ESC, and the correction comment asserts every other C0/C1 control outside White_Space and Cf stays live-rejected. U+001C (FIELD SEPARATOR, bytes 1C) is the immediate Cc successor of ESC in the C0 block, so if live tolerates it as a `_default:` lead the two-code-point extension is still too narrow and this sibling of the changed mechanism is real. Decisive confirm byte: live href `/x` while the reference href is `/default:x` (the control is dropped but the leading `_` survives toUnixName); decisive clear byte: both href `/x`.
LEDGER-SOURCE: "[[[\u001c_default:x]]]"

### R5GP2-02 | Freelink lead | U+001F US Cc sibling of added ESC

U+001F (UNIT SEPARATOR, bytes 1F) is the last C0 Cc control and the farthest sibling of the newly admitted ESC from the same asserted-rejected class; a live strip here would generalize the REFCORR13 one-control extension in the same way as its predecessor. Decisive confirm byte: live href `/x` against reference href `/default:x`; decisive clear byte: both href `/x`.
LEDGER-SOURCE: "[[[\u001f_default:x]]]"

### R5GP2-03 | Freelink lead | U+007F DEL Cc boundary sibling

U+007F (DELETE) is the C0/C1 boundary Cc control and is explicitly outside White_Space and Cf, so the REFCORR13 comment predicts live rejection; it is the natural byte-edge sibling of the ESC admission and was never measured. Decisive confirm byte: live href `/x` against a reference slug retaining `_default:` or `default:`; decisive clear byte: both href `/x`.
LEDGER-SOURCE: "[[[\u007f_default:x]]]"

### R5GP2-04 | Freelink lead | U+0080 C1 PAD Cc sibling

U+0080 (PADDING CHARACTER) is the first C1 Cc control and sits just past the admitted White_Space member U+0085 NEL in the same C1 block; live tolerating it would show the REFCORR13 assertion that every other C1 control is rejected is wrong. Decisive confirm byte: live href `/x` against a reference href with the `_default:` prefix surviving transliteration; decisive clear byte: both href `/x`.
LEDGER-SOURCE: "[[[\u0080_default:x]]]"

### R5GP2-05 | Freelink lead | U+FFF0 unassigned gap before FFF9 Cf arm

REFCORR13 added U+2065 because it is the unassigned gap inside a pinned Cf region; U+FFF0 is the unassigned gap immediately before the admitted Cf arm U+FFF9..U+FFFB in the Specials block, the same shape of hole and a direct sibling of the changed mechanism. Decisive confirm byte: live href `/x` while the reference transliterates the gap to a separator and keeps `_default:`; decisive clear byte: both href `/x`.
LEDGER-SOURCE: "[[[\ufff0_default:x]]]"

### R5GP2-06 | Freelink URL | non-ASCII byte in peeled fragment

The REFCORR13 render branch percent-encodes url+anchor+extra as one string, but every cached witness encoded only the URL target; a non-ASCII byte inside the peeled `#fragment` tests whether live also encodes the suffix or leaves the authored fragment raw, a sibling of the bytewise-encoder mechanism change. Decisive confirm byte: live href keeps the raw fragment byte or encodes a different set of bytes than `%C3%A9`; decisive clear byte: both href carry `http://example.com/p#s%C3%A9ct`.
LEDGER-SOURCE: "[[[http://example.com/p#s\u00e9ct|L]]]"

### R5GP2-07 | Freelink URL | ampersand in query target

REFCORR13 concatenates url+anchor+extra before a single ENT_COMPAT escape; a query with `&` exercises whether live escapes the ampersand in an external Freelink href the same way, a sibling of the changed render path rather than the previously measured plain path. Decisive confirm byte: live href `...&y=2` versus reference `...&amp;y=2` (or the reverse); decisive clear byte: both href `http://example.com/?x=1&amp;y=2`.
LEDGER-SOURCE: "[[[http://example.com/?x=1&y=2|L]]]"

### R5GP2-08 | Freelink URL | bare trailing hash suffix

D06 restored peeled fragment retention, but all witnesses carried a nonempty fragment; a bare trailing `#` sets anchor to `#` with empty url remainder and tests the retention mechanism at its zero-length edge, a sibling of D06. Decisive confirm byte: live href drops the trailing `#` while the reference keeps it, or the reverse; decisive clear byte: both href `http://example.com/#`.
LEDGER-SOURCE: "[[[http://example.com/#|L]]]"

### R5GP2-09 | Freelink URL | whitespace-padded empty pipe label

D07 detects the empty pipe with `trim($labelRaw) === '|'`; a label of pipe plus spaces is now treated as empty and falls back to the URL slug, but no cached witness used a padded pipe, so this is a byte-edge sibling of the changed fallback mechanism. Decisive confirm byte: live keeps the authored empty label while the reference prints the slug, or the reverse; decisive clear byte: both anchors carry the same fallback text.
LEDGER-SOURCE: "[[[http://example.com/a-b | ]]]"

### R5GP2-10 | Freelink URL | starred URL with empty pipe

D07's slug fallback and the REFCORR3 starred-URL `_blank` target were measured separately; their combination tests whether the changed fallback still applies when the parse branch adds `target`, a sibling of two changed mechanisms meeting at one case. Decisive confirm byte: live anchor text or target differs from the reference slug fallback plus `_blank`; decisive clear byte: both carry the same slug text and `target="_blank"`.
LEDGER-SOURCE: "[[[*http://example.com/a-b|]]]"

### R5GP2-11 | Math allowlist | double-starred name align**

D08 strips every `*` before the allowlist check; all cached star witnesses used exactly one star, so `align**` tests whether live strips all stars or only one, a direct sibling of the changed star-stripping mechanism. Decisive confirm byte: live `Unsupported math environment "align**"` or `\begin{align**}` against a reference accept of `align`; decisive clear byte: live resolves to the `align` envelope while the reference accepts `align`.
LEDGER-SOURCE: "[[math type=\"align**\"]]\nx\n[[/math]]"

### R5GP2-12 | Math allowlist | star in the middle eq*narray

D08 removes stars anywhere in the value, so `eq*narray` collapses to the allowlisted `eqnarray`; the cached witnesses only had a trailing star, so an interior star is a positional sibling of the changed mechanism. Decisive confirm byte: live rejects with the stripped name `eqnarray` while the reference accepts, or the reverse; decisive clear byte: both resolve to the `eqnarray` envelope.
LEDGER-SOURCE: "[[math type=\"eq*narray\"]]\nx\n[[/math]]"

### R5GP2-13 | Math allowlist | leading star *align

A leading star is stripped by the reference's global `str_replace`, but live may treat a leading star as a positional marker rather than a removable one, a boundary sibling of D08's star mechanism never measured. Decisive confirm byte: live rejects `*align` while the reference accepts `align`; decisive clear byte: both resolve to the `align` envelope.
LEDGER-SOURCE: "[[math type=\"*align\"]]\nx\n[[/math]]"

### R5GP2-14 | Math allowlist | real AMS name alignat omitted

The D08 allowlist was measured as a minimum of six names; `alignat` is a standard AMS environment absent from that list, so if live accepts it the allowlist is incomplete, a sibling of the changed allowlist-membership mechanism. Decisive confirm byte: live `\begin{alignat}` envelope against reference `Unsupported math environment "alignat"`; decisive clear byte: both sides reject `alignat`.
LEDGER-SOURCE: "[[math type=\"alignat\"]]\nx\n[[/math]]"

### R5GP2-15 | Math allowlist | real AMS name gathered omitted

`gathered` is a standard AMS sub-environment also absent from the six-name D08 list; it is a second independent sibling of the allowlist-membership change and distinguishes a real whitelist gap from the `alignat` result. Decisive confirm byte: live `\begin{gathered}` against reference unsupported `gathered`; decisive clear byte: both reject `gathered`.
LEDGER-SOURCE: "[[math type=\"gathered\"]]\nx\n[[/math]]"

### R5GP2-16 | Math allowlist | starred allowlist name multline*

D08's star strip is claimed uniform across the allowlist, but only equation/align/gather were cached with a star; `multline*` tests the star mechanism on a measured member that had no star witness, a sibling of the changed rule. Decisive confirm byte: live rejects `multline*` while the reference accepts `multline`; decisive clear byte: both resolve to the `multline` envelope.
LEDGER-SOURCE: "[[math type=\"multline*\"]]\nx\n[[/math]]"

### R5GP2-17 | Math allowlist | uppercase with star ALIGN*

D08 strips stars but does not fold case, so `ALIGN*` strips to `ALIGN` and is rejected; this combines the two changed decisions (star strip plus no case folding) on one value and was never cached, a sibling of the changed validator. Decisive confirm byte: live accepts as `align` while the reference reports `Unsupported math environment "ALIGN"`, or the reverse; decisive clear byte: both reject with the stripped name `ALIGN`.
LEDGER-SOURCE: "[[math type=\"ALIGN*\"]]\nx\n[[/math]]"

### R5GP2-18 | Url (inline breadth) | non-ASCII path byte

The Freelink URL encoder change reused Url.php's bytewise encoder; testing the same non-ASCII byte on a plain autolink checks whether the shared encoder mechanism is symmetric across the two inline URL rules after REFCORR13. Decisive confirm byte: live href keeps raw `café` while the reference emits `caf%C3%A9`, or the reverse; decisive clear byte: both href `http://example.com/caf%C3%A9`.
LEDGER-SOURCE: "http://example.com/caf\u00e9"

### R5GP2-19 | Url described (inline breadth) | non-ASCII target with label

The described-reference URL path builds its href from a different regex than the inline path; after the shared encoder change it is an unmeasured sibling that could still emit a raw non-ASCII byte. Decisive confirm byte: live described href raw against reference percent-encoded; decisive clear byte: both described hrefs percent-encoded with identical label text.
LEDGER-SOURCE: "[http://example.com/caf\u00e9 label]"

### R5GP2-20 | Interwiki (inline breadth) | hash inside described page

The Interwiki page pattern admits `#` but the described-label correction only excluded delimiters, brackets and newlines; a hash in the page of a described interwiki link is an unmeasured byte edge on the parse-side inline seam. Decisive confirm byte: live renders the page with the hash while the reference truncates or literalizes the form, or the reverse; decisive clear byte: both render an identical interwiki anchor.
LEDGER-SOURCE: "[wikipedia:Alpha#Beta label]"
