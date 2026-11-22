/-
  SpecRefcorr6.lean — REFCORR6 C-SUSPECT3-1 closed regression pins for the
  corrected Mathinline source-text expansion. The six SUSPECT3 M1 rows that
  already matched live are pinned here as byte-exact computations, together
  with the decisive divergent rows the correction now makes match: a
  described email with a nested URL expands recursively, a Code body keeps
  its authored opener and closer, and a Freelink nested inside a described
  email suppresses the whole formula. Token tables are the mirror's
  [rule, options] entries; the described email's label carries the earlier
  rule's placeholder bytes exactly as the reference's claimed source does.

  This file is deliberately unimported by LeanFtml.lean and is elaborated in
  isolation through the serial queue wrapper.
-/

import LeanFtml.Inline1Rules

set_option maxRecDepth 200000

namespace LeanFtml

/-- M1 MATCH pin: a plain body has no placeholder and is preserved. -/
theorem refcorr6_math_plain :
    mathResolve (litBytes "a + b") [] = litBytes "a + b" := rfl

/-- M1 MATCH pin: a bare URL contributes its authored source. -/
theorem refcorr6_math_url :
    mathResolve (phBytes 0)
      [{ rule := "Url", opts :=
          [("type".toList, OptVal.str "inline".toList),
           ("href".toList, OptVal.str "http://example.com/a".toList),
           ("text".toList, OptVal.str "http://example.com/a".toList)] }] =
      litBytes "http://example.com/a" := rfl

/-- M1 MATCH pin: a bare email contributes its address. -/
theorem refcorr6_math_email_bare :
    mathResolve (phBytes 0)
      [{ rule := "Email", opts :=
          [("email".toList, OptVal.str "a@example.com".toList),
           ("text".toList, OptVal.str "a@example.com".toList)] }] =
      litBytes "a@example.com" := rfl

/-- M1 MATCH pin: a first-level Raw token suppresses the whole body. -/
theorem refcorr6_math_raw_suppresses :
    mathResolve (litBytes "x" ++ phBytes 0 ++ litBytes "y")
      [{ rule := "Raw", opts := [("text".toList, OptVal.str "q".toList)] }] = [] := rfl

/-- M1 MATCH pin: a first-level Newline token suppresses the whole body. -/
theorem refcorr6_math_newline_suppresses :
    mathResolve (litBytes "x" ++ phBytes 0 ++ litBytes "y")
      [{ rule := "Newline", opts := [] }] = [] := rfl

/-- M1 MATCH pin: two URLs expand in order with the authored space kept. -/
theorem refcorr6_math_two_urls :
    mathResolve (phBytes 0 ++ litBytes " " ++ phBytes 1)
      [{ rule := "Url", opts :=
          [("type".toList, OptVal.str "inline".toList),
           ("href".toList, OptVal.str "http://example.com/a".toList),
           ("text".toList, OptVal.str "http://example.com/a".toList)] },
       { rule := "Url", opts :=
          [("type".toList, OptVal.str "inline".toList),
           ("href".toList, OptVal.str "http://example.com/b".toList),
           ("text".toList, OptVal.str "http://example.com/b".toList)] }] =
      litBytes "http://example.com/a http://example.com/b" := rfl

/-- Divergent row m1-email-descr, now matching: the brackets and address
    are authored source, not a label-only option substitution. -/
theorem refcorr6_math_descr_email :
    mathResolve (phBytes 0)
      [{ rule := "Email", opts :=
          [("email".toList, OptVal.str "a@example.com".toList),
           ("text".toList, OptVal.str "Label".toList)] }] =
      litBytes "[a@example.com Label]" := rfl

/-- Divergent row m1-nested-email-url: the described email's source carries
    a Url placeholder, which the recursive expansion resolves. -/
theorem refcorr6_math_nested_url_recursive :
    mathResolve (phBytes 1)
      [{ rule := "Url", opts :=
          [("type".toList, OptVal.str "inline".toList),
           ("href".toList, OptVal.str "http://example.com/a".toList),
           ("text".toList, OptVal.str "http://example.com/a".toList)] },
       { rule := "Email", opts :=
          [("email".toList, OptVal.str "a@example.com".toList),
           ("text".toList, OptVal.bytes (phBytes 0))] }] =
      litBytes "[a@example.com http://example.com/a]" := rfl

/-- Divergent row m1-code: the Code token's source is its authored opener,
    body and closer. -/
theorem refcorr6_math_code_source :
    mathResolve (phBytes 0)
      [{ rule := "Code", opts :=
          [("text".toList, OptVal.str "x".toList),
           ("attr".toList, OptVal.map [("type".toList, OptVal.str [])])] }] =
      litBytes "[[code]]x[[/code]]" := rfl

/-- Divergent row m1-nested-email-free: a Freelink two levels down
    suppresses the whole formula. -/
theorem refcorr6_math_nested_freelink_suppresses :
    mathResolve (phBytes 1)
      [{ rule := "Freelink", opts :=
          [("page".toList, OptVal.str "Some Page".toList),
           ("text".toList, OptVal.str "Some Page".toList)] },
       { rule := "Email", opts :=
          [("email".toList, OptVal.str "a@example.com".toList),
           ("text".toList, OptVal.bytes (litBytes " " ++ phBytes 0))] }] = [] := rfl

end LeanFtml
