# Pre-probe predictions for the SUSPECT-BLOCK lane

Written before any fresh `muse-probe-suspect-block-*` page was created. Prediction A is what the reference PHP's odd code says; prediction B is a plausible skeptical alternative. Both must be observably different on a tiny saved page for the suspicion to be probeable. Local reference predictions were computed with `php ref-php/harness/batch.php render` over `leads-ref-input.jsonl` (recorded in `leads-ref-render.jsonl`, empty stderr) for the two coordinator leads; all other A predictions are read off the cited source lines.

## Blockquote

S1 (lead). `>nospace`: the inner line regex `^(\>+) (.*\n)` (Parse/Default/Blockquote.php:89) requires a literal space after the marker run, so a no-space line never enters `$list` and the matched run produces no tokens; a run with no other text is swallowed and emits only `"\n\n"` (:101-110). A: a page whose only line is `>nospace` renders empty, and `>nospace\nX` renders only `<p>X</p>` (local reference confirms both). B: the line renders literally as `>nospace` text, or as a blockquote containing `nospace`. Probe `bq-nospace-only`, `bq-nospace-then-text`, `bq-nospace-run`, control `bq-space-control`.

S2. Multi-marker no-space line `>>>nospace`: the same inner regex requires one space after the whole marker run, so the line is dropped rather than producing three nested containers. A: renders empty (only following text survives). B: renders three nested `<blockquote>` tags or literal `>>>nospace`. Probe `bq-multi-nospace`.

S3. The outer regex `/\n((\>).*\n)(?!(\>))/Us` (:54) captures a quote run whose next line begins with `>` only if that next line starts with `>` immediately (no leading spaces). A: `> q\n > r` ends the first run at the space-prefixed line, leaving the latter as ordinary text; B: both lines join one quote run at different depths. Probe `bq-indented-next` (save normalization may make this an untestable/serving-layer case; the earlier R2-BLOCK lane records that a leading-space source does not survive save).

S4. The `has_text` guard uses `trim($val[2]) !== ''` (:101-107), so a run made only of `> ` lines is consumed and emits no container. A: `> \n> \nX` renders only `<p>X</p>`; B: an empty `<blockquote></blockquote>` appears. This is already pinned by R2-BLOCK C2 (`muse-probe-r2block-bq-marker-space-before-text`); this lane re-probes only if a fresh source is needed.

S5. End-token level is `count($stack)` after popping (:167, :195) while start uses `level-1` (:145); a depth fall from 3 to 1 should emit two end tokens at levels 1 then 0 before the lower-level text. A: nested closes are properly paired and the lower-level line forms a paragraph (R2-BLOCK C3); B: a stray `<br />` or unbalanced tags. Pinned by `muse-probe-r2block-bq-nested-mixed`; no fresh probe needed unless interaction shape demands it.

S6. Comment runs at pipeline position 13, Blockquote at 28 (Text/Wiki.php:67,88), so a comment on a quote line is removed before the quote rule sees it and can turn a non-empty quote line into an empty one. A: `> [!-- hide --]\n> shown` still forms one blockquote containing only `shown`; B: two containers, or a literal `> [!-- hide --]` line. Probe `bq-comment-line`.

S7. Comment runs before Blockquote and its regex swallows the newline *preceding* the comment (Parse/Default/Comment.php:44), so a whole-line comment between two quote lines can merge them into one run. Reading the two rules together (and confirmed by the local reference batch, `ref-render.jsonl`, before any probe): A: `> one\n[!-- c --]\n> two` produces one blockquote with both lines (`one<br />two`); B: the comment splits the run into two separate blockquotes or leaves ordinary text. Probe `bq-comment-between`.

## Iftags

I1 (lead). `preg_split(';[, ]+;', trim($matches[1]))` (Parse/Default/Iftags.php:63) keeps a trailing empty field, which falls into `$anyTags` (:75); with only `+`-conditions, the `anyTags` loop (:96-105) then rejects every body. A: `[[iftags +alpha,]]KEEP[[/iftags]]` drops the body even on a page tagged `alpha`; B: trailing comma is ignored and `KEEP` is kept. Local reference confirms A for tagged and untagged. Probes `if-trail-plus-tagged`, `if-trail-plus-untag`, control `if-plain-plus-tagged`.

I2. The empty field from a trailing comma is an *any* condition, so it is harmless when a genuine bare tag is already present and that tag matches: the loop returns the body at the first hit (:99-100). A: `[[iftags alpha,]]KEEP[[/iftags]]` keeps the body on a page tagged `alpha`; B: the empty field poisons the whole spec and the body is dropped. Probe `if-trail-bare-tagged`. Contrast I1.

I3. A leading comma produces a leading empty field with the same poisoning effect. A: `[[iftags ,+alpha]]KEEP[[/iftags]]` drops the body on a tagged page; B: comma ignored, body kept. Probe `if-lead-comma-tagged`.

I4. A doubled comma produces an internal empty field. A: `[[iftags +alpha,,]]KEEP[[/iftags]]` drops; B: collapse repeated commas, keep. Probe `if-double-comma-tagged`.

I5. A trailing comma after a forbidden-only spec also adds an any-condition. A: `[[iftags -beta,]]KEEP[[/iftags]]` on a page tagged `alpha` drops the body; B: the comma is inert and the body is kept (no `beta` present). Probe `if-trail-minus-tagged`.

I6. Bare `-` becomes a forbidden condition `''` (:72-73) which matches no real tag, so the body survives. A: `[[iftags -]]KEEP[[/iftags]]` keeps the body; B: an empty forbidden tag invalidates the spec and the body is dropped or the form is literal. Already pinned as F-R2-18; probe `if-dangling-minus-tagged` for a fresh pinned shape.

I7. Tag matching is `strcasecmp` (:60), so `+ALPHA` matches tag `alpha`. A: keeps; B: case-sensitive `in_array` drops. Already settled by the ftml package re-score; probe `if-case-plus-tagged` only if needed.

I8. The regex requires whitespace after the rule name (`(\s[^\]]*)?`, :29) and allows a newline inside the spec (`[^\]]*` with `s`). A: `[[iftags+alpha]]` stays literal; B: forms a gate. A for a newline spec: `[[iftags +alpha\n+beta]]` splits on the newline as a separator and, with no `beta` tag, drops the body; B: literal form. Probes `if-nospace-tagged`, `if-newline-tagged`.

I9. Iftags runs at position 12, before Comment at 13 (Text/Wiki.php:65,67), so a comment inside the spec or body cannot hide a closer from Iftags. A: a closer inside `[!-- ... --]` still terminates the Iftags span, and the comment is then removed, leaving `TAIL`; B: the comment shields the closer and the whole rest is swallowed. Probe `if-comment-closer-untag`. The reverse form (a Comment span hiding the opener) is pinned by R2-NEXT X1; re-probe as `cm-hides-if-open` to document the interaction from the Comment side.

I10. Nested gates use the recursive regex `(?R)` (:29), but one `preg_replace` pass consumes the inner span as part of the outer match and returns the raw body, so the inner gate is never processed. Reading the rule (and confirmed by the local reference batch before probing): A: with tags `alpha` and no `beta`, the outer `+alpha` body is kept and the inner `-beta` span stays literal, `A[[iftags -beta]]B[[/iftags]]C`; B: the inner gate is evaluated and `B` is dropped, leaving `AC`, or the first closer ends both spans. Probe `if-nested-tagged`.

## Comment

C1. `strpos($source, '[!--') === false` (Parse/Default/Comment.php:59) is case-sensitive, while the regex has an `i` flag (:44). A: an uppercased near-marker such as `[!----]` is outside both (there are no letters in the delimiter, so the `i` flag cannot create a reachable divergence); the guard and regex agree on every authored string. B: a case-variant opener is removed by the regex despite the guard. This is a parse-side UNREACHABLE candidate: the `i` modifier is vacuous over the literal delimiter `[!--` and closer `--]`. Verify by reading the regex, no probe needed.

C2. The optional leading newline `(\n)?` (:44) is part of the removed span. A: a comment on its own line between two text lines removes its preceding newline, so `a\n[!-- c --]\nb` renders as one paragraph with a single line break; B: an empty paragraph line remains. Probe `cm-own-line`.

C3. The indented-only-line branch (:69-88) removes leading horizontal whitespace and emits a Comment token rendering `''` so the line survives. A: `a\n  [!-- c --]\nb` renders as `<p>a<br />\n<br />\nb</p>`; B: the spaces survive as text or the line vanishes. Already pinned by `muse-probe-r2next-comment-nl-indented-spaces`; re-probe `cm-indented` for fresh evidence.

C4. The double-bracket form `[[!-- ... --]]` leaves the outer `[]` because only `[!-- ... --]` is matched. A: `A[[!-- c --]]B` renders `A[]B`; B: the whole form disappears. Already pinned by three R2-NEXT probes; re-probe `cm-double-bracket`.

C5. Code runs at position 4, Comment at 13 (Text/Wiki.php:57,67). A: a comment inside a `[[code]]` body is protected (tokenized before Comment) and stays literal; B: the code body is scrubbed. Probe `cm-in-code`.

C6. A closer with an extra hyphen `[!-- c ---]`: the lazy body `(.*?)` can absorb one hyphen so that the last two close the span. Reading the regex (and confirmed by the local reference batch before probing): A: the whole `[!-- c ---]` form is removed, rendering `AB`; B: only `[!-- c --]` is removed and a literal `-]` survives (`A-]B`). Probe `cm-extra-hyphen`.

C7. `preg_match_all` removes every span on a line. A: `[!-- a --]X[!-- b --]Y` renders `XY`; B: only the first span is removed. Probe `cm-two-inline`.

C8. An unterminated opener is untouched because the guard finds `[!--` but the regex finds no closer. A: `A[!-- c B` renders literally; B: everything from the opener to end-of-page is dropped. Probe `cm-unterminated`.

C9. A multiline comment is matched because of the `s` flag. A: `[!-- a\nb --]\nX` renders only `X`; B: only the first line is removed. Probe `cm-multiline`.

C10. Interaction with Iftags from the Comment side: `[!-- [[iftags +alpha]] --]KEEP[[/iftags]]` is settled by R2-NEXT X1 to render the remains of the comment plus a suppressed body on live and the reference. A: that shape, B: the comment shields the opener and Iftags stays literal. Probe `cm-hides-if-open`.

## Rule-level classification to deliver

Input classes to classify with pin status: Blockquote (space marker, no-space marker, multi-marker, depth arithmetic, empty run, adjacency, block form literal), Iftags (spec split on spaces/commas/empty fields, +/-/bare polarities, case matching, recursion, tagging context, comment seams), Comment (delimiters, leading newline, indentation, double bracket, multi/unterminated/multiline, protected regions, pipeline interactions).

## Second batch, added before those pages were created

S8 (from PHP read). NBSP-only quote body: `trim()` in the C2 empty-run guard removes ASCII whitespace but not U+00A0. A: `X\n> \u00a0\nY` keeps a blockquote containing the NBSP; B: the NBSP-only line is treated as empty and no quote appears. Probe `bq-nbsp-only`.

S9. A quote line emptied by Comment triggers C2. A: `A\n> [!--c--]\nB` renders only the two paragraphs, no container; B: an empty `<blockquote></blockquote>` or a visible blank line. Probe `bq-comment-only`.

S10. Spaced markers `> > q`: the inner line grammar wants contiguous `>` then a space, so the second `> ` is body text. A: one level-1 blockquote containing literal `&gt; q`; B: two nested containers. Probe `bq-spaced-marker`.

S11. C2 guards the whole run, not each line. A: `> a\n> \n> b` keeps one blockquote with two paragraphs; B: the empty row makes a `<br />` in one paragraph. Probe `bq-empty-in-run`.

S12. Leading-space quote line after a real quote line ends the run and loses the indentation in Paragraph. A: `> a\n > b` gives a quote for `a` and a paragraph `&gt; b` with no leading space; B: a two-level quote or preserved space. Probe `bq-indented-next` (if the save normalizes away the leading space, this becomes an untestable serving-layer case, documented as such).

S13. A false Iftags gate empties a quote line before Blockquote. A: on a page tagged `alpha`, `> [[iftags +beta]]KEEP[[/iftags]]` vanishes and C2 deletes the quote; B: an empty container or literal markup survives. Probe `bq-if-false-tagged`.

S14. A comment inside the Iftags opener spec: Iftags runs first and its `[^\]]*` cannot cross the comment's `]`, so after Comment removes the comment the whole gate stays literal. A: `[[iftags [!--x--]+alpha]]KEEP[[/iftags]]` renders literally with the comment gone; B: the gate is evaluated and `KEEP` is kept. Probe `if-spec-comment-tagged`.

S15. A trailing comma after a forbidden tag whose tag is present still poisons the anyTags path. A: `[[iftags -alpha,]]KEEP[[/iftags]]` on a page tagged `alpha` drops; B: forbidden gate alone decides and the body is kept. Probe `if-trail-forbid-hit-tagged`.

S16. Each comment-only line consumes its own preceding newline, so two consecutive ones collapse to one break. A: `a\n[!--1--]\n[!--2--]\nb` renders `a<br />b`; B: two empty lines remain. Probe `cm-two-lines`.

S17. The indented-only branch matches only ASCII spaces/tabs. A: NBSP before a comment survives as visible text (`\u00a0<br />`); B: it is stripped like indentation. Probe `cm-nbsp-indent`.

S18. Comment eats its preceding newline, so a marker immediately after a comment is no longer at line start. A: `A\n[!--c--]> q\nB` renders `A&gt; q` text with no blockquote; B: a blockquote still forms. Probe `cm-before-quote`.

S19. Nesting is first-closer-wins and the residue becomes an em dash. A: `a[!--x[!--y--]z--]b` renders `az&#8212;]b`; B: the outer closer wins and the whole span disappears. Probe `cm-nested`.

S20. Blank lines around a comment-only line keep the two quote runs apart. A: `> x\n\n[!--c--]\n\n> y` gives two blockquotes (contrast S7, one container); B: one container. Probe `cm-quote-bridge-blank`.

## Third batch, added before those pages were created (coordinator steering)

The Antigravity SUSPECT lane's p32/x07 and p28/f08 are treated as leads only. My own first two batches already verified the bare `>nospace` deletion (bq-nospace-only, bq-nospace-then-text, bq-nospace-run) and trailing/leading comma drops in their tagged and plus-tag forms. These probes cover the remaining exact shapes and the Raw and Comment seams around them.

S21. `>@@hello@@` (coordinator x07): Raw runs at position 6, before Blockquote at 28, so the raw span becomes a placeholder inside the quote line; the inner grammar still requires a space after `>`. Prediction A: the whole line is deleted on live, leaving only surrounding paragraphs; Prediction B: the raw body `hello` survives as a quote, or the line stays literal. Probe `bq-raw-nospace`; control `bq-raw-space-control` (`> @@hello@@`) should keep a quote containing `hello`.

S22. A comment immediately after a no-space marker `>[!-- c --]`: Comment runs first and strips the comment, leaving `>` with no space for Blockquote. Prediction A: the line is deleted; Prediction B: an empty quote container or literal text. Probe `bq-comment-after-marker`.

S23. The coordinator's exact p28 shape `A [[iftags -foo,]]KEPT[[/iftags]] B` on an untagged page: the trailing comma's empty any-tag fails. Prediction A: renders `<p>A B</p>` with `KEPT` dropped; Prediction B: `KEPT` kept. Probe `if-trail-forbid-untag`.

S24. The coordinator's exact f08 shape `A [[iftags ,-foo]]KEPT[[/iftags]] B` on an untagged page: the leading comma's empty any-tag fails. Prediction A: `<p>A B</p>`; Prediction B: `KEPT` kept. Probe `if-lead-forbid-untag`.

S25. A mixed comma-and-space spec `[[iftags +alpha, +beta]]` on a page tagged both alpha and beta: split on runs of comma or space yields exactly two required tags, so the body is kept. Prediction A: body kept; Prediction B: the comma creates an empty any-tag that drops it. Probe `if-comma-space-multi-tagged` with tags ["alpha","beta"].

S26. A spec containing only a comma `[[iftags ,]]`: split yields two empty any-tags, so the body drops even for any ordinary tag set. Prediction A: body dropped; Prediction B: no conditions means keep. Probe `if-only-comma-tagged`.

S27. A raw span containing a comment `@@[!-- c --]@@`: Raw runs at position 6, before Comment at 12, so the comment stays literal inside the raw body. Prediction A: the comment text is visible verbatim inside the raw pre-wrap; Prediction B: it is scrubbed. Probe `cm-in-raw`.

S28. A comment with trailing text on a no-space quote line `> [!-- c --] q`: Comment removes the span and its preceding space semantics leave a spaced marker line, so the quote survives with body `q`. Prediction A: one blockquote containing `q`; Prediction B: the line is deleted or becomes literal. Probe `bq-comment-tail-text`.
