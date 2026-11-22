"""Seeded within-class fuzz of Gallery, User, Button and Embed.

Each class is generated eight times per seed. Only decision-irrelevant
features vary (hosts, labels, alt text, harmless extra options). A case
passes when the PHP reference token() and the Lean mirror render the same
bytes and the PHP class annotation equals the expected class list.

gaFlickr is a designed direct-call pin: the reference fatals on
FlickrHandler and Lean marks Gallery:FlickrHandler. Those cases are
uncomparable. usNotFound is compared to the reference branch formula,
because the harness token() fatals on Criteria before either branch; the
Lean fallback is that formula.
"""

from __future__ import annotations

import json
import random
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from classify import ALL_CLASSES, classify  # noqa: E402

ROOT = Path(__file__).resolve().parents[1]
HERE = Path(__file__).resolve().parent
PHP = HERE / "driver.php"
LEAN = ROOT / "lean-ftml" / ".lake" / "build" / "bin" / "lean-ftml-conformance-r48"
SEEDS = (20261122, 7)
PER_CLASS = 8

UNCOMPARABLE = {
    "gaFlickr": "Gallery:FlickrHandler: reference fatals, Lean excludes the token; the handler is not runnable in the harness",
}


def user_formula(name: str) -> str:
    # PHP htmlspecialchars ENT_COMPAT: & < > " are escaped, apostrophe is not.
    escaped = (name.replace("&", "&amp;").replace("<", "&lt;")
               .replace(">", "&gt;").replace('"', "&quot;"))
    return (
        '<span class="error-inline"><em>'
        + escaped
        + "</em> does not match any existing user name</span>"
    )


def cases(seed: int) -> list[dict]:
    rng = random.Random(seed)
    out = []
    hosts = [f"h{seed % 97}{i}.example" for i in range(PER_CLASS)]
    # Attribute values stay free of the " delimiter. User names exercise ENT_COMPAT.
    labels = ["a", "O'Brien", "a&b", "n<2", "zz", "body", "xy", "q"]
    user_names = ["a", "O'Brien", "a&b", "n<2", 'q"q', "zz", "<b>", "x y"]

    def add(cid, rule, opts, target, note=None):
        c = {"id": cid, "rule": rule, "opts": opts, "expect": classify(rule, opts), "target": target}
        if note:
            c["note"] = note
        if target not in c["expect"]:
            raise SystemExit(f"seed {seed}: {cid} target {target} not in {c['expect']}")
        out.append(c)

    sizes = [
        ("gaSizeSmall", "small"), ("gaSizeMedium", "medium"), ("gaSizeThumbnail", "thumbnail"),
        ("gaSizeSquare", "square"), ("gaSizeOriginal", "original"), ("gaSizeDefault", "nope"),
    ]
    for cls, size in sizes:
        for i in range(PER_CLASS):
            add(f"{cls}-{i}", "Gallery",
                {"size": size, "sources": f": {hosts[i]}/p{i}.png"}, cls)

    for i in range(PER_CLASS):
        add(f"ga-miss-{i}", "Gallery", {"sources": "" if i % 2 == 0 else "0", "size": "small"}, "gaPageMiss")
        add(f"ga-noitem-{i}", "Gallery", {"sources": f"note {labels[i]}\nnot an item"}, "gaNoItem")
        add(f"ga-flickr-{i}", "Gallery", {"sources": f": flickr:{1000 + i}"}, "gaFlickr", UNCOMPARABLE["gaFlickr"])
        add(f"ga-slash-{i}", "Gallery", {"sources": f": page{i}/a.png"}, "gaLocalSlashed")
        add(f"ga-plain-{i}", "Gallery", {"sources": f": file{i}.png"}, "gaLocalPlain")
        add(f"ga-ext-{i}", "Gallery",
            {"sources": f": https://{hosts[i]}/a{i}.png", "size": "small" if i % 2 == 0 else ""},
            "gaExternal")
        add(f"ga-star-{i}", "Gallery", {"sources": f": *https://{hosts[i]}/s{i}.png"}, "gaStarSrc")
        add(f"ga-alt-{i}", "Gallery",
            {"sources": f": file{i}.png alt=\"{labels[i]}\""}, "gaAlt")
        add(f"ga-linkurl-{i}", "Gallery",
            {"sources": f": file{i}.png link=\"https://{hosts[i]}/go\""}, "gaLinkUrl")
        add(f"ga-linkpage-{i}", "Gallery",
            {"sources": f": file{i}.png link=\"page-{i}\""}, "gaLinkPage")
        add(f"ga-linkstar-{i}", "Gallery",
            {"sources": f": file{i}.png link=\"*https://{hosts[i]}/go\""}, "gaLinkStar")

    for i in range(PER_CLASS):
        name = user_names[i] if i else f"user{rng.randrange(1000)}"
        add(f"user-{i}", "User", {"userName": name, "image": i % 2 == 0}, "usNotFound")

    buttons = [
        ("btEdit", "edit"), ("btEditAppend", "edit-append"), ("btEditSections", "edit-sections"),
        ("btHistory", "history"), ("btPrint", "print"), ("btFiles", "files"), ("btTags", "tags"),
        ("btSource", "source"), ("btTalk", "talk"), ("btBacklinks", "backlinks"),
        ("btRename", "rename"), ("btDelete", "delete"), ("btParent", "parent"),
        ("btEditMeta", "edit-meta"), ("btWatchers", "watchers"),
    ]
    for cls, ty in buttons:
        for i in range(PER_CLASS):
            # Case fold is irrelevant: the reference lowercases before the table.
            shown = ty.upper() if i % 3 == 0 else ty
            add(f"{cls}-{i}", "Button", {"type": shown}, cls)
    for i in range(PER_CLASS):
        add(f"bt-set-{i}", "Button", {"type": "set-tags", "text": f"Tag {labels[i]}"}, "btSetTags")
        add(f"bt-invalid-{i}", "Button", {"type": f"Lock{i}" if i else "lock"}, "btInvalid")
        add(f"bt-setempty-{i}", "Button", {"type": "set-tags", "text": "" if i % 2 == 0 else "0"}, "btSetTagsEmpty")
        add(f"bt-style-{i}", "Button", {"type": "edit", "style": f"color:#{i:02d}0000"}, "btStyle")
        add(f"bt-class-{i}", "Button", {"type": "print", "class": f"c{i}"}, "btClassCustom")
        add(f"bt-text-{i}", "Button", {"type": "talk", "text": labels[i]}, "btTextCustom")

    def frame(src, extra=""):
        tail = (" " + extra) if extra else ""
        return f'<iframe src="{src}"{tail}></iframe>'

    for i in range(PER_CLASS):
        add(f"em-nomatch-{i}", "Embed", {"content": f"  plain {labels[i]} {i}  "}, "emNoMatch")
        add(f"em-event-{i}", "Embed",
            {"content": frame(f"http://{hosts[i]}/e", f'onclick="go{i}"')}, "emEvent")
        add(f"em-sjs-{i}", "Embed",
            {"content": frame(f"javascript:alert({i})") if i % 2 == 0
             else frame(f" JaVaScRiPt:alert({i})")}, "emSrcJavascript")
        add(f"em-svb-{i}", "Embed", {"content": frame(f"vbscript:msg{i}")}, "emSrcVbscript")
        add(f"em-ajs-{i}", "Embed",
            {"content": frame(f"http://{hosts[i]}/a", f'datax="javascript:f{i}"')}, "emAttrJavascript")
        add(f"em-avb-{i}", "Embed",
            {"content": frame(f"http://{hosts[i]}/a", f'datax="vbscript:f{i}"')}, "emAttrVbscript")
        add(f"em-pass-{i}", "Embed",
            {"content": f"  {frame(f'http://{hosts[i]}/p{i}')}  "}, "emPass")
        add(f"em-lang-{i}", "Embed",
            {"content": frame(f"http://{hosts[i]}/p{i}", 'language="JavaScript1.2"')}, "emLangStrip")
    return out


def run_php(rows: list[dict]) -> list[dict]:
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


def run_lean(rows: list[dict]) -> list[dict]:
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


def as_text(value) -> str:
    if isinstance(value, str):
        return value
    if isinstance(value, dict) and "$bytes" in value:
        return bytes(value["$bytes"]).decode("latin1")
    if value is None:
        return ""
    return json.dumps(value, ensure_ascii=False)


def lean_bytes(rec: dict) -> str:
    if "output" in rec:
        return as_text(rec.get("output"))
    return as_text(rec.get("fallback"))


def main() -> None:
    if not LEAN.exists():
        raise SystemExit(f"missing {LEAN}")
    combined = {"seed_runs": [], "classes": ALL_CLASSES}
    for seed in SEEDS:
        rows = cases(seed)
        (HERE / f"fuzz-cases-{seed}.jsonl").write_text(
            "".join(json.dumps(r, ensure_ascii=False) + "\n" for r in rows))
        php = {r["id"]: r for r in run_php(rows)}
        lean = {r["id"]: r for r in run_lean(rows)}
        (HERE / f"php-{seed}.jsonl").write_text(
            "".join(json.dumps(php[r["id"]], ensure_ascii=False) + "\n" for r in rows))
        (HERE / f"lean-{seed}.jsonl").write_text(
            "".join(json.dumps(lean[r["id"]], ensure_ascii=False) + "\n" for r in rows))

        by_class = defaultdict(lambda: {"n": 0, "fail": 0, "uncomparable": 0, "formula": 0, "ids": []})
        failures = []
        mismatches = []
        uncomparable = []
        for r in rows:
            p = php[r["id"]]
            l = lean[r["id"]]
            cls = r["target"]
            rec = by_class[cls]
            rec["n"] += 1
            if p.get("phpClass") != r["expect"]:
                mismatches.append({"id": r["id"], "expect": r["expect"], "phpClass": p.get("phpClass")})
            if "note" in r:
                rec["uncomparable"] += 1
                uncomparable.append({"id": r["id"], "class": cls, "reason": r["note"],
                    "php": p.get("error", p.get("output")), "lean": l.get("status")})
                continue
            if cls == "usNotFound":
                rec["formula"] += 1
                want = user_formula(r["opts"].get("userName", ""))
                ok = (lean_bytes(l) == want and l.get("status") == "excluded"
                      and "Criteria" in (p.get("error") or ""))
                if not ok:
                    rec["fail"] += 1
                    if len(rec["ids"]) < 8:
                        rec["ids"].append(r["id"])
                    failures.append({"id": r["id"], "class": cls, "want": want,
                        "php": p.get("error"), "lean": lean_bytes(l), "status": l.get("status")})
                continue
            ok = ("error" not in p and l.get("status") == "ok"
                  and as_text(p.get("output")) == lean_bytes(l))
            if not ok:
                rec["fail"] += 1
                if len(rec["ids"]) < 8:
                    rec["ids"].append(r["id"])
                failures.append({"id": r["id"], "class": cls,
                    "php": p.get("output", p.get("error")),
                    "lean": l.get("output", l.get("fallback", l.get("status")))})
        summary = {
            "seed": seed,
            "cases": len(rows),
            "failures": len(failures),
            "class_mismatch": len(mismatches),
            "uncomparable": len(uncomparable),
            "by_class": {k: dict(v) for k, v in by_class.items()},
            "failure_records": failures[:60],
            "mismatch_records": mismatches[:40],
            "uncomparable_records": uncomparable,
        }
        (HERE / f"fuzz-summary-{seed}.json").write_text(
            json.dumps(summary, indent=2, ensure_ascii=False) + "\n")
        (HERE / f"disagreements-{seed}.json").write_text(
            json.dumps({"failures": failures, "mismatches": mismatches},
                       indent=2, ensure_ascii=False) + "\n")
        combined["seed_runs"].append({
            "seed": seed, "cases": len(rows), "failures": len(failures),
            "class_mismatch": len(mismatches), "uncomparable": len(uncomparable),
            "by_class": {k: dict(v) for k, v in by_class.items()}})
        print(f"seed {seed}: cases {len(rows)} fail {len(failures)} "
              f"class-mismatch {len(mismatches)} uncomparable {len(uncomparable)}")
        for cls in ALL_CLASSES:
            if cls in by_class:
                rec = by_class[cls]
                print(f"  {cls:20} n={rec['n']:3} fail={rec['fail']:2} "
                      f"uncomparable={rec['uncomparable']:2} formula={rec['formula']:2}")
    (HERE / "fuzz-summary.json").write_text(
        json.dumps(combined, indent=2, ensure_ascii=False) + "\n")


if __name__ == "__main__":
    main()
