"""Seeded within-class fuzz of the NOTES renderers.

Source half: R3.6 pipeline, reference driver.php e2e versus
lean-ftml-conformance-r41 --e2e-r36. A class passes when every source
whose parsed tokens include it renders byte-identically.

Token half: one NOTES token and the render state, reference token()
versus lean-ftml-conformance-r41 state. This is the grain of a class,
including the fallthrough arms and the empty-footnote Footnoteblock
arm, which the parser never places in a token stream.
"""

from __future__ import annotations

import json
import random
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
HERE = Path(__file__).resolve().parent
PHP = HERE / "driver.php"
LEAN = ROOT / "lean-ftml" / ".lake" / "build" / "bin" / "lean-ftml-conformance-r41"
SEED = 20261122

TITLES = ["Notes", "O'Brien", "A & B", "x<y>", "n0", "Footnotes", "Bibliography", "é",
          "Q", "title", "n1", "a b", "cd", "end", "nl", "0"]
BODIES = ["a", "hello", "x y", "O'Brien", "a&b", "n0", "zz", "body",
          "p", "q", "rr", "s t", "u", "v", "w", "xy"]
LABELS = ["a", "b1", "abc", "Z", "a0b", "q", "ref", "n9",
          "c", "d2", "ee", "f", "g0", "h", "i", "j"]


def sources(rng: random.Random) -> list[dict]:
    cases = []

    def add(cid, src):
        cases.append({"id": cid, "source": src, "kind": "source"})

    for i, body in enumerate(BODIES):
        add(f"src-fn-{i}", f"See [[{'footnote'}]]{body}[[/footnote]] end.")
        add(f"src-fn-empty-{i}", "[[footnote]]   [[/footnote]]\n[[footnoteblock]]")
        add(f"src-fn-para-{i}", f"[[footnote]]{body}\n\nmore[[/footnote]]\n[[footnoteblock]]")
        add(f"src-fnb-def-{i}", f"[[footnote]]{body}[[/footnote]]\n[[footnoteblock]]")
        add(f"src-fnb-blank-{i}", f"[[footnote]]{body}[[/footnote]]\n[[footnoteblock title=\"\"]]")
        title = TITLES[i]
        add(f"src-fnb-title-{i}",
            f"[[footnote]]{body}[[/footnote]]\n[[footnoteblock title=\"{title}\"]]")
        lab = LABELS[i]
        add(f"src-bibi-space-{i}",
            f"[[bibliography]]\n: {lab} : {body}\n[[/bibliography]]")
        add(f"src-bibi-tight-{i}",
            f"[[bibliography]]\n: {lab} :\n[[/bibliography]]")
        add(f"src-bib-nl-{i}",
            f"[[bibliography]]\nresidual {body}\n[[/bibliography]]")
        add(f"src-bib-def-{i}",
            f"[[bibliography]]\n: {lab} : {body}\n[[/bibliography]]")
        add(f"src-bib-blank-{i}",
            f"[[bibliography title=\"\"]]\n: {lab} : {body}\n[[/bibliography]]")
        add(f"src-bib-title-{i}",
            f"[[bibliography title=\"{title}\"]]\n: {lab} : {body}\n[[/bibliography]]")
        add(f"src-bibc-miss-{i}", f"Before ((bibcite {lab})) after.")
        add(f"src-bibc-hit-{i}",
            f"((bibcite {lab}))\n[[bibliography]]\n: {lab} : {body}\n[[/bibliography]]")
        # two notes, so ids other than 1 are in the cite class
        add(f"src-fn-two-{i}",
            f"A[[footnote]]{body}[[/footnote]] B[[footnote]]{LABELS[i]}[[/footnote]]\n"
            f"[[footnoteblock title=\"{title}\"]]")
        # duplicate label: still the resolved class, last id
        add(f"src-bibc-dup-{i}",
            f"[[bibliography]]\n: {lab} : one\n: {lab} : two\n[[/bibliography]]\n"
            f"((bibcite {lab}))")
    # a few whitespace-only notes and an explicit empty block with no notes
    for i, ws in enumerate(["", " ", "\t", "  \n"]):
        add(f"src-fn-ws-{i}", f"[[footnote]]{ws}[[/footnote]]\n[[footnoteblock]]")
    add("src-fnb-nonotes", "[[footnoteblock]]\nNo notes.")
    add("src-fnb-nonotes-title", "[[footnoteblock title=\"Unused\"]]")
    # rng is part of the seed contract even though the grid above is exhaustive
    _ = rng.randrange(1)
    return cases


def synthetics() -> list[dict]:
    cases = []

    def add(cid, rule, opts, footnotes=None, bib_ids=None, expect=None):
        cases.append({
            "id": cid,
            "kind": "token",
            "rule": rule,
            "opts": opts,
            "footnotes": footnotes or [],
            "bibitemIds": bib_ids or [],
            "expect": expect,
        })

    for n in (0, 1, 2, 10):
        add(f"tok-fn-{n}", "Footnote", {"id": n, "label": "unused"}, expect="fnCite")
    add("tok-fni-para", "Footnoteitem", {"type": "parabreak"}, ["x"], "fniParabreak")
    add("tok-fni-end", "Footnoteitem", {"type": "end", "id": 1}, ["x"], "fniEnd")
    add("tok-fni-empty-blank", "Footnoteitem", {"type": "start", "id": 1}, [""], "fniStartEmpty")
    add("tok-fni-empty-oor", "Footnoteitem", {"type": "start", "id": 3}, ["x"], "fniStartEmpty")
    add("tok-fni-empty-zero", "Footnoteitem", {"type": "start", "id": 0}, ["x"], "fniStartEmpty")
    add("tok-fni-body", "Footnoteitem", {"type": "start", "id": 1}, ["hello"], "fniStartBody")
    add("tok-fni-body-second", "Footnoteitem", {"type": "start", "id": 2}, ["", "z"], "fniStartBody")
    add("tok-fni-fall-missing", "Footnoteitem", {}, ["x"], "fniFallthrough")
    add("tok-fni-fall-other", "Footnoteitem", {"type": "other"}, ["x"], "fniFallthrough")
    for typ in ("start", "end", "nope"):
        add(f"tok-fnb-empty-{typ}", "Footnoteblock",
            {"type": typ, "title": "T"}, [], f"fnbNoNotes")
    add("tok-fnb-def", "Footnoteblock", {"type": "start", "title": None}, ["x"], "fnbStartDefault")
    add("tok-fnb-def-missing", "Footnoteblock", {"type": "start"}, ["x"], "fnbStartDefault")
    add("tok-fnb-blank", "Footnoteblock", {"type": "start", "title": ""}, ["x"], "fnbStartBlank")
    for i, title in enumerate(TITLES):
        add(f"tok-fnb-auth-{i}", "Footnoteblock",
            {"type": "start", "title": title}, ["x"], "fnbStartTitled")
    add("tok-fnb-end", "Footnoteblock", {"type": "end"}, ["x"], "fnbEnd")
    add("tok-fnb-fall", "Footnoteblock", {"type": "nope"}, ["x"], "fnbFallthrough")
    add("tok-fnb-bool-false", "Footnoteblock",
        {"type": "start", "title": False}, ["x"], "fnbStartTitled")
    add("tok-fnb-bool-true", "Footnoteblock",
        {"type": "start", "title": True}, ["x"], "fnbStartTitled")
    add("tok-fnb-int0", "Footnoteblock",
        {"type": "start", "title": 0}, ["x"], "fnbStartTitled")
    for flag, name in (
        (None, "missing"), (False, "false"), (True, "true"),
        (0, "zero"), (1, "one"), ("", "emptystr"), ("0", "str0"), ("00", "str00"),
    ):
        opts = {"type": "start", "id": 1, "label": "a"}
        if name != "missing":
            opts["empty"] = flag
        # PHP empty() true -> space class. true/1/"00" are not empty.
        expect = "bibiStartTight" if name in ("true", "one", "str00") else "bibiStartSpace"
        add(f"tok-bibi-empty-{name}", "Bibitem", opts, expect=expect)
    add("tok-bibi-end", "Bibitem", {"type": "end"}, expect="bibiEnd")
    add("tok-bibi-fall", "Bibitem", {"type": "nope"}, expect="bibiFallthrough")
    add("tok-bib-nl", "Bibliography", {"type": "nl"}, expect="bibNl")
    add("tok-bib-def", "Bibliography", {"type": "start", "title": None}, expect="bibStartDefault")
    add("tok-bib-blank", "Bibliography", {"type": "start", "title": ""}, expect="bibStartBlank")
    for i, title in enumerate(TITLES):
        add(f"tok-bib-auth-{i}", "Bibliography",
            {"type": "start", "title": title}, expect="bibStartTitled")
    add("tok-bib-end", "Bibliography", {"type": "end"}, expect="bibEnd")
    add("tok-bib-fall", "Bibliography", {"type": "nope"}, expect="bibFallthrough")
    add("tok-bib-bool-false", "Bibliography",
        {"type": "start", "title": False}, expect="bibStartTitled")
    add("tok-bib-bool-true", "Bibliography",
        {"type": "start", "title": True}, expect="bibStartTitled")
    add("tok-bibc-miss", "Bibcite", {"label": "zz"}, expect="bibcMissing")
    add("tok-bibc-miss-angle", "Bibcite", {"label": "a<b"}, expect="bibcMissing")
    add("tok-bibc-hit", "Bibcite", {"label": "a"}, bib_ids=[["a", 2]], expect="bibcResolved")
    add("tok-bibc-hit0", "Bibcite", {"label": "a"}, bib_ids=[["a", 0]], expect="bibcResolved")
    return cases


def run_php(mode: str, rows: list[dict]) -> list[dict]:
    payload = "".join(json.dumps(r, ensure_ascii=False) + "\n" for r in rows)
    proc = subprocess.run(
        ["php", str(PHP), mode],
        input=payload,
        text=True,
        capture_output=True,
    )
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(f"php {mode} exited {proc.returncode}")
    if proc.stderr.strip():
        sys.stderr.write(proc.stderr)
    return [json.loads(line) for line in proc.stdout.splitlines() if line.strip()]


def run_lean(mode: str, rows: list[dict]) -> list[dict]:
    if mode == "e2e":
        args = [str(LEAN), "--e2e-r36"]
        payload_rows = [{"id": r["id"], "source": r["source"]} for r in rows]
    else:
        args = [str(LEAN), "state"]
        payload_rows = []
        for r in rows:
            payload_rows.append({
                "id": r["id"],
                "segments": [{"k": 0}],
                "tokens": [[r["rule"], r["opts"]]],
                "footnotes": r["footnotes"],
                "bibitems": [],
                "bibitemIds": r["bibitemIds"],
                "equations": [],
                "mathId": None,
                "scoredAnchors": [],
            })
    payload = "".join(json.dumps(r, ensure_ascii=False) + "\n" for r in payload_rows)
    proc = subprocess.run(args, input=payload, text=True, capture_output=True)
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(f"lean {mode} exited {proc.returncode}")
    return [json.loads(line) for line in proc.stdout.splitlines() if line.strip()]


def as_text(value) -> str:
    if isinstance(value, str):
        return value
    if isinstance(value, dict) and "$bytes" in value:
        return bytes(value["$bytes"]).decode("latin1")
    return json.dumps(value, ensure_ascii=False)


def main() -> None:
    if not LEAN.exists():
        raise SystemExit(f"missing {LEAN}")
    rng = random.Random(SEED)
    src = sources(rng)
    tok = synthetics()
    (HERE / "fuzz-sources.jsonl").write_text(
        "".join(json.dumps({"id": r["id"], "source": r["source"]}) + "\n" for r in src))
    (HERE / "fuzz-tokens.jsonl").write_text(
        "".join(json.dumps({k: r[k] for k in ("id", "rule", "opts", "footnotes", "bibitemIds", "expect")})
                + "\n" for r in tok))

    php_src = {r["id"]: r for r in run_php("e2e", src)}
    lean_src = {r["id"]: r for r in run_lean("e2e", src)}
    php_tok = {r["id"]: r for r in run_php("token", tok)}
    lean_tok = {r["id"]: r for r in run_lean("token", tok)}

    by_class_src = defaultdict(lambda: {"n": 0, "fail": 0, "ids": []})
    src_fail = []
    for case in src:
        pr = php_src[case["id"]]
        lr = lean_src[case["id"]]
        ok = "error" not in pr and "error" not in lr and as_text(pr.get("output")) == as_text(lr.get("output"))
        classes = pr.get("classes") or []
        if not ok:
            src_fail.append({
                "id": case["id"],
                "classes": classes,
                "php": pr.get("output", pr.get("error")),
                "lean": lr.get("output", lr.get("error")),
            })
        for c in classes:
            by_class_src[c]["n"] += 1
            if not ok:
                by_class_src[c]["fail"] += 1
                if len(by_class_src[c]["ids"]) < 8:
                    by_class_src[c]["ids"].append(case["id"])

    by_class_tok = defaultdict(lambda: {"n": 0, "fail": 0, "examples": []})
    tok_fail = []
    class_mismatch = []
    for case in tok:
        pr = php_tok[case["id"]]
        lr = lean_tok[case["id"]]
        php_c = pr.get("phpClass")
        if case["expect"] and php_c != case["expect"]:
            class_mismatch.append({"id": case["id"], "expect": case["expect"], "php": php_c})
        ok = "error" not in pr and lr.get("status") == "ok" and as_text(pr.get("output")) == as_text(lr.get("output"))
        cname = php_c or case["expect"] or "?"
        by_class_tok[cname]["n"] += 1
        if not ok:
            by_class_tok[cname]["fail"] += 1
            rec = {
                "id": case["id"],
                "php": pr.get("output", pr.get("error")),
                "lean": lr.get("output", lr.get("error", lr.get("status"))),
            }
            tok_fail.append({**rec, "class": cname})
            if len(by_class_tok[cname]["examples"]) < 6:
                by_class_tok[cname]["examples"].append(rec)

    summary = {
        "seed": SEED,
        "source_cases": len(src),
        "token_cases": len(tok),
        "source_fail": len(src_fail),
        "token_fail": len(tok_fail),
        "class_mismatch": class_mismatch,
        "source_by_class": by_class_src,
        "token_by_class": by_class_tok,
        "source_failures": src_fail[:30],
        "token_failures": tok_fail[:40],
    }
    (HERE / "fuzz-summary.json").write_text(json.dumps(summary, indent=2, ensure_ascii=False) + "\n")
    print(f"source {len(src)} fail {len(src_fail)}; token {len(tok)} fail {len(tok_fail)}; "
          f"class-mismatch {len(class_mismatch)}")
    for c, rec in sorted(by_class_tok.items()):
        print(f"  token {c:20} {rec['n']:3} fail {rec['fail']}")
    for c, rec in sorted(by_class_src.items()):
        print(f"  source {c:20} {rec['n']:3} fail {rec['fail']}")


if __name__ == "__main__":
    main()
