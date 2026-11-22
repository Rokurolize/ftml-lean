// Lean compiler output
// Module: LeanFtml.Inline1Rules
// Imports: public import Init public meta import Init public import LeanFtml.TokenState public import LeanFtml.FrameRules public import LeanFtml.CodeRule public import LeanFtml.FormRawRules public import LeanFtml.ModuleRules public import LeanFtml.NextRules public import LeanFtml.LinkRules public import LeanFtml.NotesRules public import LeanFtml.BlockRules public import LeanFtml.ContainRules public import LeanFtml.ListRules public import LeanFtml.TableRules public import LeanFtml.ParaRules
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
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_claimTok(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_textVal(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_findSub(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
uint8_t l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_applyByteRule(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeSchemes_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_matchLitBytes(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_litBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_omGet(lean_object*, lean_object*);
uint8_t lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(lean_object*, lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_readPlaceholder(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_trimBytes(lean_object*);
lean_object* lp_lean_x2dftml_LeanFtml_asciiLower(lean_object*);
uint8_t lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_runOf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_runOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_lean_x2dftml_LeanFtml_runOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_lean_x2dftml_LeanFtml_runOf___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_runOf___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_runOf(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isAlphaB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isAlphaB___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pregScan_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pregScan_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pregScan(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_descrTail___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(93) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_descrTail___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_descrTail___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_descrTail(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lazyTail_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lazyTail(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_urlSegB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlSegB___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_urlTailB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlTailB___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_urlLibTailB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlLibTailB___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_urlFinalB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlFinalB___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "http://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "https://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ftp://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "gopher://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "news://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__4_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mailto:"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__5 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__5_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mms://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__6_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ssh://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__7_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "git://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__8_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sftp://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__9_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "svn://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__10 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__10_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "telnet://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__11_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cvs://"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__12 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__12_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__13_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__11_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__13_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__14 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__14_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__10_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__14_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__15 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__15_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__9_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__15_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__16 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__16_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__8_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__16_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__17 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__17_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__7_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__17_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__6_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__18_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__5_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__19_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__20_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__4_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__20_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__21 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__21_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__3_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__21_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__22 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__22_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__2_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__22_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__23 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__23_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__1_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__23_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__24 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__24_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__0_value),((lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__24_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__25 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__25_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__26;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeList;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlSchemeAt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlSchemeAt_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeAt(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_urlTailEnd_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_urlTailEnd_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_urlTailEnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_urlTailB___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_urlTailEnd___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlTailEnd___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlTailEnd(lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_urlBodyEnd_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_urlSegB___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_urlBodyEnd_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlBodyEnd_go___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlBodyEnd_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlBodyEnd_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlBodyEnd(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlMatchLen(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlAttempt(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Url"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "inline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__3_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__4;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__5;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__6;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "href"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__7 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__7_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__8;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__9 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__9_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__11 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__11_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__12;
static const lean_string_object lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_blank"};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__13 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__13_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__14;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__15;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__16;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__17;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(91) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__18 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__18_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(91) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__18_value)}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__19 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__19_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(124) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__20 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__20_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlInlineMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_urlInlinePass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_urlInlineMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_urlInlinePass___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlInlinePass___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlInlinePass(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_urlLibTailB___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(47) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlLibBodyEnd(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_urlDescrHrefs___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlDescrHrefs___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_urlDescrHrefs___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlDescrHrefs___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_urlDescrHrefs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_urlDescrHrefs___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_urlDescrHrefs___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlDescrHrefs___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlDescrHrefs(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(91) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__0_value)}};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__1 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__1_value;
static const lean_ctor_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(91) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__1_value)}};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__2 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__2_value;
static const lean_ctor_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(93) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__3 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__3_value;
static const lean_ctor_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__3_value)}};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__4 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__4_value;
static const lean_string_object lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "descr"};
static const lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__5 = (const lean_object*)&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__5_value;
static lean_once_cell_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__6;
static lean_once_cell_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__7;
static lean_once_cell_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__8;
static lean_once_cell_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__9;
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlDescrMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_urlRule___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_urlDescrMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_urlRule___lam__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlRule___lam__0___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_urlRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_urlRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_urlRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_urlRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlRule(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_emailLocalB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emailLocalB___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_emailDomB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emailDomB___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_atomChainLen_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_atomChainLen_go___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_atomChainLen_go___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_atomChainLen_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_atomChainLen_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_atomChainLen(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_emailMatchLen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_emailLocalB___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_emailMatchLen___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_emailMatchLen___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_emailMatchLen___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(64) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_emailMatchLen___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_emailMatchLen___closed__1_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_emailMatchLen___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_emailDomB___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_emailMatchLen___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_emailMatchLen___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emailMatchLen(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "email"};
static const lean_object* lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Email"};
static const lean_object* lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emailDescrMatch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emailStandaloneMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_emailRule___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_emailDescrMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_emailRule___lam__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_emailRule___lam__0___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_emailRule___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_emailStandaloneMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_emailRule___lam__0___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_emailRule___lam__0___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emailRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_emailRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_emailRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_emailRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_emailRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emailRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathEndScan_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathEndScan(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placeholdersOf_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placeholdersOf(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optStringBytes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllBytes_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllBytes_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllBytes(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllBytes___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_mathRepl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathRepl___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathRepl___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathRepl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "[[/code]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathRepl___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathRepl___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathRepl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathRepl___closed__2;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathRepl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Code"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathRepl___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathRepl___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathRepl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "[[code]]"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathRepl___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathRepl___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathRepl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathRepl___closed__5;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_mathRepl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathRepl___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathRepl___closed__6_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathRepl(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathRepl___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Freelink"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Raw"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__1_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Newline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__2_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Image"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__3 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__3_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Date"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__4_value;
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_mathSuppressRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathSuppressRule___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathResolveGo_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathResolveGo_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathResolveGo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathResolveGo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathResolve(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathResolve___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathinlineMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Mathinline"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathinlineMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathinlineMatch___closed__0_value;
static const lean_string_object lp_lean_x2dftml_LeanFtml_mathinlineMatch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "content"};
static const lean_object* lp_lean_x2dftml_LeanFtml_mathinlineMatch___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathinlineMatch___closed__1_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_mathinlineMatch___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_mathinlineMatch___closed__2;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathinlineMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_mathinlineRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_mathinlineMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_mathinlineRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathinlineRule___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_mathinlineRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_pregScan, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_lean_x2dftml_LeanFtml_mathinlineRule___closed__0_value)} };
static const lean_object* lp_lean_x2dftml_LeanFtml_mathinlineRule___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_mathinlineRule___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathinlineRule(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_iwSiteB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iwSiteB___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_iwPageB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iwPageB___boxed(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "wikipedia"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "wikipedia.pl"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "pl.wikipedia"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__4_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__5;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "google"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__6 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__6_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__7;
static const lean_string_object lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "dictionary"};
static const lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__8 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__8_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__9;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__10;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__11;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__12;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__13;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__14;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iwSiteTable;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_iwHead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_iwSiteB___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_iwHead___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iwHead___closed__0_value;
static const lean_ctor_object lp_lean_x2dftml_LeanFtml_iwHead___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(58) << 1) | 1))}};
static const lean_object* lp_lean_x2dftml_LeanFtml_iwHead___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iwHead___closed__1_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_iwHead___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_iwPageB___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_iwHead___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_iwHead___closed__2_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iwHead(lean_object*);
static const lean_string_object lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "site"};
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__0_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__1;
static const lean_string_object lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "page"};
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__2 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__2_value;
static lean_once_cell_t lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__3;
static const lean_string_object lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Interwiki"};
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__4 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__4_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_iwLabelB(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iwLabelB___boxed(lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_interwikiDescrMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_iwLabelB___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiDescrMatch___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiDescrMatch___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_interwikiDescrMatch(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_interwikiRule___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiRule___lam__0___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiRule___lam__0___closed__0_value;
static const lean_closure_object lp_lean_x2dftml_LeanFtml_interwikiRule___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_interwikiDescrMatch, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiRule___lam__0___closed__1 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiRule___lam__0___closed__1_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_interwikiRule___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dftml_LeanFtml_interwikiRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dftml_LeanFtml_interwikiRule___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dftml_LeanFtml_interwikiRule___closed__0 = (const lean_object*)&lp_lean_x2dftml_LeanFtml_interwikiRule___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_interwikiRule(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_runOf_spec__0(lean_object* v_p_1_, lean_object* v_l_2_, lean_object* v_a_3_, lean_object* v_a_4_){
_start:
{
if (lean_obj_tag(v_a_3_) == 0)
{
lean_dec_ref(v_a_4_);
lean_dec_ref(v_p_1_);
lean_inc(v_l_2_);
return v_l_2_;
}
else
{
lean_object* v_head_5_; lean_object* v_tail_6_; lean_object* v___x_7_; uint8_t v___x_8_; 
v_head_5_ = lean_ctor_get(v_a_3_, 0);
lean_inc_n(v_head_5_, 2);
v_tail_6_ = lean_ctor_get(v_a_3_, 1);
lean_inc(v_tail_6_);
lean_dec_ref_known(v_a_3_, 2);
lean_inc_ref(v_p_1_);
v___x_7_ = lean_apply_1(v_p_1_, v_head_5_);
v___x_8_ = lean_unbox(v___x_7_);
if (v___x_8_ == 0)
{
lean_object* v___x_9_; 
lean_dec(v_tail_6_);
lean_dec(v_head_5_);
lean_dec_ref(v_p_1_);
v___x_9_ = lean_array_to_list(v_a_4_);
return v___x_9_;
}
else
{
lean_object* v___x_10_; 
v___x_10_ = lean_array_push(v_a_4_, v_head_5_);
v_a_3_ = v_tail_6_;
v_a_4_ = v___x_10_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_runOf_spec__0___boxed(lean_object* v_p_12_, lean_object* v_l_13_, lean_object* v_a_14_, lean_object* v_a_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_runOf_spec__0(v_p_12_, v_l_13_, v_a_14_, v_a_15_);
lean_dec(v_l_13_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_runOf(lean_object* v_p_19_, lean_object* v_bs_20_){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_21_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc(v_bs_20_);
v___x_22_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_takeWhileTR_go___at___00LeanFtml_runOf_spec__0(v_p_19_, v_bs_20_, v_bs_20_, v___x_21_);
lean_dec(v_bs_20_);
v___x_23_ = l_List_lengthTR___redArg(v___x_22_);
lean_dec(v___x_22_);
return v___x_23_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_isAlphaB(lean_object* v_b_24_){
_start:
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = lean_unsigned_to_nat(65u);
v___x_31_ = lean_nat_dec_le(v___x_30_, v_b_24_);
if (v___x_31_ == 0)
{
goto v___jp_25_;
}
else
{
lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_32_ = lean_unsigned_to_nat(90u);
v___x_33_ = lean_nat_dec_le(v_b_24_, v___x_32_);
if (v___x_33_ == 0)
{
goto v___jp_25_;
}
else
{
return v___x_33_;
}
}
v___jp_25_:
{
lean_object* v___x_26_; uint8_t v___x_27_; 
v___x_26_ = lean_unsigned_to_nat(97u);
v___x_27_ = lean_nat_dec_le(v___x_26_, v_b_24_);
if (v___x_27_ == 0)
{
return v___x_27_;
}
else
{
lean_object* v___x_28_; uint8_t v___x_29_; 
v___x_28_ = lean_unsigned_to_nat(122u);
v___x_29_ = lean_nat_dec_le(v_b_24_, v___x_28_);
return v___x_29_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_isAlphaB___boxed(lean_object* v_b_34_){
_start:
{
uint8_t v_res_35_; lean_object* v_r_36_; 
v_res_35_ = lp_lean_x2dftml_LeanFtml_isAlphaB(v_b_34_);
lean_dec(v_b_34_);
v_r_36_ = lean_box(v_res_35_);
return v_r_36_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pregScan_go(lean_object* v_m_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_){
_start:
{
if (lean_obj_tag(v_a_38_) == 0)
{
lean_object* v___x_41_; 
lean_dec_ref(v_m_37_);
v___x_41_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_41_, 0, v_a_38_);
lean_ctor_set(v___x_41_, 1, v_a_39_);
return v___x_41_;
}
else
{
lean_object* v_head_42_; lean_object* v_tail_43_; lean_object* v_zero_44_; uint8_t v_isZero_45_; 
v_head_42_ = lean_ctor_get(v_a_38_, 0);
v_tail_43_ = lean_ctor_get(v_a_38_, 1);
v_zero_44_ = lean_unsigned_to_nat(0u);
v_isZero_45_ = lean_nat_dec_eq(v_a_40_, v_zero_44_);
if (v_isZero_45_ == 1)
{
lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_53_; 
lean_dec_ref(v_m_37_);
v_isSharedCheck_53_ = !lean_is_exclusive(v_a_38_);
if (v_isSharedCheck_53_ == 0)
{
lean_object* v_unused_54_; lean_object* v_unused_55_; 
v_unused_54_ = lean_ctor_get(v_a_38_, 1);
lean_dec(v_unused_54_);
v_unused_55_ = lean_ctor_get(v_a_38_, 0);
lean_dec(v_unused_55_);
v___x_47_ = v_a_38_;
v_isShared_48_ = v_isSharedCheck_53_;
goto v_resetjp_46_;
}
else
{
lean_dec(v_a_38_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_53_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_49_; lean_object* v___x_51_; 
v___x_49_ = lean_box(0);
if (v_isShared_48_ == 0)
{
lean_ctor_set_tag(v___x_47_, 0);
lean_ctor_set(v___x_47_, 1, v_a_39_);
lean_ctor_set(v___x_47_, 0, v___x_49_);
v___x_51_ = v___x_47_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_52_; 
v_reuseFailAlloc_52_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_52_, 0, v___x_49_);
lean_ctor_set(v_reuseFailAlloc_52_, 1, v_a_39_);
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
lean_object* v_one_56_; lean_object* v_n_57_; lean_object* v___x_58_; 
lean_inc(v_tail_43_);
lean_inc(v_head_42_);
v_one_56_ = lean_unsigned_to_nat(1u);
v_n_57_ = lean_nat_sub(v_a_40_, v_one_56_);
lean_inc_ref(v_m_37_);
lean_inc(v_a_39_);
v___x_58_ = lean_apply_2(v_m_37_, v_a_38_, v_a_39_);
if (lean_obj_tag(v___x_58_) == 0)
{
lean_object* v___x_59_; lean_object* v_fst_60_; lean_object* v_snd_61_; lean_object* v___x_63_; uint8_t v_isShared_64_; uint8_t v_isSharedCheck_69_; 
v___x_59_ = lp_lean_x2dftml_LeanFtml_pregScan_go(v_m_37_, v_tail_43_, v_a_39_, v_n_57_);
lean_dec(v_n_57_);
v_fst_60_ = lean_ctor_get(v___x_59_, 0);
v_snd_61_ = lean_ctor_get(v___x_59_, 1);
v_isSharedCheck_69_ = !lean_is_exclusive(v___x_59_);
if (v_isSharedCheck_69_ == 0)
{
v___x_63_ = v___x_59_;
v_isShared_64_ = v_isSharedCheck_69_;
goto v_resetjp_62_;
}
else
{
lean_inc(v_snd_61_);
lean_inc(v_fst_60_);
lean_dec(v___x_59_);
v___x_63_ = lean_box(0);
v_isShared_64_ = v_isSharedCheck_69_;
goto v_resetjp_62_;
}
v_resetjp_62_:
{
lean_object* v___x_65_; lean_object* v___x_67_; 
v___x_65_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_65_, 0, v_head_42_);
lean_ctor_set(v___x_65_, 1, v_fst_60_);
if (v_isShared_64_ == 0)
{
lean_ctor_set(v___x_63_, 0, v___x_65_);
v___x_67_ = v___x_63_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v___x_65_);
lean_ctor_set(v_reuseFailAlloc_68_, 1, v_snd_61_);
v___x_67_ = v_reuseFailAlloc_68_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
return v___x_67_;
}
}
}
else
{
lean_object* v_val_70_; lean_object* v_snd_71_; lean_object* v_fst_72_; lean_object* v_fst_73_; lean_object* v_snd_74_; lean_object* v___x_75_; lean_object* v_fst_76_; lean_object* v_snd_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_85_; 
lean_dec(v_tail_43_);
lean_dec(v_head_42_);
lean_dec(v_a_39_);
v_val_70_ = lean_ctor_get(v___x_58_, 0);
lean_inc(v_val_70_);
lean_dec_ref_known(v___x_58_, 1);
v_snd_71_ = lean_ctor_get(v_val_70_, 1);
lean_inc(v_snd_71_);
v_fst_72_ = lean_ctor_get(v_val_70_, 0);
lean_inc(v_fst_72_);
lean_dec(v_val_70_);
v_fst_73_ = lean_ctor_get(v_snd_71_, 0);
lean_inc(v_fst_73_);
v_snd_74_ = lean_ctor_get(v_snd_71_, 1);
lean_inc(v_snd_74_);
lean_dec(v_snd_71_);
v___x_75_ = lp_lean_x2dftml_LeanFtml_pregScan_go(v_m_37_, v_fst_72_, v_snd_74_, v_n_57_);
lean_dec(v_n_57_);
v_fst_76_ = lean_ctor_get(v___x_75_, 0);
v_snd_77_ = lean_ctor_get(v___x_75_, 1);
v_isSharedCheck_85_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_85_ == 0)
{
v___x_79_ = v___x_75_;
v_isShared_80_ = v_isSharedCheck_85_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_snd_77_);
lean_inc(v_fst_76_);
lean_dec(v___x_75_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_85_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_81_; lean_object* v___x_83_; 
v___x_81_ = l_List_appendTR___redArg(v_fst_73_, v_fst_76_);
if (v_isShared_80_ == 0)
{
lean_ctor_set(v___x_79_, 0, v___x_81_);
v___x_83_ = v___x_79_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v___x_81_);
lean_ctor_set(v_reuseFailAlloc_84_, 1, v_snd_77_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pregScan_go___boxed(lean_object* v_m_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = lp_lean_x2dftml_LeanFtml_pregScan_go(v_m_86_, v_a_87_, v_a_88_, v_a_89_);
lean_dec(v_a_89_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_pregScan(lean_object* v_m_91_, lean_object* v_bs_92_, lean_object* v_toks_93_){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_94_ = l_List_lengthTR___redArg(v_bs_92_);
v___x_95_ = lean_unsigned_to_nat(1u);
v___x_96_ = lean_nat_add(v___x_94_, v___x_95_);
lean_dec(v___x_94_);
v___x_97_ = lp_lean_x2dftml_LeanFtml_pregScan_go(v_m_91_, v_bs_92_, v_toks_93_, v___x_96_);
lean_dec(v___x_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_descrTail(lean_object* v_p_100_, lean_object* v_bs_101_){
_start:
{
lean_object* v_tLen_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
lean_inc(v_bs_101_);
v_tLen_102_ = lp_lean_x2dftml_LeanFtml_runOf(v_p_100_, v_bs_101_);
v___x_103_ = lean_unsigned_to_nat(0u);
v___x_104_ = lean_nat_dec_eq(v_tLen_102_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
lean_inc(v_tLen_102_);
v___x_105_ = l_List_get_x3fInternal___redArg(v_bs_101_, v_tLen_102_);
v___x_106_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_descrTail___closed__0));
v___x_107_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_105_, v___x_106_);
lean_dec(v___x_105_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; 
lean_dec(v_tLen_102_);
lean_dec(v_bs_101_);
v___x_108_ = lean_box(0);
return v___x_108_;
}
else
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_109_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc(v_tLen_102_);
lean_inc(v_bs_101_);
v___x_110_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_bs_101_, v_bs_101_, v_tLen_102_, v___x_109_);
v___x_111_ = lean_unsigned_to_nat(1u);
v___x_112_ = lean_nat_add(v_tLen_102_, v___x_111_);
lean_dec(v_tLen_102_);
v___x_113_ = l_List_drop___redArg(v___x_112_, v_bs_101_);
lean_dec(v_bs_101_);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_110_);
lean_ctor_set(v___x_114_, 1, v___x_113_);
v___x_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
return v___x_115_;
}
}
else
{
lean_object* v___x_116_; 
lean_dec(v_tLen_102_);
lean_dec(v_bs_101_);
v___x_116_ = lean_box(0);
return v___x_116_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lazyTail_go(lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_){
_start:
{
lean_object* v_zero_120_; uint8_t v_isZero_121_; 
v_zero_120_ = lean_unsigned_to_nat(0u);
v_isZero_121_ = lean_nat_dec_eq(v_a_119_, v_zero_120_);
if (v_isZero_121_ == 1)
{
lean_object* v___x_122_; 
lean_dec(v_a_119_);
lean_dec(v_a_118_);
lean_dec(v_a_117_);
v___x_122_ = lean_box(0);
return v___x_122_;
}
else
{
if (lean_obj_tag(v_a_117_) == 0)
{
lean_object* v___x_123_; 
lean_dec(v_a_119_);
lean_dec(v_a_118_);
v___x_123_ = lean_box(0);
return v___x_123_;
}
else
{
lean_object* v_head_124_; lean_object* v_tail_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_148_; 
v_head_124_ = lean_ctor_get(v_a_117_, 0);
v_tail_125_ = lean_ctor_get(v_a_117_, 1);
v_isSharedCheck_148_ = !lean_is_exclusive(v_a_117_);
if (v_isSharedCheck_148_ == 0)
{
v___x_127_ = v_a_117_;
v_isShared_128_ = v_isSharedCheck_148_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_tail_125_);
lean_inc(v_head_124_);
lean_dec(v_a_117_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_148_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_129_ = lean_unsigned_to_nat(10u);
v___x_130_ = lean_nat_dec_eq(v_head_124_, v___x_129_);
if (v___x_130_ == 0)
{
lean_object* v_one_131_; lean_object* v_n_132_; lean_object* v___x_133_; uint8_t v___x_134_; 
v_one_131_ = lean_unsigned_to_nat(1u);
v_n_132_ = lean_nat_sub(v_a_119_, v_one_131_);
lean_dec(v_a_119_);
v___x_133_ = lean_unsigned_to_nat(93u);
v___x_134_ = lean_nat_dec_eq(v_head_124_, v___x_133_);
if (v___x_134_ == 0)
{
lean_object* v___x_136_; 
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 1, v_a_118_);
v___x_136_ = v___x_127_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_head_124_);
lean_ctor_set(v_reuseFailAlloc_138_, 1, v_a_118_);
v___x_136_ = v_reuseFailAlloc_138_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
v_a_117_ = v_tail_125_;
v_a_118_ = v___x_136_;
v_a_119_ = v_n_132_;
goto _start;
}
}
else
{
uint8_t v___x_139_; 
lean_dec(v_head_124_);
v___x_139_ = l_List_isEmpty___redArg(v_a_118_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
lean_dec(v_n_132_);
lean_del_object(v___x_127_);
v___x_140_ = l_List_reverse___redArg(v_a_118_);
v___x_141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set(v___x_141_, 1, v_tail_125_);
v___x_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
return v___x_142_;
}
else
{
lean_object* v___x_144_; 
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 1, v_a_118_);
lean_ctor_set(v___x_127_, 0, v___x_133_);
v___x_144_ = v___x_127_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v___x_133_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v_a_118_);
v___x_144_ = v_reuseFailAlloc_146_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
v_a_117_ = v_tail_125_;
v_a_118_ = v___x_144_;
v_a_119_ = v_n_132_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_147_; 
lean_del_object(v___x_127_);
lean_dec(v_tail_125_);
lean_dec(v_head_124_);
lean_dec(v_a_119_);
lean_dec(v_a_118_);
v___x_147_ = lean_box(0);
return v___x_147_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_lazyTail(lean_object* v_bs_149_){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_150_ = lean_box(0);
v___x_151_ = l_List_lengthTR___redArg(v_bs_149_);
v___x_152_ = lean_unsigned_to_nat(1u);
v___x_153_ = lean_nat_add(v___x_151_, v___x_152_);
lean_dec(v___x_151_);
v___x_154_ = lp_lean_x2dftml_LeanFtml_lazyTail_go(v_bs_149_, v___x_150_, v___x_153_);
return v___x_154_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_urlSegB(lean_object* v_b_155_){
_start:
{
lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_156_ = lean_unsigned_to_nat(32u);
v___x_157_ = lean_nat_dec_eq(v_b_155_, v___x_156_);
if (v___x_157_ == 0)
{
lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_158_ = lean_unsigned_to_nat(47u);
v___x_159_ = lean_nat_dec_eq(v_b_155_, v___x_158_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; uint8_t v___x_161_; 
v___x_160_ = lean_unsigned_to_nat(34u);
v___x_161_ = lean_nat_dec_eq(v_b_155_, v___x_160_);
if (v___x_161_ == 0)
{
lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_162_ = lean_unsigned_to_nat(39u);
v___x_163_ = lean_nat_dec_eq(v_b_155_, v___x_162_);
if (v___x_163_ == 0)
{
lean_object* v___x_164_; uint8_t v___x_165_; 
v___x_164_ = lean_unsigned_to_nat(255u);
v___x_165_ = lean_nat_dec_eq(v_b_155_, v___x_164_);
if (v___x_165_ == 0)
{
uint8_t v___x_166_; 
v___x_166_ = 1;
return v___x_166_;
}
else
{
return v___x_163_;
}
}
else
{
return v___x_161_;
}
}
else
{
return v___x_159_;
}
}
else
{
return v___x_157_;
}
}
else
{
uint8_t v___x_167_; 
v___x_167_ = 0;
return v___x_167_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlSegB___boxed(lean_object* v_b_168_){
_start:
{
uint8_t v_res_169_; lean_object* v_r_170_; 
v_res_169_ = lp_lean_x2dftml_LeanFtml_urlSegB(v_b_168_);
lean_dec(v_b_168_);
v_r_170_ = lean_box(v_res_169_);
return v_r_170_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_urlTailB(lean_object* v_b_171_){
_start:
{
lean_object* v___x_172_; uint8_t v___x_173_; 
v___x_172_ = lean_unsigned_to_nat(32u);
v___x_173_ = lean_nat_dec_eq(v_b_171_, v___x_172_);
if (v___x_173_ == 0)
{
lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_174_ = lean_unsigned_to_nat(9u);
v___x_175_ = lean_nat_dec_eq(v_b_171_, v___x_174_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; uint8_t v___x_177_; 
v___x_176_ = lean_unsigned_to_nat(10u);
v___x_177_ = lean_nat_dec_eq(v_b_171_, v___x_176_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; uint8_t v___x_179_; 
v___x_178_ = lean_unsigned_to_nat(47u);
v___x_179_ = lean_nat_dec_eq(v_b_171_, v___x_178_);
if (v___x_179_ == 0)
{
lean_object* v___x_180_; uint8_t v___x_181_; 
v___x_180_ = lean_unsigned_to_nat(34u);
v___x_181_ = lean_nat_dec_eq(v_b_171_, v___x_180_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_182_ = lean_unsigned_to_nat(39u);
v___x_183_ = lean_nat_dec_eq(v_b_171_, v___x_182_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_184_ = lean_unsigned_to_nat(255u);
v___x_185_ = lean_nat_dec_eq(v_b_171_, v___x_184_);
if (v___x_185_ == 0)
{
uint8_t v___x_186_; 
v___x_186_ = 1;
return v___x_186_;
}
else
{
return v___x_183_;
}
}
else
{
return v___x_181_;
}
}
else
{
return v___x_179_;
}
}
else
{
return v___x_177_;
}
}
else
{
return v___x_175_;
}
}
else
{
return v___x_173_;
}
}
else
{
uint8_t v___x_187_; 
v___x_187_ = 0;
return v___x_187_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlTailB___boxed(lean_object* v_b_188_){
_start:
{
uint8_t v_res_189_; lean_object* v_r_190_; 
v_res_189_ = lp_lean_x2dftml_LeanFtml_urlTailB(v_b_188_);
lean_dec(v_b_188_);
v_r_190_ = lean_box(v_res_189_);
return v_r_190_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_urlLibTailB(lean_object* v_b_191_){
_start:
{
lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_192_ = lean_unsigned_to_nat(32u);
v___x_193_ = lean_nat_dec_eq(v_b_191_, v___x_192_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_194_ = lean_unsigned_to_nat(9u);
v___x_195_ = lean_nat_dec_eq(v_b_191_, v___x_194_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_196_ = lean_unsigned_to_nat(10u);
v___x_197_ = lean_nat_dec_eq(v_b_191_, v___x_196_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; uint8_t v___x_199_; 
v___x_198_ = lean_unsigned_to_nat(47u);
v___x_199_ = lean_nat_dec_eq(v_b_191_, v___x_198_);
if (v___x_199_ == 0)
{
lean_object* v___x_200_; uint8_t v___x_201_; 
v___x_200_ = lean_unsigned_to_nat(34u);
v___x_201_ = lean_nat_dec_eq(v_b_191_, v___x_200_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; uint8_t v___x_203_; 
v___x_202_ = lean_unsigned_to_nat(255u);
v___x_203_ = lean_nat_dec_eq(v_b_191_, v___x_202_);
if (v___x_203_ == 0)
{
uint8_t v___x_204_; 
v___x_204_ = 1;
return v___x_204_;
}
else
{
return v___x_201_;
}
}
else
{
return v___x_199_;
}
}
else
{
return v___x_197_;
}
}
else
{
return v___x_195_;
}
}
else
{
return v___x_193_;
}
}
else
{
uint8_t v___x_205_; 
v___x_205_ = 0;
return v___x_205_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlLibTailB___boxed(lean_object* v_b_206_){
_start:
{
uint8_t v_res_207_; lean_object* v_r_208_; 
v_res_207_ = lp_lean_x2dftml_LeanFtml_urlLibTailB(v_b_206_);
lean_dec(v_b_206_);
v_r_208_ = lean_box(v_res_207_);
return v_r_208_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_urlFinalB(lean_object* v_b_209_){
_start:
{
uint8_t v___x_225_; 
v___x_225_ = lp_lean_x2dftml_LeanFtml_isAlphaB(v_b_209_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; uint8_t v___x_227_; 
v___x_226_ = lean_unsigned_to_nat(48u);
v___x_227_ = lean_nat_dec_le(v___x_226_, v_b_209_);
if (v___x_227_ == 0)
{
goto v___jp_210_;
}
else
{
lean_object* v___x_228_; uint8_t v___x_229_; 
v___x_228_ = lean_unsigned_to_nat(57u);
v___x_229_ = lean_nat_dec_le(v_b_209_, v___x_228_);
if (v___x_229_ == 0)
{
goto v___jp_210_;
}
else
{
return v___x_229_;
}
}
}
else
{
return v___x_225_;
}
v___jp_210_:
{
lean_object* v___x_211_; uint8_t v___x_212_; 
v___x_211_ = lean_unsigned_to_nat(37u);
v___x_212_ = lean_nat_dec_eq(v_b_209_, v___x_211_);
if (v___x_212_ == 0)
{
lean_object* v___x_213_; uint8_t v___x_214_; 
v___x_213_ = lean_unsigned_to_nat(47u);
v___x_214_ = lean_nat_dec_eq(v_b_209_, v___x_213_);
if (v___x_214_ == 0)
{
lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_215_ = lean_unsigned_to_nat(63u);
v___x_216_ = lean_nat_dec_eq(v_b_209_, v___x_215_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; uint8_t v___x_218_; 
v___x_217_ = lean_unsigned_to_nat(61u);
v___x_218_ = lean_nat_dec_eq(v_b_209_, v___x_217_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; uint8_t v___x_220_; 
v___x_219_ = lean_unsigned_to_nat(38u);
v___x_220_ = lean_nat_dec_eq(v_b_209_, v___x_219_);
if (v___x_220_ == 0)
{
lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_221_ = lean_unsigned_to_nat(126u);
v___x_222_ = lean_nat_dec_eq(v_b_209_, v___x_221_);
if (v___x_222_ == 0)
{
lean_object* v___x_223_; uint8_t v___x_224_; 
v___x_223_ = lean_unsigned_to_nat(95u);
v___x_224_ = lean_nat_dec_eq(v_b_209_, v___x_223_);
return v___x_224_;
}
else
{
return v___x_222_;
}
}
else
{
return v___x_220_;
}
}
else
{
return v___x_218_;
}
}
else
{
return v___x_216_;
}
}
else
{
return v___x_214_;
}
}
else
{
return v___x_212_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlFinalB___boxed(lean_object* v_b_230_){
_start:
{
uint8_t v_res_231_; lean_object* v_r_232_; 
v_res_231_ = lp_lean_x2dftml_LeanFtml_urlFinalB(v_b_230_);
lean_dec(v_b_230_);
v_r_232_ = lean_box(v_res_231_);
return v_r_232_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__26(void){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_285_ = lean_box(0);
v___x_286_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__25));
v___x_287_ = lp_lean_x2dftml_List_mapTR_loop___at___00LeanFtml_iframeSchemes_spec__0(v___x_286_, v___x_285_);
return v___x_287_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_urlSchemeList(void){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__26, &lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__26_once, _init_lp_lean_x2dftml_LeanFtml_urlSchemeList___closed__26);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlSchemeAt_spec__0(lean_object* v_bs_289_, lean_object* v_x_290_){
_start:
{
if (lean_obj_tag(v_x_290_) == 0)
{
lean_object* v___x_291_; 
lean_dec(v_bs_289_);
v___x_291_ = lean_box(0);
return v___x_291_;
}
else
{
lean_object* v_head_292_; lean_object* v_tail_293_; lean_object* v___x_294_; 
v_head_292_ = lean_ctor_get(v_x_290_, 0);
v_tail_293_ = lean_ctor_get(v_x_290_, 1);
lean_inc(v_bs_289_);
v___x_294_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v_head_292_, v_bs_289_);
if (lean_obj_tag(v___x_294_) == 0)
{
v_x_290_ = v_tail_293_;
goto _start;
}
else
{
lean_dec(v_bs_289_);
return v___x_294_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlSchemeAt_spec__0___boxed(lean_object* v_bs_296_, lean_object* v_x_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlSchemeAt_spec__0(v_bs_296_, v_x_297_);
lean_dec(v_x_297_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlSchemeAt(lean_object* v_bs_299_){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_300_ = lp_lean_x2dftml_LeanFtml_urlSchemeList;
v___x_301_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlSchemeAt_spec__0(v_bs_299_, v___x_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_urlTailEnd_spec__0(lean_object* v_bs_302_, lean_object* v_x_303_){
_start:
{
if (lean_obj_tag(v_x_303_) == 0)
{
lean_object* v___x_304_; 
v___x_304_ = lean_box(0);
return v___x_304_;
}
else
{
lean_object* v_head_305_; lean_object* v_tail_306_; lean_object* v___x_307_; 
v_head_305_ = lean_ctor_get(v_x_303_, 0);
lean_inc_n(v_head_305_, 2);
v_tail_306_ = lean_ctor_get(v_x_303_, 1);
lean_inc(v_tail_306_);
lean_dec_ref_known(v_x_303_, 2);
v___x_307_ = l_List_get_x3fInternal___redArg(v_bs_302_, v_head_305_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_dec(v_head_305_);
v_x_303_ = v_tail_306_;
goto _start;
}
else
{
lean_object* v_val_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_318_; 
v_val_309_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_318_ == 0)
{
v___x_311_ = v___x_307_;
v_isShared_312_ = v_isSharedCheck_318_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_val_309_);
lean_dec(v___x_307_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_318_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
uint8_t v___x_313_; 
v___x_313_ = lp_lean_x2dftml_LeanFtml_urlFinalB(v_val_309_);
lean_dec(v_val_309_);
if (v___x_313_ == 0)
{
lean_del_object(v___x_311_);
lean_dec(v_head_305_);
v_x_303_ = v_tail_306_;
goto _start;
}
else
{
lean_object* v___x_316_; 
lean_dec(v_tail_306_);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 0, v_head_305_);
v___x_316_ = v___x_311_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_head_305_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_urlTailEnd_spec__0___boxed(lean_object* v_bs_319_, lean_object* v_x_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_urlTailEnd_spec__0(v_bs_319_, v_x_320_);
lean_dec(v_bs_319_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlTailEnd(lean_object* v_bs_323_){
_start:
{
lean_object* v___x_324_; lean_object* v_yLen_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_324_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlTailEnd___closed__0));
lean_inc(v_bs_323_);
v_yLen_325_ = lp_lean_x2dftml_LeanFtml_runOf(v___x_324_, v_bs_323_);
v___x_326_ = lean_unsigned_to_nat(1u);
v___x_327_ = lean_nat_add(v_yLen_325_, v___x_326_);
lean_dec(v_yLen_325_);
v___x_328_ = l_List_range(v___x_327_);
v___x_329_ = l_List_reverse___redArg(v___x_328_);
v___x_330_ = lp_lean_x2dftml_List_find_x3f___at___00LeanFtml_urlTailEnd_spec__0(v_bs_323_, v___x_329_);
lean_dec(v_bs_323_);
if (lean_obj_tag(v___x_330_) == 0)
{
return v___x_330_;
}
else
{
lean_object* v_val_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_339_; 
v_val_331_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_339_ == 0)
{
v___x_333_ = v___x_330_;
v_isShared_334_ = v_isSharedCheck_339_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_val_331_);
lean_dec(v___x_330_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_339_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_335_; lean_object* v___x_337_; 
v___x_335_ = lean_nat_add(v_val_331_, v___x_326_);
lean_dec(v_val_331_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v___x_335_);
v___x_337_ = v___x_333_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_335_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlBodyEnd_go(lean_object* v_bs_341_, lean_object* v_fuel_342_){
_start:
{
lean_object* v_zero_343_; uint8_t v_isZero_344_; 
v_zero_343_ = lean_unsigned_to_nat(0u);
v_isZero_344_ = lean_nat_dec_eq(v_fuel_342_, v_zero_343_);
if (v_isZero_344_ == 1)
{
lean_object* v___x_345_; 
v___x_345_ = lp_lean_x2dftml_LeanFtml_urlTailEnd(v_bs_341_);
return v___x_345_;
}
else
{
lean_object* v___x_346_; lean_object* v_runLen_347_; lean_object* v___x_348_; 
v___x_346_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlBodyEnd_go___closed__0));
lean_inc(v_bs_341_);
v_runLen_347_ = lp_lean_x2dftml_LeanFtml_runOf(v___x_346_, v_bs_341_);
lean_inc(v_runLen_347_);
v___x_348_ = l_List_get_x3fInternal___redArg(v_bs_341_, v_runLen_347_);
if (lean_obj_tag(v___x_348_) == 1)
{
lean_object* v_val_349_; lean_object* v___x_350_; uint8_t v___x_351_; 
v_val_349_ = lean_ctor_get(v___x_348_, 0);
lean_inc(v_val_349_);
lean_dec_ref_known(v___x_348_, 1);
v___x_350_ = lean_unsigned_to_nat(47u);
v___x_351_ = lean_nat_dec_eq(v_val_349_, v___x_350_);
lean_dec(v_val_349_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; 
lean_dec(v_runLen_347_);
v___x_352_ = lp_lean_x2dftml_LeanFtml_urlTailEnd(v_bs_341_);
return v___x_352_;
}
else
{
lean_object* v_one_353_; lean_object* v_n_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v_one_353_ = lean_unsigned_to_nat(1u);
v_n_354_ = lean_nat_sub(v_fuel_342_, v_one_353_);
v___x_355_ = lean_nat_add(v_runLen_347_, v_one_353_);
lean_dec(v_runLen_347_);
lean_inc(v___x_355_);
v___x_356_ = l_List_drop___redArg(v___x_355_, v_bs_341_);
v___x_357_ = lp_lean_x2dftml_LeanFtml_urlBodyEnd_go(v___x_356_, v_n_354_);
lean_dec(v_n_354_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v___x_358_; 
lean_dec(v___x_355_);
v___x_358_ = lp_lean_x2dftml_LeanFtml_urlTailEnd(v_bs_341_);
return v___x_358_;
}
else
{
lean_object* v_val_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_367_; 
lean_dec(v_bs_341_);
v_val_359_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_367_ == 0)
{
v___x_361_ = v___x_357_;
v_isShared_362_ = v_isSharedCheck_367_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_val_359_);
lean_dec(v___x_357_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_367_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_363_; lean_object* v___x_365_; 
v___x_363_ = lean_nat_add(v___x_355_, v_val_359_);
lean_dec(v_val_359_);
lean_dec(v___x_355_);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 0, v___x_363_);
v___x_365_ = v___x_361_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_363_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
}
}
else
{
lean_object* v___x_368_; 
lean_dec(v___x_348_);
lean_dec(v_runLen_347_);
v___x_368_ = lp_lean_x2dftml_LeanFtml_urlTailEnd(v_bs_341_);
return v___x_368_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlBodyEnd_go___boxed(lean_object* v_bs_369_, lean_object* v_fuel_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = lp_lean_x2dftml_LeanFtml_urlBodyEnd_go(v_bs_369_, v_fuel_370_);
lean_dec(v_fuel_370_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlBodyEnd(lean_object* v_bs_372_){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_373_ = l_List_lengthTR___redArg(v_bs_372_);
v___x_374_ = lean_unsigned_to_nat(1u);
v___x_375_ = lean_nat_add(v___x_373_, v___x_374_);
lean_dec(v___x_373_);
v___x_376_ = lp_lean_x2dftml_LeanFtml_urlBodyEnd_go(v_bs_372_, v___x_375_);
lean_dec(v___x_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlMatchLen(lean_object* v_bs_377_){
_start:
{
lean_object* v___x_378_; 
lean_inc(v_bs_377_);
v___x_378_ = lp_lean_x2dftml_LeanFtml_urlSchemeAt(v_bs_377_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v___x_379_; 
lean_dec(v_bs_377_);
v___x_379_ = lean_box(0);
return v___x_379_;
}
else
{
lean_object* v_val_380_; lean_object* v___x_381_; 
v_val_380_ = lean_ctor_get(v___x_378_, 0);
lean_inc_n(v_val_380_, 2);
lean_dec_ref_known(v___x_378_, 1);
v___x_381_ = lp_lean_x2dftml_LeanFtml_urlBodyEnd(v_val_380_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_dec(v_val_380_);
lean_dec(v_bs_377_);
return v___x_381_;
}
else
{
lean_object* v_val_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_393_; 
v_val_382_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_393_ == 0)
{
v___x_384_ = v___x_381_;
v_isShared_385_ = v_isSharedCheck_393_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_val_382_);
lean_dec(v___x_381_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_393_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_391_; 
v___x_386_ = l_List_lengthTR___redArg(v_bs_377_);
lean_dec(v_bs_377_);
v___x_387_ = l_List_lengthTR___redArg(v_val_380_);
lean_dec(v_val_380_);
v___x_388_ = lean_nat_sub(v___x_386_, v___x_387_);
lean_dec(v___x_387_);
lean_dec(v___x_386_);
v___x_389_ = lean_nat_add(v___x_388_, v_val_382_);
lean_dec(v_val_382_);
lean_dec(v___x_388_);
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 0, v___x_389_);
v___x_391_ = v___x_384_;
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
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlAttempt(lean_object* v_s_394_){
_start:
{
if (lean_obj_tag(v_s_394_) == 1)
{
lean_object* v_head_412_; lean_object* v_tail_413_; lean_object* v___x_414_; uint8_t v___x_415_; 
v_head_412_ = lean_ctor_get(v_s_394_, 0);
v_tail_413_ = lean_ctor_get(v_s_394_, 1);
v___x_414_ = lean_unsigned_to_nat(42u);
v___x_415_ = lean_nat_dec_eq(v_head_412_, v___x_414_);
if (v___x_415_ == 0)
{
goto v___jp_395_;
}
else
{
lean_object* v___x_416_; 
lean_inc(v_tail_413_);
v___x_416_ = lp_lean_x2dftml_LeanFtml_urlMatchLen(v_tail_413_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v___x_417_; 
lean_inc_ref(v_s_394_);
v___x_417_ = lp_lean_x2dftml_LeanFtml_urlMatchLen(v_s_394_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v___x_418_; 
lean_dec_ref_known(v_s_394_, 2);
v___x_418_ = lean_box(0);
return v___x_418_;
}
else
{
lean_object* v_val_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_440_; 
v_val_419_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_440_ == 0)
{
v___x_421_ = v___x_417_;
v_isShared_422_ = v_isSharedCheck_440_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_val_419_);
lean_dec(v___x_417_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_440_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_437_; 
v___x_423_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc(v_val_419_);
lean_inc_ref(v_s_394_);
v___x_424_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_394_, v_s_394_, v_val_419_, v___x_423_);
v_isSharedCheck_437_ = !lean_is_exclusive(v_s_394_);
if (v_isSharedCheck_437_ == 0)
{
lean_object* v_unused_438_; lean_object* v_unused_439_; 
v_unused_438_ = lean_ctor_get(v_s_394_, 1);
lean_dec(v_unused_438_);
v_unused_439_ = lean_ctor_get(v_s_394_, 0);
lean_dec(v_unused_439_);
v___x_426_ = v_s_394_;
v_isShared_427_ = v_isSharedCheck_437_;
goto v_resetjp_425_;
}
else
{
lean_dec(v_s_394_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_437_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
uint8_t v___x_428_; lean_object* v___x_429_; lean_object* v___x_431_; 
v___x_428_ = 0;
v___x_429_ = lean_box(v___x_428_);
if (v_isShared_427_ == 0)
{
lean_ctor_set_tag(v___x_426_, 0);
lean_ctor_set(v___x_426_, 1, v___x_429_);
lean_ctor_set(v___x_426_, 0, v_val_419_);
v___x_431_ = v___x_426_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_val_419_);
lean_ctor_set(v_reuseFailAlloc_436_, 1, v___x_429_);
v___x_431_ = v_reuseFailAlloc_436_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
lean_object* v___x_432_; lean_object* v___x_434_; 
v___x_432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_424_);
lean_ctor_set(v___x_432_, 1, v___x_431_);
if (v_isShared_422_ == 0)
{
lean_ctor_set(v___x_421_, 0, v___x_432_);
v___x_434_ = v___x_421_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v___x_432_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
}
}
else
{
lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_461_; 
lean_inc(v_tail_413_);
v_isSharedCheck_461_ = !lean_is_exclusive(v_s_394_);
if (v_isSharedCheck_461_ == 0)
{
lean_object* v_unused_462_; lean_object* v_unused_463_; 
v_unused_462_ = lean_ctor_get(v_s_394_, 1);
lean_dec(v_unused_462_);
v_unused_463_ = lean_ctor_get(v_s_394_, 0);
lean_dec(v_unused_463_);
v___x_442_ = v_s_394_;
v_isShared_443_ = v_isSharedCheck_461_;
goto v_resetjp_441_;
}
else
{
lean_dec(v_s_394_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_461_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v_val_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_460_; 
v_val_444_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_460_ == 0)
{
v___x_446_ = v___x_416_;
v_isShared_447_ = v_isSharedCheck_460_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_val_444_);
lean_dec(v___x_416_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_460_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_454_; 
v___x_448_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc(v_val_444_);
lean_inc(v_tail_413_);
v___x_449_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_413_, v_tail_413_, v_val_444_, v___x_448_);
lean_dec(v_tail_413_);
v___x_450_ = lean_unsigned_to_nat(1u);
v___x_451_ = lean_nat_add(v_val_444_, v___x_450_);
lean_dec(v_val_444_);
v___x_452_ = lean_box(v___x_415_);
if (v_isShared_443_ == 0)
{
lean_ctor_set_tag(v___x_442_, 0);
lean_ctor_set(v___x_442_, 1, v___x_452_);
lean_ctor_set(v___x_442_, 0, v___x_451_);
v___x_454_ = v___x_442_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v___x_451_);
lean_ctor_set(v_reuseFailAlloc_459_, 1, v___x_452_);
v___x_454_ = v_reuseFailAlloc_459_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
lean_object* v___x_455_; lean_object* v___x_457_; 
v___x_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_449_);
lean_ctor_set(v___x_455_, 1, v___x_454_);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 0, v___x_455_);
v___x_457_ = v___x_446_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v___x_455_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
}
}
}
}
}
}
}
else
{
goto v___jp_395_;
}
v___jp_395_:
{
lean_object* v___x_396_; 
lean_inc(v_s_394_);
v___x_396_ = lp_lean_x2dftml_LeanFtml_urlMatchLen(v_s_394_);
if (lean_obj_tag(v___x_396_) == 0)
{
lean_object* v___x_397_; 
lean_dec(v_s_394_);
v___x_397_ = lean_box(0);
return v___x_397_;
}
else
{
lean_object* v_val_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_411_; 
v_val_398_ = lean_ctor_get(v___x_396_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_411_ == 0)
{
v___x_400_ = v___x_396_;
v_isShared_401_ = v_isSharedCheck_411_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_val_398_);
lean_dec(v___x_396_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_411_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_402_; lean_object* v___x_403_; uint8_t v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_409_; 
v___x_402_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc(v_val_398_);
lean_inc(v_s_394_);
v___x_403_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_394_, v_s_394_, v_val_398_, v___x_402_);
lean_dec(v_s_394_);
v___x_404_ = 0;
v___x_405_ = lean_box(v___x_404_);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v_val_398_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
v___x_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_407_, 0, v___x_403_);
lean_ctor_set(v___x_407_, 1, v___x_406_);
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 0, v___x_407_);
v___x_409_ = v___x_400_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_407_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__2(void){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_466_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__1));
v___x_467_ = l_String_toListImpl(v___x_466_);
return v___x_467_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__4(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__3));
v___x_470_ = l_String_toListImpl(v___x_469_);
return v___x_470_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__5(void){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__4, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__4_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__4);
v___x_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_472_, 0, v___x_471_);
return v___x_472_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__6(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_473_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__5, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__5);
v___x_474_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__2, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__2);
v___x_475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
lean_ctor_set(v___x_475_, 1, v___x_473_);
return v___x_475_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__8(void){
_start:
{
lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_477_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__7));
v___x_478_ = l_String_toListImpl(v___x_477_);
return v___x_478_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10(void){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__9));
v___x_481_ = l_String_toListImpl(v___x_480_);
return v___x_481_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__12(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__11));
v___x_484_ = l_String_toListImpl(v___x_483_);
return v___x_484_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__14(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__13));
v___x_487_ = l_String_toListImpl(v___x_486_);
return v___x_487_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__15(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__14, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__14);
v___x_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
return v___x_489_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__16(void){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_490_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__15, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__15_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__15);
v___x_491_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__12, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__12);
v___x_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
lean_ctor_set(v___x_492_, 1, v___x_490_);
return v___x_492_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__17(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_493_ = lean_box(0);
v___x_494_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__16, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__16);
v___x_495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
lean_ctor_set(v___x_495_, 1, v___x_493_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult(lean_object* v_pfx_504_, lean_object* v_url_505_, uint8_t v_starred_506_, lean_object* v_toks_507_){
_start:
{
lean_object* v___y_509_; lean_object* v___y_510_; lean_object* v___y_511_; lean_object* v_fst_527_; lean_object* v_snd_528_; lean_object* v___y_541_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_545_ = lean_box(0);
v___x_546_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__19));
lean_inc(v_url_505_);
v___x_547_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_546_, v_url_505_);
if (lean_obj_tag(v___x_547_) == 0)
{
v_fst_527_ = v_url_505_;
v_snd_528_ = v___x_545_;
goto v___jp_526_;
}
else
{
lean_object* v_val_548_; lean_object* v___x_549_; uint8_t v___x_550_; 
v_val_548_ = lean_ctor_get(v___x_547_, 0);
lean_inc(v_val_548_);
lean_dec_ref_known(v___x_547_, 1);
v___x_549_ = lean_unsigned_to_nat(0u);
v___x_550_ = lean_nat_dec_lt(v___x_549_, v_val_548_);
if (v___x_550_ == 0)
{
v___y_541_ = v_val_548_;
goto v___jp_540_;
}
else
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; uint8_t v___x_555_; 
v___x_551_ = lean_unsigned_to_nat(1u);
v___x_552_ = lean_nat_sub(v_val_548_, v___x_551_);
lean_inc(v___x_552_);
v___x_553_ = l_List_get_x3fInternal___redArg(v_url_505_, v___x_552_);
v___x_554_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__20));
v___x_555_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_553_, v___x_554_);
lean_dec(v___x_553_);
if (v___x_555_ == 0)
{
lean_dec(v___x_552_);
v___y_541_ = v_val_548_;
goto v___jp_540_;
}
else
{
lean_dec(v_val_548_);
v___y_541_ = v___x_552_;
goto v___jp_540_;
}
}
}
v___jp_508_:
{
lean_object* v_opts_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v_fst_515_; lean_object* v_snd_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_525_; 
lean_inc(v___y_511_);
v_opts_512_ = l_List_appendTR___redArg(v___y_510_, v___y_511_);
v___x_513_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__0));
v___x_514_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_513_, v_opts_512_, v_toks_507_);
v_fst_515_ = lean_ctor_get(v___x_514_, 0);
v_snd_516_ = lean_ctor_get(v___x_514_, 1);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_514_);
if (v_isSharedCheck_525_ == 0)
{
v___x_518_ = v___x_514_;
v_isShared_519_ = v_isSharedCheck_525_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_snd_516_);
lean_inc(v_fst_515_);
lean_dec(v___x_514_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_525_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_523_; 
v___x_520_ = l_List_appendTR___redArg(v_pfx_504_, v_fst_515_);
v___x_521_ = l_List_appendTR___redArg(v___x_520_, v___y_509_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 0, v___x_521_);
v___x_523_ = v___x_518_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_521_);
lean_ctor_set(v_reuseFailAlloc_524_, 1, v_snd_516_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
v___jp_526_:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_529_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__6, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__6_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__6);
v___x_530_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__8, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__8);
v___x_531_ = lp_lean_x2dftml_LeanFtml_textVal(v_fst_527_);
lean_inc(v___x_531_);
v___x_532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_532_, 0, v___x_530_);
lean_ctor_set(v___x_532_, 1, v___x_531_);
v___x_533_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10);
v___x_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
lean_ctor_set(v___x_534_, 1, v___x_531_);
v___x_535_ = lean_box(0);
v___x_536_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_536_, 0, v___x_534_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
v___x_537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_537_, 0, v___x_532_);
lean_ctor_set(v___x_537_, 1, v___x_536_);
v___x_538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_538_, 0, v___x_529_);
lean_ctor_set(v___x_538_, 1, v___x_537_);
if (v_starred_506_ == 0)
{
v___y_509_ = v_snd_528_;
v___y_510_ = v___x_538_;
v___y_511_ = v___x_535_;
goto v___jp_508_;
}
else
{
lean_object* v___x_539_; 
v___x_539_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__17, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__17_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__17);
v___y_509_ = v_snd_528_;
v___y_510_ = v___x_538_;
v___y_511_ = v___x_539_;
goto v___jp_508_;
}
}
v___jp_540_:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_542_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc(v___y_541_);
lean_inc(v_url_505_);
v___x_543_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_url_505_, v_url_505_, v___y_541_, v___x_542_);
v___x_544_ = l_List_drop___redArg(v___y_541_, v_url_505_);
lean_dec(v_url_505_);
v_fst_527_ = v___x_543_;
v_snd_528_ = v___x_544_;
goto v___jp_526_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlInlineResult___boxed(lean_object* v_pfx_556_, lean_object* v_url_557_, lean_object* v_starred_558_, lean_object* v_toks_559_){
_start:
{
uint8_t v_starred_boxed_560_; lean_object* v_res_561_; 
v_starred_boxed_560_ = lean_unbox(v_starred_558_);
v_res_561_ = lp_lean_x2dftml_LeanFtml_urlInlineResult(v_pfx_556_, v_url_557_, v_starred_boxed_560_, v_toks_559_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlInlineMatch(lean_object* v_bs_562_, lean_object* v_toks_563_){
_start:
{
if (lean_obj_tag(v_bs_562_) == 0)
{
lean_object* v___x_564_; 
lean_dec(v_toks_563_);
v___x_564_ = lean_box(0);
return v___x_564_;
}
else
{
lean_object* v_head_565_; lean_object* v_tail_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_600_; 
v_head_565_ = lean_ctor_get(v_bs_562_, 0);
v_tail_566_ = lean_ctor_get(v_bs_562_, 1);
v_isSharedCheck_600_ = !lean_is_exclusive(v_bs_562_);
if (v_isSharedCheck_600_ == 0)
{
v___x_568_ = v_bs_562_;
v_isShared_569_ = v_isSharedCheck_600_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_tail_566_);
lean_inc(v_head_565_);
lean_dec(v_bs_562_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_600_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
uint8_t v___x_570_; 
v___x_570_ = lp_lean_x2dftml_LeanFtml_isAlphaB(v_head_565_);
if (v___x_570_ == 0)
{
lean_object* v___x_571_; 
lean_inc(v_tail_566_);
v___x_571_ = lp_lean_x2dftml_LeanFtml_urlAttempt(v_tail_566_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v___x_572_; 
lean_del_object(v___x_568_);
lean_dec(v_tail_566_);
lean_dec(v_head_565_);
lean_dec(v_toks_563_);
v___x_572_ = lean_box(0);
return v___x_572_;
}
else
{
lean_object* v_val_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_598_; 
v_val_573_ = lean_ctor_get(v___x_571_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_598_ == 0)
{
v___x_575_ = v___x_571_;
v_isShared_576_ = v_isSharedCheck_598_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_val_573_);
lean_dec(v___x_571_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_598_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v_snd_577_; lean_object* v_fst_578_; lean_object* v_fst_579_; lean_object* v_snd_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_597_; 
v_snd_577_ = lean_ctor_get(v_val_573_, 1);
lean_inc(v_snd_577_);
v_fst_578_ = lean_ctor_get(v_val_573_, 0);
lean_inc(v_fst_578_);
lean_dec(v_val_573_);
v_fst_579_ = lean_ctor_get(v_snd_577_, 0);
v_snd_580_ = lean_ctor_get(v_snd_577_, 1);
v_isSharedCheck_597_ = !lean_is_exclusive(v_snd_577_);
if (v_isSharedCheck_597_ == 0)
{
v___x_582_ = v_snd_577_;
v_isShared_583_ = v_isSharedCheck_597_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_snd_580_);
lean_inc(v_fst_579_);
lean_dec(v_snd_577_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_597_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_584_; lean_object* v___x_586_; 
v___x_584_ = lean_box(0);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 1, v___x_584_);
v___x_586_ = v___x_568_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_head_565_);
lean_ctor_set(v_reuseFailAlloc_596_, 1, v___x_584_);
v___x_586_ = v_reuseFailAlloc_596_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
uint8_t v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_591_; 
v___x_587_ = lean_unbox(v_snd_580_);
lean_dec(v_snd_580_);
v___x_588_ = lp_lean_x2dftml_LeanFtml_urlInlineResult(v___x_586_, v_fst_578_, v___x_587_, v_toks_563_);
v___x_589_ = l_List_drop___redArg(v_fst_579_, v_tail_566_);
lean_dec(v_tail_566_);
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 1, v___x_588_);
lean_ctor_set(v___x_582_, 0, v___x_589_);
v___x_591_ = v___x_582_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v___x_589_);
lean_ctor_set(v_reuseFailAlloc_595_, 1, v___x_588_);
v___x_591_ = v_reuseFailAlloc_595_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
lean_object* v___x_593_; 
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 0, v___x_591_);
v___x_593_ = v___x_575_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v___x_591_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_599_; 
lean_del_object(v___x_568_);
lean_dec(v_tail_566_);
lean_dec(v_head_565_);
lean_dec(v_toks_563_);
v___x_599_ = lean_box(0);
return v___x_599_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlInlinePass(lean_object* v_bs_602_, lean_object* v_toks_603_){
_start:
{
lean_object* v___x_604_; 
lean_inc(v_bs_602_);
v___x_604_ = lp_lean_x2dftml_LeanFtml_urlAttempt(v_bs_602_);
if (lean_obj_tag(v___x_604_) == 0)
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlInlinePass___closed__0));
v___x_606_ = lp_lean_x2dftml_LeanFtml_pregScan(v___x_605_, v_bs_602_, v_toks_603_);
return v___x_606_;
}
else
{
lean_object* v_val_607_; lean_object* v_snd_608_; lean_object* v_fst_609_; lean_object* v_fst_610_; lean_object* v_snd_611_; lean_object* v___x_612_; uint8_t v___x_613_; lean_object* v___x_614_; lean_object* v_fst_615_; lean_object* v_snd_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v_fst_620_; lean_object* v_snd_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_629_; 
v_val_607_ = lean_ctor_get(v___x_604_, 0);
lean_inc(v_val_607_);
lean_dec_ref_known(v___x_604_, 1);
v_snd_608_ = lean_ctor_get(v_val_607_, 1);
lean_inc(v_snd_608_);
v_fst_609_ = lean_ctor_get(v_val_607_, 0);
lean_inc(v_fst_609_);
lean_dec(v_val_607_);
v_fst_610_ = lean_ctor_get(v_snd_608_, 0);
lean_inc(v_fst_610_);
v_snd_611_ = lean_ctor_get(v_snd_608_, 1);
lean_inc(v_snd_611_);
lean_dec(v_snd_608_);
v___x_612_ = lean_box(0);
v___x_613_ = lean_unbox(v_snd_611_);
lean_dec(v_snd_611_);
v___x_614_ = lp_lean_x2dftml_LeanFtml_urlInlineResult(v___x_612_, v_fst_609_, v___x_613_, v_toks_603_);
v_fst_615_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_fst_615_);
v_snd_616_ = lean_ctor_get(v___x_614_, 1);
lean_inc(v_snd_616_);
lean_dec_ref(v___x_614_);
v___x_617_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlInlinePass___closed__0));
v___x_618_ = l_List_drop___redArg(v_fst_610_, v_bs_602_);
lean_dec(v_bs_602_);
v___x_619_ = lp_lean_x2dftml_LeanFtml_pregScan(v___x_617_, v___x_618_, v_snd_616_);
v_fst_620_ = lean_ctor_get(v___x_619_, 0);
v_snd_621_ = lean_ctor_get(v___x_619_, 1);
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_629_ == 0)
{
v___x_623_ = v___x_619_;
v_isShared_624_ = v_isSharedCheck_629_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_snd_621_);
lean_inc(v_fst_620_);
lean_dec(v___x_619_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_629_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_625_; lean_object* v___x_627_; 
v___x_625_ = l_List_appendTR___redArg(v_fst_615_, v_fst_620_);
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 0, v___x_625_);
v___x_627_ = v___x_623_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v___x_625_);
lean_ctor_set(v_reuseFailAlloc_628_, 1, v_snd_621_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go(lean_object* v_bs_633_, lean_object* v_fuel_634_){
_start:
{
lean_object* v_zero_635_; uint8_t v_isZero_636_; 
v_zero_635_ = lean_unsigned_to_nat(0u);
v_isZero_636_ = lean_nat_dec_eq(v_fuel_634_, v_zero_635_);
if (v_isZero_636_ == 1)
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go___closed__0));
v___x_638_ = lp_lean_x2dftml_LeanFtml_runOf(v___x_637_, v_bs_633_);
return v___x_638_;
}
else
{
lean_object* v___x_639_; lean_object* v_runLen_640_; lean_object* v___x_641_; lean_object* v___x_642_; uint8_t v___x_643_; 
v___x_639_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlBodyEnd_go___closed__0));
lean_inc(v_bs_633_);
v_runLen_640_ = lp_lean_x2dftml_LeanFtml_runOf(v___x_639_, v_bs_633_);
lean_inc(v_runLen_640_);
v___x_641_ = l_List_get_x3fInternal___redArg(v_bs_633_, v_runLen_640_);
v___x_642_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go___closed__1));
v___x_643_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_641_, v___x_642_);
lean_dec(v___x_641_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; lean_object* v___x_645_; 
lean_dec(v_runLen_640_);
v___x_644_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go___closed__0));
v___x_645_ = lp_lean_x2dftml_LeanFtml_runOf(v___x_644_, v_bs_633_);
return v___x_645_;
}
else
{
lean_object* v_one_646_; lean_object* v_n_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v_one_646_ = lean_unsigned_to_nat(1u);
v_n_647_ = lean_nat_sub(v_fuel_634_, v_one_646_);
v___x_648_ = lean_nat_add(v_runLen_640_, v_one_646_);
lean_dec(v_runLen_640_);
lean_inc(v___x_648_);
v___x_649_ = l_List_drop___redArg(v___x_648_, v_bs_633_);
lean_dec(v_bs_633_);
v___x_650_ = lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go(v___x_649_, v_n_647_);
lean_dec(v_n_647_);
v___x_651_ = lean_nat_add(v___x_648_, v___x_650_);
lean_dec(v___x_650_);
lean_dec(v___x_648_);
return v___x_651_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go___boxed(lean_object* v_bs_652_, lean_object* v_fuel_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go(v_bs_652_, v_fuel_653_);
lean_dec(v_fuel_653_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlLibBodyEnd(lean_object* v_bs_655_){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_656_ = l_List_lengthTR___redArg(v_bs_655_);
v___x_657_ = lean_unsigned_to_nat(1u);
v___x_658_ = lean_nat_add(v___x_656_, v___x_657_);
lean_dec(v___x_656_);
v___x_659_ = lp_lean_x2dftml_LeanFtml_urlLibBodyEnd_go(v_bs_655_, v___x_658_);
lean_dec(v___x_658_);
return v___x_659_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_urlDescrHrefs___lam__0(lean_object* v_b_660_){
_start:
{
uint8_t v___x_668_; 
v___x_668_ = lp_lean_x2dftml_LeanFtml_isAlphaB(v_b_660_);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; uint8_t v___x_670_; 
v___x_669_ = lean_unsigned_to_nat(48u);
v___x_670_ = lean_nat_dec_le(v___x_669_, v_b_660_);
if (v___x_670_ == 0)
{
goto v___jp_661_;
}
else
{
lean_object* v___x_671_; uint8_t v___x_672_; 
v___x_671_ = lean_unsigned_to_nat(57u);
v___x_672_ = lean_nat_dec_le(v_b_660_, v___x_671_);
if (v___x_672_ == 0)
{
goto v___jp_661_;
}
else
{
return v___x_672_;
}
}
}
else
{
return v___x_668_;
}
v___jp_661_:
{
lean_object* v___x_662_; uint8_t v___x_663_; 
v___x_662_ = lean_unsigned_to_nat(95u);
v___x_663_ = lean_nat_dec_eq(v_b_660_, v___x_662_);
if (v___x_663_ == 0)
{
lean_object* v___x_664_; uint8_t v___x_665_; 
v___x_664_ = lean_unsigned_to_nat(45u);
v___x_665_ = lean_nat_dec_eq(v_b_660_, v___x_664_);
if (v___x_665_ == 0)
{
lean_object* v___x_666_; uint8_t v___x_667_; 
v___x_666_ = lean_unsigned_to_nat(37u);
v___x_667_ = lean_nat_dec_eq(v_b_660_, v___x_666_);
return v___x_667_;
}
else
{
return v___x_665_;
}
}
else
{
return v___x_663_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlDescrHrefs___lam__0___boxed(lean_object* v_b_673_){
_start:
{
uint8_t v_res_674_; lean_object* v_r_675_; 
v_res_674_ = lp_lean_x2dftml_LeanFtml_urlDescrHrefs___lam__0(v_b_673_);
lean_dec(v_b_673_);
v_r_675_ = lean_box(v_res_674_);
return v_r_675_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_urlDescrHrefs___lam__1(uint8_t v___x_676_, lean_object* v_b_677_){
_start:
{
lean_object* v___x_678_; uint8_t v___x_679_; 
v___x_678_ = lean_unsigned_to_nat(32u);
v___x_679_ = lean_nat_dec_eq(v_b_677_, v___x_678_);
if (v___x_679_ == 0)
{
lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_680_ = lean_unsigned_to_nat(9u);
v___x_681_ = lean_nat_dec_eq(v_b_677_, v___x_680_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; uint8_t v___x_683_; 
v___x_682_ = lean_unsigned_to_nat(10u);
v___x_683_ = lean_nat_dec_eq(v_b_677_, v___x_682_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; uint8_t v___x_685_; 
v___x_684_ = lean_unsigned_to_nat(34u);
v___x_685_ = lean_nat_dec_eq(v_b_677_, v___x_684_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; uint8_t v___x_687_; 
v___x_686_ = lean_unsigned_to_nat(39u);
v___x_687_ = lean_nat_dec_eq(v_b_677_, v___x_686_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; uint8_t v___x_689_; 
v___x_688_ = lean_unsigned_to_nat(255u);
v___x_689_ = lean_nat_dec_eq(v_b_677_, v___x_688_);
if (v___x_689_ == 0)
{
return v___x_676_;
}
else
{
return v___x_687_;
}
}
else
{
return v___x_685_;
}
}
else
{
return v___x_683_;
}
}
else
{
return v___x_681_;
}
}
else
{
return v___x_679_;
}
}
else
{
uint8_t v___x_690_; 
v___x_690_ = 0;
return v___x_690_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlDescrHrefs___lam__1___boxed(lean_object* v___x_691_, lean_object* v_b_692_){
_start:
{
uint8_t v___x_898__boxed_693_; uint8_t v_res_694_; lean_object* v_r_695_; 
v___x_898__boxed_693_ = lean_unbox(v___x_691_);
v_res_694_ = lp_lean_x2dftml_LeanFtml_urlDescrHrefs___lam__1(v___x_898__boxed_693_, v_b_692_);
lean_dec(v_b_692_);
v_r_695_ = lean_box(v_res_694_);
return v_r_695_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlDescrHrefs(lean_object* v_s_697_){
_start:
{
lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_705_; lean_object* v___y_706_; lean_object* v___y_709_; lean_object* v___y_710_; lean_object* v___y_732_; lean_object* v___f_734_; lean_object* v___y_736_; lean_object* v___x_749_; 
v___f_734_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlDescrHrefs___closed__0));
lean_inc(v_s_697_);
v___x_749_ = lp_lean_x2dftml_LeanFtml_urlSchemeAt(v_s_697_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v___x_750_; 
v___x_750_ = lean_box(0);
v___y_736_ = v___x_750_;
goto v___jp_735_;
}
else
{
lean_object* v_val_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v_n_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v_val_751_ = lean_ctor_get(v___x_749_, 0);
lean_inc(v_val_751_);
lean_dec_ref_known(v___x_749_, 1);
v___x_752_ = l_List_lengthTR___redArg(v_s_697_);
v___x_753_ = l_List_lengthTR___redArg(v_val_751_);
v___x_754_ = lean_nat_sub(v___x_752_, v___x_753_);
lean_dec(v___x_753_);
lean_dec(v___x_752_);
v___x_755_ = lp_lean_x2dftml_LeanFtml_urlLibBodyEnd(v_val_751_);
v_n_756_ = lean_nat_add(v___x_754_, v___x_755_);
lean_dec(v___x_755_);
lean_dec(v___x_754_);
v___x_757_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc(v_n_756_);
lean_inc(v_s_697_);
v___x_758_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_s_697_, v_s_697_, v_n_756_, v___x_757_);
v___x_759_ = l_List_drop___redArg(v_n_756_, v_s_697_);
v___x_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_760_, 0, v___x_758_);
lean_ctor_set(v___x_760_, 1, v___x_759_);
v___x_761_ = lean_box(0);
v___x_762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_760_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
v___y_736_ = v___x_762_;
goto v___jp_735_;
}
v___jp_698_:
{
lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_702_ = l_List_appendTR___redArg(v___y_699_, v___y_700_);
v___x_703_ = l_List_appendTR___redArg(v___x_702_, v___y_701_);
return v___x_703_;
}
v___jp_704_:
{
lean_object* v___x_707_; 
v___x_707_ = lean_box(0);
v___y_699_ = v___y_705_;
v___y_700_ = v___y_706_;
v___y_701_ = v___x_707_;
goto v___jp_698_;
}
v___jp_708_:
{
if (lean_obj_tag(v_s_697_) == 1)
{
lean_object* v_head_711_; lean_object* v_tail_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_730_; 
v_head_711_ = lean_ctor_get(v_s_697_, 0);
v_tail_712_ = lean_ctor_get(v_s_697_, 1);
v_isSharedCheck_730_ = !lean_is_exclusive(v_s_697_);
if (v_isSharedCheck_730_ == 0)
{
v___x_714_ = v_s_697_;
v_isShared_715_ = v_isSharedCheck_730_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_tail_712_);
lean_inc(v_head_711_);
lean_dec(v_s_697_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_730_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_716_ = lean_unsigned_to_nat(47u);
v___x_717_ = lean_nat_dec_eq(v_head_711_, v___x_716_);
lean_dec(v_head_711_);
if (v___x_717_ == 0)
{
lean_del_object(v___x_714_);
lean_dec(v_tail_712_);
v___y_705_ = v___y_709_;
v___y_706_ = v___y_710_;
goto v___jp_704_;
}
else
{
lean_object* v___x_718_; lean_object* v___f_719_; lean_object* v_n_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_724_; 
v___x_718_ = lean_box(v___x_717_);
v___f_719_ = lean_alloc_closure((void*)(lp_lean_x2dftml_LeanFtml_urlDescrHrefs___lam__1___boxed), 2, 1);
lean_closure_set(v___f_719_, 0, v___x_718_);
lean_inc_n(v_tail_712_, 2);
v_n_720_ = lp_lean_x2dftml_LeanFtml_runOf(v___f_719_, v_tail_712_);
v___x_721_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc(v_n_720_);
v___x_722_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_712_, v_tail_712_, v_n_720_, v___x_721_);
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 1, v___x_722_);
lean_ctor_set(v___x_714_, 0, v___x_716_);
v___x_724_ = v___x_714_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_729_, 1, v___x_722_);
v___x_724_ = v_reuseFailAlloc_729_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_725_ = l_List_drop___redArg(v_n_720_, v_tail_712_);
lean_dec(v_tail_712_);
v___x_726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_726_, 0, v___x_724_);
lean_ctor_set(v___x_726_, 1, v___x_725_);
v___x_727_ = lean_box(0);
v___x_728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_728_, 0, v___x_726_);
lean_ctor_set(v___x_728_, 1, v___x_727_);
v___y_699_ = v___y_709_;
v___y_700_ = v___y_710_;
v___y_701_ = v___x_728_;
goto v___jp_698_;
}
}
}
}
else
{
lean_dec(v_s_697_);
v___y_705_ = v___y_709_;
v___y_706_ = v___y_710_;
goto v___jp_704_;
}
}
v___jp_731_:
{
lean_object* v___x_733_; 
v___x_733_ = lean_box(0);
v___y_709_ = v___y_732_;
v___y_710_ = v___x_733_;
goto v___jp_708_;
}
v___jp_735_:
{
if (lean_obj_tag(v_s_697_) == 1)
{
lean_object* v_head_737_; lean_object* v_tail_738_; lean_object* v___x_739_; uint8_t v___x_740_; 
v_head_737_ = lean_ctor_get(v_s_697_, 0);
v_tail_738_ = lean_ctor_get(v_s_697_, 1);
v___x_739_ = lean_unsigned_to_nat(35u);
v___x_740_ = lean_nat_dec_eq(v_head_737_, v___x_739_);
if (v___x_740_ == 0)
{
v___y_732_ = v___y_736_;
goto v___jp_731_;
}
else
{
lean_object* v_n_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
lean_inc_n(v_tail_738_, 2);
v_n_741_ = lp_lean_x2dftml_LeanFtml_runOf(v___f_734_, v_tail_738_);
v___x_742_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc(v_n_741_);
v___x_743_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_738_, v_tail_738_, v_n_741_, v___x_742_);
v___x_744_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_739_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
v___x_745_ = l_List_drop___redArg(v_n_741_, v_tail_738_);
v___x_746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_744_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
v___x_747_ = lean_box(0);
v___x_748_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_748_, 0, v___x_746_);
lean_ctor_set(v___x_748_, 1, v___x_747_);
v___y_709_ = v___y_736_;
v___y_710_ = v___x_748_;
goto v___jp_708_;
}
}
else
{
v___y_732_ = v___y_736_;
goto v___jp_731_;
}
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___lam__0(uint8_t v___x_763_, lean_object* v_b_764_){
_start:
{
lean_object* v___x_765_; uint8_t v___x_766_; 
v___x_765_ = lean_unsigned_to_nat(93u);
v___x_766_ = lean_nat_dec_eq(v_b_764_, v___x_765_);
if (v___x_766_ == 0)
{
lean_object* v___x_767_; uint8_t v___x_768_; 
v___x_767_ = lean_unsigned_to_nat(255u);
v___x_768_ = lean_nat_dec_eq(v_b_764_, v___x_767_);
if (v___x_768_ == 0)
{
return v___x_763_;
}
else
{
return v___x_766_;
}
}
else
{
uint8_t v___x_769_; 
v___x_769_ = 0;
return v___x_769_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___lam__0___boxed(lean_object* v___x_770_, lean_object* v_b_771_){
_start:
{
uint8_t v___x_1462__boxed_772_; uint8_t v_res_773_; lean_object* v_r_774_; 
v___x_1462__boxed_772_ = lean_unbox(v___x_770_);
v_res_773_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___lam__0(v___x_1462__boxed_772_, v_b_771_);
lean_dec(v_b_771_);
v_r_774_ = lean_box(v_res_773_);
return v_r_774_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__6(void){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_791_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__5));
v___x_792_ = l_String_toListImpl(v___x_791_);
return v___x_792_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__7(void){
_start:
{
lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_793_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__6, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__6_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__6);
v___x_794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_794_, 0, v___x_793_);
return v___x_794_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__8(void){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_795_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__7, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__7_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__7);
v___x_796_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__2, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__2);
v___x_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
lean_ctor_set(v___x_797_, 1, v___x_795_);
return v___x_797_;
}
}
static lean_object* _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__9(void){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_798_ = lean_box(0);
v___x_799_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__16, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__16_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__16);
v___x_800_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_800_, 0, v___x_799_);
lean_ctor_set(v___x_800_, 1, v___x_798_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0(lean_object* v_bs_801_, lean_object* v_toks_802_, uint8_t v_fst_803_, lean_object* v_x_804_){
_start:
{
if (lean_obj_tag(v_x_804_) == 0)
{
lean_object* v___x_805_; 
lean_dec(v_toks_802_);
lean_dec(v_bs_801_);
v___x_805_ = lean_box(0);
return v___x_805_;
}
else
{
lean_object* v_head_806_; lean_object* v_snd_807_; 
v_head_806_ = lean_ctor_get(v_x_804_, 0);
lean_inc(v_head_806_);
v_snd_807_ = lean_ctor_get(v_head_806_, 1);
lean_inc(v_snd_807_);
if (lean_obj_tag(v_snd_807_) == 1)
{
lean_object* v_tail_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_884_; 
v_tail_808_ = lean_ctor_get(v_x_804_, 1);
v_isSharedCheck_884_ = !lean_is_exclusive(v_x_804_);
if (v_isSharedCheck_884_ == 0)
{
lean_object* v_unused_885_; 
v_unused_885_ = lean_ctor_get(v_x_804_, 0);
lean_dec(v_unused_885_);
v___x_810_ = v_x_804_;
v_isShared_811_ = v_isSharedCheck_884_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_tail_808_);
lean_dec(v_x_804_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_884_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v_fst_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_882_; 
v_fst_812_ = lean_ctor_get(v_head_806_, 0);
v_isSharedCheck_882_ = !lean_is_exclusive(v_head_806_);
if (v_isSharedCheck_882_ == 0)
{
lean_object* v_unused_883_; 
v_unused_883_ = lean_ctor_get(v_head_806_, 1);
lean_dec(v_unused_883_);
v___x_814_ = v_head_806_;
v_isShared_815_ = v_isSharedCheck_882_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_fst_812_);
lean_dec(v_head_806_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_882_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v_head_816_; lean_object* v_tail_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_881_; 
v_head_816_ = lean_ctor_get(v_snd_807_, 0);
v_tail_817_ = lean_ctor_get(v_snd_807_, 1);
v_isSharedCheck_881_ = !lean_is_exclusive(v_snd_807_);
if (v_isSharedCheck_881_ == 0)
{
v___x_819_ = v_snd_807_;
v_isShared_820_ = v_isSharedCheck_881_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_tail_817_);
lean_inc(v_head_816_);
lean_dec(v_snd_807_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_881_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___x_821_; uint8_t v___x_822_; 
v___x_821_ = lean_unsigned_to_nat(32u);
v___x_822_ = lean_nat_dec_eq(v_head_816_, v___x_821_);
lean_dec(v_head_816_);
if (v___x_822_ == 0)
{
lean_del_object(v___x_819_);
lean_dec(v_tail_817_);
lean_del_object(v___x_814_);
lean_dec(v_fst_812_);
lean_del_object(v___x_810_);
v_x_804_ = v_tail_808_;
goto _start;
}
else
{
lean_object* v___x_824_; lean_object* v___f_825_; lean_object* v___x_826_; 
v___x_824_ = lean_box(v___x_822_);
v___f_825_ = lean_alloc_closure((void*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_825_, 0, v___x_824_);
v___x_826_ = lp_lean_x2dftml_LeanFtml_descrTail(v___f_825_, v_tail_817_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_del_object(v___x_819_);
lean_del_object(v___x_814_);
lean_dec(v_fst_812_);
lean_del_object(v___x_810_);
v_x_804_ = v_tail_808_;
goto _start;
}
else
{
lean_object* v_val_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_880_; 
lean_dec(v_tail_808_);
v_val_828_ = lean_ctor_get(v___x_826_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_880_ == 0)
{
v___x_830_ = v___x_826_;
v_isShared_831_ = v_isSharedCheck_880_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_val_828_);
lean_dec(v___x_826_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_880_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v_fst_832_; lean_object* v_snd_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_879_; 
v_fst_832_ = lean_ctor_get(v_val_828_, 0);
v_snd_833_ = lean_ctor_get(v_val_828_, 1);
v_isSharedCheck_879_ = !lean_is_exclusive(v_val_828_);
if (v_isSharedCheck_879_ == 0)
{
v___x_835_ = v_val_828_;
v_isShared_836_ = v_isSharedCheck_879_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_snd_833_);
lean_inc(v_fst_832_);
lean_dec(v_val_828_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_879_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v_wholeMatch_841_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_837_ = l_List_lengthTR___redArg(v_bs_801_);
v___x_838_ = l_List_lengthTR___redArg(v_snd_833_);
v___x_839_ = lean_nat_sub(v___x_837_, v___x_838_);
lean_dec(v___x_838_);
lean_dec(v___x_837_);
v___x_840_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc(v_bs_801_);
v_wholeMatch_841_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_bs_801_, v_bs_801_, v___x_839_, v___x_840_);
lean_dec(v_bs_801_);
v___x_852_ = lean_box(0);
v___x_853_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__2));
lean_inc(v_fst_832_);
v___x_854_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_853_, v_fst_832_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_855_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__4));
lean_inc(v_wholeMatch_841_);
v___x_856_ = lp_lean_x2dftml_LeanFtml_findSub(v___x_855_, v_wholeMatch_841_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_865_; 
lean_dec(v_wholeMatch_841_);
lean_del_object(v___x_835_);
lean_del_object(v___x_830_);
lean_del_object(v___x_814_);
v___x_857_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__8, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__8_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__8);
v___x_858_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__8, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__8);
v___x_859_ = lp_lean_x2dftml_LeanFtml_textVal(v_fst_812_);
v___x_860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_860_, 0, v___x_858_);
lean_ctor_set(v___x_860_, 1, v___x_859_);
v___x_861_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10);
v___x_862_ = lp_lean_x2dftml_LeanFtml_textVal(v_fst_832_);
v___x_863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_863_, 0, v___x_861_);
lean_ctor_set(v___x_863_, 1, v___x_862_);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 1, v___x_852_);
lean_ctor_set(v___x_819_, 0, v___x_863_);
v___x_865_ = v___x_819_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_863_);
lean_ctor_set(v_reuseFailAlloc_878_, 1, v___x_852_);
v___x_865_ = v_reuseFailAlloc_878_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
lean_object* v___x_867_; 
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 1, v___x_865_);
lean_ctor_set(v___x_810_, 0, v___x_860_);
v___x_867_ = v___x_810_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v___x_860_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v___x_865_);
v___x_867_ = v_reuseFailAlloc_877_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
lean_object* v___x_868_; lean_object* v___y_870_; 
v___x_868_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_857_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
if (v_fst_803_ == 0)
{
v___y_870_ = v___x_852_;
goto v___jp_869_;
}
else
{
lean_object* v___x_876_; 
v___x_876_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__9, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__9_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__9);
v___y_870_ = v___x_876_;
goto v___jp_869_;
}
v___jp_869_:
{
lean_object* v_opts_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
lean_inc(v___y_870_);
v_opts_871_ = l_List_appendTR___redArg(v___x_868_, v___y_870_);
v___x_872_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__0));
v___x_873_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_872_, v_opts_871_, v_toks_802_);
v___x_874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_874_, 0, v_snd_833_);
lean_ctor_set(v___x_874_, 1, v___x_873_);
v___x_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_875_, 0, v___x_874_);
return v___x_875_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_856_, 1);
lean_dec(v_fst_832_);
lean_del_object(v___x_819_);
lean_dec(v_fst_812_);
lean_del_object(v___x_810_);
goto v___jp_842_;
}
}
else
{
lean_dec_ref_known(v___x_854_, 1);
lean_dec(v_fst_832_);
lean_del_object(v___x_819_);
lean_dec(v_fst_812_);
lean_del_object(v___x_810_);
goto v___jp_842_;
}
v___jp_842_:
{
lean_object* v___x_844_; 
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 1, v_toks_802_);
lean_ctor_set(v___x_835_, 0, v_wholeMatch_841_);
v___x_844_ = v___x_835_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_wholeMatch_841_);
lean_ctor_set(v_reuseFailAlloc_851_, 1, v_toks_802_);
v___x_844_ = v_reuseFailAlloc_851_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
lean_object* v___x_846_; 
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 1, v___x_844_);
lean_ctor_set(v___x_814_, 0, v_snd_833_);
v___x_846_ = v___x_814_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v_snd_833_);
lean_ctor_set(v_reuseFailAlloc_850_, 1, v___x_844_);
v___x_846_ = v_reuseFailAlloc_850_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
lean_object* v___x_848_; 
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 0, v___x_846_);
v___x_848_ = v___x_830_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___x_846_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
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
else
{
lean_object* v_tail_886_; 
lean_dec(v_snd_807_);
lean_dec(v_head_806_);
v_tail_886_ = lean_ctor_get(v_x_804_, 1);
lean_inc(v_tail_886_);
lean_dec_ref_known(v_x_804_, 2);
v_x_804_ = v_tail_886_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___boxed(lean_object* v_bs_888_, lean_object* v_toks_889_, lean_object* v_fst_890_, lean_object* v_x_891_){
_start:
{
uint8_t v_fst_1550__boxed_892_; lean_object* v_res_893_; 
v_fst_1550__boxed_892_ = lean_unbox(v_fst_890_);
v_res_893_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0(v_bs_888_, v_toks_889_, v_fst_1550__boxed_892_, v_x_891_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__1(lean_object* v_bs_894_, lean_object* v_toks_895_, lean_object* v_x_896_){
_start:
{
if (lean_obj_tag(v_x_896_) == 0)
{
lean_object* v___x_897_; 
lean_dec(v_toks_895_);
lean_dec(v_bs_894_);
v___x_897_ = lean_box(0);
return v___x_897_;
}
else
{
lean_object* v_head_898_; lean_object* v_tail_899_; lean_object* v_fst_900_; lean_object* v_snd_901_; lean_object* v___x_902_; uint8_t v___x_903_; lean_object* v___x_904_; 
v_head_898_ = lean_ctor_get(v_x_896_, 0);
lean_inc(v_head_898_);
v_tail_899_ = lean_ctor_get(v_x_896_, 1);
lean_inc(v_tail_899_);
lean_dec_ref_known(v_x_896_, 2);
v_fst_900_ = lean_ctor_get(v_head_898_, 0);
lean_inc(v_fst_900_);
v_snd_901_ = lean_ctor_get(v_head_898_, 1);
lean_inc(v_snd_901_);
lean_dec(v_head_898_);
v___x_902_ = lp_lean_x2dftml_LeanFtml_urlDescrHrefs(v_snd_901_);
v___x_903_ = lean_unbox(v_fst_900_);
lean_dec(v_fst_900_);
lean_inc(v_toks_895_);
lean_inc(v_bs_894_);
v___x_904_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0(v_bs_894_, v_toks_895_, v___x_903_, v___x_902_);
if (lean_obj_tag(v___x_904_) == 0)
{
v_x_896_ = v_tail_899_;
goto _start;
}
else
{
lean_dec(v_tail_899_);
lean_dec(v_toks_895_);
lean_dec(v_bs_894_);
return v___x_904_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlDescrMatch(lean_object* v_bs_906_, lean_object* v_toks_907_){
_start:
{
if (lean_obj_tag(v_bs_906_) == 1)
{
lean_object* v_head_908_; lean_object* v_tail_909_; lean_object* v___x_917_; uint8_t v___x_918_; 
v_head_908_ = lean_ctor_get(v_bs_906_, 0);
v_tail_909_ = lean_ctor_get(v_bs_906_, 1);
v___x_917_ = lean_unsigned_to_nat(91u);
v___x_918_ = lean_nat_dec_eq(v_head_908_, v___x_917_);
if (v___x_918_ == 0)
{
lean_object* v___x_919_; 
lean_dec_ref_known(v_bs_906_, 2);
lean_dec(v_toks_907_);
v___x_919_ = lean_box(0);
return v___x_919_;
}
else
{
if (lean_obj_tag(v_tail_909_) == 1)
{
lean_object* v_head_920_; lean_object* v_tail_921_; lean_object* v___x_922_; uint8_t v___x_923_; 
v_head_920_ = lean_ctor_get(v_tail_909_, 0);
v_tail_921_ = lean_ctor_get(v_tail_909_, 1);
v___x_922_ = lean_unsigned_to_nat(42u);
v___x_923_ = lean_nat_dec_eq(v_head_920_, v___x_922_);
if (v___x_923_ == 0)
{
goto v___jp_910_;
}
else
{
lean_object* v___x_924_; lean_object* v___x_925_; uint8_t v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_924_ = lean_box(v___x_923_);
lean_inc(v_tail_921_);
v___x_925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_925_, 0, v___x_924_);
lean_ctor_set(v___x_925_, 1, v_tail_921_);
v___x_926_ = 0;
v___x_927_ = lean_box(v___x_926_);
lean_inc_ref(v_tail_909_);
v___x_928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
lean_ctor_set(v___x_928_, 1, v_tail_909_);
v___x_929_ = lean_box(0);
v___x_930_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_930_, 0, v___x_928_);
lean_ctor_set(v___x_930_, 1, v___x_929_);
v___x_931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_931_, 0, v___x_925_);
lean_ctor_set(v___x_931_, 1, v___x_930_);
v___x_932_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__1(v_bs_906_, v_toks_907_, v___x_931_);
return v___x_932_;
}
}
else
{
goto v___jp_910_;
}
}
v___jp_910_:
{
uint8_t v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_911_ = 0;
v___x_912_ = lean_box(v___x_911_);
lean_inc(v_tail_909_);
v___x_913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_912_);
lean_ctor_set(v___x_913_, 1, v_tail_909_);
v___x_914_ = lean_box(0);
v___x_915_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_913_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__1(v_bs_906_, v_toks_907_, v___x_915_);
return v___x_916_;
}
}
else
{
lean_object* v___x_933_; 
lean_dec(v_toks_907_);
lean_dec(v_bs_906_);
v___x_933_ = lean_box(0);
return v___x_933_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlRule___lam__0(lean_object* v_bs_935_, lean_object* v_toks_936_){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v_fst_939_; lean_object* v_snd_940_; lean_object* v___x_941_; 
v___x_937_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlRule___lam__0___closed__0));
v___x_938_ = lp_lean_x2dftml_LeanFtml_pregScan(v___x_937_, v_bs_935_, v_toks_936_);
v_fst_939_ = lean_ctor_get(v___x_938_, 0);
lean_inc(v_fst_939_);
v_snd_940_ = lean_ctor_get(v___x_938_, 1);
lean_inc(v_snd_940_);
lean_dec_ref(v___x_938_);
v___x_941_ = lp_lean_x2dftml_LeanFtml_urlInlinePass(v_fst_939_, v_snd_940_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_urlRule(lean_object* v_st_943_){
_start:
{
lean_object* v___f_944_; lean_object* v___x_945_; 
v___f_944_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlRule___closed__0));
v___x_945_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_943_, v___f_944_);
return v___x_945_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_emailLocalB(lean_object* v_b_946_){
_start:
{
uint8_t v___x_952_; 
v___x_952_ = lp_lean_x2dftml_LeanFtml_isAlphaB(v_b_946_);
if (v___x_952_ == 0)
{
lean_object* v___x_953_; uint8_t v___x_954_; 
v___x_953_ = lean_unsigned_to_nat(48u);
v___x_954_ = lean_nat_dec_le(v___x_953_, v_b_946_);
if (v___x_954_ == 0)
{
goto v___jp_947_;
}
else
{
lean_object* v___x_955_; uint8_t v___x_956_; 
v___x_955_ = lean_unsigned_to_nat(57u);
v___x_956_ = lean_nat_dec_le(v_b_946_, v___x_955_);
if (v___x_956_ == 0)
{
goto v___jp_947_;
}
else
{
return v___x_956_;
}
}
}
else
{
return v___x_952_;
}
v___jp_947_:
{
lean_object* v___x_948_; uint8_t v___x_949_; 
v___x_948_ = lean_unsigned_to_nat(95u);
v___x_949_ = lean_nat_dec_eq(v_b_946_, v___x_948_);
if (v___x_949_ == 0)
{
lean_object* v___x_950_; uint8_t v___x_951_; 
v___x_950_ = lean_unsigned_to_nat(45u);
v___x_951_ = lean_nat_dec_eq(v_b_946_, v___x_950_);
return v___x_951_;
}
else
{
return v___x_949_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emailLocalB___boxed(lean_object* v_b_957_){
_start:
{
uint8_t v_res_958_; lean_object* v_r_959_; 
v_res_958_ = lp_lean_x2dftml_LeanFtml_emailLocalB(v_b_957_);
lean_dec(v_b_957_);
v_r_959_ = lean_box(v_res_958_);
return v_r_959_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_emailDomB(lean_object* v_b_960_){
_start:
{
uint8_t v___x_964_; 
v___x_964_ = lp_lean_x2dftml_LeanFtml_isAlphaB(v_b_960_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; uint8_t v___x_966_; 
v___x_965_ = lean_unsigned_to_nat(48u);
v___x_966_ = lean_nat_dec_le(v___x_965_, v_b_960_);
if (v___x_966_ == 0)
{
goto v___jp_961_;
}
else
{
lean_object* v___x_967_; uint8_t v___x_968_; 
v___x_967_ = lean_unsigned_to_nat(57u);
v___x_968_ = lean_nat_dec_le(v_b_960_, v___x_967_);
if (v___x_968_ == 0)
{
goto v___jp_961_;
}
else
{
return v___x_968_;
}
}
}
else
{
return v___x_964_;
}
v___jp_961_:
{
lean_object* v___x_962_; uint8_t v___x_963_; 
v___x_962_ = lean_unsigned_to_nat(45u);
v___x_963_ = lean_nat_dec_eq(v_b_960_, v___x_962_);
return v___x_963_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emailDomB___boxed(lean_object* v_b_969_){
_start:
{
uint8_t v_res_970_; lean_object* v_r_971_; 
v_res_970_ = lp_lean_x2dftml_LeanFtml_emailDomB(v_b_969_);
lean_dec(v_b_969_);
v_r_971_ = lean_box(v_res_970_);
return v_r_971_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_atomChainLen_go(lean_object* v_p_974_, lean_object* v_bs_975_, lean_object* v_n_976_, lean_object* v_fuel_977_){
_start:
{
lean_object* v_zero_978_; uint8_t v_isZero_979_; 
v_zero_978_ = lean_unsigned_to_nat(0u);
v_isZero_979_ = lean_nat_dec_eq(v_fuel_977_, v_zero_978_);
if (v_isZero_979_ == 1)
{
lean_dec(v_fuel_977_);
lean_dec_ref(v_p_974_);
return v_n_976_;
}
else
{
lean_object* v___x_980_; lean_object* v___x_981_; uint8_t v___x_982_; 
lean_inc(v_n_976_);
v___x_980_ = l_List_get_x3fInternal___redArg(v_bs_975_, v_n_976_);
v___x_981_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_atomChainLen_go___closed__0));
v___x_982_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_980_, v___x_981_);
lean_dec(v___x_980_);
if (v___x_982_ == 0)
{
lean_dec(v_fuel_977_);
lean_dec_ref(v_p_974_);
return v_n_976_;
}
else
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_983_ = lean_unsigned_to_nat(1u);
v___x_984_ = lean_nat_add(v_n_976_, v___x_983_);
lean_inc(v___x_984_);
v___x_985_ = l_List_get_x3fInternal___redArg(v_bs_975_, v___x_984_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_dec(v___x_984_);
lean_dec(v_fuel_977_);
lean_dec_ref(v_p_974_);
return v_n_976_;
}
else
{
lean_object* v_val_986_; lean_object* v___x_987_; uint8_t v___x_988_; 
v_val_986_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_val_986_);
lean_dec_ref_known(v___x_985_, 1);
lean_inc_ref(v_p_974_);
v___x_987_ = lean_apply_1(v_p_974_, v_val_986_);
v___x_988_ = lean_unbox(v___x_987_);
if (v___x_988_ == 0)
{
lean_dec(v___x_984_);
lean_dec(v_fuel_977_);
lean_dec_ref(v_p_974_);
return v_n_976_;
}
else
{
lean_object* v_n_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
lean_dec(v_n_976_);
v_n_989_ = lean_nat_sub(v_fuel_977_, v___x_983_);
lean_dec(v_fuel_977_);
lean_inc(v___x_984_);
v___x_990_ = l_List_drop___redArg(v___x_984_, v_bs_975_);
lean_inc_ref(v_p_974_);
v___x_991_ = lp_lean_x2dftml_LeanFtml_runOf(v_p_974_, v___x_990_);
v___x_992_ = lean_nat_add(v___x_984_, v___x_991_);
lean_dec(v___x_991_);
lean_dec(v___x_984_);
v_n_976_ = v___x_992_;
v_fuel_977_ = v_n_989_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_atomChainLen_go___boxed(lean_object* v_p_994_, lean_object* v_bs_995_, lean_object* v_n_996_, lean_object* v_fuel_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = lp_lean_x2dftml_LeanFtml_atomChainLen_go(v_p_994_, v_bs_995_, v_n_996_, v_fuel_997_);
lean_dec(v_bs_995_);
return v_res_998_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_atomChainLen(lean_object* v_p_999_, lean_object* v_bs_1000_){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
lean_inc(v_bs_1000_);
lean_inc_ref(v_p_999_);
v___x_1001_ = lp_lean_x2dftml_LeanFtml_runOf(v_p_999_, v_bs_1000_);
v___x_1002_ = l_List_lengthTR___redArg(v_bs_1000_);
v___x_1003_ = lean_unsigned_to_nat(1u);
v___x_1004_ = lean_nat_add(v___x_1002_, v___x_1003_);
lean_dec(v___x_1002_);
v___x_1005_ = lp_lean_x2dftml_LeanFtml_atomChainLen_go(v_p_999_, v_bs_1000_, v___x_1001_, v___x_1004_);
lean_dec(v_bs_1000_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emailMatchLen(lean_object* v_bs_1010_){
_start:
{
lean_object* v___x_1011_; lean_object* v_l1_1012_; lean_object* v___x_1013_; uint8_t v___x_1014_; 
v___x_1011_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emailMatchLen___closed__0));
lean_inc(v_bs_1010_);
v_l1_1012_ = lp_lean_x2dftml_LeanFtml_runOf(v___x_1011_, v_bs_1010_);
v___x_1013_ = lean_unsigned_to_nat(0u);
v___x_1014_ = lean_nat_dec_eq(v_l1_1012_, v___x_1013_);
lean_dec(v_l1_1012_);
if (v___x_1014_ == 0)
{
lean_object* v_localLen_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; uint8_t v___x_1018_; 
lean_inc(v_bs_1010_);
v_localLen_1015_ = lp_lean_x2dftml_LeanFtml_atomChainLen(v___x_1011_, v_bs_1010_);
lean_inc(v_localLen_1015_);
v___x_1016_ = l_List_get_x3fInternal___redArg(v_bs_1010_, v_localLen_1015_);
v___x_1017_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emailMatchLen___closed__1));
v___x_1018_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_1016_, v___x_1017_);
lean_dec(v___x_1016_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; 
lean_dec(v_localLen_1015_);
lean_dec(v_bs_1010_);
v___x_1019_ = lean_box(0);
return v___x_1019_;
}
else
{
lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v_dom_1022_; lean_object* v___x_1023_; lean_object* v_d1_1024_; uint8_t v___x_1025_; 
v___x_1020_ = lean_unsigned_to_nat(1u);
v___x_1021_ = lean_nat_add(v_localLen_1015_, v___x_1020_);
lean_dec(v_localLen_1015_);
lean_inc(v___x_1021_);
v_dom_1022_ = l_List_drop___redArg(v___x_1021_, v_bs_1010_);
lean_dec(v_bs_1010_);
v___x_1023_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emailMatchLen___closed__2));
lean_inc(v_dom_1022_);
v_d1_1024_ = lp_lean_x2dftml_LeanFtml_runOf(v___x_1023_, v_dom_1022_);
v___x_1025_ = lean_nat_dec_eq(v_d1_1024_, v___x_1013_);
if (v___x_1025_ == 0)
{
lean_object* v_domLen_1026_; uint8_t v___x_1027_; 
v_domLen_1026_ = lp_lean_x2dftml_LeanFtml_atomChainLen(v___x_1023_, v_dom_1022_);
v___x_1027_ = lean_nat_dec_lt(v_d1_1024_, v_domLen_1026_);
lean_dec(v_d1_1024_);
if (v___x_1027_ == 0)
{
lean_object* v___x_1028_; 
lean_dec(v_domLen_1026_);
lean_dec(v___x_1021_);
v___x_1028_ = lean_box(0);
return v___x_1028_;
}
else
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1029_ = lean_nat_add(v___x_1021_, v_domLen_1026_);
lean_dec(v_domLen_1026_);
lean_dec(v___x_1021_);
v___x_1030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1029_);
return v___x_1030_;
}
}
else
{
lean_object* v___x_1031_; 
lean_dec(v_d1_1024_);
lean_dec(v_dom_1022_);
lean_dec(v___x_1021_);
v___x_1031_ = lean_box(0);
return v___x_1031_;
}
}
}
else
{
lean_object* v___x_1032_; 
lean_dec(v_bs_1010_);
v___x_1032_ = lean_box(0);
return v___x_1032_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__1(void){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1034_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__0));
v___x_1035_ = l_String_toListImpl(v___x_1034_);
return v___x_1035_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emailDescrMatch(lean_object* v_bs_1037_, lean_object* v_toks_1038_){
_start:
{
if (lean_obj_tag(v_bs_1037_) == 1)
{
lean_object* v_head_1039_; lean_object* v_tail_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1097_; 
v_head_1039_ = lean_ctor_get(v_bs_1037_, 0);
v_tail_1040_ = lean_ctor_get(v_bs_1037_, 1);
v_isSharedCheck_1097_ = !lean_is_exclusive(v_bs_1037_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1042_ = v_bs_1037_;
v_isShared_1043_ = v_isSharedCheck_1097_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_tail_1040_);
lean_inc(v_head_1039_);
lean_dec(v_bs_1037_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1097_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1044_; uint8_t v___x_1045_; 
v___x_1044_ = lean_unsigned_to_nat(91u);
v___x_1045_ = lean_nat_dec_eq(v_head_1039_, v___x_1044_);
lean_dec(v_head_1039_);
if (v___x_1045_ == 0)
{
lean_object* v___x_1046_; 
lean_del_object(v___x_1042_);
lean_dec(v_tail_1040_);
lean_dec(v_toks_1038_);
v___x_1046_ = lean_box(0);
return v___x_1046_;
}
else
{
lean_object* v___x_1047_; 
lean_inc(v_tail_1040_);
v___x_1047_ = lp_lean_x2dftml_LeanFtml_emailMatchLen(v_tail_1040_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v___x_1048_; 
lean_del_object(v___x_1042_);
lean_dec(v_tail_1040_);
lean_dec(v_toks_1038_);
v___x_1048_ = lean_box(0);
return v___x_1048_;
}
else
{
lean_object* v_val_1049_; lean_object* v___x_1050_; 
v_val_1049_ = lean_ctor_get(v___x_1047_, 0);
lean_inc_n(v_val_1049_, 2);
lean_dec_ref_known(v___x_1047_, 1);
v___x_1050_ = l_List_drop___redArg(v_val_1049_, v_tail_1040_);
if (lean_obj_tag(v___x_1050_) == 1)
{
lean_object* v_head_1051_; lean_object* v_tail_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1095_; 
v_head_1051_ = lean_ctor_get(v___x_1050_, 0);
v_tail_1052_ = lean_ctor_get(v___x_1050_, 1);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1054_ = v___x_1050_;
v_isShared_1055_ = v_isSharedCheck_1095_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_tail_1052_);
lean_inc(v_head_1051_);
lean_dec(v___x_1050_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1095_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1056_; uint8_t v___x_1057_; 
v___x_1056_ = lean_unsigned_to_nat(32u);
v___x_1057_ = lean_nat_dec_eq(v_head_1051_, v___x_1056_);
lean_dec(v_head_1051_);
if (v___x_1057_ == 0)
{
lean_object* v___x_1058_; 
lean_del_object(v___x_1054_);
lean_dec(v_tail_1052_);
lean_dec(v_val_1049_);
lean_del_object(v___x_1042_);
lean_dec(v_tail_1040_);
lean_dec(v_toks_1038_);
v___x_1058_ = lean_box(0);
return v___x_1058_;
}
else
{
lean_object* v___x_1059_; 
v___x_1059_ = lp_lean_x2dftml_LeanFtml_lazyTail(v_tail_1052_);
if (lean_obj_tag(v___x_1059_) == 0)
{
lean_object* v___x_1060_; 
lean_del_object(v___x_1054_);
lean_dec(v_val_1049_);
lean_del_object(v___x_1042_);
lean_dec(v_tail_1040_);
lean_dec(v_toks_1038_);
v___x_1060_ = lean_box(0);
return v___x_1060_;
}
else
{
lean_object* v_val_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1094_; 
v_val_1061_ = lean_ctor_get(v___x_1059_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1059_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1063_ = v___x_1059_;
v_isShared_1064_ = v_isSharedCheck_1094_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_val_1061_);
lean_dec(v___x_1059_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1094_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v_fst_1065_; lean_object* v_snd_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1093_; 
v_fst_1065_ = lean_ctor_get(v_val_1061_, 0);
v_snd_1066_ = lean_ctor_get(v_val_1061_, 1);
v_isSharedCheck_1093_ = !lean_is_exclusive(v_val_1061_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1068_ = v_val_1061_;
v_isShared_1069_ = v_isSharedCheck_1093_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_snd_1066_);
lean_inc(v_fst_1065_);
lean_dec(v_val_1061_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1093_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1075_; 
v___x_1070_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__1, &lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__1);
v___x_1071_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc(v_tail_1040_);
v___x_1072_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_tail_1040_, v_tail_1040_, v_val_1049_, v___x_1071_);
lean_dec(v_tail_1040_);
v___x_1073_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_1072_);
if (v_isShared_1069_ == 0)
{
lean_ctor_set(v___x_1068_, 1, v___x_1073_);
lean_ctor_set(v___x_1068_, 0, v___x_1070_);
v___x_1075_ = v___x_1068_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v___x_1070_);
lean_ctor_set(v_reuseFailAlloc_1092_, 1, v___x_1073_);
v___x_1075_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1081_; 
v___x_1076_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10);
v___x_1077_ = lp_lean_x2dftml_LeanFtml_textVal(v_fst_1065_);
v___x_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1076_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___x_1079_ = lean_box(0);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 1, v___x_1079_);
lean_ctor_set(v___x_1054_, 0, v___x_1078_);
v___x_1081_ = v___x_1054_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v___x_1078_);
lean_ctor_set(v_reuseFailAlloc_1091_, 1, v___x_1079_);
v___x_1081_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
lean_object* v_opts_1083_; 
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 1, v___x_1081_);
lean_ctor_set(v___x_1042_, 0, v___x_1075_);
v_opts_1083_ = v___x_1042_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1075_);
lean_ctor_set(v_reuseFailAlloc_1090_, 1, v___x_1081_);
v_opts_1083_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1088_; 
v___x_1084_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__2));
v___x_1085_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_1084_, v_opts_1083_, v_toks_1038_);
v___x_1086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1086_, 0, v_snd_1066_);
lean_ctor_set(v___x_1086_, 1, v___x_1085_);
if (v_isShared_1064_ == 0)
{
lean_ctor_set(v___x_1063_, 0, v___x_1086_);
v___x_1088_ = v___x_1063_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v___x_1086_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
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
lean_object* v___x_1096_; 
lean_dec(v___x_1050_);
lean_dec(v_val_1049_);
lean_del_object(v___x_1042_);
lean_dec(v_tail_1040_);
lean_dec(v_toks_1038_);
v___x_1096_ = lean_box(0);
return v___x_1096_;
}
}
}
}
}
else
{
lean_object* v___x_1098_; 
lean_dec(v_toks_1038_);
lean_dec(v_bs_1037_);
v___x_1098_ = lean_box(0);
return v___x_1098_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emailStandaloneMatch(lean_object* v_bs_1099_, lean_object* v_toks_1100_){
_start:
{
lean_object* v___x_1101_; 
lean_inc(v_bs_1099_);
v___x_1101_ = lp_lean_x2dftml_LeanFtml_emailMatchLen(v_bs_1099_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_object* v___x_1102_; 
lean_dec(v_toks_1100_);
lean_dec(v_bs_1099_);
v___x_1102_ = lean_box(0);
return v___x_1102_;
}
else
{
lean_object* v_val_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1124_; 
v_val_1103_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1105_ = v___x_1101_;
v_isShared_1106_ = v_isSharedCheck_1124_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_val_1103_);
lean_dec(v___x_1101_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1124_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1107_; lean_object* v_addr_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v_opts_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1122_; 
v___x_1107_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc(v_val_1103_);
lean_inc(v_bs_1099_);
v_addr_1108_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_bs_1099_, v_bs_1099_, v_val_1103_, v___x_1107_);
v___x_1109_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__1, &lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__1);
v___x_1110_ = lp_lean_x2dftml_LeanFtml_textVal(v_addr_1108_);
lean_inc(v___x_1110_);
v___x_1111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1109_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
v___x_1112_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10);
v___x_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
lean_ctor_set(v___x_1113_, 1, v___x_1110_);
v___x_1114_ = lean_box(0);
v___x_1115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1113_);
lean_ctor_set(v___x_1115_, 1, v___x_1114_);
v_opts_1116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_opts_1116_, 0, v___x_1111_);
lean_ctor_set(v_opts_1116_, 1, v___x_1115_);
v___x_1117_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__2));
v___x_1118_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_1117_, v_opts_1116_, v_toks_1100_);
v___x_1119_ = l_List_drop___redArg(v_val_1103_, v_bs_1099_);
lean_dec(v_bs_1099_);
v___x_1120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
lean_ctor_set(v___x_1120_, 1, v___x_1118_);
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 0, v___x_1120_);
v___x_1122_ = v___x_1105_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v___x_1120_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emailRule___lam__0(lean_object* v_bs_1127_, lean_object* v_toks_1128_){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v_fst_1131_; lean_object* v_snd_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1129_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emailRule___lam__0___closed__0));
v___x_1130_ = lp_lean_x2dftml_LeanFtml_pregScan(v___x_1129_, v_bs_1127_, v_toks_1128_);
v_fst_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc(v_fst_1131_);
v_snd_1132_ = lean_ctor_get(v___x_1130_, 1);
lean_inc(v_snd_1132_);
lean_dec_ref(v___x_1130_);
v___x_1133_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emailRule___lam__0___closed__1));
v___x_1134_ = lp_lean_x2dftml_LeanFtml_pregScan(v___x_1133_, v_fst_1131_, v_snd_1132_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_emailRule(lean_object* v_st_1136_){
_start:
{
lean_object* v___f_1137_; lean_object* v___x_1138_; 
v___f_1137_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emailRule___closed__0));
v___x_1138_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1136_, v___f_1137_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathEndScan_go(lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v_zero_1142_; uint8_t v_isZero_1143_; 
v_zero_1142_ = lean_unsigned_to_nat(0u);
v_isZero_1143_ = lean_nat_dec_eq(v_a_1141_, v_zero_1142_);
if (v_isZero_1143_ == 1)
{
lean_object* v___x_1144_; 
lean_dec(v_a_1141_);
lean_dec(v_a_1140_);
lean_dec(v_a_1139_);
v___x_1144_ = lean_box(0);
return v___x_1144_;
}
else
{
if (lean_obj_tag(v_a_1139_) == 0)
{
lean_object* v___x_1145_; 
lean_dec(v_a_1141_);
lean_dec(v_a_1140_);
v___x_1145_ = lean_box(0);
return v___x_1145_;
}
else
{
lean_object* v_head_1146_; lean_object* v_tail_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1195_; 
v_head_1146_ = lean_ctor_get(v_a_1139_, 0);
v_tail_1147_ = lean_ctor_get(v_a_1139_, 1);
v_isSharedCheck_1195_ = !lean_is_exclusive(v_a_1139_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1149_ = v_a_1139_;
v_isShared_1150_ = v_isSharedCheck_1195_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_tail_1147_);
lean_inc(v_head_1146_);
lean_dec(v_a_1139_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1195_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v_one_1151_; lean_object* v_n_1152_; lean_object* v_b_1154_; lean_object* v_rest_1155_; lean_object* v___x_1160_; uint8_t v___x_1161_; 
v_one_1151_ = lean_unsigned_to_nat(1u);
v_n_1152_ = lean_nat_sub(v_a_1141_, v_one_1151_);
lean_dec(v_a_1141_);
v___x_1160_ = lean_unsigned_to_nat(36u);
v___x_1161_ = lean_nat_dec_eq(v_head_1146_, v___x_1160_);
if (v___x_1161_ == 0)
{
lean_object* v___x_1162_; uint8_t v___x_1163_; 
v___x_1162_ = lean_unsigned_to_nat(10u);
v___x_1163_ = lean_nat_dec_eq(v_head_1146_, v___x_1162_);
if (v___x_1163_ == 0)
{
v_b_1154_ = v_head_1146_;
v_rest_1155_ = v_tail_1147_;
goto v___jp_1153_;
}
else
{
lean_object* v___x_1164_; 
lean_dec(v_n_1152_);
lean_del_object(v___x_1149_);
lean_dec(v_tail_1147_);
lean_dec(v_head_1146_);
lean_dec(v_a_1140_);
v___x_1164_ = lean_box(0);
return v___x_1164_;
}
}
else
{
lean_dec(v_head_1146_);
if (lean_obj_tag(v_tail_1147_) == 1)
{
lean_object* v_head_1165_; lean_object* v_tail_1166_; lean_object* v___x_1167_; uint8_t v___x_1168_; 
v_head_1165_ = lean_ctor_get(v_tail_1147_, 0);
v_tail_1166_ = lean_ctor_get(v_tail_1147_, 1);
lean_inc(v_tail_1166_);
v___x_1167_ = lean_unsigned_to_nat(93u);
v___x_1168_ = lean_nat_dec_eq(v_head_1165_, v___x_1167_);
if (v___x_1168_ == 0)
{
lean_dec(v_tail_1166_);
v_b_1154_ = v___x_1160_;
v_rest_1155_ = v_tail_1147_;
goto v___jp_1153_;
}
else
{
lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1192_; 
v_isSharedCheck_1192_ = !lean_is_exclusive(v_tail_1147_);
if (v_isSharedCheck_1192_ == 0)
{
lean_object* v_unused_1193_; lean_object* v_unused_1194_; 
v_unused_1193_ = lean_ctor_get(v_tail_1147_, 1);
lean_dec(v_unused_1193_);
v_unused_1194_ = lean_ctor_get(v_tail_1147_, 0);
lean_dec(v_unused_1194_);
v___x_1170_ = v_tail_1147_;
v_isShared_1171_ = v_isSharedCheck_1192_;
goto v_resetjp_1169_;
}
else
{
lean_dec(v_tail_1147_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1192_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
if (lean_obj_tag(v_tail_1166_) == 1)
{
lean_object* v_head_1172_; lean_object* v_tail_1173_; uint8_t v___x_1174_; 
v_head_1172_ = lean_ctor_get(v_tail_1166_, 0);
v_tail_1173_ = lean_ctor_get(v_tail_1166_, 1);
v___x_1174_ = lean_nat_dec_eq(v_head_1172_, v___x_1167_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1176_; 
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 0, v___x_1167_);
v___x_1176_ = v___x_1170_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v___x_1167_);
lean_ctor_set(v_reuseFailAlloc_1177_, 1, v_tail_1166_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
v_b_1154_ = v___x_1160_;
v_rest_1155_ = v___x_1176_;
goto v___jp_1153_;
}
}
else
{
lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1186_; 
lean_inc(v_tail_1173_);
lean_del_object(v___x_1170_);
lean_dec(v_n_1152_);
lean_del_object(v___x_1149_);
v_isSharedCheck_1186_ = !lean_is_exclusive(v_tail_1166_);
if (v_isSharedCheck_1186_ == 0)
{
lean_object* v_unused_1187_; lean_object* v_unused_1188_; 
v_unused_1187_ = lean_ctor_get(v_tail_1166_, 1);
lean_dec(v_unused_1187_);
v_unused_1188_ = lean_ctor_get(v_tail_1166_, 0);
lean_dec(v_unused_1188_);
v___x_1179_ = v_tail_1166_;
v_isShared_1180_ = v_isSharedCheck_1186_;
goto v_resetjp_1178_;
}
else
{
lean_dec(v_tail_1166_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1186_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1181_; lean_object* v___x_1183_; 
v___x_1181_ = l_List_reverse___redArg(v_a_1140_);
if (v_isShared_1180_ == 0)
{
lean_ctor_set_tag(v___x_1179_, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1181_);
v___x_1183_ = v___x_1179_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v___x_1181_);
lean_ctor_set(v_reuseFailAlloc_1185_, 1, v_tail_1173_);
v___x_1183_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
lean_object* v___x_1184_; 
v___x_1184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
return v___x_1184_;
}
}
}
}
else
{
lean_object* v___x_1190_; 
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 0, v___x_1167_);
v___x_1190_ = v___x_1170_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1167_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v_tail_1166_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
v_b_1154_ = v___x_1160_;
v_rest_1155_ = v___x_1190_;
goto v___jp_1153_;
}
}
}
}
}
else
{
v_b_1154_ = v___x_1160_;
v_rest_1155_ = v_tail_1147_;
goto v___jp_1153_;
}
}
v___jp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 1, v_a_1140_);
lean_ctor_set(v___x_1149_, 0, v_b_1154_);
v___x_1157_ = v___x_1149_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_b_1154_);
lean_ctor_set(v_reuseFailAlloc_1159_, 1, v_a_1140_);
v___x_1157_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
v_a_1139_ = v_rest_1155_;
v_a_1140_ = v___x_1157_;
v_a_1141_ = v_n_1152_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathEndScan(lean_object* v_bs_1196_){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1197_ = lean_box(0);
v___x_1198_ = l_List_lengthTR___redArg(v_bs_1196_);
v___x_1199_ = lean_unsigned_to_nat(1u);
v___x_1200_ = lean_nat_add(v___x_1198_, v___x_1199_);
lean_dec(v___x_1198_);
v___x_1201_ = lp_lean_x2dftml_LeanFtml_mathEndScan_go(v_bs_1196_, v___x_1197_, v___x_1200_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placeholdersOf_go(lean_object* v_a_1202_, lean_object* v_a_1203_){
_start:
{
lean_object* v_zero_1204_; uint8_t v_isZero_1205_; 
v_zero_1204_ = lean_unsigned_to_nat(0u);
v_isZero_1205_ = lean_nat_dec_eq(v_a_1203_, v_zero_1204_);
if (v_isZero_1205_ == 1)
{
lean_object* v___x_1206_; 
lean_dec(v_a_1203_);
lean_dec(v_a_1202_);
v___x_1206_ = lean_box(0);
return v___x_1206_;
}
else
{
lean_object* v_one_1207_; lean_object* v_n_1208_; lean_object* v___x_1209_; 
v_one_1207_ = lean_unsigned_to_nat(1u);
v_n_1208_ = lean_nat_sub(v_a_1203_, v_one_1207_);
lean_dec(v_a_1203_);
lean_inc(v_a_1202_);
v___x_1209_ = lp_lean_x2dftml_LeanFtml_readPlaceholder(v_a_1202_);
if (lean_obj_tag(v___x_1209_) == 0)
{
if (lean_obj_tag(v_a_1202_) == 0)
{
lean_object* v___x_1210_; 
lean_dec(v_n_1208_);
v___x_1210_ = lean_box(0);
return v___x_1210_;
}
else
{
lean_object* v_tail_1211_; 
v_tail_1211_ = lean_ctor_get(v_a_1202_, 1);
lean_inc(v_tail_1211_);
lean_dec_ref_known(v_a_1202_, 2);
v_a_1202_ = v_tail_1211_;
v_a_1203_ = v_n_1208_;
goto _start;
}
}
else
{
lean_object* v_val_1213_; lean_object* v_fst_1214_; lean_object* v_snd_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1229_; 
v_val_1213_ = lean_ctor_get(v___x_1209_, 0);
lean_inc(v_val_1213_);
lean_dec_ref_known(v___x_1209_, 1);
v_fst_1214_ = lean_ctor_get(v_val_1213_, 0);
v_snd_1215_ = lean_ctor_get(v_val_1213_, 1);
v_isSharedCheck_1229_ = !lean_is_exclusive(v_val_1213_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1217_ = v_val_1213_;
v_isShared_1218_ = v_isSharedCheck_1229_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_snd_1215_);
lean_inc(v_fst_1214_);
lean_dec(v_val_1213_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1229_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1225_; 
v___x_1219_ = l_List_lengthTR___redArg(v_a_1202_);
v___x_1220_ = l_List_lengthTR___redArg(v_snd_1215_);
v___x_1221_ = lean_nat_sub(v___x_1219_, v___x_1220_);
lean_dec(v___x_1220_);
lean_dec(v___x_1219_);
v___x_1222_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc(v_a_1202_);
v___x_1223_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_1202_, v_a_1202_, v___x_1221_, v___x_1222_);
lean_dec(v_a_1202_);
if (v_isShared_1218_ == 0)
{
lean_ctor_set(v___x_1217_, 1, v_fst_1214_);
lean_ctor_set(v___x_1217_, 0, v___x_1223_);
v___x_1225_ = v___x_1217_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v___x_1223_);
lean_ctor_set(v_reuseFailAlloc_1228_, 1, v_fst_1214_);
v___x_1225_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = lp_lean_x2dftml_LeanFtml_placeholdersOf_go(v_snd_1215_, v_n_1208_);
v___x_1227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1225_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
return v___x_1227_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_placeholdersOf(lean_object* v_bs_1230_){
_start:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1231_ = l_List_lengthTR___redArg(v_bs_1230_);
v___x_1232_ = lean_unsigned_to_nat(1u);
v___x_1233_ = lean_nat_add(v___x_1231_, v___x_1232_);
lean_dec(v___x_1231_);
v___x_1234_ = lp_lean_x2dftml_LeanFtml_placeholdersOf_go(v_bs_1230_, v___x_1233_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_optStringBytes(lean_object* v_v_1235_){
_start:
{
switch(lean_obj_tag(v_v_1235_))
{
case 0:
{
lean_object* v_a_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1245_; 
v_a_1236_ = lean_ctor_get(v_v_1235_, 0);
v_isSharedCheck_1245_ = !lean_is_exclusive(v_v_1235_);
if (v_isSharedCheck_1245_ == 0)
{
v___x_1238_ = v_v_1235_;
v_isShared_1239_ = v_isSharedCheck_1245_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_a_1236_);
lean_dec(v_v_1235_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1245_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1243_; 
v___x_1240_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
v___x_1241_ = lp_lean_x2dftml___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00LeanFtml_segBytes_spec__0(v_a_1236_, v___x_1240_);
lean_dec(v_a_1236_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set_tag(v___x_1238_, 1);
lean_ctor_set(v___x_1238_, 0, v___x_1241_);
v___x_1243_ = v___x_1238_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v___x_1241_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
case 6:
{
lean_object* v_a_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1253_; 
v_a_1246_ = lean_ctor_get(v_v_1235_, 0);
v_isSharedCheck_1253_ = !lean_is_exclusive(v_v_1235_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1248_ = v_v_1235_;
v_isShared_1249_ = v_isSharedCheck_1253_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_a_1246_);
lean_dec(v_v_1235_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1253_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
lean_object* v___x_1251_; 
if (v_isShared_1249_ == 0)
{
lean_ctor_set_tag(v___x_1248_, 1);
v___x_1251_ = v___x_1248_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_a_1246_);
v___x_1251_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
return v___x_1251_;
}
}
}
default: 
{
lean_object* v___x_1254_; 
lean_dec(v_v_1235_);
v___x_1254_ = lean_box(0);
return v___x_1254_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllBytes_go(lean_object* v_pat_1255_, lean_object* v_repl_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_){
_start:
{
lean_object* v_zero_1259_; uint8_t v_isZero_1260_; 
v_zero_1259_ = lean_unsigned_to_nat(0u);
v_isZero_1260_ = lean_nat_dec_eq(v_a_1258_, v_zero_1259_);
if (v_isZero_1260_ == 1)
{
lean_object* v___x_1261_; 
lean_dec(v_a_1257_);
lean_dec(v_repl_1256_);
v___x_1261_ = lean_box(0);
return v___x_1261_;
}
else
{
uint8_t v___x_1262_; 
v___x_1262_ = l_List_isEmpty___redArg(v_pat_1255_);
if (v___x_1262_ == 0)
{
lean_object* v_one_1263_; lean_object* v_n_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; uint8_t v___x_1268_; 
v_one_1263_ = lean_unsigned_to_nat(1u);
v_n_1264_ = lean_nat_sub(v_a_1258_, v_one_1263_);
v___x_1265_ = l_List_lengthTR___redArg(v_pat_1255_);
v___x_1266_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc(v___x_1265_);
lean_inc(v_a_1257_);
v___x_1267_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_a_1257_, v_a_1257_, v___x_1265_, v___x_1266_);
v___x_1268_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___x_1267_, v_pat_1255_);
lean_dec(v___x_1267_);
if (v___x_1268_ == 0)
{
lean_dec(v___x_1265_);
if (lean_obj_tag(v_a_1257_) == 0)
{
lean_dec(v_n_1264_);
lean_dec(v_repl_1256_);
return v_a_1257_;
}
else
{
lean_object* v_head_1269_; lean_object* v_tail_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1278_; 
v_head_1269_ = lean_ctor_get(v_a_1257_, 0);
v_tail_1270_ = lean_ctor_get(v_a_1257_, 1);
v_isSharedCheck_1278_ = !lean_is_exclusive(v_a_1257_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1272_ = v_a_1257_;
v_isShared_1273_ = v_isSharedCheck_1278_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_tail_1270_);
lean_inc(v_head_1269_);
lean_dec(v_a_1257_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1278_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1274_; lean_object* v___x_1276_; 
v___x_1274_ = lp_lean_x2dftml_LeanFtml_replaceAllBytes_go(v_pat_1255_, v_repl_1256_, v_tail_1270_, v_n_1264_);
lean_dec(v_n_1264_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 1, v___x_1274_);
v___x_1276_ = v___x_1272_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_head_1269_);
lean_ctor_set(v_reuseFailAlloc_1277_, 1, v___x_1274_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
return v___x_1276_;
}
}
}
}
else
{
lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1279_ = l_List_drop___redArg(v___x_1265_, v_a_1257_);
lean_dec(v_a_1257_);
lean_inc(v_repl_1256_);
v___x_1280_ = lp_lean_x2dftml_LeanFtml_replaceAllBytes_go(v_pat_1255_, v_repl_1256_, v___x_1279_, v_n_1264_);
lean_dec(v_n_1264_);
v___x_1281_ = l_List_appendTR___redArg(v_repl_1256_, v___x_1280_);
return v___x_1281_;
}
}
else
{
lean_dec(v_repl_1256_);
return v_a_1257_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllBytes_go___boxed(lean_object* v_pat_1282_, lean_object* v_repl_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_){
_start:
{
lean_object* v_res_1286_; 
v_res_1286_ = lp_lean_x2dftml_LeanFtml_replaceAllBytes_go(v_pat_1282_, v_repl_1283_, v_a_1284_, v_a_1285_);
lean_dec(v_a_1285_);
lean_dec(v_pat_1282_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllBytes(lean_object* v_src_1287_, lean_object* v_pat_1288_, lean_object* v_repl_1289_){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1290_ = l_List_lengthTR___redArg(v_src_1287_);
v___x_1291_ = lean_unsigned_to_nat(1u);
v___x_1292_ = lean_nat_add(v___x_1290_, v___x_1291_);
lean_dec(v___x_1290_);
v___x_1293_ = lp_lean_x2dftml_LeanFtml_replaceAllBytes_go(v_pat_1288_, v_repl_1289_, v_src_1287_, v___x_1292_);
lean_dec(v___x_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_replaceAllBytes___boxed(lean_object* v_src_1294_, lean_object* v_pat_1295_, lean_object* v_repl_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = lp_lean_x2dftml_LeanFtml_replaceAllBytes(v_src_1294_, v_pat_1295_, v_repl_1296_);
lean_dec(v_pat_1295_);
return v_res_1297_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathRepl___closed__2(void){
_start:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1302_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathRepl___closed__1));
v___x_1303_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1302_);
return v___x_1303_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathRepl___closed__5(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathRepl___closed__4));
v___x_1307_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1306_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathRepl(lean_object* v_tok_1311_){
_start:
{
lean_object* v___y_1313_; lean_object* v___y_1314_; lean_object* v___y_1324_; lean_object* v___y_1325_; lean_object* v___y_1328_; lean_object* v___y_1329_; lean_object* v_rule_1333_; lean_object* v_opts_1334_; lean_object* v___y_1336_; lean_object* v___y_1337_; lean_object* v___y_1338_; lean_object* v___y_1357_; lean_object* v___y_1358_; lean_object* v___y_1359_; lean_object* v___y_1362_; lean_object* v___y_1363_; lean_object* v___y_1364_; lean_object* v___y_1384_; lean_object* v___y_1385_; lean_object* v___y_1388_; lean_object* v___y_1389_; lean_object* v___y_1399_; lean_object* v___x_1407_; lean_object* v___x_1408_; 
v_rule_1333_ = lean_ctor_get(v_tok_1311_, 0);
v_opts_1334_ = lean_ctor_get(v_tok_1311_, 1);
v___x_1407_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10);
v___x_1408_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_1334_, v___x_1407_);
if (lean_obj_tag(v___x_1408_) == 0)
{
lean_object* v___x_1409_; 
v___x_1409_ = lean_box(0);
v___y_1399_ = v___x_1409_;
goto v___jp_1398_;
}
else
{
lean_object* v_val_1410_; lean_object* v___x_1411_; 
v_val_1410_ = lean_ctor_get(v___x_1408_, 0);
lean_inc(v_val_1410_);
lean_dec_ref_known(v___x_1408_, 1);
v___x_1411_ = lp_lean_x2dftml_LeanFtml_optStringBytes(v_val_1410_);
if (lean_obj_tag(v___x_1411_) == 0)
{
v___y_1399_ = v___x_1411_;
goto v___jp_1398_;
}
else
{
lean_object* v_val_1412_; 
v_val_1412_ = lean_ctor_get(v___x_1411_, 0);
lean_inc(v_val_1412_);
v___y_1388_ = v___x_1411_;
v___y_1389_ = v_val_1412_;
goto v___jp_1387_;
}
}
v___jp_1312_:
{
uint8_t v___x_1315_; 
v___x_1315_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_findSub_spec__0(v___y_1313_, v___y_1314_);
if (v___x_1315_ == 0)
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1316_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__18));
v___x_1317_ = l_List_appendTR___redArg(v___x_1316_, v___y_1313_);
v___x_1318_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathRepl___closed__0));
v___x_1319_ = l_List_appendTR___redArg(v___x_1317_, v___x_1318_);
v___x_1320_ = l_List_appendTR___redArg(v___x_1319_, v___y_1314_);
v___x_1321_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__3));
v___x_1322_ = l_List_appendTR___redArg(v___x_1320_, v___x_1321_);
return v___x_1322_;
}
else
{
lean_dec(v___y_1314_);
return v___y_1313_;
}
}
v___jp_1323_:
{
if (lean_obj_tag(v___y_1324_) == 0)
{
lean_inc(v___y_1325_);
v___y_1313_ = v___y_1325_;
v___y_1314_ = v___y_1325_;
goto v___jp_1312_;
}
else
{
lean_object* v_val_1326_; 
v_val_1326_ = lean_ctor_get(v___y_1324_, 0);
lean_inc(v_val_1326_);
lean_dec_ref_known(v___y_1324_, 1);
v___y_1313_ = v___y_1325_;
v___y_1314_ = v_val_1326_;
goto v___jp_1312_;
}
}
v___jp_1327_:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
lean_inc(v___y_1328_);
v___x_1330_ = l_List_appendTR___redArg(v___y_1328_, v___y_1329_);
v___x_1331_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathRepl___closed__2, &lp_lean_x2dftml_LeanFtml_mathRepl___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_mathRepl___closed__2);
v___x_1332_ = l_List_appendTR___redArg(v___x_1330_, v___x_1331_);
return v___x_1332_;
}
v___jp_1335_:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1339_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__2, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__2);
v___x_1340_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_1334_, v___x_1339_);
if (lean_obj_tag(v___x_1340_) == 1)
{
lean_object* v_val_1341_; 
v_val_1341_ = lean_ctor_get(v___x_1340_, 0);
lean_inc(v_val_1341_);
lean_dec_ref_known(v___x_1340_, 1);
if (lean_obj_tag(v_val_1341_) == 0)
{
lean_object* v_a_1342_; lean_object* v___x_1343_; uint8_t v___x_1344_; 
v_a_1342_ = lean_ctor_get(v_val_1341_, 0);
lean_inc(v_a_1342_);
lean_dec_ref_known(v_val_1341_, 1);
v___x_1343_ = lean_obj_once(&lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__6, &lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__6_once, _init_lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__6);
v___x_1344_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_a_1342_, v___x_1343_);
lean_dec(v_a_1342_);
if (v___x_1344_ == 0)
{
lean_object* v___x_1345_; 
lean_dec(v___y_1338_);
lean_inc(v___y_1337_);
v___x_1345_ = l_List_appendTR___redArg(v___y_1337_, v___y_1336_);
return v___x_1345_;
}
else
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1346_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__18));
lean_inc(v___y_1337_);
v___x_1347_ = l_List_appendTR___redArg(v___x_1346_, v___y_1337_);
v___x_1348_ = l_List_appendTR___redArg(v___x_1347_, v___y_1336_);
v___x_1349_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathRepl___closed__0));
v___x_1350_ = l_List_appendTR___redArg(v___x_1348_, v___x_1349_);
v___x_1351_ = l_List_appendTR___redArg(v___x_1350_, v___y_1338_);
v___x_1352_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__3));
v___x_1353_ = l_List_appendTR___redArg(v___x_1351_, v___x_1352_);
return v___x_1353_;
}
}
else
{
lean_object* v___x_1354_; 
lean_dec(v_val_1341_);
lean_dec(v___y_1338_);
lean_inc(v___y_1337_);
v___x_1354_ = l_List_appendTR___redArg(v___y_1337_, v___y_1336_);
return v___x_1354_;
}
}
else
{
lean_object* v___x_1355_; 
lean_dec(v___x_1340_);
lean_dec(v___y_1338_);
lean_inc(v___y_1337_);
v___x_1355_ = l_List_appendTR___redArg(v___y_1337_, v___y_1336_);
return v___x_1355_;
}
}
v___jp_1356_:
{
if (lean_obj_tag(v___y_1357_) == 0)
{
lean_inc(v___y_1359_);
v___y_1336_ = v___y_1359_;
v___y_1337_ = v___y_1358_;
v___y_1338_ = v___y_1359_;
goto v___jp_1335_;
}
else
{
lean_object* v_val_1360_; 
v_val_1360_ = lean_ctor_get(v___y_1357_, 0);
lean_inc(v_val_1360_);
lean_dec_ref_known(v___y_1357_, 1);
v___y_1336_ = v___y_1359_;
v___y_1337_ = v___y_1358_;
v___y_1338_ = v_val_1360_;
goto v___jp_1335_;
}
}
v___jp_1361_:
{
lean_object* v___x_1365_; uint8_t v___x_1366_; 
v___x_1365_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__0));
v___x_1366_ = lean_string_dec_eq(v_rule_1333_, v___x_1365_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; uint8_t v___x_1368_; 
v___x_1367_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__2));
v___x_1368_ = lean_string_dec_eq(v_rule_1333_, v___x_1367_);
if (v___x_1368_ == 0)
{
lean_object* v___x_1369_; uint8_t v___x_1370_; 
v___x_1369_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathRepl___closed__3));
v___x_1370_ = lean_string_dec_eq(v_rule_1333_, v___x_1369_);
if (v___x_1370_ == 0)
{
lean_dec(v___y_1363_);
return v___y_1362_;
}
else
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathRepl___closed__5, &lp_lean_x2dftml_LeanFtml_mathRepl___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_mathRepl___closed__5);
if (lean_obj_tag(v___y_1363_) == 0)
{
v___y_1328_ = v___x_1371_;
v___y_1329_ = v___y_1362_;
goto v___jp_1327_;
}
else
{
lean_object* v_val_1372_; 
lean_dec(v___y_1362_);
v_val_1372_ = lean_ctor_get(v___y_1363_, 0);
lean_inc(v_val_1372_);
lean_dec_ref_known(v___y_1363_, 1);
v___y_1328_ = v___x_1371_;
v___y_1329_ = v_val_1372_;
goto v___jp_1327_;
}
}
}
else
{
lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1373_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__1, &lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_emailDescrMatch___closed__1);
v___x_1374_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_1334_, v___x_1373_);
if (lean_obj_tag(v___x_1374_) == 0)
{
v___y_1324_ = v___y_1363_;
v___y_1325_ = v___y_1362_;
goto v___jp_1323_;
}
else
{
lean_object* v_val_1375_; lean_object* v___x_1376_; 
v_val_1375_ = lean_ctor_get(v___x_1374_, 0);
lean_inc(v_val_1375_);
lean_dec_ref_known(v___x_1374_, 1);
v___x_1376_ = lp_lean_x2dftml_LeanFtml_optStringBytes(v_val_1375_);
if (lean_obj_tag(v___x_1376_) == 0)
{
v___y_1324_ = v___y_1363_;
v___y_1325_ = v___y_1362_;
goto v___jp_1323_;
}
else
{
lean_object* v_val_1377_; 
lean_dec(v___y_1362_);
v_val_1377_ = lean_ctor_get(v___x_1376_, 0);
lean_inc(v_val_1377_);
lean_dec_ref_known(v___x_1376_, 1);
v___y_1324_ = v___y_1363_;
v___y_1325_ = v_val_1377_;
goto v___jp_1323_;
}
}
}
}
else
{
lean_object* v___x_1378_; lean_object* v___x_1379_; 
v___x_1378_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__8, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__8);
v___x_1379_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_1334_, v___x_1378_);
if (lean_obj_tag(v___x_1379_) == 0)
{
v___y_1357_ = v___y_1363_;
v___y_1358_ = v___y_1364_;
v___y_1359_ = v___y_1362_;
goto v___jp_1356_;
}
else
{
lean_object* v_val_1380_; lean_object* v___x_1381_; 
v_val_1380_ = lean_ctor_get(v___x_1379_, 0);
lean_inc(v_val_1380_);
lean_dec_ref_known(v___x_1379_, 1);
v___x_1381_ = lp_lean_x2dftml_LeanFtml_optStringBytes(v_val_1380_);
if (lean_obj_tag(v___x_1381_) == 0)
{
v___y_1357_ = v___y_1363_;
v___y_1358_ = v___y_1364_;
v___y_1359_ = v___y_1362_;
goto v___jp_1356_;
}
else
{
lean_object* v_val_1382_; 
lean_dec(v___y_1362_);
v_val_1382_ = lean_ctor_get(v___x_1381_, 0);
lean_inc(v_val_1382_);
lean_dec_ref_known(v___x_1381_, 1);
v___y_1357_ = v___y_1363_;
v___y_1358_ = v___y_1364_;
v___y_1359_ = v_val_1382_;
goto v___jp_1356_;
}
}
}
}
v___jp_1383_:
{
lean_object* v___x_1386_; 
v___x_1386_ = lean_box(0);
v___y_1362_ = v___y_1385_;
v___y_1363_ = v___y_1384_;
v___y_1364_ = v___x_1386_;
goto v___jp_1361_;
}
v___jp_1387_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1390_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__12, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__12);
v___x_1391_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_1334_, v___x_1390_);
if (lean_obj_tag(v___x_1391_) == 1)
{
lean_object* v_val_1392_; 
v_val_1392_ = lean_ctor_get(v___x_1391_, 0);
lean_inc(v_val_1392_);
lean_dec_ref_known(v___x_1391_, 1);
if (lean_obj_tag(v_val_1392_) == 0)
{
lean_object* v_a_1393_; lean_object* v___x_1394_; uint8_t v___x_1395_; 
v_a_1393_ = lean_ctor_get(v_val_1392_, 0);
lean_inc(v_a_1393_);
lean_dec_ref_known(v_val_1392_, 1);
v___x_1394_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__14, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__14);
v___x_1395_ = lp_lean_x2dftml_List_beq___at___00LeanFtml_omGet_spec__0(v_a_1393_, v___x_1394_);
lean_dec(v_a_1393_);
if (v___x_1395_ == 0)
{
lean_object* v___x_1396_; 
v___x_1396_ = lean_box(0);
v___y_1362_ = v___y_1389_;
v___y_1363_ = v___y_1388_;
v___y_1364_ = v___x_1396_;
goto v___jp_1361_;
}
else
{
lean_object* v___x_1397_; 
v___x_1397_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathRepl___closed__6));
v___y_1362_ = v___y_1389_;
v___y_1363_ = v___y_1388_;
v___y_1364_ = v___x_1397_;
goto v___jp_1361_;
}
}
else
{
lean_dec(v_val_1392_);
v___y_1384_ = v___y_1388_;
v___y_1385_ = v___y_1389_;
goto v___jp_1383_;
}
}
else
{
lean_dec(v___x_1391_);
v___y_1384_ = v___y_1388_;
v___y_1385_ = v___y_1389_;
goto v___jp_1383_;
}
}
v___jp_1398_:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1400_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__8, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__8_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__8);
v___x_1401_ = lp_lean_x2dftml_LeanFtml_omGet(v_opts_1334_, v___x_1400_);
if (lean_obj_tag(v___x_1401_) == 0)
{
lean_object* v___x_1402_; 
v___x_1402_ = lean_box(0);
v___y_1388_ = v___y_1399_;
v___y_1389_ = v___x_1402_;
goto v___jp_1387_;
}
else
{
lean_object* v_val_1403_; lean_object* v___x_1404_; 
v_val_1403_ = lean_ctor_get(v___x_1401_, 0);
lean_inc(v_val_1403_);
lean_dec_ref_known(v___x_1401_, 1);
v___x_1404_ = lp_lean_x2dftml_LeanFtml_optStringBytes(v_val_1403_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v___x_1405_; 
v___x_1405_ = lean_box(0);
v___y_1388_ = v___y_1399_;
v___y_1389_ = v___x_1405_;
goto v___jp_1387_;
}
else
{
lean_object* v_val_1406_; 
v_val_1406_ = lean_ctor_get(v___x_1404_, 0);
lean_inc(v_val_1406_);
lean_dec_ref_known(v___x_1404_, 1);
v___y_1388_ = v___y_1399_;
v___y_1389_ = v_val_1406_;
goto v___jp_1387_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathRepl___boxed(lean_object* v_tok_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = lp_lean_x2dftml_LeanFtml_mathRepl(v_tok_1413_);
lean_dec_ref(v_tok_1413_);
return v_res_1414_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_mathSuppressRule(lean_object* v_rule_1420_){
_start:
{
lean_object* v___x_1421_; uint8_t v___x_1422_; 
v___x_1421_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__0));
v___x_1422_ = lean_string_dec_eq(v_rule_1420_, v___x_1421_);
if (v___x_1422_ == 0)
{
lean_object* v___x_1423_; uint8_t v___x_1424_; 
v___x_1423_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__1));
v___x_1424_ = lean_string_dec_eq(v_rule_1420_, v___x_1423_);
if (v___x_1424_ == 0)
{
lean_object* v___x_1425_; uint8_t v___x_1426_; 
v___x_1425_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__2));
v___x_1426_ = lean_string_dec_eq(v_rule_1420_, v___x_1425_);
if (v___x_1426_ == 0)
{
lean_object* v___x_1427_; uint8_t v___x_1428_; 
v___x_1427_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__3));
v___x_1428_ = lean_string_dec_eq(v_rule_1420_, v___x_1427_);
if (v___x_1428_ == 0)
{
lean_object* v___x_1429_; uint8_t v___x_1430_; 
v___x_1429_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathSuppressRule___closed__4));
v___x_1430_ = lean_string_dec_eq(v_rule_1420_, v___x_1429_);
return v___x_1430_;
}
else
{
return v___x_1428_;
}
}
else
{
return v___x_1426_;
}
}
else
{
return v___x_1424_;
}
}
else
{
return v___x_1422_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathSuppressRule___boxed(lean_object* v_rule_1431_){
_start:
{
uint8_t v_res_1432_; lean_object* v_r_1433_; 
v_res_1432_ = lp_lean_x2dftml_LeanFtml_mathSuppressRule(v_rule_1431_);
lean_dec_ref(v_rule_1431_);
v_r_1433_ = lean_box(v_res_1432_);
return v_r_1433_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathResolveGo_go(lean_object* v_toks_1434_, lean_object* v_seen_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_){
_start:
{
lean_object* v_zero_1439_; uint8_t v_isZero_1440_; 
v_zero_1439_ = lean_unsigned_to_nat(0u);
v_isZero_1440_ = lean_nat_dec_eq(v_a_1438_, v_zero_1439_);
if (v_isZero_1440_ == 1)
{
lean_dec(v_a_1438_);
lean_dec(v_a_1437_);
return v_a_1436_;
}
else
{
if (lean_obj_tag(v_a_1437_) == 0)
{
lean_dec(v_a_1438_);
return v_a_1436_;
}
else
{
lean_object* v_head_1441_; lean_object* v_tail_1442_; lean_object* v_fst_1443_; lean_object* v_snd_1444_; lean_object* v_one_1445_; lean_object* v_n_1446_; lean_object* v___x_1447_; 
v_head_1441_ = lean_ctor_get(v_a_1437_, 0);
lean_inc(v_head_1441_);
v_tail_1442_ = lean_ctor_get(v_a_1437_, 1);
lean_inc(v_tail_1442_);
lean_dec_ref_known(v_a_1437_, 2);
v_fst_1443_ = lean_ctor_get(v_head_1441_, 0);
lean_inc(v_fst_1443_);
v_snd_1444_ = lean_ctor_get(v_head_1441_, 1);
lean_inc_n(v_snd_1444_, 2);
lean_dec(v_head_1441_);
v_one_1445_ = lean_unsigned_to_nat(1u);
v_n_1446_ = lean_nat_sub(v_a_1438_, v_one_1445_);
lean_dec(v_a_1438_);
v___x_1447_ = l_List_get_x3fInternal___redArg(v_toks_1434_, v_snd_1444_);
if (lean_obj_tag(v___x_1447_) == 0)
{
lean_dec(v_snd_1444_);
lean_dec(v_fst_1443_);
v_a_1437_ = v_tail_1442_;
v_a_1438_ = v_n_1446_;
goto _start;
}
else
{
lean_object* v_val_1449_; lean_object* v_rule_1450_; uint8_t v___x_1451_; 
v_val_1449_ = lean_ctor_get(v___x_1447_, 0);
lean_inc(v_val_1449_);
lean_dec_ref_known(v___x_1447_, 1);
v_rule_1450_ = lean_ctor_get(v_val_1449_, 0);
v___x_1451_ = lp_lean_x2dftml_LeanFtml_mathSuppressRule(v_rule_1450_);
if (v___x_1451_ == 0)
{
uint8_t v___x_1452_; 
v___x_1452_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_snd_1444_, v_seen_1435_);
lean_dec(v_snd_1444_);
if (v___x_1452_ == 0)
{
lean_object* v_src_1453_; lean_object* v___x_1454_; lean_object* v_rep_1455_; lean_object* v___x_1456_; 
v_src_1453_ = lp_lean_x2dftml_LeanFtml_mathRepl(v_val_1449_);
lean_dec(v_val_1449_);
lean_inc(v_src_1453_);
v___x_1454_ = lp_lean_x2dftml_LeanFtml_placeholdersOf(v_src_1453_);
lean_inc(v_n_1446_);
v_rep_1455_ = lp_lean_x2dftml_LeanFtml_mathResolveGo_go(v_toks_1434_, v_seen_1435_, v_src_1453_, v___x_1454_, v_n_1446_);
v___x_1456_ = lp_lean_x2dftml_LeanFtml_replaceAllBytes(v_a_1436_, v_fst_1443_, v_rep_1455_);
lean_dec(v_fst_1443_);
v_a_1436_ = v___x_1456_;
v_a_1437_ = v_tail_1442_;
v_a_1438_ = v_n_1446_;
goto _start;
}
else
{
lean_dec(v_val_1449_);
lean_dec(v_fst_1443_);
v_a_1437_ = v_tail_1442_;
v_a_1438_ = v_n_1446_;
goto _start;
}
}
else
{
lean_object* v___x_1459_; 
lean_dec(v_val_1449_);
lean_dec(v_n_1446_);
lean_dec(v_snd_1444_);
lean_dec(v_fst_1443_);
lean_dec(v_tail_1442_);
lean_dec(v_a_1436_);
v___x_1459_ = lean_box(0);
return v___x_1459_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathResolveGo_go___boxed(lean_object* v_toks_1460_, lean_object* v_seen_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_){
_start:
{
lean_object* v_res_1465_; 
v_res_1465_ = lp_lean_x2dftml_LeanFtml_mathResolveGo_go(v_toks_1460_, v_seen_1461_, v_a_1462_, v_a_1463_, v_a_1464_);
lean_dec(v_seen_1461_);
lean_dec(v_toks_1460_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathResolveGo(lean_object* v_content_1466_, lean_object* v_toks_1467_, lean_object* v_seen_1468_, lean_object* v_fuel_1469_){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; 
lean_inc(v_content_1466_);
v___x_1470_ = lp_lean_x2dftml_LeanFtml_placeholdersOf(v_content_1466_);
v___x_1471_ = lp_lean_x2dftml_LeanFtml_mathResolveGo_go(v_toks_1467_, v_seen_1468_, v_content_1466_, v___x_1470_, v_fuel_1469_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathResolveGo___boxed(lean_object* v_content_1472_, lean_object* v_toks_1473_, lean_object* v_seen_1474_, lean_object* v_fuel_1475_){
_start:
{
lean_object* v_res_1476_; 
v_res_1476_ = lp_lean_x2dftml_LeanFtml_mathResolveGo(v_content_1472_, v_toks_1473_, v_seen_1474_, v_fuel_1475_);
lean_dec(v_seen_1474_);
lean_dec(v_toks_1473_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathResolve(lean_object* v_content_1477_, lean_object* v_toks_1478_){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1479_ = lean_box(0);
v___x_1480_ = lean_unsigned_to_nat(10000u);
v___x_1481_ = lp_lean_x2dftml_LeanFtml_mathResolveGo(v_content_1477_, v_toks_1478_, v___x_1479_, v___x_1480_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathResolve___boxed(lean_object* v_content_1482_, lean_object* v_toks_1483_){
_start:
{
lean_object* v_res_1484_; 
v_res_1484_ = lp_lean_x2dftml_LeanFtml_mathResolve(v_content_1482_, v_toks_1483_);
lean_dec(v_toks_1483_);
return v_res_1484_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_mathinlineMatch___closed__2(void){
_start:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1487_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathinlineMatch___closed__1));
v___x_1488_ = l_String_toListImpl(v___x_1487_);
return v___x_1488_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathinlineMatch(lean_object* v_bs_1489_, lean_object* v_toks_1490_){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1491_ = lean_box(0);
v___x_1492_ = ((lean_object*)(lp_lean_x2dftml_List_findSome_x3f___at___00LeanFtml_urlDescrMatch_spec__0___closed__2));
v___x_1493_ = lp_lean_x2dftml_LeanFtml_matchLitBytes(v___x_1492_, v_bs_1489_);
if (lean_obj_tag(v___x_1493_) == 0)
{
lean_object* v___x_1494_; 
lean_dec(v_toks_1490_);
v___x_1494_ = lean_box(0);
return v___x_1494_;
}
else
{
lean_object* v_val_1495_; lean_object* v___x_1496_; 
v_val_1495_ = lean_ctor_get(v___x_1493_, 0);
lean_inc(v_val_1495_);
lean_dec_ref_known(v___x_1493_, 1);
v___x_1496_ = lp_lean_x2dftml_LeanFtml_mathEndScan(v_val_1495_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v___x_1497_; 
lean_dec(v_toks_1490_);
v___x_1497_ = lean_box(0);
return v___x_1497_;
}
else
{
lean_object* v_val_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1522_; 
v_val_1498_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1500_ = v___x_1496_;
v_isShared_1501_ = v_isSharedCheck_1522_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_val_1498_);
lean_dec(v___x_1496_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1522_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v_fst_1502_; lean_object* v_snd_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1521_; 
v_fst_1502_ = lean_ctor_get(v_val_1498_, 0);
v_snd_1503_ = lean_ctor_get(v_val_1498_, 1);
v_isSharedCheck_1521_ = !lean_is_exclusive(v_val_1498_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1505_ = v_val_1498_;
v_isShared_1506_ = v_isSharedCheck_1521_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_snd_1503_);
lean_inc(v_fst_1502_);
lean_dec(v_val_1498_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1521_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1507_; lean_object* v_content_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1513_; 
v___x_1507_ = lp_lean_x2dftml_LeanFtml_trimBytes(v_fst_1502_);
lean_dec(v_fst_1502_);
v_content_1508_ = lp_lean_x2dftml_LeanFtml_mathResolve(v___x_1507_, v_toks_1490_);
v___x_1509_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathinlineMatch___closed__0));
v___x_1510_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_mathinlineMatch___closed__2, &lp_lean_x2dftml_LeanFtml_mathinlineMatch___closed__2_once, _init_lp_lean_x2dftml_LeanFtml_mathinlineMatch___closed__2);
v___x_1511_ = lp_lean_x2dftml_LeanFtml_textVal(v_content_1508_);
if (v_isShared_1506_ == 0)
{
lean_ctor_set(v___x_1505_, 1, v___x_1511_);
lean_ctor_set(v___x_1505_, 0, v___x_1510_);
v___x_1513_ = v___x_1505_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v___x_1510_);
lean_ctor_set(v_reuseFailAlloc_1520_, 1, v___x_1511_);
v___x_1513_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1518_; 
v___x_1514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1514_, 0, v___x_1513_);
lean_ctor_set(v___x_1514_, 1, v___x_1491_);
v___x_1515_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_1509_, v___x_1514_, v_toks_1490_);
v___x_1516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1516_, 0, v_snd_1503_);
lean_ctor_set(v___x_1516_, 1, v___x_1515_);
if (v_isShared_1501_ == 0)
{
lean_ctor_set(v___x_1500_, 0, v___x_1516_);
v___x_1518_ = v___x_1500_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v___x_1516_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_mathinlineRule(lean_object* v_st_1526_){
_start:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_mathinlineRule___closed__1));
v___x_1528_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1526_, v___x_1527_);
return v___x_1528_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_iwSiteB(lean_object* v_b_1529_){
_start:
{
uint8_t v___x_1535_; 
v___x_1535_ = lp_lean_x2dftml_LeanFtml_isAlphaB(v_b_1529_);
if (v___x_1535_ == 0)
{
lean_object* v___x_1536_; uint8_t v___x_1537_; 
v___x_1536_ = lean_unsigned_to_nat(48u);
v___x_1537_ = lean_nat_dec_le(v___x_1536_, v_b_1529_);
if (v___x_1537_ == 0)
{
goto v___jp_1530_;
}
else
{
lean_object* v___x_1538_; uint8_t v___x_1539_; 
v___x_1538_ = lean_unsigned_to_nat(57u);
v___x_1539_ = lean_nat_dec_le(v_b_1529_, v___x_1538_);
if (v___x_1539_ == 0)
{
goto v___jp_1530_;
}
else
{
return v___x_1539_;
}
}
}
else
{
return v___x_1535_;
}
v___jp_1530_:
{
lean_object* v___x_1531_; uint8_t v___x_1532_; 
v___x_1531_ = lean_unsigned_to_nat(95u);
v___x_1532_ = lean_nat_dec_eq(v_b_1529_, v___x_1531_);
if (v___x_1532_ == 0)
{
lean_object* v___x_1533_; uint8_t v___x_1534_; 
v___x_1533_ = lean_unsigned_to_nat(46u);
v___x_1534_ = lean_nat_dec_eq(v_b_1529_, v___x_1533_);
return v___x_1534_;
}
else
{
return v___x_1532_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iwSiteB___boxed(lean_object* v_b_1540_){
_start:
{
uint8_t v_res_1541_; lean_object* v_r_1542_; 
v_res_1541_ = lp_lean_x2dftml_LeanFtml_iwSiteB(v_b_1540_);
lean_dec(v_b_1540_);
v_r_1542_ = lean_box(v_res_1541_);
return v_r_1542_;
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_iwPageB(lean_object* v_b_1543_){
_start:
{
uint8_t v___x_1567_; 
v___x_1567_ = lp_lean_x2dftml_LeanFtml_isAlphaB(v_b_1543_);
if (v___x_1567_ == 0)
{
lean_object* v___x_1568_; uint8_t v___x_1569_; 
v___x_1568_ = lean_unsigned_to_nat(48u);
v___x_1569_ = lean_nat_dec_le(v___x_1568_, v_b_1543_);
if (v___x_1569_ == 0)
{
goto v___jp_1544_;
}
else
{
lean_object* v___x_1570_; uint8_t v___x_1571_; 
v___x_1570_ = lean_unsigned_to_nat(57u);
v___x_1571_ = lean_nat_dec_le(v_b_1543_, v___x_1570_);
if (v___x_1571_ == 0)
{
goto v___jp_1544_;
}
else
{
return v___x_1571_;
}
}
}
else
{
return v___x_1567_;
}
v___jp_1544_:
{
lean_object* v___x_1545_; uint8_t v___x_1546_; 
v___x_1545_ = lean_unsigned_to_nat(95u);
v___x_1546_ = lean_nat_dec_eq(v_b_1543_, v___x_1545_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1547_; uint8_t v___x_1548_; 
v___x_1547_ = lean_unsigned_to_nat(47u);
v___x_1548_ = lean_nat_dec_eq(v_b_1543_, v___x_1547_);
if (v___x_1548_ == 0)
{
lean_object* v___x_1549_; uint8_t v___x_1550_; 
v___x_1549_ = lean_unsigned_to_nat(61u);
v___x_1550_ = lean_nat_dec_eq(v_b_1543_, v___x_1549_);
if (v___x_1550_ == 0)
{
lean_object* v___x_1551_; uint8_t v___x_1552_; 
v___x_1551_ = lean_unsigned_to_nat(38u);
v___x_1552_ = lean_nat_dec_eq(v_b_1543_, v___x_1551_);
if (v___x_1552_ == 0)
{
lean_object* v___x_1553_; uint8_t v___x_1554_; 
v___x_1553_ = lean_unsigned_to_nat(126u);
v___x_1554_ = lean_nat_dec_eq(v_b_1543_, v___x_1553_);
if (v___x_1554_ == 0)
{
lean_object* v___x_1555_; uint8_t v___x_1556_; 
v___x_1555_ = lean_unsigned_to_nat(35u);
v___x_1556_ = lean_nat_dec_eq(v_b_1543_, v___x_1555_);
if (v___x_1556_ == 0)
{
lean_object* v___x_1557_; uint8_t v___x_1558_; 
v___x_1557_ = lean_unsigned_to_nat(46u);
v___x_1558_ = lean_nat_dec_eq(v_b_1543_, v___x_1557_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; uint8_t v___x_1560_; 
v___x_1559_ = lean_unsigned_to_nat(58u);
v___x_1560_ = lean_nat_dec_eq(v_b_1543_, v___x_1559_);
if (v___x_1560_ == 0)
{
lean_object* v___x_1561_; uint8_t v___x_1562_; 
v___x_1561_ = lean_unsigned_to_nat(59u);
v___x_1562_ = lean_nat_dec_eq(v_b_1543_, v___x_1561_);
if (v___x_1562_ == 0)
{
lean_object* v___x_1563_; uint8_t v___x_1564_; 
v___x_1563_ = lean_unsigned_to_nat(45u);
v___x_1564_ = lean_nat_dec_eq(v_b_1543_, v___x_1563_);
if (v___x_1564_ == 0)
{
lean_object* v___x_1565_; uint8_t v___x_1566_; 
v___x_1565_ = lean_unsigned_to_nat(43u);
v___x_1566_ = lean_nat_dec_eq(v_b_1543_, v___x_1565_);
return v___x_1566_;
}
else
{
return v___x_1564_;
}
}
else
{
return v___x_1562_;
}
}
else
{
return v___x_1560_;
}
}
else
{
return v___x_1558_;
}
}
else
{
return v___x_1556_;
}
}
else
{
return v___x_1554_;
}
}
else
{
return v___x_1552_;
}
}
else
{
return v___x_1550_;
}
}
else
{
return v___x_1548_;
}
}
else
{
return v___x_1546_;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iwPageB___boxed(lean_object* v_b_1572_){
_start:
{
uint8_t v_res_1573_; lean_object* v_r_1574_; 
v_res_1573_ = lp_lean_x2dftml_LeanFtml_iwPageB(v_b_1572_);
lean_dec(v_b_1572_);
v_r_1574_ = lean_box(v_res_1573_);
return v_r_1574_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__1(void){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1576_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__0));
v___x_1577_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1576_);
return v___x_1577_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__3(void){
_start:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1579_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__2));
v___x_1580_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1579_);
return v___x_1580_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__5(void){
_start:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__4));
v___x_1583_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1582_);
return v___x_1583_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__7(void){
_start:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1585_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__6));
v___x_1586_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1585_);
return v___x_1586_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__9(void){
_start:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1588_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__8));
v___x_1589_ = lp_lean_x2dftml_LeanFtml_litBytes(v___x_1588_);
return v___x_1589_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__10(void){
_start:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1590_ = lean_box(0);
v___x_1591_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__9, &lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__9_once, _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__9);
v___x_1592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1592_, 0, v___x_1591_);
lean_ctor_set(v___x_1592_, 1, v___x_1590_);
return v___x_1592_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__11(void){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1593_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__10, &lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__10);
v___x_1594_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__7, &lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__7_once, _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__7);
v___x_1595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1594_);
lean_ctor_set(v___x_1595_, 1, v___x_1593_);
return v___x_1595_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__12(void){
_start:
{
lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1596_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__11, &lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__11_once, _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__11);
v___x_1597_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__5, &lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__5_once, _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__5);
v___x_1598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1597_);
lean_ctor_set(v___x_1598_, 1, v___x_1596_);
return v___x_1598_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__13(void){
_start:
{
lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1599_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__12, &lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__12_once, _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__12);
v___x_1600_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__3, &lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__3);
v___x_1601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1600_);
lean_ctor_set(v___x_1601_, 1, v___x_1599_);
return v___x_1601_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__14(void){
_start:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1602_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__13, &lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__13_once, _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__13);
v___x_1603_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__1, &lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__1);
v___x_1604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1603_);
lean_ctor_set(v___x_1604_, 1, v___x_1602_);
return v___x_1604_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_iwSiteTable(void){
_start:
{
lean_object* v___x_1605_; 
v___x_1605_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__14, &lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__14_once, _init_lp_lean_x2dftml_LeanFtml_iwSiteTable___closed__14);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iwHead(lean_object* v_bs_1610_){
_start:
{
lean_object* v___x_1611_; lean_object* v_sLen_1612_; lean_object* v___x_1613_; uint8_t v___x_1614_; 
v___x_1611_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iwHead___closed__0));
lean_inc(v_bs_1610_);
v_sLen_1612_ = lp_lean_x2dftml_LeanFtml_runOf(v___x_1611_, v_bs_1610_);
v___x_1613_ = lean_unsigned_to_nat(0u);
v___x_1614_ = lean_nat_dec_eq(v_sLen_1612_, v___x_1613_);
if (v___x_1614_ == 0)
{
lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; uint8_t v___x_1618_; 
lean_inc(v_sLen_1612_);
v___x_1615_ = l_List_get_x3fInternal___redArg(v_bs_1610_, v_sLen_1612_);
v___x_1616_ = lean_unsigned_to_nat(58u);
v___x_1617_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iwHead___closed__1));
v___x_1618_ = l_instBEqOption_beq___at___00Lean_Grind_instBEqConfig_beq_spec__0(v___x_1615_, v___x_1617_);
lean_dec(v___x_1615_);
if (v___x_1618_ == 0)
{
lean_object* v___x_1619_; 
lean_dec(v_sLen_1612_);
lean_dec(v_bs_1610_);
v___x_1619_ = lean_box(0);
return v___x_1619_;
}
else
{
lean_object* v___x_1620_; lean_object* v_pStart_1621_; lean_object* v___x_1622_; 
v___x_1620_ = lean_unsigned_to_nat(1u);
v_pStart_1621_ = lean_nat_add(v_sLen_1612_, v___x_1620_);
lean_inc(v_pStart_1621_);
v___x_1622_ = l_List_get_x3fInternal___redArg(v_bs_1610_, v_pStart_1621_);
if (lean_obj_tag(v___x_1622_) == 0)
{
lean_object* v___x_1623_; 
lean_dec(v_pStart_1621_);
lean_dec(v_sLen_1612_);
lean_dec(v_bs_1610_);
v___x_1623_ = lean_box(0);
return v___x_1623_;
}
else
{
lean_object* v_val_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1645_; 
v_val_1624_ = lean_ctor_get(v___x_1622_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1622_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1626_ = v___x_1622_;
v_isShared_1627_ = v_isSharedCheck_1645_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_val_1624_);
lean_dec(v___x_1622_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1645_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
uint8_t v___x_1628_; 
v___x_1628_ = lean_nat_dec_eq(v_val_1624_, v___x_1616_);
if (v___x_1628_ == 0)
{
uint8_t v___x_1629_; 
v___x_1629_ = lp_lean_x2dftml_LeanFtml_iwPageB(v_val_1624_);
lean_dec(v_val_1624_);
if (v___x_1629_ == 0)
{
lean_object* v___x_1630_; 
lean_del_object(v___x_1626_);
lean_dec(v_pStart_1621_);
lean_dec(v_sLen_1612_);
lean_dec(v_bs_1610_);
v___x_1630_ = lean_box(0);
return v___x_1630_;
}
else
{
lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v_pLen_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1642_; 
v___x_1631_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_iwHead___closed__2));
lean_inc(v_pStart_1621_);
v___x_1632_ = l_List_drop___redArg(v_pStart_1621_, v_bs_1610_);
lean_inc_n(v___x_1632_, 2);
v_pLen_1633_ = lp_lean_x2dftml_LeanFtml_runOf(v___x_1631_, v___x_1632_);
v___x_1634_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc(v_bs_1610_);
v___x_1635_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_bs_1610_, v_bs_1610_, v_sLen_1612_, v___x_1634_);
lean_inc(v_pLen_1633_);
v___x_1636_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_1632_, v___x_1632_, v_pLen_1633_, v___x_1634_);
lean_dec(v___x_1632_);
v___x_1637_ = lean_nat_add(v_pStart_1621_, v_pLen_1633_);
lean_dec(v_pLen_1633_);
lean_dec(v_pStart_1621_);
v___x_1638_ = l_List_drop___redArg(v___x_1637_, v_bs_1610_);
lean_dec(v_bs_1610_);
v___x_1639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1639_, 0, v___x_1636_);
lean_ctor_set(v___x_1639_, 1, v___x_1638_);
v___x_1640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1640_, 0, v___x_1635_);
lean_ctor_set(v___x_1640_, 1, v___x_1639_);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 0, v___x_1640_);
v___x_1642_ = v___x_1626_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v___x_1640_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
return v___x_1642_;
}
}
}
else
{
lean_object* v___x_1644_; 
lean_del_object(v___x_1626_);
lean_dec(v_val_1624_);
lean_dec(v_pStart_1621_);
lean_dec(v_sLen_1612_);
lean_dec(v_bs_1610_);
v___x_1644_ = lean_box(0);
return v___x_1644_;
}
}
}
}
}
else
{
lean_object* v___x_1646_; 
lean_dec(v_sLen_1612_);
lean_dec(v_bs_1610_);
v___x_1646_ = lean_box(0);
return v___x_1646_;
}
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__1(void){
_start:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; 
v___x_1648_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__0));
v___x_1649_ = l_String_toListImpl(v___x_1648_);
return v___x_1649_;
}
}
static lean_object* _init_lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__3(void){
_start:
{
lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1651_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__2));
v___x_1652_ = l_String_toListImpl(v___x_1651_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch(lean_object* v_bs_1654_, lean_object* v_toks_1655_){
_start:
{
if (lean_obj_tag(v_bs_1654_) == 1)
{
lean_object* v_head_1656_; lean_object* v_tail_1657_; lean_object* v___x_1658_; uint8_t v___x_1659_; 
v_head_1656_ = lean_ctor_get(v_bs_1654_, 0);
v_tail_1657_ = lean_ctor_get(v_bs_1654_, 1);
v___x_1658_ = lean_unsigned_to_nat(91u);
v___x_1659_ = lean_nat_dec_eq(v_head_1656_, v___x_1658_);
if (v___x_1659_ == 0)
{
lean_object* v___x_1660_; 
lean_dec_ref_known(v_bs_1654_, 2);
lean_dec(v_toks_1655_);
v___x_1660_ = lean_box(0);
return v___x_1660_;
}
else
{
lean_object* v___x_1661_; 
lean_inc(v_tail_1657_);
v___x_1661_ = lp_lean_x2dftml_LeanFtml_iwHead(v_tail_1657_);
if (lean_obj_tag(v___x_1661_) == 0)
{
lean_object* v___x_1662_; 
lean_dec_ref_known(v_bs_1654_, 2);
lean_dec(v_toks_1655_);
v___x_1662_ = lean_box(0);
return v___x_1662_;
}
else
{
lean_object* v_val_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1739_; 
v_val_1663_ = lean_ctor_get(v___x_1661_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1661_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1665_ = v___x_1661_;
v_isShared_1666_ = v_isSharedCheck_1739_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_val_1663_);
lean_dec(v___x_1661_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1739_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v_snd_1667_; lean_object* v_snd_1668_; 
v_snd_1667_ = lean_ctor_get(v_val_1663_, 1);
lean_inc(v_snd_1667_);
v_snd_1668_ = lean_ctor_get(v_snd_1667_, 1);
lean_inc(v_snd_1668_);
if (lean_obj_tag(v_snd_1668_) == 1)
{
lean_object* v_fst_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1736_; 
v_fst_1669_ = lean_ctor_get(v_val_1663_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v_val_1663_);
if (v_isSharedCheck_1736_ == 0)
{
lean_object* v_unused_1737_; 
v_unused_1737_ = lean_ctor_get(v_val_1663_, 1);
lean_dec(v_unused_1737_);
v___x_1671_ = v_val_1663_;
v_isShared_1672_ = v_isSharedCheck_1736_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_fst_1669_);
lean_dec(v_val_1663_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1736_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v_fst_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1734_; 
v_fst_1673_ = lean_ctor_get(v_snd_1667_, 0);
v_isSharedCheck_1734_ = !lean_is_exclusive(v_snd_1667_);
if (v_isSharedCheck_1734_ == 0)
{
lean_object* v_unused_1735_; 
v_unused_1735_ = lean_ctor_get(v_snd_1667_, 1);
lean_dec(v_unused_1735_);
v___x_1675_ = v_snd_1667_;
v_isShared_1676_ = v_isSharedCheck_1734_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_fst_1673_);
lean_dec(v_snd_1667_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1734_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v_head_1677_; lean_object* v_tail_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1733_; 
v_head_1677_ = lean_ctor_get(v_snd_1668_, 0);
v_tail_1678_ = lean_ctor_get(v_snd_1668_, 1);
v_isSharedCheck_1733_ = !lean_is_exclusive(v_snd_1668_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1680_ = v_snd_1668_;
v_isShared_1681_ = v_isSharedCheck_1733_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_tail_1678_);
lean_inc(v_head_1677_);
lean_dec(v_snd_1668_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1733_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1682_; uint8_t v___x_1683_; 
v___x_1682_ = lean_unsigned_to_nat(93u);
v___x_1683_ = lean_nat_dec_eq(v_head_1677_, v___x_1682_);
lean_dec(v_head_1677_);
if (v___x_1683_ == 0)
{
lean_object* v___x_1684_; 
lean_del_object(v___x_1680_);
lean_dec(v_tail_1678_);
lean_del_object(v___x_1675_);
lean_dec(v_fst_1673_);
lean_del_object(v___x_1671_);
lean_dec(v_fst_1669_);
lean_del_object(v___x_1665_);
lean_dec_ref_known(v_bs_1654_, 2);
lean_dec(v_toks_1655_);
v___x_1684_ = lean_box(0);
return v___x_1684_;
}
else
{
lean_object* v___x_1685_; uint8_t v___x_1686_; 
v___x_1685_ = lp_lean_x2dftml_LeanFtml_iwSiteTable;
v___x_1686_ = lp_lean_x2dftml_List_elem___at___00LeanFtml_divAuthoredNonEmpty_spec__0(v_fst_1669_, v___x_1685_);
if (v___x_1686_ == 0)
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1693_; 
lean_del_object(v___x_1680_);
lean_dec(v_fst_1673_);
lean_dec(v_fst_1669_);
v___x_1687_ = l_List_lengthTR___redArg(v_bs_1654_);
v___x_1688_ = l_List_lengthTR___redArg(v_tail_1678_);
v___x_1689_ = lean_nat_sub(v___x_1687_, v___x_1688_);
lean_dec(v___x_1688_);
lean_dec(v___x_1687_);
v___x_1690_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_runOf___closed__0));
lean_inc_ref(v_bs_1654_);
v___x_1691_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v_bs_1654_, v_bs_1654_, v___x_1689_, v___x_1690_);
lean_dec_ref_known(v_bs_1654_, 2);
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 1, v_toks_1655_);
lean_ctor_set(v___x_1675_, 0, v___x_1691_);
v___x_1693_ = v___x_1675_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v___x_1691_);
lean_ctor_set(v_reuseFailAlloc_1700_, 1, v_toks_1655_);
v___x_1693_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
lean_object* v___x_1695_; 
if (v_isShared_1672_ == 0)
{
lean_ctor_set(v___x_1671_, 1, v___x_1693_);
lean_ctor_set(v___x_1671_, 0, v_tail_1678_);
v___x_1695_ = v___x_1671_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_tail_1678_);
lean_ctor_set(v_reuseFailAlloc_1699_, 1, v___x_1693_);
v___x_1695_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
lean_object* v___x_1697_; 
if (v_isShared_1666_ == 0)
{
lean_ctor_set(v___x_1665_, 0, v___x_1695_);
v___x_1697_ = v___x_1665_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v___x_1695_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
}
}
else
{
lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1730_; 
v_isSharedCheck_1730_ = !lean_is_exclusive(v_bs_1654_);
if (v_isSharedCheck_1730_ == 0)
{
lean_object* v_unused_1731_; lean_object* v_unused_1732_; 
v_unused_1731_ = lean_ctor_get(v_bs_1654_, 1);
lean_dec(v_unused_1731_);
v_unused_1732_ = lean_ctor_get(v_bs_1654_, 0);
lean_dec(v_unused_1732_);
v___x_1702_ = v_bs_1654_;
v_isShared_1703_ = v_isSharedCheck_1730_;
goto v_resetjp_1701_;
}
else
{
lean_dec(v_bs_1654_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1730_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1707_; 
v___x_1704_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__1, &lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__1);
v___x_1705_ = lp_lean_x2dftml_LeanFtml_textVal(v_fst_1669_);
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 1, v___x_1705_);
lean_ctor_set(v___x_1675_, 0, v___x_1704_);
v___x_1707_ = v___x_1675_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v___x_1704_);
lean_ctor_set(v_reuseFailAlloc_1729_, 1, v___x_1705_);
v___x_1707_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1711_; 
v___x_1708_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__3, &lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__3);
v___x_1709_ = lp_lean_x2dftml_LeanFtml_textVal(v_fst_1673_);
lean_inc(v___x_1709_);
if (v_isShared_1672_ == 0)
{
lean_ctor_set(v___x_1671_, 1, v___x_1709_);
lean_ctor_set(v___x_1671_, 0, v___x_1708_);
v___x_1711_ = v___x_1671_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v___x_1708_);
lean_ctor_set(v_reuseFailAlloc_1728_, 1, v___x_1709_);
v___x_1711_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1716_; 
v___x_1712_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10);
v___x_1713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1712_);
lean_ctor_set(v___x_1713_, 1, v___x_1709_);
v___x_1714_ = lean_box(0);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v___x_1714_);
lean_ctor_set(v___x_1680_, 0, v___x_1713_);
v___x_1716_ = v___x_1680_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v___x_1713_);
lean_ctor_set(v_reuseFailAlloc_1727_, 1, v___x_1714_);
v___x_1716_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
lean_object* v___x_1718_; 
if (v_isShared_1703_ == 0)
{
lean_ctor_set(v___x_1702_, 1, v___x_1716_);
lean_ctor_set(v___x_1702_, 0, v___x_1711_);
v___x_1718_ = v___x_1702_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v___x_1711_);
lean_ctor_set(v_reuseFailAlloc_1726_, 1, v___x_1716_);
v___x_1718_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
lean_object* v_opts_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1724_; 
v_opts_1719_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_opts_1719_, 0, v___x_1707_);
lean_ctor_set(v_opts_1719_, 1, v___x_1718_);
v___x_1720_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__4));
v___x_1721_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_1720_, v_opts_1719_, v_toks_1655_);
v___x_1722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1722_, 0, v_tail_1678_);
lean_ctor_set(v___x_1722_, 1, v___x_1721_);
if (v_isShared_1666_ == 0)
{
lean_ctor_set(v___x_1665_, 0, v___x_1722_);
v___x_1724_ = v___x_1665_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v___x_1722_);
v___x_1724_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
return v___x_1724_;
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
else
{
lean_object* v___x_1738_; 
lean_dec(v_snd_1668_);
lean_dec(v_snd_1667_);
lean_del_object(v___x_1665_);
lean_dec(v_val_1663_);
lean_dec_ref_known(v_bs_1654_, 2);
lean_dec(v_toks_1655_);
v___x_1738_ = lean_box(0);
return v___x_1738_;
}
}
}
}
}
else
{
lean_object* v___x_1740_; 
lean_dec(v_toks_1655_);
lean_dec(v_bs_1654_);
v___x_1740_ = lean_box(0);
return v___x_1740_;
}
}
}
LEAN_EXPORT uint8_t lp_lean_x2dftml_LeanFtml_iwLabelB(lean_object* v_b_1741_){
_start:
{
lean_object* v___x_1742_; uint8_t v___x_1743_; 
v___x_1742_ = lean_unsigned_to_nat(93u);
v___x_1743_ = lean_nat_dec_eq(v_b_1741_, v___x_1742_);
if (v___x_1743_ == 0)
{
lean_object* v___x_1744_; uint8_t v___x_1745_; 
v___x_1744_ = lean_unsigned_to_nat(91u);
v___x_1745_ = lean_nat_dec_eq(v_b_1741_, v___x_1744_);
if (v___x_1745_ == 0)
{
lean_object* v___x_1746_; uint8_t v___x_1747_; 
v___x_1746_ = lean_unsigned_to_nat(10u);
v___x_1747_ = lean_nat_dec_eq(v_b_1741_, v___x_1746_);
if (v___x_1747_ == 0)
{
lean_object* v___x_1748_; uint8_t v___x_1749_; 
v___x_1748_ = lean_unsigned_to_nat(255u);
v___x_1749_ = lean_nat_dec_eq(v_b_1741_, v___x_1748_);
if (v___x_1749_ == 0)
{
uint8_t v___x_1750_; 
v___x_1750_ = 1;
return v___x_1750_;
}
else
{
return v___x_1747_;
}
}
else
{
return v___x_1745_;
}
}
else
{
return v___x_1743_;
}
}
else
{
uint8_t v___x_1751_; 
v___x_1751_ = 0;
return v___x_1751_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_iwLabelB___boxed(lean_object* v_b_1752_){
_start:
{
uint8_t v_res_1753_; lean_object* v_r_1754_; 
v_res_1753_ = lp_lean_x2dftml_LeanFtml_iwLabelB(v_b_1752_);
lean_dec(v_b_1752_);
v_r_1754_ = lean_box(v_res_1753_);
return v_r_1754_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_interwikiDescrMatch(lean_object* v_bs_1756_, lean_object* v_toks_1757_){
_start:
{
if (lean_obj_tag(v_bs_1756_) == 1)
{
lean_object* v_head_1758_; lean_object* v_tail_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1837_; 
v_head_1758_ = lean_ctor_get(v_bs_1756_, 0);
v_tail_1759_ = lean_ctor_get(v_bs_1756_, 1);
v_isSharedCheck_1837_ = !lean_is_exclusive(v_bs_1756_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1761_ = v_bs_1756_;
v_isShared_1762_ = v_isSharedCheck_1837_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_tail_1759_);
lean_inc(v_head_1758_);
lean_dec(v_bs_1756_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1837_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1763_; uint8_t v___x_1764_; 
v___x_1763_ = lean_unsigned_to_nat(91u);
v___x_1764_ = lean_nat_dec_eq(v_head_1758_, v___x_1763_);
lean_dec(v_head_1758_);
if (v___x_1764_ == 0)
{
lean_object* v___x_1765_; 
lean_del_object(v___x_1761_);
lean_dec(v_tail_1759_);
lean_dec(v_toks_1757_);
v___x_1765_ = lean_box(0);
return v___x_1765_;
}
else
{
lean_object* v___x_1766_; 
v___x_1766_ = lp_lean_x2dftml_LeanFtml_iwHead(v_tail_1759_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_object* v___x_1767_; 
lean_del_object(v___x_1761_);
lean_dec(v_toks_1757_);
v___x_1767_ = lean_box(0);
return v___x_1767_;
}
else
{
lean_object* v_val_1768_; lean_object* v_snd_1769_; lean_object* v_snd_1770_; 
v_val_1768_ = lean_ctor_get(v___x_1766_, 0);
lean_inc(v_val_1768_);
lean_dec_ref_known(v___x_1766_, 1);
v_snd_1769_ = lean_ctor_get(v_val_1768_, 1);
lean_inc(v_snd_1769_);
v_snd_1770_ = lean_ctor_get(v_snd_1769_, 1);
lean_inc(v_snd_1770_);
if (lean_obj_tag(v_snd_1770_) == 1)
{
lean_object* v_fst_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1834_; 
v_fst_1771_ = lean_ctor_get(v_val_1768_, 0);
v_isSharedCheck_1834_ = !lean_is_exclusive(v_val_1768_);
if (v_isSharedCheck_1834_ == 0)
{
lean_object* v_unused_1835_; 
v_unused_1835_ = lean_ctor_get(v_val_1768_, 1);
lean_dec(v_unused_1835_);
v___x_1773_ = v_val_1768_;
v_isShared_1774_ = v_isSharedCheck_1834_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_fst_1771_);
lean_dec(v_val_1768_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1834_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v_fst_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1832_; 
v_fst_1775_ = lean_ctor_get(v_snd_1769_, 0);
v_isSharedCheck_1832_ = !lean_is_exclusive(v_snd_1769_);
if (v_isSharedCheck_1832_ == 0)
{
lean_object* v_unused_1833_; 
v_unused_1833_ = lean_ctor_get(v_snd_1769_, 1);
lean_dec(v_unused_1833_);
v___x_1777_ = v_snd_1769_;
v_isShared_1778_ = v_isSharedCheck_1832_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_fst_1775_);
lean_dec(v_snd_1769_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1832_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v_head_1779_; lean_object* v_tail_1780_; lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1831_; 
v_head_1779_ = lean_ctor_get(v_snd_1770_, 0);
v_tail_1780_ = lean_ctor_get(v_snd_1770_, 1);
v_isSharedCheck_1831_ = !lean_is_exclusive(v_snd_1770_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1782_ = v_snd_1770_;
v_isShared_1783_ = v_isSharedCheck_1831_;
goto v_resetjp_1781_;
}
else
{
lean_inc(v_tail_1780_);
lean_inc(v_head_1779_);
lean_dec(v_snd_1770_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1831_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
lean_object* v___x_1784_; uint8_t v___x_1785_; 
v___x_1784_ = lean_unsigned_to_nat(32u);
v___x_1785_ = lean_nat_dec_eq(v_head_1779_, v___x_1784_);
lean_dec(v_head_1779_);
if (v___x_1785_ == 0)
{
lean_object* v___x_1786_; 
lean_del_object(v___x_1782_);
lean_dec(v_tail_1780_);
lean_del_object(v___x_1777_);
lean_dec(v_fst_1775_);
lean_del_object(v___x_1773_);
lean_dec(v_fst_1771_);
lean_del_object(v___x_1761_);
lean_dec(v_toks_1757_);
v___x_1786_ = lean_box(0);
return v___x_1786_;
}
else
{
lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1787_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiDescrMatch___closed__0));
v___x_1788_ = lp_lean_x2dftml_LeanFtml_descrTail(v___x_1787_, v_tail_1780_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v___x_1789_; 
lean_del_object(v___x_1782_);
lean_del_object(v___x_1777_);
lean_dec(v_fst_1775_);
lean_del_object(v___x_1773_);
lean_dec(v_fst_1771_);
lean_del_object(v___x_1761_);
lean_dec(v_toks_1757_);
v___x_1789_ = lean_box(0);
return v___x_1789_;
}
else
{
lean_object* v_val_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1830_; 
v_val_1790_ = lean_ctor_get(v___x_1788_, 0);
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1788_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1792_ = v___x_1788_;
v_isShared_1793_ = v_isSharedCheck_1830_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_val_1790_);
lean_dec(v___x_1788_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1830_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v_fst_1794_; lean_object* v_snd_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1829_; 
v_fst_1794_ = lean_ctor_get(v_val_1790_, 0);
v_snd_1795_ = lean_ctor_get(v_val_1790_, 1);
v_isSharedCheck_1829_ = !lean_is_exclusive(v_val_1790_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1797_ = v_val_1790_;
v_isShared_1798_ = v_isSharedCheck_1829_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_snd_1795_);
lean_inc(v_fst_1794_);
lean_dec(v_val_1790_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1829_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1803_; 
v___x_1799_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__1, &lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__1_once, _init_lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__1);
v___x_1800_ = lp_lean_x2dftml_LeanFtml_asciiLower(v_fst_1771_);
v___x_1801_ = lp_lean_x2dftml_LeanFtml_textVal(v___x_1800_);
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 1, v___x_1801_);
lean_ctor_set(v___x_1797_, 0, v___x_1799_);
v___x_1803_ = v___x_1797_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v___x_1799_);
lean_ctor_set(v_reuseFailAlloc_1828_, 1, v___x_1801_);
v___x_1803_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1807_; 
v___x_1804_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__3, &lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__3_once, _init_lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__3);
v___x_1805_ = lp_lean_x2dftml_LeanFtml_textVal(v_fst_1775_);
if (v_isShared_1778_ == 0)
{
lean_ctor_set(v___x_1777_, 1, v___x_1805_);
lean_ctor_set(v___x_1777_, 0, v___x_1804_);
v___x_1807_ = v___x_1777_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v___x_1804_);
lean_ctor_set(v_reuseFailAlloc_1827_, 1, v___x_1805_);
v___x_1807_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1811_; 
v___x_1808_ = lean_obj_once(&lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10, &lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10_once, _init_lp_lean_x2dftml_LeanFtml_urlInlineResult___closed__10);
v___x_1809_ = lp_lean_x2dftml_LeanFtml_textVal(v_fst_1794_);
if (v_isShared_1774_ == 0)
{
lean_ctor_set(v___x_1773_, 1, v___x_1809_);
lean_ctor_set(v___x_1773_, 0, v___x_1808_);
v___x_1811_ = v___x_1773_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v___x_1808_);
lean_ctor_set(v_reuseFailAlloc_1826_, 1, v___x_1809_);
v___x_1811_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
lean_object* v___x_1812_; lean_object* v___x_1814_; 
v___x_1812_ = lean_box(0);
if (v_isShared_1783_ == 0)
{
lean_ctor_set(v___x_1782_, 1, v___x_1812_);
lean_ctor_set(v___x_1782_, 0, v___x_1811_);
v___x_1814_ = v___x_1782_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v___x_1811_);
lean_ctor_set(v_reuseFailAlloc_1825_, 1, v___x_1812_);
v___x_1814_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
lean_object* v___x_1816_; 
if (v_isShared_1762_ == 0)
{
lean_ctor_set(v___x_1761_, 1, v___x_1814_);
lean_ctor_set(v___x_1761_, 0, v___x_1807_);
v___x_1816_ = v___x_1761_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1807_);
lean_ctor_set(v_reuseFailAlloc_1824_, 1, v___x_1814_);
v___x_1816_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
lean_object* v_opts_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1822_; 
v_opts_1817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_opts_1817_, 0, v___x_1803_);
lean_ctor_set(v_opts_1817_, 1, v___x_1816_);
v___x_1818_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiStandaloneMatch___closed__4));
v___x_1819_ = lp_lean_x2dftml_LeanFtml_claimTok(v___x_1818_, v_opts_1817_, v_toks_1757_);
v___x_1820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1820_, 0, v_snd_1795_);
lean_ctor_set(v___x_1820_, 1, v___x_1819_);
if (v_isShared_1793_ == 0)
{
lean_ctor_set(v___x_1792_, 0, v___x_1820_);
v___x_1822_ = v___x_1792_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v___x_1820_);
v___x_1822_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
return v___x_1822_;
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
else
{
lean_object* v___x_1836_; 
lean_dec(v_snd_1770_);
lean_dec(v_snd_1769_);
lean_dec(v_val_1768_);
lean_del_object(v___x_1761_);
lean_dec(v_toks_1757_);
v___x_1836_ = lean_box(0);
return v___x_1836_;
}
}
}
}
}
else
{
lean_object* v___x_1838_; 
lean_dec(v_toks_1757_);
lean_dec(v_bs_1756_);
v___x_1838_ = lean_box(0);
return v___x_1838_;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_interwikiRule___lam__0(lean_object* v_bs_1841_, lean_object* v_toks_1842_){
_start:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v_fst_1845_; lean_object* v_snd_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1843_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiRule___lam__0___closed__0));
v___x_1844_ = lp_lean_x2dftml_LeanFtml_pregScan(v___x_1843_, v_bs_1841_, v_toks_1842_);
v_fst_1845_ = lean_ctor_get(v___x_1844_, 0);
lean_inc(v_fst_1845_);
v_snd_1846_ = lean_ctor_get(v___x_1844_, 1);
lean_inc(v_snd_1846_);
lean_dec_ref(v___x_1844_);
v___x_1847_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiRule___lam__0___closed__1));
v___x_1848_ = lp_lean_x2dftml_LeanFtml_pregScan(v___x_1847_, v_fst_1845_, v_snd_1846_);
return v___x_1848_;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dftml_LeanFtml_interwikiRule(lean_object* v_st_1850_){
_start:
{
lean_object* v___f_1851_; lean_object* v___x_1852_; 
v___f_1851_ = ((lean_object*)(lp_lean_x2dftml_LeanFtml_interwikiRule___closed__0));
v___x_1852_ = lp_lean_x2dftml_LeanFtml_applyByteRule(v_st_1850_, v___f_1851_);
return v___x_1852_;
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
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dftml_LeanFtml_Inline1Rules(uint8_t builtin) {
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
lp_lean_x2dftml_LeanFtml_urlSchemeList = _init_lp_lean_x2dftml_LeanFtml_urlSchemeList();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_urlSchemeList);
lp_lean_x2dftml_LeanFtml_iwSiteTable = _init_lp_lean_x2dftml_LeanFtml_iwSiteTable();
lean_mark_persistent(lp_lean_x2dftml_LeanFtml_iwSiteTable);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
