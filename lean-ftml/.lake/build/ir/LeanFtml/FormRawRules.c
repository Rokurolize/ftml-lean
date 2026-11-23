// Lean compiler output
// Module: LeanFtml.FormRawRules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.FrameRules public import LeanFtml.CodeRule
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(lean_object*, lean_object*);
uint8_t l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_utf8Decode(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_normSegs(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_intercalateTR___redArg(lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_byteForm(lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_pop(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_phBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(255) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_phBytes___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_phBytes___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_readPlaceholder(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseBytes_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_claimText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_claimText___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_claimText___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_claimText___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_claimText___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_claimText(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_findSub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_findSub___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_findSub___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSub___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countRun(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countRun___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_hasLaterQuad_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hasLaterQuad_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_hasLaterQuad(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hasLaterQuad___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawSurplusClose(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawSurplusClose___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_swapByteCase(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_swapByteCase___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_byteCiEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_byteCiEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isWsByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isWsByte___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsNlRests_countWs(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsNlRests_countWs___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_wsNlRests_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_wsNlRests_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsNlRests(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitBytes___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_rawScan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(64) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawScan___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawScan___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_rawScan___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Raw"};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawScan___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawScan___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_rawScan___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(64) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawScan___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawScan___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_rawScan___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(64) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_rawScan___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawScan___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawScan___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_rawScan___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_rawScan___closed__4;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_rawScan___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawScan___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawScan___closed__5_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawScan(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_rawRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_rawRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_rawRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldBody_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldBody(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_rawoldScan___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(96) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawoldScan___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawoldScan___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_rawoldScan___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Rawold"};
static const lean_object* lp_lean_x2dftml_LeanFtml_rawoldScan___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawoldScan___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldScan(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldScan___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_rawoldRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_rawoldRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_rawoldRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_rawoldRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldRule(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[[form]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formOpenBytes;
static const lean_string_object lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "[[/form]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formCloseBytes;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_formCloserAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formCloserAt___boxed(lean_object*);
static lean_once_cell_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__0;
static lean_once_cell_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__1___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_formAfterSep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_formAfterSep___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formAfterSep___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_formAfterSep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_formAfterSep___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_formAfterSep___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formAfterSep___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_formAfterSep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_formAfterSep___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_formAfterSep___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formAfterSep___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formAfterSep(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formMatchAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripFormPlaceholders_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripFormPlaceholders(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_formProcess_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Form"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_formProcess_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "blank"};
static const lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formProcess_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formProcess_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__3;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formProcess_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formProcess_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formProcess_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formProcess_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_formProcess_go___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go___closed__8;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formProcess(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formScan(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formScan___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_formRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_formRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_formRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_formRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_phBytes(lean_object* v_n_4_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_5_ = lean_box(0);
v___x_6_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_phBytes___closed__0));
v___x_7_ = l_Nat_reprFast(v_n_4_);
v___x_8_ = l_String_toListImpl(v___x_7_);
v___x_9_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v___x_8_, v___x_5_);
v___x_10_ = l_List_appendTR___redArg(v___x_6_, v___x_9_);
v___x_11_ = l_List_appendTR___redArg(v___x_10_, v___x_6_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(lean_object* v_x_12_, lean_object* v_x_13_){
_start:
{
if (lean_obj_tag(v_x_13_) == 0)
{
return v_x_12_;
}
else
{
lean_object* v_head_14_; lean_object* v_tail_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v_head_14_ = lean_ctor_get(v_x_13_, 0);
v_tail_15_ = lean_ctor_get(v_x_13_, 1);
v___x_16_ = lean_unsigned_to_nat(10u);
v___x_17_ = lean_nat_mul(v_x_12_, v___x_16_);
lean_dec(v_x_12_);
v___x_18_ = lean_unsigned_to_nat(48u);
v___x_19_ = lean_nat_sub(v_head_14_, v___x_18_);
v___x_20_ = lean_nat_add(v___x_17_, v___x_19_);
lean_dec(v___x_19_);
lean_dec(v___x_17_);
v_x_12_ = v___x_20_;
v_x_13_ = v_tail_15_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1___boxed(lean_object* v_x_22_, lean_object* v_x_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(v_x_22_, v_x_23_);
lean_dec(v_x_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0(lean_object* v_l_25_, lean_object* v_a_26_, lean_object* v_a_27_){
_start:
{
if (lean_obj_tag(v_a_26_) == 0)
{
lean_dec_ref(v_a_27_);
lean_inc(v_l_25_);
return v_l_25_;
}
else
{
lean_object* v_head_28_; lean_object* v_tail_29_; lean_object* v___x_30_; uint8_t v___x_31_; 
v_head_28_ = lean_ctor_get(v_a_26_, 0);
lean_inc(v_head_28_);
v_tail_29_ = lean_ctor_get(v_a_26_, 1);
lean_inc(v_tail_29_);
lean_dec_ref_known(v_a_26_, 2);
v___x_30_ = lean_unsigned_to_nat(48u);
v___x_31_ = lean_nat_dec_le(v___x_30_, v_head_28_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; 
lean_dec(v_tail_29_);
lean_dec(v_head_28_);
v___x_32_ = lean_array_to_list(v_a_27_);
return v___x_32_;
}
else
{
lean_object* v___x_33_; uint8_t v___x_34_; 
v___x_33_ = lean_unsigned_to_nat(57u);
v___x_34_ = lean_nat_dec_le(v_head_28_, v___x_33_);
if (v___x_34_ == 0)
{
lean_object* v___x_35_; 
lean_dec(v_tail_29_);
lean_dec(v_head_28_);
v___x_35_ = lean_array_to_list(v_a_27_);
return v___x_35_;
}
else
{
lean_object* v___x_36_; 
v___x_36_ = lean_array_push(v_a_27_, v_head_28_);
v_a_26_ = v_tail_29_;
v_a_27_ = v___x_36_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0___boxed(lean_object* v_l_38_, lean_object* v_a_39_, lean_object* v_a_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0(v_l_38_, v_a_39_, v_a_40_);
lean_dec(v_l_38_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_readPlaceholder(lean_object* v_bs_44_){
_start:
{
if (lean_obj_tag(v_bs_44_) == 1)
{
lean_object* v_head_45_; lean_object* v_tail_46_; lean_object* v___x_47_; uint8_t v___x_48_; 
v_head_45_ = lean_ctor_get(v_bs_44_, 0);
lean_inc(v_head_45_);
v_tail_46_ = lean_ctor_get(v_bs_44_, 1);
lean_inc(v_tail_46_);
lean_dec_ref_known(v_bs_44_, 2);
v___x_47_ = lean_unsigned_to_nat(255u);
v___x_48_ = lean_nat_dec_eq(v_head_45_, v___x_47_);
lean_dec(v_head_45_);
if (v___x_48_ == 0)
{
lean_object* v___x_49_; 
lean_dec(v_tail_46_);
v___x_49_ = lean_box(0);
return v___x_49_;
}
else
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v_ds_52_; uint8_t v___x_53_; 
v___x_50_ = lean_unsigned_to_nat(0u);
v___x_51_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0));
lean_inc(v_tail_46_);
v_ds_52_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0(v_tail_46_, v_tail_46_, v___x_51_);
v___x_53_ = l_List_isEmpty___redArg(v_ds_52_);
if (v___x_53_ == 0)
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = l_List_lengthTR___redArg(v_ds_52_);
v___x_55_ = l_List_drop___redArg(v___x_54_, v_tail_46_);
lean_dec(v_tail_46_);
if (lean_obj_tag(v___x_55_) == 1)
{
lean_object* v_head_56_; lean_object* v_tail_57_; lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_68_; 
v_head_56_ = lean_ctor_get(v___x_55_, 0);
v_tail_57_ = lean_ctor_get(v___x_55_, 1);
v_isSharedCheck_68_ = !lean_is_exclusive(v___x_55_);
if (v_isSharedCheck_68_ == 0)
{
v___x_59_ = v___x_55_;
v_isShared_60_ = v_isSharedCheck_68_;
goto v_resetjp_58_;
}
else
{
lean_inc(v_tail_57_);
lean_inc(v_head_56_);
lean_dec(v___x_55_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_68_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
uint8_t v___x_61_; 
v___x_61_ = lean_nat_dec_eq(v_head_56_, v___x_47_);
lean_dec(v_head_56_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; 
lean_del_object(v___x_59_);
lean_dec(v_tail_57_);
lean_dec(v_ds_52_);
v___x_62_ = lean_box(0);
return v___x_62_;
}
else
{
lean_object* v___x_63_; lean_object* v___x_65_; 
v___x_63_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(v___x_50_, v_ds_52_);
lean_dec(v_ds_52_);
if (v_isShared_60_ == 0)
{
lean_ctor_set_tag(v___x_59_, 0);
lean_ctor_set(v___x_59_, 0, v___x_63_);
v___x_65_ = v___x_59_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v___x_63_);
lean_ctor_set(v_reuseFailAlloc_67_, 1, v_tail_57_);
v___x_65_ = v_reuseFailAlloc_67_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
lean_object* v___x_66_; 
v___x_66_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
return v___x_66_;
}
}
}
}
else
{
lean_object* v___x_69_; 
lean_dec(v___x_55_);
lean_dec(v_ds_52_);
v___x_69_ = lean_box(0);
return v___x_69_;
}
}
else
{
lean_object* v___x_70_; 
lean_dec(v_ds_52_);
lean_dec(v_tail_46_);
v___x_70_ = lean_box(0);
return v___x_70_;
}
}
}
else
{
lean_object* v___x_71_; 
lean_dec(v_bs_44_);
v___x_71_ = lean_box(0);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseBytes_go(lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v___y_77_; lean_object* v___y_81_; 
if (lean_obj_tag(v_a_72_) == 0)
{
uint8_t v___x_84_; 
lean_dec(v_a_75_);
v___x_84_ = l_List_isEmpty___redArg(v_a_73_);
if (v___x_84_ == 0)
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_85_ = l_List_reverse___redArg(v_a_73_);
v___x_86_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v___x_85_);
v___x_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
v___x_88_ = lean_box(0);
v___x_89_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_87_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___y_81_ = v___x_89_;
goto v___jp_80_;
}
else
{
lean_object* v___x_90_; 
lean_dec(v_a_73_);
v___x_90_ = lean_box(0);
v___y_81_ = v___x_90_;
goto v___jp_80_;
}
}
else
{
lean_object* v_head_91_; lean_object* v_tail_92_; lean_object* v_zero_93_; uint8_t v_isZero_94_; 
v_head_91_ = lean_ctor_get(v_a_72_, 0);
v_tail_92_ = lean_ctor_get(v_a_72_, 1);
v_zero_93_ = lean_unsigned_to_nat(0u);
v_isZero_94_ = lean_nat_dec_eq(v_a_75_, v_zero_93_);
if (v_isZero_94_ == 1)
{
lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_107_; 
lean_dec(v_a_75_);
v_isSharedCheck_107_ = !lean_is_exclusive(v_a_72_);
if (v_isSharedCheck_107_ == 0)
{
lean_object* v_unused_108_; lean_object* v_unused_109_; 
v_unused_108_ = lean_ctor_get(v_a_72_, 1);
lean_dec(v_unused_108_);
v_unused_109_ = lean_ctor_get(v_a_72_, 0);
lean_dec(v_unused_109_);
v___x_96_ = v_a_72_;
v_isShared_97_ = v_isSharedCheck_107_;
goto v_resetjp_95_;
}
else
{
lean_dec(v_a_72_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_107_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
uint8_t v___x_98_; 
v___x_98_ = l_List_isEmpty___redArg(v_a_73_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_104_; 
v___x_99_ = l_List_reverse___redArg(v_a_73_);
v___x_100_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v___x_99_);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
v___x_102_ = lean_box(0);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 1, v___x_102_);
lean_ctor_set(v___x_96_, 0, v___x_101_);
v___x_104_ = v___x_96_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v___x_101_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v___x_102_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
v___y_77_ = v___x_104_;
goto v___jp_76_;
}
}
else
{
lean_object* v___x_106_; 
lean_del_object(v___x_96_);
lean_dec(v_a_73_);
v___x_106_ = lean_box(0);
v___y_77_ = v___x_106_;
goto v___jp_76_;
}
}
}
else
{
lean_object* v_one_110_; lean_object* v_n_111_; lean_object* v___x_112_; uint8_t v___x_113_; 
lean_inc(v_tail_92_);
lean_inc(v_head_91_);
v_one_110_ = lean_unsigned_to_nat(1u);
v_n_111_ = lean_nat_sub(v_a_75_, v_one_110_);
lean_dec(v_a_75_);
v___x_112_ = lean_unsigned_to_nat(255u);
v___x_113_ = lean_nat_dec_eq(v_head_91_, v___x_112_);
if (v___x_113_ == 0)
{
lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_121_; 
v_isSharedCheck_121_ = !lean_is_exclusive(v_a_72_);
if (v_isSharedCheck_121_ == 0)
{
lean_object* v_unused_122_; lean_object* v_unused_123_; 
v_unused_122_ = lean_ctor_get(v_a_72_, 1);
lean_dec(v_unused_122_);
v_unused_123_ = lean_ctor_get(v_a_72_, 0);
lean_dec(v_unused_123_);
v___x_115_ = v_a_72_;
v_isShared_116_ = v_isSharedCheck_121_;
goto v_resetjp_114_;
}
else
{
lean_dec(v_a_72_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_121_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_118_; 
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v_a_73_);
v___x_118_ = v___x_115_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_head_91_);
lean_ctor_set(v_reuseFailAlloc_120_, 1, v_a_73_);
v___x_118_ = v_reuseFailAlloc_120_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
v_a_72_ = v_tail_92_;
v_a_73_ = v___x_118_;
v_a_75_ = v_n_111_;
goto _start;
}
}
}
else
{
lean_object* v___x_124_; 
v___x_124_ = lp_lean_x2dftml_LeanFtml_readPlaceholder(v_a_72_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v___x_125_; 
v___x_125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_125_, 0, v_head_91_);
lean_ctor_set(v___x_125_, 1, v_a_73_);
v_a_72_ = v_tail_92_;
v_a_73_ = v___x_125_;
v_a_75_ = v_n_111_;
goto _start;
}
else
{
lean_object* v_val_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_154_; 
lean_dec(v_tail_92_);
lean_dec(v_head_91_);
v_val_127_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_154_ == 0)
{
v___x_129_ = v___x_124_;
v_isShared_130_ = v_isSharedCheck_154_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_val_127_);
lean_dec(v___x_124_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_154_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v_fst_131_; lean_object* v_snd_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_153_; 
v_fst_131_ = lean_ctor_get(v_val_127_, 0);
v_snd_132_ = lean_ctor_get(v_val_127_, 1);
v_isSharedCheck_153_ = !lean_is_exclusive(v_val_127_);
if (v_isSharedCheck_153_ == 0)
{
v___x_134_ = v_val_127_;
v_isShared_135_ = v_isSharedCheck_153_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_snd_132_);
lean_inc(v_fst_131_);
lean_dec(v_val_127_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_153_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_136_; lean_object* v___y_138_; uint8_t v___x_148_; 
v___x_136_ = lean_box(0);
v___x_148_ = l_List_isEmpty___redArg(v_a_73_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_149_ = l_List_reverse___redArg(v_a_73_);
v___x_150_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v___x_149_);
v___x_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
v___x_152_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
lean_ctor_set(v___x_152_, 1, v___x_136_);
v___y_138_ = v___x_152_;
goto v___jp_137_;
}
else
{
lean_dec(v_a_73_);
v___y_138_ = v___x_136_;
goto v___jp_137_;
}
v___jp_137_:
{
lean_object* v___x_139_; lean_object* v___x_141_; 
v___x_139_ = l_List_appendTR___redArg(v_a_74_, v___y_138_);
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 0, v_fst_131_);
v___x_141_ = v___x_129_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_fst_131_);
v___x_141_ = v_reuseFailAlloc_147_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
lean_object* v___x_143_; 
if (v_isShared_135_ == 0)
{
lean_ctor_set_tag(v___x_134_, 1);
lean_ctor_set(v___x_134_, 1, v___x_136_);
lean_ctor_set(v___x_134_, 0, v___x_141_);
v___x_143_ = v___x_134_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v___x_141_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v___x_136_);
v___x_143_ = v_reuseFailAlloc_146_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v___x_144_; 
v___x_144_ = l_List_appendTR___redArg(v___x_139_, v___x_143_);
v_a_72_ = v_snd_132_;
v_a_73_ = v___x_136_;
v_a_74_ = v___x_144_;
v_a_75_ = v_n_111_;
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
v___jp_76_:
{
lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_78_ = l_List_appendTR___redArg(v_a_74_, v___y_77_);
v___x_79_ = lp_lean_x2dftml_LeanFtml_normSegs(v___x_78_);
return v___x_79_;
}
v___jp_80_:
{
lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_82_ = l_List_appendTR___redArg(v_a_74_, v___y_81_);
v___x_83_ = lp_lean_x2dftml_LeanFtml_normSegs(v___x_82_);
return v___x_83_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_parseBytes(lean_object* v_bs_155_){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_156_ = lean_box(0);
v___x_157_ = l_List_lengthTR___redArg(v_bs_155_);
v___x_158_ = lean_unsigned_to_nat(1u);
v___x_159_ = lean_nat_add(v___x_157_, v___x_158_);
lean_dec(v___x_157_);
v___x_160_ = lp_lean_x2dftml_LeanFtml_parseBytes_go(v_bs_155_, v___x_156_, v___x_156_, v___x_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object* v_st_161_, lean_object* v_f_162_){
_start:
{
lean_object* v_work_163_; lean_object* v_tokens_164_; lean_object* v_doc_165_; uint8_t v_fatal_166_; lean_object* v_continuedDivLeads_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_179_; 
v_work_163_ = lean_ctor_get(v_st_161_, 0);
v_tokens_164_ = lean_ctor_get(v_st_161_, 1);
v_doc_165_ = lean_ctor_get(v_st_161_, 2);
v_fatal_166_ = lean_ctor_get_uint8(v_st_161_, sizeof(void*)*4);
v_continuedDivLeads_167_ = lean_ctor_get(v_st_161_, 3);
v_isSharedCheck_179_ = !lean_is_exclusive(v_st_161_);
if (v_isSharedCheck_179_ == 0)
{
v___x_169_ = v_st_161_;
v_isShared_170_ = v_isSharedCheck_179_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_continuedDivLeads_167_);
lean_inc(v_doc_165_);
lean_inc(v_tokens_164_);
lean_inc(v_work_163_);
lean_dec(v_st_161_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_179_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v_fst_173_; lean_object* v_snd_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_171_ = lp_lean_x2dftml_LeanFtml_byteForm(v_work_163_);
v___x_172_ = lean_apply_2(v_f_162_, v___x_171_, v_tokens_164_);
v_fst_173_ = lean_ctor_get(v___x_172_, 0);
lean_inc(v_fst_173_);
v_snd_174_ = lean_ctor_get(v___x_172_, 1);
lean_inc(v_snd_174_);
lean_dec_ref(v___x_172_);
v___x_175_ = lp_lean_x2dftml_LeanFtml_parseBytes(v_fst_173_);
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 1, v_snd_174_);
lean_ctor_set(v___x_169_, 0, v___x_175_);
v___x_177_ = v___x_169_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v_snd_174_);
lean_ctor_set(v_reuseFailAlloc_178_, 2, v_doc_165_);
lean_ctor_set(v_reuseFailAlloc_178_, 3, v_continuedDivLeads_167_);
lean_ctor_set_uint8(v_reuseFailAlloc_178_, sizeof(void*)*4, v_fatal_166_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object* v_bs_180_){
_start:
{
lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_181_ = lean_unsigned_to_nat(255u);
v___x_182_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___x_181_, v_bs_180_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lp_lean_x2dftml_LeanFtml_utf8Decode(v_bs_180_);
v___x_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
return v___x_184_;
}
else
{
lean_object* v___x_185_; 
v___x_185_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_185_, 0, v_bs_180_);
return v___x_185_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_claimText___closed__1(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_claimText___closed__0));
v___x_188_ = l_String_toListImpl(v___x_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_claimText(lean_object* v_rule_189_, lean_object* v_text_190_, lean_object* v_toks_191_){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_192_ = l_List_lengthTR___redArg(v_toks_191_);
v___x_193_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_192_);
v___x_194_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_claimText___closed__1, &lp_lean_x2dftml_LeanFtml_claimText___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_claimText___closed__1);
v___x_195_ = lp_lean_x2dftml_LeanFtml_textVal(v_text_190_);
v___x_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_194_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v___x_197_ = lean_box(0);
v___x_198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_196_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_199_, 0, v_rule_189_);
lean_ctor_set(v___x_199_, 1, v___x_198_);
v___x_200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
lean_ctor_set(v___x_200_, 1, v___x_197_);
v___x_201_ = l_List_appendTR___redArg(v_toks_191_, v___x_200_);
v___x_202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_193_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object* v_x_203_, lean_object* v_x_204_){
_start:
{
if (lean_obj_tag(v_x_203_) == 0)
{
if (lean_obj_tag(v_x_204_) == 0)
{
uint8_t v___x_205_; 
v___x_205_ = 1;
return v___x_205_;
}
else
{
uint8_t v___x_206_; 
v___x_206_ = 0;
return v___x_206_;
}
}
else
{
if (lean_obj_tag(v_x_204_) == 0)
{
uint8_t v___x_207_; 
v___x_207_ = 0;
return v___x_207_;
}
else
{
lean_object* v_head_208_; lean_object* v_tail_209_; lean_object* v_head_210_; lean_object* v_tail_211_; uint8_t v___x_212_; 
v_head_208_ = lean_ctor_get(v_x_203_, 0);
v_tail_209_ = lean_ctor_get(v_x_203_, 1);
v_head_210_ = lean_ctor_get(v_x_204_, 0);
v_tail_211_ = lean_ctor_get(v_x_204_, 1);
v___x_212_ = lean_nat_dec_eq(v_head_208_, v_head_210_);
if (v___x_212_ == 0)
{
return v___x_212_;
}
else
{
v_x_203_ = v_tail_209_;
v_x_204_ = v_tail_211_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0___boxed(lean_object* v_x_214_, lean_object* v_x_215_){
_start:
{
uint8_t v_res_216_; lean_object* v_r_217_; 
v_res_216_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_x_214_, v_x_215_);
lean_dec(v_x_215_);
lean_dec(v_x_214_);
v_r_217_ = lean_box(v_res_216_);
return v_r_217_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSub(lean_object* v_pat_220_, lean_object* v_x_221_){
_start:
{
if (lean_obj_tag(v_x_221_) == 0)
{
uint8_t v___x_222_; 
v___x_222_ = l_List_isEmpty___redArg(v_pat_220_);
if (v___x_222_ == 0)
{
lean_object* v___x_223_; 
v___x_223_ = lean_box(0);
return v___x_223_;
}
else
{
lean_object* v___x_224_; 
v___x_224_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_findSub___closed__0));
return v___x_224_;
}
}
else
{
lean_object* v_tail_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; uint8_t v___x_229_; 
v_tail_225_ = lean_ctor_get(v_x_221_, 1);
lean_inc(v_tail_225_);
v___x_226_ = l_List_lengthTR___redArg(v_pat_220_);
v___x_227_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0));
lean_inc_ref(v_x_221_);
v___x_228_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_x_221_, v_x_221_, v___x_226_, v___x_227_);
lean_dec_ref_known(v_x_221_, 2);
v___x_229_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_228_, v_pat_220_);
lean_dec(v___x_228_);
if (v___x_229_ == 0)
{
lean_object* v___x_230_; 
v___x_230_ = lp_lean_x2dftml_LeanFtml_findSub(v_pat_220_, v_tail_225_);
if (lean_obj_tag(v___x_230_) == 0)
{
return v___x_230_;
}
else
{
lean_object* v_val_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_240_; 
v_val_231_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_240_ == 0)
{
v___x_233_ = v___x_230_;
v_isShared_234_ = v_isSharedCheck_240_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_val_231_);
lean_dec(v___x_230_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_240_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_238_; 
v___x_235_ = lean_unsigned_to_nat(1u);
v___x_236_ = lean_nat_add(v_val_231_, v___x_235_);
lean_dec(v_val_231_);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 0, v___x_236_);
v___x_238_ = v___x_233_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_236_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
else
{
lean_object* v___x_241_; 
lean_dec(v_tail_225_);
v___x_241_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_findSub___closed__0));
return v___x_241_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_findSub___boxed(lean_object* v_pat_242_, lean_object* v_x_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = lp_lean_x2dftml_LeanFtml_findSub(v_pat_242_, v_x_243_);
lean_dec(v_pat_242_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countRun(lean_object* v_b_245_, lean_object* v_x_246_){
_start:
{
if (lean_obj_tag(v_x_246_) == 0)
{
lean_object* v___x_247_; 
v___x_247_ = lean_unsigned_to_nat(0u);
return v___x_247_;
}
else
{
lean_object* v_head_248_; lean_object* v_tail_249_; uint8_t v___x_250_; 
v_head_248_ = lean_ctor_get(v_x_246_, 0);
v_tail_249_ = lean_ctor_get(v_x_246_, 1);
v___x_250_ = lean_nat_dec_eq(v_head_248_, v_b_245_);
if (v___x_250_ == 0)
{
lean_object* v___x_251_; 
v___x_251_ = lean_unsigned_to_nat(0u);
return v___x_251_;
}
else
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_252_ = lp_lean_x2dftml_LeanFtml_countRun(v_b_245_, v_tail_249_);
v___x_253_ = lean_unsigned_to_nat(1u);
v___x_254_ = lean_nat_add(v___x_252_, v___x_253_);
lean_dec(v___x_252_);
return v___x_254_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_countRun___boxed(lean_object* v_b_255_, lean_object* v_x_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = lp_lean_x2dftml_LeanFtml_countRun(v_b_255_, v_x_256_);
lean_dec(v_x_256_);
lean_dec(v_b_255_);
return v_res_257_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_hasLaterQuad_go(lean_object* v_a_258_, lean_object* v_a_259_){
_start:
{
lean_object* v_zero_260_; uint8_t v_isZero_261_; 
v_zero_260_ = lean_unsigned_to_nat(0u);
v_isZero_261_ = lean_nat_dec_eq(v_a_258_, v_zero_260_);
if (v_isZero_261_ == 1)
{
uint8_t v___x_262_; 
lean_dec(v_a_259_);
lean_dec(v_a_258_);
v___x_262_ = 0;
return v___x_262_;
}
else
{
if (lean_obj_tag(v_a_259_) == 0)
{
lean_dec(v_a_258_);
return v_isZero_261_;
}
else
{
lean_object* v_head_263_; lean_object* v_tail_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_297_; 
v_head_263_ = lean_ctor_get(v_a_259_, 0);
v_tail_264_ = lean_ctor_get(v_a_259_, 1);
v_isSharedCheck_297_ = !lean_is_exclusive(v_a_259_);
if (v_isSharedCheck_297_ == 0)
{
v___x_266_ = v_a_259_;
v_isShared_267_ = v_isSharedCheck_297_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_tail_264_);
lean_inc(v_head_263_);
lean_dec(v_a_259_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_297_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_268_ = lean_unsigned_to_nat(10u);
v___x_269_ = lean_nat_dec_eq(v_head_263_, v___x_268_);
if (v___x_269_ == 0)
{
lean_object* v_one_270_; lean_object* v_n_271_; lean_object* v___x_272_; uint8_t v___x_273_; 
v_one_270_ = lean_unsigned_to_nat(1u);
v_n_271_ = lean_nat_sub(v_a_258_, v_one_270_);
lean_dec(v_a_258_);
v___x_272_ = lean_unsigned_to_nat(64u);
v___x_273_ = lean_nat_dec_eq(v_head_263_, v___x_272_);
lean_dec(v_head_263_);
if (v___x_273_ == 0)
{
lean_del_object(v___x_266_);
v_a_258_ = v_n_271_;
v_a_259_ = v_tail_264_;
goto _start;
}
else
{
if (lean_obj_tag(v_tail_264_) == 1)
{
lean_object* v_head_275_; lean_object* v_tail_276_; uint8_t v___x_277_; 
v_head_275_ = lean_ctor_get(v_tail_264_, 0);
v_tail_276_ = lean_ctor_get(v_tail_264_, 1);
v___x_277_ = lean_nat_dec_eq(v_head_275_, v___x_272_);
if (v___x_277_ == 0)
{
lean_del_object(v___x_266_);
v_a_258_ = v_n_271_;
v_a_259_ = v_tail_264_;
goto _start;
}
else
{
lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_293_; 
lean_inc(v_tail_276_);
v_isSharedCheck_293_ = !lean_is_exclusive(v_tail_264_);
if (v_isSharedCheck_293_ == 0)
{
lean_object* v_unused_294_; lean_object* v_unused_295_; 
v_unused_294_ = lean_ctor_get(v_tail_264_, 1);
lean_dec(v_unused_294_);
v_unused_295_ = lean_ctor_get(v_tail_264_, 0);
lean_dec(v_unused_295_);
v___x_280_ = v_tail_264_;
v_isShared_281_ = v_isSharedCheck_293_;
goto v_resetjp_279_;
}
else
{
lean_dec(v_tail_264_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_293_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_283_; 
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 0, v___x_272_);
v___x_283_ = v___x_280_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v___x_272_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v_tail_276_);
v___x_283_ = v_reuseFailAlloc_292_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
lean_object* v___x_285_; 
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 1, v___x_283_);
lean_ctor_set(v___x_266_, 0, v___x_272_);
v___x_285_ = v___x_266_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_272_);
lean_ctor_set(v_reuseFailAlloc_291_, 1, v___x_283_);
v___x_285_ = v_reuseFailAlloc_291_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
lean_object* v_n_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v_n_286_ = lp_lean_x2dftml_LeanFtml_countRun(v___x_272_, v___x_285_);
v___x_287_ = lean_unsigned_to_nat(4u);
v___x_288_ = lean_nat_dec_le(v___x_287_, v_n_286_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; 
v___x_289_ = l_List_drop___redArg(v_n_286_, v___x_285_);
lean_dec_ref(v___x_285_);
v_a_258_ = v_n_271_;
v_a_259_ = v___x_289_;
goto _start;
}
else
{
lean_dec(v_n_286_);
lean_dec_ref(v___x_285_);
lean_dec(v_n_271_);
return v___x_288_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_266_);
v_a_258_ = v_n_271_;
v_a_259_ = v_tail_264_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_266_);
lean_dec(v_tail_264_);
lean_dec(v_head_263_);
lean_dec(v_a_258_);
return v_isZero_261_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hasLaterQuad_go___boxed(lean_object* v_a_298_, lean_object* v_a_299_){
_start:
{
uint8_t v_res_300_; lean_object* v_r_301_; 
v_res_300_ = lp_lean_x2dftml_LeanFtml_hasLaterQuad_go(v_a_298_, v_a_299_);
v_r_301_ = lean_box(v_res_300_);
return v_r_301_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_hasLaterQuad(lean_object* v_src_302_){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_303_ = l_List_lengthTR___redArg(v_src_302_);
v___x_304_ = lean_unsigned_to_nat(1u);
v___x_305_ = lean_nat_add(v___x_303_, v___x_304_);
lean_dec(v___x_303_);
v___x_306_ = lp_lean_x2dftml_LeanFtml_hasLaterQuad_go(v___x_305_, v_src_302_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hasLaterQuad___boxed(lean_object* v_src_307_){
_start:
{
uint8_t v_res_308_; lean_object* v_r_309_; 
v_res_308_ = lp_lean_x2dftml_LeanFtml_hasLaterQuad(v_src_307_);
v_r_309_ = lean_box(v_res_308_);
return v_r_309_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawSurplusClose(lean_object* v_c_310_){
_start:
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = lean_unsigned_to_nat(3u);
v___x_312_ = lean_nat_dec_le(v_c_310_, v___x_311_);
if (v___x_312_ == 0)
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = lean_unsigned_to_nat(4u);
v___x_314_ = lean_nat_sub(v_c_310_, v___x_313_);
return v___x_314_;
}
else
{
lean_inc(v_c_310_);
return v_c_310_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawSurplusClose___boxed(lean_object* v_c_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = lp_lean_x2dftml_LeanFtml_rawSurplusClose(v_c_315_);
lean_dec(v_c_315_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_swapByteCase(lean_object* v_b_317_){
_start:
{
lean_object* v___x_325_; uint8_t v___x_326_; 
v___x_325_ = lean_unsigned_to_nat(97u);
v___x_326_ = lean_nat_dec_le(v___x_325_, v_b_317_);
if (v___x_326_ == 0)
{
goto v___jp_318_;
}
else
{
lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_327_ = lean_unsigned_to_nat(122u);
v___x_328_ = lean_nat_dec_le(v_b_317_, v___x_327_);
if (v___x_328_ == 0)
{
goto v___jp_318_;
}
else
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = lean_unsigned_to_nat(32u);
v___x_330_ = lean_nat_sub(v_b_317_, v___x_329_);
return v___x_330_;
}
}
v___jp_318_:
{
lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_319_ = lean_unsigned_to_nat(65u);
v___x_320_ = lean_nat_dec_le(v___x_319_, v_b_317_);
if (v___x_320_ == 0)
{
lean_inc(v_b_317_);
return v_b_317_;
}
else
{
lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_321_ = lean_unsigned_to_nat(90u);
v___x_322_ = lean_nat_dec_le(v_b_317_, v___x_321_);
if (v___x_322_ == 0)
{
lean_inc(v_b_317_);
return v_b_317_;
}
else
{
lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_323_ = lean_unsigned_to_nat(32u);
v___x_324_ = lean_nat_add(v_b_317_, v___x_323_);
return v___x_324_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_swapByteCase___boxed(lean_object* v_b_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = lp_lean_x2dftml_LeanFtml_swapByteCase(v_b_331_);
lean_dec(v_b_331_);
return v_res_332_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_byteCiEq(lean_object* v_x_333_, lean_object* v_lit_334_){
_start:
{
uint8_t v___x_335_; 
v___x_335_ = lean_nat_dec_eq(v_x_333_, v_lit_334_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; uint8_t v___x_337_; 
v___x_336_ = lp_lean_x2dftml_LeanFtml_swapByteCase(v_lit_334_);
v___x_337_ = lean_nat_dec_eq(v_x_333_, v___x_336_);
lean_dec(v___x_336_);
return v___x_337_;
}
else
{
return v___x_335_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_byteCiEq___boxed(lean_object* v_x_338_, lean_object* v_lit_339_){
_start:
{
uint8_t v_res_340_; lean_object* v_r_341_; 
v_res_340_ = lp_lean_x2dftml_LeanFtml_byteCiEq(v_x_338_, v_lit_339_);
lean_dec(v_lit_339_);
lean_dec(v_x_338_);
v_r_341_ = lean_box(v_res_340_);
return v_r_341_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI(lean_object* v_x_342_, lean_object* v_x_343_){
_start:
{
if (lean_obj_tag(v_x_342_) == 0)
{
lean_object* v___x_344_; 
v___x_344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_344_, 0, v_x_343_);
return v___x_344_;
}
else
{
if (lean_obj_tag(v_x_343_) == 0)
{
lean_object* v___x_345_; 
v___x_345_ = lean_box(0);
return v___x_345_;
}
else
{
lean_object* v_head_346_; lean_object* v_tail_347_; lean_object* v_head_348_; lean_object* v_tail_349_; uint8_t v___x_350_; 
v_head_346_ = lean_ctor_get(v_x_342_, 0);
v_tail_347_ = lean_ctor_get(v_x_342_, 1);
v_head_348_ = lean_ctor_get(v_x_343_, 0);
lean_inc(v_head_348_);
v_tail_349_ = lean_ctor_get(v_x_343_, 1);
lean_inc(v_tail_349_);
lean_dec_ref_known(v_x_343_, 2);
v___x_350_ = lp_lean_x2dftml_LeanFtml_byteCiEq(v_head_348_, v_head_346_);
lean_dec(v_head_348_);
if (v___x_350_ == 0)
{
lean_object* v___x_351_; 
lean_dec(v_tail_349_);
v___x_351_ = lean_box(0);
return v___x_351_;
}
else
{
v_x_342_ = v_tail_347_;
v_x_343_ = v_tail_349_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitCI___boxed(lean_object* v_x_353_, lean_object* v_x_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v_x_353_, v_x_354_);
lean_dec(v_x_353_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes(lean_object* v_x_356_, lean_object* v_x_357_){
_start:
{
if (lean_obj_tag(v_x_356_) == 0)
{
lean_object* v___x_358_; 
v___x_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_358_, 0, v_x_357_);
return v___x_358_;
}
else
{
if (lean_obj_tag(v_x_357_) == 0)
{
lean_object* v___x_359_; 
v___x_359_ = lean_box(0);
return v___x_359_;
}
else
{
lean_object* v_head_360_; lean_object* v_tail_361_; lean_object* v_head_362_; lean_object* v_tail_363_; uint8_t v___x_364_; 
v_head_360_ = lean_ctor_get(v_x_356_, 0);
v_tail_361_ = lean_ctor_get(v_x_356_, 1);
v_head_362_ = lean_ctor_get(v_x_357_, 0);
lean_inc(v_head_362_);
v_tail_363_ = lean_ctor_get(v_x_357_, 1);
lean_inc(v_tail_363_);
lean_dec_ref_known(v_x_357_, 2);
v___x_364_ = lean_nat_dec_eq(v_head_362_, v_head_360_);
lean_dec(v_head_362_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; 
lean_dec(v_tail_363_);
v___x_365_ = lean_box(0);
return v___x_365_;
}
else
{
v_x_356_ = v_tail_361_;
v_x_357_ = v_tail_363_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes___boxed(lean_object* v_x_367_, lean_object* v_x_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v_x_367_, v_x_368_);
lean_dec(v_x_367_);
return v_res_369_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isWsByte(lean_object* v_b_370_){
_start:
{
lean_object* v___x_371_; uint8_t v___x_372_; 
v___x_371_ = lean_unsigned_to_nat(32u);
v___x_372_ = lean_nat_dec_eq(v_b_370_, v___x_371_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_373_ = lean_unsigned_to_nat(9u);
v___x_374_ = lean_nat_dec_eq(v_b_370_, v___x_373_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; uint8_t v___x_376_; 
v___x_375_ = lean_unsigned_to_nat(10u);
v___x_376_ = lean_nat_dec_eq(v_b_370_, v___x_375_);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; uint8_t v___x_378_; 
v___x_377_ = lean_unsigned_to_nat(11u);
v___x_378_ = lean_nat_dec_eq(v_b_370_, v___x_377_);
if (v___x_378_ == 0)
{
lean_object* v___x_379_; uint8_t v___x_380_; 
v___x_379_ = lean_unsigned_to_nat(12u);
v___x_380_ = lean_nat_dec_eq(v_b_370_, v___x_379_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_381_ = lean_unsigned_to_nat(13u);
v___x_382_ = lean_nat_dec_eq(v_b_370_, v___x_381_);
return v___x_382_;
}
else
{
return v___x_380_;
}
}
else
{
return v___x_378_;
}
}
else
{
return v___x_376_;
}
}
else
{
return v___x_374_;
}
}
else
{
return v___x_372_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isWsByte___boxed(lean_object* v_b_383_){
_start:
{
uint8_t v_res_384_; lean_object* v_r_385_; 
v_res_384_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_b_383_);
lean_dec(v_b_383_);
v_r_385_ = lean_box(v_res_384_);
return v_r_385_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsNlRests_countWs(lean_object* v_a_386_){
_start:
{
if (lean_obj_tag(v_a_386_) == 0)
{
lean_object* v___x_387_; 
v___x_387_ = lean_unsigned_to_nat(0u);
return v___x_387_;
}
else
{
lean_object* v_head_388_; lean_object* v_tail_389_; uint8_t v___x_390_; 
v_head_388_ = lean_ctor_get(v_a_386_, 0);
v_tail_389_ = lean_ctor_get(v_a_386_, 1);
v___x_390_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_head_388_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; 
v___x_391_ = lean_unsigned_to_nat(0u);
return v___x_391_;
}
else
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_392_ = lp_lean_x2dftml_LeanFtml_wsNlRests_countWs(v_tail_389_);
v___x_393_ = lean_unsigned_to_nat(1u);
v___x_394_ = lean_nat_add(v___x_392_, v___x_393_);
lean_dec(v___x_392_);
return v___x_394_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsNlRests_countWs___boxed(lean_object* v_a_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = lp_lean_x2dftml_LeanFtml_wsNlRests_countWs(v_a_395_);
lean_dec(v_a_395_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_wsNlRests_spec__1(lean_object* v_src_397_, lean_object* v_a_398_, lean_object* v_a_399_){
_start:
{
if (lean_obj_tag(v_a_398_) == 0)
{
lean_object* v___x_400_; 
v___x_400_ = l_List_reverse___redArg(v_a_399_);
return v___x_400_;
}
else
{
lean_object* v_head_401_; lean_object* v_tail_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_413_; 
v_head_401_ = lean_ctor_get(v_a_398_, 0);
v_tail_402_ = lean_ctor_get(v_a_398_, 1);
v_isSharedCheck_413_ = !lean_is_exclusive(v_a_398_);
if (v_isSharedCheck_413_ == 0)
{
v___x_404_ = v_a_398_;
v_isShared_405_ = v_isSharedCheck_413_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_tail_402_);
lean_inc(v_head_401_);
lean_dec(v_a_398_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_413_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_410_; 
v___x_406_ = lean_unsigned_to_nat(1u);
v___x_407_ = lean_nat_add(v_head_401_, v___x_406_);
lean_dec(v_head_401_);
v___x_408_ = l_List_drop___redArg(v___x_407_, v_src_397_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 1, v_a_399_);
lean_ctor_set(v___x_404_, 0, v___x_408_);
v___x_410_ = v___x_404_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_408_);
lean_ctor_set(v_reuseFailAlloc_412_, 1, v_a_399_);
v___x_410_ = v_reuseFailAlloc_412_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
v_a_398_ = v_tail_402_;
v_a_399_ = v___x_410_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_wsNlRests_spec__1___boxed(lean_object* v_src_414_, lean_object* v_a_415_, lean_object* v_a_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_wsNlRests_spec__1(v_src_414_, v_a_415_, v_a_416_);
lean_dec(v_src_414_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0(lean_object* v_run_420_, lean_object* v_a_421_, lean_object* v_a_422_){
_start:
{
if (lean_obj_tag(v_a_421_) == 0)
{
lean_object* v___x_423_; 
v___x_423_ = l_List_reverse___redArg(v_a_422_);
return v___x_423_;
}
else
{
lean_object* v_head_424_; lean_object* v_tail_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_437_; 
v_head_424_ = lean_ctor_get(v_a_421_, 0);
v_tail_425_ = lean_ctor_get(v_a_421_, 1);
v_isSharedCheck_437_ = !lean_is_exclusive(v_a_421_);
if (v_isSharedCheck_437_ == 0)
{
v___x_427_ = v_a_421_;
v_isShared_428_ = v_isSharedCheck_437_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_tail_425_);
lean_inc(v_head_424_);
lean_dec(v_a_421_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_437_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_429_; lean_object* v___x_430_; uint8_t v___x_431_; 
lean_inc(v_head_424_);
v___x_429_ = l_List_get_x3fInternal___redArg(v_run_420_, v_head_424_);
v___x_430_ = ((lean_object*)(lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0___closed__0));
v___x_431_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_429_, v___x_430_);
lean_dec(v___x_429_);
if (v___x_431_ == 0)
{
lean_del_object(v___x_427_);
lean_dec(v_head_424_);
v_a_421_ = v_tail_425_;
goto _start;
}
else
{
lean_object* v___x_434_; 
if (v_isShared_428_ == 0)
{
lean_ctor_set(v___x_427_, 1, v_a_422_);
v___x_434_ = v___x_427_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_head_424_);
lean_ctor_set(v_reuseFailAlloc_436_, 1, v_a_422_);
v___x_434_ = v_reuseFailAlloc_436_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
v_a_421_ = v_tail_425_;
v_a_422_ = v___x_434_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0___boxed(lean_object* v_run_438_, lean_object* v_a_439_, lean_object* v_a_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0(v_run_438_, v_a_439_, v_a_440_);
lean_dec(v_run_438_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_wsNlRests(lean_object* v_src_442_){
_start:
{
lean_object* v_runLen_443_; lean_object* v___x_444_; lean_object* v_run_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v_nlIdx_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v_runLen_443_ = lp_lean_x2dftml_LeanFtml_wsNlRests_countWs(v_src_442_);
v___x_444_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0));
lean_inc(v_runLen_443_);
lean_inc(v_src_442_);
v_run_445_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_442_, v_src_442_, v_runLen_443_, v___x_444_);
v___x_446_ = l_List_range(v_runLen_443_);
v___x_447_ = lean_box(0);
v_nlIdx_448_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0(v_run_445_, v___x_446_, v___x_447_);
lean_dec(v_run_445_);
v___x_449_ = l_List_reverse___redArg(v_nlIdx_448_);
v___x_450_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_wsNlRests_spec__1(v_src_442_, v___x_449_, v___x_447_);
lean_dec(v_src_442_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitBytes(lean_object* v_b_451_, lean_object* v_x_452_){
_start:
{
if (lean_obj_tag(v_x_452_) == 0)
{
lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_453_ = lean_box(0);
v___x_454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_454_, 0, v_x_452_);
lean_ctor_set(v___x_454_, 1, v___x_453_);
return v___x_454_;
}
else
{
lean_object* v_head_455_; lean_object* v_tail_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_480_; 
v_head_455_ = lean_ctor_get(v_x_452_, 0);
v_tail_456_ = lean_ctor_get(v_x_452_, 1);
v_isSharedCheck_480_ = !lean_is_exclusive(v_x_452_);
if (v_isSharedCheck_480_ == 0)
{
v___x_458_ = v_x_452_;
v_isShared_459_ = v_isSharedCheck_480_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_tail_456_);
lean_inc(v_head_455_);
lean_dec(v_x_452_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_480_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_460_; lean_object* v_head_461_; lean_object* v_tail_462_; uint8_t v___x_463_; 
v___x_460_ = lp_lean_x2dftml_LeanFtml_splitBytes(v_b_451_, v_tail_456_);
v_head_461_ = lean_ctor_get(v___x_460_, 0);
v_tail_462_ = lean_ctor_get(v___x_460_, 1);
v___x_463_ = lean_nat_dec_eq(v_head_455_, v_b_451_);
if (v___x_463_ == 0)
{
lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_473_; 
lean_inc(v_tail_462_);
lean_inc(v_head_461_);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_473_ == 0)
{
lean_object* v_unused_474_; lean_object* v_unused_475_; 
v_unused_474_ = lean_ctor_get(v___x_460_, 1);
lean_dec(v_unused_474_);
v_unused_475_ = lean_ctor_get(v___x_460_, 0);
lean_dec(v_unused_475_);
v___x_465_ = v___x_460_;
v_isShared_466_ = v_isSharedCheck_473_;
goto v_resetjp_464_;
}
else
{
lean_dec(v___x_460_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_473_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 1, v_head_461_);
lean_ctor_set(v___x_465_, 0, v_head_455_);
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_head_455_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v_head_461_);
v___x_468_ = v_reuseFailAlloc_472_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
lean_object* v___x_470_; 
if (v_isShared_459_ == 0)
{
lean_ctor_set(v___x_458_, 1, v_tail_462_);
lean_ctor_set(v___x_458_, 0, v___x_468_);
v___x_470_ = v___x_458_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_468_);
lean_ctor_set(v_reuseFailAlloc_471_, 1, v_tail_462_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
else
{
lean_object* v___x_476_; lean_object* v___x_478_; 
lean_dec(v_head_455_);
v___x_476_ = lean_box(0);
if (v_isShared_459_ == 0)
{
lean_ctor_set(v___x_458_, 1, v___x_460_);
lean_ctor_set(v___x_458_, 0, v___x_476_);
v___x_478_ = v___x_458_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_476_);
lean_ctor_set(v_reuseFailAlloc_479_, 1, v___x_460_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_splitBytes___boxed(lean_object* v_b_481_, lean_object* v_x_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = lp_lean_x2dftml_LeanFtml_splitBytes(v_b_481_, v_x_482_);
lean_dec(v_b_481_);
return v_res_483_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_rawScan___closed__4(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_493_ = lean_unsigned_to_nat(64u);
v___x_494_ = lean_unsigned_to_nat(3u);
v___x_495_ = l_List_replicateTR___redArg(v___x_494_, v___x_493_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawScan(lean_object* v_prev_499_, lean_object* v_src_500_, lean_object* v_toks_501_, lean_object* v_x_502_){
_start:
{
lean_object* v___y_507_; lean_object* v___y_508_; lean_object* v___y_509_; lean_object* v___y_510_; lean_object* v_zero_514_; uint8_t v_isZero_515_; 
v_zero_514_ = lean_unsigned_to_nat(0u);
v_isZero_515_ = lean_nat_dec_eq(v_x_502_, v_zero_514_);
if (v_isZero_515_ == 1)
{
lean_dec(v_src_500_);
goto v___jp_503_;
}
else
{
if (lean_obj_tag(v_src_500_) == 0)
{
goto v___jp_503_;
}
else
{
lean_object* v_head_516_; lean_object* v_tail_517_; lean_object* v_one_518_; lean_object* v_n_519_; lean_object* v___x_533_; uint8_t v___x_534_; 
v_head_516_ = lean_ctor_get(v_src_500_, 0);
v_tail_517_ = lean_ctor_get(v_src_500_, 1);
v_one_518_ = lean_unsigned_to_nat(1u);
v_n_519_ = lean_nat_sub(v_x_502_, v_one_518_);
v___x_533_ = lean_unsigned_to_nat(64u);
v___x_534_ = lean_nat_dec_eq(v_head_516_, v___x_533_);
if (v___x_534_ == 0)
{
lean_inc(v_tail_517_);
lean_inc(v_head_516_);
lean_dec_ref_known(v_src_500_, 2);
goto v___jp_520_;
}
else
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v___y_552_; lean_object* v___y_553_; lean_object* v___y_554_; lean_object* v___y_555_; lean_object* v___y_574_; lean_object* v___y_575_; lean_object* v___y_576_; lean_object* v___y_577_; lean_object* v___y_597_; lean_object* v___y_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; lean_object* v___y_602_; lean_object* v___y_603_; uint8_t v___x_613_; 
v___x_535_ = l_List_head_x3f___redArg(v_tail_517_);
v___x_536_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__0));
v___x_613_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_535_, v___x_536_);
lean_dec(v___x_535_);
if (v___x_613_ == 0)
{
lean_inc(v_tail_517_);
lean_inc(v_head_516_);
lean_dec_ref_known(v_src_500_, 2);
goto v___jp_520_;
}
else
{
uint8_t v___x_614_; 
v___x_614_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_499_, v___x_536_);
if (v___x_614_ == 0)
{
lean_object* v_run_615_; lean_object* v_afterRun_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_826_; 
v_run_615_ = lp_lean_x2dftml_LeanFtml_countRun(v___x_533_, v_src_500_);
lean_inc(v_run_615_);
v_afterRun_616_ = l_List_drop___redArg(v_run_615_, v_src_500_);
v_isSharedCheck_826_ = !lean_is_exclusive(v_src_500_);
if (v_isSharedCheck_826_ == 0)
{
lean_object* v_unused_827_; lean_object* v_unused_828_; 
v_unused_827_ = lean_ctor_get(v_src_500_, 1);
lean_dec(v_unused_827_);
v_unused_828_ = lean_ctor_get(v_src_500_, 0);
lean_dec(v_unused_828_);
v___x_618_ = v_src_500_;
v_isShared_619_ = v_isSharedCheck_826_;
goto v_resetjp_617_;
}
else
{
lean_dec(v_src_500_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_826_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_620_; lean_object* v___y_622_; lean_object* v___y_623_; lean_object* v___y_624_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___y_646_; lean_object* v___y_647_; lean_object* v___y_648_; lean_object* v___y_649_; lean_object* v___y_650_; lean_object* v___y_660_; lean_object* v___y_661_; lean_object* v___y_662_; lean_object* v___y_663_; lean_object* v___y_664_; lean_object* v___y_665_; lean_object* v___y_666_; lean_object* v___y_711_; lean_object* v___y_712_; lean_object* v___y_713_; lean_object* v___y_714_; lean_object* v___y_715_; lean_object* v___y_716_; uint8_t v___y_717_; uint8_t v___x_771_; uint8_t v___y_773_; 
v___x_620_ = lean_unsigned_to_nat(2u);
v___x_771_ = lean_nat_dec_lt(v___x_620_, v_run_615_);
if (v___x_771_ == 0)
{
v___y_773_ = v___x_613_;
goto v___jp_772_;
}
else
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__3));
lean_inc(v_afterRun_616_);
v___x_809_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_808_, v_afterRun_616_);
if (lean_obj_tag(v___x_809_) == 0)
{
v___y_773_ = v___x_614_;
goto v___jp_772_;
}
else
{
lean_object* v_val_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v_val_810_ = lean_ctor_get(v___x_809_, 0);
lean_inc(v_val_810_);
lean_dec_ref_known(v___x_809_, 1);
v___x_811_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__5));
lean_inc(v_afterRun_616_);
v___x_812_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_811_, v_afterRun_616_);
if (lean_obj_tag(v___x_812_) == 0)
{
lean_dec(v_val_810_);
v___y_773_ = v___x_613_;
goto v___jp_772_;
}
else
{
lean_object* v_val_813_; uint8_t v___y_815_; lean_object* v___x_819_; lean_object* v_closeRun_820_; lean_object* v___x_821_; uint8_t v___x_822_; 
v_val_813_ = lean_ctor_get(v___x_812_, 0);
lean_inc(v_val_813_);
lean_dec_ref_known(v___x_812_, 1);
lean_inc(v_val_810_);
v___x_819_ = l_List_drop___redArg(v_val_810_, v_afterRun_616_);
v_closeRun_820_ = lp_lean_x2dftml_LeanFtml_countRun(v___x_533_, v___x_819_);
lean_dec(v___x_819_);
v___x_821_ = lean_unsigned_to_nat(3u);
v___x_822_ = lean_nat_dec_le(v_closeRun_820_, v___x_821_);
if (v___x_822_ == 0)
{
lean_dec(v_closeRun_820_);
v___y_815_ = v___x_822_;
goto v___jp_814_;
}
else
{
lean_object* v___x_823_; lean_object* v___x_824_; uint8_t v___x_825_; 
v___x_823_ = lean_nat_add(v_val_810_, v_closeRun_820_);
lean_dec(v_closeRun_820_);
v___x_824_ = l_List_drop___redArg(v___x_823_, v_afterRun_616_);
v___x_825_ = lp_lean_x2dftml_LeanFtml_hasLaterQuad(v___x_824_);
v___y_815_ = v___x_825_;
goto v___jp_814_;
}
v___jp_814_:
{
lean_object* v___x_816_; uint8_t v___x_817_; 
v___x_816_ = lean_unsigned_to_nat(4u);
v___x_817_ = lean_nat_dec_lt(v_run_615_, v___x_816_);
if (v___x_817_ == 0)
{
uint8_t v___x_818_; 
v___x_818_ = lean_nat_dec_lt(v_val_810_, v_val_813_);
lean_dec(v_val_813_);
lean_dec(v_val_810_);
if (v___x_818_ == 0)
{
v___y_773_ = v___x_818_;
goto v___jp_772_;
}
else
{
if (v___y_815_ == 0)
{
v___y_773_ = v___x_771_;
goto v___jp_772_;
}
else
{
v___y_773_ = v___x_614_;
goto v___jp_772_;
}
}
}
else
{
lean_dec(v_val_813_);
lean_dec(v_val_810_);
v___y_773_ = v___x_613_;
goto v___jp_772_;
}
}
}
}
}
v___jp_621_:
{
uint8_t v___x_627_; 
v___x_627_ = l_List_isEmpty___redArg(v___y_625_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; uint8_t v___x_629_; 
lean_del_object(v___x_618_);
v___x_628_ = lean_nat_sub(v_run_615_, v___x_620_);
lean_dec(v_run_615_);
v___x_629_ = lean_nat_dec_eq(v___x_628_, v_one_518_);
lean_dec(v___x_628_);
if (v___x_629_ == 0)
{
v___y_552_ = v___y_622_;
v___y_553_ = v___y_626_;
v___y_554_ = v___y_625_;
v___y_555_ = v___y_623_;
goto v___jp_551_;
}
else
{
lean_dec(v___y_623_);
lean_inc(v___y_624_);
v___y_552_ = v___y_622_;
v___y_553_ = v___y_626_;
v___y_554_ = v___y_625_;
v___y_555_ = v___y_624_;
goto v___jp_551_;
}
}
else
{
lean_object* v___x_630_; lean_object* v_fst_631_; lean_object* v_snd_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_644_; 
lean_dec(v___y_625_);
lean_dec(v___y_623_);
lean_dec(v_run_615_);
v___x_630_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_536_, v___y_622_, v_toks_501_, v_n_519_);
lean_dec(v_n_519_);
v_fst_631_ = lean_ctor_get(v___x_630_, 0);
v_snd_632_ = lean_ctor_get(v___x_630_, 1);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_644_ == 0)
{
v___x_634_ = v___x_630_;
v_isShared_635_ = v_isSharedCheck_644_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_snd_632_);
lean_inc(v_fst_631_);
lean_dec(v___x_630_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_644_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_639_; 
v___x_636_ = lean_unsigned_to_nat(32u);
v___x_637_ = l_List_appendTR___redArg(v___y_626_, v_fst_631_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 1, v___x_637_);
lean_ctor_set(v___x_618_, 0, v___x_636_);
v___x_639_ = v___x_618_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_636_);
lean_ctor_set(v_reuseFailAlloc_643_, 1, v___x_637_);
v___x_639_ = v_reuseFailAlloc_643_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
lean_object* v___x_641_; 
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v___x_639_);
v___x_641_ = v___x_634_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v___x_639_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v_snd_632_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
}
}
v___jp_645_:
{
lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v_trimmed_653_; uint8_t v___x_654_; 
v___x_651_ = lean_array_mk(v___y_650_);
v___x_652_ = lean_array_pop(v___x_651_);
v_trimmed_653_ = lean_array_to_list(v___x_652_);
v___x_654_ = lean_nat_dec_lt(v___x_620_, v___y_649_);
if (v___x_654_ == 0)
{
lean_dec(v___y_649_);
lean_inc(v___y_647_);
v___y_622_ = v___y_646_;
v___y_623_ = v___y_647_;
v___y_624_ = v___y_648_;
v___y_625_ = v_trimmed_653_;
v___y_626_ = v___y_647_;
goto v___jp_621_;
}
else
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_655_ = lean_unsigned_to_nat(32u);
v___x_656_ = lean_nat_sub(v___y_649_, v___x_620_);
lean_dec(v___y_649_);
v___x_657_ = l_List_replicateTR___redArg(v___x_656_, v___x_533_);
v___x_658_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_655_);
lean_ctor_set(v___x_658_, 1, v___x_657_);
v___y_622_ = v___y_646_;
v___y_623_ = v___y_647_;
v___y_624_ = v___y_648_;
v___y_625_ = v_trimmed_653_;
v___y_626_ = v___x_658_;
goto v___jp_621_;
}
}
v___jp_659_:
{
uint8_t v___x_667_; 
v___x_667_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___y_666_, v___y_665_);
if (v___x_667_ == 0)
{
uint8_t v___x_668_; 
lean_dec(v_afterRun_616_);
v___x_668_ = l_List_isEmpty___redArg(v___y_665_);
if (v___x_668_ == 0)
{
lean_object* v_lead_669_; uint8_t v___x_670_; 
v_lead_669_ = lean_nat_sub(v_run_615_, v___x_620_);
lean_dec(v_run_615_);
v___x_670_ = lean_nat_dec_le(v___x_620_, v_lead_669_);
if (v___x_670_ == 0)
{
lean_object* v_trail_671_; uint8_t v___x_672_; 
v_trail_671_ = lean_nat_sub(v___y_664_, v___x_620_);
lean_dec(v___y_664_);
v___x_672_ = lean_nat_dec_le(v___x_620_, v_trail_671_);
if (v___x_672_ == 0)
{
uint8_t v___x_673_; 
v___x_673_ = lean_nat_dec_eq(v_lead_669_, v_one_518_);
lean_dec(v_lead_669_);
if (v___x_673_ == 0)
{
lean_inc(v___y_661_);
v___y_597_ = v___y_660_;
v___y_598_ = v___y_661_;
v___y_599_ = v___y_662_;
v___y_600_ = v_one_518_;
v___y_601_ = v___y_665_;
v___y_602_ = v_trail_671_;
v___y_603_ = v___y_661_;
goto v___jp_596_;
}
else
{
lean_inc(v___y_662_);
v___y_597_ = v___y_660_;
v___y_598_ = v___y_661_;
v___y_599_ = v___y_662_;
v___y_600_ = v_one_518_;
v___y_601_ = v___y_665_;
v___y_602_ = v_trail_671_;
v___y_603_ = v___y_662_;
goto v___jp_596_;
}
}
else
{
uint8_t v___x_674_; 
v___x_674_ = lean_nat_dec_eq(v_lead_669_, v_one_518_);
lean_dec(v_lead_669_);
if (v___x_674_ == 0)
{
v___y_574_ = v___y_660_;
v___y_575_ = v___y_665_;
v___y_576_ = v_trail_671_;
v___y_577_ = v___y_661_;
goto v___jp_573_;
}
else
{
lean_dec(v___y_661_);
lean_inc(v___y_662_);
v___y_574_ = v___y_660_;
v___y_575_ = v___y_665_;
v___y_576_ = v_trail_671_;
v___y_577_ = v___y_662_;
goto v___jp_573_;
}
}
}
else
{
lean_object* v___x_675_; lean_object* v_fst_676_; lean_object* v_snd_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_691_; 
lean_dec(v___y_661_);
v___x_675_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_536_, v___y_660_, v_toks_501_, v_n_519_);
lean_dec(v_n_519_);
v_fst_676_ = lean_ctor_get(v___x_675_, 0);
v_snd_677_ = lean_ctor_get(v___x_675_, 1);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_675_);
if (v_isSharedCheck_691_ == 0)
{
v___x_679_ = v___x_675_;
v_isShared_680_ = v_isSharedCheck_691_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_snd_677_);
lean_inc(v_fst_676_);
lean_dec(v___x_675_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_691_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_689_; 
v___x_681_ = lean_nat_sub(v_lead_669_, v___x_620_);
lean_dec(v_lead_669_);
v___x_682_ = l_List_replicateTR___redArg(v___x_681_, v___x_533_);
v___x_683_ = l_List_appendTR___redArg(v___x_682_, v___y_665_);
v___x_684_ = lp_lean_x2dftml_LeanFtml_rawSurplusClose(v___y_664_);
lean_dec(v___y_664_);
v___x_685_ = l_List_replicateTR___redArg(v___x_684_, v___x_533_);
v___x_686_ = l_List_appendTR___redArg(v___x_683_, v___x_685_);
v___x_687_ = l_List_appendTR___redArg(v___x_686_, v_fst_676_);
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 0, v___x_687_);
v___x_689_ = v___x_679_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v___x_687_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v_snd_677_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
return v___x_689_;
}
}
}
}
else
{
lean_object* v_total_692_; uint8_t v___x_693_; 
lean_dec(v___y_665_);
v_total_692_ = lean_nat_add(v_run_615_, v___y_664_);
lean_dec(v___y_664_);
lean_dec(v_run_615_);
v___x_693_ = lean_nat_dec_le(v_total_692_, v___y_663_);
if (v___x_693_ == 0)
{
lean_object* v___x_694_; uint8_t v___x_695_; 
lean_dec(v___y_661_);
v___x_694_ = lean_unsigned_to_nat(5u);
v___x_695_ = lean_nat_dec_eq(v_total_692_, v___x_694_);
if (v___x_695_ == 0)
{
lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_696_ = lean_nat_sub(v_total_692_, v___y_663_);
lean_dec(v_total_692_);
v___x_697_ = l_List_replicateTR___redArg(v___x_696_, v___x_533_);
v___y_538_ = v___y_660_;
v___y_539_ = v___x_697_;
goto v___jp_537_;
}
else
{
lean_dec(v_total_692_);
lean_inc(v___y_662_);
v___y_538_ = v___y_660_;
v___y_539_ = v___y_662_;
goto v___jp_537_;
}
}
else
{
lean_dec(v_total_692_);
v___y_538_ = v___y_660_;
v___y_539_ = v___y_661_;
goto v___jp_537_;
}
}
}
else
{
lean_object* v___x_698_; lean_object* v_fst_699_; lean_object* v_snd_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_709_; 
lean_dec(v___y_665_);
lean_dec(v___y_664_);
lean_dec(v___y_661_);
lean_dec(v___y_660_);
v___x_698_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_536_, v_afterRun_616_, v_toks_501_, v_n_519_);
lean_dec(v_n_519_);
v_fst_699_ = lean_ctor_get(v___x_698_, 0);
v_snd_700_ = lean_ctor_get(v___x_698_, 1);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_709_ == 0)
{
v___x_702_ = v___x_698_;
v_isShared_703_ = v_isSharedCheck_709_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_snd_700_);
lean_inc(v_fst_699_);
lean_dec(v___x_698_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_709_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_707_; 
v___x_704_ = l_List_replicateTR___redArg(v_run_615_, v___x_533_);
v___x_705_ = l_List_appendTR___redArg(v___x_704_, v_fst_699_);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 0, v___x_705_);
v___x_707_ = v___x_702_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v___x_705_);
lean_ctor_set(v_reuseFailAlloc_708_, 1, v_snd_700_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
}
v___jp_710_:
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_718_ = l_List_getLast_x3f___redArg(v___y_716_);
v___x_719_ = lean_unsigned_to_nat(10u);
v___x_720_ = ((lean_object*)(lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_wsNlRests_spec__0___closed__0));
v___x_721_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_718_, v___x_720_);
lean_dec(v___x_718_);
if (v___x_721_ == 0)
{
lean_del_object(v___x_618_);
v___y_660_ = v___y_711_;
v___y_661_ = v___y_712_;
v___y_662_ = v___y_713_;
v___y_663_ = v___y_715_;
v___y_664_ = v___y_714_;
v___y_665_ = v___y_716_;
v___y_666_ = v___x_719_;
goto v___jp_659_;
}
else
{
uint8_t v___x_722_; 
v___x_722_ = lean_nat_dec_le(v___x_620_, v___y_714_);
if (v___x_722_ == 0)
{
lean_del_object(v___x_618_);
v___y_660_ = v___y_711_;
v___y_661_ = v___y_712_;
v___y_662_ = v___y_713_;
v___y_663_ = v___y_715_;
v___y_664_ = v___y_714_;
v___y_665_ = v___y_716_;
v___y_666_ = v___x_719_;
goto v___jp_659_;
}
else
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; uint8_t v___x_726_; 
lean_inc(v___y_716_);
v___x_723_ = lean_array_mk(v___y_716_);
v___x_724_ = lean_array_pop(v___x_723_);
v___x_725_ = lean_array_to_list(v___x_724_);
v___x_726_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___x_719_, v___x_725_);
lean_dec(v___x_725_);
if (v___x_726_ == 0)
{
lean_dec(v_afterRun_616_);
v___y_646_ = v___y_711_;
v___y_647_ = v___y_712_;
v___y_648_ = v___y_713_;
v___y_649_ = v___y_714_;
v___y_650_ = v___y_716_;
goto v___jp_645_;
}
else
{
if (v___y_717_ == 0)
{
lean_del_object(v___x_618_);
v___y_660_ = v___y_711_;
v___y_661_ = v___y_712_;
v___y_662_ = v___y_713_;
v___y_663_ = v___y_715_;
v___y_664_ = v___y_714_;
v___y_665_ = v___y_716_;
v___y_666_ = v___x_719_;
goto v___jp_659_;
}
else
{
lean_dec(v_afterRun_616_);
v___y_646_ = v___y_711_;
v___y_647_ = v___y_712_;
v___y_648_ = v___y_713_;
v___y_649_ = v___y_714_;
v___y_650_ = v___y_716_;
goto v___jp_645_;
}
}
}
}
}
v___jp_727_:
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_728_ = lean_box(0);
v___x_729_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__2));
v___x_730_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__3));
lean_inc(v_afterRun_616_);
v___x_731_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_730_, v_afterRun_616_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v___x_732_; lean_object* v_fst_733_; lean_object* v_snd_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_743_; 
lean_del_object(v___x_618_);
v___x_732_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_536_, v_afterRun_616_, v_toks_501_, v_n_519_);
lean_dec(v_n_519_);
v_fst_733_ = lean_ctor_get(v___x_732_, 0);
v_snd_734_ = lean_ctor_get(v___x_732_, 1);
v_isSharedCheck_743_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_743_ == 0)
{
v___x_736_ = v___x_732_;
v_isShared_737_ = v_isSharedCheck_743_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_snd_734_);
lean_inc(v_fst_733_);
lean_dec(v___x_732_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_743_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_741_; 
v___x_738_ = l_List_replicateTR___redArg(v_run_615_, v___x_533_);
v___x_739_ = l_List_appendTR___redArg(v___x_738_, v_fst_733_);
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 0, v___x_739_);
v___x_741_ = v___x_736_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v___x_739_);
lean_ctor_set(v_reuseFailAlloc_742_, 1, v_snd_734_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
return v___x_741_;
}
}
}
else
{
lean_object* v_val_744_; lean_object* v___x_745_; lean_object* v_body_746_; lean_object* v_afterBody_747_; lean_object* v_closeRun_748_; lean_object* v_afterClose_749_; lean_object* v___x_750_; uint8_t v___x_751_; 
v_val_744_ = lean_ctor_get(v___x_731_, 0);
lean_inc_n(v_val_744_, 2);
lean_dec_ref_known(v___x_731_, 1);
v___x_745_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0));
lean_inc(v_afterRun_616_);
v_body_746_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_afterRun_616_, v_afterRun_616_, v_val_744_, v___x_745_);
v_afterBody_747_ = l_List_drop___redArg(v_val_744_, v_afterRun_616_);
v_closeRun_748_ = lp_lean_x2dftml_LeanFtml_countRun(v___x_533_, v_afterBody_747_);
lean_inc(v_closeRun_748_);
v_afterClose_749_ = l_List_drop___redArg(v_closeRun_748_, v_afterBody_747_);
lean_dec(v_afterBody_747_);
v___x_750_ = lean_unsigned_to_nat(4u);
v___x_751_ = lean_nat_dec_le(v___x_750_, v_run_615_);
if (v___x_751_ == 0)
{
v___y_711_ = v_afterClose_749_;
v___y_712_ = v___x_728_;
v___y_713_ = v___x_729_;
v___y_714_ = v_closeRun_748_;
v___y_715_ = v___x_750_;
v___y_716_ = v_body_746_;
v___y_717_ = v___x_751_;
goto v___jp_710_;
}
else
{
uint8_t v___x_752_; 
v___x_752_ = lean_nat_dec_le(v___x_750_, v_closeRun_748_);
if (v___x_752_ == 0)
{
v___y_711_ = v_afterClose_749_;
v___y_712_ = v___x_728_;
v___y_713_ = v___x_729_;
v___y_714_ = v_closeRun_748_;
v___y_715_ = v___x_750_;
v___y_716_ = v_body_746_;
v___y_717_ = v___x_752_;
goto v___jp_710_;
}
else
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v_fst_755_; lean_object* v_snd_756_; lean_object* v___x_757_; lean_object* v_fst_758_; lean_object* v_snd_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_770_; 
lean_dec(v_afterClose_749_);
lean_dec(v_closeRun_748_);
lean_dec(v_body_746_);
lean_del_object(v___x_618_);
v___x_753_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__1));
v___x_754_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_753_, v___x_728_, v_toks_501_);
v_fst_755_ = lean_ctor_get(v___x_754_, 0);
lean_inc(v_fst_755_);
v_snd_756_ = lean_ctor_get(v___x_754_, 1);
lean_inc(v_snd_756_);
lean_dec_ref(v___x_754_);
v___x_757_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_536_, v_afterRun_616_, v_snd_756_, v_n_519_);
lean_dec(v_n_519_);
v_fst_758_ = lean_ctor_get(v___x_757_, 0);
v_snd_759_ = lean_ctor_get(v___x_757_, 1);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_770_ == 0)
{
v___x_761_ = v___x_757_;
v_isShared_762_ = v_isSharedCheck_770_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_snd_759_);
lean_inc(v_fst_758_);
lean_dec(v___x_757_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_770_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_768_; 
v___x_763_ = lean_nat_sub(v_run_615_, v___x_750_);
lean_dec(v_run_615_);
v___x_764_ = l_List_replicateTR___redArg(v___x_763_, v___x_533_);
v___x_765_ = l_List_appendTR___redArg(v_fst_755_, v___x_764_);
v___x_766_ = l_List_appendTR___redArg(v___x_765_, v_fst_758_);
if (v_isShared_762_ == 0)
{
lean_ctor_set(v___x_761_, 0, v___x_766_);
v___x_768_ = v___x_761_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v___x_766_);
lean_ctor_set(v_reuseFailAlloc_769_, 1, v_snd_759_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
}
}
v___jp_772_:
{
if (v___x_771_ == 0)
{
goto v___jp_727_;
}
else
{
if (v___y_773_ == 0)
{
lean_object* v___x_774_; uint8_t v___x_775_; 
lean_del_object(v___x_618_);
v___x_774_ = lean_unsigned_to_nat(3u);
v___x_775_ = lean_nat_dec_eq(v_run_615_, v___x_774_);
if (v___x_775_ == 0)
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v_fst_779_; lean_object* v_snd_780_; lean_object* v___x_781_; lean_object* v_fst_782_; lean_object* v_snd_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_795_; 
v___x_776_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__1));
v___x_777_ = lean_box(0);
v___x_778_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_776_, v___x_777_, v_toks_501_);
v_fst_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_fst_779_);
v_snd_780_ = lean_ctor_get(v___x_778_, 1);
lean_inc(v_snd_780_);
lean_dec_ref(v___x_778_);
v___x_781_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_536_, v_afterRun_616_, v_snd_780_, v_n_519_);
lean_dec(v_n_519_);
v_fst_782_ = lean_ctor_get(v___x_781_, 0);
v_snd_783_ = lean_ctor_get(v___x_781_, 1);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_795_ == 0)
{
v___x_785_ = v___x_781_;
v_isShared_786_ = v_isSharedCheck_795_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_snd_783_);
lean_inc(v_fst_782_);
lean_dec(v___x_781_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_795_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_793_; 
v___x_787_ = lean_unsigned_to_nat(4u);
v___x_788_ = lean_nat_sub(v_run_615_, v___x_787_);
lean_dec(v_run_615_);
v___x_789_ = l_List_replicateTR___redArg(v___x_788_, v___x_533_);
v___x_790_ = l_List_appendTR___redArg(v_fst_779_, v___x_789_);
v___x_791_ = l_List_appendTR___redArg(v___x_790_, v_fst_782_);
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 0, v___x_791_);
v___x_793_ = v___x_785_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v___x_791_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v_snd_783_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
}
else
{
lean_object* v___x_796_; lean_object* v_fst_797_; lean_object* v_snd_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_807_; 
lean_dec(v_run_615_);
v___x_796_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_536_, v_afterRun_616_, v_toks_501_, v_n_519_);
lean_dec(v_n_519_);
v_fst_797_ = lean_ctor_get(v___x_796_, 0);
v_snd_798_ = lean_ctor_get(v___x_796_, 1);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_796_);
if (v_isSharedCheck_807_ == 0)
{
v___x_800_ = v___x_796_;
v_isShared_801_ = v_isSharedCheck_807_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_snd_798_);
lean_inc(v_fst_797_);
lean_dec(v___x_796_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_807_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_805_; 
v___x_802_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_rawScan___closed__4, &lp_lean_x2dftml_LeanFtml_rawScan___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_rawScan___closed__4);
v___x_803_ = l_List_appendTR___redArg(v___x_802_, v_fst_797_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 0, v___x_803_);
v___x_805_ = v___x_800_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v___x_803_);
lean_ctor_set(v_reuseFailAlloc_806_, 1, v_snd_798_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
else
{
goto v___jp_727_;
}
}
}
}
}
else
{
lean_inc(v_tail_517_);
lean_inc(v_head_516_);
lean_dec_ref_known(v_src_500_, 2);
goto v___jp_520_;
}
}
v___jp_537_:
{
lean_object* v___x_540_; lean_object* v_fst_541_; lean_object* v_snd_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_550_; 
v___x_540_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_536_, v___y_538_, v_toks_501_, v_n_519_);
lean_dec(v_n_519_);
v_fst_541_ = lean_ctor_get(v___x_540_, 0);
v_snd_542_ = lean_ctor_get(v___x_540_, 1);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_550_ == 0)
{
v___x_544_ = v___x_540_;
v_isShared_545_ = v_isSharedCheck_550_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_snd_542_);
lean_inc(v_fst_541_);
lean_dec(v___x_540_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_550_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_546_; lean_object* v___x_548_; 
v___x_546_ = l_List_appendTR___redArg(v___y_539_, v_fst_541_);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 0, v___x_546_);
v___x_548_ = v___x_544_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v___x_546_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v_snd_542_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
v___jp_551_:
{
lean_object* v_text_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v_fst_559_; lean_object* v_snd_560_; lean_object* v___x_561_; lean_object* v_fst_562_; lean_object* v_snd_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_572_; 
v_text_556_ = l_List_appendTR___redArg(v___y_555_, v___y_554_);
v___x_557_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__1));
v___x_558_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_557_, v_text_556_, v_toks_501_);
v_fst_559_ = lean_ctor_get(v___x_558_, 0);
lean_inc(v_fst_559_);
v_snd_560_ = lean_ctor_get(v___x_558_, 1);
lean_inc(v_snd_560_);
lean_dec_ref(v___x_558_);
v___x_561_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_536_, v___y_552_, v_snd_560_, v_n_519_);
lean_dec(v_n_519_);
v_fst_562_ = lean_ctor_get(v___x_561_, 0);
v_snd_563_ = lean_ctor_get(v___x_561_, 1);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_572_ == 0)
{
v___x_565_ = v___x_561_;
v_isShared_566_ = v_isSharedCheck_572_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_snd_563_);
lean_inc(v_fst_562_);
lean_dec(v___x_561_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_572_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_570_; 
v___x_567_ = l_List_appendTR___redArg(v_fst_559_, v___y_553_);
v___x_568_ = l_List_appendTR___redArg(v___x_567_, v_fst_562_);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 0, v___x_568_);
v___x_570_ = v___x_565_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_568_);
lean_ctor_set(v_reuseFailAlloc_571_, 1, v_snd_563_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
v___jp_573_:
{
lean_object* v_text_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v_fst_581_; lean_object* v_snd_582_; lean_object* v___x_583_; lean_object* v_fst_584_; lean_object* v_snd_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_595_; 
v_text_578_ = l_List_appendTR___redArg(v___y_577_, v___y_575_);
v___x_579_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__1));
v___x_580_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_579_, v_text_578_, v_toks_501_);
v_fst_581_ = lean_ctor_get(v___x_580_, 0);
lean_inc(v_fst_581_);
v_snd_582_ = lean_ctor_get(v___x_580_, 1);
lean_inc(v_snd_582_);
lean_dec_ref(v___x_580_);
v___x_583_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_536_, v___y_574_, v_snd_582_, v_n_519_);
lean_dec(v_n_519_);
v_fst_584_ = lean_ctor_get(v___x_583_, 0);
v_snd_585_ = lean_ctor_get(v___x_583_, 1);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_595_ == 0)
{
v___x_587_ = v___x_583_;
v_isShared_588_ = v_isSharedCheck_595_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_snd_585_);
lean_inc(v_fst_584_);
lean_dec(v___x_583_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_595_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_589_ = l_List_replicateTR___redArg(v___y_576_, v___x_533_);
v___x_590_ = l_List_appendTR___redArg(v_fst_581_, v___x_589_);
v___x_591_ = l_List_appendTR___redArg(v___x_590_, v_fst_584_);
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 0, v___x_591_);
v___x_593_ = v___x_587_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v___x_591_);
lean_ctor_set(v_reuseFailAlloc_594_, 1, v_snd_585_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
v___jp_596_:
{
lean_object* v_text_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v_fst_607_; lean_object* v_snd_608_; lean_object* v___x_609_; lean_object* v_fst_610_; lean_object* v_snd_611_; uint8_t v___x_612_; 
v_text_604_ = l_List_appendTR___redArg(v___y_603_, v___y_601_);
v___x_605_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__1));
v___x_606_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_605_, v_text_604_, v_toks_501_);
v_fst_607_ = lean_ctor_get(v___x_606_, 0);
lean_inc(v_fst_607_);
v_snd_608_ = lean_ctor_get(v___x_606_, 1);
lean_inc(v_snd_608_);
lean_dec_ref(v___x_606_);
v___x_609_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_536_, v___y_597_, v_snd_608_, v_n_519_);
lean_dec(v_n_519_);
v_fst_610_ = lean_ctor_get(v___x_609_, 0);
lean_inc(v_fst_610_);
v_snd_611_ = lean_ctor_get(v___x_609_, 1);
lean_inc(v_snd_611_);
lean_dec_ref(v___x_609_);
v___x_612_ = lean_nat_dec_eq(v___y_602_, v___y_600_);
lean_dec(v___y_602_);
if (v___x_612_ == 0)
{
v___y_507_ = v_fst_610_;
v___y_508_ = v_fst_607_;
v___y_509_ = v_snd_611_;
v___y_510_ = v___y_598_;
goto v___jp_506_;
}
else
{
lean_dec(v___y_598_);
lean_inc(v___y_599_);
v___y_507_ = v_fst_610_;
v___y_508_ = v_fst_607_;
v___y_509_ = v_snd_611_;
v___y_510_ = v___y_599_;
goto v___jp_506_;
}
}
}
v___jp_520_:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v_fst_523_; lean_object* v_snd_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_532_; 
lean_inc(v_head_516_);
v___x_521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_521_, 0, v_head_516_);
v___x_522_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_521_, v_tail_517_, v_toks_501_, v_n_519_);
lean_dec(v_n_519_);
lean_dec_ref_known(v___x_521_, 1);
v_fst_523_ = lean_ctor_get(v___x_522_, 0);
v_snd_524_ = lean_ctor_get(v___x_522_, 1);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_532_ == 0)
{
v___x_526_ = v___x_522_;
v_isShared_527_ = v_isSharedCheck_532_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_snd_524_);
lean_inc(v_fst_523_);
lean_dec(v___x_522_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_532_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_528_; lean_object* v___x_530_; 
v___x_528_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_528_, 0, v_head_516_);
lean_ctor_set(v___x_528_, 1, v_fst_523_);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v___x_528_);
v___x_530_ = v___x_526_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_528_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v_snd_524_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
}
v___jp_503_:
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = lean_box(0);
v___x_505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_504_);
lean_ctor_set(v___x_505_, 1, v_toks_501_);
return v___x_505_;
}
v___jp_506_:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_511_ = l_List_appendTR___redArg(v___y_508_, v___y_510_);
v___x_512_ = l_List_appendTR___redArg(v___x_511_, v___y_507_);
v___x_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
lean_ctor_set(v___x_513_, 1, v___y_509_);
return v___x_513_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawScan___boxed(lean_object* v_prev_829_, lean_object* v_src_830_, lean_object* v_toks_831_, lean_object* v_x_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = lp_lean_x2dftml_LeanFtml_rawScan(v_prev_829_, v_src_830_, v_toks_831_, v_x_832_);
lean_dec(v_x_832_);
lean_dec(v_prev_829_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawRule___lam__0(lean_object* v_src_834_, lean_object* v_toks_835_){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_836_ = lean_box(0);
v___x_837_ = l_List_lengthTR___redArg(v_src_834_);
v___x_838_ = lean_unsigned_to_nat(1u);
v___x_839_ = lean_nat_add(v___x_837_, v___x_838_);
lean_dec(v___x_837_);
v___x_840_ = lp_lean_x2dftml_LeanFtml_rawScan(v___x_836_, v_src_834_, v_toks_835_, v___x_839_);
lean_dec(v___x_839_);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawRule(lean_object* v_st_842_){
_start:
{
lean_object* v___f_843_; lean_object* v___x_844_; 
v___f_843_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawRule___closed__0));
v___x_844_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_842_, v___f_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldBody_go(lean_object* v_a_845_, lean_object* v_a_846_){
_start:
{
if (lean_obj_tag(v_a_845_) == 0)
{
lean_object* v___x_847_; 
lean_dec(v_a_846_);
v___x_847_ = lean_box(0);
return v___x_847_;
}
else
{
lean_object* v_head_848_; lean_object* v_tail_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_886_; 
v_head_848_ = lean_ctor_get(v_a_845_, 0);
v_tail_849_ = lean_ctor_get(v_a_845_, 1);
v_isSharedCheck_886_ = !lean_is_exclusive(v_a_845_);
if (v_isSharedCheck_886_ == 0)
{
v___x_851_ = v_a_845_;
v_isShared_852_ = v_isSharedCheck_886_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_tail_849_);
lean_inc(v_head_848_);
lean_dec(v_a_845_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_886_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___y_854_; lean_object* v___x_867_; uint8_t v___x_868_; 
v___x_867_ = lean_unsigned_to_nat(96u);
v___x_868_ = lean_nat_dec_eq(v_head_848_, v___x_867_);
if (v___x_868_ == 0)
{
if (lean_obj_tag(v_tail_849_) == 1)
{
lean_object* v_head_869_; lean_object* v_tail_870_; uint8_t v___x_871_; 
v_head_869_ = lean_ctor_get(v_tail_849_, 0);
v_tail_870_ = lean_ctor_get(v_tail_849_, 1);
lean_inc(v_tail_870_);
v___x_871_ = lean_nat_dec_eq(v_head_869_, v___x_867_);
if (v___x_871_ == 0)
{
lean_dec(v_tail_870_);
goto v___jp_863_;
}
else
{
if (lean_obj_tag(v_tail_870_) == 1)
{
lean_object* v_head_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_883_; 
v_head_872_ = lean_ctor_get(v_tail_870_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v_tail_870_);
if (v_isSharedCheck_883_ == 0)
{
lean_object* v_unused_884_; 
v_unused_884_ = lean_ctor_get(v_tail_870_, 1);
lean_dec(v_unused_884_);
v___x_874_ = v_tail_870_;
v_isShared_875_ = v_isSharedCheck_883_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_head_872_);
lean_dec(v_tail_870_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_883_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
uint8_t v___x_876_; 
v___x_876_ = lean_nat_dec_eq(v_head_872_, v___x_867_);
lean_dec(v_head_872_);
if (v___x_876_ == 0)
{
lean_del_object(v___x_874_);
goto v___jp_865_;
}
else
{
lean_object* v___x_877_; lean_object* v___x_879_; 
lean_dec_ref_known(v_tail_849_, 2);
lean_del_object(v___x_851_);
v___x_877_ = lean_box(0);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 1, v___x_877_);
lean_ctor_set(v___x_874_, 0, v_head_848_);
v___x_879_ = v___x_874_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_head_848_);
lean_ctor_set(v_reuseFailAlloc_882_, 1, v___x_877_);
v___x_879_ = v_reuseFailAlloc_882_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_880_ = l_List_appendTR___redArg(v_a_846_, v___x_879_);
v___x_881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_881_, 0, v___x_880_);
return v___x_881_;
}
}
}
}
else
{
lean_dec(v_tail_870_);
goto v___jp_865_;
}
}
}
else
{
goto v___jp_863_;
}
}
else
{
lean_object* v___x_885_; 
v___x_885_ = lean_box(0);
v___y_854_ = v___x_885_;
goto v___jp_853_;
}
v___jp_853_:
{
lean_object* v___x_855_; uint8_t v___x_856_; 
v___x_855_ = lean_unsigned_to_nat(39u);
v___x_856_ = lean_nat_dec_eq(v_head_848_, v___x_855_);
if (v___x_856_ == 0)
{
lean_object* v___x_857_; lean_object* v___x_859_; 
v___x_857_ = lean_box(0);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 1, v___x_857_);
v___x_859_ = v___x_851_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_head_848_);
lean_ctor_set(v_reuseFailAlloc_862_, 1, v___x_857_);
v___x_859_ = v_reuseFailAlloc_862_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
lean_object* v___x_860_; 
v___x_860_ = l_List_appendTR___redArg(v_a_846_, v___x_859_);
v_a_845_ = v_tail_849_;
v_a_846_ = v___x_860_;
goto _start;
}
}
else
{
lean_del_object(v___x_851_);
lean_dec(v_tail_849_);
lean_dec(v_head_848_);
lean_dec(v_a_846_);
lean_inc(v___y_854_);
return v___y_854_;
}
}
v___jp_863_:
{
lean_object* v___x_864_; 
v___x_864_ = lean_box(0);
v___y_854_ = v___x_864_;
goto v___jp_853_;
}
v___jp_865_:
{
lean_object* v___x_866_; 
v___x_866_ = lean_box(0);
v___y_854_ = v___x_866_;
goto v___jp_853_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldBody(lean_object* v_x_887_){
_start:
{
if (lean_obj_tag(v_x_887_) == 1)
{
lean_object* v_head_888_; lean_object* v_tail_889_; lean_object* v___x_890_; uint8_t v___x_891_; 
v_head_888_ = lean_ctor_get(v_x_887_, 0);
lean_inc(v_head_888_);
v_tail_889_ = lean_ctor_get(v_x_887_, 1);
lean_inc(v_tail_889_);
lean_dec_ref_known(v_x_887_, 2);
v___x_890_ = lean_unsigned_to_nat(96u);
v___x_891_ = lean_nat_dec_eq(v_head_888_, v___x_890_);
lean_dec(v_head_888_);
if (v___x_891_ == 0)
{
lean_object* v___x_892_; 
lean_dec(v_tail_889_);
v___x_892_ = lean_box(0);
return v___x_892_;
}
else
{
if (lean_obj_tag(v_tail_889_) == 1)
{
lean_object* v_head_893_; lean_object* v_tail_894_; uint8_t v___x_895_; 
v_head_893_ = lean_ctor_get(v_tail_889_, 0);
lean_inc(v_head_893_);
v_tail_894_ = lean_ctor_get(v_tail_889_, 1);
lean_inc(v_tail_894_);
lean_dec_ref_known(v_tail_889_, 2);
v___x_895_ = lean_nat_dec_eq(v_head_893_, v___x_890_);
lean_dec(v_head_893_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; 
lean_dec(v_tail_894_);
v___x_896_ = lean_box(0);
return v___x_896_;
}
else
{
lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_897_ = lean_box(0);
v___x_898_ = lp_lean_x2dftml_LeanFtml_rawoldBody_go(v_tail_894_, v___x_897_);
return v___x_898_;
}
}
else
{
lean_object* v___x_899_; 
lean_dec(v_tail_889_);
v___x_899_ = lean_box(0);
return v___x_899_;
}
}
}
else
{
lean_object* v___x_900_; 
lean_dec(v_x_887_);
v___x_900_ = lean_box(0);
return v___x_900_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldScan(lean_object* v_prev_904_, lean_object* v_src_905_, lean_object* v_toks_906_, lean_object* v_x_907_){
_start:
{
lean_object* v_zero_911_; uint8_t v_isZero_912_; 
v_zero_911_ = lean_unsigned_to_nat(0u);
v_isZero_912_ = lean_nat_dec_eq(v_x_907_, v_zero_911_);
if (v_isZero_912_ == 1)
{
lean_dec(v_src_905_);
goto v___jp_908_;
}
else
{
if (lean_obj_tag(v_src_905_) == 0)
{
goto v___jp_908_;
}
else
{
lean_object* v_head_913_; lean_object* v_tail_914_; lean_object* v_one_915_; lean_object* v_n_916_; lean_object* v___x_930_; lean_object* v___x_931_; uint8_t v___x_932_; 
v_head_913_ = lean_ctor_get(v_src_905_, 0);
v_tail_914_ = lean_ctor_get(v_src_905_, 1);
v_one_915_ = lean_unsigned_to_nat(1u);
v_n_916_ = lean_nat_sub(v_x_907_, v_one_915_);
v___x_930_ = lean_unsigned_to_nat(96u);
v___x_931_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawoldScan___closed__0));
v___x_932_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v_prev_904_, v___x_931_);
if (v___x_932_ == 0)
{
uint8_t v___x_933_; 
v___x_933_ = lean_nat_dec_eq(v_head_913_, v___x_930_);
if (v___x_933_ == 0)
{
lean_inc(v_tail_914_);
lean_inc(v_head_913_);
lean_dec_ref_known(v_src_905_, 2);
goto v___jp_917_;
}
else
{
lean_object* v___x_934_; uint8_t v___x_935_; 
v___x_934_ = l_List_head_x3f___redArg(v_tail_914_);
v___x_935_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_934_, v___x_931_);
lean_dec(v___x_934_);
if (v___x_935_ == 0)
{
lean_inc(v_tail_914_);
lean_inc(v_head_913_);
lean_dec_ref_known(v_src_905_, 2);
goto v___jp_917_;
}
else
{
lean_object* v___x_936_; 
lean_inc_ref(v_src_905_);
v___x_936_ = lp_lean_x2dftml_LeanFtml_rawoldBody(v_src_905_);
if (lean_obj_tag(v___x_936_) == 0)
{
lean_inc(v_tail_914_);
lean_inc(v_head_913_);
lean_dec_ref_known(v_src_905_, 2);
goto v___jp_917_;
}
else
{
lean_object* v_val_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v_fst_940_; lean_object* v_snd_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v_fst_947_; lean_object* v_snd_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_956_; 
v_val_937_ = lean_ctor_get(v___x_936_, 0);
lean_inc_n(v_val_937_, 2);
lean_dec_ref_known(v___x_936_, 1);
v___x_938_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawoldScan___closed__1));
v___x_939_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_938_, v_val_937_, v_toks_906_);
v_fst_940_ = lean_ctor_get(v___x_939_, 0);
lean_inc(v_fst_940_);
v_snd_941_ = lean_ctor_get(v___x_939_, 1);
lean_inc(v_snd_941_);
lean_dec_ref(v___x_939_);
v___x_942_ = l_List_lengthTR___redArg(v_val_937_);
lean_dec(v_val_937_);
v___x_943_ = lean_unsigned_to_nat(4u);
v___x_944_ = lean_nat_add(v___x_942_, v___x_943_);
lean_dec(v___x_942_);
v___x_945_ = l_List_drop___redArg(v___x_944_, v_src_905_);
lean_dec_ref_known(v_src_905_, 2);
v___x_946_ = lp_lean_x2dftml_LeanFtml_rawoldScan(v___x_931_, v___x_945_, v_snd_941_, v_n_916_);
lean_dec(v_n_916_);
v_fst_947_ = lean_ctor_get(v___x_946_, 0);
v_snd_948_ = lean_ctor_get(v___x_946_, 1);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_956_ == 0)
{
v___x_950_ = v___x_946_;
v_isShared_951_ = v_isSharedCheck_956_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_snd_948_);
lean_inc(v_fst_947_);
lean_dec(v___x_946_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_956_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_952_; lean_object* v___x_954_; 
v___x_952_ = l_List_appendTR___redArg(v_fst_940_, v_fst_947_);
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 0, v___x_952_);
v___x_954_ = v___x_950_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_952_);
lean_ctor_set(v_reuseFailAlloc_955_, 1, v_snd_948_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
}
}
else
{
lean_inc(v_tail_914_);
lean_inc(v_head_913_);
lean_dec_ref_known(v_src_905_, 2);
goto v___jp_917_;
}
v___jp_917_:
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v_fst_920_; lean_object* v_snd_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_929_; 
lean_inc(v_head_913_);
v___x_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_918_, 0, v_head_913_);
v___x_919_ = lp_lean_x2dftml_LeanFtml_rawoldScan(v___x_918_, v_tail_914_, v_toks_906_, v_n_916_);
lean_dec(v_n_916_);
lean_dec_ref_known(v___x_918_, 1);
v_fst_920_ = lean_ctor_get(v___x_919_, 0);
v_snd_921_ = lean_ctor_get(v___x_919_, 1);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_919_);
if (v_isSharedCheck_929_ == 0)
{
v___x_923_ = v___x_919_;
v_isShared_924_ = v_isSharedCheck_929_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_snd_921_);
lean_inc(v_fst_920_);
lean_dec(v___x_919_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_929_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_925_; lean_object* v___x_927_; 
v___x_925_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_925_, 0, v_head_913_);
lean_ctor_set(v___x_925_, 1, v_fst_920_);
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 0, v___x_925_);
v___x_927_ = v___x_923_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_925_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_snd_921_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
}
}
v___jp_908_:
{
lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_909_ = lean_box(0);
v___x_910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_909_);
lean_ctor_set(v___x_910_, 1, v_toks_906_);
return v___x_910_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldScan___boxed(lean_object* v_prev_957_, lean_object* v_src_958_, lean_object* v_toks_959_, lean_object* v_x_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = lp_lean_x2dftml_LeanFtml_rawoldScan(v_prev_957_, v_src_958_, v_toks_959_, v_x_960_);
lean_dec(v_x_960_);
lean_dec(v_prev_957_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldRule___lam__0(lean_object* v_src_962_, lean_object* v_toks_963_){
_start:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_964_ = lean_box(0);
v___x_965_ = l_List_lengthTR___redArg(v_src_962_);
v___x_966_ = lean_unsigned_to_nat(1u);
v___x_967_ = lean_nat_add(v___x_965_, v___x_966_);
lean_dec(v___x_965_);
v___x_968_ = lp_lean_x2dftml_LeanFtml_rawoldScan(v___x_964_, v_src_962_, v_toks_963_, v___x_967_);
lean_dec(v___x_967_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_rawoldRule(lean_object* v_st_970_){
_start:
{
lean_object* v___f_971_; lean_object* v___x_972_; 
v___f_971_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawoldRule___closed__0));
v___x_972_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_970_, v___f_971_);
return v___x_972_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__1(void){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__0));
v___x_975_ = l_String_toListImpl(v___x_974_);
return v___x_975_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__2(void){
_start:
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_976_ = lean_box(0);
v___x_977_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__1, &lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__1);
v___x_978_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v___x_977_, v___x_976_);
return v___x_978_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formOpenBytes(void){
_start:
{
lean_object* v___x_979_; 
v___x_979_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__2, &lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_formOpenBytes___closed__2);
return v___x_979_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__1(void){
_start:
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__0));
v___x_982_ = l_String_toListImpl(v___x_981_);
return v___x_982_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__2(void){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_983_ = lean_box(0);
v___x_984_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__1, &lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__1);
v___x_985_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_segBytes_spec__1(v___x_984_, v___x_983_);
return v___x_985_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formCloseBytes(void){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__2, &lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_formCloseBytes___closed__2);
return v___x_986_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_formCloserAt(lean_object* v_src_987_){
_start:
{
if (lean_obj_tag(v_src_987_) == 1)
{
lean_object* v_head_988_; lean_object* v_tail_989_; lean_object* v___x_990_; uint8_t v___x_991_; 
v_head_988_ = lean_ctor_get(v_src_987_, 0);
lean_inc(v_head_988_);
v_tail_989_ = lean_ctor_get(v_src_987_, 1);
lean_inc(v_tail_989_);
lean_dec_ref_known(v_src_987_, 2);
v___x_990_ = lean_unsigned_to_nat(10u);
v___x_991_ = lean_nat_dec_eq(v_head_988_, v___x_990_);
lean_dec(v_head_988_);
if (v___x_991_ == 0)
{
lean_dec(v_tail_989_);
return v___x_991_;
}
else
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = lp_lean_x2dftml_LeanFtml_formCloseBytes;
v___x_993_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_992_, v_tail_989_);
if (lean_obj_tag(v___x_993_) == 0)
{
uint8_t v___x_994_; 
v___x_994_ = 0;
return v___x_994_;
}
else
{
lean_dec_ref_known(v___x_993_, 1);
return v___x_991_;
}
}
}
else
{
uint8_t v___x_995_; 
lean_dec(v_src_987_);
v___x_995_ = 0;
return v___x_995_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formCloserAt___boxed(lean_object* v_src_996_){
_start:
{
uint8_t v_res_997_; lean_object* v_r_998_; 
v_res_997_ = lp_lean_x2dftml_LeanFtml_formCloserAt(v_src_996_);
v_r_998_ = lean_box(v_res_997_);
return v_r_998_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__0(void){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_999_ = lp_lean_x2dftml_LeanFtml_formCloseBytes;
v___x_1000_ = l_List_lengthTR___redArg(v___x_999_);
return v___x_1000_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1001_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__0, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__0_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__0);
v___x_1002_ = lean_unsigned_to_nat(1u);
v___x_1003_ = lean_nat_add(v___x_1002_, v___x_1001_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0(lean_object* v_r3_1004_, lean_object* v_x_1005_){
_start:
{
if (lean_obj_tag(v_x_1005_) == 0)
{
lean_object* v___x_1006_; 
v___x_1006_ = lean_box(0);
return v___x_1006_;
}
else
{
lean_object* v_head_1007_; lean_object* v_tail_1008_; lean_object* v_c_1009_; uint8_t v___x_1010_; 
v_head_1007_ = lean_ctor_get(v_x_1005_, 0);
lean_inc(v_head_1007_);
v_tail_1008_ = lean_ctor_get(v_x_1005_, 1);
lean_inc(v_tail_1008_);
lean_dec_ref_known(v_x_1005_, 2);
v_c_1009_ = l_List_drop___redArg(v_head_1007_, v_r3_1004_);
lean_inc(v_c_1009_);
v___x_1010_ = lp_lean_x2dftml_LeanFtml_formCloserAt(v_c_1009_);
if (v___x_1010_ == 0)
{
lean_dec(v_c_1009_);
v_x_1005_ = v_tail_1008_;
goto _start;
}
else
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
lean_dec(v_tail_1008_);
v___x_1012_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1);
v___x_1013_ = l_List_drop___redArg(v___x_1012_, v_c_1009_);
lean_dec(v_c_1009_);
v___x_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
return v___x_1014_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___boxed(lean_object* v_r3_1015_, lean_object* v_x_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0(v_r3_1015_, v_x_1016_);
lean_dec(v_r3_1015_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__1(lean_object* v_x_1018_){
_start:
{
if (lean_obj_tag(v_x_1018_) == 0)
{
lean_object* v___x_1019_; 
v___x_1019_ = lean_box(0);
return v___x_1019_;
}
else
{
lean_object* v_head_1020_; lean_object* v_tail_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v_head_1020_ = lean_ctor_get(v_x_1018_, 0);
v_tail_1021_ = lean_ctor_get(v_x_1018_, 1);
v___x_1022_ = l_List_lengthTR___redArg(v_head_1020_);
v___x_1023_ = lean_unsigned_to_nat(1u);
v___x_1024_ = lean_nat_add(v___x_1022_, v___x_1023_);
lean_dec(v___x_1022_);
v___x_1025_ = l_List_range(v___x_1024_);
v___x_1026_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0(v_head_1020_, v___x_1025_);
if (lean_obj_tag(v___x_1026_) == 0)
{
v_x_1018_ = v_tail_1021_;
goto _start;
}
else
{
return v___x_1026_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__1___boxed(lean_object* v_x_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__1(v_x_1028_);
lean_dec(v_x_1028_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formAfterSep(lean_object* v_r_1039_){
_start:
{
lean_object* v___y_1041_; 
if (lean_obj_tag(v_r_1039_) == 1)
{
lean_object* v_head_1048_; lean_object* v_tail_1049_; lean_object* v___x_1050_; uint8_t v___x_1051_; 
v_head_1048_ = lean_ctor_get(v_r_1039_, 0);
v_tail_1049_ = lean_ctor_get(v_r_1039_, 1);
v___x_1050_ = lean_unsigned_to_nat(10u);
v___x_1051_ = lean_nat_dec_eq(v_head_1048_, v___x_1050_);
if (v___x_1051_ == 0)
{
goto v___jp_1046_;
}
else
{
lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1052_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formAfterSep___closed__2));
lean_inc(v_tail_1049_);
v___x_1053_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1052_, v_tail_1049_);
if (lean_obj_tag(v___x_1053_) == 0)
{
v___y_1041_ = v___x_1053_;
goto v___jp_1040_;
}
else
{
lean_object* v_val_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v_val_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_val_1054_);
lean_dec_ref_known(v___x_1053_, 1);
v___x_1055_ = lp_lean_x2dftml_LeanFtml_wsNlRests(v_val_1054_);
v___x_1056_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__1(v___x_1055_);
lean_dec(v___x_1055_);
if (lean_obj_tag(v___x_1056_) == 0)
{
v___y_1041_ = v___x_1056_;
goto v___jp_1040_;
}
else
{
lean_dec_ref_known(v_r_1039_, 2);
return v___x_1056_;
}
}
}
}
else
{
goto v___jp_1046_;
}
v___jp_1040_:
{
uint8_t v___x_1042_; 
lean_inc(v_r_1039_);
v___x_1042_ = lp_lean_x2dftml_LeanFtml_formCloserAt(v_r_1039_);
if (v___x_1042_ == 0)
{
lean_dec(v_r_1039_);
return v___y_1041_;
}
else
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
lean_dec(v___y_1041_);
v___x_1043_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formAfterSep_spec__0___closed__1);
v___x_1044_ = l_List_drop___redArg(v___x_1043_, v_r_1039_);
lean_dec(v_r_1039_);
v___x_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1044_);
return v___x_1045_;
}
}
v___jp_1046_:
{
lean_object* v___x_1047_; 
v___x_1047_ = lean_box(0);
v___y_1041_ = v___x_1047_;
goto v___jp_1040_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__0(lean_object* v_r1_1057_, lean_object* v_src_1058_, lean_object* v_x_1059_){
_start:
{
if (lean_obj_tag(v_x_1059_) == 0)
{
lean_object* v___x_1060_; 
v___x_1060_ = lean_box(0);
return v___x_1060_;
}
else
{
lean_object* v_head_1061_; lean_object* v_tail_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
v_head_1061_ = lean_ctor_get(v_x_1059_, 0);
lean_inc(v_head_1061_);
v_tail_1062_ = lean_ctor_get(v_x_1059_, 1);
lean_inc(v_tail_1062_);
lean_dec_ref_known(v_x_1059_, 2);
v___x_1063_ = l_List_drop___redArg(v_head_1061_, v_r1_1057_);
v___x_1064_ = lp_lean_x2dftml_LeanFtml_formAfterSep(v___x_1063_);
if (lean_obj_tag(v___x_1064_) == 0)
{
v_x_1059_ = v_tail_1062_;
goto _start;
}
else
{
lean_object* v_val_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1076_; 
lean_dec(v_tail_1062_);
v_val_1066_ = lean_ctor_get(v___x_1064_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1064_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1068_ = v___x_1064_;
v_isShared_1069_ = v_isSharedCheck_1076_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_val_1066_);
lean_dec(v___x_1064_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1076_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1074_; 
v___x_1070_ = l_List_lengthTR___redArg(v_src_1058_);
v___x_1071_ = l_List_lengthTR___redArg(v_val_1066_);
lean_dec(v_val_1066_);
v___x_1072_ = lean_nat_sub(v___x_1070_, v___x_1071_);
lean_dec(v___x_1071_);
lean_dec(v___x_1070_);
if (v_isShared_1069_ == 0)
{
lean_ctor_set(v___x_1068_, 0, v___x_1072_);
v___x_1074_ = v___x_1068_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v___x_1072_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__0___boxed(lean_object* v_r1_1077_, lean_object* v_src_1078_, lean_object* v_x_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__0(v_r1_1077_, v_src_1078_, v_x_1079_);
lean_dec(v_src_1078_);
lean_dec(v_r1_1077_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__1(lean_object* v_src_1081_, lean_object* v_x_1082_){
_start:
{
if (lean_obj_tag(v_x_1082_) == 0)
{
lean_object* v___x_1083_; 
v___x_1083_ = lean_box(0);
return v___x_1083_;
}
else
{
lean_object* v_head_1084_; lean_object* v_tail_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v_head_1084_ = lean_ctor_get(v_x_1082_, 0);
v_tail_1085_ = lean_ctor_get(v_x_1082_, 1);
v___x_1086_ = l_List_lengthTR___redArg(v_head_1084_);
v___x_1087_ = lean_unsigned_to_nat(1u);
v___x_1088_ = lean_nat_add(v___x_1086_, v___x_1087_);
lean_dec(v___x_1086_);
v___x_1089_ = l_List_range(v___x_1088_);
v___x_1090_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__0(v_head_1084_, v_src_1081_, v___x_1089_);
if (lean_obj_tag(v___x_1090_) == 0)
{
v_x_1082_ = v_tail_1085_;
goto _start;
}
else
{
return v___x_1090_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__1___boxed(lean_object* v_src_1092_, lean_object* v_x_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__1(v_src_1092_, v_x_1093_);
lean_dec(v_x_1093_);
lean_dec(v_src_1092_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formMatchAt(lean_object* v_src_1095_){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1096_ = lp_lean_x2dftml_LeanFtml_formOpenBytes;
lean_inc(v_src_1095_);
v___x_1097_ = lp_lean_x2dftml_LeanFtml_matchLitCI(v___x_1096_, v_src_1095_);
if (lean_obj_tag(v___x_1097_) == 0)
{
lean_object* v___x_1098_; 
lean_dec(v_src_1095_);
v___x_1098_ = lean_box(0);
return v___x_1098_;
}
else
{
lean_object* v_val_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v_val_1099_ = lean_ctor_get(v___x_1097_, 0);
lean_inc(v_val_1099_);
lean_dec_ref_known(v___x_1097_, 1);
v___x_1100_ = lp_lean_x2dftml_LeanFtml_wsNlRests(v_val_1099_);
v___x_1101_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_formMatchAt_spec__1(v_src_1095_, v___x_1100_);
lean_dec(v___x_1100_);
lean_dec(v_src_1095_);
return v___x_1101_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripFormPlaceholders_go(lean_object* v_a_1102_, lean_object* v_a_1103_){
_start:
{
if (lean_obj_tag(v_a_1102_) == 0)
{
lean_dec(v_a_1103_);
return v_a_1102_;
}
else
{
lean_object* v_head_1104_; lean_object* v_tail_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1134_; 
v_head_1104_ = lean_ctor_get(v_a_1102_, 0);
v_tail_1105_ = lean_ctor_get(v_a_1102_, 1);
v_isSharedCheck_1134_ = !lean_is_exclusive(v_a_1102_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1107_ = v_a_1102_;
v_isShared_1108_ = v_isSharedCheck_1134_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_tail_1105_);
lean_inc(v_head_1104_);
lean_dec(v_a_1102_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1134_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v_zero_1109_; uint8_t v_isZero_1110_; 
v_zero_1109_ = lean_unsigned_to_nat(0u);
v_isZero_1110_ = lean_nat_dec_eq(v_a_1103_, v_zero_1109_);
if (v_isZero_1110_ == 1)
{
lean_object* v___x_1111_; 
lean_del_object(v___x_1107_);
lean_dec(v_tail_1105_);
lean_dec(v_head_1104_);
lean_dec(v_a_1103_);
v___x_1111_ = lean_box(0);
return v___x_1111_;
}
else
{
lean_object* v_one_1112_; lean_object* v_n_1113_; lean_object* v___x_1119_; uint8_t v___x_1120_; 
v_one_1112_ = lean_unsigned_to_nat(1u);
v_n_1113_ = lean_nat_sub(v_a_1103_, v_one_1112_);
lean_dec(v_a_1103_);
v___x_1119_ = lean_unsigned_to_nat(255u);
v___x_1120_ = lean_nat_dec_eq(v_head_1104_, v___x_1119_);
if (v___x_1120_ == 0)
{
lean_object* v___x_1121_; lean_object* v___x_1122_; 
lean_del_object(v___x_1107_);
v___x_1121_ = lp_lean_x2dftml_LeanFtml_stripFormPlaceholders_go(v_tail_1105_, v_n_1113_);
v___x_1122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1122_, 0, v_head_1104_);
lean_ctor_set(v___x_1122_, 1, v___x_1121_);
return v___x_1122_;
}
else
{
lean_object* v___x_1123_; lean_object* v_ds_1124_; uint8_t v___x_1125_; 
v___x_1123_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0));
lean_inc(v_tail_1105_);
v_ds_1124_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_readPlaceholder_spec__0(v_tail_1105_, v_tail_1105_, v___x_1123_);
v___x_1125_ = l_List_isEmpty___redArg(v_ds_1124_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = l_List_lengthTR___redArg(v_ds_1124_);
lean_dec(v_ds_1124_);
v___x_1127_ = l_List_drop___redArg(v___x_1126_, v_tail_1105_);
if (lean_obj_tag(v___x_1127_) == 1)
{
lean_object* v_head_1128_; lean_object* v_tail_1129_; uint8_t v___x_1130_; 
v_head_1128_ = lean_ctor_get(v___x_1127_, 0);
lean_inc(v_head_1128_);
v_tail_1129_ = lean_ctor_get(v___x_1127_, 1);
lean_inc(v_tail_1129_);
lean_dec_ref_known(v___x_1127_, 2);
v___x_1130_ = lean_nat_dec_eq(v_head_1128_, v___x_1119_);
lean_dec(v_head_1128_);
if (v___x_1130_ == 0)
{
lean_dec(v_tail_1129_);
goto v___jp_1114_;
}
else
{
lean_del_object(v___x_1107_);
lean_dec(v_tail_1105_);
lean_dec(v_head_1104_);
v_a_1102_ = v_tail_1129_;
v_a_1103_ = v_n_1113_;
goto _start;
}
}
else
{
lean_dec(v___x_1127_);
goto v___jp_1114_;
}
}
else
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
lean_dec(v_ds_1124_);
lean_del_object(v___x_1107_);
v___x_1132_ = lp_lean_x2dftml_LeanFtml_stripFormPlaceholders_go(v_tail_1105_, v_n_1113_);
v___x_1133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1133_, 0, v_head_1104_);
lean_ctor_set(v___x_1133_, 1, v___x_1132_);
return v___x_1133_;
}
}
v___jp_1114_:
{
lean_object* v___x_1115_; lean_object* v___x_1117_; 
v___x_1115_ = lp_lean_x2dftml_LeanFtml_stripFormPlaceholders_go(v_tail_1105_, v_n_1113_);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 1, v___x_1115_);
v___x_1117_ = v___x_1107_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_head_1104_);
lean_ctor_set(v_reuseFailAlloc_1118_, 1, v___x_1115_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripFormPlaceholders(lean_object* v_bs_1135_){
_start:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1136_ = l_List_lengthTR___redArg(v_bs_1135_);
v___x_1137_ = lean_unsigned_to_nat(1u);
v___x_1138_ = lean_nat_add(v___x_1136_, v___x_1137_);
lean_dec(v___x_1136_);
v___x_1139_ = lp_lean_x2dftml_LeanFtml_stripFormPlaceholders_go(v_bs_1135_, v___x_1138_);
return v___x_1139_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__2(void){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formProcess_go___closed__1));
v___x_1143_ = l_String_toListImpl(v___x_1142_);
return v___x_1143_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__3(void){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = lean_unsigned_to_nat(1u);
v___x_1145_ = lean_nat_to_int(v___x_1144_);
return v___x_1145_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__4(void){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1146_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__3, &lp_lean_x2dftml_LeanFtml_formProcess_go___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__3);
v___x_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
return v___x_1147_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__5(void){
_start:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1148_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__4, &lp_lean_x2dftml_LeanFtml_formProcess_go___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__4);
v___x_1149_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__2, &lp_lean_x2dftml_LeanFtml_formProcess_go___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__2);
v___x_1150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1149_);
lean_ctor_set(v___x_1150_, 1, v___x_1148_);
return v___x_1150_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__6(void){
_start:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1151_ = lean_box(0);
v___x_1152_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__5, &lp_lean_x2dftml_LeanFtml_formProcess_go___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__5);
v___x_1153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1152_);
lean_ctor_set(v___x_1153_, 1, v___x_1151_);
return v___x_1153_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__7(void){
_start:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1154_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__6, &lp_lean_x2dftml_LeanFtml_formProcess_go___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__6);
v___x_1155_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formProcess_go___closed__0));
v___x_1156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
lean_ctor_set(v___x_1156_, 1, v___x_1154_);
return v___x_1156_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__8(void){
_start:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1157_ = lean_box(0);
v___x_1158_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__7, &lp_lean_x2dftml_LeanFtml_formProcess_go___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__7);
v___x_1159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1158_);
lean_ctor_set(v___x_1159_, 1, v___x_1157_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formProcess_go(lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_){
_start:
{
if (lean_obj_tag(v_a_1160_) == 0)
{
lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1163_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_rawScan___closed__5));
v___x_1164_ = l_List_reverse___redArg(v_a_1162_);
v___x_1165_ = l_List_intercalateTR___redArg(v___x_1163_, v___x_1164_);
v___x_1166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1166_, 0, v___x_1165_);
lean_ctor_set(v___x_1166_, 1, v_a_1161_);
return v___x_1166_;
}
else
{
lean_object* v_head_1167_; lean_object* v_tail_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1190_; 
v_head_1167_ = lean_ctor_get(v_a_1160_, 0);
v_tail_1168_ = lean_ctor_get(v_a_1160_, 1);
v_isSharedCheck_1190_ = !lean_is_exclusive(v_a_1160_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1170_ = v_a_1160_;
v_isShared_1171_ = v_isSharedCheck_1190_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_tail_1168_);
lean_inc(v_head_1167_);
lean_dec(v_a_1160_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1190_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v_clean_1172_; uint8_t v___x_1173_; 
v_clean_1172_ = lp_lean_x2dftml_LeanFtml_stripFormPlaceholders(v_head_1167_);
v___x_1173_ = l_List_isEmpty___redArg(v_clean_1172_);
if (v___x_1173_ == 0)
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v_fst_1176_; lean_object* v_snd_1177_; lean_object* v___x_1179_; 
v___x_1174_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formProcess_go___closed__0));
v___x_1175_ = lp_lean_x2dftml_LeanFtml_claimText(v___x_1174_, v_clean_1172_, v_a_1161_);
v_fst_1176_ = lean_ctor_get(v___x_1175_, 0);
lean_inc(v_fst_1176_);
v_snd_1177_ = lean_ctor_get(v___x_1175_, 1);
lean_inc(v_snd_1177_);
lean_dec_ref(v___x_1175_);
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 1, v_a_1162_);
lean_ctor_set(v___x_1170_, 0, v_fst_1176_);
v___x_1179_ = v___x_1170_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_fst_1176_);
lean_ctor_set(v_reuseFailAlloc_1181_, 1, v_a_1162_);
v___x_1179_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
v_a_1160_ = v_tail_1168_;
v_a_1161_ = v_snd_1177_;
v_a_1162_ = v___x_1179_;
goto _start;
}
}
else
{
lean_object* v___x_1182_; lean_object* v_ph_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1187_; 
lean_dec(v_clean_1172_);
v___x_1182_ = l_List_lengthTR___redArg(v_a_1161_);
v_ph_1183_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1182_);
v___x_1184_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_formProcess_go___closed__8, &lp_lean_x2dftml_LeanFtml_formProcess_go___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_formProcess_go___closed__8);
v___x_1185_ = l_List_appendTR___redArg(v_a_1161_, v___x_1184_);
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 1, v_a_1162_);
lean_ctor_set(v___x_1170_, 0, v_ph_1183_);
v___x_1187_ = v___x_1170_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_ph_1183_);
lean_ctor_set(v_reuseFailAlloc_1189_, 1, v_a_1162_);
v___x_1187_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
v_a_1160_ = v_tail_1168_;
v_a_1161_ = v___x_1185_;
v_a_1162_ = v___x_1187_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formProcess(lean_object* v_matched_1191_, lean_object* v_toks_1192_){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1193_ = lean_unsigned_to_nat(10u);
v___x_1194_ = lp_lean_x2dftml_LeanFtml_splitBytes(v___x_1193_, v_matched_1191_);
v___x_1195_ = lean_box(0);
v___x_1196_ = lp_lean_x2dftml_LeanFtml_formProcess_go(v___x_1194_, v_toks_1192_, v___x_1195_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formScan(lean_object* v_src_1197_, lean_object* v_toks_1198_, lean_object* v_x_1199_){
_start:
{
lean_object* v_zero_1203_; uint8_t v_isZero_1204_; 
v_zero_1203_ = lean_unsigned_to_nat(0u);
v_isZero_1204_ = lean_nat_dec_eq(v_x_1199_, v_zero_1203_);
if (v_isZero_1204_ == 1)
{
lean_dec(v_src_1197_);
goto v___jp_1200_;
}
else
{
if (lean_obj_tag(v_src_1197_) == 0)
{
goto v___jp_1200_;
}
else
{
lean_object* v_head_1205_; lean_object* v_tail_1206_; lean_object* v_one_1207_; lean_object* v_n_1208_; lean_object* v___x_1209_; 
v_head_1205_ = lean_ctor_get(v_src_1197_, 0);
v_tail_1206_ = lean_ctor_get(v_src_1197_, 1);
v_one_1207_ = lean_unsigned_to_nat(1u);
v_n_1208_ = lean_nat_sub(v_x_1199_, v_one_1207_);
lean_inc_ref(v_src_1197_);
v___x_1209_ = lp_lean_x2dftml_LeanFtml_formMatchAt(v_src_1197_);
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1226_; 
lean_inc(v_tail_1206_);
lean_inc(v_head_1205_);
v_isSharedCheck_1226_ = !lean_is_exclusive(v_src_1197_);
if (v_isSharedCheck_1226_ == 0)
{
lean_object* v_unused_1227_; lean_object* v_unused_1228_; 
v_unused_1227_ = lean_ctor_get(v_src_1197_, 1);
lean_dec(v_unused_1227_);
v_unused_1228_ = lean_ctor_get(v_src_1197_, 0);
lean_dec(v_unused_1228_);
v___x_1211_ = v_src_1197_;
v_isShared_1212_ = v_isSharedCheck_1226_;
goto v_resetjp_1210_;
}
else
{
lean_dec(v_src_1197_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1226_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1213_; lean_object* v_fst_1214_; lean_object* v_snd_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1225_; 
v___x_1213_ = lp_lean_x2dftml_LeanFtml_formScan(v_tail_1206_, v_toks_1198_, v_n_1208_);
lean_dec(v_n_1208_);
v_fst_1214_ = lean_ctor_get(v___x_1213_, 0);
v_snd_1215_ = lean_ctor_get(v___x_1213_, 1);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1217_ = v___x_1213_;
v_isShared_1218_ = v_isSharedCheck_1225_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_snd_1215_);
lean_inc(v_fst_1214_);
lean_dec(v___x_1213_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1225_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1220_; 
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 1, v_fst_1214_);
v___x_1220_ = v___x_1211_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_head_1205_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_fst_1214_);
v___x_1220_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
lean_object* v___x_1222_; 
if (v_isShared_1218_ == 0)
{
lean_ctor_set(v___x_1217_, 0, v___x_1220_);
v___x_1222_ = v___x_1217_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v___x_1220_);
lean_ctor_set(v_reuseFailAlloc_1223_, 1, v_snd_1215_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
}
}
else
{
lean_object* v_val_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v_fst_1233_; lean_object* v_snd_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v_fst_1237_; lean_object* v_snd_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1246_; 
v_val_1229_ = lean_ctor_get(v___x_1209_, 0);
lean_inc_n(v_val_1229_, 2);
lean_dec_ref_known(v___x_1209_, 1);
v___x_1230_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_readPlaceholder___closed__0));
lean_inc_ref(v_src_1197_);
v___x_1231_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_1197_, v_src_1197_, v_val_1229_, v___x_1230_);
v___x_1232_ = lp_lean_x2dftml_LeanFtml_formProcess(v___x_1231_, v_toks_1198_);
v_fst_1233_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_fst_1233_);
v_snd_1234_ = lean_ctor_get(v___x_1232_, 1);
lean_inc(v_snd_1234_);
lean_dec_ref(v___x_1232_);
v___x_1235_ = l_List_drop___redArg(v_val_1229_, v_src_1197_);
lean_dec_ref_known(v_src_1197_, 2);
v___x_1236_ = lp_lean_x2dftml_LeanFtml_formScan(v___x_1235_, v_snd_1234_, v_n_1208_);
lean_dec(v_n_1208_);
v_fst_1237_ = lean_ctor_get(v___x_1236_, 0);
v_snd_1238_ = lean_ctor_get(v___x_1236_, 1);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1236_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1240_ = v___x_1236_;
v_isShared_1241_ = v_isSharedCheck_1246_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_snd_1238_);
lean_inc(v_fst_1237_);
lean_dec(v___x_1236_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1246_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1242_; lean_object* v___x_1244_; 
v___x_1242_ = l_List_appendTR___redArg(v_fst_1233_, v_fst_1237_);
if (v_isShared_1241_ == 0)
{
lean_ctor_set(v___x_1240_, 0, v___x_1242_);
v___x_1244_ = v___x_1240_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v___x_1242_);
lean_ctor_set(v_reuseFailAlloc_1245_, 1, v_snd_1238_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
return v___x_1244_;
}
}
}
}
}
v___jp_1200_:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1201_ = lean_box(0);
v___x_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1201_);
lean_ctor_set(v___x_1202_, 1, v_toks_1198_);
return v___x_1202_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formScan___boxed(lean_object* v_src_1247_, lean_object* v_toks_1248_, lean_object* v_x_1249_){
_start:
{
lean_object* v_res_1250_; 
v_res_1250_ = lp_lean_x2dftml_LeanFtml_formScan(v_src_1247_, v_toks_1248_, v_x_1249_);
lean_dec(v_x_1249_);
return v_res_1250_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formRule___lam__0(lean_object* v_src_1251_, lean_object* v_toks_1252_){
_start:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1253_ = l_List_lengthTR___redArg(v_src_1251_);
v___x_1254_ = lean_unsigned_to_nat(1u);
v___x_1255_ = lean_nat_add(v___x_1253_, v___x_1254_);
lean_dec(v___x_1253_);
v___x_1256_ = lp_lean_x2dftml_LeanFtml_formScan(v_src_1251_, v_toks_1252_, v___x_1255_);
lean_dec(v___x_1255_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_formRule(lean_object* v_st_1258_){
_start:
{
lean_object* v___f_1259_; lean_object* v___x_1260_; 
v___f_1259_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_formRule___closed__0));
v___x_1260_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1258_, v___f_1259_);
return v___x_1260_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FrameRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_CodeRule(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_FormRawRules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_FrameRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_CodeRule(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dftml_LeanFtml_formOpenBytes = _init_lp_lean_x2dftml_LeanFtml_formOpenBytes();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_formOpenBytes);
lp_lean_x2dftml_LeanFtml_formCloseBytes = _init_lp_lean_x2dftml_LeanFtml_formCloseBytes();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_formCloseBytes);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
