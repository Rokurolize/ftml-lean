#!/usr/bin/env python3
"""Exhaustive generator for the Stage 2 bounded tag-skeleton certificate.

Generator version 1.0.0. This script is the sole authority for the certificate
domain; it enumerates, without sampling, every canonical skeleton in the
declared language and writes the corpus in a deterministic order.

ALPHABET (12 tag classes; the text terminal is NOT one of the 12):
  closable classes (11): span strong em a div p table td ul li code
    token forms: open <t> and close </t>
  void class (1): br, token form <br />
  text terminal X (separate from the 12): token form the single character x

JUSTIFICATION OF THE 12 CLASSES (from stage2/G2-SCOPE.md):
  span  -- T2 same-family crossings, T3 anchor/reassignment, T4 span cases, T10 pruning
  strong, em -- T3 single crossing, T4 multi crossing (p12, p13, q04), T10 pruning
  a     -- T3 anchor bound (q10): crossed element closes and never reopens
  div   -- T5 inline propagation across a block boundary, T7 p-closing, T10 empty div kept
  p     -- T6 unwrap, T7 block start closes p, T8 joining, T10 empty p removed
  table, td -- T5 table-cell scope wall (p21-p23); td is the cell boundary
  ul, li -- T5 reopening across list-item boundaries (p18)
  br    -- T11 lone break between block siblings (void, so no close token)
  code  -- T9 whitespace preservation inside code, T10 pruning
  X     -- the parametric text class justified by stage2_parametric_in_text; it is a
           terminal, not a 13th tag class, and does not count toward the 12.

CANONICAL SKELETON LANGUAGE (all constraints are part of the declared domain):
  1. Each of the 11 closable classes appears either zero times or exactly twice,
     once as <t> and once as </t>, with the open preceding the close. There are
     no stray closers, no dangling opens at end of skeleton, and no repeated
     class. This is the quotient: one representative per structural class is
     enough to expose tag-name-sensitive repair, and repeated/same-tag nesting
     belongs to the 266-case conformance record (T2 is settled in Stage 1).
  2. At most ONE leaf token total, either the text terminal x or the void <br />.
     A single leaf is the parametricity representative for content; a second
     leaf would only add text-splitting cases already covered by T9 in the
     266-case record.
  3. Token count <= 8 (maxLength).
  4. Open-stack depth <= 4 at every prefix (maxDepth); the stack is the ordered
     list of currently open closable-class tokens. Closing a class removes it
     from that list wherever it sits, which permits multi-level crossings.
  5. A skeleton is recorded exactly when its open stack is empty, i.e. every
     opened class has been closed. This is what makes pairs matched.

WHY (d=4, L=8) IS THE MINIMUM EXPOSING T4 MULTI-LEVEL CROSSINGS:
  T4 (stage2/G2-SCOPE.md:17-19) needs a closer whose target has TWO OR MORE open
  elements above it, with crossed non-span elements reopened in pop order. With
  12 tag classes but a matched-pair quotient, a crossing of k elements above a
  target needs k+1 distinct matched pairs, i.e. 2(k+1) tokens. k=2 (the minimum
  T4 case) therefore needs 3 pairs = 6 tokens and a stack depth of 3; k=3 (the
  p15/q04 three-element crossing recorded as the T4 bound) needs 4 pairs = 8
  tokens and a stack depth of 4. L=7 cannot hold 4 pairs, and d=3 cannot hold a
  four-deep crossing stack, so (4,8) is the smallest bound that contains the
  documented multi-level T4 family. It is a bounded maximum, not a universal
  cutoff: libtidy's global rescans above this bound are the named remainder.

OUTPUT:
  --count        print only the exact cardinality.
  --emit PATH    write one skeleton per UTF-8 line, sorted by (byte length,
                 bytes), newline-terminated, to PATH; print SHA-256 of that
                 exact byte stream and the cardinality as JSON on stdout.
  default        same as --emit with PATH=skeletons.txt beside this script.
"""
import hashlib
import json
import os
import sys

GEN_VERSION = "1.0.0"
CLOSABLE = ("span", "strong", "em", "a", "div", "p", "table", "td", "ul", "li", "code")
VOID = ("br",)
TEXT_TOKEN = "x"
VOID_TOKEN = "<br />"
MAX_DEPTH = 4
MAX_LENGTH = 8
_IDX = {t: i for i, t in enumerate(CLOSABLE)}


def generate():
    """Return the set of all canonical skeletons (no sampling)."""
    seen = set()
    seen_add = seen.add

    def rec(tokens, stack, used, leaf_used):
        if not stack:
            seen_add("".join(tokens))
        if len(tokens) >= MAX_LENGTH:
            return
        if not leaf_used:
            for leaf in (TEXT_TOKEN, VOID_TOKEN):
                tokens.append(leaf)
                rec(tokens, stack, used, True)
                tokens.pop()
        if len(stack) < MAX_DEPTH:
            for t in CLOSABLE:
                i = _IDX[t]
                if (used >> i) & 1:
                    continue
                tokens.append("<" + t + ">")
                rec(tokens, stack + (i,), used | (1 << i), leaf_used)
                tokens.pop()
        for i in dict.fromkeys(stack):
            # close class i wherever it sits in the stack (crossing close)
            ns = tuple(z for z in stack if z != i)
            tokens.append("</" + CLOSABLE[i] + ">")
            rec(tokens, ns, used, leaf_used)
            tokens.pop()

    rec([], tuple(), 0, False)
    return seen


def sorted_corpus(skeletons):
    """Deterministic order: UTF-8 byte length, then UTF-8 byte value."""
    enc = [(s.encode("utf-8"), s) for s in skeletons]
    enc.sort(key=lambda p: (len(p[0]), p[0]))
    return [s for _, s in enc]


def emit(path):
    corpus = sorted_corpus(generate())
    h = hashlib.sha256()
    with open(path, "wb") as f:
        for s in corpus:
            b = s.encode("utf-8") + b"\n"
            f.write(b)
            h.update(b)
    return {
        "generator_version": GEN_VERSION,
        "cardinality": len(corpus),
        "sha256": h.hexdigest(),
        "path": os.path.abspath(path),
    }


def main():
    args = sys.argv[1:]
    if args == ["--count"]:
        print(len(generate()))
        return
    path = args[1] if args and args[0] == "--emit" else os.path.join(
        os.path.dirname(os.path.abspath(__file__)), "skeletons.txt"
    )
    print(json.dumps(emit(path), indent=2))


if __name__ == "__main__":
    main()
