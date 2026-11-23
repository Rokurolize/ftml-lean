// Lean compiler output
// Module: LeanFtml.Inline3Rules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.FrameRules public import LeanFtml.CodeRule public import LeanFtml.FormRawRules public import LeanFtml.ModuleRules public import LeanFtml.NextRules public import LeanFtml.LinkRules public import LeanFtml.NotesRules public import LeanFtml.BlockRules public import LeanFtml.ContainRules public import LeanFtml.ListRules public import LeanFtml.TableRules public import LeanFtml.ParaRules public import LeanFtml.Inline1Rules public import LeanFtml.Inline2Rules
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
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_phBytes(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_countRun(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
uint8_t l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_headingMatchLine_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_claimTok(lean_object*, lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_LeanFtml_isWsByte(lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_pairClaim(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_pregScan(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_span_loop___at___00LeanFtml_stripEmptyRawPhNotes_go_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapsePad_go(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapsePad_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapsePad(lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllB_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllB_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllB(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllB___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isDigitB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isDigitB___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isAlnumB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isAlnumB___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(125) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__0___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(125) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__0___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__0___closed__1 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__0___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_ttMatchAt_spec__1(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_ttMatchAt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__3_spec__3(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__3(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_ttMatchAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(123) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_ttMatchAt___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ttMatchAt___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_ttMatchAt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(123) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_ttMatchAt___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_ttMatchAt___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ttMatchAt___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ttMatchAt(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_ttProcess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ttProcess___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_ttProcess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Tt"};
static const lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ttProcess___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_ttProcess___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ttProcess___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_ttProcess___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_ttProcess___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ttProcess___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_ttProcess___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_ttProcess___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__6;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_ttProcess___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_ttProcess___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_ttProcess___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ttProcess___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_ttProcess___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_ttProcess___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_ttProcess___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_ttProcess___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__13;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_ttProcess___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(123) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_ttProcess___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ttProcess___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_ttProcess___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(123) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_ttProcess___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ttProcess___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_ttProcess___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ttProcess___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_ttProcess___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(123) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_ttProcess___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ttProcess___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_ttProcess___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(123) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_ttProcess___closed__17_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ttProcess___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_ttProcess___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ttProcess___closed__19_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ttProcess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ttScan_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ttScan_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ttScan(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_ttRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_ttScan, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_ttRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_ttRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ttRule(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_supMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(94) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_supMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_supMatch___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_supMatch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(94) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_supMatch___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_supMatch___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_supMatch___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_supMatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(94) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_supMatch___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_supMatch___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_supMatch___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_supMatch___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(94) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_supMatch___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_supMatch___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_supMatch___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_supMatch___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Superscript"};
static const lean_object* lp_lean_x2dftml_LeanFtml_supMatch___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_supMatch___closed__4_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_supMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_superscriptRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_supMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_superscriptRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_superscriptRule___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_superscriptRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_pregScan, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_superscriptRule___closed__0_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_superscriptRule___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_superscriptRule___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_superscriptRule(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_subMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_subMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_subMatch___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_subMatch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_subMatch___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_subMatch___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_subMatch___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_subMatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_subMatch___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_subMatch___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_subMatch___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_subMatch___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_subMatch___closed__2_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_subMatch___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_subMatch___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_subMatch___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Subscript"};
static const lean_object* lp_lean_x2dftml_LeanFtml_subMatch___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_subMatch___closed__4_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_subMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_subscriptRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_subMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_subscriptRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_subscriptRule___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_subscriptRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_pregScan, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_subscriptRule___closed__0_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_subscriptRule___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_subscriptRule___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_subscriptRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoPair_lazyClose(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoPair_lazyClose___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoPair___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoPair___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoPair(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoNumSpace_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoNumSpace_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoNumSpace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_litM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_litM___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_classM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_classM___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_classM___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classM___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_entM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(35) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_entM___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_entM___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_entM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_entM___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_entM___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_entM___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_entM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_entM___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_xentM_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_xentM_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_xentM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(120) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_xentM___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_xentM___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_xentM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(88) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_xentM___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_xentM___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_xentM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_altM_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_altM(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_seqM_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_seqM_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_seqM_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_seqM_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_seqM(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_optM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_optM___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_optM___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optM(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_anchorM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_anchorM___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_anchorM___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorM(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorM___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricPrefix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__2;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_metricPrefix___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(181) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_metricPrefix___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(194) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__4_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_metricPrefix___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_litM___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__4_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricPrefix___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "&micro;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricPrefix___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "181;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricPrefix___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "B5;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__13;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricPrefix___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "b5;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__14_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__15;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__16;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__17;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__18;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricPrefix___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mcdhkMGT"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__19_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__20;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__21;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__22;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__23;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__24;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__25;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__26;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__27;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricPrefix___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix___closed__28;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "mgstAKNJWCVFSTHBL"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mol"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "cd"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rad"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Hz"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__14;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Pa"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__15_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__16;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__17;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Wb"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__18_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__19;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__20;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lm"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__21_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__22;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__23;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lx"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__24_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__25;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__26;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Bq"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__27_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__28;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__29;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Gy"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__30_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__31;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__32;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Sv"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__33_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__34;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__35;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "kat"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__36_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__37;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__38;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(169) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__39 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__39_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(206) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__39_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__40_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_litM___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__40_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__41 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__41_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Ohm"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__42_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__43;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__44;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "&Omega;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__45 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__45_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__46;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__47;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "937;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__48 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__48_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__49;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__50;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "3A9;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__51 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__51_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__52;
static const lean_string_object lp_lean_x2dftml_LeanFtml_metricUnit___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "3a9;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__53 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_metricUnit___closed__53_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__54;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__55;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__56;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__57;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__58;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__59;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__60;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__61;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__62;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__63;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__64;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__65_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__65;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__66;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__67_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__67;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__68;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__69_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__69;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__70;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__71;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__72;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__73_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__73;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__74;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_metricUnit___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_metricUnit___closed__75;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_metricUnit(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_computerU___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "kKMGT"};
static const lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_computerU___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_computerU___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__1;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_computerU___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__2;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_computerU___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_computerU___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "oBb"};
static const lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_computerU___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_computerU___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_computerU___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_computerU___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ps"};
static const lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_computerU___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_computerU___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_computerU___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_computerU___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__10;
static const lean_string_object lp_lean_x2dftml_LeanFtml_computerU___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "flops"};
static const lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_computerU___closed__11_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_computerU___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_computerU___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_computerU___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__14;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_computerU___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__15;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_computerU___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__16;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_computerU___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_computerU___closed__17;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_computerU(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(163) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(194) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__1_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_litM___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__1_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "&pound;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "163;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "A3;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__10;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "a3;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__11_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__14;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__15;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(165) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(194) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__17_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_litM___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__17_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__18_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "&yen;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__19_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__20;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__21;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "165;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__22_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__23;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__24;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "A5;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__25_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__26;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "a5;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__27_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__28;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__29;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__30;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__31;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(172) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__32_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(130) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__32_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__33_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(226) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__33_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__34_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_litM___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__34_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__35_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "&euro;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__36 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__36_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__37;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__38;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "8364;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__39 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__39_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__40;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__41;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "20AC;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__42 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__42_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__43;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "20Ac;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__44 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__44_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__45;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "20aC;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__46 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__46_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__47;
static const lean_string_object lp_lean_x2dftml_LeanFtml_moneyCore___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "20ac;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__48 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_moneyCore___closed__48_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__49;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__50;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__51;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__52;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__53;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__54;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__55;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__56;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__57;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__58;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__59;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__60;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__61;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__62;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__63;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__64;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__65_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__65;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__66;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_moneyCore___closed__67_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_moneyCore___closed__67;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moneyCore(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_degreeU___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(176) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_degreeU___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_degreeU___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(194) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_degreeU___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_degreeU___closed__1_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_degreeU___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_litM___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_degreeU___closed__1_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_degreeU___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_degreeU___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "&deg;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_degreeU___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_degreeU___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "176;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_degreeU___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__7;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_degreeU___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "B0;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_degreeU___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__10;
static const lean_string_object lp_lean_x2dftml_LeanFtml_degreeU___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "b0;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_degreeU___closed__11_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__14;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__15;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__16;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__17;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__18;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__19;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__20;
static const lean_string_object lp_lean_x2dftml_LeanFtml_degreeU___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "CF"};
static const lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_degreeU___closed__21_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__22;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__23;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_degreeU___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_degreeU___closed__24;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_degreeU(lean_object*);
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__0;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_unitCands___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(162) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_unitCands___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(194) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__2_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_unitCands___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_litM___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__2_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "&cent;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "162;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__8;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__9;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "A2;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__10_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__11;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "a2;"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__12_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__14;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__15;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__16;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "M"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__17_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__18;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__19;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__20;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__21;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "%"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__22_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__23;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__24;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pt"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__25_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__26;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__27;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pi"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__28_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__29;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__30;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "px"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__31_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__32;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__33;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__34;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "em"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__35_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__36;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__37;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "en"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__38_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__39;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__40;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "gal"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__41 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__41_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__42;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__43;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lb"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__44 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__44_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__45;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__46;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "NSEOW"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__47 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__47_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__48;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__49;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "NS"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__50 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__50_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__51;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__52;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "EOW"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__53 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__53_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__54;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__55;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__56;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ha"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__57 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__57_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__58;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__59;
static const lean_string_object lp_lean_x2dftml_LeanFtml_unitCands___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mbar"};
static const lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__60 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_unitCands___closed__60_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__61;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__62;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__63;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__64;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__65_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__65;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__66;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__67_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__67;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__68;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__69_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__69;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__70;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__71;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__72;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__73_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__73;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__74;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__75;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__76_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__76;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__77_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__77;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__78_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__78;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__79_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__79;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__80_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__80;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__81_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__81;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_unitCands___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_unitCands___closed__82;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitCands(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_typoUnits_go_spec__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_typoUnits_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typoUnits_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typoUnits_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typoUnits_go___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoUnits_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoUnits_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoUnits(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Typography"};
static const lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0___closed__0_value;
static const lean_string_object lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "char"};
static const lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0___closed__1 = (const lean_object*)&lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "``"};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "''"};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ",,"};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__4_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "<<"};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ">>"};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__6_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "..."};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__8_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "--"};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "---"};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__10_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__11_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__9_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__11_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__8_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__12_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__7_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__13_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__7_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__6_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__15_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__5_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__4_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__17_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__3_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__18_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__1_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__19_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__2_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__20_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__21_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__1_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__21_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__0_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__22_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__23_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__24;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(96) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__25_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(96) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__25_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__26 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__26_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__27 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__27_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__27_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__28 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__28_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__29 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__29_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__29_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__30 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__30_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__31 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__31_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__31_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__32 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__32_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(62) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__33 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__33_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(62) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__33_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__34 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__34_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ". . ."};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__35 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__35_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__36;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__37;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__38 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__38_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__38_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__39 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__39_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__39_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__40 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__40_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_typographyRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_typographyRule___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_typographyRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typographyRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropAfterPh_go(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropAfterPh_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropAfterPh(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropBeforePh_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropBeforePh(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tightenColorPass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Colortext"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tightenColorPass___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tightenColorPass___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenColorPass(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenColorPass___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_tightenEdgePass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Newline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tightenEdgePass___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tightenEdgePass___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_tightenEdgePass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Paragraph"};
static const lean_object* lp_lean_x2dftml_LeanFtml_tightenEdgePass___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tightenEdgePass___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenEdgePass(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenEdgePass___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_isEmptyRawTok___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Raw"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isEmptyRawTok___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isEmptyRawTok___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_isEmptyRawTok___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_isEmptyRawTok___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_isEmptyRawTok___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_isEmptyRawTok___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_isEmptyRawTok___closed__2;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isEmptyRawTok(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isEmptyRawTok___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPh_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPh_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPh(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPh___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_hasUfffdBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hasUfffdBytes___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isDiscardedControl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isDiscardedControl___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_stripDiscardedControls_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripDiscardedControls(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tightenBytes_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_tightenRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_tightenRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_tightenRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_tightenRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapsePad_go(uint8_t v_a_1_, lean_object* v_a_2_){
_start:
{
if (lean_obj_tag(v_a_2_) == 0)
{
return v_a_2_;
}
else
{
lean_object* v_head_3_; lean_object* v_tail_4_; lean_object* v___x_6_; uint8_t v_isShared_7_; uint8_t v_isSharedCheck_21_; 
v_head_3_ = lean_ctor_get(v_a_2_, 0);
v_tail_4_ = lean_ctor_get(v_a_2_, 1);
v_isSharedCheck_21_ = !lean_is_exclusive(v_a_2_);
if (v_isSharedCheck_21_ == 0)
{
v___x_6_ = v_a_2_;
v_isShared_7_ = v_isSharedCheck_21_;
goto v_resetjp_5_;
}
else
{
lean_inc(v_tail_4_);
lean_inc(v_head_3_);
lean_dec(v_a_2_);
v___x_6_ = lean_box(0);
v_isShared_7_ = v_isSharedCheck_21_;
goto v_resetjp_5_;
}
v_resetjp_5_:
{
lean_object* v___x_8_; uint8_t v___x_16_; 
v___x_8_ = lean_unsigned_to_nat(32u);
v___x_16_ = lean_nat_dec_eq(v_head_3_, v___x_8_);
if (v___x_16_ == 0)
{
lean_object* v___x_17_; uint8_t v___x_18_; 
v___x_17_ = lean_unsigned_to_nat(9u);
v___x_18_ = lean_nat_dec_eq(v_head_3_, v___x_17_);
if (v___x_18_ == 0)
{
lean_object* v___x_19_; lean_object* v___x_20_; 
lean_del_object(v___x_6_);
v___x_19_ = lp_lean_x2dftml_LeanFtml_collapsePad_go(v___x_18_, v_tail_4_);
v___x_20_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_20_, 0, v_head_3_);
lean_ctor_set(v___x_20_, 1, v___x_19_);
return v___x_20_;
}
else
{
lean_dec(v_head_3_);
goto v___jp_9_;
}
}
else
{
lean_dec(v_head_3_);
goto v___jp_9_;
}
v___jp_9_:
{
uint8_t v___x_10_; 
v___x_10_ = 1;
if (v_a_1_ == 0)
{
lean_object* v___x_11_; lean_object* v___x_13_; 
v___x_11_ = lp_lean_x2dftml_LeanFtml_collapsePad_go(v___x_10_, v_tail_4_);
if (v_isShared_7_ == 0)
{
lean_ctor_set(v___x_6_, 1, v___x_11_);
lean_ctor_set(v___x_6_, 0, v___x_8_);
v___x_13_ = v___x_6_;
goto v_reusejp_12_;
}
else
{
lean_object* v_reuseFailAlloc_14_; 
v_reuseFailAlloc_14_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_14_, 0, v___x_8_);
lean_ctor_set(v_reuseFailAlloc_14_, 1, v___x_11_);
v___x_13_ = v_reuseFailAlloc_14_;
goto v_reusejp_12_;
}
v_reusejp_12_:
{
return v___x_13_;
}
}
else
{
lean_del_object(v___x_6_);
v_a_1_ = v___x_10_;
v_a_2_ = v_tail_4_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapsePad_go___boxed(lean_object* v_a_22_, lean_object* v_a_23_){
_start:
{
uint8_t v_a_132__boxed_24_; lean_object* v_res_25_; 
v_a_132__boxed_24_ = lean_unbox(v_a_22_);
v_res_25_ = lp_lean_x2dftml_LeanFtml_collapsePad_go(v_a_132__boxed_24_, v_a_23_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_collapsePad(lean_object* v_a_26_){
_start:
{
uint8_t v___x_27_; lean_object* v___x_28_; 
v___x_27_ = 0;
v___x_28_ = lp_lean_x2dftml_LeanFtml_collapsePad_go(v___x_27_, v_a_26_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllB_go(lean_object* v_pat_31_, lean_object* v_rep_32_, lean_object* v_a_33_, lean_object* v_a_34_){
_start:
{
if (lean_obj_tag(v_a_33_) == 0)
{
lean_dec(v_rep_32_);
return v_a_33_;
}
else
{
lean_object* v_head_35_; lean_object* v_tail_36_; lean_object* v_zero_37_; uint8_t v_isZero_38_; 
v_head_35_ = lean_ctor_get(v_a_33_, 0);
v_tail_36_ = lean_ctor_get(v_a_33_, 1);
v_zero_37_ = lean_unsigned_to_nat(0u);
v_isZero_38_ = lean_nat_dec_eq(v_a_34_, v_zero_37_);
if (v_isZero_38_ == 1)
{
lean_object* v___x_39_; 
lean_dec_ref_known(v_a_33_, 2);
lean_dec(v_rep_32_);
v___x_39_ = lean_box(0);
return v___x_39_;
}
else
{
lean_object* v_one_40_; lean_object* v_n_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; uint8_t v___x_45_; 
v_one_40_ = lean_unsigned_to_nat(1u);
v_n_41_ = lean_nat_sub(v_a_34_, v_one_40_);
v___x_42_ = l_List_lengthTR___redArg(v_pat_31_);
v___x_43_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc(v___x_42_);
lean_inc_ref(v_a_33_);
v___x_44_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_33_, v_a_33_, v___x_42_, v___x_43_);
v___x_45_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_44_, v_pat_31_);
lean_dec(v___x_44_);
if (v___x_45_ == 0)
{
lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_53_; 
lean_inc(v_tail_36_);
lean_inc(v_head_35_);
lean_dec(v___x_42_);
v_isSharedCheck_53_ = !lean_is_exclusive(v_a_33_);
if (v_isSharedCheck_53_ == 0)
{
lean_object* v_unused_54_; lean_object* v_unused_55_; 
v_unused_54_ = lean_ctor_get(v_a_33_, 1);
lean_dec(v_unused_54_);
v_unused_55_ = lean_ctor_get(v_a_33_, 0);
lean_dec(v_unused_55_);
v___x_47_ = v_a_33_;
v_isShared_48_ = v_isSharedCheck_53_;
goto v_resetjp_46_;
}
else
{
lean_dec(v_a_33_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_53_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_49_; lean_object* v___x_51_; 
v___x_49_ = lp_lean_x2dftml_LeanFtml_replaceAllB_go(v_pat_31_, v_rep_32_, v_tail_36_, v_n_41_);
lean_dec(v_n_41_);
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 1, v___x_49_);
v___x_51_ = v___x_47_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_52_; 
v_reuseFailAlloc_52_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_52_, 0, v_head_35_);
lean_ctor_set(v_reuseFailAlloc_52_, 1, v___x_49_);
v___x_51_ = v_reuseFailAlloc_52_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
return v___x_51_;
}
}
}
else
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = l_List_drop___redArg(v___x_42_, v_a_33_);
lean_dec_ref_known(v_a_33_, 2);
lean_inc(v_rep_32_);
v___x_57_ = lp_lean_x2dftml_LeanFtml_replaceAllB_go(v_pat_31_, v_rep_32_, v___x_56_, v_n_41_);
lean_dec(v_n_41_);
v___x_58_ = l_List_appendTR___redArg(v_rep_32_, v___x_57_);
return v___x_58_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllB_go___boxed(lean_object* v_pat_59_, lean_object* v_rep_60_, lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = lp_lean_x2dftml_LeanFtml_replaceAllB_go(v_pat_59_, v_rep_60_, v_a_61_, v_a_62_);
lean_dec(v_a_62_);
lean_dec(v_pat_59_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllB(lean_object* v_pat_64_, lean_object* v_rep_65_, lean_object* v_bs_66_){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_67_ = l_List_lengthTR___redArg(v_bs_66_);
v___x_68_ = lean_unsigned_to_nat(1u);
v___x_69_ = lean_nat_add(v___x_67_, v___x_68_);
lean_dec(v___x_67_);
v___x_70_ = lp_lean_x2dftml_LeanFtml_replaceAllB_go(v_pat_64_, v_rep_65_, v_bs_66_, v___x_69_);
lean_dec(v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllB___boxed(lean_object* v_pat_71_, lean_object* v_rep_72_, lean_object* v_bs_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = lp_lean_x2dftml_LeanFtml_replaceAllB(v_pat_71_, v_rep_72_, v_bs_73_);
lean_dec(v_pat_71_);
return v_res_74_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isDigitB(lean_object* v_b_75_){
_start:
{
lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_76_ = lean_unsigned_to_nat(48u);
v___x_77_ = lean_nat_dec_le(v___x_76_, v_b_75_);
if (v___x_77_ == 0)
{
return v___x_77_;
}
else
{
lean_object* v___x_78_; uint8_t v___x_79_; 
v___x_78_ = lean_unsigned_to_nat(57u);
v___x_79_ = lean_nat_dec_le(v_b_75_, v___x_78_);
return v___x_79_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isDigitB___boxed(lean_object* v_b_80_){
_start:
{
uint8_t v_res_81_; lean_object* v_r_82_; 
v_res_81_ = lp_lean_x2dftml_LeanFtml_isDigitB(v_b_80_);
lean_dec(v_b_80_);
v_r_82_ = lean_box(v_res_81_);
return v_r_82_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isAlnumB(lean_object* v_b_83_){
_start:
{
uint8_t v___x_89_; 
v___x_89_ = lp_lean_x2dftml_LeanFtml_isDigitB(v_b_83_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; uint8_t v___x_91_; 
v___x_90_ = lean_unsigned_to_nat(97u);
v___x_91_ = lean_nat_dec_le(v___x_90_, v_b_83_);
if (v___x_91_ == 0)
{
goto v___jp_84_;
}
else
{
lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_92_ = lean_unsigned_to_nat(122u);
v___x_93_ = lean_nat_dec_le(v_b_83_, v___x_92_);
if (v___x_93_ == 0)
{
goto v___jp_84_;
}
else
{
return v___x_93_;
}
}
}
else
{
return v___x_89_;
}
v___jp_84_:
{
lean_object* v___x_85_; uint8_t v___x_86_; 
v___x_85_ = lean_unsigned_to_nat(65u);
v___x_86_ = lean_nat_dec_le(v___x_85_, v_b_83_);
if (v___x_86_ == 0)
{
return v___x_86_;
}
else
{
lean_object* v___x_87_; uint8_t v___x_88_; 
v___x_87_ = lean_unsigned_to_nat(90u);
v___x_88_ = lean_nat_dec_le(v_b_83_, v___x_87_);
return v___x_88_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isAlnumB___boxed(lean_object* v_b_94_){
_start:
{
uint8_t v_res_95_; lean_object* v_r_96_; 
v_res_95_ = lp_lean_x2dftml_LeanFtml_isAlnumB(v_b_94_);
lean_dec(v_b_94_);
v_r_96_ = lean_box(v_res_95_);
return v_r_96_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__0(lean_object* v_pos_103_, lean_object* v_src_104_, lean_object* v_a_105_, lean_object* v_d_106_, lean_object* v___x_107_, lean_object* v_x_108_){
_start:
{
if (lean_obj_tag(v_x_108_) == 0)
{
lean_object* v___x_109_; 
lean_dec(v___x_107_);
v___x_109_ = lean_box(0);
return v___x_109_;
}
else
{
lean_object* v_head_110_; lean_object* v_tail_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_131_; 
v_head_110_ = lean_ctor_get(v_x_108_, 0);
v_tail_111_ = lean_ctor_get(v_x_108_, 1);
v_isSharedCheck_131_ = !lean_is_exclusive(v_x_108_);
if (v_isSharedCheck_131_ == 0)
{
v___x_113_ = v_x_108_;
v_isShared_114_ = v_isSharedCheck_131_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_tail_111_);
lean_inc(v_head_110_);
lean_dec(v_x_108_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_131_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_115_ = lean_unsigned_to_nat(2u);
v___x_116_ = lean_nat_add(v_pos_103_, v_head_110_);
lean_inc(v___x_116_);
v___x_117_ = l_List_drop___redArg(v___x_116_, v_src_104_);
v___x_118_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc(v___x_117_);
v___x_119_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_117_, v___x_117_, v___x_115_, v___x_118_);
lean_dec(v___x_117_);
v___x_120_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__0___closed__1));
v___x_121_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_119_, v___x_120_);
lean_dec(v___x_119_);
if (v___x_121_ == 0)
{
lean_dec(v___x_116_);
lean_del_object(v___x_113_);
lean_dec(v_head_110_);
v_x_108_ = v_tail_111_;
goto _start;
}
else
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_128_; 
lean_dec(v_tail_111_);
v___x_123_ = lean_nat_add(v_a_105_, v_d_106_);
v___x_124_ = lean_nat_add(v___x_123_, v_head_110_);
lean_dec(v_head_110_);
lean_dec(v___x_123_);
lean_inc(v___x_107_);
v___x_125_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_107_, v___x_107_, v___x_124_, v___x_118_);
lean_dec(v___x_107_);
v___x_126_ = lean_nat_add(v___x_116_, v___x_115_);
lean_dec(v___x_116_);
if (v_isShared_114_ == 0)
{
lean_ctor_set_tag(v___x_113_, 0);
lean_ctor_set(v___x_113_, 1, v___x_126_);
lean_ctor_set(v___x_113_, 0, v___x_125_);
v___x_128_ = v___x_113_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v___x_125_);
lean_ctor_set(v_reuseFailAlloc_130_, 1, v___x_126_);
v___x_128_ = v_reuseFailAlloc_130_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
lean_object* v___x_129_; 
v___x_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
return v___x_129_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__0___boxed(lean_object* v_pos_132_, lean_object* v_src_133_, lean_object* v_a_134_, lean_object* v_d_135_, lean_object* v___x_136_, lean_object* v_x_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__0(v_pos_132_, v_src_133_, v_a_134_, v_d_135_, v___x_136_, v_x_137_);
lean_dec(v_d_135_);
lean_dec(v_a_134_);
lean_dec(v_src_133_);
lean_dec(v_pos_132_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__2(lean_object* v___x_139_, lean_object* v_src_140_, lean_object* v_a_141_, lean_object* v___x_142_, lean_object* v_x_143_){
_start:
{
if (lean_obj_tag(v_x_143_) == 0)
{
lean_object* v___x_144_; 
lean_dec(v___x_142_);
v___x_144_ = lean_box(0);
return v___x_144_;
}
else
{
lean_object* v_head_145_; lean_object* v_tail_146_; lean_object* v_pos_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v_maxB_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v_head_145_ = lean_ctor_get(v_x_143_, 0);
v_tail_146_ = lean_ctor_get(v_x_143_, 1);
v_pos_147_ = lean_nat_add(v___x_139_, v_head_145_);
v___x_148_ = lean_unsigned_to_nat(125u);
lean_inc(v_pos_147_);
v___x_149_ = l_List_drop___redArg(v_pos_147_, v_src_140_);
v_maxB_150_ = lp_lean_x2dftml_LeanFtml_countRun(v___x_148_, v___x_149_);
lean_dec(v___x_149_);
v___x_151_ = lean_unsigned_to_nat(1u);
v___x_152_ = lean_nat_add(v_maxB_150_, v___x_151_);
lean_dec(v_maxB_150_);
v___x_153_ = l_List_range(v___x_152_);
v___x_154_ = l_List_reverse___redArg(v___x_153_);
lean_inc(v___x_142_);
v___x_155_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__0(v_pos_147_, v_src_140_, v_a_141_, v_head_145_, v___x_142_, v___x_154_);
lean_dec(v_pos_147_);
if (lean_obj_tag(v___x_155_) == 0)
{
v_x_143_ = v_tail_146_;
goto _start;
}
else
{
lean_dec(v___x_142_);
return v___x_155_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__2___boxed(lean_object* v___x_157_, lean_object* v_src_158_, lean_object* v_a_159_, lean_object* v___x_160_, lean_object* v_x_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__2(v___x_157_, v_src_158_, v_a_159_, v___x_160_, v_x_161_);
lean_dec(v_x_161_);
lean_dec(v_a_159_);
lean_dec(v_src_158_);
lean_dec(v___x_157_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_ttMatchAt_spec__1(uint8_t v___x_163_, lean_object* v_l_164_, lean_object* v_a_165_, lean_object* v_a_166_){
_start:
{
if (lean_obj_tag(v_a_165_) == 0)
{
lean_dec_ref(v_a_166_);
lean_inc(v_l_164_);
return v_l_164_;
}
else
{
lean_object* v_head_167_; lean_object* v_tail_168_; lean_object* v___x_169_; uint8_t v___x_170_; 
v_head_167_ = lean_ctor_get(v_a_165_, 0);
lean_inc(v_head_167_);
v_tail_168_ = lean_ctor_get(v_a_165_, 1);
lean_inc(v_tail_168_);
lean_dec_ref_known(v_a_165_, 2);
v___x_169_ = lean_unsigned_to_nat(10u);
v___x_170_ = lean_nat_dec_eq(v_head_167_, v___x_169_);
if (v___x_170_ == 0)
{
if (v___x_163_ == 0)
{
lean_object* v___x_171_; 
lean_dec(v_tail_168_);
lean_dec(v_head_167_);
v___x_171_ = lean_array_to_list(v_a_166_);
return v___x_171_;
}
else
{
lean_object* v___x_172_; 
v___x_172_ = lean_array_push(v_a_166_, v_head_167_);
v_a_165_ = v_tail_168_;
v_a_166_ = v___x_172_;
goto _start;
}
}
else
{
lean_object* v___x_174_; 
lean_dec(v_tail_168_);
lean_dec(v_head_167_);
v___x_174_ = lean_array_to_list(v_a_166_);
return v___x_174_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_ttMatchAt_spec__1___boxed(lean_object* v___x_175_, lean_object* v_l_176_, lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
uint8_t v___x_653__boxed_179_; lean_object* v_res_180_; 
v___x_653__boxed_179_ = lean_unbox(v___x_175_);
v_res_180_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_ttMatchAt_spec__1(v___x_653__boxed_179_, v_l_176_, v_a_177_, v_a_178_);
lean_dec(v_l_176_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__3_spec__3(lean_object* v_src_181_, uint8_t v___x_182_, lean_object* v___x_183_, lean_object* v_x_184_){
_start:
{
if (lean_obj_tag(v_x_184_) == 0)
{
lean_object* v___x_185_; 
lean_dec(v___x_183_);
v___x_185_ = lean_box(0);
return v___x_185_;
}
else
{
lean_object* v_head_186_; lean_object* v_tail_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v_dMax_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v_head_186_ = lean_ctor_get(v_x_184_, 0);
v_tail_187_ = lean_ctor_get(v_x_184_, 1);
v___x_188_ = lean_unsigned_to_nat(2u);
v___x_189_ = lean_nat_add(v___x_188_, v_head_186_);
lean_inc(v___x_189_);
v___x_190_ = l_List_drop___redArg(v___x_189_, v_src_181_);
v___x_191_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc(v___x_190_);
v___x_192_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_ttMatchAt_spec__1(v___x_182_, v___x_190_, v___x_190_, v___x_191_);
lean_dec(v___x_190_);
v_dMax_193_ = l_List_lengthTR___redArg(v___x_192_);
lean_dec(v___x_192_);
v___x_194_ = lean_unsigned_to_nat(1u);
v___x_195_ = lean_nat_add(v_dMax_193_, v___x_194_);
lean_dec(v_dMax_193_);
v___x_196_ = l_List_range(v___x_195_);
lean_inc(v___x_183_);
v___x_197_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__2(v___x_189_, v_src_181_, v_head_186_, v___x_183_, v___x_196_);
lean_dec(v___x_196_);
lean_dec(v___x_189_);
if (lean_obj_tag(v___x_197_) == 0)
{
v_x_184_ = v_tail_187_;
goto _start;
}
else
{
lean_dec(v___x_183_);
return v___x_197_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__3_spec__3___boxed(lean_object* v_src_199_, lean_object* v___x_200_, lean_object* v___x_201_, lean_object* v_x_202_){
_start:
{
uint8_t v___x_680__boxed_203_; lean_object* v_res_204_; 
v___x_680__boxed_203_ = lean_unbox(v___x_200_);
v_res_204_ = lp_lean_x2dftml_List_findSome_x3f___at___00List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__3_spec__3(v_src_199_, v___x_680__boxed_203_, v___x_201_, v_x_202_);
lean_dec(v_x_202_);
lean_dec(v_src_199_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__3(lean_object* v_src_205_, lean_object* v___x_206_, uint8_t v___x_207_, lean_object* v_x_208_){
_start:
{
if (lean_obj_tag(v_x_208_) == 0)
{
lean_object* v___x_209_; 
lean_dec(v___x_206_);
v___x_209_ = lean_box(0);
return v___x_209_;
}
else
{
lean_object* v_head_210_; lean_object* v_tail_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v_dMax_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v_head_210_ = lean_ctor_get(v_x_208_, 0);
v_tail_211_ = lean_ctor_get(v_x_208_, 1);
v___x_212_ = lean_unsigned_to_nat(2u);
v___x_213_ = lean_nat_add(v___x_212_, v_head_210_);
lean_inc(v___x_213_);
v___x_214_ = l_List_drop___redArg(v___x_213_, v_src_205_);
v___x_215_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc(v___x_214_);
v___x_216_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_ttMatchAt_spec__1(v___x_207_, v___x_214_, v___x_214_, v___x_215_);
lean_dec(v___x_214_);
v_dMax_217_ = l_List_lengthTR___redArg(v___x_216_);
lean_dec(v___x_216_);
v___x_218_ = lean_unsigned_to_nat(1u);
v___x_219_ = lean_nat_add(v_dMax_217_, v___x_218_);
lean_dec(v_dMax_217_);
v___x_220_ = l_List_range(v___x_219_);
lean_inc(v___x_206_);
v___x_221_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__2(v___x_213_, v_src_205_, v_head_210_, v___x_206_, v___x_220_);
lean_dec(v___x_220_);
lean_dec(v___x_213_);
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v___x_222_; 
v___x_222_ = lp_lean_x2dftml_List_findSome_x3f___at___00List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__3_spec__3(v_src_205_, v___x_207_, v___x_206_, v_tail_211_);
return v___x_222_;
}
else
{
lean_dec(v___x_206_);
return v___x_221_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__3___boxed(lean_object* v_src_223_, lean_object* v___x_224_, lean_object* v___x_225_, lean_object* v_x_226_){
_start:
{
uint8_t v___x_720__boxed_227_; lean_object* v_res_228_; 
v___x_720__boxed_227_ = lean_unbox(v___x_225_);
v_res_228_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__3(v_src_223_, v___x_224_, v___x_720__boxed_227_, v_x_226_);
lean_dec(v_x_226_);
lean_dec(v_src_223_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ttMatchAt(lean_object* v_src_235_){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; uint8_t v___x_241_; 
v___x_236_ = lean_unsigned_to_nat(2u);
v___x_237_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc(v_src_235_);
v___x_238_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_235_, v_src_235_, v___x_236_, v___x_237_);
v___x_239_ = lean_unsigned_to_nat(123u);
v___x_240_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ttMatchAt___closed__1));
v___x_241_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_238_, v___x_240_);
lean_dec(v___x_238_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; 
lean_dec(v_src_235_);
v___x_242_ = lean_box(0);
return v___x_242_;
}
else
{
lean_object* v___x_243_; lean_object* v_maxA_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_243_ = l_List_drop___redArg(v___x_236_, v_src_235_);
v_maxA_244_ = lp_lean_x2dftml_LeanFtml_countRun(v___x_239_, v___x_243_);
v___x_245_ = lean_unsigned_to_nat(1u);
v___x_246_ = lean_nat_add(v_maxA_244_, v___x_245_);
lean_dec(v_maxA_244_);
v___x_247_ = l_List_range(v___x_246_);
v___x_248_ = l_List_reverse___redArg(v___x_247_);
v___x_249_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_ttMatchAt_spec__3(v_src_235_, v___x_243_, v___x_241_, v___x_248_);
lean_dec(v___x_248_);
lean_dec(v_src_235_);
return v___x_249_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__3(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ttProcess___closed__2));
v___x_256_ = l_String_toListImpl(v___x_255_);
return v___x_256_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__5(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ttProcess___closed__4));
v___x_259_ = l_String_toListImpl(v___x_258_);
return v___x_259_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__6(void){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_260_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__5, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__5);
v___x_261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
return v___x_261_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__7(void){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_262_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__6, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__6);
v___x_263_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__3, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__3);
v___x_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
lean_ctor_set(v___x_264_, 1, v___x_262_);
return v___x_264_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__8(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_265_ = lean_box(0);
v___x_266_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__7, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__7);
v___x_267_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
lean_ctor_set(v___x_267_, 1, v___x_265_);
return v___x_267_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__10(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ttProcess___closed__9));
v___x_270_ = l_String_toListImpl(v___x_269_);
return v___x_270_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__11(void){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_271_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__10, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__10);
v___x_272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
return v___x_272_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__12(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_273_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__11, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__11);
v___x_274_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__3, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__3);
v___x_275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
lean_ctor_set(v___x_275_, 1, v___x_273_);
return v___x_275_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__13(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_276_ = lean_box(0);
v___x_277_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__12, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__12);
v___x_278_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
lean_ctor_set(v___x_278_, 1, v___x_276_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ttProcess(lean_object* v_body_297_, lean_object* v_before_298_, lean_object* v_after_299_, lean_object* v_tail_300_, lean_object* v_toks_301_){
_start:
{
uint8_t v___y_306_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v_leadLen_311_; lean_object* v_leading_312_; lean_object* v_afterLead_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v_trailLen_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v_trailing_319_; lean_object* v_core_320_; lean_object* v_cbody_321_; lean_object* v___y_323_; lean_object* v___y_324_; uint8_t v___x_345_; uint8_t v___y_347_; 
v___x_309_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc_n(v_body_297_, 2);
v___x_310_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_headingMatchLine_spec__1(v_body_297_, v_body_297_, v___x_309_);
v_leadLen_311_ = l_List_lengthTR___redArg(v___x_310_);
lean_dec(v___x_310_);
lean_inc(v_leadLen_311_);
v_leading_312_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_body_297_, v_body_297_, v_leadLen_311_, v___x_309_);
v_afterLead_313_ = l_List_drop___redArg(v_leadLen_311_, v_body_297_);
lean_dec(v_body_297_);
lean_inc_n(v_afterLead_313_, 2);
v___x_314_ = l_List_reverse___redArg(v_afterLead_313_);
lean_inc(v___x_314_);
v___x_315_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_headingMatchLine_spec__1(v___x_314_, v___x_314_, v___x_309_);
lean_dec(v___x_314_);
v_trailLen_316_ = l_List_lengthTR___redArg(v___x_315_);
lean_dec(v___x_315_);
v___x_317_ = l_List_lengthTR___redArg(v_afterLead_313_);
v___x_318_ = lean_nat_sub(v___x_317_, v_trailLen_316_);
lean_dec(v_trailLen_316_);
lean_dec(v___x_317_);
lean_inc(v___x_318_);
v_trailing_319_ = l_List_drop___redArg(v___x_318_, v_afterLead_313_);
v_core_320_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_afterLead_313_, v_afterLead_313_, v___x_318_, v___x_309_);
lean_dec(v_afterLead_313_);
v_cbody_321_ = lp_lean_x2dftml_LeanFtml_collapsePad(v_core_320_);
v___x_345_ = l_List_isEmpty___redArg(v_cbody_321_);
if (v___x_345_ == 0)
{
lean_object* v___x_350_; lean_object* v___y_352_; lean_object* v___y_353_; uint8_t v___y_354_; lean_object* v___y_359_; lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_350_ = lean_box(0);
v___x_367_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ttProcess___closed__19));
v___x_368_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_cbody_321_, v___x_367_);
if (v___x_368_ == 0)
{
uint8_t v___x_369_; 
v___x_369_ = l_List_isEmpty___redArg(v_leading_312_);
lean_dec(v_leading_312_);
if (v___x_369_ == 0)
{
if (lean_obj_tag(v_before_298_) == 0)
{
v___y_359_ = v___x_350_;
goto v___jp_358_;
}
else
{
lean_object* v_val_370_; uint8_t v___x_371_; 
v_val_370_ = lean_ctor_get(v_before_298_, 0);
v___x_371_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_val_370_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; 
v___x_372_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ttProcess___closed__0));
v___y_359_ = v___x_372_;
goto v___jp_358_;
}
else
{
v___y_359_ = v___x_350_;
goto v___jp_358_;
}
}
}
else
{
v___y_359_ = v___x_350_;
goto v___jp_358_;
}
}
else
{
lean_dec(v_cbody_321_);
lean_dec(v_tail_300_);
v___y_347_ = v___x_368_;
goto v___jp_346_;
}
v___jp_351_:
{
uint8_t v___x_355_; 
v___x_355_ = l_List_isEmpty___redArg(v_trailing_319_);
lean_dec(v_trailing_319_);
if (v___x_355_ == 0)
{
if (lean_obj_tag(v_after_299_) == 0)
{
v___y_323_ = v___y_353_;
v___y_324_ = v___x_350_;
goto v___jp_322_;
}
else
{
lean_object* v_val_356_; uint8_t v___x_357_; 
v_val_356_ = lean_ctor_get(v_after_299_, 0);
v___x_357_ = lp_lean_x2dftml_LeanFtml_isWsByte(v_val_356_);
if (v___x_357_ == 0)
{
if (v___y_354_ == 0)
{
v___y_323_ = v___y_353_;
v___y_324_ = v___y_352_;
goto v___jp_322_;
}
else
{
v___y_323_ = v___y_353_;
v___y_324_ = v___x_350_;
goto v___jp_322_;
}
}
else
{
v___y_323_ = v___y_353_;
v___y_324_ = v___x_350_;
goto v___jp_322_;
}
}
}
else
{
v___y_323_ = v___y_353_;
v___y_324_ = v___x_350_;
goto v___jp_322_;
}
}
v___jp_358_:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_360_ = lean_unsigned_to_nat(3u);
lean_inc(v_tail_300_);
v___x_361_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_300_, v_tail_300_, v___x_360_, v___x_309_);
lean_dec(v_tail_300_);
v___x_362_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ttProcess___closed__0));
v___x_363_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ttProcess___closed__15));
v___x_364_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_361_, v___x_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; uint8_t v___x_366_; 
v___x_365_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ttProcess___closed__18));
v___x_366_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_361_, v___x_365_);
lean_dec(v___x_361_);
v___y_352_ = v___x_362_;
v___y_353_ = v___y_359_;
v___y_354_ = v___x_366_;
goto v___jp_351_;
}
else
{
lean_dec(v___x_361_);
v___y_352_ = v___x_362_;
v___y_353_ = v___y_359_;
v___y_354_ = v___x_364_;
goto v___jp_351_;
}
}
}
else
{
lean_dec(v_cbody_321_);
lean_dec(v_tail_300_);
v___y_347_ = v___x_345_;
goto v___jp_346_;
}
v___jp_302_:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = lean_box(0);
v___x_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
lean_ctor_set(v___x_304_, 1, v_toks_301_);
return v___x_304_;
}
v___jp_305_:
{
if (v___y_306_ == 0)
{
goto v___jp_302_;
}
else
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ttProcess___closed__0));
v___x_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
lean_ctor_set(v___x_308_, 1, v_toks_301_);
return v___x_308_;
}
}
v___jp_322_:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v_fst_328_; lean_object* v_snd_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v_fst_332_; lean_object* v_snd_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_344_; 
v___x_325_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ttProcess___closed__1));
v___x_326_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__8, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__8);
v___x_327_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_325_, v___x_326_, v_toks_301_);
v_fst_328_ = lean_ctor_get(v___x_327_, 0);
lean_inc(v_fst_328_);
v_snd_329_ = lean_ctor_get(v___x_327_, 1);
lean_inc(v_snd_329_);
lean_dec_ref(v___x_327_);
v___x_330_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__13, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__13);
v___x_331_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_325_, v___x_330_, v_snd_329_);
v_fst_332_ = lean_ctor_get(v___x_331_, 0);
v_snd_333_ = lean_ctor_get(v___x_331_, 1);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_344_ == 0)
{
v___x_335_ = v___x_331_;
v_isShared_336_ = v_isSharedCheck_344_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_snd_333_);
lean_inc(v_fst_332_);
lean_dec(v___x_331_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_344_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_342_; 
lean_inc(v___y_323_);
v___x_337_ = l_List_appendTR___redArg(v___y_323_, v_fst_328_);
v___x_338_ = l_List_appendTR___redArg(v___x_337_, v_cbody_321_);
v___x_339_ = l_List_appendTR___redArg(v___x_338_, v_fst_332_);
lean_inc(v___y_324_);
v___x_340_ = l_List_appendTR___redArg(v___x_339_, v___y_324_);
if (v_isShared_336_ == 0)
{
lean_ctor_set(v___x_335_, 0, v___x_340_);
v___x_342_ = v___x_335_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_340_);
lean_ctor_set(v_reuseFailAlloc_343_, 1, v_snd_333_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
v___jp_346_:
{
if (v___x_345_ == 0)
{
lean_dec(v_trailing_319_);
lean_dec(v_leading_312_);
goto v___jp_302_;
}
else
{
uint8_t v___x_348_; 
v___x_348_ = l_List_isEmpty___redArg(v_leading_312_);
lean_dec(v_leading_312_);
if (v___x_348_ == 0)
{
lean_dec(v_trailing_319_);
v___y_306_ = v___y_347_;
goto v___jp_305_;
}
else
{
uint8_t v___x_349_; 
v___x_349_ = l_List_isEmpty___redArg(v_trailing_319_);
lean_dec(v_trailing_319_);
if (v___x_349_ == 0)
{
v___y_306_ = v___y_347_;
goto v___jp_305_;
}
else
{
goto v___jp_302_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ttProcess___boxed(lean_object* v_body_373_, lean_object* v_before_374_, lean_object* v_after_375_, lean_object* v_tail_376_, lean_object* v_toks_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = lp_lean_x2dftml_LeanFtml_ttProcess(v_body_373_, v_before_374_, v_after_375_, v_tail_376_, v_toks_377_);
lean_dec(v_after_375_);
lean_dec(v_before_374_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ttScan_go(lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_){
_start:
{
if (lean_obj_tag(v_a_379_) == 0)
{
lean_object* v___x_383_; 
v___x_383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_383_, 0, v_a_379_);
lean_ctor_set(v___x_383_, 1, v_a_381_);
return v___x_383_;
}
else
{
lean_object* v_head_384_; lean_object* v_tail_385_; lean_object* v_zero_386_; uint8_t v_isZero_387_; 
v_head_384_ = lean_ctor_get(v_a_379_, 0);
v_tail_385_ = lean_ctor_get(v_a_379_, 1);
v_zero_386_ = lean_unsigned_to_nat(0u);
v_isZero_387_ = lean_nat_dec_eq(v_a_382_, v_zero_386_);
if (v_isZero_387_ == 1)
{
lean_object* v___x_388_; lean_object* v___x_389_; 
lean_dec_ref_known(v_a_379_, 2);
v___x_388_ = lean_box(0);
v___x_389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_389_, 0, v___x_388_);
lean_ctor_set(v___x_389_, 1, v_a_381_);
return v___x_389_;
}
else
{
lean_object* v_one_390_; lean_object* v_n_391_; lean_object* v___x_392_; 
v_one_390_ = lean_unsigned_to_nat(1u);
v_n_391_ = lean_nat_sub(v_a_382_, v_one_390_);
lean_inc_ref(v_a_379_);
v___x_392_ = lp_lean_x2dftml_LeanFtml_ttMatchAt(v_a_379_);
if (lean_obj_tag(v___x_392_) == 0)
{
lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_410_; 
lean_inc(v_tail_385_);
lean_inc(v_head_384_);
v_isSharedCheck_410_ = !lean_is_exclusive(v_a_379_);
if (v_isSharedCheck_410_ == 0)
{
lean_object* v_unused_411_; lean_object* v_unused_412_; 
v_unused_411_ = lean_ctor_get(v_a_379_, 1);
lean_dec(v_unused_411_);
v_unused_412_ = lean_ctor_get(v_a_379_, 0);
lean_dec(v_unused_412_);
v___x_394_ = v_a_379_;
v_isShared_395_ = v_isSharedCheck_410_;
goto v_resetjp_393_;
}
else
{
lean_dec(v_a_379_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_410_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v_fst_398_; lean_object* v_snd_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_409_; 
lean_inc(v_head_384_);
v___x_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_396_, 0, v_head_384_);
v___x_397_ = lp_lean_x2dftml_LeanFtml_ttScan_go(v_tail_385_, v___x_396_, v_a_381_, v_n_391_);
lean_dec(v_n_391_);
lean_dec_ref_known(v___x_396_, 1);
v_fst_398_ = lean_ctor_get(v___x_397_, 0);
v_snd_399_ = lean_ctor_get(v___x_397_, 1);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_409_ == 0)
{
v___x_401_ = v___x_397_;
v_isShared_402_ = v_isSharedCheck_409_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_snd_399_);
lean_inc(v_fst_398_);
lean_dec(v___x_397_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_409_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 1, v_fst_398_);
v___x_404_ = v___x_394_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_head_384_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v_fst_398_);
v___x_404_ = v_reuseFailAlloc_408_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
lean_object* v___x_406_; 
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 0, v___x_404_);
v___x_406_ = v___x_401_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_404_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_snd_399_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
}
else
{
lean_object* v_val_413_; lean_object* v_fst_414_; lean_object* v_snd_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v_fst_419_; lean_object* v_snd_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v_fst_425_; lean_object* v_snd_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_434_; 
v_val_413_ = lean_ctor_get(v___x_392_, 0);
lean_inc(v_val_413_);
lean_dec_ref_known(v___x_392_, 1);
v_fst_414_ = lean_ctor_get(v_val_413_, 0);
lean_inc(v_fst_414_);
v_snd_415_ = lean_ctor_get(v_val_413_, 1);
lean_inc_n(v_snd_415_, 3);
lean_dec(v_val_413_);
v___x_416_ = l_List_get_x3fInternal___redArg(v_a_379_, v_snd_415_);
v___x_417_ = l_List_drop___redArg(v_snd_415_, v_a_379_);
lean_inc(v___x_417_);
v___x_418_ = lp_lean_x2dftml_LeanFtml_ttProcess(v_fst_414_, v_a_380_, v___x_416_, v___x_417_, v_a_381_);
lean_dec(v___x_416_);
v_fst_419_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_fst_419_);
v_snd_420_ = lean_ctor_get(v___x_418_, 1);
lean_inc(v_snd_420_);
lean_dec_ref(v___x_418_);
v___x_421_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc_ref(v_a_379_);
v___x_422_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_379_, v_a_379_, v_snd_415_, v___x_421_);
lean_dec_ref_known(v_a_379_, 2);
v___x_423_ = l_List_getLast_x3f___redArg(v___x_422_);
lean_dec(v___x_422_);
v___x_424_ = lp_lean_x2dftml_LeanFtml_ttScan_go(v___x_417_, v___x_423_, v_snd_420_, v_n_391_);
lean_dec(v_n_391_);
lean_dec(v___x_423_);
v_fst_425_ = lean_ctor_get(v___x_424_, 0);
v_snd_426_ = lean_ctor_get(v___x_424_, 1);
v_isSharedCheck_434_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_434_ == 0)
{
v___x_428_ = v___x_424_;
v_isShared_429_ = v_isSharedCheck_434_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_snd_426_);
lean_inc(v_fst_425_);
lean_dec(v___x_424_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_434_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_430_; lean_object* v___x_432_; 
v___x_430_ = l_List_appendTR___redArg(v_fst_419_, v_fst_425_);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 0, v___x_430_);
v___x_432_ = v___x_428_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v___x_430_);
lean_ctor_set(v_reuseFailAlloc_433_, 1, v_snd_426_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ttScan_go___boxed(lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = lp_lean_x2dftml_LeanFtml_ttScan_go(v_a_435_, v_a_436_, v_a_437_, v_a_438_);
lean_dec(v_a_438_);
lean_dec(v_a_436_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ttScan(lean_object* v_src_440_, lean_object* v_toks_441_){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_442_ = lean_box(0);
v___x_443_ = l_List_lengthTR___redArg(v_src_440_);
v___x_444_ = lean_unsigned_to_nat(1u);
v___x_445_ = lean_nat_add(v___x_443_, v___x_444_);
lean_dec(v___x_443_);
v___x_446_ = lp_lean_x2dftml_LeanFtml_ttScan_go(v_src_440_, v___x_442_, v_toks_441_, v___x_445_);
lean_dec(v___x_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_ttRule(lean_object* v_st_448_){
_start:
{
lean_object* v___f_449_; lean_object* v___x_450_; 
v___f_449_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ttRule___closed__0));
v___x_450_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_448_, v___f_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_supMatch(lean_object* v_bs_464_, lean_object* v_toks_465_){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_466_ = lean_unsigned_to_nat(4u);
v___x_467_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc(v_bs_464_);
v___x_468_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_bs_464_, v_bs_464_, v___x_466_, v___x_467_);
v___x_469_ = lean_unsigned_to_nat(94u);
v___x_470_ = lean_box(0);
v___x_471_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_supMatch___closed__3));
v___x_472_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_468_, v___x_471_);
lean_dec(v___x_468_);
if (v___x_472_ == 0)
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_supMatch___closed__4));
v___x_474_ = lp_lean_x2dftml_LeanFtml_pairClaim(v___x_473_, v___x_469_, v_bs_464_, v_toks_465_);
return v___x_474_;
}
else
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_475_ = l_List_drop___redArg(v___x_466_, v_bs_464_);
lean_dec(v_bs_464_);
v___x_476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_476_, 0, v___x_470_);
lean_ctor_set(v___x_476_, 1, v_toks_465_);
v___x_477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_477_, 0, v___x_475_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
v___x_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_478_, 0, v___x_477_);
return v___x_478_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_superscriptRule(lean_object* v_st_482_){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_superscriptRule___closed__1));
v___x_484_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_482_, v___x_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_subMatch(lean_object* v_bs_498_, lean_object* v_toks_499_){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; uint8_t v___x_506_; 
v___x_500_ = lean_unsigned_to_nat(4u);
v___x_501_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc(v_bs_498_);
v___x_502_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_bs_498_, v_bs_498_, v___x_500_, v___x_501_);
v___x_503_ = lean_unsigned_to_nat(44u);
v___x_504_ = lean_box(0);
v___x_505_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_subMatch___closed__3));
v___x_506_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_502_, v___x_505_);
lean_dec(v___x_502_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_507_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_subMatch___closed__4));
v___x_508_ = lp_lean_x2dftml_LeanFtml_pairClaim(v___x_507_, v___x_503_, v_bs_498_, v_toks_499_);
return v___x_508_;
}
else
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_509_ = l_List_drop___redArg(v___x_500_, v_bs_498_);
lean_dec(v_bs_498_);
v___x_510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_510_, 0, v___x_504_);
lean_ctor_set(v___x_510_, 1, v_toks_499_);
v___x_511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_511_, 0, v___x_509_);
lean_ctor_set(v___x_511_, 1, v___x_510_);
v___x_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
return v___x_512_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_subscriptRule(lean_object* v_st_516_){
_start:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_subscriptRule___closed__1));
v___x_518_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_516_, v___x_517_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoPair_lazyClose(lean_object* v_cls_519_, lean_object* v_a_520_, lean_object* v_a_521_){
_start:
{
if (lean_obj_tag(v_a_520_) == 0)
{
lean_object* v___x_522_; 
lean_dec(v_a_521_);
v___x_522_ = lean_box(0);
return v___x_522_;
}
else
{
lean_object* v_head_523_; lean_object* v_tail_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; uint8_t v___x_528_; 
v_head_523_ = lean_ctor_get(v_a_520_, 0);
lean_inc(v_head_523_);
v_tail_524_ = lean_ctor_get(v_a_520_, 1);
lean_inc(v_tail_524_);
v___x_525_ = l_List_lengthTR___redArg(v_cls_519_);
v___x_526_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc_ref(v_a_520_);
v___x_527_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_520_, v_a_520_, v___x_525_, v___x_526_);
lean_dec_ref_known(v_a_520_, 2);
v___x_528_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_527_, v_cls_519_);
lean_dec(v___x_527_);
if (v___x_528_ == 0)
{
lean_object* v___x_529_; uint8_t v___x_530_; 
v___x_529_ = lean_unsigned_to_nat(10u);
v___x_530_ = lean_nat_dec_eq(v_head_523_, v___x_529_);
lean_dec(v_head_523_);
if (v___x_530_ == 0)
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = lean_unsigned_to_nat(1u);
v___x_532_ = lean_nat_add(v_a_521_, v___x_531_);
lean_dec(v_a_521_);
v_a_520_ = v_tail_524_;
v_a_521_ = v___x_532_;
goto _start;
}
else
{
lean_object* v___x_534_; 
lean_dec(v_tail_524_);
lean_dec(v_a_521_);
v___x_534_ = lean_box(0);
return v___x_534_;
}
}
else
{
lean_object* v___x_535_; 
lean_dec(v_tail_524_);
lean_dec(v_head_523_);
v___x_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_535_, 0, v_a_521_);
return v___x_535_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoPair_lazyClose___boxed(lean_object* v_cls_536_, lean_object* v_a_537_, lean_object* v_a_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = lp_lean_x2dftml_LeanFtml_typoPair_lazyClose(v_cls_536_, v_a_537_, v_a_538_);
lean_dec(v_cls_536_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoPair___lam__0(lean_object* v_opn_540_, lean_object* v_cls_541_, lean_object* v_repO_542_, lean_object* v_repC_543_, lean_object* v_src_544_, lean_object* v_toks_545_){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; uint8_t v___x_550_; 
v___x_546_ = l_List_lengthTR___redArg(v_opn_540_);
v___x_547_ = lean_unsigned_to_nat(0u);
v___x_548_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc(v___x_546_);
lean_inc(v_src_544_);
v___x_549_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_src_544_, v_src_544_, v___x_546_, v___x_548_);
v___x_550_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_549_, v_opn_540_);
lean_dec(v___x_549_);
if (v___x_550_ == 0)
{
lean_object* v___x_551_; 
lean_dec(v___x_546_);
lean_dec(v_toks_545_);
lean_dec(v_src_544_);
lean_dec(v_repC_543_);
lean_dec(v_repO_542_);
v___x_551_ = lean_box(0);
return v___x_551_;
}
else
{
lean_object* v___x_552_; lean_object* v___x_553_; 
lean_inc(v___x_546_);
v___x_552_ = l_List_drop___redArg(v___x_546_, v_src_544_);
lean_inc(v___x_552_);
v___x_553_ = lp_lean_x2dftml_LeanFtml_typoPair_lazyClose(v_cls_541_, v___x_552_, v___x_547_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v___x_554_; 
lean_dec(v___x_552_);
lean_dec(v___x_546_);
lean_dec(v_toks_545_);
lean_dec(v_src_544_);
lean_dec(v_repC_543_);
lean_dec(v_repO_542_);
v___x_554_ = lean_box(0);
return v___x_554_;
}
else
{
lean_object* v_val_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_571_; 
v_val_555_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_571_ == 0)
{
v___x_557_ = v___x_553_;
v_isShared_558_ = v_isSharedCheck_571_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_val_555_);
lean_dec(v___x_553_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_571_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_569_; 
v___x_559_ = lean_nat_add(v___x_546_, v_val_555_);
lean_dec(v___x_546_);
v___x_560_ = l_List_lengthTR___redArg(v_cls_541_);
v___x_561_ = lean_nat_add(v___x_559_, v___x_560_);
lean_dec(v___x_560_);
lean_dec(v___x_559_);
v___x_562_ = l_List_drop___redArg(v___x_561_, v_src_544_);
lean_dec(v_src_544_);
lean_inc(v___x_552_);
v___x_563_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_552_, v___x_552_, v_val_555_, v___x_548_);
lean_dec(v___x_552_);
v___x_564_ = l_List_appendTR___redArg(v_repO_542_, v___x_563_);
v___x_565_ = l_List_appendTR___redArg(v___x_564_, v_repC_543_);
v___x_566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
lean_ctor_set(v___x_566_, 1, v_toks_545_);
v___x_567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_562_);
lean_ctor_set(v___x_567_, 1, v___x_566_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 0, v___x_567_);
v___x_569_ = v___x_557_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_567_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoPair___lam__0___boxed(lean_object* v_opn_572_, lean_object* v_cls_573_, lean_object* v_repO_574_, lean_object* v_repC_575_, lean_object* v_src_576_, lean_object* v_toks_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = lp_lean_x2dftml_LeanFtml_typoPair___lam__0(v_opn_572_, v_cls_573_, v_repO_574_, v_repC_575_, v_src_576_, v_toks_577_);
lean_dec(v_cls_573_);
lean_dec(v_opn_572_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoPair(lean_object* v_opn_579_, lean_object* v_cls_580_, lean_object* v_repO_581_, lean_object* v_repC_582_, lean_object* v_bs_583_){
_start:
{
lean_object* v_m_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v_fst_587_; 
v_m_584_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_typoPair___lam__0___boxed), 6, 4);
lean_closure_set(v_m_584_, 0, v_opn_579_);
lean_closure_set(v_m_584_, 1, v_cls_580_);
lean_closure_set(v_m_584_, 2, v_repO_581_);
lean_closure_set(v_m_584_, 3, v_repC_582_);
v___x_585_ = lean_box(0);
v___x_586_ = lp_lean_x2dftml_LeanFtml_pregScan(v_m_584_, v_bs_583_, v___x_585_);
v_fst_587_ = lean_ctor_get(v___x_586_, 0);
lean_inc(v_fst_587_);
lean_dec_ref(v___x_586_);
return v_fst_587_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoNumSpace_go(lean_object* v_ph_588_, lean_object* v_a_589_, lean_object* v_a_590_){
_start:
{
if (lean_obj_tag(v_a_590_) == 0)
{
lean_dec(v_ph_588_);
return v_a_590_;
}
else
{
lean_object* v_head_591_; lean_object* v_tail_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_618_; 
v_head_591_ = lean_ctor_get(v_a_590_, 0);
v_tail_592_ = lean_ctor_get(v_a_590_, 1);
v_isSharedCheck_618_ = !lean_is_exclusive(v_a_590_);
if (v_isSharedCheck_618_ == 0)
{
v___x_594_ = v_a_590_;
v_isShared_595_ = v_isSharedCheck_618_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_tail_592_);
lean_inc(v_head_591_);
lean_dec(v_a_590_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_618_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_602_; uint8_t v___x_603_; 
v___x_602_ = lean_unsigned_to_nat(32u);
v___x_603_ = lean_nat_dec_eq(v_head_591_, v___x_602_);
if (v___x_603_ == 0)
{
goto v___jp_596_;
}
else
{
if (lean_obj_tag(v_a_589_) == 0)
{
goto v___jp_596_;
}
else
{
lean_object* v_val_604_; uint8_t v___x_605_; 
v_val_604_ = lean_ctor_get(v_a_589_, 0);
v___x_605_ = lp_lean_x2dftml_LeanFtml_isDigitB(v_val_604_);
if (v___x_605_ == 0)
{
goto v___jp_596_;
}
else
{
lean_object* v___x_606_; 
v___x_606_ = l_List_head_x3f___redArg(v_tail_592_);
if (lean_obj_tag(v___x_606_) == 0)
{
goto v___jp_596_;
}
else
{
lean_object* v_val_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_617_; 
v_val_607_ = lean_ctor_get(v___x_606_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_617_ == 0)
{
v___x_609_ = v___x_606_;
v_isShared_610_ = v_isSharedCheck_617_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_val_607_);
lean_dec(v___x_606_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_617_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
uint8_t v___x_611_; 
v___x_611_ = lp_lean_x2dftml_LeanFtml_isDigitB(v_val_607_);
lean_dec(v_val_607_);
if (v___x_611_ == 0)
{
lean_del_object(v___x_609_);
goto v___jp_596_;
}
else
{
lean_object* v___x_613_; 
lean_del_object(v___x_594_);
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 0, v_head_591_);
v___x_613_ = v___x_609_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_head_591_);
v___x_613_ = v_reuseFailAlloc_616_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
lean_object* v___x_614_; lean_object* v___x_615_; 
lean_inc(v_ph_588_);
v___x_614_ = lp_lean_x2dftml_LeanFtml_typoNumSpace_go(v_ph_588_, v___x_613_, v_tail_592_);
lean_dec_ref(v___x_613_);
v___x_615_ = l_List_appendTR___redArg(v_ph_588_, v___x_614_);
return v___x_615_;
}
}
}
}
}
}
}
v___jp_596_:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_600_; 
lean_inc(v_head_591_);
v___x_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_597_, 0, v_head_591_);
v___x_598_ = lp_lean_x2dftml_LeanFtml_typoNumSpace_go(v_ph_588_, v___x_597_, v_tail_592_);
lean_dec_ref_known(v___x_597_, 1);
if (v_isShared_595_ == 0)
{
lean_ctor_set(v___x_594_, 1, v___x_598_);
v___x_600_ = v___x_594_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_head_591_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v___x_598_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoNumSpace_go___boxed(lean_object* v_ph_619_, lean_object* v_a_620_, lean_object* v_a_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = lp_lean_x2dftml_LeanFtml_typoNumSpace_go(v_ph_619_, v_a_620_, v_a_621_);
lean_dec(v_a_620_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoNumSpace(lean_object* v_ph_623_, lean_object* v_bs_624_){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_box(0);
v___x_626_ = lp_lean_x2dftml_LeanFtml_typoNumSpace_go(v_ph_623_, v___x_625_, v_bs_624_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_litM(lean_object* v_lit_627_, lean_object* v_bs_628_){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; uint8_t v___x_632_; 
v___x_629_ = l_List_lengthTR___redArg(v_lit_627_);
v___x_630_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc(v___x_629_);
lean_inc(v_bs_628_);
v___x_631_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_bs_628_, v_bs_628_, v___x_629_, v___x_630_);
lean_dec(v_bs_628_);
v___x_632_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_631_, v_lit_627_);
lean_dec(v___x_631_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; 
lean_dec(v___x_629_);
v___x_633_ = lean_box(0);
return v___x_633_;
}
else
{
lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_634_ = lean_box(0);
v___x_635_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_629_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
return v___x_635_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_litM___boxed(lean_object* v_lit_636_, lean_object* v_bs_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = lp_lean_x2dftml_LeanFtml_litM(v_lit_636_, v_bs_637_);
lean_dec(v_lit_636_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classM(lean_object* v_set_642_, lean_object* v_bs_643_){
_start:
{
if (lean_obj_tag(v_bs_643_) == 0)
{
return v_bs_643_;
}
else
{
lean_object* v_head_644_; uint8_t v___x_645_; 
v_head_644_ = lean_ctor_get(v_bs_643_, 0);
v___x_645_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_644_, v_set_642_);
if (v___x_645_ == 0)
{
lean_object* v___x_646_; 
v___x_646_ = lean_box(0);
return v___x_646_;
}
else
{
lean_object* v___x_647_; 
v___x_647_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_classM___closed__0));
return v___x_647_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_classM___boxed(lean_object* v_set_648_, lean_object* v_bs_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = lp_lean_x2dftml_LeanFtml_classM(v_set_648_, v_bs_649_);
lean_dec(v_bs_649_);
lean_dec(v_set_648_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_entM(lean_object* v_tail_657_, lean_object* v_bs_658_){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; uint8_t v___x_664_; 
v___x_659_ = lean_unsigned_to_nat(2u);
v___x_660_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc(v_bs_658_);
v___x_661_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_bs_658_, v_bs_658_, v___x_659_, v___x_660_);
v___x_662_ = lean_box(0);
v___x_663_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_entM___closed__1));
v___x_664_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_661_, v___x_663_);
lean_dec(v___x_661_);
if (v___x_664_ == 0)
{
lean_dec(v_bs_658_);
return v___x_662_;
}
else
{
lean_object* v_rest_665_; lean_object* v___x_666_; lean_object* v_zeros_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; uint8_t v___x_671_; 
v_rest_665_ = l_List_drop___redArg(v___x_659_, v_bs_658_);
lean_dec(v_bs_658_);
v___x_666_ = lean_unsigned_to_nat(48u);
v_zeros_667_ = lp_lean_x2dftml_LeanFtml_countRun(v___x_666_, v_rest_665_);
v___x_668_ = l_List_lengthTR___redArg(v_tail_657_);
lean_inc(v_zeros_667_);
v___x_669_ = l_List_drop___redArg(v_zeros_667_, v_rest_665_);
lean_dec(v_rest_665_);
lean_inc(v___x_668_);
lean_inc(v___x_669_);
v___x_670_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_669_, v___x_669_, v___x_668_, v___x_660_);
lean_dec(v___x_669_);
v___x_671_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_670_, v_tail_657_);
lean_dec(v___x_670_);
if (v___x_671_ == 0)
{
lean_dec(v___x_668_);
lean_dec(v_zeros_667_);
return v___x_662_;
}
else
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_672_ = lean_nat_add(v___x_659_, v_zeros_667_);
lean_dec(v_zeros_667_);
v___x_673_ = lean_nat_add(v___x_672_, v___x_668_);
lean_dec(v___x_668_);
lean_dec(v___x_672_);
v___x_674_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
lean_ctor_set(v___x_674_, 1, v___x_662_);
return v___x_674_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_entM___boxed(lean_object* v_tail_675_, lean_object* v_bs_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = lp_lean_x2dftml_LeanFtml_entM(v_tail_675_, v_bs_676_);
lean_dec(v_tail_675_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_xentM_spec__0(lean_object* v_zeros_678_, lean_object* v_rest_679_, lean_object* v_a_680_, lean_object* v_a_681_){
_start:
{
if (lean_obj_tag(v_a_680_) == 0)
{
lean_object* v___x_682_; 
lean_dec(v_zeros_678_);
v___x_682_ = lean_array_to_list(v_a_681_);
return v___x_682_;
}
else
{
lean_object* v_head_683_; lean_object* v_tail_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_704_; 
v_head_683_ = lean_ctor_get(v_a_680_, 0);
v_tail_684_ = lean_ctor_get(v_a_680_, 1);
v_isSharedCheck_704_ = !lean_is_exclusive(v_a_680_);
if (v_isSharedCheck_704_ == 0)
{
v___x_686_ = v_a_680_;
v_isShared_687_ = v_isSharedCheck_704_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_tail_684_);
lean_inc(v_head_683_);
lean_dec(v_a_680_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_704_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___y_689_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_692_ = lean_box(0);
v___x_693_ = l_List_lengthTR___redArg(v_head_683_);
lean_inc(v_zeros_678_);
v___x_694_ = l_List_drop___redArg(v_zeros_678_, v_rest_679_);
v___x_695_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc(v___x_693_);
lean_inc(v___x_694_);
v___x_696_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_694_, v___x_694_, v___x_693_, v___x_695_);
lean_dec(v___x_694_);
v___x_697_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_696_, v_head_683_);
lean_dec(v_head_683_);
lean_dec(v___x_696_);
if (v___x_697_ == 0)
{
lean_dec(v___x_693_);
lean_del_object(v___x_686_);
v___y_689_ = v___x_692_;
goto v___jp_688_;
}
else
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_702_; 
v___x_698_ = lean_unsigned_to_nat(3u);
v___x_699_ = lean_nat_add(v___x_698_, v_zeros_678_);
v___x_700_ = lean_nat_add(v___x_699_, v___x_693_);
lean_dec(v___x_693_);
lean_dec(v___x_699_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 1, v___x_692_);
lean_ctor_set(v___x_686_, 0, v___x_700_);
v___x_702_ = v___x_686_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v___x_700_);
lean_ctor_set(v_reuseFailAlloc_703_, 1, v___x_692_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
v___y_689_ = v___x_702_;
goto v___jp_688_;
}
}
v___jp_688_:
{
lean_object* v___x_690_; 
v___x_690_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_681_, v___y_689_);
v_a_680_ = v_tail_684_;
v_a_681_ = v___x_690_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_xentM_spec__0___boxed(lean_object* v_zeros_705_, lean_object* v_rest_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_xentM_spec__0(v_zeros_705_, v_rest_706_, v_a_707_, v_a_708_);
lean_dec(v_rest_706_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_xentM(lean_object* v_tails_714_, lean_object* v_bs_715_){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; uint8_t v___x_727_; 
v___x_716_ = lean_unsigned_to_nat(2u);
v___x_717_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc(v_bs_715_);
v___x_724_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_bs_715_, v_bs_715_, v___x_716_, v___x_717_);
v___x_725_ = lean_box(0);
v___x_726_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_entM___closed__1));
v___x_727_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_724_, v___x_726_);
lean_dec(v___x_724_);
if (v___x_727_ == 0)
{
lean_dec(v_bs_715_);
lean_dec(v_tails_714_);
return v___x_725_;
}
else
{
lean_object* v___x_728_; lean_object* v___x_729_; uint8_t v___x_730_; 
v___x_728_ = l_List_get_x3fInternal___redArg(v_bs_715_, v___x_716_);
v___x_729_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_xentM___closed__0));
v___x_730_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_728_, v___x_729_);
if (v___x_730_ == 0)
{
lean_object* v___x_731_; uint8_t v___x_732_; 
v___x_731_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_xentM___closed__1));
v___x_732_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_728_, v___x_731_);
lean_dec(v___x_728_);
if (v___x_732_ == 0)
{
lean_dec(v_bs_715_);
lean_dec(v_tails_714_);
return v___x_725_;
}
else
{
goto v___jp_718_;
}
}
else
{
lean_dec(v___x_728_);
goto v___jp_718_;
}
}
v___jp_718_:
{
lean_object* v___x_719_; lean_object* v_rest_720_; lean_object* v___x_721_; lean_object* v_zeros_722_; lean_object* v___x_723_; 
v___x_719_ = lean_unsigned_to_nat(3u);
v_rest_720_ = l_List_drop___redArg(v___x_719_, v_bs_715_);
lean_dec(v_bs_715_);
v___x_721_ = lean_unsigned_to_nat(48u);
v_zeros_722_ = lp_lean_x2dftml_LeanFtml_countRun(v___x_721_, v_rest_720_);
v___x_723_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_xentM_spec__0(v_zeros_722_, v_rest_720_, v_tails_714_, v___x_717_);
lean_dec(v_rest_720_);
return v___x_723_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_altM_spec__0(lean_object* v_bs_733_, lean_object* v_a_734_, lean_object* v_a_735_){
_start:
{
if (lean_obj_tag(v_a_734_) == 0)
{
lean_object* v___x_736_; 
lean_dec(v_bs_733_);
v___x_736_ = lean_array_to_list(v_a_735_);
return v___x_736_;
}
else
{
lean_object* v_head_737_; lean_object* v_tail_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v_head_737_ = lean_ctor_get(v_a_734_, 0);
lean_inc(v_head_737_);
v_tail_738_ = lean_ctor_get(v_a_734_, 1);
lean_inc(v_tail_738_);
lean_dec_ref_known(v_a_734_, 2);
lean_inc(v_bs_733_);
v___x_739_ = lean_apply_1(v_head_737_, v_bs_733_);
v___x_740_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_735_, v___x_739_);
v_a_734_ = v_tail_738_;
v_a_735_ = v___x_740_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_altM(lean_object* v_ms_742_, lean_object* v_bs_743_){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
v___x_745_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_altM_spec__0(v_bs_743_, v_ms_742_, v___x_744_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_seqM_spec__0(lean_object* v_la_746_, lean_object* v_a_747_, lean_object* v_a_748_){
_start:
{
if (lean_obj_tag(v_a_747_) == 0)
{
lean_object* v___x_749_; 
v___x_749_ = l_List_reverse___redArg(v_a_748_);
return v___x_749_;
}
else
{
lean_object* v_head_750_; lean_object* v_tail_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_760_; 
v_head_750_ = lean_ctor_get(v_a_747_, 0);
v_tail_751_ = lean_ctor_get(v_a_747_, 1);
v_isSharedCheck_760_ = !lean_is_exclusive(v_a_747_);
if (v_isSharedCheck_760_ == 0)
{
v___x_753_ = v_a_747_;
v_isShared_754_ = v_isSharedCheck_760_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_tail_751_);
lean_inc(v_head_750_);
lean_dec(v_a_747_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_760_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_755_; lean_object* v___x_757_; 
v___x_755_ = lean_nat_add(v_head_750_, v_la_746_);
lean_dec(v_head_750_);
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 1, v_a_748_);
lean_ctor_set(v___x_753_, 0, v___x_755_);
v___x_757_ = v___x_753_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v___x_755_);
lean_ctor_set(v_reuseFailAlloc_759_, 1, v_a_748_);
v___x_757_ = v_reuseFailAlloc_759_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
v_a_747_ = v_tail_751_;
v_a_748_ = v___x_757_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_seqM_spec__0___boxed(lean_object* v_la_761_, lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_seqM_spec__0(v_la_761_, v_a_762_, v_a_763_);
lean_dec(v_la_761_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_seqM_spec__1(lean_object* v_bs_765_, lean_object* v_b_766_, lean_object* v_a_767_, lean_object* v_a_768_){
_start:
{
if (lean_obj_tag(v_a_767_) == 0)
{
lean_object* v___x_769_; 
lean_dec_ref(v_b_766_);
v___x_769_ = lean_array_to_list(v_a_768_);
return v___x_769_;
}
else
{
lean_object* v_head_770_; lean_object* v_tail_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
v_head_770_ = lean_ctor_get(v_a_767_, 0);
lean_inc_n(v_head_770_, 2);
v_tail_771_ = lean_ctor_get(v_a_767_, 1);
lean_inc(v_tail_771_);
lean_dec_ref_known(v_a_767_, 2);
v___x_772_ = l_List_drop___redArg(v_head_770_, v_bs_765_);
lean_inc_ref(v_b_766_);
v___x_773_ = lean_apply_1(v_b_766_, v___x_772_);
v___x_774_ = lean_box(0);
v___x_775_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_seqM_spec__0(v_head_770_, v___x_773_, v___x_774_);
lean_dec(v_head_770_);
v___x_776_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_768_, v___x_775_);
v_a_767_ = v_tail_771_;
v_a_768_ = v___x_776_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_seqM_spec__1___boxed(lean_object* v_bs_778_, lean_object* v_b_779_, lean_object* v_a_780_, lean_object* v_a_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_seqM_spec__1(v_bs_778_, v_b_779_, v_a_780_, v_a_781_);
lean_dec(v_bs_778_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_seqM(lean_object* v_a_783_, lean_object* v_b_784_, lean_object* v_bs_785_){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
lean_inc(v_bs_785_);
v___x_786_ = lean_apply_1(v_a_783_, v_bs_785_);
v___x_787_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
v___x_788_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_seqM_spec__1(v_bs_785_, v_b_784_, v___x_786_, v___x_787_);
lean_dec(v_bs_785_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optM(lean_object* v_m_792_, lean_object* v_bs_793_){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_794_ = lean_apply_1(v_m_792_, v_bs_793_);
v___x_795_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_optM___closed__0));
v___x_796_ = l_List_appendTR___redArg(v___x_794_, v___x_795_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorM(lean_object* v_bs_800_){
_start:
{
uint8_t v___x_803_; 
v___x_803_ = l_List_isEmpty___redArg(v_bs_800_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_804_ = lean_box(0);
v___x_805_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_anchorM___closed__0));
v___x_806_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v_bs_800_, v___x_805_);
if (v___x_806_ == 0)
{
return v___x_804_;
}
else
{
goto v___jp_801_;
}
}
else
{
goto v___jp_801_;
}
v___jp_801_:
{
lean_object* v___x_802_; 
v___x_802_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_optM___closed__0));
return v___x_802_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_anchorM___boxed(lean_object* v_bs_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = lp_lean_x2dftml_LeanFtml_anchorM(v_bs_807_);
lean_dec(v_bs_807_);
return v_res_808_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__1(void){
_start:
{
lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_810_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricPrefix___closed__0));
v___x_811_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_810_);
return v___x_811_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__2(void){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__1, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__1);
v___x_813_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_813_, 0, v___x_812_);
return v___x_813_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__7(void){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_823_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricPrefix___closed__6));
v___x_824_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_823_);
return v___x_824_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__8(void){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_825_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__7, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__7);
v___x_826_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_826_, 0, v___x_825_);
return v___x_826_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__10(void){
_start:
{
lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_828_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricPrefix___closed__9));
v___x_829_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_828_);
return v___x_829_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__11(void){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__10, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__10);
v___x_831_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_entM___boxed), 2, 1);
lean_closure_set(v___x_831_, 0, v___x_830_);
return v___x_831_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__13(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_833_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricPrefix___closed__12));
v___x_834_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_833_);
return v___x_834_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__15(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricPrefix___closed__14));
v___x_837_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_836_);
return v___x_837_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__16(void){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_838_ = lean_box(0);
v___x_839_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__15, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__15);
v___x_840_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
lean_ctor_set(v___x_840_, 1, v___x_838_);
return v___x_840_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__17(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_841_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__16, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__16);
v___x_842_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__13, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__13);
v___x_843_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_843_, 0, v___x_842_);
lean_ctor_set(v___x_843_, 1, v___x_841_);
return v___x_843_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__18(void){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_844_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__17, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__17);
v___x_845_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_xentM), 2, 1);
lean_closure_set(v___x_845_, 0, v___x_844_);
return v___x_845_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__20(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricPrefix___closed__19));
v___x_848_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_847_);
return v___x_848_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__21(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_849_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__20, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__20_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__20);
v___x_850_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_classM___boxed), 2, 1);
lean_closure_set(v___x_850_, 0, v___x_849_);
return v___x_850_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__22(void){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_851_ = lean_box(0);
v___x_852_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__21, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__21);
v___x_853_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_853_, 0, v___x_852_);
lean_ctor_set(v___x_853_, 1, v___x_851_);
return v___x_853_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__23(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_854_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__22, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__22_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__22);
v___x_855_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__18, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__18);
v___x_856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
lean_ctor_set(v___x_856_, 1, v___x_854_);
return v___x_856_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__24(void){
_start:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_857_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__23, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__23);
v___x_858_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__11, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__11);
v___x_859_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_859_, 0, v___x_858_);
lean_ctor_set(v___x_859_, 1, v___x_857_);
return v___x_859_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__25(void){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_860_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__24, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__24_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__24);
v___x_861_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__8, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__8);
v___x_862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_862_, 0, v___x_861_);
lean_ctor_set(v___x_862_, 1, v___x_860_);
return v___x_862_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__26(void){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_863_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__25, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__25);
v___x_864_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricPrefix___closed__5));
v___x_865_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_865_, 0, v___x_864_);
lean_ctor_set(v___x_865_, 1, v___x_863_);
return v___x_865_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__27(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_866_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__26, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__26_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__26);
v___x_867_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__2, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__2);
v___x_868_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_867_);
lean_ctor_set(v___x_868_, 1, v___x_866_);
return v___x_868_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__28(void){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_869_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__27, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__27_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__27);
v___x_870_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_altM), 2, 1);
lean_closure_set(v___x_870_, 0, v___x_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_metricPrefix(lean_object* v_a_871_){
_start:
{
lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_872_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricPrefix___closed__28, &lp_lean_x2dftml_LeanFtml_metricPrefix___closed__28_once, _init_lp_lean_x2dftml_LeanFtml_metricPrefix___closed__28);
v___x_873_ = lp_lean_x2dftml_LeanFtml_optM(v___x_872_, v_a_871_);
return v___x_873_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__1(void){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__0));
v___x_876_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_875_);
return v___x_876_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__2(void){
_start:
{
lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_877_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__1, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__1);
v___x_878_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_classM___boxed), 2, 1);
lean_closure_set(v___x_878_, 0, v___x_877_);
return v___x_878_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__4(void){
_start:
{
lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_880_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__3));
v___x_881_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_880_);
return v___x_881_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__5(void){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__4, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__4);
v___x_883_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_883_, 0, v___x_882_);
return v___x_883_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__7(void){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__6));
v___x_886_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_885_);
return v___x_886_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__8(void){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__7, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__7);
v___x_888_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_888_, 0, v___x_887_);
return v___x_888_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__10(void){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__9));
v___x_891_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_890_);
return v___x_891_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__11(void){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_892_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__10, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__10);
v___x_893_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_893_, 0, v___x_892_);
return v___x_893_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__13(void){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_895_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__12));
v___x_896_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_895_);
return v___x_896_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__14(void){
_start:
{
lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_897_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__13, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__13);
v___x_898_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_898_, 0, v___x_897_);
return v___x_898_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__16(void){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_900_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__15));
v___x_901_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_900_);
return v___x_901_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__17(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_902_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__16, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__16);
v___x_903_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_903_, 0, v___x_902_);
return v___x_903_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__19(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__18));
v___x_906_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_905_);
return v___x_906_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__20(void){
_start:
{
lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_907_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__19, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__19);
v___x_908_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_908_, 0, v___x_907_);
return v___x_908_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__22(void){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_910_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__21));
v___x_911_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_910_);
return v___x_911_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__23(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__22, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__22_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__22);
v___x_913_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_913_, 0, v___x_912_);
return v___x_913_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__25(void){
_start:
{
lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_915_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__24));
v___x_916_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_915_);
return v___x_916_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__26(void){
_start:
{
lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_917_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__25, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__25_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__25);
v___x_918_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_918_, 0, v___x_917_);
return v___x_918_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__28(void){
_start:
{
lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__27));
v___x_921_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_920_);
return v___x_921_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__29(void){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_922_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__28, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__28_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__28);
v___x_923_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_923_, 0, v___x_922_);
return v___x_923_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__31(void){
_start:
{
lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_925_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__30));
v___x_926_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_925_);
return v___x_926_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__32(void){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__31, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__31_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__31);
v___x_928_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_928_, 0, v___x_927_);
return v___x_928_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__34(void){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_930_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__33));
v___x_931_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_930_);
return v___x_931_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__35(void){
_start:
{
lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_932_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__34, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__34_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__34);
v___x_933_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_933_, 0, v___x_932_);
return v___x_933_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__37(void){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_935_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__36));
v___x_936_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_935_);
return v___x_936_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__38(void){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_937_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__37, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__37_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__37);
v___x_938_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_938_, 0, v___x_937_);
return v___x_938_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__43(void){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_948_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__42));
v___x_949_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_948_);
return v___x_949_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__44(void){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__43, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__43_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__43);
v___x_951_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_951_, 0, v___x_950_);
return v___x_951_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__46(void){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__45));
v___x_954_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_953_);
return v___x_954_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__47(void){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__46, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__46_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__46);
v___x_956_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_956_, 0, v___x_955_);
return v___x_956_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__49(void){
_start:
{
lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_958_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__48));
v___x_959_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_958_);
return v___x_959_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__50(void){
_start:
{
lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_960_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__49, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__49_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__49);
v___x_961_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_entM___boxed), 2, 1);
lean_closure_set(v___x_961_, 0, v___x_960_);
return v___x_961_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__52(void){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__51));
v___x_964_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_963_);
return v___x_964_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__54(void){
_start:
{
lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_966_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__53));
v___x_967_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_966_);
return v___x_967_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__55(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_968_ = lean_box(0);
v___x_969_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__54, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__54_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__54);
v___x_970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_969_);
lean_ctor_set(v___x_970_, 1, v___x_968_);
return v___x_970_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__56(void){
_start:
{
lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_971_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__55, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__55_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__55);
v___x_972_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__52, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__52_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__52);
v___x_973_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
lean_ctor_set(v___x_973_, 1, v___x_971_);
return v___x_973_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__57(void){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__56, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__56_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__56);
v___x_975_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_xentM), 2, 1);
lean_closure_set(v___x_975_, 0, v___x_974_);
return v___x_975_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__58(void){
_start:
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_976_ = lean_box(0);
v___x_977_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__57, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__57_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__57);
v___x_978_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_977_);
lean_ctor_set(v___x_978_, 1, v___x_976_);
return v___x_978_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__59(void){
_start:
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_979_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__58, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__58_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__58);
v___x_980_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__50, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__50_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__50);
v___x_981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
lean_ctor_set(v___x_981_, 1, v___x_979_);
return v___x_981_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__60(void){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_982_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__59, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__59_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__59);
v___x_983_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__47, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__47_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__47);
v___x_984_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_983_);
lean_ctor_set(v___x_984_, 1, v___x_982_);
return v___x_984_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__61(void){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_985_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__60, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__60_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__60);
v___x_986_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__44, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__44_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__44);
v___x_987_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
lean_ctor_set(v___x_987_, 1, v___x_985_);
return v___x_987_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__62(void){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_988_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__61, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__61_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__61);
v___x_989_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_metricUnit___closed__41));
v___x_990_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_989_);
lean_ctor_set(v___x_990_, 1, v___x_988_);
return v___x_990_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__63(void){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_991_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__62, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__62_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__62);
v___x_992_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__38, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__38);
v___x_993_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_992_);
lean_ctor_set(v___x_993_, 1, v___x_991_);
return v___x_993_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__64(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_994_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__63, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__63_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__63);
v___x_995_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__35, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__35_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__35);
v___x_996_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
lean_ctor_set(v___x_996_, 1, v___x_994_);
return v___x_996_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__65(void){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_997_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__64, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__64_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__64);
v___x_998_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__32, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__32_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__32);
v___x_999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
lean_ctor_set(v___x_999_, 1, v___x_997_);
return v___x_999_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__66(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1000_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__65, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__65_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__65);
v___x_1001_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__29, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__29_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__29);
v___x_1002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
lean_ctor_set(v___x_1002_, 1, v___x_1000_);
return v___x_1002_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__67(void){
_start:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1003_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__66, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__66_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__66);
v___x_1004_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__26, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__26_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__26);
v___x_1005_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
lean_ctor_set(v___x_1005_, 1, v___x_1003_);
return v___x_1005_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__68(void){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1006_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__67, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__67_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__67);
v___x_1007_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__23, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__23);
v___x_1008_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
lean_ctor_set(v___x_1008_, 1, v___x_1006_);
return v___x_1008_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__69(void){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1009_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__68, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__68_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__68);
v___x_1010_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__20, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__20_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__20);
v___x_1011_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
lean_ctor_set(v___x_1011_, 1, v___x_1009_);
return v___x_1011_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__70(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1012_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__69, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__69_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__69);
v___x_1013_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__17, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__17);
v___x_1014_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
lean_ctor_set(v___x_1014_, 1, v___x_1012_);
return v___x_1014_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__71(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1015_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__70, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__70_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__70);
v___x_1016_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__14, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__14);
v___x_1017_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
lean_ctor_set(v___x_1017_, 1, v___x_1015_);
return v___x_1017_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__72(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1018_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__71, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__71_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__71);
v___x_1019_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__11, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__11);
v___x_1020_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
lean_ctor_set(v___x_1020_, 1, v___x_1018_);
return v___x_1020_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__73(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1021_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__72, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__72_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__72);
v___x_1022_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__8, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__8);
v___x_1023_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1022_);
lean_ctor_set(v___x_1023_, 1, v___x_1021_);
return v___x_1023_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__74(void){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1024_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__73, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__73_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__73);
v___x_1025_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__5, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__5);
v___x_1026_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1025_);
lean_ctor_set(v___x_1026_, 1, v___x_1024_);
return v___x_1026_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__75(void){
_start:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1027_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__74, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__74_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__74);
v___x_1028_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__2, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__2);
v___x_1029_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
lean_ctor_set(v___x_1029_, 1, v___x_1027_);
return v___x_1029_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_metricUnit(lean_object* v_a_1030_){
_start:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1031_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_metricUnit___closed__75, &lp_lean_x2dftml_LeanFtml_metricUnit___closed__75_once, _init_lp_lean_x2dftml_LeanFtml_metricUnit___closed__75);
v___x_1032_ = lp_lean_x2dftml_LeanFtml_altM(v___x_1031_, v_a_1030_);
return v___x_1032_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_computerU___closed__1(void){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1034_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_computerU___closed__0));
v___x_1035_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1034_);
return v___x_1035_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_computerU___closed__2(void){
_start:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1036_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_computerU___closed__1, &lp_lean_x2dftml_LeanFtml_computerU___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_computerU___closed__1);
v___x_1037_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_classM___boxed), 2, 1);
lean_closure_set(v___x_1037_, 0, v___x_1036_);
return v___x_1037_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_computerU___closed__3(void){
_start:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1038_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_computerU___closed__2, &lp_lean_x2dftml_LeanFtml_computerU___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_computerU___closed__2);
v___x_1039_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_optM), 2, 1);
lean_closure_set(v___x_1039_, 0, v___x_1038_);
return v___x_1039_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_computerU___closed__5(void){
_start:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1041_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_computerU___closed__4));
v___x_1042_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1041_);
return v___x_1042_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_computerU___closed__6(void){
_start:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_computerU___closed__5, &lp_lean_x2dftml_LeanFtml_computerU___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_computerU___closed__5);
v___x_1044_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_classM___boxed), 2, 1);
lean_closure_set(v___x_1044_, 0, v___x_1043_);
return v___x_1044_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_computerU___closed__8(void){
_start:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_computerU___closed__7));
v___x_1047_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1046_);
return v___x_1047_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_computerU___closed__9(void){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_computerU___closed__8, &lp_lean_x2dftml_LeanFtml_computerU___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_computerU___closed__8);
v___x_1049_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1049_, 0, v___x_1048_);
return v___x_1049_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_computerU___closed__10(void){
_start:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1050_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_computerU___closed__9, &lp_lean_x2dftml_LeanFtml_computerU___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_computerU___closed__9);
v___x_1051_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_computerU___closed__6, &lp_lean_x2dftml_LeanFtml_computerU___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_computerU___closed__6);
v___x_1052_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_seqM), 3, 2);
lean_closure_set(v___x_1052_, 0, v___x_1051_);
lean_closure_set(v___x_1052_, 1, v___x_1050_);
return v___x_1052_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_computerU___closed__12(void){
_start:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1054_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_computerU___closed__11));
v___x_1055_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1054_);
return v___x_1055_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_computerU___closed__13(void){
_start:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_computerU___closed__12, &lp_lean_x2dftml_LeanFtml_computerU___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_computerU___closed__12);
v___x_1057_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1057_, 0, v___x_1056_);
return v___x_1057_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_computerU___closed__14(void){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1058_ = lean_box(0);
v___x_1059_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_computerU___closed__13, &lp_lean_x2dftml_LeanFtml_computerU___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_computerU___closed__13);
v___x_1060_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
lean_ctor_set(v___x_1060_, 1, v___x_1058_);
return v___x_1060_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_computerU___closed__15(void){
_start:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1061_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_computerU___closed__14, &lp_lean_x2dftml_LeanFtml_computerU___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_computerU___closed__14);
v___x_1062_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_computerU___closed__10, &lp_lean_x2dftml_LeanFtml_computerU___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_computerU___closed__10);
v___x_1063_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
lean_ctor_set(v___x_1063_, 1, v___x_1061_);
return v___x_1063_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_computerU___closed__16(void){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1064_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_computerU___closed__15, &lp_lean_x2dftml_LeanFtml_computerU___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_computerU___closed__15);
v___x_1065_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_computerU___closed__6, &lp_lean_x2dftml_LeanFtml_computerU___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_computerU___closed__6);
v___x_1066_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
lean_ctor_set(v___x_1066_, 1, v___x_1064_);
return v___x_1066_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_computerU___closed__17(void){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1067_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_computerU___closed__16, &lp_lean_x2dftml_LeanFtml_computerU___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_computerU___closed__16);
v___x_1068_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_altM), 2, 1);
lean_closure_set(v___x_1068_, 0, v___x_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_computerU(lean_object* v_a_1069_){
_start:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1070_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_computerU___closed__3, &lp_lean_x2dftml_LeanFtml_computerU___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_computerU___closed__3);
v___x_1071_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_computerU___closed__17, &lp_lean_x2dftml_LeanFtml_computerU___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_computerU___closed__17);
v___x_1072_ = lp_lean_x2dftml_LeanFtml_seqM(v___x_1070_, v___x_1071_, v_a_1069_);
return v___x_1072_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__4(void){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1082_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__3));
v___x_1083_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1082_);
return v___x_1083_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__5(void){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1084_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__4, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__4);
v___x_1085_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1085_, 0, v___x_1084_);
return v___x_1085_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__7(void){
_start:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1087_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__6));
v___x_1088_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1087_);
return v___x_1088_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__8(void){
_start:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__7, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__7);
v___x_1090_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_entM___boxed), 2, 1);
lean_closure_set(v___x_1090_, 0, v___x_1089_);
return v___x_1090_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__10(void){
_start:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1092_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__9));
v___x_1093_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1092_);
return v___x_1093_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__12(void){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1095_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__11));
v___x_1096_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1095_);
return v___x_1096_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__13(void){
_start:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1097_ = lean_box(0);
v___x_1098_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__12, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__12);
v___x_1099_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1098_);
lean_ctor_set(v___x_1099_, 1, v___x_1097_);
return v___x_1099_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__14(void){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1100_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__13, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__13);
v___x_1101_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__10, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__10);
v___x_1102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
lean_ctor_set(v___x_1102_, 1, v___x_1100_);
return v___x_1102_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__15(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__14, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__14);
v___x_1104_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_xentM), 2, 1);
lean_closure_set(v___x_1104_, 0, v___x_1103_);
return v___x_1104_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__20(void){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__19));
v___x_1115_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1114_);
return v___x_1115_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__21(void){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1116_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__20, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__20_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__20);
v___x_1117_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1117_, 0, v___x_1116_);
return v___x_1117_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__23(void){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1119_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__22));
v___x_1120_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1119_);
return v___x_1120_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__24(void){
_start:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1121_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__23, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__23);
v___x_1122_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_entM___boxed), 2, 1);
lean_closure_set(v___x_1122_, 0, v___x_1121_);
return v___x_1122_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__26(void){
_start:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1124_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__25));
v___x_1125_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1124_);
return v___x_1125_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__28(void){
_start:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1127_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__27));
v___x_1128_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1127_);
return v___x_1128_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__29(void){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1129_ = lean_box(0);
v___x_1130_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__28, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__28_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__28);
v___x_1131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1130_);
lean_ctor_set(v___x_1131_, 1, v___x_1129_);
return v___x_1131_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__30(void){
_start:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1132_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__29, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__29_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__29);
v___x_1133_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__26, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__26_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__26);
v___x_1134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1133_);
lean_ctor_set(v___x_1134_, 1, v___x_1132_);
return v___x_1134_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__31(void){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__30, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__30_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__30);
v___x_1136_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_xentM), 2, 1);
lean_closure_set(v___x_1136_, 0, v___x_1135_);
return v___x_1136_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__37(void){
_start:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1149_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__36));
v___x_1150_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1149_);
return v___x_1150_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__38(void){
_start:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1151_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__37, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__37_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__37);
v___x_1152_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1152_, 0, v___x_1151_);
return v___x_1152_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__40(void){
_start:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1154_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__39));
v___x_1155_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1154_);
return v___x_1155_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__41(void){
_start:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1156_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__40, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__40_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__40);
v___x_1157_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_entM___boxed), 2, 1);
lean_closure_set(v___x_1157_, 0, v___x_1156_);
return v___x_1157_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__43(void){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1159_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__42));
v___x_1160_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1159_);
return v___x_1160_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__45(void){
_start:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1162_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__44));
v___x_1163_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1162_);
return v___x_1163_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__47(void){
_start:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1165_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__46));
v___x_1166_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1165_);
return v___x_1166_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__49(void){
_start:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1168_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__48));
v___x_1169_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1168_);
return v___x_1169_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__50(void){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1170_ = lean_box(0);
v___x_1171_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__49, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__49_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__49);
v___x_1172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1171_);
lean_ctor_set(v___x_1172_, 1, v___x_1170_);
return v___x_1172_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__51(void){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1173_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__50, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__50_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__50);
v___x_1174_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__47, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__47_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__47);
v___x_1175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1174_);
lean_ctor_set(v___x_1175_, 1, v___x_1173_);
return v___x_1175_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__52(void){
_start:
{
lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1176_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__51, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__51_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__51);
v___x_1177_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__45, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__45_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__45);
v___x_1178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
lean_ctor_set(v___x_1178_, 1, v___x_1176_);
return v___x_1178_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__53(void){
_start:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
v___x_1179_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__52, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__52_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__52);
v___x_1180_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__43, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__43_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__43);
v___x_1181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1180_);
lean_ctor_set(v___x_1181_, 1, v___x_1179_);
return v___x_1181_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__54(void){
_start:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1182_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__53, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__53_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__53);
v___x_1183_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_xentM), 2, 1);
lean_closure_set(v___x_1183_, 0, v___x_1182_);
return v___x_1183_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__55(void){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1184_ = lean_box(0);
v___x_1185_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_anchorM___boxed), 1, 0);
v___x_1186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1185_);
lean_ctor_set(v___x_1186_, 1, v___x_1184_);
return v___x_1186_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__56(void){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1187_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__55, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__55_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__55);
v___x_1188_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__54, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__54_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__54);
v___x_1189_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1188_);
lean_ctor_set(v___x_1189_, 1, v___x_1187_);
return v___x_1189_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__57(void){
_start:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1190_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__56, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__56_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__56);
v___x_1191_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__41, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__41_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__41);
v___x_1192_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1191_);
lean_ctor_set(v___x_1192_, 1, v___x_1190_);
return v___x_1192_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__58(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1193_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__57, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__57_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__57);
v___x_1194_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__38, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__38_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__38);
v___x_1195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1195_, 0, v___x_1194_);
lean_ctor_set(v___x_1195_, 1, v___x_1193_);
return v___x_1195_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__59(void){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1196_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__58, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__58_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__58);
v___x_1197_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__35));
v___x_1198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1197_);
lean_ctor_set(v___x_1198_, 1, v___x_1196_);
return v___x_1198_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__60(void){
_start:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1199_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__59, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__59_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__59);
v___x_1200_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__31, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__31_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__31);
v___x_1201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1200_);
lean_ctor_set(v___x_1201_, 1, v___x_1199_);
return v___x_1201_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__61(void){
_start:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1202_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__60, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__60_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__60);
v___x_1203_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__24, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__24_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__24);
v___x_1204_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1204_, 0, v___x_1203_);
lean_ctor_set(v___x_1204_, 1, v___x_1202_);
return v___x_1204_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__62(void){
_start:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1205_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__61, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__61_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__61);
v___x_1206_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__21, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__21);
v___x_1207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1206_);
lean_ctor_set(v___x_1207_, 1, v___x_1205_);
return v___x_1207_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__63(void){
_start:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1208_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__62, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__62_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__62);
v___x_1209_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__18));
v___x_1210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1209_);
lean_ctor_set(v___x_1210_, 1, v___x_1208_);
return v___x_1210_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__64(void){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1211_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__63, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__63_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__63);
v___x_1212_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__15, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__15);
v___x_1213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
lean_ctor_set(v___x_1213_, 1, v___x_1211_);
return v___x_1213_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__65(void){
_start:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1214_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__64, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__64_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__64);
v___x_1215_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__8, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__8);
v___x_1216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1215_);
lean_ctor_set(v___x_1216_, 1, v___x_1214_);
return v___x_1216_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__66(void){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1217_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__65, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__65_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__65);
v___x_1218_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__5, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__5);
v___x_1219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1218_);
lean_ctor_set(v___x_1219_, 1, v___x_1217_);
return v___x_1219_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__67(void){
_start:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1220_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__66, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__66_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__66);
v___x_1221_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_moneyCore___closed__2));
v___x_1222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1221_);
lean_ctor_set(v___x_1222_, 1, v___x_1220_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_moneyCore(lean_object* v_a_1223_){
_start:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___x_1224_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_moneyCore___closed__67, &lp_lean_x2dftml_LeanFtml_moneyCore___closed__67_once, _init_lp_lean_x2dftml_LeanFtml_moneyCore___closed__67);
v___x_1225_ = lp_lean_x2dftml_LeanFtml_altM(v___x_1224_, v_a_1223_);
return v___x_1225_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__4(void){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1235_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_degreeU___closed__3));
v___x_1236_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1235_);
return v___x_1236_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__5(void){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1237_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__4, &lp_lean_x2dftml_LeanFtml_degreeU___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__4);
v___x_1238_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1238_, 0, v___x_1237_);
return v___x_1238_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__7(void){
_start:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1240_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_degreeU___closed__6));
v___x_1241_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1240_);
return v___x_1241_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__8(void){
_start:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1242_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__7, &lp_lean_x2dftml_LeanFtml_degreeU___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__7);
v___x_1243_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_entM___boxed), 2, 1);
lean_closure_set(v___x_1243_, 0, v___x_1242_);
return v___x_1243_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__10(void){
_start:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1245_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_degreeU___closed__9));
v___x_1246_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1245_);
return v___x_1246_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__12(void){
_start:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1248_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_degreeU___closed__11));
v___x_1249_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1248_);
return v___x_1249_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__13(void){
_start:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1250_ = lean_box(0);
v___x_1251_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__12, &lp_lean_x2dftml_LeanFtml_degreeU___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__12);
v___x_1252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1251_);
lean_ctor_set(v___x_1252_, 1, v___x_1250_);
return v___x_1252_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__14(void){
_start:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1253_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__13, &lp_lean_x2dftml_LeanFtml_degreeU___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__13);
v___x_1254_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__10, &lp_lean_x2dftml_LeanFtml_degreeU___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__10);
v___x_1255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1254_);
lean_ctor_set(v___x_1255_, 1, v___x_1253_);
return v___x_1255_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__15(void){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1256_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__14, &lp_lean_x2dftml_LeanFtml_degreeU___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__14);
v___x_1257_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_xentM), 2, 1);
lean_closure_set(v___x_1257_, 0, v___x_1256_);
return v___x_1257_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__16(void){
_start:
{
lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1258_ = lean_box(0);
v___x_1259_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__15, &lp_lean_x2dftml_LeanFtml_degreeU___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__15);
v___x_1260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
lean_ctor_set(v___x_1260_, 1, v___x_1258_);
return v___x_1260_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__17(void){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1261_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__16, &lp_lean_x2dftml_LeanFtml_degreeU___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__16);
v___x_1262_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__8, &lp_lean_x2dftml_LeanFtml_degreeU___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__8);
v___x_1263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1262_);
lean_ctor_set(v___x_1263_, 1, v___x_1261_);
return v___x_1263_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__18(void){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1264_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__17, &lp_lean_x2dftml_LeanFtml_degreeU___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__17);
v___x_1265_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__5, &lp_lean_x2dftml_LeanFtml_degreeU___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__5);
v___x_1266_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1265_);
lean_ctor_set(v___x_1266_, 1, v___x_1264_);
return v___x_1266_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__19(void){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1267_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__18, &lp_lean_x2dftml_LeanFtml_degreeU___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__18);
v___x_1268_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_degreeU___closed__2));
v___x_1269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
lean_ctor_set(v___x_1269_, 1, v___x_1267_);
return v___x_1269_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__20(void){
_start:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1270_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__19, &lp_lean_x2dftml_LeanFtml_degreeU___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__19);
v___x_1271_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_altM), 2, 1);
lean_closure_set(v___x_1271_, 0, v___x_1270_);
return v___x_1271_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__22(void){
_start:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1273_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_degreeU___closed__21));
v___x_1274_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1273_);
return v___x_1274_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__23(void){
_start:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1275_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__22, &lp_lean_x2dftml_LeanFtml_degreeU___closed__22_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__22);
v___x_1276_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_classM___boxed), 2, 1);
lean_closure_set(v___x_1276_, 0, v___x_1275_);
return v___x_1276_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__24(void){
_start:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1277_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__23, &lp_lean_x2dftml_LeanFtml_degreeU___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__23);
v___x_1278_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_optM), 2, 1);
lean_closure_set(v___x_1278_, 0, v___x_1277_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_degreeU(lean_object* v_a_1279_){
_start:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1280_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__20, &lp_lean_x2dftml_LeanFtml_degreeU___closed__20_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__20);
v___x_1281_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_degreeU___closed__24, &lp_lean_x2dftml_LeanFtml_degreeU___closed__24_once, _init_lp_lean_x2dftml_LeanFtml_degreeU___closed__24);
v___x_1282_ = lp_lean_x2dftml_LeanFtml_seqM(v___x_1280_, v___x_1281_, v_a_1279_);
return v___x_1282_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__0(void){
_start:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1283_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_metricUnit), 1, 0);
v___x_1284_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_metricPrefix), 1, 0);
v___x_1285_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_seqM), 3, 2);
lean_closure_set(v___x_1285_, 0, v___x_1284_);
lean_closure_set(v___x_1285_, 1, v___x_1283_);
return v___x_1285_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__5(void){
_start:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1295_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__4));
v___x_1296_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1295_);
return v___x_1296_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__6(void){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1297_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__5, &lp_lean_x2dftml_LeanFtml_unitCands___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__5);
v___x_1298_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1298_, 0, v___x_1297_);
return v___x_1298_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__8(void){
_start:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1300_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__7));
v___x_1301_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1300_);
return v___x_1301_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__9(void){
_start:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1302_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__8, &lp_lean_x2dftml_LeanFtml_unitCands___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__8);
v___x_1303_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_entM___boxed), 2, 1);
lean_closure_set(v___x_1303_, 0, v___x_1302_);
return v___x_1303_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__11(void){
_start:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1305_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__10));
v___x_1306_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1305_);
return v___x_1306_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__13(void){
_start:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; 
v___x_1308_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__12));
v___x_1309_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1308_);
return v___x_1309_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__14(void){
_start:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1310_ = lean_box(0);
v___x_1311_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__13, &lp_lean_x2dftml_LeanFtml_unitCands___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__13);
v___x_1312_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1311_);
lean_ctor_set(v___x_1312_, 1, v___x_1310_);
return v___x_1312_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__15(void){
_start:
{
lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1313_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__14, &lp_lean_x2dftml_LeanFtml_unitCands___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__14);
v___x_1314_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__11, &lp_lean_x2dftml_LeanFtml_unitCands___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__11);
v___x_1315_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1314_);
lean_ctor_set(v___x_1315_, 1, v___x_1313_);
return v___x_1315_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__16(void){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1316_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__15, &lp_lean_x2dftml_LeanFtml_unitCands___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__15);
v___x_1317_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_xentM), 2, 1);
lean_closure_set(v___x_1317_, 0, v___x_1316_);
return v___x_1317_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__18(void){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__17));
v___x_1320_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1319_);
return v___x_1320_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__19(void){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1321_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__18, &lp_lean_x2dftml_LeanFtml_unitCands___closed__18_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__18);
v___x_1322_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1322_, 0, v___x_1321_);
return v___x_1322_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__20(void){
_start:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1323_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__19, &lp_lean_x2dftml_LeanFtml_unitCands___closed__19_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__19);
v___x_1324_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_optM), 2, 1);
lean_closure_set(v___x_1324_, 0, v___x_1323_);
return v___x_1324_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__21(void){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1325_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_moneyCore), 1, 0);
v___x_1326_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__20, &lp_lean_x2dftml_LeanFtml_unitCands___closed__20_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__20);
v___x_1327_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_seqM), 3, 2);
lean_closure_set(v___x_1327_, 0, v___x_1326_);
lean_closure_set(v___x_1327_, 1, v___x_1325_);
return v___x_1327_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__23(void){
_start:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1329_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__22));
v___x_1330_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1329_);
return v___x_1330_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__24(void){
_start:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1331_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__23, &lp_lean_x2dftml_LeanFtml_unitCands___closed__23_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__23);
v___x_1332_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1332_, 0, v___x_1331_);
return v___x_1332_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__26(void){
_start:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1334_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__25));
v___x_1335_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1334_);
return v___x_1335_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__27(void){
_start:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1336_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__26, &lp_lean_x2dftml_LeanFtml_unitCands___closed__26_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__26);
v___x_1337_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1337_, 0, v___x_1336_);
return v___x_1337_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__29(void){
_start:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1339_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__28));
v___x_1340_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1339_);
return v___x_1340_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__30(void){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1341_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__29, &lp_lean_x2dftml_LeanFtml_unitCands___closed__29_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__29);
v___x_1342_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1342_, 0, v___x_1341_);
return v___x_1342_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__32(void){
_start:
{
lean_object* v___x_1344_; lean_object* v___x_1345_; 
v___x_1344_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__31));
v___x_1345_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1344_);
return v___x_1345_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__33(void){
_start:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1346_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__32, &lp_lean_x2dftml_LeanFtml_unitCands___closed__32_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__32);
v___x_1347_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1347_, 0, v___x_1346_);
return v___x_1347_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__34(void){
_start:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1348_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__33, &lp_lean_x2dftml_LeanFtml_unitCands___closed__33_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__33);
v___x_1349_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__20, &lp_lean_x2dftml_LeanFtml_unitCands___closed__20_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__20);
v___x_1350_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_seqM), 3, 2);
lean_closure_set(v___x_1350_, 0, v___x_1349_);
lean_closure_set(v___x_1350_, 1, v___x_1348_);
return v___x_1350_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__36(void){
_start:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1352_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__35));
v___x_1353_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1352_);
return v___x_1353_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__37(void){
_start:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1354_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__36, &lp_lean_x2dftml_LeanFtml_unitCands___closed__36_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__36);
v___x_1355_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1355_, 0, v___x_1354_);
return v___x_1355_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__39(void){
_start:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1357_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__38));
v___x_1358_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1357_);
return v___x_1358_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__40(void){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1359_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__39, &lp_lean_x2dftml_LeanFtml_unitCands___closed__39_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__39);
v___x_1360_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1360_, 0, v___x_1359_);
return v___x_1360_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__42(void){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1362_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__41));
v___x_1363_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1362_);
return v___x_1363_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__43(void){
_start:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__42, &lp_lean_x2dftml_LeanFtml_unitCands___closed__42_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__42);
v___x_1365_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1365_, 0, v___x_1364_);
return v___x_1365_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__45(void){
_start:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1367_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__44));
v___x_1368_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1367_);
return v___x_1368_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__46(void){
_start:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1369_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__45, &lp_lean_x2dftml_LeanFtml_unitCands___closed__45_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__45);
v___x_1370_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1370_, 0, v___x_1369_);
return v___x_1370_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__48(void){
_start:
{
lean_object* v___x_1372_; lean_object* v___x_1373_; 
v___x_1372_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__47));
v___x_1373_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1372_);
return v___x_1373_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__49(void){
_start:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1374_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__48, &lp_lean_x2dftml_LeanFtml_unitCands___closed__48_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__48);
v___x_1375_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_classM___boxed), 2, 1);
lean_closure_set(v___x_1375_, 0, v___x_1374_);
return v___x_1375_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__51(void){
_start:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1377_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__50));
v___x_1378_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1377_);
return v___x_1378_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__52(void){
_start:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__51, &lp_lean_x2dftml_LeanFtml_unitCands___closed__51_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__51);
v___x_1380_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_classM___boxed), 2, 1);
lean_closure_set(v___x_1380_, 0, v___x_1379_);
return v___x_1380_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__54(void){
_start:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1382_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__53));
v___x_1383_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1382_);
return v___x_1383_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__55(void){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1384_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__54, &lp_lean_x2dftml_LeanFtml_unitCands___closed__54_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__54);
v___x_1385_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_classM___boxed), 2, 1);
lean_closure_set(v___x_1385_, 0, v___x_1384_);
return v___x_1385_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__56(void){
_start:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1386_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__55, &lp_lean_x2dftml_LeanFtml_unitCands___closed__55_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__55);
v___x_1387_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__52, &lp_lean_x2dftml_LeanFtml_unitCands___closed__52_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__52);
v___x_1388_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_seqM), 3, 2);
lean_closure_set(v___x_1388_, 0, v___x_1387_);
lean_closure_set(v___x_1388_, 1, v___x_1386_);
return v___x_1388_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__58(void){
_start:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1390_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__57));
v___x_1391_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1390_);
return v___x_1391_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__59(void){
_start:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1392_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__58, &lp_lean_x2dftml_LeanFtml_unitCands___closed__58_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__58);
v___x_1393_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1393_, 0, v___x_1392_);
return v___x_1393_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__61(void){
_start:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; 
v___x_1395_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__60));
v___x_1396_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1395_);
return v___x_1396_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__62(void){
_start:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1397_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__61, &lp_lean_x2dftml_LeanFtml_unitCands___closed__61_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__61);
v___x_1398_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_litM___boxed), 2, 1);
lean_closure_set(v___x_1398_, 0, v___x_1397_);
return v___x_1398_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__63(void){
_start:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1399_ = lean_box(0);
v___x_1400_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__62, &lp_lean_x2dftml_LeanFtml_unitCands___closed__62_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__62);
v___x_1401_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1400_);
lean_ctor_set(v___x_1401_, 1, v___x_1399_);
return v___x_1401_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__64(void){
_start:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1402_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__63, &lp_lean_x2dftml_LeanFtml_unitCands___closed__63_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__63);
v___x_1403_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__59, &lp_lean_x2dftml_LeanFtml_unitCands___closed__59_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__59);
v___x_1404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1403_);
lean_ctor_set(v___x_1404_, 1, v___x_1402_);
return v___x_1404_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__65(void){
_start:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1405_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__64, &lp_lean_x2dftml_LeanFtml_unitCands___closed__64_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__64);
v___x_1406_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__56, &lp_lean_x2dftml_LeanFtml_unitCands___closed__56_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__56);
v___x_1407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1406_);
lean_ctor_set(v___x_1407_, 1, v___x_1405_);
return v___x_1407_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__66(void){
_start:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1408_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__65, &lp_lean_x2dftml_LeanFtml_unitCands___closed__65_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__65);
v___x_1409_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__49, &lp_lean_x2dftml_LeanFtml_unitCands___closed__49_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__49);
v___x_1410_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1409_);
lean_ctor_set(v___x_1410_, 1, v___x_1408_);
return v___x_1410_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__67(void){
_start:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1411_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__66, &lp_lean_x2dftml_LeanFtml_unitCands___closed__66_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__66);
v___x_1412_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__46, &lp_lean_x2dftml_LeanFtml_unitCands___closed__46_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__46);
v___x_1413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
lean_ctor_set(v___x_1413_, 1, v___x_1411_);
return v___x_1413_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__68(void){
_start:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1414_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__67, &lp_lean_x2dftml_LeanFtml_unitCands___closed__67_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__67);
v___x_1415_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__43, &lp_lean_x2dftml_LeanFtml_unitCands___closed__43_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__43);
v___x_1416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1415_);
lean_ctor_set(v___x_1416_, 1, v___x_1414_);
return v___x_1416_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__69(void){
_start:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1417_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__68, &lp_lean_x2dftml_LeanFtml_unitCands___closed__68_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__68);
v___x_1418_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__40, &lp_lean_x2dftml_LeanFtml_unitCands___closed__40_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__40);
v___x_1419_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
lean_ctor_set(v___x_1419_, 1, v___x_1417_);
return v___x_1419_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__70(void){
_start:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1420_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__69, &lp_lean_x2dftml_LeanFtml_unitCands___closed__69_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__69);
v___x_1421_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__37, &lp_lean_x2dftml_LeanFtml_unitCands___closed__37_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__37);
v___x_1422_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
lean_ctor_set(v___x_1422_, 1, v___x_1420_);
return v___x_1422_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__71(void){
_start:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1423_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__70, &lp_lean_x2dftml_LeanFtml_unitCands___closed__70_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__70);
v___x_1424_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__34, &lp_lean_x2dftml_LeanFtml_unitCands___closed__34_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__34);
v___x_1425_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1424_);
lean_ctor_set(v___x_1425_, 1, v___x_1423_);
return v___x_1425_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__72(void){
_start:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1426_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__71, &lp_lean_x2dftml_LeanFtml_unitCands___closed__71_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__71);
v___x_1427_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__30, &lp_lean_x2dftml_LeanFtml_unitCands___closed__30_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__30);
v___x_1428_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1427_);
lean_ctor_set(v___x_1428_, 1, v___x_1426_);
return v___x_1428_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__73(void){
_start:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
v___x_1429_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__72, &lp_lean_x2dftml_LeanFtml_unitCands___closed__72_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__72);
v___x_1430_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__27, &lp_lean_x2dftml_LeanFtml_unitCands___closed__27_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__27);
v___x_1431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
lean_ctor_set(v___x_1431_, 1, v___x_1429_);
return v___x_1431_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__74(void){
_start:
{
lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1432_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__73, &lp_lean_x2dftml_LeanFtml_unitCands___closed__73_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__73);
v___x_1433_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__24, &lp_lean_x2dftml_LeanFtml_unitCands___closed__24_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__24);
v___x_1434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1433_);
lean_ctor_set(v___x_1434_, 1, v___x_1432_);
return v___x_1434_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__75(void){
_start:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1435_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__74, &lp_lean_x2dftml_LeanFtml_unitCands___closed__74_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__74);
v___x_1436_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_degreeU), 1, 0);
v___x_1437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1436_);
lean_ctor_set(v___x_1437_, 1, v___x_1435_);
return v___x_1437_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__76(void){
_start:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1438_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__75, &lp_lean_x2dftml_LeanFtml_unitCands___closed__75_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__75);
v___x_1439_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__21, &lp_lean_x2dftml_LeanFtml_unitCands___closed__21_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__21);
v___x_1440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1439_);
lean_ctor_set(v___x_1440_, 1, v___x_1438_);
return v___x_1440_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__77(void){
_start:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
v___x_1441_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__76, &lp_lean_x2dftml_LeanFtml_unitCands___closed__76_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__76);
v___x_1442_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__16, &lp_lean_x2dftml_LeanFtml_unitCands___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__16);
v___x_1443_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1442_);
lean_ctor_set(v___x_1443_, 1, v___x_1441_);
return v___x_1443_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__78(void){
_start:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1444_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__77, &lp_lean_x2dftml_LeanFtml_unitCands___closed__77_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__77);
v___x_1445_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__9, &lp_lean_x2dftml_LeanFtml_unitCands___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__9);
v___x_1446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1445_);
lean_ctor_set(v___x_1446_, 1, v___x_1444_);
return v___x_1446_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__79(void){
_start:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1447_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__78, &lp_lean_x2dftml_LeanFtml_unitCands___closed__78_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__78);
v___x_1448_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__6, &lp_lean_x2dftml_LeanFtml_unitCands___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__6);
v___x_1449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1448_);
lean_ctor_set(v___x_1449_, 1, v___x_1447_);
return v___x_1449_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__80(void){
_start:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1450_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__79, &lp_lean_x2dftml_LeanFtml_unitCands___closed__79_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__79);
v___x_1451_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_unitCands___closed__3));
v___x_1452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
lean_ctor_set(v___x_1452_, 1, v___x_1450_);
return v___x_1452_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__81(void){
_start:
{
lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1453_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__80, &lp_lean_x2dftml_LeanFtml_unitCands___closed__80_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__80);
v___x_1454_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_computerU), 1, 0);
v___x_1455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1454_);
lean_ctor_set(v___x_1455_, 1, v___x_1453_);
return v___x_1455_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__82(void){
_start:
{
lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; 
v___x_1456_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__81, &lp_lean_x2dftml_LeanFtml_unitCands___closed__81_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__81);
v___x_1457_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__0, &lp_lean_x2dftml_LeanFtml_unitCands___closed__0_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__0);
v___x_1458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1457_);
lean_ctor_set(v___x_1458_, 1, v___x_1456_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_unitCands(lean_object* v_a_1459_){
_start:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1460_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_unitCands___closed__82, &lp_lean_x2dftml_LeanFtml_unitCands___closed__82_once, _init_lp_lean_x2dftml_LeanFtml_unitCands___closed__82);
v___x_1461_ = lp_lean_x2dftml_LeanFtml_altM(v___x_1460_, v_a_1459_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_typoUnits_go_spec__0(lean_object* v_after_1462_, uint8_t v___x_1463_, uint8_t v___x_1464_, lean_object* v_x_1465_){
_start:
{
if (lean_obj_tag(v_x_1465_) == 0)
{
lean_object* v___x_1466_; 
v___x_1466_ = lean_box(0);
return v___x_1466_;
}
else
{
lean_object* v_head_1467_; lean_object* v_tail_1468_; uint8_t v___y_1470_; lean_object* v___x_1473_; 
v_head_1467_ = lean_ctor_get(v_x_1465_, 0);
lean_inc_n(v_head_1467_, 2);
v_tail_1468_ = lean_ctor_get(v_x_1465_, 1);
lean_inc(v_tail_1468_);
lean_dec_ref_known(v_x_1465_, 2);
v___x_1473_ = l_List_get_x3fInternal___redArg(v_after_1462_, v_head_1467_);
if (lean_obj_tag(v___x_1473_) == 0)
{
v___y_1470_ = v___x_1463_;
goto v___jp_1469_;
}
else
{
lean_object* v_val_1474_; uint8_t v___x_1475_; 
v_val_1474_ = lean_ctor_get(v___x_1473_, 0);
lean_inc(v_val_1474_);
lean_dec_ref_known(v___x_1473_, 1);
v___x_1475_ = lp_lean_x2dftml_LeanFtml_isAlnumB(v_val_1474_);
lean_dec(v_val_1474_);
if (v___x_1475_ == 0)
{
v___y_1470_ = v___x_1464_;
goto v___jp_1469_;
}
else
{
lean_dec(v_head_1467_);
v_x_1465_ = v_tail_1468_;
goto _start;
}
}
v___jp_1469_:
{
if (v___y_1470_ == 0)
{
lean_dec(v_head_1467_);
v_x_1465_ = v_tail_1468_;
goto _start;
}
else
{
lean_object* v___x_1472_; 
lean_dec(v_tail_1468_);
v___x_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1472_, 0, v_head_1467_);
return v___x_1472_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_typoUnits_go_spec__0___boxed(lean_object* v_after_1477_, lean_object* v___x_1478_, lean_object* v___x_1479_, lean_object* v_x_1480_){
_start:
{
uint8_t v___x_280__boxed_1481_; uint8_t v___x_281__boxed_1482_; lean_object* v_res_1483_; 
v___x_280__boxed_1481_ = lean_unbox(v___x_1478_);
v___x_281__boxed_1482_ = lean_unbox(v___x_1479_);
v_res_1483_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_typoUnits_go_spec__0(v_after_1477_, v___x_280__boxed_1481_, v___x_281__boxed_1482_, v_x_1480_);
lean_dec(v_after_1477_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoUnits_go(lean_object* v_ph_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_){
_start:
{
if (lean_obj_tag(v_a_1487_) == 0)
{
lean_dec(v_ph_1486_);
return v_a_1487_;
}
else
{
lean_object* v_head_1489_; lean_object* v_tail_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1523_; 
v_head_1489_ = lean_ctor_get(v_a_1487_, 0);
v_tail_1490_ = lean_ctor_get(v_a_1487_, 1);
v_isSharedCheck_1523_ = !lean_is_exclusive(v_a_1487_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1492_ = v_a_1487_;
v_isShared_1493_ = v_isSharedCheck_1523_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_tail_1490_);
lean_inc(v_head_1489_);
lean_dec(v_a_1487_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1523_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v_zero_1494_; uint8_t v_isZero_1495_; 
v_zero_1494_ = lean_unsigned_to_nat(0u);
v_isZero_1495_ = lean_nat_dec_eq(v_a_1488_, v_zero_1494_);
if (v_isZero_1495_ == 1)
{
lean_object* v___x_1496_; 
lean_del_object(v___x_1492_);
lean_dec(v_tail_1490_);
lean_dec(v_head_1489_);
lean_dec(v_ph_1486_);
v___x_1496_ = lean_box(0);
return v___x_1496_;
}
else
{
lean_object* v_one_1497_; lean_object* v_n_1498_; uint8_t v___x_1504_; 
v_one_1497_ = lean_unsigned_to_nat(1u);
v_n_1498_ = lean_nat_sub(v_a_1488_, v_one_1497_);
v___x_1504_ = lp_lean_x2dftml_LeanFtml_isDigitB(v_head_1489_);
if (v___x_1504_ == 0)
{
goto v___jp_1499_;
}
else
{
lean_object* v___x_1505_; lean_object* v___x_1506_; uint8_t v___x_1507_; 
v___x_1505_ = l_List_head_x3f___redArg(v_tail_1490_);
v___x_1506_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_typoUnits_go___closed__0));
v___x_1507_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_1505_, v___x_1506_);
lean_dec(v___x_1505_);
if (v___x_1507_ == 0)
{
goto v___jp_1499_;
}
else
{
lean_object* v_after_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; 
lean_del_object(v___x_1492_);
v_after_1508_ = l_List_drop___redArg(v_one_1497_, v_tail_1490_);
lean_inc(v_after_1508_);
v___x_1509_ = lp_lean_x2dftml_LeanFtml_unitCands(v_after_1508_);
v___x_1510_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_typoUnits_go_spec__0(v_after_1508_, v___x_1504_, v___x_1507_, v___x_1509_);
if (lean_obj_tag(v___x_1510_) == 0)
{
lean_object* v___x_1511_; lean_object* v___x_1512_; 
lean_dec(v_after_1508_);
v___x_1511_ = lp_lean_x2dftml_LeanFtml_typoUnits_go(v_ph_1486_, v_tail_1490_, v_n_1498_);
lean_dec(v_n_1498_);
v___x_1512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1512_, 0, v_head_1489_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
return v___x_1512_;
}
else
{
lean_object* v_val_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
lean_dec(v_tail_1490_);
v_val_1513_ = lean_ctor_get(v___x_1510_, 0);
lean_inc_n(v_val_1513_, 2);
lean_dec_ref_known(v___x_1510_, 1);
v___x_1514_ = lean_box(0);
v___x_1515_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1515_, 0, v_head_1489_);
lean_ctor_set(v___x_1515_, 1, v___x_1514_);
lean_inc(v_ph_1486_);
v___x_1516_ = l_List_appendTR___redArg(v___x_1515_, v_ph_1486_);
v___x_1517_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc(v_after_1508_);
v___x_1518_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_after_1508_, v_after_1508_, v_val_1513_, v___x_1517_);
v___x_1519_ = l_List_appendTR___redArg(v___x_1516_, v___x_1518_);
v___x_1520_ = l_List_drop___redArg(v_val_1513_, v_after_1508_);
lean_dec(v_after_1508_);
v___x_1521_ = lp_lean_x2dftml_LeanFtml_typoUnits_go(v_ph_1486_, v___x_1520_, v_n_1498_);
lean_dec(v_n_1498_);
v___x_1522_ = l_List_appendTR___redArg(v___x_1519_, v___x_1521_);
return v___x_1522_;
}
}
}
v___jp_1499_:
{
lean_object* v___x_1500_; lean_object* v___x_1502_; 
v___x_1500_ = lp_lean_x2dftml_LeanFtml_typoUnits_go(v_ph_1486_, v_tail_1490_, v_n_1498_);
lean_dec(v_n_1498_);
if (v_isShared_1493_ == 0)
{
lean_ctor_set(v___x_1492_, 1, v___x_1500_);
v___x_1502_ = v___x_1492_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_head_1489_);
lean_ctor_set(v_reuseFailAlloc_1503_, 1, v___x_1500_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoUnits_go___boxed(lean_object* v_ph_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = lp_lean_x2dftml_LeanFtml_typoUnits_go(v_ph_1524_, v_a_1525_, v_a_1526_);
lean_dec(v_a_1526_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typoUnits(lean_object* v_ph_1528_, lean_object* v_bs_1529_){
_start:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1530_ = l_List_lengthTR___redArg(v_bs_1529_);
v___x_1531_ = lean_unsigned_to_nat(1u);
v___x_1532_ = lean_nat_add(v___x_1530_, v___x_1531_);
lean_dec(v___x_1530_);
v___x_1533_ = lp_lean_x2dftml_LeanFtml_typoUnits_go(v_ph_1528_, v_bs_1529_, v___x_1532_);
lean_dec(v___x_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(lean_object* v_base_1534_, lean_object* v_k_1535_){
_start:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1536_ = lean_nat_add(v_base_1534_, v_k_1535_);
v___x_1537_ = lp_lean_x2dftml_LeanFtml_phBytes(v___x_1536_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__0___boxed(lean_object* v_base_1538_, lean_object* v_k_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(v_base_1538_, v_k_1539_);
lean_dec(v_k_1539_);
lean_dec(v_base_1538_);
return v_res_1540_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; 
v___x_1543_ = ((lean_object*)(lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0___closed__1));
v___x_1544_ = l_String_toListImpl(v___x_1543_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0(lean_object* v_a_1545_, lean_object* v_a_1546_){
_start:
{
if (lean_obj_tag(v_a_1545_) == 0)
{
lean_object* v___x_1547_; 
v___x_1547_ = l_List_reverse___redArg(v_a_1546_);
return v___x_1547_;
}
else
{
lean_object* v_head_1548_; lean_object* v_tail_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1565_; 
v_head_1548_ = lean_ctor_get(v_a_1545_, 0);
v_tail_1549_ = lean_ctor_get(v_a_1545_, 1);
v_isSharedCheck_1565_ = !lean_is_exclusive(v_a_1545_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1551_ = v_a_1545_;
v_isShared_1552_ = v_isSharedCheck_1565_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_tail_1549_);
lean_inc(v_head_1548_);
lean_dec(v_a_1545_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1565_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1560_; 
v___x_1553_ = ((lean_object*)(lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0___closed__0));
v___x_1554_ = lean_obj_once(&lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0___closed__2, &lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0___closed__2_once, _init_lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0___closed__2);
v___x_1555_ = l_String_toListImpl(v_head_1548_);
v___x_1556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1555_);
v___x_1557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1554_);
lean_ctor_set(v___x_1557_, 1, v___x_1556_);
v___x_1558_ = lean_box(0);
if (v_isShared_1552_ == 0)
{
lean_ctor_set(v___x_1551_, 1, v___x_1558_);
lean_ctor_set(v___x_1551_, 0, v___x_1557_);
v___x_1560_ = v___x_1551_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v___x_1557_);
lean_ctor_set(v_reuseFailAlloc_1564_, 1, v___x_1558_);
v___x_1560_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1553_);
lean_ctor_set(v___x_1561_, 1, v___x_1560_);
v___x_1562_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1561_);
lean_ctor_set(v___x_1562_, 1, v_a_1546_);
v_a_1545_ = v_tail_1549_;
v_a_1546_ = v___x_1562_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__24(void){
_start:
{
lean_object* v___x_1616_; lean_object* v_chars_1617_; lean_object* v___x_1618_; 
v___x_1616_ = lean_box(0);
v_chars_1617_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__23));
v___x_1618_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_typographyRule_spec__0(v_chars_1617_, v___x_1616_);
return v___x_1618_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__36(void){
_start:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1650_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__35));
v___x_1651_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1650_);
return v___x_1651_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__37(void){
_start:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___x_1652_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__8));
v___x_1653_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1652_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typographyRule___lam__1(lean_object* v_bs_1663_, lean_object* v_toks_1664_){
_start:
{
lean_object* v_base_1665_; lean_object* v___x_1666_; lean_object* v_toks_x27_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v_s1_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v_s2_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v_s3_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v_s4_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v_s5_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v_s6_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v_s7_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v_s8_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v_s9_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v_s10_1715_; lean_object* v___x_1716_; 
v_base_1665_ = l_List_lengthTR___redArg(v_toks_1664_);
v___x_1666_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__24, &lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__24_once, _init_lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__24);
v_toks_x27_1667_ = l_List_appendTR___redArg(v_toks_1664_, v___x_1666_);
v___x_1668_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__25));
v___x_1669_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__26));
v___x_1670_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__27));
v___x_1671_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__28));
v___x_1672_ = lean_unsigned_to_nat(0u);
v___x_1673_ = lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(v_base_1665_, v___x_1672_);
v___x_1674_ = lean_unsigned_to_nat(1u);
v___x_1675_ = lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(v_base_1665_, v___x_1674_);
v_s1_1676_ = lp_lean_x2dftml_LeanFtml_typoPair(v___x_1669_, v___x_1671_, v___x_1673_, v___x_1675_, v_bs_1663_);
v___x_1677_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__30));
v___x_1678_ = lean_unsigned_to_nat(2u);
v___x_1679_ = lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(v_base_1665_, v___x_1678_);
v___x_1680_ = lean_unsigned_to_nat(3u);
v___x_1681_ = lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(v_base_1665_, v___x_1680_);
v_s2_1682_ = lp_lean_x2dftml_LeanFtml_typoPair(v___x_1677_, v___x_1671_, v___x_1679_, v___x_1681_, v_s1_1676_);
v___x_1683_ = lean_unsigned_to_nat(4u);
v___x_1684_ = lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(v_base_1665_, v___x_1683_);
v___x_1685_ = lean_unsigned_to_nat(5u);
v___x_1686_ = lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(v_base_1665_, v___x_1685_);
v_s3_1687_ = lp_lean_x2dftml_LeanFtml_typoPair(v___x_1668_, v___x_1670_, v___x_1684_, v___x_1686_, v_s2_1682_);
v___x_1688_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__32));
v___x_1689_ = lean_unsigned_to_nat(6u);
v___x_1690_ = lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(v_base_1665_, v___x_1689_);
v_s4_1691_ = lp_lean_x2dftml_LeanFtml_replaceAllB(v___x_1688_, v___x_1690_, v_s3_1687_);
v___x_1692_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__34));
v___x_1693_ = lean_unsigned_to_nat(7u);
v___x_1694_ = lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(v_base_1665_, v___x_1693_);
v_s5_1695_ = lp_lean_x2dftml_LeanFtml_replaceAllB(v___x_1692_, v___x_1694_, v_s4_1691_);
v___x_1696_ = lean_unsigned_to_nat(8u);
v___x_1697_ = lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(v_base_1665_, v___x_1696_);
v_s6_1698_ = lp_lean_x2dftml_LeanFtml_typoNumSpace(v___x_1697_, v_s5_1695_);
v___x_1699_ = lean_unsigned_to_nat(9u);
v___x_1700_ = lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(v_base_1665_, v___x_1699_);
v_s7_1701_ = lp_lean_x2dftml_LeanFtml_typoUnits(v___x_1700_, v_s6_1698_);
v___x_1702_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__36, &lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__36_once, _init_lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__36);
v___x_1703_ = lean_unsigned_to_nat(10u);
v___x_1704_ = lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(v_base_1665_, v___x_1703_);
v___x_1705_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__37, &lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__37_once, _init_lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__37);
lean_inc(v___x_1704_);
v___x_1706_ = lp_lean_x2dftml_LeanFtml_replaceAllB(v___x_1705_, v___x_1704_, v_s7_1701_);
v_s8_1707_ = lp_lean_x2dftml_LeanFtml_replaceAllB(v___x_1702_, v___x_1704_, v___x_1706_);
v___x_1708_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__39));
v___x_1709_ = lean_unsigned_to_nat(11u);
v___x_1710_ = lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(v_base_1665_, v___x_1709_);
v_s9_1711_ = lp_lean_x2dftml_LeanFtml_replaceAllB(v___x_1708_, v___x_1710_, v_s8_1707_);
v___x_1712_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_typographyRule___lam__1___closed__40));
v___x_1713_ = lean_unsigned_to_nat(12u);
v___x_1714_ = lp_lean_x2dftml_LeanFtml_typographyRule___lam__0(v_base_1665_, v___x_1713_);
lean_dec(v_base_1665_);
v_s10_1715_ = lp_lean_x2dftml_LeanFtml_replaceAllB(v___x_1712_, v___x_1714_, v_s9_1711_);
v___x_1716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1716_, 0, v_s10_1715_);
lean_ctor_set(v___x_1716_, 1, v_toks_x27_1667_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_typographyRule(lean_object* v_st_1718_){
_start:
{
lean_object* v___f_1719_; lean_object* v___x_1720_; 
v___f_1719_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_typographyRule___closed__0));
v___x_1720_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1718_, v___f_1719_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropAfterPh_go(lean_object* v_ph_1721_, lean_object* v_a_1722_, uint8_t v_a_1723_, lean_object* v_a_1724_){
_start:
{
if (lean_obj_tag(v_a_1722_) == 0)
{
lean_dec(v_a_1724_);
lean_dec(v_ph_1721_);
return v_a_1722_;
}
else
{
lean_object* v_head_1725_; lean_object* v_tail_1726_; lean_object* v_zero_1727_; uint8_t v_isZero_1728_; 
v_head_1725_ = lean_ctor_get(v_a_1722_, 0);
v_tail_1726_ = lean_ctor_get(v_a_1722_, 1);
v_zero_1727_ = lean_unsigned_to_nat(0u);
v_isZero_1728_ = lean_nat_dec_eq(v_a_1724_, v_zero_1727_);
if (v_isZero_1728_ == 1)
{
lean_object* v___x_1729_; 
lean_dec_ref_known(v_a_1722_, 2);
lean_dec(v_a_1724_);
lean_dec(v_ph_1721_);
v___x_1729_ = lean_box(0);
return v___x_1729_;
}
else
{
lean_object* v_one_1730_; lean_object* v_n_1731_; 
v_one_1730_ = lean_unsigned_to_nat(1u);
v_n_1731_ = lean_nat_sub(v_a_1724_, v_one_1730_);
lean_dec(v_a_1724_);
if (v_a_1723_ == 0)
{
goto v___jp_1732_;
}
else
{
lean_object* v___x_1750_; uint8_t v___x_1751_; 
v___x_1750_ = lean_unsigned_to_nat(32u);
v___x_1751_ = lean_nat_dec_eq(v_head_1725_, v___x_1750_);
if (v___x_1751_ == 0)
{
lean_object* v___x_1752_; uint8_t v___x_1753_; 
v___x_1752_ = lean_unsigned_to_nat(9u);
v___x_1753_ = lean_nat_dec_eq(v_head_1725_, v___x_1752_);
if (v___x_1753_ == 0)
{
goto v___jp_1732_;
}
else
{
lean_inc(v_tail_1726_);
lean_dec_ref_known(v_a_1722_, 2);
v_a_1722_ = v_tail_1726_;
v_a_1724_ = v_n_1731_;
goto _start;
}
}
else
{
lean_inc(v_tail_1726_);
lean_dec_ref_known(v_a_1722_, 2);
v_a_1722_ = v_tail_1726_;
v_a_1724_ = v_n_1731_;
goto _start;
}
}
v___jp_1732_:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; uint8_t v___x_1736_; 
v___x_1733_ = l_List_lengthTR___redArg(v_ph_1721_);
v___x_1734_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc(v___x_1733_);
lean_inc_ref(v_a_1722_);
v___x_1735_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_1722_, v_a_1722_, v___x_1733_, v___x_1734_);
v___x_1736_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1735_, v_ph_1721_);
lean_dec(v___x_1735_);
if (v___x_1736_ == 0)
{
lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1744_; 
lean_inc(v_tail_1726_);
lean_inc(v_head_1725_);
lean_dec(v___x_1733_);
v_isSharedCheck_1744_ = !lean_is_exclusive(v_a_1722_);
if (v_isSharedCheck_1744_ == 0)
{
lean_object* v_unused_1745_; lean_object* v_unused_1746_; 
v_unused_1745_ = lean_ctor_get(v_a_1722_, 1);
lean_dec(v_unused_1745_);
v_unused_1746_ = lean_ctor_get(v_a_1722_, 0);
lean_dec(v_unused_1746_);
v___x_1738_ = v_a_1722_;
v_isShared_1739_ = v_isSharedCheck_1744_;
goto v_resetjp_1737_;
}
else
{
lean_dec(v_a_1722_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1744_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1740_; lean_object* v___x_1742_; 
v___x_1740_ = lp_lean_x2dftml_LeanFtml_dropAfterPh_go(v_ph_1721_, v_tail_1726_, v___x_1736_, v_n_1731_);
if (v_isShared_1739_ == 0)
{
lean_ctor_set(v___x_1738_, 1, v___x_1740_);
v___x_1742_ = v___x_1738_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_head_1725_);
lean_ctor_set(v_reuseFailAlloc_1743_, 1, v___x_1740_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
}
else
{
lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1747_ = l_List_drop___redArg(v___x_1733_, v_a_1722_);
lean_dec_ref_known(v_a_1722_, 2);
lean_inc(v_ph_1721_);
v___x_1748_ = lp_lean_x2dftml_LeanFtml_dropAfterPh_go(v_ph_1721_, v___x_1747_, v___x_1736_, v_n_1731_);
v___x_1749_ = l_List_appendTR___redArg(v_ph_1721_, v___x_1748_);
return v___x_1749_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropAfterPh_go___boxed(lean_object* v_ph_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_){
_start:
{
uint8_t v_a_233__boxed_1760_; lean_object* v_res_1761_; 
v_a_233__boxed_1760_ = lean_unbox(v_a_1758_);
v_res_1761_ = lp_lean_x2dftml_LeanFtml_dropAfterPh_go(v_ph_1756_, v_a_1757_, v_a_233__boxed_1760_, v_a_1759_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropAfterPh(lean_object* v_ph_1762_, lean_object* v_bs_1763_){
_start:
{
uint8_t v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1764_ = 0;
v___x_1765_ = l_List_lengthTR___redArg(v_bs_1763_);
v___x_1766_ = lean_unsigned_to_nat(1u);
v___x_1767_ = lean_nat_add(v___x_1765_, v___x_1766_);
lean_dec(v___x_1765_);
v___x_1768_ = lp_lean_x2dftml_LeanFtml_dropAfterPh_go(v_ph_1762_, v_bs_1763_, v___x_1764_, v___x_1767_);
return v___x_1768_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropBeforePh_go(lean_object* v_ph_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_){
_start:
{
if (lean_obj_tag(v_a_1770_) == 0)
{
lean_dec(v_a_1772_);
lean_dec(v_ph_1769_);
return v_a_1771_;
}
else
{
lean_object* v_head_1773_; lean_object* v_tail_1774_; lean_object* v_zero_1775_; uint8_t v_isZero_1776_; 
v_head_1773_ = lean_ctor_get(v_a_1770_, 0);
v_tail_1774_ = lean_ctor_get(v_a_1770_, 1);
v_zero_1775_ = lean_unsigned_to_nat(0u);
v_isZero_1776_ = lean_nat_dec_eq(v_a_1772_, v_zero_1775_);
if (v_isZero_1776_ == 1)
{
lean_object* v___x_1777_; 
lean_dec_ref_known(v_a_1770_, 2);
lean_dec(v_a_1772_);
lean_dec(v_a_1771_);
lean_dec(v_ph_1769_);
v___x_1777_ = lean_box(0);
return v___x_1777_;
}
else
{
lean_object* v_one_1778_; lean_object* v_n_1779_; lean_object* v___x_1785_; uint8_t v___x_1786_; 
v_one_1778_ = lean_unsigned_to_nat(1u);
v_n_1779_ = lean_nat_sub(v_a_1772_, v_one_1778_);
lean_dec(v_a_1772_);
v___x_1785_ = lean_unsigned_to_nat(32u);
v___x_1786_ = lean_nat_dec_eq(v_head_1773_, v___x_1785_);
if (v___x_1786_ == 0)
{
lean_object* v___x_1787_; uint8_t v___x_1788_; 
v___x_1787_ = lean_unsigned_to_nat(9u);
v___x_1788_ = lean_nat_dec_eq(v_head_1773_, v___x_1787_);
if (v___x_1788_ == 0)
{
lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; uint8_t v___x_1792_; 
v___x_1789_ = l_List_lengthTR___redArg(v_ph_1769_);
v___x_1790_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_replaceAllB_go___closed__0));
lean_inc(v___x_1789_);
lean_inc_ref(v_a_1770_);
v___x_1791_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_1770_, v_a_1770_, v___x_1789_, v___x_1790_);
v___x_1792_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1791_, v_ph_1769_);
lean_dec(v___x_1791_);
if (v___x_1792_ == 0)
{
lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1802_; 
lean_inc(v_tail_1774_);
lean_inc(v_head_1773_);
lean_dec(v___x_1789_);
v_isSharedCheck_1802_ = !lean_is_exclusive(v_a_1770_);
if (v_isSharedCheck_1802_ == 0)
{
lean_object* v_unused_1803_; lean_object* v_unused_1804_; 
v_unused_1803_ = lean_ctor_get(v_a_1770_, 1);
lean_dec(v_unused_1803_);
v_unused_1804_ = lean_ctor_get(v_a_1770_, 0);
lean_dec(v_unused_1804_);
v___x_1794_ = v_a_1770_;
v_isShared_1795_ = v_isSharedCheck_1802_;
goto v_resetjp_1793_;
}
else
{
lean_dec(v_a_1770_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1802_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1799_; 
v___x_1796_ = lean_box(0);
v___x_1797_ = lp_lean_x2dftml_LeanFtml_dropBeforePh_go(v_ph_1769_, v_tail_1774_, v___x_1796_, v_n_1779_);
if (v_isShared_1795_ == 0)
{
lean_ctor_set(v___x_1794_, 1, v___x_1797_);
v___x_1799_ = v___x_1794_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_head_1773_);
lean_ctor_set(v_reuseFailAlloc_1801_, 1, v___x_1797_);
v___x_1799_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
lean_object* v___x_1800_; 
v___x_1800_ = l_List_appendTR___redArg(v_a_1771_, v___x_1799_);
return v___x_1800_;
}
}
}
else
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; 
lean_dec(v_a_1771_);
v___x_1805_ = l_List_drop___redArg(v___x_1789_, v_a_1770_);
lean_dec_ref_known(v_a_1770_, 2);
v___x_1806_ = lean_box(0);
lean_inc(v_ph_1769_);
v___x_1807_ = lp_lean_x2dftml_LeanFtml_dropBeforePh_go(v_ph_1769_, v___x_1805_, v___x_1806_, v_n_1779_);
v___x_1808_ = l_List_appendTR___redArg(v_ph_1769_, v___x_1807_);
return v___x_1808_;
}
}
else
{
lean_inc(v_tail_1774_);
lean_inc(v_head_1773_);
lean_dec_ref_known(v_a_1770_, 2);
goto v___jp_1780_;
}
}
else
{
lean_inc(v_tail_1774_);
lean_inc(v_head_1773_);
lean_dec_ref_known(v_a_1770_, 2);
goto v___jp_1780_;
}
v___jp_1780_:
{
lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v___x_1781_ = lean_box(0);
v___x_1782_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1782_, 0, v_head_1773_);
lean_ctor_set(v___x_1782_, 1, v___x_1781_);
v___x_1783_ = l_List_appendTR___redArg(v_a_1771_, v___x_1782_);
v_a_1770_ = v_tail_1774_;
v_a_1771_ = v___x_1783_;
v_a_1772_ = v_n_1779_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_dropBeforePh(lean_object* v_ph_1809_, lean_object* v_bs_1810_){
_start:
{
lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1811_ = lean_box(0);
v___x_1812_ = l_List_lengthTR___redArg(v_bs_1810_);
v___x_1813_ = lean_unsigned_to_nat(1u);
v___x_1814_ = lean_nat_add(v___x_1812_, v___x_1813_);
lean_dec(v___x_1812_);
v___x_1815_ = lp_lean_x2dftml_LeanFtml_dropBeforePh_go(v_ph_1809_, v_bs_1810_, v___x_1811_, v___x_1814_);
return v___x_1815_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenColorPass(lean_object* v_bs_1817_, lean_object* v_x_1818_, lean_object* v_x_1819_){
_start:
{
if (lean_obj_tag(v_x_1818_) == 0)
{
lean_dec(v_x_1819_);
return v_bs_1817_;
}
else
{
lean_object* v_head_1820_; lean_object* v_tail_1821_; lean_object* v___y_1823_; lean_object* v_rule_1827_; lean_object* v_opts_1828_; lean_object* v___x_1829_; uint8_t v___x_1830_; 
v_head_1820_ = lean_ctor_get(v_x_1818_, 0);
v_tail_1821_ = lean_ctor_get(v_x_1818_, 1);
v_rule_1827_ = lean_ctor_get(v_head_1820_, 0);
v_opts_1828_ = lean_ctor_get(v_head_1820_, 1);
v___x_1829_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tightenColorPass___closed__0));
v___x_1830_ = lean_string_dec_eq(v_rule_1827_, v___x_1829_);
if (v___x_1830_ == 0)
{
v___y_1823_ = v_bs_1817_;
goto v___jp_1822_;
}
else
{
lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1831_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__3, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__3);
v___x_1832_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_1828_, v___x_1831_);
if (lean_obj_tag(v___x_1832_) == 1)
{
lean_object* v_val_1833_; 
v_val_1833_ = lean_ctor_get(v___x_1832_, 0);
lean_inc(v_val_1833_);
lean_dec_ref_known(v___x_1832_, 1);
if (lean_obj_tag(v_val_1833_) == 0)
{
lean_object* v_a_1834_; lean_object* v___x_1835_; uint8_t v___x_1836_; 
v_a_1834_ = lean_ctor_get(v_val_1833_, 0);
lean_inc(v_a_1834_);
lean_dec_ref_known(v_val_1833_, 1);
v___x_1835_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__5, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__5);
v___x_1836_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_a_1834_, v___x_1835_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; uint8_t v___x_1838_; 
v___x_1837_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__10, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__10);
v___x_1838_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_a_1834_, v___x_1837_);
lean_dec(v_a_1834_);
if (v___x_1838_ == 0)
{
v___y_1823_ = v_bs_1817_;
goto v___jp_1822_;
}
else
{
lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1839_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ttProcess___closed__0));
lean_inc(v_x_1819_);
v___x_1840_ = lp_lean_x2dftml_LeanFtml_phBytes(v_x_1819_);
lean_inc(v___x_1840_);
v___x_1841_ = l_List_appendTR___redArg(v___x_1839_, v___x_1840_);
v___x_1842_ = l_List_appendTR___redArg(v___x_1840_, v___x_1839_);
v___x_1843_ = lp_lean_x2dftml_LeanFtml_replaceAllB(v___x_1841_, v___x_1842_, v_bs_1817_);
lean_dec(v___x_1841_);
v___y_1823_ = v___x_1843_;
goto v___jp_1822_;
}
}
else
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
lean_dec(v_a_1834_);
lean_inc(v_x_1819_);
v___x_1844_ = lp_lean_x2dftml_LeanFtml_phBytes(v_x_1819_);
v___x_1845_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_ttProcess___closed__0));
lean_inc(v___x_1844_);
v___x_1846_ = l_List_appendTR___redArg(v___x_1844_, v___x_1845_);
v___x_1847_ = l_List_appendTR___redArg(v___x_1845_, v___x_1844_);
v___x_1848_ = lp_lean_x2dftml_LeanFtml_replaceAllB(v___x_1846_, v___x_1847_, v_bs_1817_);
lean_dec(v___x_1846_);
v___y_1823_ = v___x_1848_;
goto v___jp_1822_;
}
}
else
{
lean_dec(v_val_1833_);
v___y_1823_ = v_bs_1817_;
goto v___jp_1822_;
}
}
else
{
lean_dec(v___x_1832_);
v___y_1823_ = v_bs_1817_;
goto v___jp_1822_;
}
}
v___jp_1822_:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1824_ = lean_unsigned_to_nat(1u);
v___x_1825_ = lean_nat_add(v_x_1819_, v___x_1824_);
lean_dec(v_x_1819_);
v_bs_1817_ = v___y_1823_;
v_x_1818_ = v_tail_1821_;
v_x_1819_ = v___x_1825_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenColorPass___boxed(lean_object* v_bs_1849_, lean_object* v_x_1850_, lean_object* v_x_1851_){
_start:
{
lean_object* v_res_1852_; 
v_res_1852_ = lp_lean_x2dftml_LeanFtml_tightenColorPass(v_bs_1849_, v_x_1850_, v_x_1851_);
lean_dec(v_x_1850_);
return v_res_1852_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenEdgePass(lean_object* v_bs_1855_, lean_object* v_x_1856_, lean_object* v_x_1857_){
_start:
{
if (lean_obj_tag(v_x_1856_) == 0)
{
lean_dec(v_x_1857_);
return v_bs_1855_;
}
else
{
lean_object* v_head_1858_; lean_object* v_tail_1859_; lean_object* v___y_1861_; lean_object* v_rule_1865_; lean_object* v_opts_1866_; lean_object* v_ph_1867_; lean_object* v___x_1868_; uint8_t v___x_1869_; 
v_head_1858_ = lean_ctor_get(v_x_1856_, 0);
v_tail_1859_ = lean_ctor_get(v_x_1856_, 1);
v_rule_1865_ = lean_ctor_get(v_head_1858_, 0);
v_opts_1866_ = lean_ctor_get(v_head_1858_, 1);
lean_inc(v_x_1857_);
v_ph_1867_ = lp_lean_x2dftml_LeanFtml_phBytes(v_x_1857_);
v___x_1868_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tightenEdgePass___closed__0));
v___x_1869_ = lean_string_dec_eq(v_rule_1865_, v___x_1868_);
if (v___x_1869_ == 0)
{
lean_object* v___x_1870_; uint8_t v___x_1871_; 
v___x_1870_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tightenEdgePass___closed__1));
v___x_1871_ = lean_string_dec_eq(v_rule_1865_, v___x_1870_);
if (v___x_1871_ == 0)
{
lean_dec(v_ph_1867_);
v___y_1861_ = v_bs_1855_;
goto v___jp_1860_;
}
else
{
lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1872_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__3, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__3);
v___x_1873_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_1866_, v___x_1872_);
if (lean_obj_tag(v___x_1873_) == 1)
{
lean_object* v_val_1874_; 
v_val_1874_ = lean_ctor_get(v___x_1873_, 0);
lean_inc(v_val_1874_);
lean_dec_ref_known(v___x_1873_, 1);
if (lean_obj_tag(v_val_1874_) == 0)
{
lean_object* v_a_1875_; lean_object* v___x_1876_; uint8_t v___x_1877_; 
v_a_1875_ = lean_ctor_get(v_val_1874_, 0);
lean_inc(v_a_1875_);
lean_dec_ref_known(v_val_1874_, 1);
v___x_1876_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__5, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__5);
v___x_1877_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_a_1875_, v___x_1876_);
if (v___x_1877_ == 0)
{
lean_object* v___x_1878_; uint8_t v___x_1879_; 
v___x_1878_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_ttProcess___closed__10, &lp_lean_x2dftml_LeanFtml_ttProcess___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_ttProcess___closed__10);
v___x_1879_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_a_1875_, v___x_1878_);
lean_dec(v_a_1875_);
if (v___x_1879_ == 0)
{
lean_dec(v_ph_1867_);
v___y_1861_ = v_bs_1855_;
goto v___jp_1860_;
}
else
{
lean_object* v___x_1880_; 
v___x_1880_ = lp_lean_x2dftml_LeanFtml_dropBeforePh(v_ph_1867_, v_bs_1855_);
v___y_1861_ = v___x_1880_;
goto v___jp_1860_;
}
}
else
{
lean_object* v___x_1881_; 
lean_dec(v_a_1875_);
v___x_1881_ = lp_lean_x2dftml_LeanFtml_dropAfterPh(v_ph_1867_, v_bs_1855_);
v___y_1861_ = v___x_1881_;
goto v___jp_1860_;
}
}
else
{
lean_dec(v_val_1874_);
lean_dec(v_ph_1867_);
v___y_1861_ = v_bs_1855_;
goto v___jp_1860_;
}
}
else
{
lean_dec(v___x_1873_);
lean_dec(v_ph_1867_);
v___y_1861_ = v_bs_1855_;
goto v___jp_1860_;
}
}
}
else
{
lean_object* v___x_1882_; lean_object* v___x_1883_; 
lean_inc(v_ph_1867_);
v___x_1882_ = lp_lean_x2dftml_LeanFtml_dropBeforePh(v_ph_1867_, v_bs_1855_);
v___x_1883_ = lp_lean_x2dftml_LeanFtml_dropAfterPh(v_ph_1867_, v___x_1882_);
v___y_1861_ = v___x_1883_;
goto v___jp_1860_;
}
v___jp_1860_:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_1862_ = lean_unsigned_to_nat(1u);
v___x_1863_ = lean_nat_add(v_x_1857_, v___x_1862_);
lean_dec(v_x_1857_);
v_bs_1855_ = v___y_1861_;
v_x_1856_ = v_tail_1859_;
v_x_1857_ = v___x_1863_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenEdgePass___boxed(lean_object* v_bs_1884_, lean_object* v_x_1885_, lean_object* v_x_1886_){
_start:
{
lean_object* v_res_1887_; 
v_res_1887_ = lp_lean_x2dftml_LeanFtml_tightenEdgePass(v_bs_1884_, v_x_1885_, v_x_1886_);
lean_dec(v_x_1885_);
return v_res_1887_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_isEmptyRawTok___closed__2(void){
_start:
{
lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1890_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_isEmptyRawTok___closed__1));
v___x_1891_ = l_String_toListImpl(v___x_1890_);
return v___x_1891_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isEmptyRawTok(lean_object* v_toks_1892_, lean_object* v_id_1893_){
_start:
{
lean_object* v___x_1894_; 
v___x_1894_ = l_List_get_x3fInternal___redArg(v_toks_1892_, v_id_1893_);
if (lean_obj_tag(v___x_1894_) == 0)
{
uint8_t v___x_1895_; 
v___x_1895_ = 0;
return v___x_1895_;
}
else
{
lean_object* v_val_1896_; lean_object* v_rule_1897_; lean_object* v_opts_1898_; lean_object* v___x_1899_; uint8_t v___x_1900_; 
v_val_1896_ = lean_ctor_get(v___x_1894_, 0);
lean_inc(v_val_1896_);
lean_dec_ref_known(v___x_1894_, 1);
v_rule_1897_ = lean_ctor_get(v_val_1896_, 0);
lean_inc_ref(v_rule_1897_);
v_opts_1898_ = lean_ctor_get(v_val_1896_, 1);
lean_inc(v_opts_1898_);
lean_dec(v_val_1896_);
v___x_1899_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_isEmptyRawTok___closed__0));
v___x_1900_ = lean_string_dec_eq(v_rule_1897_, v___x_1899_);
lean_dec_ref(v_rule_1897_);
if (v___x_1900_ == 0)
{
lean_dec(v_opts_1898_);
return v___x_1900_;
}
else
{
lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1901_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_isEmptyRawTok___closed__2, &lp_lean_x2dftml_LeanFtml_isEmptyRawTok___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_isEmptyRawTok___closed__2);
v___x_1902_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_1898_, v___x_1901_);
lean_dec(v_opts_1898_);
if (lean_obj_tag(v___x_1902_) == 1)
{
lean_object* v_val_1903_; 
v_val_1903_ = lean_ctor_get(v___x_1902_, 0);
lean_inc(v_val_1903_);
lean_dec_ref_known(v___x_1902_, 1);
switch(lean_obj_tag(v_val_1903_))
{
case 0:
{
lean_object* v_a_1904_; uint8_t v___x_1905_; 
v_a_1904_ = lean_ctor_get(v_val_1903_, 0);
lean_inc(v_a_1904_);
lean_dec_ref_known(v_val_1903_, 1);
v___x_1905_ = l_List_isEmpty___redArg(v_a_1904_);
lean_dec(v_a_1904_);
return v___x_1905_;
}
case 6:
{
lean_object* v_a_1906_; uint8_t v___x_1907_; 
v_a_1906_ = lean_ctor_get(v_val_1903_, 0);
lean_inc(v_a_1906_);
lean_dec_ref_known(v_val_1903_, 1);
v___x_1907_ = l_List_isEmpty___redArg(v_a_1906_);
lean_dec(v_a_1906_);
return v___x_1907_;
}
case 5:
{
lean_object* v_a_1908_; uint8_t v___x_1909_; 
v_a_1908_ = lean_ctor_get(v_val_1903_, 0);
lean_inc(v_a_1908_);
lean_dec_ref_known(v_val_1903_, 1);
v___x_1909_ = l_List_isEmpty___redArg(v_a_1908_);
lean_dec(v_a_1908_);
return v___x_1909_;
}
default: 
{
uint8_t v___x_1910_; 
lean_dec(v_val_1903_);
v___x_1910_ = 0;
return v___x_1910_;
}
}
}
else
{
uint8_t v___x_1911_; 
lean_dec(v___x_1902_);
v___x_1911_ = 0;
return v___x_1911_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isEmptyRawTok___boxed(lean_object* v_toks_1912_, lean_object* v_id_1913_){
_start:
{
uint8_t v_res_1914_; lean_object* v_r_1915_; 
v_res_1914_ = lp_lean_x2dftml_LeanFtml_isEmptyRawTok(v_toks_1912_, v_id_1913_);
lean_dec(v_toks_1912_);
v_r_1915_ = lean_box(v_res_1914_);
return v_r_1915_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPh_go(lean_object* v_a_1916_, lean_object* v_a_1917_, lean_object* v_a_1918_){
_start:
{
if (lean_obj_tag(v_a_1916_) == 0)
{
lean_dec(v_a_1917_);
return v_a_1916_;
}
else
{
lean_object* v_head_1919_; lean_object* v_tail_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1954_; 
v_head_1919_ = lean_ctor_get(v_a_1916_, 0);
v_tail_1920_ = lean_ctor_get(v_a_1916_, 1);
v_isSharedCheck_1954_ = !lean_is_exclusive(v_a_1916_);
if (v_isSharedCheck_1954_ == 0)
{
v___x_1922_ = v_a_1916_;
v_isShared_1923_ = v_isSharedCheck_1954_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_tail_1920_);
lean_inc(v_head_1919_);
lean_dec(v_a_1916_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1954_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v_zero_1924_; uint8_t v_isZero_1925_; 
v_zero_1924_ = lean_unsigned_to_nat(0u);
v_isZero_1925_ = lean_nat_dec_eq(v_a_1917_, v_zero_1924_);
if (v_isZero_1925_ == 1)
{
lean_object* v___x_1926_; 
lean_del_object(v___x_1922_);
lean_dec(v_tail_1920_);
lean_dec(v_head_1919_);
lean_dec(v_a_1917_);
v___x_1926_ = lean_box(0);
return v___x_1926_;
}
else
{
lean_object* v_one_1927_; lean_object* v_n_1928_; lean_object* v___x_1939_; uint8_t v___x_1940_; 
v_one_1927_ = lean_unsigned_to_nat(1u);
v_n_1928_ = lean_nat_sub(v_a_1917_, v_one_1927_);
lean_dec(v_a_1917_);
v___x_1939_ = lean_unsigned_to_nat(255u);
v___x_1940_ = lean_nat_dec_eq(v_head_1919_, v___x_1939_);
if (v___x_1940_ == 0)
{
lean_object* v___x_1941_; lean_object* v___x_1942_; 
lean_del_object(v___x_1922_);
v___x_1941_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPh_go(v_tail_1920_, v_n_1928_, v_a_1918_);
v___x_1942_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1942_, 0, v_head_1919_);
lean_ctor_set(v___x_1942_, 1, v___x_1941_);
return v___x_1942_;
}
else
{
lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v_snd_1945_; 
lean_dec(v_head_1919_);
v___x_1943_ = lean_box(0);
lean_inc(v_tail_1920_);
v___x_1944_ = lp_lean_x2dftml_List_span_loop___at___00LeanFtml_stripEmptyRawPhNotes_go_spec__0(v_tail_1920_, v___x_1943_);
v_snd_1945_ = lean_ctor_get(v___x_1944_, 1);
lean_inc(v_snd_1945_);
if (lean_obj_tag(v_snd_1945_) == 1)
{
lean_object* v_fst_1946_; lean_object* v_head_1947_; lean_object* v_tail_1948_; uint8_t v___x_1949_; 
v_fst_1946_ = lean_ctor_get(v___x_1944_, 0);
lean_inc(v_fst_1946_);
lean_dec_ref(v___x_1944_);
v_head_1947_ = lean_ctor_get(v_snd_1945_, 0);
lean_inc(v_head_1947_);
v_tail_1948_ = lean_ctor_get(v_snd_1945_, 1);
lean_inc(v_tail_1948_);
lean_dec_ref_known(v_snd_1945_, 2);
v___x_1949_ = lean_nat_dec_eq(v_head_1947_, v___x_1939_);
lean_dec(v_head_1947_);
if (v___x_1949_ == 0)
{
lean_dec(v_tail_1948_);
lean_dec(v_fst_1946_);
lean_del_object(v___x_1922_);
goto v___jp_1935_;
}
else
{
uint8_t v___x_1950_; 
v___x_1950_ = l_List_isEmpty___redArg(v_fst_1946_);
if (v___x_1950_ == 0)
{
lean_object* v_id_1951_; uint8_t v___x_1952_; 
v_id_1951_ = lp_lean_x2dftml_List_foldl___at___00LeanFtml_readPlaceholder_spec__1(v_zero_1924_, v_fst_1946_);
lean_dec(v_fst_1946_);
v___x_1952_ = lp_lean_x2dftml_LeanFtml_isEmptyRawTok(v_a_1918_, v_id_1951_);
if (v___x_1952_ == 0)
{
lean_dec(v_tail_1948_);
goto v___jp_1929_;
}
else
{
lean_del_object(v___x_1922_);
lean_dec(v_tail_1920_);
v_a_1916_ = v_tail_1948_;
v_a_1917_ = v_n_1928_;
goto _start;
}
}
else
{
lean_dec(v_tail_1948_);
lean_dec(v_fst_1946_);
goto v___jp_1929_;
}
}
}
else
{
lean_dec(v_snd_1945_);
lean_dec_ref(v___x_1944_);
lean_del_object(v___x_1922_);
goto v___jp_1935_;
}
}
v___jp_1929_:
{
lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1933_; 
v___x_1930_ = lean_unsigned_to_nat(255u);
v___x_1931_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPh_go(v_tail_1920_, v_n_1928_, v_a_1918_);
if (v_isShared_1923_ == 0)
{
lean_ctor_set(v___x_1922_, 1, v___x_1931_);
lean_ctor_set(v___x_1922_, 0, v___x_1930_);
v___x_1933_ = v___x_1922_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v___x_1930_);
lean_ctor_set(v_reuseFailAlloc_1934_, 1, v___x_1931_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
v___jp_1935_:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1936_ = lean_unsigned_to_nat(255u);
v___x_1937_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPh_go(v_tail_1920_, v_n_1928_, v_a_1918_);
v___x_1938_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1936_);
lean_ctor_set(v___x_1938_, 1, v___x_1937_);
return v___x_1938_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPh_go___boxed(lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_){
_start:
{
lean_object* v_res_1958_; 
v_res_1958_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPh_go(v_a_1955_, v_a_1956_, v_a_1957_);
lean_dec(v_a_1957_);
return v_res_1958_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPh(lean_object* v_bs_1959_, lean_object* v_toks_1960_){
_start:
{
lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1961_ = l_List_lengthTR___redArg(v_bs_1959_);
v___x_1962_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPh_go(v_bs_1959_, v___x_1961_, v_toks_1960_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripEmptyRawPh___boxed(lean_object* v_bs_1963_, lean_object* v_toks_1964_){
_start:
{
lean_object* v_res_1965_; 
v_res_1965_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPh(v_bs_1963_, v_toks_1964_);
lean_dec(v_toks_1964_);
return v_res_1965_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_hasUfffdBytes(lean_object* v_x_1966_){
_start:
{
if (lean_obj_tag(v_x_1966_) == 0)
{
uint8_t v___x_1967_; 
v___x_1967_ = 0;
return v___x_1967_;
}
else
{
lean_object* v_head_1968_; lean_object* v_tail_1969_; lean_object* v___x_1970_; uint8_t v___x_1971_; 
v_head_1968_ = lean_ctor_get(v_x_1966_, 0);
lean_inc(v_head_1968_);
v_tail_1969_ = lean_ctor_get(v_x_1966_, 1);
lean_inc(v_tail_1969_);
lean_dec_ref_known(v_x_1966_, 2);
v___x_1970_ = lean_unsigned_to_nat(239u);
v___x_1971_ = lean_nat_dec_eq(v_head_1968_, v___x_1970_);
lean_dec(v_head_1968_);
if (v___x_1971_ == 0)
{
v_x_1966_ = v_tail_1969_;
goto _start;
}
else
{
if (lean_obj_tag(v_tail_1969_) == 1)
{
lean_object* v_head_1973_; lean_object* v_tail_1974_; lean_object* v___x_1975_; uint8_t v___x_1976_; 
v_head_1973_ = lean_ctor_get(v_tail_1969_, 0);
v_tail_1974_ = lean_ctor_get(v_tail_1969_, 1);
v___x_1975_ = lean_unsigned_to_nat(191u);
v___x_1976_ = lean_nat_dec_eq(v_head_1973_, v___x_1975_);
if (v___x_1976_ == 0)
{
v_x_1966_ = v_tail_1969_;
goto _start;
}
else
{
lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1992_; 
lean_inc(v_tail_1974_);
v_isSharedCheck_1992_ = !lean_is_exclusive(v_tail_1969_);
if (v_isSharedCheck_1992_ == 0)
{
lean_object* v_unused_1993_; lean_object* v_unused_1994_; 
v_unused_1993_ = lean_ctor_get(v_tail_1969_, 1);
lean_dec(v_unused_1993_);
v_unused_1994_ = lean_ctor_get(v_tail_1969_, 0);
lean_dec(v_unused_1994_);
v___x_1979_ = v_tail_1969_;
v_isShared_1980_ = v_isSharedCheck_1992_;
goto v_resetjp_1978_;
}
else
{
lean_dec(v_tail_1969_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1992_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
if (lean_obj_tag(v_tail_1974_) == 1)
{
lean_object* v_head_1981_; lean_object* v___x_1982_; uint8_t v___x_1983_; 
v_head_1981_ = lean_ctor_get(v_tail_1974_, 0);
v___x_1982_ = lean_unsigned_to_nat(189u);
v___x_1983_ = lean_nat_dec_eq(v_head_1981_, v___x_1982_);
if (v___x_1983_ == 0)
{
lean_object* v___x_1985_; 
if (v_isShared_1980_ == 0)
{
lean_ctor_set(v___x_1979_, 0, v___x_1975_);
v___x_1985_ = v___x_1979_;
goto v_reusejp_1984_;
}
else
{
lean_object* v_reuseFailAlloc_1987_; 
v_reuseFailAlloc_1987_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v___x_1975_);
lean_ctor_set(v_reuseFailAlloc_1987_, 1, v_tail_1974_);
v___x_1985_ = v_reuseFailAlloc_1987_;
goto v_reusejp_1984_;
}
v_reusejp_1984_:
{
v_x_1966_ = v___x_1985_;
goto _start;
}
}
else
{
lean_dec_ref_known(v_tail_1974_, 2);
lean_del_object(v___x_1979_);
return v___x_1983_;
}
}
else
{
lean_object* v___x_1989_; 
if (v_isShared_1980_ == 0)
{
lean_ctor_set(v___x_1979_, 0, v___x_1975_);
v___x_1989_ = v___x_1979_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v___x_1975_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v_tail_1974_);
v___x_1989_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
v_x_1966_ = v___x_1989_;
goto _start;
}
}
}
}
}
else
{
v_x_1966_ = v_tail_1969_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_hasUfffdBytes___boxed(lean_object* v_x_1996_){
_start:
{
uint8_t v_res_1997_; lean_object* v_r_1998_; 
v_res_1997_ = lp_lean_x2dftml_LeanFtml_hasUfffdBytes(v_x_1996_);
v_r_1998_ = lean_box(v_res_1997_);
return v_r_1998_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isDiscardedControl(lean_object* v_b_1999_){
_start:
{
lean_object* v___x_2010_; uint8_t v___x_2011_; 
v___x_2010_ = lean_unsigned_to_nat(8u);
v___x_2011_ = lean_nat_dec_le(v_b_1999_, v___x_2010_);
if (v___x_2011_ == 0)
{
lean_object* v___x_2012_; uint8_t v___x_2013_; 
v___x_2012_ = lean_unsigned_to_nat(11u);
v___x_2013_ = lean_nat_dec_le(v___x_2012_, v_b_1999_);
if (v___x_2013_ == 0)
{
goto v___jp_2005_;
}
else
{
lean_object* v___x_2014_; uint8_t v___x_2015_; 
v___x_2014_ = lean_unsigned_to_nat(12u);
v___x_2015_ = lean_nat_dec_le(v_b_1999_, v___x_2014_);
if (v___x_2015_ == 0)
{
goto v___jp_2005_;
}
else
{
return v___x_2015_;
}
}
}
else
{
return v___x_2011_;
}
v___jp_2000_:
{
lean_object* v___x_2001_; uint8_t v___x_2002_; 
v___x_2001_ = lean_unsigned_to_nat(28u);
v___x_2002_ = lean_nat_dec_le(v___x_2001_, v_b_1999_);
if (v___x_2002_ == 0)
{
return v___x_2002_;
}
else
{
lean_object* v___x_2003_; uint8_t v___x_2004_; 
v___x_2003_ = lean_unsigned_to_nat(31u);
v___x_2004_ = lean_nat_dec_le(v_b_1999_, v___x_2003_);
return v___x_2004_;
}
}
v___jp_2005_:
{
lean_object* v___x_2006_; uint8_t v___x_2007_; 
v___x_2006_ = lean_unsigned_to_nat(14u);
v___x_2007_ = lean_nat_dec_le(v___x_2006_, v_b_1999_);
if (v___x_2007_ == 0)
{
goto v___jp_2000_;
}
else
{
lean_object* v___x_2008_; uint8_t v___x_2009_; 
v___x_2008_ = lean_unsigned_to_nat(26u);
v___x_2009_ = lean_nat_dec_le(v_b_1999_, v___x_2008_);
if (v___x_2009_ == 0)
{
goto v___jp_2000_;
}
else
{
return v___x_2009_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isDiscardedControl___boxed(lean_object* v_b_2016_){
_start:
{
uint8_t v_res_2017_; lean_object* v_r_2018_; 
v_res_2017_ = lp_lean_x2dftml_LeanFtml_isDiscardedControl(v_b_2016_);
lean_dec(v_b_2016_);
v_r_2018_ = lean_box(v_res_2017_);
return v_r_2018_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_stripDiscardedControls_spec__0(lean_object* v_a_2019_, lean_object* v_a_2020_){
_start:
{
if (lean_obj_tag(v_a_2019_) == 0)
{
lean_object* v___x_2021_; 
v___x_2021_ = l_List_reverse___redArg(v_a_2020_);
return v___x_2021_;
}
else
{
lean_object* v_head_2022_; lean_object* v_tail_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2033_; 
v_head_2022_ = lean_ctor_get(v_a_2019_, 0);
v_tail_2023_ = lean_ctor_get(v_a_2019_, 1);
v_isSharedCheck_2033_ = !lean_is_exclusive(v_a_2019_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_2025_ = v_a_2019_;
v_isShared_2026_ = v_isSharedCheck_2033_;
goto v_resetjp_2024_;
}
else
{
lean_inc(v_tail_2023_);
lean_inc(v_head_2022_);
lean_dec(v_a_2019_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2033_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
uint8_t v___x_2027_; 
v___x_2027_ = lp_lean_x2dftml_LeanFtml_isDiscardedControl(v_head_2022_);
if (v___x_2027_ == 0)
{
lean_object* v___x_2029_; 
if (v_isShared_2026_ == 0)
{
lean_ctor_set(v___x_2025_, 1, v_a_2020_);
v___x_2029_ = v___x_2025_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_head_2022_);
lean_ctor_set(v_reuseFailAlloc_2031_, 1, v_a_2020_);
v___x_2029_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
v_a_2019_ = v_tail_2023_;
v_a_2020_ = v___x_2029_;
goto _start;
}
}
else
{
lean_del_object(v___x_2025_);
lean_dec(v_head_2022_);
v_a_2019_ = v_tail_2023_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_stripDiscardedControls(lean_object* v_bs_2034_){
_start:
{
lean_object* v___x_2035_; lean_object* v___x_2036_; 
v___x_2035_ = lean_box(0);
v___x_2036_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_stripDiscardedControls_spec__0(v_bs_2034_, v___x_2035_);
return v___x_2036_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tightenBytes_spec__0(lean_object* v_a_2037_, lean_object* v_a_2038_){
_start:
{
if (lean_obj_tag(v_a_2037_) == 0)
{
lean_object* v___x_2039_; 
v___x_2039_ = l_List_reverse___redArg(v_a_2038_);
return v___x_2039_;
}
else
{
lean_object* v_head_2040_; lean_object* v_tail_2041_; lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2052_; 
v_head_2040_ = lean_ctor_get(v_a_2037_, 0);
v_tail_2041_ = lean_ctor_get(v_a_2037_, 1);
v_isSharedCheck_2052_ = !lean_is_exclusive(v_a_2037_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_2043_ = v_a_2037_;
v_isShared_2044_ = v_isSharedCheck_2052_;
goto v_resetjp_2042_;
}
else
{
lean_inc(v_tail_2041_);
lean_inc(v_head_2040_);
lean_dec(v_a_2037_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2052_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2045_; uint8_t v___x_2046_; 
v___x_2045_ = lean_unsigned_to_nat(10u);
v___x_2046_ = lean_nat_dec_eq(v_head_2040_, v___x_2045_);
if (v___x_2046_ == 0)
{
lean_object* v___x_2048_; 
if (v_isShared_2044_ == 0)
{
lean_ctor_set(v___x_2043_, 1, v_a_2038_);
v___x_2048_ = v___x_2043_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v_head_2040_);
lean_ctor_set(v_reuseFailAlloc_2050_, 1, v_a_2038_);
v___x_2048_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
v_a_2037_ = v_tail_2041_;
v_a_2038_ = v___x_2048_;
goto _start;
}
}
else
{
lean_del_object(v___x_2043_);
lean_dec(v_head_2040_);
v_a_2037_ = v_tail_2041_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenBytes(lean_object* v_bs_2053_, lean_object* v_toks_2054_){
_start:
{
lean_object* v___y_2056_; uint8_t v___x_2065_; 
lean_inc(v_bs_2053_);
v___x_2065_ = lp_lean_x2dftml_LeanFtml_hasUfffdBytes(v_bs_2053_);
if (v___x_2065_ == 0)
{
lean_object* v___x_2066_; 
v___x_2066_ = lp_lean_x2dftml_LeanFtml_stripEmptyRawPh(v_bs_2053_, v_toks_2054_);
v___y_2056_ = v___x_2066_;
goto v___jp_2055_;
}
else
{
v___y_2056_ = v_bs_2053_;
goto v___jp_2055_;
}
v___jp_2055_:
{
lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v_s1_2059_; lean_object* v_s2_2060_; lean_object* v___x_2061_; lean_object* v_s3_2062_; lean_object* v_s4_2063_; lean_object* v___x_2064_; 
v___x_2057_ = lean_box(0);
v___x_2058_ = lp_lean_x2dftml_List_filterTR_loop___at___00LeanFtml_tightenBytes_spec__0(v___y_2056_, v___x_2057_);
v_s1_2059_ = lp_lean_x2dftml_LeanFtml_stripDiscardedControls(v___x_2058_);
v_s2_2060_ = lp_lean_x2dftml_LeanFtml_collapsePad(v_s1_2059_);
v___x_2061_ = lean_unsigned_to_nat(0u);
v_s3_2062_ = lp_lean_x2dftml_LeanFtml_tightenColorPass(v_s2_2060_, v_toks_2054_, v___x_2061_);
v_s4_2063_ = lp_lean_x2dftml_LeanFtml_collapsePad(v_s3_2062_);
v___x_2064_ = lp_lean_x2dftml_LeanFtml_tightenEdgePass(v_s4_2063_, v_toks_2054_, v___x_2061_);
return v___x_2064_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenBytes___boxed(lean_object* v_bs_2067_, lean_object* v_toks_2068_){
_start:
{
lean_object* v_res_2069_; 
v_res_2069_ = lp_lean_x2dftml_LeanFtml_tightenBytes(v_bs_2067_, v_toks_2068_);
lean_dec(v_toks_2068_);
return v_res_2069_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenRule___lam__0(lean_object* v_bs_2070_, lean_object* v_toks_2071_){
_start:
{
lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2072_ = lp_lean_x2dftml_LeanFtml_tightenBytes(v_bs_2070_, v_toks_2071_);
v___x_2073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2072_);
lean_ctor_set(v___x_2073_, 1, v_toks_2071_);
return v___x_2073_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_tightenRule(lean_object* v_st_2075_){
_start:
{
lean_object* v___f_2076_; lean_object* v___x_2077_; 
v___f_2076_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_tightenRule___closed__0));
v___x_2077_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_2075_, v___f_2076_);
return v___x_2077_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TokenState(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FrameRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_CodeRule(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_FormRawRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ModuleRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_NextRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_LinkRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_NotesRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_BlockRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ContainRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ListRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_TableRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_ParaRules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_Inline1Rules(uint8_t builtin);
lean_object* initialize_lean_x2dftml_LeanFtml_Inline2Rules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_Inline3Rules(uint8_t builtin) {
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
res = initialize_lean_x2dftml_LeanFtml_FormRawRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ModuleRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_NextRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_LinkRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_NotesRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_BlockRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ContainRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ListRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_TableRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_ParaRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_Inline1Rules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dftml_LeanFtml_Inline2Rules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
