#!/usr/bin/env python3
"""R5H-P3: generate include-target and probe case files from one script so ledger ids and sources cannot drift."""
import json, os, re

HERE = os.path.dirname(os.path.abspath(__file__))

TARGETS = {
    "t1": "A={$a};B={$b}",
    "t2": "P{$x}Q{$y}R",
}
T1, T2 = "muse-probe-round5h-p3-t1", "muse-probe-round5h-p3-t2"
ESC, DEL, FF, TAB = "\x1b", "\x7f", "\x0c", "\t"

CASES = {
    # Raw reassociation siblings of the REFCORR14 later-run threshold 4->2
    "p3h-01-raw-4op-2cl-later2": "@@@@a@@b@@",
    "p3h-02-raw-4op-3cl-later3": "@@@@a@@@b@@@",
    "p3h-03-raw-5op-2cl-later2": "@@@@@a@@b@@",
    "p3h-04-raw-4op-2cl-nextline": "@@@@a@@b\n@@",
    "p3h-05-raw-4op-3cl-nextline": "@@@@a@@@b\n@@@",
    "p3h-06-raw-4op-2cl-intervening-at": "@@@@a@@b@c@@",
    "p3h-07-raw-4op-2cl-then-more": "@@@@a@@b@@c@@",
    "p3h-08-raw-6op-3cl-later2": "@@@@@@a@@@b@@",
    "p3h-09-raw-4op-2cl-spaces": "@@@@ a @@ b @@",
    "p3h-10-raw-4op-3cl-later2-then4": "@@@@a@@@b@@@@",
    "p3h-11-raw-4op-2cl-nl-after": "@@@@a@@b@@\n",
    "p3h-12-raw-fix-hold-wit": "@@@@a@@@b@@@@",
    # R13 parse-side siblings (fresh cells not in R5G-P3)
    "p3h-13-img-alt-verbatim-spaces": '[[image IMG.png alt=" x "]]',
    "p3h-14-img-width-tab": '[[image IMG.png width="1' + TAB + '0"]]',
    "p3h-15-anchor-href-ff": '[[a href="#a' + FF + 'b"]]x[[/a]]',
    "p3h-16-span-class-spaces": '[[span class=" a "]]x[[/span]]',
    "p3h-17-div-class-esc": '\n[[div class="A' + ESC + 'B"]]\nx\n[[/div]]\n',
    # Embed / Url / Gallery siblings
    "p3h-18-embed-dot-onclick": '[[embed]]<iframe src="http://wikimapia.org/s/x" .onclick="evil()"></iframe>[[/embed]]',
    "p3h-19-url-descr-dollar-only": '[http://example.com $]',
    "p3h-20-gallery-js-mixed": '[[gallery]]\n: IMG.png link="JaVaScRiPt:alert(1)"\n[[/gallery]]',
    # Module / Raw / Tableadv third-order siblings
    "p3h-21-module-fresh-run": '[[module CSI width="100%"]]x[[/module]]',
    "p3h-22-raw-bare-eleven": "@@@@@@@@@@@",
    "p3h-23-tableadv-uppercase-key": '[[table data-A.B="v"]]\n[[row]]\n[[cell]]X[[/cell]]\n[[/row]]\n[[/table]]',
    # Include folds with run-owned targets
    "p3h-24-include-two-placeholders": "[[include " + T1 + " | a=X | b=Y]]",
    "p3h-25-include-two-other": "[[include " + T2 + " | x=1 | y=2]]",
    "p3h-26-include-fresh-values": "[[include " + T1 + " | a=hello | b=world]]",
}


def write_jsonl(path, mapping):
    with open(path, "w", encoding="utf-8") as f:
        for cid, src in mapping.items():
            f.write(json.dumps({"id": cid, "source": src}, ensure_ascii=False) + "\n")


def main():
    ledger = open(os.path.join(HERE, "LEDGER.md"), encoding="utf-8").read()
    ids = re.findall(r"^\| (P3H-\d\d) \|", ledger, flags=re.M)
    assert len(ids) == len(set(ids)), "duplicate ledger ids"
    case_ids = ["P3H-" + k.split("-")[1] for k in CASES]
    assert sorted(ids) == sorted(case_ids), (sorted(ids), sorted(case_ids))
    assert len(ids) >= 14, "need at least 14 fresh suspicions"
    write_jsonl(os.path.join(HERE, "targets.jsonl"), TARGETS)
    write_jsonl(os.path.join(HERE, "cases.jsonl"), CASES)
    with open(os.path.join(HERE, "case-counts.json"), "w", encoding="utf-8") as f:
        json.dump({"ledger_rows": len(ids), "targets": len(TARGETS), "cases": len(CASES)}, f, indent=1)
    print("ledger rows", len(ids), "targets", len(TARGETS), "cases", len(CASES))


if __name__ == "__main__":
    main()
