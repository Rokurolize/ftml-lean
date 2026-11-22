import LeanFtml.InlineSimpleRules
open LeanFtml

#eval! do
  IO.println ("A=" ++ repr (renderEmail [("email".toList, OptVal.str "a@b.com".toList),
    ("text".toList, OptVal.str ">i<".toList)]))
  IO.println ("B=" ++ repr (renderEmail [("email".toList, OptVal.str "a@b.com".toList),
    ("text".toList, OptVal.str "a'b&c\"d".toList)]))
  IO.println ("C=" ++ repr (renderEmail [("email".toList, OptVal.str "a@b.com".toList),
    ("text".toList, OptVal.bytes [0xC3, 0xA9, 0xC3, 0xA9])]))
  IO.println ("D=" ++ repr (renderEmail [("email".toList, OptVal.bytes [97,64,98,46,99,111,109]),
    ("text".toList, OptVal.bytes [0xC3, 0xA9, 0xC3, 0xA9])]))
#eval! do
  IO.println ("E=" ++ repr (renderEmail [("email".toList, OptVal.str "u@example.com".toList),
    ("text".toList, OptVal.bytes [195, 169])]))
  IO.println ("F=" ++ repr (renderEmail [("email".toList, OptVal.str "u@example.com".toList),
    ("text".toList, OptVal.str "foo@bar".toList)]))
  IO.println ("G=" ++ repr (renderEmail [("email".toList, OptVal.str "u@example.com".toList),
    ("text".toList, OptVal.str "foo#bar".toList)]))
