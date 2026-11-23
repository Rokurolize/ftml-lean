import json, glob, sys

# Merge: batch PHP output for non-placeholder cases, fresh-process PHP
# output for placeholder cases (Text_Wiki::addToken's process-global
# static id makes batch numbering for placeholder inputs unsound;
# see REPORT-PROOF-LIST.md). Output in cases.jsonl order.
fresh = {}
for p in glob.glob("/tmp/phout/*.jsonl"):
    with open(p) as f:
        for line in f:
            line = line.strip()
            if line:
                r = json.loads(line)
                fresh[r["id"]] = line
print("fresh records:", len(fresh), file=sys.stderr)
batch = {}
with open("run/php-all.jsonl") as f:
    for line in f:
        line = line.strip()
        if line:
            r = json.loads(line)
            batch[r["id"]] = line
n_fresh = n_batch = 0
with open("cases.jsonl") as f, open("run/php-fresh-all.jsonl", "w") as o:
    for line in f:
        cid = json.loads(line)["id"]
        if cid in fresh:
            o.write(fresh[cid] + "\n"); n_fresh += 1
        else:
            o.write(batch[cid] + "\n"); n_batch += 1
print("merged:", n_fresh, "fresh +", n_batch, "batch", file=sys.stderr)
