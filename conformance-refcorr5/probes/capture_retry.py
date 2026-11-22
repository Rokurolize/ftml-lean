#!/usr/bin/env python3
import hashlib, importlib.machinery, importlib.util, json, os, sys, time
sys.path.insert(0, "/home/roku/.agents/skills/wikidot-py-operations/scripts")
loader = importlib.machinery.SourceFileLoader("wikidot_probe", "/home/roku/.agents/skills/wikidot-py-operations/scripts/wikidot-probe")
spec = importlib.util.spec_from_loader("wikidot_probe", loader)
probe = importlib.util.module_from_spec(spec); spec.loader.exec_module(probe)
def fetch_retry(site, fullname, attempts=5):
    last = None
    for i in range(attempts):
        try:
            return probe.extract_page_content(probe.fetch_rendered(site, fullname))
        except Exception as e:
            last = e; time.sleep(3 * (i + 1))
    raise last

def main():
    root = os.path.dirname(os.path.abspath(__file__))
    mapping = json.load(open(os.path.join(root, "spec2-map.json")))
    captures = {}
    with probe.make_client("sandbox-for-codex", "A") as client:
        site = client.site.get("sandbox-for-codex")
        for cid, val in mapping.items():
            fullname = val["fullname"]; src = val.get("source")
            first = fetch_retry("sandbox-for-codex", fullname); time.sleep(0.6)
            second = fetch_retry("sandbox-for-codex", fullname)
            stable = first == second
            saved = probe.read_saved_source(site, fullname)
            matches = None if src is None else saved == src
            valid = stable and matches is not False and saved is not None
            captures[cid] = {"fullname": fullname, "html": first,
                "html_sha256": hashlib.sha256(first.encode()).hexdigest(),
                "source": saved,
                "source_sha256": hashlib.sha256(saved.encode()).hexdigest() if saved else None,
                "saved_source_matches": matches, "stable": stable, "valid": valid}
            print(f"{cid} stable={stable} matches={matches} valid={valid}", flush=True)
            time.sleep(0.6)
    out = os.path.join(root, "spec2-captures.json")
    with open(out, "w", encoding="utf-8") as f:
        json.dump(captures, f, ensure_ascii=False, indent=1); f.write("\n")
    print("wrote", out, "valid:", sum(1 for c in captures.values() if c["valid"]), "/", len(captures))

if __name__ == "__main__":
    main()
