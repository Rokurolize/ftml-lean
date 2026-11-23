#!/usr/bin/env python3
"""Run the full conformance-pcre2 torture suite end to end.

Steps: generate cases (gen_cases.py) -> PHP 8.5 oracle
(php_oracle_suite.php) -> Lean exe (lean-ftml-conformance-pcre2,
built through the coordinator's serial wrapper) -> comparison
(suite_compare.py).  The Lean observation run is a compiled
executable, not an elaboration; the build goes through lean-build.sh
like every Lean invocation in this programme.
"""
import json
import pathlib
import subprocess
import sys

HERE = pathlib.Path(__file__).resolve().parent
ROOT = HERE.parent
LEAN_DIR = ROOT / "lean-ftml"
WRAPPER = pathlib.Path.home() / ".local/state/wikijump/muse-bhl/tools/lean-build.sh"
EXE = LEAN_DIR / ".lake/build/bin/lean-ftml-conformance-pcre2"


def run(cmd, **kw):
    print("+", " ".join(str(c) for c in cmd), flush=True)
    r = subprocess.run(cmd, check=False, **kw)
    if r.returncode != 0:
        print(f"FAILED rc={r.returncode}: {cmd}", file=sys.stderr)
        sys.exit(r.returncode)


def main() -> int:
    if "--regen" in sys.argv or not (HERE / "cases.jsonl").exists():
        run([sys.executable, str(HERE / "gen_cases.py")])
    pats = json.loads((HERE / "patterns.json").read_text())
    with (HERE / "patterns.txt").open("w") as f:
        for pm in pats:
            f.write(pm["hex"] + "\n")
    cases = [json.loads(l) for l in (HERE / "cases.jsonl").read_text().splitlines() if l]
    with (HERE / "cases.txt").open("w") as f:
        for c in cases:
            f.write(f"{c['p']}\t{c['s']}\n")
    with (HERE / "php_results.jsonl").open("w") as out:
        run(["php", str(HERE / "php_oracle_suite.php"),
             str(HERE / "patterns.json"), str(HERE / "cases.jsonl")],
            stdout=out)
    run([str(WRAPPER), str(LEAN_DIR), "lake", "build",
         "lean-ftml-conformance-pcre2"])
    with (HERE / "lean_obs.txt").open("w") as out:
        run([str(EXE), str(HERE / "patterns.txt"), str(HERE / "cases.txt")],
            stdout=out)
    r = subprocess.run([sys.executable, str(HERE / "suite_compare.py")],
                       check=False)
    return r.returncode


if __name__ == "__main__":
    sys.exit(main())
