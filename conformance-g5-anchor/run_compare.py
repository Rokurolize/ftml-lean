#!/usr/bin/env python3
"""Run the retained G5 direct-render cases through PHP and Lean and compare bytes."""
import json, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
OUT = Path(__file__).resolve().parent
PHP = ROOT / 'ref-php' / 'harness' / 'render-token-g5.php'
LEAN = ROOT / 'lean-ftml' / '.lake' / 'build' / 'bin' / 'lean-ftml-conformance-g5-anchor'
CONTEXT_RULES = {'Footnoteitem','Gallery'}
RULES = ['Footnote','Footnoteitem','Footnoteblock','Bibitem','Bibliography','Bibcite','Paragraph','Newline','Break','Center','Horiz','Separator','Clearfloat','Blockquote','Note','Divalign','Comment','Delimiter','Url','Email','Mathinline','Interwiki','Colortext','Strong','Emphasis','Underline','Strikethrough','Tt','Superscript','Subscript','Typography','Tighten','Raw','Rawold','Form','Heading','Toc','List','Deflist','Table','Tableadv','Equationreference','Anchor','Collapsible','Tabview','Button','Iframe','Date','File','Size','Span','Div','Code','Embed','Freelink','Module','Module654','Math','Image','Gallery','User','Html']

def wire_bytes(v):
    if isinstance(v, str): return v.encode('utf-8')
    if isinstance(v, dict) and set(v) == {'$bytes'}: return bytes(v['$bytes'])
    raise ValueError('not a byte wire value: %r' % (v,))

def canon_wire(v):
    return wire_bytes(v).hex()

def read_jsonl(path):
    return [json.loads(x) for x in path.read_text(encoding='utf-8').splitlines() if x.strip()]

def run(cmd, inp, cwd=ROOT):
    return subprocess.run(cmd, input=inp, text=True, capture_output=True, cwd=cwd, check=True)

def main():
    cases_path=OUT/'cases.jsonl'
    cases=read_jsonl(cases_path)
    inp=''.join(json.dumps(c,ensure_ascii=False,separators=(',',':'))+'\n' for c in cases)
    php_cp=run(['php',str(PHP),'render'],inp)
    (OUT/'php-results.jsonl').write_text(php_cp.stdout,encoding='utf-8')
    lean_cp=run([str(LEAN),'render'],inp)
    (OUT/'lean-results.jsonl').write_text(lean_cp.stdout,encoding='utf-8')
    php={r['id']:r for r in [json.loads(x) for x in php_cp.stdout.splitlines() if x.strip()]}
    lean={r['id']:r for r in [json.loads(x) for x in lean_cp.stdout.splitlines() if x.strip()]}
    details=[]; per={r:{'cases':0,'phpMirrorMatch':0,'phpTokenAwareMatch':0,'phpContextMirrorMatch':0,'phpSpecMatch':0,'bothMatch':0,'mismatch':0,'errors':0,'stubMediated':0} for r in RULES}
    for c in cases:
        cid=c['id']; rule=c['rule']; p=php.get(cid); l=lean.get(cid)
        row={'id':cid,'rule':rule,'provenance':c.get('provenance',{})}
        st=per[rule]; st['cases']+=1
        if not p or 'error' in p or not l or 'error' in l:
            row['status']='error'; row['php']=p; row['lean']=l; st['errors']+=1
        else:
            ph=canon_wire(p['output']); mi=canon_wire(l['mirror']); ta=canon_wire(l.get('mirrorTokenAware',l['mirror'])); sp=canon_wire(l['spec'])
            cm = ta if rule in CONTEXT_RULES else mi
            row.update(phpMirrorMatch=(ph==mi),phpTokenAwareMatch=(ph==ta),phpContextMirrorMatch=(ph==cm),phpSpecMatch=(ph==sp),mirrorSpecAgree=(mi==sp),tokenAwareSpecAgree=(ta==sp),
                       php=p['output'],mirror=l['mirror'],mirrorTokenAware=l.get('mirrorTokenAware',l['mirror']),contextMirror=('tokenAware' if rule in CONTEXT_RULES else 'env'),spec=l['spec'])
            if p.get('stub_mediated'):
                row['stubMediated']=True; row['stubs']=p.get('stubs',[]); st['stubMediated']+=1
            if ph==mi: st['phpMirrorMatch']+=1
            if ph==ta: st['phpTokenAwareMatch']+=1
            if ph==cm: st['phpContextMirrorMatch']+=1
            if ph==sp: st['phpSpecMatch']+=1
            if ph==cm and ph==sp:
                row['status']='match'; st['bothMatch']+=1
            else:
                row['status']='mismatch'; st['mismatch']+=1
        details.append(row)
    with (OUT/'comparison-details.jsonl').open('w',encoding='utf-8') as f:
        for r in details: f.write(json.dumps(r,ensure_ascii=False,separators=(',',':'))+'\n')
    summary={'totalCases':len(cases),'perRule':per,
             'totals':{'cases':len(cases),'bothMatch':sum(x['bothMatch'] for x in per.values()),
                       'mismatch':sum(x['mismatch'] for x in per.values()),
                       'errors':sum(x['errors'] for x in per.values()),
                       'stubMediated':sum(x['stubMediated'] for x in per.values())}}
    (OUT/'comparison-summary.json').write_text(json.dumps(summary,indent=2,sort_keys=True)+'\n',encoding='utf-8')
    print(json.dumps(summary['totals'],sort_keys=True))

if __name__=='__main__': main()
