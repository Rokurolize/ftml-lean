"""Classify retained NOTES corpus states and live-probe sources.

Corpus states: conformance-r42/notes-prefix-states.jsonl (the R4.1 gate).
Live probes: probe-map JSON under conformance-refphp/notes/, re-parsed
through ref-php/harness/state-restricted.php on the R3.6 rule prefix so
the token table is the reference's, not a reconstruction.
"""

from __future__ import annotations

import json
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from classify import ALL_CLASSES, NOTES_RULES, classify_token

ROOT = Path(__file__).resolve().parents[1]
STATES = ROOT / "conformance-r42" / "notes-prefix-states.jsonl"
NOTES = ROOT / "conformance-refphp" / "notes"
PHP = "php"
RULES = (
    "Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,"
    "Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,"
    "Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite"
)


def tokens_of(rec) -> list[tuple[str, dict]]:
    raw = rec.get("tokens")
    out = []
    if isinstance(raw, list):
        for entry in raw:
            if isinstance(entry, list) and len(entry) == 2:
                rule, opts = entry
                out.append((rule, opts if isinstance(opts, dict) else {}))
    elif isinstance(raw, dict):
        def key(k):
            try:
                return int(k)
            except ValueError:
                return 10**9
        for k in sorted(raw, key=key):
            entry = raw[k]
            if isinstance(entry, list) and len(entry) == 2:
                rule, opts = entry
                out.append((rule, opts if isinstance(opts, dict) else {}))
    return out


def classes_of(rec) -> set[str]:
    footnotes = rec.get("footnotes") or []
    bib_ids = rec.get("bibitemIds") or []
    found = set()
    for rule, opts in tokens_of(rec):
        if rule not in NOTES_RULES:
            continue
        c = classify_token(rule, opts, footnotes, bib_ids)
        if c:
            found.add(c)
    return found


def load_jsonl(path: Path) -> list[dict]:
    rows = []
    for line in path.read_text().splitlines():
        line = line.strip()
        if not line:
            continue
        rows.append(json.loads(line))
    return rows


def collect_probes() -> list[dict]:
    probes = []
    seen = set()
    for path in sorted(NOTES.rglob("probe-map*.json")):
        data = json.loads(path.read_text())
        if not isinstance(data, dict):
            continue
        for key, rec in data.items():
            if not isinstance(rec, dict) or "source" not in rec:
                continue
            name = rec.get("fullname") or key
            if name in seen:
                continue
            seen.add(name)
            probes.append({
                "id": name,
                "source": rec["source"],
                "map": str(path.relative_to(ROOT)),
            })
    # also probe-cases jsonl if they carry sources not in maps
    for path in sorted(NOTES.rglob("probe-cases*.jsonl")):
        for rec in load_jsonl(path):
            if "source" not in rec:
                continue
            name = rec.get("id") or rec.get("fullname")
            if not name or name in seen:
                continue
            seen.add(name)
            probes.append({
                "id": name,
                "source": rec["source"],
                "map": str(path.relative_to(ROOT)),
            })
    return probes


def parse_sources(cases: list[dict]) -> list[dict]:
    driver = ROOT / "ref-php" / "harness" / "state-restricted.php"
    payload = "".join(json.dumps({"id": c["id"], "source": c["source"]}) + "\n" for c in cases)
    proc = subprocess.run(
        ["php", str(driver), RULES],
        input=payload,
        text=True,
        capture_output=True,
        cwd=str(ROOT / "ref-php" / "harness"),
    )
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(f"state-restricted exited {proc.returncode}")
    by_id = {}
    for line in proc.stdout.splitlines():
        if not line.strip():
            continue
        rec = json.loads(line)
        by_id[rec["id"]] = rec
    if proc.stderr.strip():
        sys.stderr.write(proc.stderr)
    return [by_id[c["id"]] for c in cases if c["id"] in by_id]


def main() -> None:
    corpus_hits: dict[str, list[str]] = defaultdict(list)
    for rec in load_jsonl(STATES):
        for c in classes_of(rec):
            corpus_hits[c].append(rec["id"])

    probes = collect_probes()
    print(f"probes {len(probes)}", file=sys.stderr)
    parsed = parse_sources(probes)
    live_hits: dict[str, list[str]] = defaultdict(list)
    for rec in parsed:
        for c in classes_of(rec):
            live_hits[c].append(rec["id"])

    # batteries, for corpus-only ids beyond the r42 join
    battery_hits: dict[str, list[str]] = defaultdict(list)
    battery_cases = []
    for path in sorted(NOTES.rglob("battery.jsonl")):
        for rec in load_jsonl(path):
            if "source" not in rec:
                continue
            battery_cases.append({"id": rec["id"], "source": rec["source"]})
    print(f"battery {len(battery_cases)}", file=sys.stderr)
    for rec in parse_sources(battery_cases):
        for c in classes_of(rec):
            battery_hits[c].append(rec["id"])

    out = {}
    for c in ALL_CLASSES:
        out[c] = {
            "r42": corpus_hits.get(c, []),
            "live": live_hits.get(c, []),
            "battery": battery_hits.get(c, []),
        }
    dest = Path(__file__).resolve().parent / "pin-inventory.json"
    dest.write_text(json.dumps(out, indent=2) + "\n")
    for c in ALL_CLASSES:
        print(f"{c:20} r42={len(out[c]['r42']):4} live={len(out[c]['live']):4} battery={len(out[c]['battery']):4}")


if __name__ == "__main__":
    main()
