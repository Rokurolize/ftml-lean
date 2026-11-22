import base64, hashlib, importlib.machinery, importlib.util, json, pathlib, sys, time
import httpx

loader = importlib.machinery.SourceFileLoader(
    "wikidot_probe", "/home/roku/.agents/skills/wikidot-py-operations/scripts/wikidot-probe")
spec = importlib.util.spec_from_loader("wikidot_probe", loader)
probe = importlib.util.module_from_spec(spec)
spec.loader.exec_module(probe)

mapping = json.load(open("map.json", encoding="utf-8"))
out = {}
for cid, value in mapping.items():
    url = f"http://sandbox-for-codex.wikidot.com/{value['fullname']}"
    for attempt in range(4):
        try:
            r = httpx.get(url, headers={"User-Agent": probe.USER_AGENT},
                          timeout=60, follow_redirects=True)
            r.raise_for_status()
            break
        except Exception as exc:
            if attempt == 3:
                raise
            print("retry", cid, type(exc).__name__, flush=True)
            time.sleep(3 * (attempt + 1))
    # Decode latin-1 so every byte survives the probe's string-based extractor.
    latin = r.content.decode("latin-1")
    content = probe.extract_page_content(latin).strip().encode("latin-1")
    out[cid] = {
        "fullname": value["fullname"],
        "raw_b64": base64.b64encode(content).decode(),
        "sha256": hashlib.sha256(content).hexdigest(),
    }
    print(cid, out[cid]["sha256"][:12], flush=True)
    time.sleep(0.2)
with open("raw-captures.json", "w", encoding="utf-8") as f:
    json.dump(out, f, ensure_ascii=False, indent=1)
print("raw captures:", len(out))
