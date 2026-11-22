#!/usr/bin/env python3
"""Generate the G1.4 fragment differential grid.

Each case is (id, source); "@@" in a source stands for the target
page name "muse-probe-g14-target". The grid stays inside the G1.4
fragment: literal argument values, no {$...} references in keys or
values, ASCII page references (normalization modelled for ASCII).
"""
import json
import sys

T = "muse-probe-g14-target"

CASES = [
    # Placement and terminators
    ("basic-mid", "BEFORE\n[[include @@]]\nAFTER"),
    ("basic-start", "[[include @@]]\nAFTER"),
    ("basic-end", "BEFORE\n[[include @@]]"),
    ("basic-whole", "[[include @@]]"),
    ("basic-crlf", "BEFORE\r\n[[include @@]]\r\nAFTER"),
    ("term-cr-then-other", "[[include @@]]\rX\n[[include other-page]]\nY"),
    ("no-terminator", "BEFORE\n[[include @@\nAFTER"),
    ("term-space", "[[include @@]] \nAFTER"),
    ("term-x-then-other", "[[include @@]]x\n[[include other-page]]\nY"),
    # Opener forms
    ("upper", "[[INCLUDE @@]]\nX"),
    ("mixed-case", "[[InClUdE @@]]\nX"),
    ("tab-after", "[[include\t@@]]\nX"),
    ("multi-space", "[[include   @@]]\nX"),
    ("newline-after", "[[include\n@@]]\nX"),
    ("cr-after", "[[include\r@@]]\nX"),
    ("double-newline-after", "[[include\n\n@@]]\nX"),
    ("space-before-include", "[[ include @@]]\nX"),
    ("tab-before-include", "[[\tinclude @@]]\nX"),
    ("not-line-start", "x [[include @@]]\nX"),
    ("indented-spaces", "  [[include @@]]\nX"),
    ("include-eof", "[[include"),
    ("include-ws-eof", "[[include "),
    ("gt-line-before", ">\n[[include @@]]\nX"),
    # Page references and normalization
    ("missing", "[[include no-such-page]]\nX"),
    ("empty-page-inc", "A\n[[include empty-page]]\nB"),
    ("site", "[[include :sandbox:other-page]]\nX"),
    ("site-dotted", "[[include :sandbox.wikidot.com:other-page]]\nX"),
    ("site-dotted-upper", "[[include :SANDBOX.WIKIDOT.COM:other-page]]\nX"),
    ("site-trailing-dot", "[[include :sandbox.:other-page]]\nX"),
    ("colon-page", "[[include component:box]]\nX"),
    ("multi-colon", "[[include a:b:c]]\nX"),
    ("colon-single-err", "[[include :foo]]\nX"),
    ("colon-double-err", "[[include ::page]]\nX"),
    ("site-empty-page", "[[include :sandbox:]]\nX"),
    ("colon-triple", "[[include :::page]]\nX"),
    ("site-colon-empty", "[[include :site:]]\nX"),
    ("site-pair-mid", "[[include :foo:bar]]\nX"),
    ("colon-bare", "[[include :::]]\nX"),
    ("dashes-bare", "[[include ---]]\nX"),
    ("upper-ref", "[[include MUSE-PROBE-G14-TARGET]]\nX"),
    ("underscore-ref", "[[include my_page]]\nX"),
    ("template-ref", "[[include __template]]\nX"),
    ("extra-slash", "[[include @@/edit]]\nX"),
    ("extra-hash", "[[include @@#frag]]\nX"),
    ("extra-only", "[[include /edit]]\nX"),
    ("dotted-page", "[[include some.page]]\nX"),
    ("default-cat", "[[include _default:thing]]\nX"),
    ("ref-cr", "[[include @@\r]]\nX"),
    ("ref-quote-fail", "[[include page\"x]]\n[[include @@]]\nY"),
    ("empty-ref", "[[include ]]\nX"),
    ("host-as-page", "[[include scp-jp.wikidot.com]]\nX"),
    # Arguments
    ("one-arg", "[[include @@ | marker=HELLO]]\nX"),
    ("arg-spaces", "[[include @@ | marker = SPACED ]]\nX"),
    ("arg-tabs", "[[include @@ | marker\t=\tTABBY ]]\nX"),
    ("arg-second-segment", "[[include @@ | x=1 | marker=SECOND]]\nX"),
    ("arg-empty-value", "[[include @@ | marker=]]\nX"),
    ("arg-empty-spaced", "[[include @@ | marker=   ]]\nX"),
    ("arg-no-equals", "[[include @@ | marker]]\nX"),
    ("arg-empty-segment", "[[include @@ || marker=DEEP]]\nX"),
    ("arg-pipe-in-value", "[[include @@ | marker=a|b]]\nX"),
    ("arg-quoted-value", "[[include @@ | marker=\"quoted\"]]\nX"),
    ("arg-value-spaces-inside", "[[include @@ | marker=a b c]]\nX"),
    ("arg-key-chars", "[[include @@ | my-key_2=v | marker=OK]]\nX"),
    ("arg-duplicate", "[[include @@ | marker=FIRST | marker=SECOND]]\nX"),
    ("arg-vt-trim", "[[include @@ | marker=VT\u000b]]\nX"),
    ("arg-ff-inert", "[[include @@ | \u000cmarker=NO | marker=YES]]\nX"),
    ("arg-comment-pipe", "[[include @@ | marker=A [!-- | marker=B --] | other=c]]\nX"),
    ("arg-comment-first", "[[include @@ [!-- lead --] | marker=CF]]\nX"),
    ("arg-unterminated-comment", "A\n[[include @@ | marker=X [!-- open]]\n[[include other-page]]\nB"),
    ("arg-newlines", "[[include @@ |\nmarker=NL]]\nX"),
    ("arg-crlf-tail", "[[include @@ | marker=CRLF]]\r\nX"),
    ("arg-spaced-sep", "[[include @@ | ]]\nX"),
    ("arg-nospace-pipe", "[[include @@|marker=NOSPACE]]\nX"),
    ("arg-multiline-comment", "[[include @@ | a=1 [!-- x\ny --] | marker=ML]]\nX"),
    ("arg-eof", "[[include @@ | marker=EOF]]"),
    ("ref-space-before-close", "[[include @@ ]]\nX"),
    ("swallow-next-opener", "[[include @@ | a=1\n[[include other-page]]\nX"),
    # Stray brackets
    ("stray-with-after", "[[include @@\n[[\n| marker=S1]]\nAFTER"),
    ("stray-many", "[[include @@ [[[ | marker=S2]]\nX"),
    ("stray-nospace", "[[include @@ [[| marker=S3]]\nX"),
    ("stray-comment-guard", "[[include @@ [!-- not stray --] | marker=S4]]\nX"),
    ("stray-comment-space", "[[include @@ [[ [!-- c --] | marker=S5]]\nX"),
    # Quoted includes
    ("q-spaced", "> [[include @@]]\nX"),
    ("q-unspaced", "BEFORE\n>[[include @@]]\nAFTER"),
    ("q-unspaced-args", ">[[include @@\n>| marker=NSOK]]\nAFTER"),
    ("q-depth2-unspaced", ">>[[include @@]]\nX"),
    ("q-spaced-depth2", ">> [[include @@]]\nX"),
    ("q-midtext", "intro\n> some text\n>[[include @@]]\nX"),
    ("q-trailing-line", ">[[include @@]]\n> trailing quoted\nX"),
    ("q-broken-continuation", ">[[include @@\nplain line | marker=X]]\nY"),
    ("q-arg-spaced-cont", ">[[include @@\n> | marker=QC]]\nY"),
    ("q-early-term-line", ">[[include @@\n>]]\n> | marker=X]]\nY"),
    ("q-not-at-line-start", "x>[[include @@]]\nY"),
    ("q-prefix-blanks", " >[[include @@]]\nY"),
    ("q-tab-prefix", "\t>[[include @@]]\nY"),
    ("q-gt-space-gt", "> >[[include @@]]\nX"),
    # Multiple includes and padding
    ("two-includes", "[[include @@ | marker=A]]\nMIDDLE\n[[include other-page | marker=B]]\nEND"),
    ("empty-then-real", "[[include empty-page]]\n[[include @@]]\nX"),
    ("adjacent-crlf", "A\r\n[[include @@]]\r\nB"),
    ("include-only-crlf", "[[include @@]]\r\n"),
    ("missing-mid", "A\n[[include nope]]\nB"),
    ("var-in-caller", "{$marker}\n[[include @@]]\nX"),
    ("other-with-arg", "[[include other-page | marker=ZZ]]\nX"),
    ("crlf-throughout", "A\r\n[[include @@ | marker=W]]\r\nB\r\n[[include other-page]]\r\nC"),
    # Second wave: terminator width and other edges found by the first run
    ("term-cr-in-tail", "[[include @@ | a=]]\r]]\nX"),
    ("term-cr-eof", "[[include @@]]\r"),
    ("value-brackets", "[[include @@ | marker=a]] b]]\nX"),
    ("q-cr-term", ">[[include @@]]\rX"),
    ("cr-no-line-start", "A\r[[include @@]]\nX"),
    ("arg-value-comment-only", "[[include @@ | marker=[!-- x --]]]\nX"),
    ("arg-comment-segment", "[[include @@ | [!-- c --] | marker=BC]]\nX"),
    ("value-nested-brackets", "[[include @@ | marker=[[[include]]]]\nX"),
    ("tail-pipe-eof", "[[include @@ |]]"),
    ("site-extra-hash", "[[include :sandbox:page#x]]\nX"),
    ("multi-mixed", ">[[include @@]]\n[[include other-page]]\n>[[include @@]]\nEND"),
    ("arg-value-equals", "[[include @@ | marker=a=b]]\nX"),
    ("arg-digit-key", "[[include @@ | 9key=v | marker=DK]]\nX"),
    ("q-depth2-args", ">>[[include @@\n>>| marker=D2]]\nX"),
    ("q-blanks-between-gt", "  >  >[[include @@]]\nX"),
]


def main() -> None:
    out = sys.stdout
    for cid, source in CASES:
        rec = {"id": cid, "source": source.replace("@@", T)}
        out.write(json.dumps(rec, ensure_ascii=False) + "\n")


if __name__ == "__main__":
    main()
