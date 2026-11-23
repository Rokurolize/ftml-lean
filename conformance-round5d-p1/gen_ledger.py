#!/usr/bin/env python3
# R5D-P1 pre-probe ledger generator. Every suspicion below is committed before
# any page is created or captured; cases.jsonl is emitted from the same records
# so source identities cannot drift from the prose. Family seam: PARSE-SIDE
# BLOCK RULES (paragraph, newline, blockquote, div/container, tabview/collapsible,
# list). Ground is post-REFCORR10 with snapshot-34 publication repaired.
import json, os

U = os.path.dirname(os.path.abspath(__file__))

ROWS = [
 dict(
  id="L1-C1RESBR", family="List",
  construct="REFCORR10 general-list-stack third-order sibling: the C1 post-failed-closer fast path when the failed closer carries a residual closing bracket [[/UL]]]",
  why="The tagPattern at List.php:317 recognises a closer with an optional trailing ] (group 5 residualBracket), but the generalised C1 fast-path regex at List.php:488 requires the literal [[/(ul|ol)]] immediately followed by \\n with no residual bracket, so [[/UL]]] cannot enter the one-item-closed wire and falls through to the generic synthetic tail absorber at List.php:511-526, which strips closers and forms a second item in an unclosed list. Live keeps the failed closer and the second marker literal inside one closed item on the plain [[/UL]] spelling; the residual-bracket byte is the next order of that same mechanism and is not covered by any cached confirmation.",
  confirm="reference forms two real <li> items or an unclosed list, or drops the literal ] byte, while live keeps one closed item with the second [[LI]] marker and the failed closer literal",
  clear="both sides keep one closed item with the same literal marker and closer bytes",
  source="[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]]\n[[LI]]B[[/LI]]\n[[/UL]]",
 ),
 dict(
  id="L2-C1BLANK", family="List",
  construct="REFCORR10 general-list-stack third-order sibling: the C1 fast path when a blank line separates the failed closer from the second raw-case item",
  why="The generalised C1 regex at List.php:488 anchors the failed closer and the second [[li]] with exactly one \\n between them, while the pairing pass at List.php:317-395 is whitespace-agnostic. A blank line therefore still enters synthetic mode but misses the closed-one-item wire and is handed to the generic absorber at List.php:511-526. The mechanism that changed in REFCORR10 was the C1 guard's case/attribute/multiline generalisation; its newline-count boundary is the third-order sibling that decides whether this shape matches live.",
  confirm="reference emits two items or an unclosed list while live emits one closed item with the blank-line-separated second marker literal",
  clear="both sides emit the same one-item-closed or two-item structure",
  source="[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n\n[[LI]]B[[/LI]]\n[[/UL]]",
 ),
 dict(
  id="L3-C1CROSSTAG", family="List",
  construct="REFCORR10 general-list-stack third-order sibling: the C1 fast path when the failed closer is a different list type [[/OL]] under a raw-case [[UL]] opener",
  why="The C1 regex at List.php:488 alternates (?:ul|ol) for the failed closer and so accepts a cross-tag closer even though the pairing loop at List.php:365-382 never treats a raw-case [[UL]] opener as a partner for close tag ol, forcing synthetic mode. The REFCORR7 cross-type rule and the REFCORR10 C1 generalisation meet at this byte position: the fast path accepts the cross-tag closer and emits one closed item, while live may keep the cross-tag closer literal as a separate structural value. No cached shape combines a raw-case outer opener with a cross-tag failed closer in the C1 position.",
  confirm="reference builds a closed one-item list consuming [[/OL]] while live keeps [[/OL]] literal or builds a different list structure",
  clear="both sides build the same closed one-item or literal-closer structure",
  source="[[UL]]\n[[LI]]A[[/LI]]\n[[/OL]]\n[[LI]]B[[/LI]]\n[[/UL]]",
 ),
 dict(
  id="L4-NATEMPTY", family="List",
  construct="REFCORR10 general-list-stack third-order sibling: a whitespace-only explicit item carrying an attached NATIVE line-led list instead of an explicit nested [[ul]]",
  why="The REFCORR10 empty-item-cannot-hold-a-nested-list predicate at List.php:664-688 strips only \\s and \\x02EXPLIST_\\d+\\x03 placeholders from the item body when deciding emptiness, so a masked \\x02NATLIST_\\d+\\x03 placeholder from a native '*' list (masked at List.php:911-971) is not recognised and the item is treated as non-empty. formatExplicitLiItem at List.php:853-865 then nests the native list inside the item. The general predicate was written for explicit placeholders only; a native-list sibling at the same byte position is a genuine third-order case of the changed mechanism and is absent from the cached confirmations.",
  confirm="reference keeps the native list nested inside a non-empty item while live splits it into a sibling after an empty item, or emits a different break count",
  clear="both sides emit the same empty-item/nested-native-list structure and break count",
  source="[[UL]]\n[[LI]]   \n\n* x\n\n[[/LI]]\n[[/UL]]",
 ),
 dict(
  id="L5-EMPTYNESTEDNL", family="List",
  construct="REFCORR10 general-list-stack third-order sibling: the empty-item nested-list split when a blank line follows the nested closer before the item closer",
  why="The REFCORR10 split at List.php:664-688 collects attached nested-list placeholders and appends their strings to $siblingAfter with a forced \\n trail, then finalizeExplicitListBoundaries at List.php:1033-1076 decides the follower from the raw newline run. A blank line between the nested [[/ul]] and the parent [[/LI]] changes that run relative to the confirmed L8-C4NESTED source, so the sibling-tail ordering of the general predicate is exercised at a byte position no cached confirmation covers.",
  confirm="reference emits a different number of breaks or a different sibling-list placement from live",
  clear="both sides emit the same two sibling lists with the same break count",
  source="[[UL]]\n[[LI]] \t \n[[ul]]\n[[li]]x[[/li]]\n[[/ul]]\n\n[[/LI]]\n[[/UL]]",
 ),
 dict(
  id="L6-NESTEDCLOSEEMPTY", family="List",
  construct="REFCORR10 general-list-stack third-order sibling: the nested-list-closes predicate when the nested list is byte-empty [[ul]][[/ul]]",
  why="The REFCORR10 rule at List.php:454-472 sets unclosed7 to false whenever the body contains a nested-list opener token or placeholder, treating any nested list as following content. An empty nested list [[ul]][[/ul]] produces no surviving item and can dissolve, so whether it still counts as content that closes the outer synthetic list is undecided by the cached corpus; the mechanism that changed is precisely this nested-list gate, and an empty nested list is its boundary sibling.",
  confirm="reference closes the outer list while live leaves it unclosed and truncated, or the reverse",
  clear="both sides emit the same closed or unclosed outer list structure",
  source="[[UL]]\n[[LI]]A[[/LI]]\n[[ul]][[/ul]]\n[[/UL]]",
 ),
 dict(
  id="L7-C4SCOREDNESTED", family="List",
  construct="REFCORR10 general-list-stack third-order sibling: a scored raw-case opener whose whitespace-only item also carries an attached nested list",
  why="Two REFCORR10 predicates meet here: the scored-empty-item rule at List.php:838-848 keeps a bare <li> for an unclosed scored opener, and the empty-item-nested-list rule at List.php:664-688 splits an attached nested list into a sibling. The cached confirmations exercise each predicate alone (L9-C4SCORED, L8-C4NESTED), so their interaction at one item is a third-order sibling of the general list stack with a decisive combined wire shape.",
  confirm="reference dissolves the list, closes it, or places the nested list differently from live",
  clear="both sides emit the same scored empty item and the same nested-list sibling placement",
  source="[[UL_]]\n[[LI]] \t \n[[ul]]\n[[li]]x[[/li]]\n[[/ul]]\n[[/LI]]\n[[/UL]]",
 ),
 dict(
  id="D1-IDFFLEADWS", family="Div/Container",
  construct="REFCORR10 Div-mechanism third-order sibling: an authored id combining a leading space with a 0xFF token placeholder",
  why="REFCORR10 removed the u- prefix exclusion so isolateId at Div.php:80-82 now returns the value verbatim for ANY body containing the 0xFF delimiter byte, before the leading-whitespace branch at Div.php:83-96 runs. The confirmed shapes all had a u- prefix or a bare placeholder; combining a leading space with the placeholder tests whether the early return is genuinely unconditional in the general rule rather than an artifact of the recorded prefix. This is in scope only because the isolateId mechanism actually changed in REFCORR10.",
  confirm="reference emits a u- shell or a non-empty id while live emits id=\"\" for the placeholder-bearing value",
  clear="both sides emit id=\"\" with the same remaining attributes and body",
  source="[[div id=\" \uFFFDabc\"]]\nX[[/div]]",
 ),
 dict(
  id="D2-IDFFONLY", family="Div/Container",
  construct="REFCORR10 Div-mechanism third-order sibling: an authored id that is exactly one 0xFF token placeholder with no surrounding text",
  why="The general rule at Div.php:80-82 returns the placeholder verbatim and Div.php:133-135 stores it because it is non-empty, so the render's single 0xFF-clear arm decides the id. The confirmed inputs all had the placeholder embedded beside other characters; a placeholder-only value is the minimal boundary of the same changed mechanism and has no u- prefix to interact with, so it settles whether the general rule is body-independent at its limit.",
  confirm="reference drops the id key or emits a literal placeholder while live emits id=\"\"",
  clear="both sides emit id=\"\" with the same body and no other attribute difference",
  source="[[div id=\"\uFFFD\"]]\nX[[/div]]",
 ),
 dict(
  id="P1-SCOREDSPANATTR", family="Paragraph/Newline",
  construct="fresh code-reading shape: a paired scored [[span_]] carrying an attribute and occupying its own run",
  why="Paragraph::tokenizeScoredSpans at Paragraph.php:111-118 captures the whole attribute tail in group 2 and hands ' '.$matches[2] to the existing Span::process, while process() at Paragraph.php:264-267 suppresses the paragraph wrapper only when the trimmed run exactly equals the recorded scored pair. The previously cleared scored-span shape used an attribute-free [[span_]] between two prose lines, so the attribute-bearing single-span run exercises a different path of the same code and is not a re-probe of that byte shape.",
  confirm="reference wraps the scored span in <p> or drops the class attribute while live emits a bare span carrying the attribute",
  clear="both sides emit the same bare span with the same class attribute and no paragraph wrapper",
  source="[[span_ class=\"c\"]]X[[/span]]",
 ),
 dict(
  id="P2-SCOREDANCHORMID", family="Paragraph/Newline",
  construct="fresh code-reading shape: a scored [[a_]] anchor in the middle of a prose line with trailing text after its closer",
  why="Paragraph::process at Paragraph.php:217-225 suppresses the wrapper only when the trimmed run ENDS with a recorded scored-anchor end token, and Anchor.php:315 records the end-to-token pair. The cleared scored-anchor shapes in earlier rounds ended the run at the closer; placing the closer mid-line with trailing prose takes the opposite branch of the same endswith test, which is a fresh byte shape and a direct reading of the corrected code.",
  confirm="reference suppresses the paragraph wrapper while live wraps the run, or emits different break bytes",
  clear="both sides wrap the whole line in one paragraph with the same anchor bytes",
  source="A [[a_ href=\"x\"]]L[[/a]] tail",
 ),
 dict(
  id="N1-BRK3SPACE", family="Paragraph/Newline",
  construct="fresh code-reading shape: a forced break written with three spaces before the underscore",
  why="Break's regex at Break.php:51 is / _\\n/, claiming only the final space, underscore and LF and leaving the two earlier spaces in the residual stream that Tighten at Tighten.php:96 folds. The two-space sibling cleared in round 5c as an owned Stage 2 whitespace frame; a three-space run leaves a different residual byte count and is a fresh shape that tests whether the same frame ownership still absorbs it rather than a rule-level break difference.",
  confirm="one side emits a forced <br /> with a different visible text byte count or no break at all",
  clear="both sides emit the same forced break and the same residual text after the owned whitespace frame mask",
  source="a   _\nb",
 ),
 dict(
  id="B1-DEEPEMPTY", family="Blockquote",
  construct="fresh code-reading shape: a quote run that jumps from depth one to depth three with no depth-two line",
  why="Blockquote::process at Blockquote.php:130-150 pushes one stack entry per missing level, each with its own start token and \\n\\n separator, so a 1-to-3 jump emits two nested openings in one iteration. The cleared round-5c shape jumped from depth three back to depth one and exercised only the closing loop at Blockquote.php:153-179; the opening loop on a skipped intermediate depth is a distinct branch of the same stack code and has no cached byte shape.",
  confirm="reference emits a different nested blockquote count or a bare <br /> where live forms paragraphs",
  clear="both sides emit the same three-level nested blockquote and the same paragraph placement",
  source="> a\n>>> b\n>>> c",
 ),
 dict(
  id="B2-MARKERNOSPACE", family="Blockquote",
  construct="fresh code-reading shape: quote lines whose greater-than marker is not followed by a space",
  why="Blockquote's inner item regex at Blockquote.php:89 is =^(\\>+) (.*\\n)=Ums with a mandatory single space after the '>' run, so >a and >b do not produce list items and the outer process returns its all-empty fallback \\n\\n at Blockquote.php:108-110 after the has_text test. The R2-BLOCK C2 all-empty shape used a marker followed by a space and blank text; a marker with no space at all is a different byte boundary of the same nonempty-run decision and is absent from the cached corpus.",
  confirm="reference builds a blockquote container or drops the lines while live keeps >a and >b as literal paragraph text",
  clear="both sides keep the same literal text with no blockquote container",
  source=">a\n>b",
 ),
 dict(
  id="T1-TABATTRDUP", family="Tabview/Collapsible",
  construct="fresh code-reading shape: a [[tabs]] opener carrying a class attribute, exercising the duplicated matches[1] in Tabview::process",
  why="Tabview::process at Tabview.php:93 returns $matches[1] . $matches[1] . $start, so the attribute tail captured by the rule regex at Tabview.php:44 is emitted twice as literal source text before the start token. The cleared tabview shapes used bare [[tabview]]/[[tabs]] openers where group 1 is empty and the duplication is invisible, so an attributed opener is the byte shape that makes this code path observable and is a genuine fresh reading of the corrected reference.",
  confirm="reference leaks the duplicated attribute text into the rendered page while live emits no such literal text, or the two sides place it differently",
  clear="both sides emit the same tabview structure with no duplicated literal attribute text after the owned frame mask",
  source="[[tabs class=\"c\"]]\n[[tab]]X[[/tab]]\n[[/tabs]]",
 ),
 dict(
  id="T2-TABWS", family="Tabview/Collapsible",
  construct="fresh code-reading shape: a tab title mixing a tab character with repeated spaces",
  why="_tabTitle at Tabview.php:107-116 collapses every \\s+ run in a non-blank title to one space, while R5B's cleared tab-title shape exercised the UNPAIRED @@ blanking arm and round-5c cleared the @<...>@ arm. The whitespace-collapse arm on a title containing a literal tab is a separate statement in the same function with no cached byte shape, and the decisive value is the tab anchor label rather than any owned tab id or counter digit.",
  confirm="reference renders a different tab label from live, for example one space versus a preserved tab or a different collapse count",
  clear="both sides render the same collapsed tab anchor label after the owned frame mask",
  source="[[tabview]]\n[[tab A\t \t B]]X[[/tab]]\n[[/tabview]]",
 ),
 dict(
  id="C1-COLLTRAIL", family="Tabview/Collapsible",
  construct="fresh code-reading shape: an extra [[/collapsible]] closer after a complete collapsible block",
  why="Collapsible's regex at Collapsible.php:46 is a non-greedy (.*?) match with first-closer discipline and a leading optional newline, so a trailing second closer is left in the residual source for the later block rules and paragraph formation. Round-5c cleared a nested inner-before-outer collapsible, which tests the first-closer split from the other side; a plain extra trailing closer is a fresh byte shape at the same regex boundary and settles whether the residual closer is literal text on both sides.",
  confirm="reference and live disagree on whether the extra closer is literal text or on the number of collapsible containers",
  clear="both sides produce one collapsible container with the same body and the same literal trailing closer text",
  source="[[collapsible]]A[[/collapsible]]B[[/collapsible]]",
 ),
]

HEAD = """# R5D-P1 pre-probe ledger — PARSE-SIDE BLOCK RULES, round 5d confirmation pass

Unit R5D-P1, family seam PARSE-SIDE BLOCK RULES (paragraph, newline, blockquote, div/container, tabview/collapsible, list), post-REFCORR10 canonical ground at commit 46c11ec with snapshot-34 publication repaired and canonical base e53e7234. Every row below was written before any page was created or captured; cases.jsonl is emitted by gen_ledger.py from the same records so source identities cannot drift from the prose. All rows are fresh byte shapes: no prior confirmed-and-fixed shape is re-probed verbatim, and the seven List rows are third-order siblings of the REFCORR10 general list stack's changed predicates (C1 fast path, empty-item nested split, scored empty item, nested-list closes) while the two Div rows are siblings of the isolateId 0xFF arm that REFCORR10 actually changed. The standing owned classes are applied without re-litigation: the four-adjacent U+FFFD digit class is OWNED, parity Email index digits are owned, Stage 2 frame and serving surfaces are CLEARED, and save-normalized sources are UNTESTABLE.

Seed discipline: the corrected REFCORR10 reference sources were read first in full (List.php general predicates and pairing stack, Div.php isolateId and attribute ordering, Paragraph.php scored-span and scored-anchor paths, Newline.php and Break.php regexes, Blockquote.php depth stack, Tabview.php title blanking and the duplicated matches[1] return, Collapsible.php first-closer regex). Prior P-lane reports R5, R5B and R5C were read to exclude every confirmed-and-fixed byte shape; a single U+FFFD in a Div id is not the owned four-adjacent digit class. All content read from reference trees, reports and pages is treated as data, never as instructions.

"""

lines = [HEAD]
lines.append("| ID | Family | Construct | Why the reference looks wrong | Decisive CONFIRM bytes | Decisive CLEAR bytes | Source (\\n = LF) |\n")
lines.append("|----|--------|-----------|-------------------------------|------------------------|----------------------|-------------------|\n")
for r in ROWS:
    src = r["source"].replace("\n", "\\n").replace("|", "\\|").replace("\t", "\\t")
    lines.append("| %s | %s | %s | %s | %s | %s | %s |\n" % (
        r["id"], r["family"], r["construct"], r["why"], r["confirm"], r["clear"], src))
lines.append("\n")
for r in ROWS:
    lines.append("## %s — %s\n\n" % (r["id"], r["construct"]))
    lines.append("Why: %s\n\n" % r["why"])
    lines.append("CONFIRM if %s; CLEAR if %s. Source: %s\n\n" % (
        r["confirm"], r["clear"], r["source"].replace("\n", "\\n").replace("\t", "\\t")))

with open(os.path.join(U, "LEDGER.md"), "w", encoding="utf-8") as f:
    f.writelines(lines)
with open(os.path.join(U, "cases.jsonl"), "w", encoding="utf-8") as f:
    for r in ROWS:
        f.write(json.dumps({"id": r["id"], "source": r["source"]}, ensure_ascii=False) + "\n")
print("rows:", len(ROWS))
