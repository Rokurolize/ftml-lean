"""Seeded within-class fuzz for the heading family.

Token half: one Heading, Toc or Anchor token, reference token() versus
lean-ftml-conformance-r48 state. A case passes when the bytes match and
the PHP class list equals the generator's list.

Source half: a page through the reference transform versus
lean-ftml-conformance-r48 --e2e-r48. A case passes when the HTML matches
and the reference tokens satisfy the class predicate.

Regex half: tocPNull, the match-array arm a full pipeline does not reach
once Prefilter has supplied a newline. The reference preg_match must
leave group 1 unset. The Lean side of that arm is cov_toc_null.
"""

from __future__ import annotations

import json
import random
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from classify import ALL_CLASSES, render_classes  # noqa: E402

ROOT = Path(__file__).resolve().parents[1]
HERE = Path(__file__).resolve().parent
PHP = HERE / "driver.php"
LEAN = ROOT / "lean-ftml" / ".lake" / "build" / "bin" / "lean-ftml-conformance-r48"
SEEDS = (20261122, 7)
PER = 6


def as_text(value) -> str:
    if isinstance(value, str):
        return value
    if isinstance(value, dict) and "$bytes" in value:
        return bytes(value["$bytes"]).decode("latin1")
    return json.dumps(value, ensure_ascii=False)


def nul_width_only(php: str, lean: str) -> bool:
    """True when the strings differ only by a 2-NUL run versus a 4-NUL run."""
    if php == lean:
        return False
    return php.replace("\x00\x00", "\x00\x00\x00\x00") == lean and php.count("\x00") * 2 == lean.count("\x00")


def heads(tokens, typ=None):
    out = [t for t in tokens if t["rule"] == "Heading"]
    if typ is None:
        return out
    return [t for t in out if t["type"] == typ]


def tocs(tokens, typ=None):
    out = [t for t in tokens if t["rule"] == "Toc"]
    if typ is None:
        return out
    return [t for t in out if t["type"] == typ]


def anchors(tokens, typ=None):
    out = [t for t in tokens if t["rule"] == "Anchor"]
    if typ is None:
        return out
    return [t for t in out if (t["type"] or "named") == typ]


def starts(tokens):
    return anchors(tokens, "start")


def pred_source(target: str, tokens, html: str, source: str) -> bool:
    if target == "hdMiss":
        return not heads(tokens)
    if target.startswith("hdL"):
        level = int(target[-1])
        return any(int(t["level"]) == level for t in heads(tokens, "start") + heads(tokens, "start-notoc"))
    if target == "hdToc":
        return bool(heads(tokens, "start"))
    if target == "hdNotoc":
        return bool(heads(tokens, "start-notoc"))
    if target == "tocMiss":
        return not tocs(tokens)
    if target == "tocPEmpty":
        return any(t["align"] == "" for t in tocs(tokens, "list_start"))
    if target == "tocPFLeft":
        return any(t["align"] == "f<" for t in tocs(tokens, "list_start"))
    if target == "tocPFRight":
        return any(t["align"] == "f>" for t in tocs(tokens, "list_start"))
    if target == "tocKeep":
        return bool(tocs(tokens, "item_start"))
    if target == "tocSkip":
        return bool(heads(tokens, "start-notoc")) and not tocs(tokens, "item_start")
    if target == "anPlaceholder":
        return not anchors(tokens) and "[[" in html and "span" in html
    if target == "anBlank":
        return not anchors(tokens) and "[[#" in html
    if target == "tocSentinel":
        # The heading keeps its inline tags; the TOC entry does not.
        return html.count("<strong>") == 1 and "toc-list" in html
    if target == "anValid":
        return bool(anchors(tokens, "named"))
    if target == "anLiteral":
        return bool(anchors(tokens, "literal"))
    if target == "anInvalid":
        return bool(anchors(tokens, "invalid_named"))
    if target == "anNested":
        return len(starts(tokens)) >= 2 and "\n\n" not in source.split("]]", 1)[-1]
    if target == "anPara":
        return len(starts(tokens)) >= 2 and "\n\n" in source
    if target == "anScored":
        return "[[a_" in source and len(starts(tokens)) == 1
    if target == "anPlain":
        return source.startswith("[[a ") and len(starts(tokens)) == 1
    if target == "anLead":
        return " <a " in html
    if target == "anTrail":
        return "</a> z" in html or "</a> z" in html.replace("\n", "")
    if target == "anNestedClose":
        return len(starts(tokens)) >= 2 and "[[/a]]" not in html
    if target == "anJoinStrip":
        return "PRE<a" in html
    if target == "anHrefAbsent":
        return any((t.get("attrs") or {}).get("href") == "" for t in starts(tokens))
    if target == "anHrefVerb":
        return any(str((t.get("attrs") or {}).get("href", "")).startswith("https://") for t in starts(tokens))
    if target == "anHrefDelim":
        return any((t.get("attrs") or {}).get("href") == "" and "target" not in (t.get("attrs") or {}) for t in starts(tokens)) and "@@" in source
    if target == "anHrefSlug":
        return any((t.get("attrs") or {}).get("href") == "some-page" for t in starts(tokens))
    if target == "anStarTarget":
        return any((t.get("attrs") or {}).get("target") == "_blank" for t in starts(tokens))
    if target == "anIdDrop":
        return any("id" not in (t.get("attrs") or {}) and "id=" in source for t in starts(tokens))
    if target == "anIdBare":
        return any((t.get("attrs") or {}).get("id") == "u-" for t in starts(tokens))
    if target == "anIdKept":
        return any(str((t.get("attrs") or {}).get("id", "")).startswith("u-foo") for t in starts(tokens))
    if target == "anIdSpace":
        return any(str((t.get("attrs") or {}).get("id", "")).startswith("u- ") for t in starts(tokens))
    if target == "anIdPrefix":
        return any((t.get("attrs") or {}).get("id") == "u-foo" and 'id="foo"' in source for t in starts(tokens))
    if target == "anFixedDrop":
        return any("class" not in (t.get("attrs") or {}) and 'class=""' in source for t in starts(tokens))
    if target == "anFixedDelim":
        return any((t.get("attrs") or {}).get("class") == "" for t in starts(tokens))
    if target == "anFixedKeep":
        return any((t.get("attrs") or {}).get("class") == "c" for t in starts(tokens))
    if target == "anDataDelim":
        return any((t.get("attrs") or {}).get("data-x") == "" for t in starts(tokens))
    if target == "anDataKeep":
        return any((t.get("attrs") or {}).get("data-x") == "d" for t in starts(tokens))
    if target == "anOtherDrop":
        return any("onclick" not in (t.get("attrs") or {}) and "onclick" in source for t in starts(tokens))
    return False


def cases(seed: int) -> list[dict]:
    rng = random.Random(seed)
    words = ["A", "Beta", "O'Brien", "a&b", "n0", "Zz", "cafe", "q"]
    out = []

    def add(row):
        out.append(row)

    for i in range(PER):
        word = words[i % len(words)] + str(rng.randrange(10))
        # Heading levels and toc flag. Text varies; the class does not.
        for level, marks in ((1, "+"), (2, "++"), (3, "+++"), (4, "++++"), (5, "+++++"), (6, "++++++")):
            add({"id": f"hd-l{level}-{i}", "kind": "source", "target": f"hdL{level}",
                 "source": f"{marks} {word}"})
        add({"id": f"hd-toc-{i}", "kind": "source", "target": "hdToc", "source": f"+ {word}"})
        add({"id": f"hd-notoc-{i}", "kind": "source", "target": "hdNotoc", "source": f"+* {word}"})
        add({"id": f"hd-miss-nospace-{i}", "kind": "source", "target": "hdMiss", "source": f"+{word}"})
        add({"id": f"hd-miss-seven-{i}", "kind": "source", "target": "hdMiss", "source": f"+++++++ {word}"})
        add({"id": f"toc-miss-{i}", "kind": "source", "target": "tocMiss", "source": f"plain {word}"})
        add({"id": f"toc-empty-{i}", "kind": "source", "target": "tocPEmpty", "source": "[[toc]]\n"})
        add({"id": f"toc-fleft-{i}", "kind": "source", "target": "tocPFLeft", "source": f"[[f<toc]]\n+ {word}"})
        add({"id": f"toc-fright-{i}", "kind": "source", "target": "tocPFRight", "source": f"[[f>toc]]\n+ {word}"})
        add({"id": f"toc-keep-{i}", "kind": "source", "target": "tocKeep", "source": f"+ {word}\n[[toc]]"})
        add({"id": f"toc-skip-{i}", "kind": "source", "target": "tocSkip", "source": f"+* {word}\n[[toc]]"})
        add({"id": f"toc-null-{i}", "kind": "regex", "target": "tocPNull",
             "source": "[[toc]]" + ("" if i % 2 == 0 else "x")})
        # Anchor name.
        add({"id": f"an-ph-{i}", "kind": "source", "target": "anPlaceholder",
             "source": f"[[# @@{word}@@]]"})
        add({"id": f"an-blank-{i}", "kind": "source", "target": "anBlank", "source": "[[# ]]"})
        add({"id": f"an-valid-{i}", "kind": "source", "target": "anValid",
             "source": f"[[# {word.replace('&', '').replace(chr(39), '')}]]"})
        add({"id": f"an-lit-{i}", "kind": "source", "target": "anLiteral", "source": "[[# a b]]]"})
        add({"id": f"an-inv-{i}", "kind": "source", "target": "anInvalid", "source": f"[[# a {word}]]"})
        # Anchor elements.
        add({"id": f"an-plain-{i}", "kind": "source", "target": "anPlain",
             "source": f'[[a href="/p{i}"]]{word}[[/a]]'})
        add({"id": f"an-nested-{i}", "kind": "source", "target": "anNested",
             "source": f'[[a href="/{i}"]]x[[a href="/{i}b"]]{word}[[/a]]z[[/a]]'})
        add({"id": f"an-para-{i}", "kind": "source", "target": "anPara",
             "source": f'[[a href="/p{i}"]]{word}\n\nmore[[/a]]'})
        add({"id": f"an-scored-{i}", "kind": "source", "target": "anScored",
             "source": f'[[a_ href="/p{i}"]]{word}[[/a]]'})
        add({"id": f"an-lead-{i}", "kind": "source", "target": "anLead",
             "source": f'x[[a href="/p{i}"]] {word}[[/a]]z'})
        add({"id": f"an-trail-{i}", "kind": "source", "target": "anTrail",
             "source": f'[[a href="/p{i}"]]{word} [[/a]]z'})
        add({"id": f"an-close-{i}", "kind": "source", "target": "anNestedClose",
             "source": f'[[a href="/{i}"]]x[[a href="/{i}b"]]{word}[[/a]]z[[/a]]'})
        add({"id": f"an-join-{i}", "kind": "source", "target": "anJoinStrip",
             "source": f'PRE\n[[a_ href="/p{i}"]]{word}[[/a]]\nPOST'})
        add({"id": f"an-href0-{i}", "kind": "source", "target": "anHrefAbsent",
             "source": f"[[a]]{word}[[/a]]"})
        add({"id": f"an-hrefv-{i}", "kind": "source", "target": "anHrefVerb",
             "source": f'[[a href="https://example.com/{i}"]]{word}[[/a]]'})
        add({"id": f"an-hrefd-{i}", "kind": "source", "target": "anHrefDelim",
             "source": f'[[a href="https://example.com/@@{i}@@"]]{word}[[/a]]'})
        add({"id": f"an-hrefs-{i}", "kind": "source", "target": "anHrefSlug",
             "source": f'[[a href="Some Page"]]{word}[[/a]]'})
        add({"id": f"an-star-{i}", "kind": "source", "target": "anStarTarget",
             "source": f'[[a href="*https://example.com/{i}"]]{word}[[/a]]'})
        add({"id": f"an-iddrop-{i}", "kind": "source", "target": "anIdDrop",
             "source": f'[[a href="/x" id=""]]{word}[[/a]]'})
        add({"id": f"an-idbare-{i}", "kind": "source", "target": "anIdBare",
             "source": f'[[a href="/x" id="   "]]{word}[[/a]]'})
        add({"id": f"an-idkept-{i}", "kind": "source", "target": "anIdKept",
             "source": f'[[a href="/x" id="u-foo{i}"]]{word}[[/a]]'})
        add({"id": f"an-idspace-{i}", "kind": "source", "target": "anIdSpace",
             "source": f'[[a href="/x" id=" foo"]]{word}[[/a]]'})
        add({"id": f"an-idpre-{i}", "kind": "source", "target": "anIdPrefix",
             "source": f'[[a href="/x" id="foo"]]{word}[[/a]]'})
        add({"id": f"an-fixdrop-{i}", "kind": "source", "target": "anFixedDrop",
             "source": f'[[a href="/x" class=""]]{word}[[/a]]'})
        add({"id": f"an-fixdelim-{i}", "kind": "source", "target": "anFixedDelim",
             "source": f'[[a href="/x" class="@@a@@"]]{word}[[/a]]'})
        add({"id": f"an-fixkeep-{i}", "kind": "source", "target": "anFixedKeep",
             "source": f'[[a href="/x" class="c"]]{word}[[/a]]'})
        add({"id": f"an-datad-{i}", "kind": "source", "target": "anDataDelim",
             "source": f'[[a href="/x" data-x="@@a@@"]]{word}[[/a]]'})
        add({"id": f"an-datak-{i}", "kind": "source", "target": "anDataKeep",
             "source": f'[[a href="/x" data-x="d"]]{word}[[/a]]'})
        add({"id": f"an-other-{i}", "kind": "source", "target": "anOtherDrop",
             "source": f'[[a href="/x" onclick="o"]]{word}[[/a]]'})

        # Render tokens. Irrelevant text and level vary inside the class.
        level = (i % 6) + 1
        add({"id": f"r-hd-start-{i}", "kind": "token", "rule": "Heading", "target": "hdRStart",
             "opts": {"type": "start", "level": level, "text": word}})
        add({"id": f"r-hd-id-{i}", "kind": "token", "rule": "Heading", "target": "hdRId",
             "opts": {"type": "start", "level": level, "id": f"toc{i}", "text": word}})
        add({"id": f"r-hd-click-{i}", "kind": "token", "rule": "Heading", "target": "hdROnclick",
             "opts": {"type": "start", "level": level, "id": f"toc{i}", "collapse": "x", "text": word}})
        add({"id": f"r-hd-notoc-{i}", "kind": "token", "rule": "Heading", "target": "hdRNotoc",
             "opts": {"type": "start-notoc", "level": level, "text": word}})
        add({"id": f"r-hd-end-{i}", "kind": "token", "rule": "Heading", "target": "hdREnd",
             "opts": {"type": "end", "level": level}})
        add({"id": f"r-hd-minus-{i}", "kind": "token", "rule": "Heading", "target": "hdREndMinus",
             "opts": {"type": "end", "level": level, "id": f"toc{i}", "collapse": False}})
        add({"id": f"r-hd-plus-{i}", "kind": "token", "rule": "Heading", "target": "hdREndPlus",
             "opts": {"type": "end", "level": level, "id": f"toc{i}", "collapse": "x"}})
        add({"id": f"r-hd-content-{i}", "kind": "token", "rule": "Heading", "target": "hdRContent",
             "opts": {"type": "startContent", "level": level, "id": f"toc{i}"}})
        add({"id": f"r-hd-cend-{i}", "kind": "token", "rule": "Heading", "target": "hdRContentEnd",
             "opts": {"type": "endContent", "id": f"toc{i}"}})
        add({"id": f"r-hd-fall-{i}", "kind": "token", "rule": "Heading", "target": "hdRFall",
             "opts": {"type": "other", "level": level}})
        add({"id": f"r-hd-script-{i}", "kind": "token", "rule": "Heading", "target": "hdRScript",
             "opts": {"type": "startContent", "id": f"toc{i}", "collapse": False}})
        add({"id": f"r-hd-hidden-{i}", "kind": "token", "rule": "Heading", "target": "hdRHidden",
             "opts": {"type": "startContent", "id": f"toc{i}", "collapse": True}})
        add({"id": f"r-toc-start-{i}", "kind": "token", "rule": "Toc", "target": "tocRStart",
             "opts": {"type": "list_start", "level": 0, "align": ""}})
        add({"id": f"r-toc-table-{i}", "kind": "token", "rule": "Toc", "target": "tocRTable",
             "opts": {"type": "list_start", "level": 0, "align": None}})
        add({"id": f"r-toc-fl-{i}", "kind": "token", "rule": "Toc", "target": "tocRFLeft",
             "opts": {"type": "list_start", "level": 0, "align": "f<", "attr": {"title": word}}})
        add({"id": f"r-toc-fr-{i}", "kind": "token", "rule": "Toc", "target": "tocRFRight",
             "opts": {"type": "list_start", "level": 0, "align": "f>"}})
        add({"id": f"r-toc-other-{i}", "kind": "token", "rule": "Toc", "target": "tocROther",
             "opts": {"type": "list_start", "level": 0, "align": "center"}})
        add({"id": f"r-toc-tdef-{i}", "kind": "token", "rule": "Toc", "target": "tocRTitleDefault",
             "opts": {"type": "list_start", "level": 0, "align": "", "attr": {"class": "c"}}})
        add({"id": f"r-toc-tauth-{i}", "kind": "token", "rule": "Toc", "target": "tocRTitleAuthored",
             "opts": {"type": "list_start", "level": 0, "align": "", "attr": {"title": word}}})
        add({"id": f"r-toc-end-{i}", "kind": "token", "rule": "Toc", "target": "tocREnd",
             "opts": {"type": "list_end", "level": 0, "align": ""}})
        add({"id": f"r-toc-etable-{i}", "kind": "token", "rule": "Toc", "target": "tocREndTable",
             "opts": {"type": "list_end", "level": 0, "align": None}})
        add({"id": f"r-toc-ebare-{i}", "kind": "token", "rule": "Toc", "target": "tocREndBare",
             "opts": {"type": "list_end", "level": 0, "align": "f<"}})
        add({"id": f"r-toc-item-{i}", "kind": "token", "rule": "Toc", "target": "tocRItem",
             "opts": {"type": "item_start", "id": f"toc{i}", "level": level, "count": i}})
        add({"id": f"r-toc-iend-{i}", "kind": "token", "rule": "Toc", "target": "tocRItemEnd",
             "opts": {"type": "item_end", "level": level}})
        add({"id": f"r-toc-sent-{i}", "kind": "token", "rule": "Toc", "target": "tocSentinel",
             "opts": {"type": "item_start", "id": f"toc{i}", "level": level, "count": 0}})
        add({"id": f"r-toc-fall-{i}", "kind": "token", "rule": "Toc", "target": "tocRFall",
             "opts": {"type": "nope"}})
        add({"id": f"r-an-named-{i}", "kind": "token", "rule": "Anchor", "target": "anRNamed",
             "opts": {"name": word}})
        add({"id": f"r-an-given-{i}", "kind": "token", "rule": "Anchor", "target": "anRStartGiven",
             "opts": {"type": "start", "attrs": {"href": f"/{word}", "class": "c"}}})
        add({"id": f"r-an-def-{i}", "kind": "token", "rule": "Anchor", "target": "anRStartDefault",
             "opts": {"type": "start", "attrs": "nope"}})
        add({"id": f"r-an-end-{i}", "kind": "token", "rule": "Anchor", "target": "anREnd",
             "opts": {"type": "end"}})
        add({"id": f"r-an-inv-{i}", "kind": "token", "rule": "Anchor", "target": "anRInvalid",
             "opts": {"type": "invalid_named", "lead": " ", "text": word, "trail": ""}})
        add({"id": f"r-an-lit-{i}", "kind": "token", "rule": "Anchor", "target": "anRLiteral",
             "opts": {"type": "literal", "text": f"[[# {word}]]"}})
        add({"id": f"r-an-fall-{i}", "kind": "token", "rule": "Anchor", "target": "anRFallName",
             "opts": {"type": "other", "name": word}})
        # Page post-pass: inline tags in the heading are stripped in the entry.
        add({"id": f"sent-page-{i}", "kind": "source", "target": "tocSentinel",
             "source": f"+ **{word}**\n[[toc]]"})
    return out


def run_php(mode: str, rows: list[dict]) -> list[dict]:
    payload = "".join(json.dumps(r, ensure_ascii=False) + "\n" for r in rows)
    proc = subprocess.run(["php", str(PHP), mode], input=payload, text=True, capture_output=True)
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(f"php {mode} exited {proc.returncode}")
    return [json.loads(line) for line in proc.stdout.splitlines() if line.strip()]


def lean_state(rows: list[dict]) -> list[dict]:
    payload = []
    for r in rows:
        if r["kind"] == "pair":
            tokens = [
                ["Toc", {"type": "item_start", "id": r["ident"], "level": r["level"], "count": 0}],
                ["Toc", {"type": "item_end", "level": r["level"]}],
            ]
            segments = [{"t": ""}, {"k": 0}, {"t": r["inner"]}, {"k": 1}, {"t": ""}]
        else:
            tokens = [[r["rule"], r["opts"]]]
            segments = [{"k": 0}]
        payload.append(json.dumps({
            "id": r["id"], "segments": segments, "tokens": tokens,
            "footnotes": [], "bibitems": [], "bibitemIds": [],
            "equations": [], "mathId": None, "scoredAnchors": [],
        }, ensure_ascii=False))
    proc = subprocess.run([str(LEAN), "state"], input="\n".join(payload) + "\n",
                          text=True, capture_output=True)
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(f"lean state exited {proc.returncode}")
    return [json.loads(line) for line in proc.stdout.splitlines() if line.strip()]


def lean_e2e(rows: list[dict]) -> list[dict]:
    payload = "".join(json.dumps({"id": r["id"], "source": r["source"]}, ensure_ascii=False) + "\n" for r in rows)
    proc = subprocess.run([str(LEAN), "--e2e-r48"], input=payload, text=True, capture_output=True)
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(f"lean e2e exited {proc.returncode}")
    return [json.loads(line) for line in proc.stdout.splitlines() if line.strip()]


def php_pair(rows: list[dict]) -> dict[str, str]:
    """Reference item_start + inner + item_end, then the NUL-pair strip_tags pass."""
    token_rows = []
    for r in rows:
        token_rows.append({"id": r["id"] + "-s", "rule": "Toc",
                           "opts": {"type": "item_start", "id": r["ident"], "level": r["level"], "count": 0}})
        token_rows.append({"id": r["id"] + "-e", "rule": "Toc",
                           "opts": {"type": "item_end", "level": r["level"]}})
    rendered = {row["id"]: as_text(row.get("output", "")) for row in run_php("token", token_rows)}
    out = {}
    for r in rows:
        raw = rendered[r["id"] + "-s"] + r["inner"] + rendered[r["id"] + "-e"]
        # The reference post-pass. Two NUL bytes, not four.
        import re
        out[r["id"]] = re.sub("\x00\x00(.*?)\x00\x00", lambda m: re.sub("<[^>]*>", "", m.group(1)), raw, flags=re.S)
    return out


def main() -> None:
    if not LEAN.exists():
        raise SystemExit(f"missing {LEAN}")
    combined = {"seeds": [], "classes": ALL_CLASSES, "sentinel_behavior": []}
    for seed in SEEDS:
        rows = cases(seed)
        tokens = [r for r in rows if r["kind"] == "token"]
        sources = [r for r in rows if r["kind"] == "source"]
        regexes = [r for r in rows if r["kind"] == "regex"]
        pairs = [r for r in rows if r["kind"] == "pair"]
        for r in tokens:
            expect = render_classes(r["rule"], r["opts"])
            r["expect"] = expect
            if r["target"] not in expect:
                raise SystemExit(f"{r['id']} target {r['target']} not in {expect}")
        (HERE / f"fuzz-cases-{seed}.jsonl").write_text(
            "".join(json.dumps(r, ensure_ascii=False) + "\n" for r in rows))
        php_tok = {r["id"]: r for r in run_php("token", tokens)}
        lean_tok = {r["id"]: r for r in lean_state(tokens + pairs)}
        php_src = {r["id"]: r for r in run_php("source", sources)}
        lean_src = {r["id"]: r for r in lean_e2e(sources)}
        php_re = {r["id"]: r for r in run_php("regex", regexes)}
        php_pairs = php_pair(pairs)
        (HERE / f"php-{seed}.jsonl").write_text("".join(
            json.dumps(r, ensure_ascii=False) + "\n" for r in list(php_tok.values()) + list(php_src.values()) + list(php_re.values())))
        (HERE / f"lean-{seed}.jsonl").write_text("".join(
            json.dumps(r, ensure_ascii=False) + "\n" for r in lean_tok.values()) + "".join(
            json.dumps(r, ensure_ascii=False) + "\n" for r in lean_src.values()))
        tally = defaultdict(lambda: {"cases": 0, "fail": 0, "uncomparable": 0, "class_mismatch": 0})
        disag = []
        width = 0
        for r in tokens:
            tally[r["target"]]["cases"] += 1
            php = php_tok[r["id"]]
            lean = lean_tok[r["id"]]
            if "error" in php or lean.get("status") not in (None, "ok"):
                tally[r["target"]]["uncomparable"] += 1
                disag.append({"id": r["id"], "why": "uncomparable", "php": php, "lean": lean})
                continue
            if php.get("phpClass") != r["expect"]:
                tally[r["target"]]["class_mismatch"] += 1
                tally[r["target"]]["fail"] += 1
                disag.append({"id": r["id"], "why": "class", "phpClass": php.get("phpClass"), "expect": r["expect"]})
                continue
            pb, lb = as_text(php.get("output")), as_text(lean.get("output"))
            if pb != lb:
                if nul_width_only(pb, lb):
                    width += 1
                    disag.append({"id": r["id"], "why": "sentinel-width", "target": r["target"]})
                else:
                    disag.append({"id": r["id"], "why": "bytes", "target": r["target"],
                                  "php": pb[:240], "lean": lb[:240]})
                tally[r["target"]]["fail"] += 1
        for r in sources:
            tally[r["target"]]["cases"] += 1
            php = php_src[r["id"]]
            lean = lean_src[r["id"]]
            if "error" in php or lean.get("status") not in (None, "ok"):
                tally[r["target"]]["uncomparable"] += 1
                disag.append({"id": r["id"], "why": "uncomparable-source"})
                continue
            ok_pred = pred_source(r["target"], php.get("tokens") or [], as_text(php.get("output")), r["source"])
            if not ok_pred:
                tally[r["target"]]["class_mismatch"] += 1
                tally[r["target"]]["fail"] += 1
                disag.append({"id": r["id"], "why": "predicate", "target": r["target"],
                              "tokens": php.get("tokens"), "html": as_text(php.get("output"))[:300]})
                continue
            pb, lb = as_text(php.get("output")), as_text(lean.get("output"))
            if pb != lb:
                tally[r["target"]]["fail"] += 1
                disag.append({"id": r["id"], "why": "bytes", "target": r["target"],
                              "php": pb[:300], "lean": lb[:300]})
        for r in regexes:
            tally[r["target"]]["cases"] += 1
            got = php_re[r["id"]]
            # Group 1 absent, and the match succeeded: the null-align arm.
            if not (got.get("matched") and not got.get("g1")):
                tally[r["target"]]["fail"] += 1
                disag.append({"id": r["id"], "why": "regex", "got": got})
        beh_pass = 0
        for r in pairs:
            lean = lean_tok[r["id"]]
            lb = as_text(lean.get("output"))
            pb = php_pairs[r["id"]]
            ok = lb == pb and lean.get("status") in (None, "ok")
            beh_pass += int(ok)
            if not ok:
                disag.append({"id": r["id"], "why": "sentinel-behavior", "php": pb[:240], "lean": lb[:240]})
        summary = {
            "seed": seed,
            "cases": len(rows),
            "sentinel_width_fails": width,
            "sentinel_behavior_pass": beh_pass,
            "sentinel_behavior_cases": len(pairs),
            "tally": dict(tally),
            "disagreements": len(disag),
        }
        (HERE / f"fuzz-summary-{seed}.json").write_text(json.dumps(summary, indent=1) + "\n")
        (HERE / f"disagreements-{seed}.json").write_text(json.dumps(disag, indent=1, ensure_ascii=False) + "\n")
        combined["seeds"].append(summary)
        combined["sentinel_behavior"].append({"seed": seed, "pass": beh_pass, "cases": len(pairs)})
        print(f"seed {seed}: cases={len(rows)} disag={len(disag)} width={width} behavior={beh_pass}/{len(pairs)}", flush=True)
    (HERE / "fuzz-summary.json").write_text(json.dumps(combined, indent=1) + "\n")


if __name__ == "__main__":
    main()
