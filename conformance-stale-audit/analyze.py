#!/usr/bin/env python3
"""Classify retained vs regenerated PHP artifacts: byte, canonical, real."""
import json, os, sys, importlib.util
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.join(HERE, '..', 'conformance-capstone'))
import compare as cap

def load(path):
    out = {}
    order = []
    with open(path, 'rb') as f:
        for i, line in enumerate(f):
            if not line.strip(): continue
            rec = json.loads(line)
            out[rec['id']] = (line.rstrip(b'\n'), rec, i+1)
            order.append(rec['id'])
    return out, order

def renum_of(rec):
    ids, _ = cap.token_entries(rec.get('tokens', {}))
    return {old: new for new, old in enumerate(ids)}

def dec(v):
    if isinstance(v, str): return v.encode('utf-8')
    if isinstance(v, dict) and set(v) == {'$bytes'}: return bytes(v['$bytes'])
    return json.dumps(v).encode()

def render_canon(v, renum):
    bs = dec(v)
    return bytes(cap.rewrite_bytes(bs, renum))

def analyze(label, ret_state, gen_state, ret_render, gen_render):
    rs, ro = load(ret_state); gs, go = load(gen_state)
    rr, _ = load(ret_render); gr, _ = load(gen_render)
    print(f'===== {label} =====')
    print(f'states: retained={len(rs)} regenerated={len(gs)} ids_equal={set(rs)==set(gs)}')
    print(f'renders: retained={len(rr)} regenerated={len(gr)} ids_equal={set(rr)==set(gr)}')
    sb = [i for i in rs if i in gs and rs[i][0] != gs[i][0]]
    sc = [i for i in rs if i in gs and cap.canon_state(rs[i][1]) != cap.canon_state(gs[i][1])]
    print(f'states byte-moved={len(sb)} canon-moved={len(sc)}')
    rb = [i for i in rr if i in gr and rr[i][0] != gr[i][0]]
    rc = []
    for i in rb:
        rn = renum_of(rs[i][1]) if i in rs else {}
        gn = renum_of(gs[i][1]) if i in gs else {}
        if render_canon(rr[i][1]['output'], rn) == render_canon(gr[i][1]['output'], gn):
            continue
        rc.append(i)
    print(f'renders byte-moved={len(rb)} canon-moved={len(rc)}')
    if sc:
        print('STATE REAL MOVES (first 40):')
        for i in sc[:40]: print('  ', i)
        if len(sc)>40: print('   ...', len(sc)-40, 'more')
    if rc:
        print('RENDER REAL MOVES (first 40):')
        for i in rc[:40]: print('  ', i)
        if len(rc)>40: print('   ...', len(rc)-40, 'more')
    return dict(label=label, states_byte=sb, states_canon=sc, renders_byte=rb, renders_canon=rc,
                rs=rs, gs=gs, rr=rr, gr=gr)

if __name__ == '__main__':
    A = []
    A.append(analyze('r42 family prefix 54', '../conformance-r42/prefix-states.jsonl',
                     'r42/family-prefix-states.jsonl', '../conformance-r42/prefix-renders.jsonl',
                     'r42/family-prefix-renders.jsonl'))
    A.append(analyze('r42 family full 68', '../conformance-r42/full-states.jsonl',
                     'r42/family-full-states.jsonl', '../conformance-r42/full-renders-wire.jsonl',
                     'r42/family-full-renders.jsonl'))
    for t in ['r45', 'r47']:
        A.append(analyze(f'{t} prose740', f'../conformance-{t}/prose740-states-full.jsonl',
                         f'{t}/prose740-states.jsonl', f'../conformance-{t}/prose740-renders-full.jsonl',
                         f'{t}/prose740-renders.jsonl'))
    # dump real-move detail records
    with open('real-moves.jsonl', 'w') as f:
        for a in A:
            for i in a['states_canon']:
                f.write(json.dumps(dict(tree=a['label'], kind='state', id=i,
                    retained=json.loads(a['rs'][i][1].decode()) if isinstance(a['rs'][i][1],bytes) else a['rs'][i][1],
                    regenerated=a['gs'][i][1]), ensure_ascii=False)+'\n')
            for i in a['renders_canon']:
                f.write(json.dumps(dict(tree=a['label'], kind='render', id=i,
                    retained=a['rr'][i][1], regenerated=a['gr'][i][1]), ensure_ascii=False)+'\n')
