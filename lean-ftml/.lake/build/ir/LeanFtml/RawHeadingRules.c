// Lean compiler output
// Module: LeanFtml.RawHeadingRules
// Imports: public import Init public meta import Init public import LeanFtml.RenderCore
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
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_optStrBytes(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_phpEmptyOpt(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_natBytes(lean_object*);
extern lean_object* lp_lean_x2dftml_LeanFtml_tocStripDelim;
lean_object* lp_lean_x2dftml_LeanFtml_optNat(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_rhTypeIs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_rhTypeIs___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rhTypeIs___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_rhTypeIs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_rhTypeIs___closed__1;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_rhTypeIs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rhTypeIs___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_rhTruthy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_rhTruthy___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rhTruthy___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_rhTruthy(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rhTruthy___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_optIsset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optIsset___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "&quot;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "&amp;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "&lt;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "&gt;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__7;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__8_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "&#32;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__10;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_wikidotEscapeRaw_spec__0(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_wikidotEscapeRaw___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRaw___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_wikidotEscapeRaw___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRaw(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRaw___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRaw___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRaw___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderRaw___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderRaw___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRaw___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "<span style=\"white-space: pre-wrap;\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRaw___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRaw___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderRaw___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderRaw___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderRaw___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "</span>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderRaw___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderRaw___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderRaw___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderRaw___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRaw(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRaw___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRawold(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRawold___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_formIndentGo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "&#32;&#32;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formIndentGo___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formIndentGo___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formIndentGo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formIndentGo___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_formIndentGo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "&nbsp;&#32;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formIndentGo___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formIndentGo___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formIndentGo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formIndentGo___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formIndentGo(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderForm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "blank"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderForm___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderForm___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderForm___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderForm___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderForm(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderForm___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingTocScript___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "\n<script language=\"javascript\">\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingTocScript___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "function hideTOC(id) {\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingTocScript___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "    div = document.getElementById(id+\"__content\");\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingTocScript___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "    link = document.getElementById(id+\"__link\");\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__10;
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingTocScript___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "    if (div.style.display == \"none\") {\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__11_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingTocScript___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "        div.style.display = \"\";\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__15;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__16;
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingTocScript___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "        link.innerHTML = \"[-]\";\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__17_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__18;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__19;
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingTocScript___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "    } else {\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__21;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__22;
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingTocScript___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "        div.style.display = \"none\";\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__23_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__24;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__25;
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingTocScript___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "        link.innerHTML = \"[+]\";\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__26_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__27;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__28;
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingTocScript___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "    }\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__29_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__30;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__31;
static const lean_string_object lp_lean_x2dftml_LeanFtml_headingTocScript___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "}\n</script>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__32_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__33;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_headingTocScript___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript___closed__34;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_headingTocScript;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "level"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__1;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "<h"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "><span>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "</span></h"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ">\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "]</a>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "<div style=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "padding: 0px; margin: 0px; border: none;\" id=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__19;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "__content\">\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__21;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "display: none; "};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__22_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__23;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__24_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__25;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "start-notoc"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__26_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__27;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__28_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__29;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "startContent"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__30_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__31;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "endContent"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__32_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__33;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\n</div>\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__34_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__35;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<a id=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__36_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__37;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "__link\" href=\"javascript:void();\" onclick=\"hideTOC('"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__38_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__39;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "')\">["};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__40_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__41;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__42_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__43;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__44 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__44_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__45;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = " onclick=\"hideTOC('"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__46 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__46_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__47;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "');\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__48 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__48_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__49;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "collapse"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__50 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__50_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__51;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " id=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__52 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__52_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__53;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderHeading___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__54 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderHeading___closed__54_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderHeading___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___closed__55;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderHeading(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tocTitle___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Table of Contents"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocTitle___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocTitle___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocTitle___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocTitle___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tocTitle___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "attr"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocTitle___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocTitle___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocTitle___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocTitle___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tocTitle___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tocTitle___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tocTitle___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_tocTitle___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_tocTitle___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocTitle(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocTitle___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "<div"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " id=\"toc\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "<div id=\"toc-action-bar\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "<a href=\"javascript:;\" "};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "onclick=\"WIKIDOT.page.listeners.foldToc(event)\">Fold</a>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "<a style=\"display: none\" href=\"javascript:;\" "};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "onclick=\"WIKIDOT.page.listeners.unfoldToc(event)\">Unfold</a></div>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "<div class=\"title\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "</div>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__19;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "<div id=\"toc-list\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__21;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "</div></div>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__22_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__23;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__24;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__25_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__26;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderToc___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__27_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderToc___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__27_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__28_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__29;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " style=\"margin-left: "};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__30_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__31;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__32;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "em;\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__33_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__34;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "<a href=\"#"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__35_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__36;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__37 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__37_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__38;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "align"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__39 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__39_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__40;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "f<"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__41 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__41_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__42;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "f>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__43 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__43_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__44;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = " class=\"floatright\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__45 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__45_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__46;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " class=\"floatleft\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__47 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__47_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__48;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "list_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__49 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__49_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__50;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "list_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__51 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__51_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__52;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "item_start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__53 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__53_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__54;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "item_end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__55 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__55_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__56;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "</a></div>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__57 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__57_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__58;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__59;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "</td></tr></table>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__60 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__60_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__61;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "<table style=\"margin:0; padding:0\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__62 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__62_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__63;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderToc___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "<tr><td style=\"margin:0; padding:0\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__64 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderToc___closed__64_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__65_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__65;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderToc___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderToc___closed__66;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderToc(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderToc___boxed(lean_object*);
static lean_object* _init_lp_lean_x2dftml_LeanFtml_rhTypeIs___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rhTypeIs___closed__0));
v___x_3_ = l_String_toListImpl(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_rhTypeIs(lean_object* v_opts_4_, lean_object* v_expected_5_){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; uint8_t v___x_8_; 
v___x_6_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rhTypeIs___closed__1, &lp_lean_x2dftml_LeanFtml_rhTypeIs___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_rhTypeIs___closed__1);
v___x_7_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_4_, v___x_6_);
v___x_8_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_7_, v_expected_5_);
lean_dec(v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rhTypeIs___boxed(lean_object* v_opts_9_, lean_object* v_expected_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = lp_lean_x2dftml_LeanFtml_rhTypeIs(v_opts_9_, v_expected_10_);
lean_dec(v_expected_10_);
lean_dec(v_opts_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_rhTruthy(lean_object* v_bs_16_){
_start:
{
uint8_t v___x_17_; 
v___x_17_ = l_List_isEmpty___redArg(v_bs_16_);
if (v___x_17_ == 0)
{
lean_object* v___x_18_; uint8_t v___x_19_; 
v___x_18_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rhTruthy___closed__0));
v___x_19_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_bs_16_, v___x_18_);
if (v___x_19_ == 0)
{
uint8_t v___x_20_; 
v___x_20_ = 1;
return v___x_20_;
}
else
{
return v___x_17_;
}
}
else
{
uint8_t v___x_21_; 
v___x_21_ = 0;
return v___x_21_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rhTruthy___boxed(lean_object* v_bs_22_){
_start:
{
uint8_t v_res_23_; lean_object* v_r_24_; 
v_res_23_ = lp_lean_x2dftml_LeanFtml_rhTruthy(v_bs_22_);
lean_dec(v_bs_22_);
v_r_24_ = lean_box(v_res_23_);
return v_r_24_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_optIsset(lean_object* v_opts_25_, lean_object* v_key_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_25_, v_key_26_);
if (lean_obj_tag(v___x_27_) == 0)
{
uint8_t v___x_28_; 
v___x_28_ = 0;
return v___x_28_;
}
else
{
lean_object* v_val_29_; 
v_val_29_ = lean_ctor_get(v___x_27_, 0);
lean_inc(v_val_29_);
lean_dec_ref_known(v___x_27_, 1);
if (lean_obj_tag(v_val_29_) == 3)
{
uint8_t v___x_30_; 
v___x_30_ = 0;
return v___x_30_;
}
else
{
uint8_t v___x_31_; 
lean_dec(v_val_29_);
v___x_31_ = 1;
return v___x_31_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optIsset___boxed(lean_object* v_opts_32_, lean_object* v_key_33_){
_start:
{
uint8_t v_res_34_; lean_object* v_r_35_; 
v_res_34_ = lp_lean_x2dftml_LeanFtml_optIsset(v_opts_32_, v_key_33_);
lean_dec(v_key_33_);
lean_dec(v_opts_32_);
v_r_35_ = lean_box(v_res_34_);
return v_r_35_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__1(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__0));
v___x_38_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_37_);
return v___x_38_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__3(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__2));
v___x_41_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__5(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__4));
v___x_44_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_43_);
return v___x_44_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__7(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__6));
v___x_47_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_46_);
return v___x_47_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__10(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__9));
v___x_53_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte(lean_object* v_b_54_){
_start:
{
lean_object* v___x_55_; uint8_t v___x_56_; 
v___x_55_ = lean_unsigned_to_nat(32u);
v___x_56_ = lean_nat_dec_eq(v_b_54_, v___x_55_);
if (v___x_56_ == 0)
{
lean_object* v___x_57_; uint8_t v___x_58_; 
v___x_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = lean_nat_dec_eq(v_b_54_, v___x_57_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_59_ = lean_unsigned_to_nat(62u);
v___x_60_ = lean_nat_dec_eq(v_b_54_, v___x_59_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; uint8_t v___x_62_; 
v___x_61_ = lean_unsigned_to_nat(60u);
v___x_62_ = lean_nat_dec_eq(v_b_54_, v___x_61_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; uint8_t v___x_64_; 
v___x_63_ = lean_unsigned_to_nat(38u);
v___x_64_ = lean_nat_dec_eq(v_b_54_, v___x_63_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_65_ = lean_unsigned_to_nat(34u);
v___x_66_ = lean_nat_dec_eq(v_b_54_, v___x_65_);
if (v___x_66_ == 0)
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_box(0);
v___x_68_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_68_, 0, v_b_54_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
return v___x_68_;
}
else
{
lean_object* v___x_69_; 
lean_dec(v_b_54_);
v___x_69_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__1, &lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__1);
return v___x_69_;
}
}
else
{
lean_object* v___x_70_; 
lean_dec(v_b_54_);
v___x_70_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__3, &lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__3);
return v___x_70_;
}
}
else
{
lean_object* v___x_71_; 
lean_dec(v_b_54_);
v___x_71_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__5, &lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__5);
return v___x_71_;
}
}
else
{
lean_object* v___x_72_; 
lean_dec(v_b_54_);
v___x_72_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__7, &lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__7);
return v___x_72_;
}
}
else
{
lean_object* v___x_73_; 
lean_dec(v_b_54_);
v___x_73_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__8));
return v___x_73_;
}
}
else
{
lean_object* v___x_74_; 
lean_dec(v_b_54_);
v___x_74_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__10, &lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__10);
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_wikidotEscapeRaw_spec__0(lean_object* v_a_75_, lean_object* v_a_76_){
_start:
{
if (lean_obj_tag(v_a_75_) == 0)
{
lean_object* v___x_77_; 
v___x_77_ = lean_array_to_list(v_a_76_);
return v___x_77_;
}
else
{
lean_object* v_head_78_; lean_object* v_tail_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v_head_78_ = lean_ctor_get(v_a_75_, 0);
lean_inc(v_head_78_);
v_tail_79_ = lean_ctor_get(v_a_75_, 1);
lean_inc(v_tail_79_);
lean_dec_ref_known(v_a_75_, 2);
v___x_80_ = lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte(v_head_78_);
v___x_81_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_76_, v___x_80_);
v_a_75_ = v_tail_79_;
v_a_76_ = v___x_81_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wikidotEscapeRaw(lean_object* v_bs_85_){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_86_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wikidotEscapeRaw___closed__0));
v___x_87_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_wikidotEscapeRaw_spec__0(v_bs_85_, v___x_86_);
return v___x_87_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderRaw___closed__1(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRaw___closed__0));
v___x_90_ = l_String_toListImpl(v___x_89_);
return v___x_90_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderRaw___closed__3(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRaw___closed__2));
v___x_93_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_92_);
return v___x_93_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderRaw___closed__5(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderRaw___closed__4));
v___x_96_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRaw(lean_object* v_opts_97_){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_98_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderRaw___closed__1, &lp_lean_x2dftml_LeanFtml_renderRaw___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderRaw___closed__1);
v___x_99_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_97_, v___x_98_);
v___x_100_ = l_List_isEmpty___redArg(v___x_99_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_101_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderRaw___closed__3, &lp_lean_x2dftml_LeanFtml_renderRaw___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderRaw___closed__3);
v___x_102_ = lp_lean_x2dftml_LeanFtml_wikidotEscapeRaw(v___x_99_);
v___x_103_ = l_List_appendTR___redArg(v___x_101_, v___x_102_);
v___x_104_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderRaw___closed__5, &lp_lean_x2dftml_LeanFtml_renderRaw___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderRaw___closed__5);
v___x_105_ = l_List_appendTR___redArg(v___x_103_, v___x_104_);
return v___x_105_;
}
else
{
lean_object* v___x_106_; 
lean_dec(v___x_99_);
v___x_106_ = lean_box(0);
return v___x_106_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRaw___boxed(lean_object* v_opts_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = lp_lean_x2dftml_LeanFtml_renderRaw(v_opts_107_);
lean_dec(v_opts_107_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRawold(lean_object* v_opts_109_){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_110_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderRaw___closed__1, &lp_lean_x2dftml_LeanFtml_renderRaw___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderRaw___closed__1);
v___x_111_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_109_, v___x_110_);
v___x_112_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___x_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderRawold___boxed(lean_object* v_opts_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = lp_lean_x2dftml_LeanFtml_renderRawold(v_opts_113_);
lean_dec(v_opts_113_);
return v_res_114_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formIndentGo___closed__1(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formIndentGo___closed__0));
v___x_117_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_116_);
return v___x_117_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formIndentGo___closed__3(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formIndentGo___closed__2));
v___x_120_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formIndentGo(lean_object* v_x_121_, lean_object* v_x_122_, lean_object* v_x_123_){
_start:
{
lean_object* v_zero_124_; uint8_t v_isZero_125_; 
v_zero_124_ = lean_unsigned_to_nat(0u);
v_isZero_125_ = lean_nat_dec_eq(v_x_123_, v_zero_124_);
if (v_isZero_125_ == 1)
{
lean_object* v___x_126_; 
lean_dec(v_x_123_);
v___x_126_ = l_List_appendTR___redArg(v_x_122_, v_x_121_);
return v___x_126_;
}
else
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; uint8_t v___x_131_; 
v___x_127_ = lean_unsigned_to_nat(10u);
v___x_128_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wikidotEscapeRaw___closed__0));
lean_inc(v_x_121_);
v___x_129_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_x_121_, v_x_121_, v___x_127_, v___x_128_);
v___x_130_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formIndentGo___closed__1, &lp_lean_x2dftml_LeanFtml_formIndentGo___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_formIndentGo___closed__1);
v___x_131_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_129_, v___x_130_);
lean_dec(v___x_129_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; uint8_t v___x_135_; 
lean_dec(v_x_123_);
v___x_132_ = lean_unsigned_to_nat(5u);
lean_inc(v_x_121_);
v___x_133_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_x_121_, v_x_121_, v___x_132_, v___x_128_);
v___x_134_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__10, &lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_wikidotEscapeRawByte___closed__10);
v___x_135_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_133_, v___x_134_);
lean_dec(v___x_133_);
if (v___x_135_ == 0)
{
lean_object* v___x_136_; 
v___x_136_ = l_List_appendTR___redArg(v_x_122_, v_x_121_);
return v___x_136_;
}
else
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_137_ = l_List_appendTR___redArg(v_x_122_, v___x_134_);
v___x_138_ = l_List_drop___redArg(v___x_132_, v_x_121_);
lean_dec(v_x_121_);
v___x_139_ = l_List_appendTR___redArg(v___x_137_, v___x_138_);
return v___x_139_;
}
}
else
{
lean_object* v_one_140_; lean_object* v_n_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v_one_140_ = lean_unsigned_to_nat(1u);
v_n_141_ = lean_nat_sub(v_x_123_, v_one_140_);
lean_dec(v_x_123_);
v___x_142_ = l_List_drop___redArg(v___x_127_, v_x_121_);
lean_dec(v_x_121_);
v___x_143_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formIndentGo___closed__3, &lp_lean_x2dftml_LeanFtml_formIndentGo___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_formIndentGo___closed__3);
v___x_144_ = l_List_appendTR___redArg(v_x_122_, v___x_143_);
v_x_121_ = v___x_142_;
v_x_122_ = v___x_144_;
v_x_123_ = v_n_141_;
goto _start;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderForm___closed__1(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderForm___closed__0));
v___x_148_ = l_String_toListImpl(v___x_147_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderForm(lean_object* v_opts_149_){
_start:
{
lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_150_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderForm___closed__1, &lp_lean_x2dftml_LeanFtml_renderForm___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderForm___closed__1);
v___x_151_ = lp_lean_x2dftml_LeanFtml_optIsset(v_opts_149_, v___x_150_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; uint8_t v___x_153_; 
v___x_152_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderRaw___closed__1, &lp_lean_x2dftml_LeanFtml_renderRaw___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderRaw___closed__1);
v___x_153_ = lp_lean_x2dftml_LeanFtml_optIsset(v_opts_149_, v___x_152_);
if (v___x_153_ == 0)
{
lean_object* v___x_154_; 
v___x_154_ = lean_box(0);
return v___x_154_;
}
else
{
lean_object* v___x_155_; lean_object* v_escaped_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_155_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_149_, v___x_152_);
v_escaped_156_ = lp_lean_x2dftml_LeanFtml_wikidotEscapeRaw(v___x_155_);
v___x_157_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderRaw___closed__3, &lp_lean_x2dftml_LeanFtml_renderRaw___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderRaw___closed__3);
v___x_158_ = lean_box(0);
v___x_159_ = l_List_lengthTR___redArg(v_escaped_156_);
v___x_160_ = lean_unsigned_to_nat(1u);
v___x_161_ = lean_nat_add(v___x_159_, v___x_160_);
lean_dec(v___x_159_);
v___x_162_ = lp_lean_x2dftml_LeanFtml_formIndentGo(v_escaped_156_, v___x_158_, v___x_161_);
v___x_163_ = l_List_appendTR___redArg(v___x_157_, v___x_162_);
v___x_164_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderRaw___closed__5, &lp_lean_x2dftml_LeanFtml_renderRaw___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderRaw___closed__5);
v___x_165_ = l_List_appendTR___redArg(v___x_163_, v___x_164_);
return v___x_165_;
}
}
else
{
lean_object* v___x_166_; 
v___x_166_ = lean_box(0);
return v___x_166_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderForm___boxed(lean_object* v_opts_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = lp_lean_x2dftml_LeanFtml_renderForm(v_opts_167_);
lean_dec(v_opts_167_);
return v_res_168_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__1(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingTocScript___closed__0));
v___x_171_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_170_);
return v___x_171_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__3(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_173_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingTocScript___closed__2));
v___x_174_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_173_);
return v___x_174_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__4(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_175_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__3, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__3);
v___x_176_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__1, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__1);
v___x_177_ = l_List_appendTR___redArg(v___x_176_, v___x_175_);
return v___x_177_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__6(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingTocScript___closed__5));
v___x_180_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_179_);
return v___x_180_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__7(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_181_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__6, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__6);
v___x_182_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__4, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__4);
v___x_183_ = l_List_appendTR___redArg(v___x_182_, v___x_181_);
return v___x_183_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__9(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingTocScript___closed__8));
v___x_186_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_185_);
return v___x_186_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__10(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_187_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__9, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__9);
v___x_188_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__7, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__7);
v___x_189_ = l_List_appendTR___redArg(v___x_188_, v___x_187_);
return v___x_189_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__12(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingTocScript___closed__11));
v___x_192_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_191_);
return v___x_192_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__13(void){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_193_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__12, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__12);
v___x_194_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__10, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__10);
v___x_195_ = l_List_appendTR___redArg(v___x_194_, v___x_193_);
return v___x_195_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__15(void){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingTocScript___closed__14));
v___x_198_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_197_);
return v___x_198_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__16(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_199_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__15, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__15);
v___x_200_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__13, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__13);
v___x_201_ = l_List_appendTR___redArg(v___x_200_, v___x_199_);
return v___x_201_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__18(void){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingTocScript___closed__17));
v___x_204_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_203_);
return v___x_204_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__19(void){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_205_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__18, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__18);
v___x_206_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__16, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__16);
v___x_207_ = l_List_appendTR___redArg(v___x_206_, v___x_205_);
return v___x_207_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__21(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingTocScript___closed__20));
v___x_210_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_209_);
return v___x_210_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__22(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_211_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__21, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__21);
v___x_212_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__19, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__19);
v___x_213_ = l_List_appendTR___redArg(v___x_212_, v___x_211_);
return v___x_213_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__24(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingTocScript___closed__23));
v___x_216_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_215_);
return v___x_216_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__25(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_217_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__24, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__24_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__24);
v___x_218_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__22, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__22_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__22);
v___x_219_ = l_List_appendTR___redArg(v___x_218_, v___x_217_);
return v___x_219_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__27(void){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_221_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingTocScript___closed__26));
v___x_222_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_221_);
return v___x_222_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__28(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_223_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__27, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__27_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__27);
v___x_224_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__25, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__25);
v___x_225_ = l_List_appendTR___redArg(v___x_224_, v___x_223_);
return v___x_225_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__30(void){
_start:
{
lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_227_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingTocScript___closed__29));
v___x_228_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_227_);
return v___x_228_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__31(void){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_229_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__30, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__30_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__30);
v___x_230_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__28, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__28_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__28);
v___x_231_ = l_List_appendTR___redArg(v___x_230_, v___x_229_);
return v___x_231_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__33(void){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_headingTocScript___closed__32));
v___x_234_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_233_);
return v___x_234_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__34(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_235_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__33, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__33);
v___x_236_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__31, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__31_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__31);
v___x_237_ = l_List_appendTR___redArg(v___x_236_, v___x_235_);
return v___x_237_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_headingTocScript(void){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_headingTocScript___closed__34, &lp_lean_x2dftml_LeanFtml_headingTocScript___closed__34_once, _init_lp_lean_x2dftml_LeanFtml_headingTocScript___closed__34);
return v___x_238_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__1(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__0));
v___x_241_ = l_String_toListImpl(v___x_240_);
return v___x_241_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__4(void){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_246_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__3));
v___x_247_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_246_);
return v___x_247_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__5(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_248_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__4, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__4);
v___x_249_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__2));
v___x_250_ = l_List_appendTR___redArg(v___x_249_, v___x_248_);
return v___x_250_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__7(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__6));
v___x_253_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_252_);
return v___x_253_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__9(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__8));
v___x_256_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_255_);
return v___x_256_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__11(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__10));
v___x_259_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_258_);
return v___x_259_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__13(void){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__12));
v___x_262_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_261_);
return v___x_262_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__15(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__14));
v___x_265_ = l_String_toListImpl(v___x_264_);
return v___x_265_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__17(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__16));
v___x_268_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_267_);
return v___x_268_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__19(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__18));
v___x_271_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_270_);
return v___x_271_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__21(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__20));
v___x_274_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_273_);
return v___x_274_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__23(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_276_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__22));
v___x_277_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_276_);
return v___x_277_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__25(void){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__24));
v___x_280_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_279_);
return v___x_280_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__27(void){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__26));
v___x_283_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_282_);
return v___x_283_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__29(void){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__28));
v___x_286_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_285_);
return v___x_286_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__31(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__30));
v___x_289_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_288_);
return v___x_289_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__33(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__32));
v___x_292_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_291_);
return v___x_292_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__35(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__34));
v___x_295_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_294_);
return v___x_295_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__37(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__36));
v___x_298_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_297_);
return v___x_298_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__39(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_300_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__38));
v___x_301_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_300_);
return v___x_301_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__41(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__40));
v___x_304_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_303_);
return v___x_304_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__43(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__42));
v___x_307_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_306_);
return v___x_307_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__45(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__44));
v___x_310_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_309_);
return v___x_310_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__47(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__46));
v___x_313_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_312_);
return v___x_313_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__49(void){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__48));
v___x_316_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_315_);
return v___x_316_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__51(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__50));
v___x_319_ = l_String_toListImpl(v___x_318_);
return v___x_319_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__53(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__52));
v___x_322_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_321_);
return v___x_322_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__55(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__54));
v___x_325_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderHeading(lean_object* v_opts_326_){
_start:
{
lean_object* v___x_327_; lean_object* v_level_328_; lean_object* v___y_330_; lean_object* v___y_331_; lean_object* v___y_339_; lean_object* v___y_346_; lean_object* v___y_347_; lean_object* v___x_351_; lean_object* v_idBytes_352_; lean_object* v___y_354_; lean_object* v___y_355_; lean_object* v___y_367_; lean_object* v___y_370_; uint8_t v___y_371_; uint8_t v___y_374_; lean_object* v___y_375_; lean_object* v___y_376_; lean_object* v___y_380_; uint8_t v___y_381_; lean_object* v___y_382_; uint8_t v___y_383_; lean_object* v___y_418_; uint8_t v___x_427_; 
v___x_327_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__1, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__1);
v_level_328_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_326_, v___x_327_);
v___x_351_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__15, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__15);
v_idBytes_352_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_326_, v___x_351_);
v___x_427_ = lp_lean_x2dftml_LeanFtml_optIsset(v_opts_326_, v___x_351_);
if (v___x_427_ == 0)
{
goto v___jp_425_;
}
else
{
uint8_t v___x_428_; 
v___x_428_ = l_List_isEmpty___redArg(v_idBytes_352_);
if (v___x_428_ == 0)
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_429_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__53, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__53_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__53);
lean_inc(v_idBytes_352_);
v___x_430_ = l_List_appendTR___redArg(v___x_429_, v_idBytes_352_);
v___x_431_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__55, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__55_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__55);
v___x_432_ = l_List_appendTR___redArg(v___x_430_, v___x_431_);
v___y_418_ = v___x_432_;
goto v___jp_417_;
}
else
{
goto v___jp_425_;
}
}
v___jp_329_:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_332_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__5, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__5);
v___x_333_ = l_List_appendTR___redArg(v___x_332_, v_level_328_);
v___x_334_ = l_List_appendTR___redArg(v___x_333_, v___y_330_);
v___x_335_ = l_List_appendTR___redArg(v___x_334_, v___y_331_);
v___x_336_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__7, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__7);
v___x_337_ = l_List_appendTR___redArg(v___x_335_, v___x_336_);
return v___x_337_;
}
v___jp_338_:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_340_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__9, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__9);
v___x_341_ = l_List_appendTR___redArg(v___x_340_, v_level_328_);
v___x_342_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__11, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__11);
v___x_343_ = l_List_appendTR___redArg(v___x_341_, v___x_342_);
v___x_344_ = l_List_appendTR___redArg(v___x_343_, v___y_339_);
return v___x_344_;
}
v___jp_345_:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
lean_inc(v___y_347_);
v___x_348_ = l_List_appendTR___redArg(v___y_346_, v___y_347_);
v___x_349_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__13, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__13);
v___x_350_ = l_List_appendTR___redArg(v___x_348_, v___x_349_);
v___y_339_ = v___x_350_;
goto v___jp_338_;
}
v___jp_353_:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_356_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__2));
lean_inc(v___y_354_);
v___x_357_ = l_List_appendTR___redArg(v___y_354_, v___x_356_);
v___x_358_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__17, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__17);
v___x_359_ = l_List_appendTR___redArg(v___x_357_, v___x_358_);
lean_inc(v___y_355_);
v___x_360_ = l_List_appendTR___redArg(v___x_359_, v___y_355_);
v___x_361_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__19, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__19);
v___x_362_ = l_List_appendTR___redArg(v___x_360_, v___x_361_);
v___x_363_ = l_List_appendTR___redArg(v___x_362_, v_idBytes_352_);
v___x_364_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__21, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__21);
v___x_365_ = l_List_appendTR___redArg(v___x_363_, v___x_364_);
return v___x_365_;
}
v___jp_366_:
{
lean_object* v___x_368_; 
v___x_368_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__23, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__23);
v___y_354_ = v___y_367_;
v___y_355_ = v___x_368_;
goto v___jp_353_;
}
v___jp_369_:
{
if (v___y_371_ == 0)
{
lean_object* v___x_372_; 
v___x_372_ = lean_box(0);
v___y_354_ = v___y_370_;
v___y_355_ = v___x_372_;
goto v___jp_353_;
}
else
{
v___y_367_ = v___y_370_;
goto v___jp_366_;
}
}
v___jp_373_:
{
if (lean_obj_tag(v___y_375_) == 1)
{
lean_object* v_val_377_; 
v_val_377_ = lean_ctor_get(v___y_375_, 0);
lean_inc(v_val_377_);
lean_dec_ref_known(v___y_375_, 1);
if (lean_obj_tag(v_val_377_) == 2)
{
uint8_t v_a_378_; 
v_a_378_ = lean_ctor_get_uint8(v_val_377_, 0);
lean_dec_ref_known(v_val_377_, 0);
if (v_a_378_ == 1)
{
v___y_367_ = v___y_376_;
goto v___jp_366_;
}
else
{
v___y_370_ = v___y_376_;
v___y_371_ = v___y_374_;
goto v___jp_369_;
}
}
else
{
lean_dec(v_val_377_);
v___y_370_ = v___y_376_;
v___y_371_ = v___y_374_;
goto v___jp_369_;
}
}
else
{
lean_dec(v___y_375_);
v___y_370_ = v___y_376_;
v___y_371_ = v___y_374_;
goto v___jp_369_;
}
}
v___jp_379_:
{
lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_384_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__25, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__25);
v___x_385_ = lp_lean_x2dftml_LeanFtml_rhTypeIs(v_opts_326_, v___x_384_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; uint8_t v___x_387_; 
lean_dec(v___y_382_);
v___x_386_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__27, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__27_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__27);
v___x_387_ = lp_lean_x2dftml_LeanFtml_rhTypeIs(v_opts_326_, v___x_386_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_388_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__29, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__29_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__29);
v___x_389_ = lp_lean_x2dftml_LeanFtml_rhTypeIs(v_opts_326_, v___x_388_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; uint8_t v___x_391_; 
lean_dec(v_level_328_);
v___x_390_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__31, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__31_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__31);
v___x_391_ = lp_lean_x2dftml_LeanFtml_rhTypeIs(v_opts_326_, v___x_390_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; uint8_t v___x_393_; 
lean_dec(v___y_380_);
lean_dec(v_idBytes_352_);
v___x_392_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__33, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__33);
v___x_393_ = lp_lean_x2dftml_LeanFtml_rhTypeIs(v_opts_326_, v___x_392_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; 
v___x_394_ = lean_box(0);
return v___x_394_;
}
else
{
lean_object* v___x_395_; 
v___x_395_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__35, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__35_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__35);
return v___x_395_;
}
}
else
{
if (v___y_381_ == 0)
{
lean_object* v___x_396_; 
v___x_396_ = lean_box(0);
v___y_374_ = v___x_389_;
v___y_375_ = v___y_380_;
v___y_376_ = v___x_396_;
goto v___jp_373_;
}
else
{
lean_object* v___x_397_; 
v___x_397_ = lp_lean_x2dftml_LeanFtml_headingTocScript;
v___y_374_ = v___x_389_;
v___y_375_ = v___y_380_;
v___y_376_ = v___x_397_;
goto v___jp_373_;
}
}
}
else
{
lean_dec(v___y_380_);
if (v___y_381_ == 0)
{
lean_object* v___x_398_; 
lean_dec(v_idBytes_352_);
v___x_398_ = lean_box(0);
v___y_339_ = v___x_398_;
goto v___jp_338_;
}
else
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_399_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__37, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__37_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__37);
lean_inc(v_idBytes_352_);
v___x_400_ = l_List_appendTR___redArg(v___x_399_, v_idBytes_352_);
v___x_401_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__39, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__39);
v___x_402_ = l_List_appendTR___redArg(v___x_400_, v___x_401_);
v___x_403_ = l_List_appendTR___redArg(v___x_402_, v_idBytes_352_);
v___x_404_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__41, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__41_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__41);
v___x_405_ = l_List_appendTR___redArg(v___x_403_, v___x_404_);
if (v___y_383_ == 0)
{
lean_object* v___x_406_; 
v___x_406_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__43, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__43_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__43);
v___y_346_ = v___x_405_;
v___y_347_ = v___x_406_;
goto v___jp_345_;
}
else
{
lean_object* v___x_407_; 
v___x_407_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__45, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__45_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__45);
v___y_346_ = v___x_405_;
v___y_347_ = v___x_407_;
goto v___jp_345_;
}
}
}
}
else
{
lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
lean_dec(v___y_380_);
lean_dec(v_idBytes_352_);
v___x_408_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__5, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__5);
v___x_409_ = l_List_appendTR___redArg(v___x_408_, v_level_328_);
v___x_410_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__7, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__7);
v___x_411_ = l_List_appendTR___redArg(v___x_409_, v___x_410_);
return v___x_411_;
}
}
else
{
lean_dec(v___y_380_);
if (v___y_381_ == 0)
{
lean_object* v___x_412_; 
lean_dec(v_idBytes_352_);
v___x_412_ = lean_box(0);
v___y_330_ = v___y_382_;
v___y_331_ = v___x_412_;
goto v___jp_329_;
}
else
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_413_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__47, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__47_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__47);
v___x_414_ = l_List_appendTR___redArg(v___x_413_, v_idBytes_352_);
v___x_415_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__49, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__49_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__49);
v___x_416_ = l_List_appendTR___redArg(v___x_414_, v___x_415_);
v___y_330_ = v___y_382_;
v___y_331_ = v___x_416_;
goto v___jp_329_;
}
}
}
v___jp_417_:
{
lean_object* v___x_419_; uint8_t v_collapseSet_420_; lean_object* v___x_421_; uint8_t v___x_422_; 
v___x_419_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__51, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__51_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__51);
v_collapseSet_420_ = lp_lean_x2dftml_LeanFtml_optIsset(v_opts_326_, v___x_419_);
v___x_421_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_326_, v___x_419_);
v___x_422_ = lp_lean_x2dftml_LeanFtml_phpEmptyOpt(v___x_421_);
if (v___x_422_ == 0)
{
uint8_t v___x_423_; 
v___x_423_ = 1;
v___y_380_ = v___x_421_;
v___y_381_ = v_collapseSet_420_;
v___y_382_ = v___y_418_;
v___y_383_ = v___x_423_;
goto v___jp_379_;
}
else
{
uint8_t v___x_424_; 
v___x_424_ = 0;
v___y_380_ = v___x_421_;
v___y_381_ = v_collapseSet_420_;
v___y_382_ = v___y_418_;
v___y_383_ = v___x_424_;
goto v___jp_379_;
}
}
v___jp_425_:
{
lean_object* v___x_426_; 
v___x_426_ = lean_box(0);
v___y_418_ = v___x_426_;
goto v___jp_417_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderHeading___boxed(lean_object* v_opts_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = lp_lean_x2dftml_LeanFtml_renderHeading(v_opts_433_);
lean_dec(v_opts_433_);
return v_res_434_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocTitle___closed__1(void){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_436_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocTitle___closed__0));
v___x_437_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_436_);
return v___x_437_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocTitle___closed__3(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_439_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocTitle___closed__2));
v___x_440_ = l_String_toListImpl(v___x_439_);
return v___x_440_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_tocTitle___closed__5(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tocTitle___closed__4));
v___x_443_ = l_String_toListImpl(v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocTitle(lean_object* v_opts_444_){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_449_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocTitle___closed__3, &lp_lean_x2dftml_LeanFtml_tocTitle___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_tocTitle___closed__3);
v___x_450_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_444_, v___x_449_);
if (lean_obj_tag(v___x_450_) == 1)
{
lean_object* v_val_451_; 
v_val_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc(v_val_451_);
lean_dec_ref_known(v___x_450_, 1);
if (lean_obj_tag(v_val_451_) == 4)
{
lean_object* v_a_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v_a_452_ = lean_ctor_get(v_val_451_, 0);
lean_inc(v_a_452_);
lean_dec_ref_known(v_val_451_, 1);
v___x_453_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocTitle___closed__5, &lp_lean_x2dftml_LeanFtml_tocTitle___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_tocTitle___closed__5);
v___x_454_ = lp_lean_x2dftml_LeanFtml_omGet(v_a_452_, v___x_453_);
lean_dec(v_a_452_);
if (lean_obj_tag(v___x_454_) == 1)
{
lean_object* v_val_455_; 
v_val_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_val_455_);
lean_dec_ref_known(v___x_454_, 1);
switch(lean_obj_tag(v_val_455_))
{
case 0:
{
lean_object* v_a_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v_a_456_ = lean_ctor_get(v_val_455_, 0);
lean_inc(v_a_456_);
lean_dec_ref_known(v_val_455_, 1);
v___x_457_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_wikidotEscapeRaw___closed__0));
v___x_458_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(v_a_456_, v___x_457_);
lean_dec(v_a_456_);
return v___x_458_;
}
case 6:
{
lean_object* v_a_459_; 
v_a_459_ = lean_ctor_get(v_val_455_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v_val_455_, 1);
return v_a_459_;
}
default: 
{
lean_dec(v_val_455_);
goto v___jp_447_;
}
}
}
else
{
lean_dec(v___x_454_);
goto v___jp_447_;
}
}
else
{
lean_dec(v_val_451_);
goto v___jp_445_;
}
}
else
{
lean_dec(v___x_450_);
goto v___jp_445_;
}
v___jp_445_:
{
lean_object* v___x_446_; 
v___x_446_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocTitle___closed__1, &lp_lean_x2dftml_LeanFtml_tocTitle___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tocTitle___closed__1);
return v___x_446_;
}
v___jp_447_:
{
lean_object* v___x_448_; 
v___x_448_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_tocTitle___closed__1, &lp_lean_x2dftml_LeanFtml_tocTitle___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_tocTitle___closed__1);
return v___x_448_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tocTitle___boxed(lean_object* v_opts_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = lp_lean_x2dftml_LeanFtml_tocTitle(v_opts_460_);
lean_dec(v_opts_460_);
return v_res_461_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__1(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__0));
v___x_464_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_463_);
return v___x_464_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__3(void){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_466_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__2));
v___x_467_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_466_);
return v___x_467_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__5(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__4));
v___x_470_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_469_);
return v___x_470_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__7(void){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_472_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__6));
v___x_473_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_472_);
return v___x_473_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__9(void){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__8));
v___x_476_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_475_);
return v___x_476_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__11(void){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_478_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__10));
v___x_479_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_478_);
return v___x_479_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__13(void){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_481_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__12));
v___x_482_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_481_);
return v___x_482_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__15(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__14));
v___x_485_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_484_);
return v___x_485_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__17(void){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_487_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__16));
v___x_488_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_487_);
return v___x_488_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__19(void){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_490_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__18));
v___x_491_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_490_);
return v___x_491_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__21(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__20));
v___x_494_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_493_);
return v___x_494_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__23(void){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_496_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__22));
v___x_497_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_496_);
return v___x_497_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__24(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__23, &lp_lean_x2dftml_LeanFtml_renderToc___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__23);
v___x_499_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderHeading___closed__2));
v___x_500_ = l_List_appendTR___redArg(v___x_499_, v___x_498_);
return v___x_500_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__26(void){
_start:
{
lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_502_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__25));
v___x_503_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_502_);
return v___x_503_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__29(void){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_510_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__1, &lp_lean_x2dftml_LeanFtml_renderToc___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__1);
v___x_511_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__28));
v___x_512_ = l_List_appendTR___redArg(v___x_511_, v___x_510_);
return v___x_512_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__31(void){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__30));
v___x_515_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_514_);
return v___x_515_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__32(void){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_516_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__31, &lp_lean_x2dftml_LeanFtml_renderToc___closed__31_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__31);
v___x_517_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__29, &lp_lean_x2dftml_LeanFtml_renderToc___closed__29_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__29);
v___x_518_ = l_List_appendTR___redArg(v___x_517_, v___x_516_);
return v___x_518_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__34(void){
_start:
{
lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_520_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__33));
v___x_521_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_520_);
return v___x_521_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__36(void){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__35));
v___x_524_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_523_);
return v___x_524_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__38(void){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__37));
v___x_527_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_526_);
return v___x_527_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__40(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__39));
v___x_530_ = l_String_toListImpl(v___x_529_);
return v___x_530_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__42(void){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_532_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__41));
v___x_533_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_532_);
return v___x_533_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__44(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__43));
v___x_536_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_535_);
return v___x_536_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__46(void){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__45));
v___x_539_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_538_);
return v___x_539_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__48(void){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_541_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__47));
v___x_542_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_541_);
return v___x_542_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__50(void){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__49));
v___x_545_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_544_);
return v___x_545_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__52(void){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__51));
v___x_548_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_547_);
return v___x_548_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__54(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__53));
v___x_551_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_550_);
return v___x_551_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__56(void){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__55));
v___x_554_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_553_);
return v___x_554_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__58(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_556_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__57));
v___x_557_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_556_);
return v___x_557_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__59(void){
_start:
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_558_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__58, &lp_lean_x2dftml_LeanFtml_renderToc___closed__58_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__58);
v___x_559_ = lp_lean_x2dftml_LeanFtml_tocStripDelim;
v___x_560_ = l_List_appendTR___redArg(v___x_559_, v___x_558_);
return v___x_560_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__61(void){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_562_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__60));
v___x_563_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_562_);
return v___x_563_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__63(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_565_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__62));
v___x_566_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_565_);
return v___x_566_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__65(void){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderToc___closed__64));
v___x_569_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_568_);
return v___x_569_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__66(void){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_570_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__65, &lp_lean_x2dftml_LeanFtml_renderToc___closed__65_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__65);
v___x_571_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__63, &lp_lean_x2dftml_LeanFtml_renderToc___closed__63_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__63);
v___x_572_ = l_List_appendTR___redArg(v___x_571_, v___x_570_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderToc(lean_object* v_opts_573_){
_start:
{
lean_object* v___y_575_; lean_object* v___y_576_; lean_object* v___y_604_; lean_object* v___y_610_; lean_object* v___x_625_; lean_object* v_align_626_; lean_object* v___y_628_; lean_object* v___x_636_; uint8_t v___x_637_; 
v___x_625_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__40, &lp_lean_x2dftml_LeanFtml_renderToc___closed__40_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__40);
v_align_626_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_573_, v___x_625_);
v___x_636_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__50, &lp_lean_x2dftml_LeanFtml_renderToc___closed__50_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__50);
v___x_637_ = lp_lean_x2dftml_LeanFtml_rhTypeIs(v_opts_573_, v___x_636_);
if (v___x_637_ == 0)
{
lean_object* v___x_638_; uint8_t v___x_639_; 
v___x_638_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__52, &lp_lean_x2dftml_LeanFtml_renderToc___closed__52_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__52);
v___x_639_ = lp_lean_x2dftml_LeanFtml_rhTypeIs(v_opts_573_, v___x_638_);
if (v___x_639_ == 0)
{
lean_object* v___x_640_; uint8_t v___x_641_; 
lean_dec(v_align_626_);
v___x_640_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__54, &lp_lean_x2dftml_LeanFtml_renderToc___closed__54_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__54);
v___x_641_ = lp_lean_x2dftml_LeanFtml_rhTypeIs(v_opts_573_, v___x_640_);
if (v___x_641_ == 0)
{
lean_object* v___x_642_; uint8_t v___x_643_; 
v___x_642_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__56, &lp_lean_x2dftml_LeanFtml_renderToc___closed__56_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__56);
v___x_643_ = lp_lean_x2dftml_LeanFtml_rhTypeIs(v_opts_573_, v___x_642_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; 
v___x_644_ = lean_box(0);
return v___x_644_;
}
else
{
lean_object* v___x_645_; 
v___x_645_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__59, &lp_lean_x2dftml_LeanFtml_renderToc___closed__59_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__59);
return v___x_645_;
}
}
else
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__1, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__1);
v___x_647_ = lp_lean_x2dftml_LeanFtml_optNat(v_opts_573_, v___x_646_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_object* v___x_648_; 
v___x_648_ = lean_unsigned_to_nat(0u);
v___y_610_ = v___x_648_;
goto v___jp_609_;
}
else
{
lean_object* v_val_649_; 
v_val_649_ = lean_ctor_get(v___x_647_, 0);
lean_inc(v_val_649_);
lean_dec_ref_known(v___x_647_, 1);
v___y_610_ = v_val_649_;
goto v___jp_609_;
}
}
}
else
{
uint8_t v___x_650_; 
v___x_650_ = lp_lean_x2dftml_LeanFtml_rhTruthy(v_align_626_);
lean_dec(v_align_626_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; 
v___x_651_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__61, &lp_lean_x2dftml_LeanFtml_renderToc___closed__61_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__61);
v___y_604_ = v___x_651_;
goto v___jp_603_;
}
else
{
lean_object* v___x_652_; 
v___x_652_ = lean_box(0);
v___y_604_ = v___x_652_;
goto v___jp_603_;
}
}
}
else
{
uint8_t v___x_653_; 
v___x_653_ = lp_lean_x2dftml_LeanFtml_rhTruthy(v_align_626_);
if (v___x_653_ == 0)
{
lean_object* v___x_654_; 
v___x_654_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__66, &lp_lean_x2dftml_LeanFtml_renderToc___closed__66_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__66);
v___y_628_ = v___x_654_;
goto v___jp_627_;
}
else
{
lean_object* v___x_655_; 
v___x_655_ = lean_box(0);
v___y_628_ = v___x_655_;
goto v___jp_627_;
}
}
v___jp_574_:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_577_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__1, &lp_lean_x2dftml_LeanFtml_renderToc___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__1);
lean_inc(v___y_575_);
v___x_578_ = l_List_appendTR___redArg(v___y_575_, v___x_577_);
v___x_579_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__3, &lp_lean_x2dftml_LeanFtml_renderToc___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__3);
v___x_580_ = l_List_appendTR___redArg(v___x_578_, v___x_579_);
lean_inc(v___y_576_);
v___x_581_ = l_List_appendTR___redArg(v___x_580_, v___y_576_);
v___x_582_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__5, &lp_lean_x2dftml_LeanFtml_renderToc___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__5);
v___x_583_ = l_List_appendTR___redArg(v___x_581_, v___x_582_);
v___x_584_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__7, &lp_lean_x2dftml_LeanFtml_renderToc___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__7);
v___x_585_ = l_List_appendTR___redArg(v___x_583_, v___x_584_);
v___x_586_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__9, &lp_lean_x2dftml_LeanFtml_renderToc___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__9);
v___x_587_ = l_List_appendTR___redArg(v___x_585_, v___x_586_);
v___x_588_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__11, &lp_lean_x2dftml_LeanFtml_renderToc___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__11);
v___x_589_ = l_List_appendTR___redArg(v___x_587_, v___x_588_);
v___x_590_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__13, &lp_lean_x2dftml_LeanFtml_renderToc___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__13);
v___x_591_ = l_List_appendTR___redArg(v___x_589_, v___x_590_);
v___x_592_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__15, &lp_lean_x2dftml_LeanFtml_renderToc___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__15);
v___x_593_ = l_List_appendTR___redArg(v___x_591_, v___x_592_);
v___x_594_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__17, &lp_lean_x2dftml_LeanFtml_renderToc___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__17);
v___x_595_ = l_List_appendTR___redArg(v___x_593_, v___x_594_);
v___x_596_ = lp_lean_x2dftml_LeanFtml_tocTitle(v_opts_573_);
v___x_597_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___x_596_);
v___x_598_ = l_List_appendTR___redArg(v___x_595_, v___x_597_);
v___x_599_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__19, &lp_lean_x2dftml_LeanFtml_renderToc___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__19);
v___x_600_ = l_List_appendTR___redArg(v___x_598_, v___x_599_);
v___x_601_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__21, &lp_lean_x2dftml_LeanFtml_renderToc___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__21);
v___x_602_ = l_List_appendTR___redArg(v___x_600_, v___x_601_);
return v___x_602_;
}
v___jp_603_:
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_605_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__24, &lp_lean_x2dftml_LeanFtml_renderToc___closed__24_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__24);
lean_inc(v___y_604_);
v___x_606_ = l_List_appendTR___redArg(v___x_605_, v___y_604_);
v___x_607_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__26, &lp_lean_x2dftml_LeanFtml_renderToc___closed__26_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__26);
v___x_608_ = l_List_appendTR___redArg(v___x_606_, v___x_607_);
return v___x_608_;
}
v___jp_609_:
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_611_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__32, &lp_lean_x2dftml_LeanFtml_renderToc___closed__32_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__32);
v___x_612_ = lp_lean_x2dftml_LeanFtml_natBytes(v___y_610_);
v___x_613_ = l_List_appendTR___redArg(v___x_611_, v___x_612_);
v___x_614_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__34, &lp_lean_x2dftml_LeanFtml_renderToc___closed__34_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__34);
v___x_615_ = l_List_appendTR___redArg(v___x_613_, v___x_614_);
v___x_616_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__36, &lp_lean_x2dftml_LeanFtml_renderToc___closed__36_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__36);
v___x_617_ = l_List_appendTR___redArg(v___x_615_, v___x_616_);
v___x_618_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderHeading___closed__15, &lp_lean_x2dftml_LeanFtml_renderHeading___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderHeading___closed__15);
v___x_619_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_573_, v___x_618_);
v___x_620_ = l_List_appendTR___redArg(v___x_617_, v___x_619_);
v___x_621_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__38, &lp_lean_x2dftml_LeanFtml_renderToc___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__38);
v___x_622_ = l_List_appendTR___redArg(v___x_620_, v___x_621_);
v___x_623_ = lp_lean_x2dftml_LeanFtml_tocStripDelim;
v___x_624_ = l_List_appendTR___redArg(v___x_622_, v___x_623_);
return v___x_624_;
}
v___jp_627_:
{
lean_object* v___x_629_; uint8_t v___x_630_; 
v___x_629_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__42, &lp_lean_x2dftml_LeanFtml_renderToc___closed__42_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__42);
v___x_630_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_align_626_, v___x_629_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; uint8_t v___x_632_; 
v___x_631_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__44, &lp_lean_x2dftml_LeanFtml_renderToc___closed__44_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__44);
v___x_632_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_align_626_, v___x_631_);
lean_dec(v_align_626_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; 
v___x_633_ = lean_box(0);
v___y_575_ = v___y_628_;
v___y_576_ = v___x_633_;
goto v___jp_574_;
}
else
{
lean_object* v___x_634_; 
v___x_634_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__46, &lp_lean_x2dftml_LeanFtml_renderToc___closed__46_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__46);
v___y_575_ = v___y_628_;
v___y_576_ = v___x_634_;
goto v___jp_574_;
}
}
else
{
lean_object* v___x_635_; 
lean_dec(v_align_626_);
v___x_635_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderToc___closed__48, &lp_lean_x2dftml_LeanFtml_renderToc___closed__48_once, _init_lp_lean_x2dftml_LeanFtml_renderToc___closed__48);
v___y_575_ = v___y_628_;
v___y_576_ = v___x_635_;
goto v___jp_574_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderToc___boxed(lean_object* v_opts_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = lp_lean_x2dftml_LeanFtml_renderToc(v_opts_656_);
lean_dec(v_opts_656_);
return v_res_657_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_RenderCore(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_RawHeadingRules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_RenderCore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dftml_LeanFtml_headingTocScript = _init_lp_lean_x2dftml_LeanFtml_headingTocScript();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_headingTocScript);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
