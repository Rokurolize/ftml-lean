// Lean compiler output
// Module: LeanFtml.InlineSimpleRules
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
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_List_intersperseTR___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_findSub(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_inlineTypeIs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_inlineTypeIs___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_inlineTypeIs___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_inlineTypeIs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_inlineTypeIs___closed__1;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_inlineTypeIs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_inlineTypeIs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hexByteUpper(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hexByteUpper___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_percentEncodeNonAscii_spec__0(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_percentEncodeNonAscii___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_percentEncodeNonAscii___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_percentEncodeNonAscii___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_percentEncodeNonAscii(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_asciiLowerBytes_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_asciiLowerBytes(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_phpTruthyBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_phpTruthyBytes___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_phpTruthyBytes___closed__0_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_phpTruthyBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phpTruthyBytes___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "<a href=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUrl___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUrl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUrl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUrl___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUrl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUrl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUrl___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUrl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUrl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "</a>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUrl___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUrl___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUrl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "footnote"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUrl___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUrl___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUrl___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<sup>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUrl___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUrl___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUrl___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "</sup>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUrl___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUrl___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUrl___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUrl___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUrl___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUrl___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUrl___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUrl___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUrl___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " target=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUrl___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUrl___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__19;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUrl___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "href"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUrl___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUrl___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__21;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUrl___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUrl___closed__22_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUrl___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__23;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUrl___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "javascript:;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUrl___closed__24_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUrl___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___closed__25;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderUrl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_renderEmail_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderEmail___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "email"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderEmail___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderEmail___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderEmail___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderEmail___closed__1;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderEmail___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(35) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderEmail___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderEmail___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderEmail___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "<span class=\"wiki-email\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderEmail___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderEmail___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderEmail___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderEmail___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderEmail___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "</span>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderEmail___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderEmail___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderEmail___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderEmail___closed__6;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmail(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmail___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "&#39;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "&quot;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "&gt;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "&lt;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "&amp;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__10;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathinlineEscByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderMathinline_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderMathinline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "<span class=\"math-inline\">$"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderMathinline___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderMathinline___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderMathinline___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderMathinline___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderMathinline___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "content"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderMathinline___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderMathinline___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderMathinline___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderMathinline___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderMathinline___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "$</span>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderMathinline___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderMathinline___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderMathinline___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderMathinline___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderMathinline(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderMathinline___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_interwikiSites___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "wikipedia"};
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_interwikiSites___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "https://en.wikipedia.org/wiki/%s"};
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_interwikiSites___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "wikipedia.pl"};
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_interwikiSites___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "https://pl.wikipedia.org/wiki/%s"};
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_interwikiSites___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "pl.wikipedia"};
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__12;
static const lean_string_object lp_lean_x2dftml_LeanFtml_interwikiSites___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "google"};
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__13_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__14;
static const lean_string_object lp_lean_x2dftml_LeanFtml_interwikiSites___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "https://www.google.com/search\?q=%s"};
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__15_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__16;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_interwikiSites___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "dictionary"};
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__19;
static const lean_string_object lp_lean_x2dftml_LeanFtml_interwikiSites___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "https://dictionary.reference.com/browse/%s"};
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__21;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__22;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__23;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__24;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__25;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__26;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiSites___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites___closed__27;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_interwikiSites;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesTableLookup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesTableLookup___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_sprintfPercentS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(37) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_sprintfPercentS___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_sprintfPercentS___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sprintfPercentS(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "site"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "\" onclick=\"window.open(this.href, '_blank'); return false;\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "page"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__5;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(115) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__6_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(37) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__6_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__7_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderInterwiki(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderInterwiki___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_collapseSpaceTab_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseSpaceTab_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collapseSpaceTab_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseSpaceTab(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isHexDigitB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isHexDigitB___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_colorClassB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_colorClassB___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_normalizeColor_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_normalizeColor_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_normalizeColor_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_normalizeColor_spec__1___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_normalizeColor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_normalizeColor___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_normalizeColor___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeColor(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderColortext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "color"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderColortext___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderColortext___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderColortext___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderColortext___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderColortext___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderColortext___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "##"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderColortext___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderColortext___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderColortext___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderColortext___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderColortext___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderColortext___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderColortext___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderColortext___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderColortext___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "<span style=\"color: "};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderColortext___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderColortext___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderColortext___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderColortext___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderColortext___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderColortext___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "<span style=\"color:\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderColortext___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderColortext___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___closed__15;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderColortext(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTaggedPair(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTaggedPair___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderStrong___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "<strong>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderStrong___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderStrong___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderStrong___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderStrong___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderStrong___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "</strong>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderStrong___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderStrong___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderStrong___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderStrong___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStrong(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStrong___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "<em>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "</em>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmphasis(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmphasis___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderUnderline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "<span style=\"text-decoration: underline;\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderUnderline___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderUnderline___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderUnderline___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderUnderline___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderUnderline(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderUnderline___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderStrikethrough___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "<span style=\"text-decoration: line-through;\">"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderStrikethrough___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderStrikethrough___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderStrikethrough___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderStrikethrough___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStrikethrough(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStrikethrough___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "<tt>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTt___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "</tt>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTt___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTt___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTt___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTt___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderSuperscript(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderSuperscript___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderSubscript___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<sub>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderSubscript___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderSubscript___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderSubscript___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderSubscript___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderSubscript___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "</sub>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderSubscript___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderSubscript___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderSubscript___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderSubscript___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderSubscript(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderSubscript___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "char"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "``"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "''"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ",,"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "<<"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ">>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "..."};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__19;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "---"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__21;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "--"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__22_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__23;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "&#8212;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__24_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__25;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "&#8230;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__26_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__27;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "&#160;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__28_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__29;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "&#187;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__30_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__31;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "&#171;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__32_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__33;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "&#8217;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__34_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__35;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "&#8216;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__36_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__37;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "&#8222;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__38_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__39;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "&#8221;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__40_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__41;
static const lean_string_object lp_lean_x2dftml_LeanFtml_renderTypography___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "&#8220;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_renderTypography___closed__42_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_renderTypography___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___closed__43;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTypography(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTighten;
static lean_object* _init_lp_lean_x2dftml_LeanFtml_inlineTypeIs___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_inlineTypeIs___closed__0));
v___x_3_ = l_String_toListImpl(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_inlineTypeIs(lean_object* v_opts_4_, lean_object* v_expected_5_){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; uint8_t v___x_8_; 
v___x_6_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_inlineTypeIs___closed__1, &lp_lean_x2dftml_LeanFtml_inlineTypeIs___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_inlineTypeIs___closed__1);
v___x_7_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_4_, v___x_6_);
v___x_8_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_7_, v_expected_5_);
lean_dec(v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_inlineTypeIs___boxed(lean_object* v_opts_9_, lean_object* v_expected_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = lp_lean_x2dftml_LeanFtml_inlineTypeIs(v_opts_9_, v_expected_10_);
lean_dec(v_expected_10_);
lean_dec(v_opts_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hexByteUpper(lean_object* v_b_13_){
_start:
{
lean_object* v___y_15_; lean_object* v___y_16_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v_hi_22_; lean_object* v_lo_23_; lean_object* v___x_24_; lean_object* v___y_26_; uint8_t v___x_32_; 
v___x_20_ = lean_unsigned_to_nat(16u);
v___x_21_ = lean_unsigned_to_nat(4u);
v_hi_22_ = lean_nat_shiftr(v_b_13_, v___x_21_);
v_lo_23_ = lean_nat_mod(v_b_13_, v___x_20_);
v___x_24_ = lean_unsigned_to_nat(10u);
v___x_32_ = lean_nat_dec_lt(v_hi_22_, v___x_24_);
if (v___x_32_ == 0)
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = lean_unsigned_to_nat(55u);
v___x_34_ = lean_nat_add(v___x_33_, v_hi_22_);
lean_dec(v_hi_22_);
v___y_26_ = v___x_34_;
goto v___jp_25_;
}
else
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_unsigned_to_nat(48u);
v___x_36_ = lean_nat_add(v___x_35_, v_hi_22_);
lean_dec(v_hi_22_);
v___y_26_ = v___x_36_;
goto v___jp_25_;
}
v___jp_14_:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_17_ = lean_box(0);
v___x_18_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_18_, 0, v___y_16_);
lean_ctor_set(v___x_18_, 1, v___x_17_);
v___x_19_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_19_, 0, v___y_15_);
lean_ctor_set(v___x_19_, 1, v___x_18_);
return v___x_19_;
}
v___jp_25_:
{
uint8_t v___x_27_; 
v___x_27_ = lean_nat_dec_lt(v_lo_23_, v___x_24_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_unsigned_to_nat(55u);
v___x_29_ = lean_nat_add(v___x_28_, v_lo_23_);
lean_dec(v_lo_23_);
v___y_15_ = v___y_26_;
v___y_16_ = v___x_29_;
goto v___jp_14_;
}
else
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_unsigned_to_nat(48u);
v___x_31_ = lean_nat_add(v___x_30_, v_lo_23_);
lean_dec(v_lo_23_);
v___y_15_ = v___y_26_;
v___y_16_ = v___x_31_;
goto v___jp_14_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hexByteUpper___boxed(lean_object* v_b_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = lp_lean_x2dftml_LeanFtml_hexByteUpper(v_b_37_);
lean_dec(v_b_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_percentEncodeNonAscii_spec__0(lean_object* v_a_39_, lean_object* v_a_40_){
_start:
{
if (lean_obj_tag(v_a_39_) == 0)
{
lean_object* v___x_41_; 
v___x_41_ = lean_array_to_list(v_a_40_);
return v___x_41_;
}
else
{
lean_object* v_head_42_; lean_object* v_tail_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_62_; 
v_head_42_ = lean_ctor_get(v_a_39_, 0);
v_tail_43_ = lean_ctor_get(v_a_39_, 1);
v_isSharedCheck_62_ = !lean_is_exclusive(v_a_39_);
if (v_isSharedCheck_62_ == 0)
{
v___x_45_ = v_a_39_;
v_isShared_46_ = v_isSharedCheck_62_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_tail_43_);
lean_inc(v_head_42_);
lean_dec(v_a_39_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_62_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v___y_48_; lean_object* v___x_51_; uint8_t v___x_52_; 
v___x_51_ = lean_unsigned_to_nat(128u);
v___x_52_ = lean_nat_dec_lt(v_head_42_, v___x_51_);
if (v___x_52_ == 0)
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_56_; 
v___x_53_ = lean_unsigned_to_nat(37u);
v___x_54_ = lp_lean_x2dftml_LeanFtml_hexByteUpper(v_head_42_);
lean_dec(v_head_42_);
if (v_isShared_46_ == 0)
{
lean_ctor_set(v___x_45_, 1, v___x_54_);
lean_ctor_set(v___x_45_, 0, v___x_53_);
v___x_56_ = v___x_45_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v___x_53_);
lean_ctor_set(v_reuseFailAlloc_57_, 1, v___x_54_);
v___x_56_ = v_reuseFailAlloc_57_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
v___y_48_ = v___x_56_;
goto v___jp_47_;
}
}
else
{
lean_object* v___x_58_; lean_object* v___x_60_; 
v___x_58_ = lean_box(0);
if (v_isShared_46_ == 0)
{
lean_ctor_set(v___x_45_, 1, v___x_58_);
v___x_60_ = v___x_45_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v_head_42_);
lean_ctor_set(v_reuseFailAlloc_61_, 1, v___x_58_);
v___x_60_ = v_reuseFailAlloc_61_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
v___y_48_ = v___x_60_;
goto v___jp_47_;
}
}
v___jp_47_:
{
lean_object* v___x_49_; 
v___x_49_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_40_, v___y_48_);
v_a_39_ = v_tail_43_;
v_a_40_ = v___x_49_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_percentEncodeNonAscii(lean_object* v_bs_65_){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_percentEncodeNonAscii___closed__0));
v___x_67_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_percentEncodeNonAscii_spec__0(v_bs_65_, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_asciiLowerBytes_spec__0(lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
if (lean_obj_tag(v_a_68_) == 0)
{
lean_object* v___x_70_; 
v___x_70_ = l_List_reverse___redArg(v_a_69_);
return v___x_70_;
}
else
{
lean_object* v_head_71_; lean_object* v_tail_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_88_; 
v_head_71_ = lean_ctor_get(v_a_68_, 0);
v_tail_72_ = lean_ctor_get(v_a_68_, 1);
v_isSharedCheck_88_ = !lean_is_exclusive(v_a_68_);
if (v_isSharedCheck_88_ == 0)
{
v___x_74_ = v_a_68_;
v_isShared_75_ = v_isSharedCheck_88_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_tail_72_);
lean_inc(v_head_71_);
lean_dec(v_a_68_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_88_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
lean_object* v___y_77_; lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_82_ = lean_unsigned_to_nat(65u);
v___x_83_ = lean_nat_dec_le(v___x_82_, v_head_71_);
if (v___x_83_ == 0)
{
v___y_77_ = v_head_71_;
goto v___jp_76_;
}
else
{
lean_object* v___x_84_; uint8_t v___x_85_; 
v___x_84_ = lean_unsigned_to_nat(90u);
v___x_85_ = lean_nat_dec_le(v_head_71_, v___x_84_);
if (v___x_85_ == 0)
{
v___y_77_ = v_head_71_;
goto v___jp_76_;
}
else
{
lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_86_ = lean_unsigned_to_nat(32u);
v___x_87_ = lean_nat_add(v_head_71_, v___x_86_);
lean_dec(v_head_71_);
v___y_77_ = v___x_87_;
goto v___jp_76_;
}
}
v___jp_76_:
{
lean_object* v___x_79_; 
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 1, v_a_69_);
lean_ctor_set(v___x_74_, 0, v___y_77_);
v___x_79_ = v___x_74_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v___y_77_);
lean_ctor_set(v_reuseFailAlloc_81_, 1, v_a_69_);
v___x_79_ = v_reuseFailAlloc_81_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
v_a_68_ = v_tail_72_;
v_a_69_ = v___x_79_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_asciiLowerBytes(lean_object* v_bs_89_){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_box(0);
v___x_91_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_asciiLowerBytes_spec__0(v_bs_89_, v___x_90_);
return v___x_91_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_phpTruthyBytes(lean_object* v_bs_95_){
_start:
{
uint8_t v___x_96_; 
v___x_96_ = l_List_isEmpty___redArg(v_bs_95_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_97_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_phpTruthyBytes___closed__0));
v___x_98_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_bs_95_, v___x_97_);
if (v___x_98_ == 0)
{
uint8_t v___x_99_; 
v___x_99_ = 1;
return v___x_99_;
}
else
{
return v___x_96_;
}
}
else
{
uint8_t v___x_100_; 
v___x_100_ = 0;
return v___x_100_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phpTruthyBytes___boxed(lean_object* v_bs_101_){
_start:
{
uint8_t v_res_102_; lean_object* v_r_103_; 
v_res_102_ = lp_lean_x2dftml_LeanFtml_phpTruthyBytes(v_bs_101_);
lean_dec(v_bs_101_);
v_r_103_ = lean_box(v_res_102_);
return v_r_103_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__1(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUrl___closed__0));
v___x_106_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_105_);
return v___x_106_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__3(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_108_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUrl___closed__2));
v___x_109_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_108_);
return v___x_109_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__5(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUrl___closed__4));
v___x_112_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_111_);
return v___x_112_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__7(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUrl___closed__6));
v___x_115_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_114_);
return v___x_115_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__9(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUrl___closed__8));
v___x_118_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_117_);
return v___x_118_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__11(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUrl___closed__10));
v___x_121_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_120_);
return v___x_121_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__13(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUrl___closed__12));
v___x_124_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_123_);
return v___x_124_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__15(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUrl___closed__14));
v___x_127_ = l_String_toListImpl(v___x_126_);
return v___x_127_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__17(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUrl___closed__16));
v___x_130_ = l_String_toListImpl(v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__19(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUrl___closed__18));
v___x_133_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_132_);
return v___x_133_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__21(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUrl___closed__20));
v___x_136_ = l_String_toListImpl(v___x_135_);
return v___x_136_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__23(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUrl___closed__22));
v___x_139_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_138_);
return v___x_139_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__25(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUrl___closed__24));
v___x_142_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderUrl(lean_object* v_opts_143_){
_start:
{
lean_object* v___y_145_; lean_object* v___y_146_; lean_object* v___y_147_; lean_object* v___y_165_; lean_object* v___x_178_; lean_object* v_href0_179_; lean_object* v___x_180_; lean_object* v_hrefE_181_; lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_178_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__21, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__21);
v_href0_179_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_143_, v___x_178_);
v___x_180_ = lp_lean_x2dftml_LeanFtml_percentEncodeNonAscii(v_href0_179_);
v_hrefE_181_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___x_180_);
v___x_182_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__23, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__23);
v___x_183_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_hrefE_181_, v___x_182_);
if (v___x_183_ == 0)
{
v___y_165_ = v_hrefE_181_;
goto v___jp_164_;
}
else
{
lean_object* v___x_184_; 
lean_dec(v_hrefE_181_);
v___x_184_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__25, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__25);
v___y_165_ = v___x_184_;
goto v___jp_164_;
}
v___jp_144_:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v_link_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_148_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__1, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__1);
v___x_149_ = l_List_appendTR___redArg(v___x_148_, v___y_146_);
v___x_150_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__3, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__3);
v___x_151_ = l_List_appendTR___redArg(v___x_149_, v___x_150_);
v___x_152_ = l_List_appendTR___redArg(v___x_151_, v___y_147_);
v___x_153_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__5, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__5);
v___x_154_ = l_List_appendTR___redArg(v___x_152_, v___x_153_);
v___x_155_ = l_List_appendTR___redArg(v___x_154_, v___y_145_);
v___x_156_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__7, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__7);
v_link_157_ = l_List_appendTR___redArg(v___x_155_, v___x_156_);
v___x_158_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__9, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__9);
v___x_159_ = lp_lean_x2dftml_LeanFtml_inlineTypeIs(v_opts_143_, v___x_158_);
if (v___x_159_ == 0)
{
return v_link_157_;
}
else
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_160_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__11, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__11);
v___x_161_ = l_List_appendTR___redArg(v___x_160_, v_link_157_);
v___x_162_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__13, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__13);
v___x_163_ = l_List_appendTR___redArg(v___x_161_, v___x_162_);
return v___x_163_;
}
}
v___jp_164_:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v_text_168_; lean_object* v___x_169_; lean_object* v_target_170_; uint8_t v___x_171_; 
v___x_166_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__15, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__15);
v___x_167_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_143_, v___x_166_);
v_text_168_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v___x_167_);
v___x_169_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__17, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__17);
v_target_170_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_143_, v___x_169_);
v___x_171_ = lp_lean_x2dftml_LeanFtml_phpTruthyBytes(v_target_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; 
lean_dec(v_target_170_);
v___x_172_ = lean_box(0);
v___y_145_ = v_text_168_;
v___y_146_ = v___y_165_;
v___y_147_ = v___x_172_;
goto v___jp_144_;
}
else
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_173_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__19, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__19);
v___x_174_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v_target_170_);
v___x_175_ = l_List_appendTR___redArg(v___x_173_, v___x_174_);
v___x_176_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__3, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__3);
v___x_177_ = l_List_appendTR___redArg(v___x_175_, v___x_176_);
v___y_145_ = v_text_168_;
v___y_146_ = v___y_165_;
v___y_147_ = v___x_177_;
goto v___jp_144_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderUrl___boxed(lean_object* v_opts_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = lp_lean_x2dftml_LeanFtml_renderUrl(v_opts_185_);
lean_dec(v_opts_185_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_renderEmail_spec__0(lean_object* v_a_187_, lean_object* v_a_188_){
_start:
{
if (lean_obj_tag(v_a_187_) == 0)
{
lean_object* v___x_189_; 
v___x_189_ = l_List_reverse___redArg(v_a_188_);
return v___x_189_;
}
else
{
lean_object* v_head_190_; lean_object* v_tail_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_204_; 
v_head_190_ = lean_ctor_get(v_a_187_, 0);
v_tail_191_ = lean_ctor_get(v_a_187_, 1);
v_isSharedCheck_204_ = !lean_is_exclusive(v_a_187_);
if (v_isSharedCheck_204_ == 0)
{
v___x_193_ = v_a_187_;
v_isShared_194_ = v_isSharedCheck_204_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_tail_191_);
lean_inc(v_head_190_);
lean_dec(v_a_187_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_204_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___y_196_; lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_201_ = lean_unsigned_to_nat(64u);
v___x_202_ = lean_nat_dec_eq(v_head_190_, v___x_201_);
if (v___x_202_ == 0)
{
v___y_196_ = v_head_190_;
goto v___jp_195_;
}
else
{
lean_object* v___x_203_; 
lean_dec(v_head_190_);
v___x_203_ = lean_unsigned_to_nat(124u);
v___y_196_ = v___x_203_;
goto v___jp_195_;
}
v___jp_195_:
{
lean_object* v___x_198_; 
if (v_isShared_194_ == 0)
{
lean_ctor_set(v___x_193_, 1, v_a_188_);
lean_ctor_set(v___x_193_, 0, v___y_196_);
v___x_198_ = v___x_193_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___y_196_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v_a_188_);
v___x_198_ = v_reuseFailAlloc_200_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
v_a_187_ = v_tail_191_;
v_a_188_ = v___x_198_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderEmail___closed__1(void){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderEmail___closed__0));
v___x_207_ = l_String_toListImpl(v___x_206_);
return v___x_207_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderEmail___closed__4(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderEmail___closed__3));
v___x_213_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_212_);
return v___x_213_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderEmail___closed__6(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderEmail___closed__5));
v___x_216_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmail(lean_object* v_opts_217_){
_start:
{
lean_object* v___x_218_; lean_object* v_email_219_; lean_object* v___x_220_; lean_object* v_text_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v_joined_227_; lean_object* v_mapped_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_218_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderEmail___closed__1, &lp_lean_x2dftml_LeanFtml_renderEmail___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderEmail___closed__1);
v_email_219_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_217_, v___x_218_);
v___x_220_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__15, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__15);
v_text_221_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_217_, v___x_220_);
v___x_222_ = l_List_reverse___redArg(v_email_219_);
v___x_223_ = lean_box(0);
v___x_224_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderEmail___closed__2));
v___x_225_ = l_List_appendTR___redArg(v___x_222_, v___x_224_);
v___x_226_ = l_List_reverse___redArg(v_text_221_);
v_joined_227_ = l_List_appendTR___redArg(v___x_225_, v___x_226_);
v_mapped_228_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_renderEmail_spec__0(v_joined_227_, v___x_223_);
v___x_229_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderEmail___closed__4, &lp_lean_x2dftml_LeanFtml_renderEmail___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_renderEmail___closed__4);
v___x_230_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsNoQuotesSubst(v_mapped_228_);
v___x_231_ = l_List_appendTR___redArg(v___x_229_, v___x_230_);
v___x_232_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderEmail___closed__6, &lp_lean_x2dftml_LeanFtml_renderEmail___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_renderEmail___closed__6);
v___x_233_ = l_List_appendTR___redArg(v___x_231_, v___x_232_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmail___boxed(lean_object* v_opts_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = lp_lean_x2dftml_LeanFtml_renderEmail(v_opts_234_);
lean_dec(v_opts_234_);
return v_res_235_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__2(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__1));
v___x_241_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_240_);
return v___x_241_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__4(void){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__3));
v___x_244_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_243_);
return v___x_244_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__6(void){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_246_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__5));
v___x_247_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_246_);
return v___x_247_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__8(void){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_249_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__7));
v___x_250_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_249_);
return v___x_250_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__10(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__9));
v___x_253_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathinlineEscByte(lean_object* v_b_254_){
_start:
{
lean_object* v___x_255_; uint8_t v___x_256_; 
v___x_255_ = lean_unsigned_to_nat(38u);
v___x_256_ = lean_nat_dec_eq(v_b_254_, v___x_255_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; uint8_t v___x_258_; 
v___x_257_ = lean_unsigned_to_nat(60u);
v___x_258_ = lean_nat_dec_eq(v_b_254_, v___x_257_);
if (v___x_258_ == 0)
{
lean_object* v___x_259_; uint8_t v___x_260_; 
v___x_259_ = lean_unsigned_to_nat(62u);
v___x_260_ = lean_nat_dec_eq(v_b_254_, v___x_259_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; uint8_t v___x_262_; 
v___x_261_ = lean_unsigned_to_nat(34u);
v___x_262_ = lean_nat_dec_eq(v_b_254_, v___x_261_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_263_ = lean_unsigned_to_nat(39u);
v___x_264_ = lean_nat_dec_eq(v_b_254_, v___x_263_);
if (v___x_264_ == 0)
{
lean_object* v___x_265_; uint8_t v___x_266_; 
v___x_265_ = lean_unsigned_to_nat(0u);
v___x_266_ = lean_nat_dec_eq(v_b_254_, v___x_265_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_box(0);
v___x_268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_268_, 0, v_b_254_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
return v___x_268_;
}
else
{
lean_object* v___x_269_; 
lean_dec(v_b_254_);
v___x_269_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__0));
return v___x_269_;
}
}
else
{
lean_object* v___x_270_; 
lean_dec(v_b_254_);
v___x_270_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__2, &lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__2);
return v___x_270_;
}
}
else
{
lean_object* v___x_271_; 
lean_dec(v_b_254_);
v___x_271_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__4, &lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__4);
return v___x_271_;
}
}
else
{
lean_object* v___x_272_; 
lean_dec(v_b_254_);
v___x_272_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__6, &lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__6);
return v___x_272_;
}
}
else
{
lean_object* v___x_273_; 
lean_dec(v_b_254_);
v___x_273_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__8, &lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__8);
return v___x_273_;
}
}
else
{
lean_object* v___x_274_; 
lean_dec(v_b_254_);
v___x_274_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__10, &lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__10);
return v___x_274_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderMathinline_spec__0(lean_object* v_a_275_, lean_object* v_a_276_){
_start:
{
if (lean_obj_tag(v_a_275_) == 0)
{
lean_object* v___x_277_; 
v___x_277_ = lean_array_to_list(v_a_276_);
return v___x_277_;
}
else
{
lean_object* v_head_278_; lean_object* v_tail_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v_head_278_ = lean_ctor_get(v_a_275_, 0);
lean_inc(v_head_278_);
v_tail_279_ = lean_ctor_get(v_a_275_, 1);
lean_inc(v_tail_279_);
lean_dec_ref_known(v_a_275_, 2);
v___x_280_ = lp_lean_x2dftml_LeanFtml_mathinlineEscByte(v_head_278_);
v___x_281_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_276_, v___x_280_);
v_a_275_ = v_tail_279_;
v_a_276_ = v___x_281_;
goto _start;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderMathinline___closed__1(void){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_284_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderMathinline___closed__0));
v___x_285_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_284_);
return v___x_285_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderMathinline___closed__3(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderMathinline___closed__2));
v___x_288_ = l_String_toListImpl(v___x_287_);
return v___x_288_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderMathinline___closed__5(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderMathinline___closed__4));
v___x_291_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderMathinline(lean_object* v_opts_292_){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_293_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderMathinline___closed__1, &lp_lean_x2dftml_LeanFtml_renderMathinline___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderMathinline___closed__1);
v___x_294_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderMathinline___closed__3, &lp_lean_x2dftml_LeanFtml_renderMathinline___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderMathinline___closed__3);
v___x_295_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_292_, v___x_294_);
v___x_296_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_percentEncodeNonAscii___closed__0));
v___x_297_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_renderMathinline_spec__0(v___x_295_, v___x_296_);
v___x_298_ = l_List_appendTR___redArg(v___x_293_, v___x_297_);
v___x_299_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderMathinline___closed__5, &lp_lean_x2dftml_LeanFtml_renderMathinline___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderMathinline___closed__5);
v___x_300_ = l_List_appendTR___redArg(v___x_298_, v___x_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderMathinline___boxed(lean_object* v_opts_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = lp_lean_x2dftml_LeanFtml_renderMathinline(v_opts_301_);
lean_dec(v_opts_301_);
return v_res_302_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__1(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiSites___closed__0));
v___x_305_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_304_);
return v___x_305_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__3(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiSites___closed__2));
v___x_308_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_307_);
return v___x_308_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__4(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__3, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__3);
v___x_310_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__1, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__1);
v___x_311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
lean_ctor_set(v___x_311_, 1, v___x_309_);
return v___x_311_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__6(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiSites___closed__5));
v___x_314_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_313_);
return v___x_314_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__8(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiSites___closed__7));
v___x_317_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_316_);
return v___x_317_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__9(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_318_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__8, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__8);
v___x_319_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__6, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__6);
v___x_320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
lean_ctor_set(v___x_320_, 1, v___x_318_);
return v___x_320_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__11(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiSites___closed__10));
v___x_323_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_322_);
return v___x_323_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__12(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_324_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__8, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__8);
v___x_325_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__11, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__11);
v___x_326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
lean_ctor_set(v___x_326_, 1, v___x_324_);
return v___x_326_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__14(void){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_328_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiSites___closed__13));
v___x_329_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_328_);
return v___x_329_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__16(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiSites___closed__15));
v___x_332_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_331_);
return v___x_332_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__17(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_333_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__16, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__16);
v___x_334_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__14, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__14);
v___x_335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
lean_ctor_set(v___x_335_, 1, v___x_333_);
return v___x_335_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__19(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiSites___closed__18));
v___x_338_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_337_);
return v___x_338_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__21(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_340_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiSites___closed__20));
v___x_341_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_340_);
return v___x_341_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__22(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_342_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__21, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__21);
v___x_343_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__19, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__19);
v___x_344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_344_, 0, v___x_343_);
lean_ctor_set(v___x_344_, 1, v___x_342_);
return v___x_344_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__23(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_345_ = lean_box(0);
v___x_346_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__22, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__22_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__22);
v___x_347_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
lean_ctor_set(v___x_347_, 1, v___x_345_);
return v___x_347_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__24(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_348_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__23, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__23);
v___x_349_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__17, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__17);
v___x_350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
lean_ctor_set(v___x_350_, 1, v___x_348_);
return v___x_350_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__25(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_351_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__24, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__24_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__24);
v___x_352_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__12, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__12);
v___x_353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
lean_ctor_set(v___x_353_, 1, v___x_351_);
return v___x_353_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__26(void){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_354_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__25, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__25);
v___x_355_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__9, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__9);
v___x_356_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
lean_ctor_set(v___x_356_, 1, v___x_354_);
return v___x_356_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__27(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_357_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__26, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__26_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__26);
v___x_358_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__4, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__4);
v___x_359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
lean_ctor_set(v___x_359_, 1, v___x_357_);
return v___x_359_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiSites(void){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiSites___closed__27, &lp_lean_x2dftml_LeanFtml_interwikiSites___closed__27_once, _init_lp_lean_x2dftml_LeanFtml_interwikiSites___closed__27);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesTableLookup(lean_object* v_x_361_, lean_object* v_x_362_){
_start:
{
if (lean_obj_tag(v_x_361_) == 0)
{
lean_object* v___x_363_; 
v___x_363_ = lean_box(0);
return v___x_363_;
}
else
{
lean_object* v_head_364_; lean_object* v_tail_365_; lean_object* v_fst_366_; lean_object* v_snd_367_; uint8_t v___x_368_; 
v_head_364_ = lean_ctor_get(v_x_361_, 0);
v_tail_365_ = lean_ctor_get(v_x_361_, 1);
v_fst_366_ = lean_ctor_get(v_head_364_, 0);
v_snd_367_ = lean_ctor_get(v_head_364_, 1);
v___x_368_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_366_, v_x_362_);
if (v___x_368_ == 0)
{
v_x_361_ = v_tail_365_;
goto _start;
}
else
{
lean_object* v___x_370_; 
lean_inc(v_snd_367_);
v___x_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_370_, 0, v_snd_367_);
return v___x_370_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_bytesTableLookup___boxed(lean_object* v_x_371_, lean_object* v_x_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = lp_lean_x2dftml_LeanFtml_bytesTableLookup(v_x_371_, v_x_372_);
lean_dec(v_x_372_);
lean_dec(v_x_371_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_sprintfPercentS(lean_object* v_template_377_, lean_object* v_page_378_){
_start:
{
if (lean_obj_tag(v_template_377_) == 0)
{
lean_dec(v_page_378_);
return v_template_377_;
}
else
{
lean_object* v_head_379_; lean_object* v_tail_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_402_; 
v_head_379_ = lean_ctor_get(v_template_377_, 0);
v_tail_380_ = lean_ctor_get(v_template_377_, 1);
v_isSharedCheck_402_ = !lean_is_exclusive(v_template_377_);
if (v_isSharedCheck_402_ == 0)
{
v___x_382_ = v_template_377_;
v_isShared_383_ = v_isSharedCheck_402_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_tail_380_);
lean_inc(v_head_379_);
lean_dec(v_template_377_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_402_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v_b_385_; lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_390_ = lean_unsigned_to_nat(37u);
v___x_391_ = lean_nat_dec_eq(v_head_379_, v___x_390_);
if (v___x_391_ == 0)
{
v_b_385_ = v_head_379_;
goto v___jp_384_;
}
else
{
lean_dec(v_head_379_);
if (lean_obj_tag(v_tail_380_) == 1)
{
lean_object* v_head_392_; lean_object* v_tail_393_; lean_object* v___x_394_; uint8_t v___x_395_; 
v_head_392_ = lean_ctor_get(v_tail_380_, 0);
v_tail_393_ = lean_ctor_get(v_tail_380_, 1);
v___x_394_ = lean_unsigned_to_nat(115u);
v___x_395_ = lean_nat_dec_eq(v_head_392_, v___x_394_);
if (v___x_395_ == 0)
{
uint8_t v___x_396_; 
v___x_396_ = lean_nat_dec_eq(v_head_392_, v___x_390_);
if (v___x_396_ == 0)
{
v_b_385_ = v___x_390_;
goto v___jp_384_;
}
else
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
lean_inc(v_tail_393_);
lean_dec_ref_known(v_tail_380_, 2);
lean_del_object(v___x_382_);
v___x_397_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_sprintfPercentS___closed__0));
v___x_398_ = lp_lean_x2dftml_LeanFtml_sprintfPercentS(v_tail_393_, v_page_378_);
v___x_399_ = l_List_appendTR___redArg(v___x_397_, v___x_398_);
return v___x_399_;
}
}
else
{
lean_object* v___x_400_; lean_object* v___x_401_; 
lean_inc(v_tail_393_);
lean_dec_ref_known(v_tail_380_, 2);
lean_del_object(v___x_382_);
lean_inc(v_page_378_);
v___x_400_ = lp_lean_x2dftml_LeanFtml_sprintfPercentS(v_tail_393_, v_page_378_);
v___x_401_ = l_List_appendTR___redArg(v_page_378_, v___x_400_);
return v___x_401_;
}
}
else
{
v_b_385_ = v___x_390_;
goto v___jp_384_;
}
}
v___jp_384_:
{
lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_386_ = lp_lean_x2dftml_LeanFtml_sprintfPercentS(v_tail_380_, v_page_378_);
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 1, v___x_386_);
lean_ctor_set(v___x_382_, 0, v_b_385_);
v___x_388_ = v___x_382_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_b_385_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v___x_386_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__1(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__0));
v___x_405_ = l_String_toListImpl(v___x_404_);
return v___x_405_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__3(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__2));
v___x_408_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_407_);
return v___x_408_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__5(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__4));
v___x_411_ = l_String_toListImpl(v___x_410_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderInterwiki(lean_object* v_opts_418_){
_start:
{
lean_object* v___x_419_; lean_object* v_site_420_; lean_object* v___x_421_; lean_object* v_text_422_; lean_object* v___y_424_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_419_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__1, &lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__1);
v_site_420_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_418_, v___x_419_);
v___x_421_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__15, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__15);
v_text_422_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_418_, v___x_421_);
v___x_433_ = lp_lean_x2dftml_LeanFtml_interwikiSites;
v___x_434_ = lp_lean_x2dftml_LeanFtml_bytesTableLookup(v___x_433_, v_site_420_);
lean_dec(v_site_420_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v___x_435_; 
v___x_435_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v_text_422_);
return v___x_435_;
}
else
{
lean_object* v_val_436_; lean_object* v___x_437_; lean_object* v_page_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v_val_436_ = lean_ctor_get(v___x_434_, 0);
lean_inc_n(v_val_436_, 2);
lean_dec_ref_known(v___x_434_, 1);
v___x_437_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__5, &lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__5);
v_page_438_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_418_, v___x_437_);
v___x_439_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__7));
v___x_440_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_439_, v_val_436_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v___x_441_; 
v___x_441_ = l_List_appendTR___redArg(v_val_436_, v_page_438_);
v___y_424_ = v___x_441_;
goto v___jp_423_;
}
else
{
lean_object* v___x_442_; 
lean_dec_ref_known(v___x_440_, 1);
v___x_442_ = lp_lean_x2dftml_LeanFtml_sprintfPercentS(v_val_436_, v_page_438_);
v___y_424_ = v___x_442_;
goto v___jp_423_;
}
}
v___jp_423_:
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_425_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__1, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__1);
v___x_426_ = l_List_appendTR___redArg(v___x_425_, v___y_424_);
v___x_427_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__3, &lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderInterwiki___closed__3);
v___x_428_ = l_List_appendTR___redArg(v___x_426_, v___x_427_);
v___x_429_ = lp_lean_x2dftml_LeanFtml_htmlSpecialCharsCompat(v_text_422_);
v___x_430_ = l_List_appendTR___redArg(v___x_428_, v___x_429_);
v___x_431_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__7, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__7);
v___x_432_ = l_List_appendTR___redArg(v___x_430_, v___x_431_);
return v___x_432_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderInterwiki___boxed(lean_object* v_opts_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = lp_lean_x2dftml_LeanFtml_renderInterwiki(v_opts_443_);
lean_dec(v_opts_443_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_collapseSpaceTab_go_spec__0(lean_object* v_a_445_, lean_object* v_a_446_){
_start:
{
if (lean_obj_tag(v_a_445_) == 0)
{
lean_object* v___x_447_; 
v___x_447_ = l_List_reverse___redArg(v_a_446_);
return v___x_447_;
}
else
{
lean_object* v_head_448_; lean_object* v_tail_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_459_; 
v_head_448_ = lean_ctor_get(v_a_445_, 0);
v_tail_449_ = lean_ctor_get(v_a_445_, 1);
v_isSharedCheck_459_ = !lean_is_exclusive(v_a_445_);
if (v_isSharedCheck_459_ == 0)
{
v___x_451_ = v_a_445_;
v_isShared_452_ = v_isSharedCheck_459_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_tail_449_);
lean_inc(v_head_448_);
lean_dec(v_a_445_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_459_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
uint8_t v___x_453_; 
v___x_453_ = l_List_isEmpty___redArg(v_head_448_);
if (v___x_453_ == 0)
{
lean_object* v___x_455_; 
if (v_isShared_452_ == 0)
{
lean_ctor_set(v___x_451_, 1, v_a_446_);
v___x_455_ = v___x_451_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_head_448_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v_a_446_);
v___x_455_ = v_reuseFailAlloc_457_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
v_a_445_ = v_tail_449_;
v_a_446_ = v___x_455_;
goto _start;
}
}
else
{
lean_del_object(v___x_451_);
lean_dec(v_head_448_);
v_a_445_ = v_tail_449_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseSpaceTab_go(lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_){
_start:
{
lean_object* v___y_464_; 
if (lean_obj_tag(v_a_460_) == 0)
{
uint8_t v___x_467_; 
v___x_467_ = l_List_isEmpty___redArg(v_a_461_);
if (v___x_467_ == 0)
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_468_ = l_List_reverse___redArg(v_a_461_);
v___x_469_ = lean_box(0);
v___x_470_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_468_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
v___x_471_ = l_List_appendTR___redArg(v_a_462_, v___x_470_);
v___y_464_ = v___x_471_;
goto v___jp_463_;
}
else
{
lean_dec(v_a_461_);
v___y_464_ = v_a_462_;
goto v___jp_463_;
}
}
else
{
lean_object* v_head_472_; lean_object* v_tail_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_493_; 
v_head_472_ = lean_ctor_get(v_a_460_, 0);
v_tail_473_ = lean_ctor_get(v_a_460_, 1);
v_isSharedCheck_493_ = !lean_is_exclusive(v_a_460_);
if (v_isSharedCheck_493_ == 0)
{
v___x_475_ = v_a_460_;
v_isShared_476_ = v_isSharedCheck_493_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_tail_473_);
lean_inc(v_head_472_);
lean_dec(v_a_460_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_493_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_487_; uint8_t v___x_488_; 
v___x_487_ = lean_unsigned_to_nat(32u);
v___x_488_ = lean_nat_dec_eq(v_head_472_, v___x_487_);
if (v___x_488_ == 0)
{
lean_object* v___x_489_; uint8_t v___x_490_; 
v___x_489_ = lean_unsigned_to_nat(9u);
v___x_490_ = lean_nat_dec_eq(v_head_472_, v___x_489_);
if (v___x_490_ == 0)
{
lean_object* v___x_491_; 
lean_del_object(v___x_475_);
v___x_491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_491_, 0, v_head_472_);
lean_ctor_set(v___x_491_, 1, v_a_461_);
v_a_460_ = v_tail_473_;
v_a_461_ = v___x_491_;
goto _start;
}
else
{
lean_dec(v_head_472_);
goto v___jp_477_;
}
}
else
{
lean_dec(v_head_472_);
goto v___jp_477_;
}
v___jp_477_:
{
lean_object* v___x_478_; uint8_t v___x_479_; 
v___x_478_ = lean_box(0);
v___x_479_ = l_List_isEmpty___redArg(v_a_461_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; lean_object* v___x_482_; 
v___x_480_ = l_List_reverse___redArg(v_a_461_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 1, v___x_478_);
lean_ctor_set(v___x_475_, 0, v___x_480_);
v___x_482_ = v___x_475_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v___x_480_);
lean_ctor_set(v_reuseFailAlloc_485_, 1, v___x_478_);
v___x_482_ = v_reuseFailAlloc_485_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
lean_object* v___x_483_; 
v___x_483_ = l_List_appendTR___redArg(v_a_462_, v___x_482_);
v_a_460_ = v_tail_473_;
v_a_461_ = v___x_478_;
v_a_462_ = v___x_483_;
goto _start;
}
}
else
{
lean_del_object(v___x_475_);
lean_dec(v_a_461_);
v_a_460_ = v_tail_473_;
v_a_461_ = v___x_478_;
goto _start;
}
}
}
}
v___jp_463_:
{
lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_465_ = lean_box(0);
v___x_466_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_collapseSpaceTab_go_spec__0(v___y_464_, v___x_465_);
return v___x_466_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collapseSpaceTab_spec__0(lean_object* v_a_494_, lean_object* v_a_495_){
_start:
{
if (lean_obj_tag(v_a_494_) == 0)
{
lean_object* v___x_496_; 
v___x_496_ = lean_array_to_list(v_a_495_);
return v___x_496_;
}
else
{
lean_object* v_head_497_; lean_object* v_tail_498_; lean_object* v___x_499_; 
v_head_497_ = lean_ctor_get(v_a_494_, 0);
lean_inc(v_head_497_);
v_tail_498_ = lean_ctor_get(v_a_494_, 1);
lean_inc(v_tail_498_);
lean_dec_ref_known(v_a_494_, 2);
v___x_499_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_495_, v_head_497_);
v_a_494_ = v_tail_498_;
v_a_495_ = v___x_499_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapseSpaceTab(lean_object* v_bs_501_){
_start:
{
lean_object* v___x_502_; lean_object* v_parts_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_502_ = lean_box(0);
v_parts_503_ = lp_lean_x2dftml_LeanFtml_collapseSpaceTab_go(v_bs_501_, v___x_502_, v___x_502_);
v___x_504_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathinlineEscByte___closed__0));
v___x_505_ = l_List_intersperseTR___redArg(v___x_504_, v_parts_503_);
v___x_506_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_percentEncodeNonAscii___closed__0));
v___x_507_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_collapseSpaceTab_spec__0(v___x_505_, v___x_506_);
return v___x_507_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isHexDigitB(lean_object* v_b_508_){
_start:
{
lean_object* v___x_519_; uint8_t v___x_520_; 
v___x_519_ = lean_unsigned_to_nat(48u);
v___x_520_ = lean_nat_dec_le(v___x_519_, v_b_508_);
if (v___x_520_ == 0)
{
goto v___jp_514_;
}
else
{
lean_object* v___x_521_; uint8_t v___x_522_; 
v___x_521_ = lean_unsigned_to_nat(57u);
v___x_522_ = lean_nat_dec_le(v_b_508_, v___x_521_);
if (v___x_522_ == 0)
{
goto v___jp_514_;
}
else
{
return v___x_522_;
}
}
v___jp_509_:
{
lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_510_ = lean_unsigned_to_nat(97u);
v___x_511_ = lean_nat_dec_le(v___x_510_, v_b_508_);
if (v___x_511_ == 0)
{
return v___x_511_;
}
else
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = lean_unsigned_to_nat(102u);
v___x_513_ = lean_nat_dec_le(v_b_508_, v___x_512_);
return v___x_513_;
}
}
v___jp_514_:
{
lean_object* v___x_515_; uint8_t v___x_516_; 
v___x_515_ = lean_unsigned_to_nat(65u);
v___x_516_ = lean_nat_dec_le(v___x_515_, v_b_508_);
if (v___x_516_ == 0)
{
goto v___jp_509_;
}
else
{
lean_object* v___x_517_; uint8_t v___x_518_; 
v___x_517_ = lean_unsigned_to_nat(70u);
v___x_518_ = lean_nat_dec_le(v_b_508_, v___x_517_);
if (v___x_518_ == 0)
{
goto v___jp_509_;
}
else
{
return v___x_518_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isHexDigitB___boxed(lean_object* v_b_523_){
_start:
{
uint8_t v_res_524_; lean_object* v_r_525_; 
v_res_524_ = lp_lean_x2dftml_LeanFtml_isHexDigitB(v_b_523_);
lean_dec(v_b_523_);
v_r_525_ = lean_box(v_res_524_);
return v_r_525_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_colorClassB(lean_object* v_b_526_){
_start:
{
lean_object* v___x_550_; uint8_t v___x_551_; 
v___x_550_ = lean_unsigned_to_nat(65u);
v___x_551_ = lean_nat_dec_le(v___x_550_, v_b_526_);
if (v___x_551_ == 0)
{
goto v___jp_545_;
}
else
{
lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_552_ = lean_unsigned_to_nat(90u);
v___x_553_ = lean_nat_dec_le(v_b_526_, v___x_552_);
if (v___x_553_ == 0)
{
goto v___jp_545_;
}
else
{
return v___x_553_;
}
}
v___jp_527_:
{
lean_object* v___x_528_; uint8_t v___x_529_; 
v___x_528_ = lean_unsigned_to_nat(35u);
v___x_529_ = lean_nat_dec_eq(v_b_526_, v___x_528_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; uint8_t v___x_531_; 
v___x_530_ = lean_unsigned_to_nat(40u);
v___x_531_ = lean_nat_dec_eq(v_b_526_, v___x_530_);
if (v___x_531_ == 0)
{
lean_object* v___x_532_; uint8_t v___x_533_; 
v___x_532_ = lean_unsigned_to_nat(41u);
v___x_533_ = lean_nat_dec_eq(v_b_526_, v___x_532_);
if (v___x_533_ == 0)
{
lean_object* v___x_534_; uint8_t v___x_535_; 
v___x_534_ = lean_unsigned_to_nat(44u);
v___x_535_ = lean_nat_dec_eq(v_b_526_, v___x_534_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; uint8_t v___x_537_; 
v___x_536_ = lean_unsigned_to_nat(45u);
v___x_537_ = lean_nat_dec_eq(v_b_526_, v___x_536_);
if (v___x_537_ == 0)
{
lean_object* v___x_538_; uint8_t v___x_539_; 
v___x_538_ = lean_unsigned_to_nat(32u);
v___x_539_ = lean_nat_dec_eq(v_b_526_, v___x_538_);
return v___x_539_;
}
else
{
return v___x_537_;
}
}
else
{
return v___x_535_;
}
}
else
{
return v___x_533_;
}
}
else
{
return v___x_531_;
}
}
else
{
return v___x_529_;
}
}
v___jp_540_:
{
lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_541_ = lean_unsigned_to_nat(48u);
v___x_542_ = lean_nat_dec_le(v___x_541_, v_b_526_);
if (v___x_542_ == 0)
{
goto v___jp_527_;
}
else
{
lean_object* v___x_543_; uint8_t v___x_544_; 
v___x_543_ = lean_unsigned_to_nat(57u);
v___x_544_ = lean_nat_dec_le(v_b_526_, v___x_543_);
if (v___x_544_ == 0)
{
goto v___jp_527_;
}
else
{
return v___x_544_;
}
}
}
v___jp_545_:
{
lean_object* v___x_546_; uint8_t v___x_547_; 
v___x_546_ = lean_unsigned_to_nat(97u);
v___x_547_ = lean_nat_dec_le(v___x_546_, v_b_526_);
if (v___x_547_ == 0)
{
goto v___jp_540_;
}
else
{
lean_object* v___x_548_; uint8_t v___x_549_; 
v___x_548_ = lean_unsigned_to_nat(122u);
v___x_549_ = lean_nat_dec_le(v_b_526_, v___x_548_);
if (v___x_549_ == 0)
{
goto v___jp_540_;
}
else
{
return v___x_549_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_colorClassB___boxed(lean_object* v_b_554_){
_start:
{
uint8_t v_res_555_; lean_object* v_r_556_; 
v_res_555_ = lp_lean_x2dftml_LeanFtml_colorClassB(v_b_554_);
lean_dec(v_b_554_);
v_r_556_ = lean_box(v_res_555_);
return v_r_556_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_normalizeColor_spec__0(lean_object* v_x_557_){
_start:
{
if (lean_obj_tag(v_x_557_) == 0)
{
uint8_t v___x_558_; 
v___x_558_ = 1;
return v___x_558_;
}
else
{
lean_object* v_head_559_; lean_object* v_tail_560_; uint8_t v___x_561_; 
v_head_559_ = lean_ctor_get(v_x_557_, 0);
v_tail_560_ = lean_ctor_get(v_x_557_, 1);
v___x_561_ = lp_lean_x2dftml_LeanFtml_colorClassB(v_head_559_);
if (v___x_561_ == 0)
{
return v___x_561_;
}
else
{
v_x_557_ = v_tail_560_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_normalizeColor_spec__0___boxed(lean_object* v_x_563_){
_start:
{
uint8_t v_res_564_; lean_object* v_r_565_; 
v_res_564_ = lp_lean_x2dftml_List_all___at___00LeanFtml_normalizeColor_spec__0(v_x_563_);
lean_dec(v_x_563_);
v_r_565_ = lean_box(v_res_564_);
return v_r_565_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_normalizeColor_spec__1(lean_object* v_x_566_){
_start:
{
if (lean_obj_tag(v_x_566_) == 0)
{
uint8_t v___x_567_; 
v___x_567_ = 1;
return v___x_567_;
}
else
{
lean_object* v_head_568_; lean_object* v_tail_569_; uint8_t v___x_570_; 
v_head_568_ = lean_ctor_get(v_x_566_, 0);
v_tail_569_ = lean_ctor_get(v_x_566_, 1);
v___x_570_ = lp_lean_x2dftml_LeanFtml_isHexDigitB(v_head_568_);
if (v___x_570_ == 0)
{
return v___x_570_;
}
else
{
v_x_566_ = v_tail_569_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_normalizeColor_spec__1___boxed(lean_object* v_x_572_){
_start:
{
uint8_t v_res_573_; lean_object* v_r_574_; 
v_res_573_ = lp_lean_x2dftml_List_all___at___00LeanFtml_normalizeColor_spec__1(v_x_572_);
lean_dec(v_x_572_);
v_r_574_ = lean_box(v_res_573_);
return v_r_574_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeColor(lean_object* v_raw_577_){
_start:
{
lean_object* v___x_578_; lean_object* v_collapsed_579_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___y_587_; lean_object* v___y_592_; lean_object* v___x_598_; uint8_t v___x_599_; 
v___x_578_ = lp_lean_x2dftml_LeanFtml_collapseSpaceTab(v_raw_577_);
v_collapsed_579_ = lp_lean_x2dftml_LeanFtml_asciiLowerBytes(v___x_578_);
v___x_584_ = l_List_head_x3f___redArg(v_collapsed_579_);
v___x_585_ = lean_unsigned_to_nat(35u);
v___x_598_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_normalizeColor___closed__0));
v___x_599_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_584_, v___x_598_);
lean_dec(v___x_584_);
if (v___x_599_ == 0)
{
lean_inc(v_collapsed_579_);
v___y_592_ = v_collapsed_579_;
goto v___jp_591_;
}
else
{
if (lean_obj_tag(v_collapsed_579_) == 0)
{
v___y_592_ = v_collapsed_579_;
goto v___jp_591_;
}
else
{
lean_object* v_tail_600_; 
v_tail_600_ = lean_ctor_get(v_collapsed_579_, 1);
lean_inc(v_tail_600_);
v___y_592_ = v_tail_600_;
goto v___jp_591_;
}
}
v___jp_580_:
{
uint8_t v___x_581_; 
v___x_581_ = lp_lean_x2dftml_List_all___at___00LeanFtml_normalizeColor_spec__0(v_collapsed_579_);
if (v___x_581_ == 0)
{
lean_object* v___x_582_; 
lean_dec(v_collapsed_579_);
v___x_582_ = lean_box(0);
return v___x_582_;
}
else
{
lean_object* v___x_583_; 
v___x_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_583_, 0, v_collapsed_579_);
return v___x_583_;
}
}
v___jp_586_:
{
uint8_t v___x_588_; 
v___x_588_ = lp_lean_x2dftml_List_all___at___00LeanFtml_normalizeColor_spec__1(v___y_587_);
if (v___x_588_ == 0)
{
lean_dec(v___y_587_);
goto v___jp_580_;
}
else
{
lean_object* v___x_589_; lean_object* v___x_590_; 
lean_dec(v_collapsed_579_);
v___x_589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_585_);
lean_ctor_set(v___x_589_, 1, v___y_587_);
v___x_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_590_, 0, v___x_589_);
return v___x_590_;
}
}
v___jp_591_:
{
lean_object* v___x_593_; lean_object* v___x_594_; uint8_t v___x_595_; 
v___x_593_ = l_List_lengthTR___redArg(v___y_592_);
v___x_594_ = lean_unsigned_to_nat(3u);
v___x_595_ = lean_nat_dec_eq(v___x_593_, v___x_594_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; uint8_t v___x_597_; 
v___x_596_ = lean_unsigned_to_nat(6u);
v___x_597_ = lean_nat_dec_eq(v___x_593_, v___x_596_);
lean_dec(v___x_593_);
if (v___x_597_ == 0)
{
lean_dec(v___y_592_);
goto v___jp_580_;
}
else
{
v___y_587_ = v___y_592_;
goto v___jp_586_;
}
}
else
{
lean_dec(v___x_593_);
v___y_587_ = v___y_592_;
goto v___jp_586_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__1(void){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_602_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderColortext___closed__0));
v___x_603_ = l_String_toListImpl(v___x_602_);
return v___x_603_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__3(void){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderColortext___closed__2));
v___x_606_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_605_);
return v___x_606_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__5(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderColortext___closed__4));
v___x_609_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_608_);
return v___x_609_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__7(void){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderColortext___closed__6));
v___x_612_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_611_);
return v___x_612_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__9(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderColortext___closed__8));
v___x_615_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_614_);
return v___x_615_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__11(void){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderColortext___closed__10));
v___x_618_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_617_);
return v___x_618_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__13(void){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderColortext___closed__12));
v___x_621_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_620_);
return v___x_621_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__15(void){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderColortext___closed__14));
v___x_624_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderColortext(lean_object* v_opts_625_){
_start:
{
lean_object* v___x_626_; lean_object* v_raw_627_; lean_object* v___x_628_; 
v___x_626_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderColortext___closed__1, &lp_lean_x2dftml_LeanFtml_renderColortext___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__1);
v_raw_627_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_625_, v___x_626_);
lean_inc(v_raw_627_);
v___x_628_ = lp_lean_x2dftml_LeanFtml_normalizeColor(v_raw_627_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v___x_629_; uint8_t v___x_630_; 
v___x_629_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderColortext___closed__3, &lp_lean_x2dftml_LeanFtml_renderColortext___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__3);
v___x_630_ = lp_lean_x2dftml_LeanFtml_inlineTypeIs(v_opts_625_, v___x_629_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; 
lean_dec(v_raw_627_);
v___x_631_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderColortext___closed__5, &lp_lean_x2dftml_LeanFtml_renderColortext___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__5);
return v___x_631_;
}
else
{
lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_632_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderColortext___closed__5, &lp_lean_x2dftml_LeanFtml_renderColortext___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__5);
v___x_633_ = l_List_appendTR___redArg(v___x_632_, v_raw_627_);
v___x_634_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderColortext___closed__7, &lp_lean_x2dftml_LeanFtml_renderColortext___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__7);
v___x_635_ = l_List_appendTR___redArg(v___x_633_, v___x_634_);
return v___x_635_;
}
}
else
{
lean_object* v_val_636_; lean_object* v___x_637_; uint8_t v___x_638_; 
lean_dec(v_raw_627_);
v_val_636_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_val_636_);
lean_dec_ref_known(v___x_628_, 1);
v___x_637_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderColortext___closed__3, &lp_lean_x2dftml_LeanFtml_renderColortext___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__3);
v___x_638_ = lp_lean_x2dftml_LeanFtml_inlineTypeIs(v_opts_625_, v___x_637_);
if (v___x_638_ == 0)
{
lean_object* v___x_639_; uint8_t v___x_640_; 
lean_dec(v_val_636_);
v___x_639_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderColortext___closed__9, &lp_lean_x2dftml_LeanFtml_renderColortext___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__9);
v___x_640_ = lp_lean_x2dftml_LeanFtml_inlineTypeIs(v_opts_625_, v___x_639_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; 
v___x_641_ = lean_box(0);
return v___x_641_;
}
else
{
lean_object* v___x_642_; 
v___x_642_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderEmail___closed__6, &lp_lean_x2dftml_LeanFtml_renderEmail___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_renderEmail___closed__6);
return v___x_642_;
}
}
else
{
uint8_t v___x_643_; 
v___x_643_ = l_List_isEmpty___redArg(v_val_636_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_644_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderColortext___closed__11, &lp_lean_x2dftml_LeanFtml_renderColortext___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__11);
v___x_645_ = l_List_appendTR___redArg(v___x_644_, v_val_636_);
v___x_646_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderColortext___closed__13, &lp_lean_x2dftml_LeanFtml_renderColortext___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__13);
v___x_647_ = l_List_appendTR___redArg(v___x_645_, v___x_646_);
return v___x_647_;
}
else
{
lean_object* v___x_648_; 
lean_dec(v_val_636_);
v___x_648_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderColortext___closed__15, &lp_lean_x2dftml_LeanFtml_renderColortext___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__15);
return v___x_648_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderColortext___boxed(lean_object* v_opts_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = lp_lean_x2dftml_LeanFtml_renderColortext(v_opts_649_);
lean_dec(v_opts_649_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTaggedPair(lean_object* v_opts_651_, lean_object* v_openB_652_, lean_object* v_closeB_653_){
_start:
{
lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_654_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderColortext___closed__3, &lp_lean_x2dftml_LeanFtml_renderColortext___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__3);
v___x_655_ = lp_lean_x2dftml_LeanFtml_inlineTypeIs(v_opts_651_, v___x_654_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; uint8_t v___x_657_; 
v___x_656_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderColortext___closed__9, &lp_lean_x2dftml_LeanFtml_renderColortext___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderColortext___closed__9);
v___x_657_ = lp_lean_x2dftml_LeanFtml_inlineTypeIs(v_opts_651_, v___x_656_);
if (v___x_657_ == 0)
{
lean_object* v___x_658_; 
v___x_658_ = lean_box(0);
return v___x_658_;
}
else
{
lean_inc(v_closeB_653_);
return v_closeB_653_;
}
}
else
{
lean_inc(v_openB_652_);
return v_openB_652_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTaggedPair___boxed(lean_object* v_opts_659_, lean_object* v_openB_660_, lean_object* v_closeB_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = lp_lean_x2dftml_LeanFtml_renderTaggedPair(v_opts_659_, v_openB_660_, v_closeB_661_);
lean_dec(v_closeB_661_);
lean_dec(v_openB_660_);
lean_dec(v_opts_659_);
return v_res_662_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderStrong___closed__1(void){
_start:
{
lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_664_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderStrong___closed__0));
v___x_665_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_664_);
return v___x_665_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderStrong___closed__3(void){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_667_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderStrong___closed__2));
v___x_668_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStrong(lean_object* v_opts_669_){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_670_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderStrong___closed__1, &lp_lean_x2dftml_LeanFtml_renderStrong___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderStrong___closed__1);
v___x_671_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderStrong___closed__3, &lp_lean_x2dftml_LeanFtml_renderStrong___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderStrong___closed__3);
v___x_672_ = lp_lean_x2dftml_LeanFtml_renderTaggedPair(v_opts_669_, v___x_670_, v___x_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStrong___boxed(lean_object* v_opts_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = lp_lean_x2dftml_LeanFtml_renderStrong(v_opts_673_);
lean_dec(v_opts_673_);
return v_res_674_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__1(void){
_start:
{
lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_676_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__0));
v___x_677_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_676_);
return v___x_677_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__3(void){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__2));
v___x_680_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_679_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmphasis(lean_object* v_opts_681_){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_682_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__1, &lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__1);
v___x_683_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__3, &lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderEmphasis___closed__3);
v___x_684_ = lp_lean_x2dftml_LeanFtml_renderTaggedPair(v_opts_681_, v___x_682_, v___x_683_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderEmphasis___boxed(lean_object* v_opts_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = lp_lean_x2dftml_LeanFtml_renderEmphasis(v_opts_685_);
lean_dec(v_opts_685_);
return v_res_686_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderUnderline___closed__1(void){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_688_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderUnderline___closed__0));
v___x_689_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_688_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderUnderline(lean_object* v_opts_690_){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_691_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUnderline___closed__1, &lp_lean_x2dftml_LeanFtml_renderUnderline___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderUnderline___closed__1);
v___x_692_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderEmail___closed__6, &lp_lean_x2dftml_LeanFtml_renderEmail___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_renderEmail___closed__6);
v___x_693_ = lp_lean_x2dftml_LeanFtml_renderTaggedPair(v_opts_690_, v___x_691_, v___x_692_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderUnderline___boxed(lean_object* v_opts_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = lp_lean_x2dftml_LeanFtml_renderUnderline(v_opts_694_);
lean_dec(v_opts_694_);
return v_res_695_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderStrikethrough___closed__1(void){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_697_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderStrikethrough___closed__0));
v___x_698_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_697_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStrikethrough(lean_object* v_opts_699_){
_start:
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_700_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderStrikethrough___closed__1, &lp_lean_x2dftml_LeanFtml_renderStrikethrough___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderStrikethrough___closed__1);
v___x_701_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderEmail___closed__6, &lp_lean_x2dftml_LeanFtml_renderEmail___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_renderEmail___closed__6);
v___x_702_ = lp_lean_x2dftml_LeanFtml_renderTaggedPair(v_opts_699_, v___x_700_, v___x_701_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderStrikethrough___boxed(lean_object* v_opts_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = lp_lean_x2dftml_LeanFtml_renderStrikethrough(v_opts_703_);
lean_dec(v_opts_703_);
return v_res_704_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTt___closed__1(void){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTt___closed__0));
v___x_707_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_706_);
return v___x_707_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTt___closed__3(void){
_start:
{
lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_709_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTt___closed__2));
v___x_710_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_709_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTt(lean_object* v_opts_711_){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_712_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTt___closed__1, &lp_lean_x2dftml_LeanFtml_renderTt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderTt___closed__1);
v___x_713_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTt___closed__3, &lp_lean_x2dftml_LeanFtml_renderTt___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderTt___closed__3);
v___x_714_ = lp_lean_x2dftml_LeanFtml_renderTaggedPair(v_opts_711_, v___x_712_, v___x_713_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTt___boxed(lean_object* v_opts_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = lp_lean_x2dftml_LeanFtml_renderTt(v_opts_715_);
lean_dec(v_opts_715_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderSuperscript(lean_object* v_opts_717_){
_start:
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_718_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__11, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__11);
v___x_719_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderUrl___closed__13, &lp_lean_x2dftml_LeanFtml_renderUrl___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderUrl___closed__13);
v___x_720_ = lp_lean_x2dftml_LeanFtml_renderTaggedPair(v_opts_717_, v___x_718_, v___x_719_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderSuperscript___boxed(lean_object* v_opts_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = lp_lean_x2dftml_LeanFtml_renderSuperscript(v_opts_721_);
lean_dec(v_opts_721_);
return v_res_722_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderSubscript___closed__1(void){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_724_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderSubscript___closed__0));
v___x_725_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_724_);
return v___x_725_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderSubscript___closed__3(void){
_start:
{
lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_727_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderSubscript___closed__2));
v___x_728_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderSubscript(lean_object* v_opts_729_){
_start:
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_730_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderSubscript___closed__1, &lp_lean_x2dftml_LeanFtml_renderSubscript___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderSubscript___closed__1);
v___x_731_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderSubscript___closed__3, &lp_lean_x2dftml_LeanFtml_renderSubscript___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderSubscript___closed__3);
v___x_732_ = lp_lean_x2dftml_LeanFtml_renderTaggedPair(v_opts_729_, v___x_730_, v___x_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderSubscript___boxed(lean_object* v_opts_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = lp_lean_x2dftml_LeanFtml_renderSubscript(v_opts_733_);
lean_dec(v_opts_733_);
return v_res_734_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__1(void){
_start:
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__0));
v___x_737_ = l_String_toListImpl(v___x_736_);
return v___x_737_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__3(void){
_start:
{
lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_739_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__2));
v___x_740_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_739_);
return v___x_740_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__5(void){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__4));
v___x_743_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_742_);
return v___x_743_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__7(void){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__6));
v___x_746_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_745_);
return v___x_746_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__9(void){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__8));
v___x_749_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_748_);
return v___x_749_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__11(void){
_start:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__10));
v___x_752_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_751_);
return v___x_752_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__13(void){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_754_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__12));
v___x_755_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_754_);
return v___x_755_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__15(void){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__14));
v___x_758_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_757_);
return v___x_758_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__17(void){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_760_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__16));
v___x_761_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_760_);
return v___x_761_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__19(void){
_start:
{
lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_763_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__18));
v___x_764_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_763_);
return v___x_764_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__21(void){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_766_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__20));
v___x_767_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_766_);
return v___x_767_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__23(void){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_769_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__22));
v___x_770_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_769_);
return v___x_770_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__25(void){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__24));
v___x_773_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_772_);
return v___x_773_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__27(void){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_775_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__26));
v___x_776_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_775_);
return v___x_776_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__29(void){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_778_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__28));
v___x_779_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_778_);
return v___x_779_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__31(void){
_start:
{
lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_781_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__30));
v___x_782_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_781_);
return v___x_782_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__33(void){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_784_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__32));
v___x_785_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_784_);
return v___x_785_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__35(void){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_787_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__34));
v___x_788_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_787_);
return v___x_788_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__37(void){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_790_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__36));
v___x_791_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_790_);
return v___x_791_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__39(void){
_start:
{
lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_793_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__38));
v___x_794_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_793_);
return v___x_794_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__41(void){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__40));
v___x_797_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_796_);
return v___x_797_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__43(void){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_799_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_renderTypography___closed__42));
v___x_800_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_799_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTypography(lean_object* v_opts_801_){
_start:
{
lean_object* v___x_802_; lean_object* v_c_803_; lean_object* v___x_804_; uint8_t v___x_805_; 
v___x_802_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__1, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__1);
v_c_803_ = lp_lean_x2dftml_LeanFtml_optStrBytes(v_opts_801_, v___x_802_);
v___x_804_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__3, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__3);
v___x_805_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_c_803_, v___x_804_);
if (v___x_805_ == 0)
{
lean_object* v___x_806_; uint8_t v___x_807_; 
v___x_806_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__5, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__5);
v___x_807_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_c_803_, v___x_806_);
if (v___x_807_ == 0)
{
lean_object* v___x_808_; uint8_t v___x_809_; 
v___x_808_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__7, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__7);
v___x_809_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_c_803_, v___x_808_);
if (v___x_809_ == 0)
{
lean_object* v___x_810_; uint8_t v___x_811_; 
v___x_810_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__9, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__9);
v___x_811_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_c_803_, v___x_810_);
if (v___x_811_ == 0)
{
lean_object* v___x_812_; uint8_t v___x_813_; 
v___x_812_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__11, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__11);
v___x_813_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_c_803_, v___x_812_);
if (v___x_813_ == 0)
{
lean_object* v___x_814_; uint8_t v___x_815_; 
v___x_814_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__13, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__13);
v___x_815_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_c_803_, v___x_814_);
if (v___x_815_ == 0)
{
lean_object* v___x_816_; uint8_t v___x_817_; 
v___x_816_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__15, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__15);
v___x_817_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_c_803_, v___x_816_);
if (v___x_817_ == 0)
{
lean_object* v___x_818_; uint8_t v___x_819_; 
v___x_818_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__17, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__17);
v___x_819_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_c_803_, v___x_818_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; uint8_t v___x_821_; 
v___x_820_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__19, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__19);
v___x_821_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_c_803_, v___x_820_);
if (v___x_821_ == 0)
{
lean_object* v___x_822_; uint8_t v___x_823_; 
v___x_822_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__21, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__21);
v___x_823_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_c_803_, v___x_822_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; uint8_t v___x_825_; 
v___x_824_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__23, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__23);
v___x_825_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_c_803_, v___x_824_);
lean_dec(v_c_803_);
if (v___x_825_ == 0)
{
lean_object* v___x_826_; 
v___x_826_ = lean_box(0);
return v___x_826_;
}
else
{
lean_object* v___x_827_; 
v___x_827_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__25, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__25);
return v___x_827_;
}
}
else
{
lean_object* v___x_828_; 
lean_dec(v_c_803_);
v___x_828_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__25, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__25);
return v___x_828_;
}
}
else
{
lean_object* v___x_829_; 
lean_dec(v_c_803_);
v___x_829_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__27, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__27_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__27);
return v___x_829_;
}
}
else
{
lean_object* v___x_830_; 
lean_dec(v_c_803_);
v___x_830_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__29, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__29_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__29);
return v___x_830_;
}
}
else
{
lean_object* v___x_831_; 
lean_dec(v_c_803_);
v___x_831_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__31, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__31_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__31);
return v___x_831_;
}
}
else
{
lean_object* v___x_832_; 
lean_dec(v_c_803_);
v___x_832_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__33, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__33);
return v___x_832_;
}
}
else
{
lean_object* v___x_833_; 
lean_dec(v_c_803_);
v___x_833_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__35, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__35_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__35);
return v___x_833_;
}
}
else
{
lean_object* v___x_834_; 
lean_dec(v_c_803_);
v___x_834_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__37, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__37_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__37);
return v___x_834_;
}
}
else
{
lean_object* v___x_835_; 
lean_dec(v_c_803_);
v___x_835_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__39, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__39);
return v___x_835_;
}
}
else
{
lean_object* v___x_836_; 
lean_dec(v_c_803_);
v___x_836_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__41, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__41_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__41);
return v___x_836_;
}
}
else
{
lean_object* v___x_837_; 
lean_dec(v_c_803_);
v___x_837_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_renderTypography___closed__43, &lp_lean_x2dftml_LeanFtml_renderTypography___closed__43_once, _init_lp_lean_x2dftml_LeanFtml_renderTypography___closed__43);
return v___x_837_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_renderTypography___boxed(lean_object* v_opts_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = lp_lean_x2dftml_LeanFtml_renderTypography(v_opts_838_);
lean_dec(v_opts_838_);
return v_res_839_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_renderTighten(void){
_start:
{
lean_object* v___x_840_; 
v___x_840_ = lean_box(0);
return v___x_840_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_RenderCore(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_InlineSimpleRules(uint8_t builtin) {
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
lp_lean_x2dftml_LeanFtml_interwikiSites = _init_lp_lean_x2dftml_LeanFtml_interwikiSites();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_interwikiSites);
lp_lean_x2dftml_LeanFtml_renderTighten = _init_lp_lean_x2dftml_LeanFtml_renderTighten();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_renderTighten);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
