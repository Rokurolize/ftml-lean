#!/usr/bin/env python3
"""Build the retained G5 direct-render case set.

The corpus token inputs are extracted from the PHP reference parser, then
canonicalized case-locally (token ids and embedded placeholder references are
renumbered together).  The output cases are explicit token-level inputs:
rule, options, document state, render configuration and, for the two
token-table-sensitive rules, the token table the PHP renderer reads.
"""
import json, subprocess, sys, hashlib, os
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
OUT = Path(__file__).resolve().parent
PHP = ROOT / "ref-php" / "harness" / "render-token-g5.php"
CORPORA = [
    ("r48", ROOT / "conformance-r48" / "cases.jsonl"),
    ("notes", ROOT / "conformance-r48" / "notes365-cases.jsonl"),
    ("prose", ROOT / "conformance-r48" / "prose740-cases.jsonl"),
    ("pooled", ROOT / "conformance-capstone" / "pooled-cases.jsonl"),
]
RULE_ORDER = ['Footnote','Footnoteitem','Footnoteblock','Bibitem','Bibliography','Bibcite','Paragraph','Newline','Break','Center','Horiz','Separator','Clearfloat','Blockquote','Note','Divalign','Comment','Delimiter','Url','Email','Mathinline','Interwiki','Colortext','Strong','Emphasis','Underline','Strikethrough','Tt','Superscript','Subscript','Typography','Tighten','Raw','Rawold','Form','Heading','Toc','List','Deflist','Table','Tableadv','Equationreference','Anchor','Collapsible','Tabview','Button','Iframe','Date','File','Size','Span','Div','Code','Embed','Freelink','Module','Module654','Math','Image','Gallery','User','Html']
MAX_PER_RULE = {r: 8 for r in RULE_ORDER}
MAX_PER_RULE['Typography'] = 11
MAX_PER_RULE['Paragraph'] = 2
MAX_PER_RULE['Newline'] = 1
MAX_PER_RULE['Break'] = 1
MAX_PER_RULE['Tighten'] = 1
CONTEXT_RULES = {'Footnoteitem', 'Gallery'}

EXTRA_SOURCES = [
    {"id":"extra/html-plain","source":"[[html]]\n<b>inert</b>\n[[/html]]\n"},
    {"id":"extra/html-class-style","source":"[[html class=\"extra\" style=\"width: 320px\"]]\n<i>x</i>\n[[/html]]\n"},
    {"id":"extra/image-pagename","source":"[[image photo.png size=\"medium\" link=\"x\" alt=\"Alt\"]]","pageName":"case-page"},
    {"id":"extra/file-pagename","source":"[[file my file.txt]]","pageName":"case-page"},
    {"id":"extra/user-plain","source":"[[user john]]"},
    {"id":"extra/user-image","source":"[[user john image=\"yes\"]]"},
    {"id":"extra/math-invalid","source":"[[math foobar]]x[[/math]]"},
    {"id":"extra/code-plain","source":"[[code]]if (a < b) {\n  x;\n}[[/code]]"},
    {"id":"extra/code-php","source":"[[code type=\"php\"]]if (a < b) {\n  x;\n}[[/code]]"},
    {"id":"extra/gallery-rows","source":"[[gallery size=\"small\" sources=\": http://example.com/a.png alt=\"A\"\n: other-page/b.png\"]]"},
]

def is_bytes_wire(v):
    return isinstance(v, dict) and set(v) == {'$bytes'} and isinstance(v['$bytes'], list)

def rewrite_bytes(bs, renum):
    out=[]; i=0
    while i < len(bs):
        if bs[i] == 255:
            j=i+1
            while j < len(bs) and 48 <= bs[j] <= 57: j += 1
            if j > i+1 and j < len(bs) and bs[j] == 255:
                old=int(bytes(bs[i+1:j]).decode('ascii'))
                if old in renum:
                    out.append(255); out.extend(str(renum[old]).encode('ascii')); out.append(255); i=j+1; continue
        out.append(bs[i]); i += 1
    return out

def rewire(v, renum):
    if is_bytes_wire(v): return {'$bytes': rewrite_bytes(v['$bytes'], renum)}
    if isinstance(v, list): return [rewire(x, renum) for x in v]
    if isinstance(v, dict): return {k: rewire(x, renum) for k,x in v.items()}
    return v

def token_items(tokens):
    if isinstance(tokens, dict): return sorted(((int(k),v) for k,v in tokens.items()), key=lambda p:p[0])
    return list(enumerate(tokens))

def canon_extraction(rec):
    toks=rec.get('tokens', [])
    items=token_items(toks)
    renum={old:i for i,(old,_) in enumerate(items)}
    rec=dict(rec)
    rec['tokens']=[rewire(v,renum) for _,v in items]
    ts=rec.get('tokenSource', {})
    if isinstance(ts, dict):
        rec['tokenSource']={str(renum.get(int(k),int(k))):rewire(v,renum) for k,v in ts.items() if str(k).lstrip('-').isdigit()}
    elif isinstance(ts, list):
        rec['tokenSource']=[rewire(v,renum) for v in ts]
    rec['doc']=rewire(rec.get('doc',{}),renum)
    return rec, renum

def read_source_cases():
    out=[]; seen=set()
    for prefix,path in CORPORA:
        for line in path.open(encoding='utf-8'):
            if not line.strip(): continue
            rec=json.loads(line); cid=f"{prefix}/{rec['id']}"
            if cid in seen: continue
            seen.add(cid)
            row={'id':cid,'source':rec.get('source','')}
            if 'tags' in rec: row['tags']=rec['tags']
            out.append(row)
    out.extend(EXTRA_SOURCES)
    return out

def extract(rows, cache):
    if cache.exists():
        return [json.loads(x) for x in cache.read_text(encoding='utf-8').splitlines() if x.strip()]
    data=''.join(json.dumps(r,ensure_ascii=False)+'\n' for r in rows)
    cp=subprocess.run(['php',str(PHP),'extract'],input=data,text=True,capture_output=True,cwd=ROOT,check=True)
    cache.write_text(cp.stdout,encoding='utf-8')
    return [json.loads(x) for x in cp.stdout.splitlines() if x.strip()]

def sig_for(rule, opts, doc):
    relevant={'footnotes':doc.get('footnotes'), 'bibitems':doc.get('bibitems'), 'bibitemIds':doc.get('bibitemIds'), 'equations':doc.get('equations'), 'mathId':doc.get('mathId'), 'pageName':doc.get('pageName')}
    return hashlib.sha256(json.dumps([opts,relevant],sort_keys=True,ensure_ascii=False,separators=(',',':')).encode()).hexdigest()

def empty_doc():
    return {'footnotes':{}, 'bibitems':{}, 'bibitemIds':{}, 'equations':{}, 'mathId':None, 'pageName':'', 'page':{'name':'','tags':{}}}

def synthetic_cases():
    base={'conf':{}, 'doc':empty_doc(), 'provenance':{'kind':'synthetic'}}
    return [
      dict(base,id='synthetic/delimiter-ff',rule='Delimiter',key=None,options={'text':{'$bytes':[255]}},provenance={'kind':'synthetic','note':'raw delimiter byte; unreachable from valid-UTF8 parse'}),
      dict(base,id='synthetic/delimiter-text',rule='Delimiter',key=None,options={'text':'plain'},provenance={'kind':'synthetic','note':'identity branch'}),
      dict(base,id='synthetic/tighten-empty',rule='Tighten',key=None,options={},provenance={'kind':'synthetic','note':'Tighten never emits a token in the active parse pipeline'}),
      dict(base,id='synthetic/user-missing',rule='User',key=None,options={'userName':'No Such User G5'},provenance={'kind':'synthetic','note':'negative user lookup branch; no fixture user'}),
      dict(base,id='synthetic/user-empty',rule='User',key=None,options={'userName':''},provenance={'kind':'synthetic','note':'degenerate empty user name; the user stub returns null without fabricating a positive user'}),
      dict(base,id='synthetic/footnoteitem-leading-empty-raw',rule='Footnoteitem',key=1,options={'type':'start','id':1},doc=dict(empty_doc(),footnotes=[{'$bytes':[255,48,255]}]),tokens=[['Raw',{'text':''}],['Footnoteitem',{'type':'start','id':1}]],provenance={'kind':'synthetic','note':'token-table-sensitive separator case: body is exactly one empty Raw placeholder'}),
      dict(base,id='synthetic/math-invalid-env',rule='Math',key=None,options={'label':'','content':'x','id':1,'type':'foobar'},provenance={'kind':'synthetic','note':'unsupported math environment error branch'}),
      dict(base,id='synthetic/code-type-php',rule='Code',key=None,options={'text':'$x = 1;\n','attr':{'type':'php'}},provenance={'kind':'synthetic','note':'Text_Highlighter boundary branch'}),
      dict(base,id='synthetic/footnoteitem-parabreak',rule='Footnoteitem',key=None,options={'type':'parabreak','id':1},doc=dict(empty_doc(),footnotes=['body']),provenance={'kind':'synthetic','note':'parabreak token shape'}),
      dict(base,id='synthetic/footnoteblock-empty-start',rule='Footnoteblock',key=None,options={'type':'start','title':None},provenance={'kind':'synthetic','note':'empty footnote registry suppresses the block'}),
      dict(base,id='synthetic/footnoteblock-empty-end',rule='Footnoteblock',key=None,options={'type':'end'},provenance={'kind':'synthetic','note':'empty footnote registry suppresses the block'}),
      dict(base,id='synthetic/bibcite-missing',rule='Bibcite',key=None,options={'label':'missing'},provenance={'kind':'synthetic','note':'undefined bibliography label error branch'}),
      dict(base,id='synthetic/bibcite-defined',rule='Bibcite',key=None,options={'label':'alpha'},doc=dict(empty_doc(),bibitemIds=[['alpha',3]]),provenance={'kind':'synthetic','note':'defined bibliography label branch'}),
      dict(base,id='synthetic/equationreference-missing',rule='Equationreference',key=None,options={'label':'missing'},provenance={'kind':'synthetic','note':'undefined equation label branch'}),
      dict(base,id='synthetic/equationreference-defined',rule='Equationreference',key=None,options={'label':'E'},doc=dict(empty_doc(),equations=[['E',4]]),provenance={'kind':'synthetic','note':'defined equation label branch'}),
      dict(base,id='synthetic/file-pagename-space',rule='File',key=None,options={'file':'my file.txt','anchor':'my file.txt'},conf={'pageName':'case-page'},provenance={'kind':'synthetic','note':'local file path with explicit page segment and encoded space'}),
      dict(base,id='synthetic/file-page-qualified',rule='File',key=None,options={'file':'other-page/a file.txt','anchor':'label'},conf={'pageName':'case-page'},provenance={'kind':'synthetic','note':'explicit page-qualified file path'}),
      dict(base,id='synthetic/image-local-pagename',rule='Image',key=None,options={'src':'photo.png','attr':{}},conf={'pageName':'case-page'},provenance={'kind':'synthetic','note':'local image path with explicit page segment'}),
      dict(base,id='synthetic/freelink-title-target',rule='Freelink',key=None,options={'site':None,'page':'muse-probe-agy-hunt-title-target','text':'|','anchor':'','extra':'','url':None,'textFromTitle':True},provenance={'kind':'synthetic','note':'existing-page textFromTitle lookup with authored special-character title fixture'}),
      dict(base,id='synthetic/image-first-pagename',rule='Image',key=None,options={'src':':first','attr':{}},conf={'pageName':'other-page'},provenance={'kind':'synthetic','note':'first-attachment branch; requires DB_FilePeer attachment rows'}),
      dict(base,id='synthetic/gallery-local-pagename',rule='Gallery',key=None,options={'sources':None},conf={'pageName':'other-page'},provenance={'kind':'synthetic','note':'local-gallery branch; requires page lookup plus DB_FilePeer image attachments'}),
      dict(base,id='synthetic/module-runtime-listusers',rule='Module',key=None,options={'moduleName':'ListUsers','attr':'','module_body':''},provenance={'kind':'synthetic','note':'caller-runtime module empty handoff branch'}),
      dict(base,id='synthetic/module654-runtime-listusers',rule='Module654',key=None,options={'moduleName':'ListUsers','attr':'','module_body':''},provenance={'kind':'synthetic','note':'Module654 caller-runtime empty handoff branch'}),
    ]

def main():
    cache=Path(os.environ.get('G5_EXTRACTION_CACHE', '/tmp/ftml-g5-extractions-cache.jsonl'))
    rows=read_source_cases()
    ext=extract(rows,cache)
    picked={r:{} for r in RULE_ORDER}; occurrences=[]
    for rec in ext:
        if 'error' in rec: continue
        crec,renum=canon_extraction(rec)
        toks=crec.get('tokens',[])
        for key,t in enumerate(toks):
            if not (isinstance(t,list) and len(t)==2): continue
            rule,opts=t
            if rule not in picked: continue
            sg=sig_for(rule,opts,crec.get('doc',{}))
            if sg in picked[rule] or len(picked[rule]) >= MAX_PER_RULE[rule]: continue
            cid=f"corpus/{rec['id']}/tok{key}"
            case={'id':cid,'rule':rule,'key':key,'options':opts,'conf':{},'doc':crec.get('doc',{}),
                  'provenance':{'kind':'corpus','source_id':rec['id'],'source':rec.get('source',''),'token_key':key}}
            if rule in CONTEXT_RULES:
                case['tokens']=crec.get('tokens',[]); case['tokenSource']=crec.get('tokenSource',{})
            picked[rule][sg]=case; occurrences.append((rule,cid))
    cases=[]
    for r in RULE_ORDER:
        cases.extend(picked[r].values())
    cases.extend(synthetic_cases())
    with (OUT/'cases.jsonl').open('w',encoding='utf-8') as f:
        for c in cases: f.write(json.dumps(c,ensure_ascii=False,separators=(',',':'))+'\n')
    summary={r:len(picked[r]) for r in RULE_ORDER}
    for r in ('Delimiter','Tighten','Html'):
        summary[r]+=sum(1 for c in cases if c['rule']==r and c['id'].startswith('synthetic/'))
    (OUT/'case-summary.json').write_text(json.dumps({'total':len(cases),'perRule':summary},indent=2,sort_keys=True)+'\n',encoding='utf-8')
    print(json.dumps({'total':len(cases),'missing':[r for r,n in summary.items() if n==0],'perRule':summary},sort_keys=True))

if __name__=='__main__': main()
