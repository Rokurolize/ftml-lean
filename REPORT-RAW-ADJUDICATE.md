# REPORT-RAW-ADJUDICATE — settling the Raw model (2026-11-22)

## 0. Mission and models

The coordinator asked whether live Raw is the corrected **scanner** in this
tree's `Parse/Default/Raw.php` (SUSPECT-RAWHEAD) or the **simple lookbehind
regex** `/(?<!@)@@(.*?)@@/` argued by the Antigravity SUSPECT lane from token
existence (`x01`, `x02`, `p22`, `x09`). Predictions for all 16 probes were
written to `conformance-raw-adjudicate/PREDICTIONS.md` **before** any probe
page was created.

- **S (current scanner)** — the corrected in-tree `Raw.php`: run arithmetic,
  no token for an empty body, cross-line rules, surplus-run bytes.
- **R (simple regex)** — `/(?<!@)@@(.*?)@@/` with no `/s`; empty bodies make a
  real Raw token; a minimum of charity is extended by eliding an empty Raw at
  render (otherwise `A @@@@ B` would emit an empty `<span>`, which live does not).
- **R-s** — the same regex with `/s`, the most charitable cross-line reading.
- **C (composite)** — S's byte shaping, plus one empty Raw token for a run of
  four or more `@`, elided at render.

16 fresh pages were created on `sandbox-for-codex` under the permanent prefix
`muse-probe-rawadj-`; all 16 captures are `valid=true, stable=true,
saved_source_matches=true`. Reference bytes were produced per document (one
case per PHP process) from four scratch model copies, never from an edited
in-tree reference or mirror. Exact bytes for every probe and model are in
`conformance-raw-adjudicate/verdicts.jsonl`.

## 1. Result — the winning model

**Neither pure model wins. The winner is the composite C, 16/16.**

| Model | byte matches (16 probes) | where it fails |
|---|---|---|
| S — current scanner | 11 | iw-empty4, iw-empty6, date-empty4, date-empty6, date-index (token existence) |
| R — simple regex, no `/s` | 13 | xl-basic, xl-close3, xl-open3 (cross-line) |
| R-s — simple regex, `/s` | 12 | xl-basic, xl-close3, xl-open3, xl-two-nl |
| **C — composite** | **16** | none |

The mechanisms, named exactly:

1. **A run of four or more `@` with no body creates exactly one empty Raw
   token** (`text = ''`), regardless of run length: `@@@@` → one token;
   `@@@@@@` → one token plus two literal `@` (the `run - 4` bytes remain
   literal). The empty token renders as nothing. This governs **token
   existence** and is what the Antigravity lane saw through Interwiki,
   Date and the counter leak. (iw-empty4, iw-empty6, date-empty4,
   date-empty6, date-index, bare-6.)
2. **A run of exactly three `@` is literal text, no token** — neither model's
   regex nor the scanner's `max(0, run-4)` deletion is right here; both now
   agree on the literal bytes. (bare-3; the Antigravity `p27` shape is no
   longer a divergence after SUSPECT-RAWHEAD's correction and was never
   discriminating.)
3. **Cross-line and surplus-run byte shaping is scanner behavior, not regex
   behavior.** A closer run of two or more on the following line closes the
   raw (one newline in the body only), a three-run opener's surplus `@`
   prefixes the body, and the surplus closer run is emitted literal after one
   space. `R` cannot match any of these because `.` cannot cross LF, and `R-s`
   leaves the LF inside the span. (xl-basic, xl-close3, xl-open3; xl-two-nl
   additionally refutes `/s`.)
4. **A surplus same-line closer run emits `closeRun - 2` literal `@` and no
   token** — S and R agree here, so it is a control, not a discriminator.
   (trail-4.) The R2 "two empty raws cancel" reading of `@@@@x@@@@` is
   unaffected: the rendered bytes are plain `x`.

So the Antigravity lane was **right about token existence and wrong about the
mechanism**: live is not the simple regex. My scanner was **right about every
rendered byte and wrong about token existence**. The composite keeps all of
the scanner's discriminating power and adds the one missing token.

## 2. Per-probe verdicts against every model

`LIVE` is the decisive `page_content`; model columns are `M` (matches after
the two normalizations in §3) or `X` (differs). Full byte strings, including
the model outputs, are in `verdicts.jsonl`.

| Probe (suffix under `muse-probe-rawadj-`) | Source | Decisive live bytes | S | R | R-s | C | Discriminates |
|---|---|---|---|---|---|---|---|
| iw-empty4 | `[wikipedia:X a@@@@b]` | `<p>[wikipedia:X ab]</p>` (X44 rejection) | X | M | M | M | token vs no token |
| iw-empty6 | `[wikipedia:X a@@@@@@b]` | `<p>[wikipedia:X a@@b]</p>` (rejected) | X | M | M | M | token vs no token |
| iw-nonempty | `[wikipedia:X a@@x@@b]` | literal interwiki with `<span>x</span>` inside | M | M | M | M | control (both tokenize) |
| date-empty4 | `[[date 0 format="a@@@@b"]]` | `format_a%FF1%FFb` | X | M | M | M | token vs no token |
| date-empty6 | `[[date 0 format="a@@@@@@b"]]` | `format_a%FF1%FF%40%40b` — **one** token + literal `@@` | X | M | M | M | token count; also refutes "two tokens in one 6-run" |
| date-nonempty | `[[date 0 format="a@@x@@b"]]` | `format_a%FF1%FFb` | M | M | M | M | control |
| date-index | `@@x@@ [[date 0 format="q@@@@r"]]` | `format_q%FF2%FFr` — second token exists | X | M | M | M | counter leak |
| xl-basic | `A @@x\n@@ B` | `A <span>x</span> B` | M | X | X | M | scanner vs regex |
| xl-close3 | `A @@x\n@@@ B` | `A <span>x</span> @ B` | M | X | X | M | scanner vs regex |
| xl-open3 | `A @@@x\n@@ B` | `A <span>@x</span> B` | M | X | X | M | scanner vs regex |
| xl-two-nl | `A @@x\n\n@@ B` | `A @@x` + `@@ B` in two `<p>`s | M | M | X | M | refutes `/s` |
| bare-3 | `A @@@ B` | `<p>A @@@ B</p>` | M | M | M | M | control |
| bare-6 | `A @@@@@@ B` | `<p>A @@ B</p>` | M | M | M | M | text agrees; token existence decided by date/iw |
| trail-4 | `A @@x@@@@ B` | `<p>A <span>x</span>@@ B</p>` | M | M | M | M | control (2 literal `@`) |
| dl-empty4 | `: @@@@ : def` | `<dl><dd>def</dd></dl>`, no `<dt>` | M | M | M | M | control (emptiness agrees) |
| fn-empty4 | `[[footnote]]a@@@@b[[/footnote]]` | footnote body `ab`, id `1` unchanged | M | M | M | M | control (no counter effect) |

**Bibliography/footnote counters**: the fresh `fn-empty4` probe shows the
footnote counter is unaffected by an empty Raw token — ids stay `footnote-1`
and the body renders `ab` under both token models. The only counter that
exposes Raw token existence is the **token index itself**, observed through
Date's `%FFn%FF` encoding (date-index: token 2 proves the earlier token 1).

## 3. Two confounders, handled explicitly

1. **This tree's reference lacks the X44 Interwiki fix.** Without a token
   check in `Interwiki::processDescr`, every model linkifies the label and
   all three `iw-*` probes mismatch for reasons unrelated to Raw. For the
   comparison only, an identical scratch X44 simulation (reject a described
   interwiki whose label contains `\xFF`) was applied to all four scratch
   copies; the in-tree reference was not edited. The semantic conclusion —
   live rejects iw-empty4/iw-empty6, so a token exists — is independent of
   the simulation.
2. **Token indices are offset by one.** Per-document reference runs number
   tokens from 0; live numbers them from 1. Model outputs were normalized
   `%FFn%FF → %FF(n+1)%FF` (and the U+FFFD form likewise) before comparison.
   This is the same canonicalization the R3 programme uses; only relative
   indices are claimed.

## 4. Consequences if the scanner model falls

The scanner model does fall — on token existence, not on byte shaping. Per
the brief, no in-tree reference or mirror file was edited in this mission;
these are the changes the coordinator's REFCORR3 lane must land.

**`ref-php/text-wiki/Text/Wiki/Parse/Default/Raw.php`** — in the `run > 2`
early branch, for `$run >= 4`, emit one empty Raw token before the literal
`str_repeat('@', $run - 4)`; keep the `$run === 3 → '@@@'` case unchanged.
The exact minimal patch is preserved and syntax-checked at
`conformance-raw-adjudicate/scratch/composite/text-wiki/Text/Wiki/Parse/Default/Raw.php`.

**`ref-php/text-wiki/Text/Wiki/Render/Xhtml/Raw.php`** — an empty `text`
option must render as `''`, not `<span style="white-space: pre-wrap;"></span>`.
Patch at `conformance-raw-adjudicate/scratch/composite/text-wiki/Text/Wiki/Render/Xhtml/Raw.php`.

**`lean-ftml/LeanFtml/RawHeadingRules.lean`** — `renderRaw` currently always
wraps the escaped text in the pre-wrap span; it must first test the `text`
option for emptiness and return `[]` for it (`wikidotEscapeRaw` is unchanged,
and the existing non-empty theorems stay valid). The parse mirror
`rawScan` in `LeanFtml/FormRawRules.lean`, although outside this family's
named mirror files, carries the corresponding obligation: a 4+ run must
append one empty Raw token plus `run - 4` literal `@` bytes.

**Knock-on effects that REFCORR3 must re-run:** (a) every token after an
empty Raw in the same document shifts index by one, so Date/Email/anchor
outputs that leak indices change; (b) the R2 battery case `raw-empty`
(`a @@@@ b`) changes from `a b` to `a  b`, because the placeholder blocks
the Tighten rule's double-space collapse — a Tighten-side transparency fix
for empty Raw placeholders is needed to restore the pinned byte; (c) the
full 68-case Form/Raw battery and the render conformance corpus must be
re-run under the composite, not just the 16 probes here. The composite is
otherwise byte-identical to the current scanner on 67/68 battery cases.

## 5. Honesty notes

- The dominant match by the composite on the 16 probes is measured against
  this tree's reference with only the two scratch accommodations of §3; no
  in-tree file was modified in this mission.
- `p22`'s second root cause is independently corroborated: live encodes the
  literal `@@` in `date-empty6` as `%40%40`, so Date's `@@<digits>@@ →
  %FF<digits>%FF` shortcut is indeed a fossil rule not present on live.
- `x09` (deflist emptiness) was a non-discriminating control, not evidence
  for token existence; the Antigravity lane's reading of it was too strong.

COMPLETE
