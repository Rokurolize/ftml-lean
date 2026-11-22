import base64, json, re

ref = json.load(open("ref-raw-render.json", encoding="utf-8"))
raw = json.load(open("raw-captures.json", encoding="utf-8"))
cap = json.load(open("captures.json", encoding="utf-8"))

def span(s):
    m = re.search(r'<span class="wiki-email">(.*?)</span>', s, re.S)
    return m.group(1) if m else None

raw_match = 0
text_match = 0
for cid in ref:
    rb = base64.b64decode(ref[cid]["output_b64"]).rstrip(b"\n")
    lb = base64.b64decode(raw[cid]["raw_b64"])
    rt = rb.decode("utf-8", "replace")
    lt = lb.decode("utf-8", "replace")
    raw_ok = rb == lb
    text_ok = rt == lt
    raw_match += raw_ok
    text_match += text_ok
    v = cap.get(cid, {})
    flags = f"valid={v.get('valid')} stable={v.get('stable')} src={v.get('saved_source_matches')}"
    tag = "RAW" if raw_ok else ("TEXT" if text_ok else "DIFF")
    print(f"{tag:4} {cid:22} {flags}")
    if not text_ok:
        print("  ref :", repr(rt))
        print("  live:", repr(lt))
        print("  span ref:", repr(span(rt)), " span live:", repr(span(lt)))
print(f"raw byte match {raw_match}/{len(ref)}; decoded-text match {text_match}/{len(ref)}")
