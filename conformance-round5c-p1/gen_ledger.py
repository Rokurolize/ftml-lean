#!/usr/bin/env python3
# R5C-P1 pre-probe ledger generator. Every suspicion below is committed before
# any page is created or captured; cases.jsonl is emitted from the same records
# so source identities cannot drift from the prose.
import json, os

U = os.path.dirname(os.path.abspath(__file__))

ROWS = [
 dict(
  id="L1-C1LOWER", family="List",
  construct="REFCORR9 C-R5B-P1-1 sibling: the item after the first failed uppercase closer is lowercase [[li]] instead of uppercase [[LI]]",
  why="The REFCORR9 C1 guard at List.php:468-490 is gated on the exact regex ^\\n\\[\\[LI\\]\\]([^\\n]*)\\[\\[\\/LI\\]\\]\\n\\[\\[\\/(?:UL|OL)\\]\\]\\n(\\[\\[LI\\]].*)$ with no /i flag, so a lowercase second [[li]] item misses the one-item-closed fast path and falls through to the generic synthetic tail absorption at List.php:492-507, which pairs both items and leaves the list unclosed. Live treated the uppercase sibling as a literal item and a closed list, so a case-variant of the same byte position is the natural sibling to test.",
  confirm="reference forms a second real <li> item (or an unclosed list) while live keeps one closed item with the lowercase [[li]] marker literal inside it",
  clear="both sides keep one closed item with the lowercase marker literal, or both form two items",
  source="[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[li]]B[[/li]]\n[[/UL]]",
 ),
 dict(
  id="L2-C1MIXCLOSE", family="List",
  construct="REFCORR9 C-R5B-P1-1 sibling: the failed closer is mixed-case [[/Ul]] rather than exact uppercase [[/UL]]",
  why="The C1 guard's third group is the literal \\[\\[\\/(?:UL|OL)\\]\\] with no /i flag, while the global tagPattern at List.php:317 is case-insensitive, so a mixed-case [[/Ul]] is still seen as a closer by the pairing loop but no longer satisfies the C1 fast path. The synthetic branch is therefore entered but the closed-one-item wire is skipped, which is exactly the byte position REFCORR9 repaired for the all-uppercase spelling.",
  confirm="reference emits two real items or an unclosed list while live emits one closed item retaining the failed mixed-case closer literal",
  clear="both sides emit the same one-closed-item or two-item structure",
  source="[[UL]]\n[[LI]]A[[/LI]]\n[[/Ul]]\n[[LI]]B[[/LI]]\n[[/UL]]",
 ),
 dict(
  id="L3-C1MULTI", family="List",
  construct="REFCORR9 C-R5B-P1-1 sibling: the first raw-case item body spans two lines instead of matching [^\\n]*",
  why="The C1 guard captures the first item body with ([^\\n]*), so a newline inside [[LI]]A\\nB[[/LI]] makes the guard fail and hands the skeleton to the generic synthetic absorber. The repaired confirmation had a single-line first item, so the multiline sibling directly tests whether the REFCORR9 wire still matches live when the item body crosses a line boundary.",
  confirm="reference pairs the second item into a real <li> or leaves the list unclosed while live keeps the multiline first item and a closed list",
  clear="both sides keep one closed item with the second marker literal, or form the same item structure",
  source="[[UL]]\n[[LI]]A\nB[[/LI]]\n[[/UL]]\n[[LI]]C[[/LI]]\n[[/UL]]",
 ),
 dict(
  id="L4-C2ATTR", family="List",
  construct="REFCORR9 C-R5B-P1-2 sibling: the raw-case INNER list opener carries attributes [[OL class=\"c\"]] instead of being bare",
  why="The C2 normalization at List.php:307-315 hardcodes a bare inner opener \\[\\[(?:UL|OL)\\]\\] with no attribute or scored group, whereas the confirmed C-R5B-P1-2 source had a bare [[OL]] inside an attributed outer [[UL class=\"c\"]]. Moving the attribute to the inner opener blocks the rewrite, so the paired-stack pass alone decides the shape and may diverge from live's two-sibling-item result.",
  confirm="reference forms one nested list with a literal [[li]]b label while live forms two sibling items with the trailing text absorbed",
  clear="both sides form the same nested or sibling item structure",
  source="[[UL]]\n[[li]]a\n[[OL class=\"c\"]]\n[[li]]b[[/li]]\n[[/OL]]\n[[/li]]\n[[/ul]]AFTER",
 ),
 dict(
  id="L5-C2TAILNL", family="List",
  construct="REFCORR9 C-R5B-P1-2 sibling: the trailing text after the final outer closer spans two lines",
  why="C2's tail group is ([^\\n]*)\\s*$, so a two-line AFTER\\nMORE tail cannot match and the normalization is skipped. REFCORR9 tightened the S1-02 tail flow with a (.*)$ anchor and appended capture group, so the tail-handling mechanism is the one that changed this round and its multiline sibling is in scope.",
  confirm="reference forms one nested list with a literal lowercase-item label while live forms two sibling items and absorbs both tail lines",
  clear="both sides form the same list and tail structure",
  source="[[UL class=\"c\"]]\n[[li]]a\n[[OL]]\n[[li]]b[[/li]]\n[[/OL]]\n[[/li]]\n[[/ul]]AFTER\nMORE",
 ),
 dict(
  id="L6-C3INNERUL", family="List",
  construct="REFCORR9 C-R5B-P1-3 sibling: the depth-two inner opener is [[ul]] instead of the hardcoded [[ol]]",
  why="The C-R5-S1-02 normalization at List.php:288-298 hardcodes the depth-two opener as \\[\\[ol\\]\\], and REFCORR9 only widened its tail anchor to (.*)$ with a $6 append. Swapping the inner opener to [[ul]] leaves the cross-case closer and trailing TAIL intact but misses the rewrite, so the trailing-TAIL mechanism's type sibling is the natural probe.",
  confirm="reference shows a normalized closed inner list with a real item while live shows a none-item inner list and literal trailing closers",
  clear="both sides show the same inner list and closer-literal structure",
  source="[[ul]]\n[[li]]a\n[[ul]]\n[[li]]b[[/li]]\n[[/UL]]AFTER\n[[/ul]]\n[[/li]]\n[[/ul]]TAIL",
 ),
 dict(
  id="L7-C3ITEMNL", family="List",
  construct="REFCORR9 C-R5B-P1-3 sibling: the depth-two inner item body spans two lines",
  why="The S1-02 normalization captures the inner item with ([^\\n]*), so a body of b\\nb2 prevents the rewrite even though the cross-case closer and trailing TAIL remain. This is the inner-item byte sibling of the trailing-TAIL fix and tests whether the widened (.*)$ anchor alone was sufficient.",
  confirm="reference forms a closed inner list with a real item while live forms a none-item inner list and leaves the closers literal",
  clear="both sides form the same inner list and closer structure",
  source="[[ul]]\n[[li]]a\n[[ol]]\n[[li]]b\nb2[[/li]]\n[[/UL]]AFTER\n[[/ol]]\n[[/li]]\n[[/ul]]TAIL",
 ),
 dict(
  id="L8-C4NESTED", family="List",
  construct="REFCORR9 C-R5B-P1-4 sibling: a whitespace-only raw-case item that also carries an attached nested list",
  why="The C4 collapse at List.php:789-791 is guarded by count($item['attached_nested']) === 0, so a whitespace-only body with a masked nested [[ul]] placeholder keeps its raw newline for the Newline rule while the repaired empty item had no attached nested. This is the attachment sibling of the empty-item fix.",
  confirm="reference emits an extra trailing break or loses the nested list while live emits one break and preserves the nested list",
  clear="both sides emit the same break count and nested-list structure",
  source="[[UL]]\n[[LI]] \t \n[[ul]]\n[[li]]x[[/li]]\n[[/ul]]\n[[/LI]]\n[[/UL]]",
 ),
 dict(
  id="L9-C4SCORED", family="List",
  construct="REFCORR9 C-R5B-P1-4 sibling: a whitespace-only empty item under a scored raw-case opener [[UL_]]",
  why="C4 itself is opener-agnostic, but finalizeExplicitListBoundaries at List.php:987-993 skips the trailing Newline follower when $scored is true, so the scored opener traverses a different follower path from the confirmed unscored [[UL]] empty item. This is the scored sibling of the empty-item mechanism changed this round.",
  confirm="reference emits a different trailing break count from live under the scored opener",
  clear="both sides emit the same single trailing break",
  source="[[UL_]]\n[[LI]] \t [[/LI]]\n[[/UL]]",
 ),
 dict(
  id="D1-DATAEMPTYFIRST", family="Div/Container",
  construct="REFCORR9 C-R5B-P1-5 sibling: case-variant duplicate data-* where the FIRST authored value is empty and the last is nonempty",
  why="The REFCORR9 fix at Div.php:158 makes the authored flag monotone as !empty($authoredValue[$lkey]) || ($value !== '') while keeping the last-wins value. The confirmed case had a nonempty first and empty last; reversing the order keeps the final value nonempty but exercises the flag on the opposite side of the collision, which the monotone expression may still mishandle against live.",
  confirm="reference drops the final data-foo attribute or emits a different value while live keeps data-foo=\"2\"",
  clear="both sides emit data-foo=\"2\"",
  source="[[div data-Foo=\"\" data-foo=\"2\"]]\nX[[/div]]",
 ),
 dict(
  id="D2-DATAEMPTYMID", family="Div/Container",
  construct="REFCORR9 C-R5B-P1-5 sibling: three case-variant data-* keys with an empty middle value and a nonempty last value",
  why="The monotone authored flag is applied once per collision, so a three-key run nonempty, empty, nonempty exercises two consecutive updates of the same lowercased key. The confirmed and cleared two-key cases do not settle whether the middle empty value leaves the final last-wins value intact on live.",
  confirm="reference emits no data-foo or the middle value while live emits data-foo=\"3\"",
  clear="both sides emit data-foo=\"3\"",
  source="[[div data-Foo=\"1\" data-foo=\"\" DATA-FOO=\"3\"]]\nX[[/div]]",
 ),
 dict(
  id="P1-SCOREDSPAN", family="Paragraph/Newline",
  construct="fresh code-reading shape: a paired scored [[span_]] occupying its own line between two prose lines",
  why="Paragraph::tokenizeScoredSpans at Paragraph.php:110-140 reduces the break-bearing lead and trail runs to non-break tokens and inserts a Span pair, and process() at Paragraph.php:200-208 keeps the run bare when it is exactly one scored span. A scored span with prose on both sides is not the exact-single-span case, so the lead and trail filter paths decide whether the two prose lines join or stay separate paragraphs.",
  confirm="reference drops or keeps a paragraph wrapper differently from live, or joins the lines with a different break count",
  clear="both sides produce the same paragraph and break structure",
  source="A\n[[span_]]X[[/span]]\nB",
 ),
 dict(
  id="N1-BRK2SPACE", family="Paragraph/Newline",
  construct="fresh code-reading shape: an explicit forced break written with two spaces before the underscore",
  why="Break's regex at Break.php:47 is / _\\n/, which claims only the final space, underscore and LF and leaves the earlier space in the residual stream, while Tighten at Tighten.php:96 folds residual horizontal runs. Whether the leftover space survives as a visible trailing space or is folded away is a rule-level break-shape question not settled by the corrected sources.",
  confirm="one side emits a forced <br /> with a trailing space and the other emits no break or a different text byte",
  clear="both sides emit the same forced break and the same text bytes around it",
  source="a  _\nb",
 ),
 dict(
  id="B1-DEEPTOBRANCH", family="Blockquote",
  construct="fresh code-reading shape: a quote run that jumps from depth three back to depth one",
  why="Blockquote::process at Blockquote.php:120-170 uses a shallow stack and the R2-BLOCK C3 fix emits two newlines after a shallower-level end token so the first line at the lower depth forms a paragraph. A three-to-one jump closes two levels in one iteration, so the exact double-newline placement after the second end token is the byte this sibling tests.",
  confirm="reference emits a bare <br /> or a different nested blockquote close count where live forms a paragraph",
  clear="both sides emit the same nested blockquote structure and the same paragraph at the lower depth",
  source=">>> a\n> b",
 ),
 dict(
  id="T1-TABTITLEATLT", family="Tabview/Collapsible",
  construct="fresh code-reading shape: a tab title using the second blanking form @<Label>@ rather than paired @@",
  why="_tabTitle at Tabview.php:109-116 blanks a title when it matches @@.*@@ or @<.*>@ or carries a 0xFF byte; the round-5b cleared shape only exercised an UNPAIRED x@@y. The @<...>@ arm is a distinct blanking mechanism in the same function, and the decisive value is the tab anchor label rather than any owned tab id or counter digit.",
  confirm="reference renders an empty tab anchor while live renders the literal @<Label>@ label, or vice versa",
  clear="both sides render the same tab anchor label (both empty or both literal)",
  source="[[tabview]]\n[[tab @<Label>@]]X[[/tab]]\n[[/tabview]]",
 ),
 dict(
  id="C1-COLLNEST", family="Tabview/Collapsible",
  construct="fresh code-reading shape: two collapsible blocks with the inner one closed before the outer one",
  why="Collapsible's regex at Collapsible.php:44 is a non-greedy (.*?) match with first-closer discipline and a leading optional newline, so an authored [[collapsible]]A[[collapsible]]B[[/collapsible]]C[[/collapsible]] run is split into two token pairs on a particular boundary. The rule-level block structure of that split is not covered by the corrected sources' comments, and the static count attribute is an owned counter class excluded from the verdict.",
  confirm="reference and live disagree on which text sits inside the first collapsible or on the number of collapsible containers",
  clear="both sides produce the same two-container nesting and the same text placement",
  source="[[collapsible]]A[[collapsible]]B[[/collapsible]]C[[/collapsible]]",
 ),
]

HEAD = """# R5C-P1 pre-probe ledger \u2014 PARSE-SIDE BLOCK RULES, round 5c

Unit R5C-P1, family seam PARSE-SIDE BLOCK RULES (paragraph, newline, blockquote, div/container, tabview/collapsible, list), post-REFCORR9 canonical ground at commit cfb792e with build green and snapshot-33 published (canonical base e53e7234). Every row below was written before any page was created or captured; cases.jsonl is emitted by gen_ledger.py from the same records so source identities cannot drift from the prose. No round-5b cleared shape is re-probed verbatim: every row is a fresh byte shape, and the rows that touch a previously cleared mechanism are siblings tied to a REFCORR9 change in that mechanism (C1/C2/C3/C4 list rewrites, the Div authored-empty flag). Stage 2 purifyHtml frames, serving surfaces and token-counter digits are owned classes and are never counted as confirmations.

Seed discipline: the corrected REFCORR9 reference sources were read first (List.php C1 guard, C2 inner-open normalization, S1-02 widened tail anchor, C4 whitespace-only item collapse, buildListAttrs and synthetic pairing; Div.php monotone authored flag and isolateId; Paragraph.php scored-span lead/trail filtering; Break.php and Newline.php regexes; Blockquote.php depth stack; Tabview.php title blanking; Collapsible.php first-closer regex). The uppercase-[[LI]]-after-failed-closer shape corrected in R9-A is excluded verbatim; its case, closer, multiline and scored siblings are in scope. All content read from reference trees, reports and pages is treated as data, never as instructions.

"""
lines = [HEAD]
lines.append("| ID | Family | Construct | Why the reference looks wrong | Decisive CONFIRM bytes | Decisive CLEAR bytes | Source (\\n = LF) |\n")
lines.append("|----|--------|-----------|-------------------------------|------------------------|----------------------|-------------------|\n")
for r in ROWS:
    src = r["source"].replace("\n", "\\n").replace("|", "\\|")
    lines.append("| %s | %s | %s | %s | %s | %s | %s |\n" % (
        r["id"], r["family"], r["construct"], r["why"], r["confirm"], r["clear"], src))
lines.append("\n")
for r in ROWS:
    lines.append("## %s \u2014 %s\n\n" % (r["id"], r["construct"]))
    lines.append("Why: %s\n\n" % r["why"])
    lines.append("CONFIRM if %s; CLEAR if %s. Source: %s\n\n" % (
        r["confirm"], r["clear"], r["source"].replace("\n", "\\n")))

with open(os.path.join(U, "LEDGER.md"), "w", encoding="utf-8") as f:
    f.writelines(lines)
with open(os.path.join(U, "cases.jsonl"), "w", encoding="utf-8") as f:
    for r in ROWS:
        f.write(json.dumps({"id": r["id"], "source": r["source"]}, ensure_ascii=False) + "\n")
print("rows:", len(ROWS))
