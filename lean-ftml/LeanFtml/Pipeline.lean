/-
  LeanFtml.Pipeline — the R3 pipeline runner.

  The runner applies rule mirrors in the reference's pipeline
  order. `RuleId` enumerates exactly the rules mirrored so far: a
  rule with no mirror is not a member of the type, so no pipeline
  in this model can silently stand in for an unmirrored rule (the
  brief's "no silent stand-ins" condition is enforced by the type,
  not by convention). Each later R3 stage extends `RuleId` as it
  adds its mirrors, and the stage pipelines are the reference's
  rule list restricted to the mirrored prefix, matching the
  restricted references the PHP state driver constructs.
-/

import LeanFtml.TokenState
import LeanFtml.FrameRules
import LeanFtml.CodeRule
import LeanFtml.FormRawRules
import LeanFtml.ModuleRules
import LeanFtml.NextRules
import LeanFtml.LinkRules
import LeanFtml.NotesRules
import LeanFtml.BlockRules
import LeanFtml.ContainRules
import LeanFtml.ListRules
import LeanFtml.TableRules
import LeanFtml.ParaRules
import LeanFtml.Inline1Rules
import LeanFtml.Inline2Rules
import LeanFtml.Inline3Rules
import LeanFtml.MiddleRules
import LeanFtml.Middle2Rules
import LeanFtml.FinalRules
import LeanFtml.IncludeRule

namespace LeanFtml

/-- The rules the runner can apply: exactly the rules mirrored so
    far (R3.1: the frame rules and Code; R3.2 adds Form, Raw, and
    Rawold; R3.3 adds the Module family; R3.4 adds Iftags, Comment,
    Iframe, Date, and Math; R3.5 adds Concatlines, Freelink, and
    Equationreference; R3.6 adds Footnote, Footnoteitem,
    Footnoteblock, Bibitem, Bibliography, and Bibcite; R3.7 adds
    Blockquote, Heading, and Toc; R3.8 adds Span, Size, Div,
    Collapsible, and Tabview; R3.9 adds List and Deflist; R3.10
    adds Table and Tableadv; R3.11 adds Image, Newline, and
    Paragraph; R3.12 adds Url, Email, Mathinline, and
    Interwiki; R3.13 adds Colortext, Strong, Emphasis,
    Underline, and Strikethrough). -/
inductive RuleId where
  | include
  | prefilter
  | delimiter
  | code
  | form
  | raw
  | rawold
  | modulepre
  | module
  | module654
  | iftags
  | comment
  | expr
  | ifexpr
  | iframe
  | date
  | math
  | concatlines
  | freelink
  | equationreference
  | footnote
  | footnoteitem
  | footnoteblock
  | bibitem
  | bibliography
  | bibcite
  | html
  | divprefilter
  | anchor
  | user
  | blockquote
  | heading
  | toc
  | horiz
  | separator
  | clearfloat
  | break
  | span
  | size
  | div
  | divalign
  | collapsible
  | tabview
  | note
  | gallery
  | list
  | deflist
  | table
  | tableadv
  | button
  | image
  | embed
  | social
  | file
  | center
  | newline
  | paragraph
  | url
  | email
  | mathinline
  | interwiki
  | colortext
  | strong
  | emphasis
  | underline
  | strikethrough
  | tt
  | superscript
  | subscript
  | typography
  | tighten
deriving DecidableEq, Inhabited

/-- Apply one rule mirror to a state. -/
def applyRule : RuleId → ParseState → ParseState
  | .include => includeRule
  | .prefilter => prefilterRule
  | .delimiter => delimiterRule
  | .code => codeRule
  | .form => formRule
  | .raw => rawRule
  | .rawold => rawoldRule
  | .modulepre => modulepreRule
  | .module => moduleRule
  | .module654 => module654Rule
  | .iftags => iftagsRule
  | .comment => commentRule
  | .expr => exprRule
  | .ifexpr => ifexprRule
  | .iframe => iframeRule
  | .date => dateRule
  | .math => mathRule
  | .concatlines => concatlinesRule
  | .freelink => freelinkRule
  | .equationreference => erefRule
  | .footnote => footnoteRule
  | .footnoteitem => footnoteitemRule
  | .footnoteblock => footnoteblockRule
  | .bibitem => bibitemRule
  | .bibliography => bibliographyRule
  | .bibcite => bibciteRule
  | .html => htmlRule
  | .divprefilter => divprefilterRule
  | .anchor => anchorRule
  | .user => userRule
  | .blockquote => blockquoteRule
  | .heading => headingRule
  | .toc => tocRule
  | .horiz => horizRule
  | .separator => separatorRule
  | .clearfloat => clearfloatRule
  | .break => breakRule
  | .span => spanRule
  | .size => sizeRule
  | .div => divRule
  | .divalign => divalignRule
  | .collapsible => collapsibleRule
  | .tabview => tabviewRule
  | .note => noteRule
  | .gallery => galleryRule
  | .list => listRule
  | .deflist => deflistRule
  | .table => tableRule
  | .tableadv => tableadvRule
  | .button => buttonRule
  | .image => imageRule
  | .embed => embedRule
  | .social => socialRule
  | .file => fileRule
  | .center => centerRule
  | .newline => newlineRule
  | .paragraph => paragraphRule
  | .url => urlRule
  | .email => emailRule
  | .mathinline => mathinlineRule
  | .interwiki => interwikiRule
  | .colortext => colortextRule
  | .strong => strongRule
  | .emphasis => emphasisRule
  | .underline => underlineRule
  | .strikethrough => strikethroughRule
  | .tt => ttRule
  | .superscript => superscriptRule
  | .subscript => subscriptRule
  | .typography => typographyRule
  | .tighten => tightenRule

/-- Apply a list of rules in order (the reference applies its rule
    list in order in `Text_Wiki::parse`). A fatal state (R3.4:
    Math's ProcessException aborted the parse) takes no further
    rules; states of the earlier pipelines never carry the flag,
    so their runs are unchanged. -/
def runRules (rules : List RuleId) (st : ParseState) : ParseState :=
  rules.foldl (fun s r => if s.fatal then s else applyRule r s) st

/-- The R3.1 pipeline: the reference's rule list restricted to the
    rules this stage mirrors, in pipeline order. The matching PHP
    oracle is `state-restricted.php Prefilter,Delimiter,Code`. -/
def pipelineR31 : List RuleId := [.prefilter, .delimiter, .code]

/-- The R3.2 pipeline: the reference's rule list restricted to the
    rules mirrored through R3.2, in pipeline order. The matching
    PHP oracle is `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold`. -/
def pipelineR32 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold]

/-- The R3.3 pipeline: the reference's rule list restricted to the
    rules mirrored through R3.3, in pipeline order. The matching
    PHP oracle is `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654`. -/
def pipelineR33 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654]

/-- The R3.4 pipeline: the reference's rule list restricted to the
    rules mirrored through R3.4, in pipeline order. The matching
    PHP oracle is `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math`. -/
def pipelineR34 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654, .iftags, .comment, .iframe,
   .date, .math]

/-- The R3.5 pipeline: the reference's rule list restricted to the
    rules mirrored through R3.5, in pipeline order. The matching
    PHP oracle is `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference`. -/
def pipelineR35 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654, .iftags, .comment, .iframe,
   .date, .math, .concatlines, .freelink, .equationreference]

/-- The R3.6 pipeline: the reference's rule list restricted to the
    rules mirrored through R3.6, in pipeline order. The matching
    PHP oracle is `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite`. -/
def pipelineR36 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654, .iftags, .comment, .iframe,
   .date, .math, .concatlines, .freelink, .equationreference,
   .footnote, .footnoteitem, .footnoteblock, .bibitem,
   .bibliography, .bibcite]

/-- The R3.7 pipeline: the reference's rule list restricted to
    the rules mirrored through R3.7, in pipeline order. The
    matching PHP oracle is `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,Heading,Toc`. -/
def pipelineR37 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654, .iftags, .comment, .iframe,
   .date, .math, .concatlines, .freelink, .equationreference,
   .footnote, .footnoteitem, .footnoteblock, .bibitem,
   .bibliography, .bibcite, .blockquote, .heading, .toc]

/-- The R3.8 pipeline: the reference's rule list restricted to
    the rules mirrored through R3.8, in pipeline order. The
    matching PHP oracle is `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,Heading,Toc,Span,Size,Div,Collapsible,Tabview`. -/
def pipelineR38 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654, .iftags, .comment, .iframe,
   .date, .math, .concatlines, .freelink, .equationreference,
   .footnote, .footnoteitem, .footnoteblock, .bibitem,
   .bibliography, .bibcite, .blockquote, .heading, .toc,
   .span, .size, .div, .collapsible, .tabview]

/-- The R3.9 pipeline: the reference's rule list restricted to
    the rules mirrored through R3.9, in pipeline order. The
    matching PHP oracle is `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,Heading,Toc,Span,Size,Div,Collapsible,Tabview,List,Deflist`. -/
def pipelineR39 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654, .iftags, .comment, .iframe,
   .date, .math, .concatlines, .freelink, .equationreference,
   .footnote, .footnoteitem, .footnoteblock, .bibitem,
   .bibliography, .bibcite, .blockquote, .heading, .toc,
   .span, .size, .div, .collapsible, .tabview, .list, .deflist]

/-- The R3.10 pipeline: the reference's rule list restricted to
    the rules mirrored through R3.10, in pipeline order. The
    matching PHP oracle is `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,Heading,Toc,Span,Size,Div,Collapsible,Tabview,List,Deflist,Table,Tableadv`. -/
def pipelineR310 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654, .iftags, .comment, .iframe,
   .date, .math, .concatlines, .freelink, .equationreference,
   .footnote, .footnoteitem, .footnoteblock, .bibitem,
   .bibliography, .bibcite, .blockquote, .heading, .toc,
   .span, .size, .div, .collapsible, .tabview, .list, .deflist,
   .table, .tableadv]

/-- The R3.11 pipeline: the reference's rule list restricted to
    the rules mirrored through R3.11, in pipeline order. The
    matching PHP oracle is `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,Heading,Toc,Span,Size,Div,Collapsible,Tabview,List,Deflist,Table,Tableadv,Image,Newline,Paragraph`. -/
def pipelineR311 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654, .iftags, .comment, .iframe,
   .date, .math, .concatlines, .freelink, .equationreference,
   .footnote, .footnoteitem, .footnoteblock, .bibitem,
   .bibliography, .bibcite, .blockquote, .heading, .toc,
   .span, .size, .div, .collapsible, .tabview, .list, .deflist,
   .table, .tableadv, .image, .newline, .paragraph]

/-- The R3.12 pipeline: the reference's rule list restricted to
    the rules mirrored through R3.12, in pipeline order. The
    matching PHP oracle is `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,Heading,Toc,Span,Size,Div,Collapsible,Tabview,List,Deflist,Table,Tableadv,Image,Newline,Paragraph,Url,Email,Mathinline,Interwiki`. -/
def pipelineR312 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654, .iftags, .comment, .iframe,
   .date, .math, .concatlines, .freelink, .equationreference,
   .footnote, .footnoteitem, .footnoteblock, .bibitem,
   .bibliography, .bibcite, .blockquote, .heading, .toc,
   .span, .size, .div, .collapsible, .tabview, .list, .deflist,
   .table, .tableadv, .image, .newline, .paragraph, .url,
   .email, .mathinline, .interwiki]

/-- The R3.13 pipeline: the reference's rule list restricted to
    the rules mirrored through R3.13, in pipeline order. The
    matching PHP oracle is `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,Heading,Toc,Span,Size,Div,Collapsible,Tabview,List,Deflist,Table,Tableadv,Image,Newline,Paragraph,Url,Email,Mathinline,Interwiki,Colortext,Strong,Emphasis,Underline,Strikethrough`. -/
def pipelineR313 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654, .iftags, .comment, .iframe,
   .date, .math, .concatlines, .freelink, .equationreference,
   .footnote, .footnoteitem, .footnoteblock, .bibitem,
   .bibliography, .bibcite, .blockquote, .heading, .toc,
   .span, .size, .div, .collapsible, .tabview, .list, .deflist,
   .table, .tableadv, .image, .newline, .paragraph, .url,
   .email, .mathinline, .interwiki, .colortext, .strong,
   .emphasis, .underline, .strikethrough]

/-- The R3.14 pipeline: the reference's rule list restricted to
    the rules mirrored through R3.14, in pipeline order. The
    matching PHP oracle is `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,Heading,Toc,Span,Size,Div,Collapsible,Tabview,List,Deflist,Table,Tableadv,Image,Newline,Paragraph,Url,Email,Mathinline,Interwiki,Colortext,Strong,Emphasis,Underline,Strikethrough,Tt,Superscript,Subscript,Typography,Tighten`. -/
def pipelineR314 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654, .iftags, .comment, .iframe,
   .date, .math, .concatlines, .freelink, .equationreference,
   .footnote, .footnoteitem, .footnoteblock, .bibitem,
   .bibliography, .bibcite, .blockquote, .heading, .toc,
   .span, .size, .div, .collapsible, .tabview, .list, .deflist,
   .table, .tableadv, .image, .newline, .paragraph, .url,
   .email, .mathinline, .interwiki, .colortext, .strong,
   .emphasis, .underline, .strikethrough, .tt, .superscript,
   .subscript, .typography, .tighten]

/-- The R3.15 pipeline: the reference's rule list restricted to
    the rules mirrored through R3.15, in pipeline order (the
    R3.14 pipeline plus Horiz, Separator, Clearfloat, and Break
    slotted between Toc and Span, and Center slotted between
    Image and Newline, their true pipeline positions). The
    matching PHP oracle is `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,Heading,Toc,Horiz,Separator,Clearfloat,Break,Span,Size,Div,Collapsible,Tabview,List,Deflist,Table,Tableadv,Image,Center,Newline,Paragraph,Url,Email,Mathinline,Interwiki,Colortext,Strong,Emphasis,Underline,Strikethrough,Tt,Superscript,Subscript,Typography,Tighten`. -/
def pipelineR315 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654, .iftags, .comment, .iframe,
   .date, .math, .concatlines, .freelink, .equationreference,
   .footnote, .footnoteitem, .footnoteblock, .bibitem,
   .bibliography, .bibcite, .blockquote, .heading, .toc,
   .horiz, .separator, .clearfloat, .break,
   .span, .size, .div, .collapsible, .tabview, .list, .deflist,
   .table, .tableadv, .image, .center, .newline, .paragraph,
   .url, .email, .mathinline, .interwiki, .colortext, .strong,
   .emphasis, .underline, .strikethrough, .tt, .superscript,
   .subscript, .typography, .tighten]

/-- The R3.16 pipeline: the reference's rule list restricted to
    the rules mirrored through R3.16, in pipeline order (the
    R3.15 pipeline plus Divprefilter slotted between Bibcite
    and Blockquote, Divalign between Div and Collapsible, and
    Note and Gallery between Tabview and List, their true
    pipeline positions). The matching PHP oracle is
    `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Divprefilter,Blockquote,Heading,Toc,Horiz,Separator,Clearfloat,Break,Span,Size,Div,Divalign,Collapsible,Tabview,Note,Gallery,List,Deflist,Table,Tableadv,Image,Center,Newline,Paragraph,Url,Email,Mathinline,Interwiki,Colortext,Strong,Emphasis,Underline,Strikethrough,Tt,Superscript,Subscript,Typography,Tighten`. -/
def pipelineR316 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654, .iftags, .comment, .iframe,
   .date, .math, .concatlines, .freelink, .equationreference,
   .footnote, .footnoteitem, .footnoteblock, .bibitem,
   .bibliography, .bibcite, .divprefilter, .blockquote, .heading,
   .toc, .horiz, .separator, .clearfloat, .break,
   .span, .size, .div, .divalign, .collapsible, .tabview, .note,
   .gallery, .list, .deflist,
   .table, .tableadv, .image, .center, .newline, .paragraph,
   .url, .email, .mathinline, .interwiki, .colortext, .strong,
   .emphasis, .underline, .strikethrough, .tt, .superscript,
   .subscript, .typography, .tighten]

/-- The R3.17 pipeline: the reference's rule list restricted to
    the rules mirrored through R3.17, in pipeline order (the
    R3.16 pipeline plus Anchor and User slotted between
    Divprefilter and Blockquote, Button between Tableadv and
    Image, and Embed, Social, and File between Image and
    Center, their true pipeline positions): sixty-seven
    rules, the full pipeline minus Include, which stands on
    its Tier 1 proof as the recorded boundary. The matching
    PHP oracle is `state-restricted.php
    Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Divprefilter,Anchor,User,Blockquote,Heading,Toc,Horiz,Separator,Clearfloat,Break,Span,Size,Div,Divalign,Collapsible,Tabview,Note,Gallery,List,Deflist,Table,Tableadv,Button,Image,Embed,Social,File,Center,Newline,Paragraph,Url,Email,Mathinline,Interwiki,Colortext,Strong,Emphasis,Underline,Strikethrough,Tt,Superscript,Subscript,Typography,Tighten`. -/
def pipelineR317 : List RuleId :=
  [.prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654, .iftags, .comment, .expr,
   .ifexpr, .iframe,
   .date, .math, .concatlines, .freelink, .equationreference,
   .footnote, .footnoteitem, .footnoteblock, .bibitem,
   .bibliography, .bibcite, .html, .divprefilter, .anchor, .user,
   .blockquote, .heading, .toc, .horiz, .separator, .clearfloat,
   .break, .span, .size, .div, .divalign, .collapsible, .tabview,
   .note, .gallery, .list, .deflist,
   .table, .tableadv, .button, .image, .embed, .social, .file,
   .center, .newline, .paragraph,
   .url, .email, .mathinline, .interwiki, .colortext, .strong,
   .emphasis, .underline, .strikethrough, .tt, .superscript,
   .subscript, .typography, .tighten]

/-- The R4.2 render-stage prefix: the first fifty-seven rules of the
    full pipeline, in pipeline order, ending at `Paragraph` (pipeline
    position 57), the last prose-core render rule. -/
def pipelineR42 : List RuleId :=
  [.include, .prefilter, .delimiter, .code, .form, .raw, .rawold,
   .modulepre, .module, .module654, .iftags, .comment, .expr,
   .ifexpr, .iframe,
   .date, .math, .concatlines, .freelink, .equationreference,
   .footnote, .footnoteitem, .footnoteblock, .bibitem,
   .bibliography, .bibcite, .html, .divprefilter, .anchor, .user,
   .blockquote, .heading, .toc, .horiz, .separator, .clearfloat,
   .break, .span, .size, .div, .divalign, .collapsible, .tabview,
   .note, .gallery, .list, .deflist,
   .table, .tableadv, .button, .image, .embed, .social, .file,
   .center, .newline, .paragraph]

theorem pipelineR42_length : pipelineR42.length = 57 := rfl

/-- The full seventy-one-rule pipeline (snapshot-44): `Include` at
    pipeline position 1 followed by the seventy rules of
    `pipelineR317`, in the exact order of `Text_Wiki::$rules` in
    `ref-php/text-wiki/Text/Wiki.php`. -/
def pipelineFull : List RuleId :=
  .include :: pipelineR317

theorem pipelineFull_length : pipelineFull.length = 71 := rfl

/-- The R4.2 prefix is exactly the full pipeline's first fifty-seven
    rules. -/
theorem pipelineR42_prefix : pipelineFull.take 57 = pipelineR42 := rfl

/-- The R4.3 render-stage prefix: the complete seventy-one-rule
    pipeline. -/
def pipelineR43 : List RuleId :=
  pipelineFull

theorem pipelineR43_length : pipelineR43.length = 71 := rfl

/-- The R4.3 prefix is the full pipeline itself. -/
theorem pipelineR43_full : pipelineR43 = pipelineFull := rfl

/-- The R4.4 render-stage prefix: the complete seventy-one-rule
    pipeline. -/
def pipelineR44 : List RuleId :=
  pipelineFull

theorem pipelineR44_length : pipelineR44.length = 71 := rfl

/-- The R4.4 prefix is the full pipeline itself. -/
theorem pipelineR44_full : pipelineR44 = pipelineFull := rfl

/-- The R4.5 render-stage prefix: the complete seventy-one-rule
    pipeline. -/
def pipelineR45 : List RuleId :=
  pipelineFull

theorem pipelineR45_length : pipelineR45.length = 71 := rfl

/-- The R4.5 prefix is the full pipeline itself. -/
theorem pipelineR45_full : pipelineR45 = pipelineFull := rfl

/-- The R4.6 render-stage prefix: the complete seventy-one-rule
    pipeline. -/
def pipelineR46 : List RuleId :=
  pipelineFull

theorem pipelineR46_length : pipelineR46.length = 71 := rfl

/-- The R4.6 prefix is the full pipeline itself. -/
theorem pipelineR46_full : pipelineR46 = pipelineFull := rfl

/-- The R4.7 render-stage prefix: the complete seventy-one-rule
    pipeline. -/
def pipelineR47 : List RuleId :=
  pipelineFull

theorem pipelineR47_length : pipelineR47.length = 71 := rfl

/-- The R4.7 prefix is the full pipeline itself. -/
theorem pipelineR47_full : pipelineR47 = pipelineFull := rfl

/-- The R4.8 render-stage prefix: the complete seventy-one-rule
    pipeline. -/
def pipelineR48 : List RuleId :=
  pipelineFull

theorem pipelineR48_length : pipelineR48.length = 71 := rfl

/-- The R4.8 prefix is the full pipeline itself. -/
theorem pipelineR48_full : pipelineR48 = pipelineFull := rfl

end LeanFtml
