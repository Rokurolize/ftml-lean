#!/usr/bin/env python3
"""Run the F2 PCRE2 pilot: PHP 8.5 oracle vs LeanFtml.PcreCore.

All Lean elaboration goes through the coordinator's serial wrapper.  The
report records per-dimension counts and every mismatch verbatim; a mismatch
is never silently dropped or recast as a pass.
"""
import json
import os
import pathlib
import subprocess
import sys

HERE = pathlib.Path(__file__).resolve().parent
UNIT = HERE.parent
WRAPPER = pathlib.Path.home() / ".local/state/wikijump/muse-bhl/tools/lean-build.sh"
LEANCWD = pathlib.Path.home() / ".local/state/wikijump/muse-bhl/lean-ftml-coordinator/lean-ftml"
CASES = json.loads((HERE / "pilot_cases.json").read_text())


def run(cmd, **kw):
    return subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE,
                          text=True, check=False, **kw)


def f_nats(bs: bytes) -> str:
    return ",".join(str(b) for b in bs)


def expected_flat(pat) -> str:
    subj = pat["subject"].encode("latin-1")
    if pat["matched"] and pat["full"] is not None:
        s, e = pat["full"]
        opts = []
        for g in pat["groups"]:
            opts.append("N" if g is None else "S" + f_nats(subj[g[0]:g[1]]))
        found = f"S{s}|{e}|{f_nats(subj[s:e])}|" + ";".join(opts)
    else:
        found = "N"
    allm = ";".join(f"{a}|{b}" for a, b in pat["all"])
    rep = f_nats(pat["replaced"].encode("latin-1"))
    return f"{found}##{allm}##{rep}"


def main() -> int:
    # 1. PHP 8.5 ground truth
    php = run(["php", str(HERE / "php_oracle.php"), str(HERE / "pilot_cases.json")])
    if php.returncode != 0:
        print(php.stderr, file=sys.stderr)
        return 2
    (HERE / "php_results.json").write_text(php.stdout)
    results = json.loads(php.stdout)["cases"]

    # 2. Generate and elaborate the Lean pilot
    gen = run([sys.executable, str(HERE / "make_lean_pilot.py")])
    print(gen.stdout.strip())
    env = dict(os.environ)
    env["LEAN_PATH"] = str(UNIT / "LeanFtml")
    env["LAKE_JOBS"] = "2"
    lean = run([str(WRAPPER), str(LEANCWD), "lake", "env", "lean",
                str(HERE / "PcreCorePilot.lean")], env=env)
    (HERE / "lean_pilot.log").write_text(lean.stdout + "\n[stderr]\n" + lean.stderr)
    if lean.returncode != 0:
        print("LEAN PILOT ELABORATION FAILED", file=sys.stderr)
        print("\n".join(l for l in lean.stdout.splitlines() if "error" in l)[-4000:],
              file=sys.stderr)
        print(lean.stderr[-2000:], file=sys.stderr)
        return 3

    observed = {}
    for line in lean.stdout.splitlines():
        if line.startswith("CASE "):
            parts = line.split(" ", 2)
            observed[parts[1]] = parts[2].strip() if len(parts) > 2 else ""

    mismatches = []
    by_construct = {}
    for r in results:
        cid = r["id"]
        cons = r["construct"]
        want = expected_flat(r)
        got = observed.get(cid, "<MISSING>")
        ok = (want == got)
        b = by_construct.setdefault(cons, {"total": 0, "pass": 0})
        b["total"] += 1
        if ok:
            b["pass"] += 1
        else:
            mismatches.append({"id": cid, "construct": cons,
                               "pattern": r["pattern"], "subject": r["subject"],
                               "php_expected": want, "lean_observed": got,
                               "php_error": r["error"]})

    total = len(results)
    passed = total - len(mismatches)
    report = {
        "php_version": results[0]["php_version"] if results else None,
        "pcre_version": results[0]["pcre_version"] if results else None,
        "total_cases": total,
        "passed": passed,
        "mismatches": len(mismatches),
        "by_construct": by_construct,
        "mismatch_detail": mismatches,
    }
    (HERE / "pilot_report.json").write_text(json.dumps(report, indent=2) + "\n")
    print(f"[pilot] PHP {report['php_version']} / PCRE2 {report['pcre_version']}")
    print(f"[pilot] cases={total} pass={passed} mismatch={len(mismatches)}")
    for c, b in sorted(by_construct.items()):
        print(f"[pilot]   {c}: {b['pass']}/{b['total']}")
    for m in mismatches:
        print(f"[pilot] MISMATCH {m['id']} ({m['construct']}) "
              f"pattern={m['pattern']} subject={m['subject']!r}\n"
              f"        php ={m['php_expected']}\n"
              f"        lean={m['lean_observed']}")
    print("[pilot] RESULT " + ("OK" if not mismatches else "DIFFERENCES"))
    return 0 if not mismatches else 1


if __name__ == "__main__":
    sys.exit(main())
