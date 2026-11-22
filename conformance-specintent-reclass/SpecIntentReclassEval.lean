import LeanFtml.SpecIntent
import LeanFtml.InlineSimpleRules
import LeanFtml.InteractiveRules
import LeanFtml.ListRules
import LeanFtml.Inline2Rules
import LeanFtml.LinkRules
import LeanFtml.BlockRules
import LeanFtml.NextRules
import LeanFtml.ContainRules
import LeanFtml.RenderCore
import LeanFtml.ListTableRules
import LeanFtml.ServingRules
import LeanFtml.RawHeadingRules
import LeanFtml.TokenState
import LeanFtml.Inline3Rules
import LeanFtml.FormRawRules

/-
Scratch evaluation for BRIEF-SPEC-INTENT-RECLASS. Compares SpecIntent's concrete
cases with the current mirror functions. Not a spec file and not imported.
-/

open LeanFtml

def utf8 (s : String) : List Nat := s.toList.flatMap utf8Bytes

def workBytes (st : ParseState) : List (List Nat) :=
  st.work.map fun
    | .text cs => cs.flatMap utf8Bytes
    | .tok n => [0, n]

def tokRules (st : ParseState) : List String :=
  st.tokens.map (·.rule)

def colorOpts (st : ParseState) : List (List Nat) :=
  st.tokens.map (fun t => optStrBytes t.opts "color".toList)

def pageOpts (toks : List TokenEntry) : List (List Nat) :=
  toks.map (fun t => optStrBytes t.opts "page".toList)

def tagBrief (ts : List TagMatch) : List (Bool × List Nat) :=
  ts.map (fun t => (t.isOpen, t.tag))

def pairBrief (o : Option (TagMatch × TagMatch)) : Option (List Nat × List Nat) :=
  o.map fun (a, b) => (a.tag, b.tag)

def colorMatchBrief (o : Option (List Nat × List Nat × List TokenEntry)) :
    Option (List Nat × Nat) :=
  o.map fun (_, repl, toks) => (repl, toks.length)

#eval SpecIntent.validateColorSpecIntent []
#eval normalizeColor []
#eval SpecIntent.validateColorSpecIntent (litBytes "<i>") == normalizeColor (litBytes "<i>")
#eval SpecIntent.validateColorSpecIntent (litBytes "a!b") == normalizeColor (litBytes "a!b")
#eval SpecIntent.validateColorSpecIntent (litBytes "a&b") == normalizeColor (litBytes "a&b")
#eval SpecIntent.validateColorSpecIntent (litBytes "a\"b'c") == normalizeColor (litBytes "a\"b'c")
#eval SpecIntent.validateColorSpecIntent (litBytes "rgba(1, 2, 3, 0.5)") ==
  normalizeColor (litBytes "rgba(1, 2, 3, 0.5)")
#eval SpecIntent.validateColorSpecIntent [0xFF, 0x30, 0xFF] == normalizeColor [0xFF, 0x30, 0xFF]
#eval SpecIntent.validateColorSpecIntent [0xC3, 0xA9] == normalizeColor [0xC3, 0xA9]
#eval SpecIntent.validateColorSpecIntent (litBytes "   ") == normalizeColor (litBytes "   ")
#eval SpecIntent.validateColorSpecIntent (litBytes " #aBc ") == normalizeColor (litBytes " #aBc ")
#eval SpecIntent.validateColorSpecIntent (litBytes "abc") == normalizeColor (litBytes "abc")
#eval SpecIntent.validateColorSpecIntent (litBytes "rgb(1, 2, 3)") ==
  normalizeColor (litBytes "rgb(1, 2, 3)")
#eval normalizeColor (litBytes "   ")
#eval normalizeColor (litBytes " #aBc ")
#eval normalizeColor (litBytes "abc")
#eval normalizeColor (litBytes "rgb(1, 2, 3)")

#eval colorOpts (colortextRule (ParseState.ofSource "##bad!|a##red|b##".toList))
#eval colorMatchBrief (colortextMatch (litBytes "##red|b##") [])
#eval colorMatchBrief (colortextMatch (litBytes "##|b##") [])
#eval colorMatchBrief (colortextMatch (litBytes "##bad!|a##") [])

#eval htmlSpecialCharsCompat [0x27]
#eval htmlSpecialCharsCompat (litBytes "a&b<c>d'e\"f")
#eval SpecIntent.compatEscapeBytes (litBytes "a&b<c>d'e\"f") ==
  htmlSpecialCharsCompat (litBytes "a&b<c>d'e\"f")
#eval asciiLowerBytes (asciiLowerBytes [0, 64, 65, 90, 91, 97, 122, 255]) ==
  asciiLowerBytes [0, 64, 65, 90, 91, 97, 122, 255]

#eval tagBrief (scanTags (litBytes "[[ul]][[UL]][[Ul]][[ol]][[oL]][[li]][[Li]][[/UL]][[/ul]]"))
#eval pairBrief (findPair (scanTags (litBytes "[[ul]]x[[/UL]]")))
#eval pairBrief (findPair (scanTags (litBytes "[[UL]]x[[/UL]]")))
#eval pairBrief (findPair (scanTags (litBytes "[[Ul]]x[[/ul]]")))
#eval pairBrief (findPair (scanTags (litBytes "[[ul]]x[[/ol]]")))
#eval buildListAttrs (litBytes "data-Foo=\"x\" class=\"c\" DATA-foo=\"y\" CLASS=\"z\" ID=\"i\"")

#eval isolateId (litBytes "a&b<c>d'e")
#eval isolateId (litBytes " u-foo")
#eval isolateId (litBytes "u-foo")
#eval isolateId [0x61, 0xFF, 0x30, 0xFF, 0x62]
#eval htmlSpecialCharsCompat (litBytes "a&b<c>d'e")
#eval htmlSpecialCharsCompat (litBytes "u-a&b<c>d'e")
#eval divAttrFragment [("class".toList, OptVal.str "a&b<c>d'e".toList)]
#eval divAttrFragment [("id".toList, OptVal.bytes [0x61, 0xFF, 0x30, 0xFF, 0x62])]
#eval divAttrFragment [("id".toList, OptVal.str "u-".toList)]
#eval divAttrFragment [("style".toList, OptVal.bytes [0x61, 0xFF, 0x30, 0xFF, 0x62])]
#eval divArgs [(litBytes "data-Foo", litBytes "x"), (litBytes "style", litBytes "s"),
  (litBytes "DATA-X", litBytes "y"), (litBytes "CLASS", litBytes "z")]

#eval encodeDateFormat (litBytes "@@123@@")
#eval encodeDateFormat [0x61, 0xFF, 0x31, 0xFF, 0x62]
#eval SpecIntent.encodeDateFormatIntent (litBytes "@@123@@") == encodeDateFormat (litBytes "@@123@@")
#eval SpecIntent.encodeDateFormatIntent [0x61, 0xFF, 0x31, 0xFF, 0x62] ==
  encodeDateFormat [0x61, 0xFF, 0x31, 0xFF, 0x62]
#eval canonTimestamp []
#eval canonTimestamp (litBytes "abc")
#eval canonTimestamp (litBytes "a&b<c")
#eval canonTimestamp (litBytes "0")
#eval canonTimestamp (litBytes " 120 ")
#eval canonTimestamp (litBytes "86400")
#eval canonTimestamp (litBytes "00042")

#eval bqLine (litBytes ">nospace\n")
#eval bqLine (litBytes ">>nospace\n")
#eval bqLine (litBytes ">\n")
#eval bqLine (litBytes "> \n")
#eval bqLine (litBytes "> first\n")
#eval bqLine (litBytes "> last\n")
#eval workBytes (blockquoteRule (ParseState.ofSource "\n> first\n>nospace\n> last\n".toList))

#eval splitSpec []
#eval splitSpec (litBytes "   ")
#eval splitSpec (litBytes ",")
#eval splitSpec (litBytes ",,")
#eval splitSpec (litBytes "+foo,")
#eval splitSpec (litBytes ",+foo")
#eval splitSpec (litBytes "+foo, +bar,")
#eval splitSpec (litBytes "-,")
#eval splitSpec (litBytes "+,")
#eval splitSpec (litBytes ",-foo")
#eval iftagsGate [litBytes "foo"] (some [])
#eval iftagsGate [litBytes "foo"] (some (litBytes "   "))
#eval iftagsGate [litBytes "foo"] (some (litBytes ","))
#eval iftagsGate [litBytes "foo"] (some (litBytes ",,"))
#eval iftagsGate [litBytes "foo"] (some (litBytes "+foo,"))
#eval iftagsGate [litBytes "foo"] (some (litBytes ",+foo"))
#eval iftagsGate [litBytes "foo", litBytes "bar"] (some (litBytes "+foo, +bar,"))
#eval iftagsGate [litBytes "foo"] (some (litBytes "-,"))
#eval iftagsGate [litBytes "foo"] (some (litBytes "+,"))
#eval iftagsGate [] (some (litBytes ",-foo"))
#eval iftagsGate [litBytes "foo"] (some (litBytes "+foo"))

#eval transliterate (utf8 "cafe")
#eval transliterate (utf8 "café")
#eval transliterate (utf8 "cat:café")
#eval transliterate (utf8 "ABC09")
#eval matchLitCI (litBytes "_default:") (utf8 "_default:café")
#eval pageOpts (freelinkProcess (utf8 "[[[_default:café]]]") (utf8 "_default:café") [] []).2
#eval pageOpts (freelinkProcess (utf8 "[[[cat:café]]]") (utf8 "cat:café") [] []).2

#eval workBytes (typographyRule (ParseState.ofSource "a --- b".toList))
#eval renderTypography [("char".toList, OptVal.str "--".toList)]
#eval renderTypography [("char".toList, OptVal.str "---".toList)]

#eval renderTable [("type".toList, OptVal.str "caption_start".toList)]
#eval renderTable [("type".toList, OptVal.str "caption_end".toList)]
#eval renderTable [("type".toList, OptVal.str "cell_start".toList)]
#eval renderTable [("type".toList, OptVal.str "cell_start".toList),
  ("rowspan".toList, OptVal.int 2)]
#eval renderUrl [("type".toList, OptVal.str "footnote".toList),
  ("href".toList, OptVal.str "http://example.com".toList),
  ("text".toList, OptVal.str "1".toList)]
#eval renderUrl [("href".toList, OptVal.str "http://example.com/a'b.png".toList),
  ("text".toList, OptVal.str "a'b.png".toList)]

#eval renderFreelink [("site".toList, OptVal.str "other".toList),
  ("page".toList, OptVal.str "pag&e".toList),
  ("anchor".toList, OptVal.str "sec".toList),
  ("text".toList, OptVal.str "O'Brien & Co".toList)]

#eval renderHeading [("type".toList, OptVal.str "startContent".toList),
  ("collapse".toList, OptVal.bool true),
  ("id".toList, OptVal.str "h".toList)]

#eval htmlSpecialCharsCompat (litBytes "a<b>\"c'd")
#eval htmlSpecialCharsCompat (litBytes "/foo/edit/true")
