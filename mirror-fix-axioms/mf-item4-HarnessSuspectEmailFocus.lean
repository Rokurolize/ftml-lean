import LeanFtml.TokenState
import LeanFtml.Pipeline
import LeanFtml.RenderCore
import LeanFtml.FormRawRules
import LeanFtml.ModuleRules
import LeanFtml.NextRules
import LeanFtml.LinkRules
import LeanFtml.BlockRules
import LeanFtml.ContainRules
import LeanFtml.ListRules
import LeanFtml.Inline1Rules
import LeanFtml.Inline2Rules
import LeanFtml.Inline3Rules
import LeanFtml.InlineSimpleRules
import LeanFtml.ListTableRules
import LeanFtml.InteractiveRules

namespace LeanFtml.SuspectSpec

open LeanFtml

/-- Live probes `muse-probe-agy-suspect-p18-email-html`,
    `muse-probe-agy-suspect-p19-email-utf8`,
    `muse-probe-agy-suspect-f01-email-ee`, and
    `muse-probe-agy-suspect-f02-email-apos-amp`:
    after bytewise `strrev` and `@` -> `|`, live escapes `&`, `<`, `>`
    (`ENT_NOQUOTES`), leaves `"` and `'` raw, and substitutes invalid UTF-8
    bytes produced by reversing multi-byte sequences (or leaked `\xFF`)
    with U+FFFD (`EF BF BD`). -/
def LiveSpec_email_render_escapes_and_substitutes (fn : OptMap → List Nat) : Prop :=
  fn [("email".toList, OptVal.str "a@b.com".toList),
      ("text".toList, OptVal.str ">i<".toList)] =
    litBytes "<span class=\"wiki-email\">moc.b|a#&lt;i&gt;</span>" ∧
  fn [("email".toList, OptVal.str "a@b.com".toList),
      ("text".toList, OptVal.str "a'b&c\"d".toList)] =
    litBytes "<span class=\"wiki-email\">moc.b|a#d\"c&amp;b'a</span>" ∧
  fn [("email".toList, OptVal.str "a@b.com".toList),
      ("text".toList, OptVal.bytes [0xC3, 0xA9, 0xC3, 0xA9])] =
    litBytes "<span class=\"wiki-email\">moc.b|a#" ++
      [0xEF, 0xBF, 0xBD, 0xC3, 0xA9, 0xEF, 0xBF, 0xBD] ++ litBytes "</span>"

theorem confirmed_p18_p19_f01_f02_email_render :
    LiveSpec_email_render_escapes_and_substitutes renderEmail := by
  constructor
  · rfl
  constructor
  · rfl
  · rfl

theorem confirmed_p19_f01_email_bytewise_strrev :
    renderEmail [(['e','m','a','i','l'], OptVal.bytes [97,64,98,46,99,111,109]),
      (['t','e','x','t'], OptVal.bytes [0xC3, 0xA9, 0xC3, 0xA9])] =
    [60,115,112,97,110,32,99,108,97,115,115,61,34,119,105,107,105,45,101,109,97,105,108,34,62,
     109,111,99,46,98,124,97,35,0xEF,0xBF,0xBD,0xC3,0xA9,0xEF,0xBF,0xBD,60,47,115,112,97,110,62] := rfl

#print axioms LeanFtml.SuspectSpec.confirmed_p18_p19_f01_f02_email_render
#print axioms LeanFtml.SuspectSpec.confirmed_p19_f01_email_bytewise_strrev

end LeanFtml.SuspectSpec
