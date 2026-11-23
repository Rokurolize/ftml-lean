#!/usr/bin/env bash
# Stage 2 axiom gate: forbidden-token hygiene plus #print axioms on every theorem in Stage2Proof and Stage2Certificate.
# Usage: axiom-audit.sh   (no arguments; re-runnable, overwrites axioms.log)
# Every Lean invocation is serialized through the programme wrapper with workdir lean-ftml.
set -uo pipefail

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(git -C "$SCRIPT_DIR/.." rev-parse --show-toplevel)" || exit 2
LEAN="$ROOT/lean-ftml"
WRAPPER="$HOME/.local/state/wikijump/muse-bhl/tools/lean-build.sh"
LOG="$SCRIPT_DIR/axioms.log"
HARNESS_DIR="$SCRIPT_DIR/.stage2-axiom-harness"
HARNESS="$HARNESS_DIR/Stage2AxiomHarness.lean"
NAMES_FILE="$HARNESS_DIR/theorem-names.txt"
MODULES_FILE="$HARNESS_DIR/module-list.txt"

if [ ! -f "$WRAPPER" ]; then echo "DRIFT wrapper missing: $WRAPPER" >&2; exit 2; fi
if [ ! -d "$LEAN" ]; then echo "DRIFT lean-ftml missing: $LEAN" >&2; exit 2; fi
mkdir -p "$HARNESS_DIR" || exit 2
: > "$LOG" || exit 2

echo "===== axiom-audit source hygiene and theorem discovery =====" >> "$LOG"
python3 - "$LEAN" "$HARNESS" "$NAMES_FILE" "$MODULES_FILE" >> "$LOG" 2>&1 <<'PYEOF'
import os
import re
import sys

lean, harness, names_file, modules_file = sys.argv[1:5]
required = [
    ("LeanFtml.Proof.Stage2Proof", "LeanFtml/Proof/Stage2Proof.lean"),
    ("LeanFtml.Proof.Stage2Certificate", "LeanFtml/Proof/Stage2Certificate.lean"),
]
optional = [
    ("LeanFtml.Proof.Stage2TidyCore", "LeanFtml/Proof/Stage2TidyCore.lean"),
    ("LeanFtml.Proof.Stage2FrameComp", "LeanFtml/Proof/Stage2FrameComp.lean"),
    ("LeanFtml.Proof.Stage2", "LeanFtml/Proof/Stage2.lean"),
]
FORBIDDEN = [
    ("sorry", re.compile(r"(?<![A-Za-z0-9_])sorry(?![A-Za-z0-9_])")),
    ("sorryAx", re.compile(r"(?<![A-Za-z0-9_])sorryAx(?![A-Za-z0-9_])")),
    ("native_decide", re.compile(r"(?<![A-Za-z0-9_])native_decide(?![A-Za-z0-9_])")),
    ("bv_decide", re.compile(r"(?<![A-Za-z0-9_])bv_decide(?![A-Za-z0-9_])")),
    ("axiom ", re.compile(r"(?<![A-Za-z0-9_])axiom(?=\s)")),
    ("unsafe", re.compile(r"(?<![A-Za-z0-9_])unsafe(?![A-Za-z0-9_])")),
    ("implemented_by", re.compile(r"(?<![A-Za-z0-9_])implemented_by(?![A-Za-z0-9_])")),
]


def code_only(text):
    out = []
    i = 0
    n = len(text)
    depth = 0
    while i < n:
        c = text[i]
        nxt = text[i + 1] if i + 1 < n else ''
        if depth:
            if c == '/' and nxt == '-':
                depth += 1
                out.append('  ')
                i += 2
                continue
            if c == '-' and nxt == '/':
                depth -= 1
                out.append('  ')
                i += 2
                continue
            out.append('\n' if c == '\n' else ' ')
            i += 1
            continue
        if c == '-' and nxt == '-':
            i += 2
            while i < n and text[i] != '\n':
                i += 1
            continue
        if c == '/' and nxt == '-':
            depth = 1
            out.append('  ')
            i += 2
            continue
        if c == '"':
            i += 1
            while i < n:
                if text[i] == '\\':
                    i += 2
                    continue
                if text[i] == '"':
                    i += 1
                    break
                out.append('\n' if text[i] == '\n' else ' ')
                i += 1
            continue
        out.append(c)
        i += 1
    return ''.join(out)


DECL = re.compile(r"\b(namespace|section|end|theorem)\b([^\n]*)")
IDENT = re.compile(r"^\s*([A-Za-z_][A-Za-z0-9_']*|«[^»]+»)")
NS_IDENT = re.compile(r"^\s*([A-Za-z_][A-Za-z0-9_']*(?:\.[A-Za-z_][A-Za-z0-9_']*)*)")


def theorem_names(code):
    stack = []
    found = []
    for m in DECL.finditer(code):
        kind = m.group(1)
        rest = m.group(2)
        if kind == 'end':
            if stack:
                stack.pop()
            continue
        if kind == 'section':
            stack.append(('sec', None))
            continue
        rx = NS_IDENT if kind == 'namespace' else IDENT
        im = rx.match(rest)
        if not im:
            continue
        ident = im.group(1)
        if kind == 'namespace':
            stack.append(('ns', ident))
            continue
        prefix = '.'.join(v for k, v in stack if k == 'ns')
        found.append(prefix + '.' + ident if prefix else ident)
    return list(dict.fromkeys(sorted(found)))


bad = []
present = []
texts = []
for mod, rel in required:
    path = os.path.join(lean, rel)
    if not os.path.isfile(path):
        bad.append('DRIFT required module missing: ' + path)
        continue
    present.append((mod, path))
    texts.append(path)
for mod, rel in optional:
    path = os.path.join(lean, rel)
    if os.path.isfile(path):
        present.append((mod, path))
        texts.append(path)

for path in texts:
    code = code_only(open(path, encoding='utf-8').read())
    for lineno, line in enumerate(code.splitlines(), 1):
        for tok, rx in FORBIDDEN:
            if rx.search(line):
                bad.append('DRIFT forbidden token %s at %s:%d' % (tok, path, lineno))

names = []
for path in texts:
    if os.path.basename(path) in ('Stage2Proof.lean', 'Stage2Certificate.lean'):
        names.extend(theorem_names(code_only(open(path, encoding='utf-8').read())))
names = list(dict.fromkeys(sorted(names)))
if not names:
    bad.append('DRIFT no theorems discovered; refusing to audit an empty set')

if bad:
    for line in bad:
        print(line)
    sys.exit(1)

with open(harness, 'w', encoding='utf-8') as fh:
    fh.write('-- generated by proof-stage2-audit/axiom-audit.sh; do not edit\n\n')
    for mod, _ in present:
        fh.write('import %s\n' % mod)
    fh.write('\n')
    for name in names:
        fh.write('#print axioms %s\n' % name)
with open(names_file, 'w', encoding='utf-8') as fh:
    fh.write('\n'.join(names) + '\n')
with open(modules_file, 'w', encoding='utf-8') as fh:
    fh.write('\n'.join(mod for mod, _ in present) + '\n')
print('OK hygiene: %d scanned modules, no forbidden tokens' % len(texts))
print('OK discovery: %d theorems, harness %s' % (len(names), harness))
PYEOF
discover_st=$?
echo "===== axiom-audit discovery exit=$discover_st =====" >> "$LOG"
if [ "$discover_st" -ne 0 ]; then
  sed -n '/===== axiom-audit source hygiene/,$p' "$LOG"
  echo "AXIOM-AUDIT FAIL: hygiene or theorem discovery" >&2
  exit 1
fi

mapfile -t MODULES < "$MODULES_FILE"
echo "===== axiom-audit build imported modules =====" >> "$LOG"
"$WRAPPER" "$LEAN" lake build "${MODULES[@]}" >> "$LOG" 2>&1
build_st=$?
echo "===== axiom-audit build exit=$build_st =====" >> "$LOG"
if [ "$build_st" -ne 0 ]; then
  grep -E 'error:|DRIFT|FAILED' "$LOG" | tail -40
  echo "AXIOM-AUDIT FAIL: module build (see $LOG)" >&2
  exit 1
fi

echo "===== axiom-audit harness #print axioms =====" >> "$LOG"
"$WRAPPER" "$LEAN" lake env lean "$HARNESS" >> "$LOG" 2>&1
lean_st=$?
echo "===== axiom-audit harness exit=$lean_st =====" >> "$LOG"

python3 - "$LOG" "$NAMES_FILE" "$lean_st" <<'PYEOF'
import re
import sys

log_path, names_path, lean_status = sys.argv[1], sys.argv[2], int(sys.argv[3])
allowed = {'propext', 'Classical.choice', 'Quot.sound'}
names = [ln.strip() for ln in open(names_path, encoding='utf-8') if ln.strip()]
lines = open(log_path, encoding='utf-8').read().splitlines()
bad = []
if lean_status != 0:
    bad.append('DRIFT harness lean exit=%d' % lean_status)
    for ln in lines:
        if 'error:' in ln:
            bad.append('DRIFT ' + ln.strip())
for name in names:
    hits = [ln for ln in lines if ln.startswith("'%s' " % name)]
    if not hits:
        bad.append('DRIFT no #print axioms line for ' + name)
        continue
    line = hits[-1]
    if 'does not depend on any axioms' in line:
        axioms = set()
    else:
        m = re.search(r'depends on axioms: \[([^]]*)\]', line)
        if not m:
            bad.append('DRIFT unreadable axiom line: ' + line)
            continue
        axioms = {x.strip() for x in m.group(1).split(',') if x.strip()}
    extra = sorted(axioms - allowed)
    if extra:
        bad.append('DRIFT %s uses forbidden axioms %s' % (name, extra))
    else:
        print('OK %s: %s' % (name, ','.join(sorted(axioms)) if axioms else 'no axioms'))
if bad:
    for line in bad:
        print(line, file=sys.stderr)
    print('AXIOM-AUDIT FAIL: %d violations' % len(bad), file=sys.stderr)
    sys.exit(1)
print('OK axiom-audit: all %d theorems within [propext, Classical.choice, Quot.sound]' % len(names))
PYEOF
parse_st=$?
if [ "$parse_st" -ne 0 ]; then
  echo "AXIOM-AUDIT FAIL: axiom verification (see $LOG)" >&2
  exit 1
fi
echo "AXIOM-AUDIT PASS: captured output in $LOG"
exit 0
