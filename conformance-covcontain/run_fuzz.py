"""Seeded within-class fuzz of the container family.

Render classes are one token, executed as the reference `token()` and as
`lean-ftml-conformance-r48 state`. Parse classes are one authored
fragment, executed through the 68-rule pipeline (`driver.php source`)
and `lean-ftml-conformance-r48 --e2e-r48`. A case passes when both sides
agree byte for byte and, for a token, the PHP class annotation equals
the Python expectation. Two seeds: 20261122 and 7.
"""

from __future__ import annotations

import json
import random
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from classify import ALL_CLASSES, classify_source, classify_token  # noqa: E402

ROOT = Path(__file__).resolve().parents[1]
HERE = Path(__file__).resolve().parent
PHP = HERE / "driver.php"
LEAN = ROOT / "lean-ftml" / ".lake" / "build" / "bin" / "lean-ftml-conformance-r48"
SEEDS = (20261122, 7)
PER = 4
RULES = (
    "Include,Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,"
    "Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
    "Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,"
    "Bibitem,Bibliography,Bibcite,Divprefilter,Anchor,User,"
    "Blockquote,Heading,Toc,Horiz,Separator,Clearfloat,Break,Span,"
    "Size,Div,Divalign,Collapsible,Tabview,Note,Gallery,List,"
    "Deflist,Table,Tableadv,Button,Image,Embed,Social,File,Center,"
    "Newline,Paragraph,Url,Email,Mathinline,Interwiki,Colortext,"
    "Strong,Emphasis,Underline,Strikethrough,Tt,Superscript,"
    "Subscript,Typography,Tighten"
)


def cases(seed: int) -> list[dict]:
    rng = random.Random(seed)
    words = ["alpha", "beta", "gamma", "delta", "epsilon", "zeta", "eta", "theta"]
    out: list[dict] = []

    def add_token(cid, rule, opts, target, gap=False):
        exp = classify_token(rule, opts)
        if target not in exp:
            raise SystemExit(f"seed {seed}: {cid} target {target} not in {exp}")
        row = {"id": cid, "mode": "token", "rule": rule, "opts": opts,
               "expect": exp, "target": target}
        if gap:
            row["gap"] = True
        out.append(row)

    def add_source(cid, kind, src, target):
        exp = classify_source(kind, src)
        if target not in exp:
            raise SystemExit(f"seed {seed}: {cid} target {target} not in {exp} for {src!r}")
        out.append({"id": cid, "mode": "source", "kind": kind, "source": src,
                    "expect": exp, "target": target})

    bodies = [rng.choice(words) + str(i) for i in range(PER)]

    for i, body in enumerate(bodies):
        # Blockquote parse.
        add_source(f"bq-del-nospace-{i}", "bq", f"A\n\n>{body}\n\nB", "bqRunDeleted")
        add_source(f"bq-del-empty-{i}", "bq", f"A\n\n>{' ' * (1 + (i % 3))}\n\nB", "bqRunDeleted")
        add_source(f"bq-drop-{i}", "bq", f"> {body}\n>{body}x\n> tail{i}\n", "bqLineDropped")
        add_source(f"bq-text-{i}", "bq", f"> {body}\n", "bqText")
        add_source(f"bq-start-{i}", "bq", f"> {body}\n>> inner{i}\n", "bqNestStart")
        add_source(f"bq-end-{i}", "bq", f"> one{i}\n>> two{i}\n> {body}\n", "bqNestEnd")
        add_source(f"bq-drain-{i}", "bq", f"> {body} end\n", "bqDrain")
        # Blockquote render.
        add_token(f"bq-rs-{i}", "Blockquote", {"type": "start", "level": i}, "bqRenderStart")
        add_token(f"bq-re-{i}", "Blockquote", {"type": "end", "level": i}, "bqRenderEnd")
        add_token(f"bq-rf-{i}", "Blockquote", {"type": "other", "level": i}, "bqRenderFall")
        # Div parse.
        add_source(f"dv-plain-{i}", "div", f"[[div]]\n{body}\n[[/div]]", "dvPlain")
        add_source(f"dv-scored-{i}", "div", f"[[div_]]\n{body}\n[[/div]]", "dvScored")
        add_source(f"dv-van-{i}", "div", f"[[div]]\n[[/div]]\n{body}", "dvVanished")
        add_source(f"dv-bare-{i}", "div", f"[[div]]\n{body}\n[[/div]]", "dvBare")
        add_source(f"dv-ord-{i}", "div",
                   f'[[div class="c{i}" id="u-{body}"]]\n{body}\n[[/div]]', "dvAttrOrder")
        add_source(f"dv-unset-{i}", "div", f'[[div class=""]]\n{body}\n[[/div]]', "dvEmptyUnset")
        # Div render.
        add_token(f"dv-rv-{i}", "Div",
                  {"type": "start", "vanished": True, "args": {}}, "dvRVanished")
        add_token(f"dv-rb-{i}", "Div", {"type": "start", "args": {}}, "dvRStartBare")
        add_token(f"dv-re-{i}", "Div",
                  {"type": "start", "args": {"id": f"u-{body}", "class": f"c{i}"}},
                  "dvRStartEsc")
        add_token(f"dv-rc-{i}", "Div",
                  {"type": "start", "args": {"id": "u-"}}, "dvRStartClear")
        add_token(f"dv-rend-{i}", "Div", {"type": "end", "vanished": False}, "dvREnd")
        add_token(f"dv-rfall-{i}", "Div", {"type": "nope"}, "dvRFall")
        # Collapsible parse and render.
        add_source(f"co-parse-{i}", "co",
                   f"[[collapsible]]\n{body}\n[[/collapsible]]", "coParseClaim")
        add_token(f"co-fold-{i}", "Collapsible",
                  {"type": "start", "args": {"show": f"S{i}"}}, "coFolded")
        add_token(f"co-open-{i}", "Collapsible",
                  {"type": "start", "args": {"folded": "no" if i % 2 == 0 else "false"}},
                  "coOpened")
        add_token(f"co-show-d-{i}", "Collapsible",
                  {"type": "start", "args": {"show": "" if i % 2 == 0 else "0"}},
                  "coShowDefault")
        add_token(f"co-show-a-{i}", "Collapsible",
                  {"type": "start", "args": {"show": f"Show {body}"}}, "coShowAuthored")
        add_token(f"co-hide-d-{i}", "Collapsible",
                  {"type": "end", "args": {}}, "coHideDefault")
        add_token(f"co-hide-a-{i}", "Collapsible",
                  {"type": "end", "args": {"hide": f"Hide {body}", "hideLocation": "bottom"}},
                  "coHideAuthored")
        add_token(f"co-top-{i}", "Collapsible",
                  {"type": "start", "args": {"hideLocation": "sideways" if i % 2 else "top"}},
                  "coLocTop")
        add_token(f"co-bot-{i}", "Collapsible",
                  {"type": "end", "args": {"hideLocation": "bottom", "hide": f"H{i}"}},
                  "coLocBottom")
        add_token(f"co-both-{i}", "Collapsible",
                  {"type": "start", "args": {"hideLocation": "both", "show": f"S{i}", "hide": f"H{i}"}},
                  "coLocBoth")
        add_token(f"co-start-{i}", "Collapsible",
                  {"type": "start", "args": {"show": f"S{body}"}}, "coStart")
        add_token(f"co-end-{i}", "Collapsible",
                  {"type": "end", "args": {"hideLocation": "top"}}, "coEnd")
        add_token(f"co-fall-{i}", "Collapsible",
                  {"type": "nope", "args": {}}, "coFall")
        # Tabview parse.
        add_source(f"tv-unt-{i}", "tv",
                   f"[[tabview]]\n[[tab]]\n{body}\n[[/tab]]\n[[/tabview]]", "tvTitleUntitled")
        add_source(f"tv-raw-{i}", "tv",
                   f'[[tabview]]\n[[tab title="@@{body}@@"]]\n{body}\n[[/tab]]\n[[/tabview]]',
                   "tvTitleRawEmpty")
        add_source(f"tv-col-{i}", "tv",
                   f"[[tabview]]\n[[tab {body}  {body}]]\nx\n[[/tab]]\n[[/tabview]]",
                   "tvTitleCollapsed")
        add_source(f"tv-pos-{i}", "tv",
                   f"[[tabview]]\n[[tab {body}]]\nx\n[[/tab]]\n[[/tabview]]",
                   "tvTitlePositional")
        add_source(f"tv-attr-{i}", "tv",
                   f'[[tabview]]\n[[tab title="{body}"]]\nx\n[[/tab]]\n[[/tabview]]',
                   "tvTitleAttribute")
        add_source(f"tv-kept-{i}", "tv",
                   f'[[tabview class="c{i}"]]\n[[tab {body}]]\nx\n[[/tab]]\n[[/tabview]]',
                   "tvClassKept")
        add_source(f"tv-drop-{i}", "tv",
                   f"[[tabview]]\n[[tab {body}]]\nx\n[[/tab]]\n[[/tabview]]",
                   "tvClassDropped")
        add_source(f"tv-echo-{i}", "tv",
                   f'[[tabview id="p{i}"]]\n[[tab {body}]]\nx\n[[/tab]]\n[[/tabview]]',
                   "tvAttrEcho")
        # Tabview render.
        add_token(f"tv-start-{i}", "Tabview",
                  {"type": "start", "tabviewId": 0, "args": {},
                   "tabs": [{"title": body, "tabId": 0}]}, "tvStart")
        add_token(f"tv-sel-{i}", "Tabview",
                  {"type": "start", "tabviewId": i, "args": {},
                   "tabs": [{"title": body, "tabId": 0}]}, "tvSelected")
        add_token(f"tv-unsel-{i}", "Tabview",
                  {"type": "start", "tabviewId": 0, "args": {},
                   "tabs": [{"title": body, "tabId": 0}, {"title": f"n{i}", "tabId": i + 1}]},
                  "tvUnselected")
        add_token(f"tv-lab-d-{i}", "Tabview",
                  {"type": "start", "tabviewId": 0, "args": {},
                   "tabs": [{"tabId": 0}]}, "tvLabelDefault")
        add_token(f"tv-lab-e-{i}", "Tabview",
                  {"type": "start", "tabviewId": 0, "args": {},
                   "tabs": [{"title": "", "tabId": 0}]}, "tvLabelEmpty")
        add_token(f"tv-lab-t-{i}", "Tabview",
                  {"type": "start", "tabviewId": 0, "args": {},
                   "tabs": [{"title": f"A & {body}", "tabId": 0}]}, "tvLabelText")
        add_token(f"tv-pshow-{i}", "Tabview",
                  {"type": "tabStart", "tabviewId": i, "tabId": 0}, "tvPanelShown")
        add_token(f"tv-phide-{i}", "Tabview",
                  {"type": "tabStart", "tabviewId": 0, "tabId": i + 1}, "tvPanelHidden")
        add_token(f"tv-pend-{i}", "Tabview",
                  {"type": "tabEnd", "tabviewId": i}, "tvPanelEnd")
        add_token(f"tv-end-{i}", "Tabview",
                  {"type": "end", "tabviewId": i}, "tvEnd")
        add_token(f"tv-fall-{i}", "Tabview",
                  {"type": "nope", "tabviewId": i}, "tvFall")

    # Reference-only scalars. The class is the PHP branch; the mirror's
    # byte test disagrees. Counted in the class tally, named in the report.
    add_token("gap-van-int", "Div",
              {"type": "start", "vanished": 1, "args": {}}, "dvRVanished", gap=True)
    add_token("gap-show-int0", "Collapsible",
              {"type": "start", "args": {"show": 0}}, "coShowAuthored", gap=True)
    add_token("gap-show-false", "Collapsible",
              {"type": "start", "args": {"show": False}}, "coShowAuthored", gap=True)
    add_token("gap-tab-00", "Tabview",
              {"type": "start", "tabviewId": 0, "args": {},
               "tabs": [{"title": "Z", "tabId": "00"}]}, "tvSelected", gap=True)
    add_token("gap-panel-00", "Tabview",
              {"type": "tabStart", "tabviewId": 0, "tabId": "00"}, "tvPanelShown", gap=True)
    return out


def run_php_token(rows: list[dict]) -> list[dict]:
    payload = "".join(json.dumps(
        {"id": r["id"], "rule": r["rule"], "opts": r["opts"]},
        ensure_ascii=False) + "\n" for r in rows)
    proc = subprocess.run(["php", str(PHP), "token"], input=payload,
                          text=True, capture_output=True)
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(f"php token exited {proc.returncode}")
    if proc.stderr.strip():
        sys.stderr.write(proc.stderr)
    return [json.loads(line) for line in proc.stdout.splitlines() if line.strip()]


def run_php_source(rows: list[dict]) -> list[dict]:
    payload = "".join(json.dumps(
        {"id": r["id"], "source": r["source"]}, ensure_ascii=False) + "\n" for r in rows)
    proc = subprocess.run(["php", str(PHP), "source", RULES], input=payload,
                          text=True, capture_output=True)
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(f"php source exited {proc.returncode}")
    if proc.stderr.strip():
        sys.stderr.write(proc.stderr)
    return [json.loads(line) for line in proc.stdout.splitlines() if line.strip()]


def run_lean_token(rows: list[dict]) -> list[dict]:
    payload = "".join(json.dumps({
        "id": r["id"],
        "segments": [{"k": 0}],
        "tokens": [[r["rule"], r["opts"]]],
        "footnotes": [], "bibitems": [], "bibitemIds": [],
        "equations": [], "mathId": None, "scoredAnchors": [],
    }, ensure_ascii=False) + "\n" for r in rows)
    proc = subprocess.run([str(LEAN), "state"], input=payload,
                          text=True, capture_output=True)
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(f"lean state exited {proc.returncode}")
    return [json.loads(line) for line in proc.stdout.splitlines() if line.strip()]


def run_lean_source(rows: list[dict]) -> list[dict]:
    payload = "".join(json.dumps(
        {"id": r["id"], "source": r["source"]}, ensure_ascii=False) + "\n" for r in rows)
    proc = subprocess.run([str(LEAN), "--e2e-r48"], input=payload,
                          text=True, capture_output=True)
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(f"lean e2e exited {proc.returncode}")
    return [json.loads(line) for line in proc.stdout.splitlines() if line.strip()]


def as_text(value) -> str:
    if isinstance(value, str):
        return value
    if isinstance(value, dict) and "$bytes" in value:
        return bytes(value["$bytes"]).decode("latin1")
    if value is None:
        return ""
    return json.dumps(value, ensure_ascii=False)


def main() -> None:
    if not LEAN.exists():
        raise SystemExit(f"missing {LEAN}")
    combined = {"seed_runs": [], "classes": ALL_CLASSES}
    for seed in SEEDS:
        rows = cases(seed)
        (HERE / f"fuzz-cases-{seed}.jsonl").write_text(
            "".join(json.dumps(r, ensure_ascii=False) + "\n" for r in rows))
        tokens = [r for r in rows if r["mode"] == "token"]
        sources = [r for r in rows if r["mode"] == "source"]
        php_rows = run_php_token(tokens) + run_php_source(sources)
        lean_rows = run_lean_token(tokens) + run_lean_source(sources)
        php = {r["id"]: r for r in php_rows}
        lean = {r["id"]: r for r in lean_rows}
        (HERE / f"php-{seed}.jsonl").write_text(
            "".join(json.dumps(php[r["id"]], ensure_ascii=False) + "\n" for r in rows))
        (HERE / f"lean-{seed}.jsonl").write_text(
            "".join(json.dumps(lean[r["id"]], ensure_ascii=False) + "\n" for r in rows))

        by_class = defaultdict(lambda: {"n": 0, "fail": 0, "uncomparable": 0, "gap_fail": 0, "ids": []})
        failures = []
        mismatches = []
        for r in rows:
            p = php[r["id"]]
            l = lean[r["id"]]
            cls = r["target"]
            rec = by_class[cls]
            rec["n"] += 1
            if r["mode"] == "token" and p.get("phpClass") != r["expect"]:
                mismatches.append({"id": r["id"], "expect": r["expect"],
                                   "phpClass": p.get("phpClass")})
            ok = ("error" not in p and l.get("status") == "ok" and
                  as_text(p.get("output")) == as_text(l.get("output")))
            if not ok:
                rec["fail"] += 1
                if r.get("gap"):
                    rec["gap_fail"] += 1
                if len(rec["ids"]) < 6:
                    rec["ids"].append(r["id"])
                failures.append({
                    "id": r["id"], "class": cls, "gap": bool(r.get("gap")),
                    "php": p.get("output", p.get("error")),
                    "lean": l.get("output", l.get("status", l.get("error"))),
                })
        summary = {
            "seed": seed,
            "cases": len(rows),
            "failures": len(failures),
            "class_mismatch": len(mismatches),
            "by_class": {k: dict(v) for k, v in by_class.items()},
            "failure_records": failures,
            "mismatch_records": mismatches,
        }
        (HERE / f"fuzz-summary-{seed}.json").write_text(
            json.dumps(summary, indent=2, ensure_ascii=False) + "\n")
        (HERE / f"disagreements-{seed}.json").write_text(
            json.dumps({"failures": failures, "mismatches": mismatches},
                       indent=2, ensure_ascii=False) + "\n")
        combined["seed_runs"].append({
            "seed": seed, "cases": len(rows), "failures": len(failures),
            "class_mismatch": len(mismatches),
            "by_class": {k: dict(v) for k, v in by_class.items()},
        })
        print(f"seed {seed}: cases {len(rows)} fail {len(failures)} "
              f"class-mismatch {len(mismatches)}")
        for cls in ALL_CLASSES:
            if cls in by_class:
                rec = by_class[cls]
                print(f"  {cls:20} n={rec['n']:3} fail={rec['fail']:2} gap={rec['gap_fail']:2}")
    (HERE / "fuzz-summary.json").write_text(
        json.dumps(combined, indent=2, ensure_ascii=False) + "\n")


if __name__ == "__main__":
    main()
