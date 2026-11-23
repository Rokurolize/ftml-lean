#!/usr/bin/env python3
"""Differential driver for the Stage 2 bounded oracle certificate.

Runs the exhaustive canonical skeleton corpus through both sides of TCB-5:
  (a) the totalized Stage 2 model, via lean-ftml-stage2-cli batch mode;
  (b) the local libtidy 5.8.0 oracle, via oracle_batch (byte-identical wrapper
      to conformance-tidy-oracle/tidy_oracle.c).

Comparison is byte-for-byte after the SAME outer-whitespace normalization used
by conformance-tidy-oracle/three_way.py: s.strip(" \\t\\r\\n"). No other
normalization, repair, relaxation or narrowing is applied.

The exhaustive differential fact is an EXTERNAL CERTIFICATE: this script and
its recorded artifacts are the evidence; it is not a Lean theorem.

Usage:
  python3 compare.py --run-model --cli PATH
  python3 compare.py --compare
"""
import argparse
import base64
import hashlib
import json
import os
import struct
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
CORPUS = os.path.join(HERE, "skeletons.txt")
ORACLE_BIN = os.path.join(HERE, "oracle.bin")
MODEL_OUT = os.path.join(HERE, "model.out")
CERT = os.path.join(HERE, "certificate.jsonl")
MANIFEST = os.path.join(HERE, "manifest.json")
WS = " \t\r\n"


def strip_ws(b):
    return b.strip(WS.encode("ascii"))


def read_corpus():
    with open(CORPUS, "rb") as f:
        data = f.read()
    lines = data.split(b"\n")
    if lines and lines[-1] == b"":
        lines.pop()
    return lines


def read_oracle(path):
    with open(path, "rb") as f:
        data = f.read()
    out = []
    off = 0
    while off < len(data):
        (n,) = struct.unpack_from("<I", data, off)
        off += 4
        out.append(data[off:off + n])
        off += n
    if off != len(data):
        raise SystemExit("oracle results framing is truncated")
    return out


def run_model(cli, corpus):
    p = subprocess.run([cli], input=b"\n".join(corpus) + b"\n",
                       stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if p.returncode != 0:
        sys.stderr.write(p.stderr.decode("utf-8", "replace")[-4000:])
        raise SystemExit("model CLI failed with status %d" % p.returncode)
    with open(MODEL_OUT, "wb") as f:
        f.write(p.stdout)
    return p.stdout


def parse_model(stdout, n, framed, sep):
    if framed == "b64":
        lines = stdout.split(b"\n")
        if lines and lines[-1] == b"":
            lines.pop()
        return [base64.b64decode(x) for x in lines]
    if framed == "sep":
        marker = sep.encode("ascii") + b"\n"
        parts = stdout.split(marker)
        if parts and parts[-1] == b"":
            parts.pop()
        return [p[:-1] if p.endswith(b"\n") else p for p in parts]
    lines = stdout.split(b"\n")
    if lines and lines[-1] == b"":
        lines.pop()
    if len(lines) != n:
        raise SystemExit(
            "model line framing mismatch: got %d lines for %d skeletons "
            "(use --framed b64 or --framed sep; transformTotal output can "
            "contain internal newlines)" % (len(lines), n)
        )
    return lines


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--run-model", action="store_true")
    ap.add_argument("--compare", action="store_true")
    ap.add_argument("--cli", default=os.path.join(
        ROOT, "lean-ftml", ".lake", "build", "bin", "lean-ftml-stage2-cli"))
    ap.add_argument("--framed", choices=("plain", "b64", "sep"), default="plain")
    ap.add_argument("--sep", default="@@S2CERT-SEP-7f3a9c@@")
    a = ap.parse_args()
    corpus = read_corpus()
    print("corpus cardinality:", len(corpus))

    if a.run_model:
        run_model(a.cli, corpus)
        print("model output written:", MODEL_OUT)

    if not a.compare:
        return

    oracle = read_oracle(ORACLE_BIN)
    if len(oracle) != len(corpus):
        raise SystemExit("oracle count mismatch: %d vs %d" % (len(oracle), len(corpus)))
    model = parse_model(open(MODEL_OUT, "rb").read(), len(corpus), a.framed, a.sep)
    if len(model) != len(corpus):
        raise SystemExit("model count mismatch: %d vs %d" % (len(model), len(corpus)))

    mismatches = []
    hcert = hashlib.sha256()
    with open(CERT, "w", encoding="ascii") as cf:
        for i, (s, m, o) in enumerate(zip(corpus, model, oracle)):
            ok = strip_ws(m) == strip_ws(o)
            mh = hashlib.sha256(m).hexdigest()
            oh = hashlib.sha256(o).hexdigest()
            row = {"i": i, "m": mh, "o": oh, "ok": ok}
            if not ok:
                row["s"] = s.decode("utf-8")
                row["model"] = m.decode("utf-8", "replace")
                row["oracle"] = o.decode("utf-8", "replace")
                mismatches.append(row)
            line = json.dumps(row, sort_keys=True) + "\n"
            cf.write(line)
            hcert.update(line.encode("ascii"))

    # Minimal witnesses: shortest skeletons first (tokens then bytes).
    def key(r):
        s = r["s"]
        return (s.count("<") + s.count("x"), len(s), s)

    witnesses = [r for r in sorted(mismatches, key=key)[:10]]
    summary = {
        "cases": len(corpus),
        "mismatch_count": len(mismatches),
        "certificate_sha256": hcert.hexdigest(),
        "witnesses": witnesses,
    }
    print(json.dumps(summary, indent=2))
    with open(os.path.join(HERE, "compare-summary.json"), "w") as f:
        json.dump(summary, f, indent=2)
        f.write("\n")


if __name__ == "__main__":
    main()
