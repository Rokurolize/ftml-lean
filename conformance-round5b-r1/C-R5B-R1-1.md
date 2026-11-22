# C-R5B-R1-1 — Div id carrying a token placeholder clears on live, but the reference now serves the bare u- shell

Verdict: CONFIRMED. Capture id muse-probe-round5b-r1-r5br1-p2 (page-content sha256 2061a590abcadc604490830cf36c644802ef287f597b83cd98f5034bb4376101), valid=True, stable=True, saved_source_matches=True.

Minimal source: `[[div id="[[size 12px]]x[[/size]]"]]\nbody\n[[/div]]`. The nested [[size 12px]] token is parsed before Div (Size precedes Div in the rule order) and injects a real 0xFF token placeholder into the authored id value, so this source exercises the REFCORR8 companion placeholder-clear arm rather than the whitespace-only id path of round 5.

Decisive live bytes: `<div id="">\n<p>body</p>\n</div>`.

Reference bytes (ref-php harness batch.php render, ref.jsonl line for R5BR1-P2): `<div id="u-"><p>body</p>\n\n</div>`.

After the standard mask and the campaign frame mask the live form is `<div id><p>body</p></div>` and the reference form is `<div id="u-"><p>body</p></div>`; the surviving difference is solely the rule-level attribute value `id=""` versus `id="u-"`. Neither value contains a token-id counter digit, and Stage 2 tidy reframes but never rewrites an attribute value, so this is not an owned counter or frame surface. It is also distinct from the round-5 C-R5-R1-1 source (a whitespace-only authored id), which REFCORR8 corrected and which this unit re-confirms as cleared at R5BR1-D1/D2.

Mechanism: `Text_Wiki_Parse_Div::isolateId` (ref-php/text-wiki/Text/Wiki/Parse/Default/Div.php) receives a 0xFF-bearing value; preg_replace with the /u flag returns null on the invalid UTF-8, so the collapse is empty and isolateId returns the bare `u-` shell with the 0xFF byte destroyed. REFCORR8 (C-R5-R1-1) narrowed the render clear arm in `Text_Wiki_Render_Xhtml_Div::token` (ref-php/text-wiki/Text/Wiki/Render/Xhtml/Div.php:63) from `strpos($value, "\xFF") !== false || ($key === 'id' && $value === 'u-')` to only the 0xFF test, to make a whitespace-only authored id serve `u-` verbatim. That same removal also deleted the arm that cleared a placeholder-consumed id shell: live still clears the placeholder-bearing id to `id=""` (the REFCORR4 Batch C behavior), while the reference now emits `id="u-"`. The fix therefore over-corrects the whitespace-only case at the expense of the placeholder case; a mechanism that keeps the two cases distinct is needed at correction time. This finding is scoped to a 0xFF-bearing id; the whitespace-only, authored-u-, data-* and class placeholder siblings all cleared in this same pass.

Owning reference files: ref-php/text-wiki/Text/Wiki/Render/Xhtml/Div.php (narrowed clear arm, line 63) and ref-php/text-wiki/Text/Wiki/Parse/Default/Div.php (isolateId collapse of the 0xFF value). No source patch was made by this unit.

Candidate name: C-R5B-R1-1.
