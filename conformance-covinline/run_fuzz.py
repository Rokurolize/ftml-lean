"""Seeded within-class fuzz of the eight INLINE renderers.

For every class of LeanFtml.CoverageInline the generator varies only the
features irrelevant to that class's decision (the literal href/body/label,
neutral surrounding text, harmless extra options). Each case is executed
twice: the current PHP reference `token()` through driver.php, and the Lean
mirror through `lean-ftml-conformance-r48 state`. A case passes when both
sides render byte-identically and the independent PHP class annotation
agrees with the class list the generator expected.

Two classes are designed direct-call pins with no byte comparison: `flSite`
makes the reference fatal on an undefined GlobalProperties constant, and
`imFlickr` is the Image:FlickrHandler serving disposition (Lean status
"excluded", reference fatal). They are reported as uncomparable, never as
passes. Neither is emitted by the corrected parse rules.
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

UNCOMPARABLE = {"flSite": "Freelink site branch: reference fatals on undefined GlobalProperties; unreachable after parse correction",
                "imFlickr": "Image:FlickrHandler serving disposition: reference fatal, Lean excluded; not emitted by the parse rules"}


def mk(cid, rule, opts, target, note=None):
    c = {"id": cid, "rule": rule, "opts": opts, "expect": classify(rule, opts), "target": target}
    if note:
        c["note"] = note
    return c


def cases(seed: int) -> list[dict]:
    rng = random.Random(seed)
    out = []
    bodies = ["a", "hello", "x y", "O'Brien", "a&b", "n0", "zz", "body"]
    hrefs = ["http://a.example", "https://b.example/x", "http://c.example?q=1",
             "mailto:d@example.com", "http://e.example/a/b"]

    def add(cid, rule, opts, target, note=None):
        c = mk(cid, rule, opts, target, note)
        if target not in c["expect"]:
            raise SystemExit(f"seed {seed}: case {cid} target {target} not in {c['expect']}")
        out.append(c)

    # Url: base anchor and the three independent modifiers.
    for i, href in enumerate(hrefs):
        add(f"url-link-{i}", "Url", {"type": "inline", "href": href,
            "text": bodies[i]}, "urlLink")
        add(f"url-target-{i}", "Url", {"type": "descr", "href": href,
            "text": bodies[i], "target": "_blank"}, "urlTarget")
        add(f"url-footnote-{i}", "Url", {"type": "footnote", "href": href,
            "text": bodies[i]}, "urlFootnote")
    for i in range(PER_CLASS):
        add(f"url-hash-{i}", "Url", {"type": "descr", "href": "#",
            "text": bodies[i], "target": "_blank" if i % 2 else ""}, "urlHash")

    # Interwiki.
    sites = ["wikipedia", "wikipedia.pl", "pl.wikipedia", "google", "dictionary"]
    for i, site in enumerate(sites):
        add(f"iw-known-{i}", "Interwiki", {"site": site,
            "page": f"Page_{i}", "text": bodies[i]}, "iwKnown")
    for i in range(PER_CLASS):
        add(f"iw-unknown-{i}", "Interwiki", {"site": f"nosuch{i}",
            "page": "x", "text": bodies[i]}, "iwUnknown")

    # Email (single class).
    for i, body in enumerate(bodies):
        add(f"email-{i}", "Email", {"email": f"a{i}@b.example",
            "text": body}, "emReversed")

    # Freelink.
    for i in range(PER_CLASS):
        add(f"fl-url-{i}", "Freelink", {"url": f"http://x.example/{i}",
            "text": f" label{i} "}, "flUrl")
        add(f"fl-exists-{i}", "Freelink", {"page": "other-page",
            "text": f" label{i} ", "anchor": "#a"}, "flExists")
        add(f"fl-missing-{i}", "Freelink", {"page": f"no-page-{i}",
            "text": f" label{i} "}, "flMissing")
        add(f"fl-nonbr-{i}", "Freelink", {"page": f"no-page-{i}",
            "text": f"two words {i}", "nonbr": True}, "flNonbr")
        add(f"fl-target-{i}", "Freelink", {"url": f"http://x.example/{i}",
            "text": "L", "target": "_blank"}, "flTarget")
        add(f"fl-site-{i}", "Freelink", {"site": f"example{i}",
            "page": "p", "text": "L"}, "flSite", UNCOMPARABLE["flSite"])

    # Image.
    for i in range(PER_CLASS):
        add(f"im-first-{i}", "Image", {"src": ":first"}, "imFirst")
        add(f"im-flickr-{i}", "Image", {"src": f"flickr:{i}"}, "imFlickr",
            UNCOMPARABLE["imFlickr"])
        add(f"im-url-{i}", "Image", {"src": f"http://x.example/{i}.png"},
            "imUrlSource")
        add(f"im-resized-{i}", "Image", {"src": f"page{i}/a.webp",
            "attr": {"size": ["small", "medium", "thumbnail", "square"][i % 4]}},
            "imLocalResized")
        add(f"im-plain-{i}", "Image", {"src": f"page{i}/a.png"}, "imLocalPlain")
        add(f"im-linked-{i}", "Image", {"src": f"a{i}.png",
            "attr": {"link": f"http://x.example/{i}"}}, "imLinked")
    for cls, marker in (("imAlignFLeft", "f<"), ("imAlignFRight", "f>"),
                        ("imAlignLeft", "<"), ("imAlignRight", ">"),
                        ("imAlignCenter", "=")):
        for i in range(PER_CLASS):
            add(f"{cls}-{i}", "Image", {"src": f"a{i}.png",
                "align": marker}, cls)

    # Span / Size / Colortext.
    for i in range(PER_CLASS):
        add(f"span-bare-{i}", "Span", {"type": "start", "args": {}}, "spStartBare")
        add(f"span-attrs-{i}", "Span", {"type": "start",
            "args": {"class": f"c{i}", "title": "a&b"}}, "spStartAttrs")
        add(f"span-end-{i}", "Span", {"type": "end"}, "spEnd")
        add(f"span-fall-{i}", "Span", {"type": "other"}, "spFall")
        add(f"size-start-{i}", "Size", {"type": "start",
            "size": f"{i + 8}px"}, "szStart")
        add(f"size-end-{i}", "Size", {"type": "end"}, "szEnd")
        add(f"size-fall-{i}", "Size", {"type": "other"}, "szFall")
    colors = {
        "ctHex": ["ff0000", "#c00", "ABCDEF"],
        "ctNamed": ["red", "rgb(1,2,3)", "var(--c)"],
        "ctEmpty": ["  ", "", " \t "],
    }
    for cls, specs in colors.items():
        for i in range(PER_CLASS):
            add(f"{cls}-{i}", "Colortext", {"type": "start",
                "color": specs[i % len(specs)]}, cls)
    for i in range(PER_CLASS):
        add(f"ct-end-{i}", "Colortext", {"type": "end", "color": "red"}, "ctEnd")
        add(f"ct-fall-{i}", "Colortext", {"type": "other", "color": "red"}, "ctFall")
        add(f"ct-invalid-start-{i}", "Colortext", {"type": "start",
            "color": f"<{i}>"}, "ctInvalidStart")
        add(f"ct-invalid-other-{i}", "Colortext", {"type": "end",
            "color": f"<{i}>"}, "ctInvalidOther")
    _ = rng.randrange(1)
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
    return json.dumps(value, ensure_ascii=False)


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

        by_class = defaultdict(lambda: {"n": 0, "fail": 0, "uncomparable": 0, "ids": []})
        failures = []
        mismatches = []
        uncomparable = []
        for r in rows:
            p = php[r["id"]]
            l = lean[r["id"]]
            cls = r["target"]
            rec = by_class[cls]
            rec["n"] += 1
            if "note" in r:
                rec["uncomparable"] += 1
                uncomparable.append({"id": r["id"], "class": cls, "reason": r["note"],
                    "php": p.get("error", p.get("output")), "lean": l.get("status")})
                continue
            if p.get("phpClass") != r["expect"]:
                mismatches.append({"id": r["id"], "expect": r["expect"],
                    "phpClass": p.get("phpClass")})
            ok = ("error" not in p and l.get("status") == "ok" and
                  as_text(p.get("output")) == as_text(l.get("output")))
            if not ok:
                rec["fail"] += 1
                if len(rec["ids"]) < 8:
                    rec["ids"].append(r["id"])
                failures.append({"id": r["id"], "class": cls,
                    "php": p.get("output", p.get("error")),
                    "lean": l.get("output", l.get("status", l.get("error")))})
        summary = {
            "seed": seed,
            "cases": len(rows),
            "failures": len(failures),
            "class_mismatch": len(mismatches),
            "uncomparable": len(uncomparable),
            "by_class": dict(by_class),
            "failure_records": failures[:40],
            "mismatch_records": mismatches[:40],
            "uncomparable_records": uncomparable,
        }
        (HERE / f"fuzz-summary-{seed}.json").write_text(
            json.dumps(summary, indent=2, ensure_ascii=False) + "\n")
        (HERE / f"disagreements-{seed}.json").write_text(
            json.dumps({"failures": failures, "mismatches": mismatches},
                       indent=2, ensure_ascii=False) + "\n")
        combined["seed_runs"].append({"seed": seed, "cases": len(rows),
            "failures": len(failures), "class_mismatch": len(mismatches),
            "uncomparable": len(uncomparable), "by_class": dict(by_class)})
        print(f"seed {seed}: cases {len(rows)} fail {len(failures)} "
              f"class-mismatch {len(mismatches)} uncomparable {len(uncomparable)}")
        for cls in ALL_CLASSES:
            if cls in by_class:
                rec = by_class[cls]
                print(f"  {cls:18} n={rec['n']:3} fail={rec['fail']:2} "
                      f"uncomparable={rec['uncomparable']:2}")
    (HERE / "fuzz-summary.json").write_text(
        json.dumps(combined, indent=2, ensure_ascii=False) + "\n")


if __name__ == "__main__":
    main()
