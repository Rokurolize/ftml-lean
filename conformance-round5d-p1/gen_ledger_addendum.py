#!/usr/bin/env python3
# R5D-P1 pre-probe ledger ADDENDUM. Written after the first 17 cases were
# created but before these two pages were created or captured; each row is a
# fresh suspicion with its own ledger row and its own probe, as PROTOCOL-R5
# requires for any suspicion added after probing has begun. The addendum exists
# because the two original Div rows used a literal U+FFFD character, which the
# reference harness does NOT convert into the \xFF token delimiter — the
# token placeholder is produced by an inline rule ([[size ...]]) that runs
# before Div. These rows use that genuine placeholder mechanism and are the
# true third-order siblings of the REFCORR10 isolateId 0xFF arm.
import json, os

U = os.path.dirname(os.path.abspath(__file__))

ROWS = [
 dict(
  id="D3-IDFFSIZELEAD", family="Div/Container",
  construct="REFCORR10 Div-mechanism genuine third-order sibling: an authored id combining a leading space with a real token placeholder from [[size]]",
  why="The [[size 12px]]x[[/size]] inline rule runs before Div in the rule order at Text/Wiki.php:95-97 and leaves a \\xFF-delimited token number in the id value, which is the byte shape the confirmed R5C Div placeholder cases carried. REFCORR10 removed the u- exclusion at Div.php:80-82 so isolateId returns that value verbatim for any body before the leading-whitespace branch at Div.php:83-96. Combining a leading space with a real placeholder tests whether the early return is unconditional in the general rule. The D1 literal-U+FFFD row did not create a token placeholder and is therefore not evidence about this mechanism.",
  confirm="reference emits a u- shell or a non-empty id while live emits id=\"\" for the placeholder-bearing value",
  clear="both sides emit id=\"\" with the same remaining attributes and body",
  source="[[div id=\" [[size 12px]]x[[/size]]\"]]\nX[[/div]]",
 ),
 dict(
  id="D4-IDFFSIZEBARE", family="Div/Container",
  construct="REFCORR10 Div-mechanism genuine third-order sibling: a real token placeholder id with no u- prefix and no other text",
  why="The confirmed R5C shapes carried a u- prefix beside the placeholder; the REFCORR10 general rule explicitly removed the prefix exclusion so a bare placeholder must take the same clear arm. A [[size]]-generated placeholder as the entire id is the minimal body-independent boundary of the changed mechanism and has no prefix to interact with. It is a fresh byte shape with its own probe, not a re-probe of the recorded u- source.",
  confirm="reference drops the id key, emits a u- shell, or emits a literal placeholder while live emits id=\"\"",
  clear="both sides emit id=\"\" with the same body and no other attribute difference",
  source="[[div id=\"[[size 12px]]x[[/size]]\"]]\nX[[/div]]",
 ),
]

HEAD = """# R5D-P1 pre-probe ledger ADDENDUM — Div token-placeholder siblings

Written before either of these two pages was created or captured. The main ledger's D1-IDFFLEADWS and D2-IDFFONLY rows used a literal U+FFFD character; source reading of ref-php/text-wiki/Text/Wiki.php:95-97 and the confirmed R5C sources shows that a literal U+FFFD is not converted into the \\xFF token delimiter, and that the placeholder in the confirmed Div id cases came from the [[size]] inline rule that runs before Div. Those two rows therefore test whitespace-only u- isolation and clear at rule level, not the REFCORR10 0xFF arm. These two new rows use the genuine [[size]]-generated token placeholder, are tied to the isolateId mechanism that actually changed in REFCORR10, and each carries its own decisive CONFIRM/CLEAR prediction and its own probe. All standing owned classes still apply without re-litigation.

"""

lines = [HEAD]
lines.append("| ID | Family | Construct | Why the reference looks wrong | Decisive CONFIRM bytes | Decisive CLEAR bytes | Source (\\n = LF) |\n")
lines.append("|----|--------|-----------|-------------------------------|------------------------|----------------------|-------------------|\n")
for r in ROWS:
    src = r["source"].replace("\n", "\\n")
    lines.append("| %s | %s | %s | %s | %s | %s | %s |\n" % (
        r["id"], r["family"], r["construct"], r["why"], r["confirm"], r["clear"], src))
lines.append("\n")
for r in ROWS:
    lines.append("## %s — %s\n\n" % (r["id"], r["construct"]))
    lines.append("Why: %s\n\n" % r["why"])
    lines.append("CONFIRM if %s; CLEAR if %s. Source: %s\n\n" % (
        r["confirm"], r["clear"], r["source"].replace("\n", "\\n")))

with open(os.path.join(U, "LEDGER-ADDENDUM.md"), "w", encoding="utf-8") as f:
    f.writelines(lines)
with open(os.path.join(U, "cases-addendum.jsonl"), "w", encoding="utf-8") as f:
    for r in ROWS:
        f.write(json.dumps({"id": r["id"], "source": r["source"]}, ensure_ascii=False) + "\n")
print("addendum rows:", len(ROWS))
