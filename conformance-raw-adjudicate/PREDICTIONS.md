# PREDICTIONS — stated before any of these probes was created (2026-11-22)

Models under adjudication:

- **S (scanner)** — the corrected `Parse/Default/Raw.php` in this tree after
  SUSPECT-RAWHEAD: left-to-right run scanner; a bare run of 3 is literal, a
  bare run of 4+ keeps `run-4`; empty bodies create **no** token; a cross-line
  close is accepted for closer run >= 2 with exactly one body newline and
  emits the surplus `@` literally after one space; a surplus closer run on
  the same line emits the **whole** run literally.
- **R (simple regex)** — the Antigravity claim, `/(?<!@)@@(.*?)@@/` applied by
  the base `Text_Wiki_Parse::parse()` (`process()` stores `$matches[1]` as the
  Raw token's `text`). No `/s`, so `.` cannot cross a newline. Empty bodies
  create a **real** Raw token; to remain consistent with live's literal
  observation `A @@@@ B -> A B`, an empty Raw token renders as `` (this
  elision is the minimum charity the regex model needs; without it R also
  emits an empty `<span>`, which is separately noted).
- **R-s** — same as R but with the `/s` modifier, the most charitable reading
  if someone claims the regex can cross lines.

Byte strings below are the decisive fragment of the rendered page content;
frame-level newline padding is ignored. Token-index numbers are read only
_relatively_ within a page (the batch harness offsets the absolute counter).

| # | Source | S prediction | R prediction | R-s prediction |
|---|---|---|---|---|
| iw-empty4 | `[wikipedia:X a@@@@b]` | `@@@@` vanishes -> label `ab` -> interwiki link emitted | empty Raw token inside label -> X44 rejects -> literal `[wikipedia:X ab]` | same as R |
| iw-empty6 | `[wikipedia:X a@@@@@@b]` | bare 6-run keeps 2 `@` -> label `a@@b` -> link emitted | empty token + literal `@@` + empty token -> rejected -> literal `[wikipedia:X a@@b]` | same as R |
| iw-nonempty | `[wikipedia:X a@@x@@b]` | one non-empty Raw token -> rejected -> literal | same | same (control) |
| date-empty4 | `[[date 0 format="a@@@@b"]]` | `format_ab` (no token) | `format_a%FF1%FFb` (token) | same as R |
| date-empty6 | `[[date 0 format="a@@@@@@b"]]` | `format_a%40%40b` (literal `@@` percent-encoded) | `format_a%FF1%FF%40%40%FF2%FFb` | same as R |
| date-nonempty | `[[date 0 format="a@@x@@b"]]` | `format_a%FFn%FFb` | same | same (control) |
| date-index | `@@x@@ [[date 0 format="q@@@@r"]]` | first span token 1; second has no token -> `format_qr` | first token 1, second empty token 2 -> `format_q%FF2%FFr` | same as R |
| xl-basic | `A @@x\n@@ B` | `A <span>x</span> B` | no match (`.` cannot cross LF) -> `A @@x<br />\n@@ B` | token body `x\n` -> `A <span>x\n</span> B` |
| xl-close3 | `A @@x\n@@@ B` | `A <span>x</span> @ B` | no match -> literal run | token body `x\n`, one `@` left -> `A <span>x\n</span>@ B` |
| xl-open3 | `A @@@x\n@@ B` | `A <span>@x</span> B` | no match -> literal run | token body `@x\n` -> `A <span>@x\n</span> B` |
| xl-two-nl | `A @@x\n\n@@ B` | abort -> literal, two paragraphs | no match -> literal, two paragraphs (S and R agree) | token body `x\n\n` -> one span with two LFs |
| bare-3 | `A @@@ B` | literal `@@@` | no match -> literal `@@@` | same (all agree; this shape does **not** discriminate) |
| bare-6 | `A @@@@@@ B` | literal `@@` | two empty tokens + literal `@@` -> text `@@` after elision (tokens hidden here) | same as R |
| trail-4 | `A @@x@@@@ B` | `<span>x</span>@@@@` (whole 4-run literal) | `<span>x</span>@@` (regex consumes opener + first 2 of closer; only 2 left) | same as R |
| dl-empty4 | `: @@@@ : def` | `<dt>` omitted (empty term) | `<dt>` omitted (empty token renders empty) | same (control) |
| fn-empty4 | `[[footnote]]a@@@@b[[/footnote]]` | footnote body `ab` | footnote body `ab` after elision | same (control) |

Discriminating pairs: iw-empty4/6, date-empty4/6/index (token existence);
xl-basic/close3/open3/xl-two-nl (cross-line mechanism); trail-4 (surplus-run
bytes). Controls: iw-nonempty, date-nonempty, bare-3, bare-6 (literal only),
dl-empty4, fn-empty4. The controls are included so the coordinator can see
where the models are forced to agree.
