#!/usr/bin/env python3
"""Compare the Lean PcreCore observations against the PHP 8.5 oracle
for the full conformance-pcre2 suite.

Buckets (a case lands in exactly one, in this priority order):
  u-boundary : the pattern carries the /u flag.  Byte-mode semantics
               are F3 UnicodeCore's claim, not this suite's; the
               observations are still compared and the agreement
               count recorded, but these cases are excluded from the
               zero-mismatch claim.
  php-error  : preg_* reported an error (preg_last_error_msg other
               than "No error"), preg_match returned false, or the
               replacement came back null.  Counted with the error
               strings; excluded.
  parse-gap  : PcreCore's parser rejected the pattern.  Counted and
               listed by pattern; a coverage gap, not a mismatch.
  main       : compared byte-for-byte against the pilot observation
               encoding.  The suite's claim is: zero mismatches here.

Writes suite_report.json and mismatches.jsonl (first 500 mismatches,
with the differing component identified).  Exit 0 iff the main
bucket has zero mismatches.
"""
import json
import pathlib
import sys

HERE = pathlib.Path(__file__).resolve().parent


def f_nats(bs: bytes) -> str:
    return ",".join(str(b) for b in bs)


def expected_obs(rec, subj: bytes) -> str:
    if rec["matched"] and rec["full"] is not None:
        s, e = rec["full"]
        opts = []
        for g in rec["groups"]:
            opts.append("N" if g is None else "S" + f_nats(subj[g[0]:g[1]]))
        found = f"S{s}|{e}|{f_nats(subj[s:e])}|" + ";".join(opts)
    else:
        found = "N"
    allm = ";".join(f"{a}|{b}" for a, b in rec["all"])
    rep = f_nats(bytes.fromhex(rec["replaced_hex"]))
    return found + "##" + allm + "##" + rep


def main() -> int:
    patterns = json.loads((HERE / "patterns.json").read_text())
    meta = json.loads((HERE / "gen_meta.json").read_text())
    cases = [json.loads(l) for l in (HERE / "cases.jsonl").read_text().splitlines() if l]
    php = [json.loads(l) for l in (HERE / "php_results.jsonl").read_text().splitlines() if l]
    lean = (HERE / "lean_obs.txt").read_text().splitlines()
    assert len(cases) == len(php) == len(lean), (len(cases), len(php), len(lean))

    # Part boundaries in generation order (A, then B, then C).
    bounds = []
    acc = 0
    for part in ("A", "B", "C"):
        acc += meta["part_counts"][part]
        bounds.append((part, acc))

    def part_of(i):
        for part, end in bounds:
            if i < end:
                return part
        return "?"

    buckets = {"main": 0, "u-boundary": 0, "php-error": 0, "parse-gap": 0,
               "both-fail": 0}
    u_agree = 0
    mismatches = []
    mismatch_by_part = {"A": 0, "B": 0, "C": 0}
    php_errors = {}
    parse_gaps = {}
    both_fail_patterns = {}
    compared_by_part = {"A": 0, "B": 0, "C": 0}
    for i, (c, rec, obs) in enumerate(zip(cases, php, lean)):
        pm = patterns[c["p"]]
        subj = bytes.fromhex(c["s"])
        if "u" in pm["flags"]:
            buckets["u-boundary"] += 1
            if rec["error"] == "No error" and not rec["match_false"] \
                    and rec["replaced_hex"] is not None \
                    and obs != "PARSE_FAIL" and obs == expected_obs(rec, subj):
                u_agree += 1
            continue
        php_fail = rec["error"] != "No error" or rec["match_false"] \
            or rec["replaced_hex"] is None
        lean_fail = obs == "PARSE_FAIL"
        if php_fail and lean_fail:
            buckets["both-fail"] += 1
            both_fail_patterns[c["p"]] = \
                both_fail_patterns.get(c["p"], 0) + 1
            continue
        if php_fail:
            buckets["php-error"] += 1
            key = rec["error"] if rec["error"] != "No error" else "match_false"
            php_errors[key] = php_errors.get(key, 0) + 1
            continue
        if lean_fail:
            buckets["parse-gap"] += 1
            parse_gaps[c["p"]] = parse_gaps.get(c["p"], 0) + 1
            continue
        buckets["main"] += 1
        part = part_of(i)
        compared_by_part[part] += 1
        exp = expected_obs(rec, subj)
        if obs != exp:
            mismatch_by_part[part] += 1
            if len(mismatches) < 500:
                es = exp.split("##")
                os_ = obs.split("##")
                comp = [k for k in range(3) if es[k] != os_[k]]
                mismatches.append({
                    "id": i, "part": part, "pattern": c["p"],
                    "components": comp, "expected": exp, "lean": obs})
    report = {
        "total_cases": len(cases),
        "patterns": len(patterns),
        "buckets": buckets,
        "u_boundary_agreements": u_agree,
        "compared_by_part": compared_by_part,
        "mismatches_total": sum(mismatch_by_part.values()),
        "mismatches_by_part": mismatch_by_part,
        "php_errors": php_errors,
        "parse_gap_patterns": {str(k): v for k, v in sorted(parse_gaps.items())},
        "both_fail_patterns": {str(k): v for k, v in
                               sorted(both_fail_patterns.items())},
        "php_version": php[0]["php_version"] if php else None,
        "pcre_version": php[0]["pcre_version"] if php else None,
        "cases_sha256": meta["cases_sha256"],
    }
    (HERE / "suite_report.json").write_text(json.dumps(report, indent=1) + "\n")
    with (HERE / "mismatches.jsonl").open("w") as f:
        for m in mismatches:
            f.write(json.dumps(m) + "\n")
    print(json.dumps(report, indent=1))
    return 0 if report["mismatches_total"] == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
