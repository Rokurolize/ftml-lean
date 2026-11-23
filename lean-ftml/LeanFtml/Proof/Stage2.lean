import LeanFtml.Proof.Stage2FrameComp
import LeanFtml.Proof.Stage2TidyCore

/- Umbrella module for adoption. It imports both quarantined Stage 2 modules
   and re-exports their public surface under `LeanFtml.Proof.Stage2`, so a
   consumer can adopt the totalized model from one import. The core module
   imports the frame-compensation module, never the reverse. -/
namespace LeanFtml.Proof.Stage2

export LeanFtml.Proof.Stage2TidyCore (
  Stage2Config stage2TidyCore transformTotal Stage2Result runWithPasses
  HtmlNode HtmlNode.text HtmlNode.voidNode HtmlNode.rawElem HtmlNode.elem HtmlNode.root
  voidTags inlineTags prunableInlineTags istackTags blockTags pClosingBlocks
  isAsciiWs isTagNameStart isTagNameChar toLowerChars toLowerStr
  scanQuoted scanTagRest parseAndNormAttrs scanUntilCloseTag
  pass1Loop pass1FrameAndTagNorm
  HtmlToken tokenizeHtmlLoop tokenizeHtml
  OpenEntry IStackEntry RepairState
  closeInlinesForBlockEnd inScopeDepth
  popDepthPopInline popDepthNoIstack popDepthDeferIstack popCrossedForReopen
  repairInlineEnd stepToken pass3RepairStack
  TreeFrame addNodeToStack unwindTreeFrames parseWellFormedTree
  isBlockNode isInlineElem
  mergeAndCollapseTexts hoistAndEjectInline trimBlockChildren
  isBrNode isWsTextNode isTableElem dropBlockSandwichedBrs
  processNodePass4 serializeTreeRaw
  pass4WhitespaceAndPrune serializeChildrenPass5 serializeNodePass5 pass5BlockJoining
  containsUnwrapTrigger unwrapScopeScan unwrapBalanced findFirstCloseP
  consumeTrailingDoubleNl pass2Loop pass2ParagraphUnwrap)

export LeanFtml.Proof.Stage2FrameComp (
  pass2LoopT findFirstClosePT unwrapScopeScanT containsUnwrapTriggerT
  dropBlockSandwichedBrsWith)

end LeanFtml.Proof.Stage2
