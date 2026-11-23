import Init.Data.List.Basic
import Init.Data.String.Basic

/- Stage 2 frame compensation, quarantined away from the libtidy core.
    T6 (paragraph unwrap) and T11 (break dropping) are Stage-1 frame
    compensation, not libtidy 5.8.0 behaviour. The module is total: every
    formerly partial recursion carries an explicit `fuel : Nat` and a total
    fallback. The shared `HtmlNode` inductive lives here so that this module
    needs no import of Stage2TidyCore (which imports this one). -/
namespace LeanFtml.Proof.Stage2FrameComp

inductive HtmlNode where
  | text (s : String)
  | voidNode (name : String) (raw : String)
  | rawElem (name : String) (rawOpen : String) (body : String) (rawClose : String)
  | elem (name : String) (rawOpen : String) (children : List HtmlNode)
  | root (children : List HtmlNode)
  deriving Repr, Inhabited

def voidTags : List String :=
  ["br", "hr", "img", "input", "meta", "link", "area", "base", "col", "param"]

def blockTags : List String :=
  ["p", "div", "blockquote", "ul", "ol", "li", "dl", "dt", "dd",
   "table", "thead", "tbody", "tfoot", "tr", "td", "th",
   "h1", "h2", "h3", "h4", "h5", "h6", "hr", "pre", "script", "style",
   "form", "noscript", "center"]

def unwrapPTriggers : List String :=
  ["img", "table", "dl", "div", "ul", "ol", "blockquote", "pre",
   "h1", "h2", "h3", "h4", "h5", "h6", "hr"]

def isAsciiWs (c : Char) : Bool :=
  c == ' ' || c == '\t' || c == '\n' || c == '\r'

def isTagNameStart (c : Char) : Bool :=
  ('a' ≤ c && c ≤ 'z') || ('A' ≤ c && c ≤ 'Z')

def isTagNameChar (c : Char) : Bool :=
  isTagNameStart c || ('0' ≤ c && c ≤ '9')

def toLowerChars (cs : List Char) : List Char :=
  cs.map Char.toLower

def dropWhileChar (p : Char → Bool) (cs : List Char) : List Char :=
  cs.dropWhile p

def rdropWhileChar (p : Char → Bool) (cs : List Char) : List Char :=
  (cs.reverse.dropWhile p).reverse

def trimChars (p : Char → Bool) (s : String) : String :=
  String.ofList (rdropWhileChar p (dropWhileChar p s.toList))

def trimAsciiWs (s : String) : String :=
  trimChars isAsciiWs s

/-- Fueled version of the quoted-value scanner. One fuel unit per consumed
    character; fuel 0 reproduces the original `[]` failure value `none`. -/
def scanQuotedT (fuel : Nat) (q : Char) (cs : List Char) (acc : List Char) : Option (List Char × List Char) :=
  match fuel with
  | 0 => none
  | fuel' + 1 =>
    match cs with
    | [] => none
    | c :: rest =>
      if c == q then some (acc.reverse, rest)
      else scanQuotedT fuel' q rest (c :: acc)

def scanQuoted (q : Char) (cs : List Char) (acc : List Char) : Option (List Char × List Char) :=
  scanQuotedT (cs.length + 1) q cs acc

/-- Fueled tag-tail scanner. Every branch consumes at least one character of
    `cs` (the quoted branches consume the whole quoted run); fuel 0 is the
    original `[]` failure value `none`. -/
def scanTagRestT (fuel : Nat) (cs : List Char) (acc : List Char) : Option (List Char × Bool × List Char) :=
  match fuel with
  | 0 => none
  | fuel' + 1 =>
    match cs with
    | [] => none
    | '>' :: rest =>
      match acc with
      | '/' :: accRest => some (accRest.reverse, true, rest)
      | _ => some (acc.reverse, false, rest)
    | '<' :: _ => none
    | '"' :: rest =>
      match scanQuoted '"' rest [] with
      | none => none
      | some (qbody, afterQ) =>
        let acc' := '"' :: (qbody.reverse ++ ('"' :: acc))
        scanTagRestT fuel' afterQ acc'
    | '\'' :: rest =>
      match scanQuoted '\'' rest [] with
      | none => none
      | some (qbody, afterQ) =>
        let acc' := '\'' :: (qbody.reverse ++ ('\'' :: acc))
        scanTagRestT fuel' afterQ acc'
    | c :: rest =>
      scanTagRestT fuel' rest (c :: acc)

def scanTagRest (cs : List Char) (acc : List Char) : Option (List Char × Bool × List Char) :=
  scanTagRestT (cs.length + 1) cs acc

structure ParsedTag where
  isClose : Bool
  name : String
  attrChars : List Char
  hasSelfSlash : Bool
  rawChars : List Char
  rest : List Char

def tryScanTag (afterLt : List Char) : Option ParsedTag :=
  let (isClose, cs1) :=
    match afterLt with
    | '/' :: r => (true, r)
    | r => (false, r)
  match cs1 with
  | [] => none
  | c0 :: _ =>
    if !isTagNameStart c0 then none
    else
      let nameCs := cs1.takeWhile isTagNameChar
      let cs2 := cs1.dropWhile isTagNameChar
      let okBoundary :=
        match cs2 with
        | '>' :: _ => true
        | '/' :: '>' :: _ => true
        | c :: _ => isAsciiWs c
        | [] => false
      if !okBoundary then none
      else
        match scanTagRest cs2 [] with
        | none => none
        | some (attrCs, selfSlash, afterGt) =>
          let consumedLen := afterLt.length - afterGt.length
          let rawCs := '<' :: afterLt.take consumedLen
          some {
            isClose := isClose
            name := String.ofList (toLowerChars nameCs)
            attrChars := attrCs
            hasSelfSlash := selfSlash
            rawChars := rawCs
            rest := afterGt
          }

-- T6: paragraph unwrap around block and image elements ---------------------

/-- Fueled `containsUnwrapTrigger`; every recursive step moves to a strict
    suffix of `cs`, so `cs.length + 1` fuel is always sufficient. -/
def containsUnwrapTriggerT (fuel : Nat) (cs : List Char) : Bool :=
  match fuel with
  | 0 => false
  | fuel' + 1 =>
    match cs with
    | [] => false
    | '<' :: afterLt =>
      match tryScanTag afterLt with
      | some pt =>
        if !pt.isClose && unwrapPTriggers.contains pt.name then true
        else containsUnwrapTriggerT fuel' pt.rest
      | none => containsUnwrapTriggerT fuel' afterLt
    | _ :: rest => containsUnwrapTriggerT fuel' rest

def containsUnwrapTrigger (cs : List Char) : Bool :=
  containsUnwrapTriggerT (cs.length + 1) cs

/-- Fueled block-depth/saw-pair scan; `cs.length + 1` is again sufficient. -/
def unwrapScopeScanT (fuel : Nat) (cs : List Char) (depth : Nat) (sawPair : Bool) : Nat × Bool :=
  match fuel with
  | 0 => (depth, sawPair)
  | fuel' + 1 =>
    match cs with
    | [] => (depth, sawPair)
    | '<' :: afterLt =>
      match tryScanTag afterLt with
      | some pt =>
        if pt.hasSelfSlash || voidTags.contains pt.name then
          unwrapScopeScanT fuel' pt.rest depth sawPair
        else if pt.isClose then
          if blockTags.contains pt.name then
            if depth == 0 then unwrapScopeScanT fuel' pt.rest 0 sawPair
            else unwrapScopeScanT fuel' pt.rest (depth - 1) true
          else
            unwrapScopeScanT fuel' pt.rest depth sawPair
        else if blockTags.contains pt.name then
          unwrapScopeScanT fuel' pt.rest (depth + 1) sawPair
        else
          unwrapScopeScanT fuel' pt.rest depth sawPair
      | none => unwrapScopeScanT fuel' afterLt depth sawPair
    | _ :: rest => unwrapScopeScanT fuel' rest depth sawPair

def unwrapScopeScan (cs : List Char) (depth : Nat) (sawPair : Bool) : Nat × Bool :=
  unwrapScopeScanT (cs.length + 1) cs depth sawPair

def unwrapBalanced (bodyCs : List Char) : Bool :=
  let (depth, sawPair) := unwrapScopeScan bodyCs 0 false
  depth == 0 || sawPair

/-- Fueled first-`</p>` finder; `cs.length + 1` fuel is sufficient. -/
def findFirstClosePT (fuel : Nat) (cs : List Char) (acc : List Char) : Option (List Char × List Char) :=
  match fuel with
  | 0 => none
  | fuel' + 1 =>
    match cs with
    | [] => none
    | '<' :: '/' :: 'p' :: '>' :: rest =>
      some (acc.reverse, rest)
    | c :: rest =>
      findFirstClosePT fuel' rest (c :: acc)

def findFirstCloseP (cs : List Char) (acc : List Char) : Option (List Char × List Char) :=
  findFirstClosePT (cs.length + 1) cs acc

def consumeTrailingDoubleNl (cs : List Char) : Bool × List Char :=
  let ws := cs.takeWhile (fun c => c == ' ' || c == '\t')
  let afterWs := cs.drop ws.length
  match afterWs with
  | '\n' :: '\n' :: rest => (true, rest)
  | _ => (false, cs)

/-- Fueled pass-2 loop; each recursive call consumes at least the matched
    prefix of `cs`, so `cs.length + 1` fuel is sufficient and the fuel-0
    fallback `String.ofList acc.reverse` is unreachable through the wrapper. -/
def pass2LoopT (fuel : Nat) (cs : List Char) (acc : List Char) : String :=
  match fuel with
  | 0 => String.ofList acc.reverse
  | fuel' + 1 =>
    match cs with
    | [] => String.ofList acc.reverse
    | '<' :: 'p' :: '>' :: afterOpenP =>
      match findFirstCloseP afterOpenP [] with
      | some (bodyCs, afterCloseP) =>
        if containsUnwrapTrigger bodyCs && unwrapBalanced bodyCs then
          let (_, restAfter) := consumeTrailingDoubleNl afterCloseP
          let accWithBody := bodyCs.reverse ++ acc
          pass2LoopT fuel' restAfter accWithBody
        else
          let seg := "<p>".toList ++ bodyCs ++ "</p>".toList
          pass2LoopT fuel' afterCloseP (seg.reverse ++ acc)
      | none =>
        pass2LoopT fuel' afterOpenP ('>' :: 'p' :: '<' :: acc)
    | c :: rest =>
      pass2LoopT fuel' rest (c :: acc)

def pass2Loop (cs : List Char) (acc : List Char) : String :=
  pass2LoopT (cs.length + 1) cs acc

def pass2ParagraphUnwrap (html : String) : String :=
  pass2Loop html.toList []

-- T11: drop a break sandwiched between two table siblings ------------------

def isWsTextNode (n : HtmlNode) : Bool :=
  match n with
  | HtmlNode.text s => (trimAsciiWs s).isEmpty
  | _ => false

def isBrNode (n : HtmlNode) : Bool :=
  match n with
  | HtmlNode.voidNode t _ => t == "br"
  | _ => false

def isTableElem (n : HtmlNode) : Bool :=
  match n with
  | HtmlNode.elem t _ _ => t == "table"
  | _ => false

/-- Predicate-parametric core of T11. Exported so Stage2TidyCore can apply it
    with its own (definitionally identical) node predicates. -/
def dropBlockSandwichedBrsWith {α : Type} (isBr : α → Bool) (isWs : α → Bool) (isTable : α → Bool)
    (children : List α) : List α :=
  let rec nextNonWs (xs : List α) : Option α :=
    match xs with
    | [] => none
    | n :: rest => if isWs n then nextNonWs rest else some n
  let rec loop (prev : Option α) (xs : List α) (acc : List α) : List α :=
    match xs with
    | [] => acc.reverse
    | n :: rest =>
      if isBr n then
        let prevIsTable := match prev with | some p => isTable p | none => false
        let nextIsTable := match nextNonWs rest with | some m => isTable m | none => false
        if prevIsTable && nextIsTable then
          loop prev rest acc
        else
          loop (some n) rest (n :: acc)
      else
        loop (some n) rest (n :: acc)
  loop none children []

def dropBlockSandwichedBrs (children : List HtmlNode) : List HtmlNode :=
  dropBlockSandwichedBrsWith isBrNode isWsTextNode isTableElem children

end LeanFtml.Proof.Stage2FrameComp
