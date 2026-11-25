#!/usr/bin/env python3
"""Snapshot-46 Size/Collapsible/Blockquote mirror-vs-PHP differential.

Each set is the rule's retained R2 battery plus the snapshot-46
probe-refcorr21 cases, all under full seventy-one-rule parse/render
pipelines. Comparison is byte-exact, with Lean `excluded` records kept
separate rather than counted as agreements.
"""
import json, os, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
OUT = Path(__file__).resolve().parent
LEAN = Path(os.environ.get('LEAN_DRIVER', str(ROOT/'lean-ftml/.lake/build/bin/lean-ftml-conformance-r46')))
PHP = ROOT/'ref-php/harness/render-restricted.php'
RULES = ','.join('''Include Prefilter Delimiter Code Form Raw Rawold Html Modulepre Module Module654 Iftags Comment Expr Ifexpr Iframe Date Math Concatlines Freelink Equationreference Footnote Footnoteitem Footnoteblock Bibitem Bibliography Bibcite Divprefilter Anchor User Blockquote Heading Toc Horiz Separator Clearfloat Break Span Size Div Divalign Collapsible Tabview Note Gallery List Deflist Table Tableadv Button Image Embed Social File Center Newline Paragraph Url Email Mathinline Interwiki Colortext Strong Emphasis Underline Strikethrough Tt Superscript Subscript Typography Tighten'''.split())
SETS = {
 'size': [ROOT/'conformance-refphp/contain/size/battery.jsonl', OUT/'probe-refcorr21/size-probe-refcorr21-cases.jsonl'],
 'collapsible': [ROOT/'conformance-refphp/contain/collapsible/battery.jsonl', OUT/'probe-refcorr21/collapsible-probe-refcorr21-cases.jsonl'],
 'blockquote': [ROOT/'conformance-refphp/block/blockquote/battery.jsonl', OUT/'probe-refcorr21/blockquote-probe-refcorr21-cases.jsonl'],
}

def rows(path):
    return [json.loads(x) for x in path.read_text(encoding='utf-8').splitlines() if x.strip()]

def wire(v):
    if isinstance(v,str): return v.encode('utf-8')
    if isinstance(v,dict) and set(v)=={'$bytes'}: return bytes(v['$bytes'])
    return None

def loadout(path):
    return {r['id']:r for r in rows(path)}

def run(cmd, inp, cwd=ROOT):
    return subprocess.run(cmd,input=inp,text=True,capture_output=True,cwd=cwd)

def main():
    if not LEAN.exists():
        print(f'missing Lean driver {LEAN}', file=sys.stderr); return 2
    aggregate={}; failed=False
    for name, sources in SETS.items():
        cases=[]; seen=set()
        for src in sources:
            label='battery' if src.name=='battery.jsonl' else 'probe-refcorr21'
            for r in rows(src):
                cid=f'{label}/{r["id"]}'
                if cid in seen: raise ValueError(f'duplicate id {cid}')
                seen.add(cid); q=dict(r); q['id']=cid; cases.append(q)
        inp=''.join(json.dumps(c,ensure_ascii=False,separators=(',',':'))+'\n' for c in cases)
        cases_path=OUT/f'{name}-cases.jsonl'; cases_path.write_text(inp,encoding='utf-8')
        php_cp=run(['php',str(PHP),RULES],inp)
        lean_cp=run([str(LEAN),'--e2e-r46'],inp)
        (OUT/f'{name}-php.jsonl').write_text(php_cp.stdout,encoding='utf-8')
        (OUT/f'{name}-lean.jsonl').write_text(lean_cp.stdout,encoding='utf-8')
        (OUT/f'{name}-php.err').write_text(php_cp.stderr,encoding='utf-8')
        (OUT/f'{name}-lean.err').write_text(lean_cp.stderr,encoding='utf-8')
        if php_cp.returncode or lean_cp.returncode:
            failed=True; print(f'{name}: driver rc php={php_cp.returncode} lean={lean_cp.returncode}')
        php=loadout(OUT/f'{name}-php.jsonl'); lean=loadout(OUT/f'{name}-lean.jsonl')
        counts={'cases':len(cases),'pass':0,'fail':0,'excluded':0,'fatal_agree':0,'php_error':0}
        details=[]
        for c in cases:
            cid=c['id']; p=php.get(cid); l=lean.get(cid); verdict='fail'; reason=''
            if p is None or l is None: reason='missing record'
            elif p.get('error') is not None:
                if l.get('status')=='fatal' and str(p.get('error')).startswith('ProcessException'):
                    verdict='fatal_agree'
                else: verdict='php_error'; reason=p.get('error')
            elif l.get('status')=='excluded': verdict='excluded'; reason=','.join(l.get('unmirrored',[]))
            elif l.get('status')!='ok': reason=f'lean status {l.get("status")}'
            elif wire(p.get('output'))==wire(l.get('output')): verdict='pass'
            else: reason='output bytes differ'
            counts[verdict]+=1
            details.append({'id':cid,'verdict':verdict,'reason':reason})
        (OUT/f'{name}-detail.jsonl').write_text(''.join(json.dumps(x,ensure_ascii=False)+'\n' for x in details),encoding='utf-8')
        summary=f"{name}: cases={counts['cases']} pass={counts['pass']} fail={counts['fail']} excluded={counts['excluded']} fatal_agree={counts['fatal_agree']} php_error={counts['php_error']}\n"
        (OUT/f'{name}-comparison.txt').write_text(summary,encoding='utf-8')
        print(summary,end='')
        aggregate[name]=counts
        if counts['fail'] or counts['php_error']: failed=True
    (OUT/'summary.json').write_text(json.dumps(aggregate,indent=2,sort_keys=True)+'\n',encoding='utf-8')
    return 1 if failed else 0
if __name__=='__main__': sys.exit(main())
