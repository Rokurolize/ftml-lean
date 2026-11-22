"""Seeded within-class fuzz of Code, Math and Mathinline.

Each case is a full source. It is rendered by the current PHP reference
under ref_configure_wiki and by lean-ftml-conformance-r43 --e2e-r43.
Math cases are also parsed by lean-ftml-conformance-r34 so the equation
counter and the stored type, which the harness HTML does not show, are
compared token by token. Depth, unknown and cycle are direct calls of
the reference expandSource; the mirror side of those three is the
closed theorems, so the byte column records them as uncomparable.
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
LEAN_E2E = ROOT / "lean-ftml" / ".lake" / "build" / "bin" / "lean-ftml-conformance-r43"
LEAN_MATH = ROOT / "lean-ftml" / ".lake" / "build" / "bin" / "lean-ftml-conformance-r34"
SEEDS = (20261122, 7)

ALL_CLASSES = [
    "codePlain", "codeEmpty", "codeTrailWs", "codeTrailEnd",
    "mathFatal", "mathTypeAbsent", "mathTypeValid", "mathTypeInvalid",
    "miPlain", "miDepth", "miUnknown", "miCycle", "miSource", "miFallback",
    "miSuppressFreelink", "miSuppressRaw", "miSuppressNewline", "miSuppressImage",
]

UNCOMPARABLE = {"miDepth", "miUnknown", "miCycle"}


def math_block(rest: str, body: str) -> str:
    return f"[[math{rest}]]\n{body}\n[[/math]]"


def cases(seed: int) -> list[dict]:
    rng = random.Random(seed)
    out = []
    plain = ["alpha", "a&b", "O'Brien", "x y", "n0", "a<b>", "zz", "q"]
    empty = ["", "   ", "\n", "\t\t", " \n ", "\n\n", "  \n", "\n "]
    trails_ws = [" ", "\n", "\t", " "]
    valid_types = ["align", "gather", "equation", "eqnarray", "foo", "bar", "a1", "xyz"]
    invalid_types = ["ALIGN", "", "Equation", "1abc", "a_b", "A", "eq-1", "b "]
    words = ["aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh"]

    def add(cid, source, expect, target, note=None, math_ids=None, math_types=None,
            counter=None, direct=None):
        row = {
            "id": cid,
            "source": source,
            "expect": expect,
            "target": target,
        }
        if note:
            row["note"] = note
        if math_ids is not None:
            row["mathIds"] = math_ids
        if math_types is not None:
            row["mathTypes"] = math_types
        if counter is not None:
            row["counter"] = counter
        if direct is not None:
            row["direct"] = direct
        if target not in expect and target not in UNCOMPARABLE:
            raise SystemExit(f"{cid}: target {target} not in {expect}")
        out.append(row)

    rot = rng.randrange(8)
    plain = plain[rot:] + plain[:rot]
    words = words[rot:] + words[:rot]

    for i, body in enumerate(plain):
        add(f"code-plain-end-{i}", f"[[code]]{body}[[/code]]",
            ["codePlain", "codeTrailEnd"], "codePlain")
        ws = trails_ws[i % 4]
        add(f"code-plain-ws-{i}", f"[[code]]{body}[[/code]]{ws}",
            ["codePlain", "codeTrailWs"], "codeTrailWs")
    for i, body in enumerate(empty):
        add(f"code-empty-end-{i}", f"[[code]]{body}[[/code]]",
            ["codeEmpty", "codeTrailEnd"], "codeEmpty")
        ws = trails_ws[i % 4]
        add(f"code-empty-ws-{i}", f"[[code]]{body}[[/code]]{ws}",
            ["codeEmpty", "codeTrailWs"], "codeTrailEnd" if False else "codeEmpty")
    # The empty-ws cases belong to codeTrailWs as well as codeEmpty. Give
    # codeTrailEnd its own eight by the plain-end and empty-end rows, which
    # already list it. Retarget four empty-end rows so the target column
    # covers codeTrailEnd without dropping codeEmpty (membership tally
    # counts every expect entry).
    for row in out:
        if row["id"].startswith("code-empty-end-") and int(row["id"].rsplit("-", 1)[1]) % 2 == 0:
            row["target"] = "codeTrailEnd"
        if row["id"].startswith("code-plain-end-") and int(row["id"].rsplit("-", 1)[1]) % 2 == 1:
            row["target"] = "codeTrailEnd"

    for i, ty in enumerate(valid_types):
        body = words[i]
        add(f"math-valid-{i}", math_block(f' type="{ty}"', body),
            ["mathTypeValid"], "mathTypeValid",
            math_ids=[1], math_types=[ty], counter=2)
    for i, body in enumerate(words):
        add(f"math-absent-{i}", math_block("", body),
            ["mathTypeAbsent"], "mathTypeAbsent",
            math_ids=[1], math_types=["align"], counter=2)
    for i, ty in enumerate(invalid_types):
        add(f"math-invalid-{i}", math_block(f' type="{ty}"', words[i]),
            ["mathTypeInvalid"], "mathTypeInvalid",
            math_ids=[1], math_types=[ty], counter=2)
    fatals = [
        r"\input{a}", r"\include{b}", r"INPUT{c}", r"Include {d}",
        r"\input {e}", r"xx\include{f}yy", r"\input{", r"include{z}",
    ]
    for i, body in enumerate(fatals):
        add(f"math-fatal-{i}", math_block("", body),
            ["mathFatal"], "mathFatal", counter=2)
    for i in range(8):
        bad = invalid_types[i]
        src = math_block(f' type="{bad}"', "a") + "\n" + math_block("", words[i])
        add(f"math-counter-{i}", src,
            ["mathTypeInvalid", "mathTypeAbsent"], "mathTypeInvalid",
            math_ids=[1, 2], math_types=[bad, "align"], counter=3)

    mi_plain = ["a+b", "x", "a&b", "a<b>", "say hi", "n0", "zz", "q"]
    for i, body in enumerate(mi_plain):
        add(f"mi-plain-{i}", f"A [[$ {body} $]] B", ["miPlain"], "miPlain")
    sources = [
        ("url", "A [[$ http://example.com/{i} $]] B", ["miSource"]),
        ("email", "A [[$ a{i}@example.com $]] B", ["miSource"]),
        ("edesc", "A [[$ [a{i}@example.com Label] $]] B", ["miSource"]),
        ("two", "A [[$ http://example.com/a http://example.com/b{i} $]] B", ["miSource"]),
        ("nest", "A [[$ [a@example.com http://example.com/{i}] $]] B", ["miSource"]),
        ("url2", "A [[$ https://example.com/p{i} $]] B", ["miSource"]),
        ("email2", "A [[$ b{i}@example.org $]] B", ["miSource"]),
    ]
    for i, (name, tmpl, exp) in enumerate(sources):
        add(f"mi-source-{name}", tmpl.format(i=i, w=words[i]), exp, "miSource")
    # Code's regex is anchored at line start, so [[code]] mid-line inside
    # [[$ ... $]] stays literal text. That is m1-code, a plain body.
    add("mi-plain-code", f"A [[$ [[code]]{words[0]}[[/code]] $]] B",
        ["miPlain"], "miPlain",
        note="Code ^ anchor does not fire mid-line; m1-code is miPlain")
    for i, w in enumerate(words):
        add(f"mi-fallback-{i}", f"A [[$ ``{w}`` $]] B", ["miFallback"], "miFallback")
        add(f"mi-free-{i}", f"A [[$ [[[Page{i}]]] $]] B",
            ["miSuppressFreelink"], "miSuppressFreelink")
        add(f"mi-raw-{i}", f"A [[$ @@{w}@@ $]] B", ["miSuppressRaw"], "miSuppressRaw")
        add(f"mi-nl-{i}", f"A [[$ x\n{w} $]] B", ["miSuppressNewline"], "miSuppressNewline")
        add(f"mi-image-{i}", f"A [[$ [[image http://example.com/{i}.png]] $]] B",
            ["miSuppressImage"], "miSuppressImage")
    add("mi-free-nested", "A [[$ [a@example.com [[[Some Page]]]] $]] B",
        ["miSuppressFreelink"], "miSuppressFreelink")
    add("mi-raw-nested", "A [[$ [a@example.com @@x@@] $]] B",
        ["miSuppressRaw"], "miSuppressRaw")
    add("mi-nl-nested", "A [[$ [a@example.com x\ny] $]] B",
        ["miSuppressNewline"], "miSuppressNewline")
    add("mi-image-url", "A [[$ [[[http://example.com/a]]] $]] B",
        ["miSuppressFreelink"], "miSuppressFreelink")

    for i, arg in enumerate(["abc", "a&b", "zz", "n0"]):
        add(f"mi-depth-{i}", "", ["miDepth"], "miDepth",
            note="direct expandSource depth 65; mirror theorem cm_mi_depth_beats_suppress",
            direct={"kind": "depth", "arg": arg})
        add(f"mi-unknown-{i}", "", ["miUnknown"], "miUnknown",
            note="direct expandSource of a missing id; mirror theorem cm_mi_unknown_keeps",
            direct={"kind": "unknown", "arg": str(800 + i)})
        add(f"mi-cycle-{i}", "", ["miCycle"], "miCycle",
            note="direct expandSource of a self-span; mirror theorem cm_mi_cycle_keeps",
            direct={"kind": "cycle", "arg": arg})
    _ = rng.random()
    return out


def run_php(mode: str, rows: list[dict]) -> list[dict]:
    payload = "".join(json.dumps(r, ensure_ascii=False) + "\n" for r in rows)
    proc = subprocess.run(["php", str(PHP), mode], input=payload, text=True, capture_output=True)
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(f"php {mode} exited {proc.returncode}")
    if proc.stderr.strip():
        sys.stderr.write(proc.stderr)
    return [json.loads(line) for line in proc.stdout.splitlines() if line.strip()]


def run_lean(binary: Path, args: list[str], rows: list[dict]) -> list[dict]:
    payload = "".join(json.dumps(r, ensure_ascii=False) + "\n" for r in rows)
    proc = subprocess.run([str(binary), *args], input=payload, text=True, capture_output=True)
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(f"{binary.name} exited {proc.returncode}")
    return [json.loads(line) for line in proc.stdout.splitlines() if line.strip()]


def as_text(value) -> str:
    if isinstance(value, str):
        return value
    if isinstance(value, dict) and "$bytes" in value:
        return bytes(value["$bytes"]).decode("latin1")
    if value is None:
        return ""
    return json.dumps(value, ensure_ascii=False)


def math_tokens(state: dict) -> list[tuple]:
    found = []
    for tok in state.get("tokens") or []:
        if isinstance(tok, list) and tok and tok[0] == "Math":
            opts = tok[1] if len(tok) > 1 else {}
            found.append((opts.get("id"), opts.get("type")))
    return found


def main() -> None:
    if not LEAN_E2E.exists():
        raise SystemExit(f"missing {LEAN_E2E}")
    if not LEAN_MATH.exists():
        raise SystemExit(f"missing {LEAN_MATH}")
    combined = {"seed_runs": [], "classes": ALL_CLASSES}
    for seed in SEEDS:
        rows = cases(seed)
        (HERE / f"fuzz-cases-{seed}.jsonl").write_text(
            "".join(json.dumps(r, ensure_ascii=False) + "\n" for r in rows))
        e2e_rows = [r for r in rows if "direct" not in r]
        direct_rows = [{"id": r["id"], **r["direct"]} for r in rows if "direct" in r]
        php = {r["id"]: r for r in run_php("e2e", [{"id": r["id"], "source": r["source"]} for r in e2e_rows])}
        php_d = {r["id"]: r for r in run_php("direct", direct_rows)}
        lean = {r["id"]: r for r in run_lean(
            LEAN_E2E, ["--e2e-r43"],
            [{"id": r["id"], "source": r["source"]} for r in e2e_rows])}
        math_rows = [r for r in e2e_rows if r["target"].startswith("math")]
        lean_m = {r["id"]: r for r in run_lean(
            LEAN_MATH, [],
            [{"id": r["id"], "source": r["source"]} for r in math_rows])}
        (HERE / f"php-{seed}.jsonl").write_text(
            "".join(json.dumps(php.get(r["id"], php_d.get(r["id"])), ensure_ascii=False) + "\n" for r in rows))
        (HERE / f"lean-{seed}.jsonl").write_text(
            "".join(json.dumps(lean[r["id"]], ensure_ascii=False) + "\n" for r in e2e_rows))
        (HERE / f"lean-r34-{seed}.jsonl").write_text(
            "".join(json.dumps(lean_m[r["id"]], ensure_ascii=False) + "\n" for r in math_rows))

        by_class = defaultdict(lambda: {"n": 0, "fail": 0, "uncomparable": 0, "ids": []})
        failures = []
        mismatches = []
        uncomparable = []
        for r in rows:
            classes = r["expect"]
            if "direct" in r:
                d = php_d[r["id"]]
                ok = d.get("ok") is True
                for c in classes:
                    rec = by_class[c]
                    rec["n"] += 1
                    rec["uncomparable"] += 1
                uncomparable.append({"id": r["id"], "class": r["target"], "php_ok": ok,
                                     "reason": r.get("note")})
                if not ok:
                    for c in classes:
                        by_class[c]["fail"] += 1
                    failures.append({"id": r["id"], "class": r["target"], "direct": d})
                continue
            p = php[r["id"]]
            l = lean[r["id"]]
            php_classes = sorted(p.get("classes") or [])
            if php_classes != sorted(r["expect"]):
                mismatches.append({"id": r["id"], "expect": sorted(r["expect"]),
                                   "phpClass": php_classes})
            if r["target"] == "mathFatal":
                ok = p.get("fatal") is True and l.get("status") == "fatal"
                if r.get("counter") is not None and p.get("mathId") != r["counter"]:
                    ok = False
            else:
                ok = (p.get("fatal") is not True and "error" not in p
                      and l.get("status") == "ok"
                      and as_text(p.get("output")) == as_text(l.get("output")))
                if "mathIds" in r and p.get("mathIds") != r["mathIds"]:
                    ok = False
                if "mathTypes" in r and p.get("mathTypes") != r["mathTypes"]:
                    ok = False
                if r.get("counter") is not None and p.get("mathId") != r["counter"]:
                    ok = False
                if r["id"] in lean_m:
                    st = lean_m[r["id"]]
                    if st.get("fatal"):
                        ok = False
                    else:
                        got = math_tokens(st)
                        exp = list(zip(r.get("mathIds") or [], r.get("mathTypes") or []))
                        if got != exp or st.get("mathId") != r.get("counter"):
                            ok = False
            for c in classes:
                rec = by_class[c]
                rec["n"] += 1
                if not ok:
                    rec["fail"] += 1
                    if len(rec["ids"]) < 8:
                        rec["ids"].append(r["id"])
            if not ok:
                failures.append({
                    "id": r["id"], "class": r["target"],
                    "php": p.get("output", p.get("error")),
                    "lean": l.get("output", l.get("status")),
                    "phpMath": {"ids": p.get("mathIds"), "types": p.get("mathTypes"),
                                "mathId": p.get("mathId")},
                    "leanMath": {k: lean_m[r["id"]].get(k)
                                 for k in ("mathId", "fatal", "tokens")
                                 } if r["id"] in lean_m else None,
                })
        summary = {
            "seed": seed,
            "cases": len(rows),
            "failures": len(failures),
            "class_mismatch": len(mismatches),
            "uncomparable": len(uncomparable),
            "by_class": {k: dict(v) for k, v in by_class.items()},
            "failure_records": failures[:40],
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
            "by_class": summary["by_class"],
        })
        print(f"seed {seed}: cases {len(rows)} fail {len(failures)} "
              f"class-mismatch {len(mismatches)} uncomparable {len(uncomparable)}")
        for cls in ALL_CLASSES:
            if cls in by_class:
                rec = by_class[cls]
                print(f"  {cls:22} n={rec['n']:3} fail={rec['fail']:2} "
                      f"uncomparable={rec['uncomparable']:2}")
    (HERE / "fuzz-summary.json").write_text(
        json.dumps(combined, indent=2, ensure_ascii=False) + "\n")


if __name__ == "__main__":
    main()
