import importlib.machinery, importlib.util
loader = importlib.machinery.SourceFileLoader('probe','/home/roku/.agents/skills/wikidot-py-operations/scripts/wikidot-probe')
spec = importlib.util.spec_from_loader('probe', loader)
probe = importlib.util.module_from_spec(spec); spec.loader.exec_module(probe)
with probe.make_client('sandbox-for-codex','A') as client:
    site = client.site.get('sandbox-for-codex')
    for fn in ['muse-probe-round5d-p1-l1-c1resbr','muse-probe-round5d-p1-l2-c1blank','muse-probe-round5d-p1-l3-c1crosstag','muse-probe-round5d-p1-l4-natempty']:
        p = site.page.get(fn, raise_when_not_found=False)
        print(fn, 'EXISTS' if p is not None else 'MISSING')
        if p is not None:
            p.refresh_source()
            print('  saved:', repr(p.source.wiki_text))
