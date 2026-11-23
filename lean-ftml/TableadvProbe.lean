import LeanFtml.TableadvEnum

open LeanFtml

#eval getAttrsBytes (trimBytes (litBytes " data-Foo.Bar=\"UB\""))
#eval buildAttrsAdv (litBytes " data-Foo.Bar=\"UB\"") "table"
#eval buildAttrsAdv (litBytes " data-.=\"UB\"") "table"
#eval advDataKeyOk (litBytes "data-foo.bar")
#eval advDataKeyOk (litBytes "data-.")
#eval advAttrStep "table" [] (litBytes "data-Foo.Bar", litBytes "UB")
#eval ((advRowsGo [(([] : List Nat), enumRowBody)] ([] : List TokenEntry)).1 ==
  some (phBytes 2 ++ phBytes 0 ++ enumCell ++ phBytes 1 ++ phBytes 3))
