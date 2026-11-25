#!/usr/bin/env python3
"""Generate the adjudicated G5 anchoring table and findings from retained results."""
import json
from pathlib import Path
OUT=Path(__file__).resolve().parent
RULES=['Footnote','Footnoteitem','Footnoteblock','Bibitem','Bibliography','Bibcite','Paragraph','Newline','Break','Center','Horiz','Separator','Clearfloat','Blockquote','Note','Divalign','Comment','Delimiter','Url','Email','Mathinline','Interwiki','Colortext','Strong','Emphasis','Underline','Strikethrough','Tt','Superscript','Subscript','Typography','Tighten','Raw','Rawold','Form','Heading','Toc','List','Deflist','Table','Tableadv','Equationreference','Anchor','Collapsible','Tabview','Button','Iframe','Date','File','Size','Span','Div','Code','Embed','Freelink','Module','Module654','Math','Image','Gallery','User','Html']
GENUINE={'corpus/prose/toc74-clear-float/tok3':'G5-F1','corpus/prose/toc74-clear-float/tok4':'G5-F1','corpus/prose/x-anchor-across-containers/tok7':'G5-F1','corpus/r48/freelink-exist2-empty-label/tok0':'G5-F2','synthetic/footnoteitem-leading-empty-raw':'G5-F3'}
def blocked_reason(case):
    cid=case['id']; rule=case['rule']
    if rule=='User' and cid!='synthetic/user-empty':
        return 'positive user lookup: missing a positive DB_OzoneUserPeer/WDRenderUtils response representable in Lean RenderEnv; the PHP stub also manufactures fallback users, so these cases are not aligned evidence'
    if cid=='synthetic/code-type-php':
        return 'typed code: missing an independent Text_Highlighter response for type php and this body; Lean harnessEnv exposes only the named boundary marker'
    if cid=='synthetic/gallery-local-pagename':
        return 'local gallery: missing DB_FilePeer image-attachment rows and page context representable through renderGalleryWithEnv (which receives no conf/doc page segment)'
    return None
RULE_STATUS={
 'Toc':('MISMATCH-FOUND','G5-F1: item sentinel is four NULs in mirror/spec, two in PHP'),
 'Freelink':('MISMATCH-FOUND','G5-F2: existing-page textFromTitle fallback to unix name is wrong when no title exists'),
 'Footnoteitem':('MISMATCH-FOUND','G5-F3: renderRefSpec lacks the token-table lookup needed for empty-Raw placeholder bodies'),
 'Code':('PARTIAL-BLOCKED','untyped/plain branches anchored; typed branches need an independent Text_Highlighter output'),
 'Math':('PARTIAL-BLOCKED','unsupported-environment and no-op-renderer failure branches anchored; successful LaTeX/PNG rendering needs the external LatexRenderer/filesystem result'),
 'Image':('PARTIAL-BLOCKED','local/remote URL construction and absent-attachment :first branch anchored; positive attachment and Flickr branches need DB_FilePeer/Flickr responses representable in RenderEnv'),
 'Gallery':('PARTIAL-BLOCKED','explicit sources rows anchored; local attachment and Flickr branches need DB_FilePeer/Flickr/page state representable in RenderEnv'),
 'User':('PARTIAL-BLOCKED','degenerate negative lookup anchored; positive user rendering needs DB_OzoneUserPeer plus full WDRenderUtils user record/output state'),
}
def bstr(v):
    b=v.encode() if isinstance(v,str) else bytes(v['$bytes'])
    return b
def show(v):
    b=bstr(v)
    try: s=b.decode('utf-8'); esc=json.dumps(s,ensure_ascii=False)
    except UnicodeDecodeError: esc='<non-UTF-8>'
    return f'utf8/escaped: `{esc}`\nhex: `{b.hex()}`'
rows=[json.loads(x) for x in (OUT/'comparison-details.jsonl').read_text().splitlines()]
cases={json.loads(x)['id']:json.loads(x) for x in (OUT/'cases.jsonl').read_text().splitlines()}
byid={r['id']:r for r in rows}
per={r:{'cases':0,'matches':0,'mismatches':0,'blocked':0,'finding':set()} for r in RULES}
for r in rows:
    c=cases[r['id']]; st=per[r['rule']]; st['cases']+=1
    br=blocked_reason(c)
    if br: st['blocked']+=1
    elif r['id'] in GENUINE:
        st['mismatches']+=1; st['finding'].add(GENUINE[r['id']])
    elif r['status']=='match': st['matches']+=1
    else: raise SystemExit('unadjudicated non-match '+r['id'])
counts={'ANCHORED':0,'MISMATCH-FOUND':0,'PARTIAL-BLOCKED':0}
lines=['# G5 render anchoring table','',
 'Direct token-level differential over the retained cases in `cases.jsonl`. A byte-match means the PHP reference token renderer, `renderMirrorEnv`, and `renderRefSpec` all produced the same bytes. `mirrorTokenAware` is retained as an additional observation for the two token-table-sensitive rules; it is not used to hide a `renderRefSpec` mismatch. Blocked cases are excluded from both match and mismatch counts.','',
 '| rule | cases | byte-matches | mismatch cases | blocked cases | status / blocked or finding reason |','|---|---:|---:|---:|---:|---|']
for rule in RULES:
    st=per[rule]; status,reason=RULE_STATUS.get(rule,('ANCHORED',''))
    counts[status]+=1
    if st['finding'] and not reason.startswith('; '.join(sorted(st['finding']))+':'):
        reason='; '.join(sorted(st['finding']))+': '+reason
    lines.append(f"| {rule} | {st['cases']} | {st['matches']} | {st['mismatches']} | {st['blocked']} | {status}; {reason} |")
lines += ['',f"Summary: {counts['ANCHORED']} rules ANCHORED, {counts['MISMATCH-FOUND']} rules MISMATCH-FOUND, {counts['PARTIAL-BLOCKED']} rules PARTIAL-BLOCKED. Across 421 retained cases: 405 unblocked byte-matches, 5 genuine mismatch cases, 11 blocked cases. Html is included explicitly: the harness enumerates all 62 RenderRuleId constructors rather than the older mirroredRenderRules driver list, which omits Html.",'']
(OUT/'ANCHORING.md').write_text('\n'.join(lines),encoding='utf-8')

fd=['# G5 render mismatch findings','',
 'No Lean or PHP implementation file was edited to force agreement. The only corrections made during harness construction were in the lane-owned comparison harness itself (canonical document-state pair encoding and PHP null-token-result normalization to the empty bytes concatenated by `Text_Wiki::render`).','']
fd += ['## G5-F1 — Toc item sentinel width is doubled in both Lean render paths','',
 'PHP source adjudication: `ref-php/text-wiki/Text/Wiki/Render/Xhtml/Toc.php:105-125` sets `$d = "\\x00"` and writes exactly `$d$d` in both `item_start` and `item_end`: two NUL bytes at each sentinel. `LeanFtml/RenderCore.lean` defines `tocStripDelim` as `[0, 0, 0, 0]`, so both the mirror and spec emit four. Both Lean sides are wrong against the PHP source text.','']
for cid in ['corpus/prose/toc74-clear-float/tok3','corpus/prose/toc74-clear-float/tok4','corpus/prose/x-anchor-across-containers/tok7']:
 r=byid[cid]; c=cases[cid]
 fd += [f'### case `{cid}`','', 'input options: `'+json.dumps(c['options'],ensure_ascii=False)+'`','', 'PHP: '+show(r['php']),'','mirror: '+show(r['mirror']),'','spec: '+show(r['spec']),'']
fd += ['## G5-F2 — Freelink textFromTitle fallback omits the unix-name fallback','',
 'PHP source adjudication: `Freelink.php:102-106` replaces the empty-pipe text for an existing page with `$pageObj->getTitleOrUnixName()`. For a page with no authored title this is the page unix name. The Lean mirror/spec instead use `(env.pageTitle page).getD text` (`RefRender.lean:99` and `:895`), so a missing title leaves the literal pipe text. The positive special-character title branch does anchor (`synthetic/freelink-title-target`); the no-title fallback is wrong in both Lean sides.','']
cid='corpus/r48/freelink-exist2-empty-label/tok0'; r=byid[cid]; c=cases[cid]
fd += [f'### case `{cid}`','', 'input options: `'+json.dumps(c['options'],ensure_ascii=False)+'`','', 'PHP: '+show(r['php']),'','mirror: '+show(r['mirror']),'','spec: '+show(r['spec']),'']
fd += ['## G5-F3 — renderRefSpec cannot model the Footnoteitem token-table lookup','',
 'PHP source adjudication: `Footnoteitem.php:67-84` rewrites placeholder references through `$this->wiki->tokens` before deciding whether the separator space is visible; an empty Raw token is stripped. The retained case body is exactly placeholder token 0, whose token entry is `Raw` with empty text. PHP therefore emits no separator space. `dispatchRenderR41TokenAware` with the same lookup does match PHP, but `renderRefSpec` hard-codes the no-lookup form through `footnoteLeadVisible (fun _ => none)` and the env mirror entrypoint likewise lacks the table, so both emit a spurious space. This is a spec/token-composition finding, not a defect in the token-aware mirror observation.','']
cid='synthetic/footnoteitem-leading-empty-raw'; r=byid[cid]; c=cases[cid]
fd += [f'### case `{cid}`','', 'input options: `'+json.dumps(c['options'],ensure_ascii=False)+'`','', 'input doc: `'+json.dumps(c['doc'],ensure_ascii=False)+'`','', 'input tokens: `'+json.dumps(c.get('tokens'),ensure_ascii=False)+'`','', 'PHP: '+show(r['php']),'','renderMirrorEnv: '+show(r['mirror']),'','mirrorTokenAware: '+show(r['mirrorTokenAware']),'','spec: '+show(r['spec']),'']
(OUT/'FINDINGS.md').write_text('\n'.join(fd),encoding='utf-8')
print('wrote ANCHORING.md and FINDINGS.md')
