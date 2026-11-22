import json, subprocess, pathlib, sys

root = pathlib.Path(__file__).resolve().parents[2]
harness = root / "ref-php" / "harness" / "transform.php"
cases = [json.loads(l) for l in open("cases.jsonl", encoding="utf-8") if l.strip()]

renders = {}
tokens = {}
for case in cases:
    src = case["source"].encode("utf-8")
    r = subprocess.run(["php", str(harness), "render"], input=src,
                       stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    renders[case["id"]] = {
        "output_b64": __import__("base64").b64encode(r.stdout).decode(),
        "stderr": r.stderr.decode("utf-8", "replace"),
        "returncode": r.returncode,
    }
    t = subprocess.run(["php", str(harness), "tokens"], input=src,
                       stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    tokens[case["id"]] = {
        "output": t.stdout.decode("utf-8", "replace"),
        "stderr": t.stderr.decode("utf-8", "replace"),
        "returncode": t.returncode,
    }

with open("ref-raw-render.json", "w", encoding="utf-8") as f:
    json.dump(renders, f, ensure_ascii=False, indent=1)
with open("ref-tokens.json", "w", encoding="utf-8") as f:
    json.dump(tokens, f, ensure_ascii=False, indent=1)
print("raw reference records:", len(renders))
