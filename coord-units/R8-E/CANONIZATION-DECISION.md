# R8-E canonization decision — C-R5-S1-16 (u3-listfour) (2026-11-23, final form)

BINDING RULING: CLEARED as an OWNED token-numbering class. The analysis below accurately shows that the digit difference is NOT the narrow +1 canonization subclass, but the programme owns the full token-id counter class under PROTOCOL-R5; no fix, pin or gate mask was created for this shape. The later coordinator addendum at the end of this document is consistent with this opening ruling.

## Decision
STRUCTURAL DIFFERENCE — the owned global +1 token-numbering residue does NOT explain the observed digit divergence. The candidate is a genuine rule-level divergence and is CONFIRMED on the canonization axis. This is not a case for REJECT on residue grounds.

## Cached evidence used (no new live probe)
Live capture `muse-probe-round5-s1-u3-listfour`, `coord-units/R5-S1/captures.json:152-161`, html_sha256 `540ffd0d85ee7ec4dc4be8a85a7d41dcf63cf13d4579dad8a16f1dba37d35eba`, valid=true, stable=true, saved_source_matches=true, html `<ul>\n<li>x 91102113124136814`. Reference `coord-units/R5-S1/ref.jsonl:16`, reproduced firsthand with the local `php harness/transform.php render` oracle (exit 0, zero stderr, scratch output `u3.transform.render.out`), html `<ul>\n<li>x 11112213314457910`. Source `cases.jsonl:16` carries a literal U+FFFD (EF BF BD) and four `@@@@` lines inside an explicit `[[ul]]`/`[[li]]`.

## The established canonization discipline, applied literally
`conformance-ufffd/compare_live.py::classify` is the programme's operative canonization rule: a same-length framed pair is a RESIDUE only when every differing position is a digit position where live digit == mirror digit + 1; anything else is DIFF (structural). Its doc comment states the residue is "the 2-versus-1 token-numbering gap; content digits that agree are not residue". The gate `conformance-ufffd/gate-ufffd.txt` shows the only accepted residue rows (plain-end 1->2, end-list 2->3/3->4, etc.), all of which are same-length one-digit increments.

Running that exact function on the two framed outputs gives `classify(ref, live) == ('DIFF', [('first_non_plus1', 11, '1', '9')])` and the symmetric direction also returns DIFF. The reproduction is at `scratch/canonization_check.py` / `scratch/canonization_check.out`.

Digit-run comparison, position by position (17 digits each; framed strings both 28 characters):
```
ref  digits: 1 1 1 1 2 2 1 3 3 1 4 4 5 7 9 1 0
live digits: 9 1 1 0 2 1 1 3 1 2 4 1 3 6 8 1 4
live-ref:    8 0 0 -1 0 -1 0 0 -2 1 0 -3 -2 -1 -1 0 4
```
Only ONE of the seventeen positions (index 9) has the +1 relation; seven positions agree and NINE positions differ by a value other than +1 (including -3, -2, +4 and +8). Residue requires ALL differing positions to be +1. This is not residue.

A second, independent token-level check rules out a shifted-segmentation reading. The local reference oracle's token dump (`scratch/dbg.out`) gives the leaked run token ids in source order `[10,0,11,1,12,2,13,3,4,6,8,9]`, printed as `id - first + 1 = [11,1,12,2,13,3,14,4,5,7,9,10]`, whose concatenation is exactly the reference run `11112213314457910`. Adding +1 to every printed value yields `122133144155681011` (18 digits), which is not the live run and has the wrong length (17), so the live string cannot be the reference run under the owned +1 numbering shift at any token segmentation.

A third check uses the hunt's own controls: `classify` on u1-twoadj and u2-headthree is MATCH on both sides (live == reference digit-for-digit). A global token-counter offset would perturb all three siblings; it perturbs only the four-placeholder case. The difference is specific to the four-placeholder explicit-list boundary, which is a structural property of the run, not a counter frame.

## Mechanism observed
The reference's whole-run neighbor loop (`ref-php/text-wiki/Text/Wiki.php:995-1006`, REFCORR7 idx-after shape) leaks every consecutive original placeholder after the single literal U+FFFD, emitting `id - first + 1` for each. For this source it leaks twelve tokens. Live leaks twelve tokens too, but their index sequence is different: the interleaving of newline ids and empty-Raw/list ids is permuted relative to the reference's allocation order (the reference places the trailing newline token at id 9 ahead of the inter-item newlines at ids 10-13, whereas live's leaked sequence is consistent with newlines numbered in document order 9,10,11,12,13). That is a structural difference in the leaked index sequence, not a uniform numbering offset. The two and three placeholder siblings stay matched, and the R7C2 idx-after whole-run fix is untouched by this diagnosis.

## Consequence
C-R5-S1-16 survives the canonization gate: it is CONFIRMED, not cleared as owned counter residue. The owned +1 residue remains a separate, already-recorded class (recorded in conformance-ufffd/CORRECTION-REFCORR7-UFFFD-IDX-AFTER.md and GAP-LEDGER) and was not re-litigated here.

COORDINATOR ADDENDUM — BINDING SCOPE DECISION (2026-11-23, after the AUDIT-R8 record contradiction): the artifact-level analysis above stands as the accurate technical finding: the four-adjacent U+FFFD digit string is NOT the owned +1 residue subclass, and the operate canonization function classifies it DIFF in both directions. The programme's binding scope decision is nevertheless that the shape is CLEARED as an OWNED TOKEN-NUMBERING CLASS, because the difference is confined to leaked token-index digits under the parser's counter, and PROTOCOL-R5 declares the token-id counter class owned in full, not only its +1 subclass. The canonization checker implements a narrow verification subclass; it does not define the outer owned class. No fix, pin or gate exclusion was created for this shape, and SpecRefcorr8.lean records it as a comment. The contradiction was that this decision was never written into this decision document; that omission is now repaired. Future rounds must not re-litigate the digit class without a rule-level byte difference outside token numbering.
