"""Seeded within-class fuzz of the table family.

Parse classes are whole sources: the PHP reference transform through
driver.php source, and the Lean mirror through lean-ftml-conformance-r45
--e2e-r45. Render classes are single tokens: the reference token() and the
Lean mirror's state mode. A case passes when both sides render
byte-identically and the PHP class annotation equals the Python expectation.

taIdEmpty is the isolateId empty arm. buildAttrs drops an empty value before
that arm, so a page cannot enter it. Those cases are recorded uncomparable.
taAttrRank cases whose two data-* keys are out of alphabetical order are
ordinary comparable cases; a mismatch there is the parse mirror's name sort.
"""

from __future__ import annotations

import json
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from classify import (  # noqa: E402
    ALL_CLASSES, FRAMES, source_classes, token_classes,
)

ROOT = Path(__file__).resolve().parents[1]
HERE = Path(__file__).resolve().parent
PHP = HERE / "driver.php"
LEAN = ROOT / "lean-ftml" / ".lake" / "build" / "bin" / "lean-ftml-conformance-r45"
SEEDS = (20261122, 7)
PER = 6

PINS = {
    "tbMiss": {"branch": "Table scanner copies a byte that does not open a table",
        "live": ["muse-probe-r2table-tbl-p12-paragraph-then-table"],
        "battery": ["t35-38-paragraph-then-table", "t35-47-single-pipe-lines"]},
    "tbHit": {"branch": "Table.php regex matches a || row run",
        "live": ["muse-probe-r2table-tbl-p02-header-unspaced"],
        "battery": ["t35-01-single-cell"]},
    "tbRowContent": {"branch": "Table.php row emits at least one content cell",
        "live": ["muse-probe-r2table-tbl-p05-alignment-markers"],
        "battery": ["t35-01-single-cell", "t35-03-two-rows-two-cells"]},
    "tbRowEmpty": {"branch": "Table.php C2: a row with no content cell still owns one empty cell",
        "live": ["muse-probe-r2table-tbl-p03-empty-only-rows"],
        "battery": ["t35-25-all-empty-row", "t35-50-opener-only"]},
    "tbSpanOne": {"branch": "content cell whose span accumulator is 1",
        "live": ["muse-probe-r2table-tbl-p02-header-unspaced"],
        "battery": ["t35-01-single-cell"]},
    "tbSpanCarry": {"branch": "empty || parts increment span into the next content cell",
        "live": ["muse-probe-r2table-tbl-p06-header-span"],
        "battery": ["t35-19-empty-middle-cell", "t35-22-span-two", "t35-23-span-three-with-header"]},
    "tbSpanDiscard": {"branch": "C2 discards the accumulator when the row had no content cell",
        "live": ["muse-probe-r2table-tbl-p03-empty-only-rows"],
        "battery": ["t35-25-all-empty-row"]},
    "tbCellRight": {"branch": "cell marker > ",
        "live": ["muse-probe-r2table-tbl-p05-alignment-markers"],
        "battery": ["t35-14-align-right"]},
    "tbCellCenter": {"branch": "cell marker = ",
        "live": ["muse-probe-r2table-tbl-p05-alignment-markers"],
        "battery": ["t35-15-align-center"]},
    "tbCellLeft": {"branch": "cell marker < ",
        "live": ["muse-probe-r2table-tbl-p05-alignment-markers"],
        "battery": ["t35-16-align-left"]},
    "tbCellHeader": {"branch": "cell marker ~ ",
        "live": ["muse-probe-r2table-tbl-p02-header-unspaced"],
        "battery": ["t35-08-header-one", "t35-13-header-many"]},
    "tbCellPlain": {"branch": "content cell with no marker prefix",
        "live": ["muse-probe-r2table-tbl-p12-paragraph-then-table"],
        "battery": ["t35-01-single-cell", "t35-09-header-spaced-literal"]},
    "tbRTableStart": {"branch": "Table token table_start, css_table wiki-content-table",
        "live": ["muse-probe-r2table-tbl-p02-header-unspaced"],
        "battery": ["t35-01-single-cell"]},
    "tbRTableEnd": {"branch": "Table token table_end",
        "live": ["muse-probe-r2table-tbl-p02-header-unspaced"],
        "battery": ["t35-01-single-cell"]},
    "tbRCaptionStart": {"branch": "Table token caption_start; the active parse never emits it",
        "live": [], "battery": [],
        "reason": "Table.php process claims no caption token. Designed direct token() pin."},
    "tbRCaptionEnd": {"branch": "Table token caption_end; the active parse never emits it",
        "live": [], "battery": [],
        "reason": "Designed direct token() pin. A page cannot enter this arm."},
    "tbRRowStart": {"branch": "Table token row_start",
        "live": ["muse-probe-r2table-tbl-p02-header-unspaced"],
        "battery": ["t35-03-two-rows-two-cells"]},
    "tbRRowEnd": {"branch": "Table token row_end",
        "live": ["muse-probe-r2table-tbl-p02-header-unspaced"],
        "battery": ["t35-03-two-rows-two-cells"]},
    "tbRCellStart": {"branch": "Table token cell_start",
        "live": ["muse-probe-r2table-tbl-p02-header-unspaced"],
        "battery": ["t35-01-single-cell"]},
    "tbRCellEnd": {"branch": "Table token cell_end",
        "live": ["muse-probe-r2table-tbl-p02-header-unspaced"],
        "battery": ["t35-01-single-cell"]},
    "tbRFall": {"branch": "Table token default arm, empty string",
        "live": [], "battery": [],
        "reason": "No parse token uses a type outside the eight handled names. Designed direct token() pin."},
    "tbRTh": {"branch": "cell tag th when attr is header",
        "live": ["muse-probe-r2table-tbl-p02-header-unspaced"],
        "battery": ["t35-08-header-one"]},
    "tbRTd": {"branch": "cell tag td otherwise",
        "live": ["muse-probe-r2table-tbl-p05-alignment-markers"],
        "battery": ["t35-01-single-cell"]},
    "tbRColspan": {"branch": "cell_start span > 1 writes colspan",
        "live": ["muse-probe-r2table-tbl-p06-header-span"],
        "battery": ["t35-22-span-two"]},
    "tbRRowspan": {"branch": "cell_start rowspan > 1; the active parse never emits rowspan",
        "live": [], "battery": [],
        "reason": "Designed direct token() pin. A page cannot enter this arm."},
    "tbRAlign": {"branch": "non-header nonempty attr writes text-align",
        "live": ["muse-probe-r2table-tbl-p05-alignment-markers"],
        "battery": ["t35-14-align-right", "t35-15-align-center", "t35-16-align-left"]},
    "tbRFormat": {"branch": "isset format fragment on a start tag; the active parse never sets it",
        "live": [], "battery": [],
        "reason": "Designed direct token() pin. A page cannot enter this arm."},
    "taNoRow": {"branch": "Tableadv process returns the match when no row matches",
        "live": ["muse-probe-r2table-adv-adv09-empty-table-literal"],
        "battery": ["adv09-empty-table-literal"]},
    "taStrayRow": {"branch": "non-row residue after the row matches fails the table",
        "live": [], "battery": ["adv51-junk-in-table"],
        "reason": "Retained battery case. No separate live page in the adv probe subset."},
    "taNoCell": {"branch": "a row with no cell fails the whole table",
        "live": ["muse-probe-r2table-adv-adv10-empty-row-literal"],
        "battery": ["adv10-empty-row-literal", "adv13-empty-row-then-full-row"]},
    "taStrayCell": {"branch": "non-cell residue inside a row fails the whole table",
        "live": [], "battery": ["adv52-junk-in-row"]},
    "taOk": {"branch": "rows and cells validate and the table tokens are emitted",
        "live": ["muse-probe-r2table-adv-adv01-single-cell"],
        "battery": ["adv01-single-cell"]},
    "taCellHeader": {"branch": "closer text is exactly hcell",
        "live": ["muse-probe-r2table-adv-adv14-header-row"],
        "battery": ["adv14-header-row", "adv16-cell-hcell-closer"]},
    "taCellPlain": {"branch": "any other closer, including [[/HCELL]] and [[/cell]] after [[hcell]]",
        "live": ["muse-probe-suspect-listtable-s04", "muse-probe-r2table-adv-adv15-hcell-cell-closer"],
        "battery": ["adv01-single-cell", "adv15-hcell-cell-closer"]},
    "taCellPara": {"branch": "cell body contains a blank line, so the trimmed body is wrapped in blank lines",
        "live": ["muse-probe-r2table-adv-adv42-paragraph-cell"],
        "battery": ["adv42-paragraph-cell", "adv43-two-paragraph-cell"]},
    "taCellTrim": {"branch": "cell body has no blank line and is trimmed",
        "live": ["muse-probe-r2table-adv-adv01-single-cell"],
        "battery": ["adv01-single-cell", "adv11-empty-cell"]},
    "taNested": {"branch": "a nested table is processed before the enclosing row split",
        "live": ["muse-probe-r2table-adv-adv48-nested-inline"],
        "battery": ["adv48-nested-inline", "adv49-nested-paragraph", "adv50-nested-deep"]},
    "taFlat": {"branch": "the body contains no nested table match",
        "live": ["muse-probe-r2table-adv-adv01-single-cell"],
        "battery": ["adv01-single-cell"]},
    "taEnumQuoted": {"branch": "quoted head stops before a ]] inside quotes; the fourteen witness frames",
        "live": [],
        "battery": [f"tableadv-witness-{i:02d}" for i in range(1, 15)],
        "reason": "Pinned by tableadvWitnessFamily in TableadvEnum.lean and conformance-r310/witness-family-cases.jsonl. Not re-derived."},
    "taAttrBadKey": {"branch": "key fails ^[a-z][a-z0-9-]*$",
        "live": ["muse-probe-r2table-adv-adv31-uppercase-attrs"],
        "battery": ["adv31-uppercase-attrs"]},
    "taAttrBlocked": {"branch": "title or hidden is dropped even though both are on the allowlist",
        "live": [], "battery": ["adv34-title-attr"],
        "reason": "adv34 pins title. hidden is the same condition; the fuzz varies it. No separate retained hidden page."},
    "taAttrUnsafe": {"branch": "not a data-* name and not on the allowlist (aria-*, align, unknown)",
        "live": ["muse-probe-r2table-adv-adv30-unknown-attrs", "muse-probe-r2table-adv-adv39-align-center"],
        "battery": ["adv30-unknown-attrs", "adv39-align-center", "adv40-valign-dropped"]},
    "taAttrSpanOffCell": {"branch": "colspan or rowspan on a table or a row is dropped",
        "live": ["muse-probe-covtable-span-off"],
        "battery": [],
        "file": "conformance-covtable/probes/muse-probe-covtable-span-off.html"},
    "taAttrEmptyVal": {"branch": "a raw empty value is dropped",
        "live": [], "battery": ["adv33-empty-attr-values"]},
    "taAttrSpanZero": {"branch": "a cell colspan or rowspan of exactly 0 is dropped",
        "live": ["muse-probe-r2table-adv-adv21-colspan-zero"],
        "battery": ["adv21-colspan-zero", "adv22-rowspan-zero"]},
    "taAttrNormDrop": {"branch": "class, id, role, style or type whose normalized value is empty is dropped",
        "live": ["muse-probe-covtable-norm-drop"],
        "battery": [],
        "file": "conformance-covtable/probes/muse-probe-covtable-norm-drop.html",
        "reason": "Live emits class=\"\" for class=\"   \". The reference and the mirror drop the attribute. See R-2."},
    "taAttrKeep": {"branch": "the attribute survives the filter",
        "live": ["muse-probe-r2table-adv-adv26-table-attrs", "muse-probe-r2table-adv-adv29-cell-attrs"],
        "battery": ["adv26-table-attrs", "adv19-colspan"]},
    "taIdEmpty": {"branch": "isolateId of the empty string",
        "live": [], "battery": [],
        "reason": "buildAttrs drops an empty value before isolateId, so a page cannot enter this arm. Designed direct call of the empty arm."},
    "taIdAlready": {"branch": "a value that already starts with u- is only normalized",
        "live": [], "battery": ["adv37-id-prefixed"]},
    "taIdLeadWs": {"branch": "a leading whitespace byte inserts the prefix u- followed by a space",
        "live": ["muse-probe-covtable-id-lead"],
        "battery": [],
        "file": "conformance-covtable/probes/muse-probe-covtable-id-lead.html"},
    "taIdPrefix": {"branch": "any other id takes the u- prefix",
        "live": ["muse-probe-r2table-adv-adv27-table-id"],
        "battery": ["adv27-table-id"]},
    "taAttrRank": {"branch": "uksort by id, class, style, role, type, data-*, then the rest; equal ranks keep authored order",
        "live": ["muse-probe-r2table-adv-adv23-colspan-bad", "muse-probe-covtable-data-order"],
        "battery": ["adv23-colspan-bad", "adv35-many-attrs"],
        "file": "conformance-covtable/probes/muse-probe-covtable-data-order.html"},
    "taRStart": {"branch": "Tableadv token start",
        "live": ["muse-probe-r2table-adv-adv01-single-cell"],
        "battery": ["adv01-single-cell"]},
    "taRRowStart": {"branch": "Tableadv token rowStart",
        "live": ["muse-probe-r2table-adv-adv01-single-cell"],
        "battery": ["adv01-single-cell"]},
    "taRCellStart": {"branch": "Tableadv token cellStart",
        "live": ["muse-probe-r2table-adv-adv01-single-cell"],
        "battery": ["adv01-single-cell"]},
    "taRCellEnd": {"branch": "Tableadv token cellEnd",
        "live": ["muse-probe-r2table-adv-adv01-single-cell"],
        "battery": ["adv01-single-cell"]},
    "taRRowEnd": {"branch": "Tableadv token rowEnd",
        "live": ["muse-probe-r2table-adv-adv01-single-cell"],
        "battery": ["adv01-single-cell"]},
    "taREnd": {"branch": "Tableadv token end",
        "live": ["muse-probe-r2table-adv-adv01-single-cell"],
        "battery": ["adv01-single-cell"]},
    "taRFall": {"branch": "Tableadv token falls through to the empty string",
        "live": [], "battery": [],
        "reason": "No parse token uses a type outside the six handled names. Designed direct token() pin."},
    "taRTh": {"branch": "header flag is PHP-nonempty, so the cell tag is th",
        "live": ["muse-probe-r2table-adv-adv14-header-row"],
        "battery": ["adv14-header-row"]},
    "taRTd": {"branch": "header flag is PHP-empty, so the cell tag is td",
        "live": ["muse-probe-r2table-adv-adv01-single-cell"],
        "battery": ["adv01-single-cell", "adv15-hcell-cell-closer"]},
    "taRAttrs": {"branch": "attribute fragment on start, rowStart or cellStart, ENT_COMPAT",
        "live": ["muse-probe-suspect-listtable-s12", "muse-probe-r2table-adv-adv26-table-attrs"],
        "battery": ["adv26-table-attrs", "adv29-cell-attrs"]},
}


def write_pins() -> None:
    missing = [c for c in ALL_CLASSES if c not in PINS]
    extra = [c for c in PINS if c not in ALL_CLASSES]
    if missing or extra:
        raise SystemExit(f"pin inventory mismatch missing={missing} extra={extra}")
    doc = {
        "family": "Table, Tableadv, Row, Cell",
        "module": "LeanFtml.CoverageTable",
        "class_count": len(ALL_CLASSES),
        "enum_frames": "conformance-r310/witness-family-cases.jsonl",
        "classes": PINS,
    }
    (HERE / "pin-inventory.json").write_text(
        json.dumps(doc, indent=2, ensure_ascii=False) + "\n")


def cell(body: str, head: str = "", opener: str = "cell", closer: str = "cell") -> str:
    return f"[[{opener}{head}]]{body}[[/{closer}]]"


def table(inner: str, head: str = "") -> str:
    return f"[[table{head}]]\n{inner}\n[[/table]]"


def row(inner: str, head: str = "") -> str:
    return f"[[row{head}]]\n{inner}\n[[/row]]"


def cases(seed: int) -> list[dict]:
    bodies = [f"a{seed % 7}", f"bb{seed % 5}", "c d", "O'Brien", "x&y", f"n{seed % 9}"]
    out = []

    def add(cid, target, *, source=None, rule=None, opts=None, note=None, kind=None):
        if source is not None:
            kind = kind or "source"
            expect = source_classes(source)
            rowd = {"id": cid, "kind": kind, "source": source, "expect": expect, "target": target}
        elif kind == "direct":
            expect = ["taIdEmpty"]
            rowd = {"id": cid, "kind": "direct", "expect": expect, "target": target}
        else:
            kind = "token"
            expect = token_classes(rule, opts)
            rowd = {"id": cid, "kind": "token", "rule": rule, "opts": opts,
                    "expect": expect, "target": target}
        if target not in rowd["expect"]:
            raise SystemExit(f"{cid}: target {target} not in {rowd['expect']}")
        if note:
            rowd["note"] = note
        out.append(rowd)

    for i, body in enumerate(bodies):
        add(f"tb-miss-{i}", "tbMiss", source=f"Note {body} {i}")
        add(f"tb-hit-{i}", "tbHit", source=f"|| {body} ||")
        add(f"tb-row-content-{i}", "tbRowContent", source=f"|| {body} || {i} ||")
        add(f"tb-row-empty-{i}", "tbRowEmpty", source="||" + ("||" * (i + 1)))
        add(f"tb-span-one-{i}", "tbSpanOne", source=f"||{body}||")
        add(f"tb-span-carry-{i}", "tbSpanCarry", source="||" + ("||" * (i + 1)) + f" {body} ||")
        add(f"tb-span-discard-{i}", "tbSpanDiscard", source="||" + ("||" * (i + 2)))
        add(f"tb-right-{i}", "tbCellRight", source=f"||> {body} ||")
        add(f"tb-center-{i}", "tbCellCenter", source=f"||= {body} ||")
        add(f"tb-left-{i}", "tbCellLeft", source=f"||< {body} ||")
        add(f"tb-header-{i}", "tbCellHeader", source=f"||~ {body} ||")
        add(f"tb-plain-{i}", "tbCellPlain", source=f"||{body}||")

        add(f"ta-norow-{i}", "taNoRow", source=f"[[table]]nope {body}[[/table]]")
        add(f"ta-stray-row-{i}", "taStrayRow",
            source=table(row(cell(body)) + f"\njunk {i}"))
        add(f"ta-nocell-{i}", "taNoCell", source=table(row(f"no cell {body}")))
        add(f"ta-stray-cell-{i}", "taStrayCell",
            source=table(row(cell(body) + f"\njunk {i}")))
        add(f"ta-ok-{i}", "taOk", source=table(row(cell(body))))
        add(f"ta-header-{i}", "taCellHeader",
            source=table(row(cell(body, opener="hcell", closer="hcell"))))
        if i % 2 == 0:
            add(f"ta-plain-{i}", "taCellPlain", source=table(row(cell(body, closer="HCELL"))))
        else:
            add(f"ta-plain-{i}", "taCellPlain",
                source=table(row(cell(body, opener="hcell", closer="cell"))))
        add(f"ta-para-{i}", "taCellPara",
            source=table(row(cell(f"\n\n{body}\n\n"))))
        add(f"ta-trim-{i}", "taCellTrim", source=table(row(cell(f"  {body}  "))))
        add(f"ta-nested-{i}", "taNested",
            source=table(row(cell(table(row(cell(body)))))))
        add(f"ta-flat-{i}", "taFlat", source=table(row(cell(body))))
        add(f"ta-badkey-{i}", "taAttrBadKey",
            source=table(row(cell(body, head=f' CLASS="c{i}"'))))
        if i % 2 == 0:
            add(f"ta-blocked-{i}", "taAttrBlocked",
                source=table(row(cell(body, head=f' title="t{i}"'))))
        else:
            add(f"ta-blocked-{i}", "taAttrBlocked",
                source=table(row(cell(body, head=' hidden="1"'))))
        kind_attr = (' align="center"', ' aria-label="x"', ' foo="1"')[i % 3]
        add(f"ta-unsafe-{i}", "taAttrUnsafe",
            source=table(row(cell(body, head=kind_attr))))
        add(f"ta-span-off-{i}", "taAttrSpanOffCell",
            source=table(row(cell(body), head=f' colspan="{i + 1}"')))
        add(f"ta-empty-{i}", "taAttrEmptyVal",
            source=table(row(cell(body, head=' class=""'))))
        add(f"ta-zero-{i}", "taAttrSpanZero",
            source=table(row(cell(body, head=' colspan="0"'))))
        add(f"ta-normdrop-{i}", "taAttrNormDrop",
            source=table(row(cell(body, head=' class="   "'))))
        add(f"ta-keep-{i}", "taAttrKeep",
            source=table(row(cell(body, head=f' class="c{i}"'))))
        add(f"ta-id-empty-{i}", "taIdEmpty", kind="direct",
            note="isolateId empty arm is unreachable from buildAttrs")
        add(f"ta-id-already-{i}", "taIdAlready",
            source=table(row(cell(body, head=f' id="u-f{i}"'))))
        add(f"ta-id-lead-{i}", "taIdLeadWs",
            source=table(row(cell(body, head=f' id=" f{i}"'))))
        add(f"ta-id-prefix-{i}", "taIdPrefix",
            source=table(row(cell(body, head=f' id="fruit{i}"'))))
        if i < 3:
            add(f"ta-rank-{i}", "taAttrRank",
                source=table(row(cell(body, head=f' data-z="{i}" data-a="q"'))))
        else:
            add(f"ta-rank-{i}", "taAttrRank",
                source=table(row(cell(body, head=f' colspan="2" class="c{i}"'))))

        add(f"r-tstart-{i}", "tbRTableStart", rule="Table",
            opts={"type": "table_start", "rows": i + 1, "cols": 1})
        add(f"r-tend-{i}", "tbRTableEnd", rule="Table", opts={"type": "table_end"})
        add(f"r-cstart-{i}", "tbRCaptionStart", rule="Table",
            opts={"type": "caption_start"})
        add(f"r-cend-{i}", "tbRCaptionEnd", rule="Table", opts={"type": "caption_end"})
        add(f"r-rstart-{i}", "tbRRowStart", rule="Table", opts={"type": "row_start"})
        add(f"r-rend-{i}", "tbRRowEnd", rule="Table", opts={"type": "row_end"})
        add(f"r-cell-{i}", "tbRCellStart", rule="Table",
            opts={"type": "cell_start", "attr": None, "span": 1})
        add(f"r-cellend-{i}", "tbRCellEnd", rule="Table",
            opts={"type": "cell_end", "attr": None, "span": 1})
        add(f"r-fall-{i}", "tbRFall", rule="Table", opts={"type": f"other{i}"})
        add(f"r-th-{i}", "tbRTh", rule="Table",
            opts={"type": "cell_start", "attr": "header", "span": 1})
        add(f"r-td-{i}", "tbRTd", rule="Table",
            opts={"type": "cell_start", "attr": None, "span": 1})
        add(f"r-colspan-{i}", "tbRColspan", rule="Table",
            opts={"type": "cell_start", "attr": None, "span": i + 2})
        add(f"r-rowspan-{i}", "tbRRowspan", rule="Table",
            opts={"type": "cell_start", "attr": None, "span": 1, "rowspan": i + 2})
        align = (">", "=", "<")[i % 3]
        # Render attr is the marker word, not the source prefix.
        word = {"right": "right", "center": "center", "left": "left"}
        attr = ("right", "center", "left")[i % 3]
        add(f"r-align-{i}", "tbRAlign", rule="Table",
            opts={"type": "cell_start", "attr": attr, "span": 1})
        add(f"r-format-{i}", "tbRFormat", rule="Table",
            opts={"type": "table_start", "rows": 1, "cols": 1, "format": f"data-{i}"})

        add(f"ar-start-{i}", "taRStart", rule="Tableadv",
            opts={"type": "start", "attrs": {}})
        add(f"ar-row-{i}", "taRRowStart", rule="Tableadv",
            opts={"type": "rowStart", "attrs": {}})
        add(f"ar-cell-{i}", "taRCellStart", rule="Tableadv",
            opts={"type": "cellStart", "header": False, "attrs": {}})
        add(f"ar-cellend-{i}", "taRCellEnd", rule="Tableadv",
            opts={"type": "cellEnd", "header": False})
        add(f"ar-rowend-{i}", "taRRowEnd", rule="Tableadv", opts={"type": "rowEnd"})
        add(f"ar-end-{i}", "taREnd", rule="Tableadv", opts={"type": "end"})
        add(f"ar-fall-{i}", "taRFall", rule="Tableadv", opts={"type": f"nope{i}", "attrs": {}})
        add(f"ar-th-{i}", "taRTh", rule="Tableadv",
            opts={"type": "cellStart", "header": True, "attrs": {}})
        add(f"ar-td-{i}", "taRTd", rule="Tableadv",
            opts={"type": "cellStart", "header": False if i % 2 == 0 else 0, "attrs": {}})
        add(f"ar-attrs-{i}", "taRAttrs", rule="Tableadv",
            opts={"type": "cellStart", "header": False,
                  "attrs": {"class": f"c{i}", "data-z": f"z{i}"}})
        _ = align
        _ = word

    for i, frame in enumerate(FRAMES):
        suffix = f"\n\nnote {seed} {i}" if i % 2 == 0 else ""
        add(f"ta-enum-{i}", "taEnumQuoted", source=frame + suffix)
    return out


def run_php(mode: str, rows: list[dict]) -> list[dict]:
    payload = "".join(json.dumps(r, ensure_ascii=False) + "\n" for r in rows)
    proc = subprocess.run(["php", str(PHP), mode], input=payload,
                          text=True, capture_output=True)
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(f"php {mode} exited {proc.returncode}")
    if proc.stderr.strip():
        sys.stderr.write(proc.stderr)
    return [json.loads(line) for line in proc.stdout.splitlines() if line.strip()]


def run_lean(mode: str, rows: list[dict]) -> list[dict]:
    if mode == "e2e":
        payload = "".join(json.dumps(
            {"id": r["id"], "source": r["source"]}, ensure_ascii=False) + "\n" for r in rows)
        args = [str(LEAN), "--e2e-r45"]
    else:
        payload = "".join(json.dumps({
            "id": r["id"],
            "segments": [{"k": 0}],
            "tokens": [[r["rule"], r["opts"]]],
            "footnotes": [], "bibitems": [], "bibitemIds": [],
            "equations": [], "mathId": None, "scoredAnchors": [],
        }, ensure_ascii=False) + "\n" for r in rows)
        args = [str(LEAN), "state"]
    proc = subprocess.run(args, input=payload, text=True, capture_output=True)
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(f"lean {mode} exited {proc.returncode}")
    return [json.loads(line) for line in proc.stdout.splitlines() if line.strip()]


def as_text(value) -> str:
    if isinstance(value, str):
        return value
    if isinstance(value, dict) and "$bytes" in value:
        return bytes(value["$bytes"]).decode("latin1")
    return json.dumps(value, ensure_ascii=False)


def php_only(rows: list[dict]) -> tuple[dict, dict, dict]:
    grouped = defaultdict(list)
    for r in rows:
        grouped[r["kind"]].append(r)
    found = {}
    for kind, group in grouped.items():
        mode = {"source": "source", "token": "token", "direct": "direct"}[kind]
        for rec in run_php(mode, group):
            found[rec["id"]] = rec
    return found


def main() -> None:
    php_only_mode = "--php-only" in sys.argv
    write_pins()
    if not php_only_mode and not LEAN.exists():
        raise SystemExit(f"missing {LEAN}")
    combined = {"seed_runs": []}
    for seed in SEEDS:
        rows = cases(seed)
        targets = {r["target"] for r in rows}
        missing = [c for c in ALL_CLASSES if c not in targets]
        if missing:
            raise SystemExit(f"seed {seed} generated no case for {missing}")
        (HERE / f"fuzz-cases-{seed}.jsonl").write_text(
            "".join(json.dumps(r, ensure_ascii=False) + "\n" for r in rows))
        php = php_only(rows)
        (HERE / f"php-{seed}.jsonl").write_text(
            "".join(json.dumps(php[r["id"]], ensure_ascii=False) + "\n" for r in rows))
        lean = {}
        if not php_only_mode:
            for kind, flag in (("source", "e2e"), ("token", "state")):
                group = [r for r in rows if r["kind"] == kind]
                for rec in run_lean(flag, group):
                    lean[rec["id"]] = rec
            (HERE / f"lean-{seed}.jsonl").write_text(
                "".join(json.dumps(lean[r["id"]], ensure_ascii=False) + "\n"
                        for r in rows if r["kind"] != "direct"))
        by_class = defaultdict(lambda: {"n": 0, "fail": 0, "uncomparable": 0})
        failures = []
        mismatches = []
        uncomparable = []
        for r in rows:
            p = php[r["id"]]
            cls = r["target"]
            rec = by_class[cls]
            rec["n"] += 1
            if p.get("phpClass") != r["expect"]:
                mismatches.append({"id": r["id"], "expect": r["expect"],
                                   "phpClass": p.get("phpClass"), "error": p.get("error")})
            if r.get("note"):
                rec["uncomparable"] += 1
                uncomparable.append({"id": r["id"], "class": cls, "reason": r["note"]})
                continue
            if php_only_mode:
                continue
            l = lean[r["id"]]
            ok = ("error" not in p and l.get("status") == "ok" and
                  as_text(p.get("output")) == as_text(l.get("output")))
            if not ok:
                rec["fail"] += 1
                failures.append({
                    "id": r["id"], "class": cls,
                    "php": p.get("output", p.get("error")),
                    "lean": l.get("output", l.get("status", l.get("error"))),
                })
        summary = {
            "seed": seed,
            "cases": len(rows),
            "failures": len(failures),
            "class_mismatch": len(mismatches),
            "uncomparable": len(uncomparable),
            "by_class": {k: dict(v) for k, v in by_class.items()},
        }
        (HERE / f"fuzz-summary-{seed}.json").write_text(
            json.dumps(summary, indent=2, ensure_ascii=False) + "\n")
        (HERE / f"disagreements-{seed}.json").write_text(
            json.dumps({"failures": failures, "mismatches": mismatches,
                        "uncomparable": uncomparable}, indent=2, ensure_ascii=False) + "\n")
        combined["seed_runs"].append({
            "seed": seed, "cases": len(rows), "failures": len(failures),
            "class_mismatch": len(mismatches), "uncomparable": len(uncomparable),
            "by_class": {k: dict(v) for k, v in by_class.items()},
        })
        print(f"seed {seed}: cases {len(rows)} fail {len(failures)} "
              f"class-mismatch {len(mismatches)} uncomparable {len(uncomparable)}")
        if mismatches[:3]:
            print("  first mismatch", json.dumps(mismatches[0], ensure_ascii=False)[:500])
        if failures[:1]:
            print("  first fail", failures[0]["id"], failures[0]["class"])
    (HERE / "fuzz-summary.json").write_text(
        json.dumps(combined, indent=2, ensure_ascii=False) + "\n")


if __name__ == "__main__":
    main()
