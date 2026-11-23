import LeanFtml.Proof.Stage2FrameComp

/- Totalized Stage 2 libtidy core. Every one of the 21 `partial def`s of
   stage2/stage2-model/Stage2.lean is here as (a) a fuel-explicit total def
   with a `T` suffix and a total fallback at fuel 0, and (b) an original-named
   total wrapper that feeds a proven-safe default fuel. The recursion
   equations, accumulator order and reversal order are otherwise identical to
   the source model, so the port is behavior-preserving by construction.
   T6/T11 live in Stage2FrameComp and are applied only behind
   `Stage2Config.applyFrameComp`; `transformTotal` is the byte-faithful full
   pipeline used for differential validation against the source model. -/
namespace LeanFtml.Proof.Stage2TidyCore

export Stage2FrameComp (HtmlNode HtmlNode.text HtmlNode.voidNode HtmlNode.rawElem HtmlNode.elem HtmlNode.root)

structure Stage2Config where
  applyFrameComp : Bool := true

def voidTags : List String :=
  ["br", "hr", "img", "input", "meta", "link", "area", "base", "col", "param"]

def inlineTags : List String :=
  ["span", "strong", "em", "b", "i", "u", "s", "strike", "tt", "code",
   "sup", "sub", "font", "small", "big", "a", "del", "ins", "abbr",
   "acronym", "cite", "dfn", "kbd", "q", "samp", "var", "iframe"]

def prunableInlineTags : List String :=
  ["span", "strong", "em", "b", "i", "u", "s", "strike", "tt", "code",
   "sup", "sub", "font", "small", "big"]

def istackTags : List String :=
  ["span", "strong", "em", "b", "i", "u", "s", "strike", "tt", "code",
   "sup", "sub", "font", "small", "big"]

def blockTags : List String :=
  ["p", "div", "blockquote", "ul", "ol", "li", "dl", "dt", "dd",
   "table", "thead", "tbody", "tfoot", "tr", "td", "th",
   "h1", "h2", "h3", "h4", "h5", "h6", "hr", "pre", "script", "style",
   "form", "noscript", "center"]

def pClosingBlocks : List String :=
  ["p", "div", "blockquote", "ul", "ol", "dl", "table",
   "h1", "h2", "h3", "h4", "h5", "h6", "hr", "pre", "form", "center"]

def isAsciiWs (c : Char) : Bool :=
  c == ' ' || c == '\t' || c == '\n' || c == '\r'

def isTagNameStart (c : Char) : Bool :=
  ('a' ≤ c && c ≤ 'z') || ('A' ≤ c && c ≤ 'Z')

def isTagNameChar (c : Char) : Bool :=
  isTagNameStart c || ('0' ≤ c && c <= '9')

def toLowerChars (cs : List Char) : List Char :=
  cs.map Char.toLower

def toLowerStr (s : String) : String :=
  String.ofList (toLowerChars s.toList)

def dropWhileChar (p : Char → Bool) (cs : List Char) : List Char :=
  cs.dropWhile p

def rdropWhileChar (p : Char → Bool) (cs : List Char) : List Char :=
  (cs.reverse.dropWhile p).reverse

def trimChars (p : Char → Bool) (s : String) : String :=
  String.ofList (rdropWhileChar p (dropWhileChar p s.toList))

def lstripChars (p : Char → Bool) (s : String) : String :=
  String.ofList (dropWhileChar p s.toList)

def rstripChars (p : Char → Bool) (s : String) : String :=
  String.ofList (rdropWhileChar p s.toList)

def trimAsciiWs (s : String) : String :=
  trimChars isAsciiWs s

def replaceNbsp (cs : List Char) : List Char :=
  let rec loop (rem : List Char) (acc : List Char) : List Char :=
    match rem with
    | [] => acc.reverse
    | c :: rest =>
      if c.toNat == 0x00A0 then
        loop rest (';' :: 'p' :: 's' :: 'b' :: 'n' :: '&' :: acc)
      else
        loop rest (c :: acc)
  loop cs []

def collapseAsciiWsToSpace (cs : List Char) : List Char :=
  let rec loop (rem : List Char) (inWs : Bool) (acc : List Char) : List Char :=
    match rem with
    | [] => acc.reverse
    | c :: rest =>
      if isAsciiWs c then
        if inWs then loop rest true acc
        else loop rest true (' ' :: acc)
      else
        loop rest false (c :: acc)
  loop cs false []

def collapseSpacesOnly (cs : List Char) : List Char :=
  let rec loop (rem : List Char) (inWs : Bool) (acc : List Char) : List Char :=
    match rem with
    | [] => acc.reverse
    | c :: rest =>
      if c == ' ' || c == '\t' then
        if inWs then loop rest true acc
        else loop rest true (' ' :: acc)
      else
        loop rest false (c :: acc)
  loop cs false []

-- 1. scanQuoted ------------------------------------------------------------

/-- One fuel unit per consumed character; fuel 0 is the `[]` failure value. -/
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

-- 2. scanTagRest -----------------------------------------------------------

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

-- 3. parseAndNormAttrs -----------------------------------------------------

/-- Every recursive branch shortens `cs` by at least one character, so
    `cs.length + 1` is a safe fuel. Fuel 0 returns the original `[]` result. -/
def parseAndNormAttrsT (fuel : Nat) (cs : List Char) (acc : List String) : List String :=
  match fuel with
  | 0 => acc.reverse
  | fuel' + 1 =>
    let cs1 := cs.dropWhile (fun c => isAsciiWs c || c == '/')
    match cs1 with
    | [] => acc.reverse
    | _ =>
      let isKeyChar (c : Char) : Bool :=
        !isAsciiWs c && c != '=' && c != '/' && c != '<' && c != '>'
      let keyCs := cs1.takeWhile isKeyChar
      if keyCs.isEmpty then
        parseAndNormAttrsT fuel' (cs1.drop 1) acc
      else
        let key := String.ofList keyCs
        let cs2 := (cs1.dropWhile isKeyChar).dropWhile isAsciiWs
        match cs2 with
        | '=' :: cs3 =>
          let cs4 := cs3.dropWhile isAsciiWs
          match cs4 with
          | '"' :: qrest =>
            match scanQuoted '"' qrest [] with
            | some (valCs, afterQ) =>
              let kLow := toLowerStr key
              let normValCs :=
                if kLow == "src" || kLow == "href" then
                  valCs.filter (fun c => c != '\n' && c != '\r')
                else
                  collapseAsciiWsToSpace valCs
              let item := key ++ "=\"" ++ String.ofList normValCs ++ "\""
              parseAndNormAttrsT fuel' afterQ (item :: acc)
            | none =>
              parseAndNormAttrsT fuel' [] ((key ++ "=\"") :: acc)
          | '\'' :: qrest =>
            match scanQuoted '\'' qrest [] with
            | some (valCs, afterQ) =>
              let kLow := toLowerStr key
              let normValCs :=
                if kLow == "src" || kLow == "href" then
                  valCs.filter (fun c => c != '\n' && c != '\r')
                else
                  collapseAsciiWsToSpace valCs
              let item := key ++ "='" ++ String.ofList normValCs ++ "'"
              parseAndNormAttrsT fuel' afterQ (item :: acc)
            | none =>
              parseAndNormAttrsT fuel' [] ((key ++ "='") :: acc)
          | _ =>
            let isUnqChar (c : Char) : Bool :=
              !isAsciiWs c && c != '"' && c != '\'' && c != '=' && c != '<' && c != '>' && c != '`'
            let valCs := cs4.takeWhile isUnqChar
            let afterV := cs4.dropWhile isUnqChar
            let item := key ++ "=" ++ String.ofList valCs
            parseAndNormAttrsT fuel' afterV (item :: acc)
        | _ =>
          parseAndNormAttrsT fuel' cs2 (key :: acc)

def parseAndNormAttrs (cs : List Char) (acc : List String) : List String :=
  parseAndNormAttrsT (cs.length + 1) cs acc

def normalizeOpenTag (tname : String) (attrCs : List Char) (isVoid : Bool) : String :=
  let attrs := parseAndNormAttrs attrCs []
  let attrPart :=
    match attrs with
    | [] => ""
    | _ => " " ++ String.intercalate " " attrs
  if isVoid then
    "<" ++ tname ++ attrPart ++ " />"
  else
    "<" ++ tname ++ attrPart ++ ">"

-- 4. scanUntilCloseTag -----------------------------------------------------

def scanUntilCloseTagT (fuel : Nat) (targetTag : String) (cs : List Char) (bodyAcc : List Char) : String × String × List Char :=
  match fuel with
  | 0 => (String.ofList bodyAcc.reverse, "</" ++ targetTag ++ ">", [])
  | fuel' + 1 =>
    match cs with
    | [] => (String.ofList bodyAcc.reverse, "</" ++ targetTag ++ ">", [])
    | '<' :: afterLt =>
      match tryScanTag afterLt with
      | some pt =>
        if pt.isClose && pt.name == targetTag then
          (String.ofList bodyAcc.reverse, "</" ++ targetTag ++ ">", pt.rest)
        else
          scanUntilCloseTagT fuel' targetTag afterLt ('<' :: bodyAcc)
      | none =>
        scanUntilCloseTagT fuel' targetTag afterLt ('<' :: bodyAcc)
    | c :: rest =>
      scanUntilCloseTagT fuel' targetTag rest (c :: bodyAcc)

def scanUntilCloseTag (targetTag : String) (cs : List Char) (bodyAcc : List Char) : String × String × List Char :=
  scanUntilCloseTagT (cs.length + 1) targetTag cs bodyAcc

-- PASS 1 -------------------------------------------------------------------

def pass1LoopT (fuel : Nat) (cs : List Char) (acc : List String) : String :=
  match fuel with
  | 0 => String.intercalate "" acc.reverse
  | fuel' + 1 =>
    match cs with
    | [] => String.intercalate "" acc.reverse
    | '<' :: afterLt =>
      match tryScanTag afterLt with
      | some pt =>
        if pt.isClose then
          pass1LoopT fuel' pt.rest (("</" ++ pt.name ++ ">") :: acc)
        else if pt.name == "script" then
          let normOpen := normalizeOpenTag pt.name pt.attrChars false
          let (body, closeStr, afterClose) := scanUntilCloseTag "script" pt.rest []
          pass1LoopT fuel' afterClose ((normOpen ++ body ++ closeStr) :: acc)
        else
          let isVoid := pt.hasSelfSlash || voidTags.contains pt.name
          let normOpen := normalizeOpenTag pt.name pt.attrChars isVoid
          pass1LoopT fuel' pt.rest (normOpen :: acc)
      | none =>
        pass1LoopT fuel' afterLt ("<" :: acc)
    | c :: rest =>
      let txtCs := c :: rest.takeWhile (fun x => x != '<')
      let rem := rest.dropWhile (fun x => x != '<')
      pass1LoopT fuel' rem (String.ofList txtCs :: acc)

def pass1Loop (cs : List Char) (acc : List String) : String :=
  pass1LoopT (cs.length + 1) cs acc

def pass1FrameAndTagNorm (html : String) : String :=
  let trimmed := trimAsciiWs html
  let nbspFixed := replaceNbsp trimmed.toList
  pass1Loop nbspFixed []

-- T6 (quarantined in Stage2FrameComp): original-named re-exports ------------

abbrev containsUnwrapTrigger := Stage2FrameComp.containsUnwrapTrigger
abbrev unwrapScopeScan := Stage2FrameComp.unwrapScopeScan
abbrev unwrapBalanced := Stage2FrameComp.unwrapBalanced
abbrev findFirstCloseP := Stage2FrameComp.findFirstCloseP
abbrev consumeTrailingDoubleNl := Stage2FrameComp.consumeTrailingDoubleNl
abbrev pass2Loop := Stage2FrameComp.pass2Loop
abbrev pass2ParagraphUnwrap := Stage2FrameComp.pass2ParagraphUnwrap

-- PASS 3 -------------------------------------------------------------------

inductive HtmlToken where
  | text (s : String)
  | voidTag (name : String) (raw : String)
  | rawElem (name : String) (rawOpen : String) (body : String) (rawClose : String)
  | startTag (name : String) (raw : String)
  | endTag (name : String) (raw : String)
  deriving Repr

def tokenizeHtmlLoopT (fuel : Nat) (cs : List Char) (acc : List HtmlToken) : List HtmlToken :=
  match fuel with
  | 0 => acc.reverse
  | fuel' + 1 =>
    match cs with
    | [] => acc.reverse
    | '<' :: afterLt =>
      match tryScanTag afterLt with
      | some pt =>
        let rawStr := String.ofList pt.rawChars
        if pt.isClose then
          tokenizeHtmlLoopT fuel' pt.rest (HtmlToken.endTag pt.name rawStr :: acc)
        else if pt.name == "script" || pt.name == "pre" then
          let (body, closeStr, afterClose) := scanUntilCloseTag pt.name pt.rest []
          tokenizeHtmlLoopT fuel' afterClose (HtmlToken.rawElem pt.name rawStr body closeStr :: acc)
        else if pt.hasSelfSlash || voidTags.contains pt.name then
          tokenizeHtmlLoopT fuel' pt.rest (HtmlToken.voidTag pt.name rawStr :: acc)
        else
          tokenizeHtmlLoopT fuel' pt.rest (HtmlToken.startTag pt.name rawStr :: acc)
      | none =>
        match acc with
        | HtmlToken.text prev :: accRest =>
          tokenizeHtmlLoopT fuel' afterLt (HtmlToken.text (prev ++ "<") :: accRest)
        | _ =>
          tokenizeHtmlLoopT fuel' afterLt (HtmlToken.text "<" :: acc)
    | c :: rest =>
      let txtCs := c :: rest.takeWhile (fun x => x != '<')
      let rem := rest.dropWhile (fun x => x != '<')
      let s := String.ofList txtCs
      match acc with
      | HtmlToken.text prev :: accRest =>
        tokenizeHtmlLoopT fuel' rem (HtmlToken.text (prev ++ s) :: accRest)
      | _ =>
        tokenizeHtmlLoopT fuel' rem (HtmlToken.text s :: acc)

def tokenizeHtmlLoop (cs : List Char) (acc : List HtmlToken) : List HtmlToken :=
  tokenizeHtmlLoopT (cs.length + 1) cs acc

def tokenizeHtml (html : String) : List HtmlToken :=
  tokenizeHtmlLoop html.toList []

structure OpenEntry where
  actualTag : String
  rawOpen : String
  expectClose : String

structure IStackEntry where
  tag : String
  rawOpen : String
  deferred : Bool
  deriving Repr, Inhabited

structure RepairState where
  openStack : List OpenEntry := []
  istack : List IStackEntry := []
  savedIstacks : List (List IStackEntry) := []
  pendingAReopen : Option String := none
  pendingReopen : List OpenEntry := []
  /-- Index into `istack` from which the next token reopens entries. -/
  reopenFrom : Option Nat := none
  outRev : List String := []

def emitStr (st : RepairState) (s : String) : RepairState :=
  { st with outRev := s :: st.outRev }

def isPushed (st : RepairState) (tname : String) : Bool :=
  st.istack.any (fun e => e.tag == tname)

def pushInline (st : RepairState) (tname : String) (rawTag : String) : RepairState :=
  if istackTags.contains tname && !isPushed st tname then
    { st with istack := st.istack ++ [{ tag := tname, rawOpen := rawTag, deferred := false }] }
  else
    st

def popInlineFromIstack (ist : List IStackEntry) (tname : String) : List IStackEntry :=
  let rec findLastIdx (xs : List IStackEntry) (i : Nat) (found : Option Nat) : Option Nat :=
    match xs with
    | [] => found
    | e :: rest =>
      if e.tag == tname then findLastIdx rest (i + 1) (some i)
      else findLastIdx rest (i + 1) found
  match findLastIdx ist 0 none with
  | none => ist
  | some idx => ist.take idx

def removeLastFromIstack (ist : List IStackEntry) (tname : String) : List IStackEntry :=
  let rec findLastIdx (xs : List IStackEntry) (i : Nat) (found : Option Nat) : Option Nat :=
    match xs with
    | [] => found
    | e :: rest =>
      if e.tag == tname then findLastIdx rest (i + 1) (some i)
      else findLastIdx rest (i + 1) found
  match findLastIdx ist 0 none with
  | none => ist
  | some idx => ist.take idx ++ ist.drop (idx + 1)

def popInline (st : RepairState) (tname : String) : RepairState :=
  if istackTags.contains tname && isPushed st tname then
    { st with istack := popInlineFromIstack st.istack tname }
  else
    st

def hasDeferred (st : RepairState) : Bool :=
  st.istack.any (fun e => e.deferred) || !st.pendingReopen.isEmpty || st.reopenFrom.isSome

def reopenDeferred (st : RepairState) : RepairState :=
  let stPending := st.pendingReopen.foldl
    (fun (accSt : RepairState) (e : OpenEntry) =>
      { accSt with
        openStack := e :: accSt.openStack
        outRev := e.rawOpen :: accSt.outRev })
    { st with pendingReopen := [] }
  let stDup :=
    match stPending.reopenFrom with
    | none => stPending
    | some i =>
      let entries := stPending.istack.drop i
      entries.foldl
        (fun (accSt : RepairState) (e : IStackEntry) =>
          let entry : OpenEntry := { actualTag := e.tag, rawOpen := e.rawOpen, expectClose := e.tag }
          { accSt with
            openStack := entry :: accSt.openStack
            outRev := e.rawOpen :: accSt.outRev })
        { stPending with reopenFrom := none }
  stDup.istack.foldl
    (fun (accSt : RepairState) (e : IStackEntry) =>
      if e.deferred then
        let newEntry : OpenEntry := { actualTag := e.tag, rawOpen := e.rawOpen, expectClose := e.tag }
        { accSt with
          openStack := newEntry :: accSt.openStack
          outRev := e.rawOpen :: accSt.outRev }
      else
        accSt)
    { stDup with istack := stDup.istack.map (fun e => { e with deferred := false }) }

def markDeferredOnIstack (ist : List IStackEntry) (tname : String) (rawOpen : String) : List IStackEntry :=
  let rec markFromEnd (rev : List IStackEntry) (done : Bool) (acc : List IStackEntry) : Bool × List IStackEntry :=
    match rev with
    | [] => (done, acc)
    | e :: rest =>
      if !done && e.tag == tname && !e.deferred then
        markFromEnd rest true ({ e with deferred := true } :: acc)
      else
        markFromEnd rest done (e :: acc)
  let (found, updated) := markFromEnd ist.reverse false []
  if found then updated
  else updated ++ [{ tag := tname, rawOpen := rawOpen, deferred := true }]

/-- One fuel unit per popped inline entry, so `openStack.length + 1` suffices. -/
def closeInlinesForBlockEndT (fuel : Nat) (st : RepairState) (keepOnIstack : Bool) : RepairState :=
  match fuel with
  | 0 => st
  | fuel' + 1 =>
    match st.openStack with
    | top :: rest =>
      if inlineTags.contains top.actualTag then
        let st1 := { st with openStack := rest, outRev := ("</" ++ top.actualTag ++ ">") :: st.outRev }
        let st2 :=
          if keepOnIstack then
            if istackTags.contains top.actualTag then
              { st1 with istack := markDeferredOnIstack st1.istack top.actualTag top.rawOpen }
            else if top.actualTag == "a" then
              { st1 with pendingAReopen := some top.rawOpen }
            else
              st1
          else
            popInline st1 top.actualTag
        closeInlinesForBlockEndT fuel' st2 keepOnIstack
      else
        st
    | [] => st

def closeInlinesForBlockEnd (st : RepairState) (keepOnIstack : Bool) : RepairState :=
  closeInlinesForBlockEndT (st.openStack.length + 1) st keepOnIstack

def inScopeDepth (openStack : List OpenEntry) (tname : String) : Option Nat :=
  let tableTags := ["td", "th", "tr", "table", "thead", "tbody", "tfoot"]
  let rec loop (xs : List OpenEntry) (d : Nat) : Option Nat :=
    match xs with
    | [] => none
    | e :: rest =>
      if e.expectClose == tname then some d
      else if (e.actualTag == "td" || e.actualTag == "th" || e.actualTag == "table") && !tableTags.contains tname then
        none
      else
        loop rest (d + 1)
  loop openStack 0

/-- The `count` argument is the explicit fuel; recursion is structural on it. -/
def popDepthPopInline (st : RepairState) (count : Nat) : RepairState :=
  match count with
  | 0 => st
  | k + 1 =>
    match st.openStack with
    | [] => st
    | top :: rest =>
      let st1 := { st with openStack := rest, outRev := ("</" ++ top.actualTag ++ ">") :: st.outRev }
      let st2 := popInline st1 top.actualTag
      popDepthPopInline st2 k

def popDepthNoIstack (st : RepairState) (count : Nat) : RepairState :=
  match count with
  | 0 => st
  | k + 1 =>
    match st.openStack with
    | [] => st
    | top :: rest =>
      let st1 := { st with openStack := rest, outRev := ("</" ++ top.actualTag ++ ">") :: st.outRev }
      popDepthNoIstack st1 k

def popDepthDeferIstack (st : RepairState) (count : Nat) : RepairState :=
  match count with
  | 0 => st
  | k + 1 =>
    match st.openStack with
    | [] => st
    | top :: rest =>
      let st1 := { st with openStack := rest, outRev := ("</" ++ top.actualTag ++ ">") :: st.outRev }
      let st2 :=
        if istackTags.contains top.actualTag then
          { st1 with istack := markDeferredOnIstack st1.istack top.actualTag top.rawOpen }
        else
          st1
      popDepthDeferIstack st2 k

def popCrossedForReopen (st : RepairState) (count : Nat) (acc : List OpenEntry) : RepairState × List OpenEntry :=
  match count with
  | 0 => (st, acc)
  | k + 1 =>
    match st.openStack with
    | [] => (st, acc)
    | top :: rest =>
      let st1 := { st with openStack := rest, outRev := ("</" ++ top.actualTag ++ ">") :: st.outRev }
      let st2 := popInline st1 top.actualTag
      let acc' := if top.actualTag == "span" then acc else acc ++ [top]
      popCrossedForReopen st2 k acc'

def updateExpectAtDepth (xs : List OpenEntry) (depth : Nat) (newExpect : String) : List OpenEntry :=
  match depth, xs with
  | _, [] => []
  | 0, e :: rest => { e with expectClose := newExpect } :: rest
  | k + 1, e :: rest => e :: updateExpectAtDepth rest k newExpect

def popIstackTop (st : RepairState) : RepairState :=
  let ist := st.istack.dropLast
  let reopen :=
    match st.reopenFrom with
    | some i => if i < ist.length then some i else none
    | none => none
  { st with istack := ist, reopenFrom := reopen }

def popIstackUntilList (ist : List IStackEntry) (tag : String) : List IStackEntry :=
  let rec dropRev (rev : List IStackEntry) : List IStackEntry :=
    match rev with
    | [] => []
    | top :: rest => if top.tag == tag then rest.reverse else dropRev rest
  dropRev ist.reverse

def popIstackUntil (st : RepairState) (tag : String) : RepairState :=
  let ist := popIstackUntilList st.istack tag
  let reopen :=
    match st.reopenFrom with
    | some i => if i < ist.length then some i else none
    | none => none
  { st with istack := ist, reopenFrom := reopen }

def switchIstack (ist : List IStackEntry) (elementTag nodeTag : String) : Option (List IStackEntry) :=
  let arr := ist.toArray
  let n := arr.size
  if n < 2 then none
  else
    let rec search (i : Nat) : Option (Nat × Nat) :=
      if i >= n then none
      else
        let idx := n - 1 - i
        if arr[idx]!.tag == elementTag then
          let rec searchNode (j : Nat) : Option Nat :=
            if j >= idx then none
            else
              let jdx := idx - 1 - j
              if arr[jdx]!.tag == nodeTag then some jdx
              else searchNode (j + 1)
          match searchNode 0 with
          | some jdx => some (idx, jdx)
          | none => none
        else search (i + 1)
    match search 0 with
    | none => none
    | some (idx, jdx) =>
      let atIdx := arr[idx]!
      let atJdx := arr[jdx]!
      some ((arr.set! idx atJdx).set! jdx atIdx).toList

def findLastTag (ist : List IStackEntry) (tag : String) : Option Nat :=
  let rec loop (xs : List IStackEntry) (i : Nat) (found : Option Nat) : Option Nat :=
    match xs with
    | [] => found
    | e :: rest =>
      if e.tag == tag then loop rest (i + 1) (some i)
      else loop rest (i + 1) found
  loop ist 0 none

def closeOpenTop (st : RepairState) : RepairState :=
  match st.openStack with
  | top :: rest =>
    { st with openStack := rest, outRev := ("</" ++ top.actualTag ++ ">") :: st.outRev }
  | [] => st

/-- The existing `fuel` argument is the explicit totalization device. -/
def repairInlineEnd (st : RepairState) (tname : String) (fuel : Nat) : RepairState :=
  match fuel with
  | 0 => st
  | fuel' + 1 =>
    match st.openStack with
    | top :: _ =>
      if !inlineTags.contains top.actualTag then st
      else if top.actualTag == tname then
        let st1 := closeOpenTop st
        if tname == "a" then popIstackUntil st1 "a" else popIstackTop st1
      else if tname == "a" then
        repairInlineEnd (closeOpenTop st) tname fuel'
      else if top.actualTag != "a" && isPushed st tname && isPushed st top.actualTag then
        match switchIstack st.istack top.actualTag tname with
        | some swapped =>
          let st1 := { st with istack := swapped, reopenFrom := findLastTag swapped top.actualTag }
          repairInlineEnd (closeOpenTop st1) tname fuel'
        | none =>
          if top.actualTag == "a" then st
          else closeOpenTop (popIstackTop st)
      else if top.actualTag == "a" then st
      else
        closeOpenTop (popIstackTop st)
    | [] => st

def stepToken (st : RepairState) (tok : HtmlToken) : RepairState :=
  match tok with
  | HtmlToken.text txt =>
    if hasDeferred st && !txt.isEmpty then
      let cs := txt.toList
      let leadWs := cs.takeWhile isAsciiWs
      let restCs := cs.dropWhile isAsciiWs
      if restCs.isEmpty then
        emitStr st txt
      else if leadWs.isEmpty then
        let st1 := reopenDeferred st
        emitStr st1 txt
      else
        let st1 := emitStr st (String.ofList leadWs)
        let st2 := reopenDeferred st1
        emitStr st2 (String.ofList restCs)
    else
      emitStr st txt

  | HtmlToken.voidTag tname rawTag =>
    if tname == "hr" then
      let st1 :=
        match inScopeDepth st.openStack "p" with
        | some _ =>
          let sA := closeInlinesForBlockEnd st true
          match sA.openStack with
          | top :: rest =>
            if top.actualTag == "p" then
              { sA with openStack := rest, outRev := "</p>" :: sA.outRev }
            else sA
          | [] => sA
        | none => st
      emitStr st1 rawTag
    else
      let st1 := if hasDeferred st then reopenDeferred st else st
      emitStr st1 rawTag

  | HtmlToken.rawElem tname rawOpen body rawClose =>
    let st1 :=
      if tname == "pre" then
        match inScopeDepth st.openStack "p" with
        | some _ =>
          let sA := closeInlinesForBlockEnd st false
          match sA.openStack with
          | top :: rest =>
            if top.actualTag == "p" then
              { sA with openStack := rest, outRev := "</p>" :: sA.outRev }
            else sA
          | [] => sA
        | none => st
      else st
    emitStr st1 (rawOpen ++ body ++ rawClose)

  | HtmlToken.startTag tname rawTag =>
    let st1 :=
      if tname == "a" then
        match inScopeDepth st.openStack "a" with
        | some d => popDepthPopInline st (d + 1)
        | none => st
      else st
    let st2 :=
      if pClosingBlocks.contains tname then
        let sA :=
          match st1.openStack, st1.pendingAReopen with
          | top :: rest, none =>
            if top.actualTag == "a" then
              { st1 with openStack := rest, outRev := "</a>" :: st1.outRev }
            else st1
          | _, _ => st1
        match inScopeDepth sA.openStack "p" with
        | some _ =>
          let sB := closeInlinesForBlockEnd sA true
          match sB.openStack with
          | top :: rest =>
            if top.actualTag == "p" then
              { sB with openStack := rest, outRev := "</p>" :: sB.outRev }
            else sB
          | [] => sB
        | none =>
          match sA.openStack with
          | top :: _ =>
            if inlineTags.contains top.actualTag then closeInlinesForBlockEnd sA true
            else sA
          | [] => sA
      else st1
    let st3 :=
      if tname == "li" || tname == "dt" || tname == "dd" then
        match st2.openStack with
        | top :: _ =>
          if inlineTags.contains top.actualTag then closeInlinesForBlockEnd st2 true
          else st2
        | [] => st2
      else st2
    let st4 :=
      if tname == "td" || tname == "th" || tname == "table" then
        { st3 with savedIstacks := st3.istack :: st3.savedIstacks, istack := [] }
      else st3
    if inlineTags.contains tname then
      let st5 := if hasDeferred st4 then reopenDeferred st4 else st4
      let entry : OpenEntry := { actualTag := tname, rawOpen := rawTag, expectClose := tname }
      let st6 := { st5 with openStack := entry :: st5.openStack, outRev := rawTag :: st5.outRev }
      pushInline st6 tname rawTag
    else
      let entry : OpenEntry := { actualTag := tname, rawOpen := rawTag, expectClose := tname }
      let st5 := { st4 with openStack := entry :: st4.openStack, outRev := rawTag :: st4.outRev }
      if tname == "div" then
        match st5.pendingAReopen with
        | some aTag =>
          let aEntry : OpenEntry := { actualTag := "a", rawOpen := aTag, expectClose := "a" }
          { st5 with
            pendingAReopen := none
            openStack := aEntry :: st5.openStack
            outRev := aTag :: st5.outRev }
        | none => st5
      else st5

  | HtmlToken.endTag tname _ =>
    if inlineTags.contains tname then
      let st1 := if hasDeferred st then reopenDeferred st else st
      repairInlineEnd st1 tname 64
    else
    match inScopeDepth st.openStack tname with
    | none => st
    | some d =>
      if ["p", "li", "dt", "dd", "h1", "h2", "h3", "h4", "h5", "h6"].contains tname then
        let st1 := if d > 0 then closeInlinesForBlockEnd st true else st
        match inScopeDepth st1.openStack tname with
        | none => st1
        | some d2 =>
          let st2 := popDepthNoIstack st1 d2
          match st2.openStack with
          | top :: rest =>
            { st2 with openStack := rest, outRev := ("</" ++ top.actualTag ++ ">") :: st2.outRev }
          | [] => st2
      else if ["td", "th", "table"].contains tname then
        let st1 := popDepthNoIstack st d
        let st2 :=
          match st1.openStack with
          | top :: rest =>
            { st1 with openStack := rest, outRev := ("</" ++ top.actualTag ++ ">") :: st1.outRev }
          | [] => st1
        match st2.savedIstacks with
        | prev :: restSaved => { st2 with istack := prev, savedIstacks := restSaved }
        | [] => { st2 with istack := [] }
      else
        let st1 := popDepthPopInline st d
        match st1.openStack with
        | top :: rest =>
          { st1 with openStack := rest, outRev := ("</" ++ top.actualTag ++ ">") :: st1.outRev }
        | [] => st1

def pass3RepairStack (html : String) : String :=
  let tokens := tokenizeHtml html
  let stFinal := tokens.foldl stepToken {}
  let stClosed := popDepthNoIstack stFinal stFinal.openStack.length
  String.intercalate "" stClosed.outRev.reverse

-- Tree representation -------------------------------------------------------

structure TreeFrame where
  name : String
  rawOpen : String
  childrenRev : List HtmlNode

def addNodeToStack (frames : List TreeFrame) (n : HtmlNode) : List TreeFrame :=
  match frames with
  | top :: rest => { top with childrenRev := n :: top.childrenRev } :: rest
  | [] => [{ name := "root", rawOpen := "", childrenRev := [n] }]

/-- One fuel unit per frame; each step shortens `frames` by exactly one, so
    `frames.length + 1` is safe. Fuel 0 yields `root []`. -/
def unwindTreeFramesT (fuel : Nat) (frames : List TreeFrame) : HtmlNode :=
  match fuel with
  | 0 => HtmlNode.root []
  | fuel' + 1 =>
    match frames with
    | [] => HtmlNode.root []
    | [r] => HtmlNode.root r.childrenRev.reverse
    | top :: rest =>
      let node := HtmlNode.elem top.name top.rawOpen top.childrenRev.reverse
      unwindTreeFramesT fuel' (addNodeToStack rest node)

def unwindTreeFrames (frames : List TreeFrame) : HtmlNode :=
  unwindTreeFramesT (frames.length + 1) frames

def parseWellFormedTree (html : String) : HtmlNode :=
  let tokens := tokenizeHtml html
  let initFrames : List TreeFrame := [{ name := "root", rawOpen := "", childrenRev := [] }]
  let finalFrames := tokens.foldl
    (fun (frames : List TreeFrame) (tok : HtmlToken) =>
      match tok with
      | HtmlToken.text s => addNodeToStack frames (HtmlNode.text s)
      | HtmlToken.voidTag t r => addNodeToStack frames (HtmlNode.voidNode t r)
      | HtmlToken.rawElem t ro b rc => addNodeToStack frames (HtmlNode.rawElem t ro b rc)
      | HtmlToken.startTag t r =>
        { name := t, rawOpen := r, childrenRev := [] } :: frames
      | HtmlToken.endTag t _ =>
        match frames with
        | top :: rest =>
          if !rest.isEmpty && top.name == t then
            let node := HtmlNode.elem top.name top.rawOpen top.childrenRev.reverse
            addNodeToStack rest node
          else
            frames
        | [] => frames)
    initFrames
  unwindTreeFrames finalFrames

def isBlockNode (n : HtmlNode) : Bool :=
  match n with
  | HtmlNode.elem t _ _ => blockTags.contains t
  | HtmlNode.voidNode t _ => t == "hr"
  | HtmlNode.rawElem t _ _ _ => ["pre", "script", "style"].contains t
  | _ => false

def isInlineElem (n : HtmlNode) : Bool :=
  match n with
  | HtmlNode.elem t _ _ => inlineTags.contains t
  | _ => false

-- PASS 4 -------------------------------------------------------------------

def mergeAndCollapseTexts (children : List HtmlNode) : List HtmlNode :=
  let rec loop (rem : List HtmlNode) (acc : List HtmlNode) : List HtmlNode :=
    match rem with
    | [] => acc.reverse
    | HtmlNode.text s :: rest =>
      let prevIsBr :=
        match acc with
        | HtmlNode.voidNode "br" _ :: _ => true
        | _ => false
      let sNorm :=
        match s.toList with
        | '\n' :: afterNl =>
          if prevIsBr then
            let stripped := afterNl.dropWhile isAsciiWs
            let collapsed := collapseAsciiWsToSpace stripped
            String.ofList ('\n' :: collapsed)
          else
            String.ofList (collapseAsciiWsToSpace s.toList)
        | cs => String.ofList (collapseAsciiWsToSpace cs)
      if sNorm.isEmpty then
        loop rest acc
      else
        match acc with
        | HtmlNode.text prev :: accRest =>
          let comb := (prev ++ sNorm).toList
          let combStr :=
            match comb with
            | '\n' :: afterNl =>
              String.ofList ('\n' :: (collapseSpacesOnly afterNl).dropWhile (fun c => c == ' '))
            | _ =>
              String.ofList (collapseSpacesOnly comb)
          loop rest (HtmlNode.text combStr :: accRest)
        | _ =>
          loop rest (HtmlNode.text sNorm :: acc)
    | ch :: rest =>
      let acc' :=
        match ch, acc with
        | HtmlNode.voidNode "br" _, HtmlNode.text prev :: accRest =>
          let prevTrim := rstripChars (fun c => c == ' ') prev
          if prevTrim.isEmpty then accRest
          else HtmlNode.text prevTrim :: accRest
        | _, _ => acc
      loop rest (ch :: acc')
  loop children []

def hoistAndEjectInline (tname : String) (rawOpen : String) (ich : List HtmlNode) : Bool × Option HtmlNode × Bool :=
  let (leadWs, ich1) :=
    match ich with
    | HtmlNode.text s :: rest =>
      if s.startsWith " " then
        let s' := lstripChars (fun c => c == ' ') s
        if s'.isEmpty then (true, rest)
        else (true, HtmlNode.text s' :: rest)
      else (false, ich)
    | _ => (false, ich)
  let (trailWs, ich2) :=
    match ich1.reverse with
    | HtmlNode.text s :: revRest =>
      if s.endsWith " " || s.endsWith "\n" then
        let s' := rstripChars (fun c => c == ' ' || c == '\n') s
        if s'.isEmpty then (true, revRest.reverse)
        else (true, (HtmlNode.text s' :: revRest).reverse)
      else (false, ich1)
    | _ => (false, ich1)
  if ich2.isEmpty && prunableInlineTags.contains tname then
    (leadWs || trailWs, none, false)
  else
    (leadWs, some (HtmlNode.elem tname rawOpen ich2), trailWs)

def trimBlockChildren (children : List HtmlNode) : List HtmlNode :=
  let arr := children.toArray
  let n := arr.size
  let rec loop (i : Nat) (acc : List HtmlNode) : List HtmlNode :=
    if i >= n then acc.reverse
    else
      match arr[i]! with
      | HtmlNode.text s =>
        let prevBlock := (i == 0) || isBlockNode arr[i - 1]!
        let nextBlock := (i + 1 == n) || isBlockNode arr[i + 1]!
        let s1 := if prevBlock then lstripChars (fun c => c == ' ' || c == '\n') s else s
        let s2 := if nextBlock then rstripChars (fun c => c == ' ' || c == '\n') s1 else s1
        if s2.isEmpty then loop (i + 1) acc
        else loop (i + 1) (HtmlNode.text s2 :: acc)
      | ch => loop (i + 1) (ch :: acc)
  let cleaned := mergeAndCollapseTexts (loop 0 [])
  match cleaned.reverse with
  | HtmlNode.text "\n" :: revRest => revRest.reverse
  | _ => cleaned

def isBrNode (n : HtmlNode) : Bool :=
  match n with
  | HtmlNode.voidNode t _ => t == "br"
  | _ => false

def isWsTextNode (n : HtmlNode) : Bool :=
  match n with
  | HtmlNode.text s => (trimAsciiWs s).isEmpty
  | _ => false

def isTableElem (n : HtmlNode) : Bool :=
  match n with
  | HtmlNode.elem t _ _ => t == "table"
  | _ => false

/-- T11 applied with this module's (definitionally identical) predicates. -/
def dropBlockSandwichedBrs (children : List HtmlNode) : List HtmlNode :=
  Stage2FrameComp.dropBlockSandwichedBrsWith isBrNode isWsTextNode isTableElem children

mutual
  def nodeHeight (node : HtmlNode) : Nat :=
    match node with
    | HtmlNode.text _ => 0
    | HtmlNode.voidNode _ _ => 0
    | HtmlNode.rawElem _ _ _ _ => 0
    | HtmlNode.elem _ _ children => 1 + nodesHeight children
    | HtmlNode.root children => 1 + nodesHeight children

  def nodesHeight (children : List HtmlNode) : Nat :=
    match children with
    | [] => 0
    | n :: rest => max (nodeHeight n) (nodesHeight rest)
end

/-- Fuel 0 is the identity fallback; every descent consumes one fuel unit, so
    `nodeHeight + 1` is safe. `applyFrameComp` gates T11. -/
def processNodePass4CoreT (applyFrameComp : Bool) (fuel : Nat) (node : HtmlNode) : Option HtmlNode :=
  match fuel with
  | 0 => some node
  | fuel' + 1 =>
    match node with
    | HtmlNode.text _ => some node
    | HtmlNode.voidNode _ _ => some node
    | HtmlNode.rawElem _ _ _ _ => some node
    | HtmlNode.root children =>
      let srcChildren := if applyFrameComp then dropBlockSandwichedBrs children else children
      let newCh := srcChildren.foldl
        (fun (acc : List HtmlNode) (ch : HtmlNode) =>
          match processNodePass4CoreT applyFrameComp fuel' ch with
          | none => acc
          | some (HtmlNode.elem t ro ich) =>
            if inlineTags.contains t then
              let (lw, mNode, tw) := hoistAndEjectInline t ro ich
              let acc1 := if lw then acc ++ [HtmlNode.text " "] else acc
              let acc2 := match mNode with | some n => acc1 ++ [n] | none => acc1
              if tw then acc2 ++ [HtmlNode.text " "] else acc2
            else
              acc ++ [HtmlNode.elem t ro ich]
          | some proc => acc ++ [proc])
        []
      let merged := mergeAndCollapseTexts newCh
      let trimmed := trimBlockChildren merged
      some (HtmlNode.root trimmed)
    | HtmlNode.elem tname rawOpen children =>
      let srcChildren := if applyFrameComp then dropBlockSandwichedBrs children else children
      let newCh := srcChildren.foldl
        (fun (acc : List HtmlNode) (ch : HtmlNode) =>
          match processNodePass4CoreT applyFrameComp fuel' ch with
          | none => acc
          | some (HtmlNode.elem t ro ich) =>
            if inlineTags.contains t then
              let (lw, mNode, tw) := hoistAndEjectInline t ro ich
              let acc1 := if lw then acc ++ [HtmlNode.text " "] else acc
              let acc2 := match mNode with | some n => acc1 ++ [n] | none => acc1
              if tw then acc2 ++ [HtmlNode.text " "] else acc2
            else
              acc ++ [HtmlNode.elem t ro ich]
          | some proc => acc ++ [proc])
        []
      let merged := mergeAndCollapseTexts newCh
      let finalCh :=
        if blockTags.contains tname then trimBlockChildren merged
        else merged
      if prunableInlineTags.contains tname && finalCh.isEmpty then
        none
      else if tname == "p" && finalCh.isEmpty then
        none
      else
        some (HtmlNode.elem tname rawOpen finalCh)

def processNodePass4T (fuel : Nat) (node : HtmlNode) : Option HtmlNode :=
  processNodePass4CoreT true fuel node

def processNodePass4 (node : HtmlNode) : Option HtmlNode :=
  processNodePass4T (nodeHeight node + 1) node

/-- Fuel 0 yields the empty string; every descent consumes one fuel unit. -/
def serializeTreeRawT (fuel : Nat) (node : HtmlNode) : String :=
  match fuel with
  | 0 => ""
  | fuel' + 1 =>
    match node with
    | HtmlNode.text s => s
    | HtmlNode.voidNode _ r => r
    | HtmlNode.rawElem _ ro b rc => ro ++ b ++ rc
    | HtmlNode.root children =>
      String.intercalate "" (children.map (serializeTreeRawT fuel'))
    | HtmlNode.elem tname rawOpen children =>
      let inner := String.intercalate "" (children.map (serializeTreeRawT fuel'))
      rawOpen ++ inner ++ "</" ++ tname ++ ">"

def serializeTreeRaw (node : HtmlNode) : String :=
  serializeTreeRawT (nodeHeight node + 1) node

def pass4WhitespaceAndPruneWith (applyFrameComp : Bool) (html : String) : String :=
  let tree := parseWellFormedTree html
  match processNodePass4CoreT applyFrameComp (nodeHeight tree + 1) tree with
  | some t => serializeTreeRaw t
  | none => ""

def pass4WhitespaceAndPrune (html : String) : String :=
  pass4WhitespaceAndPruneWith true html

-- PASS 5 -------------------------------------------------------------------

/- Mutually recursive serialization, one fuel unit per tree level. -/
mutual
  def serializeChildrenPass5T (fuel : Nat) (children : List HtmlNode) : String :=
    match fuel with
    | 0 => ""
    | fuel' + 1 =>
      let rec loop (rem : List HtmlNode) (prevOpt : Option HtmlNode) (prevStr : String) (acc : List String) : String :=
        match rem with
        | [] => String.intercalate "" acc.reverse
        | ch :: rest =>
          let s := serializeNodePass5T fuel' ch
          let acc' :=
            match prevOpt with
            | none => s :: acc
            | some prev =>
              if isBlockNode prev || isBlockNode ch then
                if !prevStr.endsWith "\n" && !s.startsWith "\n" then
                  s :: "\n" :: acc
                else
                  s :: acc
              else
                s :: acc
          loop rest (some ch) s acc'
      loop children none "" []

  def serializeNodePass5T (fuel : Nat) (node : HtmlNode) : String :=
    match fuel with
    | 0 => ""
    | fuel' + 1 =>
      match node with
      | HtmlNode.text s => s
      | HtmlNode.voidNode _ r => r
      | HtmlNode.rawElem _ ro b rc => ro ++ b ++ rc
      | HtmlNode.root children =>
        trimAsciiWs (serializeChildrenPass5T fuel' children)
      | HtmlNode.elem tname rawOpen children =>
        match children with
        | [] => rawOpen ++ "</" ++ tname ++ ">"
        | firstCh :: _ =>
          let inner := serializeChildrenPass5T fuel' children
          let leadNl := if blockTags.contains tname && isBlockNode firstCh then "\n" else ""
          let lastCh := children.getLast!
          let trailNl :=
            if blockTags.contains tname && isBlockNode lastCh then
              match lastCh with
              | HtmlNode.rawElem rt _ _ _ =>
                if rt == "pre" || rt == "script" then "" else "\n"
              | _ => "\n"
            else ""
          rawOpen ++ leadNl ++ inner ++ trailNl ++ "</" ++ tname ++ ">"
end

/-- In the mutual pass-5 pair a parent-to-child descent decrements fuel twice
    (Node -> Children -> Node), so a leaf at depth d is reached with
    `fuel - 2*d`. Starting at `2*height + 1` keeps every leaf at fuel >= 1. -/
def serializeChildrenPass5 (children : List HtmlNode) : String :=
  serializeChildrenPass5T (2 * nodesHeight children + 2) children

def serializeNodePass5 (node : HtmlNode) : String :=
  serializeNodePass5T (2 * nodeHeight node + 1) node

def pass5BlockJoining (html : String) : String :=
  let tree := parseWellFormedTree html
  serializeNodePass5 tree

-- Pipeline / binding interface ---------------------------------------------

structure Stage2Result where
  pass1 : String
  pass2 : String
  pass3 : String
  pass4 : String
  pass5 : String
  output : String

def runWithPasses (stage1Html : String) : Stage2Result :=
  let p1 := pass1FrameAndTagNorm stage1Html
  let p2 := pass2ParagraphUnwrap p1
  let p3 := pass3RepairStack p2
  let p4 := pass4WhitespaceAndPrune p3
  let p5 := pass5BlockJoining p4
  { pass1 := p1, pass2 := p2, pass3 := p3, pass4 := p4, pass5 := p5, output := p5 }

/-- Byte-faithful total port of the original `Stage2.transform`. -/
def transformTotal (html : String) : String :=
  (runWithPasses html).output

/-- Decoupled core: T6 and T11 are applied only when `applyFrameComp` is true. -/
def stage2TidyCore (cfg : Stage2Config) (html : String) : String :=
  let p1 := pass1FrameAndTagNorm html
  let p2 := if cfg.applyFrameComp then Stage2FrameComp.pass2ParagraphUnwrap p1 else p1
  let p3 := pass3RepairStack p2
  let p4 := pass4WhitespaceAndPruneWith cfg.applyFrameComp p3
  let p5 := pass5BlockJoining p4
  p5

end LeanFtml.Proof.Stage2TidyCore
