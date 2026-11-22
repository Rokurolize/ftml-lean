import json
cases = []
def add(cid, src):
    assert '\r' not in src
    cases.append({"id": cid, "source": src.strip('\n')})

# --- A. Email / Date (post REFCORR5 batches 3 and 4) ---
add("em-dquote", 'X [a@b.com say "hi" \'ok\' & <x>] Y')
add("em-quote-only", "X [a@b.com a'b\"c] Y")
add("em-amp-lt", "X [a@b.com <b>&amp;</b>] Y")
add("dt-g", '[[date 0 format="%g"]]')
add("dt-gmid", '[[date 0 format="x%gy"]]')
add("dt-pctres", '[[date 0 format="a+b/c@d"]]')
add("dt-nonascii", '[[date 0 format="café"]]')
add("dt-zeros", '[[date 00000123]]')
add("dt-clamp", '[[date 99999999999999999999]]')
add("dt-clampneg", '[[date -99999999999999999999]]')
add("dt-negzero", '[[date -0]]')
add("dt-rawfmt", '[[date 0 format="%%g"]]')

# --- B. Freelink / Url / Interwiki (post transliteration + escaping + flTarget) ---
add("fl-mixed", '[[[Café123]]] [[[ÄÖÜabc]]] [[[ab©cd]]] [[[Café Naïve]]]')
add("fl-digit", '[[[123abc]]] [[[3.14]]] [[[007]]]')
add("fl-default-nonascii", '[[[_default:Café]]] [[[_DEFAULT:ÄÖÜ]]] [[[ _default:x]]]')
add("fl-target-quote", '[[[*http://example.com|say "hi"]]]')
add("fl-star-local", '[[[*Local Page]]]')
add("iw-case-standalone", '[Wikipedia:Test] [GOOGLE:q]')
add("iw-case-descr", '[Wikipedia:Test Label] [GOOGLE:q Label]')
add("iw-known", '[wikipedia:Test] [wikipedia:Test Label]')
add("iw-pagechars", '[wikipedia:a+b:c;d] [wikipedia:a--b]')

# --- C. Colortext (post parse-time validation) ---
add("ct-pct", '##rgb(50%,0%,0%)|x##')
add("ct-emptybody", '##red|##')
add("ct-dot", '##red.5|x##')
add("ct-slash", '##red/2|x##')
add("ct-hex6", '##AABBCC|x##')

# --- D. Span / Size / Gallery (post batch 8 shelf) ---
add("sp-upper-u", '[[span id="U-foo"]]x[[/span]]')
add("sp-u-dash", '[[span id="u-"]]x[[/span]]')
add("sz-case", 'A [[size 12PX]]X[[/size]] B')
add("sz-dots", '[[size ...px]]X[[/size]] [[size 1.2.3em]]Y[[/size]] [[size .em]]Z[[/size]]')
add("sz-upper2", 'A [[size 12Em]]Y[[/size]] B')
add("sp-u-lower", '[[span id="u-foo"]]x[[/span]]')
add("sp-u-upper2", '[[span id="UU-foo"]]x[[/span]]')
add("gl-target-leak", '[[gallery size=thumbnail]]\n: *a.png\n: b.png\n: c.png\n[[/gallery]]')
add("gl-link-star", '[[gallery]]\n: a.png link="*Target"\n: b.png\n[[/gallery]]')
add("gl-link-scheme", '[[gallery]]\n: a.png link="://x"\n[[/gallery]]')

# --- E. Mathinline source-span (post REFCORR6) ---
add("m1-nested-math", 'A [[$ a [[$ b $]] c $]] B')
add("m1-newline", 'A [[$ x\ny $]] B')
add("m1-code", 'A [[$ [[code]]x[[/code]] $]] B')
add("m1-code-close", 'A [[$ [[code]]x[[/code]]$]] B')
add("m1-two-rules", 'A [[$ [http://example.com [a@b.com Lab]] $]] B')
add("m1-suppress-nested", 'A [[$ [http://example.com [[[Page]]]] $]] B')
add("m1-raw", 'A [[$ @@x@@ $]] B')
add("m1-raw4", 'A [[$ @@@@ $]] B')
add("m1-image", 'A [[$ [[image http://example.com/x.png]] $]] B')

with open("conformance-suspect4b/cases.jsonl", "w", encoding="utf-8") as f:
    for c in cases:
        f.write(json.dumps(c, ensure_ascii=False) + "\n")
print("wrote", len(cases), "cases")
