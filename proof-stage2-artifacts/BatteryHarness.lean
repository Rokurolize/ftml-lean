import LeanFtml.Proof.Stage2TidyCore
namespace Stage2

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

/-- Scan inside a quoted attribute value up to matching `q`. -/
partial def scanQuoted (q : Char) (cs : List Char) (acc : List Char) : Option (List Char × List Char) :=
  match cs with
  | [] => none
  | c :: rest =>
    if c == q then some (acc.reverse, rest)
    else scanQuoted q rest (c :: acc)

/-- Scan tag attributes up to `'>'`, respecting quotes and rejecting unquoted `'<'`. -/
partial def scanTagRest (cs : List Char) (acc : List Char) : Option (List Char × Bool × List Char) :=
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
      scanTagRest afterQ acc'
  | '\'' :: rest =>
    match scanQuoted '\'' rest [] with
    | none => none
    | some (qbody, afterQ) =>
      let acc' := '\'' :: (qbody.reverse ++ ('\'' :: acc))
      scanTagRest afterQ acc'
  | c :: rest =>
    scanTagRest rest (c :: acc)

structure ParsedTag where
  isClose : Bool
  name : String
  attrChars : List Char
  hasSelfSlash : Bool
  rawChars : List Char
  rest : List Char

/-- Attempt to parse an HTML tag starting immediately after `'<'`. -/
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

/-- Scan attributes inside an opening tag and normalize them. -/
partial def parseAndNormAttrs (cs : List Char) (acc : List String) : List String :=
  let cs1 := cs.dropWhile (fun c => isAsciiWs c || c == '/')
  match cs1 with
  | [] => acc.reverse
  | _ =>
    let isKeyChar (c : Char) : Bool :=
      !isAsciiWs c && c != '=' && c != '/' && c != '<' && c != '>'
    let keyCs := cs1.takeWhile isKeyChar
    if keyCs.isEmpty then
      parseAndNormAttrs (cs1.drop 1) acc
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
            parseAndNormAttrs afterQ (item :: acc)
          | none =>
            parseAndNormAttrs [] ((key ++ "=\"") :: acc)
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
            parseAndNormAttrs afterQ (item :: acc)
          | none =>
            parseAndNormAttrs [] ((key ++ "='") :: acc)
        | _ =>
          let isUnqChar (c : Char) : Bool :=
            !isAsciiWs c && c != '"' && c != '\'' && c != '=' && c != '<' && c != '>' && c != '`'
          let valCs := cs4.takeWhile isUnqChar
          let afterV := cs4.dropWhile isUnqChar
          let item := key ++ "=" ++ String.ofList valCs
          parseAndNormAttrs afterV (item :: acc)
      | _ =>
        parseAndNormAttrs cs2 (key :: acc)

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

/-- Scan forward until `</targetTag>` (case-insensitive). -/
partial def scanUntilCloseTag (targetTag : String) (cs : List Char) (bodyAcc : List Char) : (String × String × List Char) :=
  match cs with
  | [] => (String.ofList bodyAcc.reverse, "</" ++ targetTag ++ ">", [])
  | '<' :: afterLt =>
    match tryScanTag afterLt with
    | some pt =>
      if pt.isClose && pt.name == targetTag then
        (String.ofList bodyAcc.reverse, "</" ++ targetTag ++ ">", pt.rest)
      else
        scanUntilCloseTag targetTag afterLt ('<' :: bodyAcc)
    | none =>
      scanUntilCloseTag targetTag afterLt ('<' :: bodyAcc)
  | c :: rest =>
    scanUntilCloseTag targetTag rest (c :: bodyAcc)

-- ============================================================================
-- PASS 1: Frame Stripping, NBSP Normalization, and Tag/Attribute Normalization
-- ============================================================================
partial def pass1Loop (cs : List Char) (acc : List String) : String :=
  match cs with
  | [] => String.intercalate "" acc.reverse
  | '<' :: afterLt =>
    match tryScanTag afterLt with
    | some pt =>
      if pt.isClose then
        pass1Loop pt.rest (("</" ++ pt.name ++ ">") :: acc)
      else if pt.name == "script" then
        let normOpen := normalizeOpenTag pt.name pt.attrChars false
        let (body, closeStr, afterClose) := scanUntilCloseTag "script" pt.rest []
        pass1Loop afterClose ((normOpen ++ body ++ closeStr) :: acc)
      else
        let isVoid := pt.hasSelfSlash || voidTags.contains pt.name
        let normOpen := normalizeOpenTag pt.name pt.attrChars isVoid
        pass1Loop pt.rest (normOpen :: acc)
    | none =>
      pass1Loop afterLt ("<" :: acc)
  | c :: rest =>
    let txtCs := c :: rest.takeWhile (fun x => x != '<')
    let rem := rest.dropWhile (fun x => x != '<')
    pass1Loop rem (String.ofList txtCs :: acc)

def pass1FrameAndTagNorm (html : String) : String :=
  let trimmed := trimAsciiWs html
  let nbspFixed := replaceNbsp trimmed.toList
  pass1Loop nbspFixed []

-- ============================================================================
-- PASS 2: Paragraph Unwrap Around Block & Image Elements
-- ============================================================================
partial def containsUnwrapTrigger (cs : List Char) : Bool :=
  match cs with
  | [] => false
  | '<' :: afterLt =>
    match tryScanTag afterLt with
    | some pt =>
      if !pt.isClose && unwrapPTriggers.contains pt.name then true
      else containsUnwrapTrigger pt.rest
    | none => containsUnwrapTrigger afterLt
  | _ :: rest => containsUnwrapTrigger rest

/-- Scan a `<p>` body tracking block-element nesting depth and whether any
    block pair closes inside the body. Unwrapping is in scope when the body
    is fully balanced (depth 0 at the end) or contains at least one balanced
    block pair; a body whose block starts are all unclosed with no completed
    pair keeps its `<p>` (probe p09, where live closes the paragraph before
    the lone trailing block start; contrast probe in2-x48, whose body holds
    balanced pairs beside its unclosed starts and is unwrapped). -/
partial def unwrapScopeScan (cs : List Char) (depth : Nat) (sawPair : Bool) : (Nat × Bool) :=
  match cs with
  | [] => (depth, sawPair)
  | '<' :: afterLt =>
    match tryScanTag afterLt with
    | some pt =>
      if pt.hasSelfSlash || voidTags.contains pt.name then
        unwrapScopeScan pt.rest depth sawPair
      else if pt.isClose then
        if blockTags.contains pt.name then
          if depth == 0 then unwrapScopeScan pt.rest 0 sawPair
          else unwrapScopeScan pt.rest (depth - 1) true
        else
          unwrapScopeScan pt.rest depth sawPair
      else if blockTags.contains pt.name then
        unwrapScopeScan pt.rest (depth + 1) sawPair
      else
        unwrapScopeScan pt.rest depth sawPair
    | none => unwrapScopeScan afterLt depth sawPair
  | _ :: rest => unwrapScopeScan rest depth sawPair

def unwrapBalanced (bodyCs : List Char) : Bool :=
  let (depth, sawPair) := unwrapScopeScan bodyCs 0 false
  depth == 0 || sawPair

/-- Find the first `</p>` in `cs`, returning `(bodyChars, afterCloseP)`. -/
partial def findFirstCloseP (cs : List Char) (acc : List Char) : Option (List Char × List Char) :=
  match cs with
  | [] => none
  | '<' :: '/' :: 'p' :: '>' :: rest =>
    some (acc.reverse, rest)
  | c :: rest =>
    findFirstCloseP rest (c :: acc)

def consumeTrailingDoubleNl (cs : List Char) : (Bool × List Char) :=
  let ws := cs.takeWhile (fun c => c == ' ' || c == '\t')
  let afterWs := cs.drop ws.length
  match afterWs with
  | '\n' :: '\n' :: rest => (true, rest)
  | _ => (false, cs)

partial def pass2Loop (cs : List Char) (acc : List Char) : String :=
  match cs with
  | [] => String.ofList acc.reverse
  | '<' :: 'p' :: '>' :: afterOpenP =>
    match findFirstCloseP afterOpenP [] with
    | some (bodyCs, afterCloseP) =>
      if containsUnwrapTrigger bodyCs && unwrapBalanced bodyCs then
        let (_, restAfter) := consumeTrailingDoubleNl afterCloseP
        let accWithBody := bodyCs.reverse ++ acc
        pass2Loop restAfter accWithBody
      else
        let seg := "<p>".toList ++ bodyCs ++ "</p>".toList
        pass2Loop afterCloseP (seg.reverse ++ acc)
    | none =>
      pass2Loop afterOpenP ('>' :: 'p' :: '<' :: acc)
  | c :: rest =>
    pass2Loop rest (c :: acc)

def pass2ParagraphUnwrap (html : String) : String :=
  pass2Loop html.toList []

-- ============================================================================
-- PASS 3: Repair-Stack Re-nesting, istack Propagation, Stray-Closer Dropping
-- ============================================================================
inductive HtmlToken where
  | text (s : String)
  | voidTag (name : String) (raw : String)
  | rawElem (name : String) (rawOpen : String) (body : String) (rawClose : String)
  | startTag (name : String) (raw : String)
  | endTag (name : String) (raw : String)
  deriving Repr

partial def tokenizeHtmlLoop (cs : List Char) (acc : List HtmlToken) : List HtmlToken :=
  match cs with
  | [] => acc.reverse
  | '<' :: afterLt =>
    match tryScanTag afterLt with
    | some pt =>
      let rawStr := String.ofList pt.rawChars
      if pt.isClose then
        tokenizeHtmlLoop pt.rest (HtmlToken.endTag pt.name rawStr :: acc)
      else if pt.name == "script" || pt.name == "pre" then
        let (body, closeStr, afterClose) := scanUntilCloseTag pt.name pt.rest []
        tokenizeHtmlLoop afterClose (HtmlToken.rawElem pt.name rawStr body closeStr :: acc)
      else if pt.hasSelfSlash || voidTags.contains pt.name then
        tokenizeHtmlLoop pt.rest (HtmlToken.voidTag pt.name rawStr :: acc)
      else
        tokenizeHtmlLoop pt.rest (HtmlToken.startTag pt.name rawStr :: acc)
    | none =>
      match acc with
      | HtmlToken.text prev :: accRest =>
        tokenizeHtmlLoop afterLt (HtmlToken.text (prev ++ "<") :: accRest)
      | _ =>
        tokenizeHtmlLoop afterLt (HtmlToken.text "<" :: acc)
  | c :: rest =>
    let txtCs := c :: rest.takeWhile (fun x => x != '<')
    let rem := rest.dropWhile (fun x => x != '<')
    let s := String.ofList txtCs
    match acc with
    | HtmlToken.text prev :: accRest =>
      tokenizeHtmlLoop rem (HtmlToken.text (prev ++ s) :: accRest)
    | _ =>
      tokenizeHtmlLoop rem (HtmlToken.text s :: acc)

def tokenizeHtml (html : String) : List HtmlToken :=
  tokenizeHtmlLoop html.toList []

structure OpenEntry where
  actualTag : String
  rawOpen : String
  expectClose : String
  deriving Repr

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
  /-- Index into `istack` from which the next token reopens entries.
      Tidy's `InlineDup1` pointer: one slot per tag, read at flush time so
      later pops still apply. `none` means nothing is scheduled. -/
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
  let rec markFromEnd (rev : List IStackEntry) (done : Bool) (acc : List IStackEntry) : (Bool × List IStackEntry) :=
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

partial def closeInlinesForBlockEnd (st : RepairState) (keepOnIstack : Bool) : RepairState :=
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
      closeInlinesForBlockEnd st2 keepOnIstack
    else
      st
  | [] => st

/-- Returns the depth (0 = top of `openStack`) of the matching open entry, or `none` if out of scope. -/
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

partial def popDepthPopInline (st : RepairState) (count : Nat) : RepairState :=
  match count, st.openStack with
  | 0, _ => st
  | _, [] => st
  | k + 1, top :: rest =>
    let st1 := { st with openStack := rest, outRev := ("</" ++ top.actualTag ++ ">") :: st.outRev }
    let st2 := popInline st1 top.actualTag
    popDepthPopInline st2 k

partial def popDepthNoIstack (st : RepairState) (count : Nat) : RepairState :=
  match count, st.openStack with
  | 0, _ => st
  | _, [] => st
  | k + 1, top :: rest =>
    let st1 := { st with openStack := rest, outRev := ("</" ++ top.actualTag ++ ">") :: st.outRev }
    popDepthNoIstack st1 k

partial def popDepthDeferIstack (st : RepairState) (count : Nat) : RepairState :=
  match count, st.openStack with
  | 0, _ => st
  | _, [] => st
  | k + 1, top :: rest =>
    let st1 := { st with openStack := rest, outRev := ("</" ++ top.actualTag ++ ">") :: st.outRev }
    let st2 :=
      if istackTags.contains top.actualTag then
        { st1 with istack := markDeferredOnIstack st1.istack top.actualTag top.rawOpen }
      else
        st1
    popDepthDeferIstack st2 k

/-- Pop `count` crossed entries for a multi-element crossing (depth >= 2):
    emit their closers innermost-first, clear their istack entries, and
    collect the non-span entries in pop order for deferred reopening.
    Spans are collected nowhere: live drops them. -/
partial def popCrossedForReopen (st : RepairState) (count : Nat) (acc : List OpenEntry) : (RepairState × List OpenEntry) :=
  match count, st.openStack with
  | 0, _ => (st, acc)
  | _, [] => (st, acc)
  | k + 1, top :: rest =>
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

/-- Swap the istack slots of `elementTag` and an older `nodeTag`.
    Tidy `SwitchInline`: both tags occupy one slot, and the current
    element's slot must sit above the end tag's slot. -/
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

/-- One inline end tag, in tidy’s ParseInline order. A matching closer
    pops one istack slot (or through the anchor). A mismatched closer
    whose tag sits below the current element on the istack swaps the two
    slots, schedules a reopen from the current element’s new slot, and is
    retried against the parent. A swap that cannot be made pops the top
    slot, discards the closer, and closes the current element. An anchor
    discards a foreign inline closer and stays open; a closer for an
    anchor closes each descendant first and is not reopened. -/
partial def repairInlineEnd (st : RepairState) (tname : String) (fuel : Nat) : RepairState :=
  if fuel == 0 then st
  else
    match st.openStack with
    | top :: _ =>
      if !inlineTags.contains top.actualTag then st
      else if top.actualTag == tname then
        let st1 := closeOpenTop st
        if tname == "a" then popIstackUntil st1 "a" else popIstackTop st1
      else if tname == "a" then
        repairInlineEnd (closeOpenTop st) tname (fuel - 1)
      else if top.actualTag != "a" && isPushed st tname && isPushed st top.actualTag then
        match switchIstack st.istack top.actualTag tname with
        | some swapped =>
          let st1 := { st with istack := swapped, reopenFrom := findLastTag swapped top.actualTag }
          repairInlineEnd (closeOpenTop st1) tname (fuel - 1)
        | none =>
          -- Swap failed: the end tag is discarded and the current element closes.
          if top.actualTag == "a" then st
          else closeOpenTop (popIstackTop st)
      else if top.actualTag == "a" then st
      else
        -- Mismatched inline closer with no switch: tidy pops the top
        -- istack slot, discards the closer, and closes the current element.
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
    -- 1. Nested <a> rule
    let st1 :=
      if tname == "a" then
        match inScopeDepth st.openStack "a" with
        | some d => popDepthPopInline st (d + 1)
        | none => st
      else st
    -- 2. Block opening inside inline or <p>
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
    -- 3. List item / deflist item opening while inline open
    let st3 :=
      if tname == "li" || tname == "dt" || tname == "dd" then
        match st2.openStack with
        | top :: _ =>
          if inlineTags.contains top.actualTag then closeInlinesForBlockEnd st2 true
          else st2
        | [] => st2
      else st2
    -- 4. Table cell / table scope isolation
    let st4 :=
      if tname == "td" || tname == "th" || tname == "table" then
        { st3 with savedIstacks := st3.istack :: st3.savedIstacks, istack := [] }
      else st3
    -- 5. Push and emit
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
    | none => st -- Stray closer: drop!
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

-- ============================================================================
-- Tree representation for Passes 4 and 5
-- ============================================================================
inductive HtmlNode where
  | text (s : String)
  | voidNode (name : String) (raw : String)
  | rawElem (name : String) (rawOpen : String) (body : String) (rawClose : String)
  | elem (name : String) (rawOpen : String) (children : List HtmlNode)
  | root (children : List HtmlNode)
  deriving Repr, Inhabited

structure TreeFrame where
  name : String
  rawOpen : String
  childrenRev : List HtmlNode

def addNodeToStack (frames : List TreeFrame) (n : HtmlNode) : List TreeFrame :=
  match frames with
  | top :: rest => { top with childrenRev := n :: top.childrenRev } :: rest
  | [] => [{ name := "root", rawOpen := "", childrenRev := [n] }]

partial def unwindTreeFrames (frames : List TreeFrame) : HtmlNode :=
  match frames with
  | [] => HtmlNode.root []
  | [r] => HtmlNode.root r.childrenRev.reverse
  | top :: rest =>
    let node := HtmlNode.elem top.name top.rawOpen top.childrenRev.reverse
    unwindTreeFrames (addNodeToStack rest node)

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

-- ============================================================================
-- PASS 4: Space-Run Collapse, Inline-Edge Hoisting/Ejection, Empty Pruning
-- ============================================================================
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

def hoistAndEjectInline (tname : String) (rawOpen : String) (ich : List HtmlNode) :
    (Bool × Option HtmlNode × Bool) :=
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

/-- Drop a `<br />` whose immediate previous sibling is a table and whose
    next non-whitespace sibling is a table (probe tab-x16). A break between
    a div and a table is kept (probes u3-div-table, u3-br-in-div), and a
    break that is not the literal next sibling of the preceding block is
    kept (probe tab-x36). -/
def dropBlockSandwichedBrs (children : List HtmlNode) : List HtmlNode :=
  let rec nextNonWs (xs : List HtmlNode) : Option HtmlNode :=
    match xs with
    | [] => none
    | n :: rest => if isWsTextNode n then nextNonWs rest else some n
  let rec loop (prev : Option HtmlNode) (xs : List HtmlNode) (acc : List HtmlNode) : List HtmlNode :=
    match xs with
    | [] => acc.reverse
    | n :: rest =>
      if isBrNode n then
        let prevIsTable := match prev with | some p => isTableElem p | none => false
        let nextIsTable := match nextNonWs rest with | some m => isTableElem m | none => false
        if prevIsTable && nextIsTable then
          loop prev rest acc
        else
          loop (some n) rest (n :: acc)
      else
        loop (some n) rest (n :: acc)
  loop none children []

partial def processNodePass4 (node : HtmlNode) : Option HtmlNode :=
  match node with
  | HtmlNode.text _ => some node
  | HtmlNode.voidNode _ _ => some node
  | HtmlNode.rawElem _ _ _ _ => some node
  | HtmlNode.root children =>
    let newCh := (dropBlockSandwichedBrs children).foldl
      (fun (acc : List HtmlNode) (ch : HtmlNode) =>
        match processNodePass4 ch with
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
    let newCh := (dropBlockSandwichedBrs children).foldl
      (fun (acc : List HtmlNode) (ch : HtmlNode) =>
        match processNodePass4 ch with
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

partial def serializeTreeRaw (node : HtmlNode) : String :=
  match node with
  | HtmlNode.text s => s
  | HtmlNode.voidNode _ r => r
  | HtmlNode.rawElem _ ro b rc => ro ++ b ++ rc
  | HtmlNode.root children =>
    String.intercalate "" (children.map serializeTreeRaw)
  | HtmlNode.elem tname rawOpen children =>
    let inner := String.intercalate "" (children.map serializeTreeRaw)
    rawOpen ++ inner ++ "</" ++ tname ++ ">"

def pass4WhitespaceAndPrune (html : String) : String :=
  let tree := parseWellFormedTree html
  match processNodePass4 tree with
  | some t => serializeTreeRaw t
  | none => ""

-- ============================================================================
-- PASS 5: Block Joining and Canonical Inter-Tag Newline Layout
-- ============================================================================
mutual
partial def serializeChildrenPass5 (children : List HtmlNode) : String :=
  let rec loop (rem : List HtmlNode) (prevOpt : Option HtmlNode) (prevStr : String) (acc : List String) : String :=
    match rem with
    | [] => String.intercalate "" acc.reverse
    | ch :: rest =>
      let s := serializeNodePass5 ch
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

partial def serializeNodePass5 (node : HtmlNode) : String :=
  match node with
  | HtmlNode.text s => s
  | HtmlNode.voidNode _ r => r
  | HtmlNode.rawElem _ ro b rc => ro ++ b ++ rc
  | HtmlNode.root children =>
    trimAsciiWs (serializeChildrenPass5 children)
  | HtmlNode.elem tname rawOpen children =>
    match children with
    | [] => rawOpen ++ "</" ++ tname ++ ">"
    | firstCh :: _ =>
      let inner := serializeChildrenPass5 children
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

def pass5BlockJoining (html : String) : String :=
  let tree := parseWellFormedTree html
  serializeNodePass5 tree

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

def transform (stage1Html : String) : String :=
  (runWithPasses stage1Html).output

end Stage2
open LeanFtml.Proof.Stage2TidyCore
namespace BatteryHarness

def cases : List (String × String × String) := [
  ("p01-span-color-size-cross", "<p><span style=\"color: red\">A <span style=\"font-size:120%;\">B</span> C</span></p>\n\n", "<p><span style=\"color: red\">A <span style=\"font-size:120%;\">B</span> C</span></p>"),
  ("p02-size-color-cross-rev", "<p><span style=\"font-size:120%;\">A <span style=\"color: red\">B</span> C</span></p>\n\n", "<p><span style=\"font-size:120%;\">A <span style=\"color: red\">B</span> C</span></p>"),
  ("p03-color-strike-cross", "<p><span style=\"color: blue\">A <span style=\"text-decoration: line-through;\">B</span> C</span></p>\n\n", "<p><span style=\"color: blue\">A <span style=\"text-decoration: line-through;\">B</span> C</span></p>"),
  ("p04-strike-color-cross", "<p><span style=\"text-decoration: line-through;\">A <span style=\"color: blue\">B</span> C</span></p>\n\n", "<p><span style=\"text-decoration: line-through;\">A <span style=\"color: blue\">B</span> C</span></p>"),
  ("p05-size-strike-cross", "<p><span style=\"font-size:110%;\">A <span style=\"text-decoration: line-through;\">B</span> C</span></p>\n\n", "<p><span style=\"font-size:110%;\">A <span style=\"text-decoration: line-through;\">B</span> C</span></p>"),
  ("p06-strike-size-cross", "<p><span style=\"text-decoration: line-through;\">A <span style=\"font-size:110%;\">B</span> C</span></p>\n\n", "<p><span style=\"text-decoration: line-through;\">A <span style=\"font-size:110%;\">B</span> C</span></p>"),
  ("p07-span-u-strike-3way", "<p><span class=\"s\">A <span style=\"text-decoration: underline;\">B <span style=\"text-decoration: line-through;\">C</span> D</span> E</span></p>\n\n", "<p><span class=\"s\">A <span style=\"text-decoration: underline;\">B <span style=\"text-decoration: line-through;\">C</span> D</span> E</span></p>"),
  ("p08-color-size-u-strike-4way", "<p><span style=\"font-size:120%;\">A <span style=\"color: red\">B <span style=\"text-decoration: underline;\">C <span style=\"text-decoration: line-through;\">D</span> E</span> F</span> G</span></p>\n\n", "<p><span style=\"font-size:120%;\">A <span style=\"color: red\">B <span style=\"text-decoration: underline;\">C <span style=\"text-decoration: line-through;\">D</span> E</span> F</span> G</span></p>"),
  ("p09-div-divalign-swap", "<div  class=\"a\"><p>A<br />\n<div style=\"text-align: center;\"></p>\n\n<p>B</p>\n\n</div><br />\nC<p></div></p>\n\n", "<div class=\"a\">\n<p>A<br /></p>\n<div style=\"text-align: center;\">\n<p>B</p>\n</div>\n<br />\nC</div>"),
  ("p10-div-note-swap", "<div  class=\"a\"><p>A</p>\n\n<div class=\"wiki-note\"><p>B</p>\n\n</div><br />\nC</div>", "<div class=\"a\">\n<p>A</p>\n<div class=\"wiki-note\">\n<p>B</p>\n</div>\n<br />\nC</div>"),
  ("p11-nested-a-unnest", "<p><a href=\"/outer\">before </a><a href=\"/inner\">mid</a> after</p>\n\n", "<p><a href=\"/outer\">before</a> <a href=\"/inner\">mid</a> after</p>"),
  ("p12-strong-em-tt-3way", "<p><strong>A <em>B <tt>C</strong> D</em> E</tt></p>\n\n", "<p><strong>A <em>B <tt>C</tt></em> <tt><em>D</em> E</tt></strong></p>"),
  ("p13-sup-sub-strong-3way", "<p><sup>A <sub>B <strong>C</sup> D</sub> E</strong></p>\n\n", "<p><sup>A <sub>B <strong>C</strong></sub> <strong><sub>D</sub> E</strong></sup></p>"),
  ("p14-color-strong-size-mixed", "<p><span style=\"color: red\">A <strong>B <span style=\"font-size:120%;\">C</span> D</strong> E</span></p>\n\n", "<p><span style=\"color: red\">A <strong>B <span style=\"font-size:120%;\">C</span> D</strong> E</span></p>"),
  ("p15-strong-color-em-size", "<p><strong>A <span style=\"color: red\">B <em>C <span style=\"font-size:120%;\">D</strong> E</span> F</em> G</span></p>\n\n", "<p><strong>A <span style=\"color: red\">B <em>C <span style=\"font-size:120%;\">D</span></em></span> <em>E</em></strong> <em>F</em> G</p>"),
  ("p16-istack-popinline-switch", "<p><span style=\"color: red\"><strong><em><span style=\"text-decoration: underline;\">text</span>1</strong>2</em>3</span>4</p>\n\n", "<p><span style=\"color: red\"><strong><em><span style=\"text-decoration: underline;\">text</span>1</em>2</strong>3</span>4</p>"),
  ("p17-reopen-leading-space", "<p><strong>OUTER <em>INNER</strong> TAIL</em></p>\n\n", "<p><strong>OUTER <em>INNER</em></strong> <em>TAIL</em></p>"),
  ("p18-strike-cross-native-list", "<ul>\n<li><span style=\"text-decoration: line-through;\">item1</li>\n<li>item2</span></li>\n<li>item3</li>\n</ul>", "<ul>\n<li><span style=\"text-decoration: line-through;\">item1</span></li>\n<li><span style=\"text-decoration: line-through;\">item2</span></li>\n<li>item3</li>\n</ul>"),
  ("p19-em-strong-cross-list", "<ul>\n<li><strong><em>item1</li>\n<li>item2</em></li>\n<li>item3</strong></li>\n</ul>", "<ul>\n<li><strong><em>item1</em></strong></li>\n<li><strong><em>item2</em></strong></li>\n<li><strong>item3</strong></li>\n</ul>"),
  ("p20-span-cross-deflist", "<dl>\n<dt><span class=\"k\">term1</dt>\n<dd>def1</dd>\n<dt>term2</dt>\n<dd>def2</span></dd>\n</dl>\n", "<dl>\n<dt><span class=\"k\">term1</span></dt>\n<dd><span class=\"k\">def1</span></dd>\n<dt><span class=\"k\">term2</span></dt>\n<dd><span class=\"k\">def2</span></dd>\n</dl>"),
  ("p21-strike-cross-simple-cell", "<table class=\"wiki-content-table\">\n<tr>\n<td><span style=\"text-decoration: line-through;\">A1</td>\n<td>B2</span></td>\n<td>C3</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td><span style=\"text-decoration: line-through;\">A1</span></td>\n<td>B2</td>\n<td>C3</td>\n</tr>\n</table>"),
  ("p22-em-cross-th-td", "<table class=\"wiki-content-table\">\n<tr>\n<th><em>H1</th>\n<td>D2</em></td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<th><em>H1</em></th>\n<td>D2</td>\n</tr>\n</table>"),
  ("p23-color-cross-adv-cell", "<table>\n<tr>\n<td><span style=\"color: red\">A1</td>\n<td>B2</span></td>\n</tr>\n</table>", "<table>\n<tr>\n<td><span style=\"color: red\">A1</span></td>\n<td>B2</td>\n</tr>\n</table>"),
  ("p24-unclosed-overclosed-div-table", "<table class=\"wiki-content-table\">\n<tr>\n<td></td>\n</tr>\n</table><p>unclosed || b ||</p>\n\n</div><br />\ntail", "<table class=\"wiki-content-table\">\n<tr>\n<td></td>\n</tr>\n</table>\n<p>unclosed || b ||</p>\n<br />\ntail"),
  ("p25-span-cross-div-boundary", "<p><span class=\"s\">before</p>\n\n<div  class=\"d\"><p>inside</p>\n\n</div><br />\nafter</span>", "<p><span class=\"s\">before</span></p>\n<div class=\"d\">\n<p><span class=\"s\">inside</span></p>\n</div>\n<span class=\"s\"><br />\nafter</span>"),
  ("p26-space-runs-flow-and-inline", "<p>a b c <strong>d e</strong> <span style=\"color: red\">f g</span> h</p>\n\n", "<p>a b c <strong>d e</strong> <span style=\"color: red\">f g</span> h</p>"),
  ("p27-space-around-br-and-closer", "<p>x<span style=\"text-decoration: line-through;\">a<br />\nb<br />\n</span>y</p>\n\n", "<p>x<span style=\"text-decoration: line-through;\">a<br />\nb<br /></span> y</p>"),
  ("p28-space-preserved-pre-and-raw", "<p>flow spaces</p>\n\n<p><span style=\"white-space: pre-wrap;\">raw&#32;&#32;&#32;spaces</span></p>\n\n\n<div class=\"code\">\n<pre><code>code   spaces    with    tab</code></pre></div>\n\n", "<p>flow spaces</p>\n<p><span style=\"white-space: pre-wrap;\">raw&#32;&#32;&#32;spaces</span></p>\n<div class=\"code\">\n<pre><code>code   spaces    with    tab</code></pre></div>"),
  ("p29-unwrap-image-table-dl", "<p>lead <img src=\"http://example.com/a.png\" alt=\"a.png\" class=\"image\" /> mid</p>\n\n<p>text<br />\n<table class=\"wiki-content-table\">\n<tr>\n<td>c1</td>\n<td>c2</td>\n</tr>\n</table></p>\n\n<p>term-lead<br />\n<dl>\n<dt>t</dt>\n<dd>d</dd>\n</dl>\n</p>\n\n<p>after</p>\n\n", "lead <img src=\"http://example.com/a.png\" alt=\"a.png\" class=\"image\" /> midtext<br />\n<table class=\"wiki-content-table\">\n<tr>\n<td>c1</td>\n<td>c2</td>\n</tr>\n</table>\nterm-lead<br />\n<dl>\n<dt>t</dt>\n<dd>d</dd>\n</dl>\n<p>after</p>"),
  ("p30-p-survives-around-div-list", "<p>lead</p>\n\n<div  class=\"d\"><p>in-div</p>\n\n</div><br />\nmid<ul>\n<li>li1</li>\n<li>li2</li>\n</ul><p>tail</p>\n\n", "<p>lead</p>\n<div class=\"d\">\n<p>in-div</p>\n</div>\n<br />\nmid\n<ul>\n<li>li1</li>\n<li>li2</li>\n</ul>\n<p>tail</p>"),
  ("p31-empty-prune-vs-keep", "<p><span style=\"color: red\"></span></p>\n\n<div  class=\"empty-kept\"></div><p><a name=\"anchor-kept\"></a><br />\n<a href=\"/empty-kept\"></a></p>\n\n<hr />\n", "<div class=\"empty-kept\"></div>\n<p><a name=\"anchor-kept\"></a><br />\n<a href=\"/empty-kept\"></a></p>\n<hr />"),
  ("p32-block-joining-matrix", "<p>para1</p>\n\n<p>para2</p>\n\n<table class=\"wiki-content-table\">\n<tr>\n<td>t1</td>\n</tr>\n</table><ul>\n<li>l1</li>\n</ul><blockquote><p>q1</p>\n\n</blockquote>\n\n<h1 id=\"toc0\"><span>H1</span></h1>\n<div  class=\"d\"><p>d1</p>\n\n</div>", "<p>para1</p>\n<p>para2</p>\n<table class=\"wiki-content-table\">\n<tr>\n<td>t1</td>\n</tr>\n</table>\n<ul>\n<li>l1</li>\n</ul>\n<blockquote>\n<p>q1</p>\n</blockquote>\n<h1 id=\"toc0\"><span>H1</span></h1>\n<div class=\"d\">\n<p>d1</p>\n</div>"),
  ("p33-nbsp-vs-numeric-entities", "<p><span style=\"font-size:120%;\">a b</span> &#8212; c &#8230; 12&#160;kg &#171;guillemet&#187;</p>\n\n", "<p><span style=\"font-size:120%;\">a&nbsp;b</span> &#8212; c &#8230; 12&#160;kg &#171;guillemet&#187;</p>"),
  ("p34-div-tag-attr-whitespace", "<div  class=\"a\" id=\"u-b\" style=\"color:green\"><div >plain-scored</div></div>", "<div class=\"a\" id=\"u-b\" style=\"color:green\">\n<div>plain-scored</div>\n</div>"),
  ("q02-p17-outer-span", "<p><span style=\"color: red\"><strong>A <em>B</strong> C</em> D</span></p>\n\n", "<p><span style=\"color: red\"><strong>A <em>B</em></strong> <em>C</em> D</span></p>"),
  ("q03-p17-tt-child", "<p><strong>A <em>B <tt>t</tt> C</strong> D</em></p>\n\n", "<p><strong>A <em>B <tt>t</tt> C</em></strong> <em>D</em></p>"),
  ("q04-p16-no-uchild", "<p><span style=\"color: red\"><strong><em>text</span>1</strong>2</em>3&#160;4</p>\n\n", "<p><span style=\"color: red\"><strong><em>text</em></strong><em><strong>1</strong>2</em>3&#160;4</span></p>"),
  ("q05-sup-strong-cross", "<p>^^A <strong>B ^^ C</strong></p>\n\n", "<p>^^A <strong>B ^^ C</strong></p>"),
  ("q06-strong-color-cross", "<p><strong>A <span style=\"color: red\">B</strong> C</span></p>\n\n", "<p><strong>A <span style=\"color: red\">B</span></strong> <span style=\"color: red\">C</span></p>"),
  ("q07-color-em-cross", "<p><span style=\"color: red\">A <em>B</span> C</em></p>\n\n", "<p><span style=\"color: red\">A <em>B</em></span> <em>C</em></p>"),
  ("q08-em-color-cross", "<p><em>A <span style=\"color: red\">B</em> C</span></p>\n\n", "<p><em>A <span style=\"color: red\">B</span></em> <span style=\"color: red\">C</span></p>"),
  ("q09-span-strong-span-cross", "<p><span class=\"k\">A <strong>B <span class=\"m\">C</span> D</strong> E</span></p>\n\n", "<p><span class=\"k\">A <strong>B <span class=\"m\">C</span> D</strong> E</span></p>"),
  ("q10-anchor-strong-cross", "<p><a href=\"/x\">A <strong>B</a> C</strong></p>\n\n", "<p><a href=\"/x\">A <strong>B</strong></a> C</p>"),
  ("q11-text-list-samepara", "<p>text</p>\n\n<ul>\n<li>li1</li>\n<li>li2</li>\n</ul>", "<p>text</p>\n<ul>\n<li>li1</li>\n<li>li2</li>\n</ul>"),
  ("q12-text-quote-samepara", "<p>text</p>\n\n<blockquote><p>quote</p>\n\n</blockquote>\n", "<p>text</p>\n<blockquote>\n<p>quote</p>\n</blockquote>"),
  ("q13-text-heading-samepara", "<p>text</p>\n\n\n<h1 id=\"toc0\"><span>Heading</span></h1>\n", "<p>text</p>\n<h1 id=\"toc0\"><span>Heading</span></h1>"),
  ("q14-text-code-samepara", "<p>text</p>\n\n\n<div class=\"code\">\n<pre><code>x</code></pre></div>\n\n", "<p>text</p>\n<div class=\"code\">\n<pre><code>x</code></pre></div>"),
  ("q15-text-hr-samepara", "<p>text</p>\n\n<hr />\n<p>after</p>\n\n", "<p>text</p>\n<hr />\n<p>after</p>"),
  ("q16-div-p-div", "<div  class=\"a\"><p>A</p>\n\n<div  class=\"b\"><p>B</p>\n\n</div><br />\nC</div>", "<div class=\"a\">\n<p>A</p>\n<div class=\"b\">\n<p>B</p>\n</div>\n<br />\nC</div>"),
  ("q17-img-para-then-text", "<img src=\"http://example.com/a.png\" alt=\"a.png\" class=\"image\" /><p>text</p>\n\n", "<img src=\"http://example.com/a.png\" alt=\"a.png\" class=\"image\" />\n<p>text</p>"),
  ("q18-two-img-paras", "<img src=\"http://example.com/a.png\" alt=\"a.png\" class=\"image\" /> mid<img src=\"http://example.com/b.png\" alt=\"b.png\" class=\"image\" /> tail", "<img src=\"http://example.com/a.png\" alt=\"a.png\" class=\"image\" /> mid<img src=\"http://example.com/b.png\" alt=\"b.png\" class=\"image\" /> tail"),
  ("q20-color-across-paras", "<p>##red|aaa</p>\n\n<p>bbb## ccc</p>\n\n", "<p>##red|aaa</p>\n<p>bbb## ccc</p>"),
  ("q21-stray-div-closer", "<p>[[/div]]<br />\ntext</p>\n\n", "<p>[[/div]]<br />\ntext</p>"),
  ("q22-stray-span-closer", "<p>text<br />\n[[/span]]</p>\n\n", "<p>text<br />\n[[/span]]</p>"),
  ("q23-unclosed-div", "<p>[[div class=&quot;a&quot;]]<br />\ntext</p>\n\n", "<p>[[div class=&quot;a&quot;]]<br />\ntext</p>"),
  ("q24-unclosed-strong-color", "<p>**a ##red|b</p>\n\n", "<p>**a ##red|b</p>"),
  ("q25-heading-cross", "\n<h1 id=\"toc0\"><span><strong>A <em>B</strong> C</em></span></h1>\n", "<h1 id=\"toc0\"><span><strong>A <em>B</em></strong> <em>C</em></span></h1>"),
  ("q26-quote-cross", "<blockquote><p><strong>A <em>B</strong> C</em></p>\n\n</blockquote>\n", "<blockquote>\n<p><strong>A <em>B</em></strong> <em>C</em></p>\n</blockquote>"),
  ("q27-span-attrs-ic", "<p><span id=\"u-i\" class=\"c\" style=\"color:red\">x</span></p>\n\n", "<p><span id=\"u-i\" class=\"c\" style=\"color:red\">x</span></p>"),
  ("q28-span-attrs-ci", "<p><span id=\"u-i\" class=\"c\">x</span></p>\n\n", "<p><span id=\"u-i\" class=\"c\">x</span></p>"),
  ("q31-bib-tail-simple", "<div class=\"bibitems\"><div class=\"title\">Bibliography</div><div class=\"bibitem\" id=\"bibitem-1\">1. A</div></div><p>tail<sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></p>\n\n<div class=\"footnotes-footer\"><div class=\"title\">Footnotes</div><div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. note</div></div>", "<div class=\"bibitems\">\n<div class=\"title\">Bibliography</div>\n<div class=\"bibitem\" id=\"bibitem-1\">1. A</div>\n</div>\n<p>tail<sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></p>\n<div class=\"footnotes-footer\">\n<div class=\"title\">Footnotes</div>\n<div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. note</div>\n</div>"),
  ("in2-x01", "<p><span style=\"color: red\">a<strong>ab</span>ba</strong></p>\n\n", "<p><span style=\"color: red\">a<strong>ab</strong></span><strong>ba</strong></p>"),
  ("in2-x02", "<p><span style=\"color: red\">a<em>ab</span>ba</em></p>\n\n", "<p><span style=\"color: red\">a<em>ab</em></span><em>ba</em></p>"),
  ("in2-x03", "<p><span style=\"color: red\">a<span style=\"text-decoration: underline;\">ab</span>ba</span></p>\n\n", "<p><span style=\"color: red\">a<span style=\"text-decoration: underline;\">ab</span>ba</span></p>"),
  ("in2-x04", "<p><span style=\"color: red\">a<span style=\"text-decoration: line-through;\">ab</span>ba</span></p>\n\n", "<p><span style=\"color: red\">a<span style=\"text-decoration: line-through;\">ab</span>ba</span></p>"),
  ("in2-x05", "<p><strong>a<span style=\"color: red\">ab</strong>ba</span></p>\n\n", "<p><strong>a<span style=\"color: red\">ab</span></strong><span style=\"color: red\">ba</span></p>"),
  ("in2-x06", "<p><strong>a<em>ab</strong>ba</em></p>\n\n", "<p><strong>a<em>ab</em></strong><em>ba</em></p>"),
  ("in2-x07", "<p><strong>a<span style=\"text-decoration: underline;\">ab</strong>ba</span></p>\n\n", "<p><strong>a<span style=\"text-decoration: underline;\">ab</span></strong><span style=\"text-decoration: underline;\">ba</span></p>"),
  ("in2-x08", "<p><strong>a<span style=\"text-decoration: line-through;\">ab</strong>ba</span></p>\n\n", "<p><strong>a<span style=\"text-decoration: line-through;\">ab</span></strong><span style=\"text-decoration: line-through;\">ba</span></p>"),
  ("in2-x09", "<p><em>a<span style=\"color: red\">ab</em>ba</span></p>\n\n", "<p><em>a<span style=\"color: red\">ab</span></em><span style=\"color: red\">ba</span></p>"),
  ("in2-x10", "<p><em>a<strong>ab</em>ba</strong></p>\n\n", "<p><em>a<strong>ab</strong></em><strong>ba</strong></p>"),
  ("in2-x11", "<p><em>a<span style=\"text-decoration: underline;\">ab</em>ba</span></p>\n\n", "<p><em>a<span style=\"text-decoration: underline;\">ab</span></em><span style=\"text-decoration: underline;\">ba</span></p>"),
  ("in2-x12", "<p><em>a<span style=\"text-decoration: line-through;\">ab</em>ba</span></p>\n\n", "<p><em>a<span style=\"text-decoration: line-through;\">ab</span></em><span style=\"text-decoration: line-through;\">ba</span></p>"),
  ("in2-x13", "<p><span style=\"text-decoration: underline;\">a<span style=\"color: red\">ab</span>ba</span></p>\n\n", "<p><span style=\"text-decoration: underline;\">a<span style=\"color: red\">ab</span>ba</span></p>"),
  ("in2-x14", "<p><span style=\"text-decoration: underline;\">a<strong>ab</span>ba</strong></p>\n\n", "<p><span style=\"text-decoration: underline;\">a<strong>ab</strong></span><strong>ba</strong></p>"),
  ("in2-x15", "<p><span style=\"text-decoration: underline;\">a<em>ab</span>ba</em></p>\n\n", "<p><span style=\"text-decoration: underline;\">a<em>ab</em></span><em>ba</em></p>"),
  ("in2-x16", "<p><span style=\"text-decoration: underline;\">a<span style=\"text-decoration: line-through;\">ab</span>ba</span></p>\n\n", "<p><span style=\"text-decoration: underline;\">a<span style=\"text-decoration: line-through;\">ab</span>ba</span></p>"),
  ("in2-x17", "<p><span style=\"text-decoration: line-through;\">a<span style=\"color: red\">ab</span>ba</span></p>\n\n", "<p><span style=\"text-decoration: line-through;\">a<span style=\"color: red\">ab</span>ba</span></p>"),
  ("in2-x18", "<p><span style=\"text-decoration: line-through;\">a<strong>ab</span>ba</strong></p>\n\n", "<p><span style=\"text-decoration: line-through;\">a<strong>ab</strong></span><strong>ba</strong></p>"),
  ("in2-x19", "<p><span style=\"text-decoration: line-through;\">a<em>ab</span>ba</em></p>\n\n", "<p><span style=\"text-decoration: line-through;\">a<em>ab</em></span><em>ba</em></p>"),
  ("in2-x20", "<p><span style=\"text-decoration: line-through;\">a<span style=\"text-decoration: underline;\">ab</span>ba</span></p>\n\n", "<p><span style=\"text-decoration: line-through;\">a<span style=\"text-decoration: underline;\">ab</span>ba</span></p>"),
  ("in2-x21", "<p><span style=\"color: red\">a<strong>ab</strong>ba</span></p>\n\n", "<p><span style=\"color: red\">a<strong>ab</strong>ba</span></p>"),
  ("in2-x22", "<p><span style=\"color: red\">a<em>ab</em>ba</span></p>\n\n", "<p><span style=\"color: red\">a<em>ab</em>ba</span></p>"),
  ("in2-x23", "<p><span style=\"color: red\">a<span style=\"text-decoration: underline;\">ab</span>ba</span></p>\n\n", "<p><span style=\"color: red\">a<span style=\"text-decoration: underline;\">ab</span>ba</span></p>"),
  ("in2-x24", "<p><span style=\"color: red\">a<span style=\"text-decoration: line-through;\">ab</span>ba</span></p>\n\n", "<p><span style=\"color: red\">a<span style=\"text-decoration: line-through;\">ab</span>ba</span></p>"),
  ("in2-x25", "<p><strong>a<span style=\"color: red\">ab</span>ba</strong></p>\n\n", "<p><strong>a<span style=\"color: red\">ab</span>ba</strong></p>"),
  ("in2-x26", "<p><strong>a<em>ab</em>ba</strong></p>\n\n", "<p><strong>a<em>ab</em>ba</strong></p>"),
  ("in2-x27", "<p><strong>a<span style=\"text-decoration: underline;\">ab</span>ba</strong></p>\n\n", "<p><strong>a<span style=\"text-decoration: underline;\">ab</span>ba</strong></p>"),
  ("in2-x28", "<p><strong>a<span style=\"text-decoration: line-through;\">ab</span>ba</strong></p>\n\n", "<p><strong>a<span style=\"text-decoration: line-through;\">ab</span>ba</strong></p>"),
  ("in2-x29", "<p><em>a<span style=\"color: red\">ab</span>ba</em></p>\n\n", "<p><em>a<span style=\"color: red\">ab</span>ba</em></p>"),
  ("in2-x30", "<p><em>a<strong>ab</strong>ba</em></p>\n\n", "<p><em>a<strong>ab</strong>ba</em></p>"),
  ("in2-x31", "<p><em>a<span style=\"text-decoration: underline;\">ab</span>ba</em></p>\n\n", "<p><em>a<span style=\"text-decoration: underline;\">ab</span>ba</em></p>"),
  ("in2-x32", "<p><em>a<span style=\"text-decoration: line-through;\">ab</span>ba</em></p>\n\n", "<p><em>a<span style=\"text-decoration: line-through;\">ab</span>ba</em></p>"),
  ("in2-x33", "<p><span style=\"text-decoration: underline;\">a<span style=\"color: red\">ab</span>ba</span></p>\n\n", "<p><span style=\"text-decoration: underline;\">a<span style=\"color: red\">ab</span>ba</span></p>"),
  ("in2-x34", "<p><span style=\"text-decoration: underline;\">a<strong>ab</strong>ba</span></p>\n\n", "<p><span style=\"text-decoration: underline;\">a<strong>ab</strong>ba</span></p>"),
  ("in2-x35", "<p><span style=\"text-decoration: underline;\">a<em>ab</em>ba</span></p>\n\n", "<p><span style=\"text-decoration: underline;\">a<em>ab</em>ba</span></p>"),
  ("in2-x36", "<p><span style=\"text-decoration: underline;\">a<span style=\"text-decoration: line-through;\">ab</span>ba</span></p>\n\n", "<p><span style=\"text-decoration: underline;\">a<span style=\"text-decoration: line-through;\">ab</span>ba</span></p>"),
  ("in2-x37", "<p><span style=\"text-decoration: line-through;\">a<span style=\"color: red\">ab</span>ba</span></p>\n\n", "<p><span style=\"text-decoration: line-through;\">a<span style=\"color: red\">ab</span>ba</span></p>"),
  ("in2-x38", "<p><span style=\"text-decoration: line-through;\">a<strong>ab</strong>ba</span></p>\n\n", "<p><span style=\"text-decoration: line-through;\">a<strong>ab</strong>ba</span></p>"),
  ("in2-x39", "<p><span style=\"text-decoration: line-through;\">a<em>ab</em>ba</span></p>\n\n", "<p><span style=\"text-decoration: line-through;\">a<em>ab</em>ba</span></p>"),
  ("in2-x40", "<p><span style=\"text-decoration: line-through;\">a<span style=\"text-decoration: underline;\">ab</span>ba</span></p>\n\n", "<p><span style=\"text-decoration: line-through;\">a<span style=\"text-decoration: underline;\">ab</span>ba</span></p>"),
  ("in2-x41", "<p><span style=\"color: red\">a**b<em>c<span style=\"text-decoration: underline;\">d<span style=\"text-decoration: line-through;\">e</span>d</span>c</em>b</span>a</p>\n\n", "<p><span style=\"color: red\">a**b<em>c<span style=\"text-decoration: underline;\">d<span style=\"text-decoration: line-through;\">e</span>d</span>c</em>b</span>a</p>"),
  ("in2-x42", "<p><span style=\"color: red\"><strong><em><span style=\"text-decoration: underline;\">&#8212;text</span>end</strong>end</em>end</span>end</p>\n\n", "<p><span style=\"color: red\"><strong><em><span style=\"text-decoration: underline;\">&#8212;text</span>end</em>end</strong>end</span>end</p>"),
  ("in2-x43", "<p><strong>a</strong> <strong>b</strong> <em>c</em> <em>d</em> <span style=\"text-decoration: underline;\">e</span> <span style=\"text-decoration: underline;\">f</span> <span style=\"text-decoration: line-through;\">g</span> <span style=\"text-decoration: line-through;\">h</span></p>\n\n", "<p><strong>a</strong> <strong>b</strong> <em>c</em> <em>d</em> <span style=\"text-decoration: underline;\">e</span> <span style=\"text-decoration: underline;\">f</span> <span style=\"text-decoration: line-through;\">g</span> <span style=\"text-decoration: line-through;\">h</span></p>"),
  ("in2-x44", "<p><strong>bold<br />\na<em>italic<br />\nb</em>c</strong></p>\n\n", "<p><strong>bold<br />\na<em>italic<br />\nb</em>c</strong></p>"),
  ("in2-x45", "<p>**bold</p>\n\n<p>across**</p>\n\n", "<p>**bold</p>\n<p>across**</p>"),
  ("in2-x46", "<p>##red|color</p>\n\n<p>span##</p>\n\n", "<p>##red|color</p>\n<p>span##</p>"),
  ("in2-x47", "<p><strong>a[[div]]b</strong>c[[/div]]</p>\n\n", "<p><strong>a[[div]]b</strong>c[[/div]]</p>"),
  ("in2-x48", "<p>__a<div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div><div class=\"collapsible-block-content\"></p>\n\n<p>b__c</p>\n\n</div></div></div>", "__a\n<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div>\n<div class=\"collapsible-block-content\">\n<p>b__c</p>\n</div>\n</div>\n</div>"),
  ("in2-x49", "<table class=\"wiki-content-table\">\n<tr>\n<td>header</td>\n<td>header</td>\n</tr>\n</table><p>| <strong>a | b</strong> |<br />\n| c | d |</p>\n\n", "<table class=\"wiki-content-table\">\n<tr>\n<td>header</td>\n<td>header</td>\n</tr>\n</table>\n<p>| <strong>a | b</strong> |<br />\n| c | d |</p>"),
  ("in2-x50", "<table class=\"wiki-content-table\">\n<tr>\n<td>header</td>\n<td>header</td>\n</tr>\n</table><p>| <span style=\"text-decoration: line-through;\">a | b</span> |<br />\n| c | d |</p>\n\n", "<table class=\"wiki-content-table\">\n<tr>\n<td>header</td>\n<td>header</td>\n</tr>\n</table>\n<p>| <span style=\"text-decoration: line-through;\">a | b</span> |<br />\n| c | d |</p>"),
  ("in2-x51", "<p><a href=\"https://example.com\">**b** //i// __u__ --s-- ##red|c##</a></p>\n\n", "<p><a href=\"https://example.com\">**b** //i// __u__ --s-- ##red|c##</a></p>"),
  ("in2-x52", "<p>[<a href=\"https://example.com|**b**\">//i// __u__ --s-- ##red|c##</a>]</p>\n\n", "<p>[<a href=\"https://example.com|**b**\">//i// __u__ --s-- ##red|c##</a>]</p>"),
  ("in2-x53", "<p style=\"text-align: center;\"><strong>b</strong> <em>i</em> <span style=\"text-decoration: underline;\">u</span> <span style=\"text-decoration: line-through;\">s</span> <span style=\"color: red\">c</span> =</p>", "<p style=\"text-align: center;\"><strong>b</strong> <em>i</em> <span style=\"text-decoration: underline;\">u</span> <span style=\"text-decoration: line-through;\">s</span> <span style=\"color: red\">c</span> =</p>"),
  ("in2-x54", "<p><em>example.com/path</em> and <a href=\"https://example.com//tail\">https://example.com//tail</a></p>\n\n", "<p><em>example.com/path</em> and <a href=\"https://example.com//tail\">https://example.com//tail</a></p>"),
  ("in2-x55", "<p>a &#8212; b &#8230; // c ** d __ e ##red|f</p>\n\n", "<p>a &#8212; b &#8230; // c ** d __ e ##red|f</p>"),
  ("in2-x56", "<p><strong>*b</strong>* <em>/i</em>/ <span style=\"text-decoration: underline;\">_u</span>_ <span style=\"text-decoration: line-through;\">-s</span>- <span style=\"color: #red\">t</span>#</p>\n\n", "<p><strong>*b</strong>* <em>/i</em>/ <span style=\"text-decoration: underline;\">_u</span>_ <span style=\"text-decoration: line-through;\">-s</span>- <span style=\"color: #red\">t</span>#</p>"),
  ("in2-x57", "<p><strong>a</strong><strong>b</strong> <em>c</em><em>d</em> <span style=\"text-decoration: underline;\">e</span><span style=\"text-decoration: underline;\">f</span> <span style=\"text-decoration: line-through;\">g</span><span style=\"text-decoration: line-through;\">h</span></p>\n\n", "<p><strong>a</strong><strong>b</strong> <em>c</em><em>d</em> <span style=\"text-decoration: underline;\">e</span><span style=\"text-decoration: underline;\">f</span> <span style=\"text-decoration: line-through;\">g</span><span style=\"text-decoration: line-through;\">h</span></p>"),
  ("in2-x58", "<p><span style=\"white-space: pre-wrap;\">**b**&#32;//i//&#32;__u__&#32;--s--&#32;##red|c##</span></p>\n\n", "<p><span style=\"white-space: pre-wrap;\">**b**&#32;//i//&#32;__u__&#32;--s--&#32;##red|c##</span></p>"),
  ("in2-x59", "\n<div class=\"code\">\n<pre><code>**b** //i// __u__ --s-- ##red|c##</code></pre></div>\n\n", "<div class=\"code\">\n<pre><code>**b** //i// __u__ --s-- ##red|c##</code></pre></div>"),
  ("in2-x60", "<ul>\n<li><strong>a</li>\n<li>b</strong></li>\n<li>c</li>\n</ul>", "<ul>\n<li><strong>a</strong></li>\n<li><strong>b</strong></li>\n<li>c</li>\n</ul>"),
  ("in2-x61", "<p>**a<sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></p>\n\n<div class=\"footnotes-footer\"><div class=\"title\">Footnotes</div><div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. b**c</div></div>", "<p>**a<sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></p>\n<div class=\"footnotes-footer\">\n<div class=\"title\">Footnotes</div>\n<div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. b**c</div>\n</div>"),
  ("in2-x62", "<p style=\"text-align: center;\"><span style=\"color: red\"><strong>b</strong> <em>i</em></span> =</p>", "<p style=\"text-align: center;\"><span style=\"color: red\"><strong>b</strong> <em>i</em></span> =</p>"),
  ("in2-x63", "<p><a href=\"https://example.com\">**//example.com/x//**</a></p>\n\n", "<p><a href=\"https://example.com\">**//example.com/x//**</a></p>"),
  ("con-x01-span-size-cross", "<p><span>A<span style=\"font-size:12px;\">B</span>C</span></p>\n\n", "<p><span>A<span style=\"font-size:12px;\">B</span>C</span></p>"),
  ("con-x02-size-span-cross", "<p><span style=\"font-size:12px;\">A<span>B</span>C</span></p>\n\n", "<p><span style=\"font-size:12px;\">A<span>B</span>C</span></p>"),
  ("con-x03-span-color-nested", "<p><span>A<span style=\"color: red\">B</span>C</span></p>\n\n", "<p><span>A<span style=\"color: red\">B</span>C</span></p>"),
  ("con-x04-color-span-cross", "<p><span style=\"color: red\"><span>A</span>B</span></p>\n\n", "<p><span style=\"color: red\"><span>A</span>B</span></p>"),
  ("con-x05-strike-span-cross", "<p><span style=\"text-decoration: line-through;\">A<span>B</span>C</span></p>\n\n", "<p><span style=\"text-decoration: line-through;\">A<span>B</span>C</span></p>"),
  ("con-x06-span-strike-nested", "<p><span>A<span style=\"text-decoration: line-through;\">B</span>C</span></p>\n\n", "<p><span>A<span style=\"text-decoration: line-through;\">B</span>C</span></p>"),
  ("con-x07-span-size-strike-cross", "<p><span>A<span style=\"font-size:12px;\">B<span style=\"text-decoration: line-through;\">C</span>D</span>E</span></p>\n\n", "<p><span>A<span style=\"font-size:12px;\">B<span style=\"text-decoration: line-through;\">C</span>D</span>E</span></p>"),
  ("con-x08-span-nested-same", "<p><span>A<span>B</span>C</span></p>\n\n", "<p><span>A<span>B</span>C</span></p>"),
  ("con-x09-size-nested-same", "<p><span style=\"font-size:12px;\">A<span style=\"font-size:14px;\">B</span>C</span></p>\n\n", "<p><span style=\"font-size:12px;\">A<span style=\"font-size:14px;\">B</span>C</span></p>"),
  ("con-x10-span-empty", "", ""),
  ("con-x11-span-size-cross-block", "<div ><p><span>A<span style=\"font-size:12px;\">B</span>C</span></p>\n\n</div>", "<div>\n<p><span>A<span style=\"font-size:12px;\">B</span>C</span></p>\n</div>"),
  ("con-x12-iftags-suppressed-div", "<p>visible</p>\n\n", "<p>visible</p>"),
  ("con-x13-iftags-active-div", "<p>visible</p>\n\n", "<p>visible</p>"),
  ("con-x14-iftags-suppressed-coll", "<div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div><div class=\"collapsible-block-content\"><p>inside</p>\n\n</div></div></div><p>visible</p>\n\n", "<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div>\n<div class=\"collapsible-block-content\">\n<p>inside</p>\n</div>\n</div>\n</div>\n<p>visible</p>"),
  ("con-x15-iftags-active-coll", "<div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div><div class=\"collapsible-block-content\"><p>inside</p>\n\n</div></div></div><p>visible</p>\n\n", "<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div>\n<div class=\"collapsible-block-content\">\n<p>inside</p>\n</div>\n</div>\n</div>\n<p>visible</p>"),
  ("con-x16-iftags-suppressed-tab", "<p>visible</p>\n\n", "<p>visible</p>"),
  ("con-x17-code-inline-div", "<p><span style=\"white-space: pre-wrap;\">[[div&#32;class=x]]&#32;inside&#32;[[/div]]</span></p>\n\n", "<p><span style=\"white-space: pre-wrap;\">[[div&#32;class=x]]&#32;inside&#32;[[/div]]</span></p>"),
  ("con-x18-code-block-div", "\n<div class=\"code\">\n<pre><code>[[div]]\ninside\n[[/div]]</code></pre></div>\n\n", "<div class=\"code\">\n<pre><code>[[div]]\ninside\n[[/div]]</code></pre></div>"),
  ("con-x19-code-inline-coll", "<p><span style=\"white-space: pre-wrap;\">[[collapsible]]body[[/collapsible]]</span></p>\n\n", "<p><span style=\"white-space: pre-wrap;\">[[collapsible]]body[[/collapsible]]</span></p>"),
  ("con-x20-span-code-div", "<p><span>A<span style=\"white-space: pre-wrap;\">[[div]]x[[/div]]</span>B</span></p>\n\n", "<p><span>A<span style=\"white-space: pre-wrap;\">[[div]]x[[/div]]</span>B</span></p>"),
  ("con-x21-div-in-coll-in-tab", "<script type=\"text/javascript\" src=\"/common--javascript/yahooui/element-beta-min.js\"></script>\n<script type=\"text/javascript\" src=\"/common--javascript/yahooui/tabview-min.js\"></script><div id=\"wiki-tabview-0\" class=\"yui-navset\"><ul class=\"yui-nav\"><li class=\"selected\"><a href=\"javascript:;\"><em>title=A</em></a></li></ul><div class=\"yui-content\"><div id=\"wiki-tab-0-0\"><div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div><div class=\"collapsible-block-content\"><div ><p>inner</p>\n\n</div></div></div></div></div></div></div><script type=\"text/javascript\">\n(function(){\n\tvar tabView0 = new YAHOO.widget.TabView('wiki-tabview-0');\n})();\n</script>", "<script type=\"text/javascript\" src=\"/common--javascript/yahooui/element-beta-min.js\"></script>\n<script type=\"text/javascript\" src=\"/common--javascript/yahooui/tabview-min.js\"></script>\n<div id=\"wiki-tabview-0\" class=\"yui-navset\">\n<ul class=\"yui-nav\">\n<li class=\"selected\"><a href=\"javascript:;\"><em>title=A</em></a></li>\n</ul>\n<div class=\"yui-content\">\n<div id=\"wiki-tab-0-0\">\n<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div>\n<div class=\"collapsible-block-content\">\n<div>\n<p>inner</p>\n</div>\n</div>\n</div>\n</div>\n</div>\n</div>\n</div>\n<script type=\"text/javascript\">\n(function(){\n\tvar tabView0 = new YAHOO.widget.TabView('wiki-tabview-0');\n})();\n</script>"),
  ("con-x22-coll-in-tab", "<script type=\"text/javascript\" src=\"/common--javascript/yahooui/element-beta-min.js\"></script>\n<script type=\"text/javascript\" src=\"/common--javascript/yahooui/tabview-min.js\"></script><div id=\"wiki-tabview-1\" class=\"yui-navset\"><ul class=\"yui-nav\"><li class=\"selected\"><a href=\"javascript:;\"><em>title=A</em></a></li></ul><div class=\"yui-content\"><div id=\"wiki-tab-1-0\"><div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div><div class=\"collapsible-block-content\"><p>inner</p>\n\n</div></div></div></div></div></div><script type=\"text/javascript\">\n(function(){\n\tvar tabView1 = new YAHOO.widget.TabView('wiki-tabview-1');\n})();\n</script>", "<script type=\"text/javascript\" src=\"/common--javascript/yahooui/element-beta-min.js\"></script>\n<script type=\"text/javascript\" src=\"/common--javascript/yahooui/tabview-min.js\"></script>\n<div id=\"wiki-tabview-1\" class=\"yui-navset\">\n<ul class=\"yui-nav\">\n<li class=\"selected\"><a href=\"javascript:;\"><em>title=A</em></a></li>\n</ul>\n<div class=\"yui-content\">\n<div id=\"wiki-tab-1-0\">\n<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div>\n<div class=\"collapsible-block-content\">\n<p>inner</p>\n</div>\n</div>\n</div>\n</div>\n</div>\n</div>\n<script type=\"text/javascript\">\n(function(){\n\tvar tabView1 = new YAHOO.widget.TabView('wiki-tabview-1');\n})();\n</script>"),
  ("con-x23-div-in-tab", "<script type=\"text/javascript\" src=\"/common--javascript/yahooui/element-beta-min.js\"></script>\n<script type=\"text/javascript\" src=\"/common--javascript/yahooui/tabview-min.js\"></script><div id=\"wiki-tabview-2\" class=\"yui-navset\"><ul class=\"yui-nav\"><li class=\"selected\"><a href=\"javascript:;\"><em>title=A</em></a></li></ul><div class=\"yui-content\"><div id=\"wiki-tab-2-0\"><div ><p>inner</p>\n\n</div></div></div></div><script type=\"text/javascript\">\n(function(){\n\tvar tabView2 = new YAHOO.widget.TabView('wiki-tabview-2');\n})();\n</script>", "<script type=\"text/javascript\" src=\"/common--javascript/yahooui/element-beta-min.js\"></script>\n<script type=\"text/javascript\" src=\"/common--javascript/yahooui/tabview-min.js\"></script>\n<div id=\"wiki-tabview-2\" class=\"yui-navset\">\n<ul class=\"yui-nav\">\n<li class=\"selected\"><a href=\"javascript:;\"><em>title=A</em></a></li>\n</ul>\n<div class=\"yui-content\">\n<div id=\"wiki-tab-2-0\">\n<div>\n<p>inner</p>\n</div>\n</div>\n</div>\n</div>\n<script type=\"text/javascript\">\n(function(){\n\tvar tabView2 = new YAHOO.widget.TabView('wiki-tabview-2');\n})();\n</script>"),
  ("con-x24-three-nested-divs", "<p>[[/div]]</p>\n\n", "<p>[[/div]]</p>"),
  ("con-x25-tab-in-coll-in-div", "<div ><div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div><div class=\"collapsible-block-content\"><script type=\"text/javascript\" src=\"/common--javascript/yahooui/element-beta-min.js\"></script>\n<script type=\"text/javascript\" src=\"/common--javascript/yahooui/tabview-min.js\"></script><div id=\"wiki-tabview-3\" class=\"yui-navset\"><ul class=\"yui-nav\"><li class=\"selected\"><a href=\"javascript:;\"><em>title=A</em></a></li></ul><div class=\"yui-content\"><div id=\"wiki-tab-3-0\"><p>inner</p>\n\n</div></div></div><script type=\"text/javascript\">\n(function(){\n\tvar tabView3 = new YAHOO.widget.TabView('wiki-tabview-3');\n})();\n</script></div></div></div></div>", "<div>\n<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div>\n<div class=\"collapsible-block-content\">\n<script type=\"text/javascript\" src=\"/common--javascript/yahooui/element-beta-min.js\"></script>\n<script type=\"text/javascript\" src=\"/common--javascript/yahooui/tabview-min.js\"></script>\n<div id=\"wiki-tabview-3\" class=\"yui-navset\">\n<ul class=\"yui-nav\">\n<li class=\"selected\"><a href=\"javascript:;\"><em>title=A</em></a></li>\n</ul>\n<div class=\"yui-content\">\n<div id=\"wiki-tab-3-0\">\n<p>inner</p>\n</div>\n</div>\n</div>\n<script type=\"text/javascript\">\n(function(){\n\tvar tabView3 = new YAHOO.widget.TabView('wiki-tabview-3');\n})();\n</script></div>\n</div>\n</div>\n</div>"),
  ("con-x26-coll-first-closer-wins", "<div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div><div class=\"collapsible-block-content\"><p>A[[collapsible]]B</p>\n\n</div></div></div>C[[/collapsible]]", "<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div>\n<div class=\"collapsible-block-content\">\n<p>A[[collapsible]]B</p>\n</div>\n</div>\n</div>\nC[[/collapsible]]"),
  ("con-x27-footnote-in-div", "<div ><p>text<sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></p>\n\n<div class=\"footnotes-footer\"><div class=\"title\">Footnotes</div><div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. note1</div></div></div>", "<div>\n<p>text<sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></p>\n<div class=\"footnotes-footer\">\n<div class=\"title\">Footnotes</div>\n<div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. note1</div>\n</div>\n</div>"),
  ("con-x28-footnote-in-coll", "<div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div><div class=\"collapsible-block-content\"><p>text<sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></p>\n\n<div class=\"footnotes-footer\"><div class=\"title\">Footnotes</div><div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. note1</div></div></div></div></div>", "<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div>\n<div class=\"collapsible-block-content\">\n<p>text<sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></p>\n<div class=\"footnotes-footer\">\n<div class=\"title\">Footnotes</div>\n<div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. note1</div>\n</div>\n</div>\n</div>\n</div>"),
  ("con-x29-footnote-in-tab", "<script type=\"text/javascript\" src=\"/common--javascript/yahooui/element-beta-min.js\"></script>\n<script type=\"text/javascript\" src=\"/common--javascript/yahooui/tabview-min.js\"></script><div id=\"wiki-tabview-4\" class=\"yui-navset\"><ul class=\"yui-nav\"><li class=\"selected\"><a href=\"javascript:;\"><em>title=A</em></a></li></ul><div class=\"yui-content\"><div id=\"wiki-tab-4-0\"><p>text<sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></p>\n\n<div class=\"footnotes-footer\"><div class=\"title\">Footnotes</div><div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. note1</div></div></div></div></div><script type=\"text/javascript\">\n(function(){\n\tvar tabView4 = new YAHOO.widget.TabView('wiki-tabview-4');\n})();\n</script>", "<script type=\"text/javascript\" src=\"/common--javascript/yahooui/element-beta-min.js\"></script>\n<script type=\"text/javascript\" src=\"/common--javascript/yahooui/tabview-min.js\"></script>\n<div id=\"wiki-tabview-4\" class=\"yui-navset\">\n<ul class=\"yui-nav\">\n<li class=\"selected\"><a href=\"javascript:;\"><em>title=A</em></a></li>\n</ul>\n<div class=\"yui-content\">\n<div id=\"wiki-tab-4-0\">\n<p>text<sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></p>\n<div class=\"footnotes-footer\">\n<div class=\"title\">Footnotes</div>\n<div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. note1</div>\n</div>\n</div>\n</div>\n</div>\n<script type=\"text/javascript\">\n(function(){\n\tvar tabView4 = new YAHOO.widget.TabView('wiki-tabview-4');\n})();\n</script>"),
  ("con-x30-div-in-footnote", "<p><sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></p>\n\n<div class=\"footnotes-footer\"><div class=\"title\">Footnotes</div><div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. <div ><p>inside</p>\n\n</div></div></div>", "<p><sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></p>\n<div class=\"footnotes-footer\">\n<div class=\"title\">Footnotes</div>\n<div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>.\n<div>\n<p>inside</p>\n</div>\n</div>\n</div>"),
  ("con-x31-span-in-footnote", "<p><sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></p>\n\n<div class=\"footnotes-footer\"><div class=\"title\">Footnotes</div><div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. <span>S</span></div></div>", "<p><sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></p>\n<div class=\"footnotes-footer\">\n<div class=\"title\">Footnotes</div>\n<div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. <span>S</span></div>\n</div>"),
  ("con-x32-div-underscore-basic", "<div >body</div>", "<div>body</div>"),
  ("con-x33-div-underscore-attrs", "<div  class=\"x\">body</div>", "<div class=\"x\">body</div>"),
  ("con-x34-div-underscore-inline", "<p>before [[div_]] body [[/div]] after</p>\n\n", "<p>before [[div_]] body [[/div]] after</p>"),
  ("con-x35-div-underscore-unterminated", "<p>[[div_]]<br />\nbody</p>\n\n", "<p>[[div_]]<br />\nbody</p>"),
  ("con-x36-div-normal-control", "<div ><p>body</p>\n\n</div>", "<div>\n<p>body</p>\n</div>"),
  ("lst-x01-list-in-div", "<div ><ul>\n<li>one</li>\n<li>two</li>\n</ul></div>", "<div>\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>\n</div>"),
  ("lst-x02-numbered-in-div", "<div ><ol>\n<li>one</li>\n<li>two</li>\n</ol></div>", "<div>\n<ol>\n<li>one</li>\n<li>two</li>\n</ol>\n</div>"),
  ("lst-x03-nested-list-in-div", "<div ><ul>\n<li>one\n<ul>\n<li>nested</li>\n</ul>\n</li>\n<li>two</li>\n</ul></div>", "<div>\n<ul>\n<li>one\n<ul>\n<li>nested</li>\n</ul>\n</li>\n<li>two</li>\n</ul>\n</div>"),
  ("lst-x04-list-in-collapsible", "<div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div><div class=\"collapsible-block-content\"><ul>\n<li>one</li>\n<li>two</li>\n</ul></div></div></div>", "<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div>\n<div class=\"collapsible-block-content\">\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>\n</div>\n</div>\n</div>"),
  ("lst-x05-list-in-collapsible-labeled", "<div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div><div class=\"collapsible-block-content\"><ol>\n<li>one</li>\n<li>two</li>\n</ol></div></div></div>", "<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div>\n<div class=\"collapsible-block-content\">\n<ol>\n<li>one</li>\n<li>two</li>\n</ol>\n</div>\n</div>\n</div>"),
  ("lst-x06-list-in-quote", "<blockquote><ul>\n<li>one</li>\n<li>two</li>\n</ul></blockquote>\n", "<blockquote>\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>\n</blockquote>"),
  ("lst-x07-nested-list-in-quote", "<blockquote><ul>\n<li>one\n<ul>\n<li>nested</li>\n</ul>\n</li>\n<li>two</li>\n</ul></blockquote>\n", "<blockquote>\n<ul>\n<li>one\n<ul>\n<li>nested</li>\n</ul>\n</li>\n<li>two</li>\n</ul>\n</blockquote>"),
  ("lst-x08-list-in-tab", "<script type=\"text/javascript\" src=\"/common--javascript/yahooui/element-beta-min.js\"></script>\n<script type=\"text/javascript\" src=\"/common--javascript/yahooui/tabview-min.js\"></script><div id=\"wiki-tabview-5\" class=\"yui-navset\"><ul class=\"yui-nav\"><li class=\"selected\"><a href=\"javascript:;\"><em>title=A</em></a></li></ul><div class=\"yui-content\"><div id=\"wiki-tab-5-0\"><ul>\n<li>one</li>\n<li>two</li>\n</ul></div></div></div><script type=\"text/javascript\">\n(function(){\n\tvar tabView5 = new YAHOO.widget.TabView('wiki-tabview-5');\n})();\n</script>", "<script type=\"text/javascript\" src=\"/common--javascript/yahooui/element-beta-min.js\"></script>\n<script type=\"text/javascript\" src=\"/common--javascript/yahooui/tabview-min.js\"></script>\n<div id=\"wiki-tabview-5\" class=\"yui-navset\">\n<ul class=\"yui-nav\">\n<li class=\"selected\"><a href=\"javascript:;\"><em>title=A</em></a></li>\n</ul>\n<div class=\"yui-content\">\n<div id=\"wiki-tab-5-0\">\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>\n</div>\n</div>\n</div>\n<script type=\"text/javascript\">\n(function(){\n\tvar tabView5 = new YAHOO.widget.TabView('wiki-tabview-5');\n})();\n</script>"),
  ("lst-x09-div-in-list-item", "<div ><p>inside</p>\n\n</div><ul>\n<li>one</li>\n<li>two</li>\n</ul>", "<div>\n<p>inside</p>\n</div>\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>"),
  ("lst-x10-list-then-div", "<ul>\n<li>one</li>\n<li>two</li>\n</ul><div ><p>after</p>\n\n</div>", "<ul>\n<li>one</li>\n<li>two</li>\n</ul>\n<div>\n<p>after</p>\n</div>"),
  ("lst-x11-quote-then-list", "<blockquote><p>quoted</p>\n\n</blockquote>\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>", "<blockquote>\n<p>quoted</p>\n</blockquote>\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>"),
  ("lst-x12-collapsible-in-list-item", "<ul>\n<li>one <div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div><div class=\"collapsible-block-content\"></li>\n</ul><p>inside</p>\n\n</div></div></div><ul>\n<li>two</li>\n</ul>", "<ul>\n<li>one\n<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div>\n<div class=\"collapsible-block-content\"></div>\n</div>\n</div>\n</li>\n</ul>\n<p>inside</p>\n<ul>\n<li>two</li>\n</ul>"),
  ("lst-x13-deflist-in-bib", "<p><a href=\"javascript:;\" class=\"bibcite\" id=\"bibcite-1\" onclick=\"WIKIDOT.page.utils.scrollToReference('bibitem-1')\">1</a></p>\n\n<div class=\"bibitems\"><div class=\"title\">Bibliography</div><div class=\"bibitem\" id=\"bibitem-1\">1. Alpha</div></div>", "<p><a href=\"javascript:;\" class=\"bibcite\" id=\"bibcite-1\" onclick=\"WIKIDOT.page.utils.scrollToReference('bibitem-1')\">1</a></p>\n<div class=\"bibitems\">\n<div class=\"title\">Bibliography</div>\n<div class=\"bibitem\" id=\"bibitem-1\">1. Alpha</div>\n</div>"),
  ("lst-x14-deflist-multi-bib", "<p><a href=\"javascript:;\" class=\"bibcite\" id=\"bibcite-1\" onclick=\"WIKIDOT.page.utils.scrollToReference('bibitem-1')\">1</a> <a href=\"javascript:;\" class=\"bibcite\" id=\"bibcite-2\" onclick=\"WIKIDOT.page.utils.scrollToReference('bibitem-2')\">2</a></p>\n\n<div class=\"bibitems\"><div class=\"title\">Bibliography</div><div class=\"bibitem\" id=\"bibitem-1\">1. Alpha</div><div class=\"bibitem\" id=\"bibitem-2\">2. Bravo</div></div>", "<p><a href=\"javascript:;\" class=\"bibcite\" id=\"bibcite-1\" onclick=\"WIKIDOT.page.utils.scrollToReference('bibitem-1')\">1</a> <a href=\"javascript:;\" class=\"bibcite\" id=\"bibcite-2\" onclick=\"WIKIDOT.page.utils.scrollToReference('bibitem-2')\">2</a></p>\n<div class=\"bibitems\">\n<div class=\"title\">Bibliography</div>\n<div class=\"bibitem\" id=\"bibitem-1\">1. Alpha</div>\n<div class=\"bibitem\" id=\"bibitem-2\">2. Bravo</div>\n</div>"),
  ("lst-x15-deflist-bib-colon", "<p><a href=\"javascript:;\" class=\"bibcite\" id=\"bibcite-1\" onclick=\"WIKIDOT.page.utils.scrollToReference('bibitem-1')\">1</a></p>\n\n<div class=\"bibitems\"><div class=\"title\">Bibliography</div><div class=\"bibitem\" id=\"bibitem-1\">1. Alpha: with colon</div></div>", "<p><a href=\"javascript:;\" class=\"bibcite\" id=\"bibcite-1\" onclick=\"WIKIDOT.page.utils.scrollToReference('bibitem-1')\">1</a></p>\n<div class=\"bibitems\">\n<div class=\"title\">Bibliography</div>\n<div class=\"bibitem\" id=\"bibitem-1\">1. Alpha: with colon</div>\n</div>"),
  ("lst-x16-deflist-in-div", "<div ><dl>\n<dt>term</dt>\n<dd>definition</dd>\n</dl>\n</div>", "<div>\n<dl>\n<dt>term</dt>\n<dd>definition</dd>\n</dl>\n</div>"),
  ("lst-x17-deflist-in-quote", "<blockquote><dl>\n<dt>term</dt>\n<dd>definition</dd>\n</dl>\n</blockquote>\n", "<blockquote>\n<dl>\n<dt>term</dt>\n<dd>definition</dd>\n</dl>\n</blockquote>"),
  ("lst-x18-deflist-in-collapsible", "<div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div><div class=\"collapsible-block-content\"><dl>\n<dt>term</dt>\n<dd>definition</dd>\n</dl>\n</div></div></div>", "<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div>\n<div class=\"collapsible-block-content\">\n<dl>\n<dt>term</dt>\n<dd>definition</dd>\n</dl>\n</div>\n</div>\n</div>"),
  ("lst-x19-bib-then-deflist", "<div class=\"bibitems\"><div class=\"title\">Bibliography</div><div class=\"bibitem\" id=\"bibitem-1\">1. Alpha</div></div><dl>\n<dt>b</dt>\n<dd>Bravo</dd>\n</dl>\n", "<div class=\"bibitems\">\n<div class=\"title\">Bibliography</div>\n<div class=\"bibitem\" id=\"bibitem-1\">1. Alpha</div>\n</div>\n<dl>\n<dt>b</dt>\n<dd>Bravo</dd>\n</dl>"),
  ("lst-x20-deflist-then-bib", "<dl>\n<dt>b</dt>\n<dd>Bravo</dd>\n</dl>\n<div class=\"bibitems\"><div class=\"title\">Bibliography</div><div class=\"bibitem\" id=\"bibitem-1\">1. Alpha</div></div>", "<dl>\n<dt>b</dt>\n<dd>Bravo</dd>\n</dl>\n<div class=\"bibitems\">\n<div class=\"title\">Bibliography</div>\n<div class=\"bibitem\" id=\"bibitem-1\">1. Alpha</div>\n</div>"),
  ("lst-x21-list-heading", "<ul>\n<li>one</li>\n</ul><p>== Heading ==</p>\n\n<ul>\n<li>two</li>\n</ul>", "<ul>\n<li>one</li>\n</ul>\n<p>== Heading ==</p>\n<ul>\n<li>two</li>\n</ul>"),
  ("lst-x22-list-toc", "<ul>\n<li>one</li>\n</ul><table style=\"margin:0; padding:0\"><tr><td style=\"margin:0; padding:0\"><div id=\"toc\"><div id=\"toc-action-bar\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.listeners.foldToc(event)\">Fold</a><a style=\"display: none\" href=\"javascript:;\" onclick=\"WIKIDOT.page.listeners.unfoldToc(event)\">Unfold</a></div><div class=\"title\">Table of Contents</div><div id=\"toc-list\">\n</div></div></td></tr></table>\n\n<ul>\n<li>two</li>\n</ul>", "<ul>\n<li>one</li>\n</ul>\n<table style=\"margin:0; padding:0\">\n<tr>\n<td style=\"margin:0; padding:0\">\n<div id=\"toc\">\n<div id=\"toc-action-bar\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.listeners.foldToc(event)\">Fold</a><a style=\"display: none\" href=\"javascript:;\" onclick=\"WIKIDOT.page.listeners.unfoldToc(event)\">Unfold</a></div>\n<div class=\"title\">Table of Contents</div>\n<div id=\"toc-list\"></div>\n</div>\n</td>\n</tr>\n</table>\n<ul>\n<li>two</li>\n</ul>"),
  ("lst-x23-list-footnote", "<ul>\n<li>one<sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></li>\n<li>two</li>\n</ul><div class=\"footnotes-footer\"><div class=\"title\">Footnotes</div><div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. note</div></div>", "<ul>\n<li>one<sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></li>\n<li>two</li>\n</ul>\n<div class=\"footnotes-footer\">\n<div class=\"title\">Footnotes</div>\n<div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. note</div>\n</div>"),
  ("lst-x24-list-footnoteblock", "<ul>\n<li>one</li>\n</ul><ul>\n<li>two</li>\n</ul>", "<ul>\n<li>one</li>\n</ul>\n<ul>\n<li>two</li>\n</ul>"),
  ("lst-x25-list-hr", "<ul>\n<li>one</li>\n</ul><hr />\n<ul>\n<li>two</li>\n</ul>", "<ul>\n<li>one</li>\n</ul>\n<hr />\n<ul>\n<li>two</li>\n</ul>"),
  ("lst-x26-list-code", "<ul>\n<li>one</li>\n</ul>\n<div class=\"code\">\n<pre><code>code</code></pre></div>\n\n<ul>\n<li>two</li>\n</ul>", "<ul>\n<li>one</li>\n</ul>\n<div class=\"code\">\n<pre><code>code</code></pre></div>\n<ul>\n<li>two</li>\n</ul>"),
  ("lst-x27-deflist-heading", "<dl>\n<dt>term</dt>\n<dd>definition</dd>\n</dl>\n<p>== Heading ==<br />\n<dl>\n<dt>other</dt>\n<dd>more</dd>\n</dl>\n</p>\n\n", "<dl>\n<dt>term</dt>\n<dd>definition</dd>\n</dl>\n== Heading ==<br />\n<dl>\n<dt>other</dt>\n<dd>more</dd>\n</dl>"),
  ("lst-x28-list-quote-interrupt", "<ul>\n<li>one</li>\n</ul><blockquote><p>quoted</p>\n\n</blockquote>\n<ul>\n<li>two</li>\n</ul>", "<ul>\n<li>one</li>\n</ul>\n<blockquote>\n<p>quoted</p>\n</blockquote>\n<ul>\n<li>two</li>\n</ul>"),
  ("lst-x29-heading-then-list", "<p>== Heading ==</p>\n\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>", "<p>== Heading ==</p>\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>"),
  ("lst-x32-empty-items-mixed", "<ul>\n<li>a</li>\n<li>b</li>\n</ul>", "<ul>\n<li>a</li>\n<li>b</li>\n</ul>"),
  ("lst-x35-empty-deflist-term", "<dl>\n<dd>definition</dd>\n</dl>\n", "<dl>\n<dd>definition</dd>\n</dl>"),
  ("lst-x37-span-in-item", "<p><span>A</span></p>\n\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>", "<p><span>A</span></p>\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>"),
  ("lst-x38-span-cross-item", "<ul>\n<li><span>one</li>\n<li>two</span></li>\n</ul>", "<ul>\n<li><span>one</span></li>\n<li><span>two</span></li>\n</ul>"),
  ("lst-x39-size-cross-item", "<ul>\n<li><span style=\"font-size:12px;\">one</li>\n<li>two</span></li>\n</ul>", "<ul>\n<li><span style=\"font-size:12px;\">one</span></li>\n<li><span style=\"font-size:12px;\">two</span></li>\n</ul>"),
  ("lst-x40-color-cross-item", "<ul>\n<li><span style=\"color: red\">one</li>\n<li>two</span></li>\n</ul>", "<ul>\n<li><span style=\"color: red\">one</span></li>\n<li><span style=\"color: red\">two</span></li>\n</ul>"),
  ("lst-x41-strike-in-item", "<ul>\n<li><span style=\"text-decoration: line-through;\">one</span></li>\n<li>two</li>\n</ul>", "<ul>\n<li><span style=\"text-decoration: line-through;\">one</span></li>\n<li>two</li>\n</ul>"),
  ("lst-x42-bold-in-item", "<ul>\n<li><strong>one</strong></li>\n<li>two</li>\n</ul>", "<ul>\n<li><strong>one</strong></li>\n<li>two</li>\n</ul>"),
  ("lst-x43-span-nested-in-item", "<ul>\n<li>one <span>A<span style=\"font-size:12px;\">B</span>C</span></li>\n<li>two</li>\n</ul>", "<ul>\n<li>one <span>A<span style=\"font-size:12px;\">B</span>C</span></li>\n<li>two</li>\n</ul>"),
  ("lst-x44-list-plain-control", "<ul>\n<li>one</li>\n<li>two</li>\n</ul>", "<ul>\n<li>one</li>\n<li>two</li>\n</ul>"),
  ("lst-x30n-bare-bullet-marker", "<p>*</p>\n\n", "<p>*</p>"),
  ("lst-x31n-bare-number-marker", "<p>#</p>\n\n", "<p>#</p>"),
  ("lst-x33n-bare-marker-between-items", "<ul>\n<li>a</li>\n</ul><p>*</p>\n\n<ul>\n<li>b</li>\n</ul>", "<ul>\n<li>a</li>\n</ul>\n<p>*</p>\n<ul>\n<li>b</li>\n</ul>"),
  ("lst-x34n-bare-nested-marker", "<ul>\n<li>one</li>\n</ul><p>*</p>\n\n<ul>\n<li>two</li>\n</ul>", "<ul>\n<li>one</li>\n</ul>\n<p>*</p>\n<ul>\n<li>two</li>\n</ul>"),
  ("lst-x36n-bare-def-separator", "", ""),
  ("tab-x01-table-in-div", "<div  class=\"box\"><table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table></div>", "<div class=\"box\">\n<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n</div>"),
  ("tab-x02-table-in-div-attr", "<div  id=\"u-d\" style=\"color:red\"><table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table></div>", "<div id=\"u-d\" style=\"color:red\">\n<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n</div>"),
  ("tab-x03-table-in-collapsible", "<div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div><div class=\"collapsible-block-content\"><table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table></div></div></div>", "<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div>\n<div class=\"collapsible-block-content\">\n<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n</div>\n</div>\n</div>"),
  ("tab-x04-table-in-collapsible-closed", "<div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">open</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">close</a></div><div class=\"collapsible-block-content\"><table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table></div></div></div>", "<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">open</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">close</a></div>\n<div class=\"collapsible-block-content\">\n<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n</div>\n</div>\n</div>"),
  ("tab-x05-table-in-quote", "<blockquote><table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table></blockquote>\n", "<blockquote>\n<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n</blockquote>"),
  ("tab-x06-table-in-quote-head", "<blockquote><p>intro<br />\n<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table></p>\n\n</blockquote>\n", "<blockquote>intro<br />\n<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n</blockquote>"),
  ("tab-x07-adv-in-div", "<div  class=\"box\"><table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table></div>", "<div class=\"box\">\n<table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n</div>"),
  ("tab-x08-adv-in-collapsible", "<div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div><div class=\"collapsible-block-content\"><table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table></div></div></div>", "<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div>\n<div class=\"collapsible-block-content\">\n<table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n</div>\n</div>\n</div>"),
  ("tab-x09-table-in-quote-in-div", "<div ><blockquote><table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table></blockquote>\n</div>", "<div>\n<blockquote>\n<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n</blockquote>\n</div>"),
  ("tab-x10-simple-then-adv", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table><table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n<table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x11-adv-then-simple", "<table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table><table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>", "<table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x12-simple-adv-no-blank", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table><table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n<table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x13-adv-in-simple-cell", "<table class=\"wiki-content-table\">\n<tr>\n<td><table>\n<tr>\n<td>in</td>\n</tr>\n</table></td>\n<td>b</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td>\n<table>\n<tr>\n<td>in</td>\n</tr>\n</table>\n</td>\n<td>b</td>\n</tr>\n</table>"),
  ("tab-x14-simple-in-adv-cell", "<table>\n<tr>\n<td>|| x || y ||</td>\n</tr>\n</table>", "<table>\n<tr>\n<td>|| x || y ||</td>\n</tr>\n</table>"),
  ("tab-x15-adv-in-adv-cell", "<table>\n<tr>\n<td><table>\n<tr>\n<td>inner</td>\n</tr>\n</table></td>\n</tr>\n</table>", "<table>\n<tr>\n<td>\n<table>\n<tr>\n<td>inner</td>\n</tr>\n</table>\n</td>\n</tr>\n</table>"),
  ("tab-x16-two-adv-adjacent", "<table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table><br />\n<table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>", "<table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n<table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x17-simple-adv-simple", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table><table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table><table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n<table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x18-cell-with-span", "<table class=\"wiki-content-table\">\n<tr>\n<td><span class=\"x\">spanned</span></td>\n<td>b</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td><span class=\"x\">spanned</span></td>\n<td>b</td>\n</tr>\n</table>"),
  ("tab-x19-cell-with-size", "<table class=\"wiki-content-table\">\n<tr>\n<td><span style=\"font-size:120%;\">big</span></td>\n<td>b</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td><span style=\"font-size:120%;\">big</span></td>\n<td>b</td>\n</tr>\n</table>"),
  ("tab-x20-cell-with-color", "<table class=\"wiki-content-table\">\n<tr>\n<td>[[color red]]red[[/color]]</td>\n<td>b</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td>[[color red]]red[[/color]]</td>\n<td>b</td>\n</tr>\n</table>"),
  ("tab-x21-cell-with-bold", "<table class=\"wiki-content-table\">\n<tr>\n<td><strong>strong</strong></td>\n<td>''em''</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td><strong>strong</strong></td>\n<td>''em''</td>\n</tr>\n</table>"),
  ("tab-x22-cell-with-footnote", "<table class=\"wiki-content-table\">\n<tr>\n<td>a<sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></td>\n<td>b</td>\n</tr>\n</table><div class=\"footnotes-footer\"><div class=\"title\">Footnotes</div><div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. note</div></div>", "<table class=\"wiki-content-table\">\n<tr>\n<td>a<sup class=\"footnoteref\"><a id=\"footnoteref-1\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnote-1')\">1</a></sup></td>\n<td>b</td>\n</tr>\n</table>\n<div class=\"footnotes-footer\">\n<div class=\"title\">Footnotes</div>\n<div class=\"footnote-footer\" id=\"footnote-1\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference('footnoteref-1')\">1</a>. note</div>\n</div>"),
  ("tab-x23-cell-with-triple-link", "<table class=\"wiki-content-table\">\n<tr>\n<td><a class=\"newpage\" href=\"/some-page\">link</a></td>\n<td>b</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td><a class=\"newpage\" href=\"/some-page\">link</a></td>\n<td>b</td>\n</tr>\n</table>"),
  ("tab-x24-cell-with-url-pipe", "<table class=\"wiki-content-table\">\n<tr>\n<td>[[<a href=\"https://example.com|Example\">https://example.com|Example</a>]]</td>\n<td>b</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td>[[<a href=\"https://example.com|Example\">https://example.com|Example</a>]]</td>\n<td>b</td>\n</tr>\n</table>"),
  ("tab-x25-cell-with-url-pipe-cell2", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>[[<a href=\"http://example.com|link\">http://example.com|link</a>]]</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>[[<a href=\"http://example.com|link\">http://example.com|link</a>]]</td>\n</tr>\n</table>"),
  ("tab-x26-cell-with-raw", "<table class=\"wiki-content-table\">\n<tr>\n<td><span style=\"white-space: pre-wrap;\">raw</span></td>\n<td>b</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td><span style=\"white-space: pre-wrap;\">raw</span></td>\n<td>b</td>\n</tr>\n</table>"),
  ("tab-x27-adv-cell-with-span", "<table>\n<tr>\n<td><span class=\"x\">s</span></td>\n</tr>\n</table>", "<table>\n<tr>\n<td><span class=\"x\">s</span></td>\n</tr>\n</table>"),
  ("tab-x28-adv-cell-with-url-pipe", "<table>\n<tr>\n<td>[[<a href=\"https://example.com|E\">https://example.com|E</a>]]</td>\n</tr>\n</table>", "<table>\n<tr>\n<td>[[<a href=\"https://example.com|E\">https://example.com|E</a>]]</td>\n</tr>\n</table>"),
  ("tab-x29-cell-with-div", "<table class=\"wiki-content-table\">\n<tr>\n<td>[[div]]inside[[/div]]</td>\n<td>b</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td>[[div]]inside[[/div]]</td>\n<td>b</td>\n</tr>\n</table>"),
  ("tab-x30-cell-with-collapsible", "<table class=\"wiki-content-table\">\n<tr>\n<td></td>\n</tr>\n</table><p>hidden</p>\n\n</div></div></div>|| b ||", "<table class=\"wiki-content-table\">\n<tr>\n<td></td>\n</tr>\n</table>\n<p>hidden</p>\n|| b ||"),
  ("tab-x31-table-heading-table", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n</table><p style=\"text-align: center;\">Heading =</p><table class=\"wiki-content-table\">\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n</table>\n<p style=\"text-align: center;\">Heading =</p>\n<table class=\"wiki-content-table\">\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x32-table-toc-table", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n</table><table style=\"margin:0; padding:0\"><tr><td style=\"margin:0; padding:0\"><div id=\"toc\"><div id=\"toc-action-bar\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.listeners.foldToc(event)\">Fold</a><a style=\"display: none\" href=\"javascript:;\" onclick=\"WIKIDOT.page.listeners.unfoldToc(event)\">Unfold</a></div><div class=\"title\">Table of Contents</div><div id=\"toc-list\">\n</div></div></td></tr></table>\n\n<table class=\"wiki-content-table\">\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n</table>\n<table style=\"margin:0; padding:0\">\n<tr>\n<td style=\"margin:0; padding:0\">\n<div id=\"toc\">\n<div id=\"toc-action-bar\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.listeners.foldToc(event)\">Fold</a><a style=\"display: none\" href=\"javascript:;\" onclick=\"WIKIDOT.page.listeners.unfoldToc(event)\">Unfold</a></div>\n<div class=\"title\">Table of Contents</div>\n<div id=\"toc-list\"></div>\n</div>\n</td>\n</tr>\n</table>\n<table class=\"wiki-content-table\">\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x33-table-list-table", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n</table><ul>\n<li>item</li>\n</ul><table class=\"wiki-content-table\">\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n</table>\n<ul>\n<li>item</li>\n</ul>\n<table class=\"wiki-content-table\">\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x34-table-deflist-table", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n</table><dl>\n<dt>term</dt>\n<dd>definition</dd>\n</dl>\n<table class=\"wiki-content-table\">\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n</table>\n<dl>\n<dt>term</dt>\n<dd>definition</dd>\n</dl>\n<table class=\"wiki-content-table\">\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x35-table-hr-table", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n</table><hr />\n<table class=\"wiki-content-table\">\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n</table>\n<hr />\n<table class=\"wiki-content-table\">\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x36-table-code-table", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n</table>\n<div class=\"code\">\n<pre><code>x</code></pre></div>\n\n<br />\n<table class=\"wiki-content-table\">\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n</table>\n<div class=\"code\">\n<pre><code>x</code></pre></div>\n<br />\n<table class=\"wiki-content-table\">\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x37-heading-then-table", "<p style=\"text-align: center;\">Heading =</p><table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>", "<p style=\"text-align: center;\">Heading =</p>\n<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x38-list-then-table", "<ul>\n<li>item</li>\n</ul><table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>", "<ul>\n<li>item</li>\n</ul>\n<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x39-adv-heading-adv", "<table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table><p style=\"text-align: center;\">Heading =</p><table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>", "<table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n<p style=\"text-align: center;\">Heading =</p>\n<table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x40-adv-colspan-rowspan", "<table>\n<tr>\n<td colspan=\"2\">wide</td>\n</tr>\n<tr>\n<td rowspan=\"2\">tall</td>\n<td>b</td>\n</tr>\n<tr>\n<td>d</td>\n</tr>\n</table>", "<table>\n<tr>\n<td colspan=\"2\">wide</td>\n</tr>\n<tr>\n<td rowspan=\"2\">tall</td>\n<td>b</td>\n</tr>\n<tr>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x41-simple-trailing-empty-span", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td></td>\n<td></td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td></td>\n<td></td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x42-simple-header-mix", "<table class=\"wiki-content-table\">\n<tr>\n<th>H</th>\n<td>= C</td>\n<td>&gt; R</td>\n</tr>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n</table>", "<table class=\"wiki-content-table\">\n<tr>\n<th>H</th>\n<td>= C</td>\n<td>&gt; R</td>\n</tr>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n</table>"),
  ("tab-x43-adv-empty-cells", "<table>\n<tr>\n<td></td>\n<td>b</td>\n</tr>\n</table>", "<table>\n<tr>\n<td></td>\n<td>b</td>\n</tr>\n</table>"),
  ("tab-x44-malformed-adv-opener", "<p>[[table]]<br />\n[[row]]<br />\n[[cell]]unclosed<br />\n<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table></p>\n\n", "[[table]]<br />\n[[row]]<br />\n[[cell]]unclosed<br />\n<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>"),
  ("tab-x45-table-then-literal-brackets", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table><p>[[table]]not closed</p>\n\n", "<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n<p>[[table]]not closed</p>"),
  ("tab-x46-div-simple-collapsible-adv", "<div ><table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table></div><div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div><div class=\"collapsible-block-unfolded\" style=\"display:none\"><div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div><div class=\"collapsible-block-content\"><table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table></div></div></div>", "<div>\n<table class=\"wiki-content-table\">\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n</div>\n<div class=\"collapsible-block\">\n<div class=\"collapsible-block-folded\"><a class=\"collapsible-block-link\" href=\"javascript:;\">+&nbsp;show&nbsp;block</a></div>\n<div class=\"collapsible-block-unfolded\" style=\"display:none\">\n<div class=\"collapsible-block-unfolded-link\"><a class=\"collapsible-block-link\" href=\"javascript:;\">–&nbsp;hide&nbsp;block</a></div>\n<div class=\"collapsible-block-content\">\n<table>\n<tr>\n<td>a</td>\n<td>b</td>\n</tr>\n<tr>\n<td>c</td>\n<td>d</td>\n</tr>\n</table>\n</div>\n</div>\n</div>"),
  ("lb-p01", "<ul>\n<li>Apple</li>\n<li>Banana</li>\n</ul><ol>\n<li>First</li>\n<li>Second</li>\n</ol><br />\n", "<ul>\n<li>Apple</li>\n<li>Banana</li>\n</ul>\n<ol>\n<li>First</li>\n<li>Second</li>\n</ol>\n<br />"),
  ("lb-p02", "<ul>\n<li>Inline</li>\n<li>list</li>\n</ul><br />\n", "<ul>\n<li>Inline</li>\n<li>list</li>\n</ul>\n<br />"),
  ("lb-p03", "<ul>\n<li>Indented\n<ol>\n<li>and</li>\n<li>nested</li>\n</ol>\n</li>\n<li>list</li>\n</ul><br />\n", "<ul>\n<li>Indented\n<ol>\n<li>and</li>\n<li>nested</li>\n</ol>\n</li>\n<li>list</li>\n</ul>\n<br />"),
  ("lb-p04", "<ol>\n<li style=\"list-style: none; display: inline\">\n<ul>\n<li>-</li>\n</ul>\n</li>\n</ol><br />\n", "<ol>\n<li style=\"list-style: none; display: inline\">\n<ul>\n<li>-</li>\n</ul>\n</li>\n</ol>\n<br />"),
  ("lb-p05", "<ul>\n<li>outer<br />\n<ol>\n<li>inner</li>\n</ol>\n</li>\n</ul><br />\n", "<ul>\n<li>outer<br />\n<ol>\n<li>inner</li>\n</ol>\n</li>\n</ul>\n<br />"),
  ("lb-p06", "<ul id=\"u-my-list\" class=\"a\" style=\"color: red;\" role=\"list\" type=\"disc\" data-x=\"1\">\n<li id=\"u-item-1\" class=\"b\" style=\"color: blue;\" data-y=\"2\">One</li>\n</ul><br />\n", "<ul id=\"u-my-list\" class=\"a\" style=\"color: red;\" role=\"list\" type=\"disc\" data-x=\"1\">\n<li id=\"u-item-1\" class=\"b\" style=\"color: blue;\" data-y=\"2\">One</li>\n</ul>\n<br />"),
  ("lb-p07", "<ol id=\"u-num-list\" class=\"n\" style=\"color: green;\" type=\"A\">\n<li>Item</li>\n</ol><br />\n", "<ol id=\"u-num-list\" class=\"n\" style=\"color: green;\" type=\"A\">\n<li>Item</li>\n</ol>\n<br />"),
  ("lb-p08", "<ul>\n<li style=\"list-style: none; display: inline\">\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>\n</li>\n</ul><ol>\n<li style=\"list-style: none; display: inline\">\n<ul>\n<li>bullet</li>\n</ul>\n<ol>\n<li>num</li>\n</ol>\n</li>\n</ol><br />\n", "<ul>\n<li style=\"list-style: none; display: inline\">\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>\n</li>\n</ul>\n<ol>\n<li style=\"list-style: none; display: inline\">\n<ul>\n<li>bullet</li>\n</ul>\n<ol>\n<li>num</li>\n</ol>\n</li>\n</ol>\n<br />"),
  ("lb-p09", "<ul>\n<li>\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>\n</li>\n</ul><br />\n", "<ul>\n<li>\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>\n</li>\n</ul>\n<br />"),
  ("lb-p10", "<table class=\"wiki-content-table\">\n<tr>\n<td><ul>\n<li>one</li>\n<li>two</li>\n</ul></td>\n</tr>\n<tr>\n<td>after</td>\n</tr>\n</table><p>x</p>\n\n", "<table class=\"wiki-content-table\">\n<tr>\n<td>\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>\n</td>\n</tr>\n<tr>\n<td>after</td>\n</tr>\n</table>\n<p>x</p>"),
  ("lb-p11", "<table>\n<tr>\n<td><ul>\n<li>one</li>\n<li>two</li>\n</ul></td>\n</tr>\n</table><p>x</p>\n\n", "<table>\n<tr>\n<td>\n<ul>\n<li>one</li>\n<li>two</li>\n</ul>\n</td>\n</tr>\n</table>\n<p>x</p>"),
  ("lb-p12", "x", "x"),
  ("lb-p13", "<ul>\n<li style=\"list-style: none\">Foo</li>\n</ul>\n[[li]]<br />\nBaz<br />\n[[/li]]", "<ul>\n<li style=\"list-style: none\">Foo</li>\n</ul>\n[[li]]<br />\nBaz<br />\n[[/li]]"),
  ("lb-p14", "<ul>\n<li>Alpha</li>\n<li>Beta</li>\n</ul><ol>\n<li>One</li>\n</ol>", "<ul>\n<li>Alpha</li>\n<li>Beta</li>\n</ul>\n<ol>\n<li>One</li>\n</ol>"),
  ("lb-p15", "<p>[[ul ]]<br />\n[[li]]a[[/li]]<br />\n[[/ul]]<br /></p>\n\n<ul>\n<li style=\"list-style: none\">[[li ]]b[[/li]]</li>\n</ul>\n[[ul]]<br />\n[[li]]c[[/li ]]<br />\n[[/ul ]]", "<p>[[ul ]]<br />\n[[li]]a[[/li]]<br />\n[[/ul]]<br /></p>\n<ul>\n<li style=\"list-style: none\">[[li ]]b[[/li]]</li>\n</ul>\n[[ul]]<br />\n[[li]]c[[/li ]]<br />\n[[/ul ]]"),
  ("lb-p16", "<p>^^a</p>\n\n<ul>\n<li>list</li>\n</ul><p>b<sup><br />\nx<br />\n</sup>a<br /></p>\n\n<ul>\n<li>list</li>\n</ul>\nb^^<br />\nx", "<p>^^a</p>\n<ul>\n<li>list</li>\n</ul>\n<p>b<sup><br />\nx<br /></sup> a<br /></p>\n<ul>\n<li>list</li>\n</ul>\nb^^<br />\nx"),
]

def vsOriginal : List String :=
  cases.filterMap (fun c => if Stage2.transform c.2.1 == transformTotal c.2.1 then none else some ("PORT@" ++ c.1))

def vsRecordedPort : List String :=
  cases.filterMap (fun c => if transformTotal c.2.1 == c.2.2 then none else some ("MODEL@" ++ c.1))

def vsRecordedOriginal : List String :=
  cases.filterMap (fun c => if Stage2.transform c.2.1 == c.2.2 then none else some ("ORIG@" ++ c.1))

end BatteryHarness

#eval "cases=" ++ toString BatteryHarness.cases.length ++
  " portVOriginal=" ++ toString BatteryHarness.vsOriginal.length ++
  " portVRecorded=" ++ toString BatteryHarness.vsRecordedPort.length ++
  " origVRecorded=" ++ toString BatteryHarness.vsRecordedOriginal.length ++
  "\n" ++ String.intercalate "\n" (BatteryHarness.vsOriginal.take 10) ++
  "\n" ++ String.intercalate "\n" (BatteryHarness.vsRecordedOriginal.take 5)
