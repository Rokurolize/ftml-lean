# C-R5B-S1-01 — post-failed-closer uppercase LI item absorption

Family: cross-rule list seam of the REFCORR8 List corrections (R8-A) and the named open item of wj-completeness-review/LISTCASE-FIX-RESULT.md.

Source: `[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[LI]]B[[/LI]]\n[[/UL]]`

Page: muse-probe-round5b-s1-s01-li-failed-close. Capture valid=true, stable=true, saved_source_matches=true; html_sha256 c4d87f83bea9dd4b152ee152a824e4523dad20eb3199c959c7a70a4be10a4c58; source_sha256 f519e283b30cdb7091ec13c64547901b3e752b0adf19d50db065bcf05269d344.

Decisive live page-content bytes: `<ul>\n<li>A[[LI]]B[[/LI]]<br />\n[[/UL]]</li>\n</ul>`.

Decisive post-REFCORR8 reference bytes (ref.jsonl line 1): `<ul>\n<li>A<li>B<br />`.

After probe.norm plus the campaign frame mask the live form is `<ul><li>A[[LI]]B[[/LI]]<br> [[/UL]]</li></ul>` and the reference form is `<ul><li>A<li>B<br>`. The disagreement is that live keeps the second uppercase LI marker literal inside the first item and preserves one literal `[[/UL]]`, while the reference forms a second `<li>B` item and absorbs both closers. This is list element structure and literal text, not a frame surface: the standard mask leaves inter-tag whitespace, `<br />` spelling, trailing paragraph newlines and token-id digits untouched here as owned classes, and the difference survives all of them.

Owning reference file: ref-php/text-wiki/Text/Wiki/Parse/Default/List.php, the paired-stack `findPairOpener` raw-case branch and the synthetic-explicit-block branch that keeps `[[/ul]]` closers absorbed while retaining every `[[li]]` item. The reference `tokens` render emits two `explicit_item_start` tokens and one `explicit_list_start` token, corroborating that the second marker is a real item on the reference side.

Independent corroboration: lane R5B-P1 probed the identical source; its page muse-probe-round5b-p1-la-abs has the identical html_sha256 c4d87f83bea9dd4b152ee152a824e4523dad20eb3199c959c7a70a4be10a4c58 and source_sha256 f519e283b30cdb7091ec13c64547901b3e752b0adf19d50db065bcf05269d344, valid/stable/source-matched. R5B-P1 records it as C-R5B-P1-1. Lead should treat the two candidate IDs as one divergence for correction purposes.

Mirror consequence (source-reading inference only, no Lean elaboration run): lean-ftml/LeanFtml/ListRules.lean `findPairOpener` (lines 713-722) makes a raw-case opener absorb a closer whose folded tag equals it, and `findPair` (lines 726-739) keeps both LI markers in the still-open list, so the mirror transcribes the reference's two-item behavior rather than live's literal residue. This inference is recorded under MIRROR-CONSEQUENCE.md.
