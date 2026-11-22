#!/usr/bin/env python3
"""Generate the SUSPECT4-A probe cases and the pre-probe ledger from one source of truth."""
import json
import os

OUT = os.path.dirname(os.path.abspath(__file__))

SUSPICIONS = [
    dict(id="S4A-L1", family="List (post REFCORR5 batch 1)",
         construct="A nested explicit list whose inner opener is uppercase and whose inner closer is lowercase: [[ul]] / [[OL]] / [[/ol]], plus a three-level UL>ol>ul variant.",
         why="Batch 1 stores the opener's raw case on the pairing stack while lowercasing the closer, so an uppercase inner opener never pairs; the reference then absorbs the tail into an unclosed list and leaves [[li]]b literal. The frozen pinned sibling lc-sib-nested-lower-ul-upper-ol used an uppercase inner closer and served live-clean; the lowercase-closer variant was never probed, so the asymmetry the fix introduced is only half measured.",
         confirm="Live serves a clean nested list containing <li>b</li> with no literal [[li]] residue, while the reference leaves [[li]]b inside a swallowed <ul> (or emits a differently shaped list).",
         clear="Live also leaves the inner item literal / swallows the tail exactly as the reference does.",
         cases=["s4a-l1a", "s4a-l1b"]),
    dict(id="S4A-L2", family="List (post REFCORR5 batch 1)",
         construct="A cross-type uppercase closer in the reverse direction and with trailing prose: [[ol]]...[[/UL]] and [[ul]]...[[/OL]]trailing.",
         why="The closer gate compares the raw-case stack tag to a lowercased closer and also requires the same tag, so a cross-type uppercase closer fails and the reference leaves the whole block literal in a <p>. The pinned lc-sib-cross-ul-ol-upper shape recorded live producing a clean list; the reverse type and the trailing-text variant were not pinned.",
         confirm="Live serves a clean <ol>/<ul> list (with or without the trailing text) where the reference serves literal wikitext inside <p>.",
         clear="Live also keeps the block literal exactly as the reference does.",
         cases=["s4a-l2a", "s4a-l2b"]),
    dict(id="S4A-L3", family="List (post REFCORR5 batch 1)",
         construct="An uppercase explicit-list opener carrying style/id/data-* attributes and a mixed-case closer: [[UL style=... id=...]]...[[/uL]] and [[OL data-x=...]]...[[/OL]]AFTER.",
         why="The pinned lc-sib-ul-upper-with-class shape showed live dropping the class on an uppercase opener while the reference keeps it; the other allowlisted attribute names and a mixed-case closer were not probed, so the extent of the drop is unmeasured.",
         confirm="Live's opener carries no attributes (and shows the unclosed-list tail swallow) while the reference emits style=, id= or data-* on the opener.",
         clear="Live keeps the same attributes the reference emits.",
         cases=["s4a-l3a", "s4a-l3b"]),
    dict(id="S4A-L4", family="List (post REFCORR5 batch 1)",
         construct="An uppercase opener with a plain degraded (no [[li]]) body and trailing prose: [[OL]] / plain body / [[/OL]] / blank line / AFTER, and a TitleCase variant.",
         why="The pinned lc-sib-upper-ul-degraded-noli shape showed live emitting the body as bare text while the reference built a <ul><li style=...> list; the ol variant followed by a prose paragraph was not pinned, so the degraded-list boundary is only measured on one tag and one tail.",
         confirm="Live serves the body as bare prose (or with only a <br /> join) while the reference emits an <ol>/<ul> wrapper.",
         clear="Live builds the same list wrapper the reference does.",
         cases=["s4a-l4a", "s4a-l4b"]),
    dict(id="S4A-L5", family="List (post REFCORR5 batch 1)",
         construct="Duplicate case-variant attribute keys on [[li]]: CLASS/class, ID/id, data-FOO/data-foo, DATA-FOO/data-Foo in one item.",
         why="getAttrs preserves key case and buildListAttrs drops uppercase keys and lowercases only the data-* suffix, so the reference emits class=\"d\" id=\"y\" data-foo=\"2\"; live's treatment of duplicate case-variant keys on an item was never probed, and HTML attribute names are case-insensitive, so live may keep a different key or order.",
         confirm="Live's emitted attribute set or order at the <li> surface differs from the reference's class=\"d\" id=\"y\" data-foo=\"2\".",
         clear="Live emits exactly the reference's attribute set and order.",
         cases=["s4a-l5a", "s4a-l5b"]),
    dict(id="S4A-R1", family="Raw composite / Deflist (post REFCORR5 batch 6)",
         construct="A run of four @ (one empty Raw token) in the definition narrative: : term : @@@@, : term : def@@@@ and : @@@@ : @@@@.",
         why="Deflist's termRendersEmpty strips an empty Raw placeholder only from the term; the narrative is emitted as trim($val[4]) with the placeholder left in. The pinned dl-empty4 probe covered only a whole-term empty Raw, so the <dd> side and both-sides shapes are unmeasured.",
         confirm="Live's <dd> bytes differ from the reference's (a visible placeholder residue, a dropped <dd>, or a different trim), or the two sides disagree about whether <dt> is omitted.",
         clear="Both serve the same <dl> bytes at the <dt>/<dd> surface.",
         cases=["s4a-r1a", "s4a-r1b", "s4a-r1c"]),
    dict(id="S4A-R2", family="Raw composite / Deflist (post REFCORR5 batch 6)",
         construct="An empty Raw run embedded in term text or doubled in one term: : a@@@@b : def and : @@@@@@@@ : def.",
         why="termRendersEmpty strips the placeholder and leaves the surrounding literal @ bytes, so the reference serves <dt>ab</dt> and <dt>@@@@</dt>; the pinned dl-empty4 was a term made only of the empty Raw, so the mixed-text and two-token term shapes were never probed.",
         confirm="Live's <dt> text differs from the reference's, for example dropping the residual @ bytes or counting the run differently.",
         clear="Live serves the same <dt> text as the reference.",
         cases=["s4a-r2a", "s4a-r2b"]),
    dict(id="S4A-R3", family="Raw composite / Tighten (post REFCORR5 batch 6)",
         construct="Empty Raw runs at a line boundary: A @@@@ newline B and A@@@@ newline @@@@B.",
         why="Tighten removes residual newlines first, then deletes empty-Raw placeholders, then folds horizontal space, whereas live's Stage 2 purifyHtml shapes the space after rendering. The pinned raw-empty proof was the inline 'a @@@@ b' shape; the newline-boundary shapes were not probed, so the order of deletion versus break emission is unmeasured.",
         confirm="Live's <p> bytes (space count, <br /> placement or paragraph split) differ from the reference's <p>A<br />B</p> shape.",
         clear="Live serves the same space and break bytes as the reference.",
         cases=["s4a-r3a", "s4a-r3b"]),
    dict(id="S4A-R4", family="Raw composite / Tighten (post REFCORR5 batch 6)",
         construct="An empty Raw run adjacent to a Colortext scope edge: ##red| @@@@ hi ## and x##red| hi @@@@ ##y.",
         why="Tighten deletes empty-Raw placeholders before the Colortext hoist/eject passes, so removing the placeholder changes which space is adjacent to the color token. The composite adjudication and its 16 probes carried no color span, so this seam is unmeasured.",
         confirm="Live's color span content or padding differs from the reference's, for example a hoisted or ejected space that the reference does not produce.",
         clear="Live serves the same span bytes as the reference.",
         cases=["s4a-r4a", "s4a-r4b"]),
    dict(id="S4A-M1", family="Module (post REFCORR4 batch A, batch 7 and batch 8 p11)",
         construct="Nested modules with upper/mixed-case names: [[module CSS]] wrapping [[module unknown]], and an outer lowercase module wrapping [[MODULE unknown]] with an uppercase closer.",
         why="Module's nesting check counts openers with /i over a lowercase character class and rewrites the outer opener to [[module654 while preserving the matched name's case in the token. Batch 8's p11 pinned one uppercase nested halt; the name-case variants and the uppercase closer were not pinned.",
         confirm="Live's module-token, unknown-module error or re-emitted body bytes differ from the reference's.",
         clear="Live serves the same module bytes as the reference.",
         cases=["s4a-m1a", "s4a-m1b"]),
    dict(id="S4A-M2", family="Module (post REFCORR4 batch A, batch 7 and batch 8 p11)",
         construct="Text immediately after a module closer, and a module654 body containing a nested [[module]] opener.",
         why="Batch 7 settled the newline immediately before [[/module]], and batch 8 settled one nested halt, but text directly after the closer and module654's lack of a nesting check are separate tail shapes that were not probed.",
         confirm="Live's bytes after the module error or the nested body differ from the reference's, including how much source is re-emitted.",
         clear="Live serves the same bytes as the reference.",
         cases=["s4a-m2a", "s4a-m2b"]),
    dict(id="S4A-T1", family="Tableadv (post enumeration repair)",
         construct="Nested-table enumeration neighbors: a head with a quoted ]] (a=\"x]]y\"), a clean deeply nested table, and an uppercase [[/HCELL]] closer.",
         why="The reference's ((?R)|.)*? tries every successful nested parse in backtracking order; the fourteen witness frames fixed one '\"][' shape and the 185k fuzz compared the mirror to the reference, but these live-serving neighbors (quoted bracket in the head, clean two-level nesting, uppercase header closer) were not captured live.",
         confirm="Live's <table> bytes differ from the reference's at these heads, nestings or closers.",
         clear="Live serves the same <table> bytes as the reference on all three shapes.",
         cases=["s4a-t1a", "s4a-t1b", "s4a-t1c"]),
    dict(id="S4A-P1", family="Prefilter (parse-side first rule)",
         construct="Whitespace-only lines made of NBSP, form feed, vertical tab, and a run of space-only lines: a/NBSP/b, a/FF/b, a/VT/b, a/space/space/b.",
         why="Prefilter strips whitespace-only lines with /^\\s+$/m and compresses (\\n[ ]*){3,} to two newlines; PCRE \\s includes form feed and vertical tab but not NBSP. Live's save filter may normalize or reject these bytes, and no frozen capture isolates the rule on exotic whitespace lines.",
         confirm="Live's <p> structure (paragraph split or preserved line) differs from the reference's render.",
         clear="Live serves the same structure as the reference; if the saved source drops a control byte the case is UNTESTABLE rather than a clearance.",
         cases=["s4a-p1a", "s4a-p1b", "s4a-p1c", "s4a-p1d"]),
]

CASES = [
    ("s4a-l1a", "[[ul]]\n[[li]]a\n[[OL]]\n[[li]]b[[/li]]\n[[/ol]]\n[[/li]]\n[[/ul]]"),
    ("s4a-l1b", "[[UL]]\n[[ol]]\n[[li]]a[[/li]]\n[[/ol]]\n[[/ul]]"),
    ("s4a-l2a", "[[ol]]\n[[li]]a[[/li]]\n[[/UL]]"),
    ("s4a-l2b", "[[ul]]\n[[li]]a[[/li]]\n[[/OL]]trailing"),
    ("s4a-l3a", "[[UL style=\"color:red\" id=\"x\"]]\n[[LI]]A[[/LI]]\n[[/uL]]"),
    ("s4a-l3b", "[[OL data-x=\"1\"]]\n[[li]]a[[/li]]\n[[/OL]]AFTER"),
    ("s4a-l4a", "[[OL]]\nplain body\n[[/OL]]\n\nAFTER"),
    ("s4a-l4b", "[[Ul]]\nbody\n[[/uL]]\nAFTER"),
    ("s4a-l5a", "[[ul]]\n[[li CLASS=\"c\" class=\"d\" ID=\"x\" id=\"y\" data-FOO=\"1\" data-foo=\"2\"]]A[[/li]]\n[[/ul]]"),
    ("s4a-l5b", "[[ul]]\n[[li DATA-FOO=\"1\" data-Foo=\"2\"]]A[[/li]]\n[[/ul]]"),
    ("s4a-r1a", ": term : @@@@"),
    ("s4a-r1b", ": term : def@@@@"),
    ("s4a-r1c", ": @@@@ : @@@@"),
    ("s4a-r2a", ": a@@@@b : def"),
    ("s4a-r2b", ": @@@@@@@@ : def"),
    ("s4a-r3a", "A @@@@\nB"),
    ("s4a-r3b", "A@@@@\n@@@@B"),
    ("s4a-r4a", "##red| @@@@ hi ##"),
    ("s4a-r4b", "x##red| hi @@@@ ##y"),
    ("s4a-m1a", "[[module CSS]]\n[[module unknown]]\nbody\n[[/module]]\n[[/module]]"),
    ("s4a-m1b", "[[module css]]\n[[MODULE unknown]]\nbody\n[[/MODULE]]\n[[/module]]"),
    ("s4a-m2a", "[[module css]]\nbody\n[[/module]]trailing"),
    ("s4a-m2b", "[[module654 css]]\n[[module foo]]\nbody\n[[/module]]\n[[/module]]"),
    ("s4a-t1a", "[[table a=\"x]]y\"]][[row]][[cell]]A[[/cell]][[/row]][[/table]]"),
    ("s4a-t1b", "[[table]][[row]][[cell]][[table]][[row]][[cell]]inner[[/cell]][[/row]][[/table]][[/cell]][[/row]][[/table]]"),
    ("s4a-t1c", "[[table]][[row]][[cell]]x[[/HCELL]][[/row]][[/table]]"),
    ("s4a-p1a", "a\n\u00a0\nb"),
    ("s4a-p1b", "a\n\f\nb"),
    ("s4a-p1c", "a\n\v\nb"),
    ("s4a-p1d", "a\n \n \nb"),
]

case_ids = [c[0] for c in CASES]
assert len(case_ids) == len(set(case_ids))
for s in SUSPICIONS:
    for cid in s["cases"]:
        assert cid in case_ids, (s["id"], cid)
assert set(case_ids) == {cid for s in SUSPICIONS for cid in s["cases"]}

with open(os.path.join(OUT, "cases.jsonl"), "w", encoding="utf-8") as f:
    for cid, src in CASES:
        f.write(json.dumps({"id": cid, "source": src}, ensure_ascii=False) + "\n")

with open(os.path.join(OUT, "LEDGER-PREPROBE.md"), "w", encoding="utf-8") as f:
    f.write("# LEDGER-PREPROBE — SUSPECT4-A, written before any live probe (2026-11-22)\n\n")
    f.write("Method: the standing method of the programme. Live Wikidot behavior is definitional; every entry below was written before the create/capture run. Evidence order is ftml corpus and integration pins, then frozen parity captures, then fresh live sandbox probes fetched once and cached. No ftml file was edited, no cargo was run, and the reference harness was used only locally to understand the code paths. The sources in cases.jsonl are generated by this script from the same table as this ledger, so the ledger's construct text and the probed source cannot drift. Live bytes are compared with the reference after masking the already-owned Stage 2 frame surface (inter-tag newlines, trailing paragraph newlines and the saved-page wrapper); a difference that survives that mask is a divergence.\n\n")
    for s in SUSPICIONS:
        f.write("## {id} — {family}\n\n".format(**s))
        f.write("Construct: {construct}\n\n".format(**s))
        f.write("Why it looks wrong: {why}\n\n".format(**s))
        f.write("Confirm byte: {confirm}\n\n".format(**s))
        f.write("Clear byte: {clear}\n\n".format(**s))
        f.write("Probe sources: {cases}\n\n".format(cases=", ".join(s["cases"])))
    f.write("Probe prefix: muse-probe-suspect4a- on sandbox-for-codex. All pages are kept in place.\n")

print("wrote", len(CASES), "cases and", len(SUSPICIONS), "suspicions")
