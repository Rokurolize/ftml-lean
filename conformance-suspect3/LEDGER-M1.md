# Pre-probe prediction ledger — M1, the Mathinline placeholder battery (written 2026-11-22 before any live probe)

This is the dedicated battery the SUSPECT-XRULE lane said was missing for C-SUSPECT-XRULE-5. Every row has two observable predictions written before probing. P_code is what the reference PHP (ref-php/text-wiki/Text/Wiki/Parse/Default/Mathinline.php process() as currently corrected) produces; its exact bytes were computed locally with `php ref-php/harness/transform.php render` and are retained in ref-m1.json. P_alt is the competing hypothesis from the X24 probe: live restores the whole authored body inside the math span, i.e. a placeholder is expanded to the token's original matched source text (recursively), and a Newline/Raw token suppresses the formula to `$$`. Sources carry no trailing newline. Prefix muse-probe-suspect3-m1-. Reachability is stated per row; the whole family is adversarial-only except the plain and one-level URL/email rows.

m1-plain. Source `A [[$ a + b $]] B`. Control with no placeholder. P_code and P_alt both `<p>A <span class="math-inline">$a + b$</span> B</p>`. Plausible on a real page.

m1-url. Source `A [[$ http://example.com/a $]] B`. One level: a Url token is the whole body. P_code `$http://example.com/a$` (Url's href option). P_alt `$http://example.com/a$` too, because the authored body equals the href, so this row cannot discriminate; it is a baseline for the one-level case. Plausible.

m1-email-bare. Source `A [[$ a@example.com $]] B`. One level: a standalone Email token. P_code `$a@example.com$`. P_alt also `$a@example.com$` (authored body equals the text option); baseline, not discriminating. Plausible.

m1-email-descr. Source `A [[$ [a@example.com Label] $]] B`. One level: a described Email token whose text option is the label. P_code `$Label$` (the email address and brackets drop). P_alt `$[a@example.com Label]$` if live restores the whole authored body. THIS IS THE KEY ONE-LEVEL DISCRIMINATOR that the X24 round never probed; plausible (a described email pasted into inline math).

m1-freelink. Source `A [[$ [[[Some Page]]] $]] B`. One level: a Freelink token. P_code `$Some Page$`. P_alt `$[[[Some Page]]]$` if live restores raw source. Discriminating; adversarial-ish but reachable in a page documenting wiki links.

m1-raw. Source `A [[$ @@x@@ $]] B`. One level: a Raw token, whose suppression is already in the reference. P_code and P_alt both `$$`. Control confirming the suppression survives the battery. Adversarial-only.

m1-code. Source `A [[$ [[code]]x[[/code]] $]] B`. One level: a Code token. P_code is the malformed `A [[$ [[code]]x[<a href="/code]]">$</a>] B` (the code closer's `]]` ends the math body early); P_alt is whatever live does with that source, possibly `$$` if a Code token suppresses like Raw/Newline, or a clean math span. Adversarial-only; included because a code example inside inline math is the reachable route.

m1-newline. Source `A [[$ x\ny $]] B` (literal newline). One level: a Newline token. P_code and P_alt both `$$` (suppression). Control. Plausible (a wrapped math body).

m1-nested-email-url. Source `A [[$ [a@example.com http://example.com/a] $]] B`. Two levels: described Email whose label is a Url placeholder. P_code `$\xFF2\xFF$` rendered as the visible replacement-digit-replacement; P_alt `$[a@example.com http://example.com/a]$`, the X24 live bytes. Decisive for the uncorrected candidate; adversarial-only.

m1-nested-email-free. Source `A [[$ [a@example.com [[[Some Page]]]] $]] B`. Two levels: described Email whose label is a Freelink placeholder. P_code `$\xFF0\xFF$`; P_alt `$[a@example.com [[[Some Page]]]]$` under the restore-whole-body hypothesis, or `$[a@example.com Some Page]$` under recursive option expansion. Adversarial-only.

m1-nested-email-raw. Source `A [[$ [a@example.com @@x@@] $]] B`. Two levels: described Email whose label is a Raw placeholder. P_code `$\xFF0\xFF$` (one level stops before the Raw token, so no suppression); P_alt `$$` if live resolves recursively and the Raw token suppresses, or the whole authored body under restore. Adversarial-only, but discriminates recursion depth.

m1-nested-email-newline. Source `A [[$ [a@example.com x\ny] $]] B` (literal newline inside the description). Two levels: described Email whose label is a Newline placeholder. P_code `$x\xFF0\xFFy$` (the newline token is at level two and is not seen by the one-level fold); P_alt `$$` under recursive resolution, or the whole authored body under restore. Adversarial-only; discriminates recursion depth.

m1-freelink-url. Source `A [[$ [[[http://example.com/a]]] $]] B`. Two levels: Url placeholder inside a Freelink target inside math. P_code `$http://example.com/a$` (Freelink token's text is the slugified target, which resolves to the url text through the Freelink option); P_alt `$[[[http://example.com/a]]]$` under restore, or `$http://example.com/a$` under recursion. Adversarial-only.

m1-image. Source `A [[$ [[image http://example.com/a.png]] $]] B`. One level: an Image token with no text/href option. P_code `$$` (mathRepl yields empty and the mirror suppresses? the reference render is `$$`); P_alt `$$` if live also suppresses an option-less token, or a leaked index under a different rule. Adversarial-only.

m1-email-descr-url-first. Source `A [[$ [http://example.com/a a@example.com] $]] B`. Two levels with the Url in the label position of a described link. P_code `$a@example.com$`; P_alt `$[http://example.com/a a@example.com]$` under restore. Adversarial-only.

m1-two-urls. Source `A [[$ http://example.com/a http://example.com/b $]] B`. Two independent one-level placeholders. P_code `$http://example.com/a http://example.com/b$`; P_alt the same authored body under restore (not discriminating, but checks that multiple placeholders do not disturb resolution). Plausible.
