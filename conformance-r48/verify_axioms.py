#!/usr/bin/env python3
"""R4.8 axiom audit of every theorem added or touched in this stage.

Input is the output of `lake env lean Main.lean`, whose `#print axioms`
lines are emitted at typecheck time (running the built binary does not
print them). Each of the twenty-one R4.8 theorem names pinned in Main.lean
must resolve to an axiom set within [propext, Classical.choice, Quot.sound]
and must never contain sorryAx.
"""
import re
import sys

ALLOWED = {'propext', 'Classical.choice', 'Quot.sound'}
NAMES = [
    'pipelineR48_length', 'pipelineR48_full', 'renderRuleOfName_roundtrip',
    'module_known_marker', 'module_known_upper_marker', 'module_unknown_error',
    'module_body_marker', 'math_error_block', 'user_not_found',
    'user_boundary_excluded', 'user_boundary_incomplete',
    'freelink_title_boundary', 'image_flickr_boundary',
    'image_first_no_boundary', 'freelink_exists_anchor',
    'freelink_new_anchor', 'freelink_title_missing_fallback',
    'image_plain_local', 'image_first_empty', 'gallery_local_mode_block',
    'gallery_one_local_row',
]


def main():
    lines = open(sys.argv[1], encoding='utf-8').read().splitlines()
    bad = 0
    for name in NAMES:
        matches = [ln for ln in lines if f"'LeanFtml.{name}' " in ln]
        if not matches:
            print(f'DRIFT {name}: no #print axioms line')
            bad = 1
            continue
        ln = matches[-1]
        if 'does not depend on any axioms' in ln:
            ax = set()
        else:
            m = re.search(r'depends on axioms: \[([^]]*)\]', ln)
            if not m:
                print(f'DRIFT {name}: unreadable axiom line: {ln!r}')
                bad = 1
                continue
            ax = {x.strip() for x in m.group(1).split(',') if x.strip()}
        extra = ax - ALLOWED
        if extra or 'sorryAx' in ax:
            print(f'DRIFT {name}: axioms {sorted(ax)}')
            bad = 1
        else:
            print(f'OK  {name}: {sorted(ax) if ax else "none"}')
    if bad:
        return 1
    print(f'OK  all {len(NAMES)} R4.8 theorems within [propext, '
          'Classical.choice, Quot.sound]; no sorryAx')
    return 0


if __name__ == '__main__':
    sys.exit(main())
