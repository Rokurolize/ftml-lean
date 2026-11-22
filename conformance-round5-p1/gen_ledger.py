#!/usr/bin/env python3
# Single source of truth for R5-P1 LEDGER.md and cases.jsonl.
# Runs only in this unit dir; writes only this unit dir.
import json, os

U = os.path.dirname(os.path.abspath(__file__))

FFFD = "\ufffd"   # literal U+FFFD (EF BF BD), not a bare 0xFF byte
ESC = "\u001b"    # bare ESC control byte
NBSP = "\u00a0"   # U+00A0 non-breaking space

# Each record is one pre-probe suspicion. Fields:
# id, family, construct, why, confirm, clear, source
S = []

def add(id, family, construct, why, confirm, clear, source):
    S.append(dict(id=id, family=family, construct=construct, why=why,
                  confirm=confirm, clear=clear, source=source))

# ---------------- Paragraph ----------------
add("P1", "Paragraph",
    "scored span with same-line trailing text keeps paragraph wrapper",
    "Paragraph::tokenizeScoredSpans registers only the produced Span pair in scoredSpans, and Paragraph::process suppresses the wrapper only when the whole trimmed run equals that one recorded pair; a scored span with trailing same-line text therefore still gets a <p> even though the scored opener is documented as owning the root paragraph.",
    "CONFIRM if live emits the span with NO <p> wrapper (bare <span style=\"color:red\">X</span> tail) while the reference emits <p><span style=\"color:red\">X</span> tail</p>, i.e. the wrapper decision itself differs.",
    "CLEAR if live emits the same <p>-wrapped span plus trailing text as the reference; a difference only in an attribute or space spelling is a frame surface, not a divergence.",
    '[[span_ style="color:red"]]X[[/span]] tail')

add("P2", "Paragraph",
    "two scored spans in one paragraph run",
    "scoredSpans is keyed by the first token id of the run; with two scored spans the run's first token maps to only the first recorded pair, so the trim-equality test fails and the wrapper is applied even though both openers are scored.",
    "CONFIRM if live emits two bare spans with no <p> wrapper while the reference emits a single <p> containing both spans; that is a rule-level wrapper difference.",
    "CLEAR if live also wraps both spans in one <p>, matching the reference.",
    '[[span_]]A[[/span]] [[span_]]B[[/span]]')

add("P3", "Paragraph",
    "four consecutive newlines between prose lines",
    "The paragraph regex /^.*?\\n\\s*?\\n/m is lazy in \\s*?, so a run of four LFs is consumed as two paragraph separator pairs and the residual newlines are later deleted by Tighten; the number of paragraphs formed depends on an incidental regex match boundary.",
    "CONFIRM if live forms an empty <p></p> or a <br /> from the four-newline run while the reference forms exactly two <p> elements with no break; that is a rule-level paragraph count difference.",
    "CLEAR if live also forms exactly <p>a</p> and <p>b</p> with no empty paragraph or break.",
    'a\n\n\n\nb')

# ---------------- Newline / Break ----------------
add("N1", "Newline/Break",
    "a literal LF at source byte zero",
    "Newline's regex /([^\\n])\\n(?!\\n)/m requires a preceding character, so a newline at the very start of a document is never tokenized and is simply deleted by Tighten's str_replace(\"\\n\", ''); the leading-break decision is an accidental consequence of a capture group.",
    "CONFIRM if live emits a leading <br /> (e.g. <br /><p>abc</p>) while the reference emits only <p>abc</p>; that is a rule-level line-break difference.",
    "CLEAR if live also drops the leading LF and emits only <p>abc</p>.",
    '\nabc')

add("N2", "Newline/Break",
    "two spaces before the explicit break marker",
    "Break's regex / _\\n/ claims exactly one space, the underscore and the LF; with two spaces the last space joins the token and the first survives as residual text, which Tighten folds but does not trim because the Break token is not a Newline token.",
    "CONFIRM if live emits no space before the break (<p>A<br />B</p>) while the reference emits a residual space before it (<p>A <br />B</p>); that is a rule-level text byte difference.",
    "CLEAR if live also keeps the single space before the <br /> as the reference does.",
    'A  _\nB')

add("N3", "Newline/Break",
    "a tab before the explicit break marker",
    "Break requires a literal ASCII space before the underscore; a tab fails the match, so the underscore stays as text and only the LF becomes a Newline token, then Tighten folds the tab to a space.",
    "CONFIRM if live treats the tab as a break and emits <br /> without a literal underscore while the reference emits the underscore text; that is a rule-level token decision.",
    "CLEAR if live also leaves the underscore as text with a break after it, matching the reference.",
    'A\t_\nB')

# ---------------- Blockquote ----------------
add("B1", "Blockquote",
    "quote marker at source byte zero (new sibling of the mined no-space family)",
    "Blockquote's outer regex /\\n((\\>).*\\n)(?!(\\>))/Us requires a leading LF before the marker, so a quote that begins on the first byte of the document is never claimed by the rule and its line stays literal.",
    "CONFIRM if live forms a <blockquote> for a first-byte '> q' while the reference leaves the line literal as '&gt; q'; that is a rule-level container decision and a genuinely new sibling of the already-closed in-run no-space deletion.",
    "CLEAR if live also leaves the first-byte marker literal with no blockquote.",
    '> q\n\nX')

add("B2", "Blockquote",
    "multi-marker quote at source byte zero",
    "Same leading-LF requirement combined with the depth counter: a '>> deep' at byte zero is not claimed, so no nested container is opened and both markers remain literal text.",
    "CONFIRM if live forms a two-level nested blockquote from a first-byte '>> deep' while the reference leaves '>> deep' literal; that is a rule-level nesting difference.",
    "CLEAR if live also leaves both markers literal with no container.",
    '>> deep\n\nX')

add("B3", "Blockquote",
    "depth-two no-space line inside an otherwise valid quote run",
    "The inner line grammar '^(\\>+) (.*\\n)' needs a space after the whole marker run; a '>>nospace' row inside a run is silently deleted by the run-wide compiler. Prior rounds closed the standalone and multi-marker forms; this in-run depth-two sibling has a different stack effect because the surrounding level-one rows reopen a container.",
    "CONFIRM if live keeps the nospace text or opens a level-two container while the reference emits a single level-one quote with only the two text rows; that is a new sibling shape, not a re-confirmation of S1/S2.",
    "CLEAR if live also drops the depth-two no-space row and emits the same one level-one quote as the reference.",
    'X\n\n> a\n>>nospace\n> b\n\nY')

# ---------------- Div / Container ----------------
add("D1", "Div/Container",
    "single-line div with no newline after the opener",
    "Div's regex '/(\\n)?\\[\\[div(_?)(\\s.*?)?\\]\\] *\\n.../' hard-requires a newline after the opener, so a wholly single-line [[div]]...[[/div]] never becomes a token and stays literal prose.",
    "CONFIRM if live renders a <div> from the single-line form while the reference leaves the literal markup inside a <p>; that is a rule-level token decision.",
    "CLEAR if live also leaves the single-line form literal inside a paragraph.",
    '[[div id="x"]]body[[/div]]')

add("D2", "Div/Container",
    "div made empty by a whitespace-only attribute value",
    "Div unsets any attribute whose value trims to empty only after building args, then computes $vanished from the now-empty args and empty content; a whitespace-only class value therefore turns an otherwise attributed empty div into a vanished pair whose following text is boundary-shaped, not paragraph-wrapped.",
    "CONFIRM if live emits a real <div> element, or paragraph-wraps the following text, while the reference emits the vanished pair with a bare leading break; that is a rule-level suppression/boundary difference.",
    "CLEAR if live also suppresses the empty div and leaves the following text bare as the reference does.",
    '[[div class=" "]]\n[[/div]]\nX')

add("D3", "Div/Container",
    "duplicate data-* attributes differing only in case",
    "Div lowercases each data-* key and keeps the first occurrence via array_key_exists, so 'data-Foo' wins over 'data-foo'; the order in which duplicates are emitted is an artifact of the loop rather than of a documented rule.",
    "CONFIRM if live keeps the second value, or emits both attributes, while the reference emits only data-foo=\"1\"; that is a rule-level attribute value difference.",
    "CLEAR if live also keeps the first value data-foo=\"1\" and drops the duplicate.",
    '[[div data-Foo="1" data-foo="2"]]\nX[[/div]]')

add("D4", "Div/Container",
    "collapsible passes raw un-allowlisted attributes to the renderer",
    "Collapsible::process stores $attr from getAttrs verbatim in both start and end token options, unlike Div/Span/List which allowlist class/id/style/role/type/data-*; an onclick or arbitrary attribute therefore survives into the token where a live allowlist would drop it.",
    "CONFIRM if live drops onclick and data-x from the collapsible while the reference emits them; that is a rule-level attribute allowlist difference.",
    "CLEAR if live also emits the raw attributes, matching the reference.",
    '[[collapsible id="k" data-x="1" onclick="bad()"]]BODY[[/collapsible]]')

add("D5", "Div/Container",
    "tab title containing a literal U+FFFD character",
    "Tabview::_tabTitle tests strpos($text, \"\\xFF\") for a bare 0xFF byte, not the three-byte UTF-8 U+FFFD sequence, so a real U+FFFD title is treated as ordinary text while a @@...@@ title is blanked; the byte-level test is a fossil artifact of the recovery family.",
    "CONFIRM if live renders an empty tab anchor for the U+FFFD title while the reference renders the literal replacement character; that is a rule-level title decision.",
    "CLEAR if live also renders the U+FFFD character in the tab title as the reference does.",
    '[[tabview]]\n[[tab ' + FFFD + ']]X[[/tab]]\n[[/tabview]]')

add("D6", "Div/Container",
    "malformed size made only of dots",
    "Size's numeric pattern /^[0-9\\.]{1,5}(em|px|%)$/ allows a dot in any of the first five positions, so '....em' passes validation although no real size value is five separators; the regex is a loose character class rather than a decimal grammar.",
    "CONFIRM if live rejects the construct and leaves it literal while the reference emits a <span style=\"font-size:....em\">; that is a rule-level validation difference.",
    "CLEAR if live also accepts '....em' and emits the same font-size span as the reference.",
    '[[size ....em]]X[[/size]]')

add("D7", "Div/Container",
    "bare ESC control byte inside a size body",
    "Size's control strip deliberately excludes \\x1B (and tab, LF, CR), so a bare ESC survives into the rendered body; the excluded-byte set is a hand-listed exception rather than a general control policy.",
    "CONFIRM if live strips the ESC byte and renders AXB while the reference keeps it; that is a rule-level text byte difference, provided the byte survives save normalization.",
    "CLEAR if live also keeps the ESC byte so both sides carry the same control character; if the saved source does not round-trip the byte, the case is UNTESTABLE, not a clearance.",
    '[[size 12px]]A' + ESC + 'B[[/size]]')

# ---------------- List ----------------
add("L1", "List",
    "uppercase opener with attributed uppercase items (new sibling of C-SUSPECT4A-3)",
    "REFCORR7 suppresses opener attributes for a non-canonical-case [[UL]] opener at buildListAttrs call time, but the per-item buildListAttrs call for [[LI]] items is unconditional, so item attributes are still emitted on the unclosed list; the case gate was applied at only one of two attribute sites.",
    "CONFIRM if live also drops class/data-* on the [[LI]] items of an uppercase opener (emitting bare <li> elements) while the reference keeps class=\"c\" data-z=\"9\"; that is a genuinely new sibling of the closed opener-attribute shape.",
    "CLEAR if live keeps the item attributes exactly as the reference does.",
    '[[UL id="x"]]\n[[LI class="c" data-z="9"]]A[[/LI]]\n[[/UL]]')

add("L2", "List",
    "lowercase attributed opener closed by a cross-type uppercase closer",
    "REFCORR7 made a lowercase opener close on any case-folded closer (C11) and kept its attributes, then added a newline before trailing text; the interaction of the preserved attributes with a cross-type uppercase closer and a tail was not separately measured.",
    "CONFIRM if live drops the id attribute, or emits the tail without the separator newline, while the reference emits id=\"u-x\" and a newline before 'tail'; that is a rule-level value difference.",
    "CLEAR if live keeps id=\"u-x\" and the newline exactly as the reference does.",
    '[[ul id="x"]]\n[[li]]a[[/li]]\n[[/OL]]tail')

add("L3", "List",
    "uppercase scored opener with items",
    "The unclosed-list flag for a synthetic uppercase opener is gated on the opener NOT being scored, so an uppercase [[UL_]] with [[li]] items takes a different close path from plain [[UL]]; the scored branch was added for a different family and may not reflect live.",
    "CONFIRM if live leaves the scored uppercase list unclosed (no </ul>, absorbed tail) while the reference emits a closed list with end tokens; that is a rule-level boundary difference.",
    "CLEAR if live closes the scored uppercase list exactly as the reference does.",
    '[[UL_]]\n[[li]]a[[/li]]\n[[/ul]]')

add("L4", "List",
    "uppercase opener with no item and no closer at all",
    "REFCORR7 degrades an item-less uppercase opener to bare prose by rewriting swallowed [[/ul]] closers in the body; when there is no closer anywhere the rewrite has nothing to consume and the residual-body trimming branch may differ from live.",
    "CONFIRM if live forms an unclosed list or keeps a blank-line break while the reference emits bare prose 'plain' followed by the AFTER paragraph; that is a genuinely new sibling of C-SUSPECT4A-4.",
    "CLEAR if live also degrades to the same bare prose paragraph as the reference.",
    '[[UL]]\nplain\n\nAFTER')

# ---------------- Deflist ----------------
add("DL1", "Deflist",
    "narrative body consisting only of an empty Raw placeholder",
    "Deflist::termRendersEmpty strips empty-Raw placeholders only from the term, so a narrative of only @@@@ becomes a <dd> holding a token that renders to nothing; after REFCORR7 made empty-Raw emptiness decisions in Footnoteitem/Bibitem, the narrative half of the same placeholder interaction was not examined.",
    "CONFIRM if live omits the <dd> entirely while the reference emits <dd></dd>; that is a rule-level element difference and a new sibling of the closed empty-Raw footnote/bibitem shapes.",
    "CLEAR if live also emits the empty <dd> as the reference does.",
    ': term : @@@@')

add("DL2", "Deflist",
    "term made of a Comment plus an empty Raw placeholder",
    "termRendersEmpty strips both Comment and empty-Raw tokens, so a term built from one of each renders empty and its <dt> is omitted; the composite of two independent placeholder-empty rules is an interaction no author would write deliberately.",
    "CONFIRM if live keeps a <dt> for the composite term while the reference omits it; that is a rule-level element difference.",
    "CLEAR if live also omits the <dt> and emits only the <dd> as the reference does.",
    ': [!-- hide --] @@@@ : val')

add("DL3", "Deflist",
    "colon-led first line with no separator followed by a valid item",
    "The inner grammar '/^(: )(.*)?( : )(.*)?$/Ums' requires a ' : ' separator, so a ': term' line that lacks it is silently dropped while a later ': t2 : v2' line still forms the list; the run-wide compiler decides membership per line with no diagnostic.",
    "CONFIRM if live keeps the separator-less line as a <dt> with an empty <dd>, or as literal text, while the reference emits a list containing only t2/v2; that is a rule-level membership difference.",
    "CLEAR if live also drops the separator-less line and emits the same one-item list as the reference.",
    ': term\n: t2 : v2')

# ---------------- Tighten ----------------
add("T1", "Tighten",
    "empty Raw placeholder at a color-scope edge",
    "Tighten strips the empty-Raw placeholder before folding spaces and before the color hoist/eject pass; with the placeholder between a color opener and a space the strip, fold, hoist and paragraph-edge trim passes compound, an interaction of four separate mechanisms.",
    "CONFIRM if live keeps the color scope with a leading or trailing space, or omits it, in a way that differs at the rule level from the reference's trimmed bare span; that is a genuine interaction divergence.",
    "CLEAR if live produces the same trimmed bare color span as the reference.",
    '[[color red]] @@@@ [[/color]]')

add("T2", "Tighten",
    "two adjacent empty Raw placeholders in prose",
    "Tighten removes every empty-Raw placeholder from the residual stream and then folds the resulting multi-space run to one, so two placeholders collapse the same way as one; the count-independence is an emergent property of str_replace in a loop.",
    "CONFIRM if live emits two spaces or a break between the segments while the reference emits a single space; that is a rule-level whitespace difference.",
    "CLEAR if live also collapses to one space as the reference does.",
    'a @@@@ @@@@ b')

add("T3", "Tighten",
    "empty Raw placeholder immediately before a Newline token",
    "Tighten strips the empty Raw, leaving a space before the Newline token, and only then applies the Newline-edge trim; the order makes the space disappear only because the strip ran first, so a different order would leave a visible space before the break.",
    "CONFIRM if live keeps a space before the <br /> while the reference trims it, or vice versa; that is a rule-level whitespace byte difference at a break edge.",
    "CLEAR if live also trims the space so both sides emit 'a<br />b'.",
    'a @@@@\nb')

# Post-probe serving-layer finding: the leading LF at byte zero cannot be
# saved verbatim (Wikidot normalizes "\nabc" to "abc" on save); confirm by
# reading back muse-probe-round5-p1-n1. This is UNTESTABLE, not a clearance.
for r in S:
    if r["id"] == "N1":
        r["untestable"] = ("Wikidot save normalization strips a leading LF at byte zero: "
                           "the saved source reads back as 'abc' instead of '\\nabc' "
                           "(checked on muse-probe-round5-p1-n1), so no valid, "
                           "source-matching capture can exist for this shape.")

# ---------------- emit ----------------
assert len(S) >= 10, "need at least 10 suspicions"
families = {}
for r in S:
    families.setdefault(r["family"], []).append(r["id"])
for fam, ids in families.items():
    assert len(ids) >= 2, "family %s has fewer than 2 suspicions" % fam

def md_escape(s):
    return s.replace("|", "\\|").replace("\n", "\\n").replace("\r", "\\r")

lines = []
lines.append("# R5-P1 pre-probe ledger — PARSE-SIDE BLOCK RULES")
lines.append("")
lines.append("Unit R5-P1, family seam PARSE-SIDE BLOCK RULES, canonical base e53e7234. Every row below was written before any probe page was created or captured; cases.jsonl is generated from these same records by this script so a source identity cannot drift from the prose. Live Wikidot behavior is definitional, intent is a hypothesis only, and a suspicion is confirmed only by a valid, stable, source-matching capture that disagrees with the reference or the mirror on a rule-level value after the campaign-standard mask. Serving-layer and Stage 2 frame surfaces are clearances, never confirmations.")
lines.append("")
lines.append("Seed discipline: the post-REFCORR7 case-sensitive explicit-list opener/closer pairing and attribute suppression, the degraded item-less uppercase list body, Deflist empty-Raw placeholder handling, blockquote no-space line deletion, Div's vanished empty pair and attribute order, and Tighten's empty-Raw and space folds were each read first. The four REFCORR7-closed list shapes (C-SUSPECT4A-1..4) and the blockquote no-space family already closed by the suspect-block lane are NOT re-probed as-is; L1..L4 and B1..B3 are declared new siblings with their own decisive predictions. No row is added after probing without a new ledger row and its own probe.")
lines.append("")
lines.append("| ID | Family | Construct | Why the reference looks wrong | Decisive CONFIRM bytes | Decisive CLEAR bytes | Source (\\n = LF) |")
lines.append("|----|--------|-----------|-------------------------------|------------------------|----------------------|-------------------|")
for r in S:
    lines.append("| %s | %s | %s | %s | %s | %s | `%s` |" % (
        r["id"], r["family"], md_escape(r["construct"]), md_escape(r["why"]),
        md_escape(r["confirm"]), md_escape(r["clear"]), md_escape(r["source"])))
lines.append("")
for r in S:
    lines.append("## %s — %s" % (r["id"], r["construct"]))
    lines.append("")
    lines.append("Why: %s Pre-probe prediction: %s Alternative outcome: %s Source: `%s`." % (
        md_escape(r["why"]), r["confirm"], r["clear"], md_escape(r["source"])))
    if r.get("untestable"):
        lines.append("STATUS: UNTESTABLE — %s" % r["untestable"])
    lines.append("")
lines.append("Rule-group coverage: %s." % ", ".join(
    "%s=%s" % (f, ",".join(ids)) for f, ids in families.items()))
lines.append("")
open(os.path.join(U, "LEDGER.md"), "w", encoding="utf-8").write("\n".join(lines))

with open(os.path.join(U, "cases.jsonl"), "w", encoding="utf-8") as f:
    for r in S:
        if r.get("untestable"):
            continue
        f.write(json.dumps({"id": r["id"], "source": r["source"]}, ensure_ascii=False) + "\n")

print("wrote LEDGER.md and cases.jsonl with %d suspicions in %d families" %
      (len(S), len(families)))
