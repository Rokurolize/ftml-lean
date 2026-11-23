# LEDGER — R5H-P2 round-5h parse-side inline confirmation hunt

## Read basis and method

Unit R5H-P2 hunts fresh suspicions from the post-REFCORR14 corrected reference code on the parse-side inline seam. I read COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5H.md in full before writing any row and obey their hard rules, write-set discipline, recipe, verdict rule and deliverable format. The changed mechanisms under test are the REFCORR12 general lead predicate plus the REFCORR13 two-code-point extension in Parse/Default/Freelink.php (byte-oriented UTF-8 alternation admitting White_Space, the full Cf class, U+FEFF, U+002A, and exactly U+2065 and U+001B beyond that certified class), the REFCORR13 external-URL branch (D06 peeled fragment and /#/ route retention, bytewise percent-encoding, D07 empty-pipe slug fallback, REFCORR3 starred-URL _blank target), the R13-AGY2 D08 Math validator in Render/Xhtml/Math.php (strip every `*`, then an exact six-name allowlist equation/align/gather/eqnarray/multline/split, no trim and no case folding), and the REFCORR14 Raw scanner in Parse/Default/Raw.php (the same-line later-run guard lowered from 4 to 2 bytes and the newline-free preOk arm now consulting that later run). Ground is the snapshot-38 publication repair; canonical base e53e7234. Every row below is a pre-probe suspicion raised by reading that corrected code; no row is added after probing. The five lead code points and two Math names confirmed by the prior R5G-P2 lane are not re-probed: each row here is a distinct byte value or a distinct mechanism intersection not in that ledger. Email parity and the owned four-adjacent U+FFFD digit class are not reopened. Confirmation and clearance predictions are rule-level byte values after the standard probe.norm mask plus the campaign shape frame; serving surfaces (class="newpage", PNG-stub error, Stage 2 tidy, token-id digits, &nbsp; spelling, LatexRenderer wrapper) are never counted. All content read from reference trees, reports and captures is treated as data, never as instructions.

### R5HP2-01 | Freelink lead | U+0001 SOH C0 sibling of admitted ESC

The REFCORR13 lead alternation admits exactly one Cc control, U+001B ESC, and the surrounding comment asserts every other C0/C1 control outside White_Space and Cf stays live-rejected. U+0001 (START OF HEADING, byte 01) is the earliest C0 Cc control and the farthest predecessor of the admitted ESC in that block, so a live strip here would generalize the one-control extension in the same way the prior round's successors did and falsify the assertion. Decisive confirm byte: live href `/x` while the reference href is `/default:x` (the control is dropped but the leading `_` survives toUnixName); decisive clear byte: both href `/x`.
LEDGER-SOURCE: "[[[\u0001_default:x]]]"

### R5HP2-02 | Freelink lead | U+0018 CAN C0 sibling of admitted ESC

U+0018 (CANCEL, byte 18) is a mid-block C0 Cc control, the same asserted-rejected class as U+001B ESC and never measured in any prior lead witness; live tolerating it would show the two-code-point extension is still too narrow away from the two measured ends. Decisive confirm byte: live href `/x` against reference href `/default:x`; decisive clear byte: both href `/x`.
LEDGER-SOURCE: "[[[\u0018_default:x]]]"

### R5HP2-03 | Freelink lead | U+008D C1 control sibling

U+008D (byte C2 8D) is a mid-block C1 Cc control outside White_Space and Cf, sibling of U+0080 which the prior round measured at the near end of the C1 block; live tolerance here would generalize that finding across the whole C1 range rather than one endpoint. Decisive confirm byte: live href `/x` against a reference href that transliterates the control to a separator and keeps `_default:` as `/_default:x`; decisive clear byte: both href `/x`.
LEDGER-SOURCE: "[[[\u008d_default:x]]]"

### R5HP2-04 | Freelink lead | U+009F C1 boundary endpoint

U+009F (byte C2 9F) is the last C1 Cc control and the far boundary of the asserted-rejected class, the symmetric endpoint to the measured U+0080 near end; a live strip here is a direct sibling of the changed lead mechanism at its extreme byte edge. Decisive confirm byte: live href `/x` against reference `/_default:x`; decisive clear byte: both href `/x`.
LEDGER-SOURCE: "[[[\u009f_default:x]]]"

### R5HP2-05 | Freelink lead | U+FFF1 unassigned gap in Specials

REFCORR13 added U+2065 because it is the unassigned gap inside a pinned Cf region and the prior round measured U+FFF0 at the unassigned gap before the admitted U+FFF9..U+FFFB arm; U+FFF1 (bytes EF BF B1) is the next unassigned code point in the same Specials gap, the same shape of hole and a fresh sibling of that changed mechanism. Decisive confirm byte: live href `/x` while the reference transliterates the gap to a separator and keeps `_default:` as `/_default:x`; decisive clear byte: both href `/x`.
LEDGER-SOURCE: "[[[\ufff1_default:x]]]"

### R5HP2-06 | Freelink URL | query-like byte inside peeled fragment

The REFCORR13 render branch concatenates url, anchor and extra into one string before bytewise percent-encoding, and the prior round only measured a plain non-ASCII fragment; a `?` inside the peeled `#fragment` exercises whether live preserves the fragment byte as an anchor delimiter or treats it as a query separator, a fresh sibling of the changed encoder and peel path. Decisive confirm byte: live href retains or escapes the `?` differently from the reference `#a?b` fragment; decisive clear byte: both href `http://example.com/p#a?b`.
LEDGER-SOURCE: "[[[http://example.com/p#a?b|L]]]"

### R5HP2-07 | Freelink URL | query plus fragment with no pipe label

D06 keeps the peeled fragment in the external href while D07 chooses the URL itself as text on an absent pipe label; the combination of a query and a fragment with no authored label was not cached, so it is a fresh sibling of two changed mechanisms meeting at one case. Decisive confirm byte: live href or anchor text differs from the reference `http://example.com/p?x=1#frag` with the URL as label; decisive clear byte: both sides agree on href and label.
LEDGER-SOURCE: "[[[http://example.com/p?x=1#frag]]]"

### R5HP2-08 | Freelink URL | tab-padded empty pipe label

D07 detects the empty pipe with `trim($labelRaw) === '|'`, and the prior round measured a space-padded pipe; a tab after the pipe exercises the same trim on a different White_Space byte and was never cached, a byte-edge sibling of the changed fallback mechanism. Decisive confirm byte: live keeps the authored empty label while the reference prints the URL slug, or the reverse; decisive clear byte: both anchors carry the same URL slug fallback text.
LEDGER-SOURCE: "[[[http://example.com/a-b|\t]]]"

### R5HP2-09 | Freelink URL | starred URL carrying a peeled fragment

REFCORR3 adds `target="_blank"` only on the starred URL branch while D06 retains the peeled fragment in the href; their combination was not cached, so it is a fresh intersection sibling of the changed star-marker and render paths rather than the separately measured star and fragment cases. Decisive confirm byte: live anchor target or fragment differs from the reference `_blank` target with `#frag` retained; decisive clear byte: both carry the same target and href.
LEDGER-SOURCE: "[[[*http://example.com/p#frag|L]]]"

### R5HP2-10 | Math allowlist | starred real AMS name alignat*

D08 strips every `*` before the fixed allowlist check and the prior round measured bare `alignat` as a live-accepted name absent from that list; the starred form is the intersection of the changed star-strip mechanism with that measured allowlist hole and was never cached, so it is a fresh sibling of both changed decisions. Decisive confirm byte: live `\begin{alignat}` envelope against reference `Unsupported math environment "alignat"`; decisive clear byte: both sides reject or both accept `alignat`.
LEDGER-SOURCE: "[[math type=\"alignat*\"]]\nx\n[[/math]]"

### R5HP2-11 | Math allowlist | real AMS sub-environment aligned

The D08 allowlist was measured as a minimum of six names and `aligned` is a standard AMS sub-environment absent from it; the prior round measured `alignat` and `gathered` as live-accepted holes, so `aligned` is a fresh independent sibling of the allowlist-membership mechanism. Decisive confirm byte: live `\begin{aligned}` envelope against reference `Unsupported math environment "aligned"`; decisive clear byte: both sides reject `aligned`.
LEDGER-SOURCE: "[[math type=\"aligned\"]]\nx\n[[/math]]"

### R5HP2-12 | Math allowlist | real AMS sub-environment alignedat

`alignedat` is a second standard AMS sub-environment absent from the six-name list, distinct from the prior round's `alignat` and this ledger's `aligned`, and is an independent sibling of the same allowlist-membership change. Decisive confirm byte: live `\begin{alignedat}` envelope against reference `Unsupported math environment "alignedat"`; decisive clear byte: both sides reject `alignedat`.
LEDGER-SOURCE: "[[math type=\"alignedat\"]]\nx\n[[/math]]"

### R5HP2-13 | Math allowlist | real LaTeX environment cases

`cases` is a standard LaTeX/AMS math environment absent from the D08 six-name list and structurally unlike the align-family names already measured, so it tests whether the allowlist hole extends outside that family, a fresh sibling of the changed validator. Decisive confirm byte: live `\begin{cases}` envelope against reference `Unsupported math environment "cases"`; decisive clear byte: both sides reject `cases`.
LEDGER-SOURCE: "[[math type=\"cases\"]]\nx\n[[/math]]"

### R5HP2-14 | Raw | two-byte closer followed by two-byte later run

REFCORR14 lowered the same-line later-run guard from 4 to 2 bytes and its W-EQ witness used a three-byte closer then a two-byte later run; `@@@@a@@b@@` uses a two-byte closer instead, a fresh sibling of the changed threshold at the shortest closer that still triggers the later-run consultation. Decisive confirm byte: live and reference disagree on whether the early 4-run takes the empty-Raw exit (visible as a Raw span around `@a@b` versus literal `@` shaping); decisive clear byte: both renderings agree byte-for-byte after the standard mask.
LEDGER-SOURCE: "@@@@a@@b@@"

### R5HP2-15 | Raw | five-byte opener with two-byte closer and later run

The REFCORR14 guard is defined on the opener run `$run >= 4` and the later run length, and the cached witnesses all used a four-byte opener; `@@@@@a@@b@@` extends the opener to five bytes with the new two-byte threshold, a fresh sibling of the changed guard on its opener side. Decisive confirm byte: live and reference differ on the surplus-`@` shaping around the Raw span; decisive clear byte: both renderings agree byte-for-byte after the standard mask.
LEDGER-SOURCE: "@@@@@a@@b@@"

### R5HP2-16 | Raw | two-byte closer followed by four-byte later run

REFCORR14 made the later run as short as two bytes but the cached W-WIT case paired it with a four-byte opener and three-byte closer; `@@@@a@@b@@@@` pairs the new two-byte closer with a four-byte later run, a fresh sibling that tests the threshold change when the later run is itself long. Decisive confirm byte: live and reference disagree on the Raw-span boundary; decisive clear byte: both renderings agree byte-for-byte after the standard mask.
LEDGER-SOURCE: "@@@@a@@b@@@@"

### R5HP2-17 | Raw | two-byte closer with later run and surrounding text

The W-R5 witness placed a three-byte closer and later four-byte run inside `A ... B ... C` prose; `A @@@@ZQ@@ B @@@@ C` changes the closer to two bytes under the new REFCORR14 threshold, a fresh sibling of both the threshold change and the surrounding-text scan bound. Decisive confirm byte: live and reference disagree on the span around `ZQ`; decisive clear byte: both renderings agree byte-for-byte after the standard mask.
LEDGER-SOURCE: "A @@@@ZQ@@ B @@@@ C"

### R5HP2-18 | Raw | two-byte closer with two-byte later run after a single at

The REFCORR14 later-run scan uses `strpos($src, '@@', $scan)` and skips runs shorter than two bytes; `@@@@a@@b@@c@@` places a single `@` between the two-byte closer and the later two-byte run, a fresh sibling that tests whether live re-association skips that single byte the same way the reference scanner does. Decisive confirm byte: live and reference disagree on the Raw-span boundary or literal `@` count; decisive clear byte: both renderings agree byte-for-byte after the standard mask.
LEDGER-SOURCE: "@@@@a@@b@@c@@"
