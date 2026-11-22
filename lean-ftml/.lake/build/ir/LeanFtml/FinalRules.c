// Lean compiler output
// Module: LeanFtml.FinalRules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.FormRawRules public import LeanFtml.ModuleRules public import LeanFtml.NextRules public import LeanFtml.ContainRules public import LeanFtml.ListRules public import LeanFtml.ParaRules
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
lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_claimTok(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_getAttrsBytes(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lp_lean_x2dftml_LeanFtml_lookupB(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_freelinkProcess_spec__0(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimBytes(lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_normalizeAttrValue(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omSetB(lean_object*, lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_asciiLower(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_bytesContains(lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_splitAtFirstCI(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_byteForm(lean_object*);
uint8_t l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_parseBytes(lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_isWsByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_finalPregScan_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_finalPregScan_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_finalPregScan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lazyGroupToClose(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_userMatchAt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_userMatchAt_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_userMatchAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "user"};
static const lean_object* lp_lean_x2dftml_LeanFtml_userMatchAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_userMatchAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_userMatchAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_userMatchAt___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_userMatchAt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[["};
static const lean_object* lp_lean_x2dftml_LeanFtml_userMatchAt___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_userMatchAt___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_userMatchAt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_userMatchAt___closed__3;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_userMatchAt(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_userMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "userName"};
static const lean_object* lp_lean_x2dftml_LeanFtml_userMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_userMatch___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_userMatch___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_userMatch___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_userMatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "User"};
static const lean_object* lp_lean_x2dftml_LeanFtml_userMatch___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_userMatch___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_userMatch___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "image"};
static const lean_object* lp_lean_x2dftml_LeanFtml_userMatch___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_userMatch___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_userMatch___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_userMatch___closed__4;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_userMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_userRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_userMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_userRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_userRule___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_userRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_finalPregScan, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_userRule___closed__0_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_userRule___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_userRule___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_userRule(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isButtonTypeByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isButtonTypeByte___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonTail_tryW(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonTail_tryW___boxed(lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_buttonTail___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buttonTail___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buttonTail___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonTail(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_buttonMatchAt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_buttonMatchAt_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_buttonMatchAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[[button"};
static const lean_object* lp_lean_x2dftml_LeanFtml_buttonMatchAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buttonMatchAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buttonMatchAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buttonMatchAt___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonMatchAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_buttonProcess_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_buttonProcess_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_buttonProcess_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldrTR___at___00LeanFtml_buttonProcess_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldrTR___at___00LeanFtml_buttonProcess_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_buttonProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_buttonProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_buttonProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* lp_lean_x2dftml_LeanFtml_buttonProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_buttonProcess___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "style"};
static const lean_object* lp_lean_x2dftml_LeanFtml_buttonProcess___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_buttonProcess___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buttonProcess___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_buttonProcess___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__1_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buttonProcess___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__4_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_buttonProcess___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__0_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__4_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buttonProcess___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_buttonProcess___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Button"};
static const lean_object* lp_lean_x2dftml_LeanFtml_buttonProcess___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__6_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_buttonProcess___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_buttonProcess___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonProcess(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonProcess___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_buttonRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_buttonMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_buttonRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buttonRule___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_buttonRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_finalPregScan, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_buttonRule___closed__0_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_buttonRule___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buttonRule___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonRule(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_embedSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "audio]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_embedSuffix___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_embedSuffix___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_embedSuffix___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_embedSuffix___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_embedSuffix___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "video]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_embedSuffix___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_embedSuffix___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_embedSuffix___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_embedSuffix___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_embedSuffix___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_embedSuffix___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_embedSuffix___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_embedSuffix___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_embedSuffix___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedSuffix(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_embedOpenerAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "[[embed"};
static const lean_object* lp_lean_x2dftml_LeanFtml_embedOpenerAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_embedOpenerAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_embedOpenerAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_embedOpenerAt___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedOpenerAt(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_embedCloserAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[[/embed"};
static const lean_object* lp_lean_x2dftml_LeanFtml_embedCloserAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_embedCloserAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_embedCloserAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_embedCloserAt___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedCloserAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedCloserSearch(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedMatchAt(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_embedMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Embed"};
static const lean_object* lp_lean_x2dftml_LeanFtml_embedMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_embedMatch___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_embedMatch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "content"};
static const lean_object* lp_lean_x2dftml_LeanFtml_embedMatch___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_embedMatch___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_embedMatch___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_embedMatch___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_embedRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_embedMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_embedRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_embedRule___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_embedRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_finalPregScan, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_embedRule___closed__0_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_embedRule___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_embedRule___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hexDigitB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hexDigitB___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlencodeByte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlencodeByte___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlencodeByte___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlencodeByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_urlencodeBytes_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlencodeBytes(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_socialReplacement___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(190) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_socialReplacement___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_socialReplacement___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_socialReplacement___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(195) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_socialReplacement___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_socialReplacement___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_socialReplacement___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_socialReplacement___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "module \"wiki/social/SocialBookmarksModule\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_socialReplacement___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_socialReplacement___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_socialReplacement___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_socialReplacement___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_socialReplacement___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_socialReplacement___closed__4;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_socialReplacement___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_socialReplacement___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_socialReplacement___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_socialReplacement___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sites=\""};
static const lean_object* lp_lean_x2dftml_LeanFtml_socialReplacement___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_socialReplacement___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_socialReplacement___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_socialReplacement___closed__7;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_socialReplacement___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(34) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_socialReplacement___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_socialReplacement___closed__8_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_socialReplacement(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_socialMatchAt_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_socialMatchAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[[social"};
static const lean_object* lp_lean_x2dftml_LeanFtml_socialMatchAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_socialMatchAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_socialMatchAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_socialMatchAt___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_socialMatchAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_socialMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_socialRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_socialMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_socialRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_socialRule___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_socialRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_finalPregScan, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_socialRule___closed__0_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_socialRule___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_socialRule___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_socialRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileTryL(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_fileMatchAt_tryW_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileMatchAt_tryW(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileMatchAt_tryW___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_fileMatchAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "[[file"};
static const lean_object* lp_lean_x2dftml_LeanFtml_fileMatchAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_fileMatchAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_fileMatchAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_fileMatchAt___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileMatchAt(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_fileProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "File"};
static const lean_object* lp_lean_x2dftml_LeanFtml_fileProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_fileProcess___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_fileProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "file"};
static const lean_object* lp_lean_x2dftml_LeanFtml_fileProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_fileProcess___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_fileProcess___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_fileProcess___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_fileProcess___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "anchor"};
static const lean_object* lp_lean_x2dftml_LeanFtml_fileProcess___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_fileProcess___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_fileProcess___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_fileProcess___closed__4;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileProcess(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileProcess___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_fileRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_fileMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_fileRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_fileRule___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_fileRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_finalPregScan, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_fileRule___closed__0_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_fileRule___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_fileRule___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileRule(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isAlnumByteB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isAlnumByteB___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lowerByteB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lowerByteB___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_pctEncodeNonAscii_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pctEncodeNonAscii(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_isVerbatimHref_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_isVerbatimHref_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "http://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "https://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ftp://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mailto:"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "gopher://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__4_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "news://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mms://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__6_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "git://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sftp://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__8_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ssh://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "svn://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__10_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "telnet://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__11_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cvs://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__11_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__13_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__10_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__9_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__15_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__8_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__7_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__17_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__6_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__18_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__5_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__19_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__4_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__20_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__21_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__3_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__21_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__2_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__22_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__23_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__1_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__23_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__0_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__24_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__25_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isVerbatimHref(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_slugScan(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_slugScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref_stripLead(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref_stripLeadRev(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref_stripNbspPairs(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref_deleteNbspBackslash(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "href"};
static const lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "role"};
static const lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__14;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__15;
static const lean_string_object lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "data-"};
static const lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__16_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "u- "};
static const lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__19;
static const lean_string_object lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "u-"};
static const lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__20_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__21;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildAnchorAttrs_spec__0(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__2___closed__0 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__2___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__2___closed__0_value)}};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__2___closed__1 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__2___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(37) << 1) | 1)),((lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__2___closed__1_value)}};
static const lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__2___closed__2 = (const lean_object*)&lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__2___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00List_filterMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00List_filterMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__6_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__2_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__1_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__2_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__4_value;
static const lean_array_object lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_blank"};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__8;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__9_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__9_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__10_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "attrs"};
static const lean_object* lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__5;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorStartOpts(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__4;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorEndOpts;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isAnchorNameByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isAnchorNameByte___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_namedAnchorMatchAt_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_namedAnchorMatchAt_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_namedAnchorMatchAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "[[#"};
static const lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorMatchAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_namedAnchorMatchAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_namedAnchorMatchAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorMatchAt___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorMatchAt(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_namedAnchorProcess_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_namedAnchorProcess_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_namedAnchorProcess_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_namedAnchorProcess_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Anchor"};
static const lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "invalid_named"};
static const lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__4;
static const lean_string_object lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lead"};
static const lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trail"};
static const lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__9;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(93) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__10_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "literal"};
static const lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__11_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__14;
static const lean_string_object lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__15_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__16;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_namedAnchorScan_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(91) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorScan_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_namedAnchorScan_go___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorScan_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorScan_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorScan(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_anchorOpenerAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "[[a"};
static const lean_object* lp_lean_x2dftml_LeanFtml_anchorOpenerAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anchorOpenerAt___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorOpenerAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorOpenerAt___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorOpenerAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorOpenerSearch(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_anchorElemMatches_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "[[/a]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_anchorElemMatches_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anchorElemMatches_go___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_anchorElemMatches_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_anchorElemMatches_go___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemMatches_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemMatches(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredJoinStrip(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredNlAdvance(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredNlAdvance___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorTrailingClose(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_firstNlRun_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_firstNlRun(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitNlRuns_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitNlRuns_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitNlRuns(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_anchorElemProcess_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_anchorElemProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_anchorElemProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anchorElemProcess___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_anchorElemProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_anchorElemProcess___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_anchorElemProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anchorElemProcess___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemProcess(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemFold_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemFold_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemFold(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemFold___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_finalPregScan_go(lean_object* v_m_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_){
_start:
{
if (lean_obj_tag(v_a_2_) == 0)
{
lean_object* v___x_5_; 
lean_dec_ref(v_m_1_);
v___x_5_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5_, 0, v_a_2_);
lean_ctor_set(v___x_5_, 1, v_a_3_);
return v___x_5_;
}
else
{
lean_object* v_head_6_; lean_object* v_tail_7_; lean_object* v_zero_8_; uint8_t v_isZero_9_; 
v_head_6_ = lean_ctor_get(v_a_2_, 0);
v_tail_7_ = lean_ctor_get(v_a_2_, 1);
v_zero_8_ = lean_unsigned_to_nat(0u);
v_isZero_9_ = lean_nat_dec_eq(v_a_4_, v_zero_8_);
if (v_isZero_9_ == 1)
{
lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_17_; 
lean_dec_ref(v_m_1_);
v_isSharedCheck_17_ = !lean_is_exclusive(v_a_2_);
if (v_isSharedCheck_17_ == 0)
{
lean_object* v_unused_18_; lean_object* v_unused_19_; 
v_unused_18_ = lean_ctor_get(v_a_2_, 1);
lean_dec(v_unused_18_);
v_unused_19_ = lean_ctor_get(v_a_2_, 0);
lean_dec(v_unused_19_);
v___x_11_ = v_a_2_;
v_isShared_12_ = v_isSharedCheck_17_;
goto v_resetjp_10_;
}
else
{
lean_dec(v_a_2_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_17_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
lean_object* v___x_13_; lean_object* v___x_15_; 
v___x_13_ = lean_box(0);
if (v_isShared_12_ == 0)
{
lean_ctor_set_tag(v___x_11_, 0);
lean_ctor_set(v___x_11_, 1, v_a_3_);
lean_ctor_set(v___x_11_, 0, v___x_13_);
v___x_15_ = v___x_11_;
goto v_reusejp_14_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v___x_13_);
lean_ctor_set(v_reuseFailAlloc_16_, 1, v_a_3_);
v___x_15_ = v_reuseFailAlloc_16_;
goto v_reusejp_14_;
}
v_reusejp_14_:
{
return v___x_15_;
}
}
}
else
{
lean_object* v_one_20_; lean_object* v_n_21_; lean_object* v___x_22_; 
lean_inc(v_tail_7_);
lean_inc(v_head_6_);
v_one_20_ = lean_unsigned_to_nat(1u);
v_n_21_ = lean_nat_sub(v_a_4_, v_one_20_);
lean_inc_ref(v_m_1_);
lean_inc(v_a_3_);
v___x_22_ = lean_apply_2(v_m_1_, v_a_2_, v_a_3_);
if (lean_obj_tag(v___x_22_) == 0)
{
lean_object* v___x_23_; lean_object* v_fst_24_; lean_object* v_snd_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_33_; 
v___x_23_ = lp_lean_x2dftml_LeanFtml_finalPregScan_go(v_m_1_, v_tail_7_, v_a_3_, v_n_21_);
lean_dec(v_n_21_);
v_fst_24_ = lean_ctor_get(v___x_23_, 0);
v_snd_25_ = lean_ctor_get(v___x_23_, 1);
v_isSharedCheck_33_ = !lean_is_exclusive(v___x_23_);
if (v_isSharedCheck_33_ == 0)
{
v___x_27_ = v___x_23_;
v_isShared_28_ = v_isSharedCheck_33_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_snd_25_);
lean_inc(v_fst_24_);
lean_dec(v___x_23_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_33_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v___x_29_; lean_object* v___x_31_; 
v___x_29_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_29_, 0, v_head_6_);
lean_ctor_set(v___x_29_, 1, v_fst_24_);
if (v_isShared_28_ == 0)
{
lean_ctor_set(v___x_27_, 0, v___x_29_);
v___x_31_ = v___x_27_;
goto v_reusejp_30_;
}
else
{
lean_object* v_reuseFailAlloc_32_; 
v_reuseFailAlloc_32_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_32_, 0, v___x_29_);
lean_ctor_set(v_reuseFailAlloc_32_, 1, v_snd_25_);
v___x_31_ = v_reuseFailAlloc_32_;
goto v_reusejp_30_;
}
v_reusejp_30_:
{
return v___x_31_;
}
}
}
else
{
lean_object* v_val_34_; lean_object* v_snd_35_; lean_object* v_fst_36_; lean_object* v_fst_37_; lean_object* v_snd_38_; lean_object* v___x_39_; lean_object* v_fst_40_; lean_object* v_snd_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_49_; 
lean_dec(v_tail_7_);
lean_dec(v_head_6_);
lean_dec(v_a_3_);
v_val_34_ = lean_ctor_get(v___x_22_, 0);
lean_inc(v_val_34_);
lean_dec_ref_known(v___x_22_, 1);
v_snd_35_ = lean_ctor_get(v_val_34_, 1);
lean_inc(v_snd_35_);
v_fst_36_ = lean_ctor_get(v_val_34_, 0);
lean_inc(v_fst_36_);
lean_dec(v_val_34_);
v_fst_37_ = lean_ctor_get(v_snd_35_, 0);
lean_inc(v_fst_37_);
v_snd_38_ = lean_ctor_get(v_snd_35_, 1);
lean_inc(v_snd_38_);
lean_dec(v_snd_35_);
v___x_39_ = lp_lean_x2dftml_LeanFtml_finalPregScan_go(v_m_1_, v_fst_36_, v_snd_38_, v_n_21_);
lean_dec(v_n_21_);
v_fst_40_ = lean_ctor_get(v___x_39_, 0);
v_snd_41_ = lean_ctor_get(v___x_39_, 1);
v_isSharedCheck_49_ = !lean_is_exclusive(v___x_39_);
if (v_isSharedCheck_49_ == 0)
{
v___x_43_ = v___x_39_;
v_isShared_44_ = v_isSharedCheck_49_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_snd_41_);
lean_inc(v_fst_40_);
lean_dec(v___x_39_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_49_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
lean_object* v___x_45_; lean_object* v___x_47_; 
v___x_45_ = l_List_appendTR___redArg(v_fst_37_, v_fst_40_);
if (v_isShared_44_ == 0)
{
lean_ctor_set(v___x_43_, 0, v___x_45_);
v___x_47_ = v___x_43_;
goto v_reusejp_46_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v___x_45_);
lean_ctor_set(v_reuseFailAlloc_48_, 1, v_snd_41_);
v___x_47_ = v_reuseFailAlloc_48_;
goto v_reusejp_46_;
}
v_reusejp_46_:
{
return v___x_47_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_finalPregScan_go___boxed(lean_object* v_m_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = lp_lean_x2dftml_LeanFtml_finalPregScan_go(v_m_50_, v_a_51_, v_a_52_, v_a_53_);
lean_dec(v_a_53_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_finalPregScan(lean_object* v_m_55_, lean_object* v_bs_56_, lean_object* v_toks_57_){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_58_ = l_List_lengthTR___redArg(v_bs_56_);
v___x_59_ = lean_unsigned_to_nat(1u);
v___x_60_ = lean_nat_add(v___x_58_, v___x_59_);
lean_dec(v___x_58_);
v___x_61_ = lp_lean_x2dftml_LeanFtml_finalPregScan_go(v_m_55_, v_bs_56_, v_toks_57_, v___x_60_);
lean_dec(v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lazyGroupToClose(lean_object* v_x_62_){
_start:
{
if (lean_obj_tag(v_x_62_) == 0)
{
lean_object* v___x_63_; 
v___x_63_ = lean_box(0);
return v___x_63_;
}
else
{
lean_object* v_head_64_; lean_object* v_tail_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_116_; 
v_head_64_ = lean_ctor_get(v_x_62_, 0);
v_tail_65_ = lean_ctor_get(v_x_62_, 1);
v_isSharedCheck_116_ = !lean_is_exclusive(v_x_62_);
if (v_isSharedCheck_116_ == 0)
{
v___x_67_ = v_x_62_;
v_isShared_68_ = v_isSharedCheck_116_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_tail_65_);
lean_inc(v_head_64_);
lean_dec(v_x_62_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_116_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
if (lean_obj_tag(v_tail_65_) == 1)
{
lean_object* v_head_91_; lean_object* v_tail_92_; lean_object* v___x_93_; uint8_t v___x_94_; 
v_head_91_ = lean_ctor_get(v_tail_65_, 0);
v_tail_92_ = lean_ctor_get(v_tail_65_, 1);
lean_inc(v_tail_92_);
v___x_93_ = lean_unsigned_to_nat(93u);
v___x_94_ = lean_nat_dec_eq(v_head_91_, v___x_93_);
if (v___x_94_ == 0)
{
lean_dec(v_tail_92_);
goto v___jp_69_;
}
else
{
if (lean_obj_tag(v_tail_92_) == 1)
{
lean_object* v_head_95_; lean_object* v_tail_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_115_; 
v_head_95_ = lean_ctor_get(v_tail_92_, 0);
v_tail_96_ = lean_ctor_get(v_tail_92_, 1);
v_isSharedCheck_115_ = !lean_is_exclusive(v_tail_92_);
if (v_isSharedCheck_115_ == 0)
{
v___x_98_ = v_tail_92_;
v_isShared_99_ = v_isSharedCheck_115_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_tail_96_);
lean_inc(v_head_95_);
lean_dec(v_tail_92_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_115_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
uint8_t v___x_100_; 
v___x_100_ = lean_nat_dec_eq(v_head_95_, v___x_93_);
lean_dec(v_head_95_);
if (v___x_100_ == 0)
{
lean_del_object(v___x_98_);
lean_dec(v_tail_96_);
goto v___jp_69_;
}
else
{
lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_112_; 
lean_del_object(v___x_67_);
v_isSharedCheck_112_ = !lean_is_exclusive(v_tail_65_);
if (v_isSharedCheck_112_ == 0)
{
lean_object* v_unused_113_; lean_object* v_unused_114_; 
v_unused_113_ = lean_ctor_get(v_tail_65_, 1);
lean_dec(v_unused_113_);
v_unused_114_ = lean_ctor_get(v_tail_65_, 0);
lean_dec(v_unused_114_);
v___x_102_ = v_tail_65_;
v_isShared_103_ = v_isSharedCheck_112_;
goto v_resetjp_101_;
}
else
{
lean_dec(v_tail_65_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_112_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_104_ = lean_box(0);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 1, v___x_104_);
lean_ctor_set(v___x_98_, 0, v_head_64_);
v___x_106_ = v___x_98_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v_head_64_);
lean_ctor_set(v_reuseFailAlloc_111_, 1, v___x_104_);
v___x_106_ = v_reuseFailAlloc_111_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_object* v___x_108_; 
if (v_isShared_103_ == 0)
{
lean_ctor_set_tag(v___x_102_, 0);
lean_ctor_set(v___x_102_, 1, v_tail_96_);
lean_ctor_set(v___x_102_, 0, v___x_106_);
v___x_108_ = v___x_102_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v___x_106_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v_tail_96_);
v___x_108_ = v_reuseFailAlloc_110_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
lean_object* v___x_109_; 
v___x_109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
return v___x_109_;
}
}
}
}
}
}
else
{
lean_dec(v_tail_92_);
goto v___jp_69_;
}
}
}
else
{
goto v___jp_69_;
}
v___jp_69_:
{
lean_object* v___x_70_; 
v___x_70_ = lp_lean_x2dftml_LeanFtml_lazyGroupToClose(v_tail_65_);
if (lean_obj_tag(v___x_70_) == 0)
{
lean_del_object(v___x_67_);
lean_dec(v_head_64_);
return v___x_70_;
}
else
{
lean_object* v_val_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_90_; 
v_val_71_ = lean_ctor_get(v___x_70_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_90_ == 0)
{
v___x_73_ = v___x_70_;
v_isShared_74_ = v_isSharedCheck_90_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_val_71_);
lean_dec(v___x_70_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_90_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v_fst_75_; lean_object* v_snd_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_89_; 
v_fst_75_ = lean_ctor_get(v_val_71_, 0);
v_snd_76_ = lean_ctor_get(v_val_71_, 1);
v_isSharedCheck_89_ = !lean_is_exclusive(v_val_71_);
if (v_isSharedCheck_89_ == 0)
{
v___x_78_ = v_val_71_;
v_isShared_79_ = v_isSharedCheck_89_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_snd_76_);
lean_inc(v_fst_75_);
lean_dec(v_val_71_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_89_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_81_; 
if (v_isShared_68_ == 0)
{
lean_ctor_set(v___x_67_, 1, v_fst_75_);
v___x_81_ = v___x_67_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v_head_64_);
lean_ctor_set(v_reuseFailAlloc_88_, 1, v_fst_75_);
v___x_81_ = v_reuseFailAlloc_88_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
lean_object* v___x_83_; 
if (v_isShared_79_ == 0)
{
lean_ctor_set(v___x_78_, 0, v___x_81_);
v___x_83_ = v___x_78_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v___x_81_);
lean_ctor_set(v_reuseFailAlloc_87_, 1, v_snd_76_);
v___x_83_ = v_reuseFailAlloc_87_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
lean_object* v___x_85_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 0, v___x_83_);
v___x_85_ = v___x_73_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_83_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_userMatchAt_spec__0(lean_object* v_head_117_, lean_object* v_a_118_, lean_object* v_a_119_){
_start:
{
if (lean_obj_tag(v_a_118_) == 0)
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = l_List_reverse___redArg(v_a_119_);
v___x_124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v_a_118_);
return v___x_124_;
}
else
{
lean_object* v_head_125_; lean_object* v_tail_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v_head_125_ = lean_ctor_get(v_a_118_, 0);
v_tail_126_ = lean_ctor_get(v_a_118_, 1);
v___x_127_ = lean_unsigned_to_nat(93u);
v___x_128_ = lean_nat_dec_eq(v_head_125_, v___x_127_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_129_ = lean_unsigned_to_nat(32u);
v___x_130_ = lean_nat_dec_eq(v_head_117_, v___x_129_);
if (v___x_130_ == 0)
{
goto v___jp_120_;
}
else
{
lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_138_; 
lean_inc(v_tail_126_);
lean_inc(v_head_125_);
v_isSharedCheck_138_ = !lean_is_exclusive(v_a_118_);
if (v_isSharedCheck_138_ == 0)
{
lean_object* v_unused_139_; lean_object* v_unused_140_; 
v_unused_139_ = lean_ctor_get(v_a_118_, 1);
lean_dec(v_unused_139_);
v_unused_140_ = lean_ctor_get(v_a_118_, 0);
lean_dec(v_unused_140_);
v___x_132_ = v_a_118_;
v_isShared_133_ = v_isSharedCheck_138_;
goto v_resetjp_131_;
}
else
{
lean_dec(v_a_118_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_138_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 1, v_a_119_);
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_head_125_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v_a_119_);
v___x_135_ = v_reuseFailAlloc_137_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
v_a_118_ = v_tail_126_;
v_a_119_ = v___x_135_;
goto _start;
}
}
}
}
else
{
goto v___jp_120_;
}
}
v___jp_120_:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = l_List_reverse___redArg(v_a_119_);
v___x_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v_a_118_);
return v___x_122_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_userMatchAt_spec__0___boxed(lean_object* v_head_141_, lean_object* v_a_142_, lean_object* v_a_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_userMatchAt_spec__0(v_head_141_, v_a_142_, v_a_143_);
lean_dec(v_head_141_);
return v_res_144_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_userMatchAt___closed__1(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_userMatchAt___closed__0));
v___x_147_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_146_);
return v___x_147_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_userMatchAt___closed__3(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_userMatchAt___closed__2));
v___x_150_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_userMatchAt(lean_object* v_src_151_){
_start:
{
uint8_t v_fst_153_; lean_object* v_snd_154_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_205_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_userMatchAt___closed__3, &lp_lean_x2dftml_LeanFtml_userMatchAt___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_userMatchAt___closed__3);
v___x_206_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_205_, v_src_151_);
if (lean_obj_tag(v___x_206_) == 0)
{
lean_object* v___x_207_; 
v___x_207_ = lean_box(0);
return v___x_207_;
}
else
{
lean_object* v_val_208_; 
v_val_208_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_val_208_);
lean_dec_ref_known(v___x_206_, 1);
if (lean_obj_tag(v_val_208_) == 1)
{
lean_object* v_head_211_; lean_object* v_tail_212_; lean_object* v___x_213_; uint8_t v___x_214_; 
v_head_211_ = lean_ctor_get(v_val_208_, 0);
v_tail_212_ = lean_ctor_get(v_val_208_, 1);
v___x_213_ = lean_unsigned_to_nat(42u);
v___x_214_ = lean_nat_dec_eq(v_head_211_, v___x_213_);
if (v___x_214_ == 0)
{
goto v___jp_209_;
}
else
{
lean_inc(v_tail_212_);
lean_dec_ref_known(v_val_208_, 2);
v_fst_153_ = v___x_214_;
v_snd_154_ = v_tail_212_;
goto v___jp_152_;
}
}
else
{
goto v___jp_209_;
}
v___jp_209_:
{
uint8_t v___x_210_; 
v___x_210_ = 0;
v_fst_153_ = v___x_210_;
v_snd_154_ = v_val_208_;
goto v___jp_152_;
}
}
v___jp_152_:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_userMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_userMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_userMatchAt___closed__1);
v___x_156_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_155_, v_snd_154_);
if (lean_obj_tag(v___x_156_) == 0)
{
lean_object* v___x_157_; 
v___x_157_ = lean_box(0);
return v___x_157_;
}
else
{
lean_object* v_val_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_204_; 
v_val_158_ = lean_ctor_get(v___x_156_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_156_);
if (v_isSharedCheck_204_ == 0)
{
v___x_160_ = v___x_156_;
v_isShared_161_ = v_isSharedCheck_204_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_val_158_);
lean_dec(v___x_156_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_204_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
if (lean_obj_tag(v_val_158_) == 1)
{
lean_object* v_head_162_; lean_object* v_tail_163_; lean_object* v___x_164_; uint8_t v___x_165_; 
v_head_162_ = lean_ctor_get(v_val_158_, 0);
lean_inc(v_head_162_);
v_tail_163_ = lean_ctor_get(v_val_158_, 1);
lean_inc(v_tail_163_);
lean_dec_ref_known(v_val_158_, 2);
v___x_164_ = lean_unsigned_to_nat(32u);
v___x_165_ = lean_nat_dec_eq(v_head_162_, v___x_164_);
if (v___x_165_ == 0)
{
lean_object* v___x_166_; 
lean_dec(v_tail_163_);
lean_dec(v_head_162_);
lean_del_object(v___x_160_);
v___x_166_ = lean_box(0);
return v___x_166_;
}
else
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v_snd_169_; 
v___x_167_ = lean_box(0);
v___x_168_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_userMatchAt_spec__0(v_head_162_, v_tail_163_, v___x_167_);
lean_dec(v_head_162_);
v_snd_169_ = lean_ctor_get(v___x_168_, 1);
lean_inc(v_snd_169_);
if (lean_obj_tag(v_snd_169_) == 1)
{
lean_object* v_fst_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_200_; 
v_fst_170_ = lean_ctor_get(v___x_168_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v___x_168_);
if (v_isSharedCheck_200_ == 0)
{
lean_object* v_unused_201_; 
v_unused_201_ = lean_ctor_get(v___x_168_, 1);
lean_dec(v_unused_201_);
v___x_172_ = v___x_168_;
v_isShared_173_ = v_isSharedCheck_200_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_fst_170_);
lean_dec(v___x_168_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_200_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v_head_174_; lean_object* v_tail_175_; lean_object* v___x_176_; uint8_t v___x_177_; 
v_head_174_ = lean_ctor_get(v_snd_169_, 0);
lean_inc(v_head_174_);
v_tail_175_ = lean_ctor_get(v_snd_169_, 1);
lean_inc(v_tail_175_);
lean_dec_ref_known(v_snd_169_, 2);
v___x_176_ = lean_unsigned_to_nat(93u);
v___x_177_ = lean_nat_dec_eq(v_head_174_, v___x_176_);
lean_dec(v_head_174_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; 
lean_dec(v_tail_175_);
lean_del_object(v___x_172_);
lean_dec(v_fst_170_);
lean_del_object(v___x_160_);
v___x_178_ = lean_box(0);
return v___x_178_;
}
else
{
if (lean_obj_tag(v_tail_175_) == 1)
{
lean_object* v_head_179_; lean_object* v_tail_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_198_; 
v_head_179_ = lean_ctor_get(v_tail_175_, 0);
v_tail_180_ = lean_ctor_get(v_tail_175_, 1);
v_isSharedCheck_198_ = !lean_is_exclusive(v_tail_175_);
if (v_isSharedCheck_198_ == 0)
{
v___x_182_ = v_tail_175_;
v_isShared_183_ = v_isSharedCheck_198_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_tail_180_);
lean_inc(v_head_179_);
lean_dec(v_tail_175_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_198_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
uint8_t v___x_184_; 
v___x_184_ = lean_nat_dec_eq(v_head_179_, v___x_176_);
lean_dec(v_head_179_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; 
lean_del_object(v___x_182_);
lean_dec(v_tail_180_);
lean_del_object(v___x_172_);
lean_dec(v_fst_170_);
lean_del_object(v___x_160_);
v___x_185_ = lean_box(0);
return v___x_185_;
}
else
{
uint8_t v___x_186_; 
v___x_186_ = l_List_isEmpty___redArg(v_fst_170_);
if (v___x_186_ == 0)
{
lean_object* v___x_188_; 
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 1, v_tail_180_);
v___x_188_ = v___x_172_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_fst_170_);
lean_ctor_set(v_reuseFailAlloc_196_, 1, v_tail_180_);
v___x_188_ = v_reuseFailAlloc_196_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
lean_object* v___x_189_; lean_object* v___x_191_; 
v___x_189_ = lean_box(v_fst_153_);
if (v_isShared_183_ == 0)
{
lean_ctor_set_tag(v___x_182_, 0);
lean_ctor_set(v___x_182_, 1, v___x_188_);
lean_ctor_set(v___x_182_, 0, v___x_189_);
v___x_191_ = v___x_182_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_189_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v___x_188_);
v___x_191_ = v_reuseFailAlloc_195_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
lean_object* v___x_193_; 
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 0, v___x_191_);
v___x_193_ = v___x_160_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_191_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
}
else
{
lean_object* v___x_197_; 
lean_del_object(v___x_182_);
lean_dec(v_tail_180_);
lean_del_object(v___x_172_);
lean_dec(v_fst_170_);
lean_del_object(v___x_160_);
v___x_197_ = lean_box(0);
return v___x_197_;
}
}
}
}
else
{
lean_object* v___x_199_; 
lean_dec(v_tail_175_);
lean_del_object(v___x_172_);
lean_dec(v_fst_170_);
lean_del_object(v___x_160_);
v___x_199_ = lean_box(0);
return v___x_199_;
}
}
}
}
else
{
lean_object* v___x_202_; 
lean_dec(v_snd_169_);
lean_dec_ref(v___x_168_);
lean_del_object(v___x_160_);
v___x_202_ = lean_box(0);
return v___x_202_;
}
}
}
else
{
lean_object* v___x_203_; 
lean_del_object(v___x_160_);
lean_dec(v_val_158_);
v___x_203_ = lean_box(0);
return v___x_203_;
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_userMatch___closed__1(void){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_userMatch___closed__0));
v___x_217_ = l_String_toListImpl(v___x_216_);
return v___x_217_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_userMatch___closed__4(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_userMatch___closed__3));
v___x_221_ = l_String_toListImpl(v___x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_userMatch(lean_object* v_src_222_, lean_object* v_toks_223_){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = lp_lean_x2dftml_LeanFtml_userMatchAt(v_src_222_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v___x_225_; 
lean_dec(v_toks_223_);
v___x_225_ = lean_box(0);
return v___x_225_;
}
else
{
lean_object* v_val_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_266_; 
v_val_226_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_266_ == 0)
{
v___x_228_ = v___x_224_;
v_isShared_229_ = v_isSharedCheck_266_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_val_226_);
lean_dec(v___x_224_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_266_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v_snd_230_; lean_object* v_fst_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_265_; 
v_snd_230_ = lean_ctor_get(v_val_226_, 1);
v_fst_231_ = lean_ctor_get(v_val_226_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v_val_226_);
if (v_isSharedCheck_265_ == 0)
{
v___x_233_ = v_val_226_;
v_isShared_234_ = v_isSharedCheck_265_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_snd_230_);
lean_inc(v_fst_231_);
lean_dec(v_val_226_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_265_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v_fst_235_; lean_object* v_snd_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_264_; 
v_fst_235_ = lean_ctor_get(v_snd_230_, 0);
v_snd_236_ = lean_ctor_get(v_snd_230_, 1);
v_isSharedCheck_264_ = !lean_is_exclusive(v_snd_230_);
if (v_isSharedCheck_264_ == 0)
{
v___x_238_ = v_snd_230_;
v_isShared_239_ = v_isSharedCheck_264_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_snd_236_);
lean_inc(v_fst_235_);
lean_dec(v_snd_230_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_264_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_243_; 
v___x_240_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_userMatch___closed__1, &lp_lean_x2dftml_LeanFtml_userMatch___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_userMatch___closed__1);
v___x_241_ = lp_lean_x2dftml_LeanFtml_textVal(v_fst_235_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 1, v___x_241_);
lean_ctor_set(v___x_238_, 0, v___x_240_);
v___x_243_ = v___x_238_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v___x_240_);
lean_ctor_set(v_reuseFailAlloc_263_, 1, v___x_241_);
v___x_243_ = v_reuseFailAlloc_263_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___y_247_; uint8_t v___x_257_; 
v___x_244_ = lean_box(0);
v___x_245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_243_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v___x_257_ = lean_unbox(v_fst_231_);
if (v___x_257_ == 0)
{
lean_dec(v_fst_231_);
v___y_247_ = v___x_244_;
goto v___jp_246_;
}
else
{
lean_object* v___x_258_; lean_object* v___x_259_; uint8_t v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_258_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_userMatch___closed__4, &lp_lean_x2dftml_LeanFtml_userMatch___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_userMatch___closed__4);
v___x_259_ = lean_alloc_ctor(2, 0, 1);
v___x_260_ = lean_unbox(v_fst_231_);
lean_dec(v_fst_231_);
lean_ctor_set_uint8(v___x_259_, 0, v___x_260_);
v___x_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_258_);
lean_ctor_set(v___x_261_, 1, v___x_259_);
v___x_262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
lean_ctor_set(v___x_262_, 1, v___x_244_);
v___y_247_ = v___x_262_;
goto v___jp_246_;
}
v___jp_246_:
{
lean_object* v_opts_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_252_; 
v_opts_248_ = l_List_appendTR___redArg(v___x_245_, v___y_247_);
v___x_249_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_userMatch___closed__2));
v___x_250_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_249_, v_opts_248_, v_toks_223_);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 1, v___x_250_);
lean_ctor_set(v___x_233_, 0, v_snd_236_);
v___x_252_ = v___x_233_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_snd_236_);
lean_ctor_set(v_reuseFailAlloc_256_, 1, v___x_250_);
v___x_252_ = v_reuseFailAlloc_256_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
lean_object* v___x_254_; 
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 0, v___x_252_);
v___x_254_ = v___x_228_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v___x_252_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_userRule(lean_object* v_st_270_){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_271_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_userRule___closed__1));
v___x_272_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_270_, v___x_271_);
return v___x_272_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isButtonTypeByte(lean_object* v_b_273_){
_start:
{
lean_object* v___x_289_; uint8_t v___x_290_; 
v___x_289_ = lean_unsigned_to_nat(48u);
v___x_290_ = lean_nat_dec_le(v___x_289_, v_b_273_);
if (v___x_290_ == 0)
{
goto v___jp_284_;
}
else
{
lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_291_ = lean_unsigned_to_nat(57u);
v___x_292_ = lean_nat_dec_le(v_b_273_, v___x_291_);
if (v___x_292_ == 0)
{
goto v___jp_284_;
}
else
{
return v___x_292_;
}
}
v___jp_274_:
{
lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_275_ = lean_unsigned_to_nat(45u);
v___x_276_ = lean_nat_dec_eq(v_b_273_, v___x_275_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_277_ = lean_unsigned_to_nat(95u);
v___x_278_ = lean_nat_dec_eq(v_b_273_, v___x_277_);
return v___x_278_;
}
else
{
return v___x_276_;
}
}
v___jp_279_:
{
lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_280_ = lean_unsigned_to_nat(97u);
v___x_281_ = lean_nat_dec_le(v___x_280_, v_b_273_);
if (v___x_281_ == 0)
{
goto v___jp_274_;
}
else
{
lean_object* v___x_282_; uint8_t v___x_283_; 
v___x_282_ = lean_unsigned_to_nat(122u);
v___x_283_ = lean_nat_dec_le(v_b_273_, v___x_282_);
if (v___x_283_ == 0)
{
goto v___jp_274_;
}
else
{
return v___x_283_;
}
}
}
v___jp_284_:
{
lean_object* v___x_285_; uint8_t v___x_286_; 
v___x_285_ = lean_unsigned_to_nat(65u);
v___x_286_ = lean_nat_dec_le(v___x_285_, v_b_273_);
if (v___x_286_ == 0)
{
goto v___jp_279_;
}
else
{
lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_287_ = lean_unsigned_to_nat(90u);
v___x_288_ = lean_nat_dec_le(v_b_273_, v___x_287_);
if (v___x_288_ == 0)
{
goto v___jp_279_;
}
else
{
return v___x_288_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isButtonTypeByte___boxed(lean_object* v_b_293_){
_start:
{
uint8_t v_res_294_; lean_object* v_r_295_; 
v_res_294_ = lp_lean_x2dftml_LeanFtml_isButtonTypeByte(v_b_293_);
lean_dec(v_b_293_);
v_r_295_ = lean_box(v_res_294_);
return v_r_295_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonTail_tryW(lean_object* v_r_296_, lean_object* v_a_297_){
_start:
{
lean_object* v_zero_298_; uint8_t v_isZero_299_; 
v_zero_298_ = lean_unsigned_to_nat(0u);
v_isZero_299_ = lean_nat_dec_eq(v_a_297_, v_zero_298_);
if (v_isZero_299_ == 1)
{
lean_object* v___x_300_; 
lean_dec(v_a_297_);
v___x_300_ = lean_box(0);
return v___x_300_;
}
else
{
lean_object* v_one_301_; lean_object* v_n_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v_one_301_ = lean_unsigned_to_nat(1u);
v_n_302_ = lean_nat_sub(v_a_297_, v_one_301_);
lean_dec(v_a_297_);
v___x_303_ = lean_nat_add(v_n_302_, v_one_301_);
v___x_304_ = l_List_drop___redArg(v___x_303_, v_r_296_);
v___x_305_ = lp_lean_x2dftml_LeanFtml_lazyGroupToClose(v___x_304_);
if (lean_obj_tag(v___x_305_) == 0)
{
v_a_297_ = v_n_302_;
goto _start;
}
else
{
lean_object* v_val_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_324_; 
lean_dec(v_n_302_);
v_val_307_ = lean_ctor_get(v___x_305_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_305_);
if (v_isSharedCheck_324_ == 0)
{
v___x_309_ = v___x_305_;
v_isShared_310_ = v_isSharedCheck_324_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_val_307_);
lean_dec(v___x_305_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_324_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v_fst_311_; lean_object* v_snd_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_323_; 
v_fst_311_ = lean_ctor_get(v_val_307_, 0);
v_snd_312_ = lean_ctor_get(v_val_307_, 1);
v_isSharedCheck_323_ = !lean_is_exclusive(v_val_307_);
if (v_isSharedCheck_323_ == 0)
{
v___x_314_ = v_val_307_;
v_isShared_315_ = v_isSharedCheck_323_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_snd_312_);
lean_inc(v_fst_311_);
lean_dec(v_val_307_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_323_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 0, v_fst_311_);
v___x_317_ = v___x_309_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_fst_311_);
v___x_317_ = v_reuseFailAlloc_322_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_319_; 
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v___x_317_);
v___x_319_ = v___x_314_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v_snd_312_);
v___x_319_ = v_reuseFailAlloc_321_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
lean_object* v___x_320_; 
v___x_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
return v___x_320_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonTail_tryW___boxed(lean_object* v_r_325_, lean_object* v_a_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = lp_lean_x2dftml_LeanFtml_buttonTail_tryW(v_r_325_, v_a_326_);
lean_dec(v_r_325_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonTail(lean_object* v_r_330_){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_331_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonTail___closed__0));
lean_inc(v_r_330_);
v___x_332_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_r_330_, v_r_330_, v___x_331_);
v___x_333_ = l_List_lengthTR___redArg(v___x_332_);
lean_dec(v___x_332_);
v___x_334_ = lp_lean_x2dftml_LeanFtml_buttonTail_tryW(v_r_330_, v___x_333_);
if (lean_obj_tag(v___x_334_) == 0)
{
if (lean_obj_tag(v_r_330_) == 1)
{
lean_object* v_head_335_; lean_object* v_tail_336_; lean_object* v___x_337_; uint8_t v___x_338_; 
v_head_335_ = lean_ctor_get(v_r_330_, 0);
lean_inc(v_head_335_);
v_tail_336_ = lean_ctor_get(v_r_330_, 1);
lean_inc(v_tail_336_);
lean_dec_ref_known(v_r_330_, 2);
v___x_337_ = lean_unsigned_to_nat(93u);
v___x_338_ = lean_nat_dec_eq(v_head_335_, v___x_337_);
lean_dec(v_head_335_);
if (v___x_338_ == 0)
{
lean_dec(v_tail_336_);
return v___x_334_;
}
else
{
if (lean_obj_tag(v_tail_336_) == 1)
{
lean_object* v_head_339_; lean_object* v_tail_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_350_; 
v_head_339_ = lean_ctor_get(v_tail_336_, 0);
v_tail_340_ = lean_ctor_get(v_tail_336_, 1);
v_isSharedCheck_350_ = !lean_is_exclusive(v_tail_336_);
if (v_isSharedCheck_350_ == 0)
{
v___x_342_ = v_tail_336_;
v_isShared_343_ = v_isSharedCheck_350_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_tail_340_);
lean_inc(v_head_339_);
lean_dec(v_tail_336_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_350_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
uint8_t v___x_344_; 
v___x_344_ = lean_nat_dec_eq(v_head_339_, v___x_337_);
lean_dec(v_head_339_);
if (v___x_344_ == 0)
{
lean_del_object(v___x_342_);
lean_dec(v_tail_340_);
return v___x_334_;
}
else
{
lean_object* v___x_345_; lean_object* v___x_347_; 
v___x_345_ = lean_box(0);
if (v_isShared_343_ == 0)
{
lean_ctor_set_tag(v___x_342_, 0);
lean_ctor_set(v___x_342_, 0, v___x_345_);
v___x_347_ = v___x_342_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_345_);
lean_ctor_set(v_reuseFailAlloc_349_, 1, v_tail_340_);
v___x_347_ = v_reuseFailAlloc_349_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
lean_object* v___x_348_; 
v___x_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
return v___x_348_;
}
}
}
}
else
{
lean_dec(v_tail_336_);
return v___x_334_;
}
}
}
else
{
lean_dec(v_r_330_);
return v___x_334_;
}
}
else
{
lean_dec(v_r_330_);
return v___x_334_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_buttonMatchAt_spec__0(lean_object* v_l_351_, lean_object* v_a_352_, lean_object* v_a_353_){
_start:
{
if (lean_obj_tag(v_a_352_) == 0)
{
lean_dec_ref(v_a_353_);
lean_inc(v_l_351_);
return v_l_351_;
}
else
{
lean_object* v_head_354_; lean_object* v_tail_355_; uint8_t v___x_356_; 
v_head_354_ = lean_ctor_get(v_a_352_, 0);
lean_inc(v_head_354_);
v_tail_355_ = lean_ctor_get(v_a_352_, 1);
lean_inc(v_tail_355_);
lean_dec_ref_known(v_a_352_, 2);
v___x_356_ = lp_lean_x2dftml_LeanFtml_isButtonTypeByte(v_head_354_);
if (v___x_356_ == 0)
{
lean_object* v___x_357_; 
lean_dec(v_tail_355_);
lean_dec(v_head_354_);
v___x_357_ = lean_array_to_list(v_a_353_);
return v___x_357_;
}
else
{
lean_object* v___x_358_; 
v___x_358_ = lean_array_push(v_a_353_, v_head_354_);
v_a_352_ = v_tail_355_;
v_a_353_ = v___x_358_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_buttonMatchAt_spec__0___boxed(lean_object* v_l_360_, lean_object* v_a_361_, lean_object* v_a_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_buttonMatchAt_spec__0(v_l_360_, v_a_361_, v_a_362_);
lean_dec(v_l_360_);
return v_res_363_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buttonMatchAt___closed__1(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonMatchAt___closed__0));
v___x_366_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonMatchAt(lean_object* v_src_367_){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_368_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buttonMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_buttonMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_buttonMatchAt___closed__1);
v___x_369_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_368_, v_src_367_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v___x_370_; 
v___x_370_ = lean_box(0);
return v___x_370_;
}
else
{
lean_object* v_val_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v_wlen_375_; uint8_t v___x_376_; 
v_val_371_ = lean_ctor_get(v___x_369_, 0);
lean_inc_n(v_val_371_, 2);
lean_dec_ref_known(v___x_369_, 1);
v___x_372_ = lean_unsigned_to_nat(0u);
v___x_373_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonTail___closed__0));
v___x_374_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_val_371_, v_val_371_, v___x_373_);
v_wlen_375_ = l_List_lengthTR___redArg(v___x_374_);
lean_dec(v___x_374_);
v___x_376_ = lean_nat_dec_eq(v_wlen_375_, v___x_372_);
if (v___x_376_ == 0)
{
lean_object* v_r1_377_; lean_object* v___x_378_; lean_object* v_tlen_379_; uint8_t v___x_380_; 
v_r1_377_ = l_List_drop___redArg(v_wlen_375_, v_val_371_);
lean_dec(v_val_371_);
lean_inc(v_r1_377_);
v___x_378_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_buttonMatchAt_spec__0(v_r1_377_, v_r1_377_, v___x_373_);
v_tlen_379_ = l_List_lengthTR___redArg(v___x_378_);
lean_dec(v___x_378_);
v___x_380_ = lean_nat_dec_eq(v_tlen_379_, v___x_372_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; lean_object* v___x_382_; 
lean_inc(v_tlen_379_);
v___x_381_ = l_List_drop___redArg(v_tlen_379_, v_r1_377_);
v___x_382_ = lp_lean_x2dftml_LeanFtml_buttonTail(v___x_381_);
if (lean_obj_tag(v___x_382_) == 0)
{
lean_object* v___x_383_; 
lean_dec(v_tlen_379_);
lean_dec(v_r1_377_);
v___x_383_ = lean_box(0);
return v___x_383_;
}
else
{
lean_object* v_val_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_393_; 
v_val_384_ = lean_ctor_get(v___x_382_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_393_ == 0)
{
v___x_386_ = v___x_382_;
v_isShared_387_ = v_isSharedCheck_393_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_val_384_);
lean_dec(v___x_382_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_393_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_391_; 
lean_inc(v_r1_377_);
v___x_388_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_r1_377_, v_r1_377_, v_tlen_379_, v___x_373_);
lean_dec(v_r1_377_);
v___x_389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_389_, 0, v___x_388_);
lean_ctor_set(v___x_389_, 1, v_val_384_);
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 0, v___x_389_);
v___x_391_ = v___x_386_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_389_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
}
else
{
lean_object* v___x_394_; 
lean_dec(v_tlen_379_);
lean_dec(v_r1_377_);
v___x_394_ = lean_box(0);
return v___x_394_;
}
}
else
{
lean_object* v___x_395_; 
lean_dec(v_wlen_375_);
lean_dec(v_val_371_);
v___x_395_ = lean_box(0);
return v___x_395_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_buttonProcess_spec__1(lean_object* v_a_396_, lean_object* v_a_397_){
_start:
{
if (lean_obj_tag(v_a_396_) == 0)
{
lean_object* v___x_398_; 
v___x_398_ = l_List_reverse___redArg(v_a_397_);
return v___x_398_;
}
else
{
lean_object* v_head_399_; lean_object* v_tail_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_413_; 
v_head_399_ = lean_ctor_get(v_a_396_, 0);
v_tail_400_ = lean_ctor_get(v_a_396_, 1);
v_isSharedCheck_413_ = !lean_is_exclusive(v_a_396_);
if (v_isSharedCheck_413_ == 0)
{
v___x_402_ = v_a_396_;
v_isShared_403_ = v_isSharedCheck_413_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_tail_400_);
lean_inc(v_head_399_);
lean_dec(v_a_396_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_413_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v___y_405_; lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = lean_unsigned_to_nat(95u);
v___x_411_ = lean_nat_dec_eq(v_head_399_, v___x_410_);
if (v___x_411_ == 0)
{
v___y_405_ = v_head_399_;
goto v___jp_404_;
}
else
{
lean_object* v___x_412_; 
lean_dec(v_head_399_);
v___x_412_ = lean_unsigned_to_nat(45u);
v___y_405_ = v___x_412_;
goto v___jp_404_;
}
v___jp_404_:
{
lean_object* v___x_407_; 
if (v_isShared_403_ == 0)
{
lean_ctor_set(v___x_402_, 1, v_a_397_);
lean_ctor_set(v___x_402_, 0, v___y_405_);
v___x_407_ = v___x_402_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v___y_405_);
lean_ctor_set(v_reuseFailAlloc_409_, 1, v_a_397_);
v___x_407_ = v_reuseFailAlloc_409_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
v_a_396_ = v_tail_400_;
v_a_397_ = v___x_407_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_buttonProcess_spec__0_spec__0(lean_object* v_attrs_414_, lean_object* v_as_415_, size_t v_i_416_, size_t v_stop_417_, lean_object* v_b_418_){
_start:
{
uint8_t v___x_419_; 
v___x_419_ = lean_usize_dec_eq(v_i_416_, v_stop_417_);
if (v___x_419_ == 0)
{
size_t v___x_420_; size_t v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_420_ = ((size_t)1ULL);
v___x_421_ = lean_usize_sub(v_i_416_, v___x_420_);
v___x_422_ = lean_array_uget_borrowed(v_as_415_, v___x_421_);
lean_inc(v___x_422_);
v___x_423_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_422_);
v___x_424_ = lp_lean_x2dftml_LeanFtml_lookupB(v_attrs_414_, v___x_423_);
lean_dec(v___x_423_);
if (lean_obj_tag(v___x_424_) == 0)
{
v_i_416_ = v___x_421_;
goto _start;
}
else
{
lean_object* v_val_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v_val_426_ = lean_ctor_get(v___x_424_, 0);
lean_inc(v_val_426_);
lean_dec_ref_known(v___x_424_, 1);
lean_inc(v___x_422_);
v___x_427_ = l_String_toListImpl(v___x_422_);
v___x_428_ = lp_lean_x2dftml_LeanFtml_textVal(v_val_426_);
v___x_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_429_, 0, v___x_427_);
lean_ctor_set(v___x_429_, 1, v___x_428_);
v___x_430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
lean_ctor_set(v___x_430_, 1, v_b_418_);
v_i_416_ = v___x_421_;
v_b_418_ = v___x_430_;
goto _start;
}
}
else
{
return v_b_418_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_buttonProcess_spec__0_spec__0___boxed(lean_object* v_attrs_432_, lean_object* v_as_433_, lean_object* v_i_434_, lean_object* v_stop_435_, lean_object* v_b_436_){
_start:
{
size_t v_i_boxed_437_; size_t v_stop_boxed_438_; lean_object* v_res_439_; 
v_i_boxed_437_ = lean_unbox_usize(v_i_434_);
lean_dec(v_i_434_);
v_stop_boxed_438_ = lean_unbox_usize(v_stop_435_);
lean_dec(v_stop_435_);
v_res_439_ = lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_buttonProcess_spec__0_spec__0(v_attrs_432_, v_as_433_, v_i_boxed_437_, v_stop_boxed_438_, v_b_436_);
lean_dec_ref(v_as_433_);
lean_dec(v_attrs_432_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldrTR___at___00LeanFtml_buttonProcess_spec__0(lean_object* v_attrs_440_, lean_object* v_init_441_, lean_object* v_l_442_){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; uint8_t v___x_446_; 
v___x_443_ = lean_array_mk(v_l_442_);
v___x_444_ = lean_array_get_size(v___x_443_);
v___x_445_ = lean_unsigned_to_nat(0u);
v___x_446_ = lean_nat_dec_lt(v___x_445_, v___x_444_);
if (v___x_446_ == 0)
{
lean_dec_ref(v___x_443_);
return v_init_441_;
}
else
{
size_t v___x_447_; size_t v___x_448_; lean_object* v___x_449_; 
v___x_447_ = lean_usize_of_nat(v___x_444_);
v___x_448_ = ((size_t)0ULL);
v___x_449_ = lp_lean_x2dftml___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00LeanFtml_buttonProcess_spec__0_spec__0(v_attrs_440_, v___x_443_, v___x_447_, v___x_448_, v_init_441_);
lean_dec_ref(v___x_443_);
return v___x_449_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldrTR___at___00LeanFtml_buttonProcess_spec__0___boxed(lean_object* v_attrs_450_, lean_object* v_init_451_, lean_object* v_l_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = lp_lean_x2dftml_List_foldrTR___at___00LeanFtml_buttonProcess_spec__0(v_attrs_450_, v_init_451_, v_l_452_);
lean_dec(v_attrs_450_);
return v_res_453_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8(void){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonProcess___closed__7));
v___x_469_ = l_String_toListImpl(v___x_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonProcess(lean_object* v_ty_470_, lean_object* v_g2_471_, lean_object* v_toks_472_){
_start:
{
lean_object* v___y_474_; 
if (lean_obj_tag(v_g2_471_) == 0)
{
lean_object* v___x_487_; 
v___x_487_ = lean_box(0);
v___y_474_ = v___x_487_;
goto v___jp_473_;
}
else
{
lean_object* v_val_488_; 
v_val_488_ = lean_ctor_get(v_g2_471_, 0);
v___y_474_ = v_val_488_;
goto v___jp_473_;
}
v___jp_473_:
{
lean_object* v_attrs_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v_keep_478_; lean_object* v_ty_x27_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v_attrs_475_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v___y_474_);
v___x_476_ = lean_box(0);
v___x_477_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonProcess___closed__5));
v_keep_478_ = lp_lean_x2dftml_List_foldrTR___at___00LeanFtml_buttonProcess_spec__0(v_attrs_475_, v___x_476_, v___x_477_);
lean_dec(v_attrs_475_);
v_ty_x27_479_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_buttonProcess_spec__1(v_ty_470_, v___x_476_);
v___x_480_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonProcess___closed__6));
v___x_481_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8, &lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8);
v___x_482_ = lp_lean_x2dftml_LeanFtml_textVal(v_ty_x27_479_);
v___x_483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_481_);
lean_ctor_set(v___x_483_, 1, v___x_482_);
v___x_484_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
lean_ctor_set(v___x_484_, 1, v___x_476_);
v___x_485_ = l_List_appendTR___redArg(v_keep_478_, v___x_484_);
v___x_486_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_480_, v___x_485_, v_toks_472_);
return v___x_486_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonProcess___boxed(lean_object* v_ty_489_, lean_object* v_g2_490_, lean_object* v_toks_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = lp_lean_x2dftml_LeanFtml_buttonProcess(v_ty_489_, v_g2_490_, v_toks_491_);
lean_dec(v_g2_490_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonMatch(lean_object* v_src_493_, lean_object* v_toks_494_){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = lp_lean_x2dftml_LeanFtml_buttonMatchAt(v_src_493_);
if (lean_obj_tag(v___x_495_) == 0)
{
lean_object* v___x_496_; 
lean_dec(v_toks_494_);
v___x_496_ = lean_box(0);
return v___x_496_;
}
else
{
lean_object* v_val_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_516_; 
v_val_497_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_516_ == 0)
{
v___x_499_ = v___x_495_;
v_isShared_500_ = v_isSharedCheck_516_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_val_497_);
lean_dec(v___x_495_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_516_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v_snd_501_; lean_object* v_fst_502_; lean_object* v_fst_503_; lean_object* v_snd_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_515_; 
v_snd_501_ = lean_ctor_get(v_val_497_, 1);
lean_inc(v_snd_501_);
v_fst_502_ = lean_ctor_get(v_val_497_, 0);
lean_inc(v_fst_502_);
lean_dec(v_val_497_);
v_fst_503_ = lean_ctor_get(v_snd_501_, 0);
v_snd_504_ = lean_ctor_get(v_snd_501_, 1);
v_isSharedCheck_515_ = !lean_is_exclusive(v_snd_501_);
if (v_isSharedCheck_515_ == 0)
{
v___x_506_ = v_snd_501_;
v_isShared_507_ = v_isSharedCheck_515_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_snd_504_);
lean_inc(v_fst_503_);
lean_dec(v_snd_501_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_515_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_508_; lean_object* v___x_510_; 
v___x_508_ = lp_lean_x2dftml_LeanFtml_buttonProcess(v_fst_502_, v_fst_503_, v_toks_494_);
lean_dec(v_fst_503_);
if (v_isShared_507_ == 0)
{
lean_ctor_set(v___x_506_, 1, v___x_508_);
lean_ctor_set(v___x_506_, 0, v_snd_504_);
v___x_510_ = v___x_506_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v_snd_504_);
lean_ctor_set(v_reuseFailAlloc_514_, 1, v___x_508_);
v___x_510_ = v_reuseFailAlloc_514_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
lean_object* v___x_512_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_510_);
v___x_512_ = v___x_499_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_510_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buttonRule(lean_object* v_st_520_){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonRule___closed__1));
v___x_522_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_520_, v___x_521_);
return v___x_522_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_embedSuffix___closed__1(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_embedSuffix___closed__0));
v___x_525_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_524_);
return v___x_525_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_embedSuffix___closed__3(void){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_527_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_embedSuffix___closed__2));
v___x_528_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_527_);
return v___x_528_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_embedSuffix___closed__5(void){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_embedSuffix___closed__4));
v___x_531_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedSuffix(lean_object* v_r_532_){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_embedSuffix___closed__1, &lp_lean_x2dftml_LeanFtml_embedSuffix___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_embedSuffix___closed__1);
lean_inc(v_r_532_);
v___x_534_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_533_, v_r_532_);
if (lean_obj_tag(v___x_534_) == 0)
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_embedSuffix___closed__3, &lp_lean_x2dftml_LeanFtml_embedSuffix___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_embedSuffix___closed__3);
lean_inc(v_r_532_);
v___x_536_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_535_, v_r_532_);
if (lean_obj_tag(v___x_536_) == 0)
{
lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_537_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_embedSuffix___closed__5, &lp_lean_x2dftml_LeanFtml_embedSuffix___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_embedSuffix___closed__5);
v___x_538_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_537_, v_r_532_);
return v___x_538_;
}
else
{
lean_dec(v_r_532_);
return v___x_536_;
}
}
else
{
lean_dec(v_r_532_);
return v___x_534_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_embedOpenerAt___closed__1(void){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_540_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_embedOpenerAt___closed__0));
v___x_541_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedOpenerAt(lean_object* v_src_542_){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_543_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_embedOpenerAt___closed__1, &lp_lean_x2dftml_LeanFtml_embedOpenerAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_embedOpenerAt___closed__1);
v___x_544_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_543_, v_src_542_);
if (lean_obj_tag(v___x_544_) == 0)
{
return v___x_544_;
}
else
{
lean_object* v_val_545_; lean_object* v___x_546_; 
v_val_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_val_545_);
lean_dec_ref_known(v___x_544_, 1);
v___x_546_ = lp_lean_x2dftml_LeanFtml_embedSuffix(v_val_545_);
return v___x_546_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_embedCloserAt___closed__1(void){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_embedCloserAt___closed__0));
v___x_549_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedCloserAt(lean_object* v_src_550_){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_embedCloserAt___closed__1, &lp_lean_x2dftml_LeanFtml_embedCloserAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_embedCloserAt___closed__1);
v___x_552_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_551_, v_src_550_);
if (lean_obj_tag(v___x_552_) == 0)
{
return v___x_552_;
}
else
{
lean_object* v_val_553_; lean_object* v___x_554_; 
v_val_553_ = lean_ctor_get(v___x_552_, 0);
lean_inc(v_val_553_);
lean_dec_ref_known(v___x_552_, 1);
v___x_554_ = lp_lean_x2dftml_LeanFtml_embedSuffix(v_val_553_);
return v___x_554_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedCloserSearch(lean_object* v_x_555_){
_start:
{
if (lean_obj_tag(v_x_555_) == 0)
{
lean_object* v___x_556_; 
v___x_556_ = lean_box(0);
return v___x_556_;
}
else
{
lean_object* v_head_557_; lean_object* v_tail_558_; lean_object* v___x_559_; 
v_head_557_ = lean_ctor_get(v_x_555_, 0);
lean_inc(v_head_557_);
v_tail_558_ = lean_ctor_get(v_x_555_, 1);
lean_inc(v_tail_558_);
v___x_559_ = lp_lean_x2dftml_LeanFtml_embedCloserAt(v_x_555_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v___x_560_; 
v___x_560_ = lp_lean_x2dftml_LeanFtml_embedCloserSearch(v_tail_558_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_dec(v_head_557_);
return v___x_560_;
}
else
{
lean_object* v_val_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_578_; 
v_val_561_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_578_ == 0)
{
v___x_563_ = v___x_560_;
v_isShared_564_ = v_isSharedCheck_578_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_val_561_);
lean_dec(v___x_560_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_578_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v_fst_565_; lean_object* v_snd_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_577_; 
v_fst_565_ = lean_ctor_get(v_val_561_, 0);
v_snd_566_ = lean_ctor_get(v_val_561_, 1);
v_isSharedCheck_577_ = !lean_is_exclusive(v_val_561_);
if (v_isSharedCheck_577_ == 0)
{
v___x_568_ = v_val_561_;
v_isShared_569_ = v_isSharedCheck_577_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_snd_566_);
lean_inc(v_fst_565_);
lean_dec(v_val_561_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_577_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_570_; lean_object* v___x_572_; 
v___x_570_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_570_, 0, v_head_557_);
lean_ctor_set(v___x_570_, 1, v_fst_565_);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 0, v___x_570_);
v___x_572_ = v___x_568_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_570_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v_snd_566_);
v___x_572_ = v_reuseFailAlloc_576_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
lean_object* v___x_574_; 
if (v_isShared_564_ == 0)
{
lean_ctor_set(v___x_563_, 0, v___x_572_);
v___x_574_ = v___x_563_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_572_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
}
}
}
else
{
lean_object* v_val_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_588_; 
lean_dec(v_tail_558_);
lean_dec(v_head_557_);
v_val_579_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_588_ == 0)
{
v___x_581_ = v___x_559_;
v_isShared_582_ = v_isSharedCheck_588_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_val_579_);
lean_dec(v___x_559_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_588_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_586_; 
v___x_583_ = lean_box(0);
v___x_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
lean_ctor_set(v___x_584_, 1, v_val_579_);
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 0, v___x_584_);
v___x_586_ = v___x_581_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v___x_584_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedMatchAt(lean_object* v_src_589_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = lp_lean_x2dftml_LeanFtml_embedOpenerAt(v_src_589_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v___x_591_; 
v___x_591_ = lean_box(0);
return v___x_591_;
}
else
{
lean_object* v_val_592_; lean_object* v___x_593_; 
v_val_592_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_val_592_);
lean_dec_ref_known(v___x_590_, 1);
v___x_593_ = lp_lean_x2dftml_LeanFtml_embedCloserSearch(v_val_592_);
return v___x_593_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_embedMatch___closed__2(void){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_596_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_embedMatch___closed__1));
v___x_597_ = l_String_toListImpl(v___x_596_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedMatch(lean_object* v_src_598_, lean_object* v_toks_599_){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = lp_lean_x2dftml_LeanFtml_embedMatchAt(v_src_598_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v___x_601_; 
lean_dec(v_toks_599_);
v___x_601_ = lean_box(0);
return v___x_601_;
}
else
{
lean_object* v_val_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_626_; 
v_val_602_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_626_ == 0)
{
v___x_604_ = v___x_600_;
v_isShared_605_ = v_isSharedCheck_626_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_val_602_);
lean_dec(v___x_600_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_626_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v_fst_606_; lean_object* v_snd_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_625_; 
v_fst_606_ = lean_ctor_get(v_val_602_, 0);
v_snd_607_ = lean_ctor_get(v_val_602_, 1);
v_isSharedCheck_625_ = !lean_is_exclusive(v_val_602_);
if (v_isSharedCheck_625_ == 0)
{
v___x_609_ = v_val_602_;
v_isShared_610_ = v_isSharedCheck_625_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_snd_607_);
lean_inc(v_fst_606_);
lean_dec(v_val_602_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_625_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_616_; 
v___x_611_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_embedMatch___closed__0));
v___x_612_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_embedMatch___closed__2, &lp_lean_x2dftml_LeanFtml_embedMatch___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_embedMatch___closed__2);
v___x_613_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_fst_606_);
lean_dec(v_fst_606_);
v___x_614_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_613_);
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 1, v___x_614_);
lean_ctor_set(v___x_609_, 0, v___x_612_);
v___x_616_ = v___x_609_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_612_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v___x_614_);
v___x_616_ = v_reuseFailAlloc_624_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_622_; 
v___x_617_ = lean_box(0);
v___x_618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_616_);
lean_ctor_set(v___x_618_, 1, v___x_617_);
v___x_619_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_611_, v___x_618_, v_toks_599_);
v___x_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_620_, 0, v_snd_607_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 0, v___x_620_);
v___x_622_ = v___x_604_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_620_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_embedRule(lean_object* v_st_630_){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_embedRule___closed__1));
v___x_632_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_630_, v___x_631_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hexDigitB(lean_object* v_n_633_){
_start:
{
lean_object* v___x_634_; uint8_t v___x_635_; 
v___x_634_ = lean_unsigned_to_nat(10u);
v___x_635_ = lean_nat_dec_lt(v_n_633_, v___x_634_);
if (v___x_635_ == 0)
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = lean_unsigned_to_nat(55u);
v___x_637_ = lean_nat_add(v___x_636_, v_n_633_);
return v___x_637_;
}
else
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = lean_unsigned_to_nat(48u);
v___x_639_ = lean_nat_add(v___x_638_, v_n_633_);
return v___x_639_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hexDigitB___boxed(lean_object* v_n_640_){
_start:
{
lean_object* v_res_641_; 
v_res_641_ = lp_lean_x2dftml_LeanFtml_hexDigitB(v_n_640_);
lean_dec(v_n_640_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlencodeByte(lean_object* v_b_645_){
_start:
{
lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_680_ = lean_unsigned_to_nat(48u);
v___x_681_ = lean_nat_dec_le(v___x_680_, v_b_645_);
if (v___x_681_ == 0)
{
goto v___jp_675_;
}
else
{
lean_object* v___x_682_; uint8_t v___x_683_; 
v___x_682_ = lean_unsigned_to_nat(57u);
v___x_683_ = lean_nat_dec_le(v_b_645_, v___x_682_);
if (v___x_683_ == 0)
{
goto v___jp_675_;
}
else
{
goto v___jp_646_;
}
}
v___jp_646_:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = lean_box(0);
v___x_648_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_648_, 0, v_b_645_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
return v___x_648_;
}
v___jp_649_:
{
lean_object* v___x_650_; uint8_t v___x_651_; 
v___x_650_ = lean_unsigned_to_nat(45u);
v___x_651_ = lean_nat_dec_eq(v_b_645_, v___x_650_);
if (v___x_651_ == 0)
{
lean_object* v___x_652_; uint8_t v___x_653_; 
v___x_652_ = lean_unsigned_to_nat(95u);
v___x_653_ = lean_nat_dec_eq(v_b_645_, v___x_652_);
if (v___x_653_ == 0)
{
lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_654_ = lean_unsigned_to_nat(46u);
v___x_655_ = lean_nat_dec_eq(v_b_645_, v___x_654_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; uint8_t v___x_657_; 
v___x_656_ = lean_unsigned_to_nat(32u);
v___x_657_ = lean_nat_dec_eq(v_b_645_, v___x_656_);
if (v___x_657_ == 0)
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_658_ = lean_unsigned_to_nat(37u);
v___x_659_ = lean_unsigned_to_nat(16u);
v___x_660_ = lean_unsigned_to_nat(4u);
v___x_661_ = lean_nat_shiftr(v_b_645_, v___x_660_);
v___x_662_ = lp_lean_x2dftml_LeanFtml_hexDigitB(v___x_661_);
lean_dec(v___x_661_);
v___x_663_ = lean_nat_mod(v_b_645_, v___x_659_);
lean_dec(v_b_645_);
v___x_664_ = lp_lean_x2dftml_LeanFtml_hexDigitB(v___x_663_);
lean_dec(v___x_663_);
v___x_665_ = lean_box(0);
v___x_666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_666_, 0, v___x_664_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
v___x_667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_662_);
lean_ctor_set(v___x_667_, 1, v___x_666_);
v___x_668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_658_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
return v___x_668_;
}
else
{
lean_object* v___x_669_; 
lean_dec(v_b_645_);
v___x_669_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlencodeByte___closed__0));
return v___x_669_;
}
}
else
{
goto v___jp_646_;
}
}
else
{
goto v___jp_646_;
}
}
else
{
goto v___jp_646_;
}
}
v___jp_670_:
{
lean_object* v___x_671_; uint8_t v___x_672_; 
v___x_671_ = lean_unsigned_to_nat(97u);
v___x_672_ = lean_nat_dec_le(v___x_671_, v_b_645_);
if (v___x_672_ == 0)
{
goto v___jp_649_;
}
else
{
lean_object* v___x_673_; uint8_t v___x_674_; 
v___x_673_ = lean_unsigned_to_nat(122u);
v___x_674_ = lean_nat_dec_le(v_b_645_, v___x_673_);
if (v___x_674_ == 0)
{
goto v___jp_649_;
}
else
{
goto v___jp_646_;
}
}
}
v___jp_675_:
{
lean_object* v___x_676_; uint8_t v___x_677_; 
v___x_676_ = lean_unsigned_to_nat(65u);
v___x_677_ = lean_nat_dec_le(v___x_676_, v_b_645_);
if (v___x_677_ == 0)
{
goto v___jp_670_;
}
else
{
lean_object* v___x_678_; uint8_t v___x_679_; 
v___x_678_ = lean_unsigned_to_nat(90u);
v___x_679_ = lean_nat_dec_le(v_b_645_, v___x_678_);
if (v___x_679_ == 0)
{
goto v___jp_670_;
}
else
{
goto v___jp_646_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_urlencodeBytes_spec__0(lean_object* v_a_684_, lean_object* v_a_685_){
_start:
{
if (lean_obj_tag(v_a_684_) == 0)
{
lean_object* v___x_686_; 
v___x_686_ = lean_array_to_list(v_a_685_);
return v___x_686_;
}
else
{
lean_object* v_head_687_; lean_object* v_tail_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v_head_687_ = lean_ctor_get(v_a_684_, 0);
lean_inc(v_head_687_);
v_tail_688_ = lean_ctor_get(v_a_684_, 1);
lean_inc(v_tail_688_);
lean_dec_ref_known(v_a_684_, 2);
v___x_689_ = lp_lean_x2dftml_LeanFtml_urlencodeByte(v_head_687_);
v___x_690_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_685_, v___x_689_);
v_a_684_ = v_tail_688_;
v_a_685_ = v___x_690_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlencodeBytes(lean_object* v_bs_692_){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_693_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonTail___closed__0));
v___x_694_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_urlencodeBytes_spec__0(v_bs_692_, v___x_693_);
return v___x_694_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_socialReplacement___closed__3(void){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_702_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_socialReplacement___closed__2));
v___x_703_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_702_);
return v___x_703_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_socialReplacement___closed__4(void){
_start:
{
lean_object* v___x_704_; lean_object* v_d_705_; lean_object* v___x_706_; 
v___x_704_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_socialReplacement___closed__3, &lp_lean_x2dftml_LeanFtml_socialReplacement___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_socialReplacement___closed__3);
v_d_705_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_socialReplacement___closed__1));
v___x_706_ = l_List_appendTR___redArg(v_d_705_, v___x_704_);
return v___x_706_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_socialReplacement___closed__7(void){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_711_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_socialReplacement___closed__6));
v___x_712_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_711_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_socialReplacement(lean_object* v_sites_716_){
_start:
{
lean_object* v___x_717_; lean_object* v_d_718_; lean_object* v___x_719_; lean_object* v___y_721_; uint8_t v___x_724_; 
v___x_717_ = lean_box(0);
v_d_718_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_socialReplacement___closed__1));
v___x_719_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_socialReplacement___closed__4, &lp_lean_x2dftml_LeanFtml_socialReplacement___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_socialReplacement___closed__4);
v___x_724_ = l_List_isEmpty___redArg(v_sites_716_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_725_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_socialReplacement___closed__5));
v___x_726_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_socialReplacement___closed__7, &lp_lean_x2dftml_LeanFtml_socialReplacement___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_socialReplacement___closed__7);
v___x_727_ = l_List_appendTR___redArg(v___x_726_, v_sites_716_);
v___x_728_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_socialReplacement___closed__8));
v___x_729_ = l_List_appendTR___redArg(v___x_727_, v___x_728_);
v___x_730_ = lp_lean_x2dftml_LeanFtml_urlencodeBytes(v___x_729_);
v___x_731_ = l_List_appendTR___redArg(v___x_725_, v___x_730_);
v___x_732_ = l_List_appendTR___redArg(v___x_731_, v___x_725_);
v___y_721_ = v___x_732_;
goto v___jp_720_;
}
else
{
lean_dec(v_sites_716_);
v___y_721_ = v___x_717_;
goto v___jp_720_;
}
v___jp_720_:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = l_List_appendTR___redArg(v___x_719_, v___y_721_);
v___x_723_ = l_List_appendTR___redArg(v___x_722_, v_d_718_);
return v___x_723_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_socialMatchAt_spec__0(lean_object* v_a_733_, lean_object* v_a_734_){
_start:
{
if (lean_obj_tag(v_a_733_) == 0)
{
lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_735_ = l_List_reverse___redArg(v_a_734_);
v___x_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_736_, 0, v___x_735_);
lean_ctor_set(v___x_736_, 1, v_a_733_);
return v___x_736_;
}
else
{
lean_object* v_head_737_; lean_object* v_tail_738_; lean_object* v___x_739_; uint8_t v___x_740_; 
v_head_737_ = lean_ctor_get(v_a_733_, 0);
v_tail_738_ = lean_ctor_get(v_a_733_, 1);
v___x_739_ = lean_unsigned_to_nat(93u);
v___x_740_ = lean_nat_dec_eq(v_head_737_, v___x_739_);
if (v___x_740_ == 0)
{
lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_748_; 
lean_inc(v_tail_738_);
lean_inc(v_head_737_);
v_isSharedCheck_748_ = !lean_is_exclusive(v_a_733_);
if (v_isSharedCheck_748_ == 0)
{
lean_object* v_unused_749_; lean_object* v_unused_750_; 
v_unused_749_ = lean_ctor_get(v_a_733_, 1);
lean_dec(v_unused_749_);
v_unused_750_ = lean_ctor_get(v_a_733_, 0);
lean_dec(v_unused_750_);
v___x_742_ = v_a_733_;
v_isShared_743_ = v_isSharedCheck_748_;
goto v_resetjp_741_;
}
else
{
lean_dec(v_a_733_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_748_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 1, v_a_734_);
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_head_737_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_a_734_);
v___x_745_ = v_reuseFailAlloc_747_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
v_a_733_ = v_tail_738_;
v_a_734_ = v___x_745_;
goto _start;
}
}
}
else
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = l_List_reverse___redArg(v_a_734_);
v___x_752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
lean_ctor_set(v___x_752_, 1, v_a_733_);
return v___x_752_;
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_socialMatchAt___closed__1(void){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_754_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_socialMatchAt___closed__0));
v___x_755_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_socialMatchAt(lean_object* v_src_756_){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_socialMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_socialMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_socialMatchAt___closed__1);
v___x_758_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_757_, v_src_756_);
if (lean_obj_tag(v___x_758_) == 0)
{
lean_object* v___x_759_; 
v___x_759_ = lean_box(0);
return v___x_759_;
}
else
{
lean_object* v_val_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_802_; 
v_val_760_ = lean_ctor_get(v___x_758_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_802_ == 0)
{
v___x_762_ = v___x_758_;
v_isShared_763_ = v_isSharedCheck_802_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_val_760_);
lean_dec(v___x_758_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_802_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v_snd_766_; 
v___x_764_ = lean_box(0);
v___x_765_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_socialMatchAt_spec__0(v_val_760_, v___x_764_);
v_snd_766_ = lean_ctor_get(v___x_765_, 1);
lean_inc(v_snd_766_);
if (lean_obj_tag(v_snd_766_) == 1)
{
lean_object* v_fst_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_799_; 
v_fst_767_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_799_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_799_ == 0)
{
lean_object* v_unused_800_; 
v_unused_800_ = lean_ctor_get(v___x_765_, 1);
lean_dec(v_unused_800_);
v___x_769_ = v___x_765_;
v_isShared_770_ = v_isSharedCheck_799_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_fst_767_);
lean_dec(v___x_765_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_799_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v_head_771_; lean_object* v_tail_772_; lean_object* v___x_773_; uint8_t v___x_774_; 
v_head_771_ = lean_ctor_get(v_snd_766_, 0);
lean_inc(v_head_771_);
v_tail_772_ = lean_ctor_get(v_snd_766_, 1);
lean_inc(v_tail_772_);
lean_dec_ref_known(v_snd_766_, 2);
v___x_773_ = lean_unsigned_to_nat(93u);
v___x_774_ = lean_nat_dec_eq(v_head_771_, v___x_773_);
lean_dec(v_head_771_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; 
lean_dec(v_tail_772_);
lean_del_object(v___x_769_);
lean_dec(v_fst_767_);
lean_del_object(v___x_762_);
v___x_775_ = lean_box(0);
return v___x_775_;
}
else
{
if (lean_obj_tag(v_tail_772_) == 1)
{
lean_object* v_head_776_; lean_object* v_tail_777_; uint8_t v___x_778_; 
v_head_776_ = lean_ctor_get(v_tail_772_, 0);
lean_inc(v_head_776_);
v_tail_777_ = lean_ctor_get(v_tail_772_, 1);
lean_inc(v_tail_777_);
lean_dec_ref_known(v_tail_772_, 2);
v___x_778_ = lean_nat_dec_eq(v_head_776_, v___x_773_);
lean_dec(v_head_776_);
if (v___x_778_ == 0)
{
lean_object* v___x_779_; 
lean_dec(v_tail_777_);
lean_del_object(v___x_769_);
lean_dec(v_fst_767_);
lean_del_object(v___x_762_);
v___x_779_ = lean_box(0);
return v___x_779_;
}
else
{
if (lean_obj_tag(v_fst_767_) == 0)
{
lean_object* v___x_781_; 
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 1, v_tail_777_);
v___x_781_ = v___x_769_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_fst_767_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_tail_777_);
v___x_781_ = v_reuseFailAlloc_785_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
lean_object* v___x_783_; 
if (v_isShared_763_ == 0)
{
lean_ctor_set(v___x_762_, 0, v___x_781_);
v___x_783_ = v___x_762_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v___x_781_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
else
{
lean_object* v_tail_786_; 
v_tail_786_ = lean_ctor_get(v_fst_767_, 1);
if (lean_obj_tag(v_tail_786_) == 1)
{
lean_object* v_head_787_; uint8_t v___x_788_; 
v_head_787_ = lean_ctor_get(v_fst_767_, 0);
v___x_788_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_787_);
if (v___x_788_ == 0)
{
lean_object* v___x_789_; 
lean_dec_ref_known(v_fst_767_, 2);
lean_dec(v_tail_777_);
lean_del_object(v___x_769_);
lean_del_object(v___x_762_);
v___x_789_ = lean_box(0);
return v___x_789_;
}
else
{
lean_object* v___x_790_; lean_object* v___x_792_; 
v___x_790_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_fst_767_);
lean_dec_ref_known(v_fst_767_, 2);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 1, v_tail_777_);
lean_ctor_set(v___x_769_, 0, v___x_790_);
v___x_792_ = v___x_769_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v___x_790_);
lean_ctor_set(v_reuseFailAlloc_796_, 1, v_tail_777_);
v___x_792_ = v_reuseFailAlloc_796_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
lean_object* v___x_794_; 
if (v_isShared_763_ == 0)
{
lean_ctor_set(v___x_762_, 0, v___x_792_);
v___x_794_ = v___x_762_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_792_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
else
{
lean_object* v___x_797_; 
lean_dec_ref_known(v_fst_767_, 2);
lean_dec(v_tail_777_);
lean_del_object(v___x_769_);
lean_del_object(v___x_762_);
v___x_797_ = lean_box(0);
return v___x_797_;
}
}
}
}
else
{
lean_object* v___x_798_; 
lean_dec(v_tail_772_);
lean_del_object(v___x_769_);
lean_dec(v_fst_767_);
lean_del_object(v___x_762_);
v___x_798_ = lean_box(0);
return v___x_798_;
}
}
}
}
else
{
lean_object* v___x_801_; 
lean_dec(v_snd_766_);
lean_dec_ref(v___x_765_);
lean_del_object(v___x_762_);
v___x_801_ = lean_box(0);
return v___x_801_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_socialMatch(lean_object* v_src_803_, lean_object* v_toks_804_){
_start:
{
lean_object* v___x_805_; 
v___x_805_ = lp_lean_x2dftml_LeanFtml_socialMatchAt(v_src_803_);
if (lean_obj_tag(v___x_805_) == 0)
{
lean_object* v___x_806_; 
lean_dec(v_toks_804_);
v___x_806_ = lean_box(0);
return v___x_806_;
}
else
{
lean_object* v_val_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_825_; 
v_val_807_ = lean_ctor_get(v___x_805_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_805_);
if (v_isSharedCheck_825_ == 0)
{
v___x_809_ = v___x_805_;
v_isShared_810_ = v_isSharedCheck_825_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_val_807_);
lean_dec(v___x_805_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_825_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v_fst_811_; lean_object* v_snd_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_824_; 
v_fst_811_ = lean_ctor_get(v_val_807_, 0);
v_snd_812_ = lean_ctor_get(v_val_807_, 1);
v_isSharedCheck_824_ = !lean_is_exclusive(v_val_807_);
if (v_isSharedCheck_824_ == 0)
{
v___x_814_ = v_val_807_;
v_isShared_815_ = v_isSharedCheck_824_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_snd_812_);
lean_inc(v_fst_811_);
lean_dec(v_val_807_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_824_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_816_; lean_object* v___x_818_; 
v___x_816_ = lp_lean_x2dftml_LeanFtml_socialReplacement(v_fst_811_);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 1, v_toks_804_);
lean_ctor_set(v___x_814_, 0, v___x_816_);
v___x_818_ = v___x_814_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_816_);
lean_ctor_set(v_reuseFailAlloc_823_, 1, v_toks_804_);
v___x_818_ = v_reuseFailAlloc_823_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
lean_object* v___x_819_; lean_object* v___x_821_; 
v___x_819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_819_, 0, v_snd_812_);
lean_ctor_set(v___x_819_, 1, v___x_818_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 0, v___x_819_);
v___x_821_ = v___x_809_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v___x_819_);
v___x_821_ = v_reuseFailAlloc_822_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
return v___x_821_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_socialRule(lean_object* v_st_829_){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_socialRule___closed__1));
v___x_831_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_829_, v___x_830_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileTryL(lean_object* v_x_832_, lean_object* v_x_833_, lean_object* v_x_834_){
_start:
{
if (lean_obj_tag(v_x_833_) == 0)
{
lean_object* v___x_835_; 
lean_dec(v_x_834_);
lean_dec(v_x_832_);
v___x_835_ = lean_box(0);
return v___x_835_;
}
else
{
lean_object* v_head_836_; lean_object* v_tail_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_910_; 
v_head_836_ = lean_ctor_get(v_x_833_, 0);
v_tail_837_ = lean_ctor_get(v_x_833_, 1);
v_isSharedCheck_910_ = !lean_is_exclusive(v_x_833_);
if (v_isSharedCheck_910_ == 0)
{
v___x_839_ = v_x_833_;
v_isShared_840_ = v_isSharedCheck_910_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_tail_837_);
lean_inc(v_head_836_);
lean_dec(v_x_833_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_910_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_841_; lean_object* v___x_843_; 
v___x_841_ = lean_box(0);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 1, v___x_841_);
v___x_843_ = v___x_839_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_head_836_);
lean_ctor_set(v_reuseFailAlloc_909_, 1, v___x_841_);
v___x_843_ = v_reuseFailAlloc_909_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
lean_object* v_g1_x27_844_; 
v_g1_x27_844_ = l_List_appendTR___redArg(v_x_832_, v___x_843_);
if (lean_obj_tag(v_tail_837_) == 1)
{
lean_object* v_head_876_; lean_object* v_tail_877_; lean_object* v___x_878_; uint8_t v___x_879_; 
v_head_876_ = lean_ctor_get(v_tail_837_, 0);
v_tail_877_ = lean_ctor_get(v_tail_837_, 1);
v___x_878_ = lean_unsigned_to_nat(124u);
v___x_879_ = lean_nat_dec_eq(v_head_876_, v___x_878_);
if (v___x_879_ == 0)
{
goto v___jp_845_;
}
else
{
lean_object* v___x_880_; 
lean_inc(v_tail_877_);
v___x_880_ = lp_lean_x2dftml_LeanFtml_lazyGroupToClose(v_tail_877_);
if (lean_obj_tag(v___x_880_) == 0)
{
goto v___jp_845_;
}
else
{
lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_906_; 
v_isSharedCheck_906_ = !lean_is_exclusive(v_tail_837_);
if (v_isSharedCheck_906_ == 0)
{
lean_object* v_unused_907_; lean_object* v_unused_908_; 
v_unused_907_ = lean_ctor_get(v_tail_837_, 1);
lean_dec(v_unused_907_);
v_unused_908_ = lean_ctor_get(v_tail_837_, 0);
lean_dec(v_unused_908_);
v___x_882_ = v_tail_837_;
v_isShared_883_ = v_isSharedCheck_906_;
goto v_resetjp_881_;
}
else
{
lean_dec(v_tail_837_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_906_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v_val_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_905_; 
v_val_884_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_905_ == 0)
{
v___x_886_ = v___x_880_;
v_isShared_887_ = v_isSharedCheck_905_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_val_884_);
lean_dec(v___x_880_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_905_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v_fst_888_; lean_object* v_snd_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_904_; 
v_fst_888_ = lean_ctor_get(v_val_884_, 0);
v_snd_889_ = lean_ctor_get(v_val_884_, 1);
v_isSharedCheck_904_ = !lean_is_exclusive(v_val_884_);
if (v_isSharedCheck_904_ == 0)
{
v___x_891_ = v_val_884_;
v_isShared_892_ = v_isSharedCheck_904_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_snd_889_);
lean_inc(v_fst_888_);
lean_dec(v_val_884_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_904_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 0, v_fst_888_);
v___x_894_ = v___x_886_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_fst_888_);
v___x_894_ = v_reuseFailAlloc_903_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
lean_object* v___x_895_; lean_object* v___x_897_; 
v___x_895_ = l_List_appendTR___redArg(v_snd_889_, v_x_834_);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 1, v___x_895_);
lean_ctor_set(v___x_891_, 0, v___x_894_);
v___x_897_ = v___x_891_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_894_);
lean_ctor_set(v_reuseFailAlloc_902_, 1, v___x_895_);
v___x_897_ = v_reuseFailAlloc_902_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
lean_object* v___x_899_; 
if (v_isShared_883_ == 0)
{
lean_ctor_set_tag(v___x_882_, 0);
lean_ctor_set(v___x_882_, 1, v___x_897_);
lean_ctor_set(v___x_882_, 0, v_g1_x27_844_);
v___x_899_ = v___x_882_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_g1_x27_844_);
lean_ctor_set(v_reuseFailAlloc_901_, 1, v___x_897_);
v___x_899_ = v_reuseFailAlloc_901_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
lean_object* v___x_900_; 
v___x_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
return v___x_900_;
}
}
}
}
}
}
}
}
}
else
{
goto v___jp_845_;
}
v___jp_845_:
{
if (lean_obj_tag(v_tail_837_) == 1)
{
lean_object* v_head_846_; lean_object* v_tail_847_; lean_object* v___x_848_; uint8_t v___x_849_; 
v_head_846_ = lean_ctor_get(v_tail_837_, 0);
v_tail_847_ = lean_ctor_get(v_tail_837_, 1);
lean_inc(v_tail_847_);
v___x_848_ = lean_unsigned_to_nat(93u);
v___x_849_ = lean_nat_dec_eq(v_head_846_, v___x_848_);
if (v___x_849_ == 0)
{
lean_dec(v_tail_847_);
v_x_832_ = v_g1_x27_844_;
v_x_833_ = v_tail_837_;
goto _start;
}
else
{
if (lean_obj_tag(v_tail_847_) == 1)
{
lean_object* v_head_851_; lean_object* v_tail_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_873_; 
v_head_851_ = lean_ctor_get(v_tail_847_, 0);
v_tail_852_ = lean_ctor_get(v_tail_847_, 1);
v_isSharedCheck_873_ = !lean_is_exclusive(v_tail_847_);
if (v_isSharedCheck_873_ == 0)
{
v___x_854_ = v_tail_847_;
v_isShared_855_ = v_isSharedCheck_873_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_tail_852_);
lean_inc(v_head_851_);
lean_dec(v_tail_847_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_873_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
uint8_t v___x_856_; 
v___x_856_ = lean_nat_dec_eq(v_head_851_, v___x_848_);
lean_dec(v_head_851_);
if (v___x_856_ == 0)
{
lean_del_object(v___x_854_);
lean_dec(v_tail_852_);
v_x_832_ = v_g1_x27_844_;
v_x_833_ = v_tail_837_;
goto _start;
}
else
{
lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_870_; 
v_isSharedCheck_870_ = !lean_is_exclusive(v_tail_837_);
if (v_isSharedCheck_870_ == 0)
{
lean_object* v_unused_871_; lean_object* v_unused_872_; 
v_unused_871_ = lean_ctor_get(v_tail_837_, 1);
lean_dec(v_unused_871_);
v_unused_872_ = lean_ctor_get(v_tail_837_, 0);
lean_dec(v_unused_872_);
v___x_859_ = v_tail_837_;
v_isShared_860_ = v_isSharedCheck_870_;
goto v_resetjp_858_;
}
else
{
lean_dec(v_tail_837_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_870_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_864_; 
v___x_861_ = lean_box(0);
v___x_862_ = l_List_appendTR___redArg(v_tail_852_, v_x_834_);
if (v_isShared_855_ == 0)
{
lean_ctor_set_tag(v___x_854_, 0);
lean_ctor_set(v___x_854_, 1, v___x_862_);
lean_ctor_set(v___x_854_, 0, v___x_861_);
v___x_864_ = v___x_854_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v___x_861_);
lean_ctor_set(v_reuseFailAlloc_869_, 1, v___x_862_);
v___x_864_ = v_reuseFailAlloc_869_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
lean_object* v___x_866_; 
if (v_isShared_860_ == 0)
{
lean_ctor_set_tag(v___x_859_, 0);
lean_ctor_set(v___x_859_, 1, v___x_864_);
lean_ctor_set(v___x_859_, 0, v_g1_x27_844_);
v___x_866_ = v___x_859_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_g1_x27_844_);
lean_ctor_set(v_reuseFailAlloc_868_, 1, v___x_864_);
v___x_866_ = v_reuseFailAlloc_868_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
lean_object* v___x_867_; 
v___x_867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_867_, 0, v___x_866_);
return v___x_867_;
}
}
}
}
}
}
else
{
lean_dec(v_tail_847_);
v_x_832_ = v_g1_x27_844_;
v_x_833_ = v_tail_837_;
goto _start;
}
}
}
else
{
v_x_832_ = v_g1_x27_844_;
v_x_833_ = v_tail_837_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_fileMatchAt_tryW_spec__0(lean_object* v_a_911_, lean_object* v_a_912_){
_start:
{
if (lean_obj_tag(v_a_911_) == 0)
{
lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_913_ = l_List_reverse___redArg(v_a_912_);
v___x_914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_913_);
lean_ctor_set(v___x_914_, 1, v_a_911_);
return v___x_914_;
}
else
{
lean_object* v_head_915_; lean_object* v_tail_916_; lean_object* v___x_917_; uint8_t v___x_918_; 
v_head_915_ = lean_ctor_get(v_a_911_, 0);
v_tail_916_ = lean_ctor_get(v_a_911_, 1);
v___x_917_ = lean_unsigned_to_nat(10u);
v___x_918_ = lean_nat_dec_eq(v_head_915_, v___x_917_);
if (v___x_918_ == 0)
{
lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_926_; 
lean_inc(v_tail_916_);
lean_inc(v_head_915_);
v_isSharedCheck_926_ = !lean_is_exclusive(v_a_911_);
if (v_isSharedCheck_926_ == 0)
{
lean_object* v_unused_927_; lean_object* v_unused_928_; 
v_unused_927_ = lean_ctor_get(v_a_911_, 1);
lean_dec(v_unused_927_);
v_unused_928_ = lean_ctor_get(v_a_911_, 0);
lean_dec(v_unused_928_);
v___x_920_ = v_a_911_;
v_isShared_921_ = v_isSharedCheck_926_;
goto v_resetjp_919_;
}
else
{
lean_dec(v_a_911_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_926_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 1, v_a_912_);
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_head_915_);
lean_ctor_set(v_reuseFailAlloc_925_, 1, v_a_912_);
v___x_923_ = v_reuseFailAlloc_925_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
v_a_911_ = v_tail_916_;
v_a_912_ = v___x_923_;
goto _start;
}
}
}
else
{
lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_929_ = l_List_reverse___redArg(v_a_912_);
v___x_930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_930_, 0, v___x_929_);
lean_ctor_set(v___x_930_, 1, v_a_911_);
return v___x_930_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileMatchAt_tryW(lean_object* v_r0_931_, lean_object* v_a_932_){
_start:
{
lean_object* v_zero_933_; uint8_t v_isZero_934_; 
v_zero_933_ = lean_unsigned_to_nat(0u);
v_isZero_934_ = lean_nat_dec_eq(v_a_932_, v_zero_933_);
if (v_isZero_934_ == 1)
{
lean_object* v___x_935_; 
lean_dec(v_a_932_);
v___x_935_ = lean_box(0);
return v___x_935_;
}
else
{
lean_object* v_one_936_; lean_object* v_n_937_; lean_object* v___x_938_; lean_object* v_after_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v_fst_942_; lean_object* v_snd_943_; lean_object* v___x_944_; 
v_one_936_ = lean_unsigned_to_nat(1u);
v_n_937_ = lean_nat_sub(v_a_932_, v_one_936_);
lean_dec(v_a_932_);
v___x_938_ = lean_nat_add(v_n_937_, v_one_936_);
v_after_939_ = l_List_drop___redArg(v___x_938_, v_r0_931_);
v___x_940_ = lean_box(0);
v___x_941_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_fileMatchAt_tryW_spec__0(v_after_939_, v___x_940_);
v_fst_942_ = lean_ctor_get(v___x_941_, 0);
lean_inc(v_fst_942_);
v_snd_943_ = lean_ctor_get(v___x_941_, 1);
lean_inc(v_snd_943_);
lean_dec_ref(v___x_941_);
v___x_944_ = lp_lean_x2dftml_LeanFtml_fileTryL(v___x_940_, v_fst_942_, v_snd_943_);
if (lean_obj_tag(v___x_944_) == 0)
{
v_a_932_ = v_n_937_;
goto _start;
}
else
{
lean_dec(v_n_937_);
return v___x_944_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileMatchAt_tryW___boxed(lean_object* v_r0_946_, lean_object* v_a_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = lp_lean_x2dftml_LeanFtml_fileMatchAt_tryW(v_r0_946_, v_a_947_);
lean_dec(v_r0_946_);
return v_res_948_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_fileMatchAt___closed__1(void){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_fileMatchAt___closed__0));
v___x_951_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_950_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileMatchAt(lean_object* v_src_952_){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_fileMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_fileMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_fileMatchAt___closed__1);
v___x_954_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_953_, v_src_952_);
if (lean_obj_tag(v___x_954_) == 0)
{
lean_object* v___x_955_; 
v___x_955_ = lean_box(0);
return v___x_955_;
}
else
{
lean_object* v_val_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v_val_956_ = lean_ctor_get(v___x_954_, 0);
lean_inc_n(v_val_956_, 2);
lean_dec_ref_known(v___x_954_, 1);
v___x_957_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonTail___closed__0));
v___x_958_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_val_956_, v_val_956_, v___x_957_);
v___x_959_ = l_List_lengthTR___redArg(v___x_958_);
lean_dec(v___x_958_);
v___x_960_ = lp_lean_x2dftml_LeanFtml_fileMatchAt_tryW(v_val_956_, v___x_959_);
lean_dec(v_val_956_);
return v___x_960_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_fileProcess___closed__2(void){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_fileProcess___closed__1));
v___x_964_ = l_String_toListImpl(v___x_963_);
return v___x_964_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_fileProcess___closed__4(void){
_start:
{
lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_966_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_fileProcess___closed__3));
v___x_967_ = l_String_toListImpl(v___x_966_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileProcess(lean_object* v_g1_968_, lean_object* v_g2_969_, lean_object* v_toks_970_){
_start:
{
lean_object* v_file_971_; lean_object* v___y_973_; lean_object* v___y_986_; 
v_file_971_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_g1_968_);
if (lean_obj_tag(v_g2_969_) == 0)
{
lean_object* v___x_989_; 
v___x_989_ = lean_box(0);
v___y_986_ = v___x_989_;
goto v___jp_985_;
}
else
{
lean_object* v_val_990_; 
v_val_990_ = lean_ctor_get(v_g2_969_, 0);
v___y_986_ = v_val_990_;
goto v___jp_985_;
}
v___jp_972_:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_974_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_fileProcess___closed__0));
v___x_975_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_fileProcess___closed__2, &lp_lean_x2dftml_LeanFtml_fileProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_fileProcess___closed__2);
v___x_976_ = lp_lean_x2dftml_LeanFtml_textVal(v_file_971_);
v___x_977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_975_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
v___x_978_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_fileProcess___closed__4, &lp_lean_x2dftml_LeanFtml_fileProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_fileProcess___closed__4);
v___x_979_ = lp_lean_x2dftml_LeanFtml_textVal(v___y_973_);
v___x_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_978_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = lean_box(0);
v___x_982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_980_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
v___x_983_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_977_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
v___x_984_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_974_, v___x_983_, v_toks_970_);
return v___x_984_;
}
v___jp_985_:
{
lean_object* v_anchor0_987_; uint8_t v___x_988_; 
v_anchor0_987_ = lp_lean_x2dftml_LeanFtml_trimBytes(v___y_986_);
v___x_988_ = l_List_isEmpty___redArg(v_anchor0_987_);
if (v___x_988_ == 0)
{
v___y_973_ = v_anchor0_987_;
goto v___jp_972_;
}
else
{
lean_dec(v_anchor0_987_);
lean_inc(v_file_971_);
v___y_973_ = v_file_971_;
goto v___jp_972_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileProcess___boxed(lean_object* v_g1_991_, lean_object* v_g2_992_, lean_object* v_toks_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = lp_lean_x2dftml_LeanFtml_fileProcess(v_g1_991_, v_g2_992_, v_toks_993_);
lean_dec(v_g2_992_);
lean_dec(v_g1_991_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileMatch(lean_object* v_src_995_, lean_object* v_toks_996_){
_start:
{
lean_object* v___x_997_; 
v___x_997_ = lp_lean_x2dftml_LeanFtml_fileMatchAt(v_src_995_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v___x_998_; 
lean_dec(v_toks_996_);
v___x_998_ = lean_box(0);
return v___x_998_;
}
else
{
lean_object* v_val_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1018_; 
v_val_999_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1001_ = v___x_997_;
v_isShared_1002_ = v_isSharedCheck_1018_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_val_999_);
lean_dec(v___x_997_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1018_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v_snd_1003_; lean_object* v_fst_1004_; lean_object* v_fst_1005_; lean_object* v_snd_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1017_; 
v_snd_1003_ = lean_ctor_get(v_val_999_, 1);
lean_inc(v_snd_1003_);
v_fst_1004_ = lean_ctor_get(v_val_999_, 0);
lean_inc(v_fst_1004_);
lean_dec(v_val_999_);
v_fst_1005_ = lean_ctor_get(v_snd_1003_, 0);
v_snd_1006_ = lean_ctor_get(v_snd_1003_, 1);
v_isSharedCheck_1017_ = !lean_is_exclusive(v_snd_1003_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1008_ = v_snd_1003_;
v_isShared_1009_ = v_isSharedCheck_1017_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_snd_1006_);
lean_inc(v_fst_1005_);
lean_dec(v_snd_1003_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1017_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1010_; lean_object* v___x_1012_; 
v___x_1010_ = lp_lean_x2dftml_LeanFtml_fileProcess(v_fst_1004_, v_fst_1005_, v_toks_996_);
lean_dec(v_fst_1005_);
lean_dec(v_fst_1004_);
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 1, v___x_1010_);
lean_ctor_set(v___x_1008_, 0, v_snd_1006_);
v___x_1012_ = v___x_1008_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_snd_1006_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v___x_1010_);
v___x_1012_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
lean_object* v___x_1014_; 
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v___x_1012_);
v___x_1014_ = v___x_1001_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v___x_1012_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_fileRule(lean_object* v_st_1022_){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_fileRule___closed__1));
v___x_1024_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1022_, v___x_1023_);
return v___x_1024_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isAlnumByteB(lean_object* v_b_1025_){
_start:
{
lean_object* v___x_1036_; uint8_t v___x_1037_; 
v___x_1036_ = lean_unsigned_to_nat(48u);
v___x_1037_ = lean_nat_dec_le(v___x_1036_, v_b_1025_);
if (v___x_1037_ == 0)
{
goto v___jp_1031_;
}
else
{
lean_object* v___x_1038_; uint8_t v___x_1039_; 
v___x_1038_ = lean_unsigned_to_nat(57u);
v___x_1039_ = lean_nat_dec_le(v_b_1025_, v___x_1038_);
if (v___x_1039_ == 0)
{
goto v___jp_1031_;
}
else
{
return v___x_1039_;
}
}
v___jp_1026_:
{
lean_object* v___x_1027_; uint8_t v___x_1028_; 
v___x_1027_ = lean_unsigned_to_nat(97u);
v___x_1028_ = lean_nat_dec_le(v___x_1027_, v_b_1025_);
if (v___x_1028_ == 0)
{
return v___x_1028_;
}
else
{
lean_object* v___x_1029_; uint8_t v___x_1030_; 
v___x_1029_ = lean_unsigned_to_nat(122u);
v___x_1030_ = lean_nat_dec_le(v_b_1025_, v___x_1029_);
return v___x_1030_;
}
}
v___jp_1031_:
{
lean_object* v___x_1032_; uint8_t v___x_1033_; 
v___x_1032_ = lean_unsigned_to_nat(65u);
v___x_1033_ = lean_nat_dec_le(v___x_1032_, v_b_1025_);
if (v___x_1033_ == 0)
{
goto v___jp_1026_;
}
else
{
lean_object* v___x_1034_; uint8_t v___x_1035_; 
v___x_1034_ = lean_unsigned_to_nat(90u);
v___x_1035_ = lean_nat_dec_le(v_b_1025_, v___x_1034_);
if (v___x_1035_ == 0)
{
goto v___jp_1026_;
}
else
{
return v___x_1035_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isAlnumByteB___boxed(lean_object* v_b_1040_){
_start:
{
uint8_t v_res_1041_; lean_object* v_r_1042_; 
v_res_1041_ = lp_lean_x2dftml_LeanFtml_isAlnumByteB(v_b_1040_);
lean_dec(v_b_1040_);
v_r_1042_ = lean_box(v_res_1041_);
return v_r_1042_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lowerByteB(lean_object* v_b_1043_){
_start:
{
lean_object* v___x_1044_; uint8_t v___x_1045_; 
v___x_1044_ = lean_unsigned_to_nat(65u);
v___x_1045_ = lean_nat_dec_le(v___x_1044_, v_b_1043_);
if (v___x_1045_ == 0)
{
lean_inc(v_b_1043_);
return v_b_1043_;
}
else
{
lean_object* v___x_1046_; uint8_t v___x_1047_; 
v___x_1046_ = lean_unsigned_to_nat(90u);
v___x_1047_ = lean_nat_dec_le(v_b_1043_, v___x_1046_);
if (v___x_1047_ == 0)
{
lean_inc(v_b_1043_);
return v_b_1043_;
}
else
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = lean_unsigned_to_nat(32u);
v___x_1049_ = lean_nat_add(v_b_1043_, v___x_1048_);
return v___x_1049_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lowerByteB___boxed(lean_object* v_b_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = lp_lean_x2dftml_LeanFtml_lowerByteB(v_b_1050_);
lean_dec(v_b_1050_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_pctEncodeNonAscii_spec__0(lean_object* v_a_1052_, lean_object* v_a_1053_){
_start:
{
if (lean_obj_tag(v_a_1052_) == 0)
{
lean_object* v___x_1054_; 
v___x_1054_ = lean_array_to_list(v_a_1053_);
return v___x_1054_;
}
else
{
lean_object* v_head_1055_; lean_object* v_tail_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1083_; 
v_head_1055_ = lean_ctor_get(v_a_1052_, 0);
v_tail_1056_ = lean_ctor_get(v_a_1052_, 1);
v_isSharedCheck_1083_ = !lean_is_exclusive(v_a_1052_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1058_ = v_a_1052_;
v_isShared_1059_ = v_isSharedCheck_1083_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_tail_1056_);
lean_inc(v_head_1055_);
lean_dec(v_a_1052_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1083_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___y_1061_; lean_object* v___x_1064_; uint8_t v___x_1065_; 
v___x_1064_ = lean_unsigned_to_nat(128u);
v___x_1065_ = lean_nat_dec_le(v___x_1064_, v_head_1055_);
if (v___x_1065_ == 0)
{
lean_object* v___x_1066_; lean_object* v___x_1068_; 
v___x_1066_ = lean_box(0);
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 1, v___x_1066_);
v___x_1068_ = v___x_1058_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_head_1055_);
lean_ctor_set(v_reuseFailAlloc_1069_, 1, v___x_1066_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
v___y_1061_ = v___x_1068_;
goto v___jp_1060_;
}
}
else
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1079_; 
v___x_1070_ = lean_unsigned_to_nat(37u);
v___x_1071_ = lean_unsigned_to_nat(16u);
v___x_1072_ = lean_unsigned_to_nat(4u);
v___x_1073_ = lean_nat_shiftr(v_head_1055_, v___x_1072_);
v___x_1074_ = lp_lean_x2dftml_LeanFtml_hexDigitB(v___x_1073_);
lean_dec(v___x_1073_);
v___x_1075_ = lean_nat_mod(v_head_1055_, v___x_1071_);
lean_dec(v_head_1055_);
v___x_1076_ = lp_lean_x2dftml_LeanFtml_hexDigitB(v___x_1075_);
lean_dec(v___x_1075_);
v___x_1077_ = lean_box(0);
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 1, v___x_1077_);
lean_ctor_set(v___x_1058_, 0, v___x_1076_);
v___x_1079_ = v___x_1058_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v___x_1076_);
lean_ctor_set(v_reuseFailAlloc_1082_, 1, v___x_1077_);
v___x_1079_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1074_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1070_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___y_1061_ = v___x_1081_;
goto v___jp_1060_;
}
}
v___jp_1060_:
{
lean_object* v___x_1062_; 
v___x_1062_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1053_, v___y_1061_);
v_a_1052_ = v_tail_1056_;
v_a_1053_ = v___x_1062_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pctEncodeNonAscii(lean_object* v_bs_1084_){
_start:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1085_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonTail___closed__0));
v___x_1086_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_pctEncodeNonAscii_spec__0(v_bs_1084_, v___x_1085_);
return v___x_1086_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_any___at___00LeanFtml_isVerbatimHref_spec__0(lean_object* v_h_1087_, lean_object* v_x_1088_){
_start:
{
if (lean_obj_tag(v_x_1088_) == 0)
{
uint8_t v___x_1089_; 
v___x_1089_ = 0;
return v___x_1089_;
}
else
{
lean_object* v_head_1090_; lean_object* v_tail_1091_; lean_object* v___x_1092_; uint8_t v___x_1093_; 
v_head_1090_ = lean_ctor_get(v_x_1088_, 0);
lean_inc(v_head_1090_);
v_tail_1091_ = lean_ctor_get(v_x_1088_, 1);
lean_inc(v_tail_1091_);
lean_dec_ref_known(v_x_1088_, 2);
v___x_1092_ = lp_lean_x2dftml_LeanFtml_litBytes(v_head_1090_);
v___x_1093_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_1092_, v_h_1087_);
lean_dec(v___x_1092_);
if (v___x_1093_ == 0)
{
v_x_1088_ = v_tail_1091_;
goto _start;
}
else
{
lean_dec(v_tail_1091_);
return v___x_1093_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_any___at___00LeanFtml_isVerbatimHref_spec__0___boxed(lean_object* v_h_1095_, lean_object* v_x_1096_){
_start:
{
uint8_t v_res_1097_; lean_object* v_r_1098_; 
v_res_1097_ = lp_lean_x2dftml_List_any___at___00LeanFtml_isVerbatimHref_spec__0(v_h_1095_, v_x_1096_);
lean_dec(v_h_1095_);
v_r_1098_ = lean_box(v_res_1097_);
return v_r_1098_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isVerbatimHref(lean_object* v_h_1151_){
_start:
{
if (lean_obj_tag(v_h_1151_) == 0)
{
uint8_t v___x_1152_; 
v___x_1152_ = 0;
return v___x_1152_;
}
else
{
lean_object* v_head_1153_; lean_object* v___x_1154_; uint8_t v___x_1155_; 
v_head_1153_ = lean_ctor_get(v_h_1151_, 0);
v___x_1154_ = lean_unsigned_to_nat(35u);
v___x_1155_ = lean_nat_dec_eq(v_head_1153_, v___x_1154_);
if (v___x_1155_ == 0)
{
lean_object* v___x_1156_; uint8_t v___x_1157_; 
v___x_1156_ = lean_unsigned_to_nat(47u);
v___x_1157_ = lean_nat_dec_eq(v_head_1153_, v___x_1156_);
if (v___x_1157_ == 0)
{
lean_object* v___x_1158_; uint8_t v___x_1159_; 
v___x_1158_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_isVerbatimHref___closed__25));
v___x_1159_ = lp_lean_x2dftml_List_any___at___00LeanFtml_isVerbatimHref_spec__0(v_h_1151_, v___x_1158_);
return v___x_1159_;
}
else
{
return v___x_1157_;
}
}
else
{
return v___x_1155_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isVerbatimHref___boxed(lean_object* v_h_1160_){
_start:
{
uint8_t v_res_1161_; lean_object* v_r_1162_; 
v_res_1161_ = lp_lean_x2dftml_LeanFtml_isVerbatimHref(v_h_1160_);
lean_dec(v_h_1160_);
v_r_1162_ = lean_box(v_res_1161_);
return v_r_1162_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_slugScan(lean_object* v_x_1163_, lean_object* v_x_1164_, uint8_t v_x_1165_, uint8_t v_x_1166_){
_start:
{
if (lean_obj_tag(v_x_1163_) == 0)
{
return v_x_1164_;
}
else
{
lean_object* v_head_1167_; lean_object* v_tail_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1199_; 
v_head_1167_ = lean_ctor_get(v_x_1163_, 0);
v_tail_1168_ = lean_ctor_get(v_x_1163_, 1);
v_isSharedCheck_1199_ = !lean_is_exclusive(v_x_1163_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1170_ = v_x_1163_;
v_isShared_1171_ = v_isSharedCheck_1199_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_tail_1168_);
lean_inc(v_head_1167_);
lean_dec(v_x_1163_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1199_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___y_1173_; lean_object* v___y_1183_; uint8_t v___x_1187_; 
v___x_1187_ = lp_lean_x2dftml_LeanFtml_isAlnumByteB(v_head_1167_);
if (v___x_1187_ == 0)
{
uint8_t v___x_1188_; lean_object* v___x_1189_; uint8_t v___x_1190_; 
lean_del_object(v___x_1170_);
v___x_1188_ = 1;
v___x_1189_ = lean_unsigned_to_nat(58u);
v___x_1190_ = lean_nat_dec_eq(v_head_1167_, v___x_1189_);
lean_dec(v_head_1167_);
if (v___x_1190_ == 0)
{
uint8_t v___x_1191_; 
v___x_1191_ = l_List_isEmpty___redArg(v_x_1164_);
if (v___x_1191_ == 0)
{
v_x_1163_ = v_tail_1168_;
v_x_1165_ = v___x_1188_;
goto _start;
}
else
{
v_x_1163_ = v_tail_1168_;
goto _start;
}
}
else
{
uint8_t v___x_1194_; 
v___x_1194_ = l_List_isEmpty___redArg(v_x_1164_);
if (v___x_1194_ == 0)
{
v_x_1163_ = v_tail_1168_;
v_x_1165_ = v___x_1188_;
v_x_1166_ = v___x_1188_;
goto _start;
}
else
{
v_x_1163_ = v_tail_1168_;
goto _start;
}
}
}
else
{
if (v_x_1165_ == 0)
{
v___y_1173_ = v_x_1164_;
goto v___jp_1172_;
}
else
{
if (v_x_1166_ == 0)
{
lean_object* v___x_1197_; 
v___x_1197_ = lean_unsigned_to_nat(45u);
v___y_1183_ = v___x_1197_;
goto v___jp_1182_;
}
else
{
lean_object* v___x_1198_; 
v___x_1198_ = lean_unsigned_to_nat(58u);
v___y_1183_ = v___x_1198_;
goto v___jp_1182_;
}
}
}
v___jp_1172_:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1177_; 
v___x_1174_ = lp_lean_x2dftml_LeanFtml_lowerByteB(v_head_1167_);
lean_dec(v_head_1167_);
v___x_1175_ = lean_box(0);
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 1, v___x_1175_);
lean_ctor_set(v___x_1170_, 0, v___x_1174_);
v___x_1177_ = v___x_1170_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___x_1174_);
lean_ctor_set(v_reuseFailAlloc_1181_, 1, v___x_1175_);
v___x_1177_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
lean_object* v___x_1178_; uint8_t v___x_1179_; 
v___x_1178_ = l_List_appendTR___redArg(v___y_1173_, v___x_1177_);
v___x_1179_ = 0;
v_x_1163_ = v_tail_1168_;
v_x_1164_ = v___x_1178_;
v_x_1165_ = v___x_1179_;
v_x_1166_ = v___x_1179_;
goto _start;
}
}
v___jp_1182_:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1184_ = lean_box(0);
v___x_1185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___y_1183_);
lean_ctor_set(v___x_1185_, 1, v___x_1184_);
v___x_1186_ = l_List_appendTR___redArg(v_x_1164_, v___x_1185_);
v___y_1173_ = v___x_1186_;
goto v___jp_1172_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_slugScan___boxed(lean_object* v_x_1200_, lean_object* v_x_1201_, lean_object* v_x_1202_, lean_object* v_x_1203_){
_start:
{
uint8_t v_x_166__boxed_1204_; uint8_t v_x_167__boxed_1205_; lean_object* v_res_1206_; 
v_x_166__boxed_1204_ = lean_unbox(v_x_1202_);
v_x_167__boxed_1205_ = lean_unbox(v_x_1203_);
v_res_1206_ = lp_lean_x2dftml_LeanFtml_slugScan(v_x_1200_, v_x_1201_, v_x_166__boxed_1204_, v_x_167__boxed_1205_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref_stripLead(lean_object* v_a_1207_){
_start:
{
if (lean_obj_tag(v_a_1207_) == 1)
{
lean_object* v_head_1208_; lean_object* v_tail_1209_; lean_object* v___x_1210_; uint8_t v___x_1211_; 
v_head_1208_ = lean_ctor_get(v_a_1207_, 0);
v_tail_1209_ = lean_ctor_get(v_a_1207_, 1);
v___x_1210_ = lean_unsigned_to_nat(194u);
v___x_1211_ = lean_nat_dec_eq(v_head_1208_, v___x_1210_);
if (v___x_1211_ == 0)
{
return v_a_1207_;
}
else
{
lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1226_; 
lean_inc(v_tail_1209_);
v_isSharedCheck_1226_ = !lean_is_exclusive(v_a_1207_);
if (v_isSharedCheck_1226_ == 0)
{
lean_object* v_unused_1227_; lean_object* v_unused_1228_; 
v_unused_1227_ = lean_ctor_get(v_a_1207_, 1);
lean_dec(v_unused_1227_);
v_unused_1228_ = lean_ctor_get(v_a_1207_, 0);
lean_dec(v_unused_1228_);
v___x_1213_ = v_a_1207_;
v_isShared_1214_ = v_isSharedCheck_1226_;
goto v_resetjp_1212_;
}
else
{
lean_dec(v_a_1207_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1226_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
if (lean_obj_tag(v_tail_1209_) == 1)
{
lean_object* v_head_1215_; lean_object* v_tail_1216_; lean_object* v___x_1217_; uint8_t v___x_1218_; 
v_head_1215_ = lean_ctor_get(v_tail_1209_, 0);
v_tail_1216_ = lean_ctor_get(v_tail_1209_, 1);
v___x_1217_ = lean_unsigned_to_nat(160u);
v___x_1218_ = lean_nat_dec_eq(v_head_1215_, v___x_1217_);
if (v___x_1218_ == 0)
{
lean_object* v___x_1220_; 
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 0, v___x_1210_);
v___x_1220_ = v___x_1213_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v___x_1210_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v_tail_1209_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
else
{
lean_inc(v_tail_1216_);
lean_dec_ref_known(v_tail_1209_, 2);
lean_del_object(v___x_1213_);
v_a_1207_ = v_tail_1216_;
goto _start;
}
}
else
{
lean_object* v___x_1224_; 
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 0, v___x_1210_);
v___x_1224_ = v___x_1213_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v___x_1210_);
lean_ctor_set(v_reuseFailAlloc_1225_, 1, v_tail_1209_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
}
}
else
{
return v_a_1207_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref_stripLeadRev(lean_object* v_a_1229_){
_start:
{
if (lean_obj_tag(v_a_1229_) == 1)
{
lean_object* v_head_1230_; lean_object* v_tail_1231_; lean_object* v___x_1232_; uint8_t v___x_1233_; 
v_head_1230_ = lean_ctor_get(v_a_1229_, 0);
v_tail_1231_ = lean_ctor_get(v_a_1229_, 1);
v___x_1232_ = lean_unsigned_to_nat(160u);
v___x_1233_ = lean_nat_dec_eq(v_head_1230_, v___x_1232_);
if (v___x_1233_ == 0)
{
return v_a_1229_;
}
else
{
lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1248_; 
lean_inc(v_tail_1231_);
v_isSharedCheck_1248_ = !lean_is_exclusive(v_a_1229_);
if (v_isSharedCheck_1248_ == 0)
{
lean_object* v_unused_1249_; lean_object* v_unused_1250_; 
v_unused_1249_ = lean_ctor_get(v_a_1229_, 1);
lean_dec(v_unused_1249_);
v_unused_1250_ = lean_ctor_get(v_a_1229_, 0);
lean_dec(v_unused_1250_);
v___x_1235_ = v_a_1229_;
v_isShared_1236_ = v_isSharedCheck_1248_;
goto v_resetjp_1234_;
}
else
{
lean_dec(v_a_1229_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1248_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
if (lean_obj_tag(v_tail_1231_) == 1)
{
lean_object* v_head_1237_; lean_object* v_tail_1238_; lean_object* v___x_1239_; uint8_t v___x_1240_; 
v_head_1237_ = lean_ctor_get(v_tail_1231_, 0);
v_tail_1238_ = lean_ctor_get(v_tail_1231_, 1);
v___x_1239_ = lean_unsigned_to_nat(194u);
v___x_1240_ = lean_nat_dec_eq(v_head_1237_, v___x_1239_);
if (v___x_1240_ == 0)
{
lean_object* v___x_1242_; 
if (v_isShared_1236_ == 0)
{
lean_ctor_set(v___x_1235_, 0, v___x_1232_);
v___x_1242_ = v___x_1235_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v___x_1232_);
lean_ctor_set(v_reuseFailAlloc_1243_, 1, v_tail_1231_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
else
{
lean_inc(v_tail_1238_);
lean_dec_ref_known(v_tail_1231_, 2);
lean_del_object(v___x_1235_);
v_a_1229_ = v_tail_1238_;
goto _start;
}
}
else
{
lean_object* v___x_1246_; 
if (v_isShared_1236_ == 0)
{
lean_ctor_set(v___x_1235_, 0, v___x_1232_);
v___x_1246_ = v___x_1235_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v___x_1232_);
lean_ctor_set(v_reuseFailAlloc_1247_, 1, v_tail_1231_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
}
}
else
{
return v_a_1229_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref_stripNbspPairs(lean_object* v_bs_1251_){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1252_ = lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref_stripLead(v_bs_1251_);
v___x_1253_ = l_List_reverse___redArg(v___x_1252_);
v___x_1254_ = lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref_stripLeadRev(v___x_1253_);
v___x_1255_ = l_List_reverse___redArg(v___x_1254_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref_deleteNbspBackslash(lean_object* v_a_1256_){
_start:
{
lean_object* v_b_1258_; lean_object* v_rest_1259_; 
if (lean_obj_tag(v_a_1256_) == 0)
{
return v_a_1256_;
}
else
{
lean_object* v_head_1262_; lean_object* v_tail_1263_; lean_object* v___x_1264_; uint8_t v___x_1265_; 
v_head_1262_ = lean_ctor_get(v_a_1256_, 0);
lean_inc(v_head_1262_);
v_tail_1263_ = lean_ctor_get(v_a_1256_, 1);
lean_inc(v_tail_1263_);
lean_dec_ref_known(v_a_1256_, 2);
v___x_1264_ = lean_unsigned_to_nat(92u);
v___x_1265_ = lean_nat_dec_eq(v_head_1262_, v___x_1264_);
if (v___x_1265_ == 0)
{
lean_object* v___x_1266_; uint8_t v___x_1267_; 
v___x_1266_ = lean_unsigned_to_nat(194u);
v___x_1267_ = lean_nat_dec_eq(v_head_1262_, v___x_1266_);
if (v___x_1267_ == 0)
{
v_b_1258_ = v_head_1262_;
v_rest_1259_ = v_tail_1263_;
goto v___jp_1257_;
}
else
{
lean_dec(v_head_1262_);
if (lean_obj_tag(v_tail_1263_) == 1)
{
lean_object* v_head_1268_; lean_object* v_tail_1269_; lean_object* v___x_1270_; uint8_t v___x_1271_; 
v_head_1268_ = lean_ctor_get(v_tail_1263_, 0);
v_tail_1269_ = lean_ctor_get(v_tail_1263_, 1);
v___x_1270_ = lean_unsigned_to_nat(160u);
v___x_1271_ = lean_nat_dec_eq(v_head_1268_, v___x_1270_);
if (v___x_1271_ == 0)
{
v_b_1258_ = v___x_1266_;
v_rest_1259_ = v_tail_1263_;
goto v___jp_1257_;
}
else
{
lean_inc(v_tail_1269_);
lean_dec_ref_known(v_tail_1263_, 2);
v_a_1256_ = v_tail_1269_;
goto _start;
}
}
else
{
v_b_1258_ = v___x_1266_;
v_rest_1259_ = v_tail_1263_;
goto v___jp_1257_;
}
}
}
else
{
lean_dec(v_head_1262_);
v_a_1256_ = v_tail_1263_;
goto _start;
}
}
v___jp_1257_:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref_deleteNbspBackslash(v_rest_1259_);
v___x_1261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1261_, 0, v_b_1258_);
lean_ctor_set(v___x_1261_, 1, v___x_1260_);
return v___x_1261_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref(lean_object* v_h_1274_){
_start:
{
lean_object* v_n1_1275_; lean_object* v_n2_1276_; lean_object* v_n3_1277_; lean_object* v___x_1278_; uint8_t v___x_1279_; lean_object* v___x_1280_; 
v_n1_1275_ = lp_lean_x2dftml_LeanFtml_normalizeAttrValue(v_h_1274_);
v_n2_1276_ = lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref_stripNbspPairs(v_n1_1275_);
v_n3_1277_ = lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref_deleteNbspBackslash(v_n2_1276_);
v___x_1278_ = lean_box(0);
v___x_1279_ = 0;
v___x_1280_ = lp_lean_x2dftml_LeanFtml_slugScan(v_n3_1277_, v___x_1278_, v___x_1279_, v___x_1279_);
return v___x_1280_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__1(void){
_start:
{
lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1282_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__0));
v___x_1283_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1282_);
return v___x_1283_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__3(void){
_start:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1285_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__2));
v___x_1286_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1285_);
return v___x_1286_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__4(void){
_start:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1287_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonProcess___closed__1));
v___x_1288_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1287_);
return v___x_1288_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__5(void){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonProcess___closed__2));
v___x_1290_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1289_);
return v___x_1290_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__7(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__6));
v___x_1293_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1292_);
return v___x_1293_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__8(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1294_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonProcess___closed__7));
v___x_1295_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1294_);
return v___x_1295_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__10(void){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1297_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__9));
v___x_1298_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1297_);
return v___x_1298_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__11(void){
_start:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1299_ = lean_box(0);
v___x_1300_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__10, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__10);
v___x_1301_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1300_);
lean_ctor_set(v___x_1301_, 1, v___x_1299_);
return v___x_1301_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__12(void){
_start:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1302_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__11, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__11);
v___x_1303_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__8, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__8);
v___x_1304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
lean_ctor_set(v___x_1304_, 1, v___x_1302_);
return v___x_1304_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__13(void){
_start:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1305_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__12, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__12);
v___x_1306_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__7, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__7);
v___x_1307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
lean_ctor_set(v___x_1307_, 1, v___x_1305_);
return v___x_1307_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__14(void){
_start:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1308_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__13, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__13);
v___x_1309_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__5, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__5);
v___x_1310_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1309_);
lean_ctor_set(v___x_1310_, 1, v___x_1308_);
return v___x_1310_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__15(void){
_start:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1311_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__14, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__14);
v___x_1312_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__4, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__4);
v___x_1313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1312_);
lean_ctor_set(v___x_1313_, 1, v___x_1311_);
return v___x_1313_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__17(void){
_start:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1315_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__16));
v___x_1316_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1315_);
return v___x_1316_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__19(void){
_start:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1318_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__18));
v___x_1319_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1318_);
return v___x_1319_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__21(void){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1321_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__20));
v___x_1322_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1321_);
return v___x_1322_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorAttrStep(lean_object* v_st_1323_, lean_object* v_kv_1324_){
_start:
{
lean_object* v_snd_1325_; lean_object* v_fst_1326_; lean_object* v_fst_1327_; lean_object* v_snd_1328_; lean_object* v_fst_1329_; lean_object* v_snd_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1433_; 
v_snd_1325_ = lean_ctor_get(v_st_1323_, 1);
lean_inc(v_snd_1325_);
v_fst_1326_ = lean_ctor_get(v_st_1323_, 0);
v_fst_1327_ = lean_ctor_get(v_snd_1325_, 0);
v_snd_1328_ = lean_ctor_get(v_snd_1325_, 1);
v_fst_1329_ = lean_ctor_get(v_kv_1324_, 0);
v_snd_1330_ = lean_ctor_get(v_kv_1324_, 1);
v_isSharedCheck_1433_ = !lean_is_exclusive(v_kv_1324_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1332_ = v_kv_1324_;
v_isShared_1333_ = v_isSharedCheck_1433_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_snd_1330_);
lean_inc(v_fst_1329_);
lean_dec(v_kv_1324_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1433_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___y_1335_; lean_object* v___x_1340_; uint8_t v___x_1341_; 
v___x_1340_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__1, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__1);
v___x_1341_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1329_, v___x_1340_);
if (v___x_1341_ == 0)
{
lean_object* v___x_1342_; uint8_t v___x_1343_; 
v___x_1342_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__3, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__3);
v___x_1343_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_fst_1329_, v___x_1342_);
if (v___x_1343_ == 0)
{
lean_object* v___x_1344_; lean_object* v___x_1345_; uint8_t v___x_1346_; 
lean_del_object(v___x_1332_);
v___x_1344_ = lean_box(0);
v___x_1345_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__15, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__15);
v___x_1346_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(v_fst_1329_, v___x_1345_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1371_; 
lean_inc(v_snd_1328_);
lean_inc(v_fst_1327_);
v_isSharedCheck_1371_ = !lean_is_exclusive(v_snd_1325_);
if (v_isSharedCheck_1371_ == 0)
{
lean_object* v_unused_1372_; lean_object* v_unused_1373_; 
v_unused_1372_ = lean_ctor_get(v_snd_1325_, 1);
lean_dec(v_unused_1372_);
v_unused_1373_ = lean_ctor_get(v_snd_1325_, 0);
lean_dec(v_unused_1373_);
v___x_1348_ = v_snd_1325_;
v_isShared_1349_ = v_isSharedCheck_1371_;
goto v_resetjp_1347_;
}
else
{
lean_dec(v_snd_1325_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1371_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1350_; uint8_t v___x_1351_; 
v___x_1350_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__17, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__17);
v___x_1351_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_1350_, v_fst_1329_);
if (v___x_1351_ == 0)
{
lean_del_object(v___x_1348_);
lean_dec(v_snd_1330_);
lean_dec(v_fst_1329_);
lean_dec(v_snd_1328_);
lean_dec(v_fst_1327_);
return v_st_1323_;
}
else
{
lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1368_; 
lean_inc(v_fst_1326_);
v_isSharedCheck_1368_ = !lean_is_exclusive(v_st_1323_);
if (v_isSharedCheck_1368_ == 0)
{
lean_object* v_unused_1369_; lean_object* v_unused_1370_; 
v_unused_1369_ = lean_ctor_get(v_st_1323_, 1);
lean_dec(v_unused_1369_);
v_unused_1370_ = lean_ctor_get(v_st_1323_, 0);
lean_dec(v_unused_1370_);
v___x_1353_ = v_st_1323_;
v_isShared_1354_ = v_isSharedCheck_1368_;
goto v_resetjp_1352_;
}
else
{
lean_dec(v_st_1323_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1368_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1355_; lean_object* v___y_1357_; lean_object* v___x_1365_; uint8_t v___x_1366_; 
v___x_1355_ = lp_lean_x2dftml_LeanFtml_asciiLower(v_fst_1329_);
v___x_1365_ = lean_unsigned_to_nat(255u);
v___x_1366_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___x_1365_, v_snd_1330_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; 
v___x_1367_ = lp_lean_x2dftml_LeanFtml_normalizeAttrValue(v_snd_1330_);
v___y_1357_ = v___x_1367_;
goto v___jp_1356_;
}
else
{
lean_dec(v_snd_1330_);
v___y_1357_ = v___x_1344_;
goto v___jp_1356_;
}
v___jp_1356_:
{
lean_object* v___x_1358_; lean_object* v___x_1360_; 
v___x_1358_ = lp_lean_x2dftml_LeanFtml_omSetB(v_fst_1327_, v___x_1355_, v___y_1357_);
if (v_isShared_1349_ == 0)
{
lean_ctor_set(v___x_1348_, 0, v___x_1358_);
v___x_1360_ = v___x_1348_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v___x_1358_);
lean_ctor_set(v_reuseFailAlloc_1364_, 1, v_snd_1328_);
v___x_1360_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
lean_object* v___x_1362_; 
if (v_isShared_1354_ == 0)
{
lean_ctor_set(v___x_1353_, 1, v___x_1360_);
v___x_1362_ = v___x_1353_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_fst_1326_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v___x_1360_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
}
}
}
else
{
uint8_t v___x_1374_; 
v___x_1374_ = l_List_isEmpty___redArg(v_snd_1330_);
if (v___x_1374_ == 0)
{
lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1389_; 
lean_inc(v_fst_1326_);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_st_1323_);
if (v_isSharedCheck_1389_ == 0)
{
lean_object* v_unused_1390_; lean_object* v_unused_1391_; 
v_unused_1390_ = lean_ctor_get(v_st_1323_, 1);
lean_dec(v_unused_1390_);
v_unused_1391_ = lean_ctor_get(v_st_1323_, 0);
lean_dec(v_unused_1391_);
v___x_1376_ = v_st_1323_;
v_isShared_1377_ = v_isSharedCheck_1389_;
goto v_resetjp_1375_;
}
else
{
lean_dec(v_st_1323_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1389_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v___x_1378_; uint8_t v___x_1379_; 
v___x_1378_ = lean_unsigned_to_nat(255u);
v___x_1379_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___x_1378_, v_snd_1330_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
v___x_1380_ = lp_lean_x2dftml_LeanFtml_normalizeAttrValue(v_snd_1330_);
v___x_1381_ = lp_lean_x2dftml_LeanFtml_omSetB(v_fst_1326_, v_fst_1329_, v___x_1380_);
if (v_isShared_1377_ == 0)
{
lean_ctor_set(v___x_1376_, 0, v___x_1381_);
v___x_1383_ = v___x_1376_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1381_);
lean_ctor_set(v_reuseFailAlloc_1384_, 1, v_snd_1325_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
else
{
lean_object* v___x_1385_; lean_object* v___x_1387_; 
lean_dec(v_snd_1330_);
v___x_1385_ = lp_lean_x2dftml_LeanFtml_omSetB(v_fst_1326_, v_fst_1329_, v___x_1344_);
if (v_isShared_1377_ == 0)
{
lean_ctor_set(v___x_1376_, 0, v___x_1385_);
v___x_1387_ = v___x_1376_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v___x_1385_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v_snd_1325_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
}
else
{
lean_dec(v_snd_1330_);
lean_dec(v_fst_1329_);
lean_dec(v_snd_1325_);
return v_st_1323_;
}
}
}
else
{
uint8_t v___x_1392_; 
v___x_1392_ = l_List_isEmpty___redArg(v_snd_1330_);
if (v___x_1392_ == 0)
{
lean_object* v___x_1393_; uint8_t v___x_1394_; 
v___x_1393_ = lean_unsigned_to_nat(255u);
v___x_1394_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___x_1393_, v_snd_1330_);
if (v___x_1394_ == 0)
{
lean_object* v_norm_1395_; uint8_t v___x_1399_; 
lean_inc(v_fst_1326_);
lean_dec_ref(v_st_1323_);
lean_inc(v_snd_1330_);
v_norm_1395_ = lp_lean_x2dftml_LeanFtml_normalizeAttrValue(v_snd_1330_);
v___x_1399_ = l_List_isEmpty___redArg(v_norm_1395_);
if (v___x_1399_ == 0)
{
lean_object* v___x_1400_; uint8_t v___x_1403_; 
v___x_1400_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__21, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__21);
v___x_1403_ = lp_lean_x2dftml_List_isPrefixOf___at___00LeanFtml_bytesContain_spec__0(v___x_1400_, v_norm_1395_);
if (v___x_1403_ == 0)
{
if (lean_obj_tag(v_snd_1330_) == 0)
{
goto v___jp_1401_;
}
else
{
lean_object* v_head_1404_; lean_object* v___x_1405_; uint8_t v___x_1406_; 
v_head_1404_ = lean_ctor_get(v_snd_1330_, 0);
lean_inc(v_head_1404_);
lean_dec_ref_known(v_snd_1330_, 2);
v___x_1405_ = lean_unsigned_to_nat(32u);
v___x_1406_ = lean_nat_dec_eq(v_head_1404_, v___x_1405_);
if (v___x_1406_ == 0)
{
lean_object* v___x_1407_; uint8_t v___x_1408_; 
v___x_1407_ = lean_unsigned_to_nat(9u);
v___x_1408_ = lean_nat_dec_eq(v_head_1404_, v___x_1407_);
if (v___x_1408_ == 0)
{
lean_object* v___x_1409_; uint8_t v___x_1410_; 
v___x_1409_ = lean_unsigned_to_nat(10u);
v___x_1410_ = lean_nat_dec_eq(v_head_1404_, v___x_1409_);
if (v___x_1410_ == 0)
{
lean_object* v___x_1411_; uint8_t v___x_1412_; 
v___x_1411_ = lean_unsigned_to_nat(13u);
v___x_1412_ = lean_nat_dec_eq(v_head_1404_, v___x_1411_);
lean_dec(v_head_1404_);
if (v___x_1412_ == 0)
{
goto v___jp_1401_;
}
else
{
goto v___jp_1396_;
}
}
else
{
lean_dec(v_head_1404_);
goto v___jp_1396_;
}
}
else
{
lean_dec(v_head_1404_);
goto v___jp_1396_;
}
}
else
{
lean_dec(v_head_1404_);
goto v___jp_1396_;
}
}
}
else
{
lean_dec(v_snd_1330_);
v___y_1335_ = v_norm_1395_;
goto v___jp_1334_;
}
v___jp_1401_:
{
lean_object* v___x_1402_; 
v___x_1402_ = l_List_appendTR___redArg(v___x_1400_, v_norm_1395_);
v___y_1335_ = v___x_1402_;
goto v___jp_1334_;
}
}
else
{
lean_object* v___x_1413_; 
lean_dec(v_norm_1395_);
lean_dec(v_snd_1330_);
v___x_1413_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__21, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__21);
v___y_1335_ = v___x_1413_;
goto v___jp_1334_;
}
v___jp_1396_:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1397_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__19, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__19);
v___x_1398_ = l_List_appendTR___redArg(v___x_1397_, v_norm_1395_);
v___y_1335_ = v___x_1398_;
goto v___jp_1334_;
}
}
else
{
lean_del_object(v___x_1332_);
lean_dec(v_snd_1330_);
lean_dec(v_fst_1329_);
lean_dec(v_snd_1325_);
return v_st_1323_;
}
}
else
{
lean_del_object(v___x_1332_);
lean_dec(v_snd_1330_);
lean_dec(v_fst_1329_);
lean_dec(v_snd_1325_);
return v_st_1323_;
}
}
}
else
{
lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1430_; 
lean_inc(v_fst_1327_);
lean_inc(v_fst_1326_);
lean_del_object(v___x_1332_);
lean_dec(v_fst_1329_);
v_isSharedCheck_1430_ = !lean_is_exclusive(v_st_1323_);
if (v_isSharedCheck_1430_ == 0)
{
lean_object* v_unused_1431_; lean_object* v_unused_1432_; 
v_unused_1431_ = lean_ctor_get(v_st_1323_, 1);
lean_dec(v_unused_1431_);
v_unused_1432_ = lean_ctor_get(v_st_1323_, 0);
lean_dec(v_unused_1432_);
v___x_1415_ = v_st_1323_;
v_isShared_1416_ = v_isSharedCheck_1430_;
goto v_resetjp_1414_;
}
else
{
lean_dec(v_st_1323_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1430_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1427_; 
v_isSharedCheck_1427_ = !lean_is_exclusive(v_snd_1325_);
if (v_isSharedCheck_1427_ == 0)
{
lean_object* v_unused_1428_; lean_object* v_unused_1429_; 
v_unused_1428_ = lean_ctor_get(v_snd_1325_, 1);
lean_dec(v_unused_1428_);
v_unused_1429_ = lean_ctor_get(v_snd_1325_, 0);
lean_dec(v_unused_1429_);
v___x_1418_ = v_snd_1325_;
v_isShared_1419_ = v_isSharedCheck_1427_;
goto v_resetjp_1417_;
}
else
{
lean_dec(v_snd_1325_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1427_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
lean_object* v___x_1420_; lean_object* v___x_1422_; 
v___x_1420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1420_, 0, v_snd_1330_);
if (v_isShared_1419_ == 0)
{
lean_ctor_set(v___x_1418_, 1, v___x_1420_);
v___x_1422_ = v___x_1418_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v_fst_1327_);
lean_ctor_set(v_reuseFailAlloc_1426_, 1, v___x_1420_);
v___x_1422_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
lean_object* v___x_1424_; 
if (v_isShared_1416_ == 0)
{
lean_ctor_set(v___x_1415_, 1, v___x_1422_);
v___x_1424_ = v___x_1415_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_fst_1326_);
lean_ctor_set(v_reuseFailAlloc_1425_, 1, v___x_1422_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
}
}
}
v___jp_1334_:
{
lean_object* v___x_1336_; lean_object* v___x_1338_; 
v___x_1336_ = lp_lean_x2dftml_LeanFtml_omSetB(v_fst_1326_, v_fst_1329_, v___y_1335_);
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 1, v_snd_1325_);
lean_ctor_set(v___x_1332_, 0, v___x_1336_);
v___x_1338_ = v___x_1332_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v___x_1336_);
lean_ctor_set(v_reuseFailAlloc_1339_, 1, v_snd_1325_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___lam__0(lean_object* v_fst_1434_, lean_object* v_k_1435_){
_start:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1436_ = lp_lean_x2dftml_LeanFtml_litBytes(v_k_1435_);
v___x_1437_ = lp_lean_x2dftml_LeanFtml_lookupB(v_fst_1434_, v___x_1436_);
lean_dec(v___x_1436_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___lam__0___boxed(lean_object* v_fst_1438_, lean_object* v_k_1439_){
_start:
{
lean_object* v_res_1440_; 
v_res_1440_ = lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___lam__0(v_fst_1438_, v_k_1439_);
lean_dec(v_fst_1438_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildAnchorAttrs_spec__0(lean_object* v_x_1441_, lean_object* v_x_1442_){
_start:
{
if (lean_obj_tag(v_x_1442_) == 0)
{
return v_x_1441_;
}
else
{
lean_object* v_head_1443_; lean_object* v_tail_1444_; lean_object* v___x_1445_; 
v_head_1443_ = lean_ctor_get(v_x_1442_, 0);
lean_inc(v_head_1443_);
v_tail_1444_ = lean_ctor_get(v_x_1442_, 1);
lean_inc(v_tail_1444_);
lean_dec_ref_known(v_x_1442_, 2);
v___x_1445_ = lp_lean_x2dftml_LeanFtml_anchorAttrStep(v_x_1441_, v_head_1443_);
v_x_1441_ = v___x_1445_;
v_x_1442_ = v_tail_1444_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__2(lean_object* v_a_1456_, lean_object* v_a_1457_){
_start:
{
if (lean_obj_tag(v_a_1456_) == 0)
{
lean_object* v___x_1458_; 
v___x_1458_ = lean_array_to_list(v_a_1457_);
return v___x_1458_;
}
else
{
lean_object* v_head_1459_; lean_object* v_tail_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1475_; 
v_head_1459_ = lean_ctor_get(v_a_1456_, 0);
v_tail_1460_ = lean_ctor_get(v_a_1456_, 1);
v_isSharedCheck_1475_ = !lean_is_exclusive(v_a_1456_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1462_ = v_a_1456_;
v_isShared_1463_ = v_isSharedCheck_1475_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_tail_1460_);
lean_inc(v_head_1459_);
lean_dec(v_a_1456_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1475_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___y_1465_; lean_object* v___x_1468_; uint8_t v___x_1469_; 
v___x_1468_ = lean_unsigned_to_nat(32u);
v___x_1469_ = lean_nat_dec_eq(v_head_1459_, v___x_1468_);
if (v___x_1469_ == 0)
{
lean_object* v___x_1470_; lean_object* v___x_1472_; 
v___x_1470_ = lean_box(0);
if (v_isShared_1463_ == 0)
{
lean_ctor_set(v___x_1462_, 1, v___x_1470_);
v___x_1472_ = v___x_1462_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_head_1459_);
lean_ctor_set(v_reuseFailAlloc_1473_, 1, v___x_1470_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
v___y_1465_ = v___x_1472_;
goto v___jp_1464_;
}
}
else
{
lean_object* v___x_1474_; 
lean_del_object(v___x_1462_);
lean_dec(v_head_1459_);
v___x_1474_ = ((lean_object*)(lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__2___closed__2));
v___y_1465_ = v___x_1474_;
goto v___jp_1464_;
}
v___jp_1464_:
{
lean_object* v___x_1466_; 
v___x_1466_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1457_, v___y_1465_);
v_a_1456_ = v_tail_1460_;
v_a_1457_ = v___x_1466_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00List_filterMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__1_spec__1(lean_object* v_fst_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_){
_start:
{
if (lean_obj_tag(v_a_1477_) == 0)
{
lean_object* v___x_1479_; 
v___x_1479_ = lean_array_to_list(v_a_1478_);
return v___x_1479_;
}
else
{
lean_object* v_head_1480_; lean_object* v_tail_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1494_; 
v_head_1480_ = lean_ctor_get(v_a_1477_, 0);
v_tail_1481_ = lean_ctor_get(v_a_1477_, 1);
v_isSharedCheck_1494_ = !lean_is_exclusive(v_a_1477_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1483_ = v_a_1477_;
v_isShared_1484_ = v_isSharedCheck_1494_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_tail_1481_);
lean_inc(v_head_1480_);
lean_dec(v_a_1477_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1494_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1485_ = lp_lean_x2dftml_LeanFtml_litBytes(v_head_1480_);
v___x_1486_ = lp_lean_x2dftml_LeanFtml_lookupB(v_fst_1476_, v___x_1485_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_dec(v___x_1485_);
lean_del_object(v___x_1483_);
v_a_1477_ = v_tail_1481_;
goto _start;
}
else
{
lean_object* v_val_1488_; lean_object* v___x_1490_; 
v_val_1488_ = lean_ctor_get(v___x_1486_, 0);
lean_inc(v_val_1488_);
lean_dec_ref_known(v___x_1486_, 1);
if (v_isShared_1484_ == 0)
{
lean_ctor_set_tag(v___x_1483_, 0);
lean_ctor_set(v___x_1483_, 1, v_val_1488_);
lean_ctor_set(v___x_1483_, 0, v___x_1485_);
v___x_1490_ = v___x_1483_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v___x_1485_);
lean_ctor_set(v_reuseFailAlloc_1493_, 1, v_val_1488_);
v___x_1490_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
lean_object* v___x_1491_; 
v___x_1491_ = lean_array_push(v_a_1478_, v___x_1490_);
v_a_1477_ = v_tail_1481_;
v_a_1478_ = v___x_1491_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00List_filterMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__1_spec__1___boxed(lean_object* v_fst_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_){
_start:
{
lean_object* v_res_1498_; 
v_res_1498_ = lp_lean_x2dftml_List_filterMapTR_go___at___00List_filterMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__1_spec__1(v_fst_1495_, v_a_1496_, v_a_1497_);
lean_dec(v_fst_1495_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__1(lean_object* v_fst_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_){
_start:
{
if (lean_obj_tag(v_a_1500_) == 0)
{
lean_object* v___x_1502_; 
v___x_1502_ = lean_array_to_list(v_a_1501_);
return v___x_1502_;
}
else
{
lean_object* v_head_1503_; lean_object* v_tail_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1517_; 
v_head_1503_ = lean_ctor_get(v_a_1500_, 0);
v_tail_1504_ = lean_ctor_get(v_a_1500_, 1);
v_isSharedCheck_1517_ = !lean_is_exclusive(v_a_1500_);
if (v_isSharedCheck_1517_ == 0)
{
v___x_1506_ = v_a_1500_;
v_isShared_1507_ = v_isSharedCheck_1517_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_tail_1504_);
lean_inc(v_head_1503_);
lean_dec(v_a_1500_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1517_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1508_ = lp_lean_x2dftml_LeanFtml_litBytes(v_head_1503_);
v___x_1509_ = lp_lean_x2dftml_LeanFtml_lookupB(v_fst_1499_, v___x_1508_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v___x_1510_; 
lean_dec(v___x_1508_);
lean_del_object(v___x_1506_);
v___x_1510_ = lp_lean_x2dftml_List_filterMapTR_go___at___00List_filterMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__1_spec__1(v_fst_1499_, v_tail_1504_, v_a_1501_);
return v___x_1510_;
}
else
{
lean_object* v_val_1511_; lean_object* v___x_1513_; 
v_val_1511_ = lean_ctor_get(v___x_1509_, 0);
lean_inc(v_val_1511_);
lean_dec_ref_known(v___x_1509_, 1);
if (v_isShared_1507_ == 0)
{
lean_ctor_set_tag(v___x_1506_, 0);
lean_ctor_set(v___x_1506_, 1, v_val_1511_);
lean_ctor_set(v___x_1506_, 0, v___x_1508_);
v___x_1513_ = v___x_1506_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v___x_1508_);
lean_ctor_set(v_reuseFailAlloc_1516_, 1, v_val_1511_);
v___x_1513_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1514_ = lean_array_push(v_a_1501_, v___x_1513_);
v___x_1515_ = lp_lean_x2dftml_List_filterMapTR_go___at___00List_filterMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__1_spec__1(v_fst_1499_, v_tail_1504_, v___x_1514_);
return v___x_1515_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__1___boxed(lean_object* v_fst_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__1(v_fst_1518_, v_a_1519_, v_a_1520_);
lean_dec(v_fst_1518_);
return v_res_1521_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__7(void){
_start:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1540_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__6));
v___x_1541_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1540_);
return v___x_1541_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__8(void){
_start:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; 
v___x_1542_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__7, &lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__7);
v___x_1543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1542_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs(lean_object* v_attrStr_1550_){
_start:
{
lean_object* v___y_1552_; lean_object* v___y_1553_; lean_object* v___y_1558_; lean_object* v___y_1559_; lean_object* v___y_1560_; lean_object* v_fst_1561_; lean_object* v_snd_1562_; lean_object* v___y_1576_; lean_object* v___y_1577_; lean_object* v___y_1578_; lean_object* v___y_1579_; lean_object* v___y_1580_; lean_object* v___y_1589_; lean_object* v___y_1590_; lean_object* v___y_1591_; lean_object* v___y_1592_; uint8_t v_fst_1593_; lean_object* v_snd_1594_; lean_object* v___x_1602_; uint8_t v___x_1603_; uint8_t v___x_1604_; lean_object* v___y_1606_; 
v___x_1602_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_attrStr_1550_);
v___x_1603_ = l_List_isEmpty___redArg(v___x_1602_);
lean_dec(v___x_1602_);
v___x_1604_ = 1;
if (v___x_1603_ == 0)
{
lean_object* v___x_1625_; 
v___x_1625_ = lp_lean_x2dftml_LeanFtml_getAttrsBytes(v_attrStr_1550_);
v___y_1606_ = v___x_1625_;
goto v___jp_1605_;
}
else
{
lean_object* v___x_1626_; 
v___x_1626_ = lean_box(0);
v___y_1606_ = v___x_1626_;
goto v___jp_1605_;
}
v___jp_1551_:
{
lean_object* v_ordered_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v_ordered_1554_ = l_List_appendTR___redArg(v___y_1552_, v___y_1553_);
v___x_1555_ = lean_box(0);
v___x_1556_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_tocProcess_spec__1(v_ordered_1554_, v___x_1555_);
return v___x_1556_;
}
v___jp_1557_:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1563_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__4));
v___x_1564_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__5));
v___x_1565_ = lp_lean_x2dftml_List_filterMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__1(v___y_1560_, v___x_1563_, v___x_1564_);
lean_dec(v___y_1560_);
v___x_1566_ = l_List_appendTR___redArg(v___x_1565_, v___y_1558_);
v___x_1567_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__1, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__1);
v___x_1568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1567_);
lean_ctor_set(v___x_1568_, 1, v_fst_1561_);
lean_inc(v___y_1559_);
v___x_1569_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
lean_ctor_set(v___x_1569_, 1, v___y_1559_);
v___x_1570_ = l_List_appendTR___redArg(v___x_1566_, v___x_1569_);
if (lean_obj_tag(v_snd_1562_) == 0)
{
v___y_1552_ = v___x_1570_;
v___y_1553_ = v___y_1559_;
goto v___jp_1551_;
}
else
{
lean_object* v_val_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; 
v_val_1571_ = lean_ctor_get(v_snd_1562_, 0);
lean_inc(v_val_1571_);
lean_dec_ref_known(v_snd_1562_, 1);
v___x_1572_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__10, &lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__10);
v___x_1573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1572_);
lean_ctor_set(v___x_1573_, 1, v_val_1571_);
v___x_1574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
lean_ctor_set(v___x_1574_, 1, v___y_1559_);
v___y_1552_ = v___x_1570_;
v___y_1553_ = v___x_1574_;
goto v___jp_1551_;
}
}
v___jp_1575_:
{
lean_object* v___x_1581_; uint8_t v___x_1582_; 
v___x_1581_ = lean_unsigned_to_nat(255u);
v___x_1582_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___x_1581_, v___y_1578_);
if (v___x_1582_ == 0)
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1583_ = lp_lean_x2dftml_LeanFtml_normalizeAttrValue(v___y_1578_);
v___x_1584_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonTail___closed__0));
v___x_1585_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_buildAnchorAttrs_spec__2(v___x_1583_, v___x_1584_);
v___x_1586_ = lp_lean_x2dftml_LeanFtml_pctEncodeNonAscii(v___x_1585_);
v___y_1558_ = v___y_1576_;
v___y_1559_ = v___y_1577_;
v___y_1560_ = v___y_1579_;
v_fst_1561_ = v___x_1586_;
v_snd_1562_ = v___y_1580_;
goto v___jp_1557_;
}
else
{
lean_object* v___x_1587_; 
lean_dec(v___y_1578_);
v___x_1587_ = lean_box(0);
v___y_1558_ = v___y_1576_;
v___y_1559_ = v___y_1577_;
v___y_1560_ = v___y_1579_;
v_fst_1561_ = v___x_1587_;
v_snd_1562_ = v___y_1580_;
goto v___jp_1557_;
}
}
v___jp_1588_:
{
uint8_t v___x_1595_; 
v___x_1595_ = lp_lean_x2dftml_LeanFtml_isVerbatimHref(v_snd_1594_);
if (v___x_1595_ == 0)
{
lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1596_ = lp_lean_x2dftml_LeanFtml_normalizeUnsafeHref(v_snd_1594_);
v___x_1597_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__9));
v___x_1598_ = lean_apply_1(v___y_1591_, v___x_1597_);
v___y_1558_ = v___y_1589_;
v___y_1559_ = v___y_1590_;
v___y_1560_ = v___y_1592_;
v_fst_1561_ = v___x_1596_;
v_snd_1562_ = v___x_1598_;
goto v___jp_1557_;
}
else
{
lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1599_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__9));
v___x_1600_ = lean_apply_1(v___y_1591_, v___x_1599_);
if (lean_obj_tag(v___x_1600_) == 0)
{
if (v_fst_1593_ == 0)
{
v___y_1576_ = v___y_1589_;
v___y_1577_ = v___y_1590_;
v___y_1578_ = v_snd_1594_;
v___y_1579_ = v___y_1592_;
v___y_1580_ = v___x_1600_;
goto v___jp_1575_;
}
else
{
lean_object* v___x_1601_; 
v___x_1601_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__8, &lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__8);
v___y_1576_ = v___y_1589_;
v___y_1577_ = v___y_1590_;
v___y_1578_ = v_snd_1594_;
v___y_1579_ = v___y_1592_;
v___y_1580_ = v___x_1601_;
goto v___jp_1575_;
}
}
else
{
v___y_1576_ = v___y_1589_;
v___y_1577_ = v___y_1590_;
v___y_1578_ = v_snd_1594_;
v___y_1579_ = v___y_1592_;
v___y_1580_ = v___x_1600_;
goto v___jp_1575_;
}
}
}
v___jp_1605_:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v_snd_1610_; lean_object* v_fst_1611_; lean_object* v_fst_1612_; lean_object* v_snd_1613_; lean_object* v_fixedVal_1614_; 
v___x_1607_ = lean_box(0);
v___x_1608_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___closed__10));
v___x_1609_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_buildAnchorAttrs_spec__0(v___x_1608_, v___y_1606_);
v_snd_1610_ = lean_ctor_get(v___x_1609_, 1);
lean_inc(v_snd_1610_);
v_fst_1611_ = lean_ctor_get(v___x_1609_, 0);
lean_inc_n(v_fst_1611_, 2);
lean_dec_ref(v___x_1609_);
v_fst_1612_ = lean_ctor_get(v_snd_1610_, 0);
lean_inc(v_fst_1612_);
v_snd_1613_ = lean_ctor_get(v_snd_1610_, 1);
lean_inc(v_snd_1613_);
lean_dec(v_snd_1610_);
v_fixedVal_1614_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___lam__0___boxed), 2, 1);
lean_closure_set(v_fixedVal_1614_, 0, v_fst_1611_);
if (lean_obj_tag(v_snd_1613_) == 0)
{
lean_object* v___x_1615_; lean_object* v___x_1616_; 
lean_dec_ref(v_fixedVal_1614_);
v___x_1615_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__9));
v___x_1616_ = lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___lam__0(v_fst_1611_, v___x_1615_);
v___y_1558_ = v_fst_1612_;
v___y_1559_ = v___x_1607_;
v___y_1560_ = v_fst_1611_;
v_fst_1561_ = v___x_1607_;
v_snd_1562_ = v___x_1616_;
goto v___jp_1557_;
}
else
{
lean_object* v_val_1617_; uint8_t v___x_1618_; 
v_val_1617_ = lean_ctor_get(v_snd_1613_, 0);
lean_inc(v_val_1617_);
lean_dec_ref_known(v_snd_1613_, 1);
v___x_1618_ = l_List_isEmpty___redArg(v_val_1617_);
if (v___x_1618_ == 0)
{
if (lean_obj_tag(v_val_1617_) == 1)
{
lean_object* v_head_1619_; lean_object* v_tail_1620_; lean_object* v___x_1621_; uint8_t v___x_1622_; 
v_head_1619_ = lean_ctor_get(v_val_1617_, 0);
v_tail_1620_ = lean_ctor_get(v_val_1617_, 1);
v___x_1621_ = lean_unsigned_to_nat(42u);
v___x_1622_ = lean_nat_dec_eq(v_head_1619_, v___x_1621_);
if (v___x_1622_ == 0)
{
v___y_1589_ = v_fst_1612_;
v___y_1590_ = v___x_1607_;
v___y_1591_ = v_fixedVal_1614_;
v___y_1592_ = v_fst_1611_;
v_fst_1593_ = v___x_1618_;
v_snd_1594_ = v_val_1617_;
goto v___jp_1588_;
}
else
{
lean_inc(v_tail_1620_);
lean_dec_ref_known(v_val_1617_, 2);
v___y_1589_ = v_fst_1612_;
v___y_1590_ = v___x_1607_;
v___y_1591_ = v_fixedVal_1614_;
v___y_1592_ = v_fst_1611_;
v_fst_1593_ = v___x_1604_;
v_snd_1594_ = v_tail_1620_;
goto v___jp_1588_;
}
}
else
{
v___y_1589_ = v_fst_1612_;
v___y_1590_ = v___x_1607_;
v___y_1591_ = v_fixedVal_1614_;
v___y_1592_ = v_fst_1611_;
v_fst_1593_ = v___x_1618_;
v_snd_1594_ = v_val_1617_;
goto v___jp_1588_;
}
}
else
{
lean_object* v___x_1623_; lean_object* v___x_1624_; 
lean_dec(v_val_1617_);
lean_dec_ref(v_fixedVal_1614_);
v___x_1623_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorAttrStep___closed__9));
v___x_1624_ = lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___lam__0(v_fst_1611_, v___x_1623_);
v___y_1558_ = v_fst_1612_;
v___y_1559_ = v___x_1607_;
v___y_1560_ = v_fst_1611_;
v_fst_1561_ = v___x_1607_;
v_snd_1562_ = v___x_1624_;
goto v___jp_1557_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_buildAnchorAttrs___boxed(lean_object* v_attrStr_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = lp_lean_x2dftml_LeanFtml_buildAnchorAttrs(v_attrStr_1627_);
lean_dec(v_attrStr_1627_);
return v_res_1628_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__1(void){
_start:
{
lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1630_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__0));
v___x_1631_ = l_String_toListImpl(v___x_1630_);
return v___x_1631_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__2(void){
_start:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1632_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__1, &lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__1);
v___x_1633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1632_);
return v___x_1633_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__3(void){
_start:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1634_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__2, &lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__2);
v___x_1635_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8, &lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8);
v___x_1636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1635_);
lean_ctor_set(v___x_1636_, 1, v___x_1634_);
return v___x_1636_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__5(void){
_start:
{
lean_object* v___x_1638_; lean_object* v___x_1639_; 
v___x_1638_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__4));
v___x_1639_ = l_String_toListImpl(v___x_1638_);
return v___x_1639_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorStartOpts(lean_object* v_attrs_1640_){
_start:
{
lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1641_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__3, &lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__3);
v___x_1642_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__5, &lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_anchorStartOpts___closed__5);
v___x_1643_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1643_, 0, v_attrs_1640_);
v___x_1644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1642_);
lean_ctor_set(v___x_1644_, 1, v___x_1643_);
v___x_1645_ = lean_box(0);
v___x_1646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1646_, 0, v___x_1644_);
lean_ctor_set(v___x_1646_, 1, v___x_1645_);
v___x_1647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1641_);
lean_ctor_set(v___x_1647_, 1, v___x_1646_);
return v___x_1647_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__1(void){
_start:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1649_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__0));
v___x_1650_ = l_String_toListImpl(v___x_1649_);
return v___x_1650_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__2(void){
_start:
{
lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1651_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__1, &lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__1);
v___x_1652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1651_);
return v___x_1652_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__3(void){
_start:
{
lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1653_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__2, &lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__2);
v___x_1654_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8, &lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8);
v___x_1655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1654_);
lean_ctor_set(v___x_1655_, 1, v___x_1653_);
return v___x_1655_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__4(void){
_start:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1656_ = lean_box(0);
v___x_1657_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__3, &lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__3);
v___x_1658_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1657_);
lean_ctor_set(v___x_1658_, 1, v___x_1656_);
return v___x_1658_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorEndOpts(void){
_start:
{
lean_object* v___x_1659_; 
v___x_1659_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__4, &lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_anchorEndOpts___closed__4);
return v___x_1659_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isAnchorNameByte(lean_object* v_b_1660_){
_start:
{
lean_object* v___x_1680_; uint8_t v___x_1681_; 
v___x_1680_ = lean_unsigned_to_nat(48u);
v___x_1681_ = lean_nat_dec_le(v___x_1680_, v_b_1660_);
if (v___x_1681_ == 0)
{
goto v___jp_1675_;
}
else
{
lean_object* v___x_1682_; uint8_t v___x_1683_; 
v___x_1682_ = lean_unsigned_to_nat(57u);
v___x_1683_ = lean_nat_dec_le(v_b_1660_, v___x_1682_);
if (v___x_1683_ == 0)
{
goto v___jp_1675_;
}
else
{
return v___x_1683_;
}
}
v___jp_1661_:
{
lean_object* v___x_1662_; uint8_t v___x_1663_; 
v___x_1662_ = lean_unsigned_to_nat(45u);
v___x_1663_ = lean_nat_dec_eq(v_b_1660_, v___x_1662_);
if (v___x_1663_ == 0)
{
lean_object* v___x_1664_; uint8_t v___x_1665_; 
v___x_1664_ = lean_unsigned_to_nat(95u);
v___x_1665_ = lean_nat_dec_eq(v_b_1660_, v___x_1664_);
if (v___x_1665_ == 0)
{
lean_object* v___x_1666_; uint8_t v___x_1667_; 
v___x_1666_ = lean_unsigned_to_nat(46u);
v___x_1667_ = lean_nat_dec_eq(v_b_1660_, v___x_1666_);
if (v___x_1667_ == 0)
{
lean_object* v___x_1668_; uint8_t v___x_1669_; 
v___x_1668_ = lean_unsigned_to_nat(37u);
v___x_1669_ = lean_nat_dec_eq(v_b_1660_, v___x_1668_);
return v___x_1669_;
}
else
{
return v___x_1667_;
}
}
else
{
return v___x_1665_;
}
}
else
{
return v___x_1663_;
}
}
v___jp_1670_:
{
lean_object* v___x_1671_; uint8_t v___x_1672_; 
v___x_1671_ = lean_unsigned_to_nat(97u);
v___x_1672_ = lean_nat_dec_le(v___x_1671_, v_b_1660_);
if (v___x_1672_ == 0)
{
goto v___jp_1661_;
}
else
{
lean_object* v___x_1673_; uint8_t v___x_1674_; 
v___x_1673_ = lean_unsigned_to_nat(122u);
v___x_1674_ = lean_nat_dec_le(v_b_1660_, v___x_1673_);
if (v___x_1674_ == 0)
{
goto v___jp_1661_;
}
else
{
return v___x_1674_;
}
}
}
v___jp_1675_:
{
lean_object* v___x_1676_; uint8_t v___x_1677_; 
v___x_1676_ = lean_unsigned_to_nat(65u);
v___x_1677_ = lean_nat_dec_le(v___x_1676_, v_b_1660_);
if (v___x_1677_ == 0)
{
goto v___jp_1670_;
}
else
{
lean_object* v___x_1678_; uint8_t v___x_1679_; 
v___x_1678_ = lean_unsigned_to_nat(90u);
v___x_1679_ = lean_nat_dec_le(v_b_1660_, v___x_1678_);
if (v___x_1679_ == 0)
{
goto v___jp_1670_;
}
else
{
return v___x_1679_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isAnchorNameByte___boxed(lean_object* v_b_1684_){
_start:
{
uint8_t v_res_1685_; lean_object* v_r_1686_; 
v_res_1685_ = lp_lean_x2dftml_LeanFtml_isAnchorNameByte(v_b_1684_);
lean_dec(v_b_1684_);
v_r_1686_ = lean_box(v_res_1685_);
return v_r_1686_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_namedAnchorMatchAt_spec__0(uint8_t v___y_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_){
_start:
{
if (lean_obj_tag(v_a_1688_) == 0)
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1690_ = l_List_reverse___redArg(v_a_1689_);
v___x_1691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
lean_ctor_set(v___x_1691_, 1, v_a_1688_);
return v___x_1691_;
}
else
{
lean_object* v_head_1692_; lean_object* v_tail_1693_; uint8_t v___y_1698_; lean_object* v___x_1701_; uint8_t v___x_1702_; 
v_head_1692_ = lean_ctor_get(v_a_1688_, 0);
v_tail_1693_ = lean_ctor_get(v_a_1688_, 1);
v___x_1701_ = lean_unsigned_to_nat(10u);
v___x_1702_ = lean_nat_dec_eq(v_head_1692_, v___x_1701_);
if (v___x_1702_ == 0)
{
lean_object* v___x_1703_; uint8_t v___x_1704_; 
v___x_1703_ = lean_unsigned_to_nat(93u);
v___x_1704_ = lean_nat_dec_eq(v_head_1692_, v___x_1703_);
if (v___x_1704_ == 0)
{
lean_inc(v_tail_1693_);
lean_inc(v_head_1692_);
lean_dec_ref_known(v_a_1688_, 2);
goto v___jp_1694_;
}
else
{
v___y_1698_ = v___y_1687_;
goto v___jp_1697_;
}
}
else
{
v___y_1698_ = v___y_1687_;
goto v___jp_1697_;
}
v___jp_1694_:
{
lean_object* v___x_1695_; 
v___x_1695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1695_, 0, v_head_1692_);
lean_ctor_set(v___x_1695_, 1, v_a_1689_);
v_a_1688_ = v_tail_1693_;
v_a_1689_ = v___x_1695_;
goto _start;
}
v___jp_1697_:
{
if (v___y_1698_ == 0)
{
lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1699_ = l_List_reverse___redArg(v_a_1689_);
v___x_1700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1700_, 0, v___x_1699_);
lean_ctor_set(v___x_1700_, 1, v_a_1688_);
return v___x_1700_;
}
else
{
lean_inc(v_tail_1693_);
lean_inc(v_head_1692_);
lean_dec_ref_known(v_a_1688_, 2);
goto v___jp_1694_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_namedAnchorMatchAt_spec__0___boxed(lean_object* v___y_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_){
_start:
{
uint8_t v___y_747__boxed_1708_; lean_object* v_res_1709_; 
v___y_747__boxed_1708_ = lean_unbox(v___y_1705_);
v_res_1709_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_namedAnchorMatchAt_spec__0(v___y_747__boxed_1708_, v_a_1706_, v_a_1707_);
return v_res_1709_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_namedAnchorMatchAt___closed__1(void){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1711_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_namedAnchorMatchAt___closed__0));
v___x_1712_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1711_);
return v___x_1712_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorMatchAt(lean_object* v_src_1713_){
_start:
{
lean_object* v___y_1715_; uint8_t v_fst_1716_; lean_object* v_snd_1717_; lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1728_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_namedAnchorMatchAt___closed__1, &lp_lean_x2dftml_LeanFtml_namedAnchorMatchAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_namedAnchorMatchAt___closed__1);
lean_inc(v_src_1713_);
v___x_1729_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1728_, v_src_1713_);
if (lean_obj_tag(v___x_1729_) == 0)
{
lean_object* v___x_1730_; 
lean_dec(v_src_1713_);
v___x_1730_ = lean_box(0);
return v___x_1730_;
}
else
{
lean_object* v_val_1731_; 
v_val_1731_ = lean_ctor_get(v___x_1729_, 0);
lean_inc(v_val_1731_);
lean_dec_ref_known(v___x_1729_, 1);
if (lean_obj_tag(v_val_1731_) == 0)
{
lean_object* v___x_1732_; 
lean_dec(v_src_1713_);
v___x_1732_ = lean_box(0);
return v___x_1732_;
}
else
{
lean_object* v_head_1733_; lean_object* v_tail_1734_; uint8_t v___y_1736_; lean_object* v___x_1755_; uint8_t v___x_1756_; 
v_head_1733_ = lean_ctor_get(v_val_1731_, 0);
lean_inc(v_head_1733_);
v_tail_1734_ = lean_ctor_get(v_val_1731_, 1);
lean_inc(v_tail_1734_);
lean_dec_ref_known(v_val_1731_, 2);
v___x_1755_ = lean_unsigned_to_nat(32u);
v___x_1756_ = lean_nat_dec_eq(v_head_1733_, v___x_1755_);
if (v___x_1756_ == 0)
{
lean_object* v___x_1757_; uint8_t v___x_1758_; 
v___x_1757_ = lean_unsigned_to_nat(9u);
v___x_1758_ = lean_nat_dec_eq(v_head_1733_, v___x_1757_);
lean_dec(v_head_1733_);
if (v___x_1758_ == 0)
{
lean_object* v___x_1759_; 
lean_dec(v_tail_1734_);
lean_dec(v_src_1713_);
v___x_1759_ = lean_box(0);
return v___x_1759_;
}
else
{
v___y_1736_ = v___x_1756_;
goto v___jp_1735_;
}
}
else
{
uint8_t v___x_1760_; 
lean_dec(v_head_1733_);
v___x_1760_ = 0;
v___y_1736_ = v___x_1760_;
goto v___jp_1735_;
}
v___jp_1735_:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v_snd_1739_; 
v___x_1737_ = lean_box(0);
v___x_1738_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_namedAnchorMatchAt_spec__0(v___y_1736_, v_tail_1734_, v___x_1737_);
v_snd_1739_ = lean_ctor_get(v___x_1738_, 1);
lean_inc(v_snd_1739_);
if (lean_obj_tag(v_snd_1739_) == 1)
{
lean_object* v_fst_1740_; lean_object* v_head_1741_; lean_object* v_tail_1742_; lean_object* v___x_1743_; uint8_t v___x_1744_; 
v_fst_1740_ = lean_ctor_get(v___x_1738_, 0);
lean_inc(v_fst_1740_);
lean_dec_ref(v___x_1738_);
v_head_1741_ = lean_ctor_get(v_snd_1739_, 0);
lean_inc(v_head_1741_);
v_tail_1742_ = lean_ctor_get(v_snd_1739_, 1);
lean_inc(v_tail_1742_);
lean_dec_ref_known(v_snd_1739_, 2);
v___x_1743_ = lean_unsigned_to_nat(93u);
v___x_1744_ = lean_nat_dec_eq(v_head_1741_, v___x_1743_);
lean_dec(v_head_1741_);
if (v___x_1744_ == 0)
{
lean_object* v___x_1745_; 
lean_dec(v_tail_1742_);
lean_dec(v_fst_1740_);
lean_dec(v_src_1713_);
v___x_1745_ = lean_box(0);
return v___x_1745_;
}
else
{
if (lean_obj_tag(v_tail_1742_) == 1)
{
lean_object* v_head_1746_; lean_object* v_tail_1747_; uint8_t v___x_1748_; 
v_head_1746_ = lean_ctor_get(v_tail_1742_, 0);
lean_inc(v_head_1746_);
v_tail_1747_ = lean_ctor_get(v_tail_1742_, 1);
lean_inc(v_tail_1747_);
lean_dec_ref_known(v_tail_1742_, 2);
v___x_1748_ = lean_nat_dec_eq(v_head_1746_, v___x_1743_);
lean_dec(v_head_1746_);
if (v___x_1748_ == 0)
{
lean_object* v___x_1749_; 
lean_dec(v_tail_1747_);
lean_dec(v_fst_1740_);
lean_dec(v_src_1713_);
v___x_1749_ = lean_box(0);
return v___x_1749_;
}
else
{
if (lean_obj_tag(v_tail_1747_) == 1)
{
lean_object* v_head_1750_; lean_object* v_tail_1751_; uint8_t v___x_1752_; 
v_head_1750_ = lean_ctor_get(v_tail_1747_, 0);
v_tail_1751_ = lean_ctor_get(v_tail_1747_, 1);
v___x_1752_ = lean_nat_dec_eq(v_head_1750_, v___x_1743_);
if (v___x_1752_ == 0)
{
v___y_1715_ = v_fst_1740_;
v_fst_1716_ = v___y_1736_;
v_snd_1717_ = v_tail_1747_;
goto v___jp_1714_;
}
else
{
lean_inc(v_tail_1751_);
lean_dec_ref_known(v_tail_1747_, 2);
v___y_1715_ = v_fst_1740_;
v_fst_1716_ = v___x_1752_;
v_snd_1717_ = v_tail_1751_;
goto v___jp_1714_;
}
}
else
{
v___y_1715_ = v_fst_1740_;
v_fst_1716_ = v___y_1736_;
v_snd_1717_ = v_tail_1747_;
goto v___jp_1714_;
}
}
}
else
{
lean_object* v___x_1753_; 
lean_dec(v_tail_1742_);
lean_dec(v_fst_1740_);
lean_dec(v_src_1713_);
v___x_1753_ = lean_box(0);
return v___x_1753_;
}
}
}
else
{
lean_object* v___x_1754_; 
lean_dec(v_snd_1739_);
lean_dec_ref(v___x_1738_);
lean_dec(v_src_1713_);
v___x_1754_ = lean_box(0);
return v___x_1754_;
}
}
}
}
v___jp_1714_:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1718_ = l_List_lengthTR___redArg(v_src_1713_);
v___x_1719_ = l_List_lengthTR___redArg(v_snd_1717_);
v___x_1720_ = lean_nat_sub(v___x_1718_, v___x_1719_);
lean_dec(v___x_1719_);
lean_dec(v___x_1718_);
v___x_1721_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonTail___closed__0));
lean_inc(v_src_1713_);
v___x_1722_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_1713_, v_src_1713_, v___x_1720_, v___x_1721_);
lean_dec(v_src_1713_);
v___x_1723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1722_);
lean_ctor_set(v___x_1723_, 1, v_snd_1717_);
v___x_1724_ = lean_box(v_fst_1716_);
v___x_1725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1725_, 0, v___x_1724_);
lean_ctor_set(v___x_1725_, 1, v___x_1723_);
v___x_1726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1726_, 0, v___y_1715_);
lean_ctor_set(v___x_1726_, 1, v___x_1725_);
v___x_1727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1726_);
return v___x_1727_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_all___at___00LeanFtml_namedAnchorProcess_spec__0(lean_object* v_x_1761_){
_start:
{
if (lean_obj_tag(v_x_1761_) == 0)
{
uint8_t v___x_1762_; 
v___x_1762_ = 1;
return v___x_1762_;
}
else
{
lean_object* v_head_1763_; lean_object* v_tail_1764_; uint8_t v___x_1765_; 
v_head_1763_ = lean_ctor_get(v_x_1761_, 0);
v_tail_1764_ = lean_ctor_get(v_x_1761_, 1);
v___x_1765_ = lp_lean_x2dftml_LeanFtml_isAnchorNameByte(v_head_1763_);
if (v___x_1765_ == 0)
{
return v___x_1765_;
}
else
{
v_x_1761_ = v_tail_1764_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_all___at___00LeanFtml_namedAnchorProcess_spec__0___boxed(lean_object* v_x_1767_){
_start:
{
uint8_t v_res_1768_; lean_object* v_r_1769_; 
v_res_1768_ = lp_lean_x2dftml_List_all___at___00LeanFtml_namedAnchorProcess_spec__0(v_x_1767_);
lean_dec(v_x_1767_);
v_r_1769_ = lean_box(v_res_1768_);
return v_r_1769_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_namedAnchorProcess_spec__1(lean_object* v_l_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_){
_start:
{
if (lean_obj_tag(v_a_1771_) == 0)
{
lean_dec_ref(v_a_1772_);
lean_inc(v_l_1770_);
return v_l_1770_;
}
else
{
lean_object* v_head_1773_; lean_object* v_tail_1774_; lean_object* v___x_1778_; uint8_t v___x_1779_; 
v_head_1773_ = lean_ctor_get(v_a_1771_, 0);
lean_inc(v_head_1773_);
v_tail_1774_ = lean_ctor_get(v_a_1771_, 1);
lean_inc(v_tail_1774_);
lean_dec_ref_known(v_a_1771_, 2);
v___x_1778_ = lean_unsigned_to_nat(32u);
v___x_1779_ = lean_nat_dec_eq(v_head_1773_, v___x_1778_);
if (v___x_1779_ == 0)
{
lean_object* v___x_1780_; uint8_t v___x_1781_; 
v___x_1780_ = lean_unsigned_to_nat(9u);
v___x_1781_ = lean_nat_dec_eq(v_head_1773_, v___x_1780_);
if (v___x_1781_ == 0)
{
lean_object* v___x_1782_; 
lean_dec(v_tail_1774_);
lean_dec(v_head_1773_);
v___x_1782_ = lean_array_to_list(v_a_1772_);
return v___x_1782_;
}
else
{
goto v___jp_1775_;
}
}
else
{
goto v___jp_1775_;
}
v___jp_1775_:
{
lean_object* v___x_1776_; 
v___x_1776_ = lean_array_push(v_a_1772_, v_head_1773_);
v_a_1771_ = v_tail_1774_;
v_a_1772_ = v___x_1776_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_namedAnchorProcess_spec__1___boxed(lean_object* v_l_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_namedAnchorProcess_spec__1(v_l_1783_, v_a_1784_, v_a_1785_);
lean_dec(v_l_1783_);
return v_res_1786_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__2(void){
_start:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1789_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__1));
v___x_1790_ = l_String_toListImpl(v___x_1789_);
return v___x_1790_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__3(void){
_start:
{
lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1791_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__2, &lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__2);
v___x_1792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1791_);
return v___x_1792_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__4(void){
_start:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1793_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__3, &lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__3);
v___x_1794_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8, &lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8);
v___x_1795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1794_);
lean_ctor_set(v___x_1795_, 1, v___x_1793_);
return v___x_1795_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__6(void){
_start:
{
lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1797_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__5));
v___x_1798_ = l_String_toListImpl(v___x_1797_);
return v___x_1798_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__7(void){
_start:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1799_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonProcess___closed__0));
v___x_1800_ = l_String_toListImpl(v___x_1799_);
return v___x_1800_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__9(void){
_start:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1802_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__8));
v___x_1803_ = l_String_toListImpl(v___x_1802_);
return v___x_1803_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__12(void){
_start:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1808_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__11));
v___x_1809_ = l_String_toListImpl(v___x_1808_);
return v___x_1809_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__13(void){
_start:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1810_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__12, &lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__12);
v___x_1811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1811_, 0, v___x_1810_);
return v___x_1811_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__14(void){
_start:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
v___x_1812_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__13, &lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__13);
v___x_1813_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8, &lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_buttonProcess___closed__8);
v___x_1814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1813_);
lean_ctor_set(v___x_1814_, 1, v___x_1812_);
return v___x_1814_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__16(void){
_start:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___x_1816_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__15));
v___x_1817_ = l_String_toListImpl(v___x_1816_);
return v___x_1817_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess(lean_object* v_name_1818_, uint8_t v_resid_1819_, lean_object* v_full_1820_, uint8_t v_precededByBracket_1821_, lean_object* v_toks_1822_){
_start:
{
lean_object* v___y_1824_; lean_object* v___y_1825_; lean_object* v___y_1826_; uint8_t v___x_1863_; 
v___x_1863_ = lp_lean_x2dftml_List_any___at___00LeanFtml_freelinkProcess_spec__0(v_name_1818_);
if (v___x_1863_ == 0)
{
lean_object* v___x_1864_; uint8_t v___x_1865_; 
v___x_1864_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_name_1818_);
v___x_1865_ = l_List_isEmpty___redArg(v___x_1864_);
lean_dec(v___x_1864_);
if (v___x_1865_ == 0)
{
uint8_t v___x_1866_; 
v___x_1866_ = lp_lean_x2dftml_List_all___at___00LeanFtml_namedAnchorProcess_spec__0(v_name_1818_);
if (v___x_1866_ == 0)
{
if (v_resid_1819_ == 0)
{
lean_dec(v_full_1820_);
goto v___jp_1829_;
}
else
{
if (v_precededByBracket_1821_ == 0)
{
lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
lean_dec(v_name_1818_);
v___x_1867_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__0));
v___x_1868_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__14, &lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__14);
v___x_1869_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__7, &lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__7);
v___x_1870_ = lp_lean_x2dftml_LeanFtml_textVal(v_full_1820_);
v___x_1871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1871_, 0, v___x_1869_);
lean_ctor_set(v___x_1871_, 1, v___x_1870_);
v___x_1872_ = lean_box(0);
v___x_1873_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1873_, 0, v___x_1871_);
lean_ctor_set(v___x_1873_, 1, v___x_1872_);
v___x_1874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1868_);
lean_ctor_set(v___x_1874_, 1, v___x_1873_);
v___x_1875_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_1867_, v___x_1874_, v_toks_1822_);
return v___x_1875_;
}
else
{
lean_dec(v_full_1820_);
goto v___jp_1829_;
}
}
}
else
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v_fst_1883_; lean_object* v_snd_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1895_; 
lean_dec(v_full_1820_);
v___x_1876_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__0));
v___x_1877_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__16, &lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__16);
v___x_1878_ = lp_lean_x2dftml_LeanFtml_textVal(v_name_1818_);
v___x_1879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1879_, 0, v___x_1877_);
lean_ctor_set(v___x_1879_, 1, v___x_1878_);
v___x_1880_ = lean_box(0);
v___x_1881_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1881_, 0, v___x_1879_);
lean_ctor_set(v___x_1881_, 1, v___x_1880_);
v___x_1882_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_1876_, v___x_1881_, v_toks_1822_);
v_fst_1883_ = lean_ctor_get(v___x_1882_, 0);
v_snd_1884_ = lean_ctor_get(v___x_1882_, 1);
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1886_ = v___x_1882_;
v_isShared_1887_ = v_isSharedCheck_1895_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_snd_1884_);
lean_inc(v_fst_1883_);
lean_dec(v___x_1882_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1895_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___y_1889_; 
if (v_resid_1819_ == 0)
{
v___y_1889_ = v___x_1880_;
goto v___jp_1888_;
}
else
{
lean_object* v___x_1894_; 
v___x_1894_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__10));
v___y_1889_ = v___x_1894_;
goto v___jp_1888_;
}
v___jp_1888_:
{
lean_object* v___x_1890_; lean_object* v___x_1892_; 
lean_inc(v___y_1889_);
v___x_1890_ = l_List_appendTR___redArg(v_fst_1883_, v___y_1889_);
if (v_isShared_1887_ == 0)
{
lean_ctor_set(v___x_1886_, 0, v___x_1890_);
v___x_1892_ = v___x_1886_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v___x_1890_);
lean_ctor_set(v_reuseFailAlloc_1893_, 1, v_snd_1884_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
}
}
else
{
lean_object* v___x_1896_; 
lean_dec(v_name_1818_);
v___x_1896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1896_, 0, v_full_1820_);
lean_ctor_set(v___x_1896_, 1, v_toks_1822_);
return v___x_1896_;
}
}
else
{
lean_object* v___x_1897_; 
lean_dec(v_name_1818_);
v___x_1897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1897_, 0, v_full_1820_);
lean_ctor_set(v___x_1897_, 1, v_toks_1822_);
return v___x_1897_;
}
v___jp_1823_:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; 
lean_inc(v___y_1826_);
v___x_1827_ = l_List_appendTR___redArg(v___y_1825_, v___y_1826_);
v___x_1828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1827_);
lean_ctor_set(v___x_1828_, 1, v___y_1824_);
return v___x_1828_;
}
v___jp_1829_:
{
lean_object* v___x_1830_; lean_object* v_lead_1831_; lean_object* v___x_1832_; lean_object* v_afterLead_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v_trail_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v_text_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1830_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonTail___closed__0));
lean_inc(v_name_1818_);
v_lead_1831_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_namedAnchorProcess_spec__1(v_name_1818_, v_name_1818_, v___x_1830_);
v___x_1832_ = l_List_lengthTR___redArg(v_lead_1831_);
v_afterLead_1833_ = l_List_drop___redArg(v___x_1832_, v_name_1818_);
lean_dec(v_name_1818_);
lean_inc_n(v_afterLead_1833_, 2);
v___x_1834_ = l_List_reverse___redArg(v_afterLead_1833_);
lean_inc(v___x_1834_);
v___x_1835_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_namedAnchorProcess_spec__1(v___x_1834_, v___x_1834_, v___x_1830_);
lean_dec(v___x_1834_);
v_trail_1836_ = l_List_reverse___redArg(v___x_1835_);
v___x_1837_ = l_List_lengthTR___redArg(v_afterLead_1833_);
v___x_1838_ = l_List_lengthTR___redArg(v_trail_1836_);
v___x_1839_ = lean_nat_sub(v___x_1837_, v___x_1838_);
lean_dec(v___x_1838_);
lean_dec(v___x_1837_);
v_text_1840_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_afterLead_1833_, v_afterLead_1833_, v___x_1839_, v___x_1830_);
lean_dec(v_afterLead_1833_);
v___x_1841_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__0));
v___x_1842_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__4, &lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__4);
v___x_1843_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__6, &lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__6);
v___x_1844_ = lp_lean_x2dftml_LeanFtml_textVal(v_lead_1831_);
v___x_1845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1843_);
lean_ctor_set(v___x_1845_, 1, v___x_1844_);
v___x_1846_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__7, &lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__7);
v___x_1847_ = lp_lean_x2dftml_LeanFtml_textVal(v_text_1840_);
v___x_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1846_);
lean_ctor_set(v___x_1848_, 1, v___x_1847_);
v___x_1849_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__9, &lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__9);
v___x_1850_ = lp_lean_x2dftml_LeanFtml_textVal(v_trail_1836_);
v___x_1851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1849_);
lean_ctor_set(v___x_1851_, 1, v___x_1850_);
v___x_1852_ = lean_box(0);
v___x_1853_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1851_);
lean_ctor_set(v___x_1853_, 1, v___x_1852_);
v___x_1854_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1848_);
lean_ctor_set(v___x_1854_, 1, v___x_1853_);
v___x_1855_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1845_);
lean_ctor_set(v___x_1855_, 1, v___x_1854_);
v___x_1856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1842_);
lean_ctor_set(v___x_1856_, 1, v___x_1855_);
v___x_1857_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_1841_, v___x_1856_, v_toks_1822_);
if (v_resid_1819_ == 0)
{
lean_object* v_fst_1858_; lean_object* v_snd_1859_; 
v_fst_1858_ = lean_ctor_get(v___x_1857_, 0);
lean_inc(v_fst_1858_);
v_snd_1859_ = lean_ctor_get(v___x_1857_, 1);
lean_inc(v_snd_1859_);
lean_dec_ref(v___x_1857_);
v___y_1824_ = v_snd_1859_;
v___y_1825_ = v_fst_1858_;
v___y_1826_ = v___x_1852_;
goto v___jp_1823_;
}
else
{
lean_object* v_fst_1860_; lean_object* v_snd_1861_; lean_object* v___x_1862_; 
v_fst_1860_ = lean_ctor_get(v___x_1857_, 0);
lean_inc(v_fst_1860_);
v_snd_1861_ = lean_ctor_get(v___x_1857_, 1);
lean_inc(v_snd_1861_);
lean_dec_ref(v___x_1857_);
v___x_1862_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__10));
v___y_1824_ = v_snd_1861_;
v___y_1825_ = v_fst_1860_;
v___y_1826_ = v___x_1862_;
goto v___jp_1823_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorProcess___boxed(lean_object* v_name_1898_, lean_object* v_resid_1899_, lean_object* v_full_1900_, lean_object* v_precededByBracket_1901_, lean_object* v_toks_1902_){
_start:
{
uint8_t v_resid_boxed_1903_; uint8_t v_precededByBracket_boxed_1904_; lean_object* v_res_1905_; 
v_resid_boxed_1903_ = lean_unbox(v_resid_1899_);
v_precededByBracket_boxed_1904_ = lean_unbox(v_precededByBracket_1901_);
v_res_1905_ = lp_lean_x2dftml_LeanFtml_namedAnchorProcess(v_name_1898_, v_resid_boxed_1903_, v_full_1900_, v_precededByBracket_boxed_1904_, v_toks_1902_);
return v_res_1905_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorScan_go(lean_object* v_a_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_){
_start:
{
if (lean_obj_tag(v_a_1908_) == 0)
{
lean_object* v___x_1912_; 
v___x_1912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1912_, 0, v_a_1908_);
lean_ctor_set(v___x_1912_, 1, v_a_1909_);
return v___x_1912_;
}
else
{
lean_object* v_head_1913_; lean_object* v_tail_1914_; lean_object* v_zero_1915_; uint8_t v_isZero_1916_; 
v_head_1913_ = lean_ctor_get(v_a_1908_, 0);
v_tail_1914_ = lean_ctor_get(v_a_1908_, 1);
v_zero_1915_ = lean_unsigned_to_nat(0u);
v_isZero_1916_ = lean_nat_dec_eq(v_a_1911_, v_zero_1915_);
if (v_isZero_1916_ == 1)
{
lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1924_; 
v_isSharedCheck_1924_ = !lean_is_exclusive(v_a_1908_);
if (v_isSharedCheck_1924_ == 0)
{
lean_object* v_unused_1925_; lean_object* v_unused_1926_; 
v_unused_1925_ = lean_ctor_get(v_a_1908_, 1);
lean_dec(v_unused_1925_);
v_unused_1926_ = lean_ctor_get(v_a_1908_, 0);
lean_dec(v_unused_1926_);
v___x_1918_ = v_a_1908_;
v_isShared_1919_ = v_isSharedCheck_1924_;
goto v_resetjp_1917_;
}
else
{
lean_dec(v_a_1908_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1924_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___x_1920_; lean_object* v___x_1922_; 
v___x_1920_ = lean_box(0);
if (v_isShared_1919_ == 0)
{
lean_ctor_set_tag(v___x_1918_, 0);
lean_ctor_set(v___x_1918_, 1, v_a_1909_);
lean_ctor_set(v___x_1918_, 0, v___x_1920_);
v___x_1922_ = v___x_1918_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v___x_1920_);
lean_ctor_set(v_reuseFailAlloc_1923_, 1, v_a_1909_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
else
{
lean_object* v_one_1927_; lean_object* v_n_1928_; lean_object* v___x_1929_; 
lean_inc(v_tail_1914_);
lean_inc(v_head_1913_);
v_one_1927_ = lean_unsigned_to_nat(1u);
v_n_1928_ = lean_nat_sub(v_a_1911_, v_one_1927_);
v___x_1929_ = lp_lean_x2dftml_LeanFtml_namedAnchorMatchAt(v_a_1908_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v_fst_1932_; lean_object* v_snd_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1941_; 
lean_inc(v_head_1913_);
v___x_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1930_, 0, v_head_1913_);
v___x_1931_ = lp_lean_x2dftml_LeanFtml_namedAnchorScan_go(v_tail_1914_, v_a_1909_, v___x_1930_, v_n_1928_);
lean_dec(v_n_1928_);
lean_dec_ref_known(v___x_1930_, 1);
v_fst_1932_ = lean_ctor_get(v___x_1931_, 0);
v_snd_1933_ = lean_ctor_get(v___x_1931_, 1);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1935_ = v___x_1931_;
v_isShared_1936_ = v_isSharedCheck_1941_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_snd_1933_);
lean_inc(v_fst_1932_);
lean_dec(v___x_1931_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1941_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1937_; lean_object* v___x_1939_; 
v___x_1937_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1937_, 0, v_head_1913_);
lean_ctor_set(v___x_1937_, 1, v_fst_1932_);
if (v_isShared_1936_ == 0)
{
lean_ctor_set(v___x_1935_, 0, v___x_1937_);
v___x_1939_ = v___x_1935_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1937_);
lean_ctor_set(v_reuseFailAlloc_1940_, 1, v_snd_1933_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
else
{
lean_object* v_val_1942_; lean_object* v_snd_1943_; lean_object* v_snd_1944_; lean_object* v_fst_1945_; lean_object* v_fst_1946_; lean_object* v_fst_1947_; lean_object* v_snd_1948_; lean_object* v___x_1949_; uint8_t v___x_1950_; uint8_t v___x_1951_; lean_object* v___x_1952_; lean_object* v_fst_1953_; lean_object* v_snd_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v_fst_1957_; lean_object* v_snd_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1966_; 
lean_dec(v_tail_1914_);
lean_dec(v_head_1913_);
v_val_1942_ = lean_ctor_get(v___x_1929_, 0);
lean_inc(v_val_1942_);
lean_dec_ref_known(v___x_1929_, 1);
v_snd_1943_ = lean_ctor_get(v_val_1942_, 1);
lean_inc(v_snd_1943_);
v_snd_1944_ = lean_ctor_get(v_snd_1943_, 1);
lean_inc(v_snd_1944_);
v_fst_1945_ = lean_ctor_get(v_val_1942_, 0);
lean_inc(v_fst_1945_);
lean_dec(v_val_1942_);
v_fst_1946_ = lean_ctor_get(v_snd_1943_, 0);
lean_inc(v_fst_1946_);
lean_dec(v_snd_1943_);
v_fst_1947_ = lean_ctor_get(v_snd_1944_, 0);
lean_inc_n(v_fst_1947_, 2);
v_snd_1948_ = lean_ctor_get(v_snd_1944_, 1);
lean_inc(v_snd_1948_);
lean_dec(v_snd_1944_);
v___x_1949_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_namedAnchorScan_go___closed__0));
v___x_1950_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_a_1910_, v___x_1949_);
v___x_1951_ = lean_unbox(v_fst_1946_);
lean_dec(v_fst_1946_);
v___x_1952_ = lp_lean_x2dftml_LeanFtml_namedAnchorProcess(v_fst_1945_, v___x_1951_, v_fst_1947_, v___x_1950_, v_a_1909_);
v_fst_1953_ = lean_ctor_get(v___x_1952_, 0);
lean_inc(v_fst_1953_);
v_snd_1954_ = lean_ctor_get(v___x_1952_, 1);
lean_inc(v_snd_1954_);
lean_dec_ref(v___x_1952_);
v___x_1955_ = l_List_getLast_x3f___redArg(v_fst_1947_);
lean_dec(v_fst_1947_);
v___x_1956_ = lp_lean_x2dftml_LeanFtml_namedAnchorScan_go(v_snd_1948_, v_snd_1954_, v___x_1955_, v_n_1928_);
lean_dec(v_n_1928_);
lean_dec(v___x_1955_);
v_fst_1957_ = lean_ctor_get(v___x_1956_, 0);
v_snd_1958_ = lean_ctor_get(v___x_1956_, 1);
v_isSharedCheck_1966_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_1966_ == 0)
{
v___x_1960_ = v___x_1956_;
v_isShared_1961_ = v_isSharedCheck_1966_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_snd_1958_);
lean_inc(v_fst_1957_);
lean_dec(v___x_1956_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1966_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1962_; lean_object* v___x_1964_; 
v___x_1962_ = l_List_appendTR___redArg(v_fst_1953_, v_fst_1957_);
if (v_isShared_1961_ == 0)
{
lean_ctor_set(v___x_1960_, 0, v___x_1962_);
v___x_1964_ = v___x_1960_;
goto v_reusejp_1963_;
}
else
{
lean_object* v_reuseFailAlloc_1965_; 
v_reuseFailAlloc_1965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1965_, 0, v___x_1962_);
lean_ctor_set(v_reuseFailAlloc_1965_, 1, v_snd_1958_);
v___x_1964_ = v_reuseFailAlloc_1965_;
goto v_reusejp_1963_;
}
v_reusejp_1963_:
{
return v___x_1964_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorScan_go___boxed(lean_object* v_a_1967_, lean_object* v_a_1968_, lean_object* v_a_1969_, lean_object* v_a_1970_){
_start:
{
lean_object* v_res_1971_; 
v_res_1971_ = lp_lean_x2dftml_LeanFtml_namedAnchorScan_go(v_a_1967_, v_a_1968_, v_a_1969_, v_a_1970_);
lean_dec(v_a_1970_);
lean_dec(v_a_1969_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_namedAnchorScan(lean_object* v_src_1972_, lean_object* v_toks_1973_){
_start:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1974_ = lean_box(0);
v___x_1975_ = l_List_lengthTR___redArg(v_src_1972_);
v___x_1976_ = lean_unsigned_to_nat(1u);
v___x_1977_ = lean_nat_add(v___x_1975_, v___x_1976_);
lean_dec(v___x_1975_);
v___x_1978_ = lp_lean_x2dftml_LeanFtml_namedAnchorScan_go(v_src_1972_, v_toks_1973_, v___x_1974_, v___x_1977_);
lean_dec(v___x_1977_);
return v___x_1978_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorOpenerAt___closed__1(void){
_start:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1980_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorOpenerAt___closed__0));
v___x_1981_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1980_);
return v___x_1981_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorOpenerAt(lean_object* v_src_1982_){
_start:
{
uint8_t v_fst_1984_; lean_object* v_snd_1985_; lean_object* v___x_2037_; lean_object* v___x_2038_; 
v___x_2037_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorOpenerAt___closed__1, &lp_lean_x2dftml_LeanFtml_anchorOpenerAt___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_anchorOpenerAt___closed__1);
v___x_2038_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_2037_, v_src_1982_);
if (lean_obj_tag(v___x_2038_) == 0)
{
lean_object* v___x_2039_; 
v___x_2039_ = lean_box(0);
return v___x_2039_;
}
else
{
lean_object* v_val_2040_; 
v_val_2040_ = lean_ctor_get(v___x_2038_, 0);
lean_inc(v_val_2040_);
lean_dec_ref_known(v___x_2038_, 1);
if (lean_obj_tag(v_val_2040_) == 1)
{
lean_object* v_head_2043_; lean_object* v_tail_2044_; lean_object* v___x_2045_; uint8_t v___x_2046_; 
v_head_2043_ = lean_ctor_get(v_val_2040_, 0);
v_tail_2044_ = lean_ctor_get(v_val_2040_, 1);
v___x_2045_ = lean_unsigned_to_nat(95u);
v___x_2046_ = lean_nat_dec_eq(v_head_2043_, v___x_2045_);
if (v___x_2046_ == 0)
{
goto v___jp_2041_;
}
else
{
lean_inc(v_tail_2044_);
lean_dec_ref_known(v_val_2040_, 2);
v_fst_1984_ = v___x_2046_;
v_snd_1985_ = v_tail_2044_;
goto v___jp_1983_;
}
}
else
{
goto v___jp_2041_;
}
v___jp_2041_:
{
uint8_t v___x_2042_; 
v___x_2042_ = 0;
v_fst_1984_ = v___x_2042_;
v_snd_1985_ = v_val_2040_;
goto v___jp_1983_;
}
}
v___jp_1983_:
{
lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v_snd_1988_; 
v___x_1986_ = lean_box(0);
v___x_1987_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_socialMatchAt_spec__0(v_snd_1985_, v___x_1986_);
v_snd_1988_ = lean_ctor_get(v___x_1987_, 1);
lean_inc(v_snd_1988_);
if (lean_obj_tag(v_snd_1988_) == 1)
{
lean_object* v_fst_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_2034_; 
v_fst_1989_ = lean_ctor_get(v___x_1987_, 0);
v_isSharedCheck_2034_ = !lean_is_exclusive(v___x_1987_);
if (v_isSharedCheck_2034_ == 0)
{
lean_object* v_unused_2035_; 
v_unused_2035_ = lean_ctor_get(v___x_1987_, 1);
lean_dec(v_unused_2035_);
v___x_1991_ = v___x_1987_;
v_isShared_1992_ = v_isSharedCheck_2034_;
goto v_resetjp_1990_;
}
else
{
lean_inc(v_fst_1989_);
lean_dec(v___x_1987_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_2034_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
lean_object* v_head_1993_; lean_object* v_tail_1994_; lean_object* v___x_1995_; uint8_t v___x_1996_; 
v_head_1993_ = lean_ctor_get(v_snd_1988_, 0);
lean_inc(v_head_1993_);
v_tail_1994_ = lean_ctor_get(v_snd_1988_, 1);
lean_inc(v_tail_1994_);
lean_dec_ref_known(v_snd_1988_, 2);
v___x_1995_ = lean_unsigned_to_nat(93u);
v___x_1996_ = lean_nat_dec_eq(v_head_1993_, v___x_1995_);
lean_dec(v_head_1993_);
if (v___x_1996_ == 0)
{
lean_object* v___x_1997_; 
lean_dec(v_tail_1994_);
lean_del_object(v___x_1991_);
lean_dec(v_fst_1989_);
v___x_1997_ = lean_box(0);
return v___x_1997_;
}
else
{
if (lean_obj_tag(v_tail_1994_) == 1)
{
lean_object* v_head_1998_; lean_object* v_tail_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2032_; 
v_head_1998_ = lean_ctor_get(v_tail_1994_, 0);
v_tail_1999_ = lean_ctor_get(v_tail_1994_, 1);
v_isSharedCheck_2032_ = !lean_is_exclusive(v_tail_1994_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2001_ = v_tail_1994_;
v_isShared_2002_ = v_isSharedCheck_2032_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_tail_1999_);
lean_inc(v_head_1998_);
lean_dec(v_tail_1994_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2032_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
uint8_t v___x_2003_; 
v___x_2003_ = lean_nat_dec_eq(v_head_1998_, v___x_1995_);
lean_dec(v_head_1998_);
if (v___x_2003_ == 0)
{
lean_object* v___x_2004_; 
lean_del_object(v___x_2001_);
lean_dec(v_tail_1999_);
lean_del_object(v___x_1991_);
lean_dec(v_fst_1989_);
v___x_2004_ = lean_box(0);
return v___x_2004_;
}
else
{
uint8_t v___x_2005_; 
v___x_2005_ = l_List_isEmpty___redArg(v_fst_1989_);
if (v___x_2005_ == 0)
{
lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v_wlen_2009_; uint8_t v___x_2010_; 
v___x_2006_ = lean_unsigned_to_nat(0u);
v___x_2007_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonTail___closed__0));
lean_inc(v_fst_1989_);
v___x_2008_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_iframeTail_spec__1(v_fst_1989_, v_fst_1989_, v___x_2007_);
v_wlen_2009_ = l_List_lengthTR___redArg(v___x_2008_);
lean_dec(v___x_2008_);
v___x_2010_ = lean_nat_dec_eq(v_wlen_2009_, v___x_2006_);
if (v___x_2010_ == 0)
{
lean_object* v___x_2011_; uint8_t v___x_2012_; 
v___x_2011_ = l_List_lengthTR___redArg(v_fst_1989_);
v___x_2012_ = lean_nat_dec_eq(v_wlen_2009_, v___x_2011_);
lean_dec(v___x_2011_);
if (v___x_2012_ == 0)
{
lean_object* v___x_2013_; lean_object* v___x_2015_; 
v___x_2013_ = l_List_drop___redArg(v_wlen_2009_, v_fst_1989_);
lean_dec(v_fst_1989_);
if (v_isShared_1992_ == 0)
{
lean_ctor_set(v___x_1991_, 1, v_tail_1999_);
lean_ctor_set(v___x_1991_, 0, v___x_2013_);
v___x_2015_ = v___x_1991_;
goto v_reusejp_2014_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v___x_2013_);
lean_ctor_set(v_reuseFailAlloc_2021_, 1, v_tail_1999_);
v___x_2015_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2014_;
}
v_reusejp_2014_:
{
lean_object* v___x_2016_; lean_object* v___x_2018_; 
v___x_2016_ = lean_box(v_fst_1984_);
if (v_isShared_2002_ == 0)
{
lean_ctor_set_tag(v___x_2001_, 0);
lean_ctor_set(v___x_2001_, 1, v___x_2015_);
lean_ctor_set(v___x_2001_, 0, v___x_2016_);
v___x_2018_ = v___x_2001_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v___x_2016_);
lean_ctor_set(v_reuseFailAlloc_2020_, 1, v___x_2015_);
v___x_2018_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
lean_object* v___x_2019_; 
v___x_2019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2019_, 0, v___x_2018_);
return v___x_2019_;
}
}
}
else
{
lean_object* v___x_2022_; 
lean_dec(v_wlen_2009_);
lean_del_object(v___x_2001_);
lean_dec(v_tail_1999_);
lean_del_object(v___x_1991_);
lean_dec(v_fst_1989_);
v___x_2022_ = lean_box(0);
return v___x_2022_;
}
}
else
{
lean_object* v___x_2023_; 
lean_dec(v_wlen_2009_);
lean_del_object(v___x_2001_);
lean_dec(v_tail_1999_);
lean_del_object(v___x_1991_);
lean_dec(v_fst_1989_);
v___x_2023_ = lean_box(0);
return v___x_2023_;
}
}
else
{
lean_object* v___x_2025_; 
lean_dec(v_fst_1989_);
if (v_isShared_1992_ == 0)
{
lean_ctor_set(v___x_1991_, 1, v_tail_1999_);
lean_ctor_set(v___x_1991_, 0, v___x_1986_);
v___x_2025_ = v___x_1991_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v___x_1986_);
lean_ctor_set(v_reuseFailAlloc_2031_, 1, v_tail_1999_);
v___x_2025_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
lean_object* v___x_2026_; lean_object* v___x_2028_; 
v___x_2026_ = lean_box(v_fst_1984_);
if (v_isShared_2002_ == 0)
{
lean_ctor_set_tag(v___x_2001_, 0);
lean_ctor_set(v___x_2001_, 1, v___x_2025_);
lean_ctor_set(v___x_2001_, 0, v___x_2026_);
v___x_2028_ = v___x_2001_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v___x_2026_);
lean_ctor_set(v_reuseFailAlloc_2030_, 1, v___x_2025_);
v___x_2028_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
lean_object* v___x_2029_; 
v___x_2029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2029_, 0, v___x_2028_);
return v___x_2029_;
}
}
}
}
}
}
else
{
lean_object* v___x_2033_; 
lean_dec(v_tail_1994_);
lean_del_object(v___x_1991_);
lean_dec(v_fst_1989_);
v___x_2033_ = lean_box(0);
return v___x_2033_;
}
}
}
}
else
{
lean_object* v___x_2036_; 
lean_dec(v_snd_1988_);
lean_dec_ref(v___x_1987_);
v___x_2036_ = lean_box(0);
return v___x_2036_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorOpenerSearch(lean_object* v_x_2047_){
_start:
{
if (lean_obj_tag(v_x_2047_) == 0)
{
lean_object* v___x_2048_; 
v___x_2048_ = lean_box(0);
return v___x_2048_;
}
else
{
lean_object* v_tail_2049_; lean_object* v___x_2050_; 
v_tail_2049_ = lean_ctor_get(v_x_2047_, 1);
lean_inc_ref(v_x_2047_);
v___x_2050_ = lp_lean_x2dftml_LeanFtml_anchorOpenerAt(v_x_2047_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v___x_2051_; 
lean_inc(v_tail_2049_);
lean_dec_ref_known(v_x_2047_, 2);
v___x_2051_ = lp_lean_x2dftml_LeanFtml_anchorOpenerSearch(v_tail_2049_);
if (lean_obj_tag(v___x_2051_) == 0)
{
return v___x_2051_;
}
else
{
lean_object* v_val_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2070_; 
v_val_2052_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2054_ = v___x_2051_;
v_isShared_2055_ = v_isSharedCheck_2070_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_val_2052_);
lean_dec(v___x_2051_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2070_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v_fst_2056_; lean_object* v_snd_2057_; lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2069_; 
v_fst_2056_ = lean_ctor_get(v_val_2052_, 0);
v_snd_2057_ = lean_ctor_get(v_val_2052_, 1);
v_isSharedCheck_2069_ = !lean_is_exclusive(v_val_2052_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2059_ = v_val_2052_;
v_isShared_2060_ = v_isSharedCheck_2069_;
goto v_resetjp_2058_;
}
else
{
lean_inc(v_snd_2057_);
lean_inc(v_fst_2056_);
lean_dec(v_val_2052_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2069_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2064_; 
v___x_2061_ = lean_unsigned_to_nat(1u);
v___x_2062_ = lean_nat_add(v_fst_2056_, v___x_2061_);
lean_dec(v_fst_2056_);
if (v_isShared_2060_ == 0)
{
lean_ctor_set(v___x_2059_, 0, v___x_2062_);
v___x_2064_ = v___x_2059_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v___x_2062_);
lean_ctor_set(v_reuseFailAlloc_2068_, 1, v_snd_2057_);
v___x_2064_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
lean_object* v___x_2066_; 
if (v_isShared_2055_ == 0)
{
lean_ctor_set(v___x_2054_, 0, v___x_2064_);
v___x_2066_ = v___x_2054_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v___x_2064_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
}
}
}
else
{
lean_object* v_val_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2100_; 
v_val_2071_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2073_ = v___x_2050_;
v_isShared_2074_ = v_isSharedCheck_2100_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_val_2071_);
lean_dec(v___x_2050_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2100_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v_snd_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2098_; 
v_snd_2075_ = lean_ctor_get(v_val_2071_, 1);
v_isSharedCheck_2098_ = !lean_is_exclusive(v_val_2071_);
if (v_isSharedCheck_2098_ == 0)
{
lean_object* v_unused_2099_; 
v_unused_2099_ = lean_ctor_get(v_val_2071_, 0);
lean_dec(v_unused_2099_);
v___x_2077_ = v_val_2071_;
v_isShared_2078_ = v_isSharedCheck_2098_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_snd_2075_);
lean_dec(v_val_2071_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2098_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v_fst_2079_; lean_object* v_snd_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2097_; 
v_fst_2079_ = lean_ctor_get(v_snd_2075_, 0);
v_snd_2080_ = lean_ctor_get(v_snd_2075_, 1);
v_isSharedCheck_2097_ = !lean_is_exclusive(v_snd_2075_);
if (v_isSharedCheck_2097_ == 0)
{
v___x_2082_ = v_snd_2075_;
v_isShared_2083_ = v_isSharedCheck_2097_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_snd_2080_);
lean_inc(v_fst_2079_);
lean_dec(v_snd_2075_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2097_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2089_; 
v___x_2084_ = lean_unsigned_to_nat(0u);
v___x_2085_ = l_List_lengthTR___redArg(v_x_2047_);
lean_dec_ref_known(v_x_2047_, 2);
v___x_2086_ = l_List_lengthTR___redArg(v_snd_2080_);
lean_dec(v_snd_2080_);
v___x_2087_ = lean_nat_sub(v___x_2085_, v___x_2086_);
lean_dec(v___x_2086_);
lean_dec(v___x_2085_);
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 1, v___x_2087_);
v___x_2089_ = v___x_2082_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v_fst_2079_);
lean_ctor_set(v_reuseFailAlloc_2096_, 1, v___x_2087_);
v___x_2089_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
lean_object* v___x_2091_; 
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 1, v___x_2089_);
lean_ctor_set(v___x_2077_, 0, v___x_2084_);
v___x_2091_ = v___x_2077_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v___x_2084_);
lean_ctor_set(v_reuseFailAlloc_2095_, 1, v___x_2089_);
v___x_2091_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
lean_object* v___x_2093_; 
if (v_isShared_2074_ == 0)
{
lean_ctor_set(v___x_2073_, 0, v___x_2091_);
v___x_2093_ = v___x_2073_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v___x_2091_);
v___x_2093_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
return v___x_2093_;
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
static lean_object* _init_lp_lean_x2dftml_LeanFtml_anchorElemMatches_go___closed__1(void){
_start:
{
lean_object* v___x_2102_; lean_object* v___x_2103_; 
v___x_2102_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorElemMatches_go___closed__0));
v___x_2103_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_2102_);
return v___x_2103_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemMatches_go(lean_object* v_a_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_){
_start:
{
if (lean_obj_tag(v_a_2104_) == 0)
{
lean_object* v___x_2107_; 
lean_dec(v_a_2106_);
lean_dec(v_a_2105_);
v___x_2107_ = lean_box(0);
return v___x_2107_;
}
else
{
lean_object* v_tail_2108_; lean_object* v_zero_2109_; uint8_t v_isZero_2110_; 
v_tail_2108_ = lean_ctor_get(v_a_2104_, 1);
v_zero_2109_ = lean_unsigned_to_nat(0u);
v_isZero_2110_ = lean_nat_dec_eq(v_a_2106_, v_zero_2109_);
if (v_isZero_2110_ == 1)
{
lean_object* v___x_2111_; 
lean_dec_ref_known(v_a_2104_, 2);
lean_dec(v_a_2106_);
lean_dec(v_a_2105_);
v___x_2111_ = lean_box(0);
return v___x_2111_;
}
else
{
lean_object* v_one_2112_; lean_object* v_n_2113_; lean_object* v___x_2114_; 
v_one_2112_ = lean_unsigned_to_nat(1u);
v_n_2113_ = lean_nat_sub(v_a_2106_, v_one_2112_);
lean_dec(v_a_2106_);
lean_inc_ref(v_a_2104_);
v___x_2114_ = lp_lean_x2dftml_LeanFtml_anchorOpenerAt(v_a_2104_);
if (lean_obj_tag(v___x_2114_) == 0)
{
lean_object* v___x_2115_; 
lean_inc(v_tail_2108_);
lean_dec_ref_known(v_a_2104_, 2);
v___x_2115_ = lean_nat_add(v_a_2105_, v_one_2112_);
lean_dec(v_a_2105_);
v_a_2104_ = v_tail_2108_;
v_a_2105_ = v___x_2115_;
v_a_2106_ = v_n_2113_;
goto _start;
}
else
{
lean_object* v_val_2117_; lean_object* v_snd_2118_; lean_object* v_fst_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2164_; 
v_val_2117_ = lean_ctor_get(v___x_2114_, 0);
lean_inc(v_val_2117_);
lean_dec_ref_known(v___x_2114_, 1);
v_snd_2118_ = lean_ctor_get(v_val_2117_, 1);
v_fst_2119_ = lean_ctor_get(v_val_2117_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v_val_2117_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2121_ = v_val_2117_;
v_isShared_2122_ = v_isSharedCheck_2164_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_snd_2118_);
lean_inc(v_fst_2119_);
lean_dec(v_val_2117_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2164_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v_fst_2123_; lean_object* v_snd_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2163_; 
v_fst_2123_ = lean_ctor_get(v_snd_2118_, 0);
v_snd_2124_ = lean_ctor_get(v_snd_2118_, 1);
v_isSharedCheck_2163_ = !lean_is_exclusive(v_snd_2118_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2126_ = v_snd_2118_;
v_isShared_2127_ = v_isSharedCheck_2163_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_snd_2124_);
lean_inc(v_fst_2123_);
lean_dec(v_snd_2118_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2163_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; 
v___x_2128_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorElemMatches_go___closed__1, &lp_lean_x2dftml_LeanFtml_anchorElemMatches_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_anchorElemMatches_go___closed__1);
v___x_2129_ = lp_lean_x2dftml_LeanFtml_splitAtFirstCI(v___x_2128_, v_snd_2124_);
if (lean_obj_tag(v___x_2129_) == 0)
{
lean_object* v___x_2130_; 
lean_inc(v_tail_2108_);
lean_del_object(v___x_2126_);
lean_dec(v_fst_2123_);
lean_del_object(v___x_2121_);
lean_dec(v_fst_2119_);
lean_dec_ref_known(v_a_2104_, 2);
v___x_2130_ = lean_nat_add(v_a_2105_, v_one_2112_);
lean_dec(v_a_2105_);
v_a_2104_ = v_tail_2108_;
v_a_2105_ = v___x_2130_;
v_a_2106_ = v_n_2113_;
goto _start;
}
else
{
lean_object* v_val_2132_; lean_object* v_fst_2133_; lean_object* v_snd_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2162_; 
v_val_2132_ = lean_ctor_get(v___x_2129_, 0);
lean_inc(v_val_2132_);
lean_dec_ref_known(v___x_2129_, 1);
v_fst_2133_ = lean_ctor_get(v_val_2132_, 0);
v_snd_2134_ = lean_ctor_get(v_val_2132_, 1);
v_isSharedCheck_2162_ = !lean_is_exclusive(v_val_2132_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2136_ = v_val_2132_;
v_isShared_2137_ = v_isSharedCheck_2162_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_snd_2134_);
lean_inc(v_fst_2133_);
lean_dec(v_val_2132_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2162_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2159_; 
v___x_2138_ = l_List_lengthTR___redArg(v_a_2104_);
v_isSharedCheck_2159_ = !lean_is_exclusive(v_a_2104_);
if (v_isSharedCheck_2159_ == 0)
{
lean_object* v_unused_2160_; lean_object* v_unused_2161_; 
v_unused_2160_ = lean_ctor_get(v_a_2104_, 1);
lean_dec(v_unused_2160_);
v_unused_2161_ = lean_ctor_get(v_a_2104_, 0);
lean_dec(v_unused_2161_);
v___x_2140_ = v_a_2104_;
v_isShared_2141_ = v_isSharedCheck_2159_;
goto v_resetjp_2139_;
}
else
{
lean_dec(v_a_2104_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2159_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2146_; 
v___x_2142_ = l_List_lengthTR___redArg(v_snd_2134_);
v___x_2143_ = lean_nat_sub(v___x_2138_, v___x_2142_);
lean_dec(v___x_2142_);
lean_dec(v___x_2138_);
v___x_2144_ = lean_nat_add(v_a_2105_, v___x_2143_);
lean_dec(v___x_2143_);
if (v_isShared_2137_ == 0)
{
lean_ctor_set(v___x_2136_, 1, v_fst_2133_);
lean_ctor_set(v___x_2136_, 0, v_fst_2123_);
v___x_2146_ = v___x_2136_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_fst_2123_);
lean_ctor_set(v_reuseFailAlloc_2158_, 1, v_fst_2133_);
v___x_2146_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
lean_object* v___x_2148_; 
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 1, v___x_2146_);
lean_ctor_set(v___x_2126_, 0, v_fst_2119_);
v___x_2148_ = v___x_2126_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_fst_2119_);
lean_ctor_set(v_reuseFailAlloc_2157_, 1, v___x_2146_);
v___x_2148_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
lean_object* v___x_2150_; 
lean_inc(v___x_2144_);
if (v_isShared_2122_ == 0)
{
lean_ctor_set(v___x_2121_, 1, v___x_2148_);
lean_ctor_set(v___x_2121_, 0, v___x_2144_);
v___x_2150_ = v___x_2121_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v___x_2144_);
lean_ctor_set(v_reuseFailAlloc_2156_, 1, v___x_2148_);
v___x_2150_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2154_; 
v___x_2151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2151_, 0, v_a_2105_);
lean_ctor_set(v___x_2151_, 1, v___x_2150_);
v___x_2152_ = lp_lean_x2dftml_LeanFtml_anchorElemMatches_go(v_snd_2134_, v___x_2144_, v_n_2113_);
if (v_isShared_2141_ == 0)
{
lean_ctor_set(v___x_2140_, 1, v___x_2152_);
lean_ctor_set(v___x_2140_, 0, v___x_2151_);
v___x_2154_ = v___x_2140_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v___x_2151_);
lean_ctor_set(v_reuseFailAlloc_2155_, 1, v___x_2152_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
return v___x_2154_;
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
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemMatches(lean_object* v_src_2165_){
_start:
{
lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; 
v___x_2166_ = lean_unsigned_to_nat(0u);
v___x_2167_ = l_List_lengthTR___redArg(v_src_2165_);
v___x_2168_ = lean_unsigned_to_nat(1u);
v___x_2169_ = lean_nat_add(v___x_2167_, v___x_2168_);
lean_dec(v___x_2167_);
v___x_2170_ = lp_lean_x2dftml_LeanFtml_anchorElemMatches_go(v_src_2165_, v___x_2166_, v___x_2169_);
return v___x_2170_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredJoinStrip(lean_object* v_out_2171_){
_start:
{
lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v_t_2175_; lean_object* v___x_2181_; uint8_t v___x_2182_; 
lean_inc(v_out_2171_);
v___x_2172_ = l_List_reverse___redArg(v_out_2171_);
v___x_2173_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonTail___closed__0));
lean_inc(v___x_2172_);
v___x_2174_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_tabMatchAt_spec__0(v___x_2172_, v___x_2172_, v___x_2173_);
lean_dec(v___x_2172_);
v_t_2175_ = l_List_lengthTR___redArg(v___x_2174_);
lean_dec(v___x_2174_);
v___x_2181_ = lean_unsigned_to_nat(1u);
v___x_2182_ = lean_nat_dec_eq(v_t_2175_, v___x_2181_);
if (v___x_2182_ == 0)
{
lean_object* v___x_2183_; uint8_t v___x_2184_; 
v___x_2183_ = lean_unsigned_to_nat(2u);
v___x_2184_ = lean_nat_dec_eq(v_t_2175_, v___x_2183_);
if (v___x_2184_ == 0)
{
lean_dec(v_t_2175_);
return v_out_2171_;
}
else
{
goto v___jp_2176_;
}
}
else
{
goto v___jp_2176_;
}
v___jp_2176_:
{
lean_object* v___x_2177_; uint8_t v___x_2178_; 
v___x_2177_ = l_List_lengthTR___redArg(v_out_2171_);
v___x_2178_ = lean_nat_dec_lt(v_t_2175_, v___x_2177_);
if (v___x_2178_ == 0)
{
lean_dec(v___x_2177_);
lean_dec(v_t_2175_);
return v_out_2171_;
}
else
{
lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2179_ = lean_nat_sub(v___x_2177_, v_t_2175_);
lean_dec(v_t_2175_);
lean_dec(v___x_2177_);
lean_inc(v_out_2171_);
v___x_2180_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_out_2171_, v_out_2171_, v___x_2179_, v___x_2173_);
lean_dec(v_out_2171_);
return v___x_2180_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredNlAdvance(lean_object* v_x_2185_){
_start:
{
lean_object* v_c_2187_; 
if (lean_obj_tag(v_x_2185_) == 1)
{
lean_object* v_head_2192_; lean_object* v_tail_2193_; lean_object* v___x_2194_; uint8_t v___x_2195_; 
v_head_2192_ = lean_ctor_get(v_x_2185_, 0);
v_tail_2193_ = lean_ctor_get(v_x_2185_, 1);
v___x_2194_ = lean_unsigned_to_nat(10u);
v___x_2195_ = lean_nat_dec_eq(v_head_2192_, v___x_2194_);
if (v___x_2195_ == 0)
{
lean_object* v___x_2196_; 
v___x_2196_ = lean_unsigned_to_nat(0u);
return v___x_2196_;
}
else
{
if (lean_obj_tag(v_tail_2193_) == 1)
{
lean_object* v_head_2197_; lean_object* v_tail_2198_; uint8_t v___x_2199_; 
v_head_2197_ = lean_ctor_get(v_tail_2193_, 0);
v_tail_2198_ = lean_ctor_get(v_tail_2193_, 1);
v___x_2199_ = lean_nat_dec_eq(v_head_2197_, v___x_2194_);
if (v___x_2199_ == 0)
{
v_c_2187_ = v_head_2197_;
goto v___jp_2186_;
}
else
{
if (lean_obj_tag(v_tail_2198_) == 1)
{
lean_object* v_head_2200_; uint8_t v___x_2201_; 
v_head_2200_ = lean_ctor_get(v_tail_2198_, 0);
v___x_2201_ = lean_nat_dec_eq(v_head_2200_, v___x_2194_);
if (v___x_2201_ == 0)
{
lean_object* v___x_2202_; 
v___x_2202_ = lean_unsigned_to_nat(2u);
return v___x_2202_;
}
else
{
lean_object* v___x_2203_; 
v___x_2203_ = lean_unsigned_to_nat(0u);
return v___x_2203_;
}
}
else
{
v_c_2187_ = v___x_2194_;
goto v___jp_2186_;
}
}
}
else
{
lean_object* v___x_2204_; 
v___x_2204_ = lean_unsigned_to_nat(0u);
return v___x_2204_;
}
}
}
else
{
lean_object* v___x_2205_; 
v___x_2205_ = lean_unsigned_to_nat(0u);
return v___x_2205_;
}
v___jp_2186_:
{
lean_object* v___x_2188_; uint8_t v___x_2189_; 
v___x_2188_ = lean_unsigned_to_nat(10u);
v___x_2189_ = lean_nat_dec_eq(v_c_2187_, v___x_2188_);
if (v___x_2189_ == 0)
{
lean_object* v___x_2190_; 
v___x_2190_ = lean_unsigned_to_nat(1u);
return v___x_2190_;
}
else
{
lean_object* v___x_2191_; 
v___x_2191_ = lean_unsigned_to_nat(0u);
return v___x_2191_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_scoredNlAdvance___boxed(lean_object* v_x_2206_){
_start:
{
lean_object* v_res_2207_; 
v_res_2207_ = lp_lean_x2dftml_LeanFtml_scoredNlAdvance(v_x_2206_);
lean_dec(v_x_2206_);
return v_res_2207_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorTrailingClose(lean_object* v_restAfter_2208_){
_start:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v_fst_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2209_ = lean_box(0);
v___x_2210_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_fileMatchAt_tryW_spec__0(v_restAfter_2208_, v___x_2209_);
v_fst_2211_ = lean_ctor_get(v___x_2210_, 0);
lean_inc(v_fst_2211_);
lean_dec_ref(v___x_2210_);
v___x_2212_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_anchorElemMatches_go___closed__1, &lp_lean_x2dftml_LeanFtml_anchorElemMatches_go___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_anchorElemMatches_go___closed__1);
v___x_2213_ = lp_lean_x2dftml_LeanFtml_splitAtFirstCI(v___x_2212_, v_fst_2211_);
if (lean_obj_tag(v___x_2213_) == 0)
{
lean_object* v___x_2214_; 
v___x_2214_ = lean_box(0);
return v___x_2214_;
}
else
{
lean_object* v_val_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2234_; 
v_val_2215_ = lean_ctor_get(v___x_2213_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2217_ = v___x_2213_;
v_isShared_2218_ = v_isSharedCheck_2234_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_val_2215_);
lean_dec(v___x_2213_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2234_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v_fst_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2232_; 
v_fst_2219_ = lean_ctor_get(v_val_2215_, 0);
v_isSharedCheck_2232_ = !lean_is_exclusive(v_val_2215_);
if (v_isSharedCheck_2232_ == 0)
{
lean_object* v_unused_2233_; 
v_unused_2233_ = lean_ctor_get(v_val_2215_, 1);
lean_dec(v_unused_2233_);
v___x_2221_ = v_val_2215_;
v_isShared_2222_ = v_isSharedCheck_2232_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_fst_2219_);
lean_dec(v_val_2215_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2232_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2227_; 
v___x_2223_ = l_List_lengthTR___redArg(v_fst_2219_);
v___x_2224_ = lean_unsigned_to_nat(6u);
v___x_2225_ = lean_nat_add(v___x_2223_, v___x_2224_);
lean_dec(v___x_2223_);
if (v_isShared_2222_ == 0)
{
lean_ctor_set(v___x_2221_, 1, v___x_2225_);
v___x_2227_ = v___x_2221_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v_fst_2219_);
lean_ctor_set(v_reuseFailAlloc_2231_, 1, v___x_2225_);
v___x_2227_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
lean_object* v___x_2229_; 
if (v_isShared_2218_ == 0)
{
lean_ctor_set(v___x_2217_, 0, v___x_2227_);
v___x_2229_ = v___x_2217_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v___x_2227_);
v___x_2229_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
return v___x_2229_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_firstNlRun_spec__0(lean_object* v_a_2235_, lean_object* v_a_2236_){
_start:
{
if (lean_obj_tag(v_a_2235_) == 0)
{
lean_object* v___x_2237_; lean_object* v___x_2238_; 
v___x_2237_ = l_List_reverse___redArg(v_a_2236_);
v___x_2238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2238_, 0, v___x_2237_);
lean_ctor_set(v___x_2238_, 1, v_a_2235_);
return v___x_2238_;
}
else
{
lean_object* v_head_2239_; lean_object* v_tail_2240_; lean_object* v___x_2241_; uint8_t v___x_2242_; 
v_head_2239_ = lean_ctor_get(v_a_2235_, 0);
v_tail_2240_ = lean_ctor_get(v_a_2235_, 1);
v___x_2241_ = lean_unsigned_to_nat(10u);
v___x_2242_ = lean_nat_dec_eq(v_head_2239_, v___x_2241_);
if (v___x_2242_ == 0)
{
lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2243_ = l_List_reverse___redArg(v_a_2236_);
v___x_2244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2243_);
lean_ctor_set(v___x_2244_, 1, v_a_2235_);
return v___x_2244_;
}
else
{
lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2252_; 
lean_inc(v_tail_2240_);
lean_inc(v_head_2239_);
v_isSharedCheck_2252_ = !lean_is_exclusive(v_a_2235_);
if (v_isSharedCheck_2252_ == 0)
{
lean_object* v_unused_2253_; lean_object* v_unused_2254_; 
v_unused_2253_ = lean_ctor_get(v_a_2235_, 1);
lean_dec(v_unused_2253_);
v_unused_2254_ = lean_ctor_get(v_a_2235_, 0);
lean_dec(v_unused_2254_);
v___x_2246_ = v_a_2235_;
v_isShared_2247_ = v_isSharedCheck_2252_;
goto v_resetjp_2245_;
}
else
{
lean_dec(v_a_2235_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2252_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
lean_object* v___x_2249_; 
if (v_isShared_2247_ == 0)
{
lean_ctor_set(v___x_2246_, 1, v_a_2236_);
v___x_2249_ = v___x_2246_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v_head_2239_);
lean_ctor_set(v_reuseFailAlloc_2251_, 1, v_a_2236_);
v___x_2249_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
v_a_2235_ = v_tail_2240_;
v_a_2236_ = v___x_2249_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_firstNlRun(lean_object* v_x_2255_){
_start:
{
if (lean_obj_tag(v_x_2255_) == 0)
{
lean_object* v___x_2256_; 
v___x_2256_ = lean_box(0);
return v___x_2256_;
}
else
{
lean_object* v_head_2257_; lean_object* v_tail_2258_; lean_object* v___x_2259_; uint8_t v___x_2260_; 
v_head_2257_ = lean_ctor_get(v_x_2255_, 0);
lean_inc(v_head_2257_);
v_tail_2258_ = lean_ctor_get(v_x_2255_, 1);
lean_inc(v_tail_2258_);
v___x_2259_ = lean_unsigned_to_nat(10u);
v___x_2260_ = lean_nat_dec_eq(v_head_2257_, v___x_2259_);
if (v___x_2260_ == 0)
{
lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2285_; 
v_isSharedCheck_2285_ = !lean_is_exclusive(v_x_2255_);
if (v_isSharedCheck_2285_ == 0)
{
lean_object* v_unused_2286_; lean_object* v_unused_2287_; 
v_unused_2286_ = lean_ctor_get(v_x_2255_, 1);
lean_dec(v_unused_2286_);
v_unused_2287_ = lean_ctor_get(v_x_2255_, 0);
lean_dec(v_unused_2287_);
v___x_2262_ = v_x_2255_;
v_isShared_2263_ = v_isSharedCheck_2285_;
goto v_resetjp_2261_;
}
else
{
lean_dec(v_x_2255_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2285_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___x_2264_; 
v___x_2264_ = lp_lean_x2dftml_LeanFtml_firstNlRun(v_tail_2258_);
if (lean_obj_tag(v___x_2264_) == 0)
{
lean_del_object(v___x_2262_);
lean_dec(v_head_2257_);
return v___x_2264_;
}
else
{
lean_object* v_val_2265_; lean_object* v___x_2267_; uint8_t v_isShared_2268_; uint8_t v_isSharedCheck_2284_; 
v_val_2265_ = lean_ctor_get(v___x_2264_, 0);
v_isSharedCheck_2284_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2267_ = v___x_2264_;
v_isShared_2268_ = v_isSharedCheck_2284_;
goto v_resetjp_2266_;
}
else
{
lean_inc(v_val_2265_);
lean_dec(v___x_2264_);
v___x_2267_ = lean_box(0);
v_isShared_2268_ = v_isSharedCheck_2284_;
goto v_resetjp_2266_;
}
v_resetjp_2266_:
{
lean_object* v_fst_2269_; lean_object* v_snd_2270_; lean_object* v___x_2272_; uint8_t v_isShared_2273_; uint8_t v_isSharedCheck_2283_; 
v_fst_2269_ = lean_ctor_get(v_val_2265_, 0);
v_snd_2270_ = lean_ctor_get(v_val_2265_, 1);
v_isSharedCheck_2283_ = !lean_is_exclusive(v_val_2265_);
if (v_isSharedCheck_2283_ == 0)
{
v___x_2272_ = v_val_2265_;
v_isShared_2273_ = v_isSharedCheck_2283_;
goto v_resetjp_2271_;
}
else
{
lean_inc(v_snd_2270_);
lean_inc(v_fst_2269_);
lean_dec(v_val_2265_);
v___x_2272_ = lean_box(0);
v_isShared_2273_ = v_isSharedCheck_2283_;
goto v_resetjp_2271_;
}
v_resetjp_2271_:
{
lean_object* v___x_2275_; 
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 1, v_fst_2269_);
v___x_2275_ = v___x_2262_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v_head_2257_);
lean_ctor_set(v_reuseFailAlloc_2282_, 1, v_fst_2269_);
v___x_2275_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
lean_object* v___x_2277_; 
if (v_isShared_2273_ == 0)
{
lean_ctor_set(v___x_2272_, 0, v___x_2275_);
v___x_2277_ = v___x_2272_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v___x_2275_);
lean_ctor_set(v_reuseFailAlloc_2281_, 1, v_snd_2270_);
v___x_2277_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
lean_object* v___x_2279_; 
if (v_isShared_2268_ == 0)
{
lean_ctor_set(v___x_2267_, 0, v___x_2277_);
v___x_2279_ = v___x_2267_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v___x_2277_);
v___x_2279_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
return v___x_2279_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v_fst_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; uint8_t v___x_2293_; 
v___x_2288_ = lean_box(0);
v___x_2289_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_firstNlRun_spec__0(v_x_2255_, v___x_2288_);
v_fst_2290_ = lean_ctor_get(v___x_2289_, 0);
v___x_2291_ = lean_unsigned_to_nat(2u);
v___x_2292_ = l_List_lengthTR___redArg(v_fst_2290_);
v___x_2293_ = lean_nat_dec_le(v___x_2291_, v___x_2292_);
lean_dec(v___x_2292_);
if (v___x_2293_ == 0)
{
lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2318_; 
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2318_ == 0)
{
lean_object* v_unused_2319_; lean_object* v_unused_2320_; 
v_unused_2319_ = lean_ctor_get(v___x_2289_, 1);
lean_dec(v_unused_2319_);
v_unused_2320_ = lean_ctor_get(v___x_2289_, 0);
lean_dec(v_unused_2320_);
v___x_2295_ = v___x_2289_;
v_isShared_2296_ = v_isSharedCheck_2318_;
goto v_resetjp_2294_;
}
else
{
lean_dec(v___x_2289_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2318_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2297_; 
v___x_2297_ = lp_lean_x2dftml_LeanFtml_firstNlRun(v_tail_2258_);
if (lean_obj_tag(v___x_2297_) == 0)
{
lean_del_object(v___x_2295_);
lean_dec(v_head_2257_);
return v___x_2297_;
}
else
{
lean_object* v_val_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2317_; 
v_val_2298_ = lean_ctor_get(v___x_2297_, 0);
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2297_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2300_ = v___x_2297_;
v_isShared_2301_ = v_isSharedCheck_2317_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_val_2298_);
lean_dec(v___x_2297_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2317_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v_fst_2302_; lean_object* v_snd_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2316_; 
v_fst_2302_ = lean_ctor_get(v_val_2298_, 0);
v_snd_2303_ = lean_ctor_get(v_val_2298_, 1);
v_isSharedCheck_2316_ = !lean_is_exclusive(v_val_2298_);
if (v_isSharedCheck_2316_ == 0)
{
v___x_2305_ = v_val_2298_;
v_isShared_2306_ = v_isSharedCheck_2316_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_snd_2303_);
lean_inc(v_fst_2302_);
lean_dec(v_val_2298_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2316_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2308_; 
if (v_isShared_2296_ == 0)
{
lean_ctor_set_tag(v___x_2295_, 1);
lean_ctor_set(v___x_2295_, 1, v_fst_2302_);
lean_ctor_set(v___x_2295_, 0, v_head_2257_);
v___x_2308_ = v___x_2295_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_head_2257_);
lean_ctor_set(v_reuseFailAlloc_2315_, 1, v_fst_2302_);
v___x_2308_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
lean_object* v___x_2310_; 
if (v_isShared_2306_ == 0)
{
lean_ctor_set(v___x_2305_, 0, v___x_2308_);
v___x_2310_ = v___x_2305_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v___x_2308_);
lean_ctor_set(v_reuseFailAlloc_2314_, 1, v_snd_2303_);
v___x_2310_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
lean_object* v___x_2312_; 
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 0, v___x_2310_);
v___x_2312_ = v___x_2300_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v___x_2310_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
lean_dec(v_tail_2258_);
lean_dec(v_head_2257_);
v___x_2321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2321_, 0, v___x_2288_);
lean_ctor_set(v___x_2321_, 1, v___x_2289_);
v___x_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2322_, 0, v___x_2321_);
return v___x_2322_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitNlRuns_go(lean_object* v_a_2323_, lean_object* v_a_2324_){
_start:
{
lean_object* v_zero_2325_; uint8_t v_isZero_2326_; 
v_zero_2325_ = lean_unsigned_to_nat(0u);
v_isZero_2326_ = lean_nat_dec_eq(v_a_2324_, v_zero_2325_);
if (v_isZero_2326_ == 1)
{
lean_object* v___x_2327_; 
lean_dec(v_a_2323_);
v___x_2327_ = lean_box(0);
return v___x_2327_;
}
else
{
lean_object* v___x_2328_; 
lean_inc(v_a_2323_);
v___x_2328_ = lp_lean_x2dftml_LeanFtml_firstNlRun(v_a_2323_);
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_object* v___x_2329_; lean_object* v___x_2330_; 
v___x_2329_ = lean_box(0);
v___x_2330_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2330_, 0, v_a_2323_);
lean_ctor_set(v___x_2330_, 1, v___x_2329_);
return v___x_2330_;
}
else
{
lean_object* v_val_2331_; lean_object* v_snd_2332_; lean_object* v_fst_2333_; lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2352_; 
lean_dec(v_a_2323_);
v_val_2331_ = lean_ctor_get(v___x_2328_, 0);
lean_inc(v_val_2331_);
lean_dec_ref_known(v___x_2328_, 1);
v_snd_2332_ = lean_ctor_get(v_val_2331_, 1);
v_fst_2333_ = lean_ctor_get(v_val_2331_, 0);
v_isSharedCheck_2352_ = !lean_is_exclusive(v_val_2331_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2335_ = v_val_2331_;
v_isShared_2336_ = v_isSharedCheck_2352_;
goto v_resetjp_2334_;
}
else
{
lean_inc(v_snd_2332_);
lean_inc(v_fst_2333_);
lean_dec(v_val_2331_);
v___x_2335_ = lean_box(0);
v_isShared_2336_ = v_isSharedCheck_2352_;
goto v_resetjp_2334_;
}
v_resetjp_2334_:
{
lean_object* v_fst_2337_; lean_object* v_snd_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2351_; 
v_fst_2337_ = lean_ctor_get(v_snd_2332_, 0);
v_snd_2338_ = lean_ctor_get(v_snd_2332_, 1);
v_isSharedCheck_2351_ = !lean_is_exclusive(v_snd_2332_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2340_ = v_snd_2332_;
v_isShared_2341_ = v_isSharedCheck_2351_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_snd_2338_);
lean_inc(v_fst_2337_);
lean_dec(v_snd_2332_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2351_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v_one_2342_; lean_object* v_n_2343_; lean_object* v___x_2344_; lean_object* v___x_2346_; 
v_one_2342_ = lean_unsigned_to_nat(1u);
v_n_2343_ = lean_nat_sub(v_a_2324_, v_one_2342_);
v___x_2344_ = lp_lean_x2dftml_LeanFtml_splitNlRuns_go(v_snd_2338_, v_n_2343_);
lean_dec(v_n_2343_);
if (v_isShared_2341_ == 0)
{
lean_ctor_set_tag(v___x_2340_, 1);
lean_ctor_set(v___x_2340_, 1, v___x_2344_);
v___x_2346_ = v___x_2340_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_fst_2337_);
lean_ctor_set(v_reuseFailAlloc_2350_, 1, v___x_2344_);
v___x_2346_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
lean_object* v___x_2348_; 
if (v_isShared_2336_ == 0)
{
lean_ctor_set_tag(v___x_2335_, 1);
lean_ctor_set(v___x_2335_, 1, v___x_2346_);
v___x_2348_ = v___x_2335_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_fst_2333_);
lean_ctor_set(v_reuseFailAlloc_2349_, 1, v___x_2346_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitNlRuns_go___boxed(lean_object* v_a_2353_, lean_object* v_a_2354_){
_start:
{
lean_object* v_res_2355_; 
v_res_2355_ = lp_lean_x2dftml_LeanFtml_splitNlRuns_go(v_a_2353_, v_a_2354_);
lean_dec(v_a_2354_);
return v_res_2355_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitNlRuns(lean_object* v_bs_2356_){
_start:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
v___x_2357_ = l_List_lengthTR___redArg(v_bs_2356_);
v___x_2358_ = lean_unsigned_to_nat(1u);
v___x_2359_ = lean_nat_add(v___x_2357_, v___x_2358_);
lean_dec(v___x_2357_);
v___x_2360_ = lp_lean_x2dftml_LeanFtml_splitNlRuns_go(v_bs_2356_, v___x_2359_);
lean_dec(v___x_2359_);
return v___x_2360_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_anchorElemProcess_spec__0(lean_object* v_attrs_2361_, lean_object* v_x_2362_, lean_object* v_x_2363_){
_start:
{
if (lean_obj_tag(v_x_2363_) == 0)
{
lean_dec(v_attrs_2361_);
return v_x_2362_;
}
else
{
lean_object* v_snd_2364_; lean_object* v_head_2365_; lean_object* v_tail_2366_; lean_object* v_fst_2367_; lean_object* v___x_2369_; uint8_t v_isShared_2370_; uint8_t v_isSharedCheck_2418_; 
v_snd_2364_ = lean_ctor_get(v_x_2362_, 1);
lean_inc(v_snd_2364_);
v_head_2365_ = lean_ctor_get(v_x_2363_, 0);
lean_inc(v_head_2365_);
v_tail_2366_ = lean_ctor_get(v_x_2363_, 1);
lean_inc(v_tail_2366_);
lean_dec_ref_known(v_x_2363_, 2);
v_fst_2367_ = lean_ctor_get(v_x_2362_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v_x_2362_);
if (v_isSharedCheck_2418_ == 0)
{
lean_object* v_unused_2419_; 
v_unused_2419_ = lean_ctor_get(v_x_2362_, 1);
lean_dec(v_unused_2419_);
v___x_2369_ = v_x_2362_;
v_isShared_2370_ = v_isSharedCheck_2418_;
goto v_resetjp_2368_;
}
else
{
lean_inc(v_fst_2367_);
lean_dec(v_x_2362_);
v___x_2369_ = lean_box(0);
v_isShared_2370_ = v_isSharedCheck_2418_;
goto v_resetjp_2368_;
}
v_resetjp_2368_:
{
lean_object* v_fst_2371_; lean_object* v_snd_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2417_; 
v_fst_2371_ = lean_ctor_get(v_snd_2364_, 0);
v_snd_2372_ = lean_ctor_get(v_snd_2364_, 1);
v_isSharedCheck_2417_ = !lean_is_exclusive(v_snd_2364_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2374_ = v_snd_2364_;
v_isShared_2375_ = v_isSharedCheck_2417_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_snd_2372_);
lean_inc(v_fst_2371_);
lean_dec(v_snd_2364_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2417_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; uint8_t v___x_2379_; 
v___x_2376_ = lean_unsigned_to_nat(2u);
v___x_2377_ = lean_nat_mod(v_snd_2372_, v___x_2376_);
v___x_2378_ = lean_unsigned_to_nat(1u);
v___x_2379_ = lean_nat_dec_eq(v___x_2377_, v___x_2378_);
lean_dec(v___x_2377_);
if (v___x_2379_ == 0)
{
lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v_fst_2383_; lean_object* v_snd_2384_; lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2407_; 
lean_del_object(v___x_2374_);
lean_del_object(v___x_2369_);
v___x_2380_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__0));
lean_inc(v_attrs_2361_);
v___x_2381_ = lp_lean_x2dftml_LeanFtml_anchorStartOpts(v_attrs_2361_);
v___x_2382_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_2380_, v___x_2381_, v_fst_2371_);
v_fst_2383_ = lean_ctor_get(v___x_2382_, 0);
v_snd_2384_ = lean_ctor_get(v___x_2382_, 1);
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2386_ = v___x_2382_;
v_isShared_2387_ = v_isSharedCheck_2407_;
goto v_resetjp_2385_;
}
else
{
lean_inc(v_snd_2384_);
lean_inc(v_fst_2383_);
lean_dec(v___x_2382_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2407_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v_fst_2390_; lean_object* v_snd_2391_; lean_object* v___x_2393_; uint8_t v_isShared_2394_; uint8_t v_isSharedCheck_2406_; 
v___x_2388_ = lp_lean_x2dftml_LeanFtml_anchorEndOpts;
v___x_2389_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_2380_, v___x_2388_, v_snd_2384_);
v_fst_2390_ = lean_ctor_get(v___x_2389_, 0);
v_snd_2391_ = lean_ctor_get(v___x_2389_, 1);
v_isSharedCheck_2406_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2393_ = v___x_2389_;
v_isShared_2394_ = v_isSharedCheck_2406_;
goto v_resetjp_2392_;
}
else
{
lean_inc(v_snd_2391_);
lean_inc(v_fst_2390_);
lean_dec(v___x_2389_);
v___x_2393_ = lean_box(0);
v_isShared_2394_ = v_isSharedCheck_2406_;
goto v_resetjp_2392_;
}
v_resetjp_2392_:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2400_; 
v___x_2395_ = l_List_appendTR___redArg(v_fst_2367_, v_fst_2383_);
v___x_2396_ = l_List_appendTR___redArg(v___x_2395_, v_head_2365_);
v___x_2397_ = l_List_appendTR___redArg(v___x_2396_, v_fst_2390_);
v___x_2398_ = lean_nat_add(v_snd_2372_, v___x_2378_);
lean_dec(v_snd_2372_);
if (v_isShared_2394_ == 0)
{
lean_ctor_set(v___x_2393_, 1, v___x_2398_);
lean_ctor_set(v___x_2393_, 0, v_snd_2391_);
v___x_2400_ = v___x_2393_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v_snd_2391_);
lean_ctor_set(v_reuseFailAlloc_2405_, 1, v___x_2398_);
v___x_2400_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
lean_object* v___x_2402_; 
if (v_isShared_2387_ == 0)
{
lean_ctor_set(v___x_2386_, 1, v___x_2400_);
lean_ctor_set(v___x_2386_, 0, v___x_2397_);
v___x_2402_ = v___x_2386_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v___x_2397_);
lean_ctor_set(v_reuseFailAlloc_2404_, 1, v___x_2400_);
v___x_2402_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
v_x_2362_ = v___x_2402_;
v_x_2363_ = v_tail_2366_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2411_; 
v___x_2408_ = l_List_appendTR___redArg(v_fst_2367_, v_head_2365_);
v___x_2409_ = lean_nat_add(v_snd_2372_, v___x_2378_);
lean_dec(v_snd_2372_);
if (v_isShared_2375_ == 0)
{
lean_ctor_set(v___x_2374_, 1, v___x_2409_);
v___x_2411_ = v___x_2374_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v_fst_2371_);
lean_ctor_set(v_reuseFailAlloc_2416_, 1, v___x_2409_);
v___x_2411_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
lean_object* v___x_2413_; 
if (v_isShared_2370_ == 0)
{
lean_ctor_set(v___x_2369_, 1, v___x_2411_);
lean_ctor_set(v___x_2369_, 0, v___x_2408_);
v___x_2413_ = v___x_2369_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v___x_2408_);
lean_ctor_set(v_reuseFailAlloc_2415_, 1, v___x_2411_);
v___x_2413_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
v_x_2362_ = v___x_2413_;
v_x_2363_ = v_tail_2366_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemProcess(lean_object* v_src_2426_, lean_object* v_fullEnd_2427_, uint8_t v_scored_2428_, lean_object* v_g2_2429_, lean_object* v_body_2430_, lean_object* v_out_2431_, lean_object* v_toks_2432_, lean_object* v_anchors_2433_){
_start:
{
lean_object* v___y_2435_; lean_object* v___y_2436_; lean_object* v___y_2437_; lean_object* v___y_2438_; lean_object* v___y_2439_; lean_object* v___y_2440_; lean_object* v___y_2441_; lean_object* v___y_2442_; lean_object* v___y_2443_; lean_object* v_attrs_2452_; lean_object* v___y_2454_; lean_object* v___y_2455_; lean_object* v___y_2456_; lean_object* v___y_2457_; lean_object* v___y_2458_; lean_object* v___y_2487_; lean_object* v___y_2488_; lean_object* v___y_2489_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v___y_2529_; lean_object* v___y_2532_; uint8_t v___y_2533_; lean_object* v___y_2534_; lean_object* v___y_2535_; lean_object* v___y_2536_; lean_object* v___y_2537_; lean_object* v___y_2548_; uint8_t v___y_2549_; lean_object* v___y_2550_; lean_object* v___y_2551_; lean_object* v___y_2552_; uint8_t v___y_2555_; lean_object* v___y_2556_; uint8_t v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2573_; uint8_t v___y_2574_; lean_object* v___y_2575_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2578_; uint8_t v___y_2579_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___y_2590_; lean_object* v___y_2591_; uint8_t v___y_2592_; lean_object* v___y_2603_; lean_object* v___y_2604_; lean_object* v___y_2612_; lean_object* v___y_2613_; lean_object* v___y_2621_; 
v_attrs_2452_ = lp_lean_x2dftml_LeanFtml_buildAnchorAttrs(v_g2_2429_);
if (v_scored_2428_ == 0)
{
lean_object* v___x_2628_; 
lean_inc(v_body_2430_);
v___x_2628_ = lp_lean_x2dftml_LeanFtml_anchorOpenerSearch(v_body_2430_);
if (lean_obj_tag(v___x_2628_) == 0)
{
goto v___jp_2626_;
}
else
{
lean_object* v_val_2629_; lean_object* v_snd_2630_; lean_object* v_fst_2631_; lean_object* v_fst_2632_; lean_object* v_snd_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v_fst_2637_; lean_object* v_snd_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v_fst_2641_; lean_object* v_snd_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2711_; 
v_val_2629_ = lean_ctor_get(v___x_2628_, 0);
lean_inc(v_val_2629_);
lean_dec_ref_known(v___x_2628_, 1);
v_snd_2630_ = lean_ctor_get(v_val_2629_, 1);
lean_inc(v_snd_2630_);
v_fst_2631_ = lean_ctor_get(v_val_2629_, 0);
lean_inc(v_fst_2631_);
lean_dec(v_val_2629_);
v_fst_2632_ = lean_ctor_get(v_snd_2630_, 0);
lean_inc(v_fst_2632_);
v_snd_2633_ = lean_ctor_get(v_snd_2630_, 1);
lean_inc(v_snd_2633_);
lean_dec(v_snd_2630_);
v___x_2634_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__0));
v___x_2635_ = lp_lean_x2dftml_LeanFtml_anchorStartOpts(v_attrs_2452_);
v___x_2636_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_2634_, v___x_2635_, v_toks_2432_);
v_fst_2637_ = lean_ctor_get(v___x_2636_, 0);
lean_inc(v_fst_2637_);
v_snd_2638_ = lean_ctor_get(v___x_2636_, 1);
lean_inc(v_snd_2638_);
lean_dec_ref(v___x_2636_);
v___x_2639_ = lp_lean_x2dftml_LeanFtml_anchorEndOpts;
v___x_2640_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_2634_, v___x_2639_, v_snd_2638_);
v_fst_2641_ = lean_ctor_get(v___x_2640_, 0);
v_snd_2642_ = lean_ctor_get(v___x_2640_, 1);
v_isSharedCheck_2711_ = !lean_is_exclusive(v___x_2640_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2644_ = v___x_2640_;
v_isShared_2645_ = v_isSharedCheck_2711_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_snd_2642_);
lean_inc(v_fst_2641_);
lean_dec(v___x_2640_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2711_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
lean_object* v_innerAttrs_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v_fst_2649_; lean_object* v_snd_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2710_; 
v_innerAttrs_2646_ = lp_lean_x2dftml_LeanFtml_buildAnchorAttrs(v_fst_2632_);
lean_dec(v_fst_2632_);
v___x_2647_ = lp_lean_x2dftml_LeanFtml_anchorStartOpts(v_innerAttrs_2646_);
v___x_2648_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_2634_, v___x_2647_, v_snd_2642_);
v_fst_2649_ = lean_ctor_get(v___x_2648_, 0);
v_snd_2650_ = lean_ctor_get(v___x_2648_, 1);
v_isSharedCheck_2710_ = !lean_is_exclusive(v___x_2648_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2652_ = v___x_2648_;
v_isShared_2653_ = v_isSharedCheck_2710_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_snd_2650_);
lean_inc(v_fst_2649_);
lean_dec(v___x_2648_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2710_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2654_; lean_object* v_fst_2655_; lean_object* v_snd_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2709_; 
v___x_2654_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_2634_, v___x_2639_, v_snd_2650_);
v_fst_2655_ = lean_ctor_get(v___x_2654_, 0);
v_snd_2656_ = lean_ctor_get(v___x_2654_, 1);
v_isSharedCheck_2709_ = !lean_is_exclusive(v___x_2654_);
if (v_isSharedCheck_2709_ == 0)
{
v___x_2658_ = v___x_2654_;
v_isShared_2659_ = v_isSharedCheck_2709_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_snd_2656_);
lean_inc(v_fst_2655_);
lean_dec(v___x_2654_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2709_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
lean_object* v___x_2660_; lean_object* v_outerBody_2661_; lean_object* v___x_2662_; lean_object* v_innerBody_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v_out2_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2660_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonTail___closed__0));
lean_inc(v_fst_2631_);
lean_inc(v_body_2430_);
v_outerBody_2661_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_body_2430_, v_body_2430_, v_fst_2631_, v___x_2660_);
v___x_2662_ = lean_nat_add(v_fst_2631_, v_snd_2633_);
lean_dec(v_snd_2633_);
lean_dec(v_fst_2631_);
v_innerBody_2663_ = l_List_drop___redArg(v___x_2662_, v_body_2430_);
lean_dec(v_body_2430_);
v___x_2664_ = l_List_appendTR___redArg(v_out_2431_, v_fst_2637_);
v___x_2665_ = l_List_appendTR___redArg(v___x_2664_, v_outerBody_2661_);
v___x_2666_ = l_List_appendTR___redArg(v___x_2665_, v_fst_2641_);
v___x_2667_ = l_List_appendTR___redArg(v___x_2666_, v_fst_2649_);
v___x_2668_ = l_List_appendTR___redArg(v___x_2667_, v_innerBody_2663_);
v_out2_2669_ = l_List_appendTR___redArg(v___x_2668_, v_fst_2655_);
lean_inc(v_fullEnd_2427_);
v___x_2670_ = l_List_drop___redArg(v_fullEnd_2427_, v_src_2426_);
v___x_2671_ = lp_lean_x2dftml_LeanFtml_anchorTrailingClose(v___x_2670_);
if (lean_obj_tag(v___x_2671_) == 0)
{
lean_object* v___x_2673_; 
if (v_isShared_2659_ == 0)
{
lean_ctor_set(v___x_2658_, 1, v_fullEnd_2427_);
lean_ctor_set(v___x_2658_, 0, v_anchors_2433_);
v___x_2673_ = v___x_2658_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v_anchors_2433_);
lean_ctor_set(v_reuseFailAlloc_2680_, 1, v_fullEnd_2427_);
v___x_2673_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
lean_object* v___x_2675_; 
if (v_isShared_2653_ == 0)
{
lean_ctor_set(v___x_2652_, 1, v___x_2673_);
lean_ctor_set(v___x_2652_, 0, v_snd_2656_);
v___x_2675_ = v___x_2652_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v_snd_2656_);
lean_ctor_set(v_reuseFailAlloc_2679_, 1, v___x_2673_);
v___x_2675_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
lean_object* v___x_2677_; 
if (v_isShared_2645_ == 0)
{
lean_ctor_set(v___x_2644_, 1, v___x_2675_);
lean_ctor_set(v___x_2644_, 0, v_out2_2669_);
v___x_2677_ = v___x_2644_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_out2_2669_);
lean_ctor_set(v_reuseFailAlloc_2678_, 1, v___x_2675_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
}
else
{
lean_object* v_val_2681_; lean_object* v_fst_2682_; lean_object* v_snd_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2708_; 
lean_del_object(v___x_2644_);
v_val_2681_ = lean_ctor_get(v___x_2671_, 0);
lean_inc(v_val_2681_);
lean_dec_ref_known(v___x_2671_, 1);
v_fst_2682_ = lean_ctor_get(v_val_2681_, 0);
v_snd_2683_ = lean_ctor_get(v_val_2681_, 1);
v_isSharedCheck_2708_ = !lean_is_exclusive(v_val_2681_);
if (v_isSharedCheck_2708_ == 0)
{
v___x_2685_ = v_val_2681_;
v_isShared_2686_ = v_isSharedCheck_2708_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_snd_2683_);
lean_inc(v_fst_2682_);
lean_dec(v_val_2681_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2708_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2687_; 
lean_inc(v_fst_2682_);
v___x_2687_ = lp_lean_x2dftml_LeanFtml_anchorOpenerSearch(v_fst_2682_);
if (lean_obj_tag(v___x_2687_) == 0)
{
lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2691_; 
v___x_2688_ = l_List_appendTR___redArg(v_out2_2669_, v_fst_2682_);
v___x_2689_ = lean_nat_add(v_fullEnd_2427_, v_snd_2683_);
lean_dec(v_snd_2683_);
lean_dec(v_fullEnd_2427_);
if (v_isShared_2686_ == 0)
{
lean_ctor_set(v___x_2685_, 1, v___x_2689_);
lean_ctor_set(v___x_2685_, 0, v_anchors_2433_);
v___x_2691_ = v___x_2685_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v_anchors_2433_);
lean_ctor_set(v_reuseFailAlloc_2698_, 1, v___x_2689_);
v___x_2691_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
lean_object* v___x_2693_; 
if (v_isShared_2659_ == 0)
{
lean_ctor_set(v___x_2658_, 1, v___x_2691_);
lean_ctor_set(v___x_2658_, 0, v_snd_2656_);
v___x_2693_ = v___x_2658_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_snd_2656_);
lean_ctor_set(v_reuseFailAlloc_2697_, 1, v___x_2691_);
v___x_2693_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
lean_object* v___x_2695_; 
if (v_isShared_2653_ == 0)
{
lean_ctor_set(v___x_2652_, 1, v___x_2693_);
lean_ctor_set(v___x_2652_, 0, v___x_2688_);
v___x_2695_ = v___x_2652_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v___x_2688_);
lean_ctor_set(v_reuseFailAlloc_2696_, 1, v___x_2693_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
return v___x_2695_;
}
}
}
}
else
{
lean_object* v___x_2700_; 
lean_dec_ref_known(v___x_2687_, 1);
lean_dec(v_snd_2683_);
lean_dec(v_fst_2682_);
if (v_isShared_2686_ == 0)
{
lean_ctor_set(v___x_2685_, 1, v_fullEnd_2427_);
lean_ctor_set(v___x_2685_, 0, v_anchors_2433_);
v___x_2700_ = v___x_2685_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v_anchors_2433_);
lean_ctor_set(v_reuseFailAlloc_2707_, 1, v_fullEnd_2427_);
v___x_2700_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
lean_object* v___x_2702_; 
if (v_isShared_2659_ == 0)
{
lean_ctor_set(v___x_2658_, 1, v___x_2700_);
lean_ctor_set(v___x_2658_, 0, v_snd_2656_);
v___x_2702_ = v___x_2658_;
goto v_reusejp_2701_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v_snd_2656_);
lean_ctor_set(v_reuseFailAlloc_2706_, 1, v___x_2700_);
v___x_2702_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2701_;
}
v_reusejp_2701_:
{
lean_object* v___x_2704_; 
if (v_isShared_2653_ == 0)
{
lean_ctor_set(v___x_2652_, 1, v___x_2702_);
lean_ctor_set(v___x_2652_, 0, v_out2_2669_);
v___x_2704_ = v___x_2652_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v_out2_2669_);
lean_ctor_set(v_reuseFailAlloc_2705_, 1, v___x_2702_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
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
else
{
goto v___jp_2626_;
}
v___jp_2434_:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
lean_inc(v___y_2435_);
v___x_2444_ = l_List_appendTR___redArg(v___y_2440_, v___y_2435_);
v___x_2445_ = l_List_appendTR___redArg(v___x_2444_, v___y_2441_);
v___x_2446_ = l_List_appendTR___redArg(v___x_2445_, v___y_2439_);
v___x_2447_ = l_List_appendTR___redArg(v___x_2446_, v___y_2438_);
lean_inc(v___y_2442_);
v___x_2448_ = l_List_appendTR___redArg(v___x_2447_, v___y_2442_);
v___x_2449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2449_, 0, v___y_2443_);
lean_ctor_set(v___x_2449_, 1, v___y_2437_);
v___x_2450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2450_, 0, v___y_2436_);
lean_ctor_set(v___x_2450_, 1, v___x_2449_);
v___x_2451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2451_, 0, v___x_2448_);
lean_ctor_set(v___x_2451_, 1, v___x_2450_);
return v___x_2451_;
}
v___jp_2453_:
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v_fst_2462_; lean_object* v_snd_2463_; lean_object* v___x_2465_; uint8_t v_isShared_2466_; uint8_t v_isSharedCheck_2485_; 
v___x_2459_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_namedAnchorProcess___closed__0));
v___x_2460_ = lp_lean_x2dftml_LeanFtml_anchorStartOpts(v_attrs_2452_);
v___x_2461_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_2459_, v___x_2460_, v_toks_2432_);
v_fst_2462_ = lean_ctor_get(v___x_2461_, 0);
v_snd_2463_ = lean_ctor_get(v___x_2461_, 1);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2461_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2465_ = v___x_2461_;
v_isShared_2466_ = v_isSharedCheck_2485_;
goto v_resetjp_2464_;
}
else
{
lean_inc(v_snd_2463_);
lean_inc(v_fst_2462_);
lean_dec(v___x_2461_);
v___x_2465_ = lean_box(0);
v_isShared_2466_ = v_isSharedCheck_2485_;
goto v_resetjp_2464_;
}
v_resetjp_2464_:
{
lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2467_ = lp_lean_x2dftml_LeanFtml_anchorEndOpts;
v___x_2468_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_2459_, v___x_2467_, v_snd_2463_);
if (v_scored_2428_ == 0)
{
lean_object* v_fst_2469_; lean_object* v_snd_2470_; 
lean_del_object(v___x_2465_);
v_fst_2469_ = lean_ctor_get(v___x_2468_, 0);
lean_inc(v_fst_2469_);
v_snd_2470_ = lean_ctor_get(v___x_2468_, 1);
lean_inc(v_snd_2470_);
lean_dec_ref(v___x_2468_);
v___y_2435_ = v___y_2454_;
v___y_2436_ = v_snd_2470_;
v___y_2437_ = v___y_2457_;
v___y_2438_ = v_fst_2469_;
v___y_2439_ = v___y_2456_;
v___y_2440_ = v___y_2455_;
v___y_2441_ = v_fst_2462_;
v___y_2442_ = v___y_2458_;
v___y_2443_ = v_anchors_2433_;
goto v___jp_2434_;
}
else
{
lean_object* v_fst_2471_; lean_object* v_snd_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2484_; 
v_fst_2471_ = lean_ctor_get(v___x_2468_, 0);
v_snd_2472_ = lean_ctor_get(v___x_2468_, 1);
v_isSharedCheck_2484_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2484_ == 0)
{
v___x_2474_ = v___x_2468_;
v_isShared_2475_ = v_isSharedCheck_2484_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_snd_2472_);
lean_inc(v_fst_2471_);
lean_dec(v___x_2468_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2484_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2477_; 
lean_inc(v_fst_2462_);
lean_inc(v_fst_2471_);
if (v_isShared_2475_ == 0)
{
lean_ctor_set(v___x_2474_, 1, v_fst_2462_);
v___x_2477_ = v___x_2474_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v_fst_2471_);
lean_ctor_set(v_reuseFailAlloc_2483_, 1, v_fst_2462_);
v___x_2477_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
lean_object* v___x_2478_; lean_object* v___x_2480_; 
v___x_2478_ = lean_box(0);
if (v_isShared_2466_ == 0)
{
lean_ctor_set_tag(v___x_2465_, 1);
lean_ctor_set(v___x_2465_, 1, v___x_2478_);
lean_ctor_set(v___x_2465_, 0, v___x_2477_);
v___x_2480_ = v___x_2465_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v___x_2477_);
lean_ctor_set(v_reuseFailAlloc_2482_, 1, v___x_2478_);
v___x_2480_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
lean_object* v___x_2481_; 
v___x_2481_ = l_List_appendTR___redArg(v_anchors_2433_, v___x_2480_);
v___y_2435_ = v___y_2454_;
v___y_2436_ = v_snd_2472_;
v___y_2437_ = v___y_2457_;
v___y_2438_ = v_fst_2471_;
v___y_2439_ = v___y_2456_;
v___y_2440_ = v___y_2455_;
v___y_2441_ = v_fst_2462_;
v___y_2442_ = v___y_2458_;
v___y_2443_ = v___x_2481_;
goto v___jp_2434_;
}
}
}
}
}
}
v___jp_2486_:
{
if (v_scored_2428_ == 0)
{
lean_object* v___x_2493_; lean_object* v___x_2494_; uint8_t v___x_2495_; 
v___x_2493_ = lean_box(0);
v___x_2494_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorElemProcess___closed__1));
v___x_2495_ = lp_lean_x2dftml_LeanFtml_bytesContains(v___y_2490_, v___x_2494_);
if (v___x_2495_ == 0)
{
lean_dec(v___y_2488_);
v___y_2454_ = v___y_2487_;
v___y_2455_ = v___y_2491_;
v___y_2456_ = v___y_2490_;
v___y_2457_ = v___y_2489_;
v___y_2458_ = v___y_2492_;
goto v___jp_2453_;
}
else
{
lean_object* v___x_2496_; uint8_t v___x_2497_; 
v___x_2496_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_userMatchAt___closed__3, &lp_lean_x2dftml_LeanFtml_userMatchAt___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_userMatchAt___closed__3);
v___x_2497_ = lp_lean_x2dftml_LeanFtml_bytesContains(v___y_2490_, v___x_2496_);
if (v___x_2497_ == 0)
{
lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v_snd_2502_; lean_object* v_fst_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2523_; 
v___x_2498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2498_, 0, v_toks_2432_);
lean_ctor_set(v___x_2498_, 1, v___y_2488_);
v___x_2499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2493_);
lean_ctor_set(v___x_2499_, 1, v___x_2498_);
v___x_2500_ = lp_lean_x2dftml_LeanFtml_splitNlRuns(v___y_2490_);
v___x_2501_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_anchorElemProcess_spec__0(v_attrs_2452_, v___x_2499_, v___x_2500_);
v_snd_2502_ = lean_ctor_get(v___x_2501_, 1);
v_fst_2503_ = lean_ctor_get(v___x_2501_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v___x_2501_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2505_ = v___x_2501_;
v_isShared_2506_ = v_isSharedCheck_2523_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_snd_2502_);
lean_inc(v_fst_2503_);
lean_dec(v___x_2501_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2523_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v_fst_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2521_; 
v_fst_2507_ = lean_ctor_get(v_snd_2502_, 0);
v_isSharedCheck_2521_ = !lean_is_exclusive(v_snd_2502_);
if (v_isSharedCheck_2521_ == 0)
{
lean_object* v_unused_2522_; 
v_unused_2522_ = lean_ctor_get(v_snd_2502_, 1);
lean_dec(v_unused_2522_);
v___x_2509_ = v_snd_2502_;
v_isShared_2510_ = v_isSharedCheck_2521_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_fst_2507_);
lean_dec(v_snd_2502_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2521_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2515_; 
lean_inc(v___y_2487_);
v___x_2511_ = l_List_appendTR___redArg(v___y_2491_, v___y_2487_);
v___x_2512_ = l_List_appendTR___redArg(v___x_2511_, v_fst_2503_);
lean_inc(v___y_2492_);
v___x_2513_ = l_List_appendTR___redArg(v___x_2512_, v___y_2492_);
if (v_isShared_2510_ == 0)
{
lean_ctor_set(v___x_2509_, 1, v___y_2489_);
lean_ctor_set(v___x_2509_, 0, v_anchors_2433_);
v___x_2515_ = v___x_2509_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v_anchors_2433_);
lean_ctor_set(v_reuseFailAlloc_2520_, 1, v___y_2489_);
v___x_2515_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
lean_object* v___x_2517_; 
if (v_isShared_2506_ == 0)
{
lean_ctor_set(v___x_2505_, 1, v___x_2515_);
lean_ctor_set(v___x_2505_, 0, v_fst_2507_);
v___x_2517_ = v___x_2505_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v_fst_2507_);
lean_ctor_set(v_reuseFailAlloc_2519_, 1, v___x_2515_);
v___x_2517_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
lean_object* v___x_2518_; 
v___x_2518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2518_, 0, v___x_2513_);
lean_ctor_set(v___x_2518_, 1, v___x_2517_);
return v___x_2518_;
}
}
}
}
}
else
{
lean_dec(v___y_2488_);
v___y_2454_ = v___y_2487_;
v___y_2455_ = v___y_2491_;
v___y_2456_ = v___y_2490_;
v___y_2457_ = v___y_2489_;
v___y_2458_ = v___y_2492_;
goto v___jp_2453_;
}
}
}
else
{
lean_dec(v___y_2488_);
v___y_2454_ = v___y_2487_;
v___y_2455_ = v___y_2491_;
v___y_2456_ = v___y_2490_;
v___y_2457_ = v___y_2489_;
v___y_2458_ = v___y_2492_;
goto v___jp_2453_;
}
}
v___jp_2524_:
{
lean_object* v___x_2530_; 
v___x_2530_ = lean_box(0);
v___y_2487_ = v___y_2525_;
v___y_2488_ = v___y_2526_;
v___y_2489_ = v___y_2529_;
v___y_2490_ = v___y_2528_;
v___y_2491_ = v___y_2527_;
v___y_2492_ = v___x_2530_;
goto v___jp_2486_;
}
v___jp_2531_:
{
if (v___y_2533_ == 0)
{
v___y_2525_ = v___y_2537_;
v___y_2526_ = v___y_2532_;
v___y_2527_ = v___y_2534_;
v___y_2528_ = v___y_2535_;
v___y_2529_ = v___y_2536_;
goto v___jp_2524_;
}
else
{
lean_object* v___x_2538_; 
lean_inc(v___y_2536_);
v___x_2538_ = l_List_get_x3fInternal___redArg(v_src_2426_, v___y_2536_);
if (lean_obj_tag(v___x_2538_) == 0)
{
v___y_2525_ = v___y_2537_;
v___y_2526_ = v___y_2532_;
v___y_2527_ = v___y_2534_;
v___y_2528_ = v___y_2535_;
v___y_2529_ = v___y_2536_;
goto v___jp_2524_;
}
else
{
lean_object* v_val_2539_; lean_object* v___x_2540_; uint8_t v___x_2541_; 
v_val_2539_ = lean_ctor_get(v___x_2538_, 0);
lean_inc(v_val_2539_);
lean_dec_ref_known(v___x_2538_, 1);
v___x_2540_ = lean_unsigned_to_nat(10u);
v___x_2541_ = lean_nat_dec_eq(v_val_2539_, v___x_2540_);
if (v___x_2541_ == 0)
{
lean_object* v___x_2542_; uint8_t v___x_2543_; 
v___x_2542_ = lean_unsigned_to_nat(32u);
v___x_2543_ = lean_nat_dec_eq(v_val_2539_, v___x_2542_);
if (v___x_2543_ == 0)
{
lean_object* v___x_2544_; uint8_t v___x_2545_; 
v___x_2544_ = lean_unsigned_to_nat(9u);
v___x_2545_ = lean_nat_dec_eq(v_val_2539_, v___x_2544_);
lean_dec(v_val_2539_);
if (v___x_2545_ == 0)
{
lean_object* v___x_2546_; 
v___x_2546_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_socialReplacement___closed__5));
v___y_2487_ = v___y_2537_;
v___y_2488_ = v___y_2532_;
v___y_2489_ = v___y_2536_;
v___y_2490_ = v___y_2535_;
v___y_2491_ = v___y_2534_;
v___y_2492_ = v___x_2546_;
goto v___jp_2486_;
}
else
{
v___y_2525_ = v___y_2537_;
v___y_2526_ = v___y_2532_;
v___y_2527_ = v___y_2534_;
v___y_2528_ = v___y_2535_;
v___y_2529_ = v___y_2536_;
goto v___jp_2524_;
}
}
else
{
lean_dec(v_val_2539_);
v___y_2525_ = v___y_2537_;
v___y_2526_ = v___y_2532_;
v___y_2527_ = v___y_2534_;
v___y_2528_ = v___y_2535_;
v___y_2529_ = v___y_2536_;
goto v___jp_2524_;
}
}
else
{
lean_dec(v_val_2539_);
v___y_2525_ = v___y_2537_;
v___y_2526_ = v___y_2532_;
v___y_2527_ = v___y_2534_;
v___y_2528_ = v___y_2535_;
v___y_2529_ = v___y_2536_;
goto v___jp_2524_;
}
}
}
}
v___jp_2547_:
{
lean_object* v___x_2553_; 
v___x_2553_ = lean_box(0);
v___y_2532_ = v___y_2548_;
v___y_2533_ = v___y_2549_;
v___y_2534_ = v___y_2552_;
v___y_2535_ = v___y_2551_;
v___y_2536_ = v___y_2550_;
v___y_2537_ = v___x_2553_;
goto v___jp_2531_;
}
v___jp_2554_:
{
lean_object* v_nextPos_2561_; 
v_nextPos_2561_ = lean_nat_add(v_fullEnd_2427_, v___y_2560_);
lean_dec(v___y_2560_);
lean_dec(v_fullEnd_2427_);
if (v___y_2555_ == 0)
{
v___y_2548_ = v___y_2556_;
v___y_2549_ = v___y_2557_;
v___y_2550_ = v_nextPos_2561_;
v___y_2551_ = v___y_2558_;
v___y_2552_ = v___y_2559_;
goto v___jp_2547_;
}
else
{
uint8_t v___x_2562_; 
v___x_2562_ = l_List_isEmpty___redArg(v___y_2559_);
if (v___x_2562_ == 0)
{
lean_object* v___x_2563_; 
v___x_2563_ = l_List_getLast_x3f___redArg(v___y_2559_);
if (lean_obj_tag(v___x_2563_) == 0)
{
v___y_2548_ = v___y_2556_;
v___y_2549_ = v___y_2557_;
v___y_2550_ = v_nextPos_2561_;
v___y_2551_ = v___y_2558_;
v___y_2552_ = v___y_2559_;
goto v___jp_2547_;
}
else
{
lean_object* v_val_2564_; lean_object* v___x_2565_; uint8_t v___x_2566_; 
v_val_2564_ = lean_ctor_get(v___x_2563_, 0);
lean_inc(v_val_2564_);
lean_dec_ref_known(v___x_2563_, 1);
v___x_2565_ = lean_unsigned_to_nat(10u);
v___x_2566_ = lean_nat_dec_eq(v_val_2564_, v___x_2565_);
if (v___x_2566_ == 0)
{
lean_object* v___x_2567_; uint8_t v___x_2568_; 
v___x_2567_ = lean_unsigned_to_nat(32u);
v___x_2568_ = lean_nat_dec_eq(v_val_2564_, v___x_2567_);
if (v___x_2568_ == 0)
{
lean_object* v___x_2569_; uint8_t v___x_2570_; 
v___x_2569_ = lean_unsigned_to_nat(9u);
v___x_2570_ = lean_nat_dec_eq(v_val_2564_, v___x_2569_);
lean_dec(v_val_2564_);
if (v___x_2570_ == 0)
{
lean_object* v___x_2571_; 
v___x_2571_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_socialReplacement___closed__5));
v___y_2532_ = v___y_2556_;
v___y_2533_ = v___y_2557_;
v___y_2534_ = v___y_2559_;
v___y_2535_ = v___y_2558_;
v___y_2536_ = v_nextPos_2561_;
v___y_2537_ = v___x_2571_;
goto v___jp_2531_;
}
else
{
v___y_2548_ = v___y_2556_;
v___y_2549_ = v___y_2557_;
v___y_2550_ = v_nextPos_2561_;
v___y_2551_ = v___y_2558_;
v___y_2552_ = v___y_2559_;
goto v___jp_2547_;
}
}
else
{
lean_dec(v_val_2564_);
v___y_2548_ = v___y_2556_;
v___y_2549_ = v___y_2557_;
v___y_2550_ = v_nextPos_2561_;
v___y_2551_ = v___y_2558_;
v___y_2552_ = v___y_2559_;
goto v___jp_2547_;
}
}
else
{
lean_dec(v_val_2564_);
v___y_2548_ = v___y_2556_;
v___y_2549_ = v___y_2557_;
v___y_2550_ = v_nextPos_2561_;
v___y_2551_ = v___y_2558_;
v___y_2552_ = v___y_2559_;
goto v___jp_2547_;
}
}
}
else
{
v___y_2548_ = v___y_2556_;
v___y_2549_ = v___y_2557_;
v___y_2550_ = v_nextPos_2561_;
v___y_2551_ = v___y_2558_;
v___y_2552_ = v___y_2559_;
goto v___jp_2547_;
}
}
}
v___jp_2572_:
{
lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v_bodyC_2583_; 
v___x_2580_ = l_List_lengthTR___redArg(v___y_2575_);
v___x_2581_ = l_List_lengthTR___redArg(v___y_2578_);
lean_dec(v___y_2578_);
v___x_2582_ = lean_nat_sub(v___x_2580_, v___x_2581_);
lean_dec(v___x_2581_);
lean_dec(v___x_2580_);
lean_inc(v___y_2575_);
v_bodyC_2583_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___y_2575_, v___y_2575_, v___x_2582_, v___y_2577_);
lean_dec(v___y_2575_);
if (v_scored_2428_ == 0)
{
lean_inc(v___y_2573_);
v___y_2555_ = v___y_2574_;
v___y_2556_ = v___y_2573_;
v___y_2557_ = v___y_2579_;
v___y_2558_ = v_bodyC_2583_;
v___y_2559_ = v___y_2576_;
v___y_2560_ = v___y_2573_;
goto v___jp_2554_;
}
else
{
lean_object* v___x_2584_; lean_object* v___x_2585_; 
lean_inc(v_fullEnd_2427_);
v___x_2584_ = l_List_drop___redArg(v_fullEnd_2427_, v_src_2426_);
v___x_2585_ = lp_lean_x2dftml_LeanFtml_scoredNlAdvance(v___x_2584_);
lean_dec(v___x_2584_);
v___y_2555_ = v___y_2574_;
v___y_2556_ = v___y_2573_;
v___y_2557_ = v___y_2579_;
v___y_2558_ = v_bodyC_2583_;
v___y_2559_ = v___y_2576_;
v___y_2560_ = v___x_2585_;
goto v___jp_2554_;
}
}
v___jp_2586_:
{
lean_object* v___x_2593_; lean_object* v_bodyB_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v_trailRun_2597_; uint8_t v___x_2598_; 
v___x_2593_ = l_List_lengthTR___redArg(v___y_2588_);
lean_dec(v___y_2588_);
v_bodyB_2594_ = l_List_drop___redArg(v___x_2593_, v___y_2591_);
lean_dec(v___y_2591_);
lean_inc(v_bodyB_2594_);
v___x_2595_ = l_List_reverse___redArg(v_bodyB_2594_);
lean_inc_ref(v___y_2590_);
lean_inc(v___x_2595_);
v___x_2596_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_namedAnchorProcess_spec__1(v___x_2595_, v___x_2595_, v___y_2590_);
lean_dec(v___x_2595_);
v_trailRun_2597_ = l_List_reverse___redArg(v___x_2596_);
v___x_2598_ = l_List_isEmpty___redArg(v_bodyB_2594_);
if (v___x_2598_ == 0)
{
uint8_t v___x_2599_; 
v___x_2599_ = l_List_isEmpty___redArg(v_trailRun_2597_);
if (v___x_2599_ == 0)
{
uint8_t v___x_2600_; 
v___x_2600_ = 1;
v___y_2573_ = v___y_2587_;
v___y_2574_ = v___y_2592_;
v___y_2575_ = v_bodyB_2594_;
v___y_2576_ = v___y_2589_;
v___y_2577_ = v___y_2590_;
v___y_2578_ = v_trailRun_2597_;
v___y_2579_ = v___x_2600_;
goto v___jp_2572_;
}
else
{
v___y_2573_ = v___y_2587_;
v___y_2574_ = v___y_2592_;
v___y_2575_ = v_bodyB_2594_;
v___y_2576_ = v___y_2589_;
v___y_2577_ = v___y_2590_;
v___y_2578_ = v_trailRun_2597_;
v___y_2579_ = v___x_2598_;
goto v___jp_2572_;
}
}
else
{
uint8_t v___x_2601_; 
v___x_2601_ = 0;
v___y_2573_ = v___y_2587_;
v___y_2574_ = v___y_2592_;
v___y_2575_ = v_bodyB_2594_;
v___y_2576_ = v___y_2589_;
v___y_2577_ = v___y_2590_;
v___y_2578_ = v_trailRun_2597_;
v___y_2579_ = v___x_2601_;
goto v___jp_2572_;
}
}
v___jp_2602_:
{
lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v_leadRun_2607_; uint8_t v___x_2608_; 
v___x_2605_ = lean_unsigned_to_nat(0u);
v___x_2606_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonTail___closed__0));
lean_inc(v___y_2604_);
v_leadRun_2607_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_namedAnchorProcess_spec__1(v___y_2604_, v___y_2604_, v___x_2606_);
v___x_2608_ = l_List_isEmpty___redArg(v_leadRun_2607_);
if (v___x_2608_ == 0)
{
uint8_t v___x_2609_; 
v___x_2609_ = 1;
v___y_2587_ = v___x_2605_;
v___y_2588_ = v_leadRun_2607_;
v___y_2589_ = v___y_2603_;
v___y_2590_ = v___x_2606_;
v___y_2591_ = v___y_2604_;
v___y_2592_ = v___x_2609_;
goto v___jp_2586_;
}
else
{
uint8_t v___x_2610_; 
v___x_2610_ = 0;
v___y_2587_ = v___x_2605_;
v___y_2588_ = v_leadRun_2607_;
v___y_2589_ = v___y_2603_;
v___y_2590_ = v___x_2606_;
v___y_2591_ = v___y_2604_;
v___y_2592_ = v___x_2610_;
goto v___jp_2586_;
}
}
v___jp_2611_:
{
lean_object* v___x_2614_; 
lean_inc(v___y_2613_);
v___x_2614_ = l_List_reverse___redArg(v___y_2613_);
if (lean_obj_tag(v___x_2614_) == 1)
{
lean_object* v_head_2615_; lean_object* v_tail_2616_; lean_object* v___x_2617_; uint8_t v___x_2618_; 
v_head_2615_ = lean_ctor_get(v___x_2614_, 0);
lean_inc(v_head_2615_);
v_tail_2616_ = lean_ctor_get(v___x_2614_, 1);
lean_inc(v_tail_2616_);
lean_dec_ref_known(v___x_2614_, 2);
v___x_2617_ = lean_unsigned_to_nat(10u);
v___x_2618_ = lean_nat_dec_eq(v_head_2615_, v___x_2617_);
lean_dec(v_head_2615_);
if (v___x_2618_ == 0)
{
lean_dec(v_tail_2616_);
v___y_2603_ = v___y_2612_;
v___y_2604_ = v___y_2613_;
goto v___jp_2602_;
}
else
{
lean_object* v___x_2619_; 
lean_dec(v___y_2613_);
v___x_2619_ = l_List_reverse___redArg(v_tail_2616_);
v___y_2603_ = v___y_2612_;
v___y_2604_ = v___x_2619_;
goto v___jp_2602_;
}
}
else
{
lean_dec(v___x_2614_);
v___y_2603_ = v___y_2612_;
v___y_2604_ = v___y_2613_;
goto v___jp_2602_;
}
}
v___jp_2620_:
{
if (v_scored_2428_ == 0)
{
v___y_2603_ = v___y_2621_;
v___y_2604_ = v_body_2430_;
goto v___jp_2602_;
}
else
{
if (lean_obj_tag(v_body_2430_) == 1)
{
lean_object* v_head_2622_; lean_object* v_tail_2623_; lean_object* v___x_2624_; uint8_t v___x_2625_; 
v_head_2622_ = lean_ctor_get(v_body_2430_, 0);
v_tail_2623_ = lean_ctor_get(v_body_2430_, 1);
v___x_2624_ = lean_unsigned_to_nat(10u);
v___x_2625_ = lean_nat_dec_eq(v_head_2622_, v___x_2624_);
if (v___x_2625_ == 0)
{
v___y_2612_ = v___y_2621_;
v___y_2613_ = v_body_2430_;
goto v___jp_2611_;
}
else
{
lean_inc(v_tail_2623_);
lean_dec_ref_known(v_body_2430_, 2);
v___y_2612_ = v___y_2621_;
v___y_2613_ = v_tail_2623_;
goto v___jp_2611_;
}
}
else
{
v___y_2612_ = v___y_2621_;
v___y_2613_ = v_body_2430_;
goto v___jp_2611_;
}
}
}
v___jp_2626_:
{
if (v_scored_2428_ == 0)
{
v___y_2621_ = v_out_2431_;
goto v___jp_2620_;
}
else
{
lean_object* v___x_2627_; 
v___x_2627_ = lp_lean_x2dftml_LeanFtml_scoredJoinStrip(v_out_2431_);
v___y_2621_ = v___x_2627_;
goto v___jp_2620_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemProcess___boxed(lean_object* v_src_2712_, lean_object* v_fullEnd_2713_, lean_object* v_scored_2714_, lean_object* v_g2_2715_, lean_object* v_body_2716_, lean_object* v_out_2717_, lean_object* v_toks_2718_, lean_object* v_anchors_2719_){
_start:
{
uint8_t v_scored_boxed_2720_; lean_object* v_res_2721_; 
v_scored_boxed_2720_ = lean_unbox(v_scored_2714_);
v_res_2721_ = lp_lean_x2dftml_LeanFtml_anchorElemProcess(v_src_2712_, v_fullEnd_2713_, v_scored_boxed_2720_, v_g2_2715_, v_body_2716_, v_out_2717_, v_toks_2718_, v_anchors_2719_);
lean_dec(v_g2_2715_);
lean_dec(v_src_2712_);
return v_res_2721_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemFold_go(lean_object* v_src_2722_, lean_object* v_a_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_, lean_object* v_a_2727_){
_start:
{
if (lean_obj_tag(v_a_2723_) == 0)
{
lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; 
v___x_2728_ = l_List_drop___redArg(v_a_2727_, v_src_2722_);
v___x_2729_ = l_List_appendTR___redArg(v_a_2724_, v___x_2728_);
v___x_2730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2730_, 0, v_a_2725_);
lean_ctor_set(v___x_2730_, 1, v_a_2726_);
v___x_2731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2729_);
lean_ctor_set(v___x_2731_, 1, v___x_2730_);
return v___x_2731_;
}
else
{
lean_object* v_head_2732_; lean_object* v_snd_2733_; lean_object* v_snd_2734_; lean_object* v_snd_2735_; lean_object* v_tail_2736_; lean_object* v_fst_2737_; lean_object* v_fst_2738_; lean_object* v_fst_2739_; lean_object* v_fst_2740_; lean_object* v_snd_2741_; uint8_t v___x_2742_; 
v_head_2732_ = lean_ctor_get(v_a_2723_, 0);
lean_inc(v_head_2732_);
v_snd_2733_ = lean_ctor_get(v_head_2732_, 1);
lean_inc(v_snd_2733_);
v_snd_2734_ = lean_ctor_get(v_snd_2733_, 1);
lean_inc(v_snd_2734_);
v_snd_2735_ = lean_ctor_get(v_snd_2734_, 1);
lean_inc(v_snd_2735_);
v_tail_2736_ = lean_ctor_get(v_a_2723_, 1);
lean_inc(v_tail_2736_);
lean_dec_ref_known(v_a_2723_, 2);
v_fst_2737_ = lean_ctor_get(v_head_2732_, 0);
lean_inc(v_fst_2737_);
lean_dec(v_head_2732_);
v_fst_2738_ = lean_ctor_get(v_snd_2733_, 0);
lean_inc(v_fst_2738_);
lean_dec(v_snd_2733_);
v_fst_2739_ = lean_ctor_get(v_snd_2734_, 0);
lean_inc(v_fst_2739_);
lean_dec(v_snd_2734_);
v_fst_2740_ = lean_ctor_get(v_snd_2735_, 0);
lean_inc(v_fst_2740_);
v_snd_2741_ = lean_ctor_get(v_snd_2735_, 1);
lean_inc(v_snd_2741_);
lean_dec(v_snd_2735_);
v___x_2742_ = lean_nat_dec_lt(v_fst_2737_, v_a_2727_);
if (v___x_2742_ == 0)
{
lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v_out1_2747_; uint8_t v___x_2748_; lean_object* v___x_2749_; lean_object* v_snd_2750_; lean_object* v_snd_2751_; lean_object* v_fst_2752_; lean_object* v_fst_2753_; lean_object* v_fst_2754_; lean_object* v_snd_2755_; 
v___x_2743_ = lean_nat_sub(v_fst_2737_, v_a_2727_);
lean_dec(v_fst_2737_);
v___x_2744_ = l_List_drop___redArg(v_a_2727_, v_src_2722_);
v___x_2745_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_buttonTail___closed__0));
lean_inc(v___x_2744_);
v___x_2746_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_2744_, v___x_2744_, v___x_2743_, v___x_2745_);
lean_dec(v___x_2744_);
v_out1_2747_ = l_List_appendTR___redArg(v_a_2724_, v___x_2746_);
v___x_2748_ = lean_unbox(v_fst_2739_);
lean_dec(v_fst_2739_);
v___x_2749_ = lp_lean_x2dftml_LeanFtml_anchorElemProcess(v_src_2722_, v_fst_2738_, v___x_2748_, v_fst_2740_, v_snd_2741_, v_out1_2747_, v_a_2725_, v_a_2726_);
lean_dec(v_fst_2740_);
v_snd_2750_ = lean_ctor_get(v___x_2749_, 1);
lean_inc(v_snd_2750_);
v_snd_2751_ = lean_ctor_get(v_snd_2750_, 1);
lean_inc(v_snd_2751_);
v_fst_2752_ = lean_ctor_get(v___x_2749_, 0);
lean_inc(v_fst_2752_);
lean_dec_ref(v___x_2749_);
v_fst_2753_ = lean_ctor_get(v_snd_2750_, 0);
lean_inc(v_fst_2753_);
lean_dec(v_snd_2750_);
v_fst_2754_ = lean_ctor_get(v_snd_2751_, 0);
lean_inc(v_fst_2754_);
v_snd_2755_ = lean_ctor_get(v_snd_2751_, 1);
lean_inc(v_snd_2755_);
lean_dec(v_snd_2751_);
v_a_2723_ = v_tail_2736_;
v_a_2724_ = v_fst_2752_;
v_a_2725_ = v_fst_2753_;
v_a_2726_ = v_fst_2754_;
v_a_2727_ = v_snd_2755_;
goto _start;
}
else
{
lean_dec(v_snd_2741_);
lean_dec(v_fst_2740_);
lean_dec(v_fst_2739_);
lean_dec(v_fst_2738_);
lean_dec(v_fst_2737_);
v_a_2723_ = v_tail_2736_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemFold_go___boxed(lean_object* v_src_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_){
_start:
{
lean_object* v_res_2764_; 
v_res_2764_ = lp_lean_x2dftml_LeanFtml_anchorElemFold_go(v_src_2758_, v_a_2759_, v_a_2760_, v_a_2761_, v_a_2762_, v_a_2763_);
lean_dec(v_src_2758_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemFold(lean_object* v_src_2765_, lean_object* v_ms_2766_, lean_object* v_toks_2767_, lean_object* v_anchors_2768_){
_start:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; 
v___x_2769_ = lean_box(0);
v___x_2770_ = lean_unsigned_to_nat(0u);
v___x_2771_ = lp_lean_x2dftml_LeanFtml_anchorElemFold_go(v_src_2765_, v_ms_2766_, v___x_2769_, v_toks_2767_, v_anchors_2768_, v___x_2770_);
return v___x_2771_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorElemFold___boxed(lean_object* v_src_2772_, lean_object* v_ms_2773_, lean_object* v_toks_2774_, lean_object* v_anchors_2775_){
_start:
{
lean_object* v_res_2776_; 
v_res_2776_ = lp_lean_x2dftml_LeanFtml_anchorElemFold(v_src_2772_, v_ms_2773_, v_toks_2774_, v_anchors_2775_);
lean_dec(v_src_2772_);
return v_res_2776_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorRule(lean_object* v_st_2777_){
_start:
{
lean_object* v_work_2778_; lean_object* v_tokens_2779_; lean_object* v_doc_2780_; uint8_t v_fatal_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2819_; 
v_work_2778_ = lean_ctor_get(v_st_2777_, 0);
v_tokens_2779_ = lean_ctor_get(v_st_2777_, 1);
v_doc_2780_ = lean_ctor_get(v_st_2777_, 2);
v_fatal_2781_ = lean_ctor_get_uint8(v_st_2777_, sizeof(void*)*3);
v_isSharedCheck_2819_ = !lean_is_exclusive(v_st_2777_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2783_ = v_st_2777_;
v_isShared_2784_ = v_isSharedCheck_2819_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_doc_2780_);
lean_inc(v_tokens_2779_);
lean_inc(v_work_2778_);
lean_dec(v_st_2777_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2819_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v_input_2785_; lean_object* v___x_2786_; lean_object* v_fst_2787_; lean_object* v_snd_2788_; lean_object* v_page_2789_; lean_object* v_site_2790_; lean_object* v_inclusions_2791_; lean_object* v_inclusionsNotExist_2792_; lean_object* v_footnotes_2793_; lean_object* v_bibitems_2794_; lean_object* v_bibitemIds_2795_; lean_object* v_headlineId_2796_; lean_object* v_mathId_2797_; lean_object* v_equations_2798_; lean_object* v_collapsibleCount_2799_; lean_object* v_tabviewCounter_2800_; lean_object* v_scoredAnchors_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2818_; 
v_input_2785_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_2778_);
v___x_2786_ = lp_lean_x2dftml_LeanFtml_namedAnchorScan(v_input_2785_, v_tokens_2779_);
v_fst_2787_ = lean_ctor_get(v___x_2786_, 0);
lean_inc(v_fst_2787_);
v_snd_2788_ = lean_ctor_get(v___x_2786_, 1);
lean_inc(v_snd_2788_);
lean_dec_ref(v___x_2786_);
v_page_2789_ = lean_ctor_get(v_doc_2780_, 0);
v_site_2790_ = lean_ctor_get(v_doc_2780_, 1);
v_inclusions_2791_ = lean_ctor_get(v_doc_2780_, 2);
v_inclusionsNotExist_2792_ = lean_ctor_get(v_doc_2780_, 3);
v_footnotes_2793_ = lean_ctor_get(v_doc_2780_, 4);
v_bibitems_2794_ = lean_ctor_get(v_doc_2780_, 5);
v_bibitemIds_2795_ = lean_ctor_get(v_doc_2780_, 6);
v_headlineId_2796_ = lean_ctor_get(v_doc_2780_, 7);
v_mathId_2797_ = lean_ctor_get(v_doc_2780_, 8);
v_equations_2798_ = lean_ctor_get(v_doc_2780_, 9);
v_collapsibleCount_2799_ = lean_ctor_get(v_doc_2780_, 10);
v_tabviewCounter_2800_ = lean_ctor_get(v_doc_2780_, 11);
v_scoredAnchors_2801_ = lean_ctor_get(v_doc_2780_, 12);
v_isSharedCheck_2818_ = !lean_is_exclusive(v_doc_2780_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2803_ = v_doc_2780_;
v_isShared_2804_ = v_isSharedCheck_2818_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_scoredAnchors_2801_);
lean_inc(v_tabviewCounter_2800_);
lean_inc(v_collapsibleCount_2799_);
lean_inc(v_equations_2798_);
lean_inc(v_mathId_2797_);
lean_inc(v_headlineId_2796_);
lean_inc(v_bibitemIds_2795_);
lean_inc(v_bibitems_2794_);
lean_inc(v_footnotes_2793_);
lean_inc(v_inclusionsNotExist_2792_);
lean_inc(v_inclusions_2791_);
lean_inc(v_site_2790_);
lean_inc(v_page_2789_);
lean_dec(v_doc_2780_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2818_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v_ms_2805_; lean_object* v___x_2806_; lean_object* v_snd_2807_; lean_object* v_fst_2808_; lean_object* v_fst_2809_; lean_object* v_snd_2810_; lean_object* v___x_2811_; lean_object* v___x_2813_; 
lean_inc(v_fst_2787_);
v_ms_2805_ = lp_lean_x2dftml_LeanFtml_anchorElemMatches(v_fst_2787_);
v___x_2806_ = lp_lean_x2dftml_LeanFtml_anchorElemFold(v_fst_2787_, v_ms_2805_, v_snd_2788_, v_scoredAnchors_2801_);
lean_dec(v_fst_2787_);
v_snd_2807_ = lean_ctor_get(v___x_2806_, 1);
lean_inc(v_snd_2807_);
v_fst_2808_ = lean_ctor_get(v___x_2806_, 0);
lean_inc(v_fst_2808_);
lean_dec_ref(v___x_2806_);
v_fst_2809_ = lean_ctor_get(v_snd_2807_, 0);
lean_inc(v_fst_2809_);
v_snd_2810_ = lean_ctor_get(v_snd_2807_, 1);
lean_inc(v_snd_2810_);
lean_dec(v_snd_2807_);
v___x_2811_ = lp_lean_x2dftml_LeanFtml_parseBytes(v_fst_2808_);
if (v_isShared_2804_ == 0)
{
lean_ctor_set(v___x_2803_, 12, v_snd_2810_);
v___x_2813_ = v___x_2803_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_page_2789_);
lean_ctor_set(v_reuseFailAlloc_2817_, 1, v_site_2790_);
lean_ctor_set(v_reuseFailAlloc_2817_, 2, v_inclusions_2791_);
lean_ctor_set(v_reuseFailAlloc_2817_, 3, v_inclusionsNotExist_2792_);
lean_ctor_set(v_reuseFailAlloc_2817_, 4, v_footnotes_2793_);
lean_ctor_set(v_reuseFailAlloc_2817_, 5, v_bibitems_2794_);
lean_ctor_set(v_reuseFailAlloc_2817_, 6, v_bibitemIds_2795_);
lean_ctor_set(v_reuseFailAlloc_2817_, 7, v_headlineId_2796_);
lean_ctor_set(v_reuseFailAlloc_2817_, 8, v_mathId_2797_);
lean_ctor_set(v_reuseFailAlloc_2817_, 9, v_equations_2798_);
lean_ctor_set(v_reuseFailAlloc_2817_, 10, v_collapsibleCount_2799_);
lean_ctor_set(v_reuseFailAlloc_2817_, 11, v_tabviewCounter_2800_);
lean_ctor_set(v_reuseFailAlloc_2817_, 12, v_snd_2810_);
v___x_2813_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
lean_object* v___x_2815_; 
if (v_isShared_2784_ == 0)
{
lean_ctor_set(v___x_2783_, 2, v___x_2813_);
lean_ctor_set(v___x_2783_, 1, v_fst_2809_);
lean_ctor_set(v___x_2783_, 0, v___x_2811_);
v___x_2815_ = v___x_2783_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v___x_2811_);
lean_ctor_set(v_reuseFailAlloc_2816_, 1, v_fst_2809_);
lean_ctor_set(v_reuseFailAlloc_2816_, 2, v___x_2813_);
lean_ctor_set_uint8(v_reuseFailAlloc_2816_, sizeof(void*)*3, v_fatal_2781_);
v___x_2815_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
return v___x_2815_;
}
}
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FormRawRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ModuleRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_NextRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ContainRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ListRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ParaRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_FinalRules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_FormRawRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ModuleRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_NextRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ContainRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ListRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ParaRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dftml_LeanFtml_anchorEndOpts = _init_lp_lean_x2dftml_LeanFtml_anchorEndOpts();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_anchorEndOpts);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
