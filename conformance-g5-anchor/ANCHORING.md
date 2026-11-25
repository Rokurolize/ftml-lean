# G5 render anchoring table

Direct token-level differential over the retained cases in `cases.jsonl`. A byte-match means the PHP reference token renderer, the context-correct mirror path, and `renderRefSpec` all produced the same bytes. For the two token-table-sensitive rules the context-correct mirror path is `dispatchRenderR41TokenAware`; for all other rules it is `renderMirrorEnv`. The raw no-context `renderMirrorEnv` bytes remain in `comparison-details.jsonl` for inspection and are deliberately not the Footnoteitem/Gallery comparator. Blocked cases are excluded from both match and mismatch counts.

| rule | cases | byte-matches | mismatch cases | blocked cases | status / blocked or finding reason |
|---|---:|---:|---:|---:|---|
| Footnote | 8 | 8 | 0 | 0 | ANCHORED;  |
| Footnoteitem | 10 | 10 | 0 | 0 | ANCHORED;  |
| Footnoteblock | 10 | 10 | 0 | 0 | ANCHORED;  |
| Bibitem | 8 | 8 | 0 | 0 | ANCHORED;  |
| Bibliography | 8 | 8 | 0 | 0 | ANCHORED;  |
| Bibcite | 10 | 10 | 0 | 0 | ANCHORED;  |
| Paragraph | 2 | 2 | 0 | 0 | ANCHORED;  |
| Newline | 1 | 1 | 0 | 0 | ANCHORED;  |
| Break | 1 | 1 | 0 | 0 | ANCHORED;  |
| Center | 6 | 6 | 0 | 0 | ANCHORED;  |
| Horiz | 1 | 1 | 0 | 0 | ANCHORED;  |
| Separator | 1 | 1 | 0 | 0 | ANCHORED;  |
| Clearfloat | 3 | 3 | 0 | 0 | ANCHORED;  |
| Blockquote | 8 | 8 | 0 | 0 | ANCHORED;  |
| Note | 2 | 2 | 0 | 0 | ANCHORED;  |
| Divalign | 5 | 5 | 0 | 0 | ANCHORED;  |
| Comment | 1 | 1 | 0 | 0 | ANCHORED;  |
| Delimiter | 2 | 2 | 0 | 0 | ANCHORED;  |
| Url | 8 | 8 | 0 | 0 | ANCHORED;  |
| Email | 8 | 8 | 0 | 0 | ANCHORED;  |
| Mathinline | 8 | 8 | 0 | 0 | ANCHORED;  |
| Interwiki | 8 | 8 | 0 | 0 | ANCHORED;  |
| Colortext | 8 | 8 | 0 | 0 | ANCHORED;  |
| Strong | 8 | 8 | 0 | 0 | ANCHORED;  |
| Emphasis | 8 | 8 | 0 | 0 | ANCHORED;  |
| Underline | 4 | 4 | 0 | 0 | ANCHORED;  |
| Strikethrough | 4 | 4 | 0 | 0 | ANCHORED;  |
| Tt | 6 | 6 | 0 | 0 | ANCHORED;  |
| Superscript | 2 | 2 | 0 | 0 | ANCHORED;  |
| Subscript | 2 | 2 | 0 | 0 | ANCHORED;  |
| Typography | 11 | 11 | 0 | 0 | ANCHORED;  |
| Tighten | 1 | 1 | 0 | 0 | ANCHORED;  |
| Raw | 8 | 8 | 0 | 0 | ANCHORED;  |
| Rawold | 8 | 8 | 0 | 0 | ANCHORED;  |
| Form | 8 | 8 | 0 | 0 | ANCHORED;  |
| Heading | 8 | 8 | 0 | 0 | ANCHORED;  |
| Toc | 8 | 5 | 3 | 0 | MISMATCH-FOUND; G5-F1: item sentinel is four NULs in mirror/spec, two in PHP |
| List | 8 | 8 | 0 | 0 | ANCHORED;  |
| Deflist | 8 | 8 | 0 | 0 | ANCHORED;  |
| Table | 8 | 8 | 0 | 0 | ANCHORED;  |
| Tableadv | 8 | 8 | 0 | 0 | ANCHORED;  |
| Equationreference | 10 | 10 | 0 | 0 | ANCHORED;  |
| Anchor | 8 | 8 | 0 | 0 | ANCHORED;  |
| Collapsible | 8 | 8 | 0 | 0 | ANCHORED;  |
| Tabview | 8 | 8 | 0 | 0 | ANCHORED;  |
| Button | 8 | 8 | 0 | 0 | ANCHORED;  |
| Iframe | 8 | 8 | 0 | 0 | ANCHORED;  |
| Date | 8 | 8 | 0 | 0 | ANCHORED;  |
| File | 10 | 10 | 0 | 0 | ANCHORED;  |
| Size | 8 | 8 | 0 | 0 | ANCHORED;  |
| Span | 8 | 8 | 0 | 0 | ANCHORED;  |
| Div | 8 | 8 | 0 | 0 | ANCHORED;  |
| Code | 9 | 8 | 0 | 1 | PARTIAL-BLOCKED; untyped/plain branches anchored; typed branches need an independent Text_Highlighter output |
| Embed | 8 | 8 | 0 | 0 | ANCHORED;  |
| Freelink | 9 | 8 | 1 | 0 | MISMATCH-FOUND; G5-F2: existing-page textFromTitle fallback to unix name is wrong when no title exists |
| Module | 9 | 9 | 0 | 0 | ANCHORED;  |
| Module654 | 9 | 9 | 0 | 0 | ANCHORED;  |
| Math | 9 | 9 | 0 | 0 | PARTIAL-BLOCKED; unsupported-environment and no-op-renderer failure branches anchored; successful LaTeX/PNG rendering needs the external LatexRenderer/filesystem result |
| Image | 10 | 10 | 0 | 0 | PARTIAL-BLOCKED; local/remote URL construction and absent-attachment :first branch anchored; positive attachment and Flickr branches need DB_FilePeer/Flickr responses representable in RenderEnv |
| Gallery | 10 | 9 | 0 | 1 | PARTIAL-BLOCKED; explicit sources rows anchored; local attachment and Flickr branches need DB_FilePeer/Flickr/page state representable in RenderEnv |
| User | 10 | 1 | 0 | 9 | PARTIAL-BLOCKED; degenerate negative lookup anchored; positive user rendering needs DB_OzoneUserPeer plus full WDRenderUtils user record/output state |
| Html | 2 | 2 | 0 | 0 | ANCHORED;  |

Summary: 55 rules ANCHORED, 2 rules MISMATCH-FOUND, 5 rules PARTIAL-BLOCKED. Across 422 retained cases: 407 unblocked byte-matches, 4 genuine mismatch cases, 11 blocked cases. Html is included explicitly: the harness enumerates all 62 RenderRuleId constructors rather than the older mirroredRenderRules driver list, which omits Html.
