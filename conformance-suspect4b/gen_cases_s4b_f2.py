import json
cases=[]
def add(cid, src): cases.append({"id":cid,"source":src.strip('\n')})
# isolate the _default: leading-space divergence
add("f2-def-bare", '[[[_default:x]]]')
add("f2-def-space-label", '[[[ _default:x|Label]]]')
add("f2-def-tab", '[[[\t_default:x]]]')
add("f2-def-2space", '[[[  _default:x]]]')
add("f2-def-mid", '[[[x _default:y]]]')
add("f2-def-space-cafe", '[[[ _default:Café]]]')
add("f2-def-space-upper", '[[[ _DEFAULT:X]]]')
add("f2-def-colon-space", '[[[ foo:bar]]]')
add("f2-colon-bare", '[[[foo:bar]]]')
# more source-span edges
add("f2-math-url-dollar", 'A [[$ [http://example.com $] $]] B')
add("f2-math-code-span", 'A [[$ [[code]]x$]] y[[/code]] B')
add("f2-math-two-urls", 'A [[$ [http://a.com x] [http://b.com y] $]] B')
add("f2-math-free-in-email", 'A [[$ [a@b.com [[[Page]]] Label] $]] B')
# more transliteration edges
add("f2-fl-emoji", '[[[Café🙂x]]]')
add("f2-fl-digit-space", '[[[ 123abc]]]')
with open("conformance-suspect4b/cases-f2.jsonl","w",encoding="utf-8") as f:
    for c in cases: f.write(json.dumps(c,ensure_ascii=False)+"\n")
print("wrote",len(cases))
