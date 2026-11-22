// Lean compiler output
// Module: LeanFtml.RenderCore
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.ModuleRules
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
uint8_t l_List_elem___at___00System_Uri_UriEscape_uriEscapeAsciiChar_spec__0(uint32_t, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_isContByte(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_utf8Valid(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___redArg(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instInhabitedRenderConf_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedRenderConf_default___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedRenderConf_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedRenderConf_default = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedRenderConf_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedRenderConf = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedRenderConf_default___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnote_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnote_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnote_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnote_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteitem_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteitem_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteitem_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteitem_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteblock_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteblock_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteblock_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteblock_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibitem_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibitem_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibitem_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibitem_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibliography_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibliography_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibliography_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibliography_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibcite_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibcite_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibcite_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibcite_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_paragraph_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_paragraph_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_paragraph_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_paragraph_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_newline_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_newline_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_newline_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_newline_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_break_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_break_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_break_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_break_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_center_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_center_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_center_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_center_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_horiz_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_horiz_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_horiz_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_horiz_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_separator_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_separator_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_separator_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_separator_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_clearfloat_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_clearfloat_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_clearfloat_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_clearfloat_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_blockquote_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_blockquote_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_blockquote_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_blockquote_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_note_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_note_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_note_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_note_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_divalign_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_divalign_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_divalign_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_divalign_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_comment_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_comment_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_comment_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_comment_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_delimiter_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_delimiter_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_delimiter_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_delimiter_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_url_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_url_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_url_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_url_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_email_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_email_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_email_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_email_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_mathinline_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_mathinline_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_mathinline_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_mathinline_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_interwiki_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_interwiki_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_interwiki_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_interwiki_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_colortext_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_colortext_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_colortext_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_colortext_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strong_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strong_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strong_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strong_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_emphasis_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_emphasis_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_emphasis_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_emphasis_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_underline_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_underline_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_underline_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_underline_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strikethrough_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strikethrough_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strikethrough_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strikethrough_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_superscript_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_superscript_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_superscript_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_superscript_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_subscript_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_subscript_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_subscript_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_subscript_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_typography_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_typography_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_typography_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_typography_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tighten_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tighten_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tighten_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tighten_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_raw_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_raw_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_raw_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_raw_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_rawold_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_rawold_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_rawold_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_rawold_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_form_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_form_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_form_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_form_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_heading_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_heading_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_heading_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_heading_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_toc_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_toc_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_toc_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_toc_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_list_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_list_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_list_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_list_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_deflist_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_deflist_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_deflist_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_deflist_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_table_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_table_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_table_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_table_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tableadv_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tableadv_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tableadv_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tableadv_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_equationreference_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_equationreference_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_equationreference_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_equationreference_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_anchor_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_anchor_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_anchor_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_anchor_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_collapsible_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_collapsible_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_collapsible_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_collapsible_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tabview_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tabview_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tabview_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tabview_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_button_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_button_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_button_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_button_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_iframe_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_iframe_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_iframe_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_iframe_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_date_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_date_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_date_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_date_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_file_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_file_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_file_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_file_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_size_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_size_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_size_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_size_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_span_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_span_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_span_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_span_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_div_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_div_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_div_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_div_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_code_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_code_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_code_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_code_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_embed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_embed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_embed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_embed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_freelink_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_freelink_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_freelink_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_freelink_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module654_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module654_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module654_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module654_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_math_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_math_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_math_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_math_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_image_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_image_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_image_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_image_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_gallery_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_gallery_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_gallery_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_gallery_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_user_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_user_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_user_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_user_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_RenderRuleId_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqRenderRuleId(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqRenderRuleId___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instInhabitedRenderRuleId_default;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instInhabitedRenderRuleId;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.RenderRuleId.footnote"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "LeanFtml.RenderRuleId.footnoteitem"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "LeanFtml.RenderRuleId.footnoteblock"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.RenderRuleId.bibitem"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "LeanFtml.RenderRuleId.bibliography"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.RenderRuleId.bibcite"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__11_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.RenderRuleId.paragraph"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__13_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.RenderRuleId.newline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__15_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.RenderRuleId.break"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__17_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.RenderRuleId.center"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__18_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__19_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.RenderRuleId.horiz"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__20_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__21_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.RenderRuleId.separator"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__22_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__23_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.RenderRuleId.clearfloat"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__24_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__25_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.RenderRuleId.blockquote"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__26_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__26_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__27_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.RenderRuleId.note"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__28_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__28_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__29_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.RenderRuleId.divalign"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__30_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__30_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__31_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.RenderRuleId.comment"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__32_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__32_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__33_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.RenderRuleId.delimiter"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__34_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__34_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__35_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanFtml.RenderRuleId.url"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__36_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__36_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__37 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__37_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.RenderRuleId.email"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__38_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__38_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__39 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__39_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.RenderRuleId.mathinline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__40_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__40_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__41 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__41_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.RenderRuleId.interwiki"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__42_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__42_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__43 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__43_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.RenderRuleId.colortext"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__44 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__44_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__44_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__45 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__45_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.RenderRuleId.strong"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__46 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__46_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__46_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__47 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__47_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.RenderRuleId.emphasis"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__48 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__48_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__48_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__49 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__49_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.RenderRuleId.underline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__50 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__50_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__50_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__51 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__51_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "LeanFtml.RenderRuleId.strikethrough"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__52 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__52_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__52_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__53 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__53_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "LeanFtml.RenderRuleId.tt"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__54 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__54_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__54_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__55 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__55_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.RenderRuleId.superscript"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__56 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__56_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__56_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__57 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__57_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.RenderRuleId.subscript"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__58 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__58_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__58_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__59 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__59_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "LeanFtml.RenderRuleId.typography"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__60 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__60_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__60_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__61 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__61_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.RenderRuleId.tighten"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__62 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__62_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__62_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__63 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__63_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanFtml.RenderRuleId.raw"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__64 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__64_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__64_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__65 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__65_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.RenderRuleId.rawold"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__66 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__66_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__66_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__67 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__67_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.RenderRuleId.form"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__68 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__68_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__68_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__69 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__69_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.RenderRuleId.heading"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__70 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__70_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__70_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__71 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__71_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanFtml.RenderRuleId.toc"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__72 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__72_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__72_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__73 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__73_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.RenderRuleId.list"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__74 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__74_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__74_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__75 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__75_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.RenderRuleId.deflist"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__76 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__76_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__76_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__77 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__77_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.RenderRuleId.table"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__78 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__78_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__78_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__79 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__79_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.RenderRuleId.tableadv"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__80 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__80_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__80_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__81 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__81_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "LeanFtml.RenderRuleId.equationreference"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__82 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__82_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__82_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__83 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__83_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.RenderRuleId.anchor"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__84 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__84_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__84_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__85 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__85_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "LeanFtml.RenderRuleId.collapsible"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__86 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__86_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__86_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__87 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__87_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.RenderRuleId.tabview"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__88 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__88_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__88_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__89 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__89_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.RenderRuleId.button"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__90 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__90_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__90_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__91 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__91_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.RenderRuleId.iframe"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__92 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__92_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__92_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__93 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__93_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.RenderRuleId.date"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__94 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__94_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__94_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__95 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__95_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.RenderRuleId.file"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__96 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__96_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__96_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__97 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__97_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.RenderRuleId.size"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__98 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__98_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__98_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__99 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__99_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.RenderRuleId.span"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__100 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__100_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__100_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__101 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__101_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "LeanFtml.RenderRuleId.div"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__102 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__102_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__102_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__103 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__103_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.RenderRuleId.code"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__104 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__104_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__104_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__105 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__105_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.RenderRuleId.embed"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__106 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__106_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__106_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__107 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__107_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "LeanFtml.RenderRuleId.freelink"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__108 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__108_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__108_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__109 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__109_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "LeanFtml.RenderRuleId.module"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__110 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__110_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__110_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__111 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__111_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "LeanFtml.RenderRuleId.module654"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__112 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__112_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__113_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__112_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__113 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__113_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.RenderRuleId.math"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__114 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__114_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__115_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__114_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__115 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__115_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__116_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "LeanFtml.RenderRuleId.image"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__116 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__116_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__116_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__117 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__117_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "LeanFtml.RenderRuleId.gallery"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__118 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__118_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__118_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__119 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__119_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "LeanFtml.RenderRuleId.user"};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__120 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__120_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__120_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__121 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__121_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_instReprRenderRuleId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Footnote"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Footnoteitem"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Footnoteblock"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Bibitem"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Bibliography"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__4_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Bibcite"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Paragraph"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__6_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Newline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Break"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__8_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Center"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Horiz"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__10_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Separator"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__11_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Clearfloat"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__12_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Blockquote"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__13_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Note"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__14_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Divalign"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__15_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Comment"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__16_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Delimiter"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__17_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Url"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__18_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Email"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__19_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Mathinline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__20_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Interwiki"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__21_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Colortext"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__22_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Strong"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__23_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Emphasis"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__24_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Underline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__25_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Strikethrough"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__26_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Tt"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__27_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Superscript"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__28_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Subscript"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__29_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Typography"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__30_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Tighten"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__31_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Raw"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__32_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Rawold"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__33_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Form"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__34_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Heading"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__35_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Toc"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__36_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__37 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__37_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Deflist"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__38_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Table"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__39 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__39_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Tableadv"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__40_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Equationreference"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__41 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__41_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Anchor"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__42_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Collapsible"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__43 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__43_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Tabview"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__44 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__44_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Button"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__45 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__45_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Iframe"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__46 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__46_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Date"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__47 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__47_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "File"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__48 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__48_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Size"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__49 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__49_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Span"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__50 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__50_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Div"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__51 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__51_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Code"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__52 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__52_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Embed"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__53 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__53_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Freelink"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__54 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__54_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Module"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__55 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__55_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Module654"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__56 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__56_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Math"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__57 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__57_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Image"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__58 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__58_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Gallery"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__59 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__59_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRuleName___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "User"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___closed__60 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__60_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(60) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(58) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(55) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(54) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(53) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(52) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(49) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(47) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(41) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(40) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__21_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(37) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__23_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__25_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__26_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__27_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__28_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__29_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__30_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(29) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__31_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__32_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__33_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(26) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__34_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(25) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__35_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(24) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__36_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__37 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__37_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__38_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__39 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__39_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__40_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__41 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__41_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__42_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__43 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__43_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__44 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__44_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__45 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__45_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__46 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__46_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__47 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__47_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__48 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__48_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__49 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__49_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__50 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__50_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__51 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__51_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__52 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__52_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__53 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__53_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__54 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__54_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__55 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__55_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__56 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__56_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__57 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__57_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__58 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__58_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__59 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__59_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__60 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__60_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___boxed(lean_object*);
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__0;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__14;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__15;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__16;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__17;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__18;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__19;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__20;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__21;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__22;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__23;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__24;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__25;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__26;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__27;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__28;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__29;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__30;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__31;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__32;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__33;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__34;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__35;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__36;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__37;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__38;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__39;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__40;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__41;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__42;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__43;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__44;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__45;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__46;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__47;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__48;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__49;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__50;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__51;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__52;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__53;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__54;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__55;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__56;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__57;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__58;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__59;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__60;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__61;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__62;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__63;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__64;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__65_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__65;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__66;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__67_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__67;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__68;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__69_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__69;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__70;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__71;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__72;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__73_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__73;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__74;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__75;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__76_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__76;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__77_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__77;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__78_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__78;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__79_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__79;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__80_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__80;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__81_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__81;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__82;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__83_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__83;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__84_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__84;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__85_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__85;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__86_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__86;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__87_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__87;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__88_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__88;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__89_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__89;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__90_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__90;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__91_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__91;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__92_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__92;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__93_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__93;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__94_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__94;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__95_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__95;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__96_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__96;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__97_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__97;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__98_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__98;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__99_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__99;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__100_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__100;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__101_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__101;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__102_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__102;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__103_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__103;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__104_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__104;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__105_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__105;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__106_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__106;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__107_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__107;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__108_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__108;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__109_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__109;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__110_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__110;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__111_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__111;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__112_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__112;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__113_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__113;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__114_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__114;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__115_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__115;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__116_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__116;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__117_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__117;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__118_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__118;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__119_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__119;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__120_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__120;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__121_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__121;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mirroredRenderRules;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_natBytes_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_natBytes(lean_object*);
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_intBytes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_intBytes___closed__0;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_intBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_intBytes___boxed(lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_renderOptValBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderOptValBytes___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderOptValBytes___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderOptValBytes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(49) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderOptValBytes___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderOptValBytes___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderOptValBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderOptValBytes___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optStrBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optStrBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseNatBytes_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseNatBytes_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseNatBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseNatBytes___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optNat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__0___boxed__const__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__0;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__1_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_phpEmptyOpt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phpEmptyOpt___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(59) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(116) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(103) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(108) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__5_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(111) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(117) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__7_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(113) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__7_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__8_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(112) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(109) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__10_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(97) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__11_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__13_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escHtmlNoQuotesByte(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(57) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(51) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(35) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__4_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_htmlSpecialCharsCompat_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_utf8Fffd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(189) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_utf8Fffd___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_utf8Fffd___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_utf8Fffd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(191) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_utf8Fffd___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_utf8Fffd___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_utf8Fffd___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_utf8Fffd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(239) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_utf8Fffd___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_utf8Fffd___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_utf8Fffd___closed__2_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_utf8Fffd = (const lean_object*)&lp_lean_x2dftml_LeanFtml_utf8Fffd___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_xhtmlPreText(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_xhtmlPreText___boxed(lean_object*);
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdSubstBytes = (const lean_object*)&lp_lean_x2dftml_LeanFtml_utf8Fffd___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_reconvertFffdBytes(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isUfffdChar(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isUfffdChar___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__3_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_tocStripDelim = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocStripDelim___closed__3_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripHtmlTags_go(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripHtmlTags_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripHtmlTags(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findTocDelim_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findTocDelim_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findTocDelim(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findTocDelim___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_postStripToc_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_postStripToc(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_instInhabitedRenderOutcome_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedRenderOutcome_default___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedRenderOutcome_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedRenderOutcome_default = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedRenderOutcome_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_instInhabitedRenderOutcome = (const lean_object*)&lp_lean_x2dftml_LeanFtml_instInhabitedRenderOutcome_default___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_RenderOutcome_isComplete(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderOutcome_isComplete___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushUnique___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushUnique(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "[[UNMIRRORED:"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unmirroredFallback(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_missingKeyFallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "[[MISSING_TOKEN:"};
static const lean_object* lp_lean_x2dftml_LeanFtml_missingKeyFallback___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_missingKeyFallback___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_missingKeyFallback___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_missingKeyFallback___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_missingKeyFallback(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_segHasUfffd(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segHasUfffd___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_text_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_text_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_fake_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_fake_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_tok_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_tok_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdTokInfo(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "bullet_item_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "number_item_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "bullet_list_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "number_list_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "bullet_item_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "number_item_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "bullet_list_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "number_list_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdIsInlineStart(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsInlineStart___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdIsParaStart(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsParaStart___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdIsParaEnd(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsParaEnd___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdIsHeadingEnd(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsHeadingEnd___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeUfffd_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeUfffd(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_flattenUfffd(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdAllFake(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdAllFake___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdAtLeast2(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdAtLeast2___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdOnlyFakesPara(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdOnlyFakesPara___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs_go___boxed__const__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs_go(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lstripWs(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lstripWs___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_skipFakes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_skipFakes___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_boundaryFake(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_boundaryFake___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_gatherUfffd(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderCaptured(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_takeInline(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_takeInline___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_swallowedBreaks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "<br />\n<br />"};
static const lean_object* lp_lean_x2dftml_LeanFtml_swallowedBreaks___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_swallowedBreaks___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_swallowedBreaks___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_swallowedBreaks___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_swallowedBreaks;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdLeakRun(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdWalk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdWalk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdBytes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_renderSegsLoop_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_renderSegsLoop_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderSegsLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_renderWith_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_renderWith_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__7_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__7_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__5_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__5_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__7_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__7_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__5_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__5_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_00ufffdTokInfo_match__4_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_00ufffdTokInfo_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_renderCaptured_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_renderCaptured_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_postStripToc_go_match__5_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_postStripToc_go_match__5_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_postStripToc_go_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_postStripToc_go_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_postStripToc_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_postStripToc_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_00ufffdExLookup_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_00ufffdExLookup_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExLookup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExLookup___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "</p>\n\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<p>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "</strong>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "<strong>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "</span></h1>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__9;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__10_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "<h1 id=\"toc0\"><span>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__11_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "</li>\n</ul>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "<li>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<ul>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__19;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_00ufffdEx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdEx___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdEx___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_00ufffdEx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdEx___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdEx___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_00ufffdEx___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*13 + 0, .m_other = 13, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdEx___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_00ufffdEx___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdEx___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdEx(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraPair___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__6_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraPair___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraPair___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraPair___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraPair___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraPair___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraPair___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraPair___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_renderRuleName___closed__6_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__8_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraPair___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraPair___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraPair___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraPair___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraPair___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraPair___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraPair___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraPair___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraPair___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraPair___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_paraPair___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_paraPair___closed__1_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_paraPair___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_paraPair___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraPair___closed__5_value;
LEAN_EXPORT const lean_object* lp_lean_x2dftml_LeanFtml_paraPair = (const lean_object*)&lp_lean_x2dftml_LeanFtml_paraPair___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_ctorIdx___impl(uint8_t v_x_5_){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = lean_box(v_x_5_);
v___x_7_ = lean_obj_tag_nat(v___x_6_);
lean_dec(v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_ctorIdx___impl___boxed(lean_object* v_x_8_){
_start:
{
uint8_t v_x_4__boxed_9_; lean_object* v_res_10_; 
v_x_4__boxed_9_ = lean_unbox(v_x_8_);
v_res_10_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_ctorIdx___impl(v_x_4__boxed_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_ctorElim___redArg(lean_object* v_k_11_){
_start:
{
lean_inc(v_k_11_);
return v_k_11_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_ctorElim___redArg___boxed(lean_object* v_k_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_ctorElim___redArg(v_k_12_);
lean_dec(v_k_12_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_ctorElim(lean_object* v_motive_14_, lean_object* v_ctorIdx_15_, uint8_t v_t_16_, lean_object* v_h_17_, lean_object* v_k_18_){
_start:
{
lean_inc(v_k_18_);
return v_k_18_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
uint8_t v_t_boxed_24_; lean_object* v_res_25_; 
v_t_boxed_24_ = lean_unbox(v_t_21_);
v_res_25_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_boxed_24_, v_h_22_, v_k_23_);
lean_dec(v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnote_elim___redArg(lean_object* v_footnote_26_){
_start:
{
lean_inc(v_footnote_26_);
return v_footnote_26_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnote_elim___redArg___boxed(lean_object* v_footnote_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_footnote_elim___redArg(v_footnote_27_);
lean_dec(v_footnote_27_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnote_elim(lean_object* v_motive_29_, uint8_t v_t_30_, lean_object* v_h_31_, lean_object* v_footnote_32_){
_start:
{
lean_inc(v_footnote_32_);
return v_footnote_32_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnote_elim___boxed(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_footnote_36_){
_start:
{
uint8_t v_t_boxed_37_; lean_object* v_res_38_; 
v_t_boxed_37_ = lean_unbox(v_t_34_);
v_res_38_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_footnote_elim(v_motive_33_, v_t_boxed_37_, v_h_35_, v_footnote_36_);
lean_dec(v_footnote_36_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteitem_elim___redArg(lean_object* v_footnoteitem_39_){
_start:
{
lean_inc(v_footnoteitem_39_);
return v_footnoteitem_39_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteitem_elim___redArg___boxed(lean_object* v_footnoteitem_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteitem_elim___redArg(v_footnoteitem_40_);
lean_dec(v_footnoteitem_40_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteitem_elim(lean_object* v_motive_42_, uint8_t v_t_43_, lean_object* v_h_44_, lean_object* v_footnoteitem_45_){
_start:
{
lean_inc(v_footnoteitem_45_);
return v_footnoteitem_45_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteitem_elim___boxed(lean_object* v_motive_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_footnoteitem_49_){
_start:
{
uint8_t v_t_boxed_50_; lean_object* v_res_51_; 
v_t_boxed_50_ = lean_unbox(v_t_47_);
v_res_51_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteitem_elim(v_motive_46_, v_t_boxed_50_, v_h_48_, v_footnoteitem_49_);
lean_dec(v_footnoteitem_49_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteblock_elim___redArg(lean_object* v_footnoteblock_52_){
_start:
{
lean_inc(v_footnoteblock_52_);
return v_footnoteblock_52_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteblock_elim___redArg___boxed(lean_object* v_footnoteblock_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteblock_elim___redArg(v_footnoteblock_53_);
lean_dec(v_footnoteblock_53_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteblock_elim(lean_object* v_motive_55_, uint8_t v_t_56_, lean_object* v_h_57_, lean_object* v_footnoteblock_58_){
_start:
{
lean_inc(v_footnoteblock_58_);
return v_footnoteblock_58_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteblock_elim___boxed(lean_object* v_motive_59_, lean_object* v_t_60_, lean_object* v_h_61_, lean_object* v_footnoteblock_62_){
_start:
{
uint8_t v_t_boxed_63_; lean_object* v_res_64_; 
v_t_boxed_63_ = lean_unbox(v_t_60_);
v_res_64_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_footnoteblock_elim(v_motive_59_, v_t_boxed_63_, v_h_61_, v_footnoteblock_62_);
lean_dec(v_footnoteblock_62_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibitem_elim___redArg(lean_object* v_bibitem_65_){
_start:
{
lean_inc(v_bibitem_65_);
return v_bibitem_65_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibitem_elim___redArg___boxed(lean_object* v_bibitem_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_bibitem_elim___redArg(v_bibitem_66_);
lean_dec(v_bibitem_66_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibitem_elim(lean_object* v_motive_68_, uint8_t v_t_69_, lean_object* v_h_70_, lean_object* v_bibitem_71_){
_start:
{
lean_inc(v_bibitem_71_);
return v_bibitem_71_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibitem_elim___boxed(lean_object* v_motive_72_, lean_object* v_t_73_, lean_object* v_h_74_, lean_object* v_bibitem_75_){
_start:
{
uint8_t v_t_boxed_76_; lean_object* v_res_77_; 
v_t_boxed_76_ = lean_unbox(v_t_73_);
v_res_77_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_bibitem_elim(v_motive_72_, v_t_boxed_76_, v_h_74_, v_bibitem_75_);
lean_dec(v_bibitem_75_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibliography_elim___redArg(lean_object* v_bibliography_78_){
_start:
{
lean_inc(v_bibliography_78_);
return v_bibliography_78_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibliography_elim___redArg___boxed(lean_object* v_bibliography_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_bibliography_elim___redArg(v_bibliography_79_);
lean_dec(v_bibliography_79_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibliography_elim(lean_object* v_motive_81_, uint8_t v_t_82_, lean_object* v_h_83_, lean_object* v_bibliography_84_){
_start:
{
lean_inc(v_bibliography_84_);
return v_bibliography_84_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibliography_elim___boxed(lean_object* v_motive_85_, lean_object* v_t_86_, lean_object* v_h_87_, lean_object* v_bibliography_88_){
_start:
{
uint8_t v_t_boxed_89_; lean_object* v_res_90_; 
v_t_boxed_89_ = lean_unbox(v_t_86_);
v_res_90_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_bibliography_elim(v_motive_85_, v_t_boxed_89_, v_h_87_, v_bibliography_88_);
lean_dec(v_bibliography_88_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibcite_elim___redArg(lean_object* v_bibcite_91_){
_start:
{
lean_inc(v_bibcite_91_);
return v_bibcite_91_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibcite_elim___redArg___boxed(lean_object* v_bibcite_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_bibcite_elim___redArg(v_bibcite_92_);
lean_dec(v_bibcite_92_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibcite_elim(lean_object* v_motive_94_, uint8_t v_t_95_, lean_object* v_h_96_, lean_object* v_bibcite_97_){
_start:
{
lean_inc(v_bibcite_97_);
return v_bibcite_97_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_bibcite_elim___boxed(lean_object* v_motive_98_, lean_object* v_t_99_, lean_object* v_h_100_, lean_object* v_bibcite_101_){
_start:
{
uint8_t v_t_boxed_102_; lean_object* v_res_103_; 
v_t_boxed_102_ = lean_unbox(v_t_99_);
v_res_103_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_bibcite_elim(v_motive_98_, v_t_boxed_102_, v_h_100_, v_bibcite_101_);
lean_dec(v_bibcite_101_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_paragraph_elim___redArg(lean_object* v_paragraph_104_){
_start:
{
lean_inc(v_paragraph_104_);
return v_paragraph_104_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_paragraph_elim___redArg___boxed(lean_object* v_paragraph_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_paragraph_elim___redArg(v_paragraph_105_);
lean_dec(v_paragraph_105_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_paragraph_elim(lean_object* v_motive_107_, uint8_t v_t_108_, lean_object* v_h_109_, lean_object* v_paragraph_110_){
_start:
{
lean_inc(v_paragraph_110_);
return v_paragraph_110_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_paragraph_elim___boxed(lean_object* v_motive_111_, lean_object* v_t_112_, lean_object* v_h_113_, lean_object* v_paragraph_114_){
_start:
{
uint8_t v_t_boxed_115_; lean_object* v_res_116_; 
v_t_boxed_115_ = lean_unbox(v_t_112_);
v_res_116_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_paragraph_elim(v_motive_111_, v_t_boxed_115_, v_h_113_, v_paragraph_114_);
lean_dec(v_paragraph_114_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_newline_elim___redArg(lean_object* v_newline_117_){
_start:
{
lean_inc(v_newline_117_);
return v_newline_117_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_newline_elim___redArg___boxed(lean_object* v_newline_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_newline_elim___redArg(v_newline_118_);
lean_dec(v_newline_118_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_newline_elim(lean_object* v_motive_120_, uint8_t v_t_121_, lean_object* v_h_122_, lean_object* v_newline_123_){
_start:
{
lean_inc(v_newline_123_);
return v_newline_123_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_newline_elim___boxed(lean_object* v_motive_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_newline_127_){
_start:
{
uint8_t v_t_boxed_128_; lean_object* v_res_129_; 
v_t_boxed_128_ = lean_unbox(v_t_125_);
v_res_129_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_newline_elim(v_motive_124_, v_t_boxed_128_, v_h_126_, v_newline_127_);
lean_dec(v_newline_127_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_break_elim___redArg(lean_object* v_break_130_){
_start:
{
lean_inc(v_break_130_);
return v_break_130_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_break_elim___redArg___boxed(lean_object* v_break_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_break_elim___redArg(v_break_131_);
lean_dec(v_break_131_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_break_elim(lean_object* v_motive_133_, uint8_t v_t_134_, lean_object* v_h_135_, lean_object* v_break_136_){
_start:
{
lean_inc(v_break_136_);
return v_break_136_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_break_elim___boxed(lean_object* v_motive_137_, lean_object* v_t_138_, lean_object* v_h_139_, lean_object* v_break_140_){
_start:
{
uint8_t v_t_boxed_141_; lean_object* v_res_142_; 
v_t_boxed_141_ = lean_unbox(v_t_138_);
v_res_142_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_break_elim(v_motive_137_, v_t_boxed_141_, v_h_139_, v_break_140_);
lean_dec(v_break_140_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_center_elim___redArg(lean_object* v_center_143_){
_start:
{
lean_inc(v_center_143_);
return v_center_143_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_center_elim___redArg___boxed(lean_object* v_center_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_center_elim___redArg(v_center_144_);
lean_dec(v_center_144_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_center_elim(lean_object* v_motive_146_, uint8_t v_t_147_, lean_object* v_h_148_, lean_object* v_center_149_){
_start:
{
lean_inc(v_center_149_);
return v_center_149_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_center_elim___boxed(lean_object* v_motive_150_, lean_object* v_t_151_, lean_object* v_h_152_, lean_object* v_center_153_){
_start:
{
uint8_t v_t_boxed_154_; lean_object* v_res_155_; 
v_t_boxed_154_ = lean_unbox(v_t_151_);
v_res_155_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_center_elim(v_motive_150_, v_t_boxed_154_, v_h_152_, v_center_153_);
lean_dec(v_center_153_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_horiz_elim___redArg(lean_object* v_horiz_156_){
_start:
{
lean_inc(v_horiz_156_);
return v_horiz_156_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_horiz_elim___redArg___boxed(lean_object* v_horiz_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_horiz_elim___redArg(v_horiz_157_);
lean_dec(v_horiz_157_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_horiz_elim(lean_object* v_motive_159_, uint8_t v_t_160_, lean_object* v_h_161_, lean_object* v_horiz_162_){
_start:
{
lean_inc(v_horiz_162_);
return v_horiz_162_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_horiz_elim___boxed(lean_object* v_motive_163_, lean_object* v_t_164_, lean_object* v_h_165_, lean_object* v_horiz_166_){
_start:
{
uint8_t v_t_boxed_167_; lean_object* v_res_168_; 
v_t_boxed_167_ = lean_unbox(v_t_164_);
v_res_168_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_horiz_elim(v_motive_163_, v_t_boxed_167_, v_h_165_, v_horiz_166_);
lean_dec(v_horiz_166_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_separator_elim___redArg(lean_object* v_separator_169_){
_start:
{
lean_inc(v_separator_169_);
return v_separator_169_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_separator_elim___redArg___boxed(lean_object* v_separator_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_separator_elim___redArg(v_separator_170_);
lean_dec(v_separator_170_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_separator_elim(lean_object* v_motive_172_, uint8_t v_t_173_, lean_object* v_h_174_, lean_object* v_separator_175_){
_start:
{
lean_inc(v_separator_175_);
return v_separator_175_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_separator_elim___boxed(lean_object* v_motive_176_, lean_object* v_t_177_, lean_object* v_h_178_, lean_object* v_separator_179_){
_start:
{
uint8_t v_t_boxed_180_; lean_object* v_res_181_; 
v_t_boxed_180_ = lean_unbox(v_t_177_);
v_res_181_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_separator_elim(v_motive_176_, v_t_boxed_180_, v_h_178_, v_separator_179_);
lean_dec(v_separator_179_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_clearfloat_elim___redArg(lean_object* v_clearfloat_182_){
_start:
{
lean_inc(v_clearfloat_182_);
return v_clearfloat_182_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_clearfloat_elim___redArg___boxed(lean_object* v_clearfloat_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_clearfloat_elim___redArg(v_clearfloat_183_);
lean_dec(v_clearfloat_183_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_clearfloat_elim(lean_object* v_motive_185_, uint8_t v_t_186_, lean_object* v_h_187_, lean_object* v_clearfloat_188_){
_start:
{
lean_inc(v_clearfloat_188_);
return v_clearfloat_188_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_clearfloat_elim___boxed(lean_object* v_motive_189_, lean_object* v_t_190_, lean_object* v_h_191_, lean_object* v_clearfloat_192_){
_start:
{
uint8_t v_t_boxed_193_; lean_object* v_res_194_; 
v_t_boxed_193_ = lean_unbox(v_t_190_);
v_res_194_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_clearfloat_elim(v_motive_189_, v_t_boxed_193_, v_h_191_, v_clearfloat_192_);
lean_dec(v_clearfloat_192_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_blockquote_elim___redArg(lean_object* v_blockquote_195_){
_start:
{
lean_inc(v_blockquote_195_);
return v_blockquote_195_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_blockquote_elim___redArg___boxed(lean_object* v_blockquote_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_blockquote_elim___redArg(v_blockquote_196_);
lean_dec(v_blockquote_196_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_blockquote_elim(lean_object* v_motive_198_, uint8_t v_t_199_, lean_object* v_h_200_, lean_object* v_blockquote_201_){
_start:
{
lean_inc(v_blockquote_201_);
return v_blockquote_201_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_blockquote_elim___boxed(lean_object* v_motive_202_, lean_object* v_t_203_, lean_object* v_h_204_, lean_object* v_blockquote_205_){
_start:
{
uint8_t v_t_boxed_206_; lean_object* v_res_207_; 
v_t_boxed_206_ = lean_unbox(v_t_203_);
v_res_207_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_blockquote_elim(v_motive_202_, v_t_boxed_206_, v_h_204_, v_blockquote_205_);
lean_dec(v_blockquote_205_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_note_elim___redArg(lean_object* v_note_208_){
_start:
{
lean_inc(v_note_208_);
return v_note_208_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_note_elim___redArg___boxed(lean_object* v_note_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_note_elim___redArg(v_note_209_);
lean_dec(v_note_209_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_note_elim(lean_object* v_motive_211_, uint8_t v_t_212_, lean_object* v_h_213_, lean_object* v_note_214_){
_start:
{
lean_inc(v_note_214_);
return v_note_214_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_note_elim___boxed(lean_object* v_motive_215_, lean_object* v_t_216_, lean_object* v_h_217_, lean_object* v_note_218_){
_start:
{
uint8_t v_t_boxed_219_; lean_object* v_res_220_; 
v_t_boxed_219_ = lean_unbox(v_t_216_);
v_res_220_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_note_elim(v_motive_215_, v_t_boxed_219_, v_h_217_, v_note_218_);
lean_dec(v_note_218_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_divalign_elim___redArg(lean_object* v_divalign_221_){
_start:
{
lean_inc(v_divalign_221_);
return v_divalign_221_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_divalign_elim___redArg___boxed(lean_object* v_divalign_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_divalign_elim___redArg(v_divalign_222_);
lean_dec(v_divalign_222_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_divalign_elim(lean_object* v_motive_224_, uint8_t v_t_225_, lean_object* v_h_226_, lean_object* v_divalign_227_){
_start:
{
lean_inc(v_divalign_227_);
return v_divalign_227_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_divalign_elim___boxed(lean_object* v_motive_228_, lean_object* v_t_229_, lean_object* v_h_230_, lean_object* v_divalign_231_){
_start:
{
uint8_t v_t_boxed_232_; lean_object* v_res_233_; 
v_t_boxed_232_ = lean_unbox(v_t_229_);
v_res_233_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_divalign_elim(v_motive_228_, v_t_boxed_232_, v_h_230_, v_divalign_231_);
lean_dec(v_divalign_231_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_comment_elim___redArg(lean_object* v_comment_234_){
_start:
{
lean_inc(v_comment_234_);
return v_comment_234_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_comment_elim___redArg___boxed(lean_object* v_comment_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_comment_elim___redArg(v_comment_235_);
lean_dec(v_comment_235_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_comment_elim(lean_object* v_motive_237_, uint8_t v_t_238_, lean_object* v_h_239_, lean_object* v_comment_240_){
_start:
{
lean_inc(v_comment_240_);
return v_comment_240_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_comment_elim___boxed(lean_object* v_motive_241_, lean_object* v_t_242_, lean_object* v_h_243_, lean_object* v_comment_244_){
_start:
{
uint8_t v_t_boxed_245_; lean_object* v_res_246_; 
v_t_boxed_245_ = lean_unbox(v_t_242_);
v_res_246_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_comment_elim(v_motive_241_, v_t_boxed_245_, v_h_243_, v_comment_244_);
lean_dec(v_comment_244_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_delimiter_elim___redArg(lean_object* v_delimiter_247_){
_start:
{
lean_inc(v_delimiter_247_);
return v_delimiter_247_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_delimiter_elim___redArg___boxed(lean_object* v_delimiter_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_delimiter_elim___redArg(v_delimiter_248_);
lean_dec(v_delimiter_248_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_delimiter_elim(lean_object* v_motive_250_, uint8_t v_t_251_, lean_object* v_h_252_, lean_object* v_delimiter_253_){
_start:
{
lean_inc(v_delimiter_253_);
return v_delimiter_253_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_delimiter_elim___boxed(lean_object* v_motive_254_, lean_object* v_t_255_, lean_object* v_h_256_, lean_object* v_delimiter_257_){
_start:
{
uint8_t v_t_boxed_258_; lean_object* v_res_259_; 
v_t_boxed_258_ = lean_unbox(v_t_255_);
v_res_259_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_delimiter_elim(v_motive_254_, v_t_boxed_258_, v_h_256_, v_delimiter_257_);
lean_dec(v_delimiter_257_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_url_elim___redArg(lean_object* v_url_260_){
_start:
{
lean_inc(v_url_260_);
return v_url_260_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_url_elim___redArg___boxed(lean_object* v_url_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_url_elim___redArg(v_url_261_);
lean_dec(v_url_261_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_url_elim(lean_object* v_motive_263_, uint8_t v_t_264_, lean_object* v_h_265_, lean_object* v_url_266_){
_start:
{
lean_inc(v_url_266_);
return v_url_266_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_url_elim___boxed(lean_object* v_motive_267_, lean_object* v_t_268_, lean_object* v_h_269_, lean_object* v_url_270_){
_start:
{
uint8_t v_t_boxed_271_; lean_object* v_res_272_; 
v_t_boxed_271_ = lean_unbox(v_t_268_);
v_res_272_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_url_elim(v_motive_267_, v_t_boxed_271_, v_h_269_, v_url_270_);
lean_dec(v_url_270_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_email_elim___redArg(lean_object* v_email_273_){
_start:
{
lean_inc(v_email_273_);
return v_email_273_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_email_elim___redArg___boxed(lean_object* v_email_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_email_elim___redArg(v_email_274_);
lean_dec(v_email_274_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_email_elim(lean_object* v_motive_276_, uint8_t v_t_277_, lean_object* v_h_278_, lean_object* v_email_279_){
_start:
{
lean_inc(v_email_279_);
return v_email_279_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_email_elim___boxed(lean_object* v_motive_280_, lean_object* v_t_281_, lean_object* v_h_282_, lean_object* v_email_283_){
_start:
{
uint8_t v_t_boxed_284_; lean_object* v_res_285_; 
v_t_boxed_284_ = lean_unbox(v_t_281_);
v_res_285_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_email_elim(v_motive_280_, v_t_boxed_284_, v_h_282_, v_email_283_);
lean_dec(v_email_283_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_mathinline_elim___redArg(lean_object* v_mathinline_286_){
_start:
{
lean_inc(v_mathinline_286_);
return v_mathinline_286_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_mathinline_elim___redArg___boxed(lean_object* v_mathinline_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_mathinline_elim___redArg(v_mathinline_287_);
lean_dec(v_mathinline_287_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_mathinline_elim(lean_object* v_motive_289_, uint8_t v_t_290_, lean_object* v_h_291_, lean_object* v_mathinline_292_){
_start:
{
lean_inc(v_mathinline_292_);
return v_mathinline_292_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_mathinline_elim___boxed(lean_object* v_motive_293_, lean_object* v_t_294_, lean_object* v_h_295_, lean_object* v_mathinline_296_){
_start:
{
uint8_t v_t_boxed_297_; lean_object* v_res_298_; 
v_t_boxed_297_ = lean_unbox(v_t_294_);
v_res_298_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_mathinline_elim(v_motive_293_, v_t_boxed_297_, v_h_295_, v_mathinline_296_);
lean_dec(v_mathinline_296_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_interwiki_elim___redArg(lean_object* v_interwiki_299_){
_start:
{
lean_inc(v_interwiki_299_);
return v_interwiki_299_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_interwiki_elim___redArg___boxed(lean_object* v_interwiki_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_interwiki_elim___redArg(v_interwiki_300_);
lean_dec(v_interwiki_300_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_interwiki_elim(lean_object* v_motive_302_, uint8_t v_t_303_, lean_object* v_h_304_, lean_object* v_interwiki_305_){
_start:
{
lean_inc(v_interwiki_305_);
return v_interwiki_305_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_interwiki_elim___boxed(lean_object* v_motive_306_, lean_object* v_t_307_, lean_object* v_h_308_, lean_object* v_interwiki_309_){
_start:
{
uint8_t v_t_boxed_310_; lean_object* v_res_311_; 
v_t_boxed_310_ = lean_unbox(v_t_307_);
v_res_311_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_interwiki_elim(v_motive_306_, v_t_boxed_310_, v_h_308_, v_interwiki_309_);
lean_dec(v_interwiki_309_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_colortext_elim___redArg(lean_object* v_colortext_312_){
_start:
{
lean_inc(v_colortext_312_);
return v_colortext_312_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_colortext_elim___redArg___boxed(lean_object* v_colortext_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_colortext_elim___redArg(v_colortext_313_);
lean_dec(v_colortext_313_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_colortext_elim(lean_object* v_motive_315_, uint8_t v_t_316_, lean_object* v_h_317_, lean_object* v_colortext_318_){
_start:
{
lean_inc(v_colortext_318_);
return v_colortext_318_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_colortext_elim___boxed(lean_object* v_motive_319_, lean_object* v_t_320_, lean_object* v_h_321_, lean_object* v_colortext_322_){
_start:
{
uint8_t v_t_boxed_323_; lean_object* v_res_324_; 
v_t_boxed_323_ = lean_unbox(v_t_320_);
v_res_324_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_colortext_elim(v_motive_319_, v_t_boxed_323_, v_h_321_, v_colortext_322_);
lean_dec(v_colortext_322_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strong_elim___redArg(lean_object* v_strong_325_){
_start:
{
lean_inc(v_strong_325_);
return v_strong_325_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strong_elim___redArg___boxed(lean_object* v_strong_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_strong_elim___redArg(v_strong_326_);
lean_dec(v_strong_326_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strong_elim(lean_object* v_motive_328_, uint8_t v_t_329_, lean_object* v_h_330_, lean_object* v_strong_331_){
_start:
{
lean_inc(v_strong_331_);
return v_strong_331_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strong_elim___boxed(lean_object* v_motive_332_, lean_object* v_t_333_, lean_object* v_h_334_, lean_object* v_strong_335_){
_start:
{
uint8_t v_t_boxed_336_; lean_object* v_res_337_; 
v_t_boxed_336_ = lean_unbox(v_t_333_);
v_res_337_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_strong_elim(v_motive_332_, v_t_boxed_336_, v_h_334_, v_strong_335_);
lean_dec(v_strong_335_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_emphasis_elim___redArg(lean_object* v_emphasis_338_){
_start:
{
lean_inc(v_emphasis_338_);
return v_emphasis_338_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_emphasis_elim___redArg___boxed(lean_object* v_emphasis_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_emphasis_elim___redArg(v_emphasis_339_);
lean_dec(v_emphasis_339_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_emphasis_elim(lean_object* v_motive_341_, uint8_t v_t_342_, lean_object* v_h_343_, lean_object* v_emphasis_344_){
_start:
{
lean_inc(v_emphasis_344_);
return v_emphasis_344_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_emphasis_elim___boxed(lean_object* v_motive_345_, lean_object* v_t_346_, lean_object* v_h_347_, lean_object* v_emphasis_348_){
_start:
{
uint8_t v_t_boxed_349_; lean_object* v_res_350_; 
v_t_boxed_349_ = lean_unbox(v_t_346_);
v_res_350_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_emphasis_elim(v_motive_345_, v_t_boxed_349_, v_h_347_, v_emphasis_348_);
lean_dec(v_emphasis_348_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_underline_elim___redArg(lean_object* v_underline_351_){
_start:
{
lean_inc(v_underline_351_);
return v_underline_351_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_underline_elim___redArg___boxed(lean_object* v_underline_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_underline_elim___redArg(v_underline_352_);
lean_dec(v_underline_352_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_underline_elim(lean_object* v_motive_354_, uint8_t v_t_355_, lean_object* v_h_356_, lean_object* v_underline_357_){
_start:
{
lean_inc(v_underline_357_);
return v_underline_357_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_underline_elim___boxed(lean_object* v_motive_358_, lean_object* v_t_359_, lean_object* v_h_360_, lean_object* v_underline_361_){
_start:
{
uint8_t v_t_boxed_362_; lean_object* v_res_363_; 
v_t_boxed_362_ = lean_unbox(v_t_359_);
v_res_363_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_underline_elim(v_motive_358_, v_t_boxed_362_, v_h_360_, v_underline_361_);
lean_dec(v_underline_361_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strikethrough_elim___redArg(lean_object* v_strikethrough_364_){
_start:
{
lean_inc(v_strikethrough_364_);
return v_strikethrough_364_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strikethrough_elim___redArg___boxed(lean_object* v_strikethrough_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_strikethrough_elim___redArg(v_strikethrough_365_);
lean_dec(v_strikethrough_365_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strikethrough_elim(lean_object* v_motive_367_, uint8_t v_t_368_, lean_object* v_h_369_, lean_object* v_strikethrough_370_){
_start:
{
lean_inc(v_strikethrough_370_);
return v_strikethrough_370_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_strikethrough_elim___boxed(lean_object* v_motive_371_, lean_object* v_t_372_, lean_object* v_h_373_, lean_object* v_strikethrough_374_){
_start:
{
uint8_t v_t_boxed_375_; lean_object* v_res_376_; 
v_t_boxed_375_ = lean_unbox(v_t_372_);
v_res_376_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_strikethrough_elim(v_motive_371_, v_t_boxed_375_, v_h_373_, v_strikethrough_374_);
lean_dec(v_strikethrough_374_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tt_elim___redArg(lean_object* v_tt_377_){
_start:
{
lean_inc(v_tt_377_);
return v_tt_377_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tt_elim___redArg___boxed(lean_object* v_tt_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_tt_elim___redArg(v_tt_378_);
lean_dec(v_tt_378_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tt_elim(lean_object* v_motive_380_, uint8_t v_t_381_, lean_object* v_h_382_, lean_object* v_tt_383_){
_start:
{
lean_inc(v_tt_383_);
return v_tt_383_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tt_elim___boxed(lean_object* v_motive_384_, lean_object* v_t_385_, lean_object* v_h_386_, lean_object* v_tt_387_){
_start:
{
uint8_t v_t_boxed_388_; lean_object* v_res_389_; 
v_t_boxed_388_ = lean_unbox(v_t_385_);
v_res_389_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_tt_elim(v_motive_384_, v_t_boxed_388_, v_h_386_, v_tt_387_);
lean_dec(v_tt_387_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_superscript_elim___redArg(lean_object* v_superscript_390_){
_start:
{
lean_inc(v_superscript_390_);
return v_superscript_390_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_superscript_elim___redArg___boxed(lean_object* v_superscript_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_superscript_elim___redArg(v_superscript_391_);
lean_dec(v_superscript_391_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_superscript_elim(lean_object* v_motive_393_, uint8_t v_t_394_, lean_object* v_h_395_, lean_object* v_superscript_396_){
_start:
{
lean_inc(v_superscript_396_);
return v_superscript_396_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_superscript_elim___boxed(lean_object* v_motive_397_, lean_object* v_t_398_, lean_object* v_h_399_, lean_object* v_superscript_400_){
_start:
{
uint8_t v_t_boxed_401_; lean_object* v_res_402_; 
v_t_boxed_401_ = lean_unbox(v_t_398_);
v_res_402_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_superscript_elim(v_motive_397_, v_t_boxed_401_, v_h_399_, v_superscript_400_);
lean_dec(v_superscript_400_);
return v_res_402_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_subscript_elim___redArg(lean_object* v_subscript_403_){
_start:
{
lean_inc(v_subscript_403_);
return v_subscript_403_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_subscript_elim___redArg___boxed(lean_object* v_subscript_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_subscript_elim___redArg(v_subscript_404_);
lean_dec(v_subscript_404_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_subscript_elim(lean_object* v_motive_406_, uint8_t v_t_407_, lean_object* v_h_408_, lean_object* v_subscript_409_){
_start:
{
lean_inc(v_subscript_409_);
return v_subscript_409_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_subscript_elim___boxed(lean_object* v_motive_410_, lean_object* v_t_411_, lean_object* v_h_412_, lean_object* v_subscript_413_){
_start:
{
uint8_t v_t_boxed_414_; lean_object* v_res_415_; 
v_t_boxed_414_ = lean_unbox(v_t_411_);
v_res_415_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_subscript_elim(v_motive_410_, v_t_boxed_414_, v_h_412_, v_subscript_413_);
lean_dec(v_subscript_413_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_typography_elim___redArg(lean_object* v_typography_416_){
_start:
{
lean_inc(v_typography_416_);
return v_typography_416_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_typography_elim___redArg___boxed(lean_object* v_typography_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_typography_elim___redArg(v_typography_417_);
lean_dec(v_typography_417_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_typography_elim(lean_object* v_motive_419_, uint8_t v_t_420_, lean_object* v_h_421_, lean_object* v_typography_422_){
_start:
{
lean_inc(v_typography_422_);
return v_typography_422_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_typography_elim___boxed(lean_object* v_motive_423_, lean_object* v_t_424_, lean_object* v_h_425_, lean_object* v_typography_426_){
_start:
{
uint8_t v_t_boxed_427_; lean_object* v_res_428_; 
v_t_boxed_427_ = lean_unbox(v_t_424_);
v_res_428_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_typography_elim(v_motive_423_, v_t_boxed_427_, v_h_425_, v_typography_426_);
lean_dec(v_typography_426_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tighten_elim___redArg(lean_object* v_tighten_429_){
_start:
{
lean_inc(v_tighten_429_);
return v_tighten_429_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tighten_elim___redArg___boxed(lean_object* v_tighten_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_tighten_elim___redArg(v_tighten_430_);
lean_dec(v_tighten_430_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tighten_elim(lean_object* v_motive_432_, uint8_t v_t_433_, lean_object* v_h_434_, lean_object* v_tighten_435_){
_start:
{
lean_inc(v_tighten_435_);
return v_tighten_435_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tighten_elim___boxed(lean_object* v_motive_436_, lean_object* v_t_437_, lean_object* v_h_438_, lean_object* v_tighten_439_){
_start:
{
uint8_t v_t_boxed_440_; lean_object* v_res_441_; 
v_t_boxed_440_ = lean_unbox(v_t_437_);
v_res_441_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_tighten_elim(v_motive_436_, v_t_boxed_440_, v_h_438_, v_tighten_439_);
lean_dec(v_tighten_439_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_raw_elim___redArg(lean_object* v_raw_442_){
_start:
{
lean_inc(v_raw_442_);
return v_raw_442_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_raw_elim___redArg___boxed(lean_object* v_raw_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_raw_elim___redArg(v_raw_443_);
lean_dec(v_raw_443_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_raw_elim(lean_object* v_motive_445_, uint8_t v_t_446_, lean_object* v_h_447_, lean_object* v_raw_448_){
_start:
{
lean_inc(v_raw_448_);
return v_raw_448_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_raw_elim___boxed(lean_object* v_motive_449_, lean_object* v_t_450_, lean_object* v_h_451_, lean_object* v_raw_452_){
_start:
{
uint8_t v_t_boxed_453_; lean_object* v_res_454_; 
v_t_boxed_453_ = lean_unbox(v_t_450_);
v_res_454_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_raw_elim(v_motive_449_, v_t_boxed_453_, v_h_451_, v_raw_452_);
lean_dec(v_raw_452_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_rawold_elim___redArg(lean_object* v_rawold_455_){
_start:
{
lean_inc(v_rawold_455_);
return v_rawold_455_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_rawold_elim___redArg___boxed(lean_object* v_rawold_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_rawold_elim___redArg(v_rawold_456_);
lean_dec(v_rawold_456_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_rawold_elim(lean_object* v_motive_458_, uint8_t v_t_459_, lean_object* v_h_460_, lean_object* v_rawold_461_){
_start:
{
lean_inc(v_rawold_461_);
return v_rawold_461_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_rawold_elim___boxed(lean_object* v_motive_462_, lean_object* v_t_463_, lean_object* v_h_464_, lean_object* v_rawold_465_){
_start:
{
uint8_t v_t_boxed_466_; lean_object* v_res_467_; 
v_t_boxed_466_ = lean_unbox(v_t_463_);
v_res_467_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_rawold_elim(v_motive_462_, v_t_boxed_466_, v_h_464_, v_rawold_465_);
lean_dec(v_rawold_465_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_form_elim___redArg(lean_object* v_form_468_){
_start:
{
lean_inc(v_form_468_);
return v_form_468_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_form_elim___redArg___boxed(lean_object* v_form_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_form_elim___redArg(v_form_469_);
lean_dec(v_form_469_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_form_elim(lean_object* v_motive_471_, uint8_t v_t_472_, lean_object* v_h_473_, lean_object* v_form_474_){
_start:
{
lean_inc(v_form_474_);
return v_form_474_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_form_elim___boxed(lean_object* v_motive_475_, lean_object* v_t_476_, lean_object* v_h_477_, lean_object* v_form_478_){
_start:
{
uint8_t v_t_boxed_479_; lean_object* v_res_480_; 
v_t_boxed_479_ = lean_unbox(v_t_476_);
v_res_480_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_form_elim(v_motive_475_, v_t_boxed_479_, v_h_477_, v_form_478_);
lean_dec(v_form_478_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_heading_elim___redArg(lean_object* v_heading_481_){
_start:
{
lean_inc(v_heading_481_);
return v_heading_481_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_heading_elim___redArg___boxed(lean_object* v_heading_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_heading_elim___redArg(v_heading_482_);
lean_dec(v_heading_482_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_heading_elim(lean_object* v_motive_484_, uint8_t v_t_485_, lean_object* v_h_486_, lean_object* v_heading_487_){
_start:
{
lean_inc(v_heading_487_);
return v_heading_487_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_heading_elim___boxed(lean_object* v_motive_488_, lean_object* v_t_489_, lean_object* v_h_490_, lean_object* v_heading_491_){
_start:
{
uint8_t v_t_boxed_492_; lean_object* v_res_493_; 
v_t_boxed_492_ = lean_unbox(v_t_489_);
v_res_493_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_heading_elim(v_motive_488_, v_t_boxed_492_, v_h_490_, v_heading_491_);
lean_dec(v_heading_491_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_toc_elim___redArg(lean_object* v_toc_494_){
_start:
{
lean_inc(v_toc_494_);
return v_toc_494_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_toc_elim___redArg___boxed(lean_object* v_toc_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_toc_elim___redArg(v_toc_495_);
lean_dec(v_toc_495_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_toc_elim(lean_object* v_motive_497_, uint8_t v_t_498_, lean_object* v_h_499_, lean_object* v_toc_500_){
_start:
{
lean_inc(v_toc_500_);
return v_toc_500_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_toc_elim___boxed(lean_object* v_motive_501_, lean_object* v_t_502_, lean_object* v_h_503_, lean_object* v_toc_504_){
_start:
{
uint8_t v_t_boxed_505_; lean_object* v_res_506_; 
v_t_boxed_505_ = lean_unbox(v_t_502_);
v_res_506_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_toc_elim(v_motive_501_, v_t_boxed_505_, v_h_503_, v_toc_504_);
lean_dec(v_toc_504_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_list_elim___redArg(lean_object* v_list_507_){
_start:
{
lean_inc(v_list_507_);
return v_list_507_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_list_elim___redArg___boxed(lean_object* v_list_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_list_elim___redArg(v_list_508_);
lean_dec(v_list_508_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_list_elim(lean_object* v_motive_510_, uint8_t v_t_511_, lean_object* v_h_512_, lean_object* v_list_513_){
_start:
{
lean_inc(v_list_513_);
return v_list_513_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_list_elim___boxed(lean_object* v_motive_514_, lean_object* v_t_515_, lean_object* v_h_516_, lean_object* v_list_517_){
_start:
{
uint8_t v_t_boxed_518_; lean_object* v_res_519_; 
v_t_boxed_518_ = lean_unbox(v_t_515_);
v_res_519_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_list_elim(v_motive_514_, v_t_boxed_518_, v_h_516_, v_list_517_);
lean_dec(v_list_517_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_deflist_elim___redArg(lean_object* v_deflist_520_){
_start:
{
lean_inc(v_deflist_520_);
return v_deflist_520_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_deflist_elim___redArg___boxed(lean_object* v_deflist_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_deflist_elim___redArg(v_deflist_521_);
lean_dec(v_deflist_521_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_deflist_elim(lean_object* v_motive_523_, uint8_t v_t_524_, lean_object* v_h_525_, lean_object* v_deflist_526_){
_start:
{
lean_inc(v_deflist_526_);
return v_deflist_526_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_deflist_elim___boxed(lean_object* v_motive_527_, lean_object* v_t_528_, lean_object* v_h_529_, lean_object* v_deflist_530_){
_start:
{
uint8_t v_t_boxed_531_; lean_object* v_res_532_; 
v_t_boxed_531_ = lean_unbox(v_t_528_);
v_res_532_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_deflist_elim(v_motive_527_, v_t_boxed_531_, v_h_529_, v_deflist_530_);
lean_dec(v_deflist_530_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_table_elim___redArg(lean_object* v_table_533_){
_start:
{
lean_inc(v_table_533_);
return v_table_533_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_table_elim___redArg___boxed(lean_object* v_table_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_table_elim___redArg(v_table_534_);
lean_dec(v_table_534_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_table_elim(lean_object* v_motive_536_, uint8_t v_t_537_, lean_object* v_h_538_, lean_object* v_table_539_){
_start:
{
lean_inc(v_table_539_);
return v_table_539_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_table_elim___boxed(lean_object* v_motive_540_, lean_object* v_t_541_, lean_object* v_h_542_, lean_object* v_table_543_){
_start:
{
uint8_t v_t_boxed_544_; lean_object* v_res_545_; 
v_t_boxed_544_ = lean_unbox(v_t_541_);
v_res_545_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_table_elim(v_motive_540_, v_t_boxed_544_, v_h_542_, v_table_543_);
lean_dec(v_table_543_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tableadv_elim___redArg(lean_object* v_tableadv_546_){
_start:
{
lean_inc(v_tableadv_546_);
return v_tableadv_546_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tableadv_elim___redArg___boxed(lean_object* v_tableadv_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_tableadv_elim___redArg(v_tableadv_547_);
lean_dec(v_tableadv_547_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tableadv_elim(lean_object* v_motive_549_, uint8_t v_t_550_, lean_object* v_h_551_, lean_object* v_tableadv_552_){
_start:
{
lean_inc(v_tableadv_552_);
return v_tableadv_552_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tableadv_elim___boxed(lean_object* v_motive_553_, lean_object* v_t_554_, lean_object* v_h_555_, lean_object* v_tableadv_556_){
_start:
{
uint8_t v_t_boxed_557_; lean_object* v_res_558_; 
v_t_boxed_557_ = lean_unbox(v_t_554_);
v_res_558_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_tableadv_elim(v_motive_553_, v_t_boxed_557_, v_h_555_, v_tableadv_556_);
lean_dec(v_tableadv_556_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_equationreference_elim___redArg(lean_object* v_equationreference_559_){
_start:
{
lean_inc(v_equationreference_559_);
return v_equationreference_559_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_equationreference_elim___redArg___boxed(lean_object* v_equationreference_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_equationreference_elim___redArg(v_equationreference_560_);
lean_dec(v_equationreference_560_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_equationreference_elim(lean_object* v_motive_562_, uint8_t v_t_563_, lean_object* v_h_564_, lean_object* v_equationreference_565_){
_start:
{
lean_inc(v_equationreference_565_);
return v_equationreference_565_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_equationreference_elim___boxed(lean_object* v_motive_566_, lean_object* v_t_567_, lean_object* v_h_568_, lean_object* v_equationreference_569_){
_start:
{
uint8_t v_t_boxed_570_; lean_object* v_res_571_; 
v_t_boxed_570_ = lean_unbox(v_t_567_);
v_res_571_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_equationreference_elim(v_motive_566_, v_t_boxed_570_, v_h_568_, v_equationreference_569_);
lean_dec(v_equationreference_569_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_anchor_elim___redArg(lean_object* v_anchor_572_){
_start:
{
lean_inc(v_anchor_572_);
return v_anchor_572_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_anchor_elim___redArg___boxed(lean_object* v_anchor_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_anchor_elim___redArg(v_anchor_573_);
lean_dec(v_anchor_573_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_anchor_elim(lean_object* v_motive_575_, uint8_t v_t_576_, lean_object* v_h_577_, lean_object* v_anchor_578_){
_start:
{
lean_inc(v_anchor_578_);
return v_anchor_578_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_anchor_elim___boxed(lean_object* v_motive_579_, lean_object* v_t_580_, lean_object* v_h_581_, lean_object* v_anchor_582_){
_start:
{
uint8_t v_t_boxed_583_; lean_object* v_res_584_; 
v_t_boxed_583_ = lean_unbox(v_t_580_);
v_res_584_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_anchor_elim(v_motive_579_, v_t_boxed_583_, v_h_581_, v_anchor_582_);
lean_dec(v_anchor_582_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_collapsible_elim___redArg(lean_object* v_collapsible_585_){
_start:
{
lean_inc(v_collapsible_585_);
return v_collapsible_585_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_collapsible_elim___redArg___boxed(lean_object* v_collapsible_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_collapsible_elim___redArg(v_collapsible_586_);
lean_dec(v_collapsible_586_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_collapsible_elim(lean_object* v_motive_588_, uint8_t v_t_589_, lean_object* v_h_590_, lean_object* v_collapsible_591_){
_start:
{
lean_inc(v_collapsible_591_);
return v_collapsible_591_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_collapsible_elim___boxed(lean_object* v_motive_592_, lean_object* v_t_593_, lean_object* v_h_594_, lean_object* v_collapsible_595_){
_start:
{
uint8_t v_t_boxed_596_; lean_object* v_res_597_; 
v_t_boxed_596_ = lean_unbox(v_t_593_);
v_res_597_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_collapsible_elim(v_motive_592_, v_t_boxed_596_, v_h_594_, v_collapsible_595_);
lean_dec(v_collapsible_595_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tabview_elim___redArg(lean_object* v_tabview_598_){
_start:
{
lean_inc(v_tabview_598_);
return v_tabview_598_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tabview_elim___redArg___boxed(lean_object* v_tabview_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_tabview_elim___redArg(v_tabview_599_);
lean_dec(v_tabview_599_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tabview_elim(lean_object* v_motive_601_, uint8_t v_t_602_, lean_object* v_h_603_, lean_object* v_tabview_604_){
_start:
{
lean_inc(v_tabview_604_);
return v_tabview_604_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_tabview_elim___boxed(lean_object* v_motive_605_, lean_object* v_t_606_, lean_object* v_h_607_, lean_object* v_tabview_608_){
_start:
{
uint8_t v_t_boxed_609_; lean_object* v_res_610_; 
v_t_boxed_609_ = lean_unbox(v_t_606_);
v_res_610_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_tabview_elim(v_motive_605_, v_t_boxed_609_, v_h_607_, v_tabview_608_);
lean_dec(v_tabview_608_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_button_elim___redArg(lean_object* v_button_611_){
_start:
{
lean_inc(v_button_611_);
return v_button_611_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_button_elim___redArg___boxed(lean_object* v_button_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_button_elim___redArg(v_button_612_);
lean_dec(v_button_612_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_button_elim(lean_object* v_motive_614_, uint8_t v_t_615_, lean_object* v_h_616_, lean_object* v_button_617_){
_start:
{
lean_inc(v_button_617_);
return v_button_617_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_button_elim___boxed(lean_object* v_motive_618_, lean_object* v_t_619_, lean_object* v_h_620_, lean_object* v_button_621_){
_start:
{
uint8_t v_t_boxed_622_; lean_object* v_res_623_; 
v_t_boxed_622_ = lean_unbox(v_t_619_);
v_res_623_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_button_elim(v_motive_618_, v_t_boxed_622_, v_h_620_, v_button_621_);
lean_dec(v_button_621_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_iframe_elim___redArg(lean_object* v_iframe_624_){
_start:
{
lean_inc(v_iframe_624_);
return v_iframe_624_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_iframe_elim___redArg___boxed(lean_object* v_iframe_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_iframe_elim___redArg(v_iframe_625_);
lean_dec(v_iframe_625_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_iframe_elim(lean_object* v_motive_627_, uint8_t v_t_628_, lean_object* v_h_629_, lean_object* v_iframe_630_){
_start:
{
lean_inc(v_iframe_630_);
return v_iframe_630_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_iframe_elim___boxed(lean_object* v_motive_631_, lean_object* v_t_632_, lean_object* v_h_633_, lean_object* v_iframe_634_){
_start:
{
uint8_t v_t_boxed_635_; lean_object* v_res_636_; 
v_t_boxed_635_ = lean_unbox(v_t_632_);
v_res_636_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_iframe_elim(v_motive_631_, v_t_boxed_635_, v_h_633_, v_iframe_634_);
lean_dec(v_iframe_634_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_date_elim___redArg(lean_object* v_date_637_){
_start:
{
lean_inc(v_date_637_);
return v_date_637_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_date_elim___redArg___boxed(lean_object* v_date_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_date_elim___redArg(v_date_638_);
lean_dec(v_date_638_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_date_elim(lean_object* v_motive_640_, uint8_t v_t_641_, lean_object* v_h_642_, lean_object* v_date_643_){
_start:
{
lean_inc(v_date_643_);
return v_date_643_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_date_elim___boxed(lean_object* v_motive_644_, lean_object* v_t_645_, lean_object* v_h_646_, lean_object* v_date_647_){
_start:
{
uint8_t v_t_boxed_648_; lean_object* v_res_649_; 
v_t_boxed_648_ = lean_unbox(v_t_645_);
v_res_649_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_date_elim(v_motive_644_, v_t_boxed_648_, v_h_646_, v_date_647_);
lean_dec(v_date_647_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_file_elim___redArg(lean_object* v_file_650_){
_start:
{
lean_inc(v_file_650_);
return v_file_650_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_file_elim___redArg___boxed(lean_object* v_file_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_file_elim___redArg(v_file_651_);
lean_dec(v_file_651_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_file_elim(lean_object* v_motive_653_, uint8_t v_t_654_, lean_object* v_h_655_, lean_object* v_file_656_){
_start:
{
lean_inc(v_file_656_);
return v_file_656_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_file_elim___boxed(lean_object* v_motive_657_, lean_object* v_t_658_, lean_object* v_h_659_, lean_object* v_file_660_){
_start:
{
uint8_t v_t_boxed_661_; lean_object* v_res_662_; 
v_t_boxed_661_ = lean_unbox(v_t_658_);
v_res_662_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_file_elim(v_motive_657_, v_t_boxed_661_, v_h_659_, v_file_660_);
lean_dec(v_file_660_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_size_elim___redArg(lean_object* v_size_663_){
_start:
{
lean_inc(v_size_663_);
return v_size_663_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_size_elim___redArg___boxed(lean_object* v_size_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_size_elim___redArg(v_size_664_);
lean_dec(v_size_664_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_size_elim(lean_object* v_motive_666_, uint8_t v_t_667_, lean_object* v_h_668_, lean_object* v_size_669_){
_start:
{
lean_inc(v_size_669_);
return v_size_669_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_size_elim___boxed(lean_object* v_motive_670_, lean_object* v_t_671_, lean_object* v_h_672_, lean_object* v_size_673_){
_start:
{
uint8_t v_t_boxed_674_; lean_object* v_res_675_; 
v_t_boxed_674_ = lean_unbox(v_t_671_);
v_res_675_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_size_elim(v_motive_670_, v_t_boxed_674_, v_h_672_, v_size_673_);
lean_dec(v_size_673_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_span_elim___redArg(lean_object* v_span_676_){
_start:
{
lean_inc(v_span_676_);
return v_span_676_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_span_elim___redArg___boxed(lean_object* v_span_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_span_elim___redArg(v_span_677_);
lean_dec(v_span_677_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_span_elim(lean_object* v_motive_679_, uint8_t v_t_680_, lean_object* v_h_681_, lean_object* v_span_682_){
_start:
{
lean_inc(v_span_682_);
return v_span_682_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_span_elim___boxed(lean_object* v_motive_683_, lean_object* v_t_684_, lean_object* v_h_685_, lean_object* v_span_686_){
_start:
{
uint8_t v_t_boxed_687_; lean_object* v_res_688_; 
v_t_boxed_687_ = lean_unbox(v_t_684_);
v_res_688_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_span_elim(v_motive_683_, v_t_boxed_687_, v_h_685_, v_span_686_);
lean_dec(v_span_686_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_div_elim___redArg(lean_object* v_div_689_){
_start:
{
lean_inc(v_div_689_);
return v_div_689_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_div_elim___redArg___boxed(lean_object* v_div_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_div_elim___redArg(v_div_690_);
lean_dec(v_div_690_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_div_elim(lean_object* v_motive_692_, uint8_t v_t_693_, lean_object* v_h_694_, lean_object* v_div_695_){
_start:
{
lean_inc(v_div_695_);
return v_div_695_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_div_elim___boxed(lean_object* v_motive_696_, lean_object* v_t_697_, lean_object* v_h_698_, lean_object* v_div_699_){
_start:
{
uint8_t v_t_boxed_700_; lean_object* v_res_701_; 
v_t_boxed_700_ = lean_unbox(v_t_697_);
v_res_701_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_div_elim(v_motive_696_, v_t_boxed_700_, v_h_698_, v_div_699_);
lean_dec(v_div_699_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_code_elim___redArg(lean_object* v_code_702_){
_start:
{
lean_inc(v_code_702_);
return v_code_702_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_code_elim___redArg___boxed(lean_object* v_code_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_code_elim___redArg(v_code_703_);
lean_dec(v_code_703_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_code_elim(lean_object* v_motive_705_, uint8_t v_t_706_, lean_object* v_h_707_, lean_object* v_code_708_){
_start:
{
lean_inc(v_code_708_);
return v_code_708_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_code_elim___boxed(lean_object* v_motive_709_, lean_object* v_t_710_, lean_object* v_h_711_, lean_object* v_code_712_){
_start:
{
uint8_t v_t_boxed_713_; lean_object* v_res_714_; 
v_t_boxed_713_ = lean_unbox(v_t_710_);
v_res_714_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_code_elim(v_motive_709_, v_t_boxed_713_, v_h_711_, v_code_712_);
lean_dec(v_code_712_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_embed_elim___redArg(lean_object* v_embed_715_){
_start:
{
lean_inc(v_embed_715_);
return v_embed_715_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_embed_elim___redArg___boxed(lean_object* v_embed_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_embed_elim___redArg(v_embed_716_);
lean_dec(v_embed_716_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_embed_elim(lean_object* v_motive_718_, uint8_t v_t_719_, lean_object* v_h_720_, lean_object* v_embed_721_){
_start:
{
lean_inc(v_embed_721_);
return v_embed_721_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_embed_elim___boxed(lean_object* v_motive_722_, lean_object* v_t_723_, lean_object* v_h_724_, lean_object* v_embed_725_){
_start:
{
uint8_t v_t_boxed_726_; lean_object* v_res_727_; 
v_t_boxed_726_ = lean_unbox(v_t_723_);
v_res_727_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_embed_elim(v_motive_722_, v_t_boxed_726_, v_h_724_, v_embed_725_);
lean_dec(v_embed_725_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_freelink_elim___redArg(lean_object* v_freelink_728_){
_start:
{
lean_inc(v_freelink_728_);
return v_freelink_728_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_freelink_elim___redArg___boxed(lean_object* v_freelink_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_freelink_elim___redArg(v_freelink_729_);
lean_dec(v_freelink_729_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_freelink_elim(lean_object* v_motive_731_, uint8_t v_t_732_, lean_object* v_h_733_, lean_object* v_freelink_734_){
_start:
{
lean_inc(v_freelink_734_);
return v_freelink_734_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_freelink_elim___boxed(lean_object* v_motive_735_, lean_object* v_t_736_, lean_object* v_h_737_, lean_object* v_freelink_738_){
_start:
{
uint8_t v_t_boxed_739_; lean_object* v_res_740_; 
v_t_boxed_739_ = lean_unbox(v_t_736_);
v_res_740_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_freelink_elim(v_motive_735_, v_t_boxed_739_, v_h_737_, v_freelink_738_);
lean_dec(v_freelink_738_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module_elim___redArg(lean_object* v_module_741_){
_start:
{
lean_inc(v_module_741_);
return v_module_741_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module_elim___redArg___boxed(lean_object* v_module_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_module_elim___redArg(v_module_742_);
lean_dec(v_module_742_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module_elim(lean_object* v_motive_744_, uint8_t v_t_745_, lean_object* v_h_746_, lean_object* v_module_747_){
_start:
{
lean_inc(v_module_747_);
return v_module_747_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module_elim___boxed(lean_object* v_motive_748_, lean_object* v_t_749_, lean_object* v_h_750_, lean_object* v_module_751_){
_start:
{
uint8_t v_t_boxed_752_; lean_object* v_res_753_; 
v_t_boxed_752_ = lean_unbox(v_t_749_);
v_res_753_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_module_elim(v_motive_748_, v_t_boxed_752_, v_h_750_, v_module_751_);
lean_dec(v_module_751_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module654_elim___redArg(lean_object* v_module654_754_){
_start:
{
lean_inc(v_module654_754_);
return v_module654_754_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module654_elim___redArg___boxed(lean_object* v_module654_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_module654_elim___redArg(v_module654_755_);
lean_dec(v_module654_755_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module654_elim(lean_object* v_motive_757_, uint8_t v_t_758_, lean_object* v_h_759_, lean_object* v_module654_760_){
_start:
{
lean_inc(v_module654_760_);
return v_module654_760_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_module654_elim___boxed(lean_object* v_motive_761_, lean_object* v_t_762_, lean_object* v_h_763_, lean_object* v_module654_764_){
_start:
{
uint8_t v_t_boxed_765_; lean_object* v_res_766_; 
v_t_boxed_765_ = lean_unbox(v_t_762_);
v_res_766_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_module654_elim(v_motive_761_, v_t_boxed_765_, v_h_763_, v_module654_764_);
lean_dec(v_module654_764_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_math_elim___redArg(lean_object* v_math_767_){
_start:
{
lean_inc(v_math_767_);
return v_math_767_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_math_elim___redArg___boxed(lean_object* v_math_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_math_elim___redArg(v_math_768_);
lean_dec(v_math_768_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_math_elim(lean_object* v_motive_770_, uint8_t v_t_771_, lean_object* v_h_772_, lean_object* v_math_773_){
_start:
{
lean_inc(v_math_773_);
return v_math_773_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_math_elim___boxed(lean_object* v_motive_774_, lean_object* v_t_775_, lean_object* v_h_776_, lean_object* v_math_777_){
_start:
{
uint8_t v_t_boxed_778_; lean_object* v_res_779_; 
v_t_boxed_778_ = lean_unbox(v_t_775_);
v_res_779_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_math_elim(v_motive_774_, v_t_boxed_778_, v_h_776_, v_math_777_);
lean_dec(v_math_777_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_image_elim___redArg(lean_object* v_image_780_){
_start:
{
lean_inc(v_image_780_);
return v_image_780_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_image_elim___redArg___boxed(lean_object* v_image_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_image_elim___redArg(v_image_781_);
lean_dec(v_image_781_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_image_elim(lean_object* v_motive_783_, uint8_t v_t_784_, lean_object* v_h_785_, lean_object* v_image_786_){
_start:
{
lean_inc(v_image_786_);
return v_image_786_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_image_elim___boxed(lean_object* v_motive_787_, lean_object* v_t_788_, lean_object* v_h_789_, lean_object* v_image_790_){
_start:
{
uint8_t v_t_boxed_791_; lean_object* v_res_792_; 
v_t_boxed_791_ = lean_unbox(v_t_788_);
v_res_792_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_image_elim(v_motive_787_, v_t_boxed_791_, v_h_789_, v_image_790_);
lean_dec(v_image_790_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_gallery_elim___redArg(lean_object* v_gallery_793_){
_start:
{
lean_inc(v_gallery_793_);
return v_gallery_793_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_gallery_elim___redArg___boxed(lean_object* v_gallery_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_gallery_elim___redArg(v_gallery_794_);
lean_dec(v_gallery_794_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_gallery_elim(lean_object* v_motive_796_, uint8_t v_t_797_, lean_object* v_h_798_, lean_object* v_gallery_799_){
_start:
{
lean_inc(v_gallery_799_);
return v_gallery_799_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_gallery_elim___boxed(lean_object* v_motive_800_, lean_object* v_t_801_, lean_object* v_h_802_, lean_object* v_gallery_803_){
_start:
{
uint8_t v_t_boxed_804_; lean_object* v_res_805_; 
v_t_boxed_804_ = lean_unbox(v_t_801_);
v_res_805_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_gallery_elim(v_motive_800_, v_t_boxed_804_, v_h_802_, v_gallery_803_);
lean_dec(v_gallery_803_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_user_elim___redArg(lean_object* v_user_806_){
_start:
{
lean_inc(v_user_806_);
return v_user_806_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_user_elim___redArg___boxed(lean_object* v_user_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_user_elim___redArg(v_user_807_);
lean_dec(v_user_807_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_user_elim(lean_object* v_motive_809_, uint8_t v_t_810_, lean_object* v_h_811_, lean_object* v_user_812_){
_start:
{
lean_inc(v_user_812_);
return v_user_812_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_user_elim___boxed(lean_object* v_motive_813_, lean_object* v_t_814_, lean_object* v_h_815_, lean_object* v_user_816_){
_start:
{
uint8_t v_t_boxed_817_; lean_object* v_res_818_; 
v_t_boxed_817_ = lean_unbox(v_t_814_);
v_res_818_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_user_elim(v_motive_813_, v_t_boxed_817_, v_h_815_, v_user_816_);
lean_dec(v_user_816_);
return v_res_818_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_RenderRuleId_ofNat(lean_object* v_n_819_){
_start:
{
lean_object* v___x_820_; uint8_t v___x_821_; 
v___x_820_ = lean_unsigned_to_nat(29u);
v___x_821_ = lean_nat_dec_le(v_n_819_, v___x_820_);
if (v___x_821_ == 0)
{
lean_object* v___x_822_; uint8_t v___x_823_; 
v___x_822_ = lean_unsigned_to_nat(44u);
v___x_823_ = lean_nat_dec_le(v_n_819_, v___x_822_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; uint8_t v___x_825_; 
v___x_824_ = lean_unsigned_to_nat(52u);
v___x_825_ = lean_nat_dec_le(v_n_819_, v___x_824_);
if (v___x_825_ == 0)
{
lean_object* v___x_826_; uint8_t v___x_827_; 
v___x_826_ = lean_unsigned_to_nat(56u);
v___x_827_ = lean_nat_dec_le(v_n_819_, v___x_826_);
if (v___x_827_ == 0)
{
lean_object* v___x_828_; uint8_t v___x_829_; 
v___x_828_ = lean_unsigned_to_nat(58u);
v___x_829_ = lean_nat_dec_le(v_n_819_, v___x_828_);
if (v___x_829_ == 0)
{
lean_object* v___x_830_; uint8_t v___x_831_; 
v___x_830_ = lean_unsigned_to_nat(59u);
v___x_831_ = lean_nat_dec_le(v_n_819_, v___x_830_);
if (v___x_831_ == 0)
{
uint8_t v___x_832_; 
v___x_832_ = 60;
return v___x_832_;
}
else
{
uint8_t v___x_833_; 
v___x_833_ = 59;
return v___x_833_;
}
}
else
{
lean_object* v___x_834_; uint8_t v___x_835_; 
v___x_834_ = lean_unsigned_to_nat(57u);
v___x_835_ = lean_nat_dec_le(v_n_819_, v___x_834_);
if (v___x_835_ == 0)
{
uint8_t v___x_836_; 
v___x_836_ = 58;
return v___x_836_;
}
else
{
uint8_t v___x_837_; 
v___x_837_ = 57;
return v___x_837_;
}
}
}
else
{
lean_object* v___x_838_; uint8_t v___x_839_; 
v___x_838_ = lean_unsigned_to_nat(54u);
v___x_839_ = lean_nat_dec_le(v_n_819_, v___x_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_840_ = lean_unsigned_to_nat(55u);
v___x_841_ = lean_nat_dec_le(v_n_819_, v___x_840_);
if (v___x_841_ == 0)
{
uint8_t v___x_842_; 
v___x_842_ = 56;
return v___x_842_;
}
else
{
uint8_t v___x_843_; 
v___x_843_ = 55;
return v___x_843_;
}
}
else
{
lean_object* v___x_844_; uint8_t v___x_845_; 
v___x_844_ = lean_unsigned_to_nat(53u);
v___x_845_ = lean_nat_dec_le(v_n_819_, v___x_844_);
if (v___x_845_ == 0)
{
uint8_t v___x_846_; 
v___x_846_ = 54;
return v___x_846_;
}
else
{
uint8_t v___x_847_; 
v___x_847_ = 53;
return v___x_847_;
}
}
}
}
else
{
lean_object* v___x_848_; uint8_t v___x_849_; 
v___x_848_ = lean_unsigned_to_nat(48u);
v___x_849_ = lean_nat_dec_le(v_n_819_, v___x_848_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; uint8_t v___x_851_; 
v___x_850_ = lean_unsigned_to_nat(50u);
v___x_851_ = lean_nat_dec_le(v_n_819_, v___x_850_);
if (v___x_851_ == 0)
{
lean_object* v___x_852_; uint8_t v___x_853_; 
v___x_852_ = lean_unsigned_to_nat(51u);
v___x_853_ = lean_nat_dec_le(v_n_819_, v___x_852_);
if (v___x_853_ == 0)
{
uint8_t v___x_854_; 
v___x_854_ = 52;
return v___x_854_;
}
else
{
uint8_t v___x_855_; 
v___x_855_ = 51;
return v___x_855_;
}
}
else
{
lean_object* v___x_856_; uint8_t v___x_857_; 
v___x_856_ = lean_unsigned_to_nat(49u);
v___x_857_ = lean_nat_dec_le(v_n_819_, v___x_856_);
if (v___x_857_ == 0)
{
uint8_t v___x_858_; 
v___x_858_ = 50;
return v___x_858_;
}
else
{
uint8_t v___x_859_; 
v___x_859_ = 49;
return v___x_859_;
}
}
}
else
{
lean_object* v___x_860_; uint8_t v___x_861_; 
v___x_860_ = lean_unsigned_to_nat(46u);
v___x_861_ = lean_nat_dec_le(v_n_819_, v___x_860_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; uint8_t v___x_863_; 
v___x_862_ = lean_unsigned_to_nat(47u);
v___x_863_ = lean_nat_dec_le(v_n_819_, v___x_862_);
if (v___x_863_ == 0)
{
uint8_t v___x_864_; 
v___x_864_ = 48;
return v___x_864_;
}
else
{
uint8_t v___x_865_; 
v___x_865_ = 47;
return v___x_865_;
}
}
else
{
lean_object* v___x_866_; uint8_t v___x_867_; 
v___x_866_ = lean_unsigned_to_nat(45u);
v___x_867_ = lean_nat_dec_le(v_n_819_, v___x_866_);
if (v___x_867_ == 0)
{
uint8_t v___x_868_; 
v___x_868_ = 46;
return v___x_868_;
}
else
{
uint8_t v___x_869_; 
v___x_869_ = 45;
return v___x_869_;
}
}
}
}
}
else
{
lean_object* v___x_870_; uint8_t v___x_871_; 
v___x_870_ = lean_unsigned_to_nat(36u);
v___x_871_ = lean_nat_dec_le(v_n_819_, v___x_870_);
if (v___x_871_ == 0)
{
lean_object* v___x_872_; uint8_t v___x_873_; 
v___x_872_ = lean_unsigned_to_nat(40u);
v___x_873_ = lean_nat_dec_le(v_n_819_, v___x_872_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; uint8_t v___x_875_; 
v___x_874_ = lean_unsigned_to_nat(42u);
v___x_875_ = lean_nat_dec_le(v_n_819_, v___x_874_);
if (v___x_875_ == 0)
{
lean_object* v___x_876_; uint8_t v___x_877_; 
v___x_876_ = lean_unsigned_to_nat(43u);
v___x_877_ = lean_nat_dec_le(v_n_819_, v___x_876_);
if (v___x_877_ == 0)
{
uint8_t v___x_878_; 
v___x_878_ = 44;
return v___x_878_;
}
else
{
uint8_t v___x_879_; 
v___x_879_ = 43;
return v___x_879_;
}
}
else
{
lean_object* v___x_880_; uint8_t v___x_881_; 
v___x_880_ = lean_unsigned_to_nat(41u);
v___x_881_ = lean_nat_dec_le(v_n_819_, v___x_880_);
if (v___x_881_ == 0)
{
uint8_t v___x_882_; 
v___x_882_ = 42;
return v___x_882_;
}
else
{
uint8_t v___x_883_; 
v___x_883_ = 41;
return v___x_883_;
}
}
}
else
{
lean_object* v___x_884_; uint8_t v___x_885_; 
v___x_884_ = lean_unsigned_to_nat(38u);
v___x_885_ = lean_nat_dec_le(v_n_819_, v___x_884_);
if (v___x_885_ == 0)
{
lean_object* v___x_886_; uint8_t v___x_887_; 
v___x_886_ = lean_unsigned_to_nat(39u);
v___x_887_ = lean_nat_dec_le(v_n_819_, v___x_886_);
if (v___x_887_ == 0)
{
uint8_t v___x_888_; 
v___x_888_ = 40;
return v___x_888_;
}
else
{
uint8_t v___x_889_; 
v___x_889_ = 39;
return v___x_889_;
}
}
else
{
lean_object* v___x_890_; uint8_t v___x_891_; 
v___x_890_ = lean_unsigned_to_nat(37u);
v___x_891_ = lean_nat_dec_le(v_n_819_, v___x_890_);
if (v___x_891_ == 0)
{
uint8_t v___x_892_; 
v___x_892_ = 38;
return v___x_892_;
}
else
{
uint8_t v___x_893_; 
v___x_893_ = 37;
return v___x_893_;
}
}
}
}
else
{
lean_object* v___x_894_; uint8_t v___x_895_; 
v___x_894_ = lean_unsigned_to_nat(32u);
v___x_895_ = lean_nat_dec_le(v_n_819_, v___x_894_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; uint8_t v___x_897_; 
v___x_896_ = lean_unsigned_to_nat(34u);
v___x_897_ = lean_nat_dec_le(v_n_819_, v___x_896_);
if (v___x_897_ == 0)
{
lean_object* v___x_898_; uint8_t v___x_899_; 
v___x_898_ = lean_unsigned_to_nat(35u);
v___x_899_ = lean_nat_dec_le(v_n_819_, v___x_898_);
if (v___x_899_ == 0)
{
uint8_t v___x_900_; 
v___x_900_ = 36;
return v___x_900_;
}
else
{
uint8_t v___x_901_; 
v___x_901_ = 35;
return v___x_901_;
}
}
else
{
lean_object* v___x_902_; uint8_t v___x_903_; 
v___x_902_ = lean_unsigned_to_nat(33u);
v___x_903_ = lean_nat_dec_le(v_n_819_, v___x_902_);
if (v___x_903_ == 0)
{
uint8_t v___x_904_; 
v___x_904_ = 34;
return v___x_904_;
}
else
{
uint8_t v___x_905_; 
v___x_905_ = 33;
return v___x_905_;
}
}
}
else
{
lean_object* v___x_906_; uint8_t v___x_907_; 
v___x_906_ = lean_unsigned_to_nat(30u);
v___x_907_ = lean_nat_dec_le(v_n_819_, v___x_906_);
if (v___x_907_ == 0)
{
lean_object* v___x_908_; uint8_t v___x_909_; 
v___x_908_ = lean_unsigned_to_nat(31u);
v___x_909_ = lean_nat_dec_le(v_n_819_, v___x_908_);
if (v___x_909_ == 0)
{
uint8_t v___x_910_; 
v___x_910_ = 32;
return v___x_910_;
}
else
{
uint8_t v___x_911_; 
v___x_911_ = 31;
return v___x_911_;
}
}
else
{
uint8_t v___x_912_; 
v___x_912_ = 30;
return v___x_912_;
}
}
}
}
}
else
{
lean_object* v___x_913_; uint8_t v___x_914_; 
v___x_913_ = lean_unsigned_to_nat(14u);
v___x_914_ = lean_nat_dec_le(v_n_819_, v___x_913_);
if (v___x_914_ == 0)
{
lean_object* v___x_915_; uint8_t v___x_916_; 
v___x_915_ = lean_unsigned_to_nat(21u);
v___x_916_ = lean_nat_dec_le(v_n_819_, v___x_915_);
if (v___x_916_ == 0)
{
lean_object* v___x_917_; uint8_t v___x_918_; 
v___x_917_ = lean_unsigned_to_nat(25u);
v___x_918_ = lean_nat_dec_le(v_n_819_, v___x_917_);
if (v___x_918_ == 0)
{
lean_object* v___x_919_; uint8_t v___x_920_; 
v___x_919_ = lean_unsigned_to_nat(27u);
v___x_920_ = lean_nat_dec_le(v_n_819_, v___x_919_);
if (v___x_920_ == 0)
{
lean_object* v___x_921_; uint8_t v___x_922_; 
v___x_921_ = lean_unsigned_to_nat(28u);
v___x_922_ = lean_nat_dec_le(v_n_819_, v___x_921_);
if (v___x_922_ == 0)
{
uint8_t v___x_923_; 
v___x_923_ = 29;
return v___x_923_;
}
else
{
uint8_t v___x_924_; 
v___x_924_ = 28;
return v___x_924_;
}
}
else
{
lean_object* v___x_925_; uint8_t v___x_926_; 
v___x_925_ = lean_unsigned_to_nat(26u);
v___x_926_ = lean_nat_dec_le(v_n_819_, v___x_925_);
if (v___x_926_ == 0)
{
uint8_t v___x_927_; 
v___x_927_ = 27;
return v___x_927_;
}
else
{
uint8_t v___x_928_; 
v___x_928_ = 26;
return v___x_928_;
}
}
}
else
{
lean_object* v___x_929_; uint8_t v___x_930_; 
v___x_929_ = lean_unsigned_to_nat(23u);
v___x_930_ = lean_nat_dec_le(v_n_819_, v___x_929_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; uint8_t v___x_932_; 
v___x_931_ = lean_unsigned_to_nat(24u);
v___x_932_ = lean_nat_dec_le(v_n_819_, v___x_931_);
if (v___x_932_ == 0)
{
uint8_t v___x_933_; 
v___x_933_ = 25;
return v___x_933_;
}
else
{
uint8_t v___x_934_; 
v___x_934_ = 24;
return v___x_934_;
}
}
else
{
lean_object* v___x_935_; uint8_t v___x_936_; 
v___x_935_ = lean_unsigned_to_nat(22u);
v___x_936_ = lean_nat_dec_le(v_n_819_, v___x_935_);
if (v___x_936_ == 0)
{
uint8_t v___x_937_; 
v___x_937_ = 23;
return v___x_937_;
}
else
{
uint8_t v___x_938_; 
v___x_938_ = 22;
return v___x_938_;
}
}
}
}
else
{
lean_object* v___x_939_; uint8_t v___x_940_; 
v___x_939_ = lean_unsigned_to_nat(17u);
v___x_940_ = lean_nat_dec_le(v_n_819_, v___x_939_);
if (v___x_940_ == 0)
{
lean_object* v___x_941_; uint8_t v___x_942_; 
v___x_941_ = lean_unsigned_to_nat(19u);
v___x_942_ = lean_nat_dec_le(v_n_819_, v___x_941_);
if (v___x_942_ == 0)
{
lean_object* v___x_943_; uint8_t v___x_944_; 
v___x_943_ = lean_unsigned_to_nat(20u);
v___x_944_ = lean_nat_dec_le(v_n_819_, v___x_943_);
if (v___x_944_ == 0)
{
uint8_t v___x_945_; 
v___x_945_ = 21;
return v___x_945_;
}
else
{
uint8_t v___x_946_; 
v___x_946_ = 20;
return v___x_946_;
}
}
else
{
lean_object* v___x_947_; uint8_t v___x_948_; 
v___x_947_ = lean_unsigned_to_nat(18u);
v___x_948_ = lean_nat_dec_le(v_n_819_, v___x_947_);
if (v___x_948_ == 0)
{
uint8_t v___x_949_; 
v___x_949_ = 19;
return v___x_949_;
}
else
{
uint8_t v___x_950_; 
v___x_950_ = 18;
return v___x_950_;
}
}
}
else
{
lean_object* v___x_951_; uint8_t v___x_952_; 
v___x_951_ = lean_unsigned_to_nat(15u);
v___x_952_ = lean_nat_dec_le(v_n_819_, v___x_951_);
if (v___x_952_ == 0)
{
lean_object* v___x_953_; uint8_t v___x_954_; 
v___x_953_ = lean_unsigned_to_nat(16u);
v___x_954_ = lean_nat_dec_le(v_n_819_, v___x_953_);
if (v___x_954_ == 0)
{
uint8_t v___x_955_; 
v___x_955_ = 17;
return v___x_955_;
}
else
{
uint8_t v___x_956_; 
v___x_956_ = 16;
return v___x_956_;
}
}
else
{
uint8_t v___x_957_; 
v___x_957_ = 15;
return v___x_957_;
}
}
}
}
else
{
lean_object* v___x_958_; uint8_t v___x_959_; 
v___x_958_ = lean_unsigned_to_nat(6u);
v___x_959_ = lean_nat_dec_le(v_n_819_, v___x_958_);
if (v___x_959_ == 0)
{
lean_object* v___x_960_; uint8_t v___x_961_; 
v___x_960_ = lean_unsigned_to_nat(10u);
v___x_961_ = lean_nat_dec_le(v_n_819_, v___x_960_);
if (v___x_961_ == 0)
{
lean_object* v___x_962_; uint8_t v___x_963_; 
v___x_962_ = lean_unsigned_to_nat(12u);
v___x_963_ = lean_nat_dec_le(v_n_819_, v___x_962_);
if (v___x_963_ == 0)
{
lean_object* v___x_964_; uint8_t v___x_965_; 
v___x_964_ = lean_unsigned_to_nat(13u);
v___x_965_ = lean_nat_dec_le(v_n_819_, v___x_964_);
if (v___x_965_ == 0)
{
uint8_t v___x_966_; 
v___x_966_ = 14;
return v___x_966_;
}
else
{
uint8_t v___x_967_; 
v___x_967_ = 13;
return v___x_967_;
}
}
else
{
lean_object* v___x_968_; uint8_t v___x_969_; 
v___x_968_ = lean_unsigned_to_nat(11u);
v___x_969_ = lean_nat_dec_le(v_n_819_, v___x_968_);
if (v___x_969_ == 0)
{
uint8_t v___x_970_; 
v___x_970_ = 12;
return v___x_970_;
}
else
{
uint8_t v___x_971_; 
v___x_971_ = 11;
return v___x_971_;
}
}
}
else
{
lean_object* v___x_972_; uint8_t v___x_973_; 
v___x_972_ = lean_unsigned_to_nat(8u);
v___x_973_ = lean_nat_dec_le(v_n_819_, v___x_972_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; uint8_t v___x_975_; 
v___x_974_ = lean_unsigned_to_nat(9u);
v___x_975_ = lean_nat_dec_le(v_n_819_, v___x_974_);
if (v___x_975_ == 0)
{
uint8_t v___x_976_; 
v___x_976_ = 10;
return v___x_976_;
}
else
{
uint8_t v___x_977_; 
v___x_977_ = 9;
return v___x_977_;
}
}
else
{
lean_object* v___x_978_; uint8_t v___x_979_; 
v___x_978_ = lean_unsigned_to_nat(7u);
v___x_979_ = lean_nat_dec_le(v_n_819_, v___x_978_);
if (v___x_979_ == 0)
{
uint8_t v___x_980_; 
v___x_980_ = 8;
return v___x_980_;
}
else
{
uint8_t v___x_981_; 
v___x_981_ = 7;
return v___x_981_;
}
}
}
}
else
{
lean_object* v___x_982_; uint8_t v___x_983_; 
v___x_982_ = lean_unsigned_to_nat(2u);
v___x_983_ = lean_nat_dec_le(v_n_819_, v___x_982_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; uint8_t v___x_985_; 
v___x_984_ = lean_unsigned_to_nat(4u);
v___x_985_ = lean_nat_dec_le(v_n_819_, v___x_984_);
if (v___x_985_ == 0)
{
lean_object* v___x_986_; uint8_t v___x_987_; 
v___x_986_ = lean_unsigned_to_nat(5u);
v___x_987_ = lean_nat_dec_le(v_n_819_, v___x_986_);
if (v___x_987_ == 0)
{
uint8_t v___x_988_; 
v___x_988_ = 6;
return v___x_988_;
}
else
{
uint8_t v___x_989_; 
v___x_989_ = 5;
return v___x_989_;
}
}
else
{
lean_object* v___x_990_; uint8_t v___x_991_; 
v___x_990_ = lean_unsigned_to_nat(3u);
v___x_991_ = lean_nat_dec_le(v_n_819_, v___x_990_);
if (v___x_991_ == 0)
{
uint8_t v___x_992_; 
v___x_992_ = 4;
return v___x_992_;
}
else
{
uint8_t v___x_993_; 
v___x_993_ = 3;
return v___x_993_;
}
}
}
else
{
lean_object* v___x_994_; uint8_t v___x_995_; 
v___x_994_ = lean_unsigned_to_nat(0u);
v___x_995_ = lean_nat_dec_le(v_n_819_, v___x_994_);
if (v___x_995_ == 0)
{
lean_object* v___x_996_; uint8_t v___x_997_; 
v___x_996_ = lean_unsigned_to_nat(1u);
v___x_997_ = lean_nat_dec_le(v_n_819_, v___x_996_);
if (v___x_997_ == 0)
{
uint8_t v___x_998_; 
v___x_998_ = 2;
return v___x_998_;
}
else
{
uint8_t v___x_999_; 
v___x_999_ = 1;
return v___x_999_;
}
}
else
{
uint8_t v___x_1000_; 
v___x_1000_ = 0;
return v___x_1000_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderRuleId_ofNat___boxed(lean_object* v_n_1001_){
_start:
{
uint8_t v_res_1002_; lean_object* v_r_1003_; 
v_res_1002_ = lp_lean_x2dftml_LeanFtml_RenderRuleId_ofNat(v_n_1001_);
lean_dec(v_n_1001_);
v_r_1003_ = lean_box(v_res_1002_);
return v_r_1003_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_instDecidableEqRenderRuleId(uint8_t v_x_1004_, uint8_t v_y_1005_){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; uint8_t v___x_1010_; 
v___x_1006_ = lean_box(v_x_1004_);
v___x_1007_ = lean_obj_tag_nat(v___x_1006_);
lean_dec(v___x_1006_);
v___x_1008_ = lean_box(v_y_1005_);
v___x_1009_ = lean_obj_tag_nat(v___x_1008_);
lean_dec(v___x_1008_);
v___x_1010_ = lean_nat_dec_eq(v___x_1007_, v___x_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instDecidableEqRenderRuleId___boxed(lean_object* v_x_1011_, lean_object* v_y_1012_){
_start:
{
uint8_t v_x_23__boxed_1013_; uint8_t v_y_24__boxed_1014_; uint8_t v_res_1015_; lean_object* v_r_1016_; 
v_x_23__boxed_1013_ = lean_unbox(v_x_1011_);
v_y_24__boxed_1014_ = lean_unbox(v_y_1012_);
v_res_1015_ = lp_lean_x2dftml_LeanFtml_instDecidableEqRenderRuleId(v_x_23__boxed_1013_, v_y_24__boxed_1014_);
v_r_1016_ = lean_box(v_res_1015_);
return v_r_1016_;
}
}
static uint8_t _init_lp_lean_x2dftml_LeanFtml_instInhabitedRenderRuleId_default(void){
_start:
{
uint8_t v___x_1017_; 
v___x_1017_ = 0;
return v___x_1017_;
}
}
static uint8_t _init_lp_lean_x2dftml_LeanFtml_instInhabitedRenderRuleId(void){
_start:
{
uint8_t v___x_1018_; 
v___x_1018_ = 0;
return v___x_1018_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122(void){
_start:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1202_ = lean_unsigned_to_nat(2u);
v___x_1203_ = lean_nat_to_int(v___x_1202_);
return v___x_1203_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123(void){
_start:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1204_ = lean_unsigned_to_nat(1u);
v___x_1205_ = lean_nat_to_int(v___x_1204_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr(uint8_t v_x_1206_, lean_object* v_prec_1207_){
_start:
{
lean_object* v___y_1209_; lean_object* v___y_1216_; lean_object* v___y_1223_; lean_object* v___y_1230_; lean_object* v___y_1237_; lean_object* v___y_1244_; lean_object* v___y_1251_; lean_object* v___y_1258_; lean_object* v___y_1265_; lean_object* v___y_1272_; lean_object* v___y_1279_; lean_object* v___y_1286_; lean_object* v___y_1293_; lean_object* v___y_1300_; lean_object* v___y_1307_; lean_object* v___y_1314_; lean_object* v___y_1321_; lean_object* v___y_1328_; lean_object* v___y_1335_; lean_object* v___y_1342_; lean_object* v___y_1349_; lean_object* v___y_1356_; lean_object* v___y_1363_; lean_object* v___y_1370_; lean_object* v___y_1377_; lean_object* v___y_1384_; lean_object* v___y_1391_; lean_object* v___y_1398_; lean_object* v___y_1405_; lean_object* v___y_1412_; lean_object* v___y_1419_; lean_object* v___y_1426_; lean_object* v___y_1433_; lean_object* v___y_1440_; lean_object* v___y_1447_; lean_object* v___y_1454_; lean_object* v___y_1461_; lean_object* v___y_1468_; lean_object* v___y_1475_; lean_object* v___y_1482_; lean_object* v___y_1489_; lean_object* v___y_1496_; lean_object* v___y_1503_; lean_object* v___y_1510_; lean_object* v___y_1517_; lean_object* v___y_1524_; lean_object* v___y_1531_; lean_object* v___y_1538_; lean_object* v___y_1545_; lean_object* v___y_1552_; lean_object* v___y_1559_; lean_object* v___y_1566_; lean_object* v___y_1573_; lean_object* v___y_1580_; lean_object* v___y_1587_; lean_object* v___y_1594_; lean_object* v___y_1601_; lean_object* v___y_1608_; lean_object* v___y_1615_; lean_object* v___y_1622_; lean_object* v___y_1629_; 
switch(v_x_1206_)
{
case 0:
{
lean_object* v___x_1635_; uint8_t v___x_1636_; 
v___x_1635_ = lean_unsigned_to_nat(1024u);
v___x_1636_ = lean_nat_dec_le(v___x_1635_, v_prec_1207_);
if (v___x_1636_ == 0)
{
lean_object* v___x_1637_; 
v___x_1637_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1209_ = v___x_1637_;
goto v___jp_1208_;
}
else
{
lean_object* v___x_1638_; 
v___x_1638_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1209_ = v___x_1638_;
goto v___jp_1208_;
}
}
case 1:
{
lean_object* v___x_1639_; uint8_t v___x_1640_; 
v___x_1639_ = lean_unsigned_to_nat(1024u);
v___x_1640_ = lean_nat_dec_le(v___x_1639_, v_prec_1207_);
if (v___x_1640_ == 0)
{
lean_object* v___x_1641_; 
v___x_1641_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1216_ = v___x_1641_;
goto v___jp_1215_;
}
else
{
lean_object* v___x_1642_; 
v___x_1642_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1216_ = v___x_1642_;
goto v___jp_1215_;
}
}
case 2:
{
lean_object* v___x_1643_; uint8_t v___x_1644_; 
v___x_1643_ = lean_unsigned_to_nat(1024u);
v___x_1644_ = lean_nat_dec_le(v___x_1643_, v_prec_1207_);
if (v___x_1644_ == 0)
{
lean_object* v___x_1645_; 
v___x_1645_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1223_ = v___x_1645_;
goto v___jp_1222_;
}
else
{
lean_object* v___x_1646_; 
v___x_1646_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1223_ = v___x_1646_;
goto v___jp_1222_;
}
}
case 3:
{
lean_object* v___x_1647_; uint8_t v___x_1648_; 
v___x_1647_ = lean_unsigned_to_nat(1024u);
v___x_1648_ = lean_nat_dec_le(v___x_1647_, v_prec_1207_);
if (v___x_1648_ == 0)
{
lean_object* v___x_1649_; 
v___x_1649_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1230_ = v___x_1649_;
goto v___jp_1229_;
}
else
{
lean_object* v___x_1650_; 
v___x_1650_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1230_ = v___x_1650_;
goto v___jp_1229_;
}
}
case 4:
{
lean_object* v___x_1651_; uint8_t v___x_1652_; 
v___x_1651_ = lean_unsigned_to_nat(1024u);
v___x_1652_ = lean_nat_dec_le(v___x_1651_, v_prec_1207_);
if (v___x_1652_ == 0)
{
lean_object* v___x_1653_; 
v___x_1653_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1237_ = v___x_1653_;
goto v___jp_1236_;
}
else
{
lean_object* v___x_1654_; 
v___x_1654_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1237_ = v___x_1654_;
goto v___jp_1236_;
}
}
case 5:
{
lean_object* v___x_1655_; uint8_t v___x_1656_; 
v___x_1655_ = lean_unsigned_to_nat(1024u);
v___x_1656_ = lean_nat_dec_le(v___x_1655_, v_prec_1207_);
if (v___x_1656_ == 0)
{
lean_object* v___x_1657_; 
v___x_1657_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1244_ = v___x_1657_;
goto v___jp_1243_;
}
else
{
lean_object* v___x_1658_; 
v___x_1658_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1244_ = v___x_1658_;
goto v___jp_1243_;
}
}
case 6:
{
lean_object* v___x_1659_; uint8_t v___x_1660_; 
v___x_1659_ = lean_unsigned_to_nat(1024u);
v___x_1660_ = lean_nat_dec_le(v___x_1659_, v_prec_1207_);
if (v___x_1660_ == 0)
{
lean_object* v___x_1661_; 
v___x_1661_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1251_ = v___x_1661_;
goto v___jp_1250_;
}
else
{
lean_object* v___x_1662_; 
v___x_1662_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1251_ = v___x_1662_;
goto v___jp_1250_;
}
}
case 7:
{
lean_object* v___x_1663_; uint8_t v___x_1664_; 
v___x_1663_ = lean_unsigned_to_nat(1024u);
v___x_1664_ = lean_nat_dec_le(v___x_1663_, v_prec_1207_);
if (v___x_1664_ == 0)
{
lean_object* v___x_1665_; 
v___x_1665_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1258_ = v___x_1665_;
goto v___jp_1257_;
}
else
{
lean_object* v___x_1666_; 
v___x_1666_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1258_ = v___x_1666_;
goto v___jp_1257_;
}
}
case 8:
{
lean_object* v___x_1667_; uint8_t v___x_1668_; 
v___x_1667_ = lean_unsigned_to_nat(1024u);
v___x_1668_ = lean_nat_dec_le(v___x_1667_, v_prec_1207_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; 
v___x_1669_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1265_ = v___x_1669_;
goto v___jp_1264_;
}
else
{
lean_object* v___x_1670_; 
v___x_1670_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1265_ = v___x_1670_;
goto v___jp_1264_;
}
}
case 9:
{
lean_object* v___x_1671_; uint8_t v___x_1672_; 
v___x_1671_ = lean_unsigned_to_nat(1024u);
v___x_1672_ = lean_nat_dec_le(v___x_1671_, v_prec_1207_);
if (v___x_1672_ == 0)
{
lean_object* v___x_1673_; 
v___x_1673_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1272_ = v___x_1673_;
goto v___jp_1271_;
}
else
{
lean_object* v___x_1674_; 
v___x_1674_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1272_ = v___x_1674_;
goto v___jp_1271_;
}
}
case 10:
{
lean_object* v___x_1675_; uint8_t v___x_1676_; 
v___x_1675_ = lean_unsigned_to_nat(1024u);
v___x_1676_ = lean_nat_dec_le(v___x_1675_, v_prec_1207_);
if (v___x_1676_ == 0)
{
lean_object* v___x_1677_; 
v___x_1677_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1279_ = v___x_1677_;
goto v___jp_1278_;
}
else
{
lean_object* v___x_1678_; 
v___x_1678_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1279_ = v___x_1678_;
goto v___jp_1278_;
}
}
case 11:
{
lean_object* v___x_1679_; uint8_t v___x_1680_; 
v___x_1679_ = lean_unsigned_to_nat(1024u);
v___x_1680_ = lean_nat_dec_le(v___x_1679_, v_prec_1207_);
if (v___x_1680_ == 0)
{
lean_object* v___x_1681_; 
v___x_1681_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1286_ = v___x_1681_;
goto v___jp_1285_;
}
else
{
lean_object* v___x_1682_; 
v___x_1682_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1286_ = v___x_1682_;
goto v___jp_1285_;
}
}
case 12:
{
lean_object* v___x_1683_; uint8_t v___x_1684_; 
v___x_1683_ = lean_unsigned_to_nat(1024u);
v___x_1684_ = lean_nat_dec_le(v___x_1683_, v_prec_1207_);
if (v___x_1684_ == 0)
{
lean_object* v___x_1685_; 
v___x_1685_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1293_ = v___x_1685_;
goto v___jp_1292_;
}
else
{
lean_object* v___x_1686_; 
v___x_1686_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1293_ = v___x_1686_;
goto v___jp_1292_;
}
}
case 13:
{
lean_object* v___x_1687_; uint8_t v___x_1688_; 
v___x_1687_ = lean_unsigned_to_nat(1024u);
v___x_1688_ = lean_nat_dec_le(v___x_1687_, v_prec_1207_);
if (v___x_1688_ == 0)
{
lean_object* v___x_1689_; 
v___x_1689_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1300_ = v___x_1689_;
goto v___jp_1299_;
}
else
{
lean_object* v___x_1690_; 
v___x_1690_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1300_ = v___x_1690_;
goto v___jp_1299_;
}
}
case 14:
{
lean_object* v___x_1691_; uint8_t v___x_1692_; 
v___x_1691_ = lean_unsigned_to_nat(1024u);
v___x_1692_ = lean_nat_dec_le(v___x_1691_, v_prec_1207_);
if (v___x_1692_ == 0)
{
lean_object* v___x_1693_; 
v___x_1693_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1307_ = v___x_1693_;
goto v___jp_1306_;
}
else
{
lean_object* v___x_1694_; 
v___x_1694_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1307_ = v___x_1694_;
goto v___jp_1306_;
}
}
case 15:
{
lean_object* v___x_1695_; uint8_t v___x_1696_; 
v___x_1695_ = lean_unsigned_to_nat(1024u);
v___x_1696_ = lean_nat_dec_le(v___x_1695_, v_prec_1207_);
if (v___x_1696_ == 0)
{
lean_object* v___x_1697_; 
v___x_1697_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1314_ = v___x_1697_;
goto v___jp_1313_;
}
else
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1314_ = v___x_1698_;
goto v___jp_1313_;
}
}
case 16:
{
lean_object* v___x_1699_; uint8_t v___x_1700_; 
v___x_1699_ = lean_unsigned_to_nat(1024u);
v___x_1700_ = lean_nat_dec_le(v___x_1699_, v_prec_1207_);
if (v___x_1700_ == 0)
{
lean_object* v___x_1701_; 
v___x_1701_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1321_ = v___x_1701_;
goto v___jp_1320_;
}
else
{
lean_object* v___x_1702_; 
v___x_1702_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1321_ = v___x_1702_;
goto v___jp_1320_;
}
}
case 17:
{
lean_object* v___x_1703_; uint8_t v___x_1704_; 
v___x_1703_ = lean_unsigned_to_nat(1024u);
v___x_1704_ = lean_nat_dec_le(v___x_1703_, v_prec_1207_);
if (v___x_1704_ == 0)
{
lean_object* v___x_1705_; 
v___x_1705_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1328_ = v___x_1705_;
goto v___jp_1327_;
}
else
{
lean_object* v___x_1706_; 
v___x_1706_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1328_ = v___x_1706_;
goto v___jp_1327_;
}
}
case 18:
{
lean_object* v___x_1707_; uint8_t v___x_1708_; 
v___x_1707_ = lean_unsigned_to_nat(1024u);
v___x_1708_ = lean_nat_dec_le(v___x_1707_, v_prec_1207_);
if (v___x_1708_ == 0)
{
lean_object* v___x_1709_; 
v___x_1709_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1335_ = v___x_1709_;
goto v___jp_1334_;
}
else
{
lean_object* v___x_1710_; 
v___x_1710_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1335_ = v___x_1710_;
goto v___jp_1334_;
}
}
case 19:
{
lean_object* v___x_1711_; uint8_t v___x_1712_; 
v___x_1711_ = lean_unsigned_to_nat(1024u);
v___x_1712_ = lean_nat_dec_le(v___x_1711_, v_prec_1207_);
if (v___x_1712_ == 0)
{
lean_object* v___x_1713_; 
v___x_1713_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1342_ = v___x_1713_;
goto v___jp_1341_;
}
else
{
lean_object* v___x_1714_; 
v___x_1714_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1342_ = v___x_1714_;
goto v___jp_1341_;
}
}
case 20:
{
lean_object* v___x_1715_; uint8_t v___x_1716_; 
v___x_1715_ = lean_unsigned_to_nat(1024u);
v___x_1716_ = lean_nat_dec_le(v___x_1715_, v_prec_1207_);
if (v___x_1716_ == 0)
{
lean_object* v___x_1717_; 
v___x_1717_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1349_ = v___x_1717_;
goto v___jp_1348_;
}
else
{
lean_object* v___x_1718_; 
v___x_1718_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1349_ = v___x_1718_;
goto v___jp_1348_;
}
}
case 21:
{
lean_object* v___x_1719_; uint8_t v___x_1720_; 
v___x_1719_ = lean_unsigned_to_nat(1024u);
v___x_1720_ = lean_nat_dec_le(v___x_1719_, v_prec_1207_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; 
v___x_1721_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1356_ = v___x_1721_;
goto v___jp_1355_;
}
else
{
lean_object* v___x_1722_; 
v___x_1722_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1356_ = v___x_1722_;
goto v___jp_1355_;
}
}
case 22:
{
lean_object* v___x_1723_; uint8_t v___x_1724_; 
v___x_1723_ = lean_unsigned_to_nat(1024u);
v___x_1724_ = lean_nat_dec_le(v___x_1723_, v_prec_1207_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; 
v___x_1725_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1363_ = v___x_1725_;
goto v___jp_1362_;
}
else
{
lean_object* v___x_1726_; 
v___x_1726_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1363_ = v___x_1726_;
goto v___jp_1362_;
}
}
case 23:
{
lean_object* v___x_1727_; uint8_t v___x_1728_; 
v___x_1727_ = lean_unsigned_to_nat(1024u);
v___x_1728_ = lean_nat_dec_le(v___x_1727_, v_prec_1207_);
if (v___x_1728_ == 0)
{
lean_object* v___x_1729_; 
v___x_1729_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1370_ = v___x_1729_;
goto v___jp_1369_;
}
else
{
lean_object* v___x_1730_; 
v___x_1730_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1370_ = v___x_1730_;
goto v___jp_1369_;
}
}
case 24:
{
lean_object* v___x_1731_; uint8_t v___x_1732_; 
v___x_1731_ = lean_unsigned_to_nat(1024u);
v___x_1732_ = lean_nat_dec_le(v___x_1731_, v_prec_1207_);
if (v___x_1732_ == 0)
{
lean_object* v___x_1733_; 
v___x_1733_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1377_ = v___x_1733_;
goto v___jp_1376_;
}
else
{
lean_object* v___x_1734_; 
v___x_1734_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1377_ = v___x_1734_;
goto v___jp_1376_;
}
}
case 25:
{
lean_object* v___x_1735_; uint8_t v___x_1736_; 
v___x_1735_ = lean_unsigned_to_nat(1024u);
v___x_1736_ = lean_nat_dec_le(v___x_1735_, v_prec_1207_);
if (v___x_1736_ == 0)
{
lean_object* v___x_1737_; 
v___x_1737_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1384_ = v___x_1737_;
goto v___jp_1383_;
}
else
{
lean_object* v___x_1738_; 
v___x_1738_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1384_ = v___x_1738_;
goto v___jp_1383_;
}
}
case 26:
{
lean_object* v___x_1739_; uint8_t v___x_1740_; 
v___x_1739_ = lean_unsigned_to_nat(1024u);
v___x_1740_ = lean_nat_dec_le(v___x_1739_, v_prec_1207_);
if (v___x_1740_ == 0)
{
lean_object* v___x_1741_; 
v___x_1741_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1391_ = v___x_1741_;
goto v___jp_1390_;
}
else
{
lean_object* v___x_1742_; 
v___x_1742_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1391_ = v___x_1742_;
goto v___jp_1390_;
}
}
case 27:
{
lean_object* v___x_1743_; uint8_t v___x_1744_; 
v___x_1743_ = lean_unsigned_to_nat(1024u);
v___x_1744_ = lean_nat_dec_le(v___x_1743_, v_prec_1207_);
if (v___x_1744_ == 0)
{
lean_object* v___x_1745_; 
v___x_1745_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1398_ = v___x_1745_;
goto v___jp_1397_;
}
else
{
lean_object* v___x_1746_; 
v___x_1746_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1398_ = v___x_1746_;
goto v___jp_1397_;
}
}
case 28:
{
lean_object* v___x_1747_; uint8_t v___x_1748_; 
v___x_1747_ = lean_unsigned_to_nat(1024u);
v___x_1748_ = lean_nat_dec_le(v___x_1747_, v_prec_1207_);
if (v___x_1748_ == 0)
{
lean_object* v___x_1749_; 
v___x_1749_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1405_ = v___x_1749_;
goto v___jp_1404_;
}
else
{
lean_object* v___x_1750_; 
v___x_1750_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1405_ = v___x_1750_;
goto v___jp_1404_;
}
}
case 29:
{
lean_object* v___x_1751_; uint8_t v___x_1752_; 
v___x_1751_ = lean_unsigned_to_nat(1024u);
v___x_1752_ = lean_nat_dec_le(v___x_1751_, v_prec_1207_);
if (v___x_1752_ == 0)
{
lean_object* v___x_1753_; 
v___x_1753_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1412_ = v___x_1753_;
goto v___jp_1411_;
}
else
{
lean_object* v___x_1754_; 
v___x_1754_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1412_ = v___x_1754_;
goto v___jp_1411_;
}
}
case 30:
{
lean_object* v___x_1755_; uint8_t v___x_1756_; 
v___x_1755_ = lean_unsigned_to_nat(1024u);
v___x_1756_ = lean_nat_dec_le(v___x_1755_, v_prec_1207_);
if (v___x_1756_ == 0)
{
lean_object* v___x_1757_; 
v___x_1757_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1419_ = v___x_1757_;
goto v___jp_1418_;
}
else
{
lean_object* v___x_1758_; 
v___x_1758_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1419_ = v___x_1758_;
goto v___jp_1418_;
}
}
case 31:
{
lean_object* v___x_1759_; uint8_t v___x_1760_; 
v___x_1759_ = lean_unsigned_to_nat(1024u);
v___x_1760_ = lean_nat_dec_le(v___x_1759_, v_prec_1207_);
if (v___x_1760_ == 0)
{
lean_object* v___x_1761_; 
v___x_1761_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1426_ = v___x_1761_;
goto v___jp_1425_;
}
else
{
lean_object* v___x_1762_; 
v___x_1762_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1426_ = v___x_1762_;
goto v___jp_1425_;
}
}
case 32:
{
lean_object* v___x_1763_; uint8_t v___x_1764_; 
v___x_1763_ = lean_unsigned_to_nat(1024u);
v___x_1764_ = lean_nat_dec_le(v___x_1763_, v_prec_1207_);
if (v___x_1764_ == 0)
{
lean_object* v___x_1765_; 
v___x_1765_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1433_ = v___x_1765_;
goto v___jp_1432_;
}
else
{
lean_object* v___x_1766_; 
v___x_1766_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1433_ = v___x_1766_;
goto v___jp_1432_;
}
}
case 33:
{
lean_object* v___x_1767_; uint8_t v___x_1768_; 
v___x_1767_ = lean_unsigned_to_nat(1024u);
v___x_1768_ = lean_nat_dec_le(v___x_1767_, v_prec_1207_);
if (v___x_1768_ == 0)
{
lean_object* v___x_1769_; 
v___x_1769_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1440_ = v___x_1769_;
goto v___jp_1439_;
}
else
{
lean_object* v___x_1770_; 
v___x_1770_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1440_ = v___x_1770_;
goto v___jp_1439_;
}
}
case 34:
{
lean_object* v___x_1771_; uint8_t v___x_1772_; 
v___x_1771_ = lean_unsigned_to_nat(1024u);
v___x_1772_ = lean_nat_dec_le(v___x_1771_, v_prec_1207_);
if (v___x_1772_ == 0)
{
lean_object* v___x_1773_; 
v___x_1773_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1447_ = v___x_1773_;
goto v___jp_1446_;
}
else
{
lean_object* v___x_1774_; 
v___x_1774_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1447_ = v___x_1774_;
goto v___jp_1446_;
}
}
case 35:
{
lean_object* v___x_1775_; uint8_t v___x_1776_; 
v___x_1775_ = lean_unsigned_to_nat(1024u);
v___x_1776_ = lean_nat_dec_le(v___x_1775_, v_prec_1207_);
if (v___x_1776_ == 0)
{
lean_object* v___x_1777_; 
v___x_1777_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1454_ = v___x_1777_;
goto v___jp_1453_;
}
else
{
lean_object* v___x_1778_; 
v___x_1778_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1454_ = v___x_1778_;
goto v___jp_1453_;
}
}
case 36:
{
lean_object* v___x_1779_; uint8_t v___x_1780_; 
v___x_1779_ = lean_unsigned_to_nat(1024u);
v___x_1780_ = lean_nat_dec_le(v___x_1779_, v_prec_1207_);
if (v___x_1780_ == 0)
{
lean_object* v___x_1781_; 
v___x_1781_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1461_ = v___x_1781_;
goto v___jp_1460_;
}
else
{
lean_object* v___x_1782_; 
v___x_1782_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1461_ = v___x_1782_;
goto v___jp_1460_;
}
}
case 37:
{
lean_object* v___x_1783_; uint8_t v___x_1784_; 
v___x_1783_ = lean_unsigned_to_nat(1024u);
v___x_1784_ = lean_nat_dec_le(v___x_1783_, v_prec_1207_);
if (v___x_1784_ == 0)
{
lean_object* v___x_1785_; 
v___x_1785_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1468_ = v___x_1785_;
goto v___jp_1467_;
}
else
{
lean_object* v___x_1786_; 
v___x_1786_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1468_ = v___x_1786_;
goto v___jp_1467_;
}
}
case 38:
{
lean_object* v___x_1787_; uint8_t v___x_1788_; 
v___x_1787_ = lean_unsigned_to_nat(1024u);
v___x_1788_ = lean_nat_dec_le(v___x_1787_, v_prec_1207_);
if (v___x_1788_ == 0)
{
lean_object* v___x_1789_; 
v___x_1789_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1475_ = v___x_1789_;
goto v___jp_1474_;
}
else
{
lean_object* v___x_1790_; 
v___x_1790_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1475_ = v___x_1790_;
goto v___jp_1474_;
}
}
case 39:
{
lean_object* v___x_1791_; uint8_t v___x_1792_; 
v___x_1791_ = lean_unsigned_to_nat(1024u);
v___x_1792_ = lean_nat_dec_le(v___x_1791_, v_prec_1207_);
if (v___x_1792_ == 0)
{
lean_object* v___x_1793_; 
v___x_1793_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1482_ = v___x_1793_;
goto v___jp_1481_;
}
else
{
lean_object* v___x_1794_; 
v___x_1794_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1482_ = v___x_1794_;
goto v___jp_1481_;
}
}
case 40:
{
lean_object* v___x_1795_; uint8_t v___x_1796_; 
v___x_1795_ = lean_unsigned_to_nat(1024u);
v___x_1796_ = lean_nat_dec_le(v___x_1795_, v_prec_1207_);
if (v___x_1796_ == 0)
{
lean_object* v___x_1797_; 
v___x_1797_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1489_ = v___x_1797_;
goto v___jp_1488_;
}
else
{
lean_object* v___x_1798_; 
v___x_1798_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1489_ = v___x_1798_;
goto v___jp_1488_;
}
}
case 41:
{
lean_object* v___x_1799_; uint8_t v___x_1800_; 
v___x_1799_ = lean_unsigned_to_nat(1024u);
v___x_1800_ = lean_nat_dec_le(v___x_1799_, v_prec_1207_);
if (v___x_1800_ == 0)
{
lean_object* v___x_1801_; 
v___x_1801_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1496_ = v___x_1801_;
goto v___jp_1495_;
}
else
{
lean_object* v___x_1802_; 
v___x_1802_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1496_ = v___x_1802_;
goto v___jp_1495_;
}
}
case 42:
{
lean_object* v___x_1803_; uint8_t v___x_1804_; 
v___x_1803_ = lean_unsigned_to_nat(1024u);
v___x_1804_ = lean_nat_dec_le(v___x_1803_, v_prec_1207_);
if (v___x_1804_ == 0)
{
lean_object* v___x_1805_; 
v___x_1805_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1503_ = v___x_1805_;
goto v___jp_1502_;
}
else
{
lean_object* v___x_1806_; 
v___x_1806_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1503_ = v___x_1806_;
goto v___jp_1502_;
}
}
case 43:
{
lean_object* v___x_1807_; uint8_t v___x_1808_; 
v___x_1807_ = lean_unsigned_to_nat(1024u);
v___x_1808_ = lean_nat_dec_le(v___x_1807_, v_prec_1207_);
if (v___x_1808_ == 0)
{
lean_object* v___x_1809_; 
v___x_1809_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1510_ = v___x_1809_;
goto v___jp_1509_;
}
else
{
lean_object* v___x_1810_; 
v___x_1810_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1510_ = v___x_1810_;
goto v___jp_1509_;
}
}
case 44:
{
lean_object* v___x_1811_; uint8_t v___x_1812_; 
v___x_1811_ = lean_unsigned_to_nat(1024u);
v___x_1812_ = lean_nat_dec_le(v___x_1811_, v_prec_1207_);
if (v___x_1812_ == 0)
{
lean_object* v___x_1813_; 
v___x_1813_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1517_ = v___x_1813_;
goto v___jp_1516_;
}
else
{
lean_object* v___x_1814_; 
v___x_1814_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1517_ = v___x_1814_;
goto v___jp_1516_;
}
}
case 45:
{
lean_object* v___x_1815_; uint8_t v___x_1816_; 
v___x_1815_ = lean_unsigned_to_nat(1024u);
v___x_1816_ = lean_nat_dec_le(v___x_1815_, v_prec_1207_);
if (v___x_1816_ == 0)
{
lean_object* v___x_1817_; 
v___x_1817_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1524_ = v___x_1817_;
goto v___jp_1523_;
}
else
{
lean_object* v___x_1818_; 
v___x_1818_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1524_ = v___x_1818_;
goto v___jp_1523_;
}
}
case 46:
{
lean_object* v___x_1819_; uint8_t v___x_1820_; 
v___x_1819_ = lean_unsigned_to_nat(1024u);
v___x_1820_ = lean_nat_dec_le(v___x_1819_, v_prec_1207_);
if (v___x_1820_ == 0)
{
lean_object* v___x_1821_; 
v___x_1821_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1531_ = v___x_1821_;
goto v___jp_1530_;
}
else
{
lean_object* v___x_1822_; 
v___x_1822_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1531_ = v___x_1822_;
goto v___jp_1530_;
}
}
case 47:
{
lean_object* v___x_1823_; uint8_t v___x_1824_; 
v___x_1823_ = lean_unsigned_to_nat(1024u);
v___x_1824_ = lean_nat_dec_le(v___x_1823_, v_prec_1207_);
if (v___x_1824_ == 0)
{
lean_object* v___x_1825_; 
v___x_1825_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1538_ = v___x_1825_;
goto v___jp_1537_;
}
else
{
lean_object* v___x_1826_; 
v___x_1826_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1538_ = v___x_1826_;
goto v___jp_1537_;
}
}
case 48:
{
lean_object* v___x_1827_; uint8_t v___x_1828_; 
v___x_1827_ = lean_unsigned_to_nat(1024u);
v___x_1828_ = lean_nat_dec_le(v___x_1827_, v_prec_1207_);
if (v___x_1828_ == 0)
{
lean_object* v___x_1829_; 
v___x_1829_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1545_ = v___x_1829_;
goto v___jp_1544_;
}
else
{
lean_object* v___x_1830_; 
v___x_1830_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1545_ = v___x_1830_;
goto v___jp_1544_;
}
}
case 49:
{
lean_object* v___x_1831_; uint8_t v___x_1832_; 
v___x_1831_ = lean_unsigned_to_nat(1024u);
v___x_1832_ = lean_nat_dec_le(v___x_1831_, v_prec_1207_);
if (v___x_1832_ == 0)
{
lean_object* v___x_1833_; 
v___x_1833_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1552_ = v___x_1833_;
goto v___jp_1551_;
}
else
{
lean_object* v___x_1834_; 
v___x_1834_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1552_ = v___x_1834_;
goto v___jp_1551_;
}
}
case 50:
{
lean_object* v___x_1835_; uint8_t v___x_1836_; 
v___x_1835_ = lean_unsigned_to_nat(1024u);
v___x_1836_ = lean_nat_dec_le(v___x_1835_, v_prec_1207_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; 
v___x_1837_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1559_ = v___x_1837_;
goto v___jp_1558_;
}
else
{
lean_object* v___x_1838_; 
v___x_1838_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1559_ = v___x_1838_;
goto v___jp_1558_;
}
}
case 51:
{
lean_object* v___x_1839_; uint8_t v___x_1840_; 
v___x_1839_ = lean_unsigned_to_nat(1024u);
v___x_1840_ = lean_nat_dec_le(v___x_1839_, v_prec_1207_);
if (v___x_1840_ == 0)
{
lean_object* v___x_1841_; 
v___x_1841_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1566_ = v___x_1841_;
goto v___jp_1565_;
}
else
{
lean_object* v___x_1842_; 
v___x_1842_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1566_ = v___x_1842_;
goto v___jp_1565_;
}
}
case 52:
{
lean_object* v___x_1843_; uint8_t v___x_1844_; 
v___x_1843_ = lean_unsigned_to_nat(1024u);
v___x_1844_ = lean_nat_dec_le(v___x_1843_, v_prec_1207_);
if (v___x_1844_ == 0)
{
lean_object* v___x_1845_; 
v___x_1845_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1573_ = v___x_1845_;
goto v___jp_1572_;
}
else
{
lean_object* v___x_1846_; 
v___x_1846_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1573_ = v___x_1846_;
goto v___jp_1572_;
}
}
case 53:
{
lean_object* v___x_1847_; uint8_t v___x_1848_; 
v___x_1847_ = lean_unsigned_to_nat(1024u);
v___x_1848_ = lean_nat_dec_le(v___x_1847_, v_prec_1207_);
if (v___x_1848_ == 0)
{
lean_object* v___x_1849_; 
v___x_1849_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1580_ = v___x_1849_;
goto v___jp_1579_;
}
else
{
lean_object* v___x_1850_; 
v___x_1850_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1580_ = v___x_1850_;
goto v___jp_1579_;
}
}
case 54:
{
lean_object* v___x_1851_; uint8_t v___x_1852_; 
v___x_1851_ = lean_unsigned_to_nat(1024u);
v___x_1852_ = lean_nat_dec_le(v___x_1851_, v_prec_1207_);
if (v___x_1852_ == 0)
{
lean_object* v___x_1853_; 
v___x_1853_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1587_ = v___x_1853_;
goto v___jp_1586_;
}
else
{
lean_object* v___x_1854_; 
v___x_1854_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1587_ = v___x_1854_;
goto v___jp_1586_;
}
}
case 55:
{
lean_object* v___x_1855_; uint8_t v___x_1856_; 
v___x_1855_ = lean_unsigned_to_nat(1024u);
v___x_1856_ = lean_nat_dec_le(v___x_1855_, v_prec_1207_);
if (v___x_1856_ == 0)
{
lean_object* v___x_1857_; 
v___x_1857_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1594_ = v___x_1857_;
goto v___jp_1593_;
}
else
{
lean_object* v___x_1858_; 
v___x_1858_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1594_ = v___x_1858_;
goto v___jp_1593_;
}
}
case 56:
{
lean_object* v___x_1859_; uint8_t v___x_1860_; 
v___x_1859_ = lean_unsigned_to_nat(1024u);
v___x_1860_ = lean_nat_dec_le(v___x_1859_, v_prec_1207_);
if (v___x_1860_ == 0)
{
lean_object* v___x_1861_; 
v___x_1861_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1601_ = v___x_1861_;
goto v___jp_1600_;
}
else
{
lean_object* v___x_1862_; 
v___x_1862_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1601_ = v___x_1862_;
goto v___jp_1600_;
}
}
case 57:
{
lean_object* v___x_1863_; uint8_t v___x_1864_; 
v___x_1863_ = lean_unsigned_to_nat(1024u);
v___x_1864_ = lean_nat_dec_le(v___x_1863_, v_prec_1207_);
if (v___x_1864_ == 0)
{
lean_object* v___x_1865_; 
v___x_1865_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1608_ = v___x_1865_;
goto v___jp_1607_;
}
else
{
lean_object* v___x_1866_; 
v___x_1866_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1608_ = v___x_1866_;
goto v___jp_1607_;
}
}
case 58:
{
lean_object* v___x_1867_; uint8_t v___x_1868_; 
v___x_1867_ = lean_unsigned_to_nat(1024u);
v___x_1868_ = lean_nat_dec_le(v___x_1867_, v_prec_1207_);
if (v___x_1868_ == 0)
{
lean_object* v___x_1869_; 
v___x_1869_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1615_ = v___x_1869_;
goto v___jp_1614_;
}
else
{
lean_object* v___x_1870_; 
v___x_1870_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1615_ = v___x_1870_;
goto v___jp_1614_;
}
}
case 59:
{
lean_object* v___x_1871_; uint8_t v___x_1872_; 
v___x_1871_ = lean_unsigned_to_nat(1024u);
v___x_1872_ = lean_nat_dec_le(v___x_1871_, v_prec_1207_);
if (v___x_1872_ == 0)
{
lean_object* v___x_1873_; 
v___x_1873_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1622_ = v___x_1873_;
goto v___jp_1621_;
}
else
{
lean_object* v___x_1874_; 
v___x_1874_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1622_ = v___x_1874_;
goto v___jp_1621_;
}
}
default: 
{
lean_object* v___x_1875_; uint8_t v___x_1876_; 
v___x_1875_ = lean_unsigned_to_nat(1024u);
v___x_1876_ = lean_nat_dec_le(v___x_1875_, v_prec_1207_);
if (v___x_1876_ == 0)
{
lean_object* v___x_1877_; 
v___x_1877_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__122);
v___y_1629_ = v___x_1877_;
goto v___jp_1628_;
}
else
{
lean_object* v___x_1878_; 
v___x_1878_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123, &lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123_once, _init_lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__123);
v___y_1629_ = v___x_1878_;
goto v___jp_1628_;
}
}
}
v___jp_1208_:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; uint8_t v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1210_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__1));
lean_inc(v___y_1209_);
v___x_1211_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1211_, 0, v___y_1209_);
lean_ctor_set(v___x_1211_, 1, v___x_1210_);
v___x_1212_ = 0;
v___x_1213_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1213_, 0, v___x_1211_);
lean_ctor_set_uint8(v___x_1213_, sizeof(void*)*1, v___x_1212_);
v___x_1214_ = l_Repr_addAppParen(v___x_1213_, v_prec_1207_);
return v___x_1214_;
}
v___jp_1215_:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; uint8_t v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1217_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__3));
lean_inc(v___y_1216_);
v___x_1218_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___y_1216_);
lean_ctor_set(v___x_1218_, 1, v___x_1217_);
v___x_1219_ = 0;
v___x_1220_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1220_, 0, v___x_1218_);
lean_ctor_set_uint8(v___x_1220_, sizeof(void*)*1, v___x_1219_);
v___x_1221_ = l_Repr_addAppParen(v___x_1220_, v_prec_1207_);
return v___x_1221_;
}
v___jp_1222_:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; uint8_t v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1224_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__5));
lean_inc(v___y_1223_);
v___x_1225_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1225_, 0, v___y_1223_);
lean_ctor_set(v___x_1225_, 1, v___x_1224_);
v___x_1226_ = 0;
v___x_1227_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1227_, 0, v___x_1225_);
lean_ctor_set_uint8(v___x_1227_, sizeof(void*)*1, v___x_1226_);
v___x_1228_ = l_Repr_addAppParen(v___x_1227_, v_prec_1207_);
return v___x_1228_;
}
v___jp_1229_:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; uint8_t v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1231_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__7));
lean_inc(v___y_1230_);
v___x_1232_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1232_, 0, v___y_1230_);
lean_ctor_set(v___x_1232_, 1, v___x_1231_);
v___x_1233_ = 0;
v___x_1234_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1234_, 0, v___x_1232_);
lean_ctor_set_uint8(v___x_1234_, sizeof(void*)*1, v___x_1233_);
v___x_1235_ = l_Repr_addAppParen(v___x_1234_, v_prec_1207_);
return v___x_1235_;
}
v___jp_1236_:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; uint8_t v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1238_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__9));
lean_inc(v___y_1237_);
v___x_1239_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1239_, 0, v___y_1237_);
lean_ctor_set(v___x_1239_, 1, v___x_1238_);
v___x_1240_ = 0;
v___x_1241_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1241_, 0, v___x_1239_);
lean_ctor_set_uint8(v___x_1241_, sizeof(void*)*1, v___x_1240_);
v___x_1242_ = l_Repr_addAppParen(v___x_1241_, v_prec_1207_);
return v___x_1242_;
}
v___jp_1243_:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; uint8_t v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1245_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__11));
lean_inc(v___y_1244_);
v___x_1246_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___y_1244_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = 0;
v___x_1248_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1248_, 0, v___x_1246_);
lean_ctor_set_uint8(v___x_1248_, sizeof(void*)*1, v___x_1247_);
v___x_1249_ = l_Repr_addAppParen(v___x_1248_, v_prec_1207_);
return v___x_1249_;
}
v___jp_1250_:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; uint8_t v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1252_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__13));
lean_inc(v___y_1251_);
v___x_1253_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___y_1251_);
lean_ctor_set(v___x_1253_, 1, v___x_1252_);
v___x_1254_ = 0;
v___x_1255_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1255_, 0, v___x_1253_);
lean_ctor_set_uint8(v___x_1255_, sizeof(void*)*1, v___x_1254_);
v___x_1256_ = l_Repr_addAppParen(v___x_1255_, v_prec_1207_);
return v___x_1256_;
}
v___jp_1257_:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; uint8_t v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1259_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__15));
lean_inc(v___y_1258_);
v___x_1260_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___y_1258_);
lean_ctor_set(v___x_1260_, 1, v___x_1259_);
v___x_1261_ = 0;
v___x_1262_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1262_, 0, v___x_1260_);
lean_ctor_set_uint8(v___x_1262_, sizeof(void*)*1, v___x_1261_);
v___x_1263_ = l_Repr_addAppParen(v___x_1262_, v_prec_1207_);
return v___x_1263_;
}
v___jp_1264_:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; uint8_t v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1266_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__17));
lean_inc(v___y_1265_);
v___x_1267_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1267_, 0, v___y_1265_);
lean_ctor_set(v___x_1267_, 1, v___x_1266_);
v___x_1268_ = 0;
v___x_1269_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1269_, 0, v___x_1267_);
lean_ctor_set_uint8(v___x_1269_, sizeof(void*)*1, v___x_1268_);
v___x_1270_ = l_Repr_addAppParen(v___x_1269_, v_prec_1207_);
return v___x_1270_;
}
v___jp_1271_:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; uint8_t v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1273_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__19));
lean_inc(v___y_1272_);
v___x_1274_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___y_1272_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
v___x_1275_ = 0;
v___x_1276_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1276_, 0, v___x_1274_);
lean_ctor_set_uint8(v___x_1276_, sizeof(void*)*1, v___x_1275_);
v___x_1277_ = l_Repr_addAppParen(v___x_1276_, v_prec_1207_);
return v___x_1277_;
}
v___jp_1278_:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; uint8_t v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1280_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__21));
lean_inc(v___y_1279_);
v___x_1281_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___y_1279_);
lean_ctor_set(v___x_1281_, 1, v___x_1280_);
v___x_1282_ = 0;
v___x_1283_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1283_, 0, v___x_1281_);
lean_ctor_set_uint8(v___x_1283_, sizeof(void*)*1, v___x_1282_);
v___x_1284_ = l_Repr_addAppParen(v___x_1283_, v_prec_1207_);
return v___x_1284_;
}
v___jp_1285_:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; uint8_t v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1287_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__23));
lean_inc(v___y_1286_);
v___x_1288_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___y_1286_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
v___x_1289_ = 0;
v___x_1290_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1290_, 0, v___x_1288_);
lean_ctor_set_uint8(v___x_1290_, sizeof(void*)*1, v___x_1289_);
v___x_1291_ = l_Repr_addAppParen(v___x_1290_, v_prec_1207_);
return v___x_1291_;
}
v___jp_1292_:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; uint8_t v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1294_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__25));
lean_inc(v___y_1293_);
v___x_1295_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___y_1293_);
lean_ctor_set(v___x_1295_, 1, v___x_1294_);
v___x_1296_ = 0;
v___x_1297_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1297_, 0, v___x_1295_);
lean_ctor_set_uint8(v___x_1297_, sizeof(void*)*1, v___x_1296_);
v___x_1298_ = l_Repr_addAppParen(v___x_1297_, v_prec_1207_);
return v___x_1298_;
}
v___jp_1299_:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; uint8_t v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1301_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__27));
lean_inc(v___y_1300_);
v___x_1302_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___y_1300_);
lean_ctor_set(v___x_1302_, 1, v___x_1301_);
v___x_1303_ = 0;
v___x_1304_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1304_, 0, v___x_1302_);
lean_ctor_set_uint8(v___x_1304_, sizeof(void*)*1, v___x_1303_);
v___x_1305_ = l_Repr_addAppParen(v___x_1304_, v_prec_1207_);
return v___x_1305_;
}
v___jp_1306_:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; uint8_t v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1308_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__29));
lean_inc(v___y_1307_);
v___x_1309_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1309_, 0, v___y_1307_);
lean_ctor_set(v___x_1309_, 1, v___x_1308_);
v___x_1310_ = 0;
v___x_1311_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1311_, 0, v___x_1309_);
lean_ctor_set_uint8(v___x_1311_, sizeof(void*)*1, v___x_1310_);
v___x_1312_ = l_Repr_addAppParen(v___x_1311_, v_prec_1207_);
return v___x_1312_;
}
v___jp_1313_:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; uint8_t v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1315_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__31));
lean_inc(v___y_1314_);
v___x_1316_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___y_1314_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
v___x_1317_ = 0;
v___x_1318_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1318_, 0, v___x_1316_);
lean_ctor_set_uint8(v___x_1318_, sizeof(void*)*1, v___x_1317_);
v___x_1319_ = l_Repr_addAppParen(v___x_1318_, v_prec_1207_);
return v___x_1319_;
}
v___jp_1320_:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; uint8_t v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1322_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__33));
lean_inc(v___y_1321_);
v___x_1323_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___y_1321_);
lean_ctor_set(v___x_1323_, 1, v___x_1322_);
v___x_1324_ = 0;
v___x_1325_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1325_, 0, v___x_1323_);
lean_ctor_set_uint8(v___x_1325_, sizeof(void*)*1, v___x_1324_);
v___x_1326_ = l_Repr_addAppParen(v___x_1325_, v_prec_1207_);
return v___x_1326_;
}
v___jp_1327_:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; uint8_t v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1329_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__35));
lean_inc(v___y_1328_);
v___x_1330_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___y_1328_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
v___x_1331_ = 0;
v___x_1332_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1332_, 0, v___x_1330_);
lean_ctor_set_uint8(v___x_1332_, sizeof(void*)*1, v___x_1331_);
v___x_1333_ = l_Repr_addAppParen(v___x_1332_, v_prec_1207_);
return v___x_1333_;
}
v___jp_1334_:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; uint8_t v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1336_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__37));
lean_inc(v___y_1335_);
v___x_1337_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1337_, 0, v___y_1335_);
lean_ctor_set(v___x_1337_, 1, v___x_1336_);
v___x_1338_ = 0;
v___x_1339_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1339_, 0, v___x_1337_);
lean_ctor_set_uint8(v___x_1339_, sizeof(void*)*1, v___x_1338_);
v___x_1340_ = l_Repr_addAppParen(v___x_1339_, v_prec_1207_);
return v___x_1340_;
}
v___jp_1341_:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; uint8_t v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1343_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__39));
lean_inc(v___y_1342_);
v___x_1344_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1344_, 0, v___y_1342_);
lean_ctor_set(v___x_1344_, 1, v___x_1343_);
v___x_1345_ = 0;
v___x_1346_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1346_, 0, v___x_1344_);
lean_ctor_set_uint8(v___x_1346_, sizeof(void*)*1, v___x_1345_);
v___x_1347_ = l_Repr_addAppParen(v___x_1346_, v_prec_1207_);
return v___x_1347_;
}
v___jp_1348_:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; uint8_t v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1350_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__41));
lean_inc(v___y_1349_);
v___x_1351_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1351_, 0, v___y_1349_);
lean_ctor_set(v___x_1351_, 1, v___x_1350_);
v___x_1352_ = 0;
v___x_1353_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1353_, 0, v___x_1351_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*1, v___x_1352_);
v___x_1354_ = l_Repr_addAppParen(v___x_1353_, v_prec_1207_);
return v___x_1354_;
}
v___jp_1355_:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; uint8_t v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1357_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__43));
lean_inc(v___y_1356_);
v___x_1358_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___y_1356_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
v___x_1359_ = 0;
v___x_1360_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1360_, 0, v___x_1358_);
lean_ctor_set_uint8(v___x_1360_, sizeof(void*)*1, v___x_1359_);
v___x_1361_ = l_Repr_addAppParen(v___x_1360_, v_prec_1207_);
return v___x_1361_;
}
v___jp_1362_:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; uint8_t v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1364_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__45));
lean_inc(v___y_1363_);
v___x_1365_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1365_, 0, v___y_1363_);
lean_ctor_set(v___x_1365_, 1, v___x_1364_);
v___x_1366_ = 0;
v___x_1367_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1367_, 0, v___x_1365_);
lean_ctor_set_uint8(v___x_1367_, sizeof(void*)*1, v___x_1366_);
v___x_1368_ = l_Repr_addAppParen(v___x_1367_, v_prec_1207_);
return v___x_1368_;
}
v___jp_1369_:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; uint8_t v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1371_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__47));
lean_inc(v___y_1370_);
v___x_1372_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1372_, 0, v___y_1370_);
lean_ctor_set(v___x_1372_, 1, v___x_1371_);
v___x_1373_ = 0;
v___x_1374_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1374_, 0, v___x_1372_);
lean_ctor_set_uint8(v___x_1374_, sizeof(void*)*1, v___x_1373_);
v___x_1375_ = l_Repr_addAppParen(v___x_1374_, v_prec_1207_);
return v___x_1375_;
}
v___jp_1376_:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; uint8_t v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; 
v___x_1378_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__49));
lean_inc(v___y_1377_);
v___x_1379_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1379_, 0, v___y_1377_);
lean_ctor_set(v___x_1379_, 1, v___x_1378_);
v___x_1380_ = 0;
v___x_1381_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1381_, 0, v___x_1379_);
lean_ctor_set_uint8(v___x_1381_, sizeof(void*)*1, v___x_1380_);
v___x_1382_ = l_Repr_addAppParen(v___x_1381_, v_prec_1207_);
return v___x_1382_;
}
v___jp_1383_:
{
lean_object* v___x_1385_; lean_object* v___x_1386_; uint8_t v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1385_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__51));
lean_inc(v___y_1384_);
v___x_1386_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1386_, 0, v___y_1384_);
lean_ctor_set(v___x_1386_, 1, v___x_1385_);
v___x_1387_ = 0;
v___x_1388_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1388_, 0, v___x_1386_);
lean_ctor_set_uint8(v___x_1388_, sizeof(void*)*1, v___x_1387_);
v___x_1389_ = l_Repr_addAppParen(v___x_1388_, v_prec_1207_);
return v___x_1389_;
}
v___jp_1390_:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; uint8_t v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
v___x_1392_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__53));
lean_inc(v___y_1391_);
v___x_1393_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1393_, 0, v___y_1391_);
lean_ctor_set(v___x_1393_, 1, v___x_1392_);
v___x_1394_ = 0;
v___x_1395_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1395_, 0, v___x_1393_);
lean_ctor_set_uint8(v___x_1395_, sizeof(void*)*1, v___x_1394_);
v___x_1396_ = l_Repr_addAppParen(v___x_1395_, v_prec_1207_);
return v___x_1396_;
}
v___jp_1397_:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; uint8_t v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1399_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__55));
lean_inc(v___y_1398_);
v___x_1400_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___y_1398_);
lean_ctor_set(v___x_1400_, 1, v___x_1399_);
v___x_1401_ = 0;
v___x_1402_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1402_, 0, v___x_1400_);
lean_ctor_set_uint8(v___x_1402_, sizeof(void*)*1, v___x_1401_);
v___x_1403_ = l_Repr_addAppParen(v___x_1402_, v_prec_1207_);
return v___x_1403_;
}
v___jp_1404_:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; uint8_t v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1406_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__57));
lean_inc(v___y_1405_);
v___x_1407_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1407_, 0, v___y_1405_);
lean_ctor_set(v___x_1407_, 1, v___x_1406_);
v___x_1408_ = 0;
v___x_1409_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1409_, 0, v___x_1407_);
lean_ctor_set_uint8(v___x_1409_, sizeof(void*)*1, v___x_1408_);
v___x_1410_ = l_Repr_addAppParen(v___x_1409_, v_prec_1207_);
return v___x_1410_;
}
v___jp_1411_:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; uint8_t v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1413_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__59));
lean_inc(v___y_1412_);
v___x_1414_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1414_, 0, v___y_1412_);
lean_ctor_set(v___x_1414_, 1, v___x_1413_);
v___x_1415_ = 0;
v___x_1416_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1416_, 0, v___x_1414_);
lean_ctor_set_uint8(v___x_1416_, sizeof(void*)*1, v___x_1415_);
v___x_1417_ = l_Repr_addAppParen(v___x_1416_, v_prec_1207_);
return v___x_1417_;
}
v___jp_1418_:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; uint8_t v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1420_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__61));
lean_inc(v___y_1419_);
v___x_1421_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1421_, 0, v___y_1419_);
lean_ctor_set(v___x_1421_, 1, v___x_1420_);
v___x_1422_ = 0;
v___x_1423_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1423_, 0, v___x_1421_);
lean_ctor_set_uint8(v___x_1423_, sizeof(void*)*1, v___x_1422_);
v___x_1424_ = l_Repr_addAppParen(v___x_1423_, v_prec_1207_);
return v___x_1424_;
}
v___jp_1425_:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; uint8_t v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
v___x_1427_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__63));
lean_inc(v___y_1426_);
v___x_1428_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___y_1426_);
lean_ctor_set(v___x_1428_, 1, v___x_1427_);
v___x_1429_ = 0;
v___x_1430_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1430_, 0, v___x_1428_);
lean_ctor_set_uint8(v___x_1430_, sizeof(void*)*1, v___x_1429_);
v___x_1431_ = l_Repr_addAppParen(v___x_1430_, v_prec_1207_);
return v___x_1431_;
}
v___jp_1432_:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; uint8_t v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___x_1434_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__65));
lean_inc(v___y_1433_);
v___x_1435_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1435_, 0, v___y_1433_);
lean_ctor_set(v___x_1435_, 1, v___x_1434_);
v___x_1436_ = 0;
v___x_1437_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1437_, 0, v___x_1435_);
lean_ctor_set_uint8(v___x_1437_, sizeof(void*)*1, v___x_1436_);
v___x_1438_ = l_Repr_addAppParen(v___x_1437_, v_prec_1207_);
return v___x_1438_;
}
v___jp_1439_:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; uint8_t v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1441_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__67));
lean_inc(v___y_1440_);
v___x_1442_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1442_, 0, v___y_1440_);
lean_ctor_set(v___x_1442_, 1, v___x_1441_);
v___x_1443_ = 0;
v___x_1444_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1444_, 0, v___x_1442_);
lean_ctor_set_uint8(v___x_1444_, sizeof(void*)*1, v___x_1443_);
v___x_1445_ = l_Repr_addAppParen(v___x_1444_, v_prec_1207_);
return v___x_1445_;
}
v___jp_1446_:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; uint8_t v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1448_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__69));
lean_inc(v___y_1447_);
v___x_1449_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___y_1447_);
lean_ctor_set(v___x_1449_, 1, v___x_1448_);
v___x_1450_ = 0;
v___x_1451_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1451_, 0, v___x_1449_);
lean_ctor_set_uint8(v___x_1451_, sizeof(void*)*1, v___x_1450_);
v___x_1452_ = l_Repr_addAppParen(v___x_1451_, v_prec_1207_);
return v___x_1452_;
}
v___jp_1453_:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; uint8_t v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; 
v___x_1455_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__71));
lean_inc(v___y_1454_);
v___x_1456_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1456_, 0, v___y_1454_);
lean_ctor_set(v___x_1456_, 1, v___x_1455_);
v___x_1457_ = 0;
v___x_1458_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1458_, 0, v___x_1456_);
lean_ctor_set_uint8(v___x_1458_, sizeof(void*)*1, v___x_1457_);
v___x_1459_ = l_Repr_addAppParen(v___x_1458_, v_prec_1207_);
return v___x_1459_;
}
v___jp_1460_:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; uint8_t v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1462_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__73));
lean_inc(v___y_1461_);
v___x_1463_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1463_, 0, v___y_1461_);
lean_ctor_set(v___x_1463_, 1, v___x_1462_);
v___x_1464_ = 0;
v___x_1465_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1465_, 0, v___x_1463_);
lean_ctor_set_uint8(v___x_1465_, sizeof(void*)*1, v___x_1464_);
v___x_1466_ = l_Repr_addAppParen(v___x_1465_, v_prec_1207_);
return v___x_1466_;
}
v___jp_1467_:
{
lean_object* v___x_1469_; lean_object* v___x_1470_; uint8_t v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1469_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__75));
lean_inc(v___y_1468_);
v___x_1470_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1470_, 0, v___y_1468_);
lean_ctor_set(v___x_1470_, 1, v___x_1469_);
v___x_1471_ = 0;
v___x_1472_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1472_, 0, v___x_1470_);
lean_ctor_set_uint8(v___x_1472_, sizeof(void*)*1, v___x_1471_);
v___x_1473_ = l_Repr_addAppParen(v___x_1472_, v_prec_1207_);
return v___x_1473_;
}
v___jp_1474_:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; uint8_t v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1476_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__77));
lean_inc(v___y_1475_);
v___x_1477_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1477_, 0, v___y_1475_);
lean_ctor_set(v___x_1477_, 1, v___x_1476_);
v___x_1478_ = 0;
v___x_1479_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1479_, 0, v___x_1477_);
lean_ctor_set_uint8(v___x_1479_, sizeof(void*)*1, v___x_1478_);
v___x_1480_ = l_Repr_addAppParen(v___x_1479_, v_prec_1207_);
return v___x_1480_;
}
v___jp_1481_:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; uint8_t v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1483_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__79));
lean_inc(v___y_1482_);
v___x_1484_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1484_, 0, v___y_1482_);
lean_ctor_set(v___x_1484_, 1, v___x_1483_);
v___x_1485_ = 0;
v___x_1486_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1486_, 0, v___x_1484_);
lean_ctor_set_uint8(v___x_1486_, sizeof(void*)*1, v___x_1485_);
v___x_1487_ = l_Repr_addAppParen(v___x_1486_, v_prec_1207_);
return v___x_1487_;
}
v___jp_1488_:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; uint8_t v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1490_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__81));
lean_inc(v___y_1489_);
v___x_1491_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1491_, 0, v___y_1489_);
lean_ctor_set(v___x_1491_, 1, v___x_1490_);
v___x_1492_ = 0;
v___x_1493_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1493_, 0, v___x_1491_);
lean_ctor_set_uint8(v___x_1493_, sizeof(void*)*1, v___x_1492_);
v___x_1494_ = l_Repr_addAppParen(v___x_1493_, v_prec_1207_);
return v___x_1494_;
}
v___jp_1495_:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; uint8_t v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1497_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__83));
lean_inc(v___y_1496_);
v___x_1498_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1498_, 0, v___y_1496_);
lean_ctor_set(v___x_1498_, 1, v___x_1497_);
v___x_1499_ = 0;
v___x_1500_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1500_, 0, v___x_1498_);
lean_ctor_set_uint8(v___x_1500_, sizeof(void*)*1, v___x_1499_);
v___x_1501_ = l_Repr_addAppParen(v___x_1500_, v_prec_1207_);
return v___x_1501_;
}
v___jp_1502_:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; uint8_t v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1504_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__85));
lean_inc(v___y_1503_);
v___x_1505_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1505_, 0, v___y_1503_);
lean_ctor_set(v___x_1505_, 1, v___x_1504_);
v___x_1506_ = 0;
v___x_1507_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1507_, 0, v___x_1505_);
lean_ctor_set_uint8(v___x_1507_, sizeof(void*)*1, v___x_1506_);
v___x_1508_ = l_Repr_addAppParen(v___x_1507_, v_prec_1207_);
return v___x_1508_;
}
v___jp_1509_:
{
lean_object* v___x_1511_; lean_object* v___x_1512_; uint8_t v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1511_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__87));
lean_inc(v___y_1510_);
v___x_1512_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___y_1510_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = 0;
v___x_1514_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1514_, 0, v___x_1512_);
lean_ctor_set_uint8(v___x_1514_, sizeof(void*)*1, v___x_1513_);
v___x_1515_ = l_Repr_addAppParen(v___x_1514_, v_prec_1207_);
return v___x_1515_;
}
v___jp_1516_:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; uint8_t v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1518_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__89));
lean_inc(v___y_1517_);
v___x_1519_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___y_1517_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
v___x_1520_ = 0;
v___x_1521_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1521_, 0, v___x_1519_);
lean_ctor_set_uint8(v___x_1521_, sizeof(void*)*1, v___x_1520_);
v___x_1522_ = l_Repr_addAppParen(v___x_1521_, v_prec_1207_);
return v___x_1522_;
}
v___jp_1523_:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; uint8_t v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
v___x_1525_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__91));
lean_inc(v___y_1524_);
v___x_1526_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1526_, 0, v___y_1524_);
lean_ctor_set(v___x_1526_, 1, v___x_1525_);
v___x_1527_ = 0;
v___x_1528_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1528_, 0, v___x_1526_);
lean_ctor_set_uint8(v___x_1528_, sizeof(void*)*1, v___x_1527_);
v___x_1529_ = l_Repr_addAppParen(v___x_1528_, v_prec_1207_);
return v___x_1529_;
}
v___jp_1530_:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; uint8_t v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1532_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__93));
lean_inc(v___y_1531_);
v___x_1533_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1533_, 0, v___y_1531_);
lean_ctor_set(v___x_1533_, 1, v___x_1532_);
v___x_1534_ = 0;
v___x_1535_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1535_, 0, v___x_1533_);
lean_ctor_set_uint8(v___x_1535_, sizeof(void*)*1, v___x_1534_);
v___x_1536_ = l_Repr_addAppParen(v___x_1535_, v_prec_1207_);
return v___x_1536_;
}
v___jp_1537_:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; uint8_t v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; 
v___x_1539_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__95));
lean_inc(v___y_1538_);
v___x_1540_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1540_, 0, v___y_1538_);
lean_ctor_set(v___x_1540_, 1, v___x_1539_);
v___x_1541_ = 0;
v___x_1542_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1542_, 0, v___x_1540_);
lean_ctor_set_uint8(v___x_1542_, sizeof(void*)*1, v___x_1541_);
v___x_1543_ = l_Repr_addAppParen(v___x_1542_, v_prec_1207_);
return v___x_1543_;
}
v___jp_1544_:
{
lean_object* v___x_1546_; lean_object* v___x_1547_; uint8_t v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1546_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__97));
lean_inc(v___y_1545_);
v___x_1547_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___y_1545_);
lean_ctor_set(v___x_1547_, 1, v___x_1546_);
v___x_1548_ = 0;
v___x_1549_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1549_, 0, v___x_1547_);
lean_ctor_set_uint8(v___x_1549_, sizeof(void*)*1, v___x_1548_);
v___x_1550_ = l_Repr_addAppParen(v___x_1549_, v_prec_1207_);
return v___x_1550_;
}
v___jp_1551_:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; uint8_t v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1553_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__99));
lean_inc(v___y_1552_);
v___x_1554_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1554_, 0, v___y_1552_);
lean_ctor_set(v___x_1554_, 1, v___x_1553_);
v___x_1555_ = 0;
v___x_1556_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1556_, 0, v___x_1554_);
lean_ctor_set_uint8(v___x_1556_, sizeof(void*)*1, v___x_1555_);
v___x_1557_ = l_Repr_addAppParen(v___x_1556_, v_prec_1207_);
return v___x_1557_;
}
v___jp_1558_:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; uint8_t v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1560_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__101));
lean_inc(v___y_1559_);
v___x_1561_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1561_, 0, v___y_1559_);
lean_ctor_set(v___x_1561_, 1, v___x_1560_);
v___x_1562_ = 0;
v___x_1563_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1563_, 0, v___x_1561_);
lean_ctor_set_uint8(v___x_1563_, sizeof(void*)*1, v___x_1562_);
v___x_1564_ = l_Repr_addAppParen(v___x_1563_, v_prec_1207_);
return v___x_1564_;
}
v___jp_1565_:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; uint8_t v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; 
v___x_1567_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__103));
lean_inc(v___y_1566_);
v___x_1568_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___y_1566_);
lean_ctor_set(v___x_1568_, 1, v___x_1567_);
v___x_1569_ = 0;
v___x_1570_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1570_, 0, v___x_1568_);
lean_ctor_set_uint8(v___x_1570_, sizeof(void*)*1, v___x_1569_);
v___x_1571_ = l_Repr_addAppParen(v___x_1570_, v_prec_1207_);
return v___x_1571_;
}
v___jp_1572_:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; uint8_t v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1574_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__105));
lean_inc(v___y_1573_);
v___x_1575_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1575_, 0, v___y_1573_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
v___x_1576_ = 0;
v___x_1577_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1577_, 0, v___x_1575_);
lean_ctor_set_uint8(v___x_1577_, sizeof(void*)*1, v___x_1576_);
v___x_1578_ = l_Repr_addAppParen(v___x_1577_, v_prec_1207_);
return v___x_1578_;
}
v___jp_1579_:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; uint8_t v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1581_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__107));
lean_inc(v___y_1580_);
v___x_1582_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1582_, 0, v___y_1580_);
lean_ctor_set(v___x_1582_, 1, v___x_1581_);
v___x_1583_ = 0;
v___x_1584_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1584_, 0, v___x_1582_);
lean_ctor_set_uint8(v___x_1584_, sizeof(void*)*1, v___x_1583_);
v___x_1585_ = l_Repr_addAppParen(v___x_1584_, v_prec_1207_);
return v___x_1585_;
}
v___jp_1586_:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; uint8_t v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1588_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__109));
lean_inc(v___y_1587_);
v___x_1589_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___y_1587_);
lean_ctor_set(v___x_1589_, 1, v___x_1588_);
v___x_1590_ = 0;
v___x_1591_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1591_, 0, v___x_1589_);
lean_ctor_set_uint8(v___x_1591_, sizeof(void*)*1, v___x_1590_);
v___x_1592_ = l_Repr_addAppParen(v___x_1591_, v_prec_1207_);
return v___x_1592_;
}
v___jp_1593_:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; uint8_t v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1595_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__111));
lean_inc(v___y_1594_);
v___x_1596_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1596_, 0, v___y_1594_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
v___x_1597_ = 0;
v___x_1598_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1598_, 0, v___x_1596_);
lean_ctor_set_uint8(v___x_1598_, sizeof(void*)*1, v___x_1597_);
v___x_1599_ = l_Repr_addAppParen(v___x_1598_, v_prec_1207_);
return v___x_1599_;
}
v___jp_1600_:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; uint8_t v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1602_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__113));
lean_inc(v___y_1601_);
v___x_1603_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1603_, 0, v___y_1601_);
lean_ctor_set(v___x_1603_, 1, v___x_1602_);
v___x_1604_ = 0;
v___x_1605_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1605_, 0, v___x_1603_);
lean_ctor_set_uint8(v___x_1605_, sizeof(void*)*1, v___x_1604_);
v___x_1606_ = l_Repr_addAppParen(v___x_1605_, v_prec_1207_);
return v___x_1606_;
}
v___jp_1607_:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; uint8_t v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1609_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__115));
lean_inc(v___y_1608_);
v___x_1610_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1610_, 0, v___y_1608_);
lean_ctor_set(v___x_1610_, 1, v___x_1609_);
v___x_1611_ = 0;
v___x_1612_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1612_, 0, v___x_1610_);
lean_ctor_set_uint8(v___x_1612_, sizeof(void*)*1, v___x_1611_);
v___x_1613_ = l_Repr_addAppParen(v___x_1612_, v_prec_1207_);
return v___x_1613_;
}
v___jp_1614_:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; uint8_t v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1616_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__117));
lean_inc(v___y_1615_);
v___x_1617_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___y_1615_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
v___x_1618_ = 0;
v___x_1619_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1619_, 0, v___x_1617_);
lean_ctor_set_uint8(v___x_1619_, sizeof(void*)*1, v___x_1618_);
v___x_1620_ = l_Repr_addAppParen(v___x_1619_, v_prec_1207_);
return v___x_1620_;
}
v___jp_1621_:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; uint8_t v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1623_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__119));
lean_inc(v___y_1622_);
v___x_1624_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1624_, 0, v___y_1622_);
lean_ctor_set(v___x_1624_, 1, v___x_1623_);
v___x_1625_ = 0;
v___x_1626_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1626_, 0, v___x_1624_);
lean_ctor_set_uint8(v___x_1626_, sizeof(void*)*1, v___x_1625_);
v___x_1627_ = l_Repr_addAppParen(v___x_1626_, v_prec_1207_);
return v___x_1627_;
}
v___jp_1628_:
{
lean_object* v___x_1630_; lean_object* v___x_1631_; uint8_t v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
v___x_1630_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___closed__121));
lean_inc(v___y_1629_);
v___x_1631_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1631_, 0, v___y_1629_);
lean_ctor_set(v___x_1631_, 1, v___x_1630_);
v___x_1632_ = 0;
v___x_1633_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1633_, 0, v___x_1631_);
lean_ctor_set_uint8(v___x_1633_, sizeof(void*)*1, v___x_1632_);
v___x_1634_ = l_Repr_addAppParen(v___x_1633_, v_prec_1207_);
return v___x_1634_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr___boxed(lean_object* v_x_1879_, lean_object* v_prec_1880_){
_start:
{
uint8_t v_x_3303__boxed_1881_; lean_object* v_res_1882_; 
v_x_3303__boxed_1881_ = lean_unbox(v_x_1879_);
v_res_1882_ = lp_lean_x2dftml_LeanFtml_instReprRenderRuleId_repr(v_x_3303__boxed_1881_, v_prec_1880_);
lean_dec(v_prec_1880_);
return v_res_1882_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName(uint8_t v_x_1946_){
_start:
{
switch(v_x_1946_)
{
case 0:
{
lean_object* v___x_1947_; 
v___x_1947_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__0));
return v___x_1947_;
}
case 1:
{
lean_object* v___x_1948_; 
v___x_1948_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__1));
return v___x_1948_;
}
case 2:
{
lean_object* v___x_1949_; 
v___x_1949_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__2));
return v___x_1949_;
}
case 3:
{
lean_object* v___x_1950_; 
v___x_1950_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__3));
return v___x_1950_;
}
case 4:
{
lean_object* v___x_1951_; 
v___x_1951_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__4));
return v___x_1951_;
}
case 5:
{
lean_object* v___x_1952_; 
v___x_1952_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__5));
return v___x_1952_;
}
case 6:
{
lean_object* v___x_1953_; 
v___x_1953_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__6));
return v___x_1953_;
}
case 7:
{
lean_object* v___x_1954_; 
v___x_1954_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__7));
return v___x_1954_;
}
case 8:
{
lean_object* v___x_1955_; 
v___x_1955_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__8));
return v___x_1955_;
}
case 9:
{
lean_object* v___x_1956_; 
v___x_1956_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__9));
return v___x_1956_;
}
case 10:
{
lean_object* v___x_1957_; 
v___x_1957_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__10));
return v___x_1957_;
}
case 11:
{
lean_object* v___x_1958_; 
v___x_1958_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__11));
return v___x_1958_;
}
case 12:
{
lean_object* v___x_1959_; 
v___x_1959_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__12));
return v___x_1959_;
}
case 13:
{
lean_object* v___x_1960_; 
v___x_1960_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__13));
return v___x_1960_;
}
case 14:
{
lean_object* v___x_1961_; 
v___x_1961_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__14));
return v___x_1961_;
}
case 15:
{
lean_object* v___x_1962_; 
v___x_1962_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__15));
return v___x_1962_;
}
case 16:
{
lean_object* v___x_1963_; 
v___x_1963_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__16));
return v___x_1963_;
}
case 17:
{
lean_object* v___x_1964_; 
v___x_1964_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__17));
return v___x_1964_;
}
case 18:
{
lean_object* v___x_1965_; 
v___x_1965_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__18));
return v___x_1965_;
}
case 19:
{
lean_object* v___x_1966_; 
v___x_1966_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__19));
return v___x_1966_;
}
case 20:
{
lean_object* v___x_1967_; 
v___x_1967_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__20));
return v___x_1967_;
}
case 21:
{
lean_object* v___x_1968_; 
v___x_1968_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__21));
return v___x_1968_;
}
case 22:
{
lean_object* v___x_1969_; 
v___x_1969_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__22));
return v___x_1969_;
}
case 23:
{
lean_object* v___x_1970_; 
v___x_1970_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__23));
return v___x_1970_;
}
case 24:
{
lean_object* v___x_1971_; 
v___x_1971_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__24));
return v___x_1971_;
}
case 25:
{
lean_object* v___x_1972_; 
v___x_1972_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__25));
return v___x_1972_;
}
case 26:
{
lean_object* v___x_1973_; 
v___x_1973_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__26));
return v___x_1973_;
}
case 27:
{
lean_object* v___x_1974_; 
v___x_1974_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__27));
return v___x_1974_;
}
case 28:
{
lean_object* v___x_1975_; 
v___x_1975_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__28));
return v___x_1975_;
}
case 29:
{
lean_object* v___x_1976_; 
v___x_1976_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__29));
return v___x_1976_;
}
case 30:
{
lean_object* v___x_1977_; 
v___x_1977_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__30));
return v___x_1977_;
}
case 31:
{
lean_object* v___x_1978_; 
v___x_1978_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__31));
return v___x_1978_;
}
case 32:
{
lean_object* v___x_1979_; 
v___x_1979_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__32));
return v___x_1979_;
}
case 33:
{
lean_object* v___x_1980_; 
v___x_1980_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__33));
return v___x_1980_;
}
case 34:
{
lean_object* v___x_1981_; 
v___x_1981_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__34));
return v___x_1981_;
}
case 35:
{
lean_object* v___x_1982_; 
v___x_1982_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__35));
return v___x_1982_;
}
case 36:
{
lean_object* v___x_1983_; 
v___x_1983_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__36));
return v___x_1983_;
}
case 37:
{
lean_object* v___x_1984_; 
v___x_1984_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__37));
return v___x_1984_;
}
case 38:
{
lean_object* v___x_1985_; 
v___x_1985_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__38));
return v___x_1985_;
}
case 39:
{
lean_object* v___x_1986_; 
v___x_1986_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__39));
return v___x_1986_;
}
case 40:
{
lean_object* v___x_1987_; 
v___x_1987_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__40));
return v___x_1987_;
}
case 41:
{
lean_object* v___x_1988_; 
v___x_1988_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__41));
return v___x_1988_;
}
case 42:
{
lean_object* v___x_1989_; 
v___x_1989_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__42));
return v___x_1989_;
}
case 43:
{
lean_object* v___x_1990_; 
v___x_1990_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__43));
return v___x_1990_;
}
case 44:
{
lean_object* v___x_1991_; 
v___x_1991_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__44));
return v___x_1991_;
}
case 45:
{
lean_object* v___x_1992_; 
v___x_1992_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__45));
return v___x_1992_;
}
case 46:
{
lean_object* v___x_1993_; 
v___x_1993_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__46));
return v___x_1993_;
}
case 47:
{
lean_object* v___x_1994_; 
v___x_1994_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__47));
return v___x_1994_;
}
case 48:
{
lean_object* v___x_1995_; 
v___x_1995_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__48));
return v___x_1995_;
}
case 49:
{
lean_object* v___x_1996_; 
v___x_1996_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__49));
return v___x_1996_;
}
case 50:
{
lean_object* v___x_1997_; 
v___x_1997_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__50));
return v___x_1997_;
}
case 51:
{
lean_object* v___x_1998_; 
v___x_1998_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__51));
return v___x_1998_;
}
case 52:
{
lean_object* v___x_1999_; 
v___x_1999_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__52));
return v___x_1999_;
}
case 53:
{
lean_object* v___x_2000_; 
v___x_2000_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__53));
return v___x_2000_;
}
case 54:
{
lean_object* v___x_2001_; 
v___x_2001_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__54));
return v___x_2001_;
}
case 55:
{
lean_object* v___x_2002_; 
v___x_2002_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__55));
return v___x_2002_;
}
case 56:
{
lean_object* v___x_2003_; 
v___x_2003_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__56));
return v___x_2003_;
}
case 57:
{
lean_object* v___x_2004_; 
v___x_2004_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__57));
return v___x_2004_;
}
case 58:
{
lean_object* v___x_2005_; 
v___x_2005_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__58));
return v___x_2005_;
}
case 59:
{
lean_object* v___x_2006_; 
v___x_2006_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__59));
return v___x_2006_;
}
default: 
{
lean_object* v___x_2007_; 
v___x_2007_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__60));
return v___x_2007_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRuleName___boxed(lean_object* v_x_2008_){
_start:
{
uint8_t v_x_553__boxed_2009_; lean_object* v_res_2010_; 
v_x_553__boxed_2009_ = lean_unbox(v_x_2008_);
v_res_2010_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v_x_553__boxed_2009_);
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName(lean_object* v_x_2194_){
_start:
{
lean_object* v___x_2195_; uint8_t v___x_2196_; 
v___x_2195_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__0));
v___x_2196_ = lean_string_dec_eq(v_x_2194_, v___x_2195_);
if (v___x_2196_ == 0)
{
lean_object* v___x_2197_; uint8_t v___x_2198_; 
v___x_2197_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__1));
v___x_2198_ = lean_string_dec_eq(v_x_2194_, v___x_2197_);
if (v___x_2198_ == 0)
{
lean_object* v___x_2199_; uint8_t v___x_2200_; 
v___x_2199_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__2));
v___x_2200_ = lean_string_dec_eq(v_x_2194_, v___x_2199_);
if (v___x_2200_ == 0)
{
lean_object* v___x_2201_; uint8_t v___x_2202_; 
v___x_2201_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__3));
v___x_2202_ = lean_string_dec_eq(v_x_2194_, v___x_2201_);
if (v___x_2202_ == 0)
{
lean_object* v___x_2203_; uint8_t v___x_2204_; 
v___x_2203_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__4));
v___x_2204_ = lean_string_dec_eq(v_x_2194_, v___x_2203_);
if (v___x_2204_ == 0)
{
lean_object* v___x_2205_; uint8_t v___x_2206_; 
v___x_2205_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__5));
v___x_2206_ = lean_string_dec_eq(v_x_2194_, v___x_2205_);
if (v___x_2206_ == 0)
{
lean_object* v___x_2207_; uint8_t v___x_2208_; 
v___x_2207_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__6));
v___x_2208_ = lean_string_dec_eq(v_x_2194_, v___x_2207_);
if (v___x_2208_ == 0)
{
lean_object* v___x_2209_; uint8_t v___x_2210_; 
v___x_2209_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__7));
v___x_2210_ = lean_string_dec_eq(v_x_2194_, v___x_2209_);
if (v___x_2210_ == 0)
{
lean_object* v___x_2211_; uint8_t v___x_2212_; 
v___x_2211_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__8));
v___x_2212_ = lean_string_dec_eq(v_x_2194_, v___x_2211_);
if (v___x_2212_ == 0)
{
lean_object* v___x_2213_; uint8_t v___x_2214_; 
v___x_2213_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__9));
v___x_2214_ = lean_string_dec_eq(v_x_2194_, v___x_2213_);
if (v___x_2214_ == 0)
{
lean_object* v___x_2215_; uint8_t v___x_2216_; 
v___x_2215_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__10));
v___x_2216_ = lean_string_dec_eq(v_x_2194_, v___x_2215_);
if (v___x_2216_ == 0)
{
lean_object* v___x_2217_; uint8_t v___x_2218_; 
v___x_2217_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__11));
v___x_2218_ = lean_string_dec_eq(v_x_2194_, v___x_2217_);
if (v___x_2218_ == 0)
{
lean_object* v___x_2219_; uint8_t v___x_2220_; 
v___x_2219_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__12));
v___x_2220_ = lean_string_dec_eq(v_x_2194_, v___x_2219_);
if (v___x_2220_ == 0)
{
lean_object* v___x_2221_; uint8_t v___x_2222_; 
v___x_2221_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__13));
v___x_2222_ = lean_string_dec_eq(v_x_2194_, v___x_2221_);
if (v___x_2222_ == 0)
{
lean_object* v___x_2223_; uint8_t v___x_2224_; 
v___x_2223_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__14));
v___x_2224_ = lean_string_dec_eq(v_x_2194_, v___x_2223_);
if (v___x_2224_ == 0)
{
lean_object* v___x_2225_; uint8_t v___x_2226_; 
v___x_2225_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__15));
v___x_2226_ = lean_string_dec_eq(v_x_2194_, v___x_2225_);
if (v___x_2226_ == 0)
{
lean_object* v___x_2227_; uint8_t v___x_2228_; 
v___x_2227_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__16));
v___x_2228_ = lean_string_dec_eq(v_x_2194_, v___x_2227_);
if (v___x_2228_ == 0)
{
lean_object* v___x_2229_; uint8_t v___x_2230_; 
v___x_2229_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__17));
v___x_2230_ = lean_string_dec_eq(v_x_2194_, v___x_2229_);
if (v___x_2230_ == 0)
{
lean_object* v___x_2231_; uint8_t v___x_2232_; 
v___x_2231_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__18));
v___x_2232_ = lean_string_dec_eq(v_x_2194_, v___x_2231_);
if (v___x_2232_ == 0)
{
lean_object* v___x_2233_; uint8_t v___x_2234_; 
v___x_2233_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__19));
v___x_2234_ = lean_string_dec_eq(v_x_2194_, v___x_2233_);
if (v___x_2234_ == 0)
{
lean_object* v___x_2235_; uint8_t v___x_2236_; 
v___x_2235_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__20));
v___x_2236_ = lean_string_dec_eq(v_x_2194_, v___x_2235_);
if (v___x_2236_ == 0)
{
lean_object* v___x_2237_; uint8_t v___x_2238_; 
v___x_2237_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__21));
v___x_2238_ = lean_string_dec_eq(v_x_2194_, v___x_2237_);
if (v___x_2238_ == 0)
{
lean_object* v___x_2239_; uint8_t v___x_2240_; 
v___x_2239_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__22));
v___x_2240_ = lean_string_dec_eq(v_x_2194_, v___x_2239_);
if (v___x_2240_ == 0)
{
lean_object* v___x_2241_; uint8_t v___x_2242_; 
v___x_2241_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__23));
v___x_2242_ = lean_string_dec_eq(v_x_2194_, v___x_2241_);
if (v___x_2242_ == 0)
{
lean_object* v___x_2243_; uint8_t v___x_2244_; 
v___x_2243_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__24));
v___x_2244_ = lean_string_dec_eq(v_x_2194_, v___x_2243_);
if (v___x_2244_ == 0)
{
lean_object* v___x_2245_; uint8_t v___x_2246_; 
v___x_2245_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__25));
v___x_2246_ = lean_string_dec_eq(v_x_2194_, v___x_2245_);
if (v___x_2246_ == 0)
{
lean_object* v___x_2247_; uint8_t v___x_2248_; 
v___x_2247_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__26));
v___x_2248_ = lean_string_dec_eq(v_x_2194_, v___x_2247_);
if (v___x_2248_ == 0)
{
lean_object* v___x_2249_; uint8_t v___x_2250_; 
v___x_2249_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__27));
v___x_2250_ = lean_string_dec_eq(v_x_2194_, v___x_2249_);
if (v___x_2250_ == 0)
{
lean_object* v___x_2251_; uint8_t v___x_2252_; 
v___x_2251_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__28));
v___x_2252_ = lean_string_dec_eq(v_x_2194_, v___x_2251_);
if (v___x_2252_ == 0)
{
lean_object* v___x_2253_; uint8_t v___x_2254_; 
v___x_2253_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__29));
v___x_2254_ = lean_string_dec_eq(v_x_2194_, v___x_2253_);
if (v___x_2254_ == 0)
{
lean_object* v___x_2255_; uint8_t v___x_2256_; 
v___x_2255_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__30));
v___x_2256_ = lean_string_dec_eq(v_x_2194_, v___x_2255_);
if (v___x_2256_ == 0)
{
lean_object* v___x_2257_; uint8_t v___x_2258_; 
v___x_2257_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__31));
v___x_2258_ = lean_string_dec_eq(v_x_2194_, v___x_2257_);
if (v___x_2258_ == 0)
{
lean_object* v___x_2259_; uint8_t v___x_2260_; 
v___x_2259_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__32));
v___x_2260_ = lean_string_dec_eq(v_x_2194_, v___x_2259_);
if (v___x_2260_ == 0)
{
lean_object* v___x_2261_; uint8_t v___x_2262_; 
v___x_2261_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__33));
v___x_2262_ = lean_string_dec_eq(v_x_2194_, v___x_2261_);
if (v___x_2262_ == 0)
{
lean_object* v___x_2263_; uint8_t v___x_2264_; 
v___x_2263_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__34));
v___x_2264_ = lean_string_dec_eq(v_x_2194_, v___x_2263_);
if (v___x_2264_ == 0)
{
lean_object* v___x_2265_; uint8_t v___x_2266_; 
v___x_2265_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__35));
v___x_2266_ = lean_string_dec_eq(v_x_2194_, v___x_2265_);
if (v___x_2266_ == 0)
{
lean_object* v___x_2267_; uint8_t v___x_2268_; 
v___x_2267_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__36));
v___x_2268_ = lean_string_dec_eq(v_x_2194_, v___x_2267_);
if (v___x_2268_ == 0)
{
lean_object* v___x_2269_; uint8_t v___x_2270_; 
v___x_2269_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__37));
v___x_2270_ = lean_string_dec_eq(v_x_2194_, v___x_2269_);
if (v___x_2270_ == 0)
{
lean_object* v___x_2271_; uint8_t v___x_2272_; 
v___x_2271_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__38));
v___x_2272_ = lean_string_dec_eq(v_x_2194_, v___x_2271_);
if (v___x_2272_ == 0)
{
lean_object* v___x_2273_; uint8_t v___x_2274_; 
v___x_2273_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__39));
v___x_2274_ = lean_string_dec_eq(v_x_2194_, v___x_2273_);
if (v___x_2274_ == 0)
{
lean_object* v___x_2275_; uint8_t v___x_2276_; 
v___x_2275_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__40));
v___x_2276_ = lean_string_dec_eq(v_x_2194_, v___x_2275_);
if (v___x_2276_ == 0)
{
lean_object* v___x_2277_; uint8_t v___x_2278_; 
v___x_2277_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__41));
v___x_2278_ = lean_string_dec_eq(v_x_2194_, v___x_2277_);
if (v___x_2278_ == 0)
{
lean_object* v___x_2279_; uint8_t v___x_2280_; 
v___x_2279_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__42));
v___x_2280_ = lean_string_dec_eq(v_x_2194_, v___x_2279_);
if (v___x_2280_ == 0)
{
lean_object* v___x_2281_; uint8_t v___x_2282_; 
v___x_2281_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__43));
v___x_2282_ = lean_string_dec_eq(v_x_2194_, v___x_2281_);
if (v___x_2282_ == 0)
{
lean_object* v___x_2283_; uint8_t v___x_2284_; 
v___x_2283_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__44));
v___x_2284_ = lean_string_dec_eq(v_x_2194_, v___x_2283_);
if (v___x_2284_ == 0)
{
lean_object* v___x_2285_; uint8_t v___x_2286_; 
v___x_2285_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__45));
v___x_2286_ = lean_string_dec_eq(v_x_2194_, v___x_2285_);
if (v___x_2286_ == 0)
{
lean_object* v___x_2287_; uint8_t v___x_2288_; 
v___x_2287_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__46));
v___x_2288_ = lean_string_dec_eq(v_x_2194_, v___x_2287_);
if (v___x_2288_ == 0)
{
lean_object* v___x_2289_; uint8_t v___x_2290_; 
v___x_2289_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__47));
v___x_2290_ = lean_string_dec_eq(v_x_2194_, v___x_2289_);
if (v___x_2290_ == 0)
{
lean_object* v___x_2291_; uint8_t v___x_2292_; 
v___x_2291_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__48));
v___x_2292_ = lean_string_dec_eq(v_x_2194_, v___x_2291_);
if (v___x_2292_ == 0)
{
lean_object* v___x_2293_; uint8_t v___x_2294_; 
v___x_2293_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__49));
v___x_2294_ = lean_string_dec_eq(v_x_2194_, v___x_2293_);
if (v___x_2294_ == 0)
{
lean_object* v___x_2295_; uint8_t v___x_2296_; 
v___x_2295_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__50));
v___x_2296_ = lean_string_dec_eq(v_x_2194_, v___x_2295_);
if (v___x_2296_ == 0)
{
lean_object* v___x_2297_; uint8_t v___x_2298_; 
v___x_2297_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__51));
v___x_2298_ = lean_string_dec_eq(v_x_2194_, v___x_2297_);
if (v___x_2298_ == 0)
{
lean_object* v___x_2299_; uint8_t v___x_2300_; 
v___x_2299_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__52));
v___x_2300_ = lean_string_dec_eq(v_x_2194_, v___x_2299_);
if (v___x_2300_ == 0)
{
lean_object* v___x_2301_; uint8_t v___x_2302_; 
v___x_2301_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__53));
v___x_2302_ = lean_string_dec_eq(v_x_2194_, v___x_2301_);
if (v___x_2302_ == 0)
{
lean_object* v___x_2303_; uint8_t v___x_2304_; 
v___x_2303_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__54));
v___x_2304_ = lean_string_dec_eq(v_x_2194_, v___x_2303_);
if (v___x_2304_ == 0)
{
lean_object* v___x_2305_; uint8_t v___x_2306_; 
v___x_2305_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__55));
v___x_2306_ = lean_string_dec_eq(v_x_2194_, v___x_2305_);
if (v___x_2306_ == 0)
{
lean_object* v___x_2307_; uint8_t v___x_2308_; 
v___x_2307_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__56));
v___x_2308_ = lean_string_dec_eq(v_x_2194_, v___x_2307_);
if (v___x_2308_ == 0)
{
lean_object* v___x_2309_; uint8_t v___x_2310_; 
v___x_2309_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__57));
v___x_2310_ = lean_string_dec_eq(v_x_2194_, v___x_2309_);
if (v___x_2310_ == 0)
{
lean_object* v___x_2311_; uint8_t v___x_2312_; 
v___x_2311_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__58));
v___x_2312_ = lean_string_dec_eq(v_x_2194_, v___x_2311_);
if (v___x_2312_ == 0)
{
lean_object* v___x_2313_; uint8_t v___x_2314_; 
v___x_2313_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__59));
v___x_2314_ = lean_string_dec_eq(v_x_2194_, v___x_2313_);
if (v___x_2314_ == 0)
{
lean_object* v___x_2315_; uint8_t v___x_2316_; 
v___x_2315_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__60));
v___x_2316_ = lean_string_dec_eq(v_x_2194_, v___x_2315_);
if (v___x_2316_ == 0)
{
lean_object* v___x_2317_; 
v___x_2317_ = lean_box(0);
return v___x_2317_;
}
else
{
lean_object* v___x_2318_; 
v___x_2318_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__0));
return v___x_2318_;
}
}
else
{
lean_object* v___x_2319_; 
v___x_2319_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__1));
return v___x_2319_;
}
}
else
{
lean_object* v___x_2320_; 
v___x_2320_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__2));
return v___x_2320_;
}
}
else
{
lean_object* v___x_2321_; 
v___x_2321_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__3));
return v___x_2321_;
}
}
else
{
lean_object* v___x_2322_; 
v___x_2322_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__4));
return v___x_2322_;
}
}
else
{
lean_object* v___x_2323_; 
v___x_2323_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__5));
return v___x_2323_;
}
}
else
{
lean_object* v___x_2324_; 
v___x_2324_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__6));
return v___x_2324_;
}
}
else
{
lean_object* v___x_2325_; 
v___x_2325_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__7));
return v___x_2325_;
}
}
else
{
lean_object* v___x_2326_; 
v___x_2326_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__8));
return v___x_2326_;
}
}
else
{
lean_object* v___x_2327_; 
v___x_2327_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__9));
return v___x_2327_;
}
}
else
{
lean_object* v___x_2328_; 
v___x_2328_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__10));
return v___x_2328_;
}
}
else
{
lean_object* v___x_2329_; 
v___x_2329_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__11));
return v___x_2329_;
}
}
else
{
lean_object* v___x_2330_; 
v___x_2330_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__12));
return v___x_2330_;
}
}
else
{
lean_object* v___x_2331_; 
v___x_2331_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__13));
return v___x_2331_;
}
}
else
{
lean_object* v___x_2332_; 
v___x_2332_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__14));
return v___x_2332_;
}
}
else
{
lean_object* v___x_2333_; 
v___x_2333_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__15));
return v___x_2333_;
}
}
else
{
lean_object* v___x_2334_; 
v___x_2334_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__16));
return v___x_2334_;
}
}
else
{
lean_object* v___x_2335_; 
v___x_2335_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__17));
return v___x_2335_;
}
}
else
{
lean_object* v___x_2336_; 
v___x_2336_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__18));
return v___x_2336_;
}
}
else
{
lean_object* v___x_2337_; 
v___x_2337_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__19));
return v___x_2337_;
}
}
else
{
lean_object* v___x_2338_; 
v___x_2338_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__20));
return v___x_2338_;
}
}
else
{
lean_object* v___x_2339_; 
v___x_2339_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__21));
return v___x_2339_;
}
}
else
{
lean_object* v___x_2340_; 
v___x_2340_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__22));
return v___x_2340_;
}
}
else
{
lean_object* v___x_2341_; 
v___x_2341_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__23));
return v___x_2341_;
}
}
else
{
lean_object* v___x_2342_; 
v___x_2342_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__24));
return v___x_2342_;
}
}
else
{
lean_object* v___x_2343_; 
v___x_2343_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__25));
return v___x_2343_;
}
}
else
{
lean_object* v___x_2344_; 
v___x_2344_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__26));
return v___x_2344_;
}
}
else
{
lean_object* v___x_2345_; 
v___x_2345_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__27));
return v___x_2345_;
}
}
else
{
lean_object* v___x_2346_; 
v___x_2346_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__28));
return v___x_2346_;
}
}
else
{
lean_object* v___x_2347_; 
v___x_2347_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__29));
return v___x_2347_;
}
}
else
{
lean_object* v___x_2348_; 
v___x_2348_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__30));
return v___x_2348_;
}
}
else
{
lean_object* v___x_2349_; 
v___x_2349_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__31));
return v___x_2349_;
}
}
else
{
lean_object* v___x_2350_; 
v___x_2350_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__32));
return v___x_2350_;
}
}
else
{
lean_object* v___x_2351_; 
v___x_2351_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__33));
return v___x_2351_;
}
}
else
{
lean_object* v___x_2352_; 
v___x_2352_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__34));
return v___x_2352_;
}
}
else
{
lean_object* v___x_2353_; 
v___x_2353_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__35));
return v___x_2353_;
}
}
else
{
lean_object* v___x_2354_; 
v___x_2354_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__36));
return v___x_2354_;
}
}
else
{
lean_object* v___x_2355_; 
v___x_2355_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__37));
return v___x_2355_;
}
}
else
{
lean_object* v___x_2356_; 
v___x_2356_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__38));
return v___x_2356_;
}
}
else
{
lean_object* v___x_2357_; 
v___x_2357_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__39));
return v___x_2357_;
}
}
else
{
lean_object* v___x_2358_; 
v___x_2358_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__40));
return v___x_2358_;
}
}
else
{
lean_object* v___x_2359_; 
v___x_2359_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__41));
return v___x_2359_;
}
}
else
{
lean_object* v___x_2360_; 
v___x_2360_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__42));
return v___x_2360_;
}
}
else
{
lean_object* v___x_2361_; 
v___x_2361_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__43));
return v___x_2361_;
}
}
else
{
lean_object* v___x_2362_; 
v___x_2362_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__44));
return v___x_2362_;
}
}
else
{
lean_object* v___x_2363_; 
v___x_2363_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__45));
return v___x_2363_;
}
}
else
{
lean_object* v___x_2364_; 
v___x_2364_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__46));
return v___x_2364_;
}
}
else
{
lean_object* v___x_2365_; 
v___x_2365_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__47));
return v___x_2365_;
}
}
else
{
lean_object* v___x_2366_; 
v___x_2366_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__48));
return v___x_2366_;
}
}
else
{
lean_object* v___x_2367_; 
v___x_2367_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__49));
return v___x_2367_;
}
}
else
{
lean_object* v___x_2368_; 
v___x_2368_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__50));
return v___x_2368_;
}
}
else
{
lean_object* v___x_2369_; 
v___x_2369_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__51));
return v___x_2369_;
}
}
else
{
lean_object* v___x_2370_; 
v___x_2370_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__52));
return v___x_2370_;
}
}
else
{
lean_object* v___x_2371_; 
v___x_2371_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__53));
return v___x_2371_;
}
}
else
{
lean_object* v___x_2372_; 
v___x_2372_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__54));
return v___x_2372_;
}
}
else
{
lean_object* v___x_2373_; 
v___x_2373_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__55));
return v___x_2373_;
}
}
else
{
lean_object* v___x_2374_; 
v___x_2374_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__56));
return v___x_2374_;
}
}
else
{
lean_object* v___x_2375_; 
v___x_2375_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__57));
return v___x_2375_;
}
}
else
{
lean_object* v___x_2376_; 
v___x_2376_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__58));
return v___x_2376_;
}
}
else
{
lean_object* v___x_2377_; 
v___x_2377_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__59));
return v___x_2377_;
}
}
else
{
lean_object* v___x_2378_; 
v___x_2378_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleOfName___closed__60));
return v___x_2378_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRuleOfName___boxed(lean_object* v_x_2379_){
_start:
{
lean_object* v_res_2380_; 
v_res_2380_ = lp_lean_x2dftml_LeanFtml_renderRuleOfName(v_x_2379_);
lean_dec_ref(v_x_2379_);
return v_res_2380_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__0(void){
_start:
{
uint8_t v___x_2381_; lean_object* v___x_2382_; 
v___x_2381_ = 57;
v___x_2382_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2381_);
return v___x_2382_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__1(void){
_start:
{
uint8_t v___x_2383_; lean_object* v___x_2384_; 
v___x_2383_ = 58;
v___x_2384_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2383_);
return v___x_2384_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__2(void){
_start:
{
uint8_t v___x_2385_; lean_object* v___x_2386_; 
v___x_2385_ = 59;
v___x_2386_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2385_);
return v___x_2386_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__3(void){
_start:
{
uint8_t v___x_2387_; lean_object* v___x_2388_; 
v___x_2387_ = 60;
v___x_2388_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2387_);
return v___x_2388_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__4(void){
_start:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; 
v___x_2389_ = lean_box(0);
v___x_2390_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__3, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__3);
v___x_2391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2391_, 0, v___x_2390_);
lean_ctor_set(v___x_2391_, 1, v___x_2389_);
return v___x_2391_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__5(void){
_start:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2392_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__4, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__4);
v___x_2393_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__2, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__2);
v___x_2394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2393_);
lean_ctor_set(v___x_2394_, 1, v___x_2392_);
return v___x_2394_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__6(void){
_start:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v___x_2395_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__5, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__5);
v___x_2396_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__1, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__1);
v___x_2397_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2397_, 0, v___x_2396_);
lean_ctor_set(v___x_2397_, 1, v___x_2395_);
return v___x_2397_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__7(void){
_start:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v_y_2400_; 
v___x_2398_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__6, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__6);
v___x_2399_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__0, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__0);
v_y_2400_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_2400_, 0, v___x_2399_);
lean_ctor_set(v_y_2400_, 1, v___x_2398_);
return v_y_2400_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__8(void){
_start:
{
uint8_t v___x_2401_; lean_object* v___x_2402_; 
v___x_2401_ = 53;
v___x_2402_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2401_);
return v___x_2402_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__9(void){
_start:
{
uint8_t v___x_2403_; lean_object* v___x_2404_; 
v___x_2403_ = 54;
v___x_2404_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2403_);
return v___x_2404_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__10(void){
_start:
{
uint8_t v___x_2405_; lean_object* v___x_2406_; 
v___x_2405_ = 55;
v___x_2406_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2405_);
return v___x_2406_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__11(void){
_start:
{
uint8_t v___x_2407_; lean_object* v___x_2408_; 
v___x_2407_ = 56;
v___x_2408_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2407_);
return v___x_2408_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__12(void){
_start:
{
lean_object* v_y_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; 
v_y_2409_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__7, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__7);
v___x_2410_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__11, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__11);
v___x_2411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2411_, 0, v___x_2410_);
lean_ctor_set(v___x_2411_, 1, v_y_2409_);
return v___x_2411_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__13(void){
_start:
{
lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; 
v___x_2412_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__12, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__12);
v___x_2413_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__10, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__10);
v___x_2414_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2413_);
lean_ctor_set(v___x_2414_, 1, v___x_2412_);
return v___x_2414_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__14(void){
_start:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; 
v___x_2415_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__13, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__13);
v___x_2416_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__9, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__9);
v___x_2417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2417_, 0, v___x_2416_);
lean_ctor_set(v___x_2417_, 1, v___x_2415_);
return v___x_2417_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__15(void){
_start:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v_y_2420_; 
v___x_2418_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__14, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__14);
v___x_2419_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__8, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__8);
v_y_2420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_2420_, 0, v___x_2419_);
lean_ctor_set(v_y_2420_, 1, v___x_2418_);
return v_y_2420_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__16(void){
_start:
{
uint8_t v___x_2421_; lean_object* v___x_2422_; 
v___x_2421_ = 49;
v___x_2422_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2421_);
return v___x_2422_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__17(void){
_start:
{
uint8_t v___x_2423_; lean_object* v___x_2424_; 
v___x_2423_ = 50;
v___x_2424_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2423_);
return v___x_2424_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__18(void){
_start:
{
uint8_t v___x_2425_; lean_object* v___x_2426_; 
v___x_2425_ = 51;
v___x_2426_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2425_);
return v___x_2426_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__19(void){
_start:
{
uint8_t v___x_2427_; lean_object* v___x_2428_; 
v___x_2427_ = 52;
v___x_2428_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2427_);
return v___x_2428_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__20(void){
_start:
{
lean_object* v_y_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; 
v_y_2429_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__15, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__15);
v___x_2430_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__19, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__19);
v___x_2431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2430_);
lean_ctor_set(v___x_2431_, 1, v_y_2429_);
return v___x_2431_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__21(void){
_start:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2432_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__20, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__20_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__20);
v___x_2433_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__18, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__18);
v___x_2434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2434_, 0, v___x_2433_);
lean_ctor_set(v___x_2434_, 1, v___x_2432_);
return v___x_2434_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__22(void){
_start:
{
lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; 
v___x_2435_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__21, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__21);
v___x_2436_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__17, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__17);
v___x_2437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2437_, 0, v___x_2436_);
lean_ctor_set(v___x_2437_, 1, v___x_2435_);
return v___x_2437_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__23(void){
_start:
{
lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v_y_2440_; 
v___x_2438_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__22, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__22_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__22);
v___x_2439_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__16, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__16);
v_y_2440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_2440_, 0, v___x_2439_);
lean_ctor_set(v_y_2440_, 1, v___x_2438_);
return v_y_2440_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__24(void){
_start:
{
uint8_t v___x_2441_; lean_object* v___x_2442_; 
v___x_2441_ = 45;
v___x_2442_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2441_);
return v___x_2442_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__25(void){
_start:
{
uint8_t v___x_2443_; lean_object* v___x_2444_; 
v___x_2443_ = 46;
v___x_2444_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2443_);
return v___x_2444_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__26(void){
_start:
{
uint8_t v___x_2445_; lean_object* v___x_2446_; 
v___x_2445_ = 47;
v___x_2446_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2445_);
return v___x_2446_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__27(void){
_start:
{
uint8_t v___x_2447_; lean_object* v___x_2448_; 
v___x_2447_ = 48;
v___x_2448_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2447_);
return v___x_2448_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__28(void){
_start:
{
lean_object* v_y_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
v_y_2449_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__23, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__23);
v___x_2450_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__27, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__27_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__27);
v___x_2451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2451_, 0, v___x_2450_);
lean_ctor_set(v___x_2451_, 1, v_y_2449_);
return v___x_2451_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__29(void){
_start:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; 
v___x_2452_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__28, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__28_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__28);
v___x_2453_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__26, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__26_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__26);
v___x_2454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2454_, 0, v___x_2453_);
lean_ctor_set(v___x_2454_, 1, v___x_2452_);
return v___x_2454_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__30(void){
_start:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; 
v___x_2455_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__29, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__29_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__29);
v___x_2456_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__25, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__25);
v___x_2457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2456_);
lean_ctor_set(v___x_2457_, 1, v___x_2455_);
return v___x_2457_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__31(void){
_start:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v_y_2460_; 
v___x_2458_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__30, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__30_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__30);
v___x_2459_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__24, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__24_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__24);
v_y_2460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_2460_, 0, v___x_2459_);
lean_ctor_set(v_y_2460_, 1, v___x_2458_);
return v_y_2460_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__32(void){
_start:
{
uint8_t v___x_2461_; lean_object* v___x_2462_; 
v___x_2461_ = 41;
v___x_2462_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2461_);
return v___x_2462_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__33(void){
_start:
{
uint8_t v___x_2463_; lean_object* v___x_2464_; 
v___x_2463_ = 42;
v___x_2464_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2463_);
return v___x_2464_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__34(void){
_start:
{
uint8_t v___x_2465_; lean_object* v___x_2466_; 
v___x_2465_ = 43;
v___x_2466_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2465_);
return v___x_2466_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__35(void){
_start:
{
uint8_t v___x_2467_; lean_object* v___x_2468_; 
v___x_2467_ = 44;
v___x_2468_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2467_);
return v___x_2468_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__36(void){
_start:
{
lean_object* v_y_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
v_y_2469_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__31, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__31_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__31);
v___x_2470_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__35, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__35_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__35);
v___x_2471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2471_, 0, v___x_2470_);
lean_ctor_set(v___x_2471_, 1, v_y_2469_);
return v___x_2471_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__37(void){
_start:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; 
v___x_2472_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__36, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__36_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__36);
v___x_2473_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__34, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__34_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__34);
v___x_2474_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2474_, 0, v___x_2473_);
lean_ctor_set(v___x_2474_, 1, v___x_2472_);
return v___x_2474_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__38(void){
_start:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; 
v___x_2475_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__37, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__37_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__37);
v___x_2476_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__33, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__33);
v___x_2477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2476_);
lean_ctor_set(v___x_2477_, 1, v___x_2475_);
return v___x_2477_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__39(void){
_start:
{
lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v_y_2480_; 
v___x_2478_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__38, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__38);
v___x_2479_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__32, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__32_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__32);
v_y_2480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_2480_, 0, v___x_2479_);
lean_ctor_set(v_y_2480_, 1, v___x_2478_);
return v_y_2480_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__40(void){
_start:
{
uint8_t v___x_2481_; lean_object* v___x_2482_; 
v___x_2481_ = 37;
v___x_2482_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2481_);
return v___x_2482_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__41(void){
_start:
{
uint8_t v___x_2483_; lean_object* v___x_2484_; 
v___x_2483_ = 38;
v___x_2484_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2483_);
return v___x_2484_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__42(void){
_start:
{
uint8_t v___x_2485_; lean_object* v___x_2486_; 
v___x_2485_ = 39;
v___x_2486_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2485_);
return v___x_2486_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__43(void){
_start:
{
uint8_t v___x_2487_; lean_object* v___x_2488_; 
v___x_2487_ = 40;
v___x_2488_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2487_);
return v___x_2488_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__44(void){
_start:
{
lean_object* v_y_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
v_y_2489_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__39, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__39);
v___x_2490_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__43, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__43_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__43);
v___x_2491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2491_, 0, v___x_2490_);
lean_ctor_set(v___x_2491_, 1, v_y_2489_);
return v___x_2491_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__45(void){
_start:
{
lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; 
v___x_2492_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__44, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__44_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__44);
v___x_2493_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__42, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__42_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__42);
v___x_2494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2494_, 0, v___x_2493_);
lean_ctor_set(v___x_2494_, 1, v___x_2492_);
return v___x_2494_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__46(void){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2495_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__45, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__45_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__45);
v___x_2496_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__41, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__41_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__41);
v___x_2497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2496_);
lean_ctor_set(v___x_2497_, 1, v___x_2495_);
return v___x_2497_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__47(void){
_start:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v_y_2500_; 
v___x_2498_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__46, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__46_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__46);
v___x_2499_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__40, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__40_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__40);
v_y_2500_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_2500_, 0, v___x_2499_);
lean_ctor_set(v_y_2500_, 1, v___x_2498_);
return v_y_2500_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__48(void){
_start:
{
uint8_t v___x_2501_; lean_object* v___x_2502_; 
v___x_2501_ = 30;
v___x_2502_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2501_);
return v___x_2502_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__49(void){
_start:
{
uint8_t v___x_2503_; lean_object* v___x_2504_; 
v___x_2503_ = 31;
v___x_2504_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2503_);
return v___x_2504_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__50(void){
_start:
{
uint8_t v___x_2505_; lean_object* v___x_2506_; 
v___x_2505_ = 32;
v___x_2506_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2505_);
return v___x_2506_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__51(void){
_start:
{
uint8_t v___x_2507_; lean_object* v___x_2508_; 
v___x_2507_ = 33;
v___x_2508_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2507_);
return v___x_2508_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__52(void){
_start:
{
uint8_t v___x_2509_; lean_object* v___x_2510_; 
v___x_2509_ = 34;
v___x_2510_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2509_);
return v___x_2510_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__53(void){
_start:
{
uint8_t v___x_2511_; lean_object* v___x_2512_; 
v___x_2511_ = 35;
v___x_2512_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2511_);
return v___x_2512_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__54(void){
_start:
{
uint8_t v___x_2513_; lean_object* v___x_2514_; 
v___x_2513_ = 36;
v___x_2514_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2513_);
return v___x_2514_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__55(void){
_start:
{
lean_object* v_y_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; 
v_y_2515_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__47, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__47_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__47);
v___x_2516_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__54, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__54_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__54);
v___x_2517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2517_, 0, v___x_2516_);
lean_ctor_set(v___x_2517_, 1, v_y_2515_);
return v___x_2517_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__56(void){
_start:
{
lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; 
v___x_2518_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__55, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__55_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__55);
v___x_2519_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__53, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__53_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__53);
v___x_2520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2520_, 0, v___x_2519_);
lean_ctor_set(v___x_2520_, 1, v___x_2518_);
return v___x_2520_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__57(void){
_start:
{
lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2521_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__56, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__56_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__56);
v___x_2522_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__52, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__52_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__52);
v___x_2523_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2523_, 0, v___x_2522_);
lean_ctor_set(v___x_2523_, 1, v___x_2521_);
return v___x_2523_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__58(void){
_start:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; 
v___x_2524_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__57, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__57_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__57);
v___x_2525_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__51, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__51_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__51);
v___x_2526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2525_);
lean_ctor_set(v___x_2526_, 1, v___x_2524_);
return v___x_2526_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__59(void){
_start:
{
lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; 
v___x_2527_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__58, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__58_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__58);
v___x_2528_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__50, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__50_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__50);
v___x_2529_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2529_, 0, v___x_2528_);
lean_ctor_set(v___x_2529_, 1, v___x_2527_);
return v___x_2529_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__60(void){
_start:
{
lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___x_2530_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__59, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__59_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__59);
v___x_2531_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__49, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__49_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__49);
v___x_2532_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2532_, 0, v___x_2531_);
lean_ctor_set(v___x_2532_, 1, v___x_2530_);
return v___x_2532_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__61(void){
_start:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v_y_2535_; 
v___x_2533_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__60, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__60_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__60);
v___x_2534_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__48, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__48_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__48);
v_y_2535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_2535_, 0, v___x_2534_);
lean_ctor_set(v_y_2535_, 1, v___x_2533_);
return v_y_2535_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__62(void){
_start:
{
uint8_t v___x_2536_; lean_object* v___x_2537_; 
v___x_2536_ = 26;
v___x_2537_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2536_);
return v___x_2537_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__63(void){
_start:
{
uint8_t v___x_2538_; lean_object* v___x_2539_; 
v___x_2538_ = 27;
v___x_2539_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2538_);
return v___x_2539_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__64(void){
_start:
{
uint8_t v___x_2540_; lean_object* v___x_2541_; 
v___x_2540_ = 28;
v___x_2541_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2540_);
return v___x_2541_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__65(void){
_start:
{
uint8_t v___x_2542_; lean_object* v___x_2543_; 
v___x_2542_ = 29;
v___x_2543_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2542_);
return v___x_2543_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__66(void){
_start:
{
lean_object* v_y_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v_y_2544_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__61, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__61_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__61);
v___x_2545_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__65, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__65_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__65);
v___x_2546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2545_);
lean_ctor_set(v___x_2546_, 1, v_y_2544_);
return v___x_2546_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__67(void){
_start:
{
lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2547_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__66, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__66_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__66);
v___x_2548_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__64, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__64_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__64);
v___x_2549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2549_, 0, v___x_2548_);
lean_ctor_set(v___x_2549_, 1, v___x_2547_);
return v___x_2549_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__68(void){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2550_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__67, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__67_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__67);
v___x_2551_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__63, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__63_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__63);
v___x_2552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2552_, 0, v___x_2551_);
lean_ctor_set(v___x_2552_, 1, v___x_2550_);
return v___x_2552_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__69(void){
_start:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v_y_2555_; 
v___x_2553_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__68, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__68_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__68);
v___x_2554_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__62, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__62_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__62);
v_y_2555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_2555_, 0, v___x_2554_);
lean_ctor_set(v_y_2555_, 1, v___x_2553_);
return v_y_2555_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__70(void){
_start:
{
uint8_t v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = 22;
v___x_2557_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2556_);
return v___x_2557_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__71(void){
_start:
{
uint8_t v___x_2558_; lean_object* v___x_2559_; 
v___x_2558_ = 23;
v___x_2559_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2558_);
return v___x_2559_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__72(void){
_start:
{
uint8_t v___x_2560_; lean_object* v___x_2561_; 
v___x_2560_ = 24;
v___x_2561_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2560_);
return v___x_2561_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__73(void){
_start:
{
uint8_t v___x_2562_; lean_object* v___x_2563_; 
v___x_2562_ = 25;
v___x_2563_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2562_);
return v___x_2563_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__74(void){
_start:
{
lean_object* v_y_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; 
v_y_2564_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__69, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__69_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__69);
v___x_2565_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__73, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__73_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__73);
v___x_2566_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2565_);
lean_ctor_set(v___x_2566_, 1, v_y_2564_);
return v___x_2566_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__75(void){
_start:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; 
v___x_2567_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__74, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__74_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__74);
v___x_2568_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__72, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__72_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__72);
v___x_2569_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2568_);
lean_ctor_set(v___x_2569_, 1, v___x_2567_);
return v___x_2569_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__76(void){
_start:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2570_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__75, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__75_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__75);
v___x_2571_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__71, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__71_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__71);
v___x_2572_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2572_, 0, v___x_2571_);
lean_ctor_set(v___x_2572_, 1, v___x_2570_);
return v___x_2572_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__77(void){
_start:
{
lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v_y_2575_; 
v___x_2573_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__76, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__76_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__76);
v___x_2574_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__70, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__70_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__70);
v_y_2575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_2575_, 0, v___x_2574_);
lean_ctor_set(v_y_2575_, 1, v___x_2573_);
return v_y_2575_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__78(void){
_start:
{
uint8_t v___x_2576_; lean_object* v___x_2577_; 
v___x_2576_ = 15;
v___x_2577_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2576_);
return v___x_2577_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__79(void){
_start:
{
uint8_t v___x_2578_; lean_object* v___x_2579_; 
v___x_2578_ = 16;
v___x_2579_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2578_);
return v___x_2579_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__80(void){
_start:
{
uint8_t v___x_2580_; lean_object* v___x_2581_; 
v___x_2580_ = 17;
v___x_2581_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2580_);
return v___x_2581_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__81(void){
_start:
{
uint8_t v___x_2582_; lean_object* v___x_2583_; 
v___x_2582_ = 18;
v___x_2583_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2582_);
return v___x_2583_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__82(void){
_start:
{
uint8_t v___x_2584_; lean_object* v___x_2585_; 
v___x_2584_ = 19;
v___x_2585_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2584_);
return v___x_2585_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__83(void){
_start:
{
uint8_t v___x_2586_; lean_object* v___x_2587_; 
v___x_2586_ = 20;
v___x_2587_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2586_);
return v___x_2587_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__84(void){
_start:
{
uint8_t v___x_2588_; lean_object* v___x_2589_; 
v___x_2588_ = 21;
v___x_2589_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2588_);
return v___x_2589_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__85(void){
_start:
{
lean_object* v_y_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
v_y_2590_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__77, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__77_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__77);
v___x_2591_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__84, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__84_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__84);
v___x_2592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
lean_ctor_set(v___x_2592_, 1, v_y_2590_);
return v___x_2592_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__86(void){
_start:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2593_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__85, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__85_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__85);
v___x_2594_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__83, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__83_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__83);
v___x_2595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2594_);
lean_ctor_set(v___x_2595_, 1, v___x_2593_);
return v___x_2595_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__87(void){
_start:
{
lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; 
v___x_2596_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__86, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__86_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__86);
v___x_2597_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__82, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__82_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__82);
v___x_2598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2597_);
lean_ctor_set(v___x_2598_, 1, v___x_2596_);
return v___x_2598_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__88(void){
_start:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; 
v___x_2599_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__87, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__87_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__87);
v___x_2600_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__81, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__81_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__81);
v___x_2601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2600_);
lean_ctor_set(v___x_2601_, 1, v___x_2599_);
return v___x_2601_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__89(void){
_start:
{
lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
v___x_2602_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__88, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__88_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__88);
v___x_2603_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__80, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__80_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__80);
v___x_2604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2603_);
lean_ctor_set(v___x_2604_, 1, v___x_2602_);
return v___x_2604_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__90(void){
_start:
{
lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2605_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__89, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__89_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__89);
v___x_2606_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__79, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__79_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__79);
v___x_2607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2607_, 0, v___x_2606_);
lean_ctor_set(v___x_2607_, 1, v___x_2605_);
return v___x_2607_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__91(void){
_start:
{
lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v_y_2610_; 
v___x_2608_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__90, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__90_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__90);
v___x_2609_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__78, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__78_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__78);
v_y_2610_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_2610_, 0, v___x_2609_);
lean_ctor_set(v_y_2610_, 1, v___x_2608_);
return v_y_2610_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__92(void){
_start:
{
uint8_t v___x_2611_; lean_object* v___x_2612_; 
v___x_2611_ = 11;
v___x_2612_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2611_);
return v___x_2612_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__93(void){
_start:
{
uint8_t v___x_2613_; lean_object* v___x_2614_; 
v___x_2613_ = 12;
v___x_2614_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2613_);
return v___x_2614_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__94(void){
_start:
{
uint8_t v___x_2615_; lean_object* v___x_2616_; 
v___x_2615_ = 13;
v___x_2616_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2615_);
return v___x_2616_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__95(void){
_start:
{
uint8_t v___x_2617_; lean_object* v___x_2618_; 
v___x_2617_ = 14;
v___x_2618_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2617_);
return v___x_2618_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__96(void){
_start:
{
lean_object* v_y_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; 
v_y_2619_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__91, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__91_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__91);
v___x_2620_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__95, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__95_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__95);
v___x_2621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2621_, 0, v___x_2620_);
lean_ctor_set(v___x_2621_, 1, v_y_2619_);
return v___x_2621_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__97(void){
_start:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; 
v___x_2622_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__96, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__96_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__96);
v___x_2623_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__94, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__94_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__94);
v___x_2624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2624_, 0, v___x_2623_);
lean_ctor_set(v___x_2624_, 1, v___x_2622_);
return v___x_2624_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__98(void){
_start:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v___x_2625_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__97, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__97_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__97);
v___x_2626_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__93, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__93_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__93);
v___x_2627_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2627_, 0, v___x_2626_);
lean_ctor_set(v___x_2627_, 1, v___x_2625_);
return v___x_2627_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__99(void){
_start:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v_y_2630_; 
v___x_2628_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__98, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__98_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__98);
v___x_2629_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__92, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__92_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__92);
v_y_2630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_2630_, 0, v___x_2629_);
lean_ctor_set(v_y_2630_, 1, v___x_2628_);
return v_y_2630_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__100(void){
_start:
{
uint8_t v___x_2631_; lean_object* v___x_2632_; 
v___x_2631_ = 7;
v___x_2632_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2631_);
return v___x_2632_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__101(void){
_start:
{
uint8_t v___x_2633_; lean_object* v___x_2634_; 
v___x_2633_ = 8;
v___x_2634_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2633_);
return v___x_2634_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__102(void){
_start:
{
uint8_t v___x_2635_; lean_object* v___x_2636_; 
v___x_2635_ = 9;
v___x_2636_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2635_);
return v___x_2636_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__103(void){
_start:
{
uint8_t v___x_2637_; lean_object* v___x_2638_; 
v___x_2637_ = 10;
v___x_2638_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2637_);
return v___x_2638_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__104(void){
_start:
{
lean_object* v_y_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; 
v_y_2639_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__99, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__99_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__99);
v___x_2640_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__103, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__103_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__103);
v___x_2641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2640_);
lean_ctor_set(v___x_2641_, 1, v_y_2639_);
return v___x_2641_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__105(void){
_start:
{
lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2642_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__104, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__104_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__104);
v___x_2643_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__102, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__102_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__102);
v___x_2644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2643_);
lean_ctor_set(v___x_2644_, 1, v___x_2642_);
return v___x_2644_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__106(void){
_start:
{
lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2645_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__105, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__105_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__105);
v___x_2646_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__101, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__101_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__101);
v___x_2647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2647_, 0, v___x_2646_);
lean_ctor_set(v___x_2647_, 1, v___x_2645_);
return v___x_2647_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__107(void){
_start:
{
lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v_y_2650_; 
v___x_2648_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__106, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__106_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__106);
v___x_2649_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__100, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__100_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__100);
v_y_2650_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_2650_, 0, v___x_2649_);
lean_ctor_set(v_y_2650_, 1, v___x_2648_);
return v_y_2650_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__108(void){
_start:
{
uint8_t v___x_2651_; lean_object* v___x_2652_; 
v___x_2651_ = 0;
v___x_2652_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2651_);
return v___x_2652_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__109(void){
_start:
{
uint8_t v___x_2653_; lean_object* v___x_2654_; 
v___x_2653_ = 1;
v___x_2654_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2653_);
return v___x_2654_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__110(void){
_start:
{
uint8_t v___x_2655_; lean_object* v___x_2656_; 
v___x_2655_ = 2;
v___x_2656_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2655_);
return v___x_2656_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__111(void){
_start:
{
uint8_t v___x_2657_; lean_object* v___x_2658_; 
v___x_2657_ = 3;
v___x_2658_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2657_);
return v___x_2658_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__112(void){
_start:
{
uint8_t v___x_2659_; lean_object* v___x_2660_; 
v___x_2659_ = 4;
v___x_2660_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2659_);
return v___x_2660_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__113(void){
_start:
{
uint8_t v___x_2661_; lean_object* v___x_2662_; 
v___x_2661_ = 5;
v___x_2662_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2661_);
return v___x_2662_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__114(void){
_start:
{
uint8_t v___x_2663_; lean_object* v___x_2664_; 
v___x_2663_ = 6;
v___x_2664_ = lp_lean_x2dftml_LeanFtml_renderRuleName(v___x_2663_);
return v___x_2664_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__115(void){
_start:
{
lean_object* v_y_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; 
v_y_2665_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__107, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__107_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__107);
v___x_2666_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__114, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__114_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__114);
v___x_2667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2667_, 0, v___x_2666_);
lean_ctor_set(v___x_2667_, 1, v_y_2665_);
return v___x_2667_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__116(void){
_start:
{
lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2668_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__115, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__115_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__115);
v___x_2669_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__113, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__113_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__113);
v___x_2670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2669_);
lean_ctor_set(v___x_2670_, 1, v___x_2668_);
return v___x_2670_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__117(void){
_start:
{
lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; 
v___x_2671_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__116, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__116_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__116);
v___x_2672_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__112, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__112_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__112);
v___x_2673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2672_);
lean_ctor_set(v___x_2673_, 1, v___x_2671_);
return v___x_2673_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__118(void){
_start:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; 
v___x_2674_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__117, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__117_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__117);
v___x_2675_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__111, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__111_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__111);
v___x_2676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2675_);
lean_ctor_set(v___x_2676_, 1, v___x_2674_);
return v___x_2676_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__119(void){
_start:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; 
v___x_2677_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__118, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__118_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__118);
v___x_2678_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__110, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__110_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__110);
v___x_2679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2678_);
lean_ctor_set(v___x_2679_, 1, v___x_2677_);
return v___x_2679_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__120(void){
_start:
{
lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2680_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__119, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__119_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__119);
v___x_2681_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__109, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__109_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__109);
v___x_2682_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2682_, 0, v___x_2681_);
lean_ctor_set(v___x_2682_, 1, v___x_2680_);
return v___x_2682_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__121(void){
_start:
{
lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2683_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__120, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__120_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__120);
v___x_2684_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__108, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__108_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__108);
v___x_2685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2685_, 0, v___x_2684_);
lean_ctor_set(v___x_2685_, 1, v___x_2683_);
return v___x_2685_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules(void){
_start:
{
lean_object* v___x_2686_; 
v___x_2686_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__121, &lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__121_once, _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules___closed__121);
return v___x_2686_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_natBytes_go(lean_object* v_a_2687_, lean_object* v_a_2688_, lean_object* v_a_2689_){
_start:
{
lean_object* v___x_2690_; uint8_t v___x_2691_; 
v___x_2690_ = lean_unsigned_to_nat(0u);
v___x_2691_ = lean_nat_dec_eq(v_a_2687_, v___x_2690_);
if (v___x_2691_ == 0)
{
uint8_t v_isZero_2692_; 
v_isZero_2692_ = lean_nat_dec_eq(v_a_2688_, v___x_2690_);
if (v_isZero_2692_ == 1)
{
lean_dec(v_a_2688_);
lean_dec(v_a_2687_);
return v_a_2689_;
}
else
{
lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v_acc_x27_2697_; uint8_t v___x_2698_; 
v___x_2693_ = lean_unsigned_to_nat(48u);
v___x_2694_ = lean_unsigned_to_nat(10u);
v___x_2695_ = lean_nat_mod(v_a_2687_, v___x_2694_);
v___x_2696_ = lean_nat_add(v___x_2693_, v___x_2695_);
lean_dec(v___x_2695_);
v_acc_x27_2697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_acc_x27_2697_, 0, v___x_2696_);
lean_ctor_set(v_acc_x27_2697_, 1, v_a_2689_);
v___x_2698_ = lean_nat_dec_lt(v_a_2687_, v___x_2694_);
if (v___x_2698_ == 0)
{
lean_object* v_one_2699_; lean_object* v_n_2700_; lean_object* v___x_2701_; 
v_one_2699_ = lean_unsigned_to_nat(1u);
v_n_2700_ = lean_nat_sub(v_a_2688_, v_one_2699_);
lean_dec(v_a_2688_);
v___x_2701_ = lean_nat_div(v_a_2687_, v___x_2694_);
lean_dec(v_a_2687_);
v_a_2687_ = v___x_2701_;
v_a_2688_ = v_n_2700_;
v_a_2689_ = v_acc_x27_2697_;
goto _start;
}
else
{
lean_dec(v_a_2688_);
lean_dec(v_a_2687_);
return v_acc_x27_2697_;
}
}
}
else
{
lean_dec(v_a_2688_);
lean_dec(v_a_2687_);
if (lean_obj_tag(v_a_2689_) == 0)
{
lean_object* v___x_2703_; lean_object* v___x_2704_; 
v___x_2703_ = lean_unsigned_to_nat(48u);
v___x_2704_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2704_, 0, v___x_2703_);
lean_ctor_set(v___x_2704_, 1, v_a_2689_);
return v___x_2704_;
}
else
{
return v_a_2689_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_natBytes(lean_object* v_n_2705_){
_start:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
v___x_2706_ = lean_unsigned_to_nat(1u);
v___x_2707_ = lean_nat_add(v_n_2705_, v___x_2706_);
v___x_2708_ = lean_box(0);
v___x_2709_ = lp_lean_x2dftml_LeanFtml_natBytes_go(v_n_2705_, v___x_2707_, v___x_2708_);
return v___x_2709_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_intBytes___closed__0(void){
_start:
{
lean_object* v___x_2710_; lean_object* v___x_2711_; 
v___x_2710_ = lean_unsigned_to_nat(0u);
v___x_2711_ = lean_nat_to_int(v___x_2710_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_intBytes(lean_object* v_i_2712_){
_start:
{
lean_object* v___x_2713_; uint8_t v___x_2714_; 
v___x_2713_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_intBytes___closed__0, &lp_lean_x2dftml_LeanFtml_intBytes___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_intBytes___closed__0);
v___x_2714_ = lean_int_dec_lt(v_i_2712_, v___x_2713_);
if (v___x_2714_ == 0)
{
lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2715_ = lean_nat_abs(v_i_2712_);
v___x_2716_ = lp_lean_x2dftml_LeanFtml_natBytes(v___x_2715_);
return v___x_2716_;
}
else
{
lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
v___x_2717_ = lean_unsigned_to_nat(45u);
v___x_2718_ = lean_nat_abs(v_i_2712_);
v___x_2719_ = lp_lean_x2dftml_LeanFtml_natBytes(v___x_2718_);
v___x_2720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2720_, 0, v___x_2717_);
lean_ctor_set(v___x_2720_, 1, v___x_2719_);
return v___x_2720_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_intBytes___boxed(lean_object* v_i_2721_){
_start:
{
lean_object* v_res_2722_; 
v_res_2722_ = lp_lean_x2dftml_LeanFtml_intBytes(v_i_2721_);
lean_dec(v_i_2721_);
return v_res_2722_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderOptValBytes(lean_object* v_x_2728_){
_start:
{
switch(lean_obj_tag(v_x_2728_))
{
case 0:
{
lean_object* v_a_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; 
v_a_2729_ = lean_ctor_get(v_x_2728_, 0);
v___x_2730_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderOptValBytes___closed__0));
v___x_2731_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(v_a_2729_, v___x_2730_);
return v___x_2731_;
}
case 1:
{
lean_object* v_a_2732_; lean_object* v___x_2733_; 
v_a_2732_ = lean_ctor_get(v_x_2728_, 0);
v___x_2733_ = lp_lean_x2dftml_LeanFtml_intBytes(v_a_2732_);
return v___x_2733_;
}
case 2:
{
uint8_t v_a_2734_; 
v_a_2734_ = lean_ctor_get_uint8(v_x_2728_, 0);
if (v_a_2734_ == 0)
{
lean_object* v___x_2735_; 
v___x_2735_ = lean_box(0);
return v___x_2735_;
}
else
{
lean_object* v___x_2736_; 
v___x_2736_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderOptValBytes___closed__1));
return v___x_2736_;
}
}
case 6:
{
lean_object* v_a_2737_; 
v_a_2737_ = lean_ctor_get(v_x_2728_, 0);
lean_inc(v_a_2737_);
return v_a_2737_;
}
default: 
{
lean_object* v___x_2738_; 
v___x_2738_ = lean_box(0);
return v___x_2738_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderOptValBytes___boxed(lean_object* v_x_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = lp_lean_x2dftml_LeanFtml_renderOptValBytes(v_x_2739_);
lean_dec(v_x_2739_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optStrBytes(lean_object* v_opts_2741_, lean_object* v_key_2742_){
_start:
{
lean_object* v___x_2743_; 
v___x_2743_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_2741_, v_key_2742_);
if (lean_obj_tag(v___x_2743_) == 0)
{
lean_object* v___x_2744_; 
v___x_2744_ = lean_box(0);
return v___x_2744_;
}
else
{
lean_object* v_val_2745_; lean_object* v___x_2746_; 
v_val_2745_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_val_2745_);
lean_dec_ref_known(v___x_2743_, 1);
v___x_2746_ = lp_lean_x2dftml_LeanFtml_renderOptValBytes(v_val_2745_);
lean_dec(v_val_2745_);
return v___x_2746_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optStrBytes___boxed(lean_object* v_opts_2747_, lean_object* v_key_2748_){
_start:
{
lean_object* v_res_2749_; 
v_res_2749_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_2747_, v_key_2748_);
lean_dec(v_key_2748_);
lean_dec(v_opts_2747_);
return v_res_2749_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseNatBytes_go(lean_object* v_a_2750_, lean_object* v_a_2751_){
_start:
{
if (lean_obj_tag(v_a_2750_) == 0)
{
lean_object* v___x_2752_; 
v___x_2752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2752_, 0, v_a_2751_);
return v___x_2752_;
}
else
{
lean_object* v_head_2753_; lean_object* v_tail_2754_; lean_object* v___x_2755_; uint8_t v___x_2756_; 
v_head_2753_ = lean_ctor_get(v_a_2750_, 0);
v_tail_2754_ = lean_ctor_get(v_a_2750_, 1);
v___x_2755_ = lean_unsigned_to_nat(48u);
v___x_2756_ = lean_nat_dec_le(v___x_2755_, v_head_2753_);
if (v___x_2756_ == 0)
{
lean_object* v___x_2757_; 
lean_dec(v_a_2751_);
v___x_2757_ = lean_box(0);
return v___x_2757_;
}
else
{
lean_object* v___x_2758_; uint8_t v___x_2759_; 
v___x_2758_ = lean_unsigned_to_nat(57u);
v___x_2759_ = lean_nat_dec_le(v_head_2753_, v___x_2758_);
if (v___x_2759_ == 0)
{
lean_object* v___x_2760_; 
lean_dec(v_a_2751_);
v___x_2760_ = lean_box(0);
return v___x_2760_;
}
else
{
lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2761_ = lean_unsigned_to_nat(10u);
v___x_2762_ = lean_nat_mul(v_a_2751_, v___x_2761_);
lean_dec(v_a_2751_);
v___x_2763_ = lean_nat_sub(v_head_2753_, v___x_2755_);
v___x_2764_ = lean_nat_add(v___x_2762_, v___x_2763_);
lean_dec(v___x_2763_);
lean_dec(v___x_2762_);
v_a_2750_ = v_tail_2754_;
v_a_2751_ = v___x_2764_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseNatBytes_go___boxed(lean_object* v_a_2766_, lean_object* v_a_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = lp_lean_x2dftml_LeanFtml_parseNatBytes_go(v_a_2766_, v_a_2767_);
lean_dec(v_a_2766_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseNatBytes(lean_object* v_x_2769_){
_start:
{
if (lean_obj_tag(v_x_2769_) == 0)
{
lean_object* v___x_2770_; 
v___x_2770_ = lean_box(0);
return v___x_2770_;
}
else
{
lean_object* v___x_2771_; lean_object* v___x_2772_; 
v___x_2771_ = lean_unsigned_to_nat(0u);
v___x_2772_ = lp_lean_x2dftml_LeanFtml_parseNatBytes_go(v_x_2769_, v___x_2771_);
return v___x_2772_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseNatBytes___boxed(lean_object* v_x_2773_){
_start:
{
lean_object* v_res_2774_; 
v_res_2774_ = lp_lean_x2dftml_LeanFtml_parseNatBytes(v_x_2773_);
lean_dec(v_x_2773_);
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optNat(lean_object* v_opts_2775_, lean_object* v_key_2776_){
_start:
{
lean_object* v___x_2777_; 
v___x_2777_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_2775_, v_key_2776_);
if (lean_obj_tag(v___x_2777_) == 1)
{
lean_object* v_val_2778_; lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2797_; 
v_val_2778_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2780_ = v___x_2777_;
v_isShared_2781_ = v_isSharedCheck_2797_;
goto v_resetjp_2779_;
}
else
{
lean_inc(v_val_2778_);
lean_dec(v___x_2777_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2797_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
switch(lean_obj_tag(v_val_2778_))
{
case 1:
{
lean_object* v_a_2782_; lean_object* v___x_2783_; uint8_t v___x_2784_; 
v_a_2782_ = lean_ctor_get(v_val_2778_, 0);
lean_inc(v_a_2782_);
lean_dec_ref_known(v_val_2778_, 1);
v___x_2783_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_intBytes___closed__0, &lp_lean_x2dftml_LeanFtml_intBytes___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_intBytes___closed__0);
v___x_2784_ = lean_int_dec_le(v___x_2783_, v_a_2782_);
if (v___x_2784_ == 0)
{
lean_object* v___x_2785_; 
lean_dec(v_a_2782_);
lean_del_object(v___x_2780_);
v___x_2785_ = lean_box(0);
return v___x_2785_;
}
else
{
lean_object* v___x_2786_; lean_object* v___x_2788_; 
v___x_2786_ = l_Int_toNat(v_a_2782_);
lean_dec(v_a_2782_);
if (v_isShared_2781_ == 0)
{
lean_ctor_set(v___x_2780_, 0, v___x_2786_);
v___x_2788_ = v___x_2780_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v___x_2786_);
v___x_2788_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
return v___x_2788_;
}
}
}
case 0:
{
lean_object* v_a_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; 
lean_del_object(v___x_2780_);
v_a_2790_ = lean_ctor_get(v_val_2778_, 0);
lean_inc(v_a_2790_);
lean_dec_ref_known(v_val_2778_, 1);
v___x_2791_ = lean_box(0);
v___x_2792_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v_a_2790_, v___x_2791_);
v___x_2793_ = lp_lean_x2dftml_LeanFtml_parseNatBytes(v___x_2792_);
lean_dec(v___x_2792_);
return v___x_2793_;
}
case 6:
{
lean_object* v_a_2794_; lean_object* v___x_2795_; 
lean_del_object(v___x_2780_);
v_a_2794_ = lean_ctor_get(v_val_2778_, 0);
lean_inc(v_a_2794_);
lean_dec_ref_known(v_val_2778_, 1);
v___x_2795_ = lp_lean_x2dftml_LeanFtml_parseNatBytes(v_a_2794_);
lean_dec(v_a_2794_);
return v___x_2795_;
}
default: 
{
lean_object* v___x_2796_; 
lean_del_object(v___x_2780_);
lean_dec(v_val_2778_);
v___x_2796_ = lean_box(0);
return v___x_2796_;
}
}
}
}
else
{
lean_object* v___x_2798_; 
lean_dec(v___x_2777_);
v___x_2798_ = lean_box(0);
return v___x_2798_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optNat___boxed(lean_object* v_opts_2799_, lean_object* v_key_2800_){
_start:
{
lean_object* v_res_2801_; 
v_res_2801_ = lp_lean_x2dftml_LeanFtml_optNat(v_opts_2799_, v_key_2800_);
lean_dec(v_key_2800_);
lean_dec(v_opts_2799_);
return v_res_2801_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_2802_; lean_object* v___x_2803_; 
v___x_2802_ = 48;
v___x_2803_ = lean_box_uint32(v___x_2802_);
return v___x_2803_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__0(void){
_start:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; 
v___x_2804_ = lean_box(0);
v___x_2805_ = lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__0___boxed__const__1;
v___x_2806_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2805_);
lean_ctor_set(v___x_2806_, 1, v___x_2804_);
return v___x_2806_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_phpEmptyOpt(lean_object* v_x_2810_){
_start:
{
if (lean_obj_tag(v_x_2810_) == 0)
{
uint8_t v___x_2811_; 
v___x_2811_ = 1;
return v___x_2811_;
}
else
{
lean_object* v_val_2812_; 
v_val_2812_ = lean_ctor_get(v_x_2810_, 0);
switch(lean_obj_tag(v_val_2812_))
{
case 0:
{
lean_object* v_a_2813_; uint8_t v___x_2814_; 
v_a_2813_ = lean_ctor_get(v_val_2812_, 0);
v___x_2814_ = l_List_isEmpty___redArg(v_a_2813_);
if (v___x_2814_ == 0)
{
lean_object* v___x_2815_; uint8_t v___x_2816_; 
v___x_2815_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__0, &lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__0);
v___x_2816_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_a_2813_, v___x_2815_);
return v___x_2816_;
}
else
{
return v___x_2814_;
}
}
case 1:
{
lean_object* v_a_2817_; lean_object* v___x_2818_; uint8_t v___x_2819_; 
v_a_2817_ = lean_ctor_get(v_val_2812_, 0);
v___x_2818_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_intBytes___closed__0, &lp_lean_x2dftml_LeanFtml_intBytes___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_intBytes___closed__0);
v___x_2819_ = lean_int_dec_eq(v_a_2817_, v___x_2818_);
return v___x_2819_;
}
case 2:
{
uint8_t v_a_2820_; 
v_a_2820_ = lean_ctor_get_uint8(v_val_2812_, 0);
if (v_a_2820_ == 0)
{
uint8_t v___x_2821_; 
v___x_2821_ = 1;
return v___x_2821_;
}
else
{
uint8_t v___x_2822_; 
v___x_2822_ = 0;
return v___x_2822_;
}
}
case 3:
{
uint8_t v___x_2823_; 
v___x_2823_ = 1;
return v___x_2823_;
}
case 6:
{
lean_object* v_a_2824_; uint8_t v___x_2825_; 
v_a_2824_ = lean_ctor_get(v_val_2812_, 0);
v___x_2825_ = l_List_isEmpty___redArg(v_a_2824_);
if (v___x_2825_ == 0)
{
lean_object* v___x_2826_; uint8_t v___x_2827_; 
v___x_2826_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__1));
v___x_2827_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_a_2824_, v___x_2826_);
return v___x_2827_;
}
else
{
return v___x_2825_;
}
}
default: 
{
lean_object* v_a_2828_; uint8_t v___x_2829_; 
v_a_2828_ = lean_ctor_get(v_val_2812_, 0);
v___x_2829_ = l_List_isEmpty___redArg(v_a_2828_);
return v___x_2829_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phpEmptyOpt___boxed(lean_object* v_x_2830_){
_start:
{
uint8_t v_res_2831_; lean_object* v_r_2832_; 
v_res_2831_ = lp_lean_x2dftml_LeanFtml_phpEmptyOpt(v_x_2830_);
lean_dec(v_x_2830_);
v_r_2832_ = lean_box(v_res_2831_);
return v_r_2832_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escHtmlCompatByte(lean_object* v_b_2875_){
_start:
{
lean_object* v___x_2876_; uint8_t v___x_2877_; 
v___x_2876_ = lean_unsigned_to_nat(38u);
v___x_2877_ = lean_nat_dec_eq(v_b_2875_, v___x_2876_);
if (v___x_2877_ == 0)
{
lean_object* v___x_2878_; uint8_t v___x_2879_; 
v___x_2878_ = lean_unsigned_to_nat(34u);
v___x_2879_ = lean_nat_dec_eq(v_b_2875_, v___x_2878_);
if (v___x_2879_ == 0)
{
lean_object* v___x_2880_; uint8_t v___x_2881_; 
v___x_2880_ = lean_unsigned_to_nat(60u);
v___x_2881_ = lean_nat_dec_eq(v_b_2875_, v___x_2880_);
if (v___x_2881_ == 0)
{
lean_object* v___x_2882_; uint8_t v___x_2883_; 
v___x_2882_ = lean_unsigned_to_nat(62u);
v___x_2883_ = lean_nat_dec_eq(v_b_2875_, v___x_2882_);
if (v___x_2883_ == 0)
{
lean_object* v___x_2884_; lean_object* v___x_2885_; 
v___x_2884_ = lean_box(0);
v___x_2885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2885_, 0, v_b_2875_);
lean_ctor_set(v___x_2885_, 1, v___x_2884_);
return v___x_2885_;
}
else
{
lean_object* v___x_2886_; 
lean_dec(v_b_2875_);
v___x_2886_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__3));
return v___x_2886_;
}
}
else
{
lean_object* v___x_2887_; 
lean_dec(v_b_2875_);
v___x_2887_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__5));
return v___x_2887_;
}
}
else
{
lean_object* v___x_2888_; 
lean_dec(v_b_2875_);
v___x_2888_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__9));
return v___x_2888_;
}
}
else
{
lean_object* v___x_2889_; 
lean_dec(v_b_2875_);
v___x_2889_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__13));
return v___x_2889_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escHtmlNoQuotesByte(lean_object* v_b_2890_){
_start:
{
lean_object* v___x_2891_; uint8_t v___x_2892_; 
v___x_2891_ = lean_unsigned_to_nat(38u);
v___x_2892_ = lean_nat_dec_eq(v_b_2890_, v___x_2891_);
if (v___x_2892_ == 0)
{
lean_object* v___x_2893_; uint8_t v___x_2894_; 
v___x_2893_ = lean_unsigned_to_nat(60u);
v___x_2894_ = lean_nat_dec_eq(v_b_2890_, v___x_2893_);
if (v___x_2894_ == 0)
{
lean_object* v___x_2895_; uint8_t v___x_2896_; 
v___x_2895_ = lean_unsigned_to_nat(62u);
v___x_2896_ = lean_nat_dec_eq(v_b_2890_, v___x_2895_);
if (v___x_2896_ == 0)
{
lean_object* v___x_2897_; lean_object* v___x_2898_; 
v___x_2897_ = lean_box(0);
v___x_2898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2898_, 0, v_b_2890_);
lean_ctor_set(v___x_2898_, 1, v___x_2897_);
return v___x_2898_;
}
else
{
lean_object* v___x_2899_; 
lean_dec(v_b_2890_);
v___x_2899_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__3));
return v___x_2899_;
}
}
else
{
lean_object* v___x_2900_; 
lean_dec(v_b_2890_);
v___x_2900_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__5));
return v___x_2900_;
}
}
else
{
lean_object* v___x_2901_; 
lean_dec(v_b_2890_);
v___x_2901_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_escHtmlCompatByte___closed__13));
return v___x_2901_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte(lean_object* v_b_2917_){
_start:
{
lean_object* v___x_2918_; uint8_t v___x_2919_; 
v___x_2918_ = lean_unsigned_to_nat(39u);
v___x_2919_ = lean_nat_dec_eq(v_b_2917_, v___x_2918_);
if (v___x_2919_ == 0)
{
lean_object* v___x_2920_; 
v___x_2920_ = lp_lean_x2dftml_LeanFtml_escHtmlCompatByte(v_b_2917_);
return v___x_2920_;
}
else
{
lean_object* v___x_2921_; 
lean_dec(v_b_2917_);
v___x_2921_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte___closed__4));
return v___x_2921_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_htmlSpecialCharsCompat_spec__0(lean_object* v_a_2922_, lean_object* v_a_2923_){
_start:
{
if (lean_obj_tag(v_a_2922_) == 0)
{
lean_object* v___x_2924_; 
v___x_2924_ = lean_array_to_list(v_a_2923_);
return v___x_2924_;
}
else
{
lean_object* v_head_2925_; lean_object* v_tail_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; 
v_head_2925_ = lean_ctor_get(v_a_2922_, 0);
lean_inc(v_head_2925_);
v_tail_2926_ = lean_ctor_get(v_a_2922_, 1);
lean_inc(v_tail_2926_);
lean_dec_ref_known(v_a_2922_, 2);
v___x_2927_ = lp_lean_x2dftml_LeanFtml_escHtmlCompatByte(v_head_2925_);
v___x_2928_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2923_, v___x_2927_);
v_a_2922_ = v_tail_2926_;
v_a_2923_ = v___x_2928_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(lean_object* v_bs_2930_){
_start:
{
uint8_t v___x_2931_; 
v___x_2931_ = lp_lean_x2dftml_LeanFtml_utf8Valid(v_bs_2930_);
if (v___x_2931_ == 0)
{
lean_object* v___x_2932_; 
lean_dec(v_bs_2930_);
v___x_2932_ = lean_box(0);
return v___x_2932_;
}
else
{
lean_object* v___x_2933_; lean_object* v___x_2934_; 
v___x_2933_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderOptValBytes___closed__0));
v___x_2934_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_htmlSpecialCharsCompat_spec__0(v_bs_2930_, v___x_2933_);
return v___x_2934_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(lean_object* v_a_2945_, lean_object* v_a_2946_){
_start:
{
if (lean_obj_tag(v_a_2945_) == 0)
{
return v_a_2945_;
}
else
{
lean_object* v_head_2947_; lean_object* v_tail_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_3108_; 
v_head_2947_ = lean_ctor_get(v_a_2945_, 0);
v_tail_2948_ = lean_ctor_get(v_a_2945_, 1);
v_isSharedCheck_3108_ = !lean_is_exclusive(v_a_2945_);
if (v_isSharedCheck_3108_ == 0)
{
v___x_2950_ = v_a_2945_;
v_isShared_2951_ = v_isSharedCheck_3108_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_tail_2948_);
lean_inc(v_head_2947_);
lean_dec(v_a_2945_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_3108_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v_zero_2952_; uint8_t v_isZero_2953_; 
v_zero_2952_ = lean_unsigned_to_nat(0u);
v_isZero_2953_ = lean_nat_dec_eq(v_a_2946_, v_zero_2952_);
if (v_isZero_2953_ == 1)
{
lean_object* v___x_2954_; 
lean_del_object(v___x_2950_);
lean_dec(v_tail_2948_);
lean_dec(v_head_2947_);
v___x_2954_ = lean_box(0);
return v___x_2954_;
}
else
{
lean_object* v_one_2955_; lean_object* v_n_2956_; lean_object* v___y_2962_; lean_object* v___y_2967_; lean_object* v___y_2968_; lean_object* v___y_2969_; lean_object* v___y_2970_; lean_object* v___y_2979_; lean_object* v___y_2980_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v___y_2983_; lean_object* v___y_2988_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___y_2995_; lean_object* v___y_3001_; lean_object* v___y_3002_; lean_object* v___y_3003_; uint8_t v___y_3009_; lean_object* v___x_3053_; uint8_t v___x_3054_; uint8_t v___y_3056_; 
v_one_2955_ = lean_unsigned_to_nat(1u);
v_n_2956_ = lean_nat_sub(v_a_2946_, v_one_2955_);
v___x_3053_ = lean_unsigned_to_nat(128u);
v___x_3054_ = lean_nat_dec_lt(v_head_2947_, v___x_3053_);
if (v___x_3054_ == 0)
{
lean_object* v___x_3083_; uint8_t v___x_3084_; 
v___x_3083_ = lean_unsigned_to_nat(194u);
v___x_3084_ = lean_nat_dec_le(v___x_3083_, v_head_2947_);
if (v___x_3084_ == 0)
{
v___y_3056_ = v___x_3054_;
goto v___jp_3055_;
}
else
{
lean_object* v___x_3085_; uint8_t v___x_3086_; 
v___x_3085_ = lean_unsigned_to_nat(224u);
v___x_3086_ = lean_nat_dec_lt(v_head_2947_, v___x_3085_);
if (v___x_3086_ == 0)
{
v___y_3056_ = v___x_3086_;
goto v___jp_3055_;
}
else
{
lean_del_object(v___x_2950_);
if (lean_obj_tag(v_tail_2948_) == 0)
{
lean_object* v___x_3087_; 
lean_dec(v_n_2956_);
lean_dec(v_head_2947_);
v___x_3087_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
return v___x_3087_;
}
else
{
lean_object* v_head_3088_; lean_object* v_tail_3089_; uint8_t v___x_3090_; 
v_head_3088_ = lean_ctor_get(v_tail_2948_, 0);
v_tail_3089_ = lean_ctor_get(v_tail_2948_, 1);
v___x_3090_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3088_);
if (v___x_3090_ == 0)
{
lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
lean_dec(v_head_2947_);
v___x_3091_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3092_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v_tail_2948_, v_n_2956_);
lean_dec(v_n_2956_);
v___x_3093_ = l_List_appendTR___redArg(v___x_3091_, v___x_3092_);
return v___x_3093_;
}
else
{
lean_object* v___x_3095_; uint8_t v_isShared_3096_; uint8_t v_isSharedCheck_3102_; 
lean_inc(v_tail_3089_);
lean_inc(v_head_3088_);
v_isSharedCheck_3102_ = !lean_is_exclusive(v_tail_2948_);
if (v_isSharedCheck_3102_ == 0)
{
lean_object* v_unused_3103_; lean_object* v_unused_3104_; 
v_unused_3103_ = lean_ctor_get(v_tail_2948_, 1);
lean_dec(v_unused_3103_);
v_unused_3104_ = lean_ctor_get(v_tail_2948_, 0);
lean_dec(v_unused_3104_);
v___x_3095_ = v_tail_2948_;
v_isShared_3096_ = v_isSharedCheck_3102_;
goto v_resetjp_3094_;
}
else
{
lean_dec(v_tail_2948_);
v___x_3095_ = lean_box(0);
v_isShared_3096_ = v_isSharedCheck_3102_;
goto v_resetjp_3094_;
}
v_resetjp_3094_:
{
lean_object* v___x_3097_; lean_object* v___x_3099_; 
v___x_3097_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v_tail_3089_, v_n_2956_);
lean_dec(v_n_2956_);
if (v_isShared_3096_ == 0)
{
lean_ctor_set(v___x_3095_, 1, v___x_3097_);
v___x_3099_ = v___x_3095_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_head_3088_);
lean_ctor_set(v_reuseFailAlloc_3101_, 1, v___x_3097_);
v___x_3099_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
lean_object* v___x_3100_; 
v___x_3100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3100_, 0, v_head_2947_);
lean_ctor_set(v___x_3100_, 1, v___x_3099_);
return v___x_3100_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
lean_del_object(v___x_2950_);
v___x_3105_ = lp_lean_x2dftml_LeanFtml_escHtmlQuotesByte(v_head_2947_);
v___x_3106_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v_tail_2948_, v_n_2956_);
lean_dec(v_n_2956_);
v___x_3107_ = l_List_appendTR___redArg(v___x_3105_, v___x_3106_);
return v___x_3107_;
}
v___jp_2957_:
{
lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___x_2958_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_2959_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v_tail_2948_, v_n_2956_);
lean_dec(v_n_2956_);
v___x_2960_ = l_List_appendTR___redArg(v___x_2958_, v___x_2959_);
return v___x_2960_;
}
v___jp_2961_:
{
lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2963_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_2964_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v___y_2962_, v_n_2956_);
lean_dec(v_n_2956_);
v___x_2965_ = l_List_appendTR___redArg(v___x_2963_, v___x_2964_);
return v___x_2965_;
}
v___jp_2966_:
{
lean_object* v___x_2971_; lean_object* v___x_2973_; 
v___x_2971_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v___y_2967_, v_n_2956_);
lean_dec(v_n_2956_);
if (v_isShared_2951_ == 0)
{
lean_ctor_set(v___x_2950_, 1, v___x_2971_);
lean_ctor_set(v___x_2950_, 0, v___y_2970_);
v___x_2973_ = v___x_2950_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2977_; 
v_reuseFailAlloc_2977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2977_, 0, v___y_2970_);
lean_ctor_set(v_reuseFailAlloc_2977_, 1, v___x_2971_);
v___x_2973_ = v_reuseFailAlloc_2977_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; 
v___x_2974_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2974_, 0, v___y_2968_);
lean_ctor_set(v___x_2974_, 1, v___x_2973_);
v___x_2975_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2975_, 0, v___y_2969_);
lean_ctor_set(v___x_2975_, 1, v___x_2974_);
v___x_2976_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2976_, 0, v_head_2947_);
lean_ctor_set(v___x_2976_, 1, v___x_2975_);
return v___x_2976_;
}
}
v___jp_2978_:
{
uint8_t v___x_2984_; 
v___x_2984_ = lean_nat_dec_eq(v_head_2947_, v___y_2982_);
if (v___x_2984_ == 0)
{
v___y_2967_ = v___y_2979_;
v___y_2968_ = v___y_2980_;
v___y_2969_ = v___y_2981_;
v___y_2970_ = v___y_2983_;
goto v___jp_2966_;
}
else
{
lean_object* v___x_2985_; uint8_t v___x_2986_; 
v___x_2985_ = lean_unsigned_to_nat(144u);
v___x_2986_ = lean_nat_dec_lt(v___y_2981_, v___x_2985_);
if (v___x_2986_ == 0)
{
lean_dec(v___y_2983_);
lean_dec(v___y_2981_);
lean_dec(v___y_2980_);
lean_del_object(v___x_2950_);
lean_dec(v_head_2947_);
v___y_2962_ = v___y_2979_;
goto v___jp_2961_;
}
else
{
v___y_2967_ = v___y_2979_;
v___y_2968_ = v___y_2980_;
v___y_2969_ = v___y_2981_;
v___y_2970_ = v___y_2983_;
goto v___jp_2966_;
}
}
}
v___jp_2987_:
{
lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2989_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_2990_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v___y_2988_, v_n_2956_);
lean_dec(v_n_2956_);
v___x_2991_ = l_List_appendTR___redArg(v___x_2989_, v___x_2990_);
return v___x_2991_;
}
v___jp_2992_:
{
lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2996_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v___y_2995_, v_n_2956_);
lean_dec(v_n_2956_);
v___x_2997_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2997_, 0, v___y_2994_);
lean_ctor_set(v___x_2997_, 1, v___x_2996_);
v___x_2998_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2998_, 0, v___y_2993_);
lean_ctor_set(v___x_2998_, 1, v___x_2997_);
v___x_2999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2999_, 0, v_head_2947_);
lean_ctor_set(v___x_2999_, 1, v___x_2998_);
return v___x_2999_;
}
v___jp_3000_:
{
lean_object* v___x_3004_; uint8_t v___x_3005_; 
v___x_3004_ = lean_unsigned_to_nat(237u);
v___x_3005_ = lean_nat_dec_eq(v_head_2947_, v___x_3004_);
if (v___x_3005_ == 0)
{
v___y_2993_ = v___y_3001_;
v___y_2994_ = v___y_3003_;
v___y_2995_ = v___y_3002_;
goto v___jp_2992_;
}
else
{
lean_object* v___x_3006_; uint8_t v___x_3007_; 
v___x_3006_ = lean_unsigned_to_nat(160u);
v___x_3007_ = lean_nat_dec_lt(v___y_3001_, v___x_3006_);
if (v___x_3007_ == 0)
{
lean_dec(v___y_3003_);
lean_dec(v___y_3001_);
lean_dec(v_head_2947_);
v___y_2988_ = v___y_3002_;
goto v___jp_2987_;
}
else
{
v___y_2993_ = v___y_3001_;
v___y_2994_ = v___y_3003_;
v___y_2995_ = v___y_3002_;
goto v___jp_2992_;
}
}
}
v___jp_3008_:
{
lean_object* v___x_3010_; uint8_t v___x_3011_; 
v___x_3010_ = lean_unsigned_to_nat(240u);
v___x_3011_ = lean_nat_dec_le(v___x_3010_, v_head_2947_);
if (v___x_3011_ == 0)
{
lean_del_object(v___x_2950_);
lean_dec(v_head_2947_);
goto v___jp_2957_;
}
else
{
lean_object* v___x_3012_; uint8_t v___x_3013_; 
v___x_3012_ = lean_unsigned_to_nat(244u);
v___x_3013_ = lean_nat_dec_le(v_head_2947_, v___x_3012_);
if (v___x_3013_ == 0)
{
lean_del_object(v___x_2950_);
lean_dec(v_head_2947_);
goto v___jp_2957_;
}
else
{
if (lean_obj_tag(v_tail_2948_) == 0)
{
lean_object* v___x_3014_; 
lean_dec(v_n_2956_);
lean_del_object(v___x_2950_);
lean_dec(v_head_2947_);
v___x_3014_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
return v___x_3014_;
}
else
{
lean_object* v_tail_3015_; 
v_tail_3015_ = lean_ctor_get(v_tail_2948_, 1);
if (lean_obj_tag(v_tail_3015_) == 0)
{
lean_object* v_head_3016_; uint8_t v___x_3017_; 
lean_del_object(v___x_2950_);
lean_dec(v_head_2947_);
v_head_3016_ = lean_ctor_get(v_tail_2948_, 0);
v___x_3017_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3016_);
if (v___x_3017_ == 0)
{
lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; 
v___x_3018_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3019_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v_tail_2948_, v_n_2956_);
lean_dec(v_n_2956_);
v___x_3020_ = l_List_appendTR___redArg(v___x_3018_, v___x_3019_);
return v___x_3020_;
}
else
{
lean_object* v___x_3021_; 
lean_dec_ref_known(v_tail_2948_, 2);
lean_dec(v_n_2956_);
v___x_3021_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
return v___x_3021_;
}
}
else
{
lean_object* v_tail_3022_; 
v_tail_3022_ = lean_ctor_get(v_tail_3015_, 1);
if (lean_obj_tag(v_tail_3022_) == 0)
{
lean_object* v_head_3023_; lean_object* v_head_3024_; uint8_t v___x_3025_; 
lean_del_object(v___x_2950_);
lean_dec(v_head_2947_);
v_head_3023_ = lean_ctor_get(v_tail_2948_, 0);
v_head_3024_ = lean_ctor_get(v_tail_3015_, 0);
v___x_3025_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3023_);
if (v___x_3025_ == 0)
{
lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; 
v___x_3026_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3027_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v_tail_2948_, v_n_2956_);
lean_dec(v_n_2956_);
v___x_3028_ = l_List_appendTR___redArg(v___x_3026_, v___x_3027_);
return v___x_3028_;
}
else
{
uint8_t v___x_3029_; 
lean_inc_ref(v_tail_3015_);
lean_dec_ref_known(v_tail_2948_, 2);
v___x_3029_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3024_);
if (v___x_3029_ == 0)
{
lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; 
v___x_3030_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3031_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v_tail_3015_, v_n_2956_);
lean_dec(v_n_2956_);
v___x_3032_ = l_List_appendTR___redArg(v___x_3030_, v___x_3031_);
return v___x_3032_;
}
else
{
lean_object* v___x_3033_; 
lean_dec_ref_known(v_tail_3015_, 2);
lean_dec(v_n_2956_);
v___x_3033_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
return v___x_3033_;
}
}
}
else
{
lean_object* v_head_3034_; lean_object* v_head_3035_; lean_object* v_head_3036_; lean_object* v_tail_3037_; uint8_t v___x_3038_; 
v_head_3034_ = lean_ctor_get(v_tail_2948_, 0);
v_head_3035_ = lean_ctor_get(v_tail_3015_, 0);
v_head_3036_ = lean_ctor_get(v_tail_3022_, 0);
v_tail_3037_ = lean_ctor_get(v_tail_3022_, 1);
v___x_3038_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3034_);
if (v___x_3038_ == 0)
{
lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; 
lean_del_object(v___x_2950_);
lean_dec(v_head_2947_);
v___x_3039_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3040_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v_tail_2948_, v_n_2956_);
lean_dec(v_n_2956_);
v___x_3041_ = l_List_appendTR___redArg(v___x_3039_, v___x_3040_);
return v___x_3041_;
}
else
{
uint8_t v___x_3042_; 
lean_inc(v_head_3034_);
lean_inc_ref(v_tail_3015_);
lean_dec_ref_known(v_tail_2948_, 2);
v___x_3042_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3035_);
if (v___x_3042_ == 0)
{
lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; 
lean_dec(v_head_3034_);
lean_del_object(v___x_2950_);
lean_dec(v_head_2947_);
v___x_3043_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3044_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v_tail_3015_, v_n_2956_);
lean_dec(v_n_2956_);
v___x_3045_ = l_List_appendTR___redArg(v___x_3043_, v___x_3044_);
return v___x_3045_;
}
else
{
uint8_t v___x_3046_; 
lean_inc(v_head_3035_);
lean_inc_ref(v_tail_3022_);
lean_dec_ref_known(v_tail_3015_, 2);
v___x_3046_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3036_);
if (v___x_3046_ == 0)
{
lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
lean_dec(v_head_3035_);
lean_dec(v_head_3034_);
lean_del_object(v___x_2950_);
lean_dec(v_head_2947_);
v___x_3047_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3048_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v_tail_3022_, v_n_2956_);
lean_dec(v_n_2956_);
v___x_3049_ = l_List_appendTR___redArg(v___x_3047_, v___x_3048_);
return v___x_3049_;
}
else
{
uint8_t v___x_3050_; 
lean_inc(v_tail_3037_);
lean_inc(v_head_3036_);
lean_dec_ref_known(v_tail_3022_, 2);
v___x_3050_ = lean_nat_dec_eq(v_head_2947_, v___x_3010_);
if (v___x_3050_ == 0)
{
v___y_2979_ = v_tail_3037_;
v___y_2980_ = v_head_3035_;
v___y_2981_ = v_head_3034_;
v___y_2982_ = v___x_3012_;
v___y_2983_ = v_head_3036_;
goto v___jp_2978_;
}
else
{
if (v___y_3009_ == 0)
{
lean_object* v___x_3051_; uint8_t v___x_3052_; 
v___x_3051_ = lean_unsigned_to_nat(144u);
v___x_3052_ = lean_nat_dec_le(v___x_3051_, v_head_3034_);
if (v___x_3052_ == 0)
{
lean_dec(v_head_3036_);
lean_dec(v_head_3035_);
lean_dec(v_head_3034_);
lean_del_object(v___x_2950_);
lean_dec(v_head_2947_);
v___y_2962_ = v_tail_3037_;
goto v___jp_2961_;
}
else
{
v___y_2979_ = v_tail_3037_;
v___y_2980_ = v_head_3035_;
v___y_2981_ = v_head_3034_;
v___y_2982_ = v___x_3012_;
v___y_2983_ = v_head_3036_;
goto v___jp_2978_;
}
}
else
{
v___y_2979_ = v_tail_3037_;
v___y_2980_ = v_head_3035_;
v___y_2981_ = v_head_3034_;
v___y_2982_ = v___x_3012_;
v___y_2983_ = v_head_3036_;
goto v___jp_2978_;
}
}
}
}
}
}
}
}
}
}
}
v___jp_3055_:
{
lean_object* v___x_3057_; uint8_t v___x_3058_; 
v___x_3057_ = lean_unsigned_to_nat(224u);
v___x_3058_ = lean_nat_dec_le(v___x_3057_, v_head_2947_);
if (v___x_3058_ == 0)
{
v___y_3009_ = v___x_3054_;
goto v___jp_3008_;
}
else
{
lean_object* v___x_3059_; uint8_t v___x_3060_; 
v___x_3059_ = lean_unsigned_to_nat(240u);
v___x_3060_ = lean_nat_dec_lt(v_head_2947_, v___x_3059_);
if (v___x_3060_ == 0)
{
v___y_3009_ = v___x_3060_;
goto v___jp_3008_;
}
else
{
lean_del_object(v___x_2950_);
if (lean_obj_tag(v_tail_2948_) == 0)
{
lean_object* v___x_3061_; 
lean_dec(v_n_2956_);
lean_dec(v_head_2947_);
v___x_3061_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
return v___x_3061_;
}
else
{
lean_object* v_tail_3062_; 
v_tail_3062_ = lean_ctor_get(v_tail_2948_, 1);
if (lean_obj_tag(v_tail_3062_) == 0)
{
lean_object* v_head_3063_; uint8_t v___x_3064_; 
lean_dec(v_head_2947_);
v_head_3063_ = lean_ctor_get(v_tail_2948_, 0);
v___x_3064_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3063_);
if (v___x_3064_ == 0)
{
lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; 
v___x_3065_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3066_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v_tail_2948_, v_n_2956_);
lean_dec(v_n_2956_);
v___x_3067_ = l_List_appendTR___redArg(v___x_3065_, v___x_3066_);
return v___x_3067_;
}
else
{
lean_object* v___x_3068_; 
lean_dec_ref_known(v_tail_2948_, 2);
lean_dec(v_n_2956_);
v___x_3068_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
return v___x_3068_;
}
}
else
{
lean_object* v_head_3069_; lean_object* v_head_3070_; lean_object* v_tail_3071_; uint8_t v___x_3072_; 
v_head_3069_ = lean_ctor_get(v_tail_2948_, 0);
v_head_3070_ = lean_ctor_get(v_tail_3062_, 0);
v_tail_3071_ = lean_ctor_get(v_tail_3062_, 1);
v___x_3072_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3069_);
if (v___x_3072_ == 0)
{
lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; 
lean_dec(v_head_2947_);
v___x_3073_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3074_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v_tail_2948_, v_n_2956_);
lean_dec(v_n_2956_);
v___x_3075_ = l_List_appendTR___redArg(v___x_3073_, v___x_3074_);
return v___x_3075_;
}
else
{
uint8_t v___x_3076_; 
lean_inc_ref(v_tail_3062_);
lean_inc(v_head_3069_);
lean_dec_ref_known(v_tail_2948_, 2);
v___x_3076_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3070_);
if (v___x_3076_ == 0)
{
lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; 
lean_dec(v_head_3069_);
lean_dec(v_head_2947_);
v___x_3077_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3078_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v_tail_3062_, v_n_2956_);
lean_dec(v_n_2956_);
v___x_3079_ = l_List_appendTR___redArg(v___x_3077_, v___x_3078_);
return v___x_3079_;
}
else
{
uint8_t v___x_3080_; 
lean_inc(v_tail_3071_);
lean_inc(v_head_3070_);
lean_dec_ref_known(v_tail_3062_, 2);
v___x_3080_ = lean_nat_dec_eq(v_head_2947_, v___x_3057_);
if (v___x_3080_ == 0)
{
v___y_3001_ = v_head_3069_;
v___y_3002_ = v_tail_3071_;
v___y_3003_ = v_head_3070_;
goto v___jp_3000_;
}
else
{
if (v___y_3056_ == 0)
{
lean_object* v___x_3081_; uint8_t v___x_3082_; 
v___x_3081_ = lean_unsigned_to_nat(160u);
v___x_3082_ = lean_nat_dec_le(v___x_3081_, v_head_3069_);
if (v___x_3082_ == 0)
{
lean_dec(v_head_3070_);
lean_dec(v_head_3069_);
lean_dec(v_head_2947_);
v___y_2988_ = v_tail_3071_;
goto v___jp_2987_;
}
else
{
v___y_3001_ = v_head_3069_;
v___y_3002_ = v_tail_3071_;
v___y_3003_ = v_head_3070_;
goto v___jp_3000_;
}
}
else
{
v___y_3001_ = v_head_3069_;
v___y_3002_ = v_tail_3071_;
v___y_3003_ = v_head_3070_;
goto v___jp_3000_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go___boxed(lean_object* v_a_3109_, lean_object* v_a_3110_){
_start:
{
lean_object* v_res_3111_; 
v_res_3111_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v_a_3109_, v_a_3110_);
lean_dec(v_a_3110_);
return v_res_3111_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst(lean_object* v_bs_3112_){
_start:
{
lean_object* v___x_3113_; lean_object* v___x_3114_; 
v___x_3113_ = l_List_lengthTR___redArg(v_bs_3112_);
v___x_3114_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsQuotesSubst_go(v_bs_3112_, v___x_3113_);
lean_dec(v___x_3113_);
return v___x_3114_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(lean_object* v_a_3115_, lean_object* v_a_3116_){
_start:
{
if (lean_obj_tag(v_a_3115_) == 0)
{
return v_a_3115_;
}
else
{
lean_object* v_head_3117_; lean_object* v_tail_3118_; lean_object* v___x_3120_; uint8_t v_isShared_3121_; uint8_t v_isSharedCheck_3278_; 
v_head_3117_ = lean_ctor_get(v_a_3115_, 0);
v_tail_3118_ = lean_ctor_get(v_a_3115_, 1);
v_isSharedCheck_3278_ = !lean_is_exclusive(v_a_3115_);
if (v_isSharedCheck_3278_ == 0)
{
v___x_3120_ = v_a_3115_;
v_isShared_3121_ = v_isSharedCheck_3278_;
goto v_resetjp_3119_;
}
else
{
lean_inc(v_tail_3118_);
lean_inc(v_head_3117_);
lean_dec(v_a_3115_);
v___x_3120_ = lean_box(0);
v_isShared_3121_ = v_isSharedCheck_3278_;
goto v_resetjp_3119_;
}
v_resetjp_3119_:
{
lean_object* v_zero_3122_; uint8_t v_isZero_3123_; 
v_zero_3122_ = lean_unsigned_to_nat(0u);
v_isZero_3123_ = lean_nat_dec_eq(v_a_3116_, v_zero_3122_);
if (v_isZero_3123_ == 1)
{
lean_object* v___x_3124_; 
lean_del_object(v___x_3120_);
lean_dec(v_tail_3118_);
lean_dec(v_head_3117_);
v___x_3124_ = lean_box(0);
return v___x_3124_;
}
else
{
lean_object* v_one_3125_; lean_object* v_n_3126_; lean_object* v___y_3132_; lean_object* v___y_3137_; lean_object* v___y_3138_; lean_object* v___y_3139_; lean_object* v___y_3140_; lean_object* v___y_3149_; lean_object* v___y_3150_; lean_object* v___y_3151_; lean_object* v___y_3152_; lean_object* v___y_3153_; lean_object* v___y_3158_; lean_object* v___y_3163_; lean_object* v___y_3164_; lean_object* v___y_3165_; lean_object* v___y_3171_; lean_object* v___y_3172_; lean_object* v___y_3173_; uint8_t v___y_3179_; lean_object* v___x_3223_; uint8_t v___x_3224_; uint8_t v___y_3226_; 
v_one_3125_ = lean_unsigned_to_nat(1u);
v_n_3126_ = lean_nat_sub(v_a_3116_, v_one_3125_);
v___x_3223_ = lean_unsigned_to_nat(128u);
v___x_3224_ = lean_nat_dec_lt(v_head_3117_, v___x_3223_);
if (v___x_3224_ == 0)
{
lean_object* v___x_3253_; uint8_t v___x_3254_; 
v___x_3253_ = lean_unsigned_to_nat(194u);
v___x_3254_ = lean_nat_dec_le(v___x_3253_, v_head_3117_);
if (v___x_3254_ == 0)
{
v___y_3226_ = v___x_3224_;
goto v___jp_3225_;
}
else
{
lean_object* v___x_3255_; uint8_t v___x_3256_; 
v___x_3255_ = lean_unsigned_to_nat(224u);
v___x_3256_ = lean_nat_dec_lt(v_head_3117_, v___x_3255_);
if (v___x_3256_ == 0)
{
v___y_3226_ = v___x_3256_;
goto v___jp_3225_;
}
else
{
lean_del_object(v___x_3120_);
if (lean_obj_tag(v_tail_3118_) == 0)
{
lean_object* v___x_3257_; 
lean_dec(v_n_3126_);
lean_dec(v_head_3117_);
v___x_3257_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
return v___x_3257_;
}
else
{
lean_object* v_head_3258_; lean_object* v_tail_3259_; uint8_t v___x_3260_; 
v_head_3258_ = lean_ctor_get(v_tail_3118_, 0);
v_tail_3259_ = lean_ctor_get(v_tail_3118_, 1);
v___x_3260_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3258_);
if (v___x_3260_ == 0)
{
lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; 
lean_dec(v_head_3117_);
v___x_3261_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3262_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v_tail_3118_, v_n_3126_);
lean_dec(v_n_3126_);
v___x_3263_ = l_List_appendTR___redArg(v___x_3261_, v___x_3262_);
return v___x_3263_;
}
else
{
lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3272_; 
lean_inc(v_tail_3259_);
lean_inc(v_head_3258_);
v_isSharedCheck_3272_ = !lean_is_exclusive(v_tail_3118_);
if (v_isSharedCheck_3272_ == 0)
{
lean_object* v_unused_3273_; lean_object* v_unused_3274_; 
v_unused_3273_ = lean_ctor_get(v_tail_3118_, 1);
lean_dec(v_unused_3273_);
v_unused_3274_ = lean_ctor_get(v_tail_3118_, 0);
lean_dec(v_unused_3274_);
v___x_3265_ = v_tail_3118_;
v_isShared_3266_ = v_isSharedCheck_3272_;
goto v_resetjp_3264_;
}
else
{
lean_dec(v_tail_3118_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3272_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___x_3267_; lean_object* v___x_3269_; 
v___x_3267_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v_tail_3259_, v_n_3126_);
lean_dec(v_n_3126_);
if (v_isShared_3266_ == 0)
{
lean_ctor_set(v___x_3265_, 1, v___x_3267_);
v___x_3269_ = v___x_3265_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v_head_3258_);
lean_ctor_set(v_reuseFailAlloc_3271_, 1, v___x_3267_);
v___x_3269_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
lean_object* v___x_3270_; 
v___x_3270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3270_, 0, v_head_3117_);
lean_ctor_set(v___x_3270_, 1, v___x_3269_);
return v___x_3270_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; 
lean_del_object(v___x_3120_);
v___x_3275_ = lp_lean_x2dftml_LeanFtml_escHtmlNoQuotesByte(v_head_3117_);
v___x_3276_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v_tail_3118_, v_n_3126_);
lean_dec(v_n_3126_);
v___x_3277_ = l_List_appendTR___redArg(v___x_3275_, v___x_3276_);
return v___x_3277_;
}
v___jp_3127_:
{
lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3128_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3129_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v_tail_3118_, v_n_3126_);
lean_dec(v_n_3126_);
v___x_3130_ = l_List_appendTR___redArg(v___x_3128_, v___x_3129_);
return v___x_3130_;
}
v___jp_3131_:
{
lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v___x_3133_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3134_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v___y_3132_, v_n_3126_);
lean_dec(v_n_3126_);
v___x_3135_ = l_List_appendTR___redArg(v___x_3133_, v___x_3134_);
return v___x_3135_;
}
v___jp_3136_:
{
lean_object* v___x_3141_; lean_object* v___x_3143_; 
v___x_3141_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v___y_3140_, v_n_3126_);
lean_dec(v_n_3126_);
if (v_isShared_3121_ == 0)
{
lean_ctor_set(v___x_3120_, 1, v___x_3141_);
lean_ctor_set(v___x_3120_, 0, v___y_3137_);
v___x_3143_ = v___x_3120_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v___y_3137_);
lean_ctor_set(v_reuseFailAlloc_3147_, 1, v___x_3141_);
v___x_3143_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v___x_3144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3144_, 0, v___y_3138_);
lean_ctor_set(v___x_3144_, 1, v___x_3143_);
v___x_3145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3145_, 0, v___y_3139_);
lean_ctor_set(v___x_3145_, 1, v___x_3144_);
v___x_3146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3146_, 0, v_head_3117_);
lean_ctor_set(v___x_3146_, 1, v___x_3145_);
return v___x_3146_;
}
}
v___jp_3148_:
{
uint8_t v___x_3154_; 
v___x_3154_ = lean_nat_dec_eq(v_head_3117_, v___y_3151_);
if (v___x_3154_ == 0)
{
v___y_3137_ = v___y_3149_;
v___y_3138_ = v___y_3150_;
v___y_3139_ = v___y_3152_;
v___y_3140_ = v___y_3153_;
goto v___jp_3136_;
}
else
{
lean_object* v___x_3155_; uint8_t v___x_3156_; 
v___x_3155_ = lean_unsigned_to_nat(144u);
v___x_3156_ = lean_nat_dec_lt(v___y_3152_, v___x_3155_);
if (v___x_3156_ == 0)
{
lean_dec(v___y_3152_);
lean_dec(v___y_3150_);
lean_dec(v___y_3149_);
lean_del_object(v___x_3120_);
lean_dec(v_head_3117_);
v___y_3132_ = v___y_3153_;
goto v___jp_3131_;
}
else
{
v___y_3137_ = v___y_3149_;
v___y_3138_ = v___y_3150_;
v___y_3139_ = v___y_3152_;
v___y_3140_ = v___y_3153_;
goto v___jp_3136_;
}
}
}
v___jp_3157_:
{
lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3159_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3160_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v___y_3158_, v_n_3126_);
lean_dec(v_n_3126_);
v___x_3161_ = l_List_appendTR___redArg(v___x_3159_, v___x_3160_);
return v___x_3161_;
}
v___jp_3162_:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; 
v___x_3166_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v___y_3164_, v_n_3126_);
lean_dec(v_n_3126_);
v___x_3167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3167_, 0, v___y_3165_);
lean_ctor_set(v___x_3167_, 1, v___x_3166_);
v___x_3168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3168_, 0, v___y_3163_);
lean_ctor_set(v___x_3168_, 1, v___x_3167_);
v___x_3169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3169_, 0, v_head_3117_);
lean_ctor_set(v___x_3169_, 1, v___x_3168_);
return v___x_3169_;
}
v___jp_3170_:
{
lean_object* v___x_3174_; uint8_t v___x_3175_; 
v___x_3174_ = lean_unsigned_to_nat(237u);
v___x_3175_ = lean_nat_dec_eq(v_head_3117_, v___x_3174_);
if (v___x_3175_ == 0)
{
v___y_3163_ = v___y_3172_;
v___y_3164_ = v___y_3171_;
v___y_3165_ = v___y_3173_;
goto v___jp_3162_;
}
else
{
lean_object* v___x_3176_; uint8_t v___x_3177_; 
v___x_3176_ = lean_unsigned_to_nat(160u);
v___x_3177_ = lean_nat_dec_lt(v___y_3172_, v___x_3176_);
if (v___x_3177_ == 0)
{
lean_dec(v___y_3173_);
lean_dec(v___y_3172_);
lean_dec(v_head_3117_);
v___y_3158_ = v___y_3171_;
goto v___jp_3157_;
}
else
{
v___y_3163_ = v___y_3172_;
v___y_3164_ = v___y_3171_;
v___y_3165_ = v___y_3173_;
goto v___jp_3162_;
}
}
}
v___jp_3178_:
{
lean_object* v___x_3180_; uint8_t v___x_3181_; 
v___x_3180_ = lean_unsigned_to_nat(240u);
v___x_3181_ = lean_nat_dec_le(v___x_3180_, v_head_3117_);
if (v___x_3181_ == 0)
{
lean_del_object(v___x_3120_);
lean_dec(v_head_3117_);
goto v___jp_3127_;
}
else
{
lean_object* v___x_3182_; uint8_t v___x_3183_; 
v___x_3182_ = lean_unsigned_to_nat(244u);
v___x_3183_ = lean_nat_dec_le(v_head_3117_, v___x_3182_);
if (v___x_3183_ == 0)
{
lean_del_object(v___x_3120_);
lean_dec(v_head_3117_);
goto v___jp_3127_;
}
else
{
if (lean_obj_tag(v_tail_3118_) == 0)
{
lean_object* v___x_3184_; 
lean_dec(v_n_3126_);
lean_del_object(v___x_3120_);
lean_dec(v_head_3117_);
v___x_3184_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
return v___x_3184_;
}
else
{
lean_object* v_tail_3185_; 
v_tail_3185_ = lean_ctor_get(v_tail_3118_, 1);
if (lean_obj_tag(v_tail_3185_) == 0)
{
lean_object* v_head_3186_; uint8_t v___x_3187_; 
lean_del_object(v___x_3120_);
lean_dec(v_head_3117_);
v_head_3186_ = lean_ctor_get(v_tail_3118_, 0);
v___x_3187_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3186_);
if (v___x_3187_ == 0)
{
lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; 
v___x_3188_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3189_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v_tail_3118_, v_n_3126_);
lean_dec(v_n_3126_);
v___x_3190_ = l_List_appendTR___redArg(v___x_3188_, v___x_3189_);
return v___x_3190_;
}
else
{
lean_object* v___x_3191_; 
lean_dec_ref_known(v_tail_3118_, 2);
lean_dec(v_n_3126_);
v___x_3191_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
return v___x_3191_;
}
}
else
{
lean_object* v_tail_3192_; 
v_tail_3192_ = lean_ctor_get(v_tail_3185_, 1);
if (lean_obj_tag(v_tail_3192_) == 0)
{
lean_object* v_head_3193_; lean_object* v_head_3194_; uint8_t v___x_3195_; 
lean_del_object(v___x_3120_);
lean_dec(v_head_3117_);
v_head_3193_ = lean_ctor_get(v_tail_3118_, 0);
v_head_3194_ = lean_ctor_get(v_tail_3185_, 0);
v___x_3195_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3193_);
if (v___x_3195_ == 0)
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___x_3196_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3197_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v_tail_3118_, v_n_3126_);
lean_dec(v_n_3126_);
v___x_3198_ = l_List_appendTR___redArg(v___x_3196_, v___x_3197_);
return v___x_3198_;
}
else
{
uint8_t v___x_3199_; 
lean_inc_ref(v_tail_3185_);
lean_dec_ref_known(v_tail_3118_, 2);
v___x_3199_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3194_);
if (v___x_3199_ == 0)
{
lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v___x_3200_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3201_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v_tail_3185_, v_n_3126_);
lean_dec(v_n_3126_);
v___x_3202_ = l_List_appendTR___redArg(v___x_3200_, v___x_3201_);
return v___x_3202_;
}
else
{
lean_object* v___x_3203_; 
lean_dec_ref_known(v_tail_3185_, 2);
lean_dec(v_n_3126_);
v___x_3203_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
return v___x_3203_;
}
}
}
else
{
lean_object* v_head_3204_; lean_object* v_head_3205_; lean_object* v_head_3206_; lean_object* v_tail_3207_; uint8_t v___x_3208_; 
v_head_3204_ = lean_ctor_get(v_tail_3118_, 0);
v_head_3205_ = lean_ctor_get(v_tail_3185_, 0);
v_head_3206_ = lean_ctor_get(v_tail_3192_, 0);
v_tail_3207_ = lean_ctor_get(v_tail_3192_, 1);
v___x_3208_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3204_);
if (v___x_3208_ == 0)
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
lean_del_object(v___x_3120_);
lean_dec(v_head_3117_);
v___x_3209_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3210_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v_tail_3118_, v_n_3126_);
lean_dec(v_n_3126_);
v___x_3211_ = l_List_appendTR___redArg(v___x_3209_, v___x_3210_);
return v___x_3211_;
}
else
{
uint8_t v___x_3212_; 
lean_inc(v_head_3204_);
lean_inc_ref(v_tail_3185_);
lean_dec_ref_known(v_tail_3118_, 2);
v___x_3212_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3205_);
if (v___x_3212_ == 0)
{
lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; 
lean_dec(v_head_3204_);
lean_del_object(v___x_3120_);
lean_dec(v_head_3117_);
v___x_3213_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3214_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v_tail_3185_, v_n_3126_);
lean_dec(v_n_3126_);
v___x_3215_ = l_List_appendTR___redArg(v___x_3213_, v___x_3214_);
return v___x_3215_;
}
else
{
uint8_t v___x_3216_; 
lean_inc(v_head_3205_);
lean_inc_ref(v_tail_3192_);
lean_dec_ref_known(v_tail_3185_, 2);
v___x_3216_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3206_);
if (v___x_3216_ == 0)
{
lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
lean_dec(v_head_3205_);
lean_dec(v_head_3204_);
lean_del_object(v___x_3120_);
lean_dec(v_head_3117_);
v___x_3217_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3218_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v_tail_3192_, v_n_3126_);
lean_dec(v_n_3126_);
v___x_3219_ = l_List_appendTR___redArg(v___x_3217_, v___x_3218_);
return v___x_3219_;
}
else
{
uint8_t v___x_3220_; 
lean_inc(v_tail_3207_);
lean_inc(v_head_3206_);
lean_dec_ref_known(v_tail_3192_, 2);
v___x_3220_ = lean_nat_dec_eq(v_head_3117_, v___x_3180_);
if (v___x_3220_ == 0)
{
v___y_3149_ = v_head_3206_;
v___y_3150_ = v_head_3205_;
v___y_3151_ = v___x_3182_;
v___y_3152_ = v_head_3204_;
v___y_3153_ = v_tail_3207_;
goto v___jp_3148_;
}
else
{
if (v___y_3179_ == 0)
{
lean_object* v___x_3221_; uint8_t v___x_3222_; 
v___x_3221_ = lean_unsigned_to_nat(144u);
v___x_3222_ = lean_nat_dec_le(v___x_3221_, v_head_3204_);
if (v___x_3222_ == 0)
{
lean_dec(v_head_3206_);
lean_dec(v_head_3205_);
lean_dec(v_head_3204_);
lean_del_object(v___x_3120_);
lean_dec(v_head_3117_);
v___y_3132_ = v_tail_3207_;
goto v___jp_3131_;
}
else
{
v___y_3149_ = v_head_3206_;
v___y_3150_ = v_head_3205_;
v___y_3151_ = v___x_3182_;
v___y_3152_ = v_head_3204_;
v___y_3153_ = v_tail_3207_;
goto v___jp_3148_;
}
}
else
{
v___y_3149_ = v_head_3206_;
v___y_3150_ = v_head_3205_;
v___y_3151_ = v___x_3182_;
v___y_3152_ = v_head_3204_;
v___y_3153_ = v_tail_3207_;
goto v___jp_3148_;
}
}
}
}
}
}
}
}
}
}
}
v___jp_3225_:
{
lean_object* v___x_3227_; uint8_t v___x_3228_; 
v___x_3227_ = lean_unsigned_to_nat(224u);
v___x_3228_ = lean_nat_dec_le(v___x_3227_, v_head_3117_);
if (v___x_3228_ == 0)
{
v___y_3179_ = v___x_3224_;
goto v___jp_3178_;
}
else
{
lean_object* v___x_3229_; uint8_t v___x_3230_; 
v___x_3229_ = lean_unsigned_to_nat(240u);
v___x_3230_ = lean_nat_dec_lt(v_head_3117_, v___x_3229_);
if (v___x_3230_ == 0)
{
v___y_3179_ = v___x_3230_;
goto v___jp_3178_;
}
else
{
lean_del_object(v___x_3120_);
if (lean_obj_tag(v_tail_3118_) == 0)
{
lean_object* v___x_3231_; 
lean_dec(v_n_3126_);
lean_dec(v_head_3117_);
v___x_3231_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
return v___x_3231_;
}
else
{
lean_object* v_tail_3232_; 
v_tail_3232_ = lean_ctor_get(v_tail_3118_, 1);
if (lean_obj_tag(v_tail_3232_) == 0)
{
lean_object* v_head_3233_; uint8_t v___x_3234_; 
lean_dec(v_head_3117_);
v_head_3233_ = lean_ctor_get(v_tail_3118_, 0);
v___x_3234_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3233_);
if (v___x_3234_ == 0)
{
lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; 
v___x_3235_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3236_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v_tail_3118_, v_n_3126_);
lean_dec(v_n_3126_);
v___x_3237_ = l_List_appendTR___redArg(v___x_3235_, v___x_3236_);
return v___x_3237_;
}
else
{
lean_object* v___x_3238_; 
lean_dec_ref_known(v_tail_3118_, 2);
lean_dec(v_n_3126_);
v___x_3238_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
return v___x_3238_;
}
}
else
{
lean_object* v_head_3239_; lean_object* v_head_3240_; lean_object* v_tail_3241_; uint8_t v___x_3242_; 
v_head_3239_ = lean_ctor_get(v_tail_3118_, 0);
v_head_3240_ = lean_ctor_get(v_tail_3232_, 0);
v_tail_3241_ = lean_ctor_get(v_tail_3232_, 1);
v___x_3242_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3239_);
if (v___x_3242_ == 0)
{
lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; 
lean_dec(v_head_3117_);
v___x_3243_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3244_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v_tail_3118_, v_n_3126_);
lean_dec(v_n_3126_);
v___x_3245_ = l_List_appendTR___redArg(v___x_3243_, v___x_3244_);
return v___x_3245_;
}
else
{
uint8_t v___x_3246_; 
lean_inc_ref(v_tail_3232_);
lean_inc(v_head_3239_);
lean_dec_ref_known(v_tail_3118_, 2);
v___x_3246_ = lp_lean_x2dftml_LeanFtml_isContByte(v_head_3240_);
if (v___x_3246_ == 0)
{
lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; 
lean_dec(v_head_3239_);
lean_dec(v_head_3117_);
v___x_3247_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_utf8Fffd));
v___x_3248_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v_tail_3232_, v_n_3126_);
lean_dec(v_n_3126_);
v___x_3249_ = l_List_appendTR___redArg(v___x_3247_, v___x_3248_);
return v___x_3249_;
}
else
{
uint8_t v___x_3250_; 
lean_inc(v_tail_3241_);
lean_inc(v_head_3240_);
lean_dec_ref_known(v_tail_3232_, 2);
v___x_3250_ = lean_nat_dec_eq(v_head_3117_, v___x_3227_);
if (v___x_3250_ == 0)
{
v___y_3171_ = v_tail_3241_;
v___y_3172_ = v_head_3239_;
v___y_3173_ = v_head_3240_;
goto v___jp_3170_;
}
else
{
if (v___y_3226_ == 0)
{
lean_object* v___x_3251_; uint8_t v___x_3252_; 
v___x_3251_ = lean_unsigned_to_nat(160u);
v___x_3252_ = lean_nat_dec_le(v___x_3251_, v_head_3239_);
if (v___x_3252_ == 0)
{
lean_dec(v_head_3240_);
lean_dec(v_head_3239_);
lean_dec(v_head_3117_);
v___y_3158_ = v_tail_3241_;
goto v___jp_3157_;
}
else
{
v___y_3171_ = v_tail_3241_;
v___y_3172_ = v_head_3239_;
v___y_3173_ = v_head_3240_;
goto v___jp_3170_;
}
}
else
{
v___y_3171_ = v_tail_3241_;
v___y_3172_ = v_head_3239_;
v___y_3173_ = v_head_3240_;
goto v___jp_3170_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go___boxed(lean_object* v_a_3279_, lean_object* v_a_3280_){
_start:
{
lean_object* v_res_3281_; 
v_res_3281_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v_a_3279_, v_a_3280_);
lean_dec(v_a_3280_);
return v_res_3281_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst(lean_object* v_bs_3282_){
_start:
{
lean_object* v___x_3283_; lean_object* v___x_3284_; 
v___x_3283_ = l_List_lengthTR___redArg(v_bs_3282_);
v___x_3284_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst_go(v_bs_3282_, v___x_3283_);
lean_dec(v___x_3283_);
return v___x_3284_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_xhtmlPreText(lean_object* v_cs_3285_){
_start:
{
lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; 
v___x_3286_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderOptValBytes___closed__0));
v___x_3287_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(v_cs_3285_, v___x_3286_);
v___x_3288_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_htmlSpecialCharsCompat_spec__0(v___x_3287_, v___x_3286_);
return v___x_3288_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_xhtmlPreText___boxed(lean_object* v_cs_3289_){
_start:
{
lean_object* v_res_3290_; 
v_res_3290_ = lp_lean_x2dftml_LeanFtml_xhtmlPreText(v_cs_3289_);
lean_dec(v_cs_3289_);
return v_res_3290_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_reconvertFffdBytes(lean_object* v_x_3292_){
_start:
{
lean_object* v_b_3294_; lean_object* v_rest_3295_; 
if (lean_obj_tag(v_x_3292_) == 0)
{
return v_x_3292_;
}
else
{
lean_object* v_head_3298_; lean_object* v_tail_3299_; lean_object* v___x_3300_; uint8_t v___x_3301_; 
v_head_3298_ = lean_ctor_get(v_x_3292_, 0);
lean_inc(v_head_3298_);
v_tail_3299_ = lean_ctor_get(v_x_3292_, 1);
lean_inc(v_tail_3299_);
lean_dec_ref_known(v_x_3292_, 2);
v___x_3300_ = lean_unsigned_to_nat(239u);
v___x_3301_ = lean_nat_dec_eq(v_head_3298_, v___x_3300_);
if (v___x_3301_ == 0)
{
v_b_3294_ = v_head_3298_;
v_rest_3295_ = v_tail_3299_;
goto v___jp_3293_;
}
else
{
lean_dec(v_head_3298_);
if (lean_obj_tag(v_tail_3299_) == 1)
{
lean_object* v_head_3302_; lean_object* v_tail_3303_; lean_object* v___x_3304_; uint8_t v___x_3305_; 
v_head_3302_ = lean_ctor_get(v_tail_3299_, 0);
v_tail_3303_ = lean_ctor_get(v_tail_3299_, 1);
lean_inc(v_tail_3303_);
v___x_3304_ = lean_unsigned_to_nat(191u);
v___x_3305_ = lean_nat_dec_eq(v_head_3302_, v___x_3304_);
if (v___x_3305_ == 0)
{
lean_dec(v_tail_3303_);
v_b_3294_ = v___x_3300_;
v_rest_3295_ = v_tail_3299_;
goto v___jp_3293_;
}
else
{
lean_object* v___x_3307_; uint8_t v_isShared_3308_; uint8_t v_isSharedCheck_3330_; 
v_isSharedCheck_3330_ = !lean_is_exclusive(v_tail_3299_);
if (v_isSharedCheck_3330_ == 0)
{
lean_object* v_unused_3331_; lean_object* v_unused_3332_; 
v_unused_3331_ = lean_ctor_get(v_tail_3299_, 1);
lean_dec(v_unused_3331_);
v_unused_3332_ = lean_ctor_get(v_tail_3299_, 0);
lean_dec(v_unused_3332_);
v___x_3307_ = v_tail_3299_;
v_isShared_3308_ = v_isSharedCheck_3330_;
goto v_resetjp_3306_;
}
else
{
lean_dec(v_tail_3299_);
v___x_3307_ = lean_box(0);
v_isShared_3308_ = v_isSharedCheck_3330_;
goto v_resetjp_3306_;
}
v_resetjp_3306_:
{
if (lean_obj_tag(v_tail_3303_) == 1)
{
lean_object* v_head_3309_; lean_object* v_tail_3310_; lean_object* v___x_3311_; uint8_t v___x_3312_; 
v_head_3309_ = lean_ctor_get(v_tail_3303_, 0);
v_tail_3310_ = lean_ctor_get(v_tail_3303_, 1);
v___x_3311_ = lean_unsigned_to_nat(189u);
v___x_3312_ = lean_nat_dec_eq(v_head_3309_, v___x_3311_);
if (v___x_3312_ == 0)
{
lean_object* v___x_3314_; 
if (v_isShared_3308_ == 0)
{
lean_ctor_set(v___x_3307_, 0, v___x_3304_);
v___x_3314_ = v___x_3307_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v___x_3304_);
lean_ctor_set(v_reuseFailAlloc_3315_, 1, v_tail_3303_);
v___x_3314_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
v_b_3294_ = v___x_3300_;
v_rest_3295_ = v___x_3314_;
goto v___jp_3293_;
}
}
else
{
lean_object* v___x_3317_; uint8_t v_isShared_3318_; uint8_t v_isSharedCheck_3324_; 
lean_inc(v_tail_3310_);
lean_del_object(v___x_3307_);
v_isSharedCheck_3324_ = !lean_is_exclusive(v_tail_3303_);
if (v_isSharedCheck_3324_ == 0)
{
lean_object* v_unused_3325_; lean_object* v_unused_3326_; 
v_unused_3325_ = lean_ctor_get(v_tail_3303_, 1);
lean_dec(v_unused_3325_);
v_unused_3326_ = lean_ctor_get(v_tail_3303_, 0);
lean_dec(v_unused_3326_);
v___x_3317_ = v_tail_3303_;
v_isShared_3318_ = v_isSharedCheck_3324_;
goto v_resetjp_3316_;
}
else
{
lean_dec(v_tail_3303_);
v___x_3317_ = lean_box(0);
v_isShared_3318_ = v_isSharedCheck_3324_;
goto v_resetjp_3316_;
}
v_resetjp_3316_:
{
lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3322_; 
v___x_3319_ = lean_unsigned_to_nat(255u);
v___x_3320_ = lp_lean_x2dftml_LeanFtml_reconvertFffdBytes(v_tail_3310_);
if (v_isShared_3318_ == 0)
{
lean_ctor_set(v___x_3317_, 1, v___x_3320_);
lean_ctor_set(v___x_3317_, 0, v___x_3319_);
v___x_3322_ = v___x_3317_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v___x_3319_);
lean_ctor_set(v_reuseFailAlloc_3323_, 1, v___x_3320_);
v___x_3322_ = v_reuseFailAlloc_3323_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
return v___x_3322_;
}
}
}
}
else
{
lean_object* v___x_3328_; 
if (v_isShared_3308_ == 0)
{
lean_ctor_set(v___x_3307_, 0, v___x_3304_);
v___x_3328_ = v___x_3307_;
goto v_reusejp_3327_;
}
else
{
lean_object* v_reuseFailAlloc_3329_; 
v_reuseFailAlloc_3329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3329_, 0, v___x_3304_);
lean_ctor_set(v_reuseFailAlloc_3329_, 1, v_tail_3303_);
v___x_3328_ = v_reuseFailAlloc_3329_;
goto v_reusejp_3327_;
}
v_reusejp_3327_:
{
v_b_3294_ = v___x_3300_;
v_rest_3295_ = v___x_3328_;
goto v___jp_3293_;
}
}
}
}
}
else
{
v_b_3294_ = v___x_3300_;
v_rest_3295_ = v_tail_3299_;
goto v___jp_3293_;
}
}
}
v___jp_3293_:
{
lean_object* v___x_3296_; lean_object* v___x_3297_; 
v___x_3296_ = lp_lean_x2dftml_LeanFtml_reconvertFffdBytes(v_rest_3295_);
v___x_3297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3297_, 0, v_b_3294_);
lean_ctor_set(v___x_3297_, 1, v___x_3296_);
return v___x_3297_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isUfffdChar(uint32_t v_c_3333_){
_start:
{
uint32_t v___x_3334_; uint8_t v___x_3335_; 
v___x_3334_ = 65533;
v___x_3335_ = lean_uint32_dec_eq(v_c_3333_, v___x_3334_);
return v___x_3335_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isUfffdChar___boxed(lean_object* v_c_3336_){
_start:
{
uint32_t v_c_boxed_3337_; uint8_t v_res_3338_; lean_object* v_r_3339_; 
v_c_boxed_3337_ = lean_unbox_uint32(v_c_3336_);
lean_dec(v_c_3336_);
v_res_3338_ = lp_lean_x2dftml_LeanFtml_isUfffdChar(v_c_boxed_3337_);
v_r_3339_ = lean_box(v_res_3338_);
return v_r_3339_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripHtmlTags_go(lean_object* v_a_3353_, uint8_t v_a_3354_, lean_object* v_a_3355_, lean_object* v_a_3356_){
_start:
{
if (lean_obj_tag(v_a_3353_) == 0)
{
lean_object* v___x_3357_; 
lean_dec(v_a_3355_);
v___x_3357_ = l_List_reverse___redArg(v_a_3356_);
return v___x_3357_;
}
else
{
if (v_a_3354_ == 0)
{
lean_object* v_head_3358_; lean_object* v_tail_3359_; lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3372_; 
lean_dec(v_a_3355_);
v_head_3358_ = lean_ctor_get(v_a_3353_, 0);
v_tail_3359_ = lean_ctor_get(v_a_3353_, 1);
v_isSharedCheck_3372_ = !lean_is_exclusive(v_a_3353_);
if (v_isSharedCheck_3372_ == 0)
{
v___x_3361_ = v_a_3353_;
v_isShared_3362_ = v_isSharedCheck_3372_;
goto v_resetjp_3360_;
}
else
{
lean_inc(v_tail_3359_);
lean_inc(v_head_3358_);
lean_dec(v_a_3353_);
v___x_3361_ = lean_box(0);
v_isShared_3362_ = v_isSharedCheck_3372_;
goto v_resetjp_3360_;
}
v_resetjp_3360_:
{
lean_object* v___x_3363_; uint8_t v___x_3364_; 
v___x_3363_ = lean_unsigned_to_nat(60u);
v___x_3364_ = lean_nat_dec_eq(v_head_3358_, v___x_3363_);
if (v___x_3364_ == 0)
{
lean_object* v___x_3365_; lean_object* v___x_3367_; 
v___x_3365_ = lean_unsigned_to_nat(0u);
if (v_isShared_3362_ == 0)
{
lean_ctor_set(v___x_3361_, 1, v_a_3356_);
v___x_3367_ = v___x_3361_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3369_; 
v_reuseFailAlloc_3369_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3369_, 0, v_head_3358_);
lean_ctor_set(v_reuseFailAlloc_3369_, 1, v_a_3356_);
v___x_3367_ = v_reuseFailAlloc_3369_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
v_a_3353_ = v_tail_3359_;
v_a_3354_ = v___x_3364_;
v_a_3355_ = v___x_3365_;
v_a_3356_ = v___x_3367_;
goto _start;
}
}
else
{
lean_object* v___x_3370_; 
lean_del_object(v___x_3361_);
lean_dec(v_head_3358_);
v___x_3370_ = lean_unsigned_to_nat(0u);
v_a_3353_ = v_tail_3359_;
v_a_3354_ = v___x_3364_;
v_a_3355_ = v___x_3370_;
goto _start;
}
}
}
else
{
lean_object* v_head_3373_; lean_object* v_tail_3374_; lean_object* v___x_3375_; uint8_t v___x_3376_; 
v_head_3373_ = lean_ctor_get(v_a_3353_, 0);
lean_inc(v_head_3373_);
v_tail_3374_ = lean_ctor_get(v_a_3353_, 1);
lean_inc(v_tail_3374_);
lean_dec_ref_known(v_a_3353_, 2);
v___x_3375_ = lean_unsigned_to_nat(0u);
v___x_3376_ = lean_nat_dec_eq(v_a_3355_, v___x_3375_);
if (v___x_3376_ == 0)
{
uint8_t v___x_3377_; 
v___x_3377_ = lean_nat_dec_eq(v_head_3373_, v_a_3355_);
lean_dec(v_head_3373_);
if (v___x_3377_ == 0)
{
v_a_3353_ = v_tail_3374_;
goto _start;
}
else
{
lean_dec(v_a_3355_);
v_a_3353_ = v_tail_3374_;
v_a_3355_ = v___x_3375_;
goto _start;
}
}
else
{
lean_object* v___x_3380_; uint8_t v___x_3381_; 
lean_dec(v_a_3355_);
v___x_3380_ = lean_unsigned_to_nat(34u);
v___x_3381_ = lean_nat_dec_eq(v_head_3373_, v___x_3380_);
if (v___x_3381_ == 0)
{
lean_object* v___x_3382_; uint8_t v___x_3383_; 
v___x_3382_ = lean_unsigned_to_nat(39u);
v___x_3383_ = lean_nat_dec_eq(v_head_3373_, v___x_3382_);
if (v___x_3383_ == 0)
{
lean_object* v___x_3384_; uint8_t v___x_3385_; 
v___x_3384_ = lean_unsigned_to_nat(62u);
v___x_3385_ = lean_nat_dec_eq(v_head_3373_, v___x_3384_);
lean_dec(v_head_3373_);
if (v___x_3385_ == 0)
{
v_a_3353_ = v_tail_3374_;
v_a_3355_ = v___x_3375_;
goto _start;
}
else
{
v_a_3353_ = v_tail_3374_;
v_a_3354_ = v___x_3383_;
v_a_3355_ = v___x_3375_;
goto _start;
}
}
else
{
v_a_3353_ = v_tail_3374_;
v_a_3355_ = v_head_3373_;
goto _start;
}
}
else
{
v_a_3353_ = v_tail_3374_;
v_a_3355_ = v_head_3373_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripHtmlTags_go___boxed(lean_object* v_a_3390_, lean_object* v_a_3391_, lean_object* v_a_3392_, lean_object* v_a_3393_){
_start:
{
uint8_t v_a_327__boxed_3394_; lean_object* v_res_3395_; 
v_a_327__boxed_3394_ = lean_unbox(v_a_3391_);
v_res_3395_ = lp_lean_x2dftml_LeanFtml_stripHtmlTags_go(v_a_3390_, v_a_327__boxed_3394_, v_a_3392_, v_a_3393_);
return v_res_3395_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripHtmlTags(lean_object* v_bs_3396_){
_start:
{
uint8_t v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; 
v___x_3397_ = 0;
v___x_3398_ = lean_unsigned_to_nat(0u);
v___x_3399_ = lean_box(0);
v___x_3400_ = lp_lean_x2dftml_LeanFtml_stripHtmlTags_go(v_bs_3396_, v___x_3397_, v___x_3398_, v___x_3399_);
return v___x_3400_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findTocDelim_go(lean_object* v_a_3401_, lean_object* v_a_3402_){
_start:
{
if (lean_obj_tag(v_a_3401_) == 0)
{
lean_object* v___x_3403_; 
lean_dec(v_a_3402_);
v___x_3403_ = lean_box(0);
return v___x_3403_;
}
else
{
lean_object* v_head_3404_; lean_object* v_tail_3405_; lean_object* v_idx_3411_; 
v_head_3404_ = lean_ctor_get(v_a_3401_, 0);
v_tail_3405_ = lean_ctor_get(v_a_3401_, 1);
if (lean_obj_tag(v_tail_3405_) == 1)
{
lean_object* v_tail_3415_; 
v_tail_3415_ = lean_ctor_get(v_tail_3405_, 1);
if (lean_obj_tag(v_tail_3415_) == 1)
{
lean_object* v_tail_3416_; 
v_tail_3416_ = lean_ctor_get(v_tail_3415_, 1);
if (lean_obj_tag(v_tail_3416_) == 1)
{
lean_object* v_head_3417_; lean_object* v_head_3418_; lean_object* v_head_3419_; lean_object* v___x_3420_; uint8_t v___x_3421_; 
v_head_3417_ = lean_ctor_get(v_tail_3405_, 0);
v_head_3418_ = lean_ctor_get(v_tail_3415_, 0);
v_head_3419_ = lean_ctor_get(v_tail_3416_, 0);
v___x_3420_ = lean_unsigned_to_nat(0u);
v___x_3421_ = lean_nat_dec_eq(v_head_3404_, v___x_3420_);
if (v___x_3421_ == 0)
{
goto v___jp_3406_;
}
else
{
uint8_t v___x_3422_; 
v___x_3422_ = lean_nat_dec_eq(v_head_3417_, v___x_3420_);
if (v___x_3422_ == 0)
{
goto v___jp_3406_;
}
else
{
uint8_t v___x_3423_; 
v___x_3423_ = lean_nat_dec_eq(v_head_3418_, v___x_3420_);
if (v___x_3423_ == 0)
{
goto v___jp_3406_;
}
else
{
uint8_t v___x_3424_; 
v___x_3424_ = lean_nat_dec_eq(v_head_3419_, v___x_3420_);
if (v___x_3424_ == 0)
{
goto v___jp_3406_;
}
else
{
lean_object* v___x_3425_; 
v___x_3425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3425_, 0, v_a_3402_);
return v___x_3425_;
}
}
}
}
}
else
{
v_idx_3411_ = v_a_3402_;
goto v___jp_3410_;
}
}
else
{
v_idx_3411_ = v_a_3402_;
goto v___jp_3410_;
}
}
else
{
v_idx_3411_ = v_a_3402_;
goto v___jp_3410_;
}
v___jp_3406_:
{
lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3407_ = lean_unsigned_to_nat(1u);
v___x_3408_ = lean_nat_add(v_a_3402_, v___x_3407_);
lean_dec(v_a_3402_);
v_a_3401_ = v_tail_3405_;
v_a_3402_ = v___x_3408_;
goto _start;
}
v___jp_3410_:
{
lean_object* v___x_3412_; lean_object* v___x_3413_; 
v___x_3412_ = lean_unsigned_to_nat(1u);
v___x_3413_ = lean_nat_add(v_idx_3411_, v___x_3412_);
lean_dec(v_idx_3411_);
v_a_3401_ = v_tail_3405_;
v_a_3402_ = v___x_3413_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findTocDelim_go___boxed(lean_object* v_a_3426_, lean_object* v_a_3427_){
_start:
{
lean_object* v_res_3428_; 
v_res_3428_ = lp_lean_x2dftml_LeanFtml_findTocDelim_go(v_a_3426_, v_a_3427_);
lean_dec(v_a_3426_);
return v_res_3428_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findTocDelim(lean_object* v_bs_3429_){
_start:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; 
v___x_3430_ = lean_unsigned_to_nat(0u);
v___x_3431_ = lp_lean_x2dftml_LeanFtml_findTocDelim_go(v_bs_3429_, v___x_3430_);
return v___x_3431_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findTocDelim___boxed(lean_object* v_bs_3432_){
_start:
{
lean_object* v_res_3433_; 
v_res_3433_ = lp_lean_x2dftml_LeanFtml_findTocDelim(v_bs_3432_);
lean_dec(v_bs_3432_);
return v_res_3433_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_postStripToc_go(lean_object* v_a_3434_, lean_object* v_a_3435_, lean_object* v_a_3436_){
_start:
{
if (lean_obj_tag(v_a_3434_) == 0)
{
lean_object* v___x_3437_; 
lean_dec(v_a_3435_);
v___x_3437_ = l_List_reverse___redArg(v_a_3436_);
return v___x_3437_;
}
else
{
lean_object* v_head_3438_; lean_object* v_tail_3439_; lean_object* v_zero_3440_; uint8_t v_isZero_3441_; 
v_head_3438_ = lean_ctor_get(v_a_3434_, 0);
v_tail_3439_ = lean_ctor_get(v_a_3434_, 1);
v_zero_3440_ = lean_unsigned_to_nat(0u);
v_isZero_3441_ = lean_nat_dec_eq(v_a_3435_, v_zero_3440_);
if (v_isZero_3441_ == 1)
{
lean_object* v___x_3442_; 
lean_dec_ref_known(v_a_3434_, 2);
lean_dec(v_a_3435_);
v___x_3442_ = l_List_reverse___redArg(v_a_3436_);
return v___x_3442_;
}
else
{
lean_object* v_one_3443_; lean_object* v_n_3444_; uint8_t v___x_3448_; 
v_one_3443_ = lean_unsigned_to_nat(1u);
v_n_3444_ = lean_nat_sub(v_a_3435_, v_one_3443_);
lean_dec(v_a_3435_);
v___x_3448_ = lean_nat_dec_eq(v_head_3438_, v_zero_3440_);
if (v___x_3448_ == 0)
{
lean_object* v___x_3450_; uint8_t v_isShared_3451_; uint8_t v_isSharedCheck_3456_; 
lean_inc(v_tail_3439_);
lean_inc(v_head_3438_);
v_isSharedCheck_3456_ = !lean_is_exclusive(v_a_3434_);
if (v_isSharedCheck_3456_ == 0)
{
lean_object* v_unused_3457_; lean_object* v_unused_3458_; 
v_unused_3457_ = lean_ctor_get(v_a_3434_, 1);
lean_dec(v_unused_3457_);
v_unused_3458_ = lean_ctor_get(v_a_3434_, 0);
lean_dec(v_unused_3458_);
v___x_3450_ = v_a_3434_;
v_isShared_3451_ = v_isSharedCheck_3456_;
goto v_resetjp_3449_;
}
else
{
lean_dec(v_a_3434_);
v___x_3450_ = lean_box(0);
v_isShared_3451_ = v_isSharedCheck_3456_;
goto v_resetjp_3449_;
}
v_resetjp_3449_:
{
lean_object* v___x_3453_; 
if (v_isShared_3451_ == 0)
{
lean_ctor_set(v___x_3450_, 1, v_a_3436_);
v___x_3453_ = v___x_3450_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_head_3438_);
lean_ctor_set(v_reuseFailAlloc_3455_, 1, v_a_3436_);
v___x_3453_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
v_a_3434_ = v_tail_3439_;
v_a_3435_ = v_n_3444_;
v_a_3436_ = v___x_3453_;
goto _start;
}
}
}
else
{
if (lean_obj_tag(v_tail_3439_) == 1)
{
lean_object* v_head_3459_; lean_object* v_tail_3460_; uint8_t v___x_3461_; 
v_head_3459_ = lean_ctor_get(v_tail_3439_, 0);
v_tail_3460_ = lean_ctor_get(v_tail_3439_, 1);
v___x_3461_ = lean_nat_dec_eq(v_head_3459_, v_zero_3440_);
if (v___x_3461_ == 0)
{
lean_inc_ref(v_tail_3439_);
lean_inc(v_head_3438_);
lean_dec_ref_known(v_a_3434_, 2);
goto v___jp_3445_;
}
else
{
if (lean_obj_tag(v_tail_3460_) == 1)
{
lean_object* v_head_3462_; lean_object* v_tail_3463_; uint8_t v___x_3464_; 
v_head_3462_ = lean_ctor_get(v_tail_3460_, 0);
v_tail_3463_ = lean_ctor_get(v_tail_3460_, 1);
v___x_3464_ = lean_nat_dec_eq(v_head_3462_, v_zero_3440_);
if (v___x_3464_ == 0)
{
lean_inc_ref(v_tail_3439_);
lean_inc(v_head_3438_);
lean_dec_ref_known(v_a_3434_, 2);
goto v___jp_3445_;
}
else
{
if (lean_obj_tag(v_tail_3463_) == 1)
{
lean_object* v_head_3465_; lean_object* v_tail_3466_; uint8_t v___x_3467_; 
v_head_3465_ = lean_ctor_get(v_tail_3463_, 0);
v_tail_3466_ = lean_ctor_get(v_tail_3463_, 1);
v___x_3467_ = lean_nat_dec_eq(v_head_3465_, v_zero_3440_);
if (v___x_3467_ == 0)
{
lean_inc_ref(v_tail_3439_);
lean_inc(v_head_3438_);
lean_dec_ref_known(v_a_3434_, 2);
goto v___jp_3445_;
}
else
{
lean_object* v___x_3468_; 
v___x_3468_ = lp_lean_x2dftml_LeanFtml_findTocDelim(v_tail_3466_);
if (lean_obj_tag(v___x_3468_) == 0)
{
lean_object* v___x_3469_; lean_object* v___x_3470_; 
lean_dec(v_n_3444_);
v___x_3469_ = l_List_reverse___redArg(v_a_3436_);
v___x_3470_ = l_List_appendTR___redArg(v___x_3469_, v_a_3434_);
return v___x_3470_;
}
else
{
lean_object* v_val_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; 
lean_inc_n(v_tail_3466_, 2);
lean_dec_ref_known(v_a_3434_, 2);
v_val_3471_ = lean_ctor_get(v___x_3468_, 0);
lean_inc(v_val_3471_);
lean_dec_ref_known(v___x_3468_, 1);
v___x_3472_ = lean_unsigned_to_nat(4u);
v___x_3473_ = lean_nat_add(v_val_3471_, v___x_3472_);
v___x_3474_ = l_List_drop___redArg(v___x_3473_, v_tail_3466_);
v___x_3475_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderOptValBytes___closed__0));
v___x_3476_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_3466_, v_tail_3466_, v_val_3471_, v___x_3475_);
lean_dec(v_tail_3466_);
v___x_3477_ = lp_lean_x2dftml_LeanFtml_stripHtmlTags(v___x_3476_);
v___x_3478_ = l_List_reverse___redArg(v___x_3477_);
v___x_3479_ = l_List_appendTR___redArg(v___x_3478_, v_a_3436_);
v_a_3434_ = v___x_3474_;
v_a_3435_ = v_n_3444_;
v_a_3436_ = v___x_3479_;
goto _start;
}
}
}
else
{
lean_inc_ref(v_tail_3439_);
lean_inc(v_head_3438_);
lean_dec_ref_known(v_a_3434_, 2);
goto v___jp_3445_;
}
}
}
else
{
lean_inc_ref(v_tail_3439_);
lean_inc(v_head_3438_);
lean_dec_ref_known(v_a_3434_, 2);
goto v___jp_3445_;
}
}
}
else
{
lean_inc(v_tail_3439_);
lean_inc(v_head_3438_);
lean_dec_ref_known(v_a_3434_, 2);
goto v___jp_3445_;
}
}
v___jp_3445_:
{
lean_object* v___x_3446_; 
v___x_3446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3446_, 0, v_head_3438_);
lean_ctor_set(v___x_3446_, 1, v_a_3436_);
v_a_3434_ = v_tail_3439_;
v_a_3435_ = v_n_3444_;
v_a_3436_ = v___x_3446_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_postStripToc(lean_object* v_bs_3481_){
_start:
{
lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; 
v___x_3482_ = l_List_lengthTR___redArg(v_bs_3481_);
v___x_3483_ = lean_unsigned_to_nat(1u);
v___x_3484_ = lean_nat_add(v___x_3482_, v___x_3483_);
lean_dec(v___x_3482_);
v___x_3485_ = lean_box(0);
v___x_3486_ = lp_lean_x2dftml_LeanFtml_postStripToc_go(v_bs_3481_, v___x_3484_, v___x_3485_);
return v___x_3486_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_RenderOutcome_isComplete(lean_object* v_o_3491_){
_start:
{
lean_object* v_unmirrored_3492_; lean_object* v_missingKeys_3493_; uint8_t v___x_3494_; 
v_unmirrored_3492_ = lean_ctor_get(v_o_3491_, 1);
v_missingKeys_3493_ = lean_ctor_get(v_o_3491_, 2);
v___x_3494_ = l_List_isEmpty___redArg(v_unmirrored_3492_);
if (v___x_3494_ == 0)
{
return v___x_3494_;
}
else
{
uint8_t v___x_3495_; 
v___x_3495_ = l_List_isEmpty___redArg(v_missingKeys_3493_);
return v___x_3495_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_RenderOutcome_isComplete___boxed(lean_object* v_o_3496_){
_start:
{
uint8_t v_res_3497_; lean_object* v_r_3498_; 
v_res_3497_ = lp_lean_x2dftml_LeanFtml_RenderOutcome_isComplete(v_o_3496_);
lean_dec_ref(v_o_3496_);
v_r_3498_ = lean_box(v_res_3497_);
return v_r_3498_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushUnique___redArg(lean_object* v_inst_3499_, lean_object* v_xs_3500_, lean_object* v_x_3501_){
_start:
{
lean_object* v___f_3502_; uint8_t v___x_3503_; 
v___f_3502_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3502_, 0, v_inst_3499_);
lean_inc(v_xs_3500_);
lean_inc(v_x_3501_);
v___x_3503_ = l_List_elem___redArg(v___f_3502_, v_x_3501_, v_xs_3500_);
if (v___x_3503_ == 0)
{
lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; 
v___x_3504_ = lean_box(0);
v___x_3505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3505_, 0, v_x_3501_);
lean_ctor_set(v___x_3505_, 1, v___x_3504_);
v___x_3506_ = l_List_appendTR___redArg(v_xs_3500_, v___x_3505_);
return v___x_3506_;
}
else
{
lean_dec(v_x_3501_);
return v_xs_3500_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pushUnique(lean_object* v_00_u03b1_3507_, lean_object* v_inst_3508_, lean_object* v_xs_3509_, lean_object* v_x_3510_){
_start:
{
lean_object* v___x_3511_; 
v___x_3511_ = lp_lean_x2dftml_LeanFtml_pushUnique___redArg(v_inst_3508_, v_xs_3509_, v_x_3510_);
return v___x_3511_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__1(void){
_start:
{
lean_object* v___x_3513_; lean_object* v___x_3514_; 
v___x_3513_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__0));
v___x_3514_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3513_);
return v___x_3514_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__3(void){
_start:
{
lean_object* v___x_3516_; lean_object* v___x_3517_; 
v___x_3516_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__2));
v___x_3517_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3516_);
return v___x_3517_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__5(void){
_start:
{
lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3519_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__4));
v___x_3520_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3519_);
return v___x_3520_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unmirroredFallback(lean_object* v_rule_3521_, lean_object* v_key_3522_){
_start:
{
lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; 
v___x_3523_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__1, &lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__1);
v___x_3524_ = l_String_toListImpl(v_rule_3521_);
v___x_3525_ = lean_box(0);
v___x_3526_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v___x_3524_, v___x_3525_);
v___x_3527_ = l_List_appendTR___redArg(v___x_3523_, v___x_3526_);
v___x_3528_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__3, &lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__3);
v___x_3529_ = l_List_appendTR___redArg(v___x_3527_, v___x_3528_);
v___x_3530_ = lp_lean_x2dftml_LeanFtml_natBytes(v_key_3522_);
v___x_3531_ = l_List_appendTR___redArg(v___x_3529_, v___x_3530_);
v___x_3532_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__5, &lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__5);
v___x_3533_ = l_List_appendTR___redArg(v___x_3531_, v___x_3532_);
return v___x_3533_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_missingKeyFallback___closed__1(void){
_start:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3535_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_missingKeyFallback___closed__0));
v___x_3536_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_3535_);
return v___x_3536_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_missingKeyFallback(lean_object* v_key_3537_){
_start:
{
lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; 
v___x_3538_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_missingKeyFallback___closed__1, &lp_lean_x2dftml_LeanFtml_missingKeyFallback___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_missingKeyFallback___closed__1);
v___x_3539_ = lp_lean_x2dftml_LeanFtml_natBytes(v_key_3537_);
v___x_3540_ = l_List_appendTR___redArg(v___x_3538_, v___x_3539_);
v___x_3541_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__5, &lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_unmirroredFallback___closed__5);
v___x_3542_ = l_List_appendTR___redArg(v___x_3540_, v___x_3541_);
return v___x_3542_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_segHasUfffd(lean_object* v_x_3543_){
_start:
{
if (lean_obj_tag(v_x_3543_) == 0)
{
lean_object* v_a_3544_; uint32_t v___x_3545_; uint8_t v___x_3546_; 
v_a_3544_ = lean_ctor_get(v_x_3543_, 0);
v___x_3545_ = 65533;
v___x_3546_ = l_List_elem___at___00System_Uri_UriEscape_uriEscapeAsciiChar_spec__0(v___x_3545_, v_a_3544_);
return v___x_3546_;
}
else
{
uint8_t v___x_3547_; 
v___x_3547_ = 0;
return v___x_3547_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_segHasUfffd___boxed(lean_object* v_x_3548_){
_start:
{
uint8_t v_res_3549_; lean_object* v_r_3550_; 
v_res_3549_ = lp_lean_x2dftml_LeanFtml_segHasUfffd(v_x_3548_);
lean_dec_ref(v_x_3548_);
v_r_3550_ = lean_box(v_res_3549_);
return v_r_3550_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorIdx___impl(lean_object* v_x_3551_){
_start:
{
lean_object* v___x_3552_; 
v___x_3552_ = lean_obj_tag_nat(v_x_3551_);
return v___x_3552_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorIdx___impl___boxed(lean_object* v_x_3553_){
_start:
{
lean_object* v_res_3554_; 
v_res_3554_ = lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorIdx___impl(v_x_3553_);
lean_dec(v_x_3553_);
return v_res_3554_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorElim___redArg(lean_object* v_t_3555_, lean_object* v_k_3556_){
_start:
{
switch(lean_obj_tag(v_t_3555_))
{
case 0:
{
lean_object* v_a_3557_; lean_object* v___x_3558_; 
v_a_3557_ = lean_ctor_get(v_t_3555_, 0);
lean_inc(v_a_3557_);
lean_dec_ref_known(v_t_3555_, 1);
v___x_3558_ = lean_apply_1(v_k_3556_, v_a_3557_);
return v___x_3558_;
}
case 1:
{
return v_k_3556_;
}
default: 
{
lean_object* v_a_3559_; lean_object* v_a_3560_; lean_object* v___x_3561_; 
v_a_3559_ = lean_ctor_get(v_t_3555_, 0);
lean_inc(v_a_3559_);
v_a_3560_ = lean_ctor_get(v_t_3555_, 1);
lean_inc(v_a_3560_);
lean_dec_ref_known(v_t_3555_, 2);
v___x_3561_ = lean_apply_2(v_k_3556_, v_a_3559_, v_a_3560_);
return v___x_3561_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorElim(lean_object* v_motive_3562_, lean_object* v_ctorIdx_3563_, lean_object* v_t_3564_, lean_object* v_h_3565_, lean_object* v_k_3566_){
_start:
{
lean_object* v___x_3567_; 
v___x_3567_ = lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorElim___redArg(v_t_3564_, v_k_3566_);
return v___x_3567_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorElim___boxed(lean_object* v_motive_3568_, lean_object* v_ctorIdx_3569_, lean_object* v_t_3570_, lean_object* v_h_3571_, lean_object* v_k_3572_){
_start:
{
lean_object* v_res_3573_; 
v_res_3573_ = lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorElim(v_motive_3568_, v_ctorIdx_3569_, v_t_3570_, v_h_3571_, v_k_3572_);
lean_dec(v_ctorIdx_3569_);
return v_res_3573_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_text_elim___redArg(lean_object* v_t_3574_, lean_object* v_text_3575_){
_start:
{
lean_object* v___x_3576_; 
v___x_3576_ = lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorElim___redArg(v_t_3574_, v_text_3575_);
return v___x_3576_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_text_elim(lean_object* v_motive_3577_, lean_object* v_t_3578_, lean_object* v_h_3579_, lean_object* v_text_3580_){
_start:
{
lean_object* v___x_3581_; 
v___x_3581_ = lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorElim___redArg(v_t_3578_, v_text_3580_);
return v___x_3581_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_fake_elim___redArg(lean_object* v_t_3582_, lean_object* v_fake_3583_){
_start:
{
lean_object* v___x_3584_; 
v___x_3584_ = lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorElim___redArg(v_t_3582_, v_fake_3583_);
return v___x_3584_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_fake_elim(lean_object* v_motive_3585_, lean_object* v_t_3586_, lean_object* v_h_3587_, lean_object* v_fake_3588_){
_start:
{
lean_object* v___x_3589_; 
v___x_3589_ = lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorElim___redArg(v_t_3586_, v_fake_3588_);
return v___x_3589_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_tok_elim___redArg(lean_object* v_t_3590_, lean_object* v_tok_3591_){
_start:
{
lean_object* v___x_3592_; 
v___x_3592_ = lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorElim___redArg(v_t_3590_, v_tok_3591_);
return v___x_3592_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_UfffdAtom_tok_elim(lean_object* v_motive_3593_, lean_object* v_t_3594_, lean_object* v_h_3595_, lean_object* v_tok_3596_){
_start:
{
lean_object* v___x_3597_; 
v___x_3597_ = lp_lean_x2dftml_LeanFtml_UfffdAtom_ctorElim___redArg(v_t_3594_, v_tok_3596_);
return v___x_3597_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__1(void){
_start:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; 
v___x_3599_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__0));
v___x_3600_ = l_String_toListImpl(v___x_3599_);
return v___x_3600_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdTokInfo(lean_object* v_x_3601_){
_start:
{
if (lean_obj_tag(v_x_3601_) == 0)
{
lean_object* v___x_3602_; 
v___x_3602_ = lean_box(0);
return v___x_3602_;
}
else
{
lean_object* v_val_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3633_; 
v_val_3603_ = lean_ctor_get(v_x_3601_, 0);
v_isSharedCheck_3633_ = !lean_is_exclusive(v_x_3601_);
if (v_isSharedCheck_3633_ == 0)
{
v___x_3605_ = v_x_3601_;
v_isShared_3606_ = v_isSharedCheck_3633_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_val_3603_);
lean_dec(v_x_3601_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3633_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v_rule_3607_; lean_object* v_opts_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3632_; 
v_rule_3607_ = lean_ctor_get(v_val_3603_, 0);
v_opts_3608_ = lean_ctor_get(v_val_3603_, 1);
v_isSharedCheck_3632_ = !lean_is_exclusive(v_val_3603_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3610_ = v_val_3603_;
v_isShared_3611_ = v_isSharedCheck_3632_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_opts_3608_);
lean_inc(v_rule_3607_);
lean_dec(v_val_3603_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3632_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
lean_object* v___x_3620_; lean_object* v___x_3621_; 
v___x_3620_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__1, &lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__1);
v___x_3621_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_3608_, v___x_3620_);
lean_dec(v_opts_3608_);
if (lean_obj_tag(v___x_3621_) == 1)
{
lean_object* v_val_3622_; lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3631_; 
v_val_3622_ = lean_ctor_get(v___x_3621_, 0);
v_isSharedCheck_3631_ = !lean_is_exclusive(v___x_3621_);
if (v_isSharedCheck_3631_ == 0)
{
v___x_3624_ = v___x_3621_;
v_isShared_3625_ = v_isSharedCheck_3631_;
goto v_resetjp_3623_;
}
else
{
lean_inc(v_val_3622_);
lean_dec(v___x_3621_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3631_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
if (lean_obj_tag(v_val_3622_) == 0)
{
lean_object* v_a_3626_; lean_object* v___x_3627_; lean_object* v___x_3629_; 
lean_del_object(v___x_3610_);
lean_del_object(v___x_3605_);
v_a_3626_ = lean_ctor_get(v_val_3622_, 0);
lean_inc(v_a_3626_);
lean_dec_ref_known(v_val_3622_, 1);
v___x_3627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3627_, 0, v_rule_3607_);
lean_ctor_set(v___x_3627_, 1, v_a_3626_);
if (v_isShared_3625_ == 0)
{
lean_ctor_set(v___x_3624_, 0, v___x_3627_);
v___x_3629_ = v___x_3624_;
goto v_reusejp_3628_;
}
else
{
lean_object* v_reuseFailAlloc_3630_; 
v_reuseFailAlloc_3630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3630_, 0, v___x_3627_);
v___x_3629_ = v_reuseFailAlloc_3630_;
goto v_reusejp_3628_;
}
v_reusejp_3628_:
{
return v___x_3629_;
}
}
else
{
lean_del_object(v___x_3624_);
lean_dec(v_val_3622_);
goto v___jp_3612_;
}
}
}
else
{
lean_dec(v___x_3621_);
goto v___jp_3612_;
}
v___jp_3612_:
{
lean_object* v___x_3613_; lean_object* v___x_3615_; 
v___x_3613_ = lean_box(0);
if (v_isShared_3611_ == 0)
{
lean_ctor_set(v___x_3610_, 1, v___x_3613_);
v___x_3615_ = v___x_3610_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v_rule_3607_);
lean_ctor_set(v_reuseFailAlloc_3619_, 1, v___x_3613_);
v___x_3615_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
lean_object* v___x_3617_; 
if (v_isShared_3606_ == 0)
{
lean_ctor_set(v___x_3605_, 0, v___x_3615_);
v___x_3617_ = v___x_3605_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3618_; 
v_reuseFailAlloc_3618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3618_, 0, v___x_3615_);
v___x_3617_ = v_reuseFailAlloc_3618_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
return v___x_3617_;
}
}
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__1(void){
_start:
{
lean_object* v___x_3635_; lean_object* v___x_3636_; 
v___x_3635_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__0));
v___x_3636_ = l_String_toListImpl(v___x_3635_);
return v___x_3636_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__3(void){
_start:
{
lean_object* v___x_3638_; lean_object* v___x_3639_; 
v___x_3638_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__2));
v___x_3639_ = l_String_toListImpl(v___x_3638_);
return v___x_3639_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__5(void){
_start:
{
lean_object* v___x_3641_; lean_object* v___x_3642_; 
v___x_3641_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__4));
v___x_3642_ = l_String_toListImpl(v___x_3641_);
return v___x_3642_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__7(void){
_start:
{
lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___x_3644_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__6));
v___x_3645_ = l_String_toListImpl(v___x_3644_);
return v___x_3645_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9(void){
_start:
{
lean_object* v___x_3647_; lean_object* v___x_3648_; 
v___x_3647_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__8));
v___x_3648_ = l_String_toListImpl(v___x_3647_);
return v___x_3648_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd(lean_object* v_info_3649_){
_start:
{
lean_object* v_fst_3650_; lean_object* v_snd_3651_; lean_object* v___x_3668_; uint8_t v___x_3669_; 
v_fst_3650_ = lean_ctor_get(v_info_3649_, 0);
v_snd_3651_ = lean_ctor_get(v_info_3649_, 1);
v___x_3668_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__6));
v___x_3669_ = lean_string_dec_eq(v_fst_3650_, v___x_3668_);
if (v___x_3669_ == 0)
{
goto v___jp_3663_;
}
else
{
lean_object* v___x_3670_; uint8_t v___x_3671_; 
v___x_3670_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9);
v___x_3671_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3651_, v___x_3670_);
if (v___x_3671_ == 0)
{
goto v___jp_3663_;
}
else
{
return v___x_3671_;
}
}
v___jp_3652_:
{
lean_object* v___x_3653_; uint8_t v___x_3654_; 
v___x_3653_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__37));
v___x_3654_ = lean_string_dec_eq(v_fst_3650_, v___x_3653_);
if (v___x_3654_ == 0)
{
return v___x_3654_;
}
else
{
lean_object* v___x_3655_; uint8_t v___x_3656_; 
v___x_3655_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__1, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__1);
v___x_3656_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3651_, v___x_3655_);
if (v___x_3656_ == 0)
{
lean_object* v___x_3657_; uint8_t v___x_3658_; 
v___x_3657_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__3, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__3);
v___x_3658_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3651_, v___x_3657_);
if (v___x_3658_ == 0)
{
lean_object* v___x_3659_; uint8_t v___x_3660_; 
v___x_3659_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__5, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__5);
v___x_3660_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3651_, v___x_3659_);
if (v___x_3660_ == 0)
{
lean_object* v___x_3661_; uint8_t v___x_3662_; 
v___x_3661_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__7, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__7);
v___x_3662_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3651_, v___x_3661_);
return v___x_3662_;
}
else
{
return v___x_3660_;
}
}
else
{
return v___x_3658_;
}
}
else
{
return v___x_3656_;
}
}
}
v___jp_3663_:
{
lean_object* v___x_3664_; uint8_t v___x_3665_; 
v___x_3664_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__35));
v___x_3665_ = lean_string_dec_eq(v_fst_3650_, v___x_3664_);
if (v___x_3665_ == 0)
{
goto v___jp_3652_;
}
else
{
lean_object* v___x_3666_; uint8_t v___x_3667_; 
v___x_3666_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9);
v___x_3667_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3651_, v___x_3666_);
if (v___x_3667_ == 0)
{
goto v___jp_3652_;
}
else
{
return v___x_3667_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___boxed(lean_object* v_info_3672_){
_start:
{
uint8_t v_res_3673_; lean_object* v_r_3674_; 
v_res_3673_ = lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd(v_info_3672_);
lean_dec_ref(v_info_3672_);
v_r_3674_ = lean_box(v_res_3673_);
return v_r_3674_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__1(void){
_start:
{
lean_object* v___x_3676_; lean_object* v___x_3677_; 
v___x_3676_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__0));
v___x_3677_ = l_String_toListImpl(v___x_3676_);
return v___x_3677_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__3(void){
_start:
{
lean_object* v___x_3679_; lean_object* v___x_3680_; 
v___x_3679_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__2));
v___x_3680_ = l_String_toListImpl(v___x_3679_);
return v___x_3680_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__5(void){
_start:
{
lean_object* v___x_3682_; lean_object* v___x_3683_; 
v___x_3682_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__4));
v___x_3683_ = l_String_toListImpl(v___x_3682_);
return v___x_3683_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__7(void){
_start:
{
lean_object* v___x_3685_; lean_object* v___x_3686_; 
v___x_3685_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__6));
v___x_3686_ = l_String_toListImpl(v___x_3685_);
return v___x_3686_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9(void){
_start:
{
lean_object* v___x_3688_; lean_object* v___x_3689_; 
v___x_3688_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__8));
v___x_3689_ = l_String_toListImpl(v___x_3688_);
return v___x_3689_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart(lean_object* v_info_3690_){
_start:
{
lean_object* v_fst_3691_; lean_object* v_snd_3692_; lean_object* v___x_3709_; uint8_t v___x_3710_; 
v_fst_3691_ = lean_ctor_get(v_info_3690_, 0);
v_snd_3692_ = lean_ctor_get(v_info_3690_, 1);
v___x_3709_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__6));
v___x_3710_ = lean_string_dec_eq(v_fst_3691_, v___x_3709_);
if (v___x_3710_ == 0)
{
goto v___jp_3704_;
}
else
{
lean_object* v___x_3711_; uint8_t v___x_3712_; 
v___x_3711_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9);
v___x_3712_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3692_, v___x_3711_);
if (v___x_3712_ == 0)
{
goto v___jp_3704_;
}
else
{
return v___x_3712_;
}
}
v___jp_3693_:
{
lean_object* v___x_3694_; uint8_t v___x_3695_; 
v___x_3694_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__37));
v___x_3695_ = lean_string_dec_eq(v_fst_3691_, v___x_3694_);
if (v___x_3695_ == 0)
{
return v___x_3695_;
}
else
{
lean_object* v___x_3696_; uint8_t v___x_3697_; 
v___x_3696_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__1, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__1);
v___x_3697_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3692_, v___x_3696_);
if (v___x_3697_ == 0)
{
lean_object* v___x_3698_; uint8_t v___x_3699_; 
v___x_3698_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__3, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__3);
v___x_3699_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3692_, v___x_3698_);
if (v___x_3699_ == 0)
{
lean_object* v___x_3700_; uint8_t v___x_3701_; 
v___x_3700_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__5, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__5);
v___x_3701_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3692_, v___x_3700_);
if (v___x_3701_ == 0)
{
lean_object* v___x_3702_; uint8_t v___x_3703_; 
v___x_3702_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__7, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__7);
v___x_3703_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3692_, v___x_3702_);
return v___x_3703_;
}
else
{
return v___x_3701_;
}
}
else
{
return v___x_3699_;
}
}
else
{
return v___x_3697_;
}
}
}
v___jp_3704_:
{
lean_object* v___x_3705_; uint8_t v___x_3706_; 
v___x_3705_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__35));
v___x_3706_ = lean_string_dec_eq(v_fst_3691_, v___x_3705_);
if (v___x_3706_ == 0)
{
goto v___jp_3693_;
}
else
{
lean_object* v___x_3707_; uint8_t v___x_3708_; 
v___x_3707_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9);
v___x_3708_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3692_, v___x_3707_);
if (v___x_3708_ == 0)
{
goto v___jp_3693_;
}
else
{
return v___x_3708_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___boxed(lean_object* v_info_3713_){
_start:
{
uint8_t v_res_3714_; lean_object* v_r_3715_; 
v_res_3714_ = lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart(v_info_3713_);
lean_dec_ref(v_info_3713_);
v_r_3715_ = lean_box(v_res_3714_);
return v_r_3715_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdIsInlineStart(lean_object* v_info_3716_){
_start:
{
lean_object* v_fst_3717_; lean_object* v_snd_3718_; lean_object* v___x_3719_; uint8_t v___x_3720_; 
v_fst_3717_ = lean_ctor_get(v_info_3716_, 0);
v_snd_3718_ = lean_ctor_get(v_info_3716_, 1);
v___x_3719_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9);
v___x_3720_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3718_, v___x_3719_);
if (v___x_3720_ == 0)
{
return v___x_3720_;
}
else
{
lean_object* v___x_3721_; uint8_t v___x_3722_; 
v___x_3721_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__23));
v___x_3722_ = lean_string_dec_eq(v_fst_3717_, v___x_3721_);
if (v___x_3722_ == 0)
{
lean_object* v___x_3723_; uint8_t v___x_3724_; 
v___x_3723_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__24));
v___x_3724_ = lean_string_dec_eq(v_fst_3717_, v___x_3723_);
if (v___x_3724_ == 0)
{
lean_object* v___x_3725_; uint8_t v___x_3726_; 
v___x_3725_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__25));
v___x_3726_ = lean_string_dec_eq(v_fst_3717_, v___x_3725_);
if (v___x_3726_ == 0)
{
lean_object* v___x_3727_; uint8_t v___x_3728_; 
v___x_3727_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__26));
v___x_3728_ = lean_string_dec_eq(v_fst_3717_, v___x_3727_);
if (v___x_3728_ == 0)
{
lean_object* v___x_3729_; uint8_t v___x_3730_; 
v___x_3729_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__27));
v___x_3730_ = lean_string_dec_eq(v_fst_3717_, v___x_3729_);
if (v___x_3730_ == 0)
{
lean_object* v___x_3731_; uint8_t v___x_3732_; 
v___x_3731_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__28));
v___x_3732_ = lean_string_dec_eq(v_fst_3717_, v___x_3731_);
if (v___x_3732_ == 0)
{
lean_object* v___x_3733_; uint8_t v___x_3734_; 
v___x_3733_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__29));
v___x_3734_ = lean_string_dec_eq(v_fst_3717_, v___x_3733_);
return v___x_3734_;
}
else
{
return v___x_3732_;
}
}
else
{
return v___x_3730_;
}
}
else
{
return v___x_3728_;
}
}
else
{
return v___x_3726_;
}
}
else
{
return v___x_3724_;
}
}
else
{
return v___x_3722_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsInlineStart___boxed(lean_object* v_info_3735_){
_start:
{
uint8_t v_res_3736_; lean_object* v_r_3737_; 
v_res_3736_ = lp_lean_x2dftml_LeanFtml_00ufffdIsInlineStart(v_info_3735_);
lean_dec_ref(v_info_3735_);
v_r_3737_ = lean_box(v_res_3736_);
return v_r_3737_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdIsParaStart(lean_object* v_info_3738_){
_start:
{
lean_object* v_fst_3739_; lean_object* v_snd_3740_; lean_object* v___x_3741_; uint8_t v___x_3742_; 
v_fst_3739_ = lean_ctor_get(v_info_3738_, 0);
v_snd_3740_ = lean_ctor_get(v_info_3738_, 1);
v___x_3741_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__6));
v___x_3742_ = lean_string_dec_eq(v_fst_3739_, v___x_3741_);
if (v___x_3742_ == 0)
{
return v___x_3742_;
}
else
{
lean_object* v___x_3743_; uint8_t v___x_3744_; 
v___x_3743_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9);
v___x_3744_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3740_, v___x_3743_);
return v___x_3744_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsParaStart___boxed(lean_object* v_info_3745_){
_start:
{
uint8_t v_res_3746_; lean_object* v_r_3747_; 
v_res_3746_ = lp_lean_x2dftml_LeanFtml_00ufffdIsParaStart(v_info_3745_);
lean_dec_ref(v_info_3745_);
v_r_3747_ = lean_box(v_res_3746_);
return v_r_3747_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdIsParaEnd(lean_object* v_info_3748_){
_start:
{
lean_object* v_fst_3749_; lean_object* v_snd_3750_; lean_object* v___x_3751_; uint8_t v___x_3752_; 
v_fst_3749_ = lean_ctor_get(v_info_3748_, 0);
v_snd_3750_ = lean_ctor_get(v_info_3748_, 1);
v___x_3751_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__6));
v___x_3752_ = lean_string_dec_eq(v_fst_3749_, v___x_3751_);
if (v___x_3752_ == 0)
{
return v___x_3752_;
}
else
{
lean_object* v___x_3753_; uint8_t v___x_3754_; 
v___x_3753_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9);
v___x_3754_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3750_, v___x_3753_);
return v___x_3754_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsParaEnd___boxed(lean_object* v_info_3755_){
_start:
{
uint8_t v_res_3756_; lean_object* v_r_3757_; 
v_res_3756_ = lp_lean_x2dftml_LeanFtml_00ufffdIsParaEnd(v_info_3755_);
lean_dec_ref(v_info_3755_);
v_r_3757_ = lean_box(v_res_3756_);
return v_r_3757_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdIsHeadingEnd(lean_object* v_info_3758_){
_start:
{
lean_object* v_fst_3759_; lean_object* v_snd_3760_; lean_object* v___x_3761_; uint8_t v___x_3762_; 
v_fst_3759_ = lean_ctor_get(v_info_3758_, 0);
v_snd_3760_ = lean_ctor_get(v_info_3758_, 1);
v___x_3761_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRuleName___closed__35));
v___x_3762_ = lean_string_dec_eq(v_fst_3759_, v___x_3761_);
if (v___x_3762_ == 0)
{
return v___x_3762_;
}
else
{
lean_object* v___x_3763_; uint8_t v___x_3764_; 
v___x_3763_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9);
v___x_3764_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_3760_, v___x_3763_);
return v___x_3764_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdIsHeadingEnd___boxed(lean_object* v_info_3765_){
_start:
{
uint8_t v_res_3766_; lean_object* v_r_3767_; 
v_res_3766_ = lp_lean_x2dftml_LeanFtml_00ufffdIsHeadingEnd(v_info_3765_);
lean_dec_ref(v_info_3765_);
v_r_3767_ = lean_box(v_res_3766_);
return v_r_3767_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeUfffd_go(lean_object* v_a_3768_, lean_object* v_a_3769_){
_start:
{
if (lean_obj_tag(v_a_3768_) == 0)
{
uint8_t v___x_3770_; 
v___x_3770_ = l_List_isEmpty___redArg(v_a_3769_);
if (v___x_3770_ == 0)
{
lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; 
v___x_3771_ = l_List_reverse___redArg(v_a_3769_);
v___x_3772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3772_, 0, v___x_3771_);
v___x_3773_ = lean_box(0);
v___x_3774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3774_, 0, v___x_3772_);
lean_ctor_set(v___x_3774_, 1, v___x_3773_);
return v___x_3774_;
}
else
{
lean_object* v___x_3775_; 
lean_dec(v_a_3769_);
v___x_3775_ = lean_box(0);
return v___x_3775_;
}
}
else
{
lean_object* v_head_3776_; lean_object* v_tail_3777_; lean_object* v___x_3779_; uint8_t v_isShared_3780_; uint8_t v_isSharedCheck_3800_; 
v_head_3776_ = lean_ctor_get(v_a_3768_, 0);
v_tail_3777_ = lean_ctor_get(v_a_3768_, 1);
v_isSharedCheck_3800_ = !lean_is_exclusive(v_a_3768_);
if (v_isSharedCheck_3800_ == 0)
{
v___x_3779_ = v_a_3768_;
v_isShared_3780_ = v_isSharedCheck_3800_;
goto v_resetjp_3778_;
}
else
{
lean_inc(v_tail_3777_);
lean_inc(v_head_3776_);
lean_dec(v_a_3768_);
v___x_3779_ = lean_box(0);
v_isShared_3780_ = v_isSharedCheck_3800_;
goto v_resetjp_3778_;
}
v_resetjp_3778_:
{
lean_object* v___y_3782_; uint32_t v___x_3790_; uint8_t v___x_3791_; 
v___x_3790_ = lean_unbox_uint32(v_head_3776_);
v___x_3791_ = lp_lean_x2dftml_LeanFtml_isUfffdChar(v___x_3790_);
if (v___x_3791_ == 0)
{
lean_object* v___x_3792_; 
lean_del_object(v___x_3779_);
v___x_3792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3792_, 0, v_head_3776_);
lean_ctor_set(v___x_3792_, 1, v_a_3769_);
v_a_3768_ = v_tail_3777_;
v_a_3769_ = v___x_3792_;
goto _start;
}
else
{
uint8_t v___x_3794_; 
lean_dec(v_head_3776_);
v___x_3794_ = l_List_isEmpty___redArg(v_a_3769_);
if (v___x_3794_ == 0)
{
lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; 
v___x_3795_ = l_List_reverse___redArg(v_a_3769_);
v___x_3796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3796_, 0, v___x_3795_);
v___x_3797_ = lean_box(0);
v___x_3798_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3798_, 0, v___x_3796_);
lean_ctor_set(v___x_3798_, 1, v___x_3797_);
v___y_3782_ = v___x_3798_;
goto v___jp_3781_;
}
else
{
lean_object* v___x_3799_; 
lean_dec(v_a_3769_);
v___x_3799_ = lean_box(0);
v___y_3782_ = v___x_3799_;
goto v___jp_3781_;
}
}
v___jp_3781_:
{
lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3787_; 
v___x_3783_ = lean_box(1);
v___x_3784_ = lean_box(0);
v___x_3785_ = lp_lean_x2dftml_LeanFtml_explodeUfffd_go(v_tail_3777_, v___x_3784_);
if (v_isShared_3780_ == 0)
{
lean_ctor_set(v___x_3779_, 1, v___x_3785_);
lean_ctor_set(v___x_3779_, 0, v___x_3783_);
v___x_3787_ = v___x_3779_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3789_; 
v_reuseFailAlloc_3789_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3789_, 0, v___x_3783_);
lean_ctor_set(v_reuseFailAlloc_3789_, 1, v___x_3785_);
v___x_3787_ = v_reuseFailAlloc_3789_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
lean_object* v___x_3788_; 
v___x_3788_ = l_List_appendTR___redArg(v___y_3782_, v___x_3787_);
return v___x_3788_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_explodeUfffd(lean_object* v_cs_3801_){
_start:
{
lean_object* v___x_3802_; lean_object* v___x_3803_; 
v___x_3802_ = lean_box(0);
v___x_3803_ = lp_lean_x2dftml_LeanFtml_explodeUfffd_go(v_cs_3801_, v___x_3802_);
return v___x_3803_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_flattenUfffd(lean_object* v_lookup_3804_, lean_object* v_x_3805_){
_start:
{
if (lean_obj_tag(v_x_3805_) == 0)
{
lean_object* v___x_3806_; 
lean_dec_ref(v_lookup_3804_);
v___x_3806_ = lean_box(0);
return v___x_3806_;
}
else
{
lean_object* v_head_3807_; 
v_head_3807_ = lean_ctor_get(v_x_3805_, 0);
lean_inc(v_head_3807_);
if (lean_obj_tag(v_head_3807_) == 0)
{
lean_object* v_tail_3808_; lean_object* v_a_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; 
v_tail_3808_ = lean_ctor_get(v_x_3805_, 1);
lean_inc(v_tail_3808_);
lean_dec_ref_known(v_x_3805_, 2);
v_a_3809_ = lean_ctor_get(v_head_3807_, 0);
lean_inc(v_a_3809_);
lean_dec_ref_known(v_head_3807_, 1);
v___x_3810_ = lp_lean_x2dftml_LeanFtml_explodeUfffd(v_a_3809_);
v___x_3811_ = lp_lean_x2dftml_LeanFtml_flattenUfffd(v_lookup_3804_, v_tail_3808_);
v___x_3812_ = l_List_appendTR___redArg(v___x_3810_, v___x_3811_);
return v___x_3812_;
}
else
{
lean_object* v_tail_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3824_; 
v_tail_3813_ = lean_ctor_get(v_x_3805_, 1);
v_isSharedCheck_3824_ = !lean_is_exclusive(v_x_3805_);
if (v_isSharedCheck_3824_ == 0)
{
lean_object* v_unused_3825_; 
v_unused_3825_ = lean_ctor_get(v_x_3805_, 0);
lean_dec(v_unused_3825_);
v___x_3815_ = v_x_3805_;
v_isShared_3816_ = v_isSharedCheck_3824_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_tail_3813_);
lean_dec(v_x_3805_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3824_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v_a_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3822_; 
v_a_3817_ = lean_ctor_get(v_head_3807_, 0);
lean_inc_n(v_a_3817_, 2);
lean_dec_ref_known(v_head_3807_, 1);
lean_inc_ref(v_lookup_3804_);
v___x_3818_ = lean_apply_1(v_lookup_3804_, v_a_3817_);
v___x_3819_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3819_, 0, v_a_3817_);
lean_ctor_set(v___x_3819_, 1, v___x_3818_);
v___x_3820_ = lp_lean_x2dftml_LeanFtml_flattenUfffd(v_lookup_3804_, v_tail_3813_);
if (v_isShared_3816_ == 0)
{
lean_ctor_set(v___x_3815_, 1, v___x_3820_);
lean_ctor_set(v___x_3815_, 0, v___x_3819_);
v___x_3822_ = v___x_3815_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v___x_3819_);
lean_ctor_set(v_reuseFailAlloc_3823_, 1, v___x_3820_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdAllFake(lean_object* v_x_3826_){
_start:
{
if (lean_obj_tag(v_x_3826_) == 0)
{
uint8_t v___x_3827_; 
v___x_3827_ = 1;
return v___x_3827_;
}
else
{
lean_object* v_head_3828_; 
v_head_3828_ = lean_ctor_get(v_x_3826_, 0);
if (lean_obj_tag(v_head_3828_) == 1)
{
lean_object* v_tail_3829_; 
v_tail_3829_ = lean_ctor_get(v_x_3826_, 1);
v_x_3826_ = v_tail_3829_;
goto _start;
}
else
{
uint8_t v___x_3831_; 
v___x_3831_ = 0;
return v___x_3831_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdAllFake___boxed(lean_object* v_x_3832_){
_start:
{
uint8_t v_res_3833_; lean_object* v_r_3834_; 
v_res_3833_ = lp_lean_x2dftml_LeanFtml_00ufffdAllFake(v_x_3832_);
lean_dec(v_x_3832_);
v_r_3834_ = lean_box(v_res_3833_);
return v_r_3834_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdAtLeast2(lean_object* v_x_3835_){
_start:
{
if (lean_obj_tag(v_x_3835_) == 1)
{
lean_object* v_tail_3836_; 
v_tail_3836_ = lean_ctor_get(v_x_3835_, 1);
if (lean_obj_tag(v_tail_3836_) == 1)
{
uint8_t v___x_3837_; 
v___x_3837_ = 1;
return v___x_3837_;
}
else
{
uint8_t v___x_3838_; 
v___x_3838_ = 0;
return v___x_3838_;
}
}
else
{
uint8_t v___x_3839_; 
v___x_3839_ = 0;
return v___x_3839_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdAtLeast2___boxed(lean_object* v_x_3840_){
_start:
{
uint8_t v_res_3841_; lean_object* v_r_3842_; 
v_res_3841_ = lp_lean_x2dftml_LeanFtml_00ufffdAtLeast2(v_x_3840_);
lean_dec(v_x_3840_);
v_r_3842_ = lean_box(v_res_3841_);
return v_r_3842_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_00ufffdOnlyFakesPara(lean_object* v_atoms_3843_){
_start:
{
if (lean_obj_tag(v_atoms_3843_) == 1)
{
lean_object* v_head_3844_; 
v_head_3844_ = lean_ctor_get(v_atoms_3843_, 0);
lean_inc(v_head_3844_);
if (lean_obj_tag(v_head_3844_) == 2)
{
lean_object* v_tail_3845_; lean_object* v_a_3846_; lean_object* v___x_3847_; 
v_tail_3845_ = lean_ctor_get(v_atoms_3843_, 1);
lean_inc(v_tail_3845_);
lean_dec_ref_known(v_atoms_3843_, 2);
v_a_3846_ = lean_ctor_get(v_head_3844_, 1);
lean_inc(v_a_3846_);
lean_dec_ref_known(v_head_3844_, 2);
v___x_3847_ = l_List_reverse___redArg(v_tail_3845_);
if (lean_obj_tag(v___x_3847_) == 1)
{
lean_object* v_head_3848_; 
v_head_3848_ = lean_ctor_get(v___x_3847_, 0);
lean_inc(v_head_3848_);
if (lean_obj_tag(v_head_3848_) == 2)
{
lean_object* v_tail_3849_; lean_object* v_a_3850_; lean_object* v___x_3851_; 
v_tail_3849_ = lean_ctor_get(v___x_3847_, 1);
lean_inc(v_tail_3849_);
lean_dec_ref_known(v___x_3847_, 2);
v_a_3850_ = lean_ctor_get(v_head_3848_, 1);
lean_inc(v_a_3850_);
lean_dec_ref_known(v_head_3848_, 2);
v___x_3851_ = lp_lean_x2dftml_LeanFtml_00ufffdTokInfo(v_a_3846_);
if (lean_obj_tag(v___x_3851_) == 1)
{
lean_object* v_val_3852_; lean_object* v___x_3853_; 
v_val_3852_ = lean_ctor_get(v___x_3851_, 0);
lean_inc(v_val_3852_);
lean_dec_ref_known(v___x_3851_, 1);
v___x_3853_ = lp_lean_x2dftml_LeanFtml_00ufffdTokInfo(v_a_3850_);
if (lean_obj_tag(v___x_3853_) == 1)
{
lean_object* v_val_3854_; uint8_t v___x_3855_; 
v_val_3854_ = lean_ctor_get(v___x_3853_, 0);
lean_inc(v_val_3854_);
lean_dec_ref_known(v___x_3853_, 1);
v___x_3855_ = lp_lean_x2dftml_LeanFtml_00ufffdIsParaStart(v_val_3852_);
lean_dec(v_val_3852_);
if (v___x_3855_ == 0)
{
lean_dec(v_val_3854_);
lean_dec(v_tail_3849_);
return v___x_3855_;
}
else
{
uint8_t v___x_3856_; 
v___x_3856_ = lp_lean_x2dftml_LeanFtml_00ufffdIsParaEnd(v_val_3854_);
lean_dec(v_val_3854_);
if (v___x_3856_ == 0)
{
lean_dec(v_tail_3849_);
return v___x_3856_;
}
else
{
uint8_t v___x_3857_; 
v___x_3857_ = lp_lean_x2dftml_LeanFtml_00ufffdAllFake(v_tail_3849_);
if (v___x_3857_ == 0)
{
lean_dec(v_tail_3849_);
return v___x_3857_;
}
else
{
uint8_t v___x_3858_; 
v___x_3858_ = lp_lean_x2dftml_LeanFtml_00ufffdAtLeast2(v_tail_3849_);
lean_dec(v_tail_3849_);
return v___x_3858_;
}
}
}
}
else
{
uint8_t v___x_3859_; 
lean_dec(v___x_3853_);
lean_dec(v_val_3852_);
lean_dec(v_tail_3849_);
v___x_3859_ = 0;
return v___x_3859_;
}
}
else
{
uint8_t v___x_3860_; 
lean_dec(v___x_3851_);
lean_dec(v_a_3850_);
lean_dec(v_tail_3849_);
v___x_3860_ = 0;
return v___x_3860_;
}
}
else
{
uint8_t v___x_3861_; 
lean_dec_ref_known(v___x_3847_, 2);
lean_dec(v_head_3848_);
lean_dec(v_a_3846_);
v___x_3861_ = 0;
return v___x_3861_;
}
}
else
{
uint8_t v___x_3862_; 
lean_dec(v___x_3847_);
lean_dec(v_a_3846_);
v___x_3862_ = 0;
return v___x_3862_;
}
}
else
{
uint8_t v___x_3863_; 
lean_dec_ref_known(v_atoms_3843_, 2);
lean_dec(v_head_3844_);
v___x_3863_ = 0;
return v___x_3863_;
}
}
else
{
uint8_t v___x_3864_; 
lean_dec(v_atoms_3843_);
v___x_3864_ = 0;
return v___x_3864_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdOnlyFakesPara___boxed(lean_object* v_atoms_3865_){
_start:
{
uint8_t v_res_3866_; lean_object* v_r_3867_; 
v_res_3866_ = lp_lean_x2dftml_LeanFtml_00ufffdOnlyFakesPara(v_atoms_3865_);
v_r_3867_ = lean_box(v_res_3866_);
return v_r_3867_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs_go___boxed__const__1(void){
_start:
{
uint32_t v___x_3868_; lean_object* v___x_3869_; 
v___x_3868_ = 32;
v___x_3869_ = lean_box_uint32(v___x_3868_);
return v___x_3869_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs_go(uint8_t v_prev_3870_, lean_object* v_a_3871_){
_start:
{
if (lean_obj_tag(v_a_3871_) == 0)
{
return v_a_3871_;
}
else
{
lean_object* v_head_3872_; lean_object* v_tail_3873_; lean_object* v___x_3875_; uint8_t v_isShared_3876_; uint8_t v_isSharedCheck_3893_; 
v_head_3872_ = lean_ctor_get(v_a_3871_, 0);
v_tail_3873_ = lean_ctor_get(v_a_3871_, 1);
v_isSharedCheck_3893_ = !lean_is_exclusive(v_a_3871_);
if (v_isSharedCheck_3893_ == 0)
{
v___x_3875_ = v_a_3871_;
v_isShared_3876_ = v_isSharedCheck_3893_;
goto v_resetjp_3874_;
}
else
{
lean_inc(v_tail_3873_);
lean_inc(v_head_3872_);
lean_dec(v_a_3871_);
v___x_3875_ = lean_box(0);
v_isShared_3876_ = v_isSharedCheck_3893_;
goto v_resetjp_3874_;
}
v_resetjp_3874_:
{
uint32_t v___x_3877_; uint32_t v___x_3886_; uint8_t v___x_3887_; 
v___x_3877_ = 32;
v___x_3886_ = lean_unbox_uint32(v_head_3872_);
v___x_3887_ = lean_uint32_dec_eq(v___x_3886_, v___x_3877_);
if (v___x_3887_ == 0)
{
uint32_t v___x_3888_; uint32_t v___x_3889_; uint8_t v___x_3890_; 
v___x_3888_ = 9;
v___x_3889_ = lean_unbox_uint32(v_head_3872_);
v___x_3890_ = lean_uint32_dec_eq(v___x_3889_, v___x_3888_);
if (v___x_3890_ == 0)
{
lean_object* v___x_3891_; lean_object* v___x_3892_; 
lean_del_object(v___x_3875_);
v___x_3891_ = lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs_go(v___x_3890_, v_tail_3873_);
v___x_3892_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3892_, 0, v_head_3872_);
lean_ctor_set(v___x_3892_, 1, v___x_3891_);
return v___x_3892_;
}
else
{
lean_dec(v_head_3872_);
goto v___jp_3878_;
}
}
else
{
lean_dec(v_head_3872_);
goto v___jp_3878_;
}
v___jp_3878_:
{
uint8_t v___x_3879_; 
v___x_3879_ = 1;
if (v_prev_3870_ == 0)
{
lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3883_; 
v___x_3880_ = lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs_go(v___x_3879_, v_tail_3873_);
v___x_3881_ = lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs_go___boxed__const__1;
if (v_isShared_3876_ == 0)
{
lean_ctor_set(v___x_3875_, 1, v___x_3880_);
lean_ctor_set(v___x_3875_, 0, v___x_3881_);
v___x_3883_ = v___x_3875_;
goto v_reusejp_3882_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v___x_3881_);
lean_ctor_set(v_reuseFailAlloc_3884_, 1, v___x_3880_);
v___x_3883_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3882_;
}
v_reusejp_3882_:
{
return v___x_3883_;
}
}
else
{
lean_del_object(v___x_3875_);
v_prev_3870_ = v___x_3879_;
v_a_3871_ = v_tail_3873_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs_go___boxed(lean_object* v_prev_3894_, lean_object* v_a_3895_){
_start:
{
uint8_t v_prev_boxed_3896_; lean_object* v_res_3897_; 
v_prev_boxed_3896_ = lean_unbox(v_prev_3894_);
v_res_3897_ = lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs_go(v_prev_boxed_3896_, v_a_3895_);
return v_res_3897_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs(lean_object* v_cs_3898_){
_start:
{
uint8_t v___x_3899_; lean_object* v___x_3900_; 
v___x_3899_ = 0;
v___x_3900_ = lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs_go(v___x_3899_, v_cs_3898_);
return v___x_3900_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lstripWs(lean_object* v_x_3901_){
_start:
{
if (lean_obj_tag(v_x_3901_) == 1)
{
lean_object* v_head_3902_; lean_object* v_tail_3903_; uint32_t v___x_3904_; uint32_t v___x_3905_; uint8_t v___x_3906_; 
v_head_3902_ = lean_ctor_get(v_x_3901_, 0);
v_tail_3903_ = lean_ctor_get(v_x_3901_, 1);
v___x_3904_ = 32;
v___x_3905_ = lean_unbox_uint32(v_head_3902_);
v___x_3906_ = lean_uint32_dec_eq(v___x_3905_, v___x_3904_);
if (v___x_3906_ == 0)
{
uint32_t v___x_3907_; uint32_t v___x_3908_; uint8_t v___x_3909_; 
v___x_3907_ = 9;
v___x_3908_ = lean_unbox_uint32(v_head_3902_);
v___x_3909_ = lean_uint32_dec_eq(v___x_3908_, v___x_3907_);
if (v___x_3909_ == 0)
{
lean_inc_ref(v_x_3901_);
return v_x_3901_;
}
else
{
v_x_3901_ = v_tail_3903_;
goto _start;
}
}
else
{
v_x_3901_ = v_tail_3903_;
goto _start;
}
}
else
{
lean_inc(v_x_3901_);
return v_x_3901_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lstripWs___boxed(lean_object* v_x_3912_){
_start:
{
lean_object* v_res_3913_; 
v_res_3913_ = lp_lean_x2dftml_LeanFtml_lstripWs(v_x_3912_);
lean_dec(v_x_3912_);
return v_res_3913_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_skipFakes(lean_object* v_x_3914_){
_start:
{
if (lean_obj_tag(v_x_3914_) == 1)
{
lean_object* v_head_3915_; 
v_head_3915_ = lean_ctor_get(v_x_3914_, 0);
if (lean_obj_tag(v_head_3915_) == 1)
{
lean_object* v_tail_3916_; 
v_tail_3916_ = lean_ctor_get(v_x_3914_, 1);
v_x_3914_ = v_tail_3916_;
goto _start;
}
else
{
lean_inc_ref(v_x_3914_);
return v_x_3914_;
}
}
else
{
lean_inc(v_x_3914_);
return v_x_3914_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_skipFakes___boxed(lean_object* v_x_3918_){
_start:
{
lean_object* v_res_3919_; 
v_res_3919_ = lp_lean_x2dftml_LeanFtml_skipFakes(v_x_3918_);
lean_dec(v_x_3918_);
return v_res_3919_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_boundaryFake(lean_object* v_atoms_3920_){
_start:
{
lean_object* v___x_3921_; 
v___x_3921_ = lp_lean_x2dftml_LeanFtml_skipFakes(v_atoms_3920_);
if (lean_obj_tag(v___x_3921_) == 1)
{
lean_object* v_head_3922_; 
v_head_3922_ = lean_ctor_get(v___x_3921_, 0);
lean_inc(v_head_3922_);
lean_dec_ref_known(v___x_3921_, 2);
if (lean_obj_tag(v_head_3922_) == 2)
{
lean_object* v_a_3923_; lean_object* v___x_3924_; 
v_a_3923_ = lean_ctor_get(v_head_3922_, 1);
lean_inc(v_a_3923_);
lean_dec_ref_known(v_head_3922_, 2);
v___x_3924_ = lp_lean_x2dftml_LeanFtml_00ufffdTokInfo(v_a_3923_);
if (lean_obj_tag(v___x_3924_) == 0)
{
uint8_t v___x_3925_; 
v___x_3925_ = 0;
return v___x_3925_;
}
else
{
lean_object* v_val_3926_; uint8_t v___x_3927_; 
v_val_3926_ = lean_ctor_get(v___x_3924_, 0);
lean_inc(v_val_3926_);
lean_dec_ref_known(v___x_3924_, 1);
v___x_3927_ = lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd(v_val_3926_);
if (v___x_3927_ == 0)
{
uint8_t v___x_3928_; 
v___x_3928_ = lp_lean_x2dftml_LeanFtml_00ufffdIsInlineStart(v_val_3926_);
lean_dec(v_val_3926_);
return v___x_3928_;
}
else
{
lean_dec(v_val_3926_);
return v___x_3927_;
}
}
}
else
{
uint8_t v___x_3929_; 
lean_dec(v_head_3922_);
v___x_3929_ = 0;
return v___x_3929_;
}
}
else
{
uint8_t v___x_3930_; 
lean_dec(v___x_3921_);
v___x_3930_ = 0;
return v___x_3930_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_boundaryFake___boxed(lean_object* v_atoms_3931_){
_start:
{
uint8_t v_res_3932_; lean_object* v_r_3933_; 
v_res_3932_ = lp_lean_x2dftml_LeanFtml_boundaryFake(v_atoms_3931_);
lean_dec(v_atoms_3931_);
v_r_3933_ = lean_box(v_res_3932_);
return v_r_3933_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_gatherUfffd(lean_object* v_x_3934_){
_start:
{
if (lean_obj_tag(v_x_3934_) == 0)
{
lean_object* v___x_3935_; uint8_t v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; 
v___x_3935_ = lean_box(0);
v___x_3936_ = 0;
v___x_3937_ = lean_box(v___x_3936_);
v___x_3938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3937_);
lean_ctor_set(v___x_3938_, 1, v_x_3934_);
v___x_3939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3939_, 0, v___x_3935_);
lean_ctor_set(v___x_3939_, 1, v___x_3938_);
return v___x_3939_;
}
else
{
lean_object* v_head_3940_; 
v_head_3940_ = lean_ctor_get(v_x_3934_, 0);
lean_inc(v_head_3940_);
switch(lean_obj_tag(v_head_3940_))
{
case 0:
{
lean_object* v_tail_3941_; lean_object* v_a_3942_; lean_object* v___x_3943_; lean_object* v_fst_3944_; lean_object* v_snd_3945_; lean_object* v___x_3947_; uint8_t v_isShared_3948_; uint8_t v_isSharedCheck_3953_; 
v_tail_3941_ = lean_ctor_get(v_x_3934_, 1);
lean_inc(v_tail_3941_);
lean_dec_ref_known(v_x_3934_, 2);
v_a_3942_ = lean_ctor_get(v_head_3940_, 0);
lean_inc(v_a_3942_);
lean_dec_ref_known(v_head_3940_, 1);
v___x_3943_ = lp_lean_x2dftml_LeanFtml_gatherUfffd(v_tail_3941_);
v_fst_3944_ = lean_ctor_get(v___x_3943_, 0);
v_snd_3945_ = lean_ctor_get(v___x_3943_, 1);
v_isSharedCheck_3953_ = !lean_is_exclusive(v___x_3943_);
if (v_isSharedCheck_3953_ == 0)
{
v___x_3947_ = v___x_3943_;
v_isShared_3948_ = v_isSharedCheck_3953_;
goto v_resetjp_3946_;
}
else
{
lean_inc(v_snd_3945_);
lean_inc(v_fst_3944_);
lean_dec(v___x_3943_);
v___x_3947_ = lean_box(0);
v_isShared_3948_ = v_isSharedCheck_3953_;
goto v_resetjp_3946_;
}
v_resetjp_3946_:
{
lean_object* v___x_3949_; lean_object* v___x_3951_; 
v___x_3949_ = l_List_appendTR___redArg(v_a_3942_, v_fst_3944_);
if (v_isShared_3948_ == 0)
{
lean_ctor_set(v___x_3947_, 0, v___x_3949_);
v___x_3951_ = v___x_3947_;
goto v_reusejp_3950_;
}
else
{
lean_object* v_reuseFailAlloc_3952_; 
v_reuseFailAlloc_3952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3952_, 0, v___x_3949_);
lean_ctor_set(v_reuseFailAlloc_3952_, 1, v_snd_3945_);
v___x_3951_ = v_reuseFailAlloc_3952_;
goto v_reusejp_3950_;
}
v_reusejp_3950_:
{
return v___x_3951_;
}
}
}
case 1:
{
lean_object* v_tail_3954_; uint8_t v___x_3955_; 
v_tail_3954_ = lean_ctor_get(v_x_3934_, 1);
v___x_3955_ = lp_lean_x2dftml_LeanFtml_boundaryFake(v_x_3934_);
if (v___x_3955_ == 0)
{
lean_object* v___x_3956_; lean_object* v_snd_3957_; lean_object* v_fst_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3976_; 
lean_inc(v_tail_3954_);
lean_dec_ref_known(v_x_3934_, 2);
v___x_3956_ = lp_lean_x2dftml_LeanFtml_gatherUfffd(v_tail_3954_);
v_snd_3957_ = lean_ctor_get(v___x_3956_, 1);
v_fst_3958_ = lean_ctor_get(v___x_3956_, 0);
v_isSharedCheck_3976_ = !lean_is_exclusive(v___x_3956_);
if (v_isSharedCheck_3976_ == 0)
{
v___x_3960_ = v___x_3956_;
v_isShared_3961_ = v_isSharedCheck_3976_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_snd_3957_);
lean_inc(v_fst_3958_);
lean_dec(v___x_3956_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3976_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v_snd_3962_; lean_object* v___x_3964_; uint8_t v_isShared_3965_; uint8_t v_isSharedCheck_3974_; 
v_snd_3962_ = lean_ctor_get(v_snd_3957_, 1);
v_isSharedCheck_3974_ = !lean_is_exclusive(v_snd_3957_);
if (v_isSharedCheck_3974_ == 0)
{
lean_object* v_unused_3975_; 
v_unused_3975_ = lean_ctor_get(v_snd_3957_, 0);
lean_dec(v_unused_3975_);
v___x_3964_ = v_snd_3957_;
v_isShared_3965_ = v_isSharedCheck_3974_;
goto v_resetjp_3963_;
}
else
{
lean_inc(v_snd_3962_);
lean_dec(v_snd_3957_);
v___x_3964_ = lean_box(0);
v_isShared_3965_ = v_isSharedCheck_3974_;
goto v_resetjp_3963_;
}
v_resetjp_3963_:
{
uint8_t v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3969_; 
v___x_3966_ = 1;
v___x_3967_ = lean_box(v___x_3966_);
if (v_isShared_3965_ == 0)
{
lean_ctor_set(v___x_3964_, 0, v___x_3967_);
v___x_3969_ = v___x_3964_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v___x_3967_);
lean_ctor_set(v_reuseFailAlloc_3973_, 1, v_snd_3962_);
v___x_3969_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
lean_object* v___x_3971_; 
if (v_isShared_3961_ == 0)
{
lean_ctor_set(v___x_3960_, 1, v___x_3969_);
v___x_3971_ = v___x_3960_;
goto v_reusejp_3970_;
}
else
{
lean_object* v_reuseFailAlloc_3972_; 
v_reuseFailAlloc_3972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3972_, 0, v_fst_3958_);
lean_ctor_set(v_reuseFailAlloc_3972_, 1, v___x_3969_);
v___x_3971_ = v_reuseFailAlloc_3972_;
goto v_reusejp_3970_;
}
v_reusejp_3970_:
{
return v___x_3971_;
}
}
}
}
}
else
{
lean_object* v___x_3977_; uint8_t v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; 
v___x_3977_ = lean_box(0);
v___x_3978_ = 0;
v___x_3979_ = lean_box(v___x_3978_);
v___x_3980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3980_, 0, v___x_3979_);
lean_ctor_set(v___x_3980_, 1, v_x_3934_);
v___x_3981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3981_, 0, v___x_3977_);
lean_ctor_set(v___x_3981_, 1, v___x_3980_);
return v___x_3981_;
}
}
default: 
{
lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_4000_; 
v_isSharedCheck_4000_ = !lean_is_exclusive(v_head_3940_);
if (v_isSharedCheck_4000_ == 0)
{
lean_object* v_unused_4001_; lean_object* v_unused_4002_; 
v_unused_4001_ = lean_ctor_get(v_head_3940_, 1);
lean_dec(v_unused_4001_);
v_unused_4002_ = lean_ctor_get(v_head_3940_, 0);
lean_dec(v_unused_4002_);
v___x_3983_ = v_head_3940_;
v_isShared_3984_ = v_isSharedCheck_4000_;
goto v_resetjp_3982_;
}
else
{
lean_dec(v_head_3940_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_4000_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v___x_3985_; uint8_t v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3989_; 
v___x_3985_ = lean_box(0);
v___x_3986_ = 0;
v___x_3987_ = lean_box(v___x_3986_);
lean_inc_ref(v_x_3934_);
if (v_isShared_3984_ == 0)
{
lean_ctor_set_tag(v___x_3983_, 0);
lean_ctor_set(v___x_3983_, 1, v_x_3934_);
lean_ctor_set(v___x_3983_, 0, v___x_3987_);
v___x_3989_ = v___x_3983_;
goto v_reusejp_3988_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v___x_3987_);
lean_ctor_set(v_reuseFailAlloc_3999_, 1, v_x_3934_);
v___x_3989_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3988_;
}
v_reusejp_3988_:
{
lean_object* v___x_3991_; uint8_t v_isShared_3992_; uint8_t v_isSharedCheck_3996_; 
v_isSharedCheck_3996_ = !lean_is_exclusive(v_x_3934_);
if (v_isSharedCheck_3996_ == 0)
{
lean_object* v_unused_3997_; lean_object* v_unused_3998_; 
v_unused_3997_ = lean_ctor_get(v_x_3934_, 1);
lean_dec(v_unused_3997_);
v_unused_3998_ = lean_ctor_get(v_x_3934_, 0);
lean_dec(v_unused_3998_);
v___x_3991_ = v_x_3934_;
v_isShared_3992_ = v_isSharedCheck_3996_;
goto v_resetjp_3990_;
}
else
{
lean_dec(v_x_3934_);
v___x_3991_ = lean_box(0);
v_isShared_3992_ = v_isSharedCheck_3996_;
goto v_resetjp_3990_;
}
v_resetjp_3990_:
{
lean_object* v___x_3994_; 
if (v_isShared_3992_ == 0)
{
lean_ctor_set_tag(v___x_3991_, 0);
lean_ctor_set(v___x_3991_, 1, v___x_3989_);
lean_ctor_set(v___x_3991_, 0, v___x_3985_);
v___x_3994_ = v___x_3991_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_3995_; 
v_reuseFailAlloc_3995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3995_, 0, v___x_3985_);
lean_ctor_set(v_reuseFailAlloc_3995_, 1, v___x_3989_);
v___x_3994_ = v_reuseFailAlloc_3995_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
return v___x_3994_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderCaptured(lean_object* v_dispatch_4003_, lean_object* v_conf_4004_, lean_object* v_doc_4005_, lean_object* v_k_4006_, lean_object* v_e_4007_){
_start:
{
if (lean_obj_tag(v_e_4007_) == 0)
{
lean_object* v___x_4008_; 
lean_dec_ref(v_doc_4005_);
lean_dec_ref(v_conf_4004_);
lean_dec_ref(v_dispatch_4003_);
v___x_4008_ = lp_lean_x2dftml_LeanFtml_missingKeyFallback(v_k_4006_);
return v___x_4008_;
}
else
{
lean_object* v_val_4009_; lean_object* v_rule_4010_; lean_object* v_opts_4011_; lean_object* v___x_4012_; 
v_val_4009_ = lean_ctor_get(v_e_4007_, 0);
lean_inc(v_val_4009_);
lean_dec_ref_known(v_e_4007_, 1);
v_rule_4010_ = lean_ctor_get(v_val_4009_, 0);
lean_inc_ref(v_rule_4010_);
v_opts_4011_ = lean_ctor_get(v_val_4009_, 1);
lean_inc(v_opts_4011_);
lean_dec(v_val_4009_);
v___x_4012_ = lp_lean_x2dftml_LeanFtml_renderRuleOfName(v_rule_4010_);
if (lean_obj_tag(v___x_4012_) == 0)
{
lean_object* v___x_4013_; 
lean_dec(v_opts_4011_);
lean_dec_ref(v_doc_4005_);
lean_dec_ref(v_conf_4004_);
lean_dec_ref(v_dispatch_4003_);
v___x_4013_ = lp_lean_x2dftml_LeanFtml_unmirroredFallback(v_rule_4010_, v_k_4006_);
return v___x_4013_;
}
else
{
lean_object* v_val_4014_; lean_object* v___x_4015_; 
lean_dec_ref(v_rule_4010_);
lean_dec(v_k_4006_);
v_val_4014_ = lean_ctor_get(v___x_4012_, 0);
lean_inc(v_val_4014_);
lean_dec_ref_known(v___x_4012_, 1);
v___x_4015_ = lean_apply_4(v_dispatch_4003_, v_val_4014_, v_conf_4004_, v_doc_4005_, v_opts_4011_);
return v___x_4015_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_takeInline(lean_object* v_rule_4016_, lean_object* v_x_4017_){
_start:
{
if (lean_obj_tag(v_x_4017_) == 0)
{
lean_object* v___x_4018_; 
v___x_4018_ = lean_box(0);
return v___x_4018_;
}
else
{
lean_object* v_head_4019_; 
v_head_4019_ = lean_ctor_get(v_x_4017_, 0);
lean_inc(v_head_4019_);
switch(lean_obj_tag(v_head_4019_))
{
case 0:
{
lean_object* v_tail_4020_; lean_object* v_a_4021_; lean_object* v___x_4022_; 
v_tail_4020_ = lean_ctor_get(v_x_4017_, 1);
lean_inc(v_tail_4020_);
lean_dec_ref_known(v_x_4017_, 2);
v_a_4021_ = lean_ctor_get(v_head_4019_, 0);
lean_inc(v_a_4021_);
lean_dec_ref_known(v_head_4019_, 1);
v___x_4022_ = lp_lean_x2dftml_LeanFtml_takeInline(v_rule_4016_, v_tail_4020_);
if (lean_obj_tag(v___x_4022_) == 0)
{
lean_dec(v_a_4021_);
return v___x_4022_;
}
else
{
lean_object* v_val_4023_; lean_object* v___x_4025_; uint8_t v_isShared_4026_; uint8_t v_isSharedCheck_4040_; 
v_val_4023_ = lean_ctor_get(v___x_4022_, 0);
v_isSharedCheck_4040_ = !lean_is_exclusive(v___x_4022_);
if (v_isSharedCheck_4040_ == 0)
{
v___x_4025_ = v___x_4022_;
v_isShared_4026_ = v_isSharedCheck_4040_;
goto v_resetjp_4024_;
}
else
{
lean_inc(v_val_4023_);
lean_dec(v___x_4022_);
v___x_4025_ = lean_box(0);
v_isShared_4026_ = v_isSharedCheck_4040_;
goto v_resetjp_4024_;
}
v_resetjp_4024_:
{
lean_object* v_fst_4027_; lean_object* v_snd_4028_; lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4039_; 
v_fst_4027_ = lean_ctor_get(v_val_4023_, 0);
v_snd_4028_ = lean_ctor_get(v_val_4023_, 1);
v_isSharedCheck_4039_ = !lean_is_exclusive(v_val_4023_);
if (v_isSharedCheck_4039_ == 0)
{
v___x_4030_ = v_val_4023_;
v_isShared_4031_ = v_isSharedCheck_4039_;
goto v_resetjp_4029_;
}
else
{
lean_inc(v_snd_4028_);
lean_inc(v_fst_4027_);
lean_dec(v_val_4023_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4039_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
lean_object* v___x_4032_; lean_object* v___x_4034_; 
v___x_4032_ = l_List_appendTR___redArg(v_a_4021_, v_fst_4027_);
if (v_isShared_4031_ == 0)
{
lean_ctor_set(v___x_4030_, 0, v___x_4032_);
v___x_4034_ = v___x_4030_;
goto v_reusejp_4033_;
}
else
{
lean_object* v_reuseFailAlloc_4038_; 
v_reuseFailAlloc_4038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4038_, 0, v___x_4032_);
lean_ctor_set(v_reuseFailAlloc_4038_, 1, v_snd_4028_);
v___x_4034_ = v_reuseFailAlloc_4038_;
goto v_reusejp_4033_;
}
v_reusejp_4033_:
{
lean_object* v___x_4036_; 
if (v_isShared_4026_ == 0)
{
lean_ctor_set(v___x_4025_, 0, v___x_4034_);
v___x_4036_ = v___x_4025_;
goto v_reusejp_4035_;
}
else
{
lean_object* v_reuseFailAlloc_4037_; 
v_reuseFailAlloc_4037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4037_, 0, v___x_4034_);
v___x_4036_ = v_reuseFailAlloc_4037_;
goto v_reusejp_4035_;
}
v_reusejp_4035_:
{
return v___x_4036_;
}
}
}
}
}
}
case 1:
{
lean_object* v___x_4041_; 
lean_dec_ref_known(v_x_4017_, 2);
v___x_4041_ = lean_box(0);
return v___x_4041_;
}
default: 
{
lean_object* v_tail_4042_; lean_object* v___x_4044_; uint8_t v_isShared_4045_; uint8_t v_isSharedCheck_4083_; 
v_tail_4042_ = lean_ctor_get(v_x_4017_, 1);
v_isSharedCheck_4083_ = !lean_is_exclusive(v_x_4017_);
if (v_isSharedCheck_4083_ == 0)
{
lean_object* v_unused_4084_; 
v_unused_4084_ = lean_ctor_get(v_x_4017_, 0);
lean_dec(v_unused_4084_);
v___x_4044_ = v_x_4017_;
v_isShared_4045_ = v_isSharedCheck_4083_;
goto v_resetjp_4043_;
}
else
{
lean_inc(v_tail_4042_);
lean_dec(v_x_4017_);
v___x_4044_ = lean_box(0);
v_isShared_4045_ = v_isSharedCheck_4083_;
goto v_resetjp_4043_;
}
v_resetjp_4043_:
{
lean_object* v_a_4046_; lean_object* v_a_4047_; lean_object* v___x_4049_; uint8_t v_isShared_4050_; uint8_t v_isSharedCheck_4082_; 
v_a_4046_ = lean_ctor_get(v_head_4019_, 0);
v_a_4047_ = lean_ctor_get(v_head_4019_, 1);
v_isSharedCheck_4082_ = !lean_is_exclusive(v_head_4019_);
if (v_isSharedCheck_4082_ == 0)
{
v___x_4049_ = v_head_4019_;
v_isShared_4050_ = v_isSharedCheck_4082_;
goto v_resetjp_4048_;
}
else
{
lean_inc(v_a_4047_);
lean_inc(v_a_4046_);
lean_dec(v_head_4019_);
v___x_4049_ = lean_box(0);
v_isShared_4050_ = v_isSharedCheck_4082_;
goto v_resetjp_4048_;
}
v_resetjp_4048_:
{
lean_object* v___x_4051_; 
lean_inc(v_a_4047_);
v___x_4051_ = lp_lean_x2dftml_LeanFtml_00ufffdTokInfo(v_a_4047_);
if (lean_obj_tag(v___x_4051_) == 0)
{
lean_object* v___x_4052_; 
lean_del_object(v___x_4049_);
lean_dec(v_a_4047_);
lean_dec(v_a_4046_);
lean_del_object(v___x_4044_);
lean_dec(v_tail_4042_);
v___x_4052_ = lean_box(0);
return v___x_4052_;
}
else
{
lean_object* v_val_4053_; lean_object* v___x_4055_; uint8_t v_isShared_4056_; uint8_t v_isSharedCheck_4081_; 
v_val_4053_ = lean_ctor_get(v___x_4051_, 0);
v_isSharedCheck_4081_ = !lean_is_exclusive(v___x_4051_);
if (v_isSharedCheck_4081_ == 0)
{
v___x_4055_ = v___x_4051_;
v_isShared_4056_ = v_isSharedCheck_4081_;
goto v_resetjp_4054_;
}
else
{
lean_inc(v_val_4053_);
lean_dec(v___x_4051_);
v___x_4055_ = lean_box(0);
v_isShared_4056_ = v_isSharedCheck_4081_;
goto v_resetjp_4054_;
}
v_resetjp_4054_:
{
lean_object* v_fst_4057_; lean_object* v_snd_4058_; lean_object* v___x_4060_; uint8_t v_isShared_4061_; uint8_t v_isSharedCheck_4080_; 
v_fst_4057_ = lean_ctor_get(v_val_4053_, 0);
v_snd_4058_ = lean_ctor_get(v_val_4053_, 1);
v_isSharedCheck_4080_ = !lean_is_exclusive(v_val_4053_);
if (v_isSharedCheck_4080_ == 0)
{
v___x_4060_ = v_val_4053_;
v_isShared_4061_ = v_isSharedCheck_4080_;
goto v_resetjp_4059_;
}
else
{
lean_inc(v_snd_4058_);
lean_inc(v_fst_4057_);
lean_dec(v_val_4053_);
v___x_4060_ = lean_box(0);
v_isShared_4061_ = v_isSharedCheck_4080_;
goto v_resetjp_4059_;
}
v_resetjp_4059_:
{
uint8_t v___x_4062_; 
v___x_4062_ = lean_string_dec_eq(v_fst_4057_, v_rule_4016_);
lean_dec(v_fst_4057_);
if (v___x_4062_ == 0)
{
lean_object* v___x_4063_; 
lean_del_object(v___x_4060_);
lean_dec(v_snd_4058_);
lean_del_object(v___x_4055_);
lean_del_object(v___x_4049_);
lean_dec(v_a_4047_);
lean_dec(v_a_4046_);
lean_del_object(v___x_4044_);
lean_dec(v_tail_4042_);
v___x_4063_ = lean_box(0);
return v___x_4063_;
}
else
{
lean_object* v___x_4064_; uint8_t v___x_4065_; 
v___x_4064_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9);
v___x_4065_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_snd_4058_, v___x_4064_);
lean_dec(v_snd_4058_);
if (v___x_4065_ == 0)
{
lean_object* v___x_4066_; 
lean_del_object(v___x_4060_);
lean_del_object(v___x_4055_);
lean_del_object(v___x_4049_);
lean_dec(v_a_4047_);
lean_dec(v_a_4046_);
lean_del_object(v___x_4044_);
lean_dec(v_tail_4042_);
v___x_4066_ = lean_box(0);
return v___x_4066_;
}
else
{
lean_object* v___x_4067_; lean_object* v___x_4069_; 
v___x_4067_ = lean_box(0);
if (v_isShared_4061_ == 0)
{
lean_ctor_set(v___x_4060_, 1, v_tail_4042_);
lean_ctor_set(v___x_4060_, 0, v_a_4047_);
v___x_4069_ = v___x_4060_;
goto v_reusejp_4068_;
}
else
{
lean_object* v_reuseFailAlloc_4079_; 
v_reuseFailAlloc_4079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4079_, 0, v_a_4047_);
lean_ctor_set(v_reuseFailAlloc_4079_, 1, v_tail_4042_);
v___x_4069_ = v_reuseFailAlloc_4079_;
goto v_reusejp_4068_;
}
v_reusejp_4068_:
{
lean_object* v___x_4071_; 
if (v_isShared_4050_ == 0)
{
lean_ctor_set_tag(v___x_4049_, 0);
lean_ctor_set(v___x_4049_, 1, v___x_4069_);
v___x_4071_ = v___x_4049_;
goto v_reusejp_4070_;
}
else
{
lean_object* v_reuseFailAlloc_4078_; 
v_reuseFailAlloc_4078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4078_, 0, v_a_4046_);
lean_ctor_set(v_reuseFailAlloc_4078_, 1, v___x_4069_);
v___x_4071_ = v_reuseFailAlloc_4078_;
goto v_reusejp_4070_;
}
v_reusejp_4070_:
{
lean_object* v___x_4073_; 
if (v_isShared_4045_ == 0)
{
lean_ctor_set_tag(v___x_4044_, 0);
lean_ctor_set(v___x_4044_, 1, v___x_4071_);
lean_ctor_set(v___x_4044_, 0, v___x_4067_);
v___x_4073_ = v___x_4044_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4077_; 
v_reuseFailAlloc_4077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4077_, 0, v___x_4067_);
lean_ctor_set(v_reuseFailAlloc_4077_, 1, v___x_4071_);
v___x_4073_ = v_reuseFailAlloc_4077_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
lean_object* v___x_4075_; 
if (v_isShared_4056_ == 0)
{
lean_ctor_set(v___x_4055_, 0, v___x_4073_);
v___x_4075_ = v___x_4055_;
goto v_reusejp_4074_;
}
else
{
lean_object* v_reuseFailAlloc_4076_; 
v_reuseFailAlloc_4076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4076_, 0, v___x_4073_);
v___x_4075_ = v_reuseFailAlloc_4076_;
goto v_reusejp_4074_;
}
v_reusejp_4074_:
{
return v___x_4075_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_takeInline___boxed(lean_object* v_rule_4085_, lean_object* v_x_4086_){
_start:
{
lean_object* v_res_4087_; 
v_res_4087_ = lp_lean_x2dftml_LeanFtml_takeInline(v_rule_4085_, v_x_4086_);
lean_dec_ref(v_rule_4085_);
return v_res_4087_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_swallowedBreaks___closed__1(void){
_start:
{
lean_object* v___x_4089_; lean_object* v___x_4090_; 
v___x_4089_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_swallowedBreaks___closed__0));
v___x_4090_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4089_);
return v___x_4090_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_swallowedBreaks(void){
_start:
{
lean_object* v___x_4091_; 
v___x_4091_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_swallowedBreaks___closed__1, &lp_lean_x2dftml_LeanFtml_swallowedBreaks___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_swallowedBreaks___closed__1);
return v___x_4091_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdLeakRun(lean_object* v_x_4092_){
_start:
{
lean_object* v_atoms_4094_; 
if (lean_obj_tag(v_x_4092_) == 1)
{
lean_object* v_head_4097_; 
v_head_4097_ = lean_ctor_get(v_x_4092_, 0);
if (lean_obj_tag(v_head_4097_) == 2)
{
lean_object* v_tail_4098_; lean_object* v_a_4099_; lean_object* v___x_4100_; lean_object* v_fst_4101_; lean_object* v_snd_4102_; lean_object* v___x_4104_; uint8_t v_isShared_4105_; uint8_t v_isSharedCheck_4111_; 
lean_inc_ref(v_head_4097_);
v_tail_4098_ = lean_ctor_get(v_x_4092_, 1);
lean_inc(v_tail_4098_);
lean_dec_ref_known(v_x_4092_, 2);
v_a_4099_ = lean_ctor_get(v_head_4097_, 0);
lean_inc(v_a_4099_);
lean_dec_ref_known(v_head_4097_, 2);
v___x_4100_ = lp_lean_x2dftml_LeanFtml_00ufffdLeakRun(v_tail_4098_);
v_fst_4101_ = lean_ctor_get(v___x_4100_, 0);
v_snd_4102_ = lean_ctor_get(v___x_4100_, 1);
v_isSharedCheck_4111_ = !lean_is_exclusive(v___x_4100_);
if (v_isSharedCheck_4111_ == 0)
{
v___x_4104_ = v___x_4100_;
v_isShared_4105_ = v_isSharedCheck_4111_;
goto v_resetjp_4103_;
}
else
{
lean_inc(v_snd_4102_);
lean_inc(v_fst_4101_);
lean_dec(v___x_4100_);
v___x_4104_ = lean_box(0);
v_isShared_4105_ = v_isSharedCheck_4111_;
goto v_resetjp_4103_;
}
v_resetjp_4103_:
{
lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4109_; 
v___x_4106_ = lp_lean_x2dftml_LeanFtml_natBytes(v_a_4099_);
v___x_4107_ = l_List_appendTR___redArg(v___x_4106_, v_fst_4101_);
if (v_isShared_4105_ == 0)
{
lean_ctor_set(v___x_4104_, 0, v___x_4107_);
v___x_4109_ = v___x_4104_;
goto v_reusejp_4108_;
}
else
{
lean_object* v_reuseFailAlloc_4110_; 
v_reuseFailAlloc_4110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4110_, 0, v___x_4107_);
lean_ctor_set(v_reuseFailAlloc_4110_, 1, v_snd_4102_);
v___x_4109_ = v_reuseFailAlloc_4110_;
goto v_reusejp_4108_;
}
v_reusejp_4108_:
{
return v___x_4109_;
}
}
}
else
{
v_atoms_4094_ = v_x_4092_;
goto v___jp_4093_;
}
}
else
{
v_atoms_4094_ = v_x_4092_;
goto v___jp_4093_;
}
v___jp_4093_:
{
lean_object* v___x_4095_; lean_object* v___x_4096_; 
v___x_4095_ = lean_box(0);
v___x_4096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4096_, 0, v___x_4095_);
lean_ctor_set(v___x_4096_, 1, v_atoms_4094_);
return v___x_4096_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdWalk(lean_object* v_dispatch_4112_, lean_object* v_conf_4113_, lean_object* v_doc_4114_, lean_object* v_x_4115_, lean_object* v_x_4116_, uint8_t v_x_4117_, lean_object* v_x_4118_, lean_object* v_x_4119_){
_start:
{
lean_object* v_zero_4120_; uint8_t v_isZero_4121_; 
v_zero_4120_ = lean_unsigned_to_nat(0u);
v_isZero_4121_ = lean_nat_dec_eq(v_x_4115_, v_zero_4120_);
if (v_isZero_4121_ == 1)
{
lean_dec(v_x_4118_);
lean_dec(v_x_4116_);
lean_dec(v_x_4115_);
lean_dec_ref(v_doc_4114_);
lean_dec_ref(v_conf_4113_);
lean_dec_ref(v_dispatch_4112_);
return v_x_4119_;
}
else
{
if (lean_obj_tag(v_x_4116_) == 0)
{
lean_dec(v_x_4115_);
if (lean_obj_tag(v_x_4118_) == 0)
{
lean_dec_ref(v_doc_4114_);
lean_dec_ref(v_conf_4113_);
lean_dec_ref(v_dispatch_4112_);
return v_x_4119_;
}
else
{
lean_object* v_val_4122_; lean_object* v_fst_4123_; lean_object* v_snd_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; 
v_val_4122_ = lean_ctor_get(v_x_4118_, 0);
lean_inc(v_val_4122_);
lean_dec_ref_known(v_x_4118_, 1);
v_fst_4123_ = lean_ctor_get(v_val_4122_, 0);
lean_inc(v_fst_4123_);
v_snd_4124_ = lean_ctor_get(v_val_4122_, 1);
lean_inc(v_snd_4124_);
lean_dec(v_val_4122_);
v___x_4125_ = lp_lean_x2dftml_LeanFtml_renderCaptured(v_dispatch_4112_, v_conf_4113_, v_doc_4114_, v_fst_4123_, v_snd_4124_);
v___x_4126_ = l_List_appendTR___redArg(v_x_4119_, v___x_4125_);
return v___x_4126_;
}
}
else
{
lean_object* v_head_4127_; lean_object* v_tail_4128_; lean_object* v_one_4129_; lean_object* v_n_4130_; 
v_head_4127_ = lean_ctor_get(v_x_4116_, 0);
v_tail_4128_ = lean_ctor_get(v_x_4116_, 1);
v_one_4129_ = lean_unsigned_to_nat(1u);
v_n_4130_ = lean_nat_sub(v_x_4115_, v_one_4129_);
lean_dec(v_x_4115_);
switch(lean_obj_tag(v_head_4127_))
{
case 0:
{
lean_object* v___x_4131_; lean_object* v_snd_4132_; lean_object* v_fst_4133_; lean_object* v_fst_4134_; lean_object* v_snd_4135_; lean_object* v___y_4137_; lean_object* v___y_4144_; 
v___x_4131_ = lp_lean_x2dftml_LeanFtml_gatherUfffd(v_x_4116_);
v_snd_4132_ = lean_ctor_get(v___x_4131_, 1);
lean_inc(v_snd_4132_);
v_fst_4133_ = lean_ctor_get(v___x_4131_, 0);
lean_inc(v_fst_4133_);
lean_dec_ref(v___x_4131_);
v_fst_4134_ = lean_ctor_get(v_snd_4132_, 0);
lean_inc(v_fst_4134_);
v_snd_4135_ = lean_ctor_get(v_snd_4132_, 1);
lean_inc(v_snd_4135_);
lean_dec(v_snd_4132_);
if (v_x_4117_ == 0)
{
v___y_4144_ = v_fst_4133_;
goto v___jp_4143_;
}
else
{
lean_object* v___x_4147_; 
v___x_4147_ = lp_lean_x2dftml_LeanFtml_lstripWs(v_fst_4133_);
lean_dec(v_fst_4133_);
v___y_4144_ = v___x_4147_;
goto v___jp_4143_;
}
v___jp_4136_:
{
uint8_t v___x_4138_; 
v___x_4138_ = l_List_isEmpty___redArg(v___y_4137_);
if (v___x_4138_ == 0)
{
lean_object* v___x_4139_; lean_object* v___x_4140_; 
v___x_4139_ = lp_lean_x2dftml_LeanFtml_xhtmlPreText(v___y_4137_);
lean_dec(v___y_4137_);
v___x_4140_ = l_List_appendTR___redArg(v_x_4119_, v___x_4139_);
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_snd_4135_;
v_x_4117_ = v_isZero_4121_;
v_x_4119_ = v___x_4140_;
goto _start;
}
else
{
lean_dec(v___y_4137_);
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_snd_4135_;
v_x_4117_ = v_isZero_4121_;
goto _start;
}
}
v___jp_4143_:
{
uint8_t v___x_4145_; 
v___x_4145_ = lean_unbox(v_fst_4134_);
lean_dec(v_fst_4134_);
if (v___x_4145_ == 0)
{
v___y_4137_ = v___y_4144_;
goto v___jp_4136_;
}
else
{
lean_object* v___x_4146_; 
v___x_4146_ = lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs(v___y_4144_);
v___y_4137_ = v___x_4146_;
goto v___jp_4136_;
}
}
}
case 1:
{
lean_object* v___x_4148_; 
lean_inc(v_tail_4128_);
v___x_4148_ = lp_lean_x2dftml_LeanFtml_skipFakes(v_x_4116_);
lean_dec_ref_known(v_x_4116_, 2);
if (lean_obj_tag(v___x_4148_) == 1)
{
lean_object* v_head_4149_; 
v_head_4149_ = lean_ctor_get(v___x_4148_, 0);
lean_inc(v_head_4149_);
if (lean_obj_tag(v_head_4149_) == 2)
{
lean_object* v_tail_4150_; lean_object* v_a_4151_; lean_object* v_a_4152_; lean_object* v___x_4159_; 
v_tail_4150_ = lean_ctor_get(v___x_4148_, 1);
lean_inc(v_tail_4150_);
lean_dec_ref_known(v___x_4148_, 2);
v_a_4151_ = lean_ctor_get(v_head_4149_, 0);
lean_inc(v_a_4151_);
v_a_4152_ = lean_ctor_get(v_head_4149_, 1);
lean_inc_n(v_a_4152_, 2);
lean_dec_ref_known(v_head_4149_, 2);
v___x_4159_ = lp_lean_x2dftml_LeanFtml_00ufffdTokInfo(v_a_4152_);
if (lean_obj_tag(v___x_4159_) == 0)
{
lean_dec(v_a_4152_);
lean_dec(v_a_4151_);
lean_dec(v_tail_4150_);
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_tail_4128_;
goto _start;
}
else
{
lean_object* v_val_4161_; uint8_t v___x_4162_; 
v_val_4161_ = lean_ctor_get(v___x_4159_, 0);
lean_inc(v_val_4161_);
lean_dec_ref_known(v___x_4159_, 1);
v___x_4162_ = lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd(v_val_4161_);
if (v___x_4162_ == 0)
{
uint8_t v___x_4163_; 
lean_dec(v_a_4152_);
lean_dec(v_a_4151_);
v___x_4163_ = lp_lean_x2dftml_LeanFtml_00ufffdIsInlineStart(v_val_4161_);
if (v___x_4163_ == 0)
{
lean_dec(v_val_4161_);
lean_dec(v_tail_4150_);
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_tail_4128_;
goto _start;
}
else
{
lean_object* v_fst_4165_; lean_object* v___x_4166_; 
v_fst_4165_ = lean_ctor_get(v_val_4161_, 0);
lean_inc(v_fst_4165_);
lean_dec(v_val_4161_);
v___x_4166_ = lp_lean_x2dftml_LeanFtml_takeInline(v_fst_4165_, v_tail_4150_);
lean_dec(v_fst_4165_);
if (lean_obj_tag(v___x_4166_) == 0)
{
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_tail_4128_;
goto _start;
}
else
{
lean_object* v_val_4168_; lean_object* v_snd_4169_; lean_object* v_snd_4170_; lean_object* v_fst_4171_; lean_object* v_fst_4172_; lean_object* v_snd_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v_acc_4177_; 
lean_dec(v_tail_4128_);
v_val_4168_ = lean_ctor_get(v___x_4166_, 0);
lean_inc(v_val_4168_);
lean_dec_ref_known(v___x_4166_, 1);
v_snd_4169_ = lean_ctor_get(v_val_4168_, 1);
lean_inc(v_snd_4169_);
v_snd_4170_ = lean_ctor_get(v_snd_4169_, 1);
lean_inc(v_snd_4170_);
v_fst_4171_ = lean_ctor_get(v_val_4168_, 0);
lean_inc(v_fst_4171_);
lean_dec(v_val_4168_);
v_fst_4172_ = lean_ctor_get(v_snd_4169_, 0);
lean_inc(v_fst_4172_);
lean_dec(v_snd_4169_);
v_snd_4173_ = lean_ctor_get(v_snd_4170_, 1);
lean_inc(v_snd_4173_);
lean_dec(v_snd_4170_);
v___x_4174_ = lp_lean_x2dftml_LeanFtml_natBytes(v_fst_4172_);
v___x_4175_ = l_List_appendTR___redArg(v_x_4119_, v___x_4174_);
v___x_4176_ = lp_lean_x2dftml_LeanFtml_xhtmlPreText(v_fst_4171_);
lean_dec(v_fst_4171_);
v_acc_4177_ = l_List_appendTR___redArg(v___x_4175_, v___x_4176_);
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_snd_4173_;
v_x_4117_ = v___x_4162_;
v_x_4119_ = v_acc_4177_;
goto _start;
}
}
}
else
{
lean_dec(v_tail_4128_);
if (lean_obj_tag(v_tail_4150_) == 1)
{
lean_object* v_head_4179_; 
v_head_4179_ = lean_ctor_get(v_tail_4150_, 0);
lean_inc(v_head_4179_);
if (lean_obj_tag(v_head_4179_) == 2)
{
lean_object* v_tail_4180_; lean_object* v_a_4181_; lean_object* v_a_4182_; lean_object* v___x_4184_; uint8_t v_isShared_4185_; uint8_t v_isSharedCheck_4229_; 
v_tail_4180_ = lean_ctor_get(v_tail_4150_, 1);
v_a_4181_ = lean_ctor_get(v_head_4179_, 0);
v_a_4182_ = lean_ctor_get(v_head_4179_, 1);
v_isSharedCheck_4229_ = !lean_is_exclusive(v_head_4179_);
if (v_isSharedCheck_4229_ == 0)
{
v___x_4184_ = v_head_4179_;
v_isShared_4185_ = v_isSharedCheck_4229_;
goto v_resetjp_4183_;
}
else
{
lean_inc(v_a_4182_);
lean_inc(v_a_4181_);
lean_dec(v_head_4179_);
v___x_4184_ = lean_box(0);
v_isShared_4185_ = v_isSharedCheck_4229_;
goto v_resetjp_4183_;
}
v_resetjp_4183_:
{
lean_object* v___x_4186_; 
v___x_4186_ = lp_lean_x2dftml_LeanFtml_00ufffdTokInfo(v_a_4182_);
if (lean_obj_tag(v___x_4186_) == 0)
{
lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v_acc_4190_; 
lean_del_object(v___x_4184_);
lean_dec(v_a_4181_);
lean_dec(v_val_4161_);
lean_inc(v_a_4151_);
v___x_4187_ = lp_lean_x2dftml_LeanFtml_natBytes(v_a_4151_);
v___x_4188_ = l_List_appendTR___redArg(v_x_4119_, v___x_4187_);
lean_inc_ref(v_doc_4114_);
lean_inc_ref(v_conf_4113_);
lean_inc_ref(v_dispatch_4112_);
v___x_4189_ = lp_lean_x2dftml_LeanFtml_renderCaptured(v_dispatch_4112_, v_conf_4113_, v_doc_4114_, v_a_4151_, v_a_4152_);
v_acc_4190_ = l_List_appendTR___redArg(v___x_4188_, v___x_4189_);
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_tail_4150_;
v_x_4117_ = v_isZero_4121_;
v_x_4119_ = v_acc_4190_;
goto _start;
}
else
{
lean_object* v_val_4192_; lean_object* v___x_4194_; uint8_t v_isShared_4195_; uint8_t v_isSharedCheck_4228_; 
v_val_4192_ = lean_ctor_get(v___x_4186_, 0);
v_isSharedCheck_4228_ = !lean_is_exclusive(v___x_4186_);
if (v_isSharedCheck_4228_ == 0)
{
v___x_4194_ = v___x_4186_;
v_isShared_4195_ = v_isSharedCheck_4228_;
goto v_resetjp_4193_;
}
else
{
lean_inc(v_val_4192_);
lean_dec(v___x_4186_);
v___x_4194_ = lean_box(0);
v_isShared_4195_ = v_isSharedCheck_4228_;
goto v_resetjp_4193_;
}
v_resetjp_4193_:
{
uint8_t v___x_4196_; 
v___x_4196_ = lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart(v_val_4192_);
if (v___x_4196_ == 0)
{
lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v_acc_4200_; 
lean_del_object(v___x_4194_);
lean_dec(v_val_4192_);
lean_del_object(v___x_4184_);
lean_dec(v_a_4181_);
lean_dec(v_val_4161_);
lean_inc(v_a_4151_);
v___x_4197_ = lp_lean_x2dftml_LeanFtml_natBytes(v_a_4151_);
v___x_4198_ = l_List_appendTR___redArg(v_x_4119_, v___x_4197_);
lean_inc_ref(v_doc_4114_);
lean_inc_ref(v_conf_4113_);
lean_inc_ref(v_dispatch_4112_);
v___x_4199_ = lp_lean_x2dftml_LeanFtml_renderCaptured(v_dispatch_4112_, v_conf_4113_, v_doc_4114_, v_a_4151_, v_a_4152_);
v_acc_4200_ = l_List_appendTR___redArg(v___x_4198_, v___x_4199_);
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_tail_4150_;
v_x_4117_ = v___x_4196_;
v_x_4119_ = v_acc_4200_;
goto _start;
}
else
{
lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v_acc_4205_; lean_object* v___y_4207_; lean_object* v_fst_4208_; lean_object* v_snd_4209_; lean_object* v___y_4213_; lean_object* v___y_4216_; uint8_t v___x_4220_; 
lean_inc(v_tail_4180_);
lean_dec_ref_known(v_tail_4150_, 2);
lean_inc(v_a_4151_);
v___x_4202_ = lp_lean_x2dftml_LeanFtml_natBytes(v_a_4151_);
v___x_4203_ = l_List_appendTR___redArg(v_x_4119_, v___x_4202_);
v___x_4204_ = lp_lean_x2dftml_LeanFtml_natBytes(v_a_4181_);
v_acc_4205_ = l_List_appendTR___redArg(v___x_4203_, v___x_4204_);
v___x_4220_ = lp_lean_x2dftml_LeanFtml_00ufffdIsHeadingEnd(v_val_4161_);
lean_dec(v_val_4161_);
if (v___x_4220_ == 0)
{
lean_del_object(v___x_4194_);
lean_dec(v_val_4192_);
lean_del_object(v___x_4184_);
lean_dec(v_a_4152_);
lean_dec(v_a_4151_);
v___y_4216_ = v_x_4118_;
goto v___jp_4215_;
}
else
{
uint8_t v___x_4221_; 
v___x_4221_ = lp_lean_x2dftml_LeanFtml_00ufffdIsParaStart(v_val_4192_);
lean_dec(v_val_4192_);
if (v___x_4221_ == 0)
{
lean_del_object(v___x_4194_);
lean_del_object(v___x_4184_);
lean_dec(v_a_4152_);
lean_dec(v_a_4151_);
v___y_4216_ = v_x_4118_;
goto v___jp_4215_;
}
else
{
lean_object* v___x_4223_; 
lean_dec(v_x_4118_);
if (v_isShared_4185_ == 0)
{
lean_ctor_set_tag(v___x_4184_, 0);
lean_ctor_set(v___x_4184_, 1, v_a_4152_);
lean_ctor_set(v___x_4184_, 0, v_a_4151_);
v___x_4223_ = v___x_4184_;
goto v_reusejp_4222_;
}
else
{
lean_object* v_reuseFailAlloc_4227_; 
v_reuseFailAlloc_4227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4227_, 0, v_a_4151_);
lean_ctor_set(v_reuseFailAlloc_4227_, 1, v_a_4152_);
v___x_4223_ = v_reuseFailAlloc_4227_;
goto v_reusejp_4222_;
}
v_reusejp_4222_:
{
lean_object* v___x_4225_; 
if (v_isShared_4195_ == 0)
{
lean_ctor_set(v___x_4194_, 0, v___x_4223_);
v___x_4225_ = v___x_4194_;
goto v_reusejp_4224_;
}
else
{
lean_object* v_reuseFailAlloc_4226_; 
v_reuseFailAlloc_4226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4226_, 0, v___x_4223_);
v___x_4225_ = v_reuseFailAlloc_4226_;
goto v_reusejp_4224_;
}
v_reusejp_4224_:
{
v___y_4213_ = v___x_4225_;
goto v___jp_4212_;
}
}
}
}
v___jp_4206_:
{
lean_object* v___x_4210_; 
v___x_4210_ = l_List_appendTR___redArg(v_acc_4205_, v_fst_4208_);
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_snd_4209_;
v_x_4117_ = v_isZero_4121_;
v_x_4118_ = v___y_4207_;
v_x_4119_ = v___x_4210_;
goto _start;
}
v___jp_4212_:
{
lean_object* v___x_4214_; 
v___x_4214_ = lean_box(0);
v___y_4207_ = v___y_4213_;
v_fst_4208_ = v___x_4214_;
v_snd_4209_ = v_tail_4180_;
goto v___jp_4206_;
}
v___jp_4215_:
{
if (lean_obj_tag(v___y_4216_) == 0)
{
lean_object* v___x_4217_; lean_object* v_fst_4218_; lean_object* v_snd_4219_; 
v___x_4217_ = lp_lean_x2dftml_LeanFtml_00ufffdLeakRun(v_tail_4180_);
v_fst_4218_ = lean_ctor_get(v___x_4217_, 0);
lean_inc(v_fst_4218_);
v_snd_4219_ = lean_ctor_get(v___x_4217_, 1);
lean_inc(v_snd_4219_);
lean_dec_ref(v___x_4217_);
v___y_4207_ = v___y_4216_;
v_fst_4208_ = v_fst_4218_;
v_snd_4209_ = v_snd_4219_;
goto v___jp_4206_;
}
else
{
v___y_4213_ = v___y_4216_;
goto v___jp_4212_;
}
}
}
}
}
}
}
else
{
lean_dec(v_head_4179_);
lean_dec(v_val_4161_);
goto v___jp_4153_;
}
}
else
{
lean_dec(v_val_4161_);
goto v___jp_4153_;
}
}
}
v___jp_4153_:
{
lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v_acc_4157_; 
lean_inc(v_a_4151_);
v___x_4154_ = lp_lean_x2dftml_LeanFtml_natBytes(v_a_4151_);
v___x_4155_ = l_List_appendTR___redArg(v_x_4119_, v___x_4154_);
lean_inc_ref(v_doc_4114_);
lean_inc_ref(v_conf_4113_);
lean_inc_ref(v_dispatch_4112_);
v___x_4156_ = lp_lean_x2dftml_LeanFtml_renderCaptured(v_dispatch_4112_, v_conf_4113_, v_doc_4114_, v_a_4151_, v_a_4152_);
v_acc_4157_ = l_List_appendTR___redArg(v___x_4155_, v___x_4156_);
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_tail_4150_;
v_x_4117_ = v_isZero_4121_;
v_x_4119_ = v_acc_4157_;
goto _start;
}
}
else
{
lean_dec(v_head_4149_);
lean_dec_ref_known(v___x_4148_, 2);
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_tail_4128_;
goto _start;
}
}
else
{
lean_dec(v___x_4148_);
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_tail_4128_;
goto _start;
}
}
default: 
{
lean_inc_ref(v_head_4127_);
lean_inc(v_tail_4128_);
lean_dec_ref_known(v_x_4116_, 2);
if (lean_obj_tag(v_x_4118_) == 0)
{
lean_object* v_a_4232_; lean_object* v_a_4233_; lean_object* v___x_4234_; lean_object* v_acc_4235_; lean_object* v___x_4236_; 
v_a_4232_ = lean_ctor_get(v_head_4127_, 0);
lean_inc(v_a_4232_);
v_a_4233_ = lean_ctor_get(v_head_4127_, 1);
lean_inc_n(v_a_4233_, 2);
lean_dec_ref_known(v_head_4127_, 2);
lean_inc_ref(v_doc_4114_);
lean_inc_ref(v_conf_4113_);
lean_inc_ref(v_dispatch_4112_);
v___x_4234_ = lp_lean_x2dftml_LeanFtml_renderCaptured(v_dispatch_4112_, v_conf_4113_, v_doc_4114_, v_a_4232_, v_a_4233_);
v_acc_4235_ = l_List_appendTR___redArg(v_x_4119_, v___x_4234_);
v___x_4236_ = lp_lean_x2dftml_LeanFtml_00ufffdTokInfo(v_a_4233_);
if (lean_obj_tag(v___x_4236_) == 0)
{
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_tail_4128_;
v_x_4117_ = v_isZero_4121_;
v_x_4119_ = v_acc_4235_;
goto _start;
}
else
{
lean_object* v_val_4238_; uint8_t v___x_4239_; 
v_val_4238_ = lean_ctor_get(v___x_4236_, 0);
lean_inc(v_val_4238_);
lean_dec_ref_known(v___x_4236_, 1);
v___x_4239_ = lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart(v_val_4238_);
lean_dec(v_val_4238_);
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_tail_4128_;
v_x_4117_ = v___x_4239_;
v_x_4119_ = v_acc_4235_;
goto _start;
}
}
else
{
lean_object* v_val_4241_; lean_object* v_a_4242_; lean_object* v_a_4243_; lean_object* v_fst_4244_; lean_object* v_snd_4245_; lean_object* v___x_4246_; 
v_val_4241_ = lean_ctor_get(v_x_4118_, 0);
v_a_4242_ = lean_ctor_get(v_head_4127_, 0);
lean_inc(v_a_4242_);
v_a_4243_ = lean_ctor_get(v_head_4127_, 1);
lean_inc_n(v_a_4243_, 2);
lean_dec_ref_known(v_head_4127_, 2);
v_fst_4244_ = lean_ctor_get(v_val_4241_, 0);
v_snd_4245_ = lean_ctor_get(v_val_4241_, 1);
v___x_4246_ = lp_lean_x2dftml_LeanFtml_00ufffdTokInfo(v_a_4243_);
if (lean_obj_tag(v___x_4246_) == 0)
{
lean_object* v___x_4247_; lean_object* v_acc_4248_; 
lean_inc_ref(v_doc_4114_);
lean_inc_ref(v_conf_4113_);
lean_inc_ref(v_dispatch_4112_);
v___x_4247_ = lp_lean_x2dftml_LeanFtml_renderCaptured(v_dispatch_4112_, v_conf_4113_, v_doc_4114_, v_a_4242_, v_a_4243_);
v_acc_4248_ = l_List_appendTR___redArg(v_x_4119_, v___x_4247_);
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_tail_4128_;
v_x_4117_ = v_isZero_4121_;
v_x_4119_ = v_acc_4248_;
goto _start;
}
else
{
lean_object* v_val_4250_; uint8_t v___x_4251_; 
v_val_4250_ = lean_ctor_get(v___x_4246_, 0);
lean_inc(v_val_4250_);
lean_dec_ref_known(v___x_4246_, 1);
v___x_4251_ = lp_lean_x2dftml_LeanFtml_00ufffdIsParaEnd(v_val_4250_);
if (v___x_4251_ == 0)
{
lean_object* v___x_4252_; lean_object* v_acc_4253_; uint8_t v_edge_4254_; 
lean_inc_ref(v_doc_4114_);
lean_inc_ref(v_conf_4113_);
lean_inc_ref(v_dispatch_4112_);
v___x_4252_ = lp_lean_x2dftml_LeanFtml_renderCaptured(v_dispatch_4112_, v_conf_4113_, v_doc_4114_, v_a_4242_, v_a_4243_);
v_acc_4253_ = l_List_appendTR___redArg(v_x_4119_, v___x_4252_);
v_edge_4254_ = lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart(v_val_4250_);
lean_dec(v_val_4250_);
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_tail_4128_;
v_x_4117_ = v_edge_4254_;
v_x_4119_ = v_acc_4253_;
goto _start;
}
else
{
lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v_acc_4259_; lean_object* v___x_4260_; 
lean_inc(v_snd_4245_);
lean_inc(v_fst_4244_);
lean_dec(v_val_4250_);
lean_dec(v_a_4243_);
lean_dec(v_a_4242_);
lean_dec_ref_known(v_x_4118_, 1);
v___x_4256_ = lp_lean_x2dftml_LeanFtml_swallowedBreaks;
v___x_4257_ = l_List_appendTR___redArg(v_x_4119_, v___x_4256_);
lean_inc_ref(v_doc_4114_);
lean_inc_ref(v_conf_4113_);
lean_inc_ref(v_dispatch_4112_);
v___x_4258_ = lp_lean_x2dftml_LeanFtml_renderCaptured(v_dispatch_4112_, v_conf_4113_, v_doc_4114_, v_fst_4244_, v_snd_4245_);
v_acc_4259_ = l_List_appendTR___redArg(v___x_4257_, v___x_4258_);
v___x_4260_ = lean_box(0);
v_x_4115_ = v_n_4130_;
v_x_4116_ = v_tail_4128_;
v_x_4117_ = v_isZero_4121_;
v_x_4118_ = v___x_4260_;
v_x_4119_ = v_acc_4259_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdWalk___boxed(lean_object* v_dispatch_4262_, lean_object* v_conf_4263_, lean_object* v_doc_4264_, lean_object* v_x_4265_, lean_object* v_x_4266_, lean_object* v_x_4267_, lean_object* v_x_4268_, lean_object* v_x_4269_){
_start:
{
uint8_t v_x_1100__boxed_4270_; lean_object* v_res_4271_; 
v_x_1100__boxed_4270_ = lean_unbox(v_x_4267_);
v_res_4271_ = lp_lean_x2dftml_LeanFtml_00ufffdWalk(v_dispatch_4262_, v_conf_4263_, v_doc_4264_, v_x_4265_, v_x_4266_, v_x_1100__boxed_4270_, v_x_4268_, v_x_4269_);
return v_res_4271_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdBytes(lean_object* v_dispatch_4272_, lean_object* v_lookup_4273_, lean_object* v_conf_4274_, lean_object* v_doc_4275_, lean_object* v_work_4276_){
_start:
{
lean_object* v_atoms_4277_; uint8_t v___x_4278_; 
v_atoms_4277_ = lp_lean_x2dftml_LeanFtml_flattenUfffd(v_lookup_4273_, v_work_4276_);
lean_inc(v_atoms_4277_);
v___x_4278_ = lp_lean_x2dftml_LeanFtml_00ufffdOnlyFakesPara(v_atoms_4277_);
if (v___x_4278_ == 0)
{
lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; 
v___x_4279_ = l_List_lengthTR___redArg(v_atoms_4277_);
v___x_4280_ = lean_unsigned_to_nat(1u);
v___x_4281_ = lean_nat_add(v___x_4279_, v___x_4280_);
lean_dec(v___x_4279_);
v___x_4282_ = lean_box(0);
v___x_4283_ = lean_box(0);
v___x_4284_ = lp_lean_x2dftml_LeanFtml_00ufffdWalk(v_dispatch_4272_, v_conf_4274_, v_doc_4275_, v___x_4281_, v_atoms_4277_, v___x_4278_, v___x_4282_, v___x_4283_);
return v___x_4284_;
}
else
{
lean_object* v___x_4285_; 
lean_dec(v_atoms_4277_);
lean_dec_ref(v_doc_4275_);
lean_dec_ref(v_conf_4274_);
lean_dec_ref(v_dispatch_4272_);
v___x_4285_ = lean_box(0);
return v___x_4285_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_renderSegsLoop_spec__0(lean_object* v_a_4286_, lean_object* v_x_4287_){
_start:
{
if (lean_obj_tag(v_x_4287_) == 0)
{
uint8_t v___x_4288_; 
v___x_4288_ = 0;
return v___x_4288_;
}
else
{
lean_object* v_head_4289_; lean_object* v_tail_4290_; uint8_t v___x_4291_; 
v_head_4289_ = lean_ctor_get(v_x_4287_, 0);
v_tail_4290_ = lean_ctor_get(v_x_4287_, 1);
v___x_4291_ = lean_string_dec_eq(v_a_4286_, v_head_4289_);
if (v___x_4291_ == 0)
{
v_x_4287_ = v_tail_4290_;
goto _start;
}
else
{
return v___x_4291_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_elem___at___00LeanFtml_renderSegsLoop_spec__0___boxed(lean_object* v_a_4293_, lean_object* v_x_4294_){
_start:
{
uint8_t v_res_4295_; lean_object* v_r_4296_; 
v_res_4295_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_renderSegsLoop_spec__0(v_a_4293_, v_x_4294_);
lean_dec(v_x_4294_);
lean_dec_ref(v_a_4293_);
v_r_4296_ = lean_box(v_res_4295_);
return v_r_4296_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderSegsLoop(lean_object* v_dispatch_4297_, lean_object* v_lookup_4298_, lean_object* v_conf_4299_, lean_object* v_doc_4300_, lean_object* v_x_4301_){
_start:
{
if (lean_obj_tag(v_x_4301_) == 0)
{
lean_object* v___x_4302_; 
lean_dec_ref(v_doc_4300_);
lean_dec_ref(v_conf_4299_);
lean_dec_ref(v_lookup_4298_);
lean_dec_ref(v_dispatch_4297_);
v___x_4302_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instInhabitedRenderOutcome_default___closed__0));
return v___x_4302_;
}
else
{
lean_object* v_head_4303_; lean_object* v_tail_4304_; lean_object* v___x_4306_; uint8_t v_isShared_4307_; uint8_t v_isSharedCheck_4379_; 
v_head_4303_ = lean_ctor_get(v_x_4301_, 0);
v_tail_4304_ = lean_ctor_get(v_x_4301_, 1);
v_isSharedCheck_4379_ = !lean_is_exclusive(v_x_4301_);
if (v_isSharedCheck_4379_ == 0)
{
v___x_4306_ = v_x_4301_;
v_isShared_4307_ = v_isSharedCheck_4379_;
goto v_resetjp_4305_;
}
else
{
lean_inc(v_tail_4304_);
lean_inc(v_head_4303_);
lean_dec(v_x_4301_);
v___x_4306_ = lean_box(0);
v_isShared_4307_ = v_isSharedCheck_4379_;
goto v_resetjp_4305_;
}
v_resetjp_4305_:
{
lean_object* v_tail_4308_; 
lean_inc_ref(v_doc_4300_);
lean_inc_ref(v_conf_4299_);
lean_inc_ref(v_lookup_4298_);
lean_inc_ref(v_dispatch_4297_);
v_tail_4308_ = lp_lean_x2dftml_LeanFtml_renderSegsLoop(v_dispatch_4297_, v_lookup_4298_, v_conf_4299_, v_doc_4300_, v_tail_4304_);
if (lean_obj_tag(v_head_4303_) == 0)
{
lean_object* v_a_4309_; lean_object* v_output_4310_; lean_object* v_unmirrored_4311_; lean_object* v_missingKeys_4312_; lean_object* v___x_4314_; uint8_t v_isShared_4315_; uint8_t v_isSharedCheck_4321_; 
lean_del_object(v___x_4306_);
lean_dec_ref(v_doc_4300_);
lean_dec_ref(v_conf_4299_);
lean_dec_ref(v_lookup_4298_);
lean_dec_ref(v_dispatch_4297_);
v_a_4309_ = lean_ctor_get(v_head_4303_, 0);
lean_inc(v_a_4309_);
lean_dec_ref_known(v_head_4303_, 1);
v_output_4310_ = lean_ctor_get(v_tail_4308_, 0);
v_unmirrored_4311_ = lean_ctor_get(v_tail_4308_, 1);
v_missingKeys_4312_ = lean_ctor_get(v_tail_4308_, 2);
v_isSharedCheck_4321_ = !lean_is_exclusive(v_tail_4308_);
if (v_isSharedCheck_4321_ == 0)
{
v___x_4314_ = v_tail_4308_;
v_isShared_4315_ = v_isSharedCheck_4321_;
goto v_resetjp_4313_;
}
else
{
lean_inc(v_missingKeys_4312_);
lean_inc(v_unmirrored_4311_);
lean_inc(v_output_4310_);
lean_dec(v_tail_4308_);
v___x_4314_ = lean_box(0);
v_isShared_4315_ = v_isSharedCheck_4321_;
goto v_resetjp_4313_;
}
v_resetjp_4313_:
{
lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4319_; 
v___x_4316_ = lp_lean_x2dftml_LeanFtml_xhtmlPreText(v_a_4309_);
lean_dec(v_a_4309_);
v___x_4317_ = l_List_appendTR___redArg(v___x_4316_, v_output_4310_);
if (v_isShared_4315_ == 0)
{
lean_ctor_set(v___x_4314_, 0, v___x_4317_);
v___x_4319_ = v___x_4314_;
goto v_reusejp_4318_;
}
else
{
lean_object* v_reuseFailAlloc_4320_; 
v_reuseFailAlloc_4320_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4320_, 0, v___x_4317_);
lean_ctor_set(v_reuseFailAlloc_4320_, 1, v_unmirrored_4311_);
lean_ctor_set(v_reuseFailAlloc_4320_, 2, v_missingKeys_4312_);
v___x_4319_ = v_reuseFailAlloc_4320_;
goto v_reusejp_4318_;
}
v_reusejp_4318_:
{
return v___x_4319_;
}
}
}
else
{
lean_object* v_a_4322_; lean_object* v___x_4323_; 
v_a_4322_ = lean_ctor_get(v_head_4303_, 0);
lean_inc_n(v_a_4322_, 2);
lean_dec_ref_known(v_head_4303_, 1);
v___x_4323_ = lean_apply_1(v_lookup_4298_, v_a_4322_);
if (lean_obj_tag(v___x_4323_) == 0)
{
lean_object* v_output_4324_; lean_object* v_unmirrored_4325_; lean_object* v_missingKeys_4326_; lean_object* v___x_4328_; uint8_t v_isShared_4329_; uint8_t v_isSharedCheck_4342_; 
lean_dec_ref(v_doc_4300_);
lean_dec_ref(v_conf_4299_);
lean_dec_ref(v_dispatch_4297_);
v_output_4324_ = lean_ctor_get(v_tail_4308_, 0);
v_unmirrored_4325_ = lean_ctor_get(v_tail_4308_, 1);
v_missingKeys_4326_ = lean_ctor_get(v_tail_4308_, 2);
v_isSharedCheck_4342_ = !lean_is_exclusive(v_tail_4308_);
if (v_isSharedCheck_4342_ == 0)
{
v___x_4328_ = v_tail_4308_;
v_isShared_4329_ = v_isSharedCheck_4342_;
goto v_resetjp_4327_;
}
else
{
lean_inc(v_missingKeys_4326_);
lean_inc(v_unmirrored_4325_);
lean_inc(v_output_4324_);
lean_dec(v_tail_4308_);
v___x_4328_ = lean_box(0);
v_isShared_4329_ = v_isSharedCheck_4342_;
goto v_resetjp_4327_;
}
v_resetjp_4327_:
{
lean_object* v___x_4330_; lean_object* v___x_4331_; uint8_t v___x_4332_; 
lean_inc(v_a_4322_);
v___x_4330_ = lp_lean_x2dftml_LeanFtml_missingKeyFallback(v_a_4322_);
v___x_4331_ = l_List_appendTR___redArg(v___x_4330_, v_output_4324_);
v___x_4332_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_a_4322_, v_missingKeys_4326_);
if (v___x_4332_ == 0)
{
lean_object* v___x_4334_; 
if (v_isShared_4307_ == 0)
{
lean_ctor_set(v___x_4306_, 1, v_missingKeys_4326_);
lean_ctor_set(v___x_4306_, 0, v_a_4322_);
v___x_4334_ = v___x_4306_;
goto v_reusejp_4333_;
}
else
{
lean_object* v_reuseFailAlloc_4338_; 
v_reuseFailAlloc_4338_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4338_, 0, v_a_4322_);
lean_ctor_set(v_reuseFailAlloc_4338_, 1, v_missingKeys_4326_);
v___x_4334_ = v_reuseFailAlloc_4338_;
goto v_reusejp_4333_;
}
v_reusejp_4333_:
{
lean_object* v___x_4336_; 
if (v_isShared_4329_ == 0)
{
lean_ctor_set(v___x_4328_, 2, v___x_4334_);
lean_ctor_set(v___x_4328_, 0, v___x_4331_);
v___x_4336_ = v___x_4328_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v___x_4331_);
lean_ctor_set(v_reuseFailAlloc_4337_, 1, v_unmirrored_4325_);
lean_ctor_set(v_reuseFailAlloc_4337_, 2, v___x_4334_);
v___x_4336_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4335_;
}
v_reusejp_4335_:
{
return v___x_4336_;
}
}
}
else
{
lean_object* v___x_4340_; 
lean_dec(v_a_4322_);
lean_del_object(v___x_4306_);
if (v_isShared_4329_ == 0)
{
lean_ctor_set(v___x_4328_, 0, v___x_4331_);
v___x_4340_ = v___x_4328_;
goto v_reusejp_4339_;
}
else
{
lean_object* v_reuseFailAlloc_4341_; 
v_reuseFailAlloc_4341_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4341_, 0, v___x_4331_);
lean_ctor_set(v_reuseFailAlloc_4341_, 1, v_unmirrored_4325_);
lean_ctor_set(v_reuseFailAlloc_4341_, 2, v_missingKeys_4326_);
v___x_4340_ = v_reuseFailAlloc_4341_;
goto v_reusejp_4339_;
}
v_reusejp_4339_:
{
return v___x_4340_;
}
}
}
}
else
{
lean_object* v_val_4343_; lean_object* v_rule_4344_; lean_object* v_opts_4345_; lean_object* v___x_4346_; 
v_val_4343_ = lean_ctor_get(v___x_4323_, 0);
lean_inc(v_val_4343_);
lean_dec_ref_known(v___x_4323_, 1);
v_rule_4344_ = lean_ctor_get(v_val_4343_, 0);
lean_inc_ref(v_rule_4344_);
v_opts_4345_ = lean_ctor_get(v_val_4343_, 1);
lean_inc(v_opts_4345_);
lean_dec(v_val_4343_);
v___x_4346_ = lp_lean_x2dftml_LeanFtml_renderRuleOfName(v_rule_4344_);
if (lean_obj_tag(v___x_4346_) == 0)
{
lean_object* v_output_4347_; lean_object* v_unmirrored_4348_; lean_object* v_missingKeys_4349_; lean_object* v___x_4351_; uint8_t v_isShared_4352_; uint8_t v_isSharedCheck_4365_; 
lean_dec(v_opts_4345_);
lean_dec_ref(v_doc_4300_);
lean_dec_ref(v_conf_4299_);
lean_dec_ref(v_dispatch_4297_);
v_output_4347_ = lean_ctor_get(v_tail_4308_, 0);
v_unmirrored_4348_ = lean_ctor_get(v_tail_4308_, 1);
v_missingKeys_4349_ = lean_ctor_get(v_tail_4308_, 2);
v_isSharedCheck_4365_ = !lean_is_exclusive(v_tail_4308_);
if (v_isSharedCheck_4365_ == 0)
{
v___x_4351_ = v_tail_4308_;
v_isShared_4352_ = v_isSharedCheck_4365_;
goto v_resetjp_4350_;
}
else
{
lean_inc(v_missingKeys_4349_);
lean_inc(v_unmirrored_4348_);
lean_inc(v_output_4347_);
lean_dec(v_tail_4308_);
v___x_4351_ = lean_box(0);
v_isShared_4352_ = v_isSharedCheck_4365_;
goto v_resetjp_4350_;
}
v_resetjp_4350_:
{
lean_object* v___x_4353_; lean_object* v___x_4354_; uint8_t v___x_4355_; 
lean_inc_ref(v_rule_4344_);
v___x_4353_ = lp_lean_x2dftml_LeanFtml_unmirroredFallback(v_rule_4344_, v_a_4322_);
v___x_4354_ = l_List_appendTR___redArg(v___x_4353_, v_output_4347_);
v___x_4355_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_renderSegsLoop_spec__0(v_rule_4344_, v_unmirrored_4348_);
if (v___x_4355_ == 0)
{
lean_object* v___x_4357_; 
if (v_isShared_4307_ == 0)
{
lean_ctor_set(v___x_4306_, 1, v_unmirrored_4348_);
lean_ctor_set(v___x_4306_, 0, v_rule_4344_);
v___x_4357_ = v___x_4306_;
goto v_reusejp_4356_;
}
else
{
lean_object* v_reuseFailAlloc_4361_; 
v_reuseFailAlloc_4361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4361_, 0, v_rule_4344_);
lean_ctor_set(v_reuseFailAlloc_4361_, 1, v_unmirrored_4348_);
v___x_4357_ = v_reuseFailAlloc_4361_;
goto v_reusejp_4356_;
}
v_reusejp_4356_:
{
lean_object* v___x_4359_; 
if (v_isShared_4352_ == 0)
{
lean_ctor_set(v___x_4351_, 1, v___x_4357_);
lean_ctor_set(v___x_4351_, 0, v___x_4354_);
v___x_4359_ = v___x_4351_;
goto v_reusejp_4358_;
}
else
{
lean_object* v_reuseFailAlloc_4360_; 
v_reuseFailAlloc_4360_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4360_, 0, v___x_4354_);
lean_ctor_set(v_reuseFailAlloc_4360_, 1, v___x_4357_);
lean_ctor_set(v_reuseFailAlloc_4360_, 2, v_missingKeys_4349_);
v___x_4359_ = v_reuseFailAlloc_4360_;
goto v_reusejp_4358_;
}
v_reusejp_4358_:
{
return v___x_4359_;
}
}
}
else
{
lean_object* v___x_4363_; 
lean_dec_ref(v_rule_4344_);
lean_del_object(v___x_4306_);
if (v_isShared_4352_ == 0)
{
lean_ctor_set(v___x_4351_, 0, v___x_4354_);
v___x_4363_ = v___x_4351_;
goto v_reusejp_4362_;
}
else
{
lean_object* v_reuseFailAlloc_4364_; 
v_reuseFailAlloc_4364_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4364_, 0, v___x_4354_);
lean_ctor_set(v_reuseFailAlloc_4364_, 1, v_unmirrored_4348_);
lean_ctor_set(v_reuseFailAlloc_4364_, 2, v_missingKeys_4349_);
v___x_4363_ = v_reuseFailAlloc_4364_;
goto v_reusejp_4362_;
}
v_reusejp_4362_:
{
return v___x_4363_;
}
}
}
}
else
{
lean_object* v_val_4366_; lean_object* v_output_4367_; lean_object* v_unmirrored_4368_; lean_object* v_missingKeys_4369_; lean_object* v___x_4371_; uint8_t v_isShared_4372_; uint8_t v_isSharedCheck_4378_; 
lean_dec_ref(v_rule_4344_);
lean_dec(v_a_4322_);
lean_del_object(v___x_4306_);
v_val_4366_ = lean_ctor_get(v___x_4346_, 0);
lean_inc(v_val_4366_);
lean_dec_ref_known(v___x_4346_, 1);
v_output_4367_ = lean_ctor_get(v_tail_4308_, 0);
v_unmirrored_4368_ = lean_ctor_get(v_tail_4308_, 1);
v_missingKeys_4369_ = lean_ctor_get(v_tail_4308_, 2);
v_isSharedCheck_4378_ = !lean_is_exclusive(v_tail_4308_);
if (v_isSharedCheck_4378_ == 0)
{
v___x_4371_ = v_tail_4308_;
v_isShared_4372_ = v_isSharedCheck_4378_;
goto v_resetjp_4370_;
}
else
{
lean_inc(v_missingKeys_4369_);
lean_inc(v_unmirrored_4368_);
lean_inc(v_output_4367_);
lean_dec(v_tail_4308_);
v___x_4371_ = lean_box(0);
v_isShared_4372_ = v_isSharedCheck_4378_;
goto v_resetjp_4370_;
}
v_resetjp_4370_:
{
lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4376_; 
v___x_4373_ = lean_apply_4(v_dispatch_4297_, v_val_4366_, v_conf_4299_, v_doc_4300_, v_opts_4345_);
v___x_4374_ = l_List_appendTR___redArg(v___x_4373_, v_output_4367_);
if (v_isShared_4372_ == 0)
{
lean_ctor_set(v___x_4371_, 0, v___x_4374_);
v___x_4376_ = v___x_4371_;
goto v_reusejp_4375_;
}
else
{
lean_object* v_reuseFailAlloc_4377_; 
v_reuseFailAlloc_4377_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4377_, 0, v___x_4374_);
lean_ctor_set(v_reuseFailAlloc_4377_, 1, v_unmirrored_4368_);
lean_ctor_set(v_reuseFailAlloc_4377_, 2, v_missingKeys_4369_);
v___x_4376_ = v_reuseFailAlloc_4377_;
goto v_reusejp_4375_;
}
v_reusejp_4375_:
{
return v___x_4376_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_renderWith_spec__0(lean_object* v_x_4380_){
_start:
{
if (lean_obj_tag(v_x_4380_) == 0)
{
uint8_t v___x_4381_; 
v___x_4381_ = 0;
return v___x_4381_;
}
else
{
lean_object* v_head_4382_; lean_object* v_tail_4383_; uint8_t v___x_4384_; 
v_head_4382_ = lean_ctor_get(v_x_4380_, 0);
v_tail_4383_ = lean_ctor_get(v_x_4380_, 1);
v___x_4384_ = lp_lean_x2dftml_LeanFtml_segHasUfffd(v_head_4382_);
if (v___x_4384_ == 0)
{
v_x_4380_ = v_tail_4383_;
goto _start;
}
else
{
return v___x_4384_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_renderWith_spec__0___boxed(lean_object* v_x_4386_){
_start:
{
uint8_t v_res_4387_; lean_object* v_r_4388_; 
v_res_4387_ = lp_lean_x2dftml_List_any___at___00LeanFtml_renderWith_spec__0(v_x_4386_);
lean_dec(v_x_4386_);
v_r_4388_ = lean_box(v_res_4387_);
return v_r_4388_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderWith(lean_object* v_dispatch_4389_, lean_object* v_lookup_4390_, lean_object* v_conf_4391_, lean_object* v_work_4392_, lean_object* v_doc_4393_){
_start:
{
uint8_t v___x_4394_; 
v___x_4394_ = lp_lean_x2dftml_List_any___at___00LeanFtml_renderWith_spec__0(v_work_4392_);
if (v___x_4394_ == 0)
{
lean_object* v_raw_4395_; lean_object* v_output_4396_; lean_object* v_unmirrored_4397_; lean_object* v_missingKeys_4398_; lean_object* v___x_4400_; uint8_t v_isShared_4401_; uint8_t v_isSharedCheck_4406_; 
v_raw_4395_ = lp_lean_x2dftml_LeanFtml_renderSegsLoop(v_dispatch_4389_, v_lookup_4390_, v_conf_4391_, v_doc_4393_, v_work_4392_);
v_output_4396_ = lean_ctor_get(v_raw_4395_, 0);
v_unmirrored_4397_ = lean_ctor_get(v_raw_4395_, 1);
v_missingKeys_4398_ = lean_ctor_get(v_raw_4395_, 2);
v_isSharedCheck_4406_ = !lean_is_exclusive(v_raw_4395_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4400_ = v_raw_4395_;
v_isShared_4401_ = v_isSharedCheck_4406_;
goto v_resetjp_4399_;
}
else
{
lean_inc(v_missingKeys_4398_);
lean_inc(v_unmirrored_4397_);
lean_inc(v_output_4396_);
lean_dec(v_raw_4395_);
v___x_4400_ = lean_box(0);
v_isShared_4401_ = v_isSharedCheck_4406_;
goto v_resetjp_4399_;
}
v_resetjp_4399_:
{
lean_object* v___x_4402_; lean_object* v___x_4404_; 
v___x_4402_ = lp_lean_x2dftml_LeanFtml_postStripToc(v_output_4396_);
if (v_isShared_4401_ == 0)
{
lean_ctor_set(v___x_4400_, 0, v___x_4402_);
v___x_4404_ = v___x_4400_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v___x_4402_);
lean_ctor_set(v_reuseFailAlloc_4405_, 1, v_unmirrored_4397_);
lean_ctor_set(v_reuseFailAlloc_4405_, 2, v_missingKeys_4398_);
v___x_4404_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
return v___x_4404_;
}
}
}
else
{
lean_object* v_flags_4407_; lean_object* v_unmirrored_4408_; lean_object* v_missingKeys_4409_; lean_object* v___x_4411_; uint8_t v_isShared_4412_; uint8_t v_isSharedCheck_4418_; 
lean_inc(v_work_4392_);
lean_inc_ref(v_doc_4393_);
lean_inc_ref(v_conf_4391_);
lean_inc_ref(v_lookup_4390_);
lean_inc_ref(v_dispatch_4389_);
v_flags_4407_ = lp_lean_x2dftml_LeanFtml_renderSegsLoop(v_dispatch_4389_, v_lookup_4390_, v_conf_4391_, v_doc_4393_, v_work_4392_);
v_unmirrored_4408_ = lean_ctor_get(v_flags_4407_, 1);
v_missingKeys_4409_ = lean_ctor_get(v_flags_4407_, 2);
v_isSharedCheck_4418_ = !lean_is_exclusive(v_flags_4407_);
if (v_isSharedCheck_4418_ == 0)
{
lean_object* v_unused_4419_; 
v_unused_4419_ = lean_ctor_get(v_flags_4407_, 0);
lean_dec(v_unused_4419_);
v___x_4411_ = v_flags_4407_;
v_isShared_4412_ = v_isSharedCheck_4418_;
goto v_resetjp_4410_;
}
else
{
lean_inc(v_missingKeys_4409_);
lean_inc(v_unmirrored_4408_);
lean_dec(v_flags_4407_);
v___x_4411_ = lean_box(0);
v_isShared_4412_ = v_isSharedCheck_4418_;
goto v_resetjp_4410_;
}
v_resetjp_4410_:
{
lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4416_; 
v___x_4413_ = lp_lean_x2dftml_LeanFtml_00ufffdBytes(v_dispatch_4389_, v_lookup_4390_, v_conf_4391_, v_doc_4393_, v_work_4392_);
v___x_4414_ = lp_lean_x2dftml_LeanFtml_postStripToc(v___x_4413_);
if (v_isShared_4412_ == 0)
{
lean_ctor_set(v___x_4411_, 0, v___x_4414_);
v___x_4416_ = v___x_4411_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4417_; 
v_reuseFailAlloc_4417_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4417_, 0, v___x_4414_);
lean_ctor_set(v_reuseFailAlloc_4417_, 1, v_unmirrored_4408_);
lean_ctor_set(v_reuseFailAlloc_4417_, 2, v_missingKeys_4409_);
v___x_4416_ = v_reuseFailAlloc_4417_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
return v___x_4416_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__7_splitter___redArg(lean_object* v_x_4420_, lean_object* v_x_4421_, lean_object* v_h__1_4422_, lean_object* v_h__2_4423_, lean_object* v_h__3_4424_){
_start:
{
if (lean_obj_tag(v_x_4420_) == 0)
{
lean_object* v___x_4425_; 
lean_dec(v_h__3_4424_);
lean_dec(v_h__2_4423_);
v___x_4425_ = lean_apply_1(v_h__1_4422_, v_x_4421_);
return v___x_4425_;
}
else
{
lean_object* v_head_4426_; lean_object* v_tail_4427_; lean_object* v_zero_4428_; uint8_t v_isZero_4429_; 
lean_dec(v_h__1_4422_);
v_head_4426_ = lean_ctor_get(v_x_4420_, 0);
v_tail_4427_ = lean_ctor_get(v_x_4420_, 1);
v_zero_4428_ = lean_unsigned_to_nat(0u);
v_isZero_4429_ = lean_nat_dec_eq(v_x_4421_, v_zero_4428_);
if (v_isZero_4429_ == 1)
{
lean_object* v___x_4430_; 
lean_dec(v_h__3_4424_);
lean_dec(v_x_4421_);
v___x_4430_ = lean_apply_2(v_h__2_4423_, v_x_4420_, lean_box(0));
return v___x_4430_;
}
else
{
lean_object* v_one_4431_; lean_object* v_n_4432_; lean_object* v___x_4433_; 
lean_inc(v_tail_4427_);
lean_inc(v_head_4426_);
lean_dec_ref_known(v_x_4420_, 2);
lean_dec(v_h__2_4423_);
v_one_4431_ = lean_unsigned_to_nat(1u);
v_n_4432_ = lean_nat_sub(v_x_4421_, v_one_4431_);
lean_dec(v_x_4421_);
v___x_4433_ = lean_apply_3(v_h__3_4424_, v_head_4426_, v_tail_4427_, v_n_4432_);
return v___x_4433_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__7_splitter(lean_object* v_motive_4434_, lean_object* v_x_4435_, lean_object* v_x_4436_, lean_object* v_h__1_4437_, lean_object* v_h__2_4438_, lean_object* v_h__3_4439_){
_start:
{
if (lean_obj_tag(v_x_4435_) == 0)
{
lean_object* v___x_4440_; 
lean_dec(v_h__3_4439_);
lean_dec(v_h__2_4438_);
v___x_4440_ = lean_apply_1(v_h__1_4437_, v_x_4436_);
return v___x_4440_;
}
else
{
lean_object* v_head_4441_; lean_object* v_tail_4442_; lean_object* v_zero_4443_; uint8_t v_isZero_4444_; 
lean_dec(v_h__1_4437_);
v_head_4441_ = lean_ctor_get(v_x_4435_, 0);
v_tail_4442_ = lean_ctor_get(v_x_4435_, 1);
v_zero_4443_ = lean_unsigned_to_nat(0u);
v_isZero_4444_ = lean_nat_dec_eq(v_x_4436_, v_zero_4443_);
if (v_isZero_4444_ == 1)
{
lean_object* v___x_4445_; 
lean_dec(v_h__3_4439_);
lean_dec(v_x_4436_);
v___x_4445_ = lean_apply_2(v_h__2_4438_, v_x_4435_, lean_box(0));
return v___x_4445_;
}
else
{
lean_object* v_one_4446_; lean_object* v_n_4447_; lean_object* v___x_4448_; 
lean_inc(v_tail_4442_);
lean_inc(v_head_4441_);
lean_dec_ref_known(v_x_4435_, 2);
lean_dec(v_h__2_4438_);
v_one_4446_ = lean_unsigned_to_nat(1u);
v_n_4447_ = lean_nat_sub(v_x_4436_, v_one_4446_);
lean_dec(v_x_4436_);
v___x_4448_ = lean_apply_3(v_h__3_4439_, v_head_4441_, v_tail_4442_, v_n_4447_);
return v___x_4448_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__1_splitter___redArg(lean_object* v_rest_4449_, lean_object* v_h__1_4450_, lean_object* v_h__2_4451_){
_start:
{
if (lean_obj_tag(v_rest_4449_) == 0)
{
lean_object* v___x_4452_; lean_object* v___x_4453_; 
lean_dec(v_h__1_4450_);
v___x_4452_ = lean_box(0);
v___x_4453_ = lean_apply_1(v_h__2_4451_, v___x_4452_);
return v___x_4453_;
}
else
{
lean_object* v_head_4454_; lean_object* v_tail_4455_; lean_object* v___x_4456_; 
lean_dec(v_h__2_4451_);
v_head_4454_ = lean_ctor_get(v_rest_4449_, 0);
lean_inc(v_head_4454_);
v_tail_4455_ = lean_ctor_get(v_rest_4449_, 1);
lean_inc(v_tail_4455_);
lean_dec_ref_known(v_rest_4449_, 2);
v___x_4456_ = lean_apply_2(v_h__1_4450_, v_head_4454_, v_tail_4455_);
return v___x_4456_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__1_splitter(lean_object* v_motive_4457_, lean_object* v_rest_4458_, lean_object* v_h__1_4459_, lean_object* v_h__2_4460_){
_start:
{
if (lean_obj_tag(v_rest_4458_) == 0)
{
lean_object* v___x_4461_; lean_object* v___x_4462_; 
lean_dec(v_h__1_4459_);
v___x_4461_ = lean_box(0);
v___x_4462_ = lean_apply_1(v_h__2_4460_, v___x_4461_);
return v___x_4462_;
}
else
{
lean_object* v_head_4463_; lean_object* v_tail_4464_; lean_object* v___x_4465_; 
lean_dec(v_h__2_4460_);
v_head_4463_ = lean_ctor_get(v_rest_4458_, 0);
lean_inc(v_head_4463_);
v_tail_4464_ = lean_ctor_get(v_rest_4458_, 1);
lean_inc(v_tail_4464_);
lean_dec_ref_known(v_rest_4458_, 2);
v___x_4465_ = lean_apply_2(v_h__1_4459_, v_head_4463_, v_tail_4464_);
return v___x_4465_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__3_splitter___redArg(lean_object* v_rest_4466_, lean_object* v_h__1_4467_, lean_object* v_h__2_4468_){
_start:
{
if (lean_obj_tag(v_rest_4466_) == 1)
{
lean_object* v_tail_4469_; 
v_tail_4469_ = lean_ctor_get(v_rest_4466_, 1);
if (lean_obj_tag(v_tail_4469_) == 1)
{
lean_object* v_head_4470_; lean_object* v_head_4471_; lean_object* v_tail_4472_; lean_object* v___x_4473_; 
lean_inc_ref(v_tail_4469_);
lean_dec(v_h__2_4468_);
v_head_4470_ = lean_ctor_get(v_rest_4466_, 0);
lean_inc(v_head_4470_);
lean_dec_ref_known(v_rest_4466_, 2);
v_head_4471_ = lean_ctor_get(v_tail_4469_, 0);
lean_inc(v_head_4471_);
v_tail_4472_ = lean_ctor_get(v_tail_4469_, 1);
lean_inc(v_tail_4472_);
lean_dec_ref_known(v_tail_4469_, 2);
v___x_4473_ = lean_apply_3(v_h__1_4467_, v_head_4470_, v_head_4471_, v_tail_4472_);
return v___x_4473_;
}
else
{
lean_object* v___x_4474_; 
lean_dec(v_h__1_4467_);
v___x_4474_ = lean_apply_2(v_h__2_4468_, v_rest_4466_, lean_box(0));
return v___x_4474_;
}
}
else
{
lean_object* v___x_4475_; 
lean_dec(v_h__1_4467_);
v___x_4475_ = lean_apply_2(v_h__2_4468_, v_rest_4466_, lean_box(0));
return v___x_4475_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__3_splitter(lean_object* v_motive_4476_, lean_object* v_rest_4477_, lean_object* v_h__1_4478_, lean_object* v_h__2_4479_){
_start:
{
if (lean_obj_tag(v_rest_4477_) == 1)
{
lean_object* v_tail_4480_; 
v_tail_4480_ = lean_ctor_get(v_rest_4477_, 1);
if (lean_obj_tag(v_tail_4480_) == 1)
{
lean_object* v_head_4481_; lean_object* v_head_4482_; lean_object* v_tail_4483_; lean_object* v___x_4484_; 
lean_inc_ref(v_tail_4480_);
lean_dec(v_h__2_4479_);
v_head_4481_ = lean_ctor_get(v_rest_4477_, 0);
lean_inc(v_head_4481_);
lean_dec_ref_known(v_rest_4477_, 2);
v_head_4482_ = lean_ctor_get(v_tail_4480_, 0);
lean_inc(v_head_4482_);
v_tail_4483_ = lean_ctor_get(v_tail_4480_, 1);
lean_inc(v_tail_4483_);
lean_dec_ref_known(v_tail_4480_, 2);
v___x_4484_ = lean_apply_3(v_h__1_4478_, v_head_4481_, v_head_4482_, v_tail_4483_);
return v___x_4484_;
}
else
{
lean_object* v___x_4485_; 
lean_dec(v_h__1_4478_);
v___x_4485_ = lean_apply_2(v_h__2_4479_, v_rest_4477_, lean_box(0));
return v___x_4485_;
}
}
else
{
lean_object* v___x_4486_; 
lean_dec(v_h__1_4478_);
v___x_4486_ = lean_apply_2(v_h__2_4479_, v_rest_4477_, lean_box(0));
return v___x_4486_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__5_splitter___redArg(lean_object* v_rest_4487_, lean_object* v_h__1_4488_, lean_object* v_h__2_4489_){
_start:
{
if (lean_obj_tag(v_rest_4487_) == 1)
{
lean_object* v_tail_4490_; 
v_tail_4490_ = lean_ctor_get(v_rest_4487_, 1);
if (lean_obj_tag(v_tail_4490_) == 1)
{
lean_object* v_tail_4491_; 
v_tail_4491_ = lean_ctor_get(v_tail_4490_, 1);
if (lean_obj_tag(v_tail_4491_) == 1)
{
lean_object* v_head_4492_; lean_object* v_head_4493_; lean_object* v_head_4494_; lean_object* v_tail_4495_; lean_object* v___x_4496_; 
lean_inc_ref(v_tail_4491_);
lean_inc_ref(v_tail_4490_);
lean_dec(v_h__2_4489_);
v_head_4492_ = lean_ctor_get(v_rest_4487_, 0);
lean_inc(v_head_4492_);
lean_dec_ref_known(v_rest_4487_, 2);
v_head_4493_ = lean_ctor_get(v_tail_4490_, 0);
lean_inc(v_head_4493_);
lean_dec_ref_known(v_tail_4490_, 2);
v_head_4494_ = lean_ctor_get(v_tail_4491_, 0);
lean_inc(v_head_4494_);
v_tail_4495_ = lean_ctor_get(v_tail_4491_, 1);
lean_inc(v_tail_4495_);
lean_dec_ref_known(v_tail_4491_, 2);
v___x_4496_ = lean_apply_4(v_h__1_4488_, v_head_4492_, v_head_4493_, v_head_4494_, v_tail_4495_);
return v___x_4496_;
}
else
{
lean_object* v___x_4497_; 
lean_dec(v_h__1_4488_);
v___x_4497_ = lean_apply_2(v_h__2_4489_, v_rest_4487_, lean_box(0));
return v___x_4497_;
}
}
else
{
lean_object* v___x_4498_; 
lean_dec(v_h__1_4488_);
v___x_4498_ = lean_apply_2(v_h__2_4489_, v_rest_4487_, lean_box(0));
return v___x_4498_;
}
}
else
{
lean_object* v___x_4499_; 
lean_dec(v_h__1_4488_);
v___x_4499_ = lean_apply_2(v_h__2_4489_, v_rest_4487_, lean_box(0));
return v___x_4499_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_utf8Decode_go_match__5_splitter(lean_object* v_motive_4500_, lean_object* v_rest_4501_, lean_object* v_h__1_4502_, lean_object* v_h__2_4503_){
_start:
{
if (lean_obj_tag(v_rest_4501_) == 1)
{
lean_object* v_tail_4504_; 
v_tail_4504_ = lean_ctor_get(v_rest_4501_, 1);
if (lean_obj_tag(v_tail_4504_) == 1)
{
lean_object* v_tail_4505_; 
v_tail_4505_ = lean_ctor_get(v_tail_4504_, 1);
if (lean_obj_tag(v_tail_4505_) == 1)
{
lean_object* v_head_4506_; lean_object* v_head_4507_; lean_object* v_head_4508_; lean_object* v_tail_4509_; lean_object* v___x_4510_; 
lean_inc_ref(v_tail_4505_);
lean_inc_ref(v_tail_4504_);
lean_dec(v_h__2_4503_);
v_head_4506_ = lean_ctor_get(v_rest_4501_, 0);
lean_inc(v_head_4506_);
lean_dec_ref_known(v_rest_4501_, 2);
v_head_4507_ = lean_ctor_get(v_tail_4504_, 0);
lean_inc(v_head_4507_);
lean_dec_ref_known(v_tail_4504_, 2);
v_head_4508_ = lean_ctor_get(v_tail_4505_, 0);
lean_inc(v_head_4508_);
v_tail_4509_ = lean_ctor_get(v_tail_4505_, 1);
lean_inc(v_tail_4509_);
lean_dec_ref_known(v_tail_4505_, 2);
v___x_4510_ = lean_apply_4(v_h__1_4502_, v_head_4506_, v_head_4507_, v_head_4508_, v_tail_4509_);
return v___x_4510_;
}
else
{
lean_object* v___x_4511_; 
lean_dec(v_h__1_4502_);
v___x_4511_ = lean_apply_2(v_h__2_4503_, v_rest_4501_, lean_box(0));
return v___x_4511_;
}
}
else
{
lean_object* v___x_4512_; 
lean_dec(v_h__1_4502_);
v___x_4512_ = lean_apply_2(v_h__2_4503_, v_rest_4501_, lean_box(0));
return v___x_4512_;
}
}
else
{
lean_object* v___x_4513_; 
lean_dec(v_h__1_4502_);
v___x_4513_ = lean_apply_2(v_h__2_4503_, v_rest_4501_, lean_box(0));
return v___x_4513_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__7_splitter___redArg(lean_object* v_x_4514_, lean_object* v_x_4515_, lean_object* v_h__1_4516_, lean_object* v_h__2_4517_, lean_object* v_h__3_4518_){
_start:
{
if (lean_obj_tag(v_x_4514_) == 0)
{
lean_object* v___x_4519_; 
lean_dec(v_h__3_4518_);
lean_dec(v_h__2_4517_);
v___x_4519_ = lean_apply_1(v_h__1_4516_, v_x_4515_);
return v___x_4519_;
}
else
{
lean_object* v_head_4520_; lean_object* v_tail_4521_; lean_object* v_zero_4522_; uint8_t v_isZero_4523_; 
lean_dec(v_h__1_4516_);
v_head_4520_ = lean_ctor_get(v_x_4514_, 0);
v_tail_4521_ = lean_ctor_get(v_x_4514_, 1);
v_zero_4522_ = lean_unsigned_to_nat(0u);
v_isZero_4523_ = lean_nat_dec_eq(v_x_4515_, v_zero_4522_);
if (v_isZero_4523_ == 1)
{
lean_object* v___x_4524_; 
lean_dec(v_h__3_4518_);
lean_dec(v_x_4515_);
v___x_4524_ = lean_apply_2(v_h__2_4517_, v_x_4514_, lean_box(0));
return v___x_4524_;
}
else
{
lean_object* v_one_4525_; lean_object* v_n_4526_; lean_object* v___x_4527_; 
lean_inc(v_tail_4521_);
lean_inc(v_head_4520_);
lean_dec_ref_known(v_x_4514_, 2);
lean_dec(v_h__2_4517_);
v_one_4525_ = lean_unsigned_to_nat(1u);
v_n_4526_ = lean_nat_sub(v_x_4515_, v_one_4525_);
lean_dec(v_x_4515_);
v___x_4527_ = lean_apply_3(v_h__3_4518_, v_head_4520_, v_tail_4521_, v_n_4526_);
return v___x_4527_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__7_splitter(lean_object* v_motive_4528_, lean_object* v_x_4529_, lean_object* v_x_4530_, lean_object* v_h__1_4531_, lean_object* v_h__2_4532_, lean_object* v_h__3_4533_){
_start:
{
if (lean_obj_tag(v_x_4529_) == 0)
{
lean_object* v___x_4534_; 
lean_dec(v_h__3_4533_);
lean_dec(v_h__2_4532_);
v___x_4534_ = lean_apply_1(v_h__1_4531_, v_x_4530_);
return v___x_4534_;
}
else
{
lean_object* v_head_4535_; lean_object* v_tail_4536_; lean_object* v_zero_4537_; uint8_t v_isZero_4538_; 
lean_dec(v_h__1_4531_);
v_head_4535_ = lean_ctor_get(v_x_4529_, 0);
v_tail_4536_ = lean_ctor_get(v_x_4529_, 1);
v_zero_4537_ = lean_unsigned_to_nat(0u);
v_isZero_4538_ = lean_nat_dec_eq(v_x_4530_, v_zero_4537_);
if (v_isZero_4538_ == 1)
{
lean_object* v___x_4539_; 
lean_dec(v_h__3_4533_);
lean_dec(v_x_4530_);
v___x_4539_ = lean_apply_2(v_h__2_4532_, v_x_4529_, lean_box(0));
return v___x_4539_;
}
else
{
lean_object* v_one_4540_; lean_object* v_n_4541_; lean_object* v___x_4542_; 
lean_inc(v_tail_4536_);
lean_inc(v_head_4535_);
lean_dec_ref_known(v_x_4529_, 2);
lean_dec(v_h__2_4532_);
v_one_4540_ = lean_unsigned_to_nat(1u);
v_n_4541_ = lean_nat_sub(v_x_4530_, v_one_4540_);
lean_dec(v_x_4530_);
v___x_4542_ = lean_apply_3(v_h__3_4533_, v_head_4535_, v_tail_4536_, v_n_4541_);
return v___x_4542_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__1_splitter___redArg(lean_object* v_rest_4543_, lean_object* v_h__1_4544_, lean_object* v_h__2_4545_){
_start:
{
if (lean_obj_tag(v_rest_4543_) == 0)
{
lean_object* v___x_4546_; lean_object* v___x_4547_; 
lean_dec(v_h__1_4544_);
v___x_4546_ = lean_box(0);
v___x_4547_ = lean_apply_1(v_h__2_4545_, v___x_4546_);
return v___x_4547_;
}
else
{
lean_object* v_head_4548_; lean_object* v_tail_4549_; lean_object* v___x_4550_; 
lean_dec(v_h__2_4545_);
v_head_4548_ = lean_ctor_get(v_rest_4543_, 0);
lean_inc(v_head_4548_);
v_tail_4549_ = lean_ctor_get(v_rest_4543_, 1);
lean_inc(v_tail_4549_);
lean_dec_ref_known(v_rest_4543_, 2);
v___x_4550_ = lean_apply_2(v_h__1_4544_, v_head_4548_, v_tail_4549_);
return v___x_4550_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__1_splitter(lean_object* v_motive_4551_, lean_object* v_rest_4552_, lean_object* v_h__1_4553_, lean_object* v_h__2_4554_){
_start:
{
if (lean_obj_tag(v_rest_4552_) == 0)
{
lean_object* v___x_4555_; lean_object* v___x_4556_; 
lean_dec(v_h__1_4553_);
v___x_4555_ = lean_box(0);
v___x_4556_ = lean_apply_1(v_h__2_4554_, v___x_4555_);
return v___x_4556_;
}
else
{
lean_object* v_head_4557_; lean_object* v_tail_4558_; lean_object* v___x_4559_; 
lean_dec(v_h__2_4554_);
v_head_4557_ = lean_ctor_get(v_rest_4552_, 0);
lean_inc(v_head_4557_);
v_tail_4558_ = lean_ctor_get(v_rest_4552_, 1);
lean_inc(v_tail_4558_);
lean_dec_ref_known(v_rest_4552_, 2);
v___x_4559_ = lean_apply_2(v_h__1_4553_, v_head_4557_, v_tail_4558_);
return v___x_4559_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__3_splitter___redArg(lean_object* v_rest_4560_, lean_object* v_h__1_4561_, lean_object* v_h__2_4562_, lean_object* v_h__3_4563_){
_start:
{
if (lean_obj_tag(v_rest_4560_) == 0)
{
lean_object* v___x_4564_; lean_object* v___x_4565_; 
lean_dec(v_h__2_4562_);
lean_dec(v_h__1_4561_);
v___x_4564_ = lean_box(0);
v___x_4565_ = lean_apply_1(v_h__3_4563_, v___x_4564_);
return v___x_4565_;
}
else
{
lean_object* v_tail_4566_; 
lean_dec(v_h__3_4563_);
v_tail_4566_ = lean_ctor_get(v_rest_4560_, 1);
if (lean_obj_tag(v_tail_4566_) == 0)
{
lean_object* v_head_4567_; lean_object* v___x_4568_; 
lean_dec(v_h__1_4561_);
v_head_4567_ = lean_ctor_get(v_rest_4560_, 0);
lean_inc(v_head_4567_);
lean_dec_ref_known(v_rest_4560_, 2);
v___x_4568_ = lean_apply_1(v_h__2_4562_, v_head_4567_);
return v___x_4568_;
}
else
{
lean_object* v_head_4569_; lean_object* v_head_4570_; lean_object* v_tail_4571_; lean_object* v___x_4572_; 
lean_inc_ref(v_tail_4566_);
lean_dec(v_h__2_4562_);
v_head_4569_ = lean_ctor_get(v_rest_4560_, 0);
lean_inc(v_head_4569_);
lean_dec_ref_known(v_rest_4560_, 2);
v_head_4570_ = lean_ctor_get(v_tail_4566_, 0);
lean_inc(v_head_4570_);
v_tail_4571_ = lean_ctor_get(v_tail_4566_, 1);
lean_inc(v_tail_4571_);
lean_dec_ref_known(v_tail_4566_, 2);
v___x_4572_ = lean_apply_3(v_h__1_4561_, v_head_4569_, v_head_4570_, v_tail_4571_);
return v___x_4572_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__3_splitter(lean_object* v_motive_4573_, lean_object* v_rest_4574_, lean_object* v_h__1_4575_, lean_object* v_h__2_4576_, lean_object* v_h__3_4577_){
_start:
{
if (lean_obj_tag(v_rest_4574_) == 0)
{
lean_object* v___x_4578_; lean_object* v___x_4579_; 
lean_dec(v_h__2_4576_);
lean_dec(v_h__1_4575_);
v___x_4578_ = lean_box(0);
v___x_4579_ = lean_apply_1(v_h__3_4577_, v___x_4578_);
return v___x_4579_;
}
else
{
lean_object* v_tail_4580_; 
lean_dec(v_h__3_4577_);
v_tail_4580_ = lean_ctor_get(v_rest_4574_, 1);
if (lean_obj_tag(v_tail_4580_) == 0)
{
lean_object* v_head_4581_; lean_object* v___x_4582_; 
lean_dec(v_h__1_4575_);
v_head_4581_ = lean_ctor_get(v_rest_4574_, 0);
lean_inc(v_head_4581_);
lean_dec_ref_known(v_rest_4574_, 2);
v___x_4582_ = lean_apply_1(v_h__2_4576_, v_head_4581_);
return v___x_4582_;
}
else
{
lean_object* v_head_4583_; lean_object* v_head_4584_; lean_object* v_tail_4585_; lean_object* v___x_4586_; 
lean_inc_ref(v_tail_4580_);
lean_dec(v_h__2_4576_);
v_head_4583_ = lean_ctor_get(v_rest_4574_, 0);
lean_inc(v_head_4583_);
lean_dec_ref_known(v_rest_4574_, 2);
v_head_4584_ = lean_ctor_get(v_tail_4580_, 0);
lean_inc(v_head_4584_);
v_tail_4585_ = lean_ctor_get(v_tail_4580_, 1);
lean_inc(v_tail_4585_);
lean_dec_ref_known(v_tail_4580_, 2);
v___x_4586_ = lean_apply_3(v_h__1_4575_, v_head_4583_, v_head_4584_, v_tail_4585_);
return v___x_4586_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__5_splitter___redArg(lean_object* v_rest_4587_, lean_object* v_h__1_4588_, lean_object* v_h__2_4589_, lean_object* v_h__3_4590_, lean_object* v_h__4_4591_){
_start:
{
if (lean_obj_tag(v_rest_4587_) == 0)
{
lean_object* v___x_4592_; lean_object* v___x_4593_; 
lean_dec(v_h__3_4590_);
lean_dec(v_h__2_4589_);
lean_dec(v_h__1_4588_);
v___x_4592_ = lean_box(0);
v___x_4593_ = lean_apply_1(v_h__4_4591_, v___x_4592_);
return v___x_4593_;
}
else
{
lean_object* v_tail_4594_; 
lean_dec(v_h__4_4591_);
v_tail_4594_ = lean_ctor_get(v_rest_4587_, 1);
if (lean_obj_tag(v_tail_4594_) == 0)
{
lean_object* v_head_4595_; lean_object* v___x_4596_; 
lean_dec(v_h__2_4589_);
lean_dec(v_h__1_4588_);
v_head_4595_ = lean_ctor_get(v_rest_4587_, 0);
lean_inc(v_head_4595_);
lean_dec_ref_known(v_rest_4587_, 2);
v___x_4596_ = lean_apply_1(v_h__3_4590_, v_head_4595_);
return v___x_4596_;
}
else
{
lean_object* v_tail_4597_; 
lean_inc_ref(v_tail_4594_);
lean_dec(v_h__3_4590_);
v_tail_4597_ = lean_ctor_get(v_tail_4594_, 1);
if (lean_obj_tag(v_tail_4597_) == 0)
{
lean_object* v_head_4598_; lean_object* v_head_4599_; lean_object* v___x_4600_; 
lean_dec(v_h__1_4588_);
v_head_4598_ = lean_ctor_get(v_rest_4587_, 0);
lean_inc(v_head_4598_);
lean_dec_ref_known(v_rest_4587_, 2);
v_head_4599_ = lean_ctor_get(v_tail_4594_, 0);
lean_inc(v_head_4599_);
lean_dec_ref_known(v_tail_4594_, 2);
v___x_4600_ = lean_apply_2(v_h__2_4589_, v_head_4598_, v_head_4599_);
return v___x_4600_;
}
else
{
lean_object* v_head_4601_; lean_object* v_head_4602_; lean_object* v_head_4603_; lean_object* v_tail_4604_; lean_object* v___x_4605_; 
lean_inc_ref(v_tail_4597_);
lean_dec(v_h__2_4589_);
v_head_4601_ = lean_ctor_get(v_rest_4587_, 0);
lean_inc(v_head_4601_);
lean_dec_ref_known(v_rest_4587_, 2);
v_head_4602_ = lean_ctor_get(v_tail_4594_, 0);
lean_inc(v_head_4602_);
lean_dec_ref_known(v_tail_4594_, 2);
v_head_4603_ = lean_ctor_get(v_tail_4597_, 0);
lean_inc(v_head_4603_);
v_tail_4604_ = lean_ctor_get(v_tail_4597_, 1);
lean_inc(v_tail_4604_);
lean_dec_ref_known(v_tail_4597_, 2);
v___x_4605_ = lean_apply_4(v_h__1_4588_, v_head_4601_, v_head_4602_, v_head_4603_, v_tail_4604_);
return v___x_4605_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_htmlSpecialCharsQuotesSubst_go_match__5_splitter(lean_object* v_motive_4606_, lean_object* v_rest_4607_, lean_object* v_h__1_4608_, lean_object* v_h__2_4609_, lean_object* v_h__3_4610_, lean_object* v_h__4_4611_){
_start:
{
if (lean_obj_tag(v_rest_4607_) == 0)
{
lean_object* v___x_4612_; lean_object* v___x_4613_; 
lean_dec(v_h__3_4610_);
lean_dec(v_h__2_4609_);
lean_dec(v_h__1_4608_);
v___x_4612_ = lean_box(0);
v___x_4613_ = lean_apply_1(v_h__4_4611_, v___x_4612_);
return v___x_4613_;
}
else
{
lean_object* v_tail_4614_; 
lean_dec(v_h__4_4611_);
v_tail_4614_ = lean_ctor_get(v_rest_4607_, 1);
if (lean_obj_tag(v_tail_4614_) == 0)
{
lean_object* v_head_4615_; lean_object* v___x_4616_; 
lean_dec(v_h__2_4609_);
lean_dec(v_h__1_4608_);
v_head_4615_ = lean_ctor_get(v_rest_4607_, 0);
lean_inc(v_head_4615_);
lean_dec_ref_known(v_rest_4607_, 2);
v___x_4616_ = lean_apply_1(v_h__3_4610_, v_head_4615_);
return v___x_4616_;
}
else
{
lean_object* v_tail_4617_; 
lean_inc_ref(v_tail_4614_);
lean_dec(v_h__3_4610_);
v_tail_4617_ = lean_ctor_get(v_tail_4614_, 1);
if (lean_obj_tag(v_tail_4617_) == 0)
{
lean_object* v_head_4618_; lean_object* v_head_4619_; lean_object* v___x_4620_; 
lean_dec(v_h__1_4608_);
v_head_4618_ = lean_ctor_get(v_rest_4607_, 0);
lean_inc(v_head_4618_);
lean_dec_ref_known(v_rest_4607_, 2);
v_head_4619_ = lean_ctor_get(v_tail_4614_, 0);
lean_inc(v_head_4619_);
lean_dec_ref_known(v_tail_4614_, 2);
v___x_4620_ = lean_apply_2(v_h__2_4609_, v_head_4618_, v_head_4619_);
return v___x_4620_;
}
else
{
lean_object* v_head_4621_; lean_object* v_head_4622_; lean_object* v_head_4623_; lean_object* v_tail_4624_; lean_object* v___x_4625_; 
lean_inc_ref(v_tail_4617_);
lean_dec(v_h__2_4609_);
v_head_4621_ = lean_ctor_get(v_rest_4607_, 0);
lean_inc(v_head_4621_);
lean_dec_ref_known(v_rest_4607_, 2);
v_head_4622_ = lean_ctor_get(v_tail_4614_, 0);
lean_inc(v_head_4622_);
lean_dec_ref_known(v_tail_4614_, 2);
v_head_4623_ = lean_ctor_get(v_tail_4617_, 0);
lean_inc(v_head_4623_);
v_tail_4624_ = lean_ctor_get(v_tail_4617_, 1);
lean_inc(v_tail_4624_);
lean_dec_ref_known(v_tail_4617_, 2);
v___x_4625_ = lean_apply_4(v_h__1_4608_, v_head_4621_, v_head_4622_, v_head_4623_, v_tail_4624_);
return v___x_4625_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_00ufffdTokInfo_match__4_splitter___redArg(lean_object* v_x_4626_, lean_object* v_h__1_4627_, lean_object* v_h__2_4628_){
_start:
{
if (lean_obj_tag(v_x_4626_) == 0)
{
lean_object* v___x_4629_; lean_object* v___x_4630_; 
lean_dec(v_h__2_4628_);
v___x_4629_ = lean_box(0);
v___x_4630_ = lean_apply_1(v_h__1_4627_, v___x_4629_);
return v___x_4630_;
}
else
{
lean_object* v_val_4631_; lean_object* v___x_4632_; 
lean_dec(v_h__1_4627_);
v_val_4631_ = lean_ctor_get(v_x_4626_, 0);
lean_inc(v_val_4631_);
lean_dec_ref_known(v_x_4626_, 1);
v___x_4632_ = lean_apply_1(v_h__2_4628_, v_val_4631_);
return v___x_4632_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_00ufffdTokInfo_match__4_splitter(lean_object* v_motive_4633_, lean_object* v_x_4634_, lean_object* v_h__1_4635_, lean_object* v_h__2_4636_){
_start:
{
if (lean_obj_tag(v_x_4634_) == 0)
{
lean_object* v___x_4637_; lean_object* v___x_4638_; 
lean_dec(v_h__2_4636_);
v___x_4637_ = lean_box(0);
v___x_4638_ = lean_apply_1(v_h__1_4635_, v___x_4637_);
return v___x_4638_;
}
else
{
lean_object* v_val_4639_; lean_object* v___x_4640_; 
lean_dec(v_h__1_4635_);
v_val_4639_ = lean_ctor_get(v_x_4634_, 0);
lean_inc(v_val_4639_);
lean_dec_ref_known(v_x_4634_, 1);
v___x_4640_ = lean_apply_1(v_h__2_4636_, v_val_4639_);
return v___x_4640_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_renderCaptured_match__1_splitter___redArg(lean_object* v_x_4641_, lean_object* v_h__1_4642_, lean_object* v_h__2_4643_){
_start:
{
if (lean_obj_tag(v_x_4641_) == 0)
{
lean_object* v___x_4644_; lean_object* v___x_4645_; 
lean_dec(v_h__1_4642_);
v___x_4644_ = lean_box(0);
v___x_4645_ = lean_apply_1(v_h__2_4643_, v___x_4644_);
return v___x_4645_;
}
else
{
lean_object* v_val_4646_; lean_object* v___x_4647_; 
lean_dec(v_h__2_4643_);
v_val_4646_ = lean_ctor_get(v_x_4641_, 0);
lean_inc(v_val_4646_);
lean_dec_ref_known(v_x_4641_, 1);
v___x_4647_ = lean_apply_1(v_h__1_4642_, v_val_4646_);
return v___x_4647_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_renderCaptured_match__1_splitter(lean_object* v_motive_4648_, lean_object* v_x_4649_, lean_object* v_h__1_4650_, lean_object* v_h__2_4651_){
_start:
{
if (lean_obj_tag(v_x_4649_) == 0)
{
lean_object* v___x_4652_; lean_object* v___x_4653_; 
lean_dec(v_h__1_4650_);
v___x_4652_ = lean_box(0);
v___x_4653_ = lean_apply_1(v_h__2_4651_, v___x_4652_);
return v___x_4653_;
}
else
{
lean_object* v_val_4654_; lean_object* v___x_4655_; 
lean_dec(v_h__2_4651_);
v_val_4654_ = lean_ctor_get(v_x_4649_, 0);
lean_inc(v_val_4654_);
lean_dec_ref_known(v_x_4649_, 1);
v___x_4655_ = lean_apply_1(v_h__1_4650_, v_val_4654_);
return v___x_4655_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_postStripToc_go_match__5_splitter___redArg(lean_object* v_x_4656_, lean_object* v_x_4657_, lean_object* v_x_4658_, lean_object* v_h__1_4659_, lean_object* v_h__2_4660_, lean_object* v_h__3_4661_){
_start:
{
if (lean_obj_tag(v_x_4656_) == 0)
{
lean_object* v___x_4662_; 
lean_dec(v_h__3_4661_);
lean_dec(v_h__2_4660_);
v___x_4662_ = lean_apply_2(v_h__1_4659_, v_x_4657_, v_x_4658_);
return v___x_4662_;
}
else
{
lean_object* v_head_4663_; lean_object* v_tail_4664_; lean_object* v_zero_4665_; uint8_t v_isZero_4666_; 
lean_dec(v_h__1_4659_);
v_head_4663_ = lean_ctor_get(v_x_4656_, 0);
v_tail_4664_ = lean_ctor_get(v_x_4656_, 1);
v_zero_4665_ = lean_unsigned_to_nat(0u);
v_isZero_4666_ = lean_nat_dec_eq(v_x_4657_, v_zero_4665_);
if (v_isZero_4666_ == 1)
{
lean_object* v___x_4667_; 
lean_dec(v_h__3_4661_);
lean_dec(v_x_4657_);
v___x_4667_ = lean_apply_3(v_h__2_4660_, v_x_4656_, v_x_4658_, lean_box(0));
return v___x_4667_;
}
else
{
lean_object* v_one_4668_; lean_object* v_n_4669_; lean_object* v___x_4670_; 
lean_inc(v_tail_4664_);
lean_inc(v_head_4663_);
lean_dec_ref_known(v_x_4656_, 2);
lean_dec(v_h__2_4660_);
v_one_4668_ = lean_unsigned_to_nat(1u);
v_n_4669_ = lean_nat_sub(v_x_4657_, v_one_4668_);
lean_dec(v_x_4657_);
v___x_4670_ = lean_apply_4(v_h__3_4661_, v_head_4663_, v_tail_4664_, v_n_4669_, v_x_4658_);
return v___x_4670_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_postStripToc_go_match__5_splitter(lean_object* v_motive_4671_, lean_object* v_x_4672_, lean_object* v_x_4673_, lean_object* v_x_4674_, lean_object* v_h__1_4675_, lean_object* v_h__2_4676_, lean_object* v_h__3_4677_){
_start:
{
if (lean_obj_tag(v_x_4672_) == 0)
{
lean_object* v___x_4678_; 
lean_dec(v_h__3_4677_);
lean_dec(v_h__2_4676_);
v___x_4678_ = lean_apply_2(v_h__1_4675_, v_x_4673_, v_x_4674_);
return v___x_4678_;
}
else
{
lean_object* v_head_4679_; lean_object* v_tail_4680_; lean_object* v_zero_4681_; uint8_t v_isZero_4682_; 
lean_dec(v_h__1_4675_);
v_head_4679_ = lean_ctor_get(v_x_4672_, 0);
v_tail_4680_ = lean_ctor_get(v_x_4672_, 1);
v_zero_4681_ = lean_unsigned_to_nat(0u);
v_isZero_4682_ = lean_nat_dec_eq(v_x_4673_, v_zero_4681_);
if (v_isZero_4682_ == 1)
{
lean_object* v___x_4683_; 
lean_dec(v_h__3_4677_);
lean_dec(v_x_4673_);
v___x_4683_ = lean_apply_3(v_h__2_4676_, v_x_4672_, v_x_4674_, lean_box(0));
return v___x_4683_;
}
else
{
lean_object* v_one_4684_; lean_object* v_n_4685_; lean_object* v___x_4686_; 
lean_inc(v_tail_4680_);
lean_inc(v_head_4679_);
lean_dec_ref_known(v_x_4672_, 2);
lean_dec(v_h__2_4676_);
v_one_4684_ = lean_unsigned_to_nat(1u);
v_n_4685_ = lean_nat_sub(v_x_4673_, v_one_4684_);
lean_dec(v_x_4673_);
v___x_4686_ = lean_apply_4(v_h__3_4677_, v_head_4679_, v_tail_4680_, v_n_4685_, v_x_4674_);
return v___x_4686_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_postStripToc_go_match__3_splitter___redArg(lean_object* v_rest_4687_, lean_object* v_h__1_4688_, lean_object* v_h__2_4689_){
_start:
{
if (lean_obj_tag(v_rest_4687_) == 1)
{
lean_object* v_head_4690_; lean_object* v_tail_4691_; lean_object* v___x_4692_; uint8_t v___x_4693_; 
v_head_4690_ = lean_ctor_get(v_rest_4687_, 0);
v_tail_4691_ = lean_ctor_get(v_rest_4687_, 1);
lean_inc(v_tail_4691_);
v___x_4692_ = lean_unsigned_to_nat(0u);
v___x_4693_ = lean_nat_dec_eq(v_head_4690_, v___x_4692_);
if (v___x_4693_ == 0)
{
lean_object* v___x_4694_; 
lean_dec(v_tail_4691_);
lean_dec(v_h__1_4688_);
v___x_4694_ = lean_apply_2(v_h__2_4689_, v_rest_4687_, lean_box(0));
return v___x_4694_;
}
else
{
lean_object* v___x_4696_; uint8_t v_isShared_4697_; uint8_t v_isSharedCheck_4733_; 
v_isSharedCheck_4733_ = !lean_is_exclusive(v_rest_4687_);
if (v_isSharedCheck_4733_ == 0)
{
lean_object* v_unused_4734_; lean_object* v_unused_4735_; 
v_unused_4734_ = lean_ctor_get(v_rest_4687_, 1);
lean_dec(v_unused_4734_);
v_unused_4735_ = lean_ctor_get(v_rest_4687_, 0);
lean_dec(v_unused_4735_);
v___x_4696_ = v_rest_4687_;
v_isShared_4697_ = v_isSharedCheck_4733_;
goto v_resetjp_4695_;
}
else
{
lean_dec(v_rest_4687_);
v___x_4696_ = lean_box(0);
v_isShared_4697_ = v_isSharedCheck_4733_;
goto v_resetjp_4695_;
}
v_resetjp_4695_:
{
if (lean_obj_tag(v_tail_4691_) == 1)
{
lean_object* v_head_4698_; lean_object* v_tail_4699_; uint8_t v___x_4700_; 
v_head_4698_ = lean_ctor_get(v_tail_4691_, 0);
v_tail_4699_ = lean_ctor_get(v_tail_4691_, 1);
v___x_4700_ = lean_nat_dec_eq(v_head_4698_, v___x_4692_);
if (v___x_4700_ == 0)
{
lean_object* v___x_4702_; 
lean_dec(v_h__1_4688_);
if (v_isShared_4697_ == 0)
{
lean_ctor_set(v___x_4696_, 0, v___x_4692_);
v___x_4702_ = v___x_4696_;
goto v_reusejp_4701_;
}
else
{
lean_object* v_reuseFailAlloc_4704_; 
v_reuseFailAlloc_4704_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4704_, 0, v___x_4692_);
lean_ctor_set(v_reuseFailAlloc_4704_, 1, v_tail_4691_);
v___x_4702_ = v_reuseFailAlloc_4704_;
goto v_reusejp_4701_;
}
v_reusejp_4701_:
{
lean_object* v___x_4703_; 
v___x_4703_ = lean_apply_2(v_h__2_4689_, v___x_4702_, lean_box(0));
return v___x_4703_;
}
}
else
{
lean_object* v___x_4706_; uint8_t v_isShared_4707_; uint8_t v_isSharedCheck_4726_; 
lean_inc(v_tail_4699_);
v_isSharedCheck_4726_ = !lean_is_exclusive(v_tail_4691_);
if (v_isSharedCheck_4726_ == 0)
{
lean_object* v_unused_4727_; lean_object* v_unused_4728_; 
v_unused_4727_ = lean_ctor_get(v_tail_4691_, 1);
lean_dec(v_unused_4727_);
v_unused_4728_ = lean_ctor_get(v_tail_4691_, 0);
lean_dec(v_unused_4728_);
v___x_4706_ = v_tail_4691_;
v_isShared_4707_ = v_isSharedCheck_4726_;
goto v_resetjp_4705_;
}
else
{
lean_dec(v_tail_4691_);
v___x_4706_ = lean_box(0);
v_isShared_4707_ = v_isSharedCheck_4726_;
goto v_resetjp_4705_;
}
v_resetjp_4705_:
{
if (lean_obj_tag(v_tail_4699_) == 1)
{
lean_object* v_head_4708_; lean_object* v_tail_4709_; uint8_t v___x_4710_; 
v_head_4708_ = lean_ctor_get(v_tail_4699_, 0);
v_tail_4709_ = lean_ctor_get(v_tail_4699_, 1);
v___x_4710_ = lean_nat_dec_eq(v_head_4708_, v___x_4692_);
if (v___x_4710_ == 0)
{
lean_object* v___x_4712_; 
lean_dec(v_h__1_4688_);
if (v_isShared_4707_ == 0)
{
lean_ctor_set(v___x_4706_, 0, v___x_4692_);
v___x_4712_ = v___x_4706_;
goto v_reusejp_4711_;
}
else
{
lean_object* v_reuseFailAlloc_4717_; 
v_reuseFailAlloc_4717_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4717_, 0, v___x_4692_);
lean_ctor_set(v_reuseFailAlloc_4717_, 1, v_tail_4699_);
v___x_4712_ = v_reuseFailAlloc_4717_;
goto v_reusejp_4711_;
}
v_reusejp_4711_:
{
lean_object* v___x_4714_; 
if (v_isShared_4697_ == 0)
{
lean_ctor_set(v___x_4696_, 1, v___x_4712_);
lean_ctor_set(v___x_4696_, 0, v___x_4692_);
v___x_4714_ = v___x_4696_;
goto v_reusejp_4713_;
}
else
{
lean_object* v_reuseFailAlloc_4716_; 
v_reuseFailAlloc_4716_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4716_, 0, v___x_4692_);
lean_ctor_set(v_reuseFailAlloc_4716_, 1, v___x_4712_);
v___x_4714_ = v_reuseFailAlloc_4716_;
goto v_reusejp_4713_;
}
v_reusejp_4713_:
{
lean_object* v___x_4715_; 
v___x_4715_ = lean_apply_2(v_h__2_4689_, v___x_4714_, lean_box(0));
return v___x_4715_;
}
}
}
else
{
lean_object* v___x_4718_; 
lean_inc(v_tail_4709_);
lean_dec_ref_known(v_tail_4699_, 2);
lean_del_object(v___x_4706_);
lean_del_object(v___x_4696_);
lean_dec(v_h__2_4689_);
v___x_4718_ = lean_apply_1(v_h__1_4688_, v_tail_4709_);
return v___x_4718_;
}
}
else
{
lean_object* v___x_4720_; 
lean_dec(v_h__1_4688_);
if (v_isShared_4707_ == 0)
{
lean_ctor_set(v___x_4706_, 0, v___x_4692_);
v___x_4720_ = v___x_4706_;
goto v_reusejp_4719_;
}
else
{
lean_object* v_reuseFailAlloc_4725_; 
v_reuseFailAlloc_4725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4725_, 0, v___x_4692_);
lean_ctor_set(v_reuseFailAlloc_4725_, 1, v_tail_4699_);
v___x_4720_ = v_reuseFailAlloc_4725_;
goto v_reusejp_4719_;
}
v_reusejp_4719_:
{
lean_object* v___x_4722_; 
if (v_isShared_4697_ == 0)
{
lean_ctor_set(v___x_4696_, 1, v___x_4720_);
lean_ctor_set(v___x_4696_, 0, v___x_4692_);
v___x_4722_ = v___x_4696_;
goto v_reusejp_4721_;
}
else
{
lean_object* v_reuseFailAlloc_4724_; 
v_reuseFailAlloc_4724_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4724_, 0, v___x_4692_);
lean_ctor_set(v_reuseFailAlloc_4724_, 1, v___x_4720_);
v___x_4722_ = v_reuseFailAlloc_4724_;
goto v_reusejp_4721_;
}
v_reusejp_4721_:
{
lean_object* v___x_4723_; 
v___x_4723_ = lean_apply_2(v_h__2_4689_, v___x_4722_, lean_box(0));
return v___x_4723_;
}
}
}
}
}
}
else
{
lean_object* v___x_4730_; 
lean_dec(v_h__1_4688_);
if (v_isShared_4697_ == 0)
{
lean_ctor_set(v___x_4696_, 0, v___x_4692_);
v___x_4730_ = v___x_4696_;
goto v_reusejp_4729_;
}
else
{
lean_object* v_reuseFailAlloc_4732_; 
v_reuseFailAlloc_4732_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4732_, 0, v___x_4692_);
lean_ctor_set(v_reuseFailAlloc_4732_, 1, v_tail_4691_);
v___x_4730_ = v_reuseFailAlloc_4732_;
goto v_reusejp_4729_;
}
v_reusejp_4729_:
{
lean_object* v___x_4731_; 
v___x_4731_ = lean_apply_2(v_h__2_4689_, v___x_4730_, lean_box(0));
return v___x_4731_;
}
}
}
}
}
else
{
lean_object* v___x_4736_; 
lean_dec(v_h__1_4688_);
v___x_4736_ = lean_apply_2(v_h__2_4689_, v_rest_4687_, lean_box(0));
return v___x_4736_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_postStripToc_go_match__3_splitter(lean_object* v_motive_4737_, lean_object* v_rest_4738_, lean_object* v_h__1_4739_, lean_object* v_h__2_4740_){
_start:
{
if (lean_obj_tag(v_rest_4738_) == 1)
{
lean_object* v_head_4741_; lean_object* v_tail_4742_; lean_object* v___x_4743_; uint8_t v___x_4744_; 
v_head_4741_ = lean_ctor_get(v_rest_4738_, 0);
v_tail_4742_ = lean_ctor_get(v_rest_4738_, 1);
lean_inc(v_tail_4742_);
v___x_4743_ = lean_unsigned_to_nat(0u);
v___x_4744_ = lean_nat_dec_eq(v_head_4741_, v___x_4743_);
if (v___x_4744_ == 0)
{
lean_object* v___x_4745_; 
lean_dec(v_tail_4742_);
lean_dec(v_h__1_4739_);
v___x_4745_ = lean_apply_2(v_h__2_4740_, v_rest_4738_, lean_box(0));
return v___x_4745_;
}
else
{
lean_object* v___x_4747_; uint8_t v_isShared_4748_; uint8_t v_isSharedCheck_4784_; 
v_isSharedCheck_4784_ = !lean_is_exclusive(v_rest_4738_);
if (v_isSharedCheck_4784_ == 0)
{
lean_object* v_unused_4785_; lean_object* v_unused_4786_; 
v_unused_4785_ = lean_ctor_get(v_rest_4738_, 1);
lean_dec(v_unused_4785_);
v_unused_4786_ = lean_ctor_get(v_rest_4738_, 0);
lean_dec(v_unused_4786_);
v___x_4747_ = v_rest_4738_;
v_isShared_4748_ = v_isSharedCheck_4784_;
goto v_resetjp_4746_;
}
else
{
lean_dec(v_rest_4738_);
v___x_4747_ = lean_box(0);
v_isShared_4748_ = v_isSharedCheck_4784_;
goto v_resetjp_4746_;
}
v_resetjp_4746_:
{
if (lean_obj_tag(v_tail_4742_) == 1)
{
lean_object* v_head_4749_; lean_object* v_tail_4750_; uint8_t v___x_4751_; 
v_head_4749_ = lean_ctor_get(v_tail_4742_, 0);
v_tail_4750_ = lean_ctor_get(v_tail_4742_, 1);
v___x_4751_ = lean_nat_dec_eq(v_head_4749_, v___x_4743_);
if (v___x_4751_ == 0)
{
lean_object* v___x_4753_; 
lean_dec(v_h__1_4739_);
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 0, v___x_4743_);
v___x_4753_ = v___x_4747_;
goto v_reusejp_4752_;
}
else
{
lean_object* v_reuseFailAlloc_4755_; 
v_reuseFailAlloc_4755_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4755_, 0, v___x_4743_);
lean_ctor_set(v_reuseFailAlloc_4755_, 1, v_tail_4742_);
v___x_4753_ = v_reuseFailAlloc_4755_;
goto v_reusejp_4752_;
}
v_reusejp_4752_:
{
lean_object* v___x_4754_; 
v___x_4754_ = lean_apply_2(v_h__2_4740_, v___x_4753_, lean_box(0));
return v___x_4754_;
}
}
else
{
lean_object* v___x_4757_; uint8_t v_isShared_4758_; uint8_t v_isSharedCheck_4777_; 
lean_inc(v_tail_4750_);
v_isSharedCheck_4777_ = !lean_is_exclusive(v_tail_4742_);
if (v_isSharedCheck_4777_ == 0)
{
lean_object* v_unused_4778_; lean_object* v_unused_4779_; 
v_unused_4778_ = lean_ctor_get(v_tail_4742_, 1);
lean_dec(v_unused_4778_);
v_unused_4779_ = lean_ctor_get(v_tail_4742_, 0);
lean_dec(v_unused_4779_);
v___x_4757_ = v_tail_4742_;
v_isShared_4758_ = v_isSharedCheck_4777_;
goto v_resetjp_4756_;
}
else
{
lean_dec(v_tail_4742_);
v___x_4757_ = lean_box(0);
v_isShared_4758_ = v_isSharedCheck_4777_;
goto v_resetjp_4756_;
}
v_resetjp_4756_:
{
if (lean_obj_tag(v_tail_4750_) == 1)
{
lean_object* v_head_4759_; lean_object* v_tail_4760_; uint8_t v___x_4761_; 
v_head_4759_ = lean_ctor_get(v_tail_4750_, 0);
v_tail_4760_ = lean_ctor_get(v_tail_4750_, 1);
v___x_4761_ = lean_nat_dec_eq(v_head_4759_, v___x_4743_);
if (v___x_4761_ == 0)
{
lean_object* v___x_4763_; 
lean_dec(v_h__1_4739_);
if (v_isShared_4758_ == 0)
{
lean_ctor_set(v___x_4757_, 0, v___x_4743_);
v___x_4763_ = v___x_4757_;
goto v_reusejp_4762_;
}
else
{
lean_object* v_reuseFailAlloc_4768_; 
v_reuseFailAlloc_4768_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4768_, 0, v___x_4743_);
lean_ctor_set(v_reuseFailAlloc_4768_, 1, v_tail_4750_);
v___x_4763_ = v_reuseFailAlloc_4768_;
goto v_reusejp_4762_;
}
v_reusejp_4762_:
{
lean_object* v___x_4765_; 
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 1, v___x_4763_);
lean_ctor_set(v___x_4747_, 0, v___x_4743_);
v___x_4765_ = v___x_4747_;
goto v_reusejp_4764_;
}
else
{
lean_object* v_reuseFailAlloc_4767_; 
v_reuseFailAlloc_4767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4767_, 0, v___x_4743_);
lean_ctor_set(v_reuseFailAlloc_4767_, 1, v___x_4763_);
v___x_4765_ = v_reuseFailAlloc_4767_;
goto v_reusejp_4764_;
}
v_reusejp_4764_:
{
lean_object* v___x_4766_; 
v___x_4766_ = lean_apply_2(v_h__2_4740_, v___x_4765_, lean_box(0));
return v___x_4766_;
}
}
}
else
{
lean_object* v___x_4769_; 
lean_inc(v_tail_4760_);
lean_dec_ref_known(v_tail_4750_, 2);
lean_del_object(v___x_4757_);
lean_del_object(v___x_4747_);
lean_dec(v_h__2_4740_);
v___x_4769_ = lean_apply_1(v_h__1_4739_, v_tail_4760_);
return v___x_4769_;
}
}
else
{
lean_object* v___x_4771_; 
lean_dec(v_h__1_4739_);
if (v_isShared_4758_ == 0)
{
lean_ctor_set(v___x_4757_, 0, v___x_4743_);
v___x_4771_ = v___x_4757_;
goto v_reusejp_4770_;
}
else
{
lean_object* v_reuseFailAlloc_4776_; 
v_reuseFailAlloc_4776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4776_, 0, v___x_4743_);
lean_ctor_set(v_reuseFailAlloc_4776_, 1, v_tail_4750_);
v___x_4771_ = v_reuseFailAlloc_4776_;
goto v_reusejp_4770_;
}
v_reusejp_4770_:
{
lean_object* v___x_4773_; 
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 1, v___x_4771_);
lean_ctor_set(v___x_4747_, 0, v___x_4743_);
v___x_4773_ = v___x_4747_;
goto v_reusejp_4772_;
}
else
{
lean_object* v_reuseFailAlloc_4775_; 
v_reuseFailAlloc_4775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4775_, 0, v___x_4743_);
lean_ctor_set(v_reuseFailAlloc_4775_, 1, v___x_4771_);
v___x_4773_ = v_reuseFailAlloc_4775_;
goto v_reusejp_4772_;
}
v_reusejp_4772_:
{
lean_object* v___x_4774_; 
v___x_4774_ = lean_apply_2(v_h__2_4740_, v___x_4773_, lean_box(0));
return v___x_4774_;
}
}
}
}
}
}
else
{
lean_object* v___x_4781_; 
lean_dec(v_h__1_4739_);
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 0, v___x_4743_);
v___x_4781_ = v___x_4747_;
goto v_reusejp_4780_;
}
else
{
lean_object* v_reuseFailAlloc_4783_; 
v_reuseFailAlloc_4783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4783_, 0, v___x_4743_);
lean_ctor_set(v_reuseFailAlloc_4783_, 1, v_tail_4742_);
v___x_4781_ = v_reuseFailAlloc_4783_;
goto v_reusejp_4780_;
}
v_reusejp_4780_:
{
lean_object* v___x_4782_; 
v___x_4782_ = lean_apply_2(v_h__2_4740_, v___x_4781_, lean_box(0));
return v___x_4782_;
}
}
}
}
}
else
{
lean_object* v___x_4787_; 
lean_dec(v_h__1_4739_);
v___x_4787_ = lean_apply_2(v_h__2_4740_, v_rest_4738_, lean_box(0));
return v___x_4787_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_postStripToc_go_match__1_splitter___redArg(lean_object* v_x_4788_, lean_object* v_h__1_4789_, lean_object* v_h__2_4790_){
_start:
{
if (lean_obj_tag(v_x_4788_) == 0)
{
lean_object* v___x_4791_; lean_object* v___x_4792_; 
lean_dec(v_h__1_4789_);
v___x_4791_ = lean_box(0);
v___x_4792_ = lean_apply_1(v_h__2_4790_, v___x_4791_);
return v___x_4792_;
}
else
{
lean_object* v_val_4793_; lean_object* v___x_4794_; 
lean_dec(v_h__2_4790_);
v_val_4793_ = lean_ctor_get(v_x_4788_, 0);
lean_inc(v_val_4793_);
lean_dec_ref_known(v_x_4788_, 1);
v___x_4794_ = lean_apply_1(v_h__1_4789_, v_val_4793_);
return v___x_4794_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_LeanFtml_RenderCore_0__LeanFtml_postStripToc_go_match__1_splitter(lean_object* v_motive_4795_, lean_object* v_x_4796_, lean_object* v_h__1_4797_, lean_object* v_h__2_4798_){
_start:
{
if (lean_obj_tag(v_x_4796_) == 0)
{
lean_object* v___x_4799_; lean_object* v___x_4800_; 
lean_dec(v_h__1_4797_);
v___x_4799_ = lean_box(0);
v___x_4800_ = lean_apply_1(v_h__2_4798_, v___x_4799_);
return v___x_4800_;
}
else
{
lean_object* v_val_4801_; lean_object* v___x_4802_; 
lean_dec(v_h__2_4798_);
v_val_4801_ = lean_ctor_get(v_x_4796_, 0);
lean_inc(v_val_4801_);
lean_dec_ref_known(v_x_4796_, 1);
v___x_4802_ = lean_apply_1(v_h__1_4797_, v_val_4801_);
return v___x_4802_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExEntry(lean_object* v_rule_4803_, lean_object* v_ty_4804_){
_start:
{
lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; 
v___x_4805_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__1, &lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__1);
v___x_4806_ = l_String_toListImpl(v_ty_4804_);
v___x_4807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4807_, 0, v___x_4806_);
v___x_4808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4808_, 0, v___x_4805_);
lean_ctor_set(v___x_4808_, 1, v___x_4807_);
v___x_4809_ = lean_box(0);
v___x_4810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4810_, 0, v___x_4808_);
lean_ctor_set(v___x_4810_, 1, v___x_4809_);
v___x_4811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4811_, 0, v_rule_4803_);
lean_ctor_set(v___x_4811_, 1, v___x_4810_);
return v___x_4811_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_00ufffdExLookup_spec__0(lean_object* v_k_4812_, lean_object* v_x_4813_){
_start:
{
if (lean_obj_tag(v_x_4813_) == 0)
{
lean_object* v___x_4814_; 
v___x_4814_ = lean_box(0);
return v___x_4814_;
}
else
{
lean_object* v_head_4815_; lean_object* v_tail_4816_; lean_object* v_fst_4817_; uint8_t v___x_4818_; 
v_head_4815_ = lean_ctor_get(v_x_4813_, 0);
v_tail_4816_ = lean_ctor_get(v_x_4813_, 1);
v_fst_4817_ = lean_ctor_get(v_head_4815_, 0);
v___x_4818_ = lean_nat_dec_eq(v_fst_4817_, v_k_4812_);
if (v___x_4818_ == 0)
{
v_x_4813_ = v_tail_4816_;
goto _start;
}
else
{
lean_object* v___x_4820_; 
lean_inc(v_head_4815_);
v___x_4820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4820_, 0, v_head_4815_);
return v___x_4820_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_00ufffdExLookup_spec__0___boxed(lean_object* v_k_4821_, lean_object* v_x_4822_){
_start:
{
lean_object* v_res_4823_; 
v_res_4823_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_00ufffdExLookup_spec__0(v_k_4821_, v_x_4822_);
lean_dec(v_x_4822_);
lean_dec(v_k_4821_);
return v_res_4823_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExLookup(lean_object* v_table_4824_, lean_object* v_k_4825_){
_start:
{
lean_object* v___x_4826_; 
v___x_4826_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_00ufffdExLookup_spec__0(v_k_4825_, v_table_4824_);
if (lean_obj_tag(v___x_4826_) == 0)
{
lean_object* v___x_4827_; 
v___x_4827_ = lean_box(0);
return v___x_4827_;
}
else
{
lean_object* v_val_4828_; lean_object* v___x_4830_; uint8_t v_isShared_4831_; uint8_t v_isSharedCheck_4839_; 
v_val_4828_ = lean_ctor_get(v___x_4826_, 0);
v_isSharedCheck_4839_ = !lean_is_exclusive(v___x_4826_);
if (v_isSharedCheck_4839_ == 0)
{
v___x_4830_ = v___x_4826_;
v_isShared_4831_ = v_isSharedCheck_4839_;
goto v_resetjp_4829_;
}
else
{
lean_inc(v_val_4828_);
lean_dec(v___x_4826_);
v___x_4830_ = lean_box(0);
v_isShared_4831_ = v_isSharedCheck_4839_;
goto v_resetjp_4829_;
}
v_resetjp_4829_:
{
lean_object* v_snd_4832_; lean_object* v_fst_4833_; lean_object* v_snd_4834_; lean_object* v___x_4835_; lean_object* v___x_4837_; 
v_snd_4832_ = lean_ctor_get(v_val_4828_, 1);
lean_inc(v_snd_4832_);
lean_dec(v_val_4828_);
v_fst_4833_ = lean_ctor_get(v_snd_4832_, 0);
lean_inc(v_fst_4833_);
v_snd_4834_ = lean_ctor_get(v_snd_4832_, 1);
lean_inc(v_snd_4834_);
lean_dec(v_snd_4832_);
v___x_4835_ = lp_lean_x2dftml_LeanFtml_00ufffdExEntry(v_fst_4833_, v_snd_4834_);
if (v_isShared_4831_ == 0)
{
lean_ctor_set(v___x_4830_, 0, v___x_4835_);
v___x_4837_ = v___x_4830_;
goto v_reusejp_4836_;
}
else
{
lean_object* v_reuseFailAlloc_4838_; 
v_reuseFailAlloc_4838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4838_, 0, v___x_4835_);
v___x_4837_ = v_reuseFailAlloc_4838_;
goto v_reusejp_4836_;
}
v_reusejp_4836_:
{
return v___x_4837_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExLookup___boxed(lean_object* v_table_4840_, lean_object* v_k_4841_){
_start:
{
lean_object* v_res_4842_; 
v_res_4842_ = lp_lean_x2dftml_LeanFtml_00ufffdExLookup(v_table_4840_, v_k_4841_);
lean_dec(v_k_4841_);
lean_dec(v_table_4840_);
return v_res_4842_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__1(void){
_start:
{
lean_object* v___x_4844_; lean_object* v___x_4845_; 
v___x_4844_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__0));
v___x_4845_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4844_);
return v___x_4845_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__3(void){
_start:
{
lean_object* v___x_4847_; lean_object* v___x_4848_; 
v___x_4847_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__2));
v___x_4848_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4847_);
return v___x_4848_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__5(void){
_start:
{
lean_object* v___x_4850_; lean_object* v___x_4851_; 
v___x_4850_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__4));
v___x_4851_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4850_);
return v___x_4851_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__7(void){
_start:
{
lean_object* v___x_4853_; lean_object* v___x_4854_; 
v___x_4853_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__6));
v___x_4854_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4853_);
return v___x_4854_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__9(void){
_start:
{
lean_object* v___x_4856_; lean_object* v___x_4857_; 
v___x_4856_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__8));
v___x_4857_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4856_);
return v___x_4857_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__12(void){
_start:
{
lean_object* v___x_4862_; lean_object* v___x_4863_; 
v___x_4862_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__11));
v___x_4863_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4862_);
return v___x_4863_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__13(void){
_start:
{
lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; 
v___x_4864_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__12, &lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__12);
v___x_4865_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__10));
v___x_4866_ = l_List_appendTR___redArg(v___x_4865_, v___x_4864_);
return v___x_4866_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__15(void){
_start:
{
lean_object* v___x_4868_; lean_object* v___x_4869_; 
v___x_4868_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__14));
v___x_4869_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4868_);
return v___x_4869_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__17(void){
_start:
{
lean_object* v___x_4871_; lean_object* v___x_4872_; 
v___x_4871_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__16));
v___x_4872_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4871_);
return v___x_4872_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__19(void){
_start:
{
lean_object* v___x_4874_; lean_object* v___x_4875_; 
v___x_4874_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__18));
v___x_4875_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_4874_);
return v___x_4875_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg(uint8_t v_rid_4876_, lean_object* v_opts_4877_){
_start:
{
lean_object* v___y_4879_; lean_object* v___x_4914_; lean_object* v___x_4915_; 
v___x_4914_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__1, &lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdTokInfo___closed__1);
v___x_4915_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_4877_, v___x_4914_);
if (lean_obj_tag(v___x_4915_) == 1)
{
lean_object* v_val_4916_; 
v_val_4916_ = lean_ctor_get(v___x_4915_, 0);
lean_inc(v_val_4916_);
lean_dec_ref_known(v___x_4915_, 1);
if (lean_obj_tag(v_val_4916_) == 0)
{
lean_object* v_a_4917_; 
v_a_4917_ = lean_ctor_get(v_val_4916_, 0);
lean_inc(v_a_4917_);
lean_dec_ref_known(v_val_4916_, 1);
v___y_4879_ = v_a_4917_;
goto v___jp_4878_;
}
else
{
lean_dec(v_val_4916_);
goto v___jp_4912_;
}
}
else
{
lean_dec(v___x_4915_);
goto v___jp_4912_;
}
v___jp_4878_:
{
switch(v_rid_4876_)
{
case 6:
{
lean_object* v___x_4880_; uint8_t v___x_4881_; 
v___x_4880_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9);
v___x_4881_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v___y_4879_, v___x_4880_);
if (v___x_4881_ == 0)
{
lean_object* v___x_4882_; uint8_t v___x_4883_; 
v___x_4882_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9);
v___x_4883_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v___y_4879_, v___x_4882_);
lean_dec(v___y_4879_);
if (v___x_4883_ == 0)
{
lean_object* v___x_4884_; 
v___x_4884_ = lean_box(0);
return v___x_4884_;
}
else
{
lean_object* v___x_4885_; 
v___x_4885_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__1, &lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__1);
return v___x_4885_;
}
}
else
{
lean_object* v___x_4886_; 
lean_dec(v___y_4879_);
v___x_4886_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__3, &lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__3);
return v___x_4886_;
}
}
case 23:
{
lean_object* v___x_4887_; uint8_t v___x_4888_; 
v___x_4887_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9);
v___x_4888_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v___y_4879_, v___x_4887_);
if (v___x_4888_ == 0)
{
lean_object* v___x_4889_; uint8_t v___x_4890_; 
v___x_4889_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9);
v___x_4890_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v___y_4879_, v___x_4889_);
lean_dec(v___y_4879_);
if (v___x_4890_ == 0)
{
lean_object* v___x_4891_; 
v___x_4891_ = lean_box(0);
return v___x_4891_;
}
else
{
lean_object* v___x_4892_; 
v___x_4892_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__5, &lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__5);
return v___x_4892_;
}
}
else
{
lean_object* v___x_4893_; 
lean_dec(v___y_4879_);
v___x_4893_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__7, &lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__7);
return v___x_4893_;
}
}
case 35:
{
lean_object* v___x_4894_; uint8_t v___x_4895_; 
v___x_4894_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__9);
v___x_4895_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v___y_4879_, v___x_4894_);
if (v___x_4895_ == 0)
{
lean_object* v___x_4896_; uint8_t v___x_4897_; 
v___x_4896_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__9);
v___x_4897_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v___y_4879_, v___x_4896_);
lean_dec(v___y_4879_);
if (v___x_4897_ == 0)
{
lean_object* v___x_4898_; 
v___x_4898_ = lean_box(0);
return v___x_4898_;
}
else
{
lean_object* v___x_4899_; 
v___x_4899_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__9, &lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__9);
return v___x_4899_;
}
}
else
{
lean_object* v___x_4900_; 
lean_dec(v___y_4879_);
v___x_4900_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__13, &lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__13);
return v___x_4900_;
}
}
case 37:
{
lean_object* v___x_4901_; uint8_t v___x_4902_; 
v___x_4901_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__5, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__5);
v___x_4902_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v___y_4879_, v___x_4901_);
if (v___x_4902_ == 0)
{
lean_object* v___x_4903_; uint8_t v___x_4904_; 
v___x_4903_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__1, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockStart___closed__1);
v___x_4904_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v___y_4879_, v___x_4903_);
if (v___x_4904_ == 0)
{
lean_object* v___x_4905_; uint8_t v___x_4906_; 
v___x_4905_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__5, &lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdIsBlockEnd___closed__5);
v___x_4906_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v___y_4879_, v___x_4905_);
lean_dec(v___y_4879_);
if (v___x_4906_ == 0)
{
lean_object* v___x_4907_; 
v___x_4907_ = lean_box(0);
return v___x_4907_;
}
else
{
lean_object* v___x_4908_; 
v___x_4908_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__15, &lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__15);
return v___x_4908_;
}
}
else
{
lean_object* v___x_4909_; 
lean_dec(v___y_4879_);
v___x_4909_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__17, &lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__17);
return v___x_4909_;
}
}
else
{
lean_object* v___x_4910_; 
lean_dec(v___y_4879_);
v___x_4910_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__19, &lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___closed__19);
return v___x_4910_;
}
}
default: 
{
lean_object* v___x_4911_; 
lean_dec(v___y_4879_);
v___x_4911_ = lean_box(0);
return v___x_4911_;
}
}
}
v___jp_4912_:
{
lean_object* v___x_4913_; 
v___x_4913_ = lean_box(0);
v___y_4879_ = v___x_4913_;
goto v___jp_4878_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg___boxed(lean_object* v_rid_4918_, lean_object* v_opts_4919_){
_start:
{
uint8_t v_rid_boxed_4920_; lean_object* v_res_4921_; 
v_rid_boxed_4920_ = lean_unbox(v_rid_4918_);
v_res_4921_ = lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg(v_rid_boxed_4920_, v_opts_4919_);
lean_dec(v_opts_4919_);
return v_res_4921_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch(uint8_t v_rid_4922_, lean_object* v___c_4923_, lean_object* v___d_4924_, lean_object* v_opts_4925_){
_start:
{
lean_object* v___x_4926_; 
v___x_4926_ = lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___redArg(v_rid_4922_, v_opts_4925_);
return v___x_4926_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdExDispatch___boxed(lean_object* v_rid_4927_, lean_object* v___c_4928_, lean_object* v___d_4929_, lean_object* v_opts_4930_){
_start:
{
uint8_t v_rid_boxed_4931_; lean_object* v_res_4932_; 
v_rid_boxed_4931_ = lean_unbox(v_rid_4927_);
v_res_4932_ = lp_lean_x2dftml_LeanFtml_00ufffdExDispatch(v_rid_boxed_4931_, v___c_4928_, v___d_4929_, v_opts_4930_);
lean_dec(v_opts_4930_);
lean_dec_ref(v___d_4929_);
lean_dec_ref(v___c_4928_);
return v_res_4932_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_00ufffdEx(lean_object* v_table_4941_, lean_object* v_work_4942_){
_start:
{
lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v_output_4948_; 
v___x_4943_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdEx___closed__0));
v___x_4944_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_00ufffdExLookup___boxed), 2, 1);
lean_closure_set(v___x_4944_, 0, v_table_4941_);
v___x_4945_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_instInhabitedRenderConf_default___closed__0));
v___x_4946_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_00ufffdEx___closed__2));
v___x_4947_ = lp_lean_x2dftml_LeanFtml_renderWith(v___x_4943_, v___x_4944_, v___x_4945_, v_work_4942_, v___x_4946_);
v_output_4948_ = lean_ctor_get(v___x_4947_, 0);
lean_inc(v_output_4948_);
lean_dec_ref(v___x_4947_);
return v_output_4948_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ModuleRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_RenderCore(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_TokenState(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ModuleRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dftml_LeanFtml_instInhabitedRenderRuleId_default = _init_lp_lean_x2dftml_LeanFtml_instInhabitedRenderRuleId_default();
lp_lean_x2dftml_LeanFtml_instInhabitedRenderRuleId = _init_lp_lean_x2dftml_LeanFtml_instInhabitedRenderRuleId();
lp_lean_x2dftml_LeanFtml_mirroredRenderRules = _init_lp_lean_x2dftml_LeanFtml_mirroredRenderRules();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_mirroredRenderRules);
lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__0___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__0___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_phpEmptyOpt___closed__0___boxed__const__1);
lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs_go___boxed__const__1 = _init_lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs_go___boxed__const__1();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_00ufffdCollapseWs_go___boxed__const__1);
lp_lean_x2dftml_LeanFtml_swallowedBreaks = _init_lp_lean_x2dftml_LeanFtml_swallowedBreaks();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_swallowedBreaks);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
