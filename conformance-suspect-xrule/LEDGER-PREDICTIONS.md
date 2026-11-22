# Pre-probe suspicion ledger (written before any live probe, 2026-11-22)

Every row has two observable predictions written down before probing. P_code is what the reference's current seam behavior predicts for live; P_alt is the opposite (either the seam defect, or live's other plausible shape). Probe sources carry no trailing newline because Wikidot strips one on save. Prefix: muse-probe-suspect-xrule-.

X1 Raw output re-matched by Rawold. Construct: ref-php/text-wiki/Text/Wiki/Parse/Default/Raw.php claims @@x@@ before Rawold.php, whose ``...`` body pattern [^']*[^`] admits the 0xFF token placeholder; htmlspecialchars on the invalid byte yields empty. Source `A ``@@x@@`` B`. P_code: live serves `A  B` (both spans vanish). P_alt: live serves visible x or the literal @@x@@. Reachability: plausible on a real page (backtick raw around a raw span).

X2 Raw output re-matched by Freelink. Construct: Freelink target class [^][]+ admits the Raw placeholder; toUnixName on invalid bytes and the renderer use the placeholder digits. Source `A [[[@@x@@]]] B`. P_code: live serves an anchor with href="/<token-index>" and empty text. P_alt: live serves a literal bracketed form or a link named from the raw body. Reachability: plausible.

X3 Raw output re-matched by described Email. Construct: Email described label pattern (.+?) admits the placeholder; the renderer reverses the option text and emits the raw byte. Source `A [a@example.com @@x@@] B`. P_code: live serves the wiki-email span with a digit index between two replacement characters. P_alt: live serves a readable label or the literal bracketed form. Reachability: plausible.

X4 Freelink output re-matched by described Email. Source `A [a@example.com [[[Some Page]]]] B`. P_code: the email label carries the Freelink placeholder and leaks its index; P_alt: live shows a linked page name or literal source. Reachability: plausible.

X5 Prefilter's whitespace-line strip crosses into Code. Construct: Prefilter (rule 2) deletes ^\s+$ lines before Code claims (rule 4). Source `[[code]]a\n   \nb[[/code]]`. P_code: code body contains a blank line with the three spaces removed. P_alt: live preserves the three spaces inside the code body. Reachability: very plausible (spaces on a blank line in a code sample).

X6 Concatlines joins a continuation into a heading opener. Source `A\\\n+ Heading`. P_code: one paragraph `A+ Heading`, heading not claimed. P_alt: live keeps the heading at line start and serves a heading block. Reachability: plausible (line continuation followed by a heading).

X7 Concatlines joins a continuation into a native list opener. Source `A\\\n* item`. P_code: one paragraph `A* item`; P_alt: live serves a list. Reachability: plausible.

X8 Code claims across a Raw opener at line start. Source `@@\n[[code]]a\nb[[/code]]\n@@`. P_code: literal @@ before/after a real code block; P_alt: live keeps the raw span intact and shows the code markup literally. Reachability: adversarial-ish but plausible in a page showing code markup examples.

X9 Interwiki described label with a Raw placeholder (control for the settled x44 guard). Source `A [site:page @@x@@] B`. P_code: whole form literal, raw body rendered by the Raw rule. P_alt: a claimed link leaking digits. Reachability: plausible.

X10 Url described label with a Raw placeholder (control for its delimiter-excluding label class). Source `A [b http://example.com/x @@x@@] B`. P_code: whole form literal with a linkified URL and raw body; P_alt: a claimed described link leaking digits. Reachability: plausible.

X11 Rawold around an Iftags/Comment token. Source `A ``[!-- hidden --]`` B`. P_code: the comment token's placeholder in a Rawold body renders empty; P_alt: live serves visible text. Reachability: adversarial-only.

X12 üü strip pair at the Code boundary. Source `[[code]]aüüb[[/code]]`. P_code: the character pair is preserved in the code body (the fossil strip was removed). P_alt: live strips it. Reachability: adversarial-only but directly named in the brief.

X13 Raw→Typography collision: an authored `@@..@@` whose body ends in a backtick run, then Typography rewrites the leaked literal. Source `A @@x` B @@` etc.; held until the batch results, since the raw scanner may abort. Reachability: adversarial-only.

X14 Prefilter newline compression before a later block rule. Source `A\n \n \n \nB` (blank lines containing a space); P_code: compressed to one blank line, one paragraph break; P_alt: live keeps multiple breaks. Reachability: plausible.

X15 Comment deletion before Concatlines. Source `[!-- h --]\\\n+ Heading`; P_code: Comment claims first, continuation joins the heading, so no heading; P_alt: live keeps a heading. Reachability: adversarial-only.
